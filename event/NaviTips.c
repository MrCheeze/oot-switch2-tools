-------- EventFlow: NaviTips --------

Actor: Npc_Navi
entrypoint: None()
actions: ['EventTalk']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: GameDataActor
entrypoint: None()
actions: []
queries: ['EventQueryCheckIsGet', 'EventQueryIsGameDataBoolExp', 'EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventExecuteProgressChallengeStep', 'EventTriggerShowChallengeProgressUI']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: []
queries: ['EventQueryPlayerIsChild']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

void Gauntlet_00() {

    call NaviEventCommon.InitTalk_NaviPlayerFront({'IsLookAtNavi': True})


    call NaviEventCommon.EventTalk_Navi_WithPlayerTalk({'MessageId': 'EventFlowMsg/NaviTips:Gauntlet_00'})

}

void Gauntlet_01() {

    call NaviEventCommon.InitTalk_NaviPlayerSide_CloseCamera({'IsLookAtPlayer': True, 'IsLookAtNavi': True})

    if !GameDataActor.EventQueryCheckIsGet({'ActorName': 'Armor_Adult_Gauntlet_Silver'}) {

        call NaviEventCommon.EventTalk_Navi_WithPlayerTalk({'MessageId': 'EventFlowMsg/NaviTips:Gauntlet_04'})

    } else {

        call NaviEventCommon.EventTalk_Navi_WithPlayerTalk({'MessageId': 'EventFlowMsg/NaviTips:Gauntlet_01'})

        if Player_Event.EventQueryPlayerIsChild()
        && GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'GerudoTrainingGround_Gauntlet_01', 'Index': -1})
        && GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfSpirit_IsAfter_Step05_02_Exp'})
        && !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfSpirit_IsAfter_Step04_Exp'}) {
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfSpirit_IsAfter_Step05_Exp'}) {
                Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/AllSage:Talk_006', 'MaintainPerformanceState': 0})
                ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': True, 'IsWaitEnd': True, 'ChallengeName': 'SageOfSpirit', 'StepName': 'Step05_03', 'IsIgnoreChallengeProgressUI': False})
                ChallengeSystemActor.EventTriggerShowChallengeProgressUI({'IsFirstStep': False, 'ChallengeName': 'SageOfSpirit'})
            } else {
                ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': True, 'IsWaitEnd': True, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'SageOfSpirit', 'StepName': 'Step05_02'})
            }
        }
    }
}

void Gauntlet_02() {

    call NaviEventCommon.InitTalk_NaviPlayerSide_CloseCamera({'IsLookAtPlayer': True, 'IsLookAtNavi': True})


    call NaviEventCommon.EventTalk_Navi_WithPlayerTalk({'MessageId': 'EventFlowMsg/NaviTips:Gauntlet_02'})

}

void Gauntlet_03() {

    call NaviEventCommon.InitTalk_NaviPlayerSide_CloseCamera({'IsLookAtPlayer': True, 'IsLookAtNavi': True})

    if !GameDataActor.EventQueryCheckIsGet({'ActorName': 'Armor_Adult_Gauntlet_Silver'}) {

        call NaviEventCommon.EventTalk_Navi_WithPlayerTalk({'MessageId': 'EventFlowMsg/NaviTips:Gauntlet_03'})

    } else {

        call NaviEventCommon.EventTalk_Navi_WithPlayerTalk({'MessageId': 'EventFlowMsg/NaviTips:Gauntlet_05'})

    }
}
