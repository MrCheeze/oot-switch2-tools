-------- EventFlow: Npc_Hylia_MN_0XX_Default_GoBackHome --------

Actor: GameDataActor
entrypoint: None()
actions: []
queries: ['EventQueryIsGoBackHome']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventTalkWithSpeakerName']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void CheckRestrictedDoor() {

    call InitTalk.InitTalk_Door({'PreOpenPos': 'PreOpenPos', 'LastPos': 'LastPos'})

    if !GameDataActor.EventQueryIsGoBackHome({'InstanceName': 'GoBackHome', 'ActorName': 'Npc_Hylia_MN_0XX_Default'}) {
        GameSystemActor.EventTalkWithSpeakerName({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'SpeakerActor': 'Npc_Hylia_MN_0XX_Default', 'MessageId': 'EventFlowMsg/RestrictedDoor:RestrictedDoor_Market_01'})
    } else {

        call RestrictedDoor.ShowDoorMessage({'PreOpenPos': 'PreOpenPos', 'LastPos': 'LastPos'})

    }
}
