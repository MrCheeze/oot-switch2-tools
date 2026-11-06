-------- EventFlow: Npc_Hylia_Impa_Child --------

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 1, 'Arg_Greeting': 4})

    EventSystemActor.EventWait({'Frames': 60, 'IsWaitEnd': True})
}
