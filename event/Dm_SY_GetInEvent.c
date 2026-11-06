-------- EventFlow: Dm_SY_GetInEvent --------

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerConversate', 'EventPlayerPlayASForFlowchart', 'EventPlayerTurnAndLook', 'EventTriggerPlayerRequestLookAtTheFrontLock', 'EventIgnitionShowItem', 'EventDeleteShowItem', 'EventCreateShowItemFromActorFileName', 'EventTriggerPlayerLookAtObject', 'EventPlayerDisplayBottleInShop', 'EventTriggerEmitXLink', 'EventTriggerSoundDisableSpMode', 'EventTriggerPlayerRequestLookAtTheFront', 'EventPlayerWarpToTargetActor', 'EventTriggerEquipmentUserRequestChangeState', 'EventTriggerSetModelLodManual']
queries: ['EventQueryPlayerIsChild', 'EventQueryPlayerIsEquipWeapon']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveCameraToSavePoint', 'EventTriggerCameraSavePoint', 'EventMoveToTargetPosCamera', 'EventBustShotCamera', 'EventMoveCameraToSavePointImmediate']
queries: ['EventQueryCameraCheckOcclusionToTarget']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Dm_Locator
entrypoint: None()
actions: ['EventWarpToTargetActor']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 1}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerSoundStartFanfare']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventNaviMoveAroundToPlayer', 'EventTriggerChangeEmotion', 'EventNaviTreasureboxSmall', 'EventGoOffstageForUser', 'EventNaviWarpToPlayerHomePosition', 'EventWarpToTargetActor']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: EventEffectEmitter
entrypoint: None()
actions: ['EventEffectStartGetItem', 'EventEffectStopGetItem']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: UISystemActor
entrypoint: None()
actions: ['EventEventFadeOut', 'EventTriggerSetDisplayHeartGauge', 'EventTriggerReserveBornMPGaugeDouble', 'EventBornMPGaugeDouble', 'EventTriggerReserveBornMPGauge', 'EventBornMPGauge', 'EventTriggerReserveBornHeartGaugeDefence', 'EventBornHeartGaugeDefence', 'EventWaitStableNumDisplay']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: PouchSystemActor
entrypoint: None()
actions: ['EventTriggerAddOrRemovePouchContent', 'EventTriggerSetForGetWindow', 'EventTriggerAddGameDataIntToRupee', 'EventTriggerPushToEmptyBottle']
queries: ['EventQueryIsAutoSavePouchContent', 'EventQueryPouchContentGetType', 'EventQueryCheckPouchContentCategory']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventTriggerRequestAutoSave', 'EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Item_ZeldaLetter
entrypoint: None()
actions: ['EventGoOffstageForUser']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[0]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataInt']
queries: ['EventQueryIsBool', 'EventQueryIsGameDataBool', 'EventQueryIsGameDataInt']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: PostProcessingActor
entrypoint: None()
actions: ['EventSetDoFForFlowchart', 'EventNorifyCutChangeForGraphics']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: DevelopEventSystemActor
entrypoint: None()
actions: ['EventDemoProductSupportComment']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor[Distance]
entrypoint: None()
actions: []
queries: ['EventQueryIsDistanceBetweenActorsClose']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Obj_Spirit_Poe_Imprisoned_01[Poe1]
entrypoint: None()
actions: ['EventTriggerStartFadeOut', 'EventTriggerStartFadeIn']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_EventStarter[GetInEventInEquipedBottle(Npc_EventStarter)]
entrypoint: GetInEventInEquipedBottle(Npc_EventStarter)
actions: ['EventTriggerBecomeSpeaker']
queries: []
params: None

Actor: Npc_EventStarter[GetInEventItemSwordMedigoron(Npc_EventStarter)]
entrypoint: GetInEventItemSwordMedigoron(Npc_EventStarter)
actions: ['EventPlayAS', 'EventGoOffstageForUser']
queries: []
params: None

Actor: Npc_EventStarter[GetInEvent_NotTurn(Npc_EventStarter)]
entrypoint: GetInEvent_NotTurn(Npc_EventStarter)
actions: ['EventPlayAS', 'EventGoOffstageForUser']
queries: []
params: None

Actor: Npc_EventStarter[GetInEvent_NotTurn_DisplayGet(Npc_EventStarter)]
entrypoint: GetInEvent_NotTurn_DisplayGet(Npc_EventStarter)
actions: ['EventPlayAS', 'EventGoOffstageForUser']
queries: []
params: None

Actor: Npc_EventStarter[GetInEvent_NotTurnForPosCamera(Npc_EventStarter)]
entrypoint: GetInEvent_NotTurnForPosCamera(Npc_EventStarter)
actions: ['EventPlayAS', 'EventGoOffstageForUser']
queries: []
params: None

Actor: Enemy_Scrub_Business[GetInEvent_NotTurn_2DShop(Enemy_Scrub_Business)]
entrypoint: GetInEvent_NotTurn_2DShop(Enemy_Scrub_Business)
actions: ['EventPlayAS', 'EventGoOffstageForUser', 'EventDoNothing']
queries: []
params: None

Actor: Npc_EventStarter[GetInEventInBottle_2DShop(Npc_EventStarter)]
entrypoint: GetInEventInBottle_2DShop(Npc_EventStarter)
actions: ['EventDoNothing']
queries: []
params: None

Actor: Npc_EventStarter[GetInEvent_NotTurn_BombBag(Npc_EventStarter)]
entrypoint: GetInEvent_NotTurn_BombBag(Npc_EventStarter)
actions: ['EventWarpToTargetActor', 'EventPlayAS', 'EventGoOffstageForUser', 'EventDoNothing']
queries: []
params: None

Actor: Npc_EventStarter[GetInEvent_NotTurn_FixedCamera_WarpLink(Npc_EventStarter)]
entrypoint: GetInEvent_NotTurn_FixedCamera_WarpLink(Npc_EventStarter)
actions: ['EventPlayAS', 'EventGoOffstageForUser', 'EventDoNothing']
queries: []
params: None

Actor: Npc_EventStarter[GetInEvent_NotTurn_Fado(Npc_EventStarter)]
entrypoint: GetInEvent_NotTurn_Fado(Npc_EventStarter)
actions: ['EventPlayAS', 'EventGoOffstageForUser', 'EventDoNothing']
queries: []
params: None

Actor: Npc_EventStarter[GetInEventInBottle_BlueBottleShop(Npc_EventStarter)]
entrypoint: GetInEventInBottle_BlueBottleShop(Npc_EventStarter)
actions: []
queries: []
params: None

Actor: Npc_EventStarter[GetInEvent_NotTurnForPosCamera_BigGoron(Npc_EventStarter)]
entrypoint: GetInEvent_NotTurnForPosCamera_BigGoron(Npc_EventStarter)
actions: ['EventPlayAS']
queries: []
params: None

Actor: Npc_EventStarter[GetInEvent_NotTurn_PosCam_InvNPC(Npc_EventStarter)]
entrypoint: GetInEvent_NotTurn_PosCam_InvNPC(Npc_EventStarter)
actions: ['EventGoOffstageForUser', 'EventTriggerChangeEmotion', 'EventPlayAS']
queries: []
params: None

Actor: Npc_EventStarter[GetInEvent_Poeshop(Npc_EventStarter)]
entrypoint: GetInEvent_Poeshop(Npc_EventStarter)
actions: ['EventPlayAS', 'EventGoOffstageForUser']
queries: []
params: None

Actor: Npc_EventStarter[back_other(Npc_EventStarter)]
entrypoint: back_other(Npc_EventStarter)
actions: ['EventDoNothing']
queries: []
params: None

void GetInEvent() {
    Player_Event.EventCreateShowItemFromActorFileName({'IsWaitEnd': True, 'Actor': 'ActorName'})

    call TurnGetAnimation({'ActorName': 'ActorName'})


    call GetPouchContent.GetPouchContentByActorName_ForGetInEvent({'ActorName': 'ActorName', 'IsGetInEvent': True})


    call Dm_SY_Get.CheckHeart({'ActorName': 'ActorName'})


    call DeleteShowItem()

    Player_Event.EventTriggerPlayerLookAtObject({'Target': 1, 'TurnFaceControlType': 3, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0})
    Player_Event.EventPlayerConversate({'IsWaitEnd': True, 'EventGreetType': 3})

    call ActionGuide.ActionGuide({'ActorName': 'ActorName'})

    Event315:
    Npc_Navi.EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})

    call NaviEventCommon.Sub_InitTalkNavi_NPC_GetDemo({'LookAtTarget': 1, 'IsLookAtObject': True, 'LookAtActorName': 'Npc_EventStarter', 'LookAtInstanceName': ''})

}

void SimpleShop_Get() {
    EventCamera.EventTriggerCameraSavePoint()
    if !Player_Event.EventQueryPlayerIsChild() {

        call TurnGet_SetLocator({'ActorName': 'ActorName'})


        fork {
            switch PouchSystemActor.EventQueryPouchContentGetType({'ActorName': 'ActorName', 'GameDataName': ''}) {
              case 0:
                Player_Event.EventPlayerTurnAndLook({'Target': 3, 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ActorName': 'Dm_Locator', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'UseNormalTurn': True, 'KeepTalkWait': False, 'IsDoNavi': False, 'UpperASCommand': 'DemoGet', 'IsWaitEnd': False})
                Event678:
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 40})
                Player_Event.EventTriggerPlayerRequestLookAtTheFrontLock({'IsImmediate': False})
              case [1, 2, 3]:
                Player_Event.EventPlayerTurnAndLook({'Target': 3, 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ActorName': 'Dm_Locator', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'UpperASCommand': 'DemoGet_Smile', 'UseNormalTurn': True, 'KeepTalkWait': False, 'IsWaitEnd': False, 'IsDoNavi': False})
                goto Event678
            }
        } {
            EventSystemActor[0].EventWait({'IsWaitEnd': True, 'Frames': 10})

            fork {
                switch PouchSystemActor.EventQueryPouchContentGetType({'ActorName': 'ActorName', 'GameDataName': ''}) {
                  case 0:
                    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'CameraCollisionMode': 1, 'PosVectorSetType': 3, 'Actor1ActorName': 'Dm_Locator', 'Actor2ActorName': 'Player_Event', 'AtVectorSetType': 4, 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'PosVector': [0.0, 0.0, 0.0], 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'MoveTime': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'AtVector': [0.0, 1.2000000476837158, 0.0], 'TargetFovy': 50.0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
                  case [1, 2, 3]:
                    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'CameraCollisionMode': 1, 'PosVectorSetType': 3, 'Actor1ActorName': 'Dm_Locator', 'Actor2ActorName': 'Player_Event', 'AtVectorSetType': 4, 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'PosVector': [0.0, 0.0, 0.0], 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'MoveTime': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'AtVector': [0.0, 1.2000000476837158, 0.0], 'TargetFovy': 44.099998474121094, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
                }
            } {

                call ChildDoF()

            }

        }

    } else
    switch PouchSystemActor.EventQueryPouchContentGetType({'ActorName': 'ActorName', 'GameDataName': ''}) {
      case 0:
        Dm_Locator.EventWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Player_Event', 'OffsetBase': 1, 'IsWaitEnd': True, 'InstanceName': '', 'YAngle': 0.0, 'ClothWarpMode': -1, 'PositionOffset': [0.0, 2.6500000953674316, -2.049999952316284]})

        fork {
            Player_Event.EventPlayerTurnAndLook({'Target': 3, 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ActorName': 'Dm_Locator', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'UseNormalTurn': True, 'UpperASCommand': 'DemoGet', 'KeepTalkWait': False, 'IsWaitEnd': False, 'IsDoNavi': False})
            EventSystemActor[0].EventWait({'IsWaitEnd': True, 'Frames': 40})
            Player_Event.EventTriggerPlayerRequestLookAtTheFrontLock({'IsImmediate': False})
        } {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})

            fork {
                EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'CameraCollisionMode': 1, 'PosVectorSetType': 3, 'Actor1ActorName': 'Dm_Locator', 'AtVectorSetType': 4, 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'PosVector': [0.0, 0.0, 0.0], 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'MoveTime': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'TargetFovy': 41.70000076293945, 'AtVector': [0.0, -1.0700000524520874, 2.4000000953674316], 'Actor2ActorName': 'Dm_Locator', 'IsEnableRevertFast': False})
            } {

                call AdultDoF()

            }

        }

      case [1, 2, 3]:
        Dm_Locator.EventWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Player_Event', 'OffsetBase': 1, 'IsWaitEnd': True, 'InstanceName': '', 'YAngle': 0.0, 'PositionOffset': [0.0, 2.6500000953674316, -1.75], 'ClothWarpMode': -1})

        fork {
            Player_Event.EventPlayerTurnAndLook({'Target': 3, 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ActorName': 'Dm_Locator', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'UpperASCommand': 'DemoGet_Smile', 'UseNormalTurn': True, 'KeepTalkWait': False, 'IsWaitEnd': False, 'IsDoNavi': False})
            EventSystemActor[0].EventWait({'IsWaitEnd': True, 'Frames': 40})
            Player_Event.EventTriggerPlayerRequestLookAtTheFrontLock({'IsImmediate': False})
        } {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})

            fork {
                EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'CameraCollisionMode': 1, 'PosVectorSetType': 3, 'Actor1ActorName': 'Dm_Locator', 'AtVectorSetType': 4, 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'PosVector': [0.0, 0.0, 0.0], 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'MoveTime': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'TargetFovy': 41.70000076293945, 'Actor2ActorName': 'Dm_Locator', 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'AtVector': [0.0, -1.190000057220459, 2.0999999046325684], 'IsEnableRevertFast': False})
            } {

                call AdultDoF()

            }

        }

    }
}

void GetInEventInBottle() {

    call SimpleShop_GetBottle({'ActorName': 'ActorName'})


    call GetPouchContent.PushToEmptyBottle({'Item': 'BottleItem', 'isPushToSelectedBottle': False})


    fork {
        EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'MoveFrame': 0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'IsRestoreDoF': True})
    } {
        if !GameDataActor.EventQueryIsBool({'BoolValue': 'IsTalkCamera'}) {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
        }

        fork {
            EventEffectEmitter.EventEffectStopGetItem()
        } {
            Player_Event.EventTriggerPlayerLookAtObject({'Target': 1, 'TurnFaceControlType': 3, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0})
            Player_Event.EventPlayerPlayASForFlowchart({'ForceFadeFrame': 0.0, 'ClothWarpMode': -1, 'ASCommand': 'EvtTalk', 'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'IsWaitEnd': False, 'IsAllSlot': True})
        } {
            Npc_Navi.EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})

            call NaviEventCommon.NaviWarp_PlayerHomePos({'IsLookAtPlayer': False})

        }

    }

    Event35:

    call ActionGuide.ActionGuide({'ActorName': 'ActorName'})

}

void GetInEventInEquipedBottle() {

    call SimpleShop_GetBottle({'ActorName': 'ActorName'})


    call GetPouchContent.PushToEmptyBottle({'isPushToSelectedBottle': True, 'Item': 'BottleItem'})


    fork {
        EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'MoveFrame': 0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'IsRestoreDoF': True})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})

        fork {
            EventEffectEmitter.EventEffectStopGetItem()
        } {
            Npc_EventStarter[GetInEventInEquipedBottle(Npc_EventStarter)].EventTriggerBecomeSpeaker()
            Player_Event.EventTriggerPlayerLookAtObject({'TurnFaceControlType': 3, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'Target': 3, 'ActorName': 'LookAtTargetActor'})
            Player_Event.EventPlayerPlayASForFlowchart({'ForceFadeFrame': 0.0, 'ClothWarpMode': -1, 'ASCommand': 'EvtTalk', 'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'IsWaitEnd': False, 'IsAllSlot': True})
        } {
            Npc_Navi.EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})

            call NaviEventCommon.NaviWarp_PlayerHomePos({'IsLookAtPlayer': False})

        }

    }


    call ActionGuide.ActionGuide({'ActorName': 'ActorName'})

}

void Item_Position() {

    fork {
        Player_Event.EventTriggerSetModelLodManual({'LodLevel': 0})
        Player_Event.EventIgnitionShowItem({'IsWaitEnd': True, 'ItemPos': [0.0, 0.0, 0.0], 'IsScale': False, 'CreateTime': 0.0, 'IsInvalidateShadow': True, 'IsAsPlay': True, 'ASCommand': 'Rotate_GetDemo'})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})

        fork {
            SoundSystemActor.EventTriggerSoundStartFanfare({'GameDataName': '', 'IsEnableIntro': False, 'ActorName': 'ActorName'})
        } {
            EventEffectEmitter.EventEffectStartGetItem({'GameDataName': '', 'ActorName': 'ActorName', 'IsBottleDemo': False})
        }

    }

}

void GetInEventItemSwordMedigoron() {
    Player_Event.EventCreateShowItemFromActorFileName({'IsWaitEnd': True, 'Actor': 'ActorName'})
    EventCamera.EventTriggerCameraSavePoint()
    Player_Event.EventTriggerPlayerRequestLookAtTheFrontLock({'IsImmediate': False})

    fork {

        call GetItemSwordBiggoron({'ActorName': 'ActorName'})

    } {
        Npc_EventStarter[GetInEventItemSwordMedigoron(Npc_EventStarter)].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'ASName'})
        EventSystemActor[0].EventWait({'Frames': 1, 'IsWaitEnd': True})
        Npc_EventStarter[GetInEventItemSwordMedigoron(Npc_EventStarter)].EventGoOffstageForUser({'IsWaitEnd': False, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    }

    Event106:

    call Item_Position({'ActorName': 'ActorName'})


    call GetPouchContent.GetPouchContentByActorName_ForGetInEvent({'IsGetInEvent': True, 'ActorName': 'ActorName'})


    call Dm_SY_Get.CheckHeart({'ActorName': 'ActorName'})

    Event224:

    fork {

        call back_CameraPlayer()

    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})

        call back_other({'Npc_EventStarter': 'Npc_EventStarter'})

    }


    call ActionGuide.ActionGuide({'ActorName': 'ActorName'})

}

void GetItemSwordBiggoron() {
    Dm_Locator.EventWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Player_Event', 'OffsetBase': 1, 'IsWaitEnd': True, 'InstanceName': '', 'YAngle': 0.0, 'ClothWarpMode': -1, 'PositionOffset': [0.0, 2.5299999713897705, 2.240000009536743]})

    fork {
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'IsWaitEnd': False, 'IsAllSlot': True, 'ASCommand': 'DemoGet_Smile', 'ForceFadeFrame': 0.0, 'ClothWarpMode': -1})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 40})
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'CameraCollisionMode': 1, 'PosVectorSetType': 3, 'Actor1ActorName': 'Dm_Locator', 'AtVectorSetType': 4, 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'PosVector': [0.0, 0.0, 0.0], 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'MoveTime': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor2ActorName': 'Player_Event', 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'TargetFovy': 45.0, 'AtVector': [0.0, 1.809999942779541, 0.0], 'IsEnableRevertFast': False})
    } {

        call Navi_GetBig_GetInEvent()

    } {
        PostProcessingActor.EventSetDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'EndBluarLevel': 1.0, 'IsAutoFocalDist': False, 'RequiredFrame': 0, 'EndDistance': 1.7000000476837158, 'EndFNumber': 32.0})
    }

}

void SimpleShop_GetBottle() {
    EventCamera.EventTriggerCameraSavePoint()
    if !Player_Event.EventQueryPlayerIsChild() {
        if !EventCamera.EventQueryCameraCheckOcclusionToTarget({'ActorName1': 'Player_Event', 'Actor1InstanceName': '', 'IsIgnoreVectorReferenceActorRot1': False, 'Actor2InstanceName': '', 'IsIgnoreVectorReferenceActorRot2': False, 'IsEnableSpaceCheck': False, 'SpaceCheckRadius': 0.0, 'ActorName2': 'Player_Event', 'Vector1': [0.6299999952316284, 1.659999966621399, 0.3400000035762787], 'Vector2': [0.0, 1.2999999523162842, 0.0], 'IsEnableCameraBodyCheck': False, 'VectorSetType1': 3, 'VectorSetType2': 3, 'IsConsiderWater': False}) {
            DevelopEventSystemActor.EventDemoProductSupportComment({'Text1': '障害物あり', 'IsWaitEnd': False, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3})
            SoundSystemActor.EventTriggerSoundStartFanfare({'GameDataName': '', 'IsEnableIntro': False, 'ActorName': 'ActorName'})
        } else {

            fork {

                call GetBottle_Animation({'ActorName': 'ActorName'})

            } {
                EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'CameraCollisionMode': 1, 'Actor2ActorName': 'Player_Event', 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'MoveTime': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'Player_Event', 'PosVector': [0.6299999952316284, 1.659999966621399, 0.3400000035762787], 'AtVector': [0.11999999731779099, 0.8799999952316284, -0.07000000029802322], 'TargetFovy': 41.599998474121094, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
            } {

                call Common_Camera_Pln.CameraDoF_Default()

            }

        }
    } else
    if !EventCamera.EventQueryCameraCheckOcclusionToTarget({'ActorName1': 'Player_Event', 'Actor1InstanceName': '', 'IsIgnoreVectorReferenceActorRot1': False, 'Actor2InstanceName': '', 'IsIgnoreVectorReferenceActorRot2': False, 'IsEnableSpaceCheck': False, 'SpaceCheckRadius': 0.0, 'Vector1': [0.800000011920929, 2.390000104904175, 0.25999999046325684], 'ActorName2': 'Player_Event', 'Vector2': [0.0, 1.7999999523162842, 0.0], 'IsEnableCameraBodyCheck': False, 'VectorSetType1': 3, 'VectorSetType2': 3, 'IsConsiderWater': False}) {
        DevelopEventSystemActor.EventDemoProductSupportComment({'Text1': '障害物あり', 'IsWaitEnd': False, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3})
        SoundSystemActor.EventTriggerSoundStartFanfare({'GameDataName': '', 'IsEnableIntro': False, 'ActorName': 'ActorName'})
    } else {

        fork {

            call GetBottle_Animation({'ActorName': 'ActorName'})

        } {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'CameraCollisionMode': 1, 'Actor2ActorName': 'Player_Event', 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'MoveTime': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'Actor1ActorName': 'Player_Event', 'PosVector': [0.800000011920929, 2.390000104904175, 0.25999999046325684], 'AtVector': [0.25, 1.4600000381469727, -0.14000000059604645], 'TargetFovy': 38.79999923706055, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        } {

            call Common_Camera_Pln.CameraDoF_Default()

        }

    }
}

void GetInEvent_FishingRod() {
    Player_Event.EventCreateShowItemFromActorFileName({'IsWaitEnd': True, 'Actor': 'ActorName'})

    call TurnGetAnimation({'ActorName': 'ActorName'})


    call GetPouchContent.DisplayGetByActorName({'ActorName': 'ActorName'})


    call DeleteShowItem()

    Player_Event.EventTriggerPlayerLookAtObject({'Target': 1, 'TurnFaceControlType': 3, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0})
    Player_Event.EventPlayerConversate({'IsWaitEnd': True, 'EventGreetType': 3})
    goto Event315
}

void DeleteShowItem() {

    fork {
        EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'MoveFrame': 0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'IsRestoreDoF': True})
    } {
        Player_Event.EventDeleteShowItem({'IsWaitEnd': True, 'IsFadeOut': False, 'IsScaleOut': False, 'ChangeVisibleOffWithRequestDelete': False})
    } {
        EventSystemActor[0].EventWait({'IsWaitEnd': True, 'Frames': 1})

        fork {
            EventEffectEmitter.EventEffectStopGetItem()
        } {
            PostProcessingActor.EventNorifyCutChangeForGraphics()
        }

    }

}

void GetInEvent_Demo_NotLookatObjectEntry() {
    Event118:

    call GetInEvent_DemoNotLookAtTurnOff({'ActorName': 'ActorName'})

    Event111:

    call ActionGuide.ActionGuide({'ActorName': 'ActorName'})


    fork {
        Player_Event.EventDeleteShowItem({'IsWaitEnd': True, 'IsFadeOut': False, 'IsScaleOut': False, 'ChangeVisibleOffWithRequestDelete': False})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
        EventEffectEmitter.EventEffectStopGetItem()
    }

    Npc_Navi.EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
    Npc_Navi.EventNaviMoveAroundToPlayer({'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'offset': [0.0, 0.0, 0.0], 'IsNearOffset': True, 'IsHomePosition': True, 'IsTurnLooking': False, 'MoveSpeed': 0.0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'IsOffCenterCamera': False, 'PassThrough': -1.0, 'ArrivedASCommand': 'EvtWait', 'IsWaitEnd': False, 'IsLookAtObject': False, 'LookAtTarget': 0, 'IsUseDisguiseSpeakerPos': False, 'OverwriteRotNearDist': -1.0, 'OffsetType': -1, 'IsUseAfterPlayerTurn': True})
}

void GetInEvent_NotLookatObjectTurnOff() {
    goto Event118
}

void GetInEvent_DemoNotLookAtTurnOff() {
    Player_Event.EventCreateShowItemFromActorFileName({'IsWaitEnd': True, 'Actor': 'ActorName'})

    call GetInEvent_SetLocator({'ActorName': 'ActorName'})


    call GetInEvent_Animation({'ActorName': 'ActorName'})


    call Item_Position({'ActorName': 'ActorName'})


    call GetPouchContent.GetPouchContentByActorName({'ActorName': 'ActorName'})

}

void GetInEvent_Goron() {
    Player_Event.EventCreateShowItemFromActorFileName({'IsWaitEnd': True, 'Actor': 'ActorName'})

    call GetInEvent_SetLocator({'ActorName': 'ActorName'})


    call GetInEvent_Animation({'ActorName': 'ActorName'})


    call Item_Position({'ActorName': 'ActorName'})

    PouchSystemActor.EventTriggerSetForGetWindow({'Actor': 'ActorName'})

    call GetPouchContent.OpenGetWindow()


    call ActionGuide.OpenActionGuideSceen({'ActionGuideType': 49})

    UISystemActor.EventEventFadeOut({'Color': 0, 'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Length': 1})
    Player_Event.EventTriggerSoundDisableSpMode({'ActorSoundSpMode': 1, 'FadeTime': 0.0})
    Player_Event.EventTriggerEmitXLink({'SLinkKey': 'GoronRing_Get_All', 'ELinkKey': ''})
    Event132:

    fork {
        Player_Event.EventDeleteShowItem({'IsWaitEnd': True, 'IsFadeOut': False, 'IsScaleOut': False, 'ChangeVisibleOffWithRequestDelete': False})
    } {
        EventEffectEmitter.EventEffectStopGetItem()
    }

    PouchSystemActor.EventTriggerAddOrRemovePouchContent({'Num': 1, 'IsEquipDIrect': False, 'IsSetMessageTargetActorName': True, 'Actor': 'ActorName', 'IsGetEvent': False})
    if !PouchSystemActor.EventQueryIsAutoSavePouchContent({'ActorName': 'ActorName'}) {
        GameSystemActor.EventTriggerRequestAutoSave()
        Npc_Navi.EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})

        call NaviEventCommon.NaviMove_PlayerHomePos({'IsLookAtPlayer': False, 'IsUseDisguiseSpeakerPos': False})

    }
}

void GetInEvent_GreatFairyDin() {

    call GetInEvent_DemoNotLookAtTurnOff({'ActorName': 'ActorName'})

    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GreatFairy_HasNoMPOnDinDemo'}) {
        UISystemActor.EventTriggerReserveBornMPGauge()
    }
    UISystemActor.EventTriggerSetDisplayHeartGauge({'IsDisplayHeartGauge': True})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 100})
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GreatFairy_HasNoMPOnDinDemo'}) {
        UISystemActor.EventBornMPGauge({'IsWaitEnd': True})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        goto Event111
    } else {
        goto Event111
    }
}

void GetInEvent_GreatFairyCourge() {

    call GetInEvent_DemoNotLookAtTurnOff({'ActorName': 'ActorName'})

    UISystemActor.EventTriggerReserveBornHeartGaugeDefence()
    UISystemActor.EventTriggerSetDisplayHeartGauge({'IsDisplayHeartGauge': True})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 100})
    UISystemActor.EventBornHeartGaugeDefence({'IsWaitEnd': True})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    goto Event111
}

void GetInEvent_GreatFairyWisdom() {

    call GetInEvent_DemoNotLookAtTurnOff({'ActorName': 'ActorName'})

    UISystemActor.EventTriggerReserveBornMPGaugeDouble()
    UISystemActor.EventTriggerSetDisplayHeartGauge({'IsDisplayHeartGauge': True})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 100})
    UISystemActor.EventBornMPGaugeDouble({'IsWaitEnd': True})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    goto Event111
}

void GetInEvent_NotTurn() {

    call GetInEvent_NotTurn_Sub({'ActorName': 'ActorName', 'ASName': 'ASName'})

    Event102:

    fork {

        call GetInEvent_Animation({'ActorName': 'ActorName'})

    } {
        Npc_EventStarter[GetInEvent_NotTurn_Fado(Npc_EventStarter)].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'ASName'})
        Npc_EventStarter[GetInEvent_NotTurn_Fado(Npc_EventStarter)].EventGoOffstageForUser({'IsWaitEnd': False, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    }

    goto Event106
}

void GetInEvent_SetLocator() {
    if !Player_Event.EventQueryPlayerIsChild() {
        switch PouchSystemActor.EventQueryPouchContentGetType({'GameDataName': '', 'ActorName': 'ActorName'}) {
          case 0:
            Dm_Locator.EventWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Player_Event', 'IsWaitEnd': True, 'InstanceName': '', 'YAngle': 0.0, 'OffsetBase': 1, 'PositionOffset': [0.0, 1.6200000047683716, 1.9600000381469727], 'ClothWarpMode': -1})
          case [1, 2, 3]:
            Dm_Locator.EventWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Player_Event', 'IsWaitEnd': True, 'InstanceName': '', 'YAngle': 0.0, 'OffsetBase': 1, 'PositionOffset': [0.0, 1.9600000381469727, 1.5], 'ClothWarpMode': -1})
        }
    } else
    if PouchSystemActor.EventQueryPouchContentGetType({'GameDataName': '', 'ActorName': 'ActorName'}) in [0, 1, 2, 3] {
        Dm_Locator.EventWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Player_Event', 'OffsetBase': 1, 'IsWaitEnd': True, 'InstanceName': '', 'YAngle': 0.0, 'PositionOffset': [0.0, 2.6500000953674316, 1.75], 'ClothWarpMode': -1})
    }
}

void GetInEvent_Animation() {
    if !Player_Event.EventQueryPlayerIsChild() {
        switch PouchSystemActor.EventQueryPouchContentGetType({'GameDataName': '', 'ActorName': 'ActorName'}) {
          case 0:

            fork {
                Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'IsWaitEnd': False, 'ASCommand': 'DemoGet', 'IsAllSlot': True, 'ForceFadeFrame': 0.0, 'ClothWarpMode': -1})
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 40})
            } {
                EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'CameraCollisionMode': 1, 'PosVectorSetType': 3, 'Actor1ActorName': 'Dm_Locator', 'Actor2ActorName': 'Player_Event', 'AtVectorSetType': 4, 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'PosVector': [0.0, 0.0, 0.0], 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'MoveTime': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'AtVector': [0.0, 1.2000000476837158, 0.0], 'TargetFovy': 50.0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
            } {

                call ChildDoF()

            }

          case [1, 2, 3]:

            fork {
                EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'CameraCollisionMode': 1, 'PosVectorSetType': 3, 'Actor1ActorName': 'Dm_Locator', 'Actor2ActorName': 'Player_Event', 'AtVectorSetType': 4, 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'PosVector': [0.0, 0.0, 0.0], 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'MoveTime': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'AtVector': [0.0, 1.2000000476837158, 0.0], 'TargetFovy': 44.099998474121094, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
            } {
                Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'IsWaitEnd': False, 'IsAllSlot': True, 'ASCommand': 'DemoGet_Smile', 'ForceFadeFrame': 0.0, 'ClothWarpMode': -1})
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 40})
            } {

                call Navi_GetBig_GetInEvent()

            } {

                call ChildDoF()

            }

        }
    } else
    switch PouchSystemActor.EventQueryPouchContentGetType({'GameDataName': '', 'ActorName': 'ActorName'}) {
      case 0:

        fork {
            Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'IsWaitEnd': False, 'ASCommand': 'DemoGet', 'IsAllSlot': True, 'ForceFadeFrame': 0.0, 'ClothWarpMode': -1})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 40})
        } {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'PosVectorSetType': 3, 'Actor1ActorName': 'Dm_Locator', 'AtVectorSetType': 4, 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'PosVector': [0.0, 0.0, 0.0], 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'MoveTime': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'TargetFovy': 41.70000076293945, 'Actor2ActorName': 'Dm_Locator', 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'AtVector': [0.0, -1.190000057220459, -2.0999999046325684], 'IsEnableRevertFast': False})
        } {

            call AdultDoF()

        }

      case [1, 2, 3]:

        fork {
            Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'IsWaitEnd': False, 'IsAllSlot': True, 'ASCommand': 'DemoGet_Smile', 'ForceFadeFrame': 0.0, 'ClothWarpMode': -1})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 40})
        } {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'PosVectorSetType': 3, 'Actor1ActorName': 'Dm_Locator', 'AtVectorSetType': 4, 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'PosVector': [0.0, 0.0, 0.0], 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'MoveTime': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'TargetFovy': 41.70000076293945, 'Actor2ActorName': 'Dm_Locator', 'CameraCollisionMode': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'AtVector': [0.0, -1.190000057220459, -2.0999999046325684], 'IsEnableRevertFast': False})
        } {

            call Navi_GetBig_GetInEvent()

        } {

            call AdultDoF()

        }

    }
}

void GetInEvent_NotTurn_NotNpc() {
    Player_Event.EventCreateShowItemFromActorFileName({'IsWaitEnd': True, 'Actor': 'ActorName'})
    EventCamera.EventTriggerCameraSavePoint()
    Player_Event.EventTriggerPlayerRequestLookAtTheFrontLock({'IsImmediate': False})

    call GetInEvent_SetLocator({'ActorName': 'ActorName'})


    call GetInEvent_Animation({'ActorName': 'ActorName'})


    call Item_Position({'ActorName': 'ActorName'})


    call GetPouchContent.GetPouchContentByActorName_ForGetInEvent({'IsGetInEvent': True, 'ActorName': 'ActorName'})


    call Dm_SY_Get.CheckHeart({'ActorName': 'ActorName'})


    fork {
        Player_Event.EventDeleteShowItem({'IsWaitEnd': True, 'IsFadeOut': False, 'IsScaleOut': False, 'ChangeVisibleOffWithRequestDelete': False})
        Player_Event.EventPlayerPlayASForFlowchart({'ForceFadeFrame': 0.0, 'ClothWarpMode': -1, 'ASCommand': 'EvtTalk', 'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'IsWaitEnd': False, 'IsAllSlot': True})
        if !GameDataActor.EventQueryIsBool({'BoolValue': 'IsNpcEventStarter'}) {
            Player_Event.EventTriggerPlayerLookAtObject({'Target': 1, 'TurnFaceControlType': 3, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0})
        }
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})

        call DeleteShowItem_PosCamera()

    }

    Event281:

    call ActionGuide.ActionGuide({'ActorName': 'ActorName'})

}

void GetInEvent_Zeldaletter() {
    Player_Event.EventCreateShowItemFromActorFileName({'IsWaitEnd': True, 'Actor': 'ActorName'})
    Dm_Locator.EventWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Player_Event', 'IsWaitEnd': True, 'InstanceName': '', 'YAngle': 0.0, 'OffsetBase': 1, 'PositionOffset': [0.0, 1.9600000381469727, 1.5], 'ClothWarpMode': -1})

    fork {
        Player_Event.EventTriggerPlayerRequestLookAtTheFrontLock({'IsImmediate': True})
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'IsWaitEnd': False, 'IsAllSlot': True, 'ASCommand': 'DemoGet_Smile', 'ForceFadeFrame': 0.0, 'ClothWarpMode': -1})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 40})
    } {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'CameraCollisionMode': 1, 'PosVectorSetType': 3, 'Actor1ActorName': 'Dm_Locator', 'Actor2ActorName': 'Player_Event', 'AtVectorSetType': 4, 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'PosVector': [0.0, 0.0, 0.0], 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'MoveTime': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'AtVector': [0.0, 1.2000000476837158, 0.0], 'TargetFovy': 44.099998474121094, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {

        call Navi_GetBig_GetInEvent()

    } {
        Item_ZeldaLetter.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {

        call ChildDoF()

    }


    call Item_Position({'ActorName': 'ActorName'})

    PouchSystemActor.EventTriggerSetForGetWindow({'Actor': 'ActorName'})

    call GetPouchContent.OpenGetWindow()

    UISystemActor.EventEventFadeOut({'Color': 0, 'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Length': 1})
    goto Event132
}

void GetInEvent_NotTurn_DisplayGet() {

    call GetInEvent_NotTurn_Sub({'ActorName': 'ActorName', 'ASName': 'ASName'})


    fork {

        call GetInEvent_Animation({'ActorName': 'ActorName'})

    } {
        Npc_EventStarter[GetInEvent_NotTurn_DisplayGet(Npc_EventStarter)].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'ASName'})
        Npc_EventStarter[GetInEvent_NotTurn_DisplayGet(Npc_EventStarter)].EventGoOffstageForUser({'IsWaitEnd': False, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    }


    call Item_Position({'ActorName': 'ActorName'})


    call GetPouchContent.DisplayGetByActorName({'ActorName': 'ActorName'})


    call MiniGame_SequentialChoiceTreasure.MiniGame_SequentialChoiceTreasure_GetKey_Shop()

    goto Event224
}

void GetInEvent_NotTurn_Sub() {
    Player_Event.EventCreateShowItemFromActorFileName({'IsWaitEnd': True, 'Actor': 'ActorName'})
    EventCamera.EventTriggerCameraSavePoint()
    Player_Event.EventTriggerPlayerRequestLookAtTheFrontLock({'IsImmediate': False})

    call GetInEvent_SetLocator({'ActorName': 'ActorName'})

}

void GetInEvent_Mask() {
    Player_Event.EventCreateShowItemFromActorFileName({'IsWaitEnd': True, 'Actor': 'ActorName'})

    call MaskGet()


    call Item_Position({'ActorName': 'ActorName'})


    call GetPouchContent.GetPouchContentByActorName_ForGetInEvent({'ActorName': 'ActorName', 'IsGetInEvent': True})


    fork {
        EventSystemActor[0].EventWait({'IsWaitEnd': True, 'Frames': 1})

        fork {
            EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'MoveFrame': 0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'IsRestoreDoF': True})
        } {
            EventEffectEmitter.EventEffectStopGetItem()
        } {
            PostProcessingActor.EventNorifyCutChangeForGraphics()
        } {
            Npc_Navi.EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})

            call NaviEventCommon.Sub_InitTalkNavi_NPC_GetDemo({'LookAtTarget': 1, 'IsLookAtObject': True, 'LookAtActorName': 'Npc_EventStarter', 'LookAtInstanceName': ''})

            Npc_Navi.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
        }

    } {
        Player_Event.EventDeleteShowItem({'IsWaitEnd': True, 'IsFadeOut': False, 'IsScaleOut': False, 'ChangeVisibleOffWithRequestDelete': False})
    }


    call ActionGuide.ActionGuide({'ActorName': 'ActorName'})

}

void MaskGet() {
    EventCamera.EventTriggerCameraSavePoint()
    if !Player_Event.EventQueryPlayerIsChild() {
        Dm_Locator.EventWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Player_Event', 'IsWaitEnd': True, 'InstanceName': '', 'YAngle': 0.0, 'OffsetBase': 1, 'ClothWarpMode': -1, 'PositionOffset': [0.0, 1.9600000381469727, 1.5]})

        fork {
            Player_Event.EventTriggerPlayerRequestLookAtTheFrontLock({'IsImmediate': True})
            Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'IsAllSlot': True, 'ASCommand': 'DemoGet_Smile', 'ClothWarpMode': 0, 'ForceFadeFrame': -1.0})
            EventSystemActor[0].EventWait({'IsWaitEnd': True, 'Frames': 40})
        } {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'CameraCollisionMode': 1, 'PosVectorSetType': 3, 'Actor1ActorName': 'Dm_Locator', 'Actor2ActorName': 'Player_Event', 'AtVectorSetType': 4, 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'PosVector': [0.0, 0.0, 0.0], 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'MoveTime': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'AtVector': [0.0, 1.2000000476837158, 0.0], 'TargetFovy': 44.099998474121094, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        } {

            call Navi_GetBig_GetInEvent()

        } {

            call ChildDoF()

        }

    } else {
        Dm_Locator.EventWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Player_Event', 'OffsetBase': 1, 'IsWaitEnd': True, 'InstanceName': '', 'YAngle': 0.0, 'ClothWarpMode': -1, 'PositionOffset': [0.0, 2.6500000953674316, 1.75]})

        fork {
            Player_Event.EventTriggerPlayerRequestLookAtTheFrontLock({'IsImmediate': True})
            Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'IsAllSlot': True, 'ASCommand': 'DemoGet_Smile', 'ClothWarpMode': 0, 'ForceFadeFrame': -1.0})
            EventSystemActor[0].EventWait({'IsWaitEnd': True, 'Frames': 40})
        } {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'CameraCollisionMode': 1, 'PosVectorSetType': 3, 'Actor1ActorName': 'Dm_Locator', 'AtVectorSetType': 4, 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'PosVector': [0.0, 0.0, 0.0], 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'MoveTime': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'TargetFovy': 41.70000076293945, 'Actor2ActorName': 'Dm_Locator', 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'AtVector': [0.0, -1.190000057220459, -2.0999999046325684], 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        } {

            call Navi_GetBig_GetInEvent()

        } {

            call AdultDoF()

        }

    }
}

void Navi_GetBig_GetInEvent() {
    if !GameSystemActor[Distance].EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'Player_Event', 'ActorNameB': 'Npc_Navi', 'InstanceNameA': '', 'IsAnchorActorA': False, 'InstanceNameB': '', 'IsAnchorActorB': False, 'IsTargetPlayingAllEvent': False, 'CheckDistance': 2.0}) {
        Npc_Navi.EventNaviTreasureboxSmall({'IsWaitEnd': True, 'ArrivedASCommand': '', 'IsChangeEmotionType': True, 'ArrivedEmotionType': 1})
    } else {
        Npc_Navi.EventTriggerChangeEmotion({'EmotionType': 1, 'IsActFaceOnly': False})
    }
}

void GetInEvent_NotTurnForPosCamera() {
    Player_Event.EventCreateShowItemFromActorFileName({'IsWaitEnd': True, 'Actor': 'ActorName'})
    EventCamera.EventTriggerCameraSavePoint()
    Player_Event.EventTriggerPlayerRequestLookAtTheFrontLock({'IsImmediate': False})

    fork {

        call GetInEvent_SetLocator({'ActorName': 'ActorName'})


        call GetInEvent_Animation({'ActorName': 'ActorName'})

    } {
        Npc_EventStarter[GetInEvent_NotTurnForPosCamera(Npc_EventStarter)].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'ASName'})
        Npc_EventStarter[GetInEvent_NotTurnForPosCamera(Npc_EventStarter)].EventGoOffstageForUser({'IsWaitEnd': False, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    }

    Event14:

    call Item_Position({'ActorName': 'ActorName'})


    call GetPouchContent.GetPouchContentByActorName_ForGetInEvent({'IsGetInEvent': True, 'ActorName': 'ActorName'})


    call Dm_SY_Get.CheckHeart({'ActorName': 'ActorName'})


    fork {
        Player_Event.EventDeleteShowItem({'IsWaitEnd': True, 'IsFadeOut': False, 'IsScaleOut': False, 'ChangeVisibleOffWithRequestDelete': False})
        Player_Event.EventPlayerPlayASForFlowchart({'ForceFadeFrame': 0.0, 'ClothWarpMode': -1, 'ASCommand': 'EvtTalk', 'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'IsWaitEnd': False, 'IsAllSlot': True})
        Player_Event.EventTriggerPlayerLookAtObject({'TurnFaceControlType': 3, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'Target': 'Target', 'ActorName': 'NpcActorName', 'InstanceName': 'NpcInstanceName'})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})

        fork {
            Npc_EventStarter[GetInEvent_NotTurnForPosCamera_BigGoron(Npc_EventStarter)].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'ASName'})
        } {

            call DeleteShowItem_PosCamera()

        }

    }

    goto Event281
}

void DeleteShowItem_PosCamera() {

    fork {
        EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'MoveFrame': 0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'IsRestoreDoF': True})
    } {
        Npc_Navi.EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})

        call NaviEventCommon.NaviWarp_PlayerHomePos({'IsLookAtPlayer': False})

    } {
        EventEffectEmitter.EventEffectStopGetItem()
    } {
        PostProcessingActor.EventNorifyCutChangeForGraphics()
    }

}

void GetBottle_Animation() {

    fork {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 36})
        SoundSystemActor.EventTriggerSoundStartFanfare({'GameDataName': '', 'IsEnableIntro': False, 'ActorName': 'ActorName'})
        EventEffectEmitter.EventEffectStartGetItem({'GameDataName': '', 'IsBottleDemo': True, 'ActorName': 'ActorName'})
    } {
        Player_Event.EventTriggerPlayerRequestLookAtTheFrontLock({'IsImmediate': False})
        Player_Event.EventPlayerDisplayBottleInShop({'ActorName': 'ActorName', 'IsWaitEnd': True})
    } {
        Npc_Navi.EventNaviWarpToPlayerHomePosition({'IsWaitEnd': True, 'IsDisguisedPlayerPos': False, 'Target': 0, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'OffsetBase': 0, 'PosOffset': [0.0, 0.0, 0.0], 'YAngle': 0.0, 'IsNearOffset': False, 'Type': 2})
    }

}

void GetInEventItemSwordBiggoron() {
    Player_Event.EventCreateShowItemFromActorFileName({'IsWaitEnd': True, 'Actor': 'ActorName'})
    EventCamera.EventTriggerCameraSavePoint()
    Player_Event.EventTriggerPlayerRequestLookAtTheFrontLock({'IsImmediate': False})

    call GetItemSwordBiggoron({'ActorName': 'ActorName'})


    call Item_Position({'ActorName': 'ActorName'})


    call GetPouchContent.GetPouchContentByActorName_ForGetInEvent({'IsGetInEvent': True, 'ActorName': 'ActorName'})


    call BigGoronSword_GetAndEquipCheck()


    fork {
        Player_Event.EventTriggerEquipmentUserRequestChangeState({'EquipmentState': 2, 'DynamicEquipmentSlot': 0})
        Player_Event.EventDeleteShowItem({'IsFadeOut': False, 'IsScaleOut': False, 'IsWaitEnd': False, 'ChangeVisibleOffWithRequestDelete': True})
        Player_Event.EventPlayerPlayASForFlowchart({'ForceFadeFrame': 0.0, 'ClothWarpMode': -1, 'ASCommand': 'EvtTalk', 'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'IsWaitEnd': False, 'IsAllSlot': True})
        Player_Event.EventTriggerPlayerLookAtObject({'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'Target': 3, 'TurnFaceControlType': 1, 'ActorName': 'Npc_Goron_Biggoron_Adult'})
    } {

        call DeleteShowItem_PosCamera()

    }

    goto Event281
}

void GetInEvent_NotTurn_2DShop() {
    PouchSystemActor.EventTriggerAddGameDataIntToRupee({'IsSignInverse': True, 'GameDataName': 'PriceGameData'})
    UISystemActor.EventWaitStableNumDisplay({'IsWaitEnd': True})

    call GetInEvent_NotTurn_Sub({'ActorName': 'ActorName', 'ASName': 'ASName'})


    fork {

        call GetInEvent_Animation({'ActorName': 'ActorName'})

    } {
        Enemy_Scrub_Business[GetInEvent_NotTurn_2DShop(Enemy_Scrub_Business)].EventPlayAS({'IsAnimeDriven': False, 'ASName': 'Talk_Wait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0})
        Enemy_Scrub_Business[GetInEvent_NotTurn_2DShop(Enemy_Scrub_Business)].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    }


    call Item_Position({'ActorName': 'ActorName'})


    call GetPouchContent.DisplayGetByActorName({'ActorName': 'ActorName'})

    switch PouchSystemActor.EventQueryCheckPouchContentCategory({'ActorName': 'ActorName'}) {
      case [0, 1, 2, 4, 5, 6, 7, 8, 9, 10, 11]:
        PouchSystemActor.EventTriggerAddOrRemovePouchContent({'Num': 1, 'IsEquipDIrect': False, 'IsSetMessageTargetActorName': True, 'Actor': 'ActorName', 'IsGetEvent': True})

        call Dm_SY_Get.CheckHeart({'ActorName': 'ActorName'})

        UISystemActor.EventWaitStableNumDisplay({'IsWaitEnd': True})
        Event153:

        call ActionGuide.ActionGuide({'ActorName': 'ActorName'})


        fork {
            EventCamera.EventMoveCameraToSavePointImmediate({'IsWaitEnd': True})
        } {
            Player_Event.EventTriggerEquipmentUserRequestChangeState({'DynamicEquipmentSlot': 4, 'EquipmentState': 2})
            Player_Event.EventDeleteShowItem({'IsFadeOut': False, 'IsScaleOut': False, 'ChangeVisibleOffWithRequestDelete': True, 'IsWaitEnd': False})
            Player_Event.EventPlayerPlayASForFlowchart({'ForceFadeFrame': 0.0, 'ClothWarpMode': -1, 'ASCommand': 'EvtTalk', 'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'IsWaitEnd': False, 'IsAllSlot': True})
        } {
            Enemy_Scrub_Business[GetInEvent_NotTurn_2DShop(Enemy_Scrub_Business)].EventDoNothing({'IsWaitEnd': True})
        } {
            EventEffectEmitter.EventEffectStopGetItem()
        } {
            Npc_Navi.EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})

            call NaviEventCommon.NaviWarp_PlayerHomePos({'IsLookAtPlayer': False})

        } {
            PostProcessingActor.EventNorifyCutChangeForGraphics()
        }

        Player_Event.EventTriggerPlayerRequestLookAtTheFront()
        GameSystemActor.EventTriggerRequestAutoSave()
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
      case 3:

        call DekuShield_GetAndEquipCheck({'ActorName': 'ActorName'})

        goto Event153
    }
}

void GetInEventInBottle_2DShop() {

    call SimpleShop_GetBottle({'ActorName': 'ActorName'})


    call GetPouchContent.PushToSelectedBottle({'Item': 'BottleItem'})

    PouchSystemActor.EventTriggerAddGameDataIntToRupee({'IsSignInverse': True, 'GameDataName': 'PriceGameData'})
    UISystemActor.EventWaitStableNumDisplay({'IsWaitEnd': True})

    fork {
        EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'MoveFrame': 0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'IsRestoreDoF': True})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})

        fork {
            Player_Event.EventPlayerPlayASForFlowchart({'ForceFadeFrame': 0.0, 'ClothWarpMode': -1, 'ASCommand': 'EvtTalk', 'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'IsWaitEnd': False, 'IsAllSlot': True})
        } {
            Npc_Navi.EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})

            call NaviEventCommon.NaviWarp_PlayerHomePos({'IsLookAtPlayer': False})

        } {
            EventEffectEmitter.EventEffectStopGetItem()
        } {
            Npc_EventStarter[GetInEventInBottle_2DShop(Npc_EventStarter)].EventDoNothing({'IsWaitEnd': True})
        }

    }

    Event441:
    Player_Event.EventTriggerPlayerRequestLookAtTheFront()
    PouchSystemActor.EventTriggerPushToEmptyBottle({'IsSetMessageTargetActorName': False, 'BigPoeFenceId': 0, 'IsPushToSelectedBottle': False, 'Item': 'BottleItem'})
    UISystemActor.EventWaitStableNumDisplay({'IsWaitEnd': True})

    call ActionGuide.ActionGuide({'ActorName': 'ActorName'})

    GameSystemActor.EventTriggerRequestAutoSave()
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
}

void GetInEventInBottle_FindOutCucco() {

    call SimpleShop_GetBottle({'ActorName': 'ActorName'})


    call GetPouchContent.PushToEmptyBottle({'Item': 'BottleItem', 'isPushToSelectedBottle': False})


    fork {
        EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'MoveFrame': 0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'IsRestoreDoF': True})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})

        fork {
            EventEffectEmitter.EventEffectStopGetItem()
        } {
            Player_Event.EventTriggerPlayerLookAtObject({'TurnFaceControlType': 3, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'Target': 3, 'ActorName': 'NPCActorName'})
            Player_Event.EventPlayerPlayASForFlowchart({'ForceFadeFrame': 0.0, 'ClothWarpMode': -1, 'ASCommand': 'EvtTalk', 'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'IsWaitEnd': False, 'IsAllSlot': True})
        } {
            Npc_Navi.EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})

            call NaviEventCommon.NaviWarp_PlayerHomePos_Choice({'IsLookAtPlayer': False, 'IsLeft': True})

        }

    }

    goto Event35
}

void GetInEvent_Animation_BombBag() {

    fork {
        switchcall GetInEvent_BombBag_NearWallCheck() {
          case 3315101614:
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'CameraCollisionMode': 1, 'PosVectorSetType': 3, 'Actor1ActorName': 'Dm_Locator', 'Actor2ActorName': 'Player_Event', 'AtVectorSetType': 4, 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'PosVector': [0.0, 0.0, 0.0], 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'MoveTime': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'AtVector': [0.0, 1.2000000476837158, 0.0], 'TargetFovy': 44.099998474121094, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
          case 3331879233:
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'CameraCollisionMode': 1, 'PosVectorSetType': 3, 'Actor1ActorName': 'Dm_Locator', 'Actor2ActorName': 'Player_Event', 'AtVectorSetType': 4, 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'MoveTime': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'AtVector': [0.0, 1.2000000476837158, 0.0], 'TargetFovy': 44.099998474121094, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'PosVector': [-0.20000000298023224, 0.0, 0.0], 'IsEnableRevertFast': False})
          case 3281546376:
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'CameraCollisionMode': 1, 'PosVectorSetType': 3, 'Actor1ActorName': 'Dm_Locator', 'Actor2ActorName': 'Player_Event', 'AtVectorSetType': 4, 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'MoveTime': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'AtVector': [0.0, 1.2000000476837158, 0.0], 'TargetFovy': 44.099998474121094, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'PosVector': [0.20000000298023224, 0.0, 0.0], 'IsEnableRevertFast': False})
          case 3298323995:
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'CameraCollisionMode': 1, 'PosVectorSetType': 3, 'Actor1ActorName': 'Dm_Locator', 'Actor2ActorName': 'Player_Event', 'AtVectorSetType': 4, 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'MoveTime': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'AtVector': [0.0, 1.2000000476837158, 0.0], 'TargetFovy': 44.099998474121094, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'PosVector': [0.0, 0.0, 0.20000000298023224], 'IsEnableRevertFast': False})
        }
    } {
        switchcall GetInEvent_BombBag_NearWallCheck() {
          case 3315101614:
            Event156:
            Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'IsWaitEnd': False, 'IsAllSlot': True, 'ASCommand': 'DemoGet_Smile', 'ForceFadeFrame': 0.0, 'ClothWarpMode': -1})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 40})
          case 3331879233:

            call GetInEvent_BombBag_PlayerOffset({'PositionOffset': [-0.20000000298023224, 0.0, 0.0], 'ASCommand': 'DemoGet_Smile'})

            GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'GameDataName': 'Npc_Goron_006_Child_PlayerOffsetNum', 'Value': 1})
            goto Event156
          case 3281546376:

            call GetInEvent_BombBag_PlayerOffset({'PositionOffset': [0.20000000298023224, 0.0, 0.0], 'ASCommand': 'DemoGet_Smile'})

            GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'GameDataName': 'Npc_Goron_006_Child_PlayerOffsetNum', 'Value': 2})
            goto Event156
          case 3298323995:

            call GetInEvent_BombBag_PlayerOffset({'PositionOffset': [0.0, 0.0, 0.20000000298023224], 'ASCommand': 'DemoGet_Smile'})

            GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'GameDataName': 'Npc_Goron_006_Child_PlayerOffsetNum', 'Value': 3})
            goto Event156
        }
    } {

        call Navi_GetBig_GetInEvent()

    } {

        call ChildDoF()

    }

}

void GetInEvent_NotTurn_BombBag() {

    call GetInEvent_NotTurn_Sub({'ActorName': 'ActorName', 'ASName': 'ASName'})


    fork {

        call GetInEvent_Animation_BombBag({'ActorName': 'ActorName'})

    } {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Goron_006_Child_NearWallPlayer'}) {
            Npc_EventStarter[GetInEvent_NotTurn_BombBag(Npc_EventStarter)].EventWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Npc_Goron_006_Child', 'IsWaitEnd': True, 'OffsetBase': 1, 'PositionOffset': [0.0, 0.0, -0.20000000298023224], 'InstanceName': '', 'YAngle': 0.0, 'ClothWarpMode': -1})
        }
        Npc_EventStarter[GetInEvent_NotTurn_BombBag(Npc_EventStarter)].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'ASName'})
        Npc_EventStarter[GetInEvent_NotTurn_BombBag(Npc_EventStarter)].EventGoOffstageForUser({'IsWaitEnd': False, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    }


    call Item_Position({'ActorName': 'ActorName'})


    call GetPouchContent.GetPouchContentByActorName_ForGetInEvent({'IsGetInEvent': True, 'ActorName': 'ActorName'})


    call Dm_SY_Get.CheckHeart({'ActorName': 'ActorName'})


    fork {
        EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'MoveFrame': 0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'IsRestoreDoF': True})
    } {
        Player_Event.EventDeleteShowItem({'IsWaitEnd': True, 'IsFadeOut': False, 'IsScaleOut': False, 'ChangeVisibleOffWithRequestDelete': False})
        switchcall GetInEvent_BombBag_CheckOffsetNum() {
          case 1378885196:
            Player_Event.EventPlayerPlayASForFlowchart({'ForceFadeFrame': 0.0, 'ClothWarpMode': -1, 'ASCommand': 'EvtTalk', 'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'IsWaitEnd': False, 'IsAllSlot': True})
            Event487:
            Player_Event.EventTriggerPlayerLookAtObject({'TurnFaceControlType': 3, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'Target': 'Target', 'InstanceName': 'NpcInstanceName', 'ActorName': 'NpcActorName'})
          case 1395662815:

            call GetInEvent_BombBag_PlayerOffset({'PositionOffset': [0.20000000298023224, 0.0, 0.0], 'ASCommand': 'EvtTalk'})

            goto Event487
          case 1412440434:

            call GetInEvent_BombBag_PlayerOffset({'PositionOffset': [-0.20000000298023224, 0.0, 0.0], 'ASCommand': 'EvtTalk'})

            goto Event487
          case 1429218053:

            call GetInEvent_BombBag_PlayerOffset({'PositionOffset': [0.0, 0.0, -0.20000000298023224], 'ASCommand': 'EvtTalk'})

            goto Event487
        }
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})

        fork {
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Goron_006_Child_NearWallPlayer'}) {
                Npc_EventStarter[GetInEvent_NotTurn_BombBag(Npc_EventStarter)].EventWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Npc_Goron_006_Child', 'IsWaitEnd': True, 'OffsetBase': 1, 'InstanceName': '', 'YAngle': 0.0, 'ClothWarpMode': -1, 'PositionOffset': [0.0, 0.0, 0.20000000298023224]})
            } else {
                Npc_EventStarter[GetInEvent_NotTurn_BombBag(Npc_EventStarter)].EventDoNothing({'IsWaitEnd': True})
            }
        } {
            Npc_Navi.EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})

            call NaviEventCommon.NaviWarp_PlayerHomePos({'IsLookAtPlayer': False})

        } {
            EventEffectEmitter.EventEffectStopGetItem()
        }

    }


    call ActionGuide.ActionGuide({'ActorName': 'ActorName'})

}

void GetInEvent_NotTurn_PosCamera() {
    Player_Event.EventCreateShowItemFromActorFileName({'IsWaitEnd': True, 'Actor': 'ActorName'})
    EventCamera.EventTriggerCameraSavePoint()
    Player_Event.EventTriggerPlayerRequestLookAtTheFrontLock({'IsImmediate': False})

    call GetInEvent_SetLocator({'ActorName': 'ActorName'})


    call GetInEvent_Animation({'ActorName': 'ActorName'})


    call Item_Position({'ActorName': 'ActorName'})


    call GetPouchContent.GetPouchContentByActorName_ForGetInEvent({'IsGetInEvent': True, 'ActorName': 'ActorName'})


    call Dm_SY_Get.CheckHeart({'ActorName': 'ActorName'})


    fork {
        Player_Event.EventDeleteShowItem({'IsWaitEnd': True, 'IsFadeOut': False, 'IsScaleOut': False, 'ChangeVisibleOffWithRequestDelete': False})
        Player_Event.EventPlayerPlayASForFlowchart({'ForceFadeFrame': 0.0, 'ClothWarpMode': -1, 'ASCommand': 'EvtTalk', 'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'IsWaitEnd': False, 'IsAllSlot': True})
        Player_Event.EventTriggerPlayerLookAtObject({'TurnFaceControlType': 3, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'Target': 'Target', 'ActorName': 'NpcActorName', 'InstanceName': 'NpcInstanceName'})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})

        call DeleteShowItem_PosCamera()

    }

    goto Event281
}

void GetInEvent_NotTurn_FixedCamera_WarpLink() {
    Player_Event.EventCreateShowItemFromActorFileName({'IsWaitEnd': True, 'Actor': 'ActorName'})
    EventCamera.EventTriggerCameraSavePoint()
    Player_Event.EventTriggerPlayerRequestLookAtTheFrontLock({'IsImmediate': False})

    fork {

        call GetInEvent_Animation_Bottle_Tutorial({'ActorName': 'ActorName', 'PositionOffset': 'PositionOffset'})

    } {
        Npc_EventStarter[GetInEvent_NotTurn_FixedCamera_WarpLink(Npc_EventStarter)].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'ASName'})
        Npc_EventStarter[GetInEvent_NotTurn_FixedCamera_WarpLink(Npc_EventStarter)].EventGoOffstageForUser({'IsWaitEnd': False, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    }


    call Item_Position({'ActorName': 'ActorName'})


    call GetPouchContent.GetPouchContentByActorName_ForGetInEvent({'IsGetInEvent': True, 'ActorName': 'ActorName'})


    call Dm_SY_Get.CheckHeart({'ActorName': 'ActorName'})


    fork {

        call DeleteShowItem_FixedCamera({'PosVector': 'PosVector', 'AtVector': 'AtVector'})

    } {
        Player_Event.EventDeleteShowItem({'IsWaitEnd': True, 'IsFadeOut': False, 'IsScaleOut': False, 'ChangeVisibleOffWithRequestDelete': False})
        Player_Event.EventPlayerPlayASForFlowchart({'ForceFadeFrame': 0.0, 'ClothWarpMode': -1, 'ASCommand': 'EvtTalk', 'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'IsWaitEnd': False, 'IsAllSlot': True})
        Player_Event.EventTriggerPlayerLookAtObject({'TurnFaceControlType': 3, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'Target': 'Target', 'InstanceName': 'NpcInstanceName', 'ActorName': 'NpcActorName'})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})

        fork {
            Npc_EventStarter[GetInEvent_NotTurn_FixedCamera_WarpLink(Npc_EventStarter)].EventDoNothing({'IsWaitEnd': True})
        } {
            Npc_Navi.EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})

            call NaviEventCommon.NaviWarp_PlayerHomePos({'IsLookAtPlayer': False})

        } {
            EventEffectEmitter.EventEffectStopGetItem()
        }

    }


    call ActionGuide.ActionGuide({'ActorName': 'ActorName'})

}

void DeleteShowItem_FixedCamera() {
    EventSystemActor[0].EventWait({'IsWaitEnd': True, 'Frames': 1})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'PosVector': 'PosVector', 'AtVector': 'AtVector', 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'TargetFovy': 37.0, 'IsEnableRevertFast': False})
    } {

        call Common_Camera_Pln.CameraDoF_Event_Common()

    }

}

void GetInEvent_Animation_Bottle_Tutorial() {

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'CameraCollisionMode': 1, 'Actor2ActorName': 'Player_Event', 'AtVectorSetType': 4, 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'MoveTime': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'AtVector': [0.0, 1.2000000476837158, 0.0], 'TargetFovy': 44.099998474121094, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'PosVectorSetType': 4, 'PosVector': [0.0, 1.9600000381469727, 1.5], 'Actor1ActorName': '', 'IsEnableRevertFast': False})
    } {
        Player_Event.EventPlayerWarpToTargetActor({'IsWaitEnd': True, 'OffsetBase': 1, 'InstanceName': '', 'UseDemoWait': True, 'ASCommand': 'DemoGet_Smile', 'ActorName': 'Npc_EventStarter', 'TargetActorKind': 0, 'PositionOffset': 'PositionOffset', 'YAngle': 180.0})
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'IsWaitEnd': False, 'IsAllSlot': True, 'ASCommand': 'DemoGet_Smile', 'ForceFadeFrame': 0.0, 'ClothWarpMode': -1})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 40})
    } {
        Npc_Navi.EventWarpToTargetActor({'ActorName': 'Npc_EventStarter', 'OffsetBase': 1, 'InstanceName': '', 'IsWaitEnd': True, 'TargetActorKind': 0, 'ClothWarpMode': -1, 'YAngle': 0.0, 'PositionOffset': [0.5, 0.800000011920929, 1.600000023841858]})

        call Navi_GetBig_GetInEvent()

    } {

        call ChildDoF()

    }

}

void ChildDoF() {
    PostProcessingActor.EventNorifyCutChangeForGraphics()
    PostProcessingActor.EventSetDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'EndFNumber': 60.0, 'EndBluarLevel': 1.0, 'IsAutoFocalDist': False, 'EndDistance': 2.4000000953674316, 'RequiredFrame': 0})
}

void AdultDoF() {
    PostProcessingActor.EventNorifyCutChangeForGraphics()
    PostProcessingActor.EventSetDoFForFlowchart({'IsWaitEnd': True, 'IsPrimaryApply': False, 'EndFNumber': 30.0, 'EndBluarLevel': 1.0, 'IsAutoFocalDist': False, 'EndDistance': 2.4000000953674316, 'RequiredFrame': 0})
}

void GetInEvent_BombBag_NearWallCheck() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Goron_006_Child_NearWallPlayer'}) {
        if !EventCamera.EventQueryCameraCheckOcclusionToTarget({'ActorName1': 'Player_Event', 'VectorSetType1': 3, 'ActorName2': 'Player_Event', 'VectorSetType2': 3, 'Actor1InstanceName': '', 'IsIgnoreVectorReferenceActorRot1': False, 'Actor2InstanceName': '', 'SpaceCheckRadius': 0.0, 'IsIgnoreVectorReferenceActorRot2': False, 'IsEnableSpaceCheck': False, 'Vector1': [0.0, 1.0, 0.0], 'Vector2': [0.5, 1.0, 0.0], 'IsEnableCameraBodyCheck': False, 'IsConsiderWater': False}) {
            return 3331879233
        } else
        if !EventCamera.EventQueryCameraCheckOcclusionToTarget({'ActorName1': 'Player_Event', 'VectorSetType1': 3, 'ActorName2': 'Player_Event', 'VectorSetType2': 3, 'Actor1InstanceName': '', 'IsIgnoreVectorReferenceActorRot1': False, 'Actor2InstanceName': '', 'IsIgnoreVectorReferenceActorRot2': False, 'IsEnableSpaceCheck': False, 'SpaceCheckRadius': 0.0, 'Vector1': [0.0, 1.0, 0.0], 'Vector2': [-0.5, 1.0, 0.0], 'IsEnableCameraBodyCheck': False, 'IsConsiderWater': False}) {
            return 3281546376
        } else {
            return 3298323995
        }
    } else {
        return 3315101614
    }
}

void GetInEvent_BombBag_PlayerOffset() {
    Player_Event.EventPlayerWarpToTargetActor({'IsWaitEnd': True, 'TargetActorKind': 1, 'ActorName': 'Player_Event', 'OffsetBase': 1, 'InstanceName': '', 'YAngle': 0.0, 'UseDemoWait': True, 'PositionOffset': 'PositionOffset', 'ASCommand': 'ASCommand'})
}

void GetInEvent_BombBag_CheckOffsetNum() {
    switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'Npc_Goron_006_Child_PlayerOffsetNum', 'Value': 1}) {
      case 0:
        return 1378885196
      case 1:
        return 1395662815
      case 2:
        switch GameDataActor.EventQueryIsGameDataInt({'Index': -1, 'GameDataName': 'Npc_Goron_006_Child_PlayerOffsetNum', 'Value': 3}) {
          case 0:
            return 1412440434
          case [1, 2]:
            return 1429218053
        }
    }
}

void DekuShield_GetAndEquipCheck() {
    if PouchSystemActor.EventQueryCheckPouchContentCategory({'ActorName': 'ActorName'}) == 3 {
        PouchSystemActor.EventTriggerAddOrRemovePouchContent({'Num': 1, 'IsEquipDIrect': False, 'IsSetMessageTargetActorName': True, 'IsGetEvent': False, 'Actor': 'ActorName'})
        if Player_Event.EventQueryPlayerIsEquipWeapon({'WeaponSlot': 4, 'ArmorName': 'Weapon_Shield_Hylian'})
        && Player_Event.EventQueryPlayerIsEquipWeapon({'WeaponSlot': 4, 'ArmorName': 'Item_Shield_Mirror'})
        Event509:
        && Player_Event.EventQueryPlayerIsEquipWeapon({'WeaponSlot': 4, 'ArmorName': 'Weapon_Shield_Deku'}) {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
            goto Event509
        }
    }
}

void GetInEvent_NotTurn_NotNpc_Dampe() {
    Player_Event.EventCreateShowItemFromActorFileName({'IsWaitEnd': True, 'Actor': 'ActorName'})
    EventCamera.EventTriggerCameraSavePoint()
    Player_Event.EventTriggerPlayerRequestLookAtTheFrontLock({'IsImmediate': False})

    call GetInEvent_SetLocator({'ActorName': 'ActorName'})


    call GetInEvent_Animation({'ActorName': 'ActorName'})


    call Item_Position({'ActorName': 'ActorName'})


    call GetPouchContent.GetPouchContentByActorName_ForGetInEvent({'IsGetInEvent': True, 'ActorName': 'ActorName'})


    call Dm_SY_Get.CheckHeart({'ActorName': 'ActorName'})


    fork {
        Player_Event.EventDeleteShowItem({'IsWaitEnd': True, 'IsFadeOut': False, 'IsScaleOut': False, 'ChangeVisibleOffWithRequestDelete': False})
        Player_Event.EventPlayerPlayASForFlowchart({'ForceFadeFrame': 0.0, 'ClothWarpMode': -1, 'ASCommand': 'EvtTalk', 'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'IsWaitEnd': False, 'IsAllSlot': True})
        if !GameDataActor.EventQueryIsBool({'BoolValue': 'IsNpcEventStarter'}) {
            Player_Event.EventTriggerPlayerLookAtObject({'Target': 1, 'TurnFaceControlType': 3, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0})
        }
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})

        fork {
            EventCamera.EventBustShotCamera({'IsWaitEnd': True, 'TargetActorInstanceName': '', 'Latitude': 0.0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'TargetActorName': 'Npc_Hylia_Dampe_001', 'Longitude': 0.0, 'TargetOffset': [0.0, -0.5, 0.699999988079071], 'Radius': 1.2000000476837158, 'MoveTime': 0})
        } {
            Npc_Navi.EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})

            call NaviEventCommon.NaviWarp_PlayerHomePos({'IsLookAtPlayer': False})

        } {
            EventEffectEmitter.EventEffectStopGetItem()
        }

    }

    goto Event281
}

void BigGoronSword_GetAndEquipCheck() {
    if Player_Event.EventQueryPlayerIsEquipWeapon({'ArmorName': 'Weapon_Sword_Master', 'WeaponSlot': 0})
    Event630:
    && Player_Event.EventQueryPlayerIsEquipWeapon({'ArmorName': 'Weapon_Sword_Biggoron', 'WeaponSlot': 0}) {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
        goto Event630
    }
}

void TurnGetAnimation() {
    switch PouchSystemActor.EventQueryPouchContentGetType({'ActorName': 'ActorName', 'GameDataName': ''}) {
      case 0:

        fork {
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'MiniGame_Fishing_isInCorner', 'Index': -1}) {

                call SimpleShop_GetFishingRod({'ActorName': 'ActorName'})

            } else {

                call SimpleShop_Get({'ActorName': 'ActorName'})

            }

            call Item_Position({'ActorName': 'ActorName'})

        } {
            Npc_Navi.EventNaviTreasureboxSmall({'IsWaitEnd': True, 'ArrivedASCommand': '', 'IsChangeEmotionType': False, 'ArrivedEmotionType': 0})
        }

      case [1, 2, 3]:

        fork {
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'MiniGame_Fishing_isInCorner', 'Index': -1}) {

                call SimpleShop_GetFishingRod({'ActorName': 'ActorName'})

            } else {

                call SimpleShop_Get({'ActorName': 'ActorName'})

            }

            call Item_Position({'ActorName': 'ActorName'})

        } {

            call Navi_GetBig_GetInEvent()

        }

    }
}

void TurnGet_SetLocator() {
    switch PouchSystemActor.EventQueryPouchContentGetType({'GameDataName': '', 'ActorName': 'ActorName'}) {
      case 0:
        switchcall IsSpaceTG_Child() {
          case 1843959928:
            Dm_Locator.EventWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Player_Event', 'IsWaitEnd': True, 'InstanceName': '', 'YAngle': 0.0, 'OffsetBase': 1, 'ClothWarpMode': -1, 'PositionOffset': [0.0, 1.6200000047683716, 1.9600000381469727]})
          case [1538531746, 810547195]:
            Dm_Locator.EventWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Player_Event', 'IsWaitEnd': True, 'InstanceName': '', 'OffsetBase': 1, 'PositionOffset': [0.0, 1.6200000047683716, -1.9600000381469727], 'ClothWarpMode': -1, 'YAngle': 180.0})
          case 513712005:
            Dm_Locator.EventWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Player_Event', 'IsWaitEnd': True, 'InstanceName': '', 'OffsetBase': 1, 'ClothWarpMode': -1, 'PositionOffset': [-1.9600000381469727, 1.6200000047683716, 0.0], 'YAngle': -90.0})
          case 2457286800:
            Dm_Locator.EventWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Player_Event', 'IsWaitEnd': True, 'InstanceName': '', 'OffsetBase': 1, 'ClothWarpMode': -1, 'PositionOffset': [1.9600000381469727, 1.6200000047683716, 0.0], 'YAngle': 90.0})
        }
      case [1, 2, 3]:
        switchcall IsSpaceTG_Child() {
          case 1843959928:
            Dm_Locator.EventWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Player_Event', 'OffsetBase': 1, 'IsWaitEnd': True, 'InstanceName': '', 'YAngle': 0.0, 'ClothWarpMode': -1, 'PositionOffset': [0.0, 1.9600000381469727, 1.5]})
          case [1538531746, 810547195]:
            Dm_Locator.EventWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Player_Event', 'OffsetBase': 1, 'IsWaitEnd': True, 'InstanceName': '', 'ClothWarpMode': -1, 'YAngle': 180.0, 'PositionOffset': [0.0, 1.9600000381469727, -1.5]})
          case 513712005:
            Dm_Locator.EventWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Player_Event', 'OffsetBase': 1, 'IsWaitEnd': True, 'InstanceName': '', 'ClothWarpMode': -1, 'YAngle': -90.0, 'PositionOffset': [-1.5, 1.9600000381469727, 0.0]})
          case 2457286800:
            Dm_Locator.EventWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Player_Event', 'OffsetBase': 1, 'IsWaitEnd': True, 'InstanceName': '', 'ClothWarpMode': -1, 'YAngle': 90.0, 'PositionOffset': [1.5, 1.9600000381469727, 0.0]})
        }
    }
}

void IsSpaceTG_Child() {
    if !EventCamera.EventQueryCameraCheckOcclusionToTarget({'VectorSetType1': 3, 'IsEnableSpaceCheck': True, 'Actor1InstanceName': '', 'IsIgnoreVectorReferenceActorRot1': False, 'Actor2InstanceName': '', 'IsIgnoreVectorReferenceActorRot2': False, 'VectorSetType2': 3, 'ActorName1': 'Player_Event', 'ActorName2': 'Player_Event', 'IsEnableCameraBodyCheck': True, 'Vector1': [0.0, 1.9600000381469727, -1.5], 'SpaceCheckRadius': 0.25, 'Vector2': [0.0, 1.0, -0.30000001192092896], 'IsConsiderWater': False}) {
        if !EventCamera.EventQueryCameraCheckOcclusionToTarget({'VectorSetType1': 3, 'IsEnableSpaceCheck': True, 'Actor1InstanceName': '', 'IsIgnoreVectorReferenceActorRot1': False, 'Actor2InstanceName': '', 'IsIgnoreVectorReferenceActorRot2': False, 'VectorSetType2': 3, 'ActorName1': 'Player_Event', 'ActorName2': 'Player_Event', 'IsEnableCameraBodyCheck': True, 'Vector1': [-1.5, 1.9600000381469727, 0.0], 'SpaceCheckRadius': 0.25, 'Vector2': [-0.30000001192092896, 1.0, 0.0], 'IsConsiderWater': False}) {
            if !EventCamera.EventQueryCameraCheckOcclusionToTarget({'VectorSetType1': 3, 'IsEnableSpaceCheck': True, 'Actor1InstanceName': '', 'IsIgnoreVectorReferenceActorRot1': False, 'Actor2InstanceName': '', 'IsIgnoreVectorReferenceActorRot2': False, 'VectorSetType2': 3, 'ActorName1': 'Player_Event', 'ActorName2': 'Player_Event', 'Vector1': [1.5, 1.9600000381469727, 0.0], 'SpaceCheckRadius': 0.25, 'IsEnableCameraBodyCheck': True, 'Vector2': [0.30000001192092896, 1.0, 0.0], 'IsConsiderWater': False}) {
                if !EventCamera.EventQueryCameraCheckOcclusionToTarget({'VectorSetType1': 3, 'IsEnableSpaceCheck': True, 'Actor1InstanceName': '', 'IsIgnoreVectorReferenceActorRot1': False, 'Actor2InstanceName': '', 'IsIgnoreVectorReferenceActorRot2': False, 'VectorSetType2': 3, 'ActorName1': 'Player_Event', 'ActorName2': 'Player_Event', 'IsEnableCameraBodyCheck': True, 'Vector1': [0.0, 1.9600000381469727, 1.5], 'SpaceCheckRadius': 0.25, 'Vector2': [0.0, 1.0, 0.30000001192092896], 'IsConsiderWater': False}) {
                    return 810547195
                } else {
                    return 1843959928
                }
            } else {
                return 2457286800
            }
        } else {
            return 513712005
        }
    } else {
        return 1538531746
    }
}

void IsSpaceTG_Adult_Fado() {
    if !EventCamera.EventQueryCameraCheckOcclusionToTarget({'VectorSetType1': 3, 'IsEnableSpaceCheck': True, 'Actor1InstanceName': '', 'IsIgnoreVectorReferenceActorRot1': False, 'Actor2InstanceName': '', 'IsIgnoreVectorReferenceActorRot2': False, 'VectorSetType2': 3, 'ActorName1': 'Player_Event', 'ActorName2': 'Player_Event', 'Vector1': [0.0, 2.5, 1.5499999523162842], 'IsEnableCameraBodyCheck': True, 'Vector2': [0.0, 2.0, 0.30000001192092896], 'SpaceCheckRadius': 0.30000001192092896, 'IsConsiderWater': False}) {
        if !EventCamera.EventQueryCameraCheckOcclusionToTarget({'VectorSetType1': 3, 'IsEnableSpaceCheck': True, 'Actor1InstanceName': '', 'IsIgnoreVectorReferenceActorRot1': False, 'Actor2InstanceName': '', 'IsIgnoreVectorReferenceActorRot2': False, 'VectorSetType2': 3, 'ActorName1': 'Player_Event', 'ActorName2': 'Player_Event', 'Vector1': [0.0, 2.5, -1.5499999523162842], 'IsEnableCameraBodyCheck': True, 'Vector2': [0.0, 2.0, -0.30000001192092896], 'SpaceCheckRadius': 0.30000001192092896, 'IsConsiderWater': False}) {
            if !EventCamera.EventQueryCameraCheckOcclusionToTarget({'VectorSetType1': 3, 'IsEnableSpaceCheck': True, 'Actor1InstanceName': '', 'IsIgnoreVectorReferenceActorRot1': False, 'Actor2InstanceName': '', 'IsIgnoreVectorReferenceActorRot2': False, 'VectorSetType2': 3, 'ActorName1': 'Player_Event', 'ActorName2': 'Player_Event', 'Vector1': [1.5499999523162842, 2.5, 0.0], 'IsEnableCameraBodyCheck': True, 'Vector2': [0.30000001192092896, 2.0, 0.0], 'SpaceCheckRadius': 0.30000001192092896, 'IsConsiderWater': False}) {
                return 810547195
            } else {
                return 2457286800
            }
        } else {
            return 1538531746
        }
    } else {
        return 1843959928
    }
}

void GetInEvent_NotTurn_Fado() {
    Player_Event.EventCreateShowItemFromActorFileName({'IsWaitEnd': True, 'Actor': 'ActorName'})
    EventCamera.EventTriggerCameraSavePoint()
    Player_Event.EventTriggerPlayerRequestLookAtTheFrontLock({'IsImmediate': False})
    switchcall IsSpaceTG_Adult_Fado() {
      case 1843959928:
        Dm_Locator.EventWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Player_Event', 'OffsetBase': 1, 'IsWaitEnd': True, 'InstanceName': '', 'YAngle': 0.0, 'ClothWarpMode': -1, 'PositionOffset': [0.0, 2.6500000953674316, 1.75]})
        goto Event102
      case [1538531746, 810547195, 2457286800]:
        Dm_Locator.EventWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Player_Event', 'OffsetBase': 1, 'IsWaitEnd': True, 'InstanceName': '', 'ClothWarpMode': -1, 'YAngle': 1.75, 'PositionOffset': [0.5, 2.6500000953674316, 1.75]})

        fork {
            Player_Event.EventPlayerWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Player_Event', 'OffsetBase': 1, 'ASCommand': 'DemoGet_Smile', 'IsWaitEnd': False, 'InstanceName': '', 'YAngle': 0.0, 'UseDemoWait': True, 'PositionOffset': [0.5, 0.0, 0.0]})
            EventSystemActor[0].EventWait({'IsWaitEnd': True, 'Frames': 40})
            Player_Event.EventTriggerPlayerRequestLookAtTheFrontLock({'IsImmediate': False})
        } {

            call Navi_GetBig_GetInEvent()

        } {

            fork {
                EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'CameraCollisionMode': 1, 'PosVectorSetType': 3, 'Actor1ActorName': 'Dm_Locator', 'AtVectorSetType': 4, 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'PosVector': [0.0, 0.0, 0.0], 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'MoveTime': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'TargetFovy': 41.70000076293945, 'Actor2ActorName': 'Dm_Locator', 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'AtVector': [0.0, -1.190000057220459, -2.0999999046325684], 'IsEnableRevertFast': False})
            } {

                call AdultDoF()

            }

        }


        call Item_Position({'ActorName': 'ActorName'})


        call GetPouchContent.GetPouchContentByActorName_ForGetInEvent({'IsGetInEvent': True, 'ActorName': 'ActorName'})


        fork {
            EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'MoveFrame': 0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'IsRestoreDoF': True})
        } {
            Player_Event.EventDeleteShowItem({'IsWaitEnd': True, 'IsFadeOut': False, 'IsScaleOut': False, 'ChangeVisibleOffWithRequestDelete': False})
            Player_Event.EventPlayerWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Player_Event', 'OffsetBase': 1, 'IsWaitEnd': False, 'InstanceName': '', 'YAngle': 0.0, 'UseDemoWait': True, 'PositionOffset': [-0.5, 0.0, 0.0], 'ASCommand': 'EvtTalk'})
            Player_Event.EventTriggerPlayerLookAtObject({'TurnFaceControlType': 3, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'Target': 'Target', 'InstanceName': 'NpcInstanceName', 'ActorName': 'NpcActorName'})
        } {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})

            fork {
                Npc_EventStarter[GetInEvent_NotTurn_Fado(Npc_EventStarter)].EventDoNothing({'IsWaitEnd': True})
            } {
                Npc_Navi.EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})

                call NaviEventCommon.NaviWarp_PlayerHomePos({'IsLookAtPlayer': False})

            } {
                EventEffectEmitter.EventEffectStopGetItem()
            }

        }


        call NaviEventCommon.Sub_InitTalkNavi_NPC_GetDemo({'LookAtTarget': 1, 'IsLookAtObject': True, 'LookAtActorName': 'Npc_EventStarter', 'LookAtInstanceName': ''})

    }
}

void GetInEventInBottle_BlueBottleShop() {

    call SimpleShop_GetBottle({'ActorName': 'ActorName'})


    call GetPouchContent.PushToSelectedBottle({'Item': 'BottleItem'})

    PouchSystemActor.EventTriggerAddGameDataIntToRupee({'IsSignInverse': True, 'GameDataName': 'PriceGameData'})
    UISystemActor.EventWaitStableNumDisplay({'IsWaitEnd': True})

    fork {
        EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'MoveFrame': 0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'IsRestoreDoF': True})
    } {
        if !GameDataActor.EventQueryIsBool({'BoolValue': 'IsTalkCamera'}) {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
        }

        fork {
            EventEffectEmitter.EventEffectStopGetItem()
        } {
            Player_Event.EventTriggerPlayerLookAtObject({'Target': 1, 'TurnFaceControlType': 3, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0})
            Player_Event.EventPlayerPlayASForFlowchart({'ForceFadeFrame': 0.0, 'ClothWarpMode': -1, 'ASCommand': 'EvtTalk', 'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'IsWaitEnd': False, 'IsAllSlot': True})
        } {
            Npc_Navi.EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})

            call NaviEventCommon.NaviWarp_PlayerHomePos({'IsLookAtPlayer': False})

        }

    }

    goto Event441
}

void GetInEvent_NotTurnForPosCamera_BigGoron() {
    Player_Event.EventCreateShowItemFromActorFileName({'IsWaitEnd': True, 'Actor': 'ActorName'})
    EventCamera.EventTriggerCameraSavePoint()
    Player_Event.EventTriggerPlayerRequestLookAtTheFrontLock({'IsImmediate': False})

    fork {

        call GetInEvent_SetLocator({'ActorName': 'ActorName'})


        call GetInEvent_Animation({'ActorName': 'ActorName'})

    } {
        GameSystemActor.EventWait({'Frames': 5, 'IsWaitEnd': True})
        Npc_EventStarter[GetInEvent_NotTurnForPosCamera_BigGoron(Npc_EventStarter)].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'ASName'})
    }

    goto Event14
}

void SimpleShop_GetFishingRod() {
    EventCamera.EventTriggerCameraSavePoint()
    if !Player_Event.EventQueryPlayerIsChild() {
        Dm_Locator.EventWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Player_Event', 'IsWaitEnd': True, 'InstanceName': '', 'OffsetBase': 1, 'ClothWarpMode': -1, 'YAngle': -90.0, 'PositionOffset': [-2.700000047683716, 1.6200000047683716, 0.15000000596046448]})

        fork {
            Player_Event.EventPlayerWarpToTargetActor({'InstanceName': '', 'OffsetBase': 1, 'TargetActorKind': 1, 'ActorName': 'Player_Event', 'YAngle': 0.0, 'UseDemoWait': True, 'ASCommand': 'EvtWait', 'PositionOffset': [-0.75, 0.0, 0.15000000596046448], 'IsWaitEnd': True})
            switch PouchSystemActor.EventQueryPouchContentGetType({'GameDataName': '', 'ActorName': 'ActorName'}) {
              case 0:
                Player_Event.EventPlayerTurnAndLook({'Target': 3, 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ActorName': 'Dm_Locator', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'UseNormalTurn': True, 'KeepTalkWait': False, 'IsDoNavi': False, 'UpperASCommand': 'DemoGet', 'IsWaitEnd': False})
                Event730:
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 40})
                Player_Event.EventTriggerPlayerRequestLookAtTheFrontLock({'IsImmediate': False})
              case [1, 2, 3]:
                Player_Event.EventPlayerTurnAndLook({'Target': 3, 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ActorName': 'Dm_Locator', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'UpperASCommand': 'DemoGet_Smile', 'UseNormalTurn': True, 'KeepTalkWait': False, 'IsWaitEnd': False, 'IsDoNavi': False})
                goto Event730
            }
        } {

            fork {
                switch PouchSystemActor.EventQueryPouchContentGetType({'GameDataName': '', 'ActorName': 'ActorName'}) {
                  case 0:
                    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'CameraCollisionMode': 1, 'PosVectorSetType': 3, 'Actor1ActorName': 'Dm_Locator', 'Actor2ActorName': 'Player_Event', 'AtVectorSetType': 4, 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'PosVector': [0.0, 0.0, 0.0], 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'MoveTime': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'AtVector': [0.0, 1.2000000476837158, 0.0], 'TargetFovy': 50.0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
                  case [1, 2, 3]:
                    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'CameraCollisionMode': 1, 'PosVectorSetType': 3, 'Actor1ActorName': 'Dm_Locator', 'Actor2ActorName': 'Player_Event', 'AtVectorSetType': 4, 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'PosVector': [0.0, 0.0, 0.0], 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'MoveTime': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'AtVector': [0.0, 1.2000000476837158, 0.0], 'TargetFovy': 44.099998474121094, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
                }
            } {

                call ChildDoF()

            }

        }

    } else
    switch PouchSystemActor.EventQueryPouchContentGetType({'GameDataName': '', 'ActorName': 'ActorName'}) {
      case 0:
        Dm_Locator.EventWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Player_Event', 'OffsetBase': 1, 'IsWaitEnd': True, 'InstanceName': '', 'YAngle': 0.0, 'ClothWarpMode': -1, 'PositionOffset': [-0.75, 2.6500000953674316, -2.049999952316284]})

        fork {
            Player_Event.EventPlayerWarpToTargetActor({'InstanceName': '', 'OffsetBase': 1, 'TargetActorKind': 1, 'ActorName': 'Player_Event', 'YAngle': 0.0, 'UseDemoWait': True, 'ASCommand': 'EvtWait', 'PositionOffset': [-0.75, 0.0, 0.15000000596046448], 'IsWaitEnd': True})
            Player_Event.EventPlayerTurnAndLook({'Target': 3, 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ActorName': 'Dm_Locator', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'UseNormalTurn': True, 'UpperASCommand': 'DemoGet', 'KeepTalkWait': False, 'IsWaitEnd': False, 'IsDoNavi': False})
            EventSystemActor[0].EventWait({'IsWaitEnd': True, 'Frames': 40})
            Player_Event.EventTriggerPlayerRequestLookAtTheFrontLock({'IsImmediate': False})
        } {

            fork {
                EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'CameraCollisionMode': 1, 'PosVectorSetType': 3, 'Actor1ActorName': 'Dm_Locator', 'AtVectorSetType': 4, 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'PosVector': [0.0, 0.0, 0.0], 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'MoveTime': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'TargetFovy': 41.70000076293945, 'AtVector': [0.0, -1.0700000524520874, 2.4000000953674316], 'Actor2ActorName': 'Dm_Locator', 'IsEnableRevertFast': False})
            } {

                call AdultDoF()

            }

        }

      case [1, 2, 3]:
        Dm_Locator.EventWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Player_Event', 'OffsetBase': 1, 'IsWaitEnd': True, 'InstanceName': '', 'YAngle': 0.0, 'ClothWarpMode': -1, 'PositionOffset': [-0.75, 2.6500000953674316, -1.75]})

        fork {
            Player_Event.EventPlayerWarpToTargetActor({'InstanceName': '', 'OffsetBase': 1, 'TargetActorKind': 1, 'ActorName': 'Player_Event', 'YAngle': 0.0, 'UseDemoWait': True, 'ASCommand': 'EvtWait', 'PositionOffset': [-0.75, 0.0, 0.15000000596046448], 'IsWaitEnd': True})
            Player_Event.EventPlayerTurnAndLook({'Target': 3, 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ActorName': 'Dm_Locator', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'UpperASCommand': 'DemoGet_Smile', 'UseNormalTurn': True, 'KeepTalkWait': False, 'IsWaitEnd': False, 'IsDoNavi': False})
            EventSystemActor[0].EventWait({'IsWaitEnd': True, 'Frames': 40})
            Player_Event.EventTriggerPlayerRequestLookAtTheFrontLock({'IsImmediate': False})
        } {

            fork {
                EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'CameraCollisionMode': 1, 'PosVectorSetType': 3, 'Actor1ActorName': 'Dm_Locator', 'AtVectorSetType': 4, 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'PosVector': [0.0, 0.0, 0.0], 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'MoveTime': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'TargetFovy': 41.70000076293945, 'Actor2ActorName': 'Dm_Locator', 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'AtVector': [0.0, -1.190000057220459, 2.0999999046325684], 'IsEnableRevertFast': False})
            }

        }

    }
}

void GetInEvent_NotTurn_PosCam_InvNPC() {
    Player_Event.EventCreateShowItemFromActorFileName({'IsWaitEnd': True, 'Actor': 'ActorName'})
    EventCamera.EventTriggerCameraSavePoint()
    Player_Event.EventTriggerPlayerRequestLookAtTheFrontLock({'IsImmediate': False})

    call GetInEvent_SetLocator({'ActorName': 'ActorName'})


    fork {
        Npc_EventStarter[GetInEvent_NotTurn_PosCam_InvNPC(Npc_EventStarter)].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {

        call GetInEvent_Animation({'ActorName': 'ActorName'})

    }


    call Item_Position({'ActorName': 'ActorName'})


    call GetPouchContent.GetPouchContentByActorName_ForGetInEvent({'IsGetInEvent': True, 'ActorName': 'ActorName'})


    call Dm_SY_Get.CheckHeart({'ActorName': 'ActorName'})


    fork {
        Player_Event.EventDeleteShowItem({'IsWaitEnd': True, 'IsFadeOut': False, 'IsScaleOut': False, 'ChangeVisibleOffWithRequestDelete': False})
        Player_Event.EventPlayerPlayASForFlowchart({'ForceFadeFrame': 0.0, 'ClothWarpMode': -1, 'ASCommand': 'EvtTalk', 'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'IsWaitEnd': False, 'IsAllSlot': True})
        Player_Event.EventTriggerPlayerLookAtObject({'TurnFaceControlType': 3, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'Target': 'Target', 'ActorName': 'NpcActorName', 'InstanceName': 'NpcInstanceName'})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})

        call DeleteShowItem_PosCamera()

    } {
        Npc_EventStarter[GetInEvent_NotTurn_PosCam_InvNPC(Npc_EventStarter)].EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
        Npc_EventStarter[GetInEvent_NotTurn_PosCam_InvNPC(Npc_EventStarter)].EventPlayAS({'Partial': '', 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'ASName', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0})
    }

    goto Event281
}

void GetInEvent_Poeshop() {

    call GetInEvent_NotTurn_Sub({'ActorName': 'ActorName', 'ASName': 'ASName'})


    fork {

        call GetInEvent_Animation({'ActorName': 'ActorName'})

    } {
        Npc_EventStarter[GetInEvent_Poeshop(Npc_EventStarter)].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'ASName', 'IsWaitEnd': False})
        Npc_EventStarter[GetInEvent_Poeshop(Npc_EventStarter)].EventGoOffstageForUser({'IsWaitEnd': False, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        Obj_Spirit_Poe_Imprisoned_01[Poe1].EventTriggerStartFadeOut({'FadeFrame': 0})
    }


    call Item_Position({'ActorName': 'ActorName'})


    call GetPouchContent.GetPouchContentByActorName_ForGetInEvent({'IsGetInEvent': True, 'ActorName': 'ActorName'})


    call Dm_SY_Get.CheckHeart({'ActorName': 'ActorName'})


    fork {

        call back_CameraPlayer()

    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})

        fork {

            call back_other({'Npc_EventStarter': 'Npc_EventStarter'})

        } {
            Obj_Spirit_Poe_Imprisoned_01[Poe1].EventTriggerStartFadeIn({'FadeFrame': 0})
        }

    }


    call ActionGuide.ActionGuide({'ActorName': 'ActorName'})

}

void back_CameraPlayer() {

    fork {
        EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'MoveFrame': 0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'IsRestoreDoF': True})
    } {
        Player_Event.EventDeleteShowItem({'IsWaitEnd': True, 'IsFadeOut': False, 'IsScaleOut': False, 'ChangeVisibleOffWithRequestDelete': False})
        Player_Event.EventPlayerPlayASForFlowchart({'ForceFadeFrame': 0.0, 'ClothWarpMode': -1, 'ASCommand': 'EvtTalk', 'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'IsWaitEnd': False, 'IsAllSlot': True})
        Player_Event.EventTriggerPlayerLookAtObject({'TurnFaceControlType': 3, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'Target': 'Target', 'InstanceName': 'NpcInstanceName', 'ActorName': 'NpcActorName'})
    }

}

void back_other() {

    fork {
        Npc_EventStarter[back_other(Npc_EventStarter)].EventDoNothing({'IsWaitEnd': True})
    } {
        EventEffectEmitter.EventEffectStopGetItem()
    } {
        Npc_Navi.EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})

        call NaviEventCommon.NaviWarp_PlayerHomePos({'IsLookAtPlayer': False})

    } {
        PostProcessingActor.EventNorifyCutChangeForGraphics()
    }

}
