-------- EventFlow: Npc_Pierre_CallOcarina --------

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTalkWithInstanceNameLabel', 'EventTriggerBalloonMessage', 'EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 1}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 4, 'Arg_Greeting': 4})

    Npc_EventStarter.EventPlayAS({'IsWaitEnd': False, 'ASName': 'Talk', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    Npc_EventStarter.EventTalkWithInstanceNameLabel({'MstxtName': 'Npc_Pierre', 'IsWaitEnd': True, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsCloseDialog': True, 'EndDialogOption': 0})
}

void Near() {
    Npc_EventStarter.EventTriggerBalloonMessage({'IsChallenge': False, 'DisplayFrame': 180, 'IsIgnoreDisplayKeepDepth': False, 'IsDisplayInTerror': False, 'NotOverriddenByInterestBalloon': False, 'MessageID': 'EventFlowMsg/Npc_Pierre:Near_01'})
}
