-------- EventFlow: Npc_Hylia_Soldier_002 --------

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTalk', 'EventNPCTurnToTarget', 'EventTriggerChangeEmotion', 'EventTriggerBalloonMessage']
queries: ['EventQueryIsOnRecentTalkFlag', 'EventNPCQueryCheckTargetActorForLookIK', 'EventQueryAvoidDuplicationRandomChoice2', 'EventQueryIsOnAmiiboMaskTalkFlag', 'EventQueryIsOnMaskTalkFlag']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 1}

Actor: Npc_Hylia_Soldier_002
entrypoint: None()
actions: []
queries: ['EventQueryHaveTalked', 'EventQueryAvoidDuplicationRandomChoice2']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Accessory4': ''}

Actor: EventWorldManagerController
entrypoint: None()
actions: []
queries: ['EventQueryTimeDivision']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryTalkChoice3', 'EventQueryTalkChoice2', 'EventQueryTalkChoice4']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool', 'EventQueryIsGameDataBoolExp']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventCamera
entrypoint: None()
actions: ['EventTriggerCameraSavePoint', 'EventMoveCameraToSavePoint', 'EventMoveToTargetPosCamera']
queries: ['EventQueryCameraCheckRayCastForMoveToTarget']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerTurnAndLook', 'EventPlayerPlayASForFlowchart']
queries: ['EventQueryPlayerIsEquipArmor', 'EventQueryPlayerIsEquipMask']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: EventSystemActor[1]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: PostProcessingActor
entrypoint: None()
actions: ['EventSetRenderingCenterPosFromCameraPosFC']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void Talk() {

    call Mask_All()

    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'DoorOfTime_IsAfter_Step03_Exp'}) {

        call GetStones_Talk()

    } else
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Hylia_Soldier_002_Talk_Event5', 'Index': -1}) {
        if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 3, 'ChoiceLabel2': 1, 'ChoiceLabel3': 2, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_002:Talk_04', 'MaintainPerformanceState': 0})
            Event12:
            switch GameSystemActor.EventQueryTalkChoice3() {
              case 0:
                Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'ForceFadeFrame': -1.0, 'KeepOneTimeAnm': False, 'ASCommand': 'EvtTalkWonder', 'ClothWarpMode': 0})

                call InpaHouse()

                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 2, 'ChoiceLabel2': 6, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_002:Talk_35', 'ChoiceLabel1': 1, 'MaintainPerformanceState': 0})
                if !GameSystemActor.EventQueryTalkChoice2() {
                    Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'ForceFadeFrame': -1.0, 'KeepOneTimeAnm': False, 'ASCommand': 'EvtTalkWonder', 'ClothWarpMode': 0})
                    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_Hylia_Soldier_003_GateOpen', 'Index': -1}) {
                        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SubEvent_MaskSalesman_IsAfter_Step01_Exp'}) {

                            call MountainView({'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_002:Talk_11'})

                        } else {

                            call MountainView({'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_002:Talk_10'})

                        }
                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_002:Talk_19', 'MaintainPerformanceState': 0})
                    } else {

                        call MountainView({'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_002:Talk_09'})

                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_002:Talk_18', 'MaintainPerformanceState': 0})
                    }
                } else {
                    Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'ForceFadeFrame': -1.0, 'KeepOneTimeAnm': False, 'ClothWarpMode': 0, 'ASCommand': 'EvtTalkNo'})

                    call GoodBye03()

                }
              case 1:
                Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'ForceFadeFrame': -1.0, 'KeepOneTimeAnm': False, 'ASCommand': 'EvtTalkWonder', 'ClothWarpMode': 0})
                if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_Hylia_Soldier_003_GateOpen', 'Index': -1}) {
                    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SubEvent_MaskSalesman_IsAfter_Step01_Exp'}) {

                        call MountainView({'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_002:Talk_11'})

                    } else {

                        call MountainView({'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_002:Talk_10'})

                    }
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_002:Talk_19', 'MaintainPerformanceState': 0})
                    Event180:
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 2, 'ChoiceLabel2': 6, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_002:Talk_35', 'ChoiceLabel1': 0, 'MaintainPerformanceState': 0})
                    if !GameSystemActor.EventQueryTalkChoice2() {
                        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'ForceFadeFrame': -1.0, 'KeepOneTimeAnm': False, 'ASCommand': 'EvtTalkWonder', 'ClothWarpMode': 0})

                        call InpaHouse()

                    } else {
                        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'ForceFadeFrame': -1.0, 'KeepOneTimeAnm': False, 'ClothWarpMode': 0, 'ASCommand': 'EvtTalkNo'})

                        call GoodBye03()

                    }
                } else {

                    call MountainView({'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_002:Talk_09'})

                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_002:Talk_18', 'MaintainPerformanceState': 0})
                    goto Event180
                }
              case 2:

                call GoodBye03()

            }
        } else
        if !EventWorldManagerController.EventQueryTimeDivision() {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 3, 'ChoiceLabel2': 1, 'ChoiceLabel3': 2, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_002:Talk_15', 'MaintainPerformanceState': 0})
        } else {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 3, 'ChoiceLabel2': 1, 'ChoiceLabel3': 2, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_002:Talk_07', 'MaintainPerformanceState': 0})
        }
        goto Event12
    } else
    if !Npc_Hylia_Soldier_002.EventQueryHaveTalked() {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_002:Talk_22', 'MaintainPerformanceState': 0})
    } else {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_002:Talk_03', 'MaintainPerformanceState': 0})
    }
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_002:Talk_01', 'ChoiceNumber': 2, 'ChoiceLabel1': 3, 'ChoiceLabel2': 4, 'MaintainPerformanceState': 0})
    if !GameSystemActor.EventQueryTalkChoice2() {
        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'ForceFadeFrame': -1.0, 'KeepOneTimeAnm': False, 'ASCommand': 'EvtTalkWonder', 'ClothWarpMode': 0})
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_002:Talk_12', 'MaintainPerformanceState': 0})

        call MountainView({'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_002:Talk_13'})

        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_002:Talk_17', 'MaintainPerformanceState': 0})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Hylia_Soldier_002_Talk_Event5', 'Value': True, 'Index': -1})
    } else {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_002:Talk_14', 'MaintainPerformanceState': 0})
    }
}

void KakarikoVillage_CanbeStopped_Npc_Hylia_Soldier_002_01() {

    call Common.AirStartUp()


    call NpcCommon.Sub_CanbeStopped_Npc_01({'InstanceNameB': '', 'ActorNameB': 'Npc_Hylia_Soldier_002', 'Arg_Actor': ActorIdentifier(name="Npc_Hylia_Soldier_002"), 'FirstGreeting_MesageId': 'EventFlowMsg/Npc_Hylia_Soldier_008_Child:Talk_200', 'SecondMessageId': 'EventFlowMsg/Npc_Hylia_Soldier_008_Child:Talk_201'})

}

void KakarikoVillage_CanbeStopped_Npc_Hylia_Soldier_002_02() {

    call Common.AirStartUp()


    call NpcCommon.Sub_CanbeStopped_Npc_02({'InstanceNameB': '', 'ActorNameB': 'Npc_Hylia_Soldier_002', 'Arg_Actor': ActorIdentifier(name="Npc_Hylia_Soldier_002"), 'FirstGreeting_MesageId': 'EventFlowMsg/Npc_Hylia_Soldier_008_Child:Talk_202', 'SecondMessageId': 'EventFlowMsg/Npc_Hylia_Soldier_008_Child:Talk_203'})

}

void MountainView() {
    EventCamera.EventTriggerCameraSavePoint()

    fork {
        Npc_EventStarter.EventNPCTurnToTarget({'WorldPos': [-42.90156936645508, 145.92140197753906, -10.389900207519531], 'IsWaitEnd': True, 'Target': 0, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
    } {
        EventSystemActor[1].EventWait({'IsWaitEnd': True, 'Frames': 75})
        Player_Event.EventPlayerTurnAndLook({'WorldPos': [-42.90156936645508, 145.92140197753906, -10.389900207519531], 'IsWaitEnd': True, 'Target': 0, 'TurnFaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'UseNormalTurn': False, 'IsDoNavi': True})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 105})
        if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'ActorName': 'Npc_Hylia_Soldier_002', 'VectorSetType': 3, 'ActorInstanceName': '', 'IsIgnoreVectorReferenceActorRot': False, 'Vector': [0.0, 2.0999999046325684, 0.0]}) {

            fork {
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
                EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Npc_Hylia_Soldier_002', 'TargetFovy': 50.0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'MoveTime': 0, 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'AtVector': [-53.625, 106.7249984741211, 90.98149871826172], 'IsWaitEnd': False, 'PosVector': [-54.150001525878906, 106.18699645996094, 93.20999908447266], 'IsEnableRevertFast': False})
            } {

                call Common_Camera_Pln.CameraDoF_Default()

                PostProcessingActor.EventSetRenderingCenterPosFromCameraPosFC({'IsWaitEnd': True, 'StarFocusDis': 0.0, 'EndFocusDis': 0.0, 'RequiredFrame': 0})
            }

        } else {

            fork {
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
                EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Npc_Hylia_Soldier_002', 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'MoveTime': 90, 'EnableCameraAlpha': True, 'MoveTotargetPosType': 1, 'CameraCollisionMode': 0, 'AtVectorSetType': 3, 'PosVector': [0.0, 2.5, 0.20000000298023224], 'AtVector': [0.0, 3.4000000953674316, 5.0], 'IsEnableRevertFast': False})
            } {

                call Common_Camera_Pln.CameraDoF_Default_FrameSettings({'TransitionFrame': 90})

            }

        }
    }

    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'MessageId', 'MaintainPerformanceState': 0})

    fork {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
        EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'MoveFrame': 0, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'IsRestoreDoF': False})
    } {

        call Common_Camera_Pln.CameraDoF_Event_Common()

    }

    Npc_EventStarter.EventTriggerChangeEmotion({'EmotionType': 0, 'IsActFaceOnly': False})
    Npc_EventStarter.EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True, 'IsConfront': False})
    Player_Event.EventPlayerTurnAndLook({'Target': 1, 'IsWaitEnd': True, 'TurnFaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'UseNormalTurn': False, 'IsDoNavi': True})
}

void GetStones_Talk() {
    if !Npc_Hylia_Soldier_002.EventQueryHaveTalked() {
        if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_002:Talk_30', 'ChoiceLabel2': 5, 'ChoiceNumber': 3, 'ChoiceLabel3': 2, 'MaintainPerformanceState': 0})
            Event65:
            switch GameSystemActor.EventQueryTalkChoice3() {
              case 0:
                Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'ForceFadeFrame': -1.0, 'KeepOneTimeAnm': False, 'ASCommand': 'EvtTalkWonder', 'ClothWarpMode': 0})

                call InpaHouse()

                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'KakarikoVillage_Soldier_002_HaveTalked_Impa', 'Index': -1, 'Value': True})
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 5, 'ChoiceLabel2': 6, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_002:Talk_35', 'MaintainPerformanceState': 0})
                if !GameSystemActor.EventQueryTalkChoice2() {
                    Event79:

                    call Chat()

                } else {
                    Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'ForceFadeFrame': -1.0, 'KeepOneTimeAnm': False, 'ClothWarpMode': 0, 'ASCommand': 'EvtTalkNo'})
                    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'KakarikoVillage_Soldier_002_HaveTalked_Impa', 'Index': -1, 'Value': False})

                    call GoodBye01()

                }
              case 1:
                goto Event79
              case 2:

                call GoodBye01()

            }
        } else
        Event0:
        if !EventWorldManagerController.EventQueryTimeDivision() {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 5, 'ChoiceNumber': 3, 'ChoiceLabel3': 2, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_002:Talk_15', 'MaintainPerformanceState': 0})
        } else {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 5, 'ChoiceNumber': 3, 'ChoiceLabel3': 2, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_002:Talk_07', 'MaintainPerformanceState': 0})
        }
        goto Event65
    } else {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_002:Talk_37', 'MaintainPerformanceState': 0})
        goto Event0
    }
}

void InpaHouse() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Hylia_Soldier_002_Mansion'}) {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_002:Talk_20', 'MaintainPerformanceState': 0})
    } else {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_Hylia_Soldier_002_Mansion'})
    }
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_002:Talk_16', 'MaintainPerformanceState': 0})
}

void Chat() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'KakarikoVillage_Soldier_002_HaveTalked_SkullFamily'}) {
        Event142:

        call Choice4()

    } else {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_002:Talk_91', 'MaintainPerformanceState': 0})
        Event83:
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'KakarikoVillage_Soldier_002_HaveTalked_Well'}) {
            if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'KakarikoVillage_Soldier_002_HaveTalked_DampeDiary'}) {
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'KakarikoVillage_Soldier_002_HaveTalked_SkullFamily'}) {

                    call Choice4()

                } else {
                    Event95:
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_002:Talk_32', 'MaintainPerformanceState': 0})
                    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'KakarikoVillage_Soldier_002_HaveTalked_SkullFamily', 'Index': -1, 'Value': True})
                    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfForest_IsCompleted_Exp'}) {
                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_002:Talk_79', 'MaintainPerformanceState': 0})
                    } else {
                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_002:Talk_36', 'MaintainPerformanceState': 0})
                    }
                }
            } else {
                Event91:
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_002:Talk_34', 'MaintainPerformanceState': 0})
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'KakarikoVillage_Soldier_002_HaveTalked_DampeDiary', 'Index': -1, 'Value': True})
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 14, 'ChoiceLabel2': 13, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_002:Talk_23', 'MaintainPerformanceState': 0})
                if !GameSystemActor.EventQueryTalkChoice2() {
                    Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'ForceFadeFrame': -1.0, 'KeepOneTimeAnm': False, 'ClothWarpMode': 0, 'ASCommand': 'EvtTalkYes'})
                    goto Event95
                } else {
                    Event155:
                    Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'ForceFadeFrame': -1.0, 'KeepOneTimeAnm': False, 'ClothWarpMode': 0, 'ASCommand': 'EvtTalkNo'})

                    call GoodBye01()

                }
            }
        } else {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_002:Talk_33', 'MaintainPerformanceState': 0})
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'KakarikoVillage_Soldier_002_HaveTalked_Well', 'Index': -1, 'Value': True})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 2, 'ChoiceLabel1': 14, 'ChoiceLabel2': 13, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_002:Talk_23', 'MaintainPerformanceState': 0})
            if !GameSystemActor.EventQueryTalkChoice2() {
                Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'ForceFadeFrame': -1.0, 'KeepOneTimeAnm': False, 'ClothWarpMode': 0, 'ASCommand': 'EvtTalkYes'})
                goto Event91
            } else {
                goto Event155
            }
        }
    }
}

void Well_Near() {
    Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/Npc_Hylia_Soldier_002:Near_01'})
}

void Well_Talk() {

    call Mask_All2()

    if !Npc_Hylia_Soldier_002.EventQueryHaveTalked() {
        if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
            if !Npc_Hylia_Soldier_002.EventQueryAvoidDuplicationRandomChoice2() {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_002:Talk_101', 'MaintainPerformanceState': 0})
            } else {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_002:Talk_102', 'MaintainPerformanceState': 0})
            }
        } else {
            Event120:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_002:Talk_100', 'MaintainPerformanceState': 0})
        }
    } else {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_002:Talk_103', 'MaintainPerformanceState': 0})
        goto Event120
    }
}

void Mask_All() {
    if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_GlassTruth'}) {

        call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 4})

        if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Hylia_Soldier002_GlassTruth'}) {
            Event11:
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_Hylia_Soldier002_GlassTruth'})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_002:GlassTruth', 'MaintainPerformanceState': 0})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_002:Mask_09', 'MaintainPerformanceState': 0})
        }
    } else {
        switchcall Mask_Talk1() {
          case fnv1a("Mask_Talk"):
            if Npc_EventStarter.EventNPCQueryCheckTargetActorForLookIK({'InstanceName': '', 'ActorName': 'Player_Event'}) {
                Npc_EventStarter.EventNPCTurnToTarget({'Target': 2, 'IsConfront': False, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
                Event32:
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_002:Mask_10', 'MaintainPerformanceState': 0})
            }
        }
    }
}

void Mask_Talk1() {
    if !Npc_EventStarter.EventNPCQueryCheckTargetActorForLookIK({'InstanceName': '', 'ActorName': 'Player_Event'}) {
        Event202:
        switchcall NpcCommon.Mask_Talk_Common_With_InitTalk_NoChangeTheTopic({'Mask_Skull_Talk': 'EventFlowMsg/Npc_Hylia_Soldier_002:Mask_02', 'Mask_Spooky_Talk': 'EventFlowMsg/Npc_Hylia_Soldier_002:Mask_03', 'Mask_Bunny_Talk': 'EventFlowMsg/Npc_Hylia_Soldier_002:Mask_04', 'Mask_Goron_Talk': 'EventFlowMsg/Npc_Hylia_Soldier_002:Mask_06', 'Mask_Zora_Talk': 'EventFlowMsg/Npc_Hylia_Soldier_002:Mask_07', 'Mask_Gerudo_Talk': 'EventFlowMsg/Npc_Hylia_Soldier_002:Mask_08', 'Mask_Keaton_Talk': 'EventFlowMsg/Npc_Hylia_Soldier_002:Mask_01', 'ASName': 'TalkMonolog', 'Mask_Amiibo00_Talk': 'EventFlowMsg/Npc_Hylia_Soldier_002:Mask_101', 'Mask_Amiibo01_Talk': 'EventFlowMsg/Npc_Hylia_Soldier_002:Mask_102', 'Mask_Amiibo02_Talk': 'EventFlowMsg/Npc_Hylia_Soldier_002:Mask_103', 'Mask_Truth_Talk': 'EventFlowMsg/Npc_Hylia_Soldier_002:Mask_05_01', 'Arg_Turn_For_MaskTalk': 2, 'Arg_Turn_For_IgnoreMaskTalk': 4}) {
          case 0x469157c2:
            Event203:
            return fnv1a("Mask_Talk")
          case 0x5b3dff05:
            Event204:
            return 0xa6da0479
        }
    } else {
        switchcall NpcCommon.Mask_Talk_Common_With_InitTalk_NoChangeTheTopic({'Arg_Turn_For_IgnoreMaskTalk': 4, 'Arg_Turn_For_MaskTalk': 4, 'Mask_Skull_Talk': 'EventFlowMsg/Npc_Hylia_Soldier_002:Mask_02', 'Mask_Spooky_Talk': 'EventFlowMsg/Npc_Hylia_Soldier_002:Mask_03', 'Mask_Bunny_Talk': 'EventFlowMsg/Npc_Hylia_Soldier_002:Mask_04', 'Mask_Truth_Talk': 'EventFlowMsg/Npc_Hylia_Soldier_002:Mask_05', 'Mask_Goron_Talk': 'EventFlowMsg/Npc_Hylia_Soldier_002:Mask_06', 'Mask_Zora_Talk': 'EventFlowMsg/Npc_Hylia_Soldier_002:Mask_07', 'Mask_Gerudo_Talk': 'EventFlowMsg/Npc_Hylia_Soldier_002:Mask_08', 'Mask_Keaton_Talk': 'EventFlowMsg/Npc_Hylia_Soldier_002:Mask_01', 'ASName': 'TalkMonolog', 'Mask_Amiibo00_Talk': 'EventFlowMsg/Npc_Hylia_Soldier_002:Mask_101', 'Mask_Amiibo01_Talk': 'EventFlowMsg/Npc_Hylia_Soldier_002:Mask_102', 'Mask_Amiibo02_Talk': 'EventFlowMsg/Npc_Hylia_Soldier_002:Mask_103'}) {
          case 0x469157c2:
            return fnv1a("Mask_Talk")
          case 0x5b3dff05:
            return 0xa6da0479
        }
    }
}

void Mask_All2() {

    call Check_TurnTalk()

    if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_GlassTruth'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Hylia_Soldier002_GlassTruth'}) {
            if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {

                call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 4})

            } else {

                call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 2})

            }
        } else {

            call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 2})

            goto Event11
        }
    } else {
        switchcall Mask_Talk2() {
          case fnv1a("Mask_Talk"):
            if Npc_EventStarter.EventNPCQueryCheckTargetActorForLookIK({'InstanceName': '', 'ActorName': 'Player_Event'}) {
                Npc_EventStarter.EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True, 'IsConfront': True})
                goto Event32
            }
        }
    }
}

void Mask_Talk2() {
    if !Npc_EventStarter.EventNPCQueryCheckTargetActorForLookIK({'InstanceName': '', 'ActorName': 'Player_Event'}) {
        if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
            goto Event202
        } else {
            switchcall NpcCommon.Mask_Talk_Common_With_InitTalk_NoChangeTheTopic({'Mask_Skull_Talk': 'EventFlowMsg/Npc_Hylia_Soldier_002:Mask_02', 'Mask_Spooky_Talk': 'EventFlowMsg/Npc_Hylia_Soldier_002:Mask_03', 'Mask_Bunny_Talk': 'EventFlowMsg/Npc_Hylia_Soldier_002:Mask_04', 'Mask_Goron_Talk': 'EventFlowMsg/Npc_Hylia_Soldier_002:Mask_06', 'Mask_Zora_Talk': 'EventFlowMsg/Npc_Hylia_Soldier_002:Mask_07', 'Mask_Gerudo_Talk': 'EventFlowMsg/Npc_Hylia_Soldier_002:Mask_08', 'Mask_Keaton_Talk': 'EventFlowMsg/Npc_Hylia_Soldier_002:Mask_01', 'ASName': 'TalkMonolog', 'Mask_Amiibo00_Talk': 'EventFlowMsg/Npc_Hylia_Soldier_002:Mask_101', 'Mask_Amiibo01_Talk': 'EventFlowMsg/Npc_Hylia_Soldier_002:Mask_102', 'Mask_Amiibo02_Talk': 'EventFlowMsg/Npc_Hylia_Soldier_002:Mask_103', 'Mask_Truth_Talk': 'EventFlowMsg/Npc_Hylia_Soldier_002:Mask_05_01', 'Arg_Turn_For_MaskTalk': 2, 'Arg_Turn_For_IgnoreMaskTalk': 2}) {
              case 0x469157c2:
                goto Event203
              case 0x5b3dff05:
                goto Event204
            }
        }
    } else
    if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
        switchcall NpcCommon.Mask_Talk_Common_With_InitTalk_NoChangeTheTopic({'Mask_Skull_Talk': 'EventFlowMsg/Npc_Hylia_Soldier_002:Mask_02', 'Mask_Spooky_Talk': 'EventFlowMsg/Npc_Hylia_Soldier_002:Mask_03', 'Mask_Bunny_Talk': 'EventFlowMsg/Npc_Hylia_Soldier_002:Mask_04', 'Mask_Goron_Talk': 'EventFlowMsg/Npc_Hylia_Soldier_002:Mask_06', 'Mask_Zora_Talk': 'EventFlowMsg/Npc_Hylia_Soldier_002:Mask_07', 'Mask_Gerudo_Talk': 'EventFlowMsg/Npc_Hylia_Soldier_002:Mask_08', 'Mask_Keaton_Talk': 'EventFlowMsg/Npc_Hylia_Soldier_002:Mask_01', 'ASName': 'TalkMonolog', 'Mask_Amiibo00_Talk': 'EventFlowMsg/Npc_Hylia_Soldier_002:Mask_101', 'Mask_Amiibo01_Talk': 'EventFlowMsg/Npc_Hylia_Soldier_002:Mask_102', 'Mask_Amiibo02_Talk': 'EventFlowMsg/Npc_Hylia_Soldier_002:Mask_103', 'Mask_Truth_Talk': 'EventFlowMsg/Npc_Hylia_Soldier_002:Mask_05_02', 'Arg_Turn_For_MaskTalk': 2, 'Arg_Turn_For_IgnoreMaskTalk': 4}) {
          case 0x469157c2:
            Event62:
            return fnv1a("Mask_Talk")
          case 0x5b3dff05:
            Event113:
            return 0xa6da0479
        }
    } else {
        switchcall NpcCommon.Mask_Talk_Common_With_InitTalk_NoChangeTheTopic({'Mask_Skull_Talk': 'EventFlowMsg/Npc_Hylia_Soldier_002:Mask_02', 'Mask_Spooky_Talk': 'EventFlowMsg/Npc_Hylia_Soldier_002:Mask_03', 'Mask_Bunny_Talk': 'EventFlowMsg/Npc_Hylia_Soldier_002:Mask_04', 'Mask_Goron_Talk': 'EventFlowMsg/Npc_Hylia_Soldier_002:Mask_06', 'Mask_Zora_Talk': 'EventFlowMsg/Npc_Hylia_Soldier_002:Mask_07', 'Mask_Gerudo_Talk': 'EventFlowMsg/Npc_Hylia_Soldier_002:Mask_08', 'Mask_Keaton_Talk': 'EventFlowMsg/Npc_Hylia_Soldier_002:Mask_01', 'ASName': 'TalkMonolog', 'Mask_Amiibo00_Talk': 'EventFlowMsg/Npc_Hylia_Soldier_002:Mask_101', 'Mask_Amiibo01_Talk': 'EventFlowMsg/Npc_Hylia_Soldier_002:Mask_102', 'Mask_Amiibo02_Talk': 'EventFlowMsg/Npc_Hylia_Soldier_002:Mask_103', 'Mask_Truth_Talk': 'EventFlowMsg/Npc_Hylia_Soldier_002:Mask_05_02', 'Arg_Turn_For_MaskTalk': 2, 'Arg_Turn_For_IgnoreMaskTalk': 2}) {
          case 0x469157c2:
            goto Event62
          case 0x5b3dff05:
            goto Event113
        }
    }
}

void SageOfForestCompleted_Talk() {
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_Hylia_009_Child_IsInWindmill', 'Index': -1}) {
        if !Npc_Hylia_Soldier_002.EventQueryHaveTalked() {

            call Greeting_With_Mask_All()

            if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 5, 'ChoiceNumber': 3, 'ChoiceLabel1': 11, 'ChoiceLabel3': 2, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_002:Talk_92', 'MaintainPerformanceState': 0})
            } else {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 5, 'ChoiceNumber': 3, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_002:Talk_83', 'ChoiceLabel1': 11, 'ChoiceLabel3': 2, 'MaintainPerformanceState': 0})
            }
            switch GameSystemActor.EventQueryTalkChoice3() {
              case 0:
                Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'ForceFadeFrame': -1.0, 'KeepOneTimeAnm': False, 'ASCommand': 'EvtTalkWonder', 'ClothWarpMode': 0})

                call Well_AfterDried()

                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'KakarikoVillage_Soldier_002_HaveTalked_Sentry'})
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 2, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_002:Talk_86', 'ChoiceLabel1': 12, 'ChoiceLabel2': 13, 'MaintainPerformanceState': 0})
                if !GameSystemActor.EventQueryTalkChoice2() {
                    Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'ForceFadeFrame': -1.0, 'KeepOneTimeAnm': False, 'ClothWarpMode': 0, 'ASCommand': 'EvtTalkYes'})
                    Event162:

                    call Chat_AfterGrownUp0()

                } else {
                    Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'ForceFadeFrame': -1.0, 'KeepOneTimeAnm': False, 'ClothWarpMode': 0, 'ASCommand': 'EvtTalkNo'})
                    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'KakarikoVillage_Soldier_002_HaveTalked_Sentry', 'Value': False})

                    call GoodBye01()

                }
              case 1:
                goto Event162
              case 2:

                call GoodBye01()

            }
        } else {

            call Mask_All()

            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_002:Talk_73', 'MaintainPerformanceState': 0})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 0, 'ChoiceNumber': 2, 'ChoiceLabel2': 10, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_002:Talk_80', 'ChoiceLabel1': 11, 'MaintainPerformanceState': 0})
            if !GameSystemActor.EventQueryTalkChoice2() {
                Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'ForceFadeFrame': -1.0, 'KeepOneTimeAnm': False, 'ASCommand': 'EvtTalkWonder', 'ClothWarpMode': 0})

                call Well_AfterDried()

            } else {

                call GoodBye02()

            }
        }
    } else
    if !Npc_Hylia_Soldier_002.EventQueryHaveTalked() {

        call Greeting_With_Mask_All()

        if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 5, 'ChoiceNumber': 3, 'ChoiceLabel3': 13, 'ChoiceLabel1': 9, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_002:Talk_93', 'MaintainPerformanceState': 0})
        } else {
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_002:Talk_77', 'ChoiceLabel2': 5, 'ChoiceNumber': 3, 'ChoiceLabel3': 13, 'ChoiceLabel1': 9, 'MaintainPerformanceState': 0})
        }
        switch GameSystemActor.EventQueryTalkChoice3() {
          case 0:
            Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'ForceFadeFrame': -1.0, 'KeepOneTimeAnm': False, 'ASCommand': 'EvtTalkWonder', 'ClothWarpMode': 0})

            call Well_BeforeDry()

            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'KakarikoVillage_Soldier_002_HaveTalked_Sentry'})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 2, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_002:Talk_86', 'ChoiceLabel1': 12, 'ChoiceLabel2': 13, 'MaintainPerformanceState': 0})
            if !GameSystemActor.EventQueryTalkChoice2() {
                Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'ForceFadeFrame': -1.0, 'KeepOneTimeAnm': False, 'ClothWarpMode': 0, 'ASCommand': 'EvtTalkYes'})
                Event100:

                call Chat_AfterGrownUp0()

            } else {
                Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'ForceFadeFrame': -1.0, 'KeepOneTimeAnm': False, 'ClothWarpMode': 0, 'ASCommand': 'EvtTalkNo'})
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'KakarikoVillage_Soldier_002_HaveTalked_Sentry', 'Value': False})

                call GoodBye01()

            }
          case 1:
            goto Event100
          case 2:
            Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'ForceFadeFrame': -1.0, 'KeepOneTimeAnm': False, 'ClothWarpMode': 0, 'ASCommand': 'EvtTalkNo'})

            call GoodBye01()

        }
    } else {

        call Mask_All()

        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_002:Talk_73', 'MaintainPerformanceState': 0})
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_002:Talk_74', 'ChoiceNumber': 2, 'ChoiceLabel1': 9, 'ChoiceLabel2': 10, 'MaintainPerformanceState': 0})
        if !GameSystemActor.EventQueryTalkChoice2() {
            Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'ForceFadeFrame': -1.0, 'KeepOneTimeAnm': False, 'ASCommand': 'EvtTalkWonder', 'ClothWarpMode': 0})

            call Well_BeforeDry()

        } else {

            call GoodBye02()

        }
    }
}

void Well_BeforeDry() {
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_002:Talk_75', 'MaintainPerformanceState': 0})
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_002:Talk_89', 'MaintainPerformanceState': 0})
}

void Well_AfterDried() {
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_002:Talk_84', 'MaintainPerformanceState': 0})
    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_002:Talk_81', 'MaintainPerformanceState': 0})
}

void GoodBye01() {
    if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_002:Talk_87', 'MaintainPerformanceState': 0})
    } else {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_002:Talk_88', 'MaintainPerformanceState': 0})
    }
}

void GoodBye02() {
    if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_002:Talk_85', 'MaintainPerformanceState': 0})
    } else {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_002:Talk_08', 'MaintainPerformanceState': 0})
    }
}

void Choice4() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'KakarikoVillage_Npc_Soldier_002_OutOfTopic'}) {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 4, 'ChoiceLabel4': 16, 'ChoiceLabel2': 18, 'ChoiceLabel3': 19, 'ChoiceLabel1': 17, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_002:Talk_94', 'MaintainPerformanceState': 0})
        Event269:
        switch GameSystemActor.EventQueryTalkChoice4() {
          case 0:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_002:Talk_33', 'MaintainPerformanceState': 0})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_002:Talk_35', 'ChoiceNumber': 3, 'ChoiceLabel4': 0, 'ChoiceLabel2': 19, 'ChoiceLabel3': 16, 'ChoiceLabel1': 18, 'MaintainPerformanceState': 0})
            switch GameSystemActor.EventQueryTalkChoice3() {
              case 0:
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_002:Talk_34', 'MaintainPerformanceState': 0})
                Event284:
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_002:Talk_35', 'ChoiceLabel4': 0, 'ChoiceNumber': 2, 'ChoiceLabel3': 0, 'ChoiceLabel2': 16, 'ChoiceLabel1': 19, 'MaintainPerformanceState': 0})
                if !GameSystemActor.EventQueryTalkChoice2() {
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_002:Talk_32', 'MaintainPerformanceState': 0})
                    Event188:
                    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfForest_IsCompleted_Exp'}) {
                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_002:Talk_79', 'MaintainPerformanceState': 0})
                    } else {
                        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_002:Talk_36', 'MaintainPerformanceState': 0})
                    }
                } else {
                    Event158:
                    Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'ForceFadeFrame': -1.0, 'KeepOneTimeAnm': False, 'ClothWarpMode': 0, 'ASCommand': 'EvtTalkNo'})

                    call GoodBye01()

                }
              case 1:
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_002:Talk_32', 'MaintainPerformanceState': 0})
                Event286:
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_002:Talk_35', 'ChoiceLabel4': 0, 'ChoiceNumber': 2, 'ChoiceLabel3': 0, 'ChoiceLabel2': 16, 'ChoiceLabel1': 18, 'MaintainPerformanceState': 0})
                if !GameSystemActor.EventQueryTalkChoice2() {
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_002:Talk_34', 'MaintainPerformanceState': 0})
                    goto Event188
                } else {
                    goto Event158
                }
              case 2:
                Event157:
                Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'ForceFadeFrame': -1.0, 'KeepOneTimeAnm': False, 'ClothWarpMode': 0, 'ASCommand': 'EvtTalkNo'})

                call GoodBye01()

            }
          case 1:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_002:Talk_34', 'MaintainPerformanceState': 0})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_002:Talk_35', 'ChoiceNumber': 3, 'ChoiceLabel4': 0, 'ChoiceLabel2': 19, 'ChoiceLabel3': 16, 'ChoiceLabel1': 17, 'MaintainPerformanceState': 0})
            switch GameSystemActor.EventQueryTalkChoice3() {
              case 0:
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_002:Talk_33', 'MaintainPerformanceState': 0})
                goto Event284
              case 1:
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_002:Talk_32', 'MaintainPerformanceState': 0})
                Event288:
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_002:Talk_35', 'ChoiceLabel4': 0, 'ChoiceNumber': 2, 'ChoiceLabel3': 0, 'ChoiceLabel2': 16, 'ChoiceLabel1': 17, 'MaintainPerformanceState': 0})
                if !GameSystemActor.EventQueryTalkChoice2() {
                    Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_002:Talk_33', 'MaintainPerformanceState': 0})
                    goto Event188
                } else {
                    goto Event158
                }
              case 2:
                goto Event157
            }
          case 2:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_002:Talk_32', 'MaintainPerformanceState': 0})
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_002:Talk_35', 'ChoiceNumber': 3, 'ChoiceLabel4': 0, 'ChoiceLabel3': 16, 'ChoiceLabel1': 17, 'ChoiceLabel2': 18, 'MaintainPerformanceState': 0})
            switch GameSystemActor.EventQueryTalkChoice3() {
              case 0:
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_002:Talk_33', 'MaintainPerformanceState': 0})
                goto Event286
              case 1:
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_002:Talk_34', 'MaintainPerformanceState': 0})
                goto Event288
              case 2:
                goto Event157
            }
          case 3:

            call GoodBye01()

        }
    } else {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'KakarikoVillage_Npc_Soldier_002_OutOfTopic'})
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_002:Talk_26', 'ChoiceNumber': 4, 'ChoiceLabel4': 16, 'ChoiceLabel2': 18, 'ChoiceLabel3': 19, 'ChoiceLabel1': 17, 'MaintainPerformanceState': 0})
        goto Event269
    }
}

void GoodBye03() {
    if !Npc_EventStarter.EventQueryAvoidDuplicationRandomChoice2() {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_002:Talk_06', 'MaintainPerformanceState': 0})
    } else {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_002:Talk_08', 'MaintainPerformanceState': 0})
    }
}

void Chat_AfterGrownUp0() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'KakarikoVillage_Soldier_002_HaveTalked_SkullFamily'}) {
        goto Event142
    } else {
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_002:Talk_31', 'MaintainPerformanceState': 0})
        goto Event83
    }
}

void Greeting_With_Mask_All() {
    if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_GlassTruth'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Hylia_Soldier002_GlassTruth'}) {
            Event72:

            call InitTalk.InitTalk({'Arg_Greeting': 4, 'Arg_Turn': 4})

            Event110:
            if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_002:Talk_90', 'MaintainPerformanceState': 0})
            } else
            if !EventWorldManagerController.EventQueryTimeDivision() {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_002:Talk_70', 'MaintainPerformanceState': 0})
            } else {
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel1': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_002:Talk_71', 'MaintainPerformanceState': 0})
            }
        } else {
            Event144:

            call Mask_All()

        }
    } else
    if !Player_Event.EventQueryPlayerIsEquipMask() {
        if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Truth'})
        && !Npc_EventStarter.EventNPCQueryCheckTargetActorForLookIK({'InstanceName': '', 'ActorName': 'Player_Event'}) {

            call Mask_All()

            goto Event110
        } else {
            goto Event144
        }
    } else {
        goto Event72
    }
}

void Check_TurnTalk() {
    if !Npc_EventStarter.EventQueryIsOnRecentTalkFlag() {
        if !Player_Event.EventQueryPlayerIsEquipMask() {
            if Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Truth'})
            && Npc_EventStarter.EventQueryIsOnMaskTalkFlag()
            && Npc_EventStarter.EventQueryIsOnAmiiboMaskTalkFlag() {
                Event216:
                Npc_EventStarter.EventTriggerChangeEmotion({'IsActFaceOnly': False, 'EmotionType': 0})
            }
        } else
        if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_GlassTruth'})
        && GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Hylia_Soldier002_GlassTruth'}) {
            goto Event216
        }
    } else {
        goto Event216
    }
}
