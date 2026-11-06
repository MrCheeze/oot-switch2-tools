-------- EventFlow: Dm_SY_DrinkBottle --------

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerDrinkBottle', 'EventTriggerPlayerEventStartWithDrawn', 'EventPlayerDrawnBottleFull', 'EventPlayerDrawnShieldAfterUseBottle', 'EventPlayerPlayASForFlowchart', 'EventTriggerPlayerStopUpdateSelectedItem', 'EventTriggerPlayerStartUpdateSelectedItem']
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

Actor: Weapon_Bottle_RedPotion
entrypoint: None()
actions: ['EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[bottle]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Weapon_Bottle_Milk
entrypoint: None()
actions: ['EventPlayAS', 'EventTriggerEmitXLink']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Weapon_Bottle_HalfMilk
entrypoint: None()
actions: ['EventPlayAS', 'EventTriggerEmitXLink']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Weapon_Bottle_GreenPotion
entrypoint: None()
actions: ['EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Weapon_Bottle_BluePotion
entrypoint: None()
actions: ['EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventCamera
entrypoint: None()
actions: ['EventChangeTemporarilyToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventTriggerZeldaNotesAddIntegratedValueItem']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void EntryPoint0() {
    UISystemActor.EventTriggerSetDisplayHeartGauge({'IsDisplayHeartGauge': True})
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    Player_Event.EventTriggerPlayerStopUpdateSelectedItem()
    EventCamera.EventChangeTemporarilyToPlayerCamera({'EnableControle': True, 'IsWaitEnd': False})
    Player_Event.EventPlayerDrawnBottleFull({'IsWaitEnd': True})
    PouchSystemActor.EventTriggerConsumeDrinkFromSelectedBottle()

    fork {
        switch Player_Event.EventQueryGetBottleContent() {
          case 1:
            EventSystemActor[bottle].EventWait({'IsWaitEnd': True, 'Frames': 66})
            Weapon_Bottle_RedPotion.EventPlayAS({'ASName': 'CapOff', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
            EventSystemActor[bottle].EventWait({'Frames': 10, 'IsWaitEnd': True})
            GameSystemActor.EventTriggerZeldaNotesAddIntegratedValueItem({'Type': 10, 'Frame': 114})
          case 2:
            EventSystemActor[bottle].EventWait({'IsWaitEnd': True, 'Frames': 66})
            Weapon_Bottle_GreenPotion.EventPlayAS({'ASName': 'CapOff', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
            EventSystemActor[bottle].EventWait({'IsWaitEnd': True, 'Frames': 10})
            GameSystemActor.EventTriggerZeldaNotesAddIntegratedValueItem({'Type': 12, 'Frame': 114})
          case 3:
            EventSystemActor[bottle].EventWait({'IsWaitEnd': True, 'Frames': 66})
            Weapon_Bottle_BluePotion.EventPlayAS({'ASName': 'CapOff', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
            EventSystemActor[bottle].EventWait({'IsWaitEnd': True, 'Frames': 10})
            GameSystemActor.EventTriggerZeldaNotesAddIntegratedValueItem({'Type': 11, 'Frame': 114})
          case 12:
            EventSystemActor[bottle].EventWait({'IsWaitEnd': True, 'Frames': 66})

            fork {
                Weapon_Bottle_Milk.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'CapOff_Milk', 'IsWaitEnd': False})
            } {
                EventSystemActor[bottle].EventWait({'IsWaitEnd': True, 'Frames': 90})
                Weapon_Bottle_Milk.EventTriggerEmitXLink({'SLinkKey': 'Drink', 'ELinkKey': ''})
                EventSystemActor[bottle].EventWait({'IsWaitEnd': True, 'Frames': 30})
                Weapon_Bottle_Milk.EventTriggerEmitXLink({'SLinkKey': 'Drink', 'ELinkKey': ''})
            }

            GameSystemActor.EventTriggerZeldaNotesAddIntegratedValueItem({'Type': 14, 'Frame': 4})
            EventSystemActor[bottle].EventWait({'IsWaitEnd': True, 'Frames': 10})
          case 13:
            EventSystemActor[bottle].EventWait({'IsWaitEnd': True, 'Frames': 66})

            fork {
                Weapon_Bottle_HalfMilk.EventPlayAS({'ASName': 'CapOff', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
            } {
                EventSystemActor[bottle].EventWait({'IsWaitEnd': True, 'Frames': 90})
                Weapon_Bottle_HalfMilk.EventTriggerEmitXLink({'SLinkKey': 'Drink', 'ELinkKey': ''})
                EventSystemActor[bottle].EventWait({'IsWaitEnd': True, 'Frames': 30})
                Weapon_Bottle_HalfMilk.EventTriggerEmitXLink({'SLinkKey': 'Drink', 'ELinkKey': ''})
            }

            GameSystemActor.EventTriggerZeldaNotesAddIntegratedValueItem({'Type': 14, 'Frame': 4})
            EventSystemActor[bottle].EventWait({'IsWaitEnd': True, 'Frames': 10})
        }
    } {
        Player_Event.EventPlayerDrinkBottle({'IsWaitEnd': True})
    }


    fork {
        if Player_Event.EventQueryGetBottleContent() == 13 {
            EventSystemActor[bottle].EventWait({'IsWaitEnd': True, 'Frames': 75})
            Weapon_Bottle_HalfMilk.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'CapOn'})
            EventSystemActor[bottle].EventWait({'IsWaitEnd': True, 'Frames': 10})
        }
    } {
        Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'IsAllSlot': False, 'ForceFadeFrame': -1.0, 'KeepOneTimeAnm': False, 'ASCommand': 'DemoDrinkBottle-Ed', 'UseAnmDriven': False, 'ClothWarpMode': 0})
        Player_Event.EventTriggerPlayerStartUpdateSelectedItem()
    }

    Player_Event.EventPlayerDrawnShieldAfterUseBottle({'IsWaitEnd': True, 'IsImmediateDrawn': False})
}
