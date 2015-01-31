class CAbilQueueable : public CAbil
{
    CAbilQueueable_RefundFraction;

    CAbilQueueable_Activity;
    CAbilQueueable_ErrorAlert;
};

class CAbilLearn : public CAbilQueueable
{
    CAbilLearn_InfoArray[];
    CAbilLearn_Points;
    CAbilLearn_PointsPerLevel;

    CAbilLearn_Flags[];
};

class CAbilResearch : public CAbilQueueable
{
    CAbilResearch_InfoArray[];

    CAbilResearch_Flags[];
};

class CAbilTrain : public CAbilQueueable
{
    CAbilTrain_DeathTypeOnCancel;
    CAbilTrain_DeathTypeOnFinish;
    CAbilTrain_InfoArray[];
    CAbilTrain_MorphUnit;
    CAbilTrain_Offset[];
    CAbilTrain_ProxyOffset[];
    CAbilTrain_ProxyUnit;

    CAbilTrain_Flags[];
    CAbilTrain_Range;

    CAbilTrain_ActorKey;
    CAbilTrain_Alert;
};

class CAbilSpecialize : public CAbilQueueable
{
    CAbilSpecialize_InfoArray[];
    CAbilSpecialize_MaxCount;

    CAbilSpecialize_Flags[];

    CAbilSpecialize_Alert;
};

class CAbilRevive : public CAbilQueueable
{
    CAbilRevive_BaseInfo[];
    CAbilRevive_BaseUnitCostFactor[];
    CAbilRevive_CmdButtonArray[];
    CAbilRevive_LevelInfo[];
    CAbilRevive_LevelunitCostFactor[];
    CAbilRevive_NameOverride;
    CAbilRevive_Offset[];
    CAbilRevive_ReplaceDeathType;
    CAbilRevive_ReplaceFilters;
    CAbilRevive_SelfReviveCmd;
    CAbilRevive_TargetType;
    CAbilRevive_ValidatorArray[];
    CAbilRevive_VitalArray[];

    CAbilRevive_Effect;

    CAbilRevive_Flags[];
    CAbilRevive_Range;

    CAbilRevive_ActorKey;
    CAbilRevive_Alert;
};

class CAbilArmMagazine : public CAbilQueueable
{
    CAbilArmMagazine_InfoArray[];
    CAbilArmMagazine_Launch;
    CAbilArmMagazine_Leash;
    CAbilArmMagazine_MaxCount;
    CAbilArmMagazine_ReturnLifeFraction;

    CAbilArmMagazine_ExternalAngle[];

    CAbilArmMagazine_CalldownEffect;
    CAbilArmMagazine_EffectArray[];

    CAbilArmMagazine_Flags;

    CAbilArmMagazine_Alert;
};