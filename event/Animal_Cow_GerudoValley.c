-------- EventFlow: Animal_Cow_GerudoValley --------

Actor: Npc_EventStarter
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 1}

void Talk() {

    call Animal_Cow.CowTalk({'Animal_Cow': ActorIdentifier(name="Npc_EventStarter"), 'ActorCawName': 'Npc_EventStarter'})

}
