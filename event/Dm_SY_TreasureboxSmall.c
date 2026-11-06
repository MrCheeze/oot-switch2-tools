-------- EventFlow: Dm_SY_TreasureboxSmall --------

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait', 'EventTriggerRequestAutoSave', 'EventTriggerControllerRumble']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: TreasureBox_EventStarter
entrypoint: None()
actions: ['EventTriggerTreasureBoxOpened', 'EventTriggerTBoxErasePauseMask', 'EventPlayAS', 'EventTriggerTBoxPushPoseMask', 'EventTriggerTBoxRequestSleepActorHolderData', 'EventTreasureBoxSetRigLightIntensityScale', 'EventTriggerTBoxRequestCancelSleepActorHolderData']
queries: ['EventQueryIsFaceToFace']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 1}

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart', 'EventPlayerTurnAndLook']
queries: ['EventQueryPlayerIsChild']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: PouchSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryCanAddToPorch', 'EventQueryIsSmallKey', 'EventQueryPouchContentGetType']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: PouchContentGuestPerformer
entrypoint: None()
actions: ['EventPlayAS', 'EventTriggerPlayerNoHit', 'EventTriggerModelBindForItemGetDemo', 'EventTriggerInvalidateShadow', 'EventTriggerSetModelLodManual']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 2}

Actor: PostProcessingActor
entrypoint: None()
actions: ['EventSetAdvancedDoFForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: UISystemActor
entrypoint: None()
actions: ['EventTriggerRequestOpenPickUpWindow', 'EventTriggerSetDisplaySmallKey']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventRequestActor
entrypoint: None()
actions: ['EventTriggerSetEventBool']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerSoundStartFanfare']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventNaviMoveAtActor', 'EventNaviTreasureboxSmall', 'EventNaviLookAtObject']
queries: ['EventQueryNaviAttentionType', 'EventQueryNaviHomePositionOffsetType']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'ExceptionalBindType': 3, 'UseEventModelAnime': 'Work/Model/Event/Dm_SY_Get/Dm_SY_Get/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_SY_Get.root.as'}

Actor: EventSystemActor[0]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsBool']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventEffectEmitter
entrypoint: None()
actions: ['EventEffectStopGetItem', 'EventEffectStartGetItem']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor[navi]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera']
queries: ['EventQueryCameraCheckOcclusionToTarget']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: Dm_Locator
entrypoint: None()
actions: ['EventWarpToTargetActor']
queries: []
params: {'EventMemberCreateMethod': 1, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Dm_Locator[PlayerPos]
entrypoint: None()
actions: ['EventTriggerDmLocatorTurnNow', 'EventWarpToTargetActor']
queries: []
params: {'EventMemberCreateMethod': 1, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: DevelopEventSystemActor
entrypoint: None()
actions: ['EventDemoProductSupportComment']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[1]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[vibration]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void Success() {
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'KokiriForest_TreasureBox_NaviChatOff', 'Value': False})

    call Success_({'ContentName': 'ContentName', 'IsMiniGame': False})

}

void Open() {

    call CheckSpace()

    if !TreasureBox_EventStarter.EventQueryIsFaceToFace({'ActorName': 'Player_Event'}) {

        fork {
            if !GameDataActor.EventQueryIsBool({'BoolValue': 'IsMiniGame'}) {
                Player_Event.EventPlayerPlayASForFlowchart({'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': True, 'IsAllSlot': True, 'UseAnmDriven': True, 'ClothWarpMode': 0, 'ASCommand': 'DemoOpenBoxFront_Mini'})
            } else {
                Player_Event.EventPlayerPlayASForFlowchart({'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': True, 'ASCommand': 'DemoOpenTreasureBoxFront', 'IsAllSlot': True, 'UseAnmDriven': True, 'ClothWarpMode': 0})
            }
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': False, 'PosVectorSetType': 1, 'AtVectorSetType': 1, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'PosVector': [0.0, 0.0, 0.0], 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'AtVector': [0.0, 0.0, 0.0], 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'LookAtDis': -1.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'FovySetType': 1, 'TargetFovy': 0.0, 'IsEnableRevertFast': False})
            switchcall Dm_SY_Get.IsCameraHit({'ActorName': 'ContentName'}) {
              case fnv1a("Hit"):
                Event130:
                Dm_Locator[PlayerPos].EventWarpToTargetActor({'TargetActorKind': 1, 'IsWaitEnd': True, 'InstanceName': '', 'ClothWarpMode': -1, 'OffsetBase': 1, 'ActorName': 'Player_Event', 'PositionOffset': [0.0, 0.0, 0.0], 'YAngle': 0.0})
                Dm_Locator[PlayerPos].EventTriggerDmLocatorTurnNow({'InstanceName': '', 'OffsetBase': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'Target': 3, 'ActorName': 'Dm_Locator', 'IsOnlyYAxis': True})
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
                switchcall CheckHitCamera({'ActorName': 'ContentName'}) {
                  case 0x65744f17:
                    DevelopEventSystemActor.EventDemoProductSupportComment({'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'Text2': '', 'DispTime': 7, 'IsWaitEnd': False, 'Text1': 'カメラ障害物あり（スペースが無い版）'})

                    call Pack_ItemDisplayNoSpace({'ContentName': 'ContentName', 'IsMiniGame': 'IsMiniGame'})

                  case 0x7c506937:
                    DevelopEventSystemActor.EventDemoProductSupportComment({'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'Text2': '', 'DispTime': 7, 'IsWaitEnd': False, 'Text1': 'カメラ障害物あり（空き空間を向く）'})

                    call Open_HitObj({'ContentName': 'ContentName', 'IsMiniGame': 'IsMiniGame'})

                }
              case fnv1a("NoHit"):
                switchcall CheckHitPlayerCamera() {
                  case fnv1a("Hit"):
                    goto Event130
                  case 0xa9d63ee1:
                    DevelopEventSystemActor.EventDemoProductSupportComment({'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'Text2': '', 'DispTime': 7, 'IsWaitEnd': False, 'Text1': 'カメラ障害物なし'})

                    fork {
                        EventSystemActor[0].EventWait({'IsWaitEnd': True, 'Frames': 5})

                        call Dm_SY_Get.Dm_SY_Get_Camera({'ActorName': 'ContentName'})

                        EventSystemActor[0].EventWait({'IsWaitEnd': True, 'Frames': 15})

                        call Pack_ItemDisplay({'ContentName': 'ContentName', 'IsMiniGame': 'IsMiniGame'})

                    } {

                        call GetAnimationAction({'ContentName': 'ContentName'})

                    }

                }
            }
        } {

            call TresureboxSmall_Animation()

        } {

            call FrontVibration()

        } {
            switch PouchSystemActor.EventQueryPouchContentGetType({'GameDataName': '', 'ActorName': 'ContentName'}) {
              case 0:

                call navi_go_down()

                GameSystemActor[navi].EventWait({'IsWaitEnd': True, 'Frames': 30})
                Npc_Navi.EventNaviTreasureboxSmall({'IsWaitEnd': True, 'ArrivedASCommand': '', 'IsChangeEmotionType': False, 'ArrivedEmotionType': 0})
              case [1, 2, 3]:

                call navi_go_down()

                GameSystemActor[navi].EventWait({'IsWaitEnd': True, 'Frames': 30})

                call Dm_SY_Get.Navi_GetBig()

            }
        }

    } else {

        fork {
            if !GameDataActor.EventQueryIsBool({'BoolValue': 'IsMiniGame'}) {
                Player_Event.EventPlayerPlayASForFlowchart({'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': True, 'IsAllSlot': True, 'UseAnmDriven': True, 'ClothWarpMode': 0, 'ASCommand': 'DemoOpenBoxWithKick_Mini'})
            } else {
                Player_Event.EventPlayerPlayASForFlowchart({'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'DemoOpenTreasureBoxWithKick', 'IsWaitEnd': True, 'IsAllSlot': True, 'UseAnmDriven': True, 'ClothWarpMode': 0})
            }
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': False, 'PosVectorSetType': 1, 'AtVectorSetType': 1, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'PosVector': [0.0, 0.0, 0.0], 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'AtVector': [0.0, 0.0, 0.0], 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'LookAtDis': -1.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'FovySetType': 1, 'TargetFovy': 0.0, 'IsEnableRevertFast': False})
            switchcall Dm_SY_Get.IsCameraHit({'ActorName': 'ContentName'}) {
              case fnv1a("Hit"):
                Event196:
                Dm_Locator[PlayerPos].EventWarpToTargetActor({'TargetActorKind': 1, 'IsWaitEnd': True, 'InstanceName': '', 'ClothWarpMode': -1, 'OffsetBase': 1, 'ActorName': 'Player_Event', 'PositionOffset': [0.0, 0.0, 0.0], 'YAngle': 0.0})
                Dm_Locator[PlayerPos].EventTriggerDmLocatorTurnNow({'InstanceName': '', 'OffsetBase': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'Target': 3, 'ActorName': 'Dm_Locator', 'IsOnlyYAxis': True})
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
                switchcall CheckHitCamera({'ActorName': 'ContentName'}) {
                  case 0x65744f17:
                    DevelopEventSystemActor.EventDemoProductSupportComment({'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'Text2': '', 'DispTime': 7, 'IsWaitEnd': False, 'Text1': 'カメラ障害物あり（スペースが無い版）'})

                    call Pack_ItemDisplayNoSpace({'ContentName': 'ContentName', 'IsMiniGame': 'IsMiniGame'})

                  case 0x7c506937:
                    DevelopEventSystemActor.EventDemoProductSupportComment({'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'Text2': '', 'DispTime': 7, 'IsWaitEnd': False, 'Text1': 'カメラ障害物あり（空き空間を向く）'})

                    call Open_HitObj({'ContentName': 'ContentName', 'IsMiniGame': 'IsMiniGame'})

                }
              case fnv1a("NoHit"):
                switchcall CheckHitPlayerCamera() {
                  case fnv1a("Hit"):
                    goto Event196
                  case 0xa9d63ee1:
                    DevelopEventSystemActor.EventDemoProductSupportComment({'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'Text2': '', 'DispTime': 7, 'IsWaitEnd': False, 'Text1': 'カメラ障害物なし'})

                    fork {
                        EventSystemActor[0].EventWait({'IsWaitEnd': True, 'Frames': 5})

                        call Dm_SY_Get.Dm_SY_Get_Camera({'ActorName': 'ContentName'})

                        EventSystemActor[0].EventWait({'IsWaitEnd': True, 'Frames': 15})

                        call Pack_ItemDisplay({'ContentName': 'ContentName', 'IsMiniGame': 'IsMiniGame'})

                    } {

                        call GetAnimationAction({'ContentName': 'ContentName'})

                    }

                }
            }
        } {

            call TresureboxSmall_Animation()

        } {
            switch PouchSystemActor.EventQueryPouchContentGetType({'GameDataName': '', 'ActorName': 'ContentName'}) {
              case 0:

                call navi_go_down_kick()

                Npc_Navi.EventNaviTreasureboxSmall({'IsWaitEnd': True, 'ArrivedASCommand': '', 'IsChangeEmotionType': False, 'ArrivedEmotionType': 0})
              case [1, 2, 3]:

                call navi_go_down_kick()


                call Dm_SY_Get.Navi_GetBig()

            }
        } {

            call KickVibration()

        }

    }
}

void TrapOpen() {
    EventRequestActor.EventTriggerSetEventBool({'Bool': True})
    Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'DemoOpenTreasureBoxWithKick', 'IsWaitEnd': False, 'ClothWarpMode': 0})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
}

void ItemDisplay() {
    TreasureBox_EventStarter.EventTriggerTBoxRequestCancelSleepActorHolderData()
    PouchContentGuestPerformer.EventTriggerSetModelLodManual({'LodLevel': 0})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
    SoundSystemActor.EventTriggerSoundStartFanfare({'GameDataName': '', 'IsEnableIntro': False, 'ActorName': 'ContentName'})
    EventEffectEmitter.EventEffectStartGetItem({'GameDataName': '', 'IsBottleDemo': False, 'ActorName': 'ContentName'})
    PouchContentGuestPerformer.EventTriggerPlayerNoHit()
    PouchContentGuestPerformer.EventTriggerModelBindForItemGetDemo({'ActorName': 'Player_Event', 'InstanceName': '', 'BoneName': '', 'RotOffset': [0.0, 0.0, 0.0], 'TransOffset': [0.0, 0.0, 0.0]})
    PouchContentGuestPerformer.EventPlayAS({'ASName': 'Rotate_GetDemo', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    PouchContentGuestPerformer.EventTriggerInvalidateShadow()
    Event17:
    switch PouchSystemActor.EventQueryCanAddToPorch({'Actor': 'ContentName'}) {
      case [0, 1]:
        if !GameDataActor.EventQueryIsBool({'BoolValue': 'IsMiniGame'}) {

            call GetPouchContent.GetPouchContentByActorNameForTreasureBox({'ActorName': 'ContentName'})

        } else {

            call GetPouchContent.GetPouchContentByActorNameForShowPickUpWindow({'ActorName': 'ContentName'})

            Event38:
            UISystemActor.EventTriggerRequestOpenPickUpWindow({'ActorName': 'ContentName'})
        }
      case 2:

        call GetPouchContent.DisplayGetByActorName({'ActorName': 'ContentName'})

        goto Event38
    }
}

void Success_MidoHouse() {
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'KokiriForest_TreasureBox_NaviChatOff'})

    call Success_({'ContentName': 'ContentName', 'IsMiniGame': False})

}

void navi_go_down() {
    if !Npc_Navi.EventQueryNaviAttentionType() {
        if !Player_Event.EventQueryPlayerIsChild() {
            Npc_Navi.EventNaviLookAtObject({'Target': 1, 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsTurnX': True, 'OffsetBase': 1})
            GameSystemActor[navi].EventWait({'IsWaitEnd': True, 'Frames': 50})
        } else
        switch Npc_Navi.EventQueryNaviHomePositionOffsetType() {
          case [0, 1]:
            Npc_Navi.EventNaviMoveAtActor({'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'TargetInstanceName': '', 'ASCommand': '', 'IsLookAtObject': True, 'IsTurnLooking': True, 'IsUseDisguiseSpeakerPos': False, 'IsWaitEnd': True, 'LookAtActorName': '', 'LookAtDirection': 0.0, 'TargetActorName': 'Player_Event', 'LookAtPosOffset': [0.0, 0.0, 0.0], 'OverwriteRotNearDist': 1.0, 'TargetOffset': [0.5, 0.0, 0.0], 'LookAtTarget': 1, 'LookAtOffsetBase': 1, 'IsTargetNaviAttentionPos': False, 'MinimumSpeed': 0.10000000149011612, 'IncSpeedDistance': 0.0, 'MoveSpeed': 0.800000011920929, 'DecSpeedDistance': 0.30000001192092896})
          case [2, 3]:
            Npc_Navi.EventNaviMoveAtActor({'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'TargetInstanceName': '', 'ASCommand': '', 'IsLookAtObject': True, 'IsTurnLooking': True, 'IsUseDisguiseSpeakerPos': False, 'IsWaitEnd': True, 'LookAtActorName': '', 'LookAtDirection': 0.0, 'TargetActorName': 'Player_Event', 'LookAtPosOffset': [0.0, 0.0, 0.0], 'OverwriteRotNearDist': 1.0, 'TargetOffset': [-0.5, 0.0, 0.0], 'LookAtTarget': 1, 'LookAtOffsetBase': 1, 'IsTargetNaviAttentionPos': False, 'MinimumSpeed': 0.10000000149011612, 'IncSpeedDistance': 0.0, 'MoveSpeed': 0.800000011920929, 'DecSpeedDistance': 0.30000001192092896})
        }
    }
}

void navi_go_down_kick() {
    if !Npc_Navi.EventQueryNaviAttentionType() {
        Npc_Navi.EventNaviLookAtObject({'Target': 1, 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsTurnX': True, 'OffsetBase': 1})
        GameSystemActor[navi].EventWait({'IsWaitEnd': True, 'Frames': 50})
    }
}

void Success_() {

    call Open({'ContentName': 'ContentName', 'IsMiniGame': 'IsMiniGame'})

    GameSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
    TreasureBox_EventStarter.EventTriggerTreasureBoxOpened()
    TreasureBox_EventStarter.EventTriggerTBoxErasePauseMask()

    call Dm_SY_Get.CheckHeart({'ActorName': 'ContentName'})


    call ActionGuide.ActionGuide({'ActorName': 'ContentName'})

    GameSystemActor.EventTriggerRequestAutoSave()

    fork {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'RequiredFrame': 20, 'EndBluarLevel': 0.0, 'IsWaitEnd': False, 'StartDistance': 0.0, 'EndDistance': 0.0, 'StartFNumber': 0.0, 'EndFNumber': 0.0, 'StartBluarLevel': 0.0, 'IsPrimaryApply': False, 'IsAutoFocalDist': False, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        TreasureBox_EventStarter.EventTriggerTBoxRequestSleepActorHolderData()
        EventEffectEmitter.EventEffectStopGetItem()
    }


    call NaviHint.NaviHint_Shield_Hylian_PlayCheck()

}

void SuccessForMiniGame() {
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'KokiriForest_TreasureBox_NaviChatOff', 'Value': False})

    call Success_({'IsMiniGame': True, 'ContentName': 'ContentName'})

}

void GetAnimationAction() {
    switch PouchSystemActor.EventQueryPouchContentGetType({'GameDataName': '', 'ActorName': 'ContentName'}) {
      case 0:
        Player_Event.EventPlayerTurnAndLook({'ActorName': 'PlayerCamera', 'IsWaitEnd': True, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': 'DemoGet', 'IgnoreTargetPosMove': True, 'SlowTurn': False, 'UseNormalTurn': False, 'TurnFaceControlType': 2, 'Target': 7, 'IsDoNavi': False})
        Player_Event.EventPlayerPlayASForFlowchart({'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'IsAllSlot': True, 'ASCommand': 'DemoGetLoop', 'UseAnmDriven': False, 'ClothWarpMode': 0})
      case [1, 2, 3]:
        Player_Event.EventPlayerTurnAndLook({'ActorName': 'PlayerCamera', 'IsWaitEnd': True, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'IgnoreTargetPosMove': True, 'SlowTurn': False, 'UpperASCommand': 'DemoGet_Smile', 'UseNormalTurn': False, 'TurnFaceControlType': 2, 'Target': 7, 'IsDoNavi': False})
        Player_Event.EventPlayerPlayASForFlowchart({'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'IsAllSlot': True, 'UseAnmDriven': False, 'ASCommand': 'DemoGetLoop_Smile', 'ClothWarpMode': 0})
    }
}

void TresureboxSmall_Animation() {
    TreasureBox_EventStarter.EventTriggerTBoxPushPoseMask()
    if !TreasureBox_EventStarter.EventQueryIsFaceToFace({'ActorName': 'Player_Event'}) {
        EventSystemActor[1].EventWait({'IsWaitEnd': True, 'Frames': 30})
    }
    TreasureBox_EventStarter.EventPlayAS({'Partial': '', 'ForceFadeInFrame': -1.0, 'ASName': 'FrontOpenSmall', 'IsAnimeDriven': True, 'IsAllSlot': True, 'IsWaitEnd': False})
    EventSystemActor[1].EventWait({'IsWaitEnd': True, 'Frames': 30})
    TreasureBox_EventStarter.EventTreasureBoxSetRigLightIntensityScale({'IntensityScale': 0.0, 'FadeFrame': 30.0, 'IsWaitEnd': False})
}

void Open_HitObj() {

    fork {
        switch PouchSystemActor.EventQueryPouchContentGetType({'GameDataName': '', 'ActorName': 'ContentName'}) {
          case 0:
            Player_Event.EventPlayerTurnAndLook({'Target': 3, 'IsWaitEnd': True, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IgnoreTargetPosMove': True, 'SlowTurn': False, 'UseNormalTurn': False, 'TurnFaceControlType': 2, 'ActorName': 'Dm_Locator', 'UpperASCommand': 'DemoGet', 'KeepTalkWait': True, 'IsDoNavi': False})
            Player_Event.EventPlayerPlayASForFlowchart({'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'IsAllSlot': True, 'ASCommand': 'DemoGetLoop', 'UseAnmDriven': False, 'ClothWarpMode': 0})
          case [1, 2, 3]:
            Player_Event.EventPlayerTurnAndLook({'Target': 3, 'IsWaitEnd': True, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IgnoreTargetPosMove': True, 'SlowTurn': False, 'UseNormalTurn': False, 'TurnFaceControlType': 2, 'ActorName': 'Dm_Locator', 'KeepTalkWait': True, 'UpperASCommand': 'DemoGet_Smile', 'IsDoNavi': False})
            Player_Event.EventPlayerPlayASForFlowchart({'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'IsAllSlot': True, 'UseAnmDriven': False, 'ASCommand': 'DemoGetLoop_Smile', 'ClothWarpMode': 0})
        }
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 40})

        call Pack_ItemDisplay({'ContentName': 'ContentName', 'IsMiniGame': 'IsMiniGame'})

    } {
        if !Player_Event.EventQueryPlayerIsChild() {
            switch PouchSystemActor.EventQueryPouchContentGetType({'GameDataName': '', 'ActorName': 'ContentName'}) {
              case 0:
                EventCamera.EventMoveToTargetPosCamera({'AtVector': [0.0, 1.2000000476837158, 0.0], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'PosVector': [0.0, 1.6200000047683716, 1.9600000381469727], 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'PlayerPos', 'MoveTime': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
              case [1, 2, 3]:
                EventCamera.EventMoveToTargetPosCamera({'AtVector': [0.0, 1.2000000476837158, 0.0], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'PlayerPos', 'PosVector': [0.0, 1.9900000095367432, 1.559999942779541], 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
            }
        } else {
            EventCamera.EventMoveToTargetPosCamera({'PosVector': [0.009999999776482582, 2.5, 1.5499999523162842], 'AtVector': [0.0, 1.6799999475479126, 0.0], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1ActorName': 'Dm_Locator', 'Actor1InstanceName': 'PlayerPos', 'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        }
    }

}

void Pack_ItemDisplay() {

    call ItemDisplay({'ContentName': 'ContentName', 'IsMiniGame': 'IsMiniGame'})

    Event125:
    if !PouchSystemActor.EventQueryIsSmallKey({'ActorName': 'ContentName'}) {
        EventSystemActor[0].EventWait({'IsWaitEnd': True, 'Frames': 30})
        UISystemActor.EventTriggerSetDisplaySmallKey({'IsDisplaySmallKey': True})
        EventSystemActor[0].EventWait({'IsWaitEnd': True, 'Frames': 50})
    }
}

void FrontVibration() {
    EventSystemActor[vibration].EventWait({'IsWaitEnd': True, 'Frames': 50})
    if !GameDataActor.EventQueryIsBool({'BoolValue': 'IsMiniGame'}) {
        GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Large_Bofuhn'})
    } else {
        GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Middle_Bofuhn'})
    }
}

void KickVibration() {
    EventSystemActor[vibration].EventWait({'IsWaitEnd': True, 'Frames': 22})
    if !Player_Event.EventQueryPlayerIsChild() {
        if !GameDataActor.EventQueryIsBool({'BoolValue': 'IsMiniGame'}) {
            GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Large_Doka'})
        } else {
            GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Middle_Doka'})
        }
    } else {
        GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Large_Doka'})
    }
}

void Pack_ItemDisplayNoSpace() {

    call ItemDisplayNoSpace({'ContentName': 'ContentName', 'IsMiniGame': 'IsMiniGame'})

    goto Event125
}

void ItemDisplayNoSpace() {
    SoundSystemActor.EventTriggerSoundStartFanfare({'GameDataName': '', 'IsEnableIntro': False, 'ActorName': 'ContentName'})
    goto Event17
}

void CheckHitCamera() {
    if !Player_Event.EventQueryPlayerIsChild() {
        switch PouchSystemActor.EventQueryPouchContentGetType({'GameDataName': '', 'ActorName': 'ActorName'}) {
          case 0:
            if !EventCamera.EventQueryCameraCheckOcclusionToTarget({'ActorName1': 'Dm_Locator', 'VectorSetType1': 3, 'VectorSetType2': 3, 'IsEnableCameraBodyCheck': True, 'IsIgnoreVectorReferenceActorRot1': False, 'IsIgnoreVectorReferenceActorRot2': False, 'Vector1': [0.0, 1.6200000047683716, 1.9600000381469727], 'IsEnableSpaceCheck': True, 'ActorName2': 'Dm_Locator', 'Actor2InstanceName': 'PlayerPos', 'Vector2': [0.0, 1.5, 0.5], 'SpaceCheckRadius': 0.20000000298023224, 'Actor1InstanceName': 'PlayerPos', 'IsConsiderWater': False}) {
                Event19:
                return 0x65744f17
            } else {
                Event201:
                return 0x7c506937
            }
          case [1, 2, 3]:
            if !EventCamera.EventQueryCameraCheckOcclusionToTarget({'ActorName1': 'Dm_Locator', 'VectorSetType1': 3, 'VectorSetType2': 3, 'IsEnableCameraBodyCheck': True, 'IsIgnoreVectorReferenceActorRot1': False, 'IsIgnoreVectorReferenceActorRot2': False, 'Vector1': [0.0, 1.9900000095367432, 1.559999942779541], 'Actor2InstanceName': 'PlayerPos', 'ActorName2': 'Dm_Locator', 'Vector2': [0.0, 1.5, 0.5], 'IsEnableSpaceCheck': True, 'SpaceCheckRadius': 0.20000000298023224, 'Actor1InstanceName': 'PlayerPos', 'IsConsiderWater': False}) {
                goto Event19
            } else {
                goto Event201
            }
        }
    } else
    if !EventCamera.EventQueryCameraCheckOcclusionToTarget({'ActorName1': 'Dm_Locator', 'VectorSetType1': 3, 'VectorSetType2': 3, 'IsEnableCameraBodyCheck': True, 'IsIgnoreVectorReferenceActorRot1': False, 'IsIgnoreVectorReferenceActorRot2': False, 'Vector1': [0.0, 2.5, 1.5499999523162842], 'ActorName2': 'Dm_Locator', 'Actor2InstanceName': 'PlayerPos', 'IsEnableSpaceCheck': True, 'Actor1InstanceName': 'PlayerPos', 'SpaceCheckRadius': 0.30000001192092896, 'Vector2': [0.0, 1.899999976158142, 0.6000000238418579], 'IsConsiderWater': False}) {
        goto Event19
    } else {
        goto Event201
    }
}

void CheckSpace() {
    if !EventCamera.EventQueryCameraCheckOcclusionToTarget({'ActorName1': 'TreasureBox_EventStarter', 'VectorSetType1': 3, 'Vector1': [0.0, 1.7999999523162842, 0.0], 'IsEnableSpaceCheck': True, 'Actor1InstanceName': '', 'IsIgnoreVectorReferenceActorRot1': False, 'Actor2InstanceName': '', 'IsIgnoreVectorReferenceActorRot2': False, 'IsEnableCameraBodyCheck': False, 'Vector2': [0.0, 2.0, 2.0], 'ActorName2': 'TreasureBox_EventStarter', 'VectorSetType2': 3, 'SpaceCheckRadius': 0.800000011920929, 'IsConsiderWater': False}) {
        if !EventCamera.EventQueryCameraCheckOcclusionToTarget({'ActorName1': 'TreasureBox_EventStarter', 'VectorSetType1': 3, 'Vector1': [0.0, 1.7999999523162842, 0.0], 'IsEnableSpaceCheck': True, 'Actor1InstanceName': '', 'IsIgnoreVectorReferenceActorRot1': False, 'Actor2InstanceName': '', 'IsIgnoreVectorReferenceActorRot2': False, 'IsEnableCameraBodyCheck': False, 'ActorName2': 'TreasureBox_EventStarter', 'Vector2': [-2.0, 2.0, 0.0], 'VectorSetType2': 3, 'SpaceCheckRadius': 0.800000011920929, 'IsConsiderWater': False}) {
            if !EventCamera.EventQueryCameraCheckOcclusionToTarget({'ActorName1': 'TreasureBox_EventStarter', 'VectorSetType1': 3, 'Vector1': [0.0, 1.7999999523162842, 0.0], 'IsEnableSpaceCheck': True, 'Actor1InstanceName': '', 'IsIgnoreVectorReferenceActorRot1': False, 'Actor2InstanceName': '', 'IsIgnoreVectorReferenceActorRot2': False, 'IsEnableCameraBodyCheck': False, 'ActorName2': 'TreasureBox_EventStarter', 'Vector2': [2.0, 2.0, 0.0], 'VectorSetType2': 3, 'SpaceCheckRadius': 0.800000011920929, 'IsConsiderWater': False}) {
                Event179:
                Dm_Locator.EventWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'TreasureBox_EventStarter', 'PositionOffset': [0.0, 2.0, 2.0], 'InstanceName': '', 'ClothWarpMode': -1, 'YAngle': 90.0, 'OffsetBase': 1, 'IsWaitEnd': False})
            } else {
                Dm_Locator.EventWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'TreasureBox_EventStarter', 'InstanceName': '', 'ClothWarpMode': -1, 'YAngle': 90.0, 'OffsetBase': 1, 'IsWaitEnd': False, 'PositionOffset': [2.0, 2.0, 0.0]})
            }
        } else {
            Dm_Locator.EventWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'TreasureBox_EventStarter', 'InstanceName': '', 'ClothWarpMode': -1, 'YAngle': 90.0, 'OffsetBase': 1, 'IsWaitEnd': False, 'PositionOffset': [-2.0, 2.0, 0.0]})
        }
    } else {
        goto Event179
    }
}

void CheckHitPlayerCamera() {
    if !Player_Event.EventQueryPlayerIsChild() {
        if !EventCamera.EventQueryCameraCheckOcclusionToTarget({'VectorSetType1': 3, 'Actor1InstanceName': '', 'IsIgnoreVectorReferenceActorRot1': False, 'Actor2InstanceName': '', 'IsIgnoreVectorReferenceActorRot2': False, 'VectorSetType2': 3, 'Vector1': [0.0, 0.0, 0.0], 'ActorName1': 'PlayerCamera', 'ActorName2': 'Player_Event', 'IsEnableSpaceCheck': False, 'Vector2': [0.0, 1.5, 0.0], 'SpaceCheckRadius': 0.0, 'IsEnableCameraBodyCheck': True, 'IsConsiderWater': False}) {
            Event79:
            return fnv1a("Hit")
        } else {
            Event86:
            return 0xa9d63ee1
        }
    } else
    if !EventCamera.EventQueryCameraCheckOcclusionToTarget({'VectorSetType1': 3, 'Actor1InstanceName': '', 'IsIgnoreVectorReferenceActorRot1': False, 'Actor2InstanceName': '', 'IsIgnoreVectorReferenceActorRot2': False, 'VectorSetType2': 3, 'Vector1': [0.0, 0.0, 0.0], 'ActorName1': 'PlayerCamera', 'ActorName2': 'Player_Event', 'Vector2': [0.0, 1.899999976158142, 0.0], 'IsEnableSpaceCheck': False, 'SpaceCheckRadius': 0.0, 'IsEnableCameraBodyCheck': True, 'IsConsiderWater': False}) {
        goto Event79
    } else {
        goto Event86
    }
}
