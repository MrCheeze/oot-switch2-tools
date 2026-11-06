-------- EventFlow: NPC_Kokiri_DekuScrub_Talk --------

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait']
queries: ['EventQueryIsDistanceBetweenActorsClose']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerTurnAndLook', 'EventPlayerConversate', 'EventPlayerUnequip', 'EventPlayerBackMoveForAnchor', 'EventTriggerPlayerLookAtObject', 'EventTriggerPlayerRequestLookAtTheFrontLock', 'EventPlayerWait']
queries: ['EventQueryIsDirToTarget', 'EventQueryPlayerIsChild']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: Enemy_Scrub_Deku_Brothers[One]
entrypoint: None()
actions: ['EventTriggerRequestDeath', 'EventTalk', 'EventGoOffstageForUser', 'EventTriggerSetCctForwardSpeedZero', 'EventScrubDekuTurnAround', 'EventTriggerSoundChangeForbidEmitFootStep', 'EventScrubDekuRunAway', 'EventTriggerSoundDisableSpMode']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Enemy_Scrub_Deku_Brothers[Two]
entrypoint: None()
actions: ['EventGoOffstageForUser', 'EventTriggerParticipateEvent', 'EventTriggerSoundDisableSpMode', 'EventTriggerRequestDeath']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Enemy_Scrub_Deku_Brothers[Three]
entrypoint: None()
actions: ['EventGoOffstageForUser', 'EventTriggerParticipateEvent', 'EventTriggerSoundDisableSpMode', 'EventTriggerRequestDeath']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerSoundReadRiddle']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void EntryPoint0() {
    Enemy_Scrub_Deku_Brothers[Two].EventTriggerParticipateEvent()
    Enemy_Scrub_Deku_Brothers[Two].EventTriggerSoundDisableSpMode({'ActorSoundSpMode': 2, 'FadeTime': 0.5})
    Enemy_Scrub_Deku_Brothers[Three].EventTriggerParticipateEvent()
    Enemy_Scrub_Deku_Brothers[Three].EventTriggerSoundDisableSpMode({'ActorSoundSpMode': 2, 'FadeTime': 0.5})
    Enemy_Scrub_Deku_Brothers[One].EventTriggerSetCctForwardSpeedZero({'IsWaitEnd': True})

    fork {
        Enemy_Scrub_Deku_Brothers[One].EventScrubDekuTurnAround({'IsWaitEnd': True})
    } {

        call Get_StoneOfForest.InitTalk_Attacked({'EventTalkCameraType': 2, 'LookAtActorName': 'Enemy_Scrub_Deku_Brothers', 'LookAtInstanceName': 'One', 'Arg_Actor': ActorIdentifier(name="Enemy_Scrub_Deku_Brothers", sub_name="One")})

    }

    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'InsideTheDekuTree_Room_KokiriCover'}) {
        if !Player_Event.EventQueryPlayerIsChild() {
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'InsideTheDekuTree_Room_KokiriCover_Irregular'}) {
                Event39:
                Enemy_Scrub_Deku_Brothers[One].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'IsNotOpenIfSkipedMostRecent': False, 'OverrideStyle': 1, 'ASName': 'Talk', 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Deku_14'})
                Player_Event.EventPlayerUnequip({'IsWaitEnd': True})
                Player_Event.EventPlayerConversate({'IsWaitEnd': True, 'EventGreetType': 3})
                Enemy_Scrub_Deku_Brothers[One].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'IsNotOpenIfSkipedMostRecent': False, 'OverrideStyle': 1, 'ASName': 'Talk', 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Deku_15'})
                if !Player_Event.EventQueryPlayerIsChild() {
                    Enemy_Scrub_Deku_Brothers[One].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'IsNotOpenIfSkipedMostRecent': False, 'OverrideStyle': 1, 'ASName': 'Talk', 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Deku_12_02'})
                } else {
                    Enemy_Scrub_Deku_Brothers[One].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'IsNotOpenIfSkipedMostRecent': False, 'OverrideStyle': 1, 'ASName': 'Talk', 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Deku_12'})
                }

                call Get_StoneOfForest.FocusFaceCamera({'Actor1ActorName': 'Enemy_Scrub_Deku_Brothers', 'Actor1InstanceName': 'One'})

                Enemy_Scrub_Deku_Brothers[One].EventTriggerSoundChangeForbidEmitFootStep()
                Enemy_Scrub_Deku_Brothers[One].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'IsNotOpenIfSkipedMostRecent': False, 'OverrideStyle': 1, 'ASName': 'Talk', 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Deku_13'})
                Enemy_Scrub_Deku_Brothers[One].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'IsNotOpenIfSkipedMostRecent': False, 'OverrideStyle': 1, 'ASName': 'Talk', 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Deku_17'})
                Event18:
                Enemy_Scrub_Deku_Brothers[One].EventScrubDekuRunAway({'IsWaitEnd': True})
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
                Player_Event.EventTriggerPlayerRequestLookAtTheFrontLock({'IsImmediate': False})

                fork {
                    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'GameDataName': 'InsideTheDekuTree_Room_Kokiridown', 'Index': -1})

                    call TreasureBoxAppear.Act_Magic()

                    SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 0})
                    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
                } {
                    EventCamera.EventMoveToTargetPosCamera({'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'IsWaitEnd': True, 'CameraCollisionLookAtActorOffset': [0.0, 0.0, 0.0], 'Actor1ActorName': 'DestinationAnchor', 'MoveTotargetPosType': 1, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'AtVectorSetType': 3, 'CameraCollisionMode': 2, 'CameraCollisionLookAtActor': 1, 'EnableCameraAlpha': True, 'Actor2InstanceName': '', 'AtVector': [0.0, 0.5, 0.0], 'Actor2ActorName': '', 'PosVectorSetType': 3, 'PosVector': [0.0, 2.5, 5.0], 'Actor1InstanceName': 'DekuTree_T', 'MoveTime': 0, 'IsEnableRevertFast': False})
                } {

                    fork {
                        Enemy_Scrub_Deku_Brothers[One].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
                        Enemy_Scrub_Deku_Brothers[One].EventTriggerSoundDisableSpMode({'ActorSoundSpMode': 4, 'FadeTime': 0.0})
                    } {
                        Enemy_Scrub_Deku_Brothers[Two].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
                        Enemy_Scrub_Deku_Brothers[Two].EventTriggerSoundDisableSpMode({'ActorSoundSpMode': 4, 'FadeTime': 0.0})
                    } {
                        Enemy_Scrub_Deku_Brothers[Three].EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
                        Enemy_Scrub_Deku_Brothers[Three].EventTriggerSoundDisableSpMode({'ActorSoundSpMode': 4, 'FadeTime': 0.0})
                    }

                } {
                    Player_Event.EventPlayerWait({'IsWaitEnd': True})
                    Player_Event.EventTriggerPlayerLookAtObject({'ActorName': 'DestinationAnchor', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'Target': 5, 'InstanceName': 'Treasure_Pos'})
                    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
                    if Player_Event.EventQueryIsDirToTarget({'Target': 5, 'ActorName': 'DestinationAnchor', 'AngleThreshold': 90.0, 'WorldPos': [0.0, 0.0, 0.0], 'InstanceName': 'Treasure_Pos'}) {
                        Player_Event.EventPlayerTurnAndLook({'Target': 5, 'ActorName': 'DestinationAnchor', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'IsWaitEnd': True, 'UseNormalTurn': False, 'IsDoNavi': True, 'InstanceName': 'Treasure_Pos'})
                    }
                    if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'IsAnchorActorB': True, 'ActorNameB': 'DestinationAnchor', 'ActorNameA': 'Player_Event', 'IsAnchorActorA': False, 'IsTargetPlayingAllEvent': False, 'InstanceNameA': '', 'CheckDistance': 0.5, 'InstanceNameB': 'Treasure_Pos'}) {
                        Player_Event.EventPlayerBackMoveForAnchor({'IsWaitEnd': True, 'AnchorActorName': 'DestinationAnchor', 'OffsetDist': 2.0, 'AnchorInstanceName': 'Treasure_Pos'})
                        Event52:
                        Player_Event.EventPlayerTurnAndLook({'Target': 5, 'ActorName': 'DestinationAnchor', 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'IsWaitEnd': True, 'UseNormalTurn': False, 'IsDoNavi': True, 'InstanceName': 'Treasure_Pos'})
                    } else
                    if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'IsAnchorActorB': True, 'ActorNameB': 'DestinationAnchor', 'ActorNameA': 'Player_Event', 'IsAnchorActorA': False, 'IsTargetPlayingAllEvent': False, 'InstanceNameA': '', 'CheckDistance': 1.5, 'InstanceNameB': 'Treasure_Pos'}) {
                        Player_Event.EventPlayerBackMoveForAnchor({'AnchorActorName': 'DestinationAnchor', 'OffsetDist': 1.0, 'IsWaitEnd': False, 'AnchorInstanceName': 'Treasure_Pos'})
                    }
                    goto Event52
                }

                Enemy_Scrub_Deku_Brothers[Two].EventTriggerRequestDeath({'DeathReason': 10})
                Enemy_Scrub_Deku_Brothers[Three].EventTriggerRequestDeath({'DeathReason': 10})
                Enemy_Scrub_Deku_Brothers[One].EventTriggerRequestDeath({'DeathReason': 10})
            } else {
                Event68:
                GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'InsideTheDekuTree_Room_KokiriCover_Irregular'})
                Event16:
                GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'InsideTheDekuTree_Room_KokiriCover'})
                Enemy_Scrub_Deku_Brothers[One].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'IsNotOpenIfSkipedMostRecent': False, 'OverrideStyle': 1, 'ASName': 'Talk', 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Deku_10'})
                Player_Event.EventPlayerUnequip({'IsWaitEnd': True})
                Player_Event.EventPlayerConversate({'IsWaitEnd': True, 'EventGreetType': 3})
                Enemy_Scrub_Deku_Brothers[One].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'IsNotOpenIfSkipedMostRecent': False, 'OverrideStyle': 1, 'ASName': 'Talk', 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Deku_11'})
                if !Player_Event.EventQueryPlayerIsChild() {
                    Enemy_Scrub_Deku_Brothers[One].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'IsNotOpenIfSkipedMostRecent': False, 'OverrideStyle': 1, 'ASName': 'Talk', 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Deku_12_02'})
                } else {
                    Enemy_Scrub_Deku_Brothers[One].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'IsNotOpenIfSkipedMostRecent': False, 'OverrideStyle': 1, 'ASName': 'Talk', 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Deku_12'})
                }

                call Get_StoneOfForest.FocusFaceCamera({'Actor1ActorName': 'Enemy_Scrub_Deku_Brothers', 'Actor1InstanceName': 'One'})

                Enemy_Scrub_Deku_Brothers[One].EventTriggerSoundChangeForbidEmitFootStep()
                Enemy_Scrub_Deku_Brothers[One].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'IsNotOpenIfSkipedMostRecent': False, 'OverrideStyle': 1, 'ASName': 'Talk', 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Deku_13'})
                Enemy_Scrub_Deku_Brothers[One].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'IsNotOpenIfSkipedMostRecent': False, 'OverrideStyle': 1, 'ASName': 'Talk', 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Enemy_Event:Enemy_Scrub_Deku_16'})
                goto Event18
            }
        } else {
            goto Event39
        }
    } else
    if !Player_Event.EventQueryPlayerIsChild() {
        goto Event68
    }
    goto Event16
}
