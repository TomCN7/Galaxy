class CAbilProgress : public CAbil
{
    CAbilProgress_Cancelable;
    CAbilProgress_VitalStartFactor[];

    CAbilProgress_Activity;
};


class CAbilBuildable : public CAbilProgress
{
    CAbilBuildable_CmdButtonArray[];

    CAbilBuildable_MaxBuilders;
    CAbilBuildable_PowerBuildBonusRate;
    CAbilBuildable_PowerBuildCostFactor;
};

class CAbilMergeable : public CAbilProgress
{
    CAbilMergeable_CmdButtonArray[];
};

class CAbilWarpable : public CAbilProgress
{
    CAbilWarpable_CmdButtonArray[];
    CAbilWarpable_PowerUserBehavior;
};