-------- EventFlow: Dm_InsideGanonCastle_0003 --------

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerMove', 'EventTriggerPlayerLookAtObject', 'EventPlayerTurnAndLook', 'EventTriggerPlayerEventStartWithDrawn']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveCameraAnimationInstructionsForFlowchart', 'EventMoveToTargetPosCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventNaviFollowPlayer', 'EventNaviWarpToPlayerHomePosition']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: DevelopEventSystemActor
entrypoint: None()
actions: ['EventDemoProductSupportComment']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Obj_InsideGanonCastle_LobbyTube_A_01
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Obj_InsideGanonCastle_LobbyTube_A_02
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Obj_InsideGanonCastle_LobbyTube_A_03
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Obj_InsideGanonCastle_LobbyTube_A_04
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Obj_InsideGanonCastle_LobbyTube_A_05
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Obj_InsideGanonCastle_LobbyTube_A_06
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: UISystemActor
entrypoint: None()
actions: ['EventTriggerOpenLocationUI']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: VoicePlayActor
entrypoint: None()
actions: ['EventTriggerStartVoice', 'EventTriggerCloseDemoScreen']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventSoundRequestDucking', 'EventTriggerSetOcclusionReferenceToListener']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[1]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: PostProcessingActor
entrypoint: None()
actions: ['EventSetAdvancedDoFForFlowchart', 'EventNorifyCutChangeForGraphics']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void EntryPoint0() {
    SoundSystemActor.EventTriggerSetOcclusionReferenceToListener({'CommandLife': 0})

    call C01()


    call C02()


    call C03()

    PostProcessingActor.EventNorifyCutChangeForGraphics()
}

void C01() {
    Player_Event.EventTriggerPlayerEventStartWithDrawn()
    DevelopEventSystemActor.EventDemoProductSupportComment({'Text1': 'C01', 'DispTime': 120, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'IsWaitEnd': False})

    fork {
        Event35:
        Obj_InsideGanonCastle_LobbyTube_A_03.EventTriggerParticipateEvent()
    } {

        fork {
            Player_Event.EventPlayerMove({'WorldPosX': 0.0, 'WorldPosY': 0.0, 'WorldPosZ': 0.0, 'DecSpeedDistance': 0.0, 'MoveSpeed': 0.8999999761581421, 'IsWaitEnd': True, 'RidableDesiredGear': 0, 'RidableHasToDecelerateNearGoal': False, 'WorldPos': [0.0, 103.75, 8.699999809265137], 'IsInertiaMove': False, 'IsContinueMoveAnimeAfterFinish': False, 'IsSheathed': True, 'ApplySlowMove': False})
            Player_Event.EventPlayerTurnAndLook({'Target': 0, 'TurnFaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsWaitEnd': False, 'KeepTalkWait': True, 'OffsetBase': 0, 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'WorldPos': [0.0, 107.0, 0.0], 'SlowTurn': False, 'UseNormalTurn': False, 'IsDoNavi': False})
        } {
            EventSystemActor[1].EventWait({'IsWaitEnd': True, 'Frames': 50})
            EventCamera.EventMoveToTargetPosCamera({'MoveTime': 270, 'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTotargetPosType': 0, 'IsAtVectorReferenceActorPosOnce': False, 'EndRecelerateRate': 0.0, 'StartAccelerateRate': 0.6000000238418579, 'PosVector': [0.0, 105.7699966430664, 8.100000381469727], 'AtVector': [0.0, 107.22000122070312, 4.239999771118164], 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
            EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTotargetPosType': 0, 'IsAtVectorReferenceActorPosOnce': False, 'EndRecelerateRate': 0.0, 'StartAccelerateRate': 0.6000000238418579, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'MoveTime': 800, 'IsWaitEnd': False, 'PosVector': [0.0, 106.04000091552734, 7.329999923706055], 'AtVector': [0.0, 107.19999694824219, 4.230000019073486], 'TargetFovy': 50.0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        } {
            Npc_Navi.EventNaviFollowPlayer({'IsWaitEnd': True, 'IsHomePosition': False, 'IsNearOffset': False, 'Speed': 0.0, 'OffsetType': -1, 'offset': [0.6000000238418579, -0.10000000149011612, -0.20000000298023224]})
        } {
            UISystemActor.EventTriggerOpenLocationUI({'LocationName': 'Work/Location/InsideGanonCastle.game__location__Location.gyml'})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 460})
            SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'Dm:Bgm下げ', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0})
            VoicePlayActor.EventTriggerStartVoice({'MessageId': 'EventFlowMsg/Dm_InsideGanonCastle_0003:Dm_InsideGanonCastle_0003_Text_000_b', 'Speaker': 'Dm_Npc_Hylia_Rauru', 'MessageDemoPosType': 0})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 330})
            VoicePlayActor.EventTriggerCloseDemoScreen({'IsShowingSpeakerName': False})
        } {
            Obj_InsideGanonCastle_LobbyTube_A_01.EventTriggerParticipateEvent()
        } {
            Obj_InsideGanonCastle_LobbyTube_A_02.EventTriggerParticipateEvent()
        } {
            goto Event35
        } {
            Obj_InsideGanonCastle_LobbyTube_A_05.EventTriggerParticipateEvent()
        } {
            Obj_InsideGanonCastle_LobbyTube_A_06.EventTriggerParticipateEvent()
        } {
            Obj_InsideGanonCastle_LobbyTube_A_04.EventTriggerParticipateEvent()
        }

    }

}

void C02() {
    DevelopEventSystemActor.EventDemoProductSupportComment({'DispTime': 120, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'IsWaitEnd': False, 'Text1': 'C02'})

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'IsWaitEnd': False, 'SceneName': 'C03-4', 'RootType': 1})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        VoicePlayActor.EventTriggerStartVoice({'Speaker': 'Dm_Npc_Hylia_Rauru', 'MessageDemoPosType': 0, 'MessageId': 'EventFlowMsg/Dm_InsideGanonCastle_0003:Dm_InsideGanonCastle_0003_Text_001_b'})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 460})
        VoicePlayActor.EventTriggerCloseDemoScreen({'IsShowingSpeakerName': False})
    } {
        Player_Event.EventTriggerPlayerLookAtObject({'Target': 0, 'TurnFaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'WorldPos': [0.0, 110.0, 0.0]})
    }

}

void C03() {
    DevelopEventSystemActor.EventDemoProductSupportComment({'DispTime': 120, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'IsWaitEnd': False, 'Text1': 'C03'})

    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [-2.390000104904175, 104.55000305175781, 8.880000114440918], 'AtVector': [-0.14000000059604645, 106.75, 6.679999828338623], 'TargetFovy': 37.15999984741211, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVector': [-2.390000104904175, 104.55000305175781, 8.880000114440918], 'AtVector': [1.2799999713897705, 105.37999725341797, 8.130000114440918], 'TargetFovy': 37.15999984741211, 'MoveTime': 600, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
        VoicePlayActor.EventTriggerStartVoice({'Speaker': 'Dm_Npc_Hylia_Rauru', 'MessageDemoPosType': 0, 'MessageId': 'EventFlowMsg/Dm_InsideGanonCastle_0003:Dm_InsideGanonCastle_0003_Text_002_b'})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 690})
        VoicePlayActor.EventTriggerCloseDemoScreen({'IsShowingSpeakerName': False})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'StartDistance': 0.0, 'EndDistance': 0.0, 'StartFNumber': 0.0, 'EndFNumber': 0.0, 'StartBluarLevel': 0.0, 'EndBluarLevel': 0.0, 'IsPrimaryApply': False, 'IsEnableNear': True, 'RequiredFrame': 0, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    }


    fork {
        EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'MoveTime': 0, 'Actor1ActorName': 'Player_Event', 'AtVector': [0.0, 1.5, 0.0], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'PosVector': [0.0, 1.8300000429153442, -3.990000009536743], 'IsEnableRevertFast': False})
    } {
        Npc_Navi.EventNaviWarpToPlayerHomePosition({'IsWaitEnd': True, 'IsNearOffset': True, 'Type': -1, 'IsDisguisedPlayerPos': False, 'Target': 0, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'OffsetBase': 0, 'PosOffset': [0.0, 0.0, 0.0], 'YAngle': 0.0})
    } {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'StartDistance': 6.760000228881836, 'EndDistance': 6.760000228881836, 'StartFNumber': 7.989999771118164, 'EndFNumber': 7.989999771118164, 'StartBluarLevel': 0.75, 'EndBluarLevel': 0.75, 'IsEnableNear': False, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    }

}
