-------- EventFlow: HyruleCastle_FoundBySecurity --------

Actor: GameSystemActor
entrypoint: None()
actions: ['EventAIScheduleNPCForceSecurityLifted', 'EventCloseMessageDialog', 'EventTraverseAroundAndWaitCreateActor']
queries: ['EventQueryRandomChoice3', 'EventQueryRandomChoice2', 'EventQueryIsDistanceBetweenActorsClose']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: UISystemActor
entrypoint: None()
actions: ['EventEventFadeOut', 'EventEventFadeIn']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerWarpToStarterLinkAnchor', 'EventPlayerPlayASForFlowchart', 'EventPlayerTurnAndLook', 'EventTriggerPlayerLookAtObject', 'EventPlayerWait', 'EventTriggerPlayerRequestLookAtTheFrontLock', 'EventTriggerSoundDisableSpMode', 'EventTriggerSoundEnableSpMode', 'EventTriggerPlayerEventStartWithDrawn', 'EventTriggerPlayerResetMaxFloatBuoyancyAccelGravityUnit', 'EventPlayerWaitStabilityInWater', 'EventPlayerUnequip']
queries: ['EventQueryPlayerIsEquipArmor', 'EventQueryPlayerIsEquipMask', 'EventQueryCheckPlayerState']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_EventStarter
entrypoint: None()
actions: ['EventTalk', 'EventWarpToHomeMatrix', 'EventTriggerBecomeSpeaker', 'EventNPCTurnToTargetWithAS', 'EventTriggerLookAtObject', 'EventPlayAS']
queries: ['EventNPCQueryCheckTurnToTarget']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 1}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera']
queries: ['EventQueryCameraCheckRayCastForMoveToTarget', 'EventQueryCameraCheckOcclusionToTarget']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventNaviRequestBallonMessage', 'EventTalk', 'EventPlayAS', 'EventNaviLookAtObject']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: EventWorldManagerController
entrypoint: None()
actions: []
queries: ['EventQueryTimeDivision']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Hylia_Soldier_021_Child
entrypoint: None()
actions: ['EventNPCTurnToTargetWithAS', 'EventPlayAS', 'EventTriggerParticipateEvent']
queries: ['EventQueryIsPlayingSameAS']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Accessory4': ''}

Actor: Npc_Hylia_Soldier_024_Child
entrypoint: None()
actions: ['EventNPCTurnToTargetWithAS', 'EventPlayAS', 'EventTriggerParticipateEvent']
queries: ['EventQueryIsPlayingSameAS']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Accessory4': ''}

Actor: Npc_Hylia_Soldier_025_Child
entrypoint: None()
actions: ['EventNPCTurnToTargetWithAS', 'EventPlayAS', 'EventTriggerParticipateEvent']
queries: ['EventQueryIsPlayingSameAS']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Accessory4': ''}

Actor: Npc_Hylia_Soldier_026_Child
entrypoint: None()
actions: ['EventNPCTurnToTargetWithAS', 'EventPlayAS', 'EventTriggerParticipateEvent']
queries: ['EventQueryIsPlayingSameAS']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Accessory4': ''}

Actor: Npc_Hylia_Soldier_012_Child
entrypoint: None()
actions: ['EventNPCTurnToTargetWithAS', 'EventPlayAS', 'EventTriggerParticipateEvent']
queries: ['EventQueryIsPlayingSameAS']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Accessory4': ''}

Actor: Npc_Hylia_Soldier_013_Child
entrypoint: None()
actions: ['EventNPCTurnToTargetWithAS', 'EventPlayAS', 'EventTriggerParticipateEvent']
queries: ['EventQueryIsPlayingSameAS']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Accessory4': ''}

Actor: Npc_Hylia_Soldier_015_Child
entrypoint: None()
actions: ['EventNPCTurnToTargetWithAS', 'EventPlayAS', 'EventTriggerParticipateEvent']
queries: ['EventQueryIsPlayingSameAS']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Accessory4': ''}

Actor: Npc_Hylia_Soldier_017_Child
entrypoint: None()
actions: ['EventNPCTurnToTargetWithAS', 'EventPlayAS', 'EventTriggerParticipateEvent']
queries: ['EventQueryIsPlayingSameAS']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Accessory4': ''}

Actor: EventSystemActor[ActArrest]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[ActArrest_Courtyard]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void FoundBySecurity() {

    call OthersSoldier_Event_Join()


    call FoundBySecurity_Common()

    Player_Event.EventPlayerWarpToStarterLinkAnchor({'UseDemoWait': True, 'InstanceName': 'Player_KickOutPos', 'NotChangeRot': False, 'IsWaitEnd': True, 'ActorName': 'DestinationAnchor', 'ASCommand': 'EvtWait'})

    call NaviEventCommon.NaviWarp_PlayerHomePos({'IsLookAtPlayer': False})

    Npc_EventStarter.EventWarpToHomeMatrix({'IsWaitEnd': True})
    GameSystemActor.EventAIScheduleNPCForceSecurityLifted({'IsWaitEnd': True})
    EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player_Event', 'PosVector': [0.0, 1.809999942779541, -3.440000057220459], 'AtVector': [0.0, 1.2100000381469727, 0.0], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    Player_Event.EventPlayerUnequip({'IsWaitEnd': True})
    Player_Event.EventTriggerPlayerRequestLookAtTheFrontLock({'IsImmediate': False})

    fork {
        Player_Event.EventPlayerPlayASForFlowchart({'ForceFadeFrame': -1.0, 'IsAllSlot': True, 'IsWaitEnd': True, 'UseAnmDriven': False, 'ClothWarpMode': 0, 'ASCommand': 'DamageLStandStartPose', 'KeepOneTimeAnm': True})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})
        Player_Event.EventTriggerSoundDisableSpMode({'ActorSoundSpMode': 1, 'FadeTime': 0.0})
        Player_Event.EventPlayerPlayASForFlowchart({'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'IsAllSlot': True, 'IsWaitEnd': True, 'UseAnmDriven': False, 'ClothWarpMode': 0, 'ASCommand': 'DamageLStand'})
    } {
        UISystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    }

    Player_Event.EventTriggerSoundEnableSpMode({'ActorSoundSpMode': 1, 'FadeTime': 0.0})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
}

void FoundBySecurity_Courtyard() {

    call OthersSoldier_Event_Join_Courtyard()


    call FoundBySecurity_Common_Courtyard()

    Npc_EventStarter.EventWarpToHomeMatrix({'IsWaitEnd': True})
    GameSystemActor.EventAIScheduleNPCForceSecurityLifted({'IsWaitEnd': True})
    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'Actor1ActorName': 'DestinationAnchor', 'Actor1InstanceName': 'Player_KickOutPos_Courtyard', 'PosVector': [0.0, 1.5, 2.990000009536743], 'AtVector': [0.0, 1.2400000095367432, 0.0], 'IsEnableRevertFast': False})
    Player_Event.EventTriggerSoundDisableSpMode({'ActorSoundSpMode': 1, 'FadeTime': 0.0})
    GameSystemActor.EventTraverseAroundAndWaitCreateActor({'IsWaitEnd': True, 'IsFastLoad': False})
    Player_Event.EventPlayerWarpToStarterLinkAnchor({'NotChangeRot': False, 'IsWaitEnd': True, 'ActorName': 'DestinationAnchor', 'InstanceName': 'Player_KickOutPos_Courtyard', 'ASCommand': 'EvtEscaped', 'UseDemoWait': True})
    Player_Event.EventTriggerPlayerRequestLookAtTheFrontLock({'IsImmediate': True})

    call NaviEventCommon.NaviWarp_PlayerHomePos({'IsLookAtPlayer': False})

    UISystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 70})
    Player_Event.EventPlayerTurnAndLook({'IsWaitEnd': True, 'WorldPos': [0.0, 0.0, 0.0], 'UpperASCommand': '', 'IgnoreTargetPosMove': False, 'SlowTurn': False, 'UseNormalTurn': False, 'OffsetBase': 1, 'TurnFaceControlType': 0, 'ActorName': 'DestinationAnchor', 'InstanceName': 'Player_KickOutPos_Courtyard', 'KeepTalkWait': False, 'Target': 4, 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 90.0, 'IsDoNavi': True})
    Player_Event.EventTriggerSoundEnableSpMode({'ActorSoundSpMode': 1, 'FadeTime': 0.0})
}

void Soldier_RandomTalk() {
    switch GameSystemActor.EventQueryRandomChoice3() {
      case 0:
        Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_010_Child:Talk_00', 'IsWaitEnd': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'Act_Arrest', 'IsCloseDialog': False, 'IsNotBecomeSpeaker': True, 'MaintainPerformanceState': 0})
        Event102:
        GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})
      case 1:
        Npc_EventStarter.EventTalk({'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_010_Child:Talk_02', 'IsWaitEnd': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'Act_Arrest', 'IsCloseDialog': False, 'IsNotBecomeSpeaker': True, 'MaintainPerformanceState': 0})
        goto Event102
      case 2:
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_010_Child:Talk_01', 'ASName': 'Act_Arrest', 'IsNotBecomeSpeaker': True, 'MaintainPerformanceState': 0})
        goto Event102
    }
}

void FoundBySecurity_Common() {
    if !Player_Event.EventQueryCheckPlayerState({'State': 0}) {
        Event31:

        call Common.AirStartUp()

        Player_Event.EventTriggerPlayerEventStartWithDrawn()

        call InitTalk.Sub_InitTalk_Npc_NoSpeaker({'Arg_Greeting': 4, 'Arg_Turn': 1, 'Arg_Actor': ActorIdentifier(name="Npc_EventStarter")})


        fork {
            Npc_EventStarter.EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})
            if !Npc_EventStarter.EventNPCQueryCheckTurnToTarget({'TurnType': 2}) {
                Npc_EventStarter.EventNPCTurnToTargetWithAS({'Target': 2, 'ASName': 'NoticeTurn_Quick', 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': False, 'IsConfront': False})
            } else {
                Npc_EventStarter.EventNPCTurnToTargetWithAS({'Target': 2, 'ASName': 'NoticeTurn_Quick', 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': False, 'IsConfront': True})
            }
            Npc_EventStarter.EventPlayAS({'ASName': 'Act_Arrest', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
            EventSystemActor[ActArrest].EventWait({'IsWaitEnd': True, 'Frames': 1})

            fork {
                if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HyruleCastle_IsKickOut', 'Index': -1}) {

                    fork {
                        if !Player_Event.EventQueryCheckPlayerState({'State': 0}) {

                            call NPC_FocusCamera_HyruleCastle()

                        }
                    } {

                        call Soldier_RandomTalk_IsAfterSecond()

                    }

                } else {

                    fork {

                        call NPC_FocusCamera_HyruleCastle()

                    } {

                        call Soldier_RandomTalk()

                    }

                }
            } {

                call OthersSoldier_NoticeTurn_Quick()

            }

        } {

            call SUB_FoundBySecurity_PlayerNavi()

        }


        call NaviChat.NaviEmotionChange_Return()

        Npc_Navi.EventNaviRequestBallonMessage({'Index': 80})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'NaviChat_HyruleCastle_FoundBySecurity'})
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HyruleCastle_IsKickOut', 'Index': -1}) {
            EventSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
            Event18:
            UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
        } else {

            call FoundBySecurity_Common_IsFirst()

            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HyruleCastle_IsKickOut', 'Index': -1, 'Value': True})
            goto Event18
        }
    } else {
        Player_Event.EventTriggerPlayerResetMaxFloatBuoyancyAccelGravityUnit()
        Player_Event.EventPlayerWaitStabilityInWater({'IsWaitEnd': True})
        goto Event31
    }
}

void FoundBySecurity_Common_IsFirst() {
    if !Player_Event.EventQueryPlayerIsEquipMask() {
        if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Bunny'}) {
            switch GameSystemActor.EventQueryRandomChoice3() {
              case 0:
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'Act_Arrest', 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_010_Child:Talk_19', 'IsCloseDialog': False, 'MaintainPerformanceState': 0})
                Event156:
                GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})
              case 1:
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'Act_Arrest', 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_010_Child:Talk_20', 'IsCloseDialog': False, 'MaintainPerformanceState': 0})
                goto Event156
              case 2:
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'Act_Arrest', 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_010_Child:Talk_21', 'IsCloseDialog': False, 'MaintainPerformanceState': 0})
                goto Event156
            }
        } else
        if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Amiibo1'}) {
            switch GameSystemActor.EventQueryRandomChoice3() {
              case 0:
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'Act_Arrest', 'IsCloseDialog': False, 'IsNotBecomeSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_010_Child:Talk_26', 'MaintainPerformanceState': 0})
                goto Event156
              case 1:
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'Act_Arrest', 'IsCloseDialog': False, 'IsNotBecomeSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_010_Child:Talk_25', 'MaintainPerformanceState': 0})
                goto Event156
              case 2:
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'Act_Arrest', 'IsCloseDialog': False, 'IsNotBecomeSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_010_Child:Talk_27', 'MaintainPerformanceState': 0})
                goto Event156
            }
        } else
        switch GameSystemActor.EventQueryRandomChoice3() {
          case 0:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'Act_Arrest', 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_010_Child:Talk_16', 'IsCloseDialog': False, 'MaintainPerformanceState': 0})
            goto Event156
          case 1:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'Act_Arrest', 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_010_Child:Talk_17', 'IsCloseDialog': False, 'MaintainPerformanceState': 0})
            goto Event156
          case 2:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'Act_Arrest', 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_010_Child:Talk_18', 'IsCloseDialog': False, 'MaintainPerformanceState': 0})
            goto Event156
        }
    } else
    switch GameSystemActor.EventQueryRandomChoice3() {
      case 0:
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_010_Child:Talk_13', 'ASName': 'Act_Arrest', 'IsCloseDialog': False, 'MaintainPerformanceState': 0})
        goto Event156
      case 1:
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_010_Child:Talk_14', 'ASName': 'Act_Arrest', 'IsCloseDialog': False, 'MaintainPerformanceState': 0})
        goto Event156
      case 2:
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_010_Child:Talk_15', 'ASName': 'Act_Arrest', 'IsCloseDialog': False, 'MaintainPerformanceState': 0})
        goto Event156
    }
}

void Soldier_RandomTalk_IsAfterSecond() {
    if !Player_Event.EventQueryPlayerIsEquipMask() {
        if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Bunny'}) {
            switch GameSystemActor.EventQueryRandomChoice3() {
              case 0:
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'Act_Arrest', 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_010_Child:Talk_19', 'IsCloseDialog': False, 'IsNotBecomeSpeaker': True, 'MaintainPerformanceState': 0})
                Event157:
                GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})
              case 1:
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'Act_Arrest', 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_010_Child:Talk_20', 'IsCloseDialog': False, 'IsNotBecomeSpeaker': True, 'MaintainPerformanceState': 0})
                goto Event157
              case 2:
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'Act_Arrest', 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_010_Child:Talk_21', 'IsCloseDialog': False, 'IsNotBecomeSpeaker': True, 'MaintainPerformanceState': 0})
                goto Event157
            }
        } else
        if !Player_Event.EventQueryPlayerIsEquipArmor({'ArmorSlot': 0, 'ArmorName': 'Armor_Child_Mask_Amiibo1'}) {
            switch GameSystemActor.EventQueryRandomChoice3() {
              case 0:
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'Act_Arrest', 'IsCloseDialog': False, 'IsNotBecomeSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_010_Child:Talk_26', 'MaintainPerformanceState': 0})
                goto Event157
              case 1:
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'Act_Arrest', 'IsCloseDialog': False, 'IsNotBecomeSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_010_Child:Talk_25', 'MaintainPerformanceState': 0})
                goto Event157
              case 2:
                Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'Act_Arrest', 'IsCloseDialog': False, 'IsNotBecomeSpeaker': True, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_010_Child:Talk_27', 'MaintainPerformanceState': 0})
                goto Event157
            }
        } else
        switch GameSystemActor.EventQueryRandomChoice3() {
          case 0:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'Act_Arrest', 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_010_Child:Talk_04', 'IsCloseDialog': False, 'IsNotBecomeSpeaker': True, 'MaintainPerformanceState': 0})
            goto Event157
          case 1:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'Act_Arrest', 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_010_Child:Talk_05', 'IsCloseDialog': False, 'IsNotBecomeSpeaker': True, 'MaintainPerformanceState': 0})
            goto Event157
          case 2:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'Act_Arrest', 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_010_Child:Talk_06', 'IsCloseDialog': False, 'IsNotBecomeSpeaker': True, 'MaintainPerformanceState': 0})
            goto Event157
        }
    } else
    if !EventWorldManagerController.EventQueryTimeDivision() {
        switch GameSystemActor.EventQueryRandomChoice3() {
          case 0:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'Act_Arrest', 'IsCloseDialog': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_010_Child:Talk_22', 'IsNotBecomeSpeaker': True, 'MaintainPerformanceState': 0})
            goto Event157
          case 1:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'Act_Arrest', 'IsCloseDialog': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_010_Child:Talk_23', 'IsNotBecomeSpeaker': True, 'MaintainPerformanceState': 0})
            goto Event157
          case 2:
            Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'Act_Arrest', 'IsCloseDialog': False, 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_010_Child:Talk_24', 'IsNotBecomeSpeaker': True, 'MaintainPerformanceState': 0})
            goto Event157
        }
    } else
    switch GameSystemActor.EventQueryRandomChoice3() {
      case 0:
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'Act_Arrest', 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_010_Child:Talk_10', 'IsCloseDialog': False, 'IsNotBecomeSpeaker': True, 'MaintainPerformanceState': 0})
        goto Event157
      case 1:
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'Act_Arrest', 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_010_Child:Talk_11', 'IsCloseDialog': False, 'IsNotBecomeSpeaker': True, 'MaintainPerformanceState': 0})
        goto Event157
      case 2:
        Npc_EventStarter.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ASName': 'Act_Arrest', 'MessageId': 'EventFlowMsg/Npc_Hylia_Soldier_010_Child:Talk_12', 'IsCloseDialog': False, 'IsNotBecomeSpeaker': True, 'MaintainPerformanceState': 0})
        goto Event157
    }
}

void FoundBySecurity_Common_Courtyard() {
    Npc_EventStarter.EventTriggerLookAtObject({'Target': 2, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'ResetArriveTransformFixed': False})

    call Common.AirStartUp()


    call InitTalk.Sub_InitTalk_Npc_NoSpeaker({'Arg_Greeting': 4, 'Arg_Turn': 1, 'Arg_Actor': ActorIdentifier(name="Npc_EventStarter")})


    fork {
        if !Npc_EventStarter.EventNPCQueryCheckTurnToTarget({'TurnType': 2}) {
            Npc_EventStarter.EventNPCTurnToTargetWithAS({'Target': 2, 'ASName': 'NoticeTurn_Quick', 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': False, 'IsConfront': False})
        } else {
            Npc_EventStarter.EventNPCTurnToTargetWithAS({'Target': 2, 'ASName': 'NoticeTurn_Quick', 'IsWaitEnd': True, 'FaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': False, 'IsConfront': True})
        }
        Npc_EventStarter.EventPlayAS({'ASName': 'Act_Arrest', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
        EventSystemActor[ActArrest_Courtyard].EventWait({'IsWaitEnd': True, 'Frames': 1})

        fork {
            if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HyruleCastle_IsKickOut', 'Index': -1}) {

                call Soldier_RandomTalk_IsAfterSecond()

            } else {

                call Soldier_RandomTalk()

            }
        } {

            call OthersSoldier_NoticeTurn_Quick_Courtyard()

        }

    } {

        fork {
            Npc_EventStarter.EventTriggerBecomeSpeaker()
        } {

            call SUB_FoundBySecurity_PlayerNavi()

        }

    } {
        if !Player_Event.EventQueryCheckPlayerState({'State': 0}) {

            call NPC_FocusCamera_HyruleCastle()

        }
    }

    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HyruleCastle_IsKickOut', 'Index': -1}) {
        EventSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
        Event137:
        if !GameSystemActor.EventQueryRandomChoice2() {
            Npc_Navi.EventTalk({'MessageId': 'EventFlowMsg/HyruleCastle_FoundBySecurity:Talk_00', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0})
        } else {
            Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/HyruleCastle_FoundBySecurity:Talk_01', 'MaintainPerformanceState': 0})
        }
        UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})

        call NaviChat.NaviEmotionChange_Return()

        Npc_Navi.EventNaviRequestBallonMessage({'Index': 10})
    } else {

        call FoundBySecurity_Common_IsFirst()

        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HyruleCastle_IsKickOut', 'Index': -1, 'Value': True})
        goto Event137
    }
}

void SUB_FoundBySecurity_PlayerNavi() {

    fork {
        Player_Event.EventTriggerPlayerLookAtObject({'Target': 1, 'TurnFaceControlType': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 60.0})
        Player_Event.EventPlayerWait({'IsWaitEnd': False})
        Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'EvtFlinchLong', 'IsWaitEnd': False, 'ClothWarpMode': 0})
    } {
        Npc_Navi.EventNaviLookAtObject({'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'IsTurnX': True, 'Target': 1, 'IsWaitEnd': True})

        call NaviChat.NaviEmotionChange_NoTime({'EmotionType': 4})

        Npc_Navi.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'EvtTalk', 'IsWaitEnd': False})
    }

}

void OthersSoldier_NoticeTurn_Quick_Courtyard() {

    fork {
        if Npc_Hylia_Soldier_021_Child.EventQueryIsPlayingSameAS({'ASName': 'Act_Arrest', 'Partial': ''}) {
            Npc_Hylia_Soldier_021_Child.EventNPCTurnToTargetWithAS({'Target': 2, 'FaceControlType': 1, 'IsConfront': False, 'ASName': 'NoticeTurn_Quick', 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': False})
            Npc_Hylia_Soldier_021_Child.EventPlayAS({'ASName': 'Act_Arrest', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
        }
    } {
        if Npc_Hylia_Soldier_024_Child.EventQueryIsPlayingSameAS({'ASName': 'Act_Arrest', 'Partial': ''}) {
            Npc_Hylia_Soldier_024_Child.EventNPCTurnToTargetWithAS({'Target': 2, 'FaceControlType': 1, 'IsConfront': False, 'ASName': 'NoticeTurn_Quick', 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': False})
            Npc_Hylia_Soldier_024_Child.EventPlayAS({'ASName': 'Act_Arrest', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
        }
    } {
        if Npc_Hylia_Soldier_025_Child.EventQueryIsPlayingSameAS({'ASName': 'Act_Arrest', 'Partial': ''}) {
            Npc_Hylia_Soldier_025_Child.EventNPCTurnToTargetWithAS({'Target': 2, 'FaceControlType': 1, 'IsConfront': False, 'ASName': 'NoticeTurn_Quick', 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': False})
            Npc_Hylia_Soldier_025_Child.EventPlayAS({'ASName': 'Act_Arrest', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
        }
    } {
        if Npc_Hylia_Soldier_026_Child.EventQueryIsPlayingSameAS({'ASName': 'Act_Arrest', 'Partial': ''}) {
            Npc_Hylia_Soldier_026_Child.EventNPCTurnToTargetWithAS({'Target': 2, 'FaceControlType': 1, 'IsConfront': False, 'ASName': 'NoticeTurn_Quick', 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': False})
            Npc_Hylia_Soldier_026_Child.EventPlayAS({'ASName': 'Act_Arrest', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
        }
    }

}

void OthersSoldier_Event_Join_Courtyard() {

    fork {
        Npc_Hylia_Soldier_021_Child.EventTriggerParticipateEvent()
    } {
        Npc_Hylia_Soldier_024_Child.EventTriggerParticipateEvent()
    } {
        Npc_Hylia_Soldier_025_Child.EventTriggerParticipateEvent()
    } {
        Npc_Hylia_Soldier_026_Child.EventTriggerParticipateEvent()
    }

}

void OthersSoldier_NoticeTurn_Quick() {

    fork {
        if Npc_Hylia_Soldier_012_Child.EventQueryIsPlayingSameAS({'ASName': 'Act_Arrest', 'Partial': ''}) {
            Npc_Hylia_Soldier_012_Child.EventNPCTurnToTargetWithAS({'Target': 2, 'FaceControlType': 1, 'IsConfront': False, 'ASName': 'NoticeTurn_Quick', 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': False})
            Npc_Hylia_Soldier_012_Child.EventPlayAS({'ASName': 'Act_Arrest', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
        }
    } {
        if Npc_Hylia_Soldier_013_Child.EventQueryIsPlayingSameAS({'ASName': 'Act_Arrest', 'Partial': ''}) {
            Npc_Hylia_Soldier_013_Child.EventNPCTurnToTargetWithAS({'Target': 2, 'FaceControlType': 1, 'IsConfront': False, 'ASName': 'NoticeTurn_Quick', 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': False})
            Npc_Hylia_Soldier_013_Child.EventPlayAS({'ASName': 'Act_Arrest', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
        }
    } {
        if Npc_Hylia_Soldier_015_Child.EventQueryIsPlayingSameAS({'ASName': 'Act_Arrest', 'Partial': ''}) {
            Npc_Hylia_Soldier_015_Child.EventNPCTurnToTargetWithAS({'Target': 2, 'FaceControlType': 1, 'IsConfront': False, 'ASName': 'NoticeTurn_Quick', 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': False})
            Npc_Hylia_Soldier_015_Child.EventPlayAS({'ASName': 'Act_Arrest', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
        }
    } {
        if Npc_Hylia_Soldier_017_Child.EventQueryIsPlayingSameAS({'ASName': 'Act_Arrest', 'Partial': ''}) {
            Npc_Hylia_Soldier_017_Child.EventNPCTurnToTargetWithAS({'Target': 2, 'FaceControlType': 1, 'IsConfront': False, 'ASName': 'NoticeTurn_Quick', 'IsWaitEnd': True, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0, 'OffsetBase': 0, 'LookingControllerName': '', 'LookIKParameterVariationName': '', 'IsReleaseThreaten': False, 'EnableAutomaticallyPlayWaitASAfterTurn': False})
            Npc_Hylia_Soldier_017_Child.EventPlayAS({'ASName': 'Act_Arrest', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
        }
    }

}

void OthersSoldier_Event_Join() {

    fork {
        Npc_Hylia_Soldier_012_Child.EventTriggerParticipateEvent()
    } {
        Npc_Hylia_Soldier_013_Child.EventTriggerParticipateEvent()
    } {
        Npc_Hylia_Soldier_015_Child.EventTriggerParticipateEvent()
    } {
        Npc_Hylia_Soldier_017_Child.EventTriggerParticipateEvent()
    }

}

void NPC_FocusCamera_HyruleCastle() {
    if GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameA': 'Npc_EventStarter', 'ActorNameB': 'Player_Event', 'InstanceNameA': '', 'IsAnchorActorA': False, 'InstanceNameB': '', 'IsAnchorActorB': False, 'IsTargetPlayingAllEvent': False, 'CheckDistance': 5.0}) {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 45})
        if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'ActorName': 'Player_Event', 'VectorSetType': 3, 'Vector': [0.0, 2.0, -2.0], 'ActorInstanceName': '', 'IsIgnoreVectorReferenceActorRot': False}) {
            Event13:
            if !EventCamera.EventQueryCameraCheckRayCastForMoveToTarget({'ActorName': 'Player_Event', 'VectorSetType': 3, 'ActorInstanceName': '', 'IsIgnoreVectorReferenceActorRot': False, 'Vector': [0.0, 1.5, 0.0]}) {
                Event189:
                if EventCamera.EventQueryCameraCheckOcclusionToTarget({'ActorName1': 'Player_Event', 'ActorName2': 'Npc_EventStarter', 'VectorSetType2': 3, 'Vector2': [0.0, 1.0, 0.0], 'IsEnableCameraBodyCheck': True, 'SpaceCheckRadius': 0.5, 'Actor1InstanceName': '', 'IsIgnoreVectorReferenceActorRot1': False, 'Actor2InstanceName': '', 'IsIgnoreVectorReferenceActorRot2': False, 'IsEnableSpaceCheck': False, 'VectorSetType1': 1, 'Vector1': [0.0, 0.0, 0.0], 'IsConsiderWater': False}) {
                    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'Actor1ActorName': 'Player_Event', 'Actor2ActorName': 'Npc_EventStarter', 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveTime': 45, 'IsPosVectorReferenceActorPosOnce': True, 'IsLinearMove': False, 'AtVectorSetType': 4, 'CameraCollisionLookAtActorOffset': [0.0, 3.0, 3.0], 'MoveTotargetPosType': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'AtVector': [0.0, 1.0, 0.0], 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'CameraCollisionLookAtActor': 0, 'CameraCollisionMode': 0, 'PosVectorSetType': 1, 'PosVector': [0.0, 0.0, 0.0], 'IsEnableRevertFast': False})
                }
            } else
            if !EventCamera.EventQueryCameraCheckOcclusionToTarget({'ActorName1': 'Player_Event', 'ActorName2': 'Npc_EventStarter', 'VectorSetType1': 3, 'VectorSetType2': 3, 'Vector2': [0.0, 1.0, 0.0], 'IsEnableCameraBodyCheck': True, 'Vector1': [0.0, 1.5, 0.0], 'Actor1InstanceName': '', 'IsIgnoreVectorReferenceActorRot1': False, 'Actor2InstanceName': '', 'IsIgnoreVectorReferenceActorRot2': False, 'IsEnableSpaceCheck': True, 'SpaceCheckRadius': 0.5, 'IsConsiderWater': False}) {
                goto Event189
            } else {
                EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'Actor1ActorName': 'Player_Event', 'Actor2ActorName': 'Npc_EventStarter', 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveTime': 45, 'IsPosVectorReferenceActorPosOnce': True, 'IsLinearMove': False, 'AtVectorSetType': 4, 'CameraCollisionLookAtActorOffset': [0.0, 3.0, 3.0], 'MoveTotargetPosType': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'AtVector': [0.0, 1.0, 0.0], 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'PosVector': [0.0, 1.5, 0.0], 'PosVectorSetType': 3, 'CameraCollisionLookAtActor': 0, 'CameraCollisionMode': 0, 'IsEnableRevertFast': False})
            }
        } else
        if !EventCamera.EventQueryCameraCheckOcclusionToTarget({'ActorName1': 'Player_Event', 'ActorName2': 'Npc_EventStarter', 'VectorSetType1': 3, 'VectorSetType2': 3, 'Vector1': [0.0, 2.0, -2.0], 'Vector2': [0.0, 1.0, 0.0], 'IsEnableCameraBodyCheck': True, 'SpaceCheckRadius': 0.5, 'Actor1InstanceName': '', 'IsIgnoreVectorReferenceActorRot1': False, 'Actor2InstanceName': '', 'IsIgnoreVectorReferenceActorRot2': False, 'IsEnableSpaceCheck': False, 'IsConsiderWater': False}) {
            goto Event13
        } else {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'Actor1ActorName': 'Player_Event', 'Actor2ActorName': 'Npc_EventStarter', 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveTime': 45, 'PosVectorSetType': 3, 'IsPosVectorReferenceActorPosOnce': True, 'IsLinearMove': False, 'AtVectorSetType': 4, 'CameraCollisionLookAtActorOffset': [0.0, 3.0, 3.0], 'MoveTotargetPosType': 1, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'AtVector': [0.0, 1.0, 0.0], 'PosVector': [0.0, 2.0, -2.0], 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'CameraCollisionLookAtActor': 0, 'CameraCollisionMode': 0, 'IsEnableRevertFast': False})
        }
    }
}
