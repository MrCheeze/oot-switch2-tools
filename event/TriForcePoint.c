-------- EventFlow: TriForcePoint --------

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait', 'EventTriggerRequestAutoSave']
queries: ['EventQueryIsRecommendedMelody', 'EventQueryFairyFountainSelectSpecialAbility', 'EventQueryMelodyTypeForNormal']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerSoundReadRiddle']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool', 'EventTriggerAddOrSubGameDataInt']
queries: ['EventQueryIsGameDataBool', 'EventQueryIsGameDataBoolExp']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventTransition', 'EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: UISystemActor
entrypoint: None()
actions: ['EventTriggerSetDisplayHeartGauge', 'EventWaitHeartGaugeStable']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: ['EventTriggerHealLifeMax', 'EventTriggerPlayerHealMPMax', 'EventPlayerPlayASForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventExecuteProgressChallengeStep']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventCamera
entrypoint: None()
actions: ['EventTriggerCameraSavePoint', 'EventMoveToTargetPosCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventTalk', 'EventNaviRequestBallonMessage']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: EventWorldManagerController
entrypoint: None()
actions: ['EventTriggerSetDemoPaletteForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void Demo_FairyFountain_Power() {
    switchcall Sub_PlayOcarinaSequence_FairyFountain({'SpecialAbility': 1}) {
      case 0x6efc0a00:
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Dm_FairyFountain_Power'})
        Event16:

        call Check_MeetFirst()


        call Check_Complete()

        GameSystemActor.EventTriggerRequestAutoSave()
    }
}

void Sub_PlayOcarinaSequence_FairyFountain() {
    EventCamera.EventTriggerCameraSavePoint()

    call Dm_SY_Ocarina.PlayOcarinaSequence({'MelodyType': 0})

    switch GameSystemActor.EventQueryMelodyTypeForNormal() {
      case [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12]:
        if !GameSystemActor.EventQueryIsRecommendedMelody() {
            switch GameSystemActor.EventQueryFairyFountainSelectSpecialAbility({'SpecialAbility': 'SpecialAbility'}) {
              case [0, 1, 3, 4, 5, 6]:
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'IsGet.Item_DinFire'}) {
                    Event26:

                    fork {
                        EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': True, 'PrevDemoPaletteName': 'Dm_SY_Ocarina_CorrectCam', 'Frames': 0, 'CurrDemoPaletteName': 'Dm_SY_Ocarina_CorrectCam'})
                    } {
                        SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 0})
                    }

                    return 0x6efc0a00
                } else {

                    fork {

                        call Common_Camera_Pln.CameraDoF_Event_Normal()

                    } {
                        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player_Event', 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'AtVector': [0.0, 0.5, 0.0], 'MoveTotargetPosType': 1, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'PosVector': [4.0, 3.0, 4.0], 'CameraCollisionMode': 0, 'IsEnableRevertFast': False})
                        EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player_Event', 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'AtVector': [0.0, 0.5, 0.0], 'MoveTotargetPosType': 1, 'MoveTime': 240, 'IsWaitEnd': False, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'PosVector': [4.5, 3.5, 4.5], 'CameraCollisionMode': 0, 'IsEnableRevertFast': False})
                    }

                    Player_Event.EventPlayerPlayASForFlowchart({'ASCommand': 'EvtWait', 'IsWaitEnd': False, 'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ClothWarpMode': 0})
                    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 120})

                    call InitTalk.InitTalk_NaviPlayerSide_MoveWait({'IsLookAtPlayer': False, 'IsLookAtNavi': False})

                    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Get_StoneOfFire_IsCompleted_Exp'}) {
                        Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_FairyFountain_Power:Talk_00', 'MaintainPerformanceState': 0})
                        Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_FairyFountain_Power:Talk_01', 'MaintainPerformanceState': 0})
                        Event116:
                        return 0x6ffc0b93
                    } else {
                        Npc_Navi.EventTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Dm_FairyFountain_Power:Talk_02', 'MaintainPerformanceState': 0})
                        goto Event116
                    }
                }
              case 2:
                goto Event26
            }
        } else {
            goto Event116
        }
      case 13:
        goto Event116
    }
}

void Demo_FairyFountain_Din() {
    switchcall Sub_PlayOcarinaSequence_FairyFountain({'SpecialAbility': 2}) {
      case 0x6efc0a00:
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Dm_FairyFountain_Din'})
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'Meet_GreatFairy', 'StepName': 'GoToHyruleCastle', 'IsWaitEnd': True, 'IsIgnoreChallengeProgressUI': False, 'IsIgnoreCompletedChallenge': True})
        Npc_Navi.EventNaviRequestBallonMessage({'Index': 96})
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'Npc_Kaepora_DeathMountainTrail_TurnCheck1st', 'Index': -1}) {
            goto Event16
        } else {
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_Kaepora_DeathMountainTrail_Turn'})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'Npc_Kaepora_DeathMountainTrail_TurnCheck1st'})
            goto Event16
        }
    }
}

void Demo_FairyFountain_Frore() {
    switchcall Sub_PlayOcarinaSequence_FairyFountain({'SpecialAbility': 3}) {
      case 0x6efc0a00:
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Dm_FairyFountain_Frore'})
        goto Event16
    }
}

void Demo_FairyFountain_Wisdom() {
    switchcall Sub_PlayOcarinaSequence_FairyFountain({'SpecialAbility': 4}) {
      case 0x6efc0a00:
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Dm_FairyFountain_Wisdom'})
        goto Event16
    }
}

void Demo_FairyFountain_Nayru() {
    switchcall Sub_PlayOcarinaSequence_FairyFountain({'SpecialAbility': 5}) {
      case 0x6efc0a00:
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Dm_FairyFountain_Nayru'})
        goto Event16
    }
}

void Demo_FairyFountain_Courage() {
    switchcall Sub_PlayOcarinaSequence_FairyFountain({'SpecialAbility': 6}) {
      case 0x6efc0a00:
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Dm_FairyFountain_Courage'})
        goto Event16
    }
}

void Recover() {
    UISystemActor.EventTriggerSetDisplayHeartGauge({'IsDisplayHeartGauge': True})
    Player_Event.EventTriggerHealLifeMax()
    Player_Event.EventTriggerPlayerHealMPMax()
    UISystemActor.EventWaitHeartGaugeStable({'IsWaitEnd': True})

    call NaviChat.NaviEmotionChange({'EmotionType': 1})

}

void Check_MeetFirst() {
    if GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GreatFairy_MeetFirst'}) {
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'GreatFairy_MeetFirst', 'Index': -1, 'Value': True})
    }
}

void Check_Complete() {
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'IsGet.Item_DinFire', 'Index': -1})
    && !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'IsGet.Item_FairyBless_MP'})
    && !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'IsGet.Item_FaroreWind', 'Index': -1})
    && !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'IsGet.Item_FairyBless_MPDouble', 'Index': -1})
    && !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'IsGet.Item_NayruLove', 'Index': -1})
    && !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'IsGet.Item_FairyBless_DefenseDouble', 'Index': -1}) {
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'Meet_GreatFairy', 'StepName': 'Complete', 'IsWaitEnd': True, 'IsIgnoreCompletedChallenge': True, 'IsIgnoreChallengeProgressUI': True})
    }
}

void RemainNumber() {
    GameDataActor.EventTriggerAddOrSubGameDataInt({'Index': -1, 'GameDataName': 'Meet_GreatFairy_RemainNumber', 'Value': -1})
    GameSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
}
