-------- EventFlow: RestrictedDoor --------

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTalkWithInstanceNameLabel']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 1}

void ShowDoorMessage() {

    call InitTalk.InitTalk_Door({'PreOpenPos': 'PreOpenPos', 'LastPos': 'LastPos'})

    Npc_EventStarter.EventTalkWithInstanceNameLabel({'MstxtName': 'RestrictedDoor', 'IsWaitEnd': True, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsCloseDialog': True, 'EndDialogOption': 0})
}
