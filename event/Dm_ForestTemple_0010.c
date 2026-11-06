-------- EventFlow: Dm_ForestTemple_0010 --------

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventExecuteProgressChallengeStep', 'EventTriggerShowChallengeProgressUI']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: ['EventTriggerPlayerLookAtObject', 'EventPlayerWarpToTargetPosAndRot', 'EventPlayerPlayASForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventNaviMoveAroundToPlayer', 'EventPlayAS', 'EventNaviRequestBallonMessage']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_ForestTemple_0010/Dm_ForestTemple_0010_Npc_Navi/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_ForestTemple_0010_Npc_Navi.root.as', 'ExceptionalBindType': 3}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveCameraAnimationInstructionsForFlowchart', 'EventTriggerSendReserveCameraResetMessageToPlayerCamera', 'EventMoveToTargetPosCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: DevelopEventSystemActor
entrypoint: None()
actions: ['EventDemoProductSupportComment']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Obj_ForestTemple_Elevator_A_01[Storage]
entrypoint: None()
actions: ['EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: UISystemActor
entrypoint: None()
actions: ['EventTriggerSetDisplayMiniMap']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Obj_ForestTemple_SwitchCandleStick_A_01
entrypoint: None()
actions: ['EventTriggerXLinkFadeByKey', 'EventTriggerEmitXLink']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Obj_ForestTemple_SwitchCandleStick_A_04
entrypoint: None()
actions: ['EventTriggerXLinkFadeByKey', 'EventTriggerEmitXLink']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Obj_ForestTemple_SwitchCandleStick_A_03
entrypoint: None()
actions: ['EventTriggerXLinkFadeByKey', 'EventTriggerEmitXLink']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Obj_ForestTemple_SwitchCandleStick_A_02
entrypoint: None()
actions: ['EventTriggerXLinkFadeByKey', 'EventTriggerEmitXLink']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Dm_Locator[Elevetor_A_0]
entrypoint: None()
actions: ['EventWarpToTargetActor', 'EventTriggerEmitXLink', 'EventTriggerXLinkFadeByKey']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 1}

Actor: Dm_Poe_Meg
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot', 'EventPlayAS', 'EventPoeSistersAppear', 'EventTriggerEnemyCommonSetEnableClothParallel', 'EventTriggerRequestDeath']
queries: []
params: {'UseEventModelAnime': 'Work/Model/Event/Dm_ForestTemple_0010/Dm_ForestTemple_0010_Enemy_MiddleBoss_Poe_Meg/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_ForestTemple_0010_Enemy_MiddleBoss_Poe_Meg.root.as', 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'EventMemberCreateMethod': 1}

Actor: Dm_Poe_Joelle
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot', 'EventPlayAS', 'EventTriggerEmitXLink', 'EventPoeSistersAppear', 'EventTriggerEnemyCommonSetEnableClothParallel', 'EventTriggerRequestDeath']
queries: []
params: {'UseEventModelAnime': 'Work/Model/Event/Dm_ForestTemple_0010/Dm_ForestTemple_0010_Enemy_Poe_Joelle/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_ForestTemple_0010_Enemy_Poe_Joelle.root.as', 'EventMemberCreateMethod': 1, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False}

Actor: Dm_Poe_Beth
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot', 'EventPlayAS', 'EventPoeSistersAppear', 'EventTriggerEnemyCommonSetEnableClothParallel', 'EventTriggerRequestDeath']
queries: []
params: {'UseEventModelAnime': 'Work/Model/Event/Dm_ForestTemple_0010/Dm_ForestTemple_0010_Enemy_Poe_Beth/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_ForestTemple_0010_Enemy_Poe_Beth.root.as', 'EventMemberCreateMethod': 1, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False}

Actor: Dm_Poe_Amy
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot', 'EventPlayAS', 'EventTriggerEmitXLink', 'EventPoeSistersAppear', 'EventTriggerEnemyCommonSetEnableClothParallel', 'EventTriggerRequestDeath']
queries: []
params: {'UseEventModelAnime': 'Work/Model/Event/Dm_ForestTemple_0010/Dm_ForestTemple_0010_Enemy_Poe_Amy/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_ForestTemple_0010_Enemy_Poe_Amy.root.as', 'EventMemberCreateMethod': 1, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False}

Actor: Dm_Weapon_PoeSisters_Joelle_Torch
entrypoint: None()
actions: ['EventTriggerXLinkFadeByKey', 'EventTriggerEmitXLink', 'EventTriggerModelBind']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 1}

Actor: Dm_Weapon_PoeSisters_Beth_Torch
entrypoint: None()
actions: ['EventTriggerXLinkFadeByKey', 'EventTriggerEmitXLink', 'EventTriggerModelBind']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 1}

Actor: Dm_Weapon_PoeSisters_Amy_Torch
entrypoint: None()
actions: ['EventTriggerXLinkFadeByKey', 'EventTriggerEmitXLink', 'EventTriggerModelBind']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 1}

Actor: Dm_Weapon_PoeSisters_Meg_Torch
entrypoint: None()
actions: ['EventTriggerEmitXLink', 'EventTriggerXLinkFadeByKey', 'EventTriggerModelBind']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 1}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: PostProcessingActor
entrypoint: None()
actions: ['EventSetAdvancedDoFForFlowchart', 'EventSetDoFForFlowchart', 'EventNorifyCutChangeForGraphics']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait', 'EventTriggerControllerRumble']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[Controller_Rumble_Wait]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void EntryPoint0() {
    UISystemActor.EventTriggerSetDisplayMiniMap({'IsDisplayMiniMap': False})

    call C01()


    call C02()


    call C03()


    call C04()


    call C05_C06()

    ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'SageOfForest', 'IsWaitEnd': True, 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'Step06'})
    Npc_Navi.EventNaviRequestBallonMessage({'Index': 297})
    ChallengeSystemActor.EventTriggerShowChallengeProgressUI({'ChallengeName': 'SageOfForest', 'IsFirstStep': False})
}

void C01() {
    DevelopEventSystemActor.EventDemoProductSupportComment({'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'IsWaitEnd': False, 'Text3': '', 'Text1': 'C01', 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'Text2': ''})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsAtVectorReferenceActorPosOnce': True, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'PosVector': [-0.019999999552965164, 112.48999786376953, 18.270000457763672], 'AtVector': [-0.019999999552965164, 102.18000030517578, -1.940000057220459], 'TargetFovy': 27.06999969482422, 'IsLinearMove': False, 'EndRecelerateRate': 0.0, 'DelayLater': 0, 'MoveTime': 160, 'StartAccelerateRate': 0.0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
        PostProcessingActor.EventSetDoFForFlowchart({'IsPrimaryApply': False, 'IsWaitEnd': True, 'EndDistance': 16.100000381469727, 'EndFNumber': 4.0, 'RequiredFrame': 15, 'IsAutoFocalDist': False, 'EndBluarLevel': 1.0})
        PostProcessingActor.EventSetDoFForFlowchart({'IsPrimaryApply': False, 'EndDistance': 23.600000381469727, 'EndFNumber': 5.199999809265137, 'EndBluarLevel': 1.5, 'IsWaitEnd': True, 'RequiredFrame': 130, 'IsAutoFocalDist': False})
    } {
        Dm_Poe_Meg.EventWarpToTargetPosAndRot({'YAngle': 0.0, 'IsWaitEnd': True, 'Position': [-5.191609859466553, 96.74571228027344, -3.4367198944091797], 'ClothWarpMode': -1})
        Dm_Poe_Meg.EventTriggerEnemyCommonSetEnableClothParallel({'IsEnable': True})
        Dm_Poe_Meg.EventPoeSistersAppear({'IsWaitEnd': True})
        Dm_Weapon_PoeSisters_Meg_Torch.EventTriggerModelBind({'ActorName': 'Dm_Poe_Meg', 'InstanceName': '', 'BoneName': 'Weapon_R', 'RotOffset': [0.0, 0.0, 0.0], 'TransOffset': [0.0, 0.0, 0.0]})
        Dm_Poe_Meg.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': True, 'ASName': 'C01', 'IsWaitEnd': False})
        Dm_Weapon_PoeSisters_Meg_Torch.EventTriggerXLinkFadeByKey({'IsKill': True, 'ELinkKey': 'Torch', 'SLinkKey': ''})
    } {
        Dm_Poe_Joelle.EventWarpToTargetPosAndRot({'YAngle': 0.0, 'IsWaitEnd': True, 'Position': [-4.07643985748291, 97.35398864746094, -3.137279987335205], 'ClothWarpMode': -1})
        Dm_Poe_Joelle.EventTriggerEnemyCommonSetEnableClothParallel({'IsEnable': True})
        Dm_Poe_Joelle.EventPoeSistersAppear({'IsWaitEnd': True})
        Dm_Weapon_PoeSisters_Joelle_Torch.EventTriggerModelBind({'InstanceName': '', 'BoneName': 'Weapon_R', 'RotOffset': [0.0, 0.0, 0.0], 'TransOffset': [0.0, 0.0, 0.0], 'ActorName': 'Dm_Poe_Joelle'})
        Dm_Poe_Joelle.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': True, 'ASName': 'C01', 'IsWaitEnd': False})
        Dm_Weapon_PoeSisters_Joelle_Torch.EventTriggerXLinkFadeByKey({'IsKill': True, 'ELinkKey': 'Torch', 'SLinkKey': ''})
    } {
        Dm_Poe_Beth.EventWarpToTargetPosAndRot({'YAngle': 0.0, 'IsWaitEnd': True, 'Position': [4.2228498458862305, 97.71176147460938, -10.522700309753418], 'ClothWarpMode': -1})
        Dm_Poe_Beth.EventTriggerEnemyCommonSetEnableClothParallel({'IsEnable': True})
        Dm_Poe_Beth.EventPoeSistersAppear({'IsWaitEnd': True})
        Dm_Weapon_PoeSisters_Beth_Torch.EventTriggerModelBind({'InstanceName': '', 'BoneName': 'Weapon_R', 'RotOffset': [0.0, 0.0, 0.0], 'TransOffset': [0.0, 0.0, 0.0], 'ActorName': 'Dm_Poe_Beth'})
        Dm_Poe_Beth.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': True, 'ASName': 'C01', 'IsWaitEnd': False})
        Dm_Weapon_PoeSisters_Beth_Torch.EventTriggerXLinkFadeByKey({'IsKill': True, 'ELinkKey': 'Torch', 'SLinkKey': ''})
    } {
        Dm_Poe_Amy.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'Position': [4.524350166320801, 96.5657730102539, -3.410680055618286], 'YAngle': 0.0, 'ClothWarpMode': -1})
        Dm_Poe_Amy.EventTriggerEnemyCommonSetEnableClothParallel({'IsEnable': True})
        Dm_Poe_Amy.EventPoeSistersAppear({'IsWaitEnd': True})
        Dm_Weapon_PoeSisters_Amy_Torch.EventTriggerModelBind({'InstanceName': '', 'BoneName': 'Weapon_R', 'RotOffset': [0.0, 0.0, 0.0], 'TransOffset': [0.0, 0.0, 0.0], 'ActorName': 'Dm_Poe_Amy'})
        Dm_Poe_Amy.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': True, 'ASName': 'C01', 'IsWaitEnd': False})
        Dm_Weapon_PoeSisters_Amy_Torch.EventTriggerXLinkFadeByKey({'IsKill': True, 'ELinkKey': 'Torch', 'SLinkKey': ''})
    } {
        Obj_ForestTemple_Elevator_A_01[Storage].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'C01_C04_FloorON_Dm_ForestTemple_0010'})
    } {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'ForestTemple_Elevator_BeforeDm0010', 'Index': -1, 'Value': True})
    } {
        Dm_Locator[Elevetor_A_0].EventWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Obj_ForestTemple_Elevator_A_01', 'InstanceName': 'Storage', 'IsWaitEnd': True, 'OffsetBase': 0, 'YAngle': 0.0, 'PositionOffset': [0.0, 5.539999961853027, 0.0], 'ClothWarpMode': -1})
    } {
        Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtWait', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 144})
        Player_Event.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'Position': [0.029999999329447746, 103.5, 18.489999771118164], 'UseDemoWait': True, 'ASCommand': 'EvtWait', 'YAngle': 180.0, 'ClothWarpMode': 0, 'EnableInAir': False})
        Player_Event.EventTriggerPlayerLookAtObject({'Target': 3, 'WorldPos': [0.0, 0.0, 0.0], 'TurnFaceControlType': 1, 'Direction': 0.0, 'ActorName': 'Dm_Locator', 'InstanceName': 'Elevetor_A_0', 'PosOffset': [0.0, 3.0, 0.0]})
        Npc_Navi.EventNaviMoveAroundToPlayer({'IsLookAtObject': False, 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsTurnLooking': False, 'IsWaitEnd': True, 'LookAtPosOffset': [0.0, 0.0, 0.0], 'IsHomePosition': True, 'IsNearOffset': True, 'offset': [0.0, 0.0, 0.0], 'MoveSpeed': 0.0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'IsUseDisguiseSpeakerPos': False, 'IsOffCenterCamera': False, 'PassThrough': -1.0, 'ArrivedASCommand': '', 'OverwriteRotNearDist': -1.0, 'OffsetType': -1, 'IsUseAfterPlayerTurn': True})
        Npc_Navi.EventPlayAS({'IsWaitEnd': False, 'ASName': 'EvtWait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
}

void C02() {
    DevelopEventSystemActor.EventDemoProductSupportComment({'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'IsWaitEnd': False, 'Text1': 'C02', 'BgAlignW': 0, 'BgAlignH': 0, 'Text2': '', 'Text3': ''})
    PostProcessingActor.EventNorifyCutChangeForGraphics()

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'RootType': 1, 'SceneName': 'C01-2'})
    } {
        PostProcessingActor.EventSetDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'EndDistance': 15.0, 'EndBluarLevel': 1.5, 'EndFNumber': 18.5})
    } {
        Dm_Poe_Meg.EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': True, 'ASName': 'C02'})
    } {
        Dm_Poe_Joelle.EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': True, 'ASName': 'C02'})
    } {
        Dm_Poe_Beth.EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': True, 'ASName': 'C02'})
    } {
        Dm_Poe_Amy.EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': True, 'ASName': 'C02'})
    }

}

void C03() {
    DevelopEventSystemActor.EventDemoProductSupportComment({'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'IsWaitEnd': False, 'Text1': 'C03', 'BgAlignH': 0, 'BgAlignW': 0, 'Text2': '', 'Text3': ''})
    PostProcessingActor.EventNorifyCutChangeForGraphics()

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'RootType': 1, 'SceneName': 'C01-3'})
    } {
        PostProcessingActor.EventSetDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'RequiredFrame': 0, 'EndBluarLevel': 1.5, 'EndDistance': 25.200000762939453, 'EndFNumber': 6.0, 'IsPrimaryApply': False})
    } {
        Dm_Poe_Meg.EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': True, 'ASName': 'C03'})
    } {
        Dm_Poe_Joelle.EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': True, 'ASName': 'C03'})
    } {
        Dm_Poe_Beth.EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': True, 'ASName': 'C03'})
    } {
        Dm_Poe_Amy.EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': True, 'ASName': 'C03'})
    }

}

void C04() {
    DevelopEventSystemActor.EventDemoProductSupportComment({'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'IsWaitEnd': False, 'BgAlignW': 0, 'BgAlignH': 0, 'Text1': 'C04', 'Text5': '', 'Text4': '', 'Text3': '', 'Text2': ''})
    PostProcessingActor.EventNorifyCutChangeForGraphics()

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'RootType': 1, 'SceneName': 'C01-4'})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'StartFNumber': 0.0, 'StartBluarLevel': 0.0, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'StartDistance': 0.0, 'EndBluarLevel': 1.5, 'EndDistance': 10.0, 'EndFNumber': 7.0, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {
        Dm_Poe_Meg.EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': True, 'ASName': 'C04'})
    } {
        Dm_Poe_Joelle.EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': True, 'ASName': 'C04'})
    } {
        Dm_Poe_Beth.EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'IsAnimeDriven': True, 'ASName': 'C04', 'ForceFadeInFrame': -1.0})
    } {
        Dm_Poe_Amy.EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ASName': 'C04', 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': True})
    } {

        call C04_Candole_switch()

    }

}

void C05_C06() {

    fork {
        PostProcessingActor.EventNorifyCutChangeForGraphics()

        fork {
            EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'RootType': 1, 'SceneName': 'C01-5'})
        } {
            PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'StartFNumber': 0.0, 'StartBluarLevel': 0.0, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'StartDistance': 0.0, 'EndBluarLevel': 1.0, 'EndDistance': 5.0, 'EndFNumber': 9.0, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
        } {
            DevelopEventSystemActor.EventDemoProductSupportComment({'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'IsWaitEnd': False, 'BgAlignW': 0, 'BgAlignH': 0, 'Text1': 'C05', 'Text3': '', 'DispTime': 2, 'Text2': ''})
        }

        PostProcessingActor.EventNorifyCutChangeForGraphics()

        fork {
            EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'RootType': 1, 'SceneName': 'C01-6'})
        } {

            call Common_Camera_Pln.CameraDoF_Default()

        } {
            DevelopEventSystemActor.EventDemoProductSupportComment({'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'IsWaitEnd': False, 'Text1': 'C06', 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 2, 'Text3': '', 'Text2': ''})
        }

    } {
        Dm_Poe_Meg.EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': True, 'ASName': 'C05_C06'})
        Dm_Poe_Meg.EventTriggerRequestDeath({'DeathReason': 0})
    } {
        Dm_Poe_Joelle.EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': True, 'ASName': 'C05_C06'})
        Dm_Poe_Joelle.EventTriggerRequestDeath({'DeathReason': 0})
    } {
        Dm_Poe_Beth.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': True, 'ASName': 'C05_C06', 'IsWaitEnd': True})
        Dm_Poe_Beth.EventTriggerRequestDeath({'DeathReason': 0})
    } {
        Dm_Poe_Amy.EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': True, 'ASName': 'C05-C06'})
        Dm_Poe_Amy.EventTriggerRequestDeath({'DeathReason': 0})
    } {
        Obj_ForestTemple_Elevator_A_01[Storage].EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'C05_C06_MovingDown_Dm_ForestTemple_0010'})
    } {
        EventSystemActor[Controller_Rumble_Wait].EventWait({'IsWaitEnd': True, 'Frames': 16})
        GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Large_DoDon'})
        EventSystemActor[Controller_Rumble_Wait].EventWait({'IsWaitEnd': True, 'Frames': 30})
        GameSystemActor.EventTriggerControllerRumble({'Length': 3.200000047683716, 'RumbleCall': 'Demo_Large_GoGoGo'})
        EventSystemActor[Controller_Rumble_Wait].EventWait({'IsWaitEnd': True, 'Frames': 190})
        GameSystemActor.EventTriggerControllerRumble({'RumbleCall': 'Demo_Large_Dooon', 'Length': 0.0})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 8})
        Dm_Locator[Elevetor_A_0].EventTriggerEmitXLink({'ELinkKey': 'Dm_ForestTemple_0010_Smoke', 'SLinkKey': ''})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 220})

        fork {
            Dm_Locator[Elevetor_A_0].EventTriggerXLinkFadeByKey({'ELinkKey': 'Dm_ForestTemple_0010_Smoke', 'SLinkKey': '', 'IsKill': False})
        } {
            Dm_Locator[Elevetor_A_0].EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_ForestTemple_0010_SmokeEnd'})
        } {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 284})

            fork {
                Dm_Poe_Joelle.EventTriggerEmitXLink({'ELinkKey': 'Dm_ForestTemple_0010_ContactCollision', 'SLinkKey': ''})
            } {
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
                Dm_Poe_Amy.EventTriggerEmitXLink({'ELinkKey': 'Dm_ForestTemple_0010_ContactCollision', 'SLinkKey': ''})
            }

        }

    }

    EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 3.0, 'CameraResetPolicy': 0})
}

void C04_Candole_switch() {
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 108})

    fork {
        Obj_ForestTemple_SwitchCandleStick_A_01.EventTriggerXLinkFadeByKey({'ELinkKey': 'MiasmaFire', 'SLinkKey': '', 'IsKill': False})
        Obj_ForestTemple_SwitchCandleStick_A_01.EventTriggerEmitXLink({'ELinkKey': 'Dm_ForestTemple_0010_CatchesFire', 'SLinkKey': ''})
        Dm_Weapon_PoeSisters_Joelle_Torch.EventTriggerEmitXLink({'ELinkKey': 'Dm_ForestTemple_0010_Torch', 'SLinkKey': ''})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 66})

        fork {
            Obj_ForestTemple_SwitchCandleStick_A_02.EventTriggerXLinkFadeByKey({'ELinkKey': 'MiasmaFire', 'SLinkKey': '', 'IsKill': False})
            Obj_ForestTemple_SwitchCandleStick_A_02.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_ForestTemple_0010_CatchesFire'})
            Dm_Weapon_PoeSisters_Meg_Torch.EventTriggerEmitXLink({'ELinkKey': 'Dm_ForestTemple_0010_Torch', 'SLinkKey': ''})
        } {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 106})

            fork {
                Obj_ForestTemple_SwitchCandleStick_A_04.EventTriggerXLinkFadeByKey({'ELinkKey': 'MiasmaFire', 'SLinkKey': '', 'IsKill': False})
                Obj_ForestTemple_SwitchCandleStick_A_04.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_ForestTemple_0010_CatchesFire'})
                Dm_Weapon_PoeSisters_Beth_Torch.EventTriggerEmitXLink({'ELinkKey': 'Dm_ForestTemple_0010_Torch', 'SLinkKey': ''})
            } {
                EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 64})
                Obj_ForestTemple_SwitchCandleStick_A_03.EventTriggerXLinkFadeByKey({'ELinkKey': 'MiasmaFire', 'SLinkKey': '', 'IsKill': False})
                Obj_ForestTemple_SwitchCandleStick_A_03.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_ForestTemple_0010_CatchesFire'})
                Dm_Weapon_PoeSisters_Amy_Torch.EventTriggerEmitXLink({'ELinkKey': 'Dm_ForestTemple_0010_Torch', 'SLinkKey': ''})
            }

        }

    }

}
