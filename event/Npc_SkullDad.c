-------- EventFlow: Npc_SkullDad --------

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void Talk() {

    call GatheringTokenGold.ReadyTalk_SkullDad()

}

void Near() {
    if GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'GatheringTokenGold_Near', 'Index': -1}) {

        call GatheringTokenGold.ReadyNear_SkullDad()

        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'GatheringTokenGold_Near', 'Index': -1, 'Value': True})
    }
}
