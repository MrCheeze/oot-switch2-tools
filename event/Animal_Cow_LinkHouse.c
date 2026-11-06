-------- EventFlow: Animal_Cow_LinkHouse --------

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Animal_Cow_LinkHouse
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryMelodyTypeForNormal']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void Talk_LinkHouse() {

    call Animal_Cow.CowTalk({'Animal_Cow': ActorIdentifier(name="Animal_Cow_LinkHouse"), 'ActorCawName': 'Animal_Cow_LinkHouse'})

    if GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'KokiriForest_IsTalked_Cow', 'Index': -1}) {

        call NaviEventCommon.InitTalk_NaviPlayerFront({'IsLookAtNavi': True})


        call NaviEventCommon.EventTalk_Navi_WithPlayerTalk({'MessageId': 'EventFlowMsg/Animal_Cow:Talk_01'})

        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'KokiriForest_IsTalked_Cow', 'Index': -1, 'Value': True})
    }
}

void GiveMilk_LinkHouse() {

    call Animal_Cow.Cow_GiveMilk({'Cow': 'Animal_Cow_LinkHouse', 'Actor': ActorIdentifier(name="Animal_Cow_LinkHouse"), 'EventName': 'Animal_Cow_PushToBottleMilk_LinkHouse'})

    if GameSystemActor.EventQueryMelodyTypeForNormal() in [0, 1, 3, 4, 5, 12]
    && GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'KokiriForest_IsTalked_Cow', 'Index': -1}) {

        call NaviEventCommon.InitTalk_NaviPlayerFront({'IsLookAtNavi': True})


        call NaviEventCommon.EventTalk_Navi_WithPlayerTalk({'MessageId': 'EventFlowMsg/Animal_Cow:Talk_02'})

        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'KokiriForest_IsTalked_Cow', 'Index': -1, 'Value': True})
    }
}
