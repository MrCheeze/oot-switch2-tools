-------- EventFlow: LostWood_ScrubForestStage_SurfaceFair --------

Actor: Scrub_ForestStage_Manager[ScrubForestStageManager]
entrypoint: None()
actions: ['EventScrubForestStageManagerBranchEventType']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void EntryPoint0() {
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'LostWood_ScrubForestStage_SurfaceFairPlayed', 'Index': -1, 'Value': True})
    Scrub_ForestStage_Manager[ScrubForestStageManager].EventScrubForestStageManagerBranchEventType({'IsWaitEnd': True})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})

    call Dm_LostWood_0030.EntryPoint0()

}

void SignboardCheck_LostWood_001() {

    call SignboardWood.Talk_ReadableOnlyFront()

}
