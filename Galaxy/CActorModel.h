class CActorModel : public CActorBearings
{
    CActorModel_LocalOffsetFor2ndVisibilityTest;
    CActorModel_ProximityPosition;

    CActorModel_AnimBlendTime;
    CActorModel_AutoScaleFactor;
    CActorModel_AutoScaleFromSelectionFactor;
    CActorModel_CreepHeightClass;
    CActorModel_CreepRateGrow;
    CActorModel_CreepRateShrink;

    CActorModel_Model;
    CActorModel_ModelFlags[];
    CActorModel_Scale;

    CActorModel_EventDataFootprint[];
    CActorModel_EventDataFootprintActor;
    CActorModel_EventDataSound[];
    CActorModel_EventDataSoundActor;

    CActorModel_HostedAttaches[];
    CActorModel_PhysicsImpactDefault[];
    CActorModel_PhysicsImpacts[];
};

class CActorBeamStandard : public CActorModel
{
    CActorBeamStandard_Beam;

    CActorBeam_HostImpact[];
    CActorBeam_HostImpactSiteOps[];
    CActorBeam_HostLaunch[];
    CActorBeam_HostLuanchSiteOps[];
};

class CActorDoodad : public CActorModel
{
    CActorDoodad_BoostedCliffLevel;
    CActorDoodad_BoostedHeight[];
    CActorDoodad_DoodadFlags[];
    CActorDoodad_Footprint;
    CActorDoodad_NoFlyZoneHardRadius;
    CActorDoodad_NoFlyZoneSoftRadius;
    CActorDoodad_TexSets[];

    CActorDoodad_Facing;
    CActorDoodad_MinimapColor;
    CActorDoodad_MinimapIcon;
    CActorDoodad_MinimapImage;
    CActorDoodad_MinimapRenderPriority;
    CActorDoodad_MinimapShape;
    CActorDoodad_MinimapSize;

    CActorDoodad_OccludeHeight;
    CActorDoodad_Radius;
    CActorDoodad_RandomScaleRange;
    CActorDoodad_VisibleOpacity;
    CActorDoodad_VisibleOpacityBlendDuration;

    CActorDoodad_EditorAnim;
    CActorDoodad_EditorFacingAlignment;
    CActorDoodad_EditorFlags[];
    CActorDoodad_EditorIcon;
    CActorDoodad_EditorModel;
};

class CActorPortrait : public CActorModel
{

};

class CActorShield : public CActorModel
{

};

class CActorSnapshot : public CActorModel
{

};

class CActorUnit : public CActorModel
{

};

class CActorMissile : public CActorUnit
{

};


CActorRange
    CActorRegion
    CActorRegionCircle
    CActorRegionCombine
    CActorRegionGame
    CActorRegionPolygon
    CActorRegionQuad
    CActorRegionWater
    CActorSite
    CActorSiteBillboard
    CActorSiteMover
    CActorSiteRocker
    CActorSiteOp
    CActorSiteOpBase
    CActorSiteOp2DRotation
    CActorSiteOpAction
    CActorSiteOpAttach
    CActorSiteOpAttachVolume
    CActorSiteOpBanker
    CActorSiteOpBankerUnit
    CActorSiteOpBasic
    CActorSiteOpEffect
    CActorSiteOpForward
    CActorSiteOpHeight
    CActorSiteOpHostBearings
    CActorSiteOpLocalOffset
    CActorSiteOpPatch
    CActorSiteOpRandomPointInCircle
    CActorSiteOpRotationExplicit
    CActorSiteOpRotationVariancer
    CActorSiteOpRotationSmooth
    CActorSiteOpSelectionOffset
    CActorSiteOpShadow
    CActorSiteOpTipability
    CActorSiteOpUp
    CActorSound
    CActorSplat
    CActorSelection
    CActorShadow
    CActorFoliageFXSpawner
    CActorSquib
    CActorTerrainDeformer
    CActorText
    CActorTurret