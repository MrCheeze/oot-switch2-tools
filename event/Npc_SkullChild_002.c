-------- EventFlow: Npc_SkullChild_002 --------

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTalk']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 1}

Actor: Npc_SkullChild_002
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void Talk() {

    call InitTalk.InitTalk_Npc_SkullFamily({'Arg_Turn': 4, 'Arg_Greeting': 4, 'NpcActor': ActorIdentifier(name="Npc_SkullChild_002")})


    call NpcCommon.Mask_Truth_NotTalkMonolog({'ASName': '', 'Mask_Truth_Talk': 'EventFlowMsg/Npc_SkullChild_002:Mask_05'})

    Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_SkullChild_002:Talk_00', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0})
}
