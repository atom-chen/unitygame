MLoader("MyLua.Libs.Core.GlobalNS");
MLoader("MyLua.Libs.Core.Class");
MLoader("MyLua.Libs.Core.GObject");

MLoader("MyLua.UI.UIShareMoney.ShareMoneyNS");

--数据区
local M = GlobalNS.Class(GlobalNS.GObject);
M.clsName = "ShareMoneyData";
GlobalNS.ShareMoneyNS[M.clsName] = M;

function M:ctor()
	
end

function M:dtor()
	
end

return M;