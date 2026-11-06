-------- EventFlow: Dm_WaterTemple_0021 --------

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataInt', 'EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveCameraAnimationInstructionsForFlowchart', 'EventMoveToTargetPosCamera', 'EventTriggerSendKeepStateMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: Dm_Locator[0]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot']
queries: []
params: {'EventMemberCreateMethod': 1, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: ['EventGoOffstageForUser', 'EventTriggerPlayerResetMaxFloatBuoyancyAccelGravityUnit', 'EventPlayerTurnAndLook', 'EventPlayerPlayASForFlowchart', 'EventTriggerPlayerRequestLookAtTheFrontLock', 'EventPlayerWarpToTargetActor', 'EventTriggerPlayerLookAtObject', 'EventTriggerSetModelLodManual', 'EventPlayerWarpToStarterLinkAnchor']
queries: ['EventQueryPlayerIsEquipArmor']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait', 'EventTriggerSkipEnd', 'EventTriggerSkipAcceptStart']
queries: ['EventQueryIsEventSkipedMostRecent']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: PostProcessingActor
entrypoint: None()
actions: ['EventSetAdvancedDoFForFlowchart', 'EventNorifyCutChangeForGraphics', 'EventOverwriteSceneShadingParams']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerSoundReadRiddle']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventGoOffstageForUser', 'EventNaviFollowPlayer', 'EventWarpToTargetActor', 'EventPlayAS', 'EventNaviWarpToPlayerHomePosition']
queries: ['EventQueryNaviHomePositionOffsetType']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: Dm_Locator
entrypoint: None()
actions: ['EventTriggerEmitXLink', 'EventWarpToTargetPosAndRot', 'EventTriggerXLinkFadeByKey']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 1}

Actor: UISystemActor
entrypoint: None()
actions: ['EventEventFadeIn']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[ESA2]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[ESA1]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: DevelopEventSystemActor[CutNumber]
entrypoint: None()
actions: ['EventDemoProductSupportComment']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor[vibration]
entrypoint: None()
actions: ['EventTriggerControllerRumble']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Dm_Locator[CP]
entrypoint: None()
actions: ['EventWarpToTargetActor']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 1}

Actor: Dm_Locator[TrueCP]
entrypoint: None()
actions: ['EventWarpToTargetActor']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 1}

Actor: GameSystemActor[GSA2]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void EntryPoint0() {
    Player_Event.EventTriggerPlayerResetMaxFloatBuoyancyAccelGravityUnit()
    Player_Event.EventTriggerSetModelLodManual({'LodLevel': 1})
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HavePlayedEvent.Dm_WaterTemple_0021'}) {
        EventSystemActor.EventTriggerSkipAcceptStart({'SpecialEventActionType': 3})
    }

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': '0', 'PosVector': [4.5, 2.200000047683716, -0.009999999776482582], 'AtVector': [3.0899999141693115, 2.180000066757202, -0.009999999776482582], 'TargetFovy': 25.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': '0', 'PosVector': [5.909999847412109, 2.2200000286102295, -0.009999999776482582], 'AtVector': [3.0899999141693115, 2.180000066757202, -0.009999999776482582], 'TargetFovy': 25.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 150, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        Dm_Locator[0].EventWarpToTargetPosAndRot({'YAngle': 0.0, 'Position': [-7.269999980926514, 107.83999633789062, -4.489999771118164], 'IsWaitEnd': True, 'ClothWarpMode': -1})
        Dm_Locator[CP].EventWarpToTargetActor({'IsWaitEnd': True, 'YAngle': 0.0, 'ClothWarpMode': -1, 'TargetActorKind': 1, 'ActorName': 'Player_Event', 'InstanceName': '', 'OffsetBase': 0, 'PositionOffset': [0.0, 0.0, 0.0]})
        Dm_Locator[TrueCP].EventWarpToTargetActor({'IsWaitEnd': True, 'ClothWarpMode': -1, 'TargetActorKind': 1, 'OffsetBase': 0, 'PositionOffset': [0.0, 0.0, 0.0], 'ActorName': 'Dm_Locator', 'InstanceName': 'CP', 'YAngle': -90.06733703613281})
    } {
        Player_Event.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        Npc_Navi.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'StartDistance': 0.0, 'EndDistance': 0.0, 'StartFNumber': 0.0, 'EndFNumber': 0.0, 'StartBluarLevel': 0.0, 'EndBluarLevel': 0.0, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        DevelopEventSystemActor[CutNumber].EventDemoProductSupportComment({'IsWaitEnd': False, 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 150, 'BgAlignW': 0, 'BgAlignH': 0, 'Text1': 'C01', 'Text2': ''})
    }


    fork {
        EventSystemActor[ESA1].EventWait({'IsWaitEnd': True, 'Frames': 35})
        GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'GameDataName': 'WaterTemple_Room00_WaterLevel', 'Value': 1})

        fork {
            GameSystemActor[vibration].EventTriggerControllerRumble({'RumbleCall': 'Demo_Middle_Dohoon', 'Length': 0.0})
        } {
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'WaterTemple_WaterLevelChange01', 'Value': False, 'Index': -1})
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'WaterTemple_WaterLevelChange02', 'Value': True, 'Index': -1})
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'WaterTemple_WaterLevelChange03', 'Value': False, 'Index': -1})
        }

    } {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'RootType': 3, 'TargetActorName': 'Dm_Locator', 'TargetActorInstanceName': '0', 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'CalcUpInInterpolate': False, 'OverwriteStartFrame': -1.0, 'InterpolateFrame': -1.0, 'SceneName': 'C01-0'})
    } {
        Dm_Locator[0].EventWarpToTargetPosAndRot({'YAngle': 0.0, 'Position': [-7.269999980926514, 107.83999633789062, -4.489999771118164], 'IsWaitEnd': True, 'ClothWarpMode': -1})
    } {
        if !EventSystemActor.EventQueryIsEventSkipedMostRecent() {
            Player_Event.EventPlayerWarpToTargetActor({'OffsetBase': 0, 'IsWaitEnd': True, 'TargetActorKind': 1, 'ActorName': 'Dm_Locator', 'InstanceName': 'CP', 'PositionOffset': [0.0, 0.0, 0.0], 'ASCommand': 'Wait', 'UseDemoWait': True, 'YAngle': 90.0})
        } else {
            Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'ASCommand': 'Wait', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
            Player_Event.EventTriggerPlayerLookAtObject({'Target': 0, 'TurnFaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'WorldPos': [12.779999732971191, 111.5, -4.599999904632568]})
            EventSystemActor[ESA2].EventWait({'IsWaitEnd': True, 'Frames': 150})
            Player_Event.EventPlayerTurnAndLook({'Target': 0, 'TurnFaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'WorldPos': [12.779999732971191, 111.5, -4.599999904632568], 'IsWaitEnd': True, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'UseNormalTurn': False, 'SlowTurn': True, 'IsDoNavi': False})
            Player_Event.EventTriggerPlayerRequestLookAtTheFrontLock({'IsImmediate': False})
        }
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'StartDistance': 0.0, 'EndDistance': 0.0, 'StartFNumber': 0.0, 'EndFNumber': 0.0, 'StartBluarLevel': 0.0, 'EndBluarLevel': 0.0, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        GameSystemActor[GSA2].EventWait({'IsWaitEnd': True, 'Frames': 290})
        SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 0})
    } {
        Dm_Locator.EventWarpToTargetPosAndRot({'Position': [-1.5499999523162842, 99.94999694824219, -4.5], 'IsWaitEnd': True, 'YAngle': 0.0, 'ClothWarpMode': -1})
        Dm_Locator.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_WaterTemple_0021_Bubble_First'})
        Dm_Locator.EventTriggerEmitXLink({'ELinkKey': 'Dm_WaterTemple_0021_Bubble_Second', 'SLinkKey': ''})
        Dm_Locator.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_WaterTemple_0021_Bubble_Env'})
    } {
        if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 2, 'ArmorName': 'Armor_Adult_HeavyBoot'}) {
            Npc_Navi.EventNaviFollowPlayer({'IsWaitEnd': False, 'Speed': -1.0, 'OffsetType': -1, 'IsHomePosition': True, 'IsNearOffset': True, 'offset': [0.0, 0.0, 0.0]})
        } else
        switch Npc_Navi.EventQueryNaviHomePositionOffsetType() {
          case [0, 1, 3]:
            Npc_Navi.EventNaviFollowPlayer({'IsWaitEnd': False, 'Speed': -1.0, 'IsHomePosition': False, 'IsNearOffset': False, 'OffsetType': -1, 'offset': [0.4300000071525574, 0.5149999856948853, -0.23000000417232513]})
          case 2:
            Npc_Navi.EventNaviFollowPlayer({'Speed': -1.0, 'IsNearOffset': False, 'OffsetType': -1, 'IsWaitEnd': False, 'IsHomePosition': False, 'offset': [-0.4300000071525574, 0.5149999856948853, -0.23000000417232513]})
        }
    } {
        DevelopEventSystemActor[CutNumber].EventDemoProductSupportComment({'IsWaitEnd': False, 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 150, 'BgAlignW': 0, 'BgAlignH': 0, 'Text2': '', 'Text1': 'C02'})
    }

    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HavePlayedEvent.Dm_WaterTemple_0021'}) {
        EventSystemActor.EventTriggerSkipEnd({'SpecialEventActionType': 4, 'FadeInType': 2})
    }

    call WarpWaterIfSkip_2F()

}

void WarpWaterIfSkip_2F() {
    Player_Event.EventTriggerPlayerRequestLookAtTheFrontLock({'IsImmediate': True})
    if !EventSystemActor.EventQueryIsEventSkipedMostRecent() {
        if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 2, 'ArmorName': 'Armor_Adult_HeavyBoot'}) {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 2})

            fork {
                Player_Event.EventTriggerPlayerRequestLookAtTheFrontLock({'IsImmediate': True})
                Player_Event.EventPlayerWarpToTargetActor({'OffsetBase': 0, 'IsWaitEnd': True, 'TargetActorKind': 1, 'ActorName': 'Dm_Locator', 'InstanceName': 'CP', 'ASCommand': 'Wait', 'UseDemoWait': True, 'YAngle': 90.0, 'PositionOffset': [0.0, 0.0, 0.0]})
                Npc_Navi.EventPlayAS({'IsWaitEnd': False, 'ASName': 'Wait', 'ForceFadeInFrame': 0.0, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False})
                Npc_Navi.EventNaviWarpToPlayerHomePosition({'IsNearOffset': True, 'IsWaitEnd': True, 'Type': -1, 'IsDisguisedPlayerPos': False, 'Target': 0, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'OffsetBase': 0, 'PosOffset': [0.0, 0.0, 0.0], 'YAngle': 0.0})
            } {
                EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'TrueCP', 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'PosVector': [0.0, 1.7200000286102295, -3.5], 'AtVector': [0.03999999910593033, 1.4199999570846558, 0.05000000074505806], 'IsEnableRevertFast': False})
                EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'ChangeToManualModeAfterEvent': True, 'KeepManualModeFrame': 400.0, 'IsKeepWithRelativePos': False, 'AfterKeepEndInterpolateCountScale': 4.0})
            } {

                call SkipCommonFlow()

            }

        } else {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 2})

            fork {
                Player_Event.EventTriggerPlayerRequestLookAtTheFrontLock({'IsImmediate': True})
                Player_Event.EventPlayerWarpToStarterLinkAnchor({'IsWaitEnd': True, 'UseDemoWait': True, 'ASCommand': 'SwimWait', 'ActorName': 'DestinationAnchor', 'InstanceName': '', 'NotChangeRot': False})
                Npc_Navi.EventPlayAS({'IsWaitEnd': False, 'ASName': 'Wait', 'ForceFadeInFrame': 0.0, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False})
                Npc_Navi.EventWarpToTargetActor({'IsWaitEnd': True, 'TargetActorKind': 1, 'ActorName': 'Player_Event', 'OffsetBase': 1, 'InstanceName': '', 'YAngle': 0.0, 'ClothWarpMode': -1, 'PositionOffset': [-0.4099999964237213, 2.069999933242798, -0.17000000178813934]})
            } {
                EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'Actor1ActorName': 'Player_Event', 'PosVector': [0.0, 2.6500000953674316, 2.5799999237060547], 'AtVector': [0.0, 1.6799999475479126, 0.0], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsEnableRevertFast': False})
                EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'TargetFovy': 50.0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'PosVector': [0.0, 0.0, 0.0], 'PosVectorSetType': 1, 'AtVectorSetType': 1, 'AtVector': [0.0, 0.0, 0.0], 'Actor1ActorName': '', 'IsWaitEnd': True, 'MoveTime': 41, 'IsEnableRevertFast': False})
            } {

                call SkipCommonFlow()

            } {
                GameSystemActor[GSA2].EventWait({'IsWaitEnd': True, 'Frames': 20})
            }

            EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'AfterKeepEndInterpolateCountScale': 1.0, 'ChangeToManualModeAfterEvent': False, 'KeepManualModeFrame': 120.0, 'IsKeepWithRelativePos': False})
        }
    } else
    if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 2, 'ArmorName': 'Armor_Adult_HeavyBoot'}) {

        fork {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'Actor1ActorName': 'Player_Event', 'PosVector': [0.09000000357627869, 1.4900000095367432, 3.559999942779541], 'AtVector': [-0.05999999865889549, 1.5399999618530273, -0.019999999552965164], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsEnableRevertFast': False})
            EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'ChangeToManualModeAfterEvent': True, 'KeepManualModeFrame': 400.0, 'AfterKeepEndInterpolateCountScale': 1.0, 'IsKeepWithRelativePos': False})
        } {

            call ResetShader()

        }

    } else {

        fork {

            call ResetShader()

        } {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'Actor1ActorName': 'Player_Event', 'PosVector': [0.05000000074505806, 2.950000047683716, 3.440000057220459], 'AtVector': [0.0, 1.649999976158142, -0.009999999776482582], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsEnableRevertFast': False})
            EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'ChangeToManualModeAfterEvent': True, 'KeepManualModeFrame': 400.0, 'AfterKeepEndInterpolateCountScale': 1.0, 'IsKeepWithRelativePos': False})
        }

    }
}

void SkipCommonFlow() {

    fork {
        Dm_Locator.EventTriggerXLinkFadeByKey({'SLinkKey': '', 'ELinkKey': 'Dm_WaterTemple_0021_Bubble_First', 'IsKill': False})
        Dm_Locator.EventTriggerXLinkFadeByKey({'ELinkKey': 'Dm_WaterTemple_0021_Bubble_Second', 'SLinkKey': '', 'IsKill': False})
        Dm_Locator.EventTriggerXLinkFadeByKey({'SLinkKey': '', 'ELinkKey': 'Dm_WaterTemple_0021_Bubble_Env', 'IsKill': False})
    } {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'WaterTemple_SkipWaterChange', 'Value': True})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 3})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'WaterTemple_SkipWaterChange', 'Value': False})
    } {
        UISystemActor.EventEventFadeIn({'IsNoPlayAnime': False, 'Color': 0, 'Length': 1, 'IsWaitEnd': False})
    } {

        call ResetShader()

    }

}

void ResetShader() {
    PostProcessingActor.EventNorifyCutChangeForGraphics()
    PostProcessingActor.EventOverwriteSceneShadingParams({'ShadowRatio': 1.0, 'BakeLightLuminanceRatio': 0.0, 'IsOverwriteShadowRatio': True, 'IsOverwriteInnerRatio': False, 'InnerRatio': 0.0, 'IsOverwriteBakeLightLuminanceRatio': False})
}
