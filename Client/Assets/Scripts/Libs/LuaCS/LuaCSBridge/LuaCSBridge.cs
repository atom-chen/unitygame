﻿using UnityEngine;
using LuaInterface;
using System;
using UnityEngine.UI;

namespace SDK.Lib
{
    /**
     * @brief 逻辑 Lua 和 CS 之间的交互，是以表为单位进行交互的，一定要注意表名正确，每一个表就是一个功能
     */
    public class LuaCSBridge
    {
        protected string m_luaFile;         // Lua 文件名字
        protected string m_tableName;       // 表的名字
        protected string m_funcName;        // 函数名字
        protected LuaTable m_luaTable;       // Lua 中的 Form
        protected LuaFunction m_luaFunc;    // lua 函数
        //protected LuaTable m_moduleEnv;   // 执行模块的环境

        /**
         * @brief 表的名字
         */
        public LuaCSBridge(string luaFile, string tableName, string funcName = "")
        {
            m_luaFile = luaFile;
            m_tableName = tableName;
            m_funcName = funcName;
        }

        virtual public void init()
        {
            if (!string.IsNullOrEmpty(m_luaFile))
            {
                //this.m_luaTable = this.DoFile(m_luaFile)[0] as LuaTable;        // 加载 lua 脚本
                m_luaTable = Ctx.m_instance.m_luaSystem.loadModule(m_luaFile);   // 加载 lua 脚本
            }
            else if(!string.IsNullOrEmpty(m_tableName))
            {
                m_luaTable = Ctx.m_instance.m_luaSystem.GetLuaTable(m_tableName);
            }
        }

        virtual public void dispose()
        {
            Util.ClearMemory();
            Ctx.m_instance.m_logSys.log(string.Format("~ {0} was destroy!", m_tableName));
        }

        public void setTable(LuaTable luaTable)
        {
            m_luaTable = luaTable;
        }

        public void setFunction(LuaFunction function)
        {
            m_luaFunc = function;
        }

        public void setFunctor(LuaTable luaTable, LuaFunction function)
        {
            m_luaTable = luaTable;
            m_luaFunc = function;
        }

        public bool isTableEqual(LuaTable luaTable)
        {
            return m_luaTable.Equals(luaTable);
        }

        public bool isFunctionEqual(LuaFunction luaFunction)
        {
            return m_luaFunc.Equals(luaFunction);
        }

        public bool isFunctorEqual(LuaTable luaTable, LuaFunction function)
        {
            return m_luaTable.Equals(luaTable) && m_luaFunc.Equals(function);
        }

        public bool isValid()
        {
            return m_luaTable != null || m_luaFunc != null;
        }

        /**
         * @brief 执行Lua方法
         * @param funcName_ 函数名字
         * @example CallMethod("OnClick");  CallMethod("OnClick", GameObject go_);
         * @example 表中需要这么写 TableName.FunctionName()
         */
        public object[] CallTableMethod(string funcName_, params object[] args)
        {
            string fullFuncName = "";   // 完全的有表的完全名字
            if (String.IsNullOrEmpty(m_tableName))  // 如果在 _G 表中
            {
                fullFuncName = funcName_;
            }
            else    // 在一个 _G 的一个表中
            {
                fullFuncName = m_tableName + "." + funcName_;
            }
            return Ctx.m_instance.m_luaSystem.CallLuaFunction(fullFuncName, args);
        }

        /**
         * @brief 调用类方法
         * @example 表中需要这么写 TableName:FunctionName()， 需要把这个表作为第二个参数传递进入，在 Lua 函数中就直接可以使用 self 了
         */
        virtual public object[] CallClassMethod(string funcName_, params object[] args)
        {
            string fullFuncName = "";               // 完全的有表的完全名字
            if (!String.IsNullOrEmpty(m_tableName))  // 如果在 _G 表中
            {
                fullFuncName = m_tableName + "." + funcName_;
                return Ctx.m_instance.m_luaSystem.CallLuaFunction(fullFuncName, m_luaTable, args);
            }
            else
            {
                LuaFunction luaFunc = m_luaTable["call"] as LuaFunction;
                if(luaFunc != null)
                {
                    luaFunc.Call(args);
                    luaFunc.Dispose();
                }
            }

            return null;
        }

        /**
         * @brief 获取 Lua 表中的数据
         * @param member_ 表中成员的名字
         */
        public object GetMember(string memberName_)
        {
            string fullMemberName = "";             // 有表前缀的成员的名字
            if (String.IsNullOrEmpty(m_tableName))  // 如果在 _G 表中
            {
                fullMemberName = memberName_;
            }
            else    // 在一个 _G 的一个表中
            {
                fullMemberName = m_tableName + "." + memberName_;
            }

            return Ctx.m_instance.m_luaSystem.lua[fullMemberName];
        }

        /**
         * @brief 强制调用 _G 中的函数
         */
        public object[] CallGlobalMethod(string funcName_, params object[] args)
        {
            return Ctx.m_instance.m_luaSystem.CallLuaFunction(funcName_, args);
        }

        /**
         * @brief 强制从 _G 中获取数据
         */
        public object GetGlobalMember(string memberName_)
        {
            return Ctx.m_instance.m_luaSystem.lua[memberName_];
        }

        // 获取一个表，然后转换成数组
        public string[] getTable2StrArray(string tableName)
        {
            string fullTableName = "";              // 有表前缀的成员名字
            if(String.IsNullOrEmpty(m_tableName))   // 如果在 _G 表中
            {
                fullTableName = tableName;
            }
            else        // 在一个 _G 的一个表中
            {
                fullTableName = m_tableName + "." + tableName;
            }

            LuaTable luaTable = Ctx.m_instance.m_luaSystem.GetLuaTable(fullTableName);
            string[] strArray = luaTable.ToArray<string>();
            return strArray;
        }

        // 获取一个表，然后转换成数组
        public int[] getTable2IntArray(string tableName)
        {
            string fullTableName = "";                      // 有表前缀的成员的名字
            if (String.IsNullOrEmpty(m_tableName))          // 如果在 _G 表中 
            {
                fullTableName = tableName;
            }
            else            // 在一个 _G 的一个表中
            {
                fullTableName = m_tableName + "." + tableName;
            }

            LuaTable luaTable = Ctx.m_instance.m_luaSystem.GetLuaTable(fullTableName);
            int[] strArray = luaTable.ToArray<int>();
            return strArray;
        }

        // 是否是系统属性
        protected bool bIsSystemAttr(string attrName)
        {
            // 这些属性是自己添加到 Lua 表中的，因此遍历的时候，如果有这些属性就不处理了
            if("ctor" == attrName ||
               "super" == attrName ||
               "dataType" == attrName ||
               "clsCode" == attrName ||
               "clsName" == attrName)
            {
                return true;
            }

            return false;
        }
    }
}