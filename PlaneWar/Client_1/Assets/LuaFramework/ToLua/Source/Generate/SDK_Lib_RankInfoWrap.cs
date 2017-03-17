﻿//this source code was auto-generated by tolua#, do not modify it
using System;
using LuaInterface;

public class SDK_Lib_RankInfoWrap
{
	public static void Register(LuaState L)
	{
		L.BeginClass(typeof(SDK.Lib.RankInfo), null);
		L.RegFunction("New", _CreateSDK_Lib_RankInfo);
		L.RegFunction("__tostring", ToLua.op_ToString);
		L.RegVar("rank", get_rank, set_rank);
		L.RegVar("eid", get_eid, set_eid);
		L.RegVar("name", get_name, set_name);
		L.RegVar("radius", get_radius, set_radius);
		L.RegVar("swallownum", get_swallownum, set_swallownum);
		L.RegVar("avatarindex", get_avatarindex, set_avatarindex);
		L.EndClass();
	}

	[MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
	static int _CreateSDK_Lib_RankInfo(IntPtr L)
	{
		try
		{
			int count = LuaDLL.lua_gettop(L);

			if (count == 6)
			{
				int arg0 = (int)LuaDLL.luaL_checknumber(L, 1);
				uint arg1 = (uint)LuaDLL.luaL_checknumber(L, 2);
				string arg2 = ToLua.CheckString(L, 3);
				float arg3 = (float)LuaDLL.luaL_checknumber(L, 4);
				uint arg4 = (uint)LuaDLL.luaL_checknumber(L, 5);
				byte arg5 = (byte)LuaDLL.luaL_checknumber(L, 6);
				SDK.Lib.RankInfo obj = new SDK.Lib.RankInfo(arg0, arg1, arg2, arg3, arg4, arg5);
				ToLua.PushValue(L, obj);
				return 1;
			}
			else if (count == 0)
			{
				SDK.Lib.RankInfo obj = new SDK.Lib.RankInfo();
				ToLua.PushValue(L, obj);
				return 1;
			}
			else
			{
				return LuaDLL.luaL_throw(L, "invalid arguments to ctor method: SDK.Lib.RankInfo.New");
			}
		}
		catch(Exception e)
		{
			return LuaDLL.toluaL_exception(L, e);
		}
	}

	[MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
	static int get_rank(IntPtr L)
	{
		object o = null;

		try
		{
			o = ToLua.ToObject(L, 1);
			SDK.Lib.RankInfo obj = (SDK.Lib.RankInfo)o;
			int ret = obj.rank;
			LuaDLL.lua_pushinteger(L, ret);
			return 1;
		}
		catch(Exception e)
		{
			return LuaDLL.toluaL_exception(L, e, o == null ? "attempt to index rank on a nil value" : e.Message);
		}
	}

	[MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
	static int get_eid(IntPtr L)
	{
		object o = null;

		try
		{
			o = ToLua.ToObject(L, 1);
			SDK.Lib.RankInfo obj = (SDK.Lib.RankInfo)o;
			uint ret = obj.eid;
			LuaDLL.lua_pushnumber(L, ret);
			return 1;
		}
		catch(Exception e)
		{
			return LuaDLL.toluaL_exception(L, e, o == null ? "attempt to index eid on a nil value" : e.Message);
		}
	}

	[MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
	static int get_name(IntPtr L)
	{
		object o = null;

		try
		{
			o = ToLua.ToObject(L, 1);
			SDK.Lib.RankInfo obj = (SDK.Lib.RankInfo)o;
			string ret = obj.name;
			LuaDLL.lua_pushstring(L, ret);
			return 1;
		}
		catch(Exception e)
		{
			return LuaDLL.toluaL_exception(L, e, o == null ? "attempt to index name on a nil value" : e.Message);
		}
	}

	[MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
	static int get_radius(IntPtr L)
	{
		object o = null;

		try
		{
			o = ToLua.ToObject(L, 1);
			SDK.Lib.RankInfo obj = (SDK.Lib.RankInfo)o;
			float ret = obj.radius;
			LuaDLL.lua_pushnumber(L, ret);
			return 1;
		}
		catch(Exception e)
		{
			return LuaDLL.toluaL_exception(L, e, o == null ? "attempt to index radius on a nil value" : e.Message);
		}
	}

	[MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
	static int get_swallownum(IntPtr L)
	{
		object o = null;

		try
		{
			o = ToLua.ToObject(L, 1);
			SDK.Lib.RankInfo obj = (SDK.Lib.RankInfo)o;
			uint ret = obj.swallownum;
			LuaDLL.lua_pushnumber(L, ret);
			return 1;
		}
		catch(Exception e)
		{
			return LuaDLL.toluaL_exception(L, e, o == null ? "attempt to index swallownum on a nil value" : e.Message);
		}
	}

	[MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
	static int get_avatarindex(IntPtr L)
	{
		object o = null;

		try
		{
			o = ToLua.ToObject(L, 1);
			SDK.Lib.RankInfo obj = (SDK.Lib.RankInfo)o;
			byte ret = obj.avatarindex;
			LuaDLL.lua_pushnumber(L, ret);
			return 1;
		}
		catch(Exception e)
		{
			return LuaDLL.toluaL_exception(L, e, o == null ? "attempt to index avatarindex on a nil value" : e.Message);
		}
	}

	[MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
	static int set_rank(IntPtr L)
	{
		object o = null;

		try
		{
			o = ToLua.ToObject(L, 1);
			SDK.Lib.RankInfo obj = (SDK.Lib.RankInfo)o;
			int arg0 = (int)LuaDLL.luaL_checknumber(L, 2);
			obj.rank = arg0;
			ToLua.SetBack(L, 1, obj);
			return 0;
		}
		catch(Exception e)
		{
			return LuaDLL.toluaL_exception(L, e, o == null ? "attempt to index rank on a nil value" : e.Message);
		}
	}

	[MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
	static int set_eid(IntPtr L)
	{
		object o = null;

		try
		{
			o = ToLua.ToObject(L, 1);
			SDK.Lib.RankInfo obj = (SDK.Lib.RankInfo)o;
			uint arg0 = (uint)LuaDLL.luaL_checknumber(L, 2);
			obj.eid = arg0;
			ToLua.SetBack(L, 1, obj);
			return 0;
		}
		catch(Exception e)
		{
			return LuaDLL.toluaL_exception(L, e, o == null ? "attempt to index eid on a nil value" : e.Message);
		}
	}

	[MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
	static int set_name(IntPtr L)
	{
		object o = null;

		try
		{
			o = ToLua.ToObject(L, 1);
			SDK.Lib.RankInfo obj = (SDK.Lib.RankInfo)o;
			string arg0 = ToLua.CheckString(L, 2);
			obj.name = arg0;
			ToLua.SetBack(L, 1, obj);
			return 0;
		}
		catch(Exception e)
		{
			return LuaDLL.toluaL_exception(L, e, o == null ? "attempt to index name on a nil value" : e.Message);
		}
	}

	[MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
	static int set_radius(IntPtr L)
	{
		object o = null;

		try
		{
			o = ToLua.ToObject(L, 1);
			SDK.Lib.RankInfo obj = (SDK.Lib.RankInfo)o;
			float arg0 = (float)LuaDLL.luaL_checknumber(L, 2);
			obj.radius = arg0;
			ToLua.SetBack(L, 1, obj);
			return 0;
		}
		catch(Exception e)
		{
			return LuaDLL.toluaL_exception(L, e, o == null ? "attempt to index radius on a nil value" : e.Message);
		}
	}

	[MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
	static int set_swallownum(IntPtr L)
	{
		object o = null;

		try
		{
			o = ToLua.ToObject(L, 1);
			SDK.Lib.RankInfo obj = (SDK.Lib.RankInfo)o;
			uint arg0 = (uint)LuaDLL.luaL_checknumber(L, 2);
			obj.swallownum = arg0;
			ToLua.SetBack(L, 1, obj);
			return 0;
		}
		catch(Exception e)
		{
			return LuaDLL.toluaL_exception(L, e, o == null ? "attempt to index swallownum on a nil value" : e.Message);
		}
	}

	[MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
	static int set_avatarindex(IntPtr L)
	{
		object o = null;

		try
		{
			o = ToLua.ToObject(L, 1);
			SDK.Lib.RankInfo obj = (SDK.Lib.RankInfo)o;
			byte arg0 = (byte)LuaDLL.luaL_checknumber(L, 2);
			obj.avatarindex = arg0;
			ToLua.SetBack(L, 1, obj);
			return 0;
		}
		catch(Exception e)
		{
			return LuaDLL.toluaL_exception(L, e, o == null ? "attempt to index avatarindex on a nil value" : e.Message);
		}
	}
}

