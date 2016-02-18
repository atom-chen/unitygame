require "MyLua.Libs.Core.GlobalNS"
require "MyLua.Libs.Core.Class"
require "MyLua.Libs.Core.GObject"
require "MyLua.Libs.Functor.CallFuncObjectFixParam"

-- MCoroutine 状态
local M
M = {};
M.clsName = "MCoroutineState";
GlobalNS[M.clsName] = M;

M.suspended = 0
M.running = 1
M.dead = 2


-- 携程
M = GlobalNS.Class(GlobalNS.GObject);
M.clsName = "MCoroutine";
GlobalNS[M.clsName] = M;

function M:ctor()
    self.m_funcObj = GlobalNS.new(GlobalNS.CallFuncObjectFixParam);
    self.m_handle = 0;
end

function M:create(pThis, func, param)
    -- 使用闭包保存 self，如果不使用闭包， self 就没地方保存
    local runInternal;
    runInternal = function()
        self:run();
    end
    
    self.m_funcObj:setPThisAndHandle(pThis, func, param);
    self.m_handle = coroutine.create(runInternal);
end

function M:resume()
    local status, value = coroutine.resume(self.m_handle)
    self:error(status, value);
end

function M:createAndResume(pThis, func, param)
    self:create(pThis, func, param);
    self:resume();
end

function M:status()
    return coroutine.status(self.m_handle);
end

function M:getStatus()
    local status = coroutine.status(self.m_handle);
    if("suspended" == status) then
        return GlobalNS.MCoroutineState.suspended;
    elseif("running" == status) then
        return GlobalNS.MCoroutineState.running;
    elseif("dead" == status) then
        return GlobalNS.MCoroutineState.dead;
    else
        return GlobalNS.MCoroutineState.dead;
    end
end

-- 是否是暂停状态
function M:isSuspended()
    local status = coroutine.status(self.m_handle);
    return status == "suspended";
end

-- 是否是运行状态
function M:isRunning()
    local status = coroutine.status(self.m_handle);
    return status == "running";
end

-- 是否是死亡状态
function M:isDead()
    local status = coroutine.status(self.m_handle);
    return status == "dead";
end

-- yield 只能内部调用，不能从外部调用
function M:yield()
    coroutine.yield()
end

function M:error(status, value)
    if not status then
        -- 获取当前堆栈信息
        value = debug.traceback(self.m_handle, value, 2);       -- 获取堆栈上第二层，将当前函数层去掉              
        error(value)              
    end
end

-- 这个是没有默认 self 的函数，因为 coroutine.create 只能传递一个参数，就是函数，因此只能这样做，需要在实例化的表中添加 run 这个属性
-- 使用闭包保存 self 后，run 就能传递 self 了
function M:run()
    self.m_funcObj:call();
end

-- 返回当前正在执行的协程，如果它被主线程调用的话，返回 null
function M:running()
    return coroutine.running();
end

return M;