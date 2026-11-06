-------- EventFlow: Dm_SY_Ocarina_SariaSong --------

Actor: Npc_Kokiri_Saria_Voice
entrypoint: None()
actions: ['EventTalk', 'EventTalkSariaSongPlace']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 1}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool', 'EventTriggerSetGameDataInt']
queries: ['EventQueryIsGameDataBoolExp', 'EventQueryIsGameDataBool', 'EventQueryIsGameDataInt']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryRandomChoice2']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Kokiri_Saria_Child_SacredForestMeadow
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Accessory4': '', 'EventMemberCreateMethod': 3}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: Player_Event
entrypoint: None()
actions: ['EventTriggerPlayerLookAtObject', 'EventTriggerEmitXLink', 'EventTriggerXLinkFadeByKey']
queries: ['EventQueryPlayerIsChild', 'EventQueryPlayerIsAbleWarp']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: EventWorldManagerController
entrypoint: None()
actions: []
queries: ['EventQueryCheckTime']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventEffectEmitter
entrypoint: None()
actions: ['EventNodeEffectEmit']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: PostProcessingActor
entrypoint: None()
actions: ['EventSetAdvancedDoFForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventExecuteProgressChallengeStep']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: SystemTextNPC
entrypoint: None()
actions: ['EventTalk']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: CameraXLinkControl
entrypoint: None()
actions: ['EventTriggerXLinkFadeByKey']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Dm_Locator
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventWarpToTargetActor']
queries: []
params: {'EventMemberCreateMethod': 1, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: UISystemActor
entrypoint: None()
actions: []
queries: ['EventQueryGetCurrentBaseLocation', 'EventQueryIsNotVisitCurrentBaseLocation']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void SariaSong() {
    Dm_Locator.EventTriggerParticipateEvent()
    Npc_Kokiri_Saria_Child_SacredForestMeadow.EventTriggerParticipateEvent()

    fork {
        PostProcessingActor.EventSetAdvancedDoFForFlowchart({'StartFNumber': 45.0, 'IsWaitEnd': True, 'IsPrimaryApply': False, 'EndFNumber': 25.0, 'EndDistance': 0.800000011920929, 'StartDistance': 3.0, 'StartBluarLevel': 2.5, 'EndBluarLevel': 0.0, 'RequiredFrame': 0, 'IsAutoFocalDist': False, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
    } {

        call Dm_SY_Ocarina.LightOff()

    } {
        Player_Event.EventTriggerXLinkFadeByKey({'ELinkKey': 'Ocarina_Correct', 'SLinkKey': '', 'IsKill': False})
        Player_Event.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_SY_Ocarina_SariaSong_End'})
        EventEffectEmitter.EventNodeEffectEmit({'InstanceName': '', 'ActorName': 'CameraXLinkControl', 'IsWaitEnd': False, 'ELinkKeyName': 'Dm_SY_Ocarina_Talk_SariaSong'})
    }

    Dm_Locator.EventWarpToTargetActor({'ActorName': 'Player_Event', 'OffsetBase': 1, 'IsWaitEnd': True, 'InstanceName': '', 'YAngle': 0.0, 'ClothWarpMode': -1, 'TargetActorKind': 1, 'PositionOffset': [0.0, 5.0, 3.0]})
    EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player_Event', 'PosVector': [-1.4800000190734863, 4.130000114440918, 2.4200000762939453], 'AtVector': [0.10999999940395355, 1.190000057220459, 0.4099999964237213], 'TargetFovy': 40.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'IsWaitEnd': True, 'MoveTime': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'CameraCollisionLookAtActor': 2, 'LatShiftRange': 60.0, 'LongShiftRange': 180.0, 'CameraCollisionLookAtActorOffset': [0.0, 1.0, 0.0], 'CameraCollisionMode': 1, 'IsEnableRevertFast': False})
    EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player_Event', 'PosVector': [-1.4800000190734863, 4.130000114440918, 2.4200000762939453], 'AtVector': [0.10999999940395355, 1.190000057220459, 0.4099999964237213], 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'TargetFovy': 30.0, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'MoveTime': 1000, 'IsWaitEnd': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'CameraCollisionLookAtActor': 2, 'LatShiftRange': 60.0, 'LongShiftRange': 180.0, 'CameraCollisionLookAtActorOffset': [0.0, 1.0, 0.0], 'CameraCollisionMode': 1, 'IsEnableRevertFast': False})
    Player_Event.EventTriggerPlayerLookAtObject({'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'Target': 3, 'ActorName': 'Dm_Locator', 'PosOffset': [0.0, 0.0, 0.0]})
    if !Player_Event.EventQueryPlayerIsChild() {
        Event154:
        if !Player_Event.EventQueryPlayerIsAbleWarp() {
            if !Player_Event.EventQueryPlayerIsChild() {

                call SariaSong_Child()

            } else {

                call SariaSong_Adult()

            }
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Npc_Kokiri_Saria_Child_SacredForestMeadow_PlayedSariaSong', 'Index': -1, 'Value': True})
        } else
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Defeat_Ganon_IsAfter_Step05_Exp'}) {
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Defeat_Ganon_IsAfter_Step06_Exp'}) {
                if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Defeat_Ganon_IsAfter_Step07_Exp'}) {
                    Npc_Kokiri_Saria_Voice.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel2': 1, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'IsCloseDialog': True, 'MaintainPerformanceState': 0, 'MessageId': 'EventFlowMsg/Dm_SY_Ocarina:Talk_113'})
                } else {
                    Npc_Kokiri_Saria_Voice.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel2': 1, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Dm_SY_Ocarina:Talk_111', 'IsCloseDialog': True, 'MaintainPerformanceState': 0})
                }
            } else {
                Npc_Kokiri_Saria_Voice.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel2': 1, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Dm_SY_Ocarina:Talk_12', 'IsCloseDialog': True, 'MaintainPerformanceState': 0})
            }
        } else {
            Npc_Kokiri_Saria_Voice.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel2': 1, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Dm_SY_Ocarina:Talk_11', 'IsCloseDialog': True, 'MaintainPerformanceState': 0})
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfForest_IsCompleted_Exp'}) {
        goto Event154
    } else {
        SystemTextNPC.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'OverrideStyle': 0, 'ChoiceLabel2': 1, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Dm_SY_Ocarina:Talk_103', 'MaintainPerformanceState': 0, 'IsCloseDialog': True, 'IsOverrideStyle': True})
        CameraXLinkControl.EventTriggerXLinkFadeByKey({'ELinkKey': 'Dm_SY_Ocarina_Talk_SariaSong', 'SLinkKey': '', 'IsKill': False})

        call NaviEventCommon.InitTalk_NaviPlayerFront({'IsLookAtNavi': True})


        call NaviEventCommon.EventTalk_Navi_WithPlayerTalk({'MessageId': 'EventFlowMsg/Dm_SY_Ocarina:Talk_104'})

    }
}

void SariaSong_Adult() {
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    Npc_Kokiri_Saria_Voice.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'IsCloseDialog': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel2': 1, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Dm_SY_Ocarina:Talk_10', 'MaintainPerformanceState': 0})

    call Story_Check()


    call Return()

}

void SariaSong_Child() {
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
    Npc_Kokiri_Saria_Voice.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'IsCloseDialog': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel2': 1, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Dm_SY_Ocarina:Talk_10', 'MaintainPerformanceState': 0})
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'SacredForestMeadow_CloseToSaria'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Npc_Kokiri_Saria_Child_SacredForestMeadow_PlayedSariaSong'}) {
            Npc_Kokiri_Saria_Voice.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel2': 1, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Dm_SY_Ocarina:Talk_13', 'IsCloseDialog': True, 'MaintainPerformanceState': 0})
        } else {
            Npc_Kokiri_Saria_Voice.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel2': 1, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Dm_SY_Ocarina:Talk_29', 'IsCloseDialog': True, 'MaintainPerformanceState': 0})
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'SacredForestMeadow_CloseToSaria_OnStairs'}) {
        Npc_Kokiri_Saria_Voice.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel2': 1, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Dm_SY_Ocarina:Talk_105', 'IsCloseDialog': True, 'MaintainPerformanceState': 0})
    } else {

        call Story_Check()


        call Return()

    }
}

void SariaSong_Adult_Place() {
    Npc_Kokiri_Saria_Voice.EventTalkSariaSongPlace({'IsWaitEnd': True, 'IsChild': False, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsCloseDialog': True})
}

void SariaSong_Child_Time() {
    if !EventWorldManagerController.EventQueryCheckTime({'CompareOparator': 5, 'Minute': 59, 'Hour': 2}) {
        Npc_Kokiri_Saria_Voice.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel2': 1, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Dm_SY_Ocarina:Talk_101', 'IsCloseDialog': True, 'MaintainPerformanceState': 0})
    } else
    if !EventWorldManagerController.EventQueryCheckTime({'Hour': 3, 'CompareOparator': 5, 'Minute': 59}) {
        Npc_Kokiri_Saria_Voice.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel2': 1, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Dm_SY_Ocarina:Talk_101', 'IsCloseDialog': True, 'MaintainPerformanceState': 0})
    } else
    if !EventWorldManagerController.EventQueryCheckTime({'CompareOparator': 5, 'Hour': 8, 'Minute': 59}) {
        Npc_Kokiri_Saria_Voice.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel2': 1, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Dm_SY_Ocarina:Talk_93', 'IsCloseDialog': True, 'MaintainPerformanceState': 0})
    } else
    if !EventWorldManagerController.EventQueryCheckTime({'CompareOparator': 5, 'Hour': 9, 'Minute': 59}) {
        Npc_Kokiri_Saria_Voice.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel2': 1, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Dm_SY_Ocarina:Talk_95', 'IsCloseDialog': True, 'MaintainPerformanceState': 0})
    } else
    if !EventWorldManagerController.EventQueryCheckTime({'CompareOparator': 5, 'Hour': 15, 'Minute': 59}) {
        Npc_Kokiri_Saria_Voice.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel2': 1, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Dm_SY_Ocarina:Talk_97', 'IsCloseDialog': True, 'MaintainPerformanceState': 0})
    } else
    if !EventWorldManagerController.EventQueryCheckTime({'CompareOparator': 5, 'Hour': 16, 'Minute': 59}) {
        Npc_Kokiri_Saria_Voice.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel2': 1, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Dm_SY_Ocarina:Talk_99', 'IsCloseDialog': True, 'MaintainPerformanceState': 0})
    } else
    if !EventWorldManagerController.EventQueryCheckTime({'CompareOparator': 5, 'Hour': 19, 'Minute': 59}) {
        Npc_Kokiri_Saria_Voice.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel2': 1, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Dm_SY_Ocarina:Talk_99', 'IsCloseDialog': True, 'MaintainPerformanceState': 0})
    } else
    if !EventWorldManagerController.EventQueryCheckTime({'CompareOparator': 5, 'Hour': 20, 'Minute': 59}) {
        Npc_Kokiri_Saria_Voice.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel2': 1, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Dm_SY_Ocarina:Talk_101', 'IsCloseDialog': True, 'MaintainPerformanceState': 0})
    } else {
        Npc_Kokiri_Saria_Voice.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel2': 1, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Dm_SY_Ocarina:Talk_101', 'IsCloseDialog': True, 'MaintainPerformanceState': 0})
    }
}

void SariaSong_Child_Place() {
    Npc_Kokiri_Saria_Voice.EventTalkSariaSongPlace({'IsWaitEnd': True, 'IsChild': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsCloseDialog': True})
}

void SariaSong_Child_Story() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfShadow_Kakariko_Burning'}) {
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfShadow_IsCompleted_Exp'}) {
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfSpirit_IsCompleted_Exp'}) {
                Npc_Kokiri_Saria_Voice.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel2': 1, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Dm_SY_Ocarina:Talk_110', 'IsCloseDialog': True, 'MaintainPerformanceState': 0})
            } else {
                Npc_Kokiri_Saria_Voice.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel2': 1, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Dm_SY_Ocarina:Talk_21', 'IsCloseDialog': True, 'MaintainPerformanceState': 0})
            }
        } else {
            Npc_Kokiri_Saria_Voice.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel2': 1, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Dm_SY_Ocarina:Talk_20', 'IsCloseDialog': True, 'MaintainPerformanceState': 0})
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'DoorOfTime_IsAfter_Step04_Exp'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Kokiri_Saria_Child_SacredForestMeadow_PlayOcarina_InFront_Event45', 'Index': -1}) {
            Npc_Kokiri_Saria_Voice.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel2': 1, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Dm_SY_Ocarina:Talk_30', 'IsCloseDialog': True, 'MaintainPerformanceState': 0})
        } else {
            Npc_Kokiri_Saria_Voice.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel2': 1, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Dm_SY_Ocarina:Talk_19', 'IsCloseDialog': True, 'MaintainPerformanceState': 0})
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'DoorOfTime_IsAfter_Step2_2_Exp'}) {
        Npc_Kokiri_Saria_Voice.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel2': 1, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Dm_SY_Ocarina:Talk_18', 'IsCloseDialog': True, 'MaintainPerformanceState': 0})
    } else
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Get_StoneOfWater_IsCompleted_Exp'}) {
        Event16:
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Get_StoneOfFire_IsAfter_SariaMelodyPlay_Exp'}) {
            Npc_Kokiri_Saria_Voice.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel2': 1, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Dm_SY_Ocarina:Talk_15', 'IsCloseDialog': True, 'MaintainPerformanceState': 0})
        } else {
            Npc_Kokiri_Saria_Voice.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel2': 1, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Dm_SY_Ocarina:Talk_14', 'IsCloseDialog': True, 'MaintainPerformanceState': 0})
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Get_StoneOfFire_IsCompleted_Exp'}) {
        Npc_Kokiri_Saria_Voice.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel2': 1, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Dm_SY_Ocarina:Talk_16', 'IsCloseDialog': True, 'MaintainPerformanceState': 0})
        if GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Get_StoneOfWater_IsAfter_Ready_Exp'}) {
            ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'DoorOfTime', 'IsIgnoreChallengeProgressUI': True, 'IsWaitEnd': True, 'IsIgnoreCompletedChallenge': False, 'StepName': 'Srep2_1_1'})
        }
    } else
    goto Event16
}

void SariaSong_Adult_Story() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'AllSage_IsAfter_Step01_01_Exp'}) {
        Npc_Kokiri_Saria_Voice.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel2': 1, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Dm_SY_Ocarina:Talk_26', 'IsCloseDialog': True, 'MaintainPerformanceState': 0})
    } else
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfShadow_Kakariko_Burning'}) {
        Npc_Kokiri_Saria_Voice.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel2': 1, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Dm_SY_Ocarina:Talk_25', 'IsCloseDialog': True, 'MaintainPerformanceState': 0})
    } else
    if !GameSystemActor.EventQueryRandomChoice2() {
        Npc_Kokiri_Saria_Voice.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel2': 1, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Dm_SY_Ocarina:Talk_24', 'IsCloseDialog': True, 'MaintainPerformanceState': 0})
    } else {
        Npc_Kokiri_Saria_Voice.EventTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel3': 3, 'ChoiceLabel4': 4, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'ChoiceLabel2': 1, 'ChoiceLabel1': 0, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Dm_SY_Ocarina:Talk_22', 'IsCloseDialog': True, 'MaintainPerformanceState': 0})
    }
}

void Return() {
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Item_Melody_SariaSong_Time'}) {

        call SariaSong_Child_Time()

        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Item_Melody_SariaSong_Time', 'Value': False})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Item_Melody_SariaSong_Story', 'Value': True})
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Item_Melody_SariaSong_Place'}) {
        if !UISystemActor.EventQueryIsNotVisitCurrentBaseLocation() {
            Event160:
            if !Player_Event.EventQueryPlayerIsChild() {

                call SariaSong_Child_Place()

            } else {

                call SariaSong_Adult_Place()

            }
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'Item_Melody_SariaSong_Place'})
            if !Player_Event.EventQueryPlayerIsChild() {
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Item_Melody_SariaSong_Time', 'Value': True})
            } else {
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Item_Melody_SariaSong_Story', 'Value': True})
            }
        } else
        switch UISystemActor.EventQueryGetCurrentBaseLocation() {
          case 0:
            goto Event160
          case [1, 2, 3, 4, 5]:
            if !Player_Event.EventQueryPlayerIsChild() {

                call SariaSong_Child_Time()

                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'Item_Melody_SariaSong_Place'})
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Item_Melody_SariaSong_Story', 'Value': True})
            } else {

                call SariaSong_Adult_Story()

            }
        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Item_Melody_SariaSong_Story'}) {
        if !Player_Event.EventQueryPlayerIsChild() {

            call SariaSong_Child_Story()

        } else {

            call SariaSong_Adult_Story()

        }
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'Item_Melody_SariaSong_Story'})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Item_Melody_SariaSong_Place', 'Value': True})
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Item_Melody_SariaSong_Story_HaveRead'}) {
        if !UISystemActor.EventQueryIsNotVisitCurrentBaseLocation() {
            Event98:
            if !Player_Event.EventQueryPlayerIsChild() {

                call SariaSong_Child_Place()

            } else {

                call SariaSong_Adult_Place()

            }
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'Item_Melody_SariaSong_Place'})
            if !Player_Event.EventQueryPlayerIsChild() {
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Item_Melody_SariaSong_Time', 'Value': True})
            } else {
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Item_Melody_SariaSong_Story', 'Value': True})
            }
        } else
        switch UISystemActor.EventQueryGetCurrentBaseLocation() {
          case 0:
            goto Event98
          case [1, 2, 3, 4, 5]:
            if !Player_Event.EventQueryPlayerIsChild() {

                call SariaSong_Child_Time()

                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'Item_Melody_SariaSong_Place'})
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Item_Melody_SariaSong_Story', 'Value': True})
            } else {

                call SariaSong_Adult_Story()

            }
        }
    } else
    if !Player_Event.EventQueryPlayerIsChild() {

        call SariaSong_Child_Story()

    } else {

        call SariaSong_Adult_Story()

    }
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'Item_Melody_SariaSong_Story'})
    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Item_Melody_SariaSong_Place', 'Value': True})
}

void Check_int() {
    switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'Item_Melody_SariaSong_Story_Step', 'Index': -1, 'Value': 'Value'}) {
      case [0, 2]:
        GameDataActor.EventTriggerSetGameDataInt({'Index': -1, 'GameDataName': 'Item_Melody_SariaSong_Story_Step', 'Value': 'Value'})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'Item_Melody_SariaSong_Story_HaveRead'})
      case 1:
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Item_Melody_SariaSong_Story_HaveRead', 'Value': True})
    }
}

void Story_Check() {
    if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Item_Melody_SariaSong_Time'})
    && GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Item_Melody_SariaSong_Place'})
    && GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'Item_Melody_SariaSong_Story'}) {
        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Get_StoneOfFire_IsAfter_SariaMelodyPlay_Exp'}) {
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Get_StoneOfFire_IsCompleted_Exp'}) {
                if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'DoorOfTime_IsAfter_Step2_2_Exp'}) {
                    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'DoorOfTime_IsAfter_Step04_Exp'}) {
                        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'DoorOfTime_IsAfter_Step06_Exp'}) {
                            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfForest_IsAfter_Step09_Exp'}) {
                                if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfShadow_Kakariko_Burning'}) {
                                    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfShadow_IsCompleted_Exp'}) {
                                        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfSpirit_IsCompleted_Exp'}) {
                                            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'AllSage_IsAfter_Step01_01_Exp'}) {
                                                if !Player_Event.EventQueryPlayerIsChild() {

                                                    call Check_int({'Value': 13})

                                                } else {

                                                    call Check_int({'Value': 12})

                                                }
                                            } else
                                            if !Player_Event.EventQueryPlayerIsChild() {

                                                call Check_int({'Value': 11})

                                            } else {

                                                call Check_int({'Value': 8})

                                            }
                                        } else
                                        if !Player_Event.EventQueryPlayerIsChild() {

                                            call Check_int({'Value': 10})

                                        } else {

                                            call Check_int({'Value': 8})

                                        }
                                    } else
                                    if !Player_Event.EventQueryPlayerIsChild() {

                                        call Check_int({'Value': 9})

                                    } else {

                                        call Check_int({'Value': 8})

                                    }
                                } else {

                                    call Check_int({'Value': 7})

                                }
                            } else {

                                call Check_int({'Value': 6})

                            }
                        } else
                        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.Npc_Kokiri_Saria_Child_SacredForestMeadow_PlayOcarina_InFront_Event45', 'Index': -1}) {

                            call Check_int({'Value': 5})

                        } else {

                            call Check_int({'Value': 4})

                        }
                    } else {

                        call Check_int({'Value': 3})

                    }
                } else {

                    call Check_int({'Value': 2})

                }
            } else {

                call Check_int({'Value': 1})

            }
        } else {

            call Check_int({'Value': 0})

        }
    }
}
