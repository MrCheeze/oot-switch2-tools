-------- EventFlow: Obj_LakeHrl_StoneTablet_A_01 --------

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventExecuteProgressChallengeStep']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameDataActor
entrypoint: None()
actions: []
queries: ['EventQueryIsGameDataBoolExp']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: SignBoard_EventStarter
entrypoint: None()
actions: ['EventTalkWithInstanceNameLabel']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 1}

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerBackMoveForTalk']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

void Talk() {

    call SignboardWood.CommonFloorSignCamera({'dist': 4.0, 'upwardAngle': 45.0, 'tole_XZAngle': 30.0, 'ofs': [0.0, 0.5, 0.5]})

    Player_Event.EventPlayerBackMoveForTalk({'IsWaitEnd': True, 'OffsetDist': 0.0})
    SignBoard_EventStarter.EventTalkWithInstanceNameLabel({'MstxtName': 'SignboardWood', 'IsWaitEnd': True, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsCloseDialog': True, 'EndDialogOption': 0})
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SubEvent_GetFireArrow_IsAfter_Ready_Exp'})
    && GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SubEvent_GetFireArrow_IsAfter_Step01_Exp'}) {
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreChallengeProgressUI': False, 'IsWaitEnd': True, 'IsIgnoreCompletedChallenge': False, 'ChallengeName': 'SubEvent_GetFireArrow', 'StepName': 'Step02'})
    }
}
