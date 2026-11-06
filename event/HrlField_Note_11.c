-------- EventFlow: HrlField_Note_11 --------

Actor: Npc_Navi
entrypoint: None()
actions: ['EventTalk', 'EventNaviMoveToAnchor', 'EventNaviLookAtObject', 'EventTriggerBecomeSpeaker']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait', 'EventWaitTalkCameraInterpolationEnd']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerTurnAndLook']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: EventCamera
entrypoint: None()
actions: ['EventSendEventTalkMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

void Talk() {

    call HrlField_Note_00.InitTalk_Note()

    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'IsRead_FairyNote_FirstTime', 'Index': -1}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HaveReadHrlField_Note11'}) {

            call HrlField_Note_00.HaveReadThisFairyNote()

            Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 0, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsAnonymous': False, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/HrlField_Note_00:Note_11_00', 'IsNotBecomeSpeaker': True})

            call HrlField_Note_00.Datte()

        } else {
            switchcall HrlField_Note_00.NotReadThisFairyNote({'GameDataNameAtode': 'FairyAfter_Note11'}) {
              case fnv1a("true"):
                Event9:
                Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 0, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsAnonymous': False, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/HrlField_Note_00:Note_11_00', 'IsNotBecomeSpeaker': True})
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'HaveReadHrlField_Note11'})
                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
                Npc_Navi.EventNaviMoveToAnchor({'IsWaitEnd': True, 'InstanceName': 'point_memo', 'IsTurnLooking': True, 'LookAtActorName': 'Obj_TBox_A_01_memo11', 'IsLookAtObject': False, 'LookAtTarget': 0, 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'OverwriteRotNearDist': -1.0, 'ASCommand': ''})

                fork {
                    EventCamera.EventSendEventTalkMessageToPlayerCamera({'IsWaitEnd': False, 'EventTalkCameraType': 2})
                    GameSystemActor.EventWaitTalkCameraInterpolationEnd({'IsWaitEnd': True})
                } {
                    Player_Event.EventPlayerTurnAndLook({'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'ActorName': 'Npc_Navi', 'InstanceName': '', 'Target': 3, 'IsWaitEnd': True, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'UseNormalTurn': False, 'IsDoNavi': False})
                } {
                    Npc_Navi.EventTriggerBecomeSpeaker()
                    Npc_Navi.EventNaviLookAtObject({'IsWaitEnd': True, 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ActorName': '', 'InstanceName': '', 'IsTurnX': True, 'Target': 0, 'WorldPos': [-213.4499969482422, 133.4499969482422, 138.41000366210938]})
                }

                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'HaveReadHrlField_Note11_1'}) {
                    Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 0, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsAnonymous': False, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/HrlField_Note_00:Talk_40', 'IsNotBecomeSpeaker': True})
                } else {
                    Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 0, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsAnonymous': False, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/HrlField_Note_00:Talk_41', 'ASName': '', 'IsNotBecomeSpeaker': True})
                }
            }
        }
    } else {

        call HrlField_Note_00.IsReadFairyNote_FirstTime()

        goto Event9
    }
}
