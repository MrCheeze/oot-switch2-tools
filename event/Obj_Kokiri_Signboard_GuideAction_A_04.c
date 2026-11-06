-------- EventFlow: Obj_Kokiri_Signboard_GuideAction_A_04 --------

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void Talk() {

    call SignboardWood.Talk_ReadableOnlyFront()

    if GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Area_JumpDisplay_02', 'Index': -1}) {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Area_JumpDisplay_02'})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Area_JumpDisplay_01'})
    }
}
