﻿using SDK.Common;

namespace Game.Msg
{
    public class stLoginSelectSuccessUserCmd : stSelectUserCmd
    {
        public uint dwServerTimestamp;

        public stLoginSelectSuccessUserCmd()
        {
            byParam = LOGIN_SELECT_SUCCESS_USERCMD_PARA;
        }

        public override void derialize(IByteArray ba)
        {
            base.derialize(ba);
            dwServerTimestamp = ba.readUnsignedInt();
        }
    }
}


//const BYTE LOGIN_SELECT_SUCCESS_USERCMD_PARA = 14;
//struct stLoginSelectSuccessUserCmd : public stSelectUserCmd
//{
//    DWORD dwServerTimestamp;
//    stLoginSelectSuccessUserCmd()
//    {
//    byParam = LOGIN_SELECT_SUCCESS_USERCMD_PARA;
//    dwServerTimestamp = time(NULL);
//    }
//};