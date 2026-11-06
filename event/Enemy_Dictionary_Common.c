-------- EventFlow: Enemy_Dictionary_Common --------

Actor: UISystemActor
entrypoint: None()
actions: ['EventOpenEnemyInfoScreen', 'EventWaitEnemyInfoScreenInput', 'EventCloseEnemyInfoScreen']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameDataActor
entrypoint: None()
actions: []
queries: ['EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventPlayerTurnAndLookLastDoActor', 'EventTriggerStartFadeOut', 'EventTriggerStartFadeIn', 'EventTriggerChangeModelAlphaDrawTiming']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: EventCamera
entrypoint: None()
actions: ['EventTriggerCameraSavePoint', 'EventMoveCameraToSavePoint', 'EventSendEventSingleMessageToPlayerCamera', 'EventTriggerSendKeepStateMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: PostProcessingActor
entrypoint: None()
actions: ['EventSetDoFForFlowchart', 'EventSetPixelScaleForModelLod']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventNaviMoveAroundToPlayer', 'EventTriggerStartFadeOut', 'EventTriggerStartFadeIn', 'EventTriggerXLinkFadeByKey']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTriggerBecomeSpeaker', 'EventTriggerSetModelLodManual']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 1}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void Talk() {

    call Enemy_Dictionary_Common_InitTalk({'ActorName': 'ActorName', 'IsAutoFocalDist': True, 'EndDistance': 0.0, 'EndFNumber': 5.800000190734863})

}

void Dictionary_Info() {
    UISystemActor.EventOpenEnemyInfoScreen({'IsWaitEnd': True})
    UISystemActor.EventWaitEnemyInfoScreenInput({'IsWaitEnd': True})
    UISystemActor.EventCloseEnemyInfoScreen({'IsWaitEnd': True, 'IsWaitClose': False})
    Player_Event.EventTriggerChangeModelAlphaDrawTiming({'IsPostEffect': True, 'IsPreEffect': False})
    Player_Event.EventTriggerStartFadeIn({'FadeFrame': 5})
    Npc_Navi.EventTriggerStartFadeIn({'FadeFrame': 5})
}

void Dictionary_Rematch() {
    Npc_Navi.EventTriggerStartFadeOut({'FadeFrame': 5})

    fork {
        UISystemActor.EventOpenEnemyInfoScreen({'IsWaitEnd': True})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
        Player_Event.EventTriggerChangeModelAlphaDrawTiming({'IsPostEffect': False, 'IsPreEffect': False})
    }

    UISystemActor.EventWaitEnemyInfoScreenInput({'IsWaitEnd': True})
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'EnemyInfo_SelectBattle', 'Index': -1}) {
        UISystemActor.EventCloseEnemyInfoScreen({'IsWaitEnd': True, 'IsWaitClose': True})
        return fnv1a("Yes")
    } else {
        Player_Event.EventTriggerChangeModelAlphaDrawTiming({'IsPostEffect': True, 'IsPreEffect': False})
        Player_Event.EventTriggerStartFadeIn({'FadeFrame': 5})
        Npc_Navi.EventTriggerStartFadeIn({'FadeFrame': 5})
        UISystemActor.EventCloseEnemyInfoScreen({'IsWaitEnd': True, 'IsWaitClose': False})

        fork {

            call Common_Camera_Pln.CameraDoF_Default()

            PostProcessingActor.EventSetPixelScaleForModelLod({'Scale': 1.0})
            EventCamera.EventMoveCameraToSavePoint({'IsWaitEnd': True, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'MoveFrame': 30, 'IsRestoreDoF': False})
        } {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
            Player_Event.EventTriggerChangeModelAlphaDrawTiming({'IsPostEffect': False, 'IsPreEffect': False})
        }

        EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'AfterKeepEndInterpolateCountScale': 1.0, 'ChangeToManualModeAfterEvent': False, 'KeepManualModeFrame': 120.0, 'IsKeepWithRelativePos': False})
        return fnv1a("No")
    }
}

void Talk0() {

    call Enemy_Dictionary_Common_InitTalk({'ActorName': 'ActorName', 'IsAutoFocalDist': True, 'EndDistance': 0.0, 'EndFNumber': 4.300000190734863})

}

void Talk1() {

    call Enemy_Dictionary_Common_InitTalk({'ActorName': 'ActorName', 'IsAutoFocalDist': True, 'EndDistance': 0.0, 'EndFNumber': 3.700000047683716})

}

void Talk2() {

    call Enemy_Dictionary_Common_InitTalk({'ActorName': 'ActorName', 'IsAutoFocalDist': True, 'EndDistance': 0.0, 'EndFNumber': 2.0999999046325684})

}

void Enemy_Dictionary_Common_InitTalk() {
    EventCamera.EventTriggerCameraSavePoint()
    Npc_EventStarter.EventTriggerBecomeSpeaker()
    Player_Event.EventTriggerParticipateEvent()
    Player_Event.EventPlayerTurnAndLookLastDoActor({'TurnFaceControlType': 1, 'PosOffset': [0.0, 0.0, 0.0], 'IsWaitEnd': False, 'IsDoNavi': False})

    fork {
        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
        PostProcessingActor.EventSetDoFForFlowchart({'IsPrimaryApply': False, 'IsWaitEnd': False, 'RequiredFrame': 20, 'IsAutoFocalDist': 'IsAutoFocalDist', 'EndDistance': 'EndDistance', 'EndFNumber': 'EndFNumber', 'EndBluarLevel': 1.5})
        PostProcessingActor.EventSetPixelScaleForModelLod({'Scale': 5.0})
        Npc_EventStarter.EventTriggerSetModelLodManual({'LodLevel': 0})
    } {
        EventCamera.EventSendEventSingleMessageToPlayerCamera({'IsWaitEnd': False})
    } {
        Npc_Navi.EventNaviMoveAroundToPlayer({'IsWaitEnd': False, 'LookAtTarget': 2, 'IsOffCenterCamera': True, 'IsHomePosition': True, 'IsLookAtObject': False, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsTurnLooking': False, 'OverwriteRotNearDist': -1.0, 'IsUseDisguiseSpeakerPos': False, 'offset': [0.0, 0.0, 0.0], 'IsNearOffset': False, 'PassThrough': -1.0, 'MoveSpeed': 0.0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'ArrivedASCommand': '', 'OffsetType': -1, 'IsUseAfterPlayerTurn': True})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 15})
        Player_Event.EventTriggerChangeModelAlphaDrawTiming({'IsPostEffect': True, 'IsPreEffect': False})
        Player_Event.EventTriggerStartFadeOut({'FadeFrame': 5})
        Npc_Navi.EventTriggerXLinkFadeByKey({'ELinkKey': 'Wait', 'SLinkKey': '', 'IsKill': False})
        Npc_Navi.EventTriggerStartFadeOut({'FadeFrame': 5})
    }


    fork {

        call Dictionary_Info({'ActorName': 'ActorName'})

    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
        Player_Event.EventTriggerChangeModelAlphaDrawTiming({'IsPostEffect': False, 'IsPreEffect': False})
    }


    fork {

        call Common_Camera_Pln.CameraDoF_Default()

        PostProcessingActor.EventSetPixelScaleForModelLod({'Scale': 1.0})
        EventCamera.EventMoveCameraToSavePoint({'MoveFrame': 30, 'IsWaitEnd': True, 'CollisionInterpolateSkip': False, 'ReviseMode': 0, 'IsRestoreDoF': False})
    } {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
        Player_Event.EventTriggerChangeModelAlphaDrawTiming({'IsPostEffect': False, 'IsPreEffect': False})
    }

    EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'AfterKeepEndInterpolateCountScale': 1.0, 'ChangeToManualModeAfterEvent': False, 'KeepManualModeFrame': 120.0, 'IsKeepWithRelativePos': False})
}

void Talk3() {

    call Enemy_Dictionary_Common_InitTalk({'ActorName': 'ActorName', 'IsAutoFocalDist': True, 'EndDistance': 0.0, 'EndFNumber': 5.0})

}

void Talk4() {

    call Enemy_Dictionary_Common_InitTalk({'ActorName': 'ActorName', 'IsAutoFocalDist': True, 'EndDistance': 0.0, 'EndFNumber': 1.7999999523162842})

}

void Talk5() {

    call Enemy_Dictionary_Common_InitTalk({'ActorName': 'ActorName', 'IsAutoFocalDist': True, 'EndDistance': 0.0, 'EndFNumber': 3.0})

}

void Talk6() {

    call Enemy_Dictionary_Common_InitTalk({'ActorName': 'ActorName', 'IsAutoFocalDist': True, 'EndDistance': 0.0, 'EndFNumber': 7.0})

}

void Talk7() {

    call Enemy_Dictionary_Common_InitTalk({'ActorName': 'ActorName', 'IsAutoFocalDist': True, 'EndDistance': 0.0, 'EndFNumber': 8.0})

}

void Talk8() {

    call Enemy_Dictionary_Common_InitTalk({'ActorName': 'ActorName', 'IsAutoFocalDist': True, 'EndDistance': 0.0, 'EndFNumber': 6.099999904632568})

}
