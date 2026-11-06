-------- EventFlow: Dm_LostWood_0040 --------

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerUnequip', 'EventPlayerTurnAndLook', 'EventPlayerPlayASForFlowchart', 'EventPlayerWarpToTargetPosAndRot']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: NPC_Scrub_Deku_TargetPractice[HitTargetOfDekuScrub]
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventTalk', 'EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_LostWood_0040/Dm_LostWood_0040_Enemy_ScrubDeku/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_LostWood_0040_ScrubDeku.root.as'}

Actor: EventCamera
entrypoint: None()
actions: ['EventTriggerSendReserveCameraResetMessageToPlayerCamera', 'EventMoveToTargetPosCamera', 'EventTriggerCameraSavePoint', 'EventMoveCameraToSavePoint', 'EventTriggerRequestCameraShake']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: Dm_Locator[BulletBag]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 1}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[1]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: PostProcessingActor
entrypoint: None()
actions: ['EventSetAdvancedDoFForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Item_BulletBag_Medium[LostWood]
entrypoint: None()
actions: ['EventTriggerModelBind', 'EventPlayAS', 'EventGoOffstageForUser', 'EventTriggerSetModelLodManual']
queries: []
params: {'EventMemberCreateMethod': 1, 'UseEventModelAnime': 'Work/Model/Event/Dm_LostWood_0040/Dm_LostWood_0040_Item_BulletBag_Medium/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_LostWood_0040_Item_BulletBag_Medium.root.as', 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False}

Actor: Item_BulletBag_Large[LostWood]
entrypoint: None()
actions: ['EventTriggerModelBind', 'EventPlayAS', 'EventGoOffstageForUser', 'EventTriggerSetModelLodManual']
queries: []
params: {'EventMemberCreateMethod': 1, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_LostWood_0040/Dm_LostWood_0040_Item_BulletBag_Large/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_LostWood_0040_Item_BulletBag_Large.root.as'}

Actor: PouchSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryIsExistInPouch', 'EventQueryHasRuppe']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool', 'EventTriggerSetGameDataInt']
queries: ['EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: UISystemActor
entrypoint: None()
actions: ['EventCloseRupeeDisplay', 'EventTriggerOpenRupeeDisplay']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[2]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Dm_Locator
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 1}

Actor: GameSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryIsDistanceBetweenActorsClose']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void EntryPoint0() {
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'LostWood_HitTargetOfDekuScrub_FirstClear', 'Index': -1}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Lostwood_HitTargetOfDekuScrub_Talked_01'}) {

            call Dm_LostWood_0040_SecondTure()

        } else {

            call Dm_LostWood_0040_SecondFalse()

        }
        if !PouchSystemActor.EventQueryIsExistInPouch({'Actor': 'Item_Wallet_Medium', 'Num': 1}) {
            if !PouchSystemActor.EventQueryIsExistInPouch({'Num': 1, 'Actor': 'Item_Wallet_Large'}) {
                if !PouchSystemActor.EventQueryHasRuppe({'Value': 1000}) {
                    Event79:

                    call HitTargetOfDekuScrub_WalletFull()

                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Lostwood_HitTargetOfDekuScrub_Talked_01', 'Value': True})
                    GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'Lostwood_HitTargetOfDekuScrub_NumOfConsecutiveHit', 'Index': -1, 'Value': 0})
                    NPC_Scrub_Deku_TargetPractice[HitTargetOfDekuScrub].EventPlayAS({'IsAnimeDriven': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsWaitEnd': False, 'ASName': 'Dig'})
                } else {
                    Event37:

                    call Dm_SY_GetInEvent.GetInEvent_NotLookatObjectTurnOff({'ActorName': 'TBox_Rupee_Green'})

                    EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetPolicy': 0, 'CameraResetInterpolateCountScale': 0.0})
                    Event89:
                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Lostwood_HitTargetOfDekuScrub_Talked_01', 'Value': True})
                    GameDataActor.EventTriggerSetGameDataInt({'GameDataName': 'Lostwood_HitTargetOfDekuScrub_NumOfConsecutiveHit', 'Index': -1, 'Value': 0})
                    NPC_Scrub_Deku_TargetPractice[HitTargetOfDekuScrub].EventPlayAS({'IsAnimeDriven': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsWaitEnd': False, 'ASName': 'Dig'})
                }
            } else
            if !PouchSystemActor.EventQueryHasRuppe({'Value': 500}) {
                goto Event79
            } else {
                goto Event37
            }
        } else
        if !PouchSystemActor.EventQueryHasRuppe({'Value': 200}) {
            goto Event79
        } else {
            goto Event37
        }
    } else {
        NPC_Scrub_Deku_TargetPractice[HitTargetOfDekuScrub].EventTriggerParticipateEvent()

        call InitTalk.Sub_InitTalk_Npc_Deku({'Arg_Greeting': 3, 'Arg_Turn': 3, 'Arg_Actor': ActorIdentifier(name="NPC_Scrub_Deku_TargetPractice", sub_name="HitTargetOfDekuScrub")})


        fork {
            Player_Event.EventPlayerTurnAndLook({'Target': 3, 'ActorName': 'NPC_Scrub_Deku_TargetPractice', 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'InstanceName': 'HitTargetOfDekuScrub', 'UseNormalTurn': False, 'IsDoNavi': True})
        } {
            Item_BulletBag_Large[LostWood].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
        } {
            Item_BulletBag_Medium[LostWood].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
        } {
            Dm_Locator.EventWarpToTargetPosAndRot({'Position': [16.0, 100.0, 0.0], 'IsWaitEnd': True, 'YAngle': 0.0, 'ClothWarpMode': -1})
        }

        EventCamera.EventTriggerCameraSavePoint()

        call C01()


        fork {
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'IsGet.Item_BulletBag_Medium', 'Index': -1}) {

                call Dm_SY_GetInEvent.GetInEvent_NotLookatObjectTurnOff({'ActorName': 'Item_BulletBag_Large'})

                EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetPolicy': 0, 'CameraResetInterpolateCountScale': 0.0})
                Event84:
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'LostWood_HitTargetOfDekuScrub_FirstClear', 'Index': -1, 'Value': True})
            } else {

                call Dm_SY_GetInEvent.GetInEvent_NotLookatObjectTurnOff({'ActorName': 'Item_BulletBag_Medium'})

                EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetPolicy': 0, 'CameraResetInterpolateCountScale': 0.0})
                goto Event84
            }
        } {
            EventSystemActor[2].EventWait({'IsWaitEnd': True, 'Frames': 25})

            fork {
                Item_BulletBag_Large[LostWood].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
            } {
                Item_BulletBag_Medium[LostWood].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
            }

        } {
            NPC_Scrub_Deku_TargetPractice[HitTargetOfDekuScrub].EventPlayAS({'IsAnimeDriven': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsWaitEnd': False, 'ASName': 'C02-Loop'})
        }

        goto Event89
    }
}

void C01() {
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})

    fork {

        call C01_Cam()

    } {
        NPC_Scrub_Deku_TargetPractice[HitTargetOfDekuScrub].EventTalk({'MessageId': 'EventFlowMsg/HitTargetOfDekuScrub:Talk_01_01', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'C01', 'IsWaitEnd': True, 'IsCloseDialog': False, 'EndDialogOption': 3, 'MaintainPerformanceState': 0})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
        NPC_Scrub_Deku_TargetPractice[HitTargetOfDekuScrub].EventTalk({'ASName': 'Talk', 'MessageId': 'EventFlowMsg/HitTargetOfDekuScrub:Talk_01_02', 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsWaitEnd': True, 'MaintainPerformanceState': 0})
    } {
        if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'Player_Event', 'ActorNameB': 'Dm_Locator', 'CheckDistance': 3.0, 'InstanceNameA': '', 'IsAnchorActorA': False, 'InstanceNameB': '', 'IsAnchorActorB': False, 'IsTargetPlayingAllEvent': False}) {
            Player_Event.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'Position': [19.0, 100.0, 0.18000000715255737], 'YAngle': 0.0, 'UseDemoWait': True, 'ASCommand': 'EvtWait', 'ClothWarpMode': 0, 'EnableInAir': False})
            Player_Event.EventPlayerTurnAndLook({'Target': 3, 'ActorName': 'NPC_Scrub_Deku_TargetPractice', 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'InstanceName': 'HitTargetOfDekuScrub', 'UseNormalTurn': False, 'IsDoNavi': True})
            Event85:
            Player_Event.EventPlayerUnequip({'IsWaitEnd': True})
        } else {
            goto Event85
        }
    }

    Dm_Locator[BulletBag].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': -72.0, 'ClothWarpMode': -1, 'Position': [40.240299224853516, 103.0, -4.733640193939209]})

    fork {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 57})
        EventCamera.EventTriggerRequestCameraShake({'ApplyType': 0, 'LoopEndCount': 1, 'IsRumbleController': False, 'Pattern': 7, 'Power': 0.07999999821186066})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'MoveTime': 80, 'TargetFovy': 21.5, 'PosVector': [34.2599983215332, 103.08999633789062, -2.799999952316284], 'AtVector': [38.959999084472656, 103.08000183105469, -4.309999942779541], 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 210})
    } {
        EventSystemActor[1].EventWait({'IsWaitEnd': True, 'Frames': 80})
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'EndDistance': 2.049999952316284, 'EndBluarLevel': 2.690000057220459, 'IsWaitEnd': True, 'IsAutoFocalDist': False, 'StartBluarLevel': 0.0, 'IsPrimaryApply': False, 'StartFNumber': 100.0, 'EndFNumber': 100.0, 'StartDistance': 2.700000047683716, 'RequiredFrame': 60, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        NPC_Scrub_Deku_TargetPractice[HitTargetOfDekuScrub].EventPlayAS({'IsAnimeDriven': False, 'IsWaitEnd': True, 'ASName': 'C02', 'Partial': '', 'ForceFadeInFrame': -1.0, 'IsAllSlot': False})
        NPC_Scrub_Deku_TargetPractice[HitTargetOfDekuScrub].EventPlayAS({'IsAnimeDriven': False, 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'ASName': 'C02-Loop'})
    } {
        if !PouchSystemActor.EventQueryIsExistInPouch({'Num': 1, 'Actor': 'Item_BulletBag_Medium'}) {
            Item_BulletBag_Large[LostWood].EventTriggerSetModelLodManual({'LodLevel': 0})
            Item_BulletBag_Large[LostWood].EventTriggerModelBind({'RotOffset': [0.0, 0.0, 0.0], 'TransOffset': [0.0, 0.0, 0.0], 'ActorName': 'Dm_Locator', 'BoneName': '', 'InstanceName': 'BulletBag'})
            Item_BulletBag_Large[LostWood].EventPlayAS({'ASName': 'C02', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
        } else {
            Item_BulletBag_Medium[LostWood].EventTriggerSetModelLodManual({'LodLevel': 0})
            Item_BulletBag_Medium[LostWood].EventTriggerModelBind({'RotOffset': [0.0, 0.0, 0.0], 'TransOffset': [0.0, 0.0, 0.0], 'ActorName': 'Dm_Locator', 'BoneName': '', 'InstanceName': 'BulletBag'})
            Item_BulletBag_Medium[LostWood].EventPlayAS({'ASName': 'C02', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
        }
    }

}

void Dm_LostWood_0040_SecondTure() {
    NPC_Scrub_Deku_TargetPractice[HitTargetOfDekuScrub].EventTriggerParticipateEvent()

    call InitTalk.Sub_InitTalk_Npc_Deku({'Arg_Greeting': 3, 'Arg_Turn': 3, 'Arg_Actor': ActorIdentifier(name="NPC_Scrub_Deku_TargetPractice", sub_name="HitTargetOfDekuScrub")})


    fork {
        Player_Event.EventPlayerTurnAndLook({'Target': 3, 'ActorName': 'NPC_Scrub_Deku_TargetPractice', 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'InstanceName': 'HitTargetOfDekuScrub', 'UseNormalTurn': False, 'IsDoNavi': True})
    } {
        Item_BulletBag_Large[LostWood].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        Item_BulletBag_Medium[LostWood].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    }

    EventCamera.EventTriggerCameraSavePoint()
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})

    fork {

        call C01_Cam()

    } {
        NPC_Scrub_Deku_TargetPractice[HitTargetOfDekuScrub].EventTalk({'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'C01', 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/HitTargetOfDekuScrub:Talk_01_03', 'IsCloseDialog': False, 'EndDialogOption': 3, 'MaintainPerformanceState': 0})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
        NPC_Scrub_Deku_TargetPractice[HitTargetOfDekuScrub].EventTalk({'ASName': 'Talk', 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/HitTargetOfDekuScrub:Talk_01_04', 'MaintainPerformanceState': 0})
    } {
        Player_Event.EventPlayerUnequip({'IsWaitEnd': True})
    }

}

void Dm_LostWood_0040_SecondFalse() {
    NPC_Scrub_Deku_TargetPractice[HitTargetOfDekuScrub].EventTriggerParticipateEvent()

    call InitTalk.Sub_InitTalk_Npc_Deku({'Arg_Greeting': 3, 'Arg_Turn': 3, 'Arg_Actor': ActorIdentifier(name="NPC_Scrub_Deku_TargetPractice", sub_name="HitTargetOfDekuScrub")})


    fork {
        Player_Event.EventPlayerTurnAndLook({'Target': 3, 'ActorName': 'NPC_Scrub_Deku_TargetPractice', 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'InstanceName': 'HitTargetOfDekuScrub', 'UseNormalTurn': False, 'IsDoNavi': True})
    } {
        Item_BulletBag_Large[LostWood].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    } {
        Item_BulletBag_Medium[LostWood].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
    }

    EventCamera.EventTriggerCameraSavePoint()
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})

    fork {

        call C01_Cam()

    } {
        NPC_Scrub_Deku_TargetPractice[HitTargetOfDekuScrub].EventTalk({'MessageId': 'EventFlowMsg/HitTargetOfDekuScrub:Talk_01_01', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'C01', 'IsWaitEnd': True, 'IsCloseDialog': False, 'EndDialogOption': 3, 'MaintainPerformanceState': 0})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
        NPC_Scrub_Deku_TargetPractice[HitTargetOfDekuScrub].EventTalk({'ASName': 'Talk', 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsWaitEnd': True, 'MessageId': 'EventFlowMsg/HitTargetOfDekuScrub:Talk_01_04', 'MaintainPerformanceState': 0})
    } {
        Player_Event.EventPlayerUnequip({'IsWaitEnd': True})
    }

}

void C01_Cam() {
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'TargetFovy': 21.5, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'PosVector': [34.2599983215332, 102.44000244140625, -2.799999952316284], 'AtVector': [38.900001525878906, 103.38999938964844, -4.210000038146973], 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'TargetFovy': 21.5, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'PosVector': [34.2599983215332, 102.44000244140625, -2.799999952316284], 'AtVector': [38.900001525878906, 103.38999938964844, -4.210000038146973], 'EnableCameraAlpha': True, 'MoveTime': 3, 'IsEnableRevertFast': False})
    EventCamera.EventMoveToTargetPosCamera({'PosVector': [34.27989959716797, 103.12670135498047, -2.7799630165100098], 'IsAtVectorReferenceActorPosOnce': True, 'AtVector': [38.849998474121094, 104.35679626464844, -4.179999828338623], 'TargetFovy': 21.5, 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'MoveTime': 18, 'IsEnableRevertFast': False})
    EventCamera.EventMoveToTargetPosCamera({'PosVector': [34.27989959716797, 103.12670135498047, -2.7799630165100098], 'IsAtVectorReferenceActorPosOnce': True, 'AtVector': [38.849998474121094, 104.35679626464844, -4.179999828338623], 'TargetFovy': 21.5, 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'MoveTime': 4, 'IsEnableRevertFast': False})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'PosVector': [35.279998779296875, 103.0999984741211, -3.119999885559082], 'TargetFovy': 21.5, 'AtVector': [38.959999084472656, 103.12000274658203, -4.300000190734863], 'EnableCameraAlpha': True, 'MoveTime': 28, 'IsEnableRevertFast': False})
}

void HitTargetOfDekuScrub_WalletFull() {
    Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtTalk', 'ClothWarpMode': 0})
    EventCamera.EventMoveCameraToSavePoint({'CollisionInterpolateSkip': True, 'IsWaitEnd': True, 'ReviseMode': 0, 'MoveFrame': 60, 'IsRestoreDoF': False})
    UISystemActor.EventTriggerOpenRupeeDisplay({'IsNeedMaxNum': False, 'IsWaitChoiceBtnIn': False})
    NPC_Scrub_Deku_TargetPractice[HitTargetOfDekuScrub].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/HitTargetOfDekuScrub:Talk_01_05', 'MaintainPerformanceState': 0})
    UISystemActor.EventCloseRupeeDisplay({'IsWaitEnd': True})
}
