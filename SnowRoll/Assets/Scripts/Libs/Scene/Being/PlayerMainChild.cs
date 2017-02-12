﻿namespace SDK.Lib
{
    public class PlayerMainChild : PlayerChild
    {
        protected uint mLastMergedTime;    // 最后一次融合时间
        //protected bool mIsMerge;            // 是否正在融合
        protected uint mMergeThisId;        // 融合 Id
        //protected PlayerMainChild mMergeChild;  // 融合的 PlayerMainChild

        public PlayerMainChild(Player parentPlayer)
            : base(parentPlayer)
        {
            this.mTypeId = "PlayerMainChild";
            this.mEntityType = EntityType.ePlayerMainChild;
            this.mMovement = new PlayerMainChildMovement(this);
            this.mAttack = new PlayerMainChildAttack(this);
            this.mEntityUniqueId = Ctx.mInstance.mPlayerMgr.genChildNewStrId();

            this.setLastMergedTime();
            //this.mIsMerge = false;
        }

        override public void initRender()
        {
            if (!this.isPrefabPathValid())
            {
                this.setPrefabPath(Ctx.mInstance.mSnowBallCfg.getRandomBallSelfTex());
            }

            this.mRender = new PlayerMainChildRender(this);
            this.mRender.init();
        }

        protected override void onPreInit()
        {
            base.onPreInit();

            this.mMovement.init();
            this.mAttack.init();
        }

        public override void onTick(float delta)
        {
            // 如果是在融合阶段
            if (BeingSubState.eBSSMerge == this.getBeingSubState())
            {
                PlayerMainChild child = this.getMergeEntity();
                if (null != child)
                {
                    this.setDestPos(child.getPos(), false);
                }
                else
                {
                    this.dispose();
                    return;
                }
            }

            base.onTick(delta);
        }

        public void postUpdate()
        {
            if(this.mRender.isValid())
            {
                this.setRenderPos(this.mRender.getPos());
            }
        }

        public override void onDestroy()
        {
            base.onDestroy();

            Ctx.mInstance.mGlobalDelegate.mMainChildMassChangedDispatch.dispatchEvent(null);
        }

        override public void setBallRadius(float size, bool immScale = false, bool isCalcMass = false)
        {
            float curRadius = this.mBallRadius;

            base.setBallRadius(size, immScale, isCalcMass);

            if(0 != size && curRadius != this.mBallRadius && !UtilMath.isInvalidNum(size))
            {
                Ctx.mInstance.mGlobalDelegate.mMainChildMassChangedDispatch.dispatchEvent(this);
            }
        }

        override public void setBeingState(BeingState state)
        {
            base.setBeingState(state);

            if(BeingState.eBSBirth == this.mBeingState)
            {
                this.mMoveSpeedFactor = 5;
            }
            else
            {
                this.mMoveSpeedFactor = 1;
            }
        }

        public uint getLastMergedTime()
        {
            return this.mLastMergedTime;
        }

        // 自己当前是否在分裂目标点的后面
        public bool isBehindTargetPoint()
        {
            if (UtilMath.isABehindC(this.getPos(), this.mParentPlayer.getPos(), this.mParentPlayer.mPlayerSplitMerge.getTargetPoint()))
            {
                return true;
            }

            return false;
        }

        // 是否可以执行合并操作，能否合并只有一个冷却时间条件
        override public bool canMerge()
        {
            bool ret = false;
            ret = UtilLogic.canMerge(this.mLastMergedTime) &&
                  this.mBeingSubState != BeingSubState.eBSSContactMerge &&
                  this.mBeingSubState != BeingSubState.eBSSReqServerMerge &&
                  this.mBeingSubState != BeingSubState.eBSSMerge;

            float leftTime = UtilApi.getUTCSec() - this.mLastMergedTime;

            if (MacroDef.ENABLE_LOG)
            {
                Ctx.mInstance.mLogSys.log(string.Format("PlayerMainChild::canMerge, thisId = {0}, left time = {1}, total time = {2}, ret = {3}", this.getThisId(), leftTime, Ctx.mInstance.mSnowBallCfg.mMergeCoolTime, ret.ToString()), LogTypeId.eLogScene);
            }

            return ret;
        }

        override public bool canMergeWithOther(BeingEntity other)
        {
            bool ret = false;

            if(EntityType.ePlayerMainChild == other.getEntityType())
            {
                float bigRadius = 0;

                // 判断半径
                if (this.mBallRadius > other.getBallRadius())
                {
                    bigRadius = this.mBallRadius;
                }
                else
                {
                    bigRadius = other.getBallRadius();
                }

                // 判断中心点距离
                if (UtilMath.squaredDistance(this.mPos, other.getPos()) <= bigRadius * bigRadius)
                {
                    ret = true;
                }
            }

            return ret;
        }

        override public void mergeWithOther(BeingEntity bBeingEntity)
        {
            PlayerMainChild aChild = this;
            PlayerMainChild bChild = bBeingEntity as PlayerMainChild;

            if (aChild.getBallRadius() > bChild.getBallRadius())
            {
                aChild.setBallRadius(UtilMath.getNewRadiusByRadius(aChild.getBallRadius(), bChild.getBallRadius()));
                bChild.dispose();
            }
            else
            {
                bChild.setBallRadius(UtilMath.getNewRadiusByRadius(bChild.getBallRadius(), aChild.getBallRadius()));
                aChild.dispose();
            }
        }

        override public void addParentOrientChangedhandle()
        {
            (this.mMovement as PlayerMainChildMovement).addParentOrientChangedhandle();
        }

        override public void setLastMergedTime()
        {
            this.mLastMergedTime = UtilApi.getUTCSec();
        }

        // 接触跟随，但是不能融合
        override public void contactWithAndFollowButNotMerge(BeingEntity bBeing)
        {
            PlayerMainChild otherChild = bBeing as PlayerMainChild;
            if(null != otherChild)
            {
                UnityEngine.Quaternion quad = otherChild.getDestRotate();
                this.setNotMergeRotate(quad);
            }
        }

        //public void setIsMerge(bool value)
        //{
        //    this.mIsMerge = value;
        //}

        //public bool getIsMerge()
        //{
        //    return this.mIsMerge;
        //}

        public void setMergeEntity(PlayerMainChild entity)
        {
            this.mMergeThisId = entity.getThisId();
            //this.mMergeChild = entity;
        }

        public PlayerMainChild getMergeEntity()
        {
            //return this.mMergeChild;
            PlayerMainChild child = this.mParentPlayer.mPlayerSplitMerge.mPlayerChildMgr.getEntityByThisId(this.mMergeThisId) as PlayerMainChild;
            return child;
        }
    }
}