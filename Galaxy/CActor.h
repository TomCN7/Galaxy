class CActor
{
    CActorKey CActor_Aliases[];
    CActorKey CActor_CopySouce;
    CFlags CActor_Filter[];
    CActor_FilterPlayers[];
    CFlags CActor_Flags[];
    EFogVisibility CActor_FogVisibility;
    EActorRequestCreateSharing  CActor_Sharing;

    TEditorCategories CActor_EditorCategories;
    CActor_EditorComment;
    CActor_EditorDescription;
    CActor_EditorPrefix;
    CActor_EditorSuffix;
    CActor_Name;

    CActorKey CActor_Macros[];
    CActorKey CActor_Terms;

    SActorRequest CActor_Supporter[];

    CActorHostedPropTransferFlags CActor_AcceptedHostedPropTransfers[];
    CActorTransferFlags CActor_AcceptedTransfers[];
    CFlags CActor_Inherits[];
    EActorHostedPropInheritType CActor_InheritType;
};

class CActorBase : public CActor
{
    SActorEvent CActorBase_On;
    SActorEvent CActorBase_Remove;
};

class CActorBearings : public CActorBase
{
    CActorBearings_AddToProximitySystem;
    CActorBearings_ScopeBearingsTracking;

    CActorBearings_Host[];
    CActorBearings_HostForProps[];
    CActorBearings_HostSiteOps[];
};

class CActorStateMonitor : public CActorBase
{
    CActorStateMonitor_StateArray[];
    CActorStateMonitor_StateThinkInterval;
};

class CActorPower : public CActorBase
{
    CActorPower_PowerSource;
    CActorPower_VisualArray[];
};

class CActorProgress : public CActorBase
{
    CActorProgress_StageArray[];
};

class CActorSetQueried : public CActorBase
{
    CActorSetQueried_SpawnTarget;

    CActorSetQueried_AttachQuery[];

    CActorSetQueried_Host[];
};

class CActorShieldImpact : public CActorBase
{
    CActorShieldImpact_MaxCountLarge;
    CActorShieldImpact_MaxCountMedium;
    CActorShieldImpact_MaxCountSmall;
    CActorShieldImpact_RadiusLarge;
    CActorShieldImpact_RadiusMedium;
    CActorShieldImpact_VisualDirectionalFacer;
    CActorShieldImpact_VisualDirectionHeader;
    CActorShieldImpact_VisualDirectionless;
};