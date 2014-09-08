﻿using System;
using System.Threading;

namespace SDK.Lib
{
    /**
     *@brief 基本的线程 wrap
     */
    public class ThreadWrap
    {
        // 数据区域
        protected Thread m_thread;
        protected Action<object> m_cb;
        protected object m_param;        // 参数数据

        public ThreadWrap(Action<object> func, object param)
        {
            m_cb = func;
            m_param = param;
        }

        // 函数区域
        /**
         *@brief 开启一个线程
         */
        public void start()
        {
            m_thread = new Thread(new ThreadStart(threadHandle));
            m_thread.Start();
        }

        /**
         *@brief 线程回调函数
         */
        public void threadHandle()
        {
            if(m_cb != null)
            {
                m_cb(m_param);
            }
        }
    }
}