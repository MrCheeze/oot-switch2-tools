-------- EventFlow: PlayerWithNavi --------

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerWarpToTargetActor']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventPlayAS', 'EventNaviWarpToPlayerHomePosition', 'EventNaviLookAtObject']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: GameDataActor
entrypoint: None()
actions: []
queries: ['EventQueryIsBool']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void PlayerWithNavi_Warp_Choice() {
    Player_Event.EventPlayerWarpToTargetActor({'IsWaitEnd': False, 'UseDemoWait': True, 'ASCommand': 'EvtWait', 'TargetActorKind': 'TargetActorKind', 'ActorName': 'ActorName', 'InstanceName': 'InstanceName', 'OffsetBase': 'OffsetBase', 'PositionOffset': 'PositionOffset', 'YAngle': 'YAngle'})
    if !GameDataActor.EventQueryIsBool({'BoolValue': False}) {
        Npc_Navi.EventNaviWarpToPlayerHomePosition({'IsWaitEnd': True, 'IsDisguisedPlayerPos': True, 'IsNearOffset': False, 'Type': 1, 'Target': 'Target', 'ActorName': 'ActorName', 'InstanceName': 'InstanceName', 'WorldPos': 'PositionOffset', 'OffsetBase': 'OffsetBase', 'PosOffset': 'PositionOffset', 'YAngle': 'YAngle'})
    } else {
        Npc_Navi.EventNaviWarpToPlayerHomePosition({'IsWaitEnd': True, 'IsDisguisedPlayerPos': True, 'IsNearOffset': False, 'Type': 2, 'Target': 'Target', 'ActorName': 'ActorName', 'InstanceName': 'InstanceName', 'WorldPos': 'PositionOffset', 'OffsetBase': 'OffsetBase', 'PosOffset': 'PositionOffset', 'YAngle': 'YAngle'})
    }
    if !GameDataActor.EventQueryIsBool({'BoolValue': 'IsLookAtPlayer'}) {
        Npc_Navi.EventNaviLookAtObject({'Target': 2, 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsTurnX': True})
    }
    if !GameDataActor.EventQueryIsBool({'BoolValue': 'IsPlayNaviAS'}) {
        Npc_Navi.EventPlayAS({'ASName': 'EvtWait', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    }
}
