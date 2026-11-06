-------- EventFlow: Dm_WaterTemple_0022 --------

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataInt', 'EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataInt', 'EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait', 'EventTriggerSkipAcceptStart', 'EventTriggerSkipEnd']
queries: ['EventQueryIsEventSkipedMostRecent']
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

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerSoundReadRiddle']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: ['EventGoOffstageForUser', 'EventPlayerPlayASForFlowchart', 'EventPlayerTurnAndLook', 'EventPlayerWarpToTargetActor', 'EventTriggerPlayerRequestLookAtTheFrontLock', 'EventTriggerPlayerLookAtObject', 'EventTriggerSetModelLodManual']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: PostProcessingActor
entrypoint: None()
actions: ['EventSetAdvancedDoFForFlowchart', 'EventNorifyCutChangeForGraphics', 'EventOverwriteSceneShadingParams']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventGoOffstageForUser', 'EventNaviMoveAroundToPlayer', 'EventNaviWarpToPlayerHomePosition', 'EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: DevelopEventSystemActor
entrypoint: None()
actions: ['EventDemoProductSupportComment']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Dm_Locator[1]
entrypoint: None()
actions: ['EventTriggerEmitXLink', 'EventWarpToTargetPosAndRot', 'EventTriggerXLinkFadeByKey']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 1}

Actor: UISystemActor
entrypoint: None()
actions: ['EventEventFadeIn']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor[vibration]
entrypoint: None()
actions: ['EventTriggerControllerRumble']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[ESA2]
entrypoint: None()
actions: ['EventWait']
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

void EntryPoint0() {
    Player_Event.EventTriggerSetModelLodManual({'LodLevel': 1})
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HavePlayedEvent.Dm_WaterTemple_0022'}) {
        EventSystemActor.EventTriggerSkipAcceptStart({'SpecialEventActionType': 3})
    }
    switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'WaterTemple_Room00_WaterLevel', 'Value': 1, 'Index': -1}) {
      case 0:

        fork {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': '0', 'PosVector': [-5.75, 2.4200000762939453, -0.28999999165534973], 'AtVector': [-5.75, 2.4100000858306885, -1.159999966621399], 'TargetFovy': 25.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'MoveTime': 150, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': '0', 'PosVector': [-5.75, 2.450000047683716, 1.190000057220459], 'AtVector': [-5.75, 2.4100000858306885, -1.159999966621399], 'TargetFovy': 25.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        } {
            Dm_Locator[0].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'Position': [-20.239999771118164, 124.5, 10.140000343322754], 'ClothWarpMode': -1})
            Dm_Locator[CP].EventWarpToTargetActor({'IsWaitEnd': True, 'YAngle': 0.0, 'ClothWarpMode': -1, 'TargetActorKind': 1, 'ActorName': 'Player_Event', 'InstanceName': '', 'OffsetBase': 0, 'PositionOffset': [0.0, 0.0, 0.0]})
            Dm_Locator[TrueCP].EventWarpToTargetActor({'IsWaitEnd': True, 'ClothWarpMode': -1, 'TargetActorKind': 1, 'OffsetBase': 0, 'PositionOffset': [0.0, 0.0, 0.0], 'ActorName': 'Dm_Locator', 'InstanceName': 'CP', 'YAngle': 13.579119682312012})
        } {
            Player_Event.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
        } {
            Npc_Navi.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
        } {
            PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'StartDistance': 0.0, 'EndDistance': 0.0, 'StartFNumber': 0.0, 'EndFNumber': 0.0, 'StartBluarLevel': 0.0, 'EndBluarLevel': 0.0, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
        } {
            DevelopEventSystemActor.EventDemoProductSupportComment({'IsWaitEnd': False, 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 150, 'BgAlignW': 0, 'BgAlignH': 0, 'Text1': 'C01', 'Text2': 'フロルの風専用フロー'})
        }


        fork {
            GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'GameDataName': 'WaterTemple_Room00_WaterLevel', 'Value': 2})

            fork {
                GameSystemActor[vibration].EventTriggerControllerRumble({'RumbleCall': 'Demo_Middle_Dohoon', 'Length': 0.0})
            } {
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'WaterTemple_WaterLevelChange01', 'Value': False, 'Index': -1})
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'WaterTemple_WaterLevelChange02', 'Value': False, 'Index': -1})
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'WaterTemple_WaterLevelChange03', 'Value': True, 'Index': -1})
            }

        } {
            Dm_Locator[0].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'Position': [-20.239999771118164, 124.5, 10.140000343322754], 'ClothWarpMode': -1})
        } {
            EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'RootType': 3, 'TargetActorName': 'Dm_Locator', 'TargetActorInstanceName': '0', 'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'OverwriteStartFrame': -1.0, 'SceneName': 'C02-0', 'OverwriteEndFrame': 420.0})
        } {
            PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'StartDistance': 0.0, 'EndDistance': 0.0, 'StartFNumber': 0.0, 'EndFNumber': 0.0, 'StartBluarLevel': 0.0, 'EndBluarLevel': 0.0, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
        } {
            if !EventSystemActor.EventQueryIsEventSkipedMostRecent() {
                Player_Event.EventPlayerWarpToTargetActor({'OffsetBase': 0, 'IsWaitEnd': True, 'TargetActorKind': 1, 'ActorName': 'Dm_Locator', 'InstanceName': 'CP', 'PositionOffset': [0.0, 0.0, 0.0], 'ASCommand': 'Wait', 'UseDemoWait': True, 'YAngle': 13.579119682312012})
            } else {
                Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'ASCommand': 'Wait', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
                Player_Event.EventTriggerPlayerLookAtObject({'Target': 0, 'TurnFaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'WorldPos': [-24.0, 126.16999816894531, 9.720000267028809]})
                EventSystemActor[ESA2].EventWait({'IsWaitEnd': True, 'Frames': 150})
                Player_Event.EventPlayerTurnAndLook({'Target': 0, 'TurnFaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsWaitEnd': True, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'UseNormalTurn': False, 'SlowTurn': True, 'WorldPos': [-24.0, 126.16999816894531, 9.720000267028809], 'IsDoNavi': False})
                Player_Event.EventTriggerPlayerRequestLookAtTheFrontLock({'IsImmediate': True})
            }
        } {
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 290})
            SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 0})
        } {
            DevelopEventSystemActor.EventDemoProductSupportComment({'IsWaitEnd': False, 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 150, 'BgAlignW': 0, 'BgAlignH': 0, 'Text2': 'フロルの風専用フロー', 'Text1': 'C02'})
        } {
            Dm_Locator[1].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'Position': [-3.799999952316284, 107.0, -4.0], 'ClothWarpMode': -1})
            Dm_Locator[1].EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_WaterTemple_0022_Bubble_Env01'})
        } {
            Npc_Navi.EventNaviMoveAroundToPlayer({'IsWaitEnd': True, 'IsHomePosition': True, 'IsNearOffset': True, 'IsLookAtObject': False, 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsTurnLooking': False, 'OverwriteRotNearDist': -1.0, 'IsUseDisguiseSpeakerPos': False, 'offset': [0.0, 0.0, 0.0], 'IsOffCenterCamera': False, 'PassThrough': -1.0, 'MoveSpeed': 0.0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'ArrivedASCommand': '', 'OffsetType': -1, 'IsUseAfterPlayerTurn': True})
        }

        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HavePlayedEvent.Dm_WaterTemple_0022'}) {
            EventSystemActor.EventTriggerSkipEnd({'SpecialEventActionType': 4, 'FadeInType': 2})
        }

        call WarpWaterIfSkip()

      case [1, 2]:

        fork {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': '0', 'PosVector': [-5.75, 2.4200000762939453, -0.28999999165534973], 'AtVector': [-5.75, 2.4100000858306885, -1.159999966621399], 'TargetFovy': 25.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'MoveTime': 150, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': '0', 'PosVector': [-5.75, 2.450000047683716, 1.190000057220459], 'AtVector': [-5.75, 2.4100000858306885, -1.159999966621399], 'TargetFovy': 25.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        } {
            Dm_Locator[0].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'Position': [-20.239999771118164, 124.5, 10.140000343322754], 'ClothWarpMode': -1})
            Dm_Locator[CP].EventWarpToTargetActor({'IsWaitEnd': True, 'YAngle': 0.0, 'ClothWarpMode': -1, 'TargetActorKind': 1, 'ActorName': 'Player_Event', 'InstanceName': '', 'OffsetBase': 0, 'PositionOffset': [0.0, 0.0, 0.0]})
            Dm_Locator[TrueCP].EventWarpToTargetActor({'IsWaitEnd': True, 'ClothWarpMode': -1, 'TargetActorKind': 1, 'OffsetBase': 0, 'PositionOffset': [0.0, 0.0, 0.0], 'ActorName': 'Dm_Locator', 'InstanceName': 'CP', 'YAngle': 13.579119682312012})
        } {
            Player_Event.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
        } {
            Npc_Navi.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
        } {
            PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'StartDistance': 0.0, 'EndDistance': 0.0, 'StartFNumber': 0.0, 'EndFNumber': 0.0, 'StartBluarLevel': 0.0, 'EndBluarLevel': 0.0, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
        } {
            DevelopEventSystemActor.EventDemoProductSupportComment({'IsWaitEnd': False, 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 150, 'BgAlignW': 0, 'BgAlignH': 0, 'Text1': 'C01', 'Text2': ''})
        }


        fork {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 77})
            GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'GameDataName': 'WaterTemple_Room00_WaterLevel', 'Value': 2})

            fork {
                GameSystemActor[vibration].EventTriggerControllerRumble({'RumbleCall': 'Demo_Middle_Dohoon', 'Length': 0.0})
            } {
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'WaterTemple_WaterLevelChange01', 'Value': False, 'Index': -1})
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'WaterTemple_WaterLevelChange02', 'Value': False, 'Index': -1})
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'WaterTemple_WaterLevelChange03', 'Value': True, 'Index': -1})
            }

        } {
            Dm_Locator[0].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'Position': [-20.239999771118164, 124.5, 10.140000343322754], 'ClothWarpMode': -1})
        } {
            EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'RootType': 3, 'TargetActorName': 'Dm_Locator', 'TargetActorInstanceName': '0', 'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'SceneName': 'C01-0', 'OverwriteEndFrame': -1.0, 'OverwriteStartFrame': -1.0})
        } {
            PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'StartDistance': 0.0, 'EndDistance': 0.0, 'StartFNumber': 0.0, 'EndFNumber': 0.0, 'StartBluarLevel': 0.0, 'EndBluarLevel': 0.0, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
        } {
            if !EventSystemActor.EventQueryIsEventSkipedMostRecent() {
                Player_Event.EventPlayerWarpToTargetActor({'OffsetBase': 0, 'IsWaitEnd': True, 'TargetActorKind': 1, 'ActorName': 'Dm_Locator', 'InstanceName': 'CP', 'PositionOffset': [0.0, 0.0, 0.0], 'ASCommand': 'Wait', 'UseDemoWait': True, 'YAngle': 13.579119682312012})
            } else {
                Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'ASCommand': 'Wait', 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
                Player_Event.EventTriggerPlayerLookAtObject({'Target': 0, 'TurnFaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'WorldPos': [-24.0, 126.16999816894531, 9.720000267028809]})
                EventSystemActor[ESA2].EventWait({'IsWaitEnd': True, 'Frames': 150})
                Player_Event.EventPlayerTurnAndLook({'Target': 0, 'TurnFaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsWaitEnd': True, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'UseNormalTurn': False, 'SlowTurn': True, 'WorldPos': [-24.0, 126.16999816894531, 9.720000267028809], 'IsDoNavi': False})
                Player_Event.EventTriggerPlayerRequestLookAtTheFrontLock({'IsImmediate': True})
            }
        } {
            Npc_Navi.EventNaviMoveAroundToPlayer({'IsWaitEnd': True, 'IsHomePosition': True, 'IsNearOffset': True, 'IsLookAtObject': False, 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsTurnLooking': False, 'OverwriteRotNearDist': -1.0, 'IsUseDisguiseSpeakerPos': False, 'offset': [0.0, 0.0, 0.0], 'IsOffCenterCamera': False, 'PassThrough': -1.0, 'MoveSpeed': 0.0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'ArrivedASCommand': '', 'OffsetType': -1, 'IsUseAfterPlayerTurn': True})
        } {
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 190})
            SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 0})
        } {
            DevelopEventSystemActor.EventDemoProductSupportComment({'IsWaitEnd': False, 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 150, 'BgAlignW': 0, 'BgAlignH': 0, 'Text1': 'C02', 'Text2': ''})
        } {
            Dm_Locator[1].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'Position': [-3.799999952316284, 107.0, -4.0], 'ClothWarpMode': -1})
            Dm_Locator[1].EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_WaterTemple_0022_Bubble_Env00'})
        }

        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HavePlayedEvent.Dm_WaterTemple_0022'}) {
            EventSystemActor.EventTriggerSkipEnd({'SpecialEventActionType': 4, 'FadeInType': 2})
        }

        call WarpWaterIfSkip()

    }
}

void WarpWaterIfSkip() {
    if !EventSystemActor.EventQueryIsEventSkipedMostRecent() {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 2})

        fork {
            Player_Event.EventPlayerWarpToTargetActor({'OffsetBase': 0, 'IsWaitEnd': True, 'TargetActorKind': 1, 'ActorName': 'Dm_Locator', 'InstanceName': 'CP', 'PositionOffset': [0.0, 0.0, 0.0], 'ASCommand': 'Wait', 'UseDemoWait': True, 'YAngle': 13.579119682312012})
            Npc_Navi.EventPlayAS({'IsWaitEnd': False, 'ASName': 'Wait', 'ForceFadeInFrame': 0.0, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': False})
            Npc_Navi.EventNaviWarpToPlayerHomePosition({'IsWaitEnd': True, 'IsNearOffset': True, 'Type': -1, 'IsDisguisedPlayerPos': False, 'Target': 0, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'OffsetBase': 0, 'PosOffset': [0.0, 0.0, 0.0], 'YAngle': 0.0})
        } {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'TrueCP', 'PosVector': [-1.0099999904632568, 1.5199999809265137, 3.9800000190734863], 'AtVector': [-0.05000000074505806, 1.5299999713897705, 0.05000000074505806], 'TargetFovy': 50.099998474121094, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsEnableRevertFast': False})
            EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'ChangeToManualModeAfterEvent': True, 'KeepManualModeFrame': 400.0, 'IsKeepWithRelativePos': False, 'AfterKeepEndInterpolateCountScale': 3.0})
        } {
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'WaterTemple_SkipWaterChange', 'Value': True})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 3})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'WaterTemple_SkipWaterChange', 'Value': False})
        } {
            Dm_Locator[1].EventTriggerXLinkFadeByKey({'SLinkKey': '', 'ELinkKey': 'Dm_WaterTemple_0022_Bubble_Env00', 'IsKill': True})
        } {
            UISystemActor.EventEventFadeIn({'IsNoPlayAnime': False, 'Color': 0, 'Length': 1, 'IsWaitEnd': False})
        } {
            PostProcessingActor.EventNorifyCutChangeForGraphics()
            PostProcessingActor.EventOverwriteSceneShadingParams({'ShadowRatio': 1.0, 'BakeLightLuminanceRatio': 0.0, 'IsOverwriteShadowRatio': True, 'IsOverwriteInnerRatio': False, 'InnerRatio': 0.0, 'IsOverwriteBakeLightLuminanceRatio': False})
        }

    } else {

        fork {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'TrueCP', 'PosVector': [-1.0099999904632568, 1.5199999809265137, 3.9800000190734863], 'AtVector': [-0.05000000074505806, 1.5299999713897705, 0.05000000074505806], 'TargetFovy': 50.099998474121094, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsEnableRevertFast': False})
            EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'ChangeToManualModeAfterEvent': True, 'KeepManualModeFrame': 400.0, 'IsKeepWithRelativePos': False, 'AfterKeepEndInterpolateCountScale': 3.0})
        } {
            PostProcessingActor.EventNorifyCutChangeForGraphics()
            PostProcessingActor.EventOverwriteSceneShadingParams({'ShadowRatio': 1.0, 'BakeLightLuminanceRatio': 0.0, 'IsOverwriteShadowRatio': True, 'IsOverwriteInnerRatio': False, 'InnerRatio': 0.0, 'IsOverwriteBakeLightLuminanceRatio': False})
        }

    }
}
