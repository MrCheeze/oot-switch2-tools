-------- EventFlow: Common_Dungeon_OpenDoorChainLockMove --------

Actor: DoorShutter_EventStarter
entrypoint: None()
actions: ['EventDoorOpen', 'EventDoorUnlockChain']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 1}

Actor: Npc_Hylia_013_Adult[GerudoFortress]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Hylia_014_Adult[GerudoFortress]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Hylia_015_Adult[GerudoFortress]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Hylia_016_Adult[GerudoFortress]
entrypoint: None()
actions: []
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventTransition', 'EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerTurnAndLook', 'EventTriggerParticipateEvent', 'EventTriggerPlayerEventStartWithCarry', 'EventPlayerPlayASForFlowchart', 'EventPlayerMove']
queries: ['EventQueryPlayerIsKeepLiftableDoorMove']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: UISystemActor
entrypoint: None()
actions: ['EventTriggerSetDisplayMiniMap']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventSoundRequestDucking', 'EventSoundReleaseDucking']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_EventStarter[GerudoFortress_OpenDoorChainLock_MainFlow(NpcActor)]
entrypoint: GerudoFortress_OpenDoorChainLock_MainFlow(NpcActor)
actions: ['EventTriggerParticipateEvent', 'EventTriggerBecomeSpeaker', 'EventAIScheduleMoveToAnchor']
queries: ['EventQueryAIScheduleIsArrived']
params: None

void MoveToPlusZ() {

    call Common_Dungeon_OpenShutterMove.PreMoveCommon()


    call Common_Dungeon_OpenShutterMove.UnlockMoveTo({'PreOpenPos': 'PreOpenPos', 'PostOpenPos': 'PostOpenPos', 'LastPos': 'LastPos'})

}

void GerudoFortress_OpenDoorChainLock_Npc_Hylia_013() {
    SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'Dm:Bgm下げ', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 2})

    call GerudoFortress_OpenDoorChainLock_MainFlow({'AnchorType': 4, 'PlayerLootAtActorName': 'Npc_Hylia_013_Adult', 'PlayerLootAtActorInstanceName': 'GerudoFortress', 'NpcActor': ActorIdentifier(name="Npc_Hylia_013_Adult", sub_name="GerudoFortress"), 'PreOpenPos': 'PreOpenPos', 'LastPos': 'LastPos'})


    call SageOfSpirit_RescueCarpenter.Check_NumOfCarpenterHelped()

    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 2, 'EventName': 'Dm_Gerudo_0020'})
}

void GerudoFortress_OpenDoorChainLock_MainFlow() {
    Npc_EventStarter[GerudoFortress_OpenDoorChainLock_MainFlow(NpcActor)].EventTriggerParticipateEvent()

    fork {
        Player_Event.EventTriggerParticipateEvent()
        UISystemActor.EventTriggerSetDisplayMiniMap({'IsDisplayMiniMap': True})
        if !Player_Event.EventQueryPlayerIsKeepLiftableDoorMove() {
            Player_Event.EventTriggerPlayerEventStartWithCarry()
        }
        Player_Event.EventPlayerMove({'IsWaitEnd': True, 'MoveSpeed': 1.0, 'DecSpeedDistance': 1.0, 'WorldPosX': 0.0, 'WorldPosY': 0.0, 'WorldPosZ': 0.0, 'RidableDesiredGear': 0, 'RidableHasToDecelerateNearGoal': False, 'WorldPos': 'PreOpenPos', 'IsSheathed': False, 'IsInertiaMove': False, 'ApplySlowMove': False, 'IsContinueMoveAnimeAfterFinish': False})
        Player_Event.EventPlayerTurnAndLook({'IsWaitEnd': True, 'PosOffset': [0.0, 1.0, 0.0], 'Target': 0, 'ActorName': '', 'InstanceName': '', 'Direction': 0.0, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'TurnFaceControlType': 0, 'KeepTalkWait': False, 'UseNormalTurn': False, 'WorldPos': 'LastPos', 'IsDoNavi': False})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
        Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtDoorKey', 'IsWaitEnd': True, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        DoorShutter_EventStarter.EventDoorUnlockChain({'IsWaitEnd': False})
        DoorShutter_EventStarter.EventDoorOpen({'IsWaitEnd': False})
        Player_Event.EventPlayerTurnAndLook({'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': True, 'Target': 1, 'ActorName': '', 'InstanceName': '', 'TurnFaceControlType': 3, 'IsWaitEnd': False, 'KeepTalkWait': True, 'SlowTurn': False, 'UseNormalTurn': False, 'IsDoNavi': False})
    } {
        if !Npc_EventStarter[GerudoFortress_OpenDoorChainLock_MainFlow(NpcActor)].EventQueryAIScheduleIsArrived() {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 75})
        } else {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        }
        Npc_EventStarter[GerudoFortress_OpenDoorChainLock_MainFlow(NpcActor)].EventTriggerBecomeSpeaker()
        Npc_EventStarter[GerudoFortress_OpenDoorChainLock_MainFlow(NpcActor)].EventAIScheduleMoveToAnchor({'InstanceName': '', 'ASName': '', 'DesiredGear': 1, 'IsWaitEnd': True, 'IsTurnToAnchorRot': True, 'ForceIsNotAlignmentWaitPosition': False, 'IsAlignAnchorPos': False, 'WaitCancelPathFinding': False, 'AnchorType': 'AnchorType'})
    }

    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
}

void GerudoFortress_OpenDoorChainLock_Npc_Hylia_014() {
    SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'Dm:Bgm下げ', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 2})

    call GerudoFortress_OpenDoorChainLock_MainFlow({'AnchorType': 4, 'PlayerLootAtActorName': 'Npc_Hylia_014_Adult', 'PlayerLootAtActorInstanceName': 'GerudoFortress', 'NpcActor': ActorIdentifier(name="Npc_Hylia_014_Adult", sub_name="GerudoFortress"), 'PreOpenPos': 'PreOpenPos', 'LastPos': 'LastPos'})


    call SageOfSpirit_RescueCarpenter.Check_NumOfCarpenterHelped()

    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 2, 'EventName': 'Dm_Gerudo_0021'})
}

void GerudoFortress_OpenDoorChainLock_Npc_Hylia_015() {
    SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'Dm:Bgm下げ', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 2})

    call GerudoFortress_OpenDoorChainLock_MainFlow({'AnchorType': 4, 'PlayerLootAtActorName': 'Npc_Hylia_015_Adult', 'PlayerLootAtActorInstanceName': 'GerudoFortress', 'NpcActor': ActorIdentifier(name="Npc_Hylia_015_Adult", sub_name="GerudoFortress"), 'PreOpenPos': 'PreOpenPos', 'LastPos': 'LastPos'})


    call SageOfSpirit_RescueCarpenter.Check_NumOfCarpenterHelped()

    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 2, 'EventName': 'Dm_Gerudo_0022'})
}

void GerudoFortress_OpenDoorChainLock_Npc_Hylia_016() {
    SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'Dm:Bgm下げ', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 2})

    call GerudoFortress_OpenDoorChainLock_MainFlow({'AnchorType': 4, 'PlayerLootAtActorName': 'Npc_Hylia_016_Adult', 'PlayerLootAtActorInstanceName': 'GerudoFortress', 'NpcActor': ActorIdentifier(name="Npc_Hylia_016_Adult", sub_name="GerudoFortress"), 'PreOpenPos': 'PreOpenPos', 'LastPos': 'LastPos'})


    call SageOfSpirit_RescueCarpenter.Check_NumOfCarpenterHelped()

    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 2, 'EventName': 'Dm_Gerudo_0023'})
}

void MoveToPlusZ_Boss() {

    call Common_Dungeon_OpenShutterMove.PreMoveCommon_Boss()


    call Common_Dungeon_OpenShutterMove.UnlockMoveToBoss({'PreOpenPos': 'PreOpenPos', 'PostOpenPos': 'PostOpenPos', 'LastPos': 'LastPos'})

}

void MoveToPlusZ_Lock() {

    call Common_Dungeon_OpenShutterMove.PreMoveCommon()


    call Common_Dungeon_OpenShutterMove.UnlockMoveTo_ThenLocked({'PreOpenPos': 'PreOpenPos', 'PostOpenPos': 'PostOpenPos', 'LastPos': 'LastPos', 'MoveAnchorInstanceName': 'OpenShutterMovePosMinusZ', 'CameraTargetAnchorInstanceName': 'CameraPosMinusZ'})

}

void Shiro_OpenDoor_Next() {

    call Common_Camera_Pln.CameraDoF_Default()


    call SageOfSpirit_RescueCarpenter.StepCheck_Clear({'GameDataName01': 'GerudoFortress_Saved_Npc_Hylia_016_Adult'})

    SoundSystemActor.EventSoundReleaseDucking({'DuckingName': 'Dm:Bgm下げ', 'DuckingName2': '', 'DuckingName3': '', 'IsImmediately': False, 'IsClearRefCount': False})
}

void Saburo_OpenDoor_Next0() {

    call Common_Camera_Pln.CameraDoF_Default()


    call SageOfSpirit_RescueCarpenter.StepCheck_Clear({'GameDataName01': 'GerudoFortress_Saved_Npc_Hylia_015_Adult'})

    SoundSystemActor.EventSoundReleaseDucking({'DuckingName': 'Dm:Bgm下げ', 'DuckingName2': '', 'DuckingName3': '', 'IsImmediately': False, 'IsClearRefCount': False})
}

void Jiro_OpenDoor_Next() {

    call Common_Camera_Pln.CameraDoF_Default()


    call SageOfSpirit_RescueCarpenter.StepCheck_Clear({'GameDataName01': 'GerudoFortress_Saved_Npc_Hylia_014_Adult'})

    SoundSystemActor.EventSoundReleaseDucking({'DuckingName': 'Dm:Bgm下げ', 'DuckingName2': '', 'DuckingName3': '', 'IsImmediately': False, 'IsClearRefCount': False})
}

void Ichiro_OpenDoor_Next0() {

    call Common_Camera_Pln.CameraDoF_Default()


    call SageOfSpirit_RescueCarpenter.StepCheck_Clear({'GameDataName01': 'GerudoFortress_Saved_Npc_Hylia_013_Adult'})

    SoundSystemActor.EventSoundReleaseDucking({'DuckingName': 'Dm:Bgm下げ', 'DuckingName2': '', 'DuckingName3': '', 'IsImmediately': False, 'IsClearRefCount': False})
}
