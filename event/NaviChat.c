-------- EventFlow: NaviChat --------

Actor: Player_Event
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventTransition']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventTriggerChangeEmotion', 'EventTriggerNaviSetResetEmoteTimer', 'EventNaviRequestBallonMessage']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

void NaviEmotionChange() {
    Npc_Navi.EventTriggerChangeEmotion({'EmotionType': 'EmotionType', 'IsActFaceOnly': False})
    Npc_Navi.EventTriggerNaviSetResetEmoteTimer({'Timer': 6.0})
}

void NaviEmotionChange_Short() {
    Npc_Navi.EventTriggerChangeEmotion({'EmotionType': 'EmotionType', 'IsActFaceOnly': False})
    Npc_Navi.EventTriggerNaviSetResetEmoteTimer({'Timer': 3.5})
}

void NaviEmotionChange_NoTime() {
    Npc_Navi.EventTriggerChangeEmotion({'IsActFaceOnly': False, 'EmotionType': 'EmotionType'})
}

void NaviChat_Serious() {
    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'NaviChat_Serious_Time', 'Index': -1, 'Value': True})
}

void TreasureBoxDM_NaviChat_Deku_Map() {

    call PlayDemo()

    Npc_Navi.EventNaviRequestBallonMessage({'Index': 354})
}

void TreasureBoxDM_NaviChat_DoDoGon_Compass() {

    call PlayDemo()

}

void TreasureBoxDM_NaviChat_ForestTemple_Map() {

    call PlayDemo()

}

void TreasureBoxDM_NaviChat_JabuJabu_Compass() {

    call PlayDemo()

}

void TreasureBoxDM_NaviChat_ForestTemple_Compass() {

    call PlayDemo()

}

void TreasureBoxDM_NaviChat_FireTemple_Compass() {

    call PlayDemo()

}

void TreasureBoxDM_NaviChat_FireTemple_Map() {

    call PlayDemo()

}

void TreasureBoxDM_NaviChat_WaterTemple_Map() {

    call PlayDemo()

}

void TreasureBoxDM_NaviChat_WaterTemple_Compass() {

    call PlayDemo()

}

void TreasureBoxDM_NaviChat_ShadowTemple_Map() {

    call PlayDemo()

}

void TreasureBoxDM_NaviChat_SpiritTemple_Compass() {

    call PlayDemo()

}

void TreasureBoxDM_NaviChat_BottomOfTheWell_Compass() {

    call PlayDemo()

}

void PlayDemo() {
    Player_Event.EventTriggerParticipateEvent()
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Dm_SY_Treasurebox'})
}

void TreasureBoxDM_NaviChat_DoDoGon_Map() {

    call PlayDemo()

}

void TreasureBoxDM_NaviChat_ShadowTemple_Compass() {

    call PlayDemo()

}

void TreasureBoxDM_NaviChat_Deku_Compass() {

    call PlayDemo()

    Npc_Navi.EventNaviRequestBallonMessage({'Index': 345})
}

void NaviEmotionChange_Return() {
    Npc_Navi.EventTriggerChangeEmotion({'IsActFaceOnly': False, 'EmotionType': 0})
}

void TreasureBoxDM_NaviChat_Deku_GetSlingShot() {

    call PlayDemo()

    Npc_Navi.EventNaviRequestBallonMessage({'Index': 474})
}

void TreasureBoxDM_NaviChat_FireTemple_GetHammer() {

    call PlayDemo()

    Npc_Navi.EventNaviRequestBallonMessage({'Index': 479})
}
