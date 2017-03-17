﻿using SDK.Lib;

namespace Game.Msg
{
    public class stMainUserDataUserCmd : stDataUserCmd
    {
        public t_MainUserData data;

        public stMainUserDataUserCmd()
        {
            byParam = MAIN_USER_DATA_USERCMD_PARA;
        }

        public override void derialize(ByteBuffer bu)
        {
            base.derialize(bu);
            data = new t_MainUserData();
            data.derialize(bu);
        }
    }

    /// 主用户数据
    //const BYTE MAIN_USER_DATA_USERCMD_PARA = 2;
    //struct stMainUserDataUserCmd : public stDataUserCmd {
    //stMainUserDataUserCmd()
    //{
    //    byParam = MAIN_USER_DATA_USERCMD_PARA;
    //}

    //t_MainUserData data;
    //};
}