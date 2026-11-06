-------- EventFlow: HrlField_Note_07 --------

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void Talk() {

    call HrlField_Note_00.Common({'GameDataName': 'HaveReadHrlField_Note07', 'GameDataNameAtode': 'FairyAfter_Note07', 'MessageId': 'EventFlowMsg/HrlField_Note_00:Note_07_00'})

    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Enemy_Scrub_Business_Secret_IrregularTalk_00', 'Value': True})
}
