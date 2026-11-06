-------- EventFlow: ReplaceEquipmentForEraChange --------

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerCopyGameDataString64', 'EventTriggerSetGameDataString64', 'EventTriggerSetGameDataBool']
queries: ['EventQueryIsEmptyGameDataString64', 'EventQueryIsGameDataString64', 'EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: ['EventTriggerPlayerClearNayruLoveCount']
queries: ['EventQueryPlayerIsChild']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: PouchSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryIsExistInPouch']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void ReplaceEquipmentForEraChange() {
    if !GameDataActor.EventQueryIsEmptyGameDataString64({'GameDataName': 'PlayerStatus.AnotherEraEquipWeapon', 'Index': -1}) {
        if !Player_Event.EventQueryPlayerIsChild() {
            GameDataActor.EventTriggerSetGameDataString64({'GameDataName': 'PlayerStatus.AnotherEraEquipWeapon', 'Value': 'Weapon_Sword_Master', 'Index': -1})
        } else {
            GameDataActor.EventTriggerSetGameDataString64({'GameDataName': 'PlayerStatus.AnotherEraEquipWeapon', 'Index': -1, 'Value': 'Weapon_Sword_Kokiri'})
        }
        Event13:
        if !GameDataActor.EventQueryIsEmptyGameDataString64({'Index': -1, 'GameDataName': 'PlayerStatus.AnotherEraEquipShield'}) {
            if !GameDataActor.EventQueryIsGameDataString64({'GameDataName': 'PlayerStatus.EquipShield', 'Value': 'Weapon_Shield_Hylian', 'Index': -1}) {
                GameDataActor.EventTriggerSetGameDataString64({'GameDataName': 'PlayerStatus.AnotherEraEquipShield', 'Index': -1, 'Value': 'Weapon_Shield_Hylian'})
                Event8:
                EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
                GameDataActor.EventTriggerCopyGameDataString64({'SrcGameDataName': 'PlayerStatus.AnotherEraEquipWeapon', 'DstGameDataName': 'PlayerStatus.EquipWeapon', 'Index': -1, 'SrcIndex': -1})
                if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Sequence_IsChildhood', 'Index': -1}) {
                    GameDataActor.EventTriggerCopyGameDataString64({'DstGameDataName': 'PlayerStatus.AnotherEraEquipWeapon', 'SrcGameDataName': 'PlayerStatus.EquipWeapon', 'Index': -1, 'SrcIndex': -1})
                } else {
                    GameDataActor.EventTriggerCopyGameDataString64({'DstGameDataName': 'PlayerStatus.AnotherEraEquipWeapon', 'Index': -1, 'SrcIndex': -1, 'SrcGameDataName': 'PlayerWeaponBeforeForceEquipMasterSword'})
                }
                GameDataActor.EventTriggerCopyGameDataString64({'DstGameDataName': 'PlayerStatus.EquipShield', 'SrcGameDataName': 'PlayerStatus.AnotherEraEquipShield', 'Index': -1, 'SrcIndex': -1})
                GameDataActor.EventTriggerCopyGameDataString64({'DstGameDataName': 'PlayerStatus.AnotherEraEquipShield', 'SrcGameDataName': 'PlayerStatus.EquipShield', 'Index': -1, 'SrcIndex': -1})
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'PlayerStatus.IsActiveHeadArmor', 'Value': False, 'Index': -1})
                Player_Event.EventTriggerPlayerClearNayruLoveCount()
            } else
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Market_Child_Firsttime_GotoAdult', 'Index': -1}) {
                goto Event8
            } else
            if !PouchSystemActor.EventQueryIsExistInPouch({'Num': 1, 'Actor': 'Weapon_Shield_Hylian'}) {
                GameDataActor.EventTriggerSetGameDataString64({'GameDataName': 'PlayerStatus.AnotherEraEquipShield', 'Index': -1, 'Value': 'Weapon_Shield_Hylian'})
            }
            goto Event8
        } else
        if !GameDataActor.EventQueryIsGameDataString64({'GameDataName': 'PlayerStatus.AnotherEraEquipShield', 'Value': 'Weapon_Shield_Deku', 'Index': -1}) {
            if PouchSystemActor.EventQueryIsExistInPouch({'Actor': 'Weapon_Shield_Deku', 'Num': 1}) {
                Event18:
                GameDataActor.EventTriggerSetGameDataString64({'GameDataName': 'PlayerStatus.AnotherEraEquipShield', 'Index': -1, 'Value': ''})
            }
            goto Event8
        } else
        if !GameDataActor.EventQueryIsGameDataString64({'GameDataName': 'PlayerStatus.AnotherEraEquipShield', 'Value': 'Weapon_Shield_Hylian', 'Index': -1}) {
            if PouchSystemActor.EventQueryIsExistInPouch({'Num': 1, 'Actor': 'Weapon_Shield_Hylian'}) {
                goto Event18
            }
            goto Event8
        } else
        if !GameDataActor.EventQueryIsGameDataString64({'GameDataName': 'PlayerStatus.AnotherEraEquipShield', 'Value': 'Weapon_Shield_Mirror', 'Index': -1})
        && PouchSystemActor.EventQueryIsExistInPouch({'Num': 1, 'Actor': 'Weapon_Shield_Mirror'}) {
            goto Event18
        }
        goto Event8
    } else
    goto Event13
}
