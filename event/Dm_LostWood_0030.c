-------- EventFlow: Dm_LostWood_0030 --------

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventTriggerSendKeepStateMessageToPlayerCamera', 'EventMoveCameraAnimationInstructionsForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool', 'EventQueryGameDataIntBranch']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Enemy_Scrub_ForestStage[ScrubForestStage_01]
entrypoint: None()
actions: ['EventScrubForestStageEventMove']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Enemy_Scrub_ForestStage[ScrubForestStage_02]
entrypoint: None()
actions: ['EventScrubForestStageEventMove']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Enemy_Scrub_ForestStage[ScrubForestStage_03]
entrypoint: None()
actions: ['EventScrubForestStageEventMove']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Enemy_Scrub_ForestStage[ScrubForestStage_04]
entrypoint: None()
actions: ['EventScrubForestStageEventMove']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Enemy_Scrub_ForestStage[ScrubForestStage_06]
entrypoint: None()
actions: ['EventScrubForestStageEventMove']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Enemy_Scrub_ForestStage[ScrubForestStage_07]
entrypoint: None()
actions: ['EventScrubForestStageEventMove']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Enemy_Scrub_ForestStage[ScrubForestStage_08]
entrypoint: None()
actions: ['EventScrubForestStageEventMove']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Enemy_Scrub_ForestStage[ScrubForestStage_09]
entrypoint: None()
actions: ['EventScrubForestStageEventMove']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Enemy_Scrub_ForestStage[ScrubForestStage_05]
entrypoint: None()
actions: ['EventScrubForestStageEventMove']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Enemy_Scrub_ForestStage_Elder[ScrubForestStageElder]
entrypoint: None()
actions: ['EventScrubForestStageElderEventMove']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

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

Actor: Enemy_Scrub_ForestStage_Leaf[ScrubForestStageLeaf_06]
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Enemy_Scrub_ForestStage_Elder_Leaf
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Enemy_Scrub_ForestStage_Leaf[ScrubForestStageLeaf_01]
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Enemy_Scrub_ForestStage_Leaf[ScrubForestStageLeaf_02]
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Enemy_Scrub_ForestStage_Leaf[ScrubForestStageLeaf_03]
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Enemy_Scrub_ForestStage_Leaf[ScrubForestStageLeaf_04]
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Enemy_Scrub_ForestStage_Leaf[ScrubForestStageLeaf_05]
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Enemy_Scrub_ForestStage_Leaf[ScrubForestStageLeaf_07]
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Enemy_Scrub_ForestStage_Leaf[ScrubForestStageLeaf_08]
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Enemy_Scrub_ForestStage_Leaf[ScrubForestStageLeaf_09]
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerMove', 'EventPlayerTurnAndLook', 'EventPlayerPlayASForFlowchart', 'EventTriggerSoundDisableSpMode', 'EventTriggerSoundEnableSpMode']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: Dm_Locator
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot', 'EventTriggerEmitXLink', 'EventTriggerXLinkFadeByKey']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 1}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerSoundControlBGM', 'EventSoundStartSound']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventPlayAS']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

void EntryPoint0() {

    fork {
        Player_Event.EventPlayerMove({'WorldPos': [-4.88681697845459, 83.36579895019531, -47.58100128173828], 'IsInertiaMove': True, 'IsSheathed': True, 'IsWaitEnd': True, 'MoveSpeed': 0.0, 'DecSpeedDistance': 0.0, 'WorldPosX': 0.0, 'WorldPosY': 0.0, 'WorldPosZ': 0.0, 'RidableDesiredGear': 0, 'RidableHasToDecelerateNearGoal': False, 'IsContinueMoveAnimeAfterFinish': False, 'ApplySlowMove': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
        Player_Event.EventPlayerTurnAndLook({'WorldPos': [-12.777000427246094, 82.76139831542969, -47.41080093383789], 'KeepTalkWait': False, 'SlowTurn': True, 'IsWaitEnd': True, 'Target': 0, 'TurnFaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'UseNormalTurn': False, 'IsDoNavi': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtNotice', 'IsWaitEnd': True, 'ClothWarpMode': 0})
    } {
        EventCamera.EventMoveToTargetPosCamera({'MoveTime': 120, 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'PosVector': [-1.0399999618530273, 86.4000015258789, -47.619998931884766], 'AtVector': [-4.849999904632568, 84.7300033569336, -47.56999969482422], 'TargetFovy': 50.0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        Dm_Locator.EventTriggerEmitXLink({'ELinkKey': 'Dm_LostWood_0030_Spotlight', 'SLinkKey': ''})
        SoundSystemActor.EventSoundStartSound({'SLinkKey': 'ForestStage_Spotlight', 'IsIgnoreDucking': False})
    } {
        Dm_Locator.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'Position': [-4.820000171661377, 83.36000061035156, -47.58000183105469], 'YAngle': -90.0, 'ClothWarpMode': -1})
    }

    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'ScrubForestStageManager_IsShowSameMask', 'Index': -1}) {
        DevelopEventSystemActor.EventDemoProductSupportComment({'IsWaitEnd': False, 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'Text2': '', 'Text1': '最低評価', 'BgAlignW': 0, 'BgAlignH': 0})

        call ScrubForestStage()

        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player_Event', 'PosVector': [0.029999999329447746, 3.440000057220459, -3.180000066757202], 'AtVector': [0.0, 1.3600000143051147, 0.0], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 30, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'AfterKeepEndInterpolateCountScale': 1.0, 'ChangeToManualModeAfterEvent': False, 'KeepManualModeFrame': 120.0, 'IsKeepWithRelativePos': False})
        Player_Event.EventTriggerSoundEnableSpMode({'ActorSoundSpMode': 0, 'FadeTime': 0.0})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'LostWood_ForestStage_LowestRating'})
    } else
    switch GameDataActor.EventQueryGameDataIntBranch({'GameDataName': 'ScrubForestStageManager_SelectEventTypeRegistration'}) {
      case 1:

        call C01()

      case 2:

        call C02()

      case 3:

        call C03()

      case 4:

        call C04()

      case 5:

        call C05()

      case 6:

        call C06()

      case 7:

        call C07()

    }
}

void C01() {
    DevelopEventSystemActor.EventDemoProductSupportComment({'Text1': '最高評価', 'IsWaitEnd': False, 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'Text2': '', 'BgAlignH': 0, 'BgAlignW': 0})

    call ScrubForestStage()

    Event2:
    EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player_Event', 'PosVector': [0.029999999329447746, 3.440000057220459, -3.180000066757202], 'AtVector': [0.0, 1.3600000143051147, 0.0], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 30, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'AfterKeepEndInterpolateCountScale': 1.0, 'ChangeToManualModeAfterEvent': False, 'KeepManualModeFrame': 120.0, 'IsKeepWithRelativePos': False})
    Player_Event.EventTriggerSoundEnableSpMode({'ActorSoundSpMode': 0, 'FadeTime': 0.0})
}

void C02() {
    DevelopEventSystemActor.EventDemoProductSupportComment({'IsWaitEnd': False, 'Text1': '高評価', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'Text2': '', 'BgAlignW': 0, 'BgAlignH': 0})

    call ScrubForestStage()

    goto Event2
}

void C03() {
    DevelopEventSystemActor.EventDemoProductSupportComment({'IsWaitEnd': False, 'Text1': '中評価1', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'Text2': '', 'BgAlignW': 0, 'BgAlignH': 0})

    call ScrubForestStage()

    goto Event2
}

void C04() {
    DevelopEventSystemActor.EventDemoProductSupportComment({'IsWaitEnd': False, 'Text1': '中評価2', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'Text2': '', 'BgAlignW': 0, 'BgAlignH': 0})

    call ScrubForestStage()

    goto Event2
}

void C05() {
    DevelopEventSystemActor.EventDemoProductSupportComment({'IsWaitEnd': False, 'Text1': '低評価', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'Text2': '', 'BgAlignW': 0, 'BgAlignH': 0})

    call ScrubForestStage()

    goto Event2
}

void C06() {
    DevelopEventSystemActor.EventDemoProductSupportComment({'IsWaitEnd': False, 'Text1': 'ドクロのお面（初回）', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'Text2': '', 'BgAlignW': 0, 'BgAlignH': 0})

    call ScrubForestStage()

    goto Event2
}

void C07() {
    DevelopEventSystemActor.EventDemoProductSupportComment({'IsWaitEnd': False, 'Text1': 'まことのお面（初回）', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 3, 'Text2': 'カメラPAN前にキョロナッツたちが出現し回りを見回す', 'BgAlignW': 0, 'BgAlignH': 0})

    call ScrubForestStage()


    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Enemy_Scrub_ForestStage_Elder', 'Actor1InstanceName': 'ScrubForestStageElder', 'PosVector': [-2.640000104904175, 1.4600000381469727, 5.03000020980835], 'AtVector': [-2.240000009536743, 1.3700000047683716, 4.300000190734863], 'TargetFovy': 35.18000030517578, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'MoveTime': 110, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        SoundSystemActor.EventSoundStartSound({'SLinkKey': 'ForestStage_Elder_Greeting', 'IsIgnoreDucking': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 50})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 50, 'PosVector': [-2.609999895095825, 85.12999725341797, -44.560001373291016], 'AtVector': [-4.869999885559082, 84.80000305175781, -47.59000015258789], 'TargetFovy': 50.0, 'PosVectorSetType': 0, 'Actor1ActorName': '', 'AtVectorSetType': 0, 'IsEnableRevertFast': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
        Player_Event.EventPlayerTurnAndLook({'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'WorldPos': [-9.069999694824219, 83.5, -53.20000076293945], 'Target': 0, 'ActorName': '', 'IsWaitEnd': True, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'UseNormalTurn': False, 'IsDoNavi': True, 'TurnFaceControlType': 1})
    }

    EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'AfterKeepEndInterpolateCountScale': 1.0, 'ChangeToManualModeAfterEvent': False, 'KeepManualModeFrame': 120.0, 'IsKeepWithRelativePos': False})
    Player_Event.EventTriggerSoundEnableSpMode({'ActorSoundSpMode': 0, 'FadeTime': 0.0})
}

void ScrubForestStage() {

    fork {

        fork {
            Enemy_Scrub_ForestStage_Leaf[ScrubForestStageLeaf_01].EventTriggerParticipateEvent()
        } {
            Enemy_Scrub_ForestStage_Leaf[ScrubForestStageLeaf_02].EventTriggerParticipateEvent()
        } {
            Enemy_Scrub_ForestStage_Leaf[ScrubForestStageLeaf_03].EventTriggerParticipateEvent()
        } {
            Enemy_Scrub_ForestStage_Leaf[ScrubForestStageLeaf_04].EventTriggerParticipateEvent()
        } {
            Enemy_Scrub_ForestStage_Leaf[ScrubForestStageLeaf_05].EventTriggerParticipateEvent()
        } {
            Enemy_Scrub_ForestStage_Leaf[ScrubForestStageLeaf_06].EventTriggerParticipateEvent()
        } {
            Enemy_Scrub_ForestStage_Leaf[ScrubForestStageLeaf_07].EventTriggerParticipateEvent()
        } {
            Enemy_Scrub_ForestStage_Leaf[ScrubForestStageLeaf_08].EventTriggerParticipateEvent()
        } {
            Enemy_Scrub_ForestStage_Leaf[ScrubForestStageLeaf_09].EventTriggerParticipateEvent()
        } {
            Enemy_Scrub_ForestStage_Elder_Leaf.EventTriggerParticipateEvent()
        }

    } {

        fork {
            Enemy_Scrub_ForestStage[ScrubForestStage_01].EventScrubForestStageEventMove({'IsWaitEnd': True})
        } {
            Enemy_Scrub_ForestStage[ScrubForestStage_02].EventScrubForestStageEventMove({'IsWaitEnd': True})
        } {
            Enemy_Scrub_ForestStage[ScrubForestStage_03].EventScrubForestStageEventMove({'IsWaitEnd': True})
        } {
            Enemy_Scrub_ForestStage[ScrubForestStage_04].EventScrubForestStageEventMove({'IsWaitEnd': True})
        } {
            Enemy_Scrub_ForestStage[ScrubForestStage_05].EventScrubForestStageEventMove({'IsWaitEnd': True})
        } {
            Enemy_Scrub_ForestStage[ScrubForestStage_06].EventScrubForestStageEventMove({'IsWaitEnd': True})
        } {
            Enemy_Scrub_ForestStage[ScrubForestStage_07].EventScrubForestStageEventMove({'IsWaitEnd': True})
        } {
            Enemy_Scrub_ForestStage[ScrubForestStage_08].EventScrubForestStageEventMove({'IsWaitEnd': True})
        } {
            Enemy_Scrub_ForestStage[ScrubForestStage_09].EventScrubForestStageEventMove({'IsWaitEnd': True})
        } {
            Enemy_Scrub_ForestStage_Elder[ScrubForestStageElder].EventScrubForestStageElderEventMove({'IsWaitEnd': True})
        }

    } {
        Player_Event.EventTriggerSoundDisableSpMode({'ActorSoundSpMode': 0, 'FadeTime': 0.0})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 80})
        SoundSystemActor.EventSoundStartSound({'SLinkKey': 'ForestStage_Assessment', 'IsIgnoreDucking': False})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 80, 'PosVector': [-6.070000171661377, 84.79000091552734, -47.529998779296875], 'AtVector': [-7.309999942779541, 84.23999786376953, -47.56999969482422], 'TargetFovy': 48.47999954223633, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        Dm_Locator.EventTriggerXLinkFadeByKey({'SLinkKey': '', 'IsKill': False, 'ELinkKey': 'Dm_LostWood_0030_Spotlight'})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'RootType': 0, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'SceneName': 'C01-0'})
        switch GameDataActor.EventQueryGameDataIntBranch({'GameDataName': 'ScrubForestStageManager_SelectEventTypeRegistration'}) {
          case 1:
            SoundSystemActor.EventTriggerSoundControlBGM({'ControlType': 2})
          case 2:
            SoundSystemActor.EventTriggerSoundControlBGM({'ControlType': 3})
          case 6:
            SoundSystemActor.EventTriggerSoundControlBGM({'ControlType': 4})
        }
    } {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})

        fork {
            Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtCaution', 'ClothWarpMode': 0, 'KeepOneTimeAnm': True})
        } {
            Npc_Navi.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'EvtCaution'})
        }

        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 100})

        fork {
            Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtWait', 'ClothWarpMode': 0})
        } {
            Npc_Navi.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'EvtWait'})
        }

    }

}
