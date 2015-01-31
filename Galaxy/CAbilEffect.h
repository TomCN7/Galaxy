class CAbilEffect : public CAbil
{
    CAbilEffect_Arc;
    CAbilEffect_ArcSlop;
    CAbilEffect_AutoCastAcquireLevel;
    CAbilEffect_AutoCastFilters;
    CAbilEffect_AutoCastRange;
    CAbilEffect_AutoCastValidatorArray[];
    CAbilEffect_CancelableArray[];
    CAbilEffect_IgnoreFilters;
    CAbilEffect_InheritAttackPriorityArray[];
    CAbilEffect_PauseableArray[];
    CAbilEffect_Placeholder;
    CAbilEffect_PreemptableArray[];
    CAbilEffect_ProducedUnitArray[];
    CAbilEffect_ProgressButtonArray[];
    CAbilEffect_RefundArray[];
    CAbilEffect_SmartPriority;
    CAbilEffect_SmartValidatorArray[];
    CAbilEffect_TargetFilters[];
    CAbilEffect_TargetSorts[];
    CAbilEffect_TrackingArc;
    CAbilEffect_UninterruptibleArray[];
    CAbilEffect_ValidatedArray[];

    CAbilEffect_LearnButtonImage[];
    CAbilEffect_LearnButtonName[];
    CAbilEffect_LearnButtonTooltip[];
    CAbilEffect_LearnButtonTooltipImage[];
    CAbilEffect_LearnButtonImage[];
    CAbilEffect_LearnButtonName[];
    CAbilEffect_LearnButtonTooltip[];
    CAbilEffect_LearnButtonTooltipImage[];

    CAbilEffect_CancelCost;
    CAbilEffect_Cost;
    CAbilEffect_RefundFraction;

    CAbilEffect_AINotifyEffect;
    CAbilEffect_CalldownEffect;
    CAbilEffect_CursorEffect[];
    CAbilEffect_Effect[];
    CAbilEffect_EffectRange[];
    CAbilEffect_Marker[];
    CAbilEffect_UseMarkerArray[];

    CAbilEffect_CastIntroTime[];
    CAbilEffect_CastOutroTime[];
    CAbilEffect_FinishTime[];
    CAbilEffect_Flags[];
    CAbilEffect_PrepTime[];
    CAbilEffect_Range[];
    CAbilEffect_RangeSlop[];

    CAbilEffect_Activity;
    CAbilEffect_AlertArray[];
    CAbilEffect_DefaultError;
    CAbilEffect_ErrorAlert;
    CAbilEffect_ShowProgressArray[];
};

class CAbilEffectInstant : public CAbilEffect
{
    CAbilEffectInstant_CmdButtonArray[];
};

class CAbilEffectTarget : public CAbilEffect
{
    CAbilEffectTarget_AcquireAttackers;
    CAbilEffectTarget_CmdButtonArray[];
    CAbilEffectTarget_FinishCommand;
    CAbilEffectTarget_PlaceUnit;

    CAbilEffectTarget_FollowRange;
};