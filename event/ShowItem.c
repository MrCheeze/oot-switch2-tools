-------- EventFlow: ShowItem --------

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart', 'EventCreateShowItem', 'EventIgnitionShowItem', 'EventCreateShowItemBottle']
queries: ['EventQueryPlayerIsChild', 'EventQueryPlayerCheckSelectedItem']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: EventCamera
entrypoint: None()
actions: ['EventChangeTemporarilyToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: SystemTextNPC
entrypoint: None()
actions: ['EventTalk']
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
queries: ['EventQueryIsGameDataBoolExp', 'EventQueryIsBool']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: PouchSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryIsExistInPouch']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void EntryPoint0() {

    fork {
        Player_Event.EventCreateShowItem({'IsWaitEnd': True, 'AssignableItem': 'AssignableItem'})
        Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtShowItemFailure', 'UseAnmDriven': False, 'IsAllSlot': False, 'ForceFadeFrame': -1.0, 'KeepOneTimeAnm': True, 'IsWaitEnd': False, 'ClothWarpMode': 0})
        if !Player_Event.EventQueryPlayerIsChild() {
            Player_Event.EventIgnitionShowItem({'IsWaitEnd': True, 'IsScale': True, 'CreateTime': 70.0, 'IsInvalidateShadow': True, 'IsAsPlay': True, 'ASCommand': 'Rotate_GetDemo', 'ItemPos': [0.20999999344348907, -0.15000000596046448, 0.30000001192092896]})
            Event21:
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
            SystemTextNPC.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'IsOverrideStyle': False, 'MessageId': 'EventFlowMsg/Item_Event:Talk_03', 'OverrideStyle': 0, 'MaintainPerformanceState': 0})
        } else
        if !PouchSystemActor.EventQueryIsExistInPouch({'Num': 1, 'Actor': 'Item_OddPowder'}) {
            Player_Event.EventIgnitionShowItem({'IsWaitEnd': True, 'IsScale': True, 'CreateTime': 70.0, 'IsInvalidateShadow': True, 'IsAsPlay': True, 'ASCommand': 'Rotate_GetDemo', 'ItemPos': [0.32499998807907104, -0.10000000149011612, 0.4000000059604645]})
            goto Event21
        } else
        if !PouchSystemActor.EventQueryIsExistInPouch({'Num': 1, 'Actor': 'Item_Prescription'}) {
            Player_Event.EventIgnitionShowItem({'IsWaitEnd': True, 'ItemPos': [0.32499998807907104, -0.05000000074505806, 0.4000000059604645], 'IsScale': True, 'CreateTime': 70.0, 'IsInvalidateShadow': True, 'IsAsPlay': True, 'ASCommand': 'Rotate_GetDemo'})
            goto Event21
        } else
        if !PouchSystemActor.EventQueryIsExistInPouch({'Num': 1, 'Actor': 'Item_EyeDrop'}) {
            Player_Event.EventIgnitionShowItem({'IsWaitEnd': True, 'ItemPos': [0.32499998807907104, -0.07000000029802322, 0.4000000059604645], 'IsScale': True, 'CreateTime': 70.0, 'IsInvalidateShadow': True, 'IsAsPlay': True, 'ASCommand': 'Rotate_GetDemo'})
            goto Event21
        } else
        switch Player_Event.EventQueryPlayerCheckSelectedItem() {
          case [0, 2]:
            Player_Event.EventIgnitionShowItem({'IsWaitEnd': True, 'IsScale': True, 'CreateTime': 70.0, 'ItemPos': [0.32499998807907104, -0.03999999910593033, 0.4000000059604645], 'IsInvalidateShadow': True, 'IsAsPlay': True, 'ASCommand': 'Rotate_GetDemo'})
            goto Event21
          case 1:
            Player_Event.EventIgnitionShowItem({'IsWaitEnd': True, 'ItemPos': [0.32499998807907104, -0.05000000074505806, 0.4000000059604645], 'IsScale': True, 'CreateTime': 70.0, 'IsInvalidateShadow': True, 'IsAsPlay': True, 'ASCommand': 'Rotate_GetDemo'})
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SubEvent_GetSwordBigGoron_IsCompleted_Exp'}) {
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
                SystemTextNPC.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'MessageId': 'EventFlowMsg/Item_Event:Talk_05', 'MaintainPerformanceState': 0})
            } else {
                goto Event21
            }
        }
    } {
        EventCamera.EventChangeTemporarilyToPlayerCamera({'EnableControle': True, 'IsWaitEnd': False})
    }


    call NpcCommon.ShowItem_Close()

}

void ShowItemSuccess() {
    Player_Event.EventCreateShowItem({'IsWaitEnd': True, 'AssignableItem': 'AssignableItem'})

    fork {

        call Sub_ShowItem({'AssignableItem': 'AssignableItem'})

    } {
        EventCamera.EventChangeTemporarilyToPlayerCamera({'EnableControle': True, 'IsWaitEnd': False})
    }

}

void ShowItemSuccess_NoCamera_BottleItem() {
    Player_Event.EventCreateShowItemBottle({'IsWaitEnd': True, 'BottleItem': 'BottleItem'})
    Player_Event.EventPlayerPlayASForFlowchart({'IsAllSlot': False, 'ForceFadeFrame': -1.0, 'KeepOneTimeAnm': True, 'ASCommand': 'EvtShowItemSuccess', 'UseAnmDriven': True, 'IsWaitEnd': False, 'ClothWarpMode': 0})
    if !GameDataActor.EventQueryIsBool({'BoolValue': 'BoolValue'}) {
        Player_Event.EventIgnitionShowItem({'IsWaitEnd': True, 'IsScale': True, 'CreateTime': 70.0, 'IsInvalidateShadow': True, 'IsAsPlay': True, 'ASCommand': 'Rotate_GetDemo', 'ItemPos': [0.05000000074505806, -0.44999998807907104, 0.4000000059604645]})
        Event44:
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
    } else
    if !Player_Event.EventQueryPlayerIsChild() {
        Player_Event.EventIgnitionShowItem({'IsWaitEnd': True, 'IsScale': True, 'CreateTime': 70.0, 'IsInvalidateShadow': True, 'IsAsPlay': True, 'ASCommand': 'Rotate_GetDemo', 'ItemPos': [0.07500000298023224, -0.44999998807907104, 0.44999998807907104]})
    } else {
        Player_Event.EventIgnitionShowItem({'IsWaitEnd': True, 'IsScale': True, 'CreateTime': 70.0, 'IsInvalidateShadow': True, 'IsAsPlay': True, 'ASCommand': 'Rotate_GetDemo', 'ItemPos': [0.0949999988079071, -0.6000000238418579, 0.6499999761581421]})
    }
    goto Event44
}

void ShowItemSuccess_NoCamera() {
    Player_Event.EventCreateShowItem({'IsWaitEnd': True, 'AssignableItem': 'AssignableItem'})

    call Sub_ShowItem({'AssignableItem': 'AssignableItem'})

}

void Sub_ShowItem() {
    Player_Event.EventPlayerPlayASForFlowchart({'IsAllSlot': False, 'ForceFadeFrame': -1.0, 'KeepOneTimeAnm': True, 'ASCommand': 'EvtShowItemSuccess', 'UseAnmDriven': True, 'IsWaitEnd': False, 'ClothWarpMode': 0})
    if !Player_Event.EventQueryPlayerIsChild() {
        Player_Event.EventIgnitionShowItem({'IsWaitEnd': True, 'ItemPos': [0.05000000074505806, -0.5249999761581421, 0.44999998807907104], 'IsScale': True, 'CreateTime': 70.0, 'IsInvalidateShadow': True, 'ASCommand': 'Rotate_GetDemo', 'IsAsPlay': True})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
    } else {
        Player_Event.EventIgnitionShowItem({'IsWaitEnd': True, 'ItemPos': [0.07500000298023224, -0.574999988079071, 0.6499999761581421], 'IsScale': True, 'CreateTime': 70.0, 'IsInvalidateShadow': True, 'IsAsPlay': True, 'ASCommand': 'Rotate_GetDemo'})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
    }
}
