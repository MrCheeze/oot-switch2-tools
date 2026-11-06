-------- EventFlow: Gimmick_InsideJabujabu_GetoutRuto --------

Actor: Player_Event
entrypoint: None()
actions: ['EventTriggerPlayerEventStartWithCarry', 'EventPlayerMoveToAnchor', 'EventPlayerWarpToStarterLinkAnchor']
queries: ['EventQueryCheckPlayerState']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: Npc_Zora_Ruto_Child_001[Step1]
entrypoint: None()
actions: ['EventTalk', 'EventAIScheduleMoveToAnchor', 'EventNPCTurnToTarget', 'EventAIScheduleWarpToAnchor', 'EventAIScheduleEndTerror']
queries: ['EventQueryIsPlayingSameAS', 'EventQueryCheckTerrorLevel']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool', 'EventTriggerAddOrSubGameDataInt', 'EventTriggerSetGameDataInt']
queries: ['EventQueryIsGameDataInt']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: UISystemActor
entrypoint: None()
actions: ['EventEventFadeOut', 'EventEventFadeIn']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait']
queries: ['EventQueryIsDistanceBetweenActorsClose']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void Gimmick_InsideJabujabu_GetoutRuto.evfc() {

    call GetoutRuto_main({'InstanceName': 'GetOut_Ruto_01'})

}

void GetoutRuto_main() {
    switch Npc_Zora_Ruto_Child_001[Step1].EventQueryCheckTerrorLevel() {
      case 0:
        Event7:
        if !Player_Event.EventQueryCheckPlayerState({'State': 12}) {
            Event2:
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'LiftUp_Ruto', 'Value': False, 'Index': -1})
            Npc_Zora_Ruto_Child_001[Step1].EventNPCTurnToTarget({'Target': 2, 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsConfront': True, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': True})
            Npc_Zora_Ruto_Child_001[Step1].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceDefaultNo': 0, 'IsAnimeDriven': True, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Get_StoneOfWater:StoneOfWater_Ruto_Talk_06', 'ASName': '', 'IsPlayASAllSlot': False, 'MaintainPerformanceState': 0})

            fork {
                GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'Value': 0, 'GameDataName': 'InsideJabuJabuBelly_Room00_SafetyCounter_Player'})
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
                Player_Event.EventPlayerMoveToAnchor({'MoveSpeed': 1.0, 'AnchorActorName': 'DestinationAnchor', 'DecSpeedDistance': 0.0, 'IsKeepSpeed': False, 'AnchorInstanceName': 'GetOut_Ruto_00', 'RidableDesiredGear': 0, 'RidableHasToDecelerateNearGoal': False, 'IsSheathed': False, 'IsMoveAnchorFrontDir': False, 'FinishASCommand': 'EvtWait', 'IsInertiaMove': False, 'ApplySlowMove': False, 'RidableGoalDistanceTolerance': 4.0, 'RidableTurnAngleToleranceDeg': 90.0, 'IsWaitEnd': False})
                Event37:
                if GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'Player_Event', 'ActorNameB': 'DestinationAnchor', 'InstanceNameB': 'GetOut_Ruto_00', 'InstanceNameA': '', 'IsAnchorActorA': False, 'IsTargetPlayingAllEvent': False, 'IsAnchorActorB': True, 'CheckDistance': 0.5}) {
                    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 29})
                    GameDataActor.EventTriggerAddOrSubGameDataInt({'Index': -1, 'Value': 1, 'GameDataName': 'InsideJabuJabuBelly_Room00_SafetyCounter_Player'})
                    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
                    switch GameDataActor.EventQueryIsGameDataInt({'Value': 10, 'Index': -1, 'GameDataName': 'InsideJabuJabuBelly_Room00_SafetyCounter_Player'}) {
                      case 0:
                        goto Event37
                      case [1, 2]:
                        Event32:
                        UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
                        switch GameDataActor.EventQueryIsGameDataInt({'Value': 10, 'Index': -1, 'GameDataName': 'InsideJabuJabuBelly_Room00_SafetyCounter_Player'}) {
                          case 0:
                            Event14:
                            switch GameDataActor.EventQueryIsGameDataInt({'Value': 10, 'Index': -1, 'GameDataName': 'InsideJabuJabuBelly_Room00_SafetyCounter_Ruto'}) {
                              case 0:
                                Event35:
                                EventSystemActor.EventWait({'Frames': 60, 'IsWaitEnd': True})
                                UISystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
                                Event3:
                                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'LiftUp_Ruto', 'Value': True, 'Index': -1})
                                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
                                Npc_Zora_Ruto_Child_001[Step1].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceDefaultNo': 0, 'IsAnimeDriven': True, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'ASName': '', 'MessageId': 'EventFlowMsg/Get_StoneOfWater:StoneOfWater_Ruto_Talk_07', 'IsPlayASAllSlot': False, 'MaintainPerformanceState': 0})
                              case [1, 2]:
                                Npc_Zora_Ruto_Child_001[Step1].EventAIScheduleWarpToAnchor({'AnchorType': 22, 'InstanceName': 'InstanceName', 'ArrivalState': 0, 'IsWaitEnd': True, 'ForceGetUpDuringSleep': True, 'ClothWarpMode': -1})
                                goto Event35
                            }
                          case [1, 2]:
                            Player_Event.EventPlayerWarpToStarterLinkAnchor({'ActorName': 'DestinationAnchor', 'NotChangeRot': False, 'UseDemoWait': True, 'ASCommand': 'EvtWait', 'InstanceName': 'GetOut_Ruto_00', 'IsWaitEnd': True})
                            goto Event14
                        }
                    }
                }
            } {
                GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'Value': 0, 'GameDataName': 'InsideJabuJabuBelly_Room00_SafetyCounter_Ruto'})
                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
                Npc_Zora_Ruto_Child_001[Step1].EventAIScheduleMoveToAnchor({'AnchorType': 22, 'ForceIsNotAlignmentWaitPosition': False, 'WaitCancelPathFinding': False, 'IsTurnToAnchorRot': True, 'IsAlignAnchorPos': True, 'ASName': 'Walk', 'DesiredGear': 1, 'InstanceName': 'InstanceName', 'IsWaitEnd': False})
                Event45:
                if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameB': 'DestinationAnchor', 'ActorNameA': 'Npc_Zora_Ruto_Child_001', 'InstanceNameB': 'InstanceName', 'IsAnchorActorA': False, 'IsTargetPlayingAllEvent': False, 'IsAnchorActorB': True, 'CheckDistance': 0.5, 'InstanceNameA': 'Step1'}) {
                    goto Event3
                } else {
                    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 44})
                    GameDataActor.EventTriggerAddOrSubGameDataInt({'Index': -1, 'Value': 1, 'GameDataName': 'InsideJabuJabuBelly_Room00_SafetyCounter_Ruto'})
                    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
                    switch GameDataActor.EventQueryIsGameDataInt({'Value': 10, 'Index': -1, 'GameDataName': 'InsideJabuJabuBelly_Room00_SafetyCounter_Ruto'}) {
                      case 0:
                        goto Event45
                      case [1, 2]:
                        goto Event32
                    }
                }
            }

        } else {
            Player_Event.EventTriggerPlayerEventStartWithCarry()
            if !Npc_Zora_Ruto_Child_001[Step1].EventQueryIsPlayingSameAS({'ASName': 'Act_LiftRest', 'Partial': ''}) {
                Npc_Zora_Ruto_Child_001[Step1].EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceDefaultNo': 0, 'IsAnimeDriven': True, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Get_StoneOfWater:StoneOfWater_Ruto_Talk_06', 'ASName': 'Act_LiftRest', 'IsPlayASAllSlot': False, 'MaintainPerformanceState': 0})
                GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'Value': 0, 'GameDataName': 'InsideJabuJabuBelly_Room00_SafetyCounter_Player'})
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
                Player_Event.EventPlayerMoveToAnchor({'MoveSpeed': 1.0, 'AnchorActorName': 'DestinationAnchor', 'AnchorInstanceName': 'GetOut_Ruto_00', 'DecSpeedDistance': 0.0, 'IsKeepSpeed': False, 'RidableDesiredGear': 0, 'RidableHasToDecelerateNearGoal': False, 'IsSheathed': False, 'IsMoveAnchorFrontDir': False, 'FinishASCommand': 'EvtWait', 'IsInertiaMove': False, 'ApplySlowMove': False, 'RidableGoalDistanceTolerance': 4.0, 'RidableTurnAngleToleranceDeg': 90.0, 'IsWaitEnd': False})
                Event55:
                if GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'Player_Event', 'ActorNameB': 'DestinationAnchor', 'InstanceNameB': 'GetOut_Ruto_00', 'InstanceNameA': '', 'IsAnchorActorA': False, 'IsTargetPlayingAllEvent': False, 'IsAnchorActorB': True, 'CheckDistance': 0.5}) {
                    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 29})
                    GameDataActor.EventTriggerAddOrSubGameDataInt({'Index': -1, 'Value': 1, 'GameDataName': 'InsideJabuJabuBelly_Room00_SafetyCounter_Player'})
                    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
                    switch GameDataActor.EventQueryIsGameDataInt({'Value': 10, 'Index': -1, 'GameDataName': 'InsideJabuJabuBelly_Room00_SafetyCounter_Player'}) {
                      case 0:
                        goto Event55
                      case [1, 2]:
                        UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
                        Player_Event.EventPlayerWarpToStarterLinkAnchor({'ActorName': 'DestinationAnchor', 'IsWaitEnd': True, 'NotChangeRot': False, 'UseDemoWait': True, 'ASCommand': 'EvtWait', 'InstanceName': 'GetOut_Ruto_00'})
                        EventSystemActor.EventWait({'Frames': 60, 'IsWaitEnd': True})
                        UISystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
                    }
                }
            } else {
                goto Event2
            }
        }
      case [1, 2, 3, 4, 5]:
        Npc_Zora_Ruto_Child_001[Step1].EventAIScheduleEndTerror({'IsWaitEnd': True, 'IsClearLookIK': True})
        goto Event7
    }
}

void Gimmick_InsideJabujabu_GetoutRuto_01() {

    call GetoutRuto_main({'InstanceName': 'GetOut_Ruto_02'})

}

void Gimmick_InsideJabujabu_GetoutRuto_02() {

    call GetoutRuto_main({'InstanceName': 'GetOut_Ruto_03'})

}

void Gimmick_InsideJabujabu_GetoutRuto_03() {

    call GetoutRuto_main({'InstanceName': 'GetOut_Ruto_04'})

}
