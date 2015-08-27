﻿using Game.Msg;

namespace SDK.Lib
{
    public class ImmeComAttackItem : ImmeAttackItemBase
    {
        protected uint m_attackEffectId; // 攻击特效id
        protected uint m_hurterId;       // 被击者 thisId
        protected float m_moveTime;      // 攻击的时候移动到攻击目标的时间

        public ImmeComAttackItem(EImmeAttackType attackType) :
            base(attackType)
        {
            m_moveTime = ImmeAttackItemBase.ComAttMoveTime;
        }

        public uint attackEffectId
        {
            get
            {
                return m_attackEffectId;
            }
            set
            {
                m_attackEffectId = value;
            }
        }

        public uint hurterId
        {
            get
            {
                return m_hurterId;
            }
            set
            {
                m_hurterId = value;
            }
        }

        public float moveTime
        {
            set
            {
                m_moveTime = value;
            }
        }

        override public uint getHurterId()
        {
            return m_hurterId;
        }

        override public void execAttack(BeingEntity being)
        {
            Ctx.m_instance.m_logSys.fightLog(string.Format("[Fight] 开始执行普通攻击 {0}", m_being.getDesc()));
            being.behaviorControl.execAttack(this);
        }

        override public void initItemData(BeingEntity att, BeingEntity def, stNotifyBattleCardPropertyUserCmd msg)
        {
            base.initItemData(att, def, msg);

            // 播放 Fly 数字，攻击者和被击者都有可能伤血，播放掉血数字
            // 普通攻击者掉血是被击者的伤血量
            m_bDamage = true;
            if (m_bDamage)        // 攻击力可能为 0 
            {
                m_damage = 11;
            }

            Ctx.m_instance.m_logSys.fightLog(string.Format("[Fight] 攻击者掉血 {0}", m_damage));

            m_hurterId = 11;
            m_attackEffectId = 0; // 普通攻击没有攻击特效
        }

        // 获取攻击移动到目标的时间
        override public float getMoveTime()
        {
            return m_moveTime;
        }
    }
}