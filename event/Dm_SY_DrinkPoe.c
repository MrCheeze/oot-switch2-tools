-------- EventFlow: Dm_SY_DrinkPoe --------

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerDrinkBottle', 'EventTriggerPlayerEventStartWithDrawn', 'EventPlayerPlayASForFlowchart', 'EventPlayerDrawnBottleFull', 'EventPlayerDrawnShieldAfterUseBottle', 'EventTriggerPlayerStopUpdateSelectedItem', 'EventTriggerPlayerStartUpdateSelectedItem']
queries: ['EventQueryGetBottleContent']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: PouchSystemActor
entrypoint: None()
actions: ['EventTriggerConsumeDrinkFromSelectedBottle']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: UISystemActor
entrypoint: None()
actions: ['EventTriggerSetDisplayHeartGauge']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: NPC_Poe_Voice
entrypoint: None()
actions: ['EventTalk', 'EventTriggerParticipateEvent']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 1}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait', 'EventTriggerControllerRumble', 'EventTriggerZeldaNotesAddIntegratedValueItem']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Weapon_Bottle_Poe
entrypoint: None()
actions: ['EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[bottle]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventCamera
entrypoint: None()
actions: ['EventChangeTemporarilyToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

void EntryPoint0() {
    UISystemActor.EventTriggerSetDisplayHeartGauge({'IsDisplayHeartGauge': True})
    EventCamera.EventChangeTemporarilyToPlayerCamera({'EnableControle': True, 'IsWaitEnd': False})
    Player_Event.EventTriggerPlayerStopUpdateSelectedItem()
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    NPC_Poe_Voice.EventTriggerParticipateEvent()
    Player_Event.EventPlayerDrawnBottleFull({'IsWaitEnd': True})
    Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'DemoOutBottleBigPoe', 'KeepOneTimeAnm': True, 'IsWaitEnd': False, 'IsAllSlot': True, 'ClothWarpMode': 0})
    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
    NPC_Poe_Voice.EventTalk({'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 9991, 'ChoiceLabel2': 9992, 'ChoiceDefaultNo': 1, 'ChangeMstxtForActor': False, 'MessageId': 'EventFlowMsg/Enemy_Event:PoeSpiritTalk_0300', 'ChoiceNumber': 0, 'EndDialogOption': 1, 'IsWaitEnd': True, 'IsCloseDialog': True, 'MaintainPerformanceState': 0})

    fork {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
        NPC_Poe_Voice.EventTalk({'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 9991, 'ChoiceLabel2': 9992, 'ChoiceDefaultNo': 1, 'ChangeMstxtForActor': False, 'ChoiceNumber': 0, 'EndDialogOption': 1, 'IsCloseDialog': False, 'IsWaitEnd': False, 'MessageId': 'EventFlowMsg/Enemy_Event:PoeSpiritTalk_0303', 'MaintainPerformanceState': 0})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
        NPC_Poe_Voice.EventTalk({'ChoiceLabel1': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel2': 1, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Enemy_Event:PoeSpiritTalk_0302', 'IsWaitEnd': False, 'IsCloseDialog': False, 'EndDialogOption': 1, 'MaintainPerformanceState': 0})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    } {
        Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'DemoOutBottleBigPoe-Ed', 'IsWaitEnd': True, 'UseAnmDriven': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsAllSlot': True, 'ClothWarpMode': 0})
        PouchSystemActor.EventTriggerConsumeDrinkFromSelectedBottle()
        Player_Event.EventPlayerDrinkBottle({'IsWaitEnd': True})
        Player_Event.EventTriggerPlayerStartUpdateSelectedItem()
    } {
        EventSystemActor[bottle].EventWait({'IsWaitEnd': True, 'Frames': 34})
        if Player_Event.EventQueryGetBottleContent() == 9 {
            EventSystemActor[bottle].EventWait({'IsWaitEnd': True, 'Frames': 48})

            fork {
                Weapon_Bottle_Poe.EventPlayAS({'ASName': 'CapOff', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
            } {
                GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Demo_Small', 'Length': 0.0})
            }

            EventSystemActor[bottle].EventWait({'IsWaitEnd': True, 'Frames': 10})
            GameSystemActor.EventTriggerZeldaNotesAddIntegratedValueItem({'Type': 15, 'Frame': 114})
        }
    }

    Player_Event.EventPlayerDrawnShieldAfterUseBottle({'IsWaitEnd': True, 'IsImmediateDrawn': False})
}
