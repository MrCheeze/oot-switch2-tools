-------- EventFlow: Dm_SY_LetterBottle --------

Actor: Player_Event
entrypoint: None()
actions: ['EventTriggerPlayerEventStartWithDrawn', 'EventPlayerPlayASForFlowchart', 'EventPlayerDrawnBottleFull', 'EventTriggerEquipmentUserRequestChangeState', 'EventPlayerUnequip']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: SystemTextNPC
entrypoint: None()
actions: ['EventTalk']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventCamera
entrypoint: None()
actions: ['EventChangeTemporarilyToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: DevelopEventSystemActor
entrypoint: None()
actions: ['EventDemoProductSupportComment']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameDataActor
entrypoint: None()
actions: []
queries: ['EventQueryIsGameDataBoolExp']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[1]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Weapon_Bottle_Letter
entrypoint: None()
actions: ['EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Dm_Item_RutoLetter
entrypoint: None()
actions: ['EventPlayAS', 'EventGoOffstageForUser', 'EventTriggerModelBind']
queries: []
params: {'UseEventModelAnime': 'Work/Model/Event/Dm_SY_LetterBottle/Dm_SY_LetterBottle_Item_RutoLetter/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_SY_LetterBottle_Item_RutoLetter.root.as', 'EventMemberCreateMethod': 1, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'Position': [0.0, -10.0, 0.0]}

Actor: EventSystemActor[2]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Dm_Locator[Letter]
entrypoint: None()
actions: ['EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 1, 'UseEventModelAnime': 'Work/Model/Event/Dm_SY_LetterBottle/Dm_SY_LetterBottle_Dm_Locator/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_SY_LetterBottle_Dm_Locator.root.as', 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False}

Actor: EventSystemActor[3]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void EntryPoint0() {

    fork {
        Player_Event.EventTriggerPlayerEventStartWithDrawn()
        Player_Event.EventPlayerDrawnBottleFull({'IsWaitEnd': True})
    } {
        Dm_Item_RutoLetter.EventGoOffstageForUser({'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False, 'IsWaitEnd': True})
    } {
        EventCamera.EventChangeTemporarilyToPlayerCamera({'EnableControle': True, 'IsWaitEnd': False})
    }


    fork {
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'ForceFadeFrame': -1.0, 'KeepOneTimeAnm': True, 'ASCommand': 'DemoReadLetter', 'IsAllSlot': True, 'IsWaitEnd': False, 'ClothWarpMode': 0})
        DevelopEventSystemActor.EventDemoProductSupportComment({'IsWaitEnd': False, 'Text1': 'ビン（手紙）を使用した時のイベント', 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3})
        EventSystemActor.EventWait({'Frames': 280, 'IsWaitEnd': True})
        SystemTextNPC.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Bottle_Event:Talk_02', 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MaintainPerformanceState': 0})
        SystemTextNPC.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Bottle_Event:Talk_03', 'OverrideStyle': 2, 'IsOverrideStyle': True, 'MaintainPerformanceState': 0})
    } {
        EventCamera.EventChangeTemporarilyToPlayerCamera({'EnableControle': True, 'IsWaitEnd': False})
    } {
        EventSystemActor[1].EventWait({'IsWaitEnd': True, 'Frames': 106})
        Weapon_Bottle_Letter.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'CapOff_LetterOn'})
        EventSystemActor[3].EventWait({'IsWaitEnd': True, 'Frames': 110})
        Weapon_Bottle_Letter.EventPlayAS({'ASName': 'CapOff_Letter', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
    } {
        Dm_Item_RutoLetter.EventTriggerModelBind({'RotOffset': [0.0, 0.0, 0.0], 'ActorName': 'Dm_Locator', 'BoneName': 'Dm_Locator', 'InstanceName': 'Letter', 'TransOffset': [0.0, 0.05000000074505806, 0.0]})
        EventSystemActor[2].EventWait({'IsWaitEnd': True, 'Frames': 260})
        Dm_Item_RutoLetter.EventPlayAS({'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'Rotate_GetDemo'})
    } {
        Dm_Locator[Letter].EventPlayAS({'ASName': 'Locator_Letter', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    }


    fork {
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'ForceFadeFrame': -1.0, 'KeepOneTimeAnm': True, 'IsAllSlot': True, 'ASCommand': 'DemoReadLetter-Ed', 'IsWaitEnd': True, 'ClothWarpMode': 0})
        Player_Event.EventPlayerUnequip({'IsWaitEnd': True})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 26})
        Weapon_Bottle_Letter.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'CapOff_LetterOn'})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 23})
        Weapon_Bottle_Letter.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'CapOn_Letter', 'IsWaitEnd': False})
    } {
        Dm_Item_RutoLetter.EventGoOffstageForUser({'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False, 'IsWaitEnd': True})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 120})
        Player_Event.EventTriggerEquipmentUserRequestChangeState({'EquipmentState': 2, 'DynamicEquipmentSlot': 1})
    }

    if GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Get_StoneOfWater_IsAfter_Step05_01_Exp'}) {

        call Get_StoneOfWater.StoneOfWater_UseRutoletter()

    }
}
