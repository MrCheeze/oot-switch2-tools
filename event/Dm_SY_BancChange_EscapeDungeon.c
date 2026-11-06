-------- EventFlow: Dm_SY_BancChange_EscapeDungeon --------

Actor: EventSystemActor
entrypoint: None()
actions: ['EventTransition', 'EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventExecuteProgressChallengeStep', 'EventTriggerShowChallengeProgressUI']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool', 'EventTriggerAddOrSubGameDataInt']
queries: ['EventQueryIsGameDataBoolExp', 'EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventPlayerMove', 'EventPlayerWarpToTargetPosAndRot', 'EventPlayerWait', 'EventTriggerPlayerLookAtObject', 'EventTriggerPlayerRequestLookAtTheFrontLock']
queries: ['EventQueryPlayerIsChild']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventReserveBancChange', 'EventTriggerBancRequestBeforehandLoad', 'EventTraverseAroundAndWaitCreateActor', 'EventTriggerRequestOwnedHorseWarpToSafePositionIfInWater']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventCamera
entrypoint: None()
actions: ['EventTriggerSendReserveCameraResetMessageToPlayerCamera', 'EventMoveToTargetPosCamera', 'EventChangeTemporarilyToPlayerCamera', 'EventTriggerSendKeepStateMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: UISystemActor
entrypoint: None()
actions: ['EventEventFadeIn', 'EventEventFadeOut']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventWarpToTargetActor', 'EventNaviFollowPlayer', 'EventNaviWarpToPlayerHomePosition']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: Npc_Kokiri_Mido_Child
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventWorldManagerController
entrypoint: None()
actions: ['EventTrigger_SetTime']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: DevelopEventSystemActor
entrypoint: None()
actions: ['EventDemoProductSupportComment']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerSoundStartSceneBgm', 'EventTriggerStartInGameBgm', 'EventTriggerStopInGameBgm']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Zora_Ruto_Child_002
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_JabuJabu
entrypoint: None()
actions: ['EventTriggerPhysicsSetEnableClothParallel']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Land_Kokiri_DekuTree_A_04
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventDoNothing']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void Get_StoneOfWater_Clear() {
    Player_Event.EventTriggerParticipateEvent()
    Npc_JabuJabu.EventTriggerPhysicsSetEnableClothParallel({'IsEnable': True})
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Dm_ZoraFountain_0020'})
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_ZoraFountain_0030', 'FadeInTypeEventEnd': 2})
    Npc_JabuJabu.EventTriggerPhysicsSetEnableClothParallel({'IsEnable': False})
    EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 0.0, 'CameraResetPolicy': 0})
    ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'IsWaitEnd': True, 'StepName': 'Complete', 'ChallengeName': 'Get_StoneOfWater'})
    ChallengeSystemActor.EventTriggerShowChallengeProgressUI({'ChallengeName': 'DoorOfTime', 'IsFirstStep': False})

    call DoorOfTime.DoorOfTime_CheckStoneNum()


    call SubEvent_GetEponaSong.GetEponaSong_StepCheck()


    call NaviChat.NaviEmotionChange({'EmotionType': 1})

}

void Get_StoneOfWater_LeaveFromJabuJabuBelly() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Get_StoneOfWater_IsCompleted_Exp'}) {
        Npc_Zora_Ruto_Child_002.EventTriggerParticipateEvent()
        switchcall Common_Dungeon_WarpFromBossArea.DungeonWarp_Choices_Basic({'DungeonWarp_00': 'EventFlowMsg/Get_StoneOfForest:DungeonWarp_00_Second', 'DungeonWarp_01': 'EventFlowMsg/Get_StoneOfForest:DungeonWarp_01_Second', 'DungeonWarp_03': 'EventFlowMsg/Get_StoneOfForest:DungeonWarp_03'}) {
          case 3013883440:
            EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_InsideJabu_Jabu_0060', 'FadeInTypeEventEnd': 2})
            EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 0.0, 'CameraResetPolicy': 0})
            GameSystemActor.EventReserveBancChange({'IsWaitEnd': True, 'NextPosition': [0.0, 0.0, 0.0], 'NextStartRot': [0.0, 0.0, 0.0], 'IsStartOnEvent': False, 'NextBanc': 'ZoraFountain_Child', 'BootEventName': 'Dm_ZoraFountain_0040', 'NextStartPos': 'EntrancePos', 'EventStarterName': '', 'IsItemWarp': False, 'FadePattern': 2})
        }
    } else {
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_InsideJabu_Jabu_0050', 'FadeInTypeEventEnd': 2})
    }
}

void BossArea_WarpIn() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Get_StoneOfForest_IsCompleted_Exp'}) {
        switchcall Common_Dungeon_WarpFromBossArea.DungeonWarp_Choices_Basic({'DungeonWarp_00': 'EventFlowMsg/Get_StoneOfForest:DungeonWarp_00_Second', 'DungeonWarp_01': 'EventFlowMsg/Get_StoneOfForest:DungeonWarp_01_Second', 'DungeonWarp_03': 'EventFlowMsg/Get_StoneOfForest:DungeonWarp_03'}) {
          case 3013883440:
            Event6:
            EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_Deku_0010', 'FadeInTypeEventEnd': 2})
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Get_StoneOfForest_IsCompleted_Exp'}) {
                EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 0.0, 'CameraResetPolicy': 0})
                GameSystemActor.EventReserveBancChange({'IsWaitEnd': True, 'NextPosition': [0.0, 0.0, 0.0], 'NextStartRot': [0.0, 0.0, 0.0], 'IsStartOnEvent': False, 'NextBanc': 'KokiriForest_Child', 'NextStartPos': 'WarpFromDekuTree_2', 'BootEventName': 'Dm_Kokiri_0170', 'EventStarterName': '', 'IsItemWarp': False, 'FadePattern': 2})
            } else {
                GameSystemActor.EventReserveBancChange({'IsWaitEnd': True, 'NextPosition': [0.0, 0.0, 0.0], 'NextStartRot': [0.0, 0.0, 0.0], 'IsStartOnEvent': False, 'NextBanc': 'KokiriForest_Child', 'BootEventName': 'KokiriForest_WarpFromInsideTheDekuTree', 'NextStartPos': 'WarpFromDekuTree', 'EventStarterName': '', 'IsItemWarp': False, 'FadePattern': 2})
            }
        }
    } else {
        switchcall Common_Dungeon_WarpFromBossArea.DungeonWarp_Choices_Sequence({'DungeonWarp_00': 'EventFlowMsg/Get_StoneOfForest:DungeonWarp_00', 'DungeonWarp_01': 'EventFlowMsg/Get_StoneOfForest:DungeonWarp_01', 'DungeonWarp_03': 'EventFlowMsg/Get_StoneOfForest:DungeonWarp_03'}) {
          case 3013883440:
            goto Event6
        }
    }
}

void Warp_Kokiri() {
    Npc_Kokiri_Mido_Child.EventTriggerParticipateEvent()
    Land_Kokiri_DekuTree_A_04.EventTriggerParticipateEvent()
    Land_Kokiri_DekuTree_A_04.EventDoNothing({'IsWaitEnd': False})
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_Kokiri_0080', 'FadeInTypeEventEnd': 2})
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 2, 'EventName': 'Dm_Kokiri_0095'})
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_Kokiri_0090', 'FadeInTypeEventEnd': 2})
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_Kokiri_0130', 'FadeInTypeEventEnd': 2})
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_Kokiri_0140', 'FadeInTypeEventEnd': 2})
    EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': '', 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'PosVectorSetType': 0, 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'AtVectorSetType': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 0, 'IsWaitEnd': True, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'PosVector': [41.869998931884766, 114.87000274658203, -0.8999999761581421], 'AtVector': [38.400001525878906, 114.5, 0.6200000047683716], 'TargetFovy': 50.0, 'IsEnableRevertFast': False})
    Player_Event.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'UseDemoWait': True, 'ASCommand': 'EvtWait', 'YAngle': -65.0, 'Position': [40.303001403808594, 113.5530014038086, -0.21199999749660492], 'ClothWarpMode': 0, 'EnableInAir': False})
    Player_Event.EventTriggerPlayerRequestLookAtTheFrontLock({'IsImmediate': False})
    Npc_Navi.EventNaviWarpToPlayerHomePosition({'IsWaitEnd': True, 'IsNearOffset': False, 'Type': -1, 'IsDisguisedPlayerPos': False, 'Target': 0, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'OffsetBase': 0, 'PosOffset': [0.0, 0.0, 0.0], 'YAngle': 0.0})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})

    fork {
        UISystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    } {
        Player_Event.EventPlayerMove({'IsWaitEnd': True, 'DecSpeedDistance': 0.0, 'WorldPosX': 0.0, 'WorldPosY': 0.0, 'WorldPosZ': 0.0, 'MoveSpeed': 0.6000000238418579, 'RidableDesiredGear': 0, 'RidableHasToDecelerateNearGoal': False, 'IsSheathed': False, 'IsInertiaMove': False, 'WorldPos': [38.419151306152344, 113.17019653320312, 0.6160110235214233], 'ApplySlowMove': False, 'IsContinueMoveAnimeAfterFinish': False})
    } {
        Npc_Navi.EventNaviFollowPlayer({'IsWaitEnd': True, 'IsNearOffset': False, 'Speed': -1.0, 'offset': [0.0, 0.0, 0.0], 'IsHomePosition': True, 'OffsetType': -1})
    }

    ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsWaitEnd': True, 'StepName': 'Complete', 'ChallengeName': 'Get_StoneOfForest', 'IsIgnoreCompletedChallenge': True, 'IsIgnoreChallengeProgressUI': False})
    ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsWaitEnd': True, 'ChallengeName': 'Goto_HyruleCastle', 'StepName': 'Step01', 'IsIgnoreCompletedChallenge': True, 'IsIgnoreChallengeProgressUI': False})

    call NaviChat.NaviEmotionChange({'EmotionType': 3})

    GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'NaviHint_Disp_FieldHint_01', 'Value': False})
    EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetPolicy': 0, 'CameraResetInterpolateCountScale': 4.0})
}

void SageOfFire_ClearEvent() {
    Player_Event.EventTriggerParticipateEvent()
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfFire_IsCompleted_Exp'}) {
        switchcall Common_Dungeon_WarpFromBossArea.DungeonWarp_Choices_Basic({'DungeonWarp_00': 'EventFlowMsg/SageOfFire:DungeonWarp_04', 'DungeonWarp_01': 'EventFlowMsg/SageOfFire:DungeonWarp_05', 'DungeonWarp_03': 'EventFlowMsg/SageOfFire:DungeonWarp_03'}) {
          case 3013883440:
            EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_FireTemple_0030', 'FadeInTypeEventEnd': 2})
            GameSystemActor.EventReserveBancChange({'NextBanc': 'DeathMountainCrater_Adult', 'NextStartPos': 'FireBolero', 'IsWaitEnd': True, 'NextPosition': [0.0, 0.0, 0.0], 'NextStartRot': [0.0, 0.0, 0.0], 'IsStartOnEvent': False, 'BootEventName': 'Demo_SageOfFire_Arrive_FireBolero', 'EventStarterName': '', 'IsItemWarp': False, 'FadePattern': 2})
        }
    } else {
        switchcall Common_Dungeon_WarpFromBossArea.DungeonWarp_Choices_Basic({'DungeonWarp_00': 'EventFlowMsg/SageOfFire:DungeonWarp_04', 'DungeonWarp_01': 'EventFlowMsg/SageOfFire:DungeonWarp_05', 'DungeonWarp_03': 'EventFlowMsg/SageOfFire:DungeonWarp_03'}) {
          case 3013883440:
            EventWorldManagerController.EventTrigger_SetTime({'TimeHour': 12, 'TimeMin': 0})
            EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_FireTemple_0030', 'FadeInTypeEventEnd': 2})
            GameSystemActor.EventReserveBancChange({'IsWaitEnd': True, 'NextPosition': [0.0, 0.0, 0.0], 'NextStartRot': [0.0, 0.0, 0.0], 'IsStartOnEvent': False, 'BootEventName': 'FireTemple_SageOfFire_Kakariko', 'NextBanc': 'KakarikoVillage_Adult', 'EventStarterName': '', 'FadePattern': 2, 'IsItemWarp': False, 'NextStartPos': 'KakarikoVillage_Entrance'})
        }
    }
}

void FireTemple_SageOfFire_Kakariko() {
    GameSystemActor.EventTriggerBancRequestBeforehandLoad({'BancPath': 'Work/Banc/Scene/SageRoom/SageRoom.bcett.json', 'IsTargetRetry': False})
    Player_Event.EventTriggerParticipateEvent()
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 2, 'EventName': 'Dm_Kakariko_0025'})
    GameSystemActor.EventReserveBancChange({'IsWaitEnd': True, 'NextBanc': 'SageRoom', 'NextStartPos': '', 'NextPosition': [0.0, 0.0, 0.0], 'NextStartRot': [0.0, 0.0, 0.0], 'IsStartOnEvent': False, 'BootEventName': 'FireTemple_SageOfFire_SageRoom', 'EventStarterName': '', 'FadePattern': 2, 'IsItemWarp': False})
}

void ForestTemple_SageOfForest_EscapeFromTemple() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfForest_IsCompleted_Exp'}) {
        switchcall Common_Dungeon_WarpFromBossArea.DungeonWarp_Choices_Basic({'DungeonWarp_00': 'EventFlowMsg/SageOfForest:DungeonWarp_00_Second', 'DungeonWarp_01': 'EventFlowMsg/SageOfForest:DungeonWarp_01_Second', 'DungeonWarp_03': 'EventFlowMsg/SageOfForest:DungeonWarp_03'}) {
          case 3013883440:
            Event197:
            EventSystemActor.EventTransition({'EventName': 'Dm_ForestTemple_0020', 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 2})
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfForest_IsCompleted_Exp'}) {
                EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 0.0, 'CameraResetPolicy': 0})
                GameSystemActor.EventReserveBancChange({'IsWaitEnd': True, 'IsStartOnEvent': False, 'NextBanc': 'KokiriForest_Adult', 'NextStartPos': 'WarpFromForestTemple', 'NextPosition': [143.0, 3.4200000762939453, 138.38999938964844], 'NextStartRot': [19.239999771118164, 118.37999725341797, 0.0], 'EventStarterName': '', 'BootEventName': 'Dm_Kokiri_0175', 'IsItemWarp': False, 'FadePattern': 2})
            } else {
                GameSystemActor.EventReserveBancChange({'IsWaitEnd': True, 'NextBanc': 'SageRoom', 'NextStartPos': '', 'NextPosition': [0.0, 0.0, 0.0], 'NextStartRot': [0.0, 0.0, 0.0], 'BootEventName': 'ForestTemple_SageOfForest_SageRoom', 'IsStartOnEvent': False, 'EventStarterName': '', 'IsItemWarp': False, 'FadePattern': 2})
            }
        }
    } else {
        switchcall Common_Dungeon_WarpFromBossArea.DungeonWarp_Choices_Basic({'DungeonWarp_00': 'EventFlowMsg/SageOfForest:DungeonWarp_00_Second', 'DungeonWarp_01': 'EventFlowMsg/SageOfForest:DungeonWarp_01_Second', 'DungeonWarp_03': 'EventFlowMsg/SageOfForest:DungeonWarp_03'}) {
          case 3013883440:
            EventWorldManagerController.EventTrigger_SetTime({'TimeHour': 12, 'TimeMin': 0})
            goto Event197
        }
    }
}

void ForestTemple_SageOfForest_EscapeFromTempleOutSide() {
    SoundSystemActor.EventTriggerStopInGameBgm({'WithPlayableEvent': False, 'IsForceFadeTime': False, 'FadeType': 0, 'IsImmediateOnAutoOff': True, 'CommandLife': 2, 'WaitingResumeInGameBgm': False})
    UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': True, 'Color': 1, 'Length': 0})
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_Kokiri_0158', 'FadeInTypeEventEnd': 2})
    EventSystemActor.EventTransition({'EventName': 'Dm_Kokiri_0160', 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 2})
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_Kokiri_0162', 'FadeInTypeEventEnd': 2})
    Player_Event.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': False, 'YAngle': -90.0, 'UseDemoWait': True, 'ASCommand': 'EvtWait', 'Position': [26.333999633789062, 111.7750015258789, 1.1519999504089355], 'ClothWarpMode': 0, 'EnableInAir': False})
    EventCamera.EventMoveToTargetPosCamera({'CameraCollisionLookAtActorOffset': [0.0, 3.0, 0.0], 'IsWaitEnd': True, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'Actor1ActorName': 'Player_Event', 'Actor2ActorName': 'Player_Event', 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'PosVector': [25.81800079345703, 113.15499877929688, -1.2100000381469727], 'IsAtVectorReferenceActorPosOnce': False, 'AtVector': [21.225000381469727, 113.05999755859375, -0.9300000071525574], 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})

    call NaviEventCommon.NaviWarp_PlayerHomePos_Choice({'IsLookAtPlayer': False, 'IsLeft': True})

    Player_Event.EventTriggerPlayerRequestLookAtTheFrontLock({'IsImmediate': False})
    GameSystemActor.EventTraverseAroundAndWaitCreateActor({'IsWaitEnd': True, 'IsFastLoad': True})
    EventSystemActor.EventWait({'Frames': 20, 'IsWaitEnd': True})
    UISystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 2})

    fork {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 120})
        Player_Event.EventPlayerMove({'WorldPosY': 0.0, 'WorldPosZ': 0.0, 'IsWaitEnd': True, 'WorldPosX': 0.0, 'RidableDesiredGear': 0, 'RidableHasToDecelerateNearGoal': False, 'IsSheathed': False, 'IsInertiaMove': False, 'ApplySlowMove': False, 'DecSpeedDistance': 1.2999999523162842, 'WorldPos': [21.570999145507812, 111.37799835205078, -0.3630000054836273], 'MoveSpeed': 0.75, 'IsContinueMoveAnimeAfterFinish': False})
    } {
        Npc_Navi.EventNaviFollowPlayer({'IsWaitEnd': True, 'Speed': -1.0, 'offset': [0.0, 0.0, 0.0], 'IsNearOffset': True, 'IsHomePosition': True, 'OffsetType': -1})
    } {
        EventCamera.EventMoveToTargetPosCamera({'CameraCollisionLookAtActorOffset': [0.0, 3.0, 0.0], 'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'Actor1ActorName': 'Player_Event', 'Actor2ActorName': 'Player_Event', 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'MoveTime': 240, 'IsAtVectorReferenceActorPosOnce': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'PosVector': [24.5, 112.61399841308594, -1.0], 'AtVector': [20.799999237060547, 112.69999694824219, -0.9200000166893005], 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } {
        SoundSystemActor.EventTriggerStartInGameBgm({'IsFadeIn': False, 'WithPlayableEvent': False, 'ResumeDelay': 0})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})

    call NaviChat.NaviEmotionChange_Return()


    call NaviEventCommon.InitTalk_NaviPlayerFront({'IsLookAtNavi': True})

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})

    call NaviEventCommon.EventTalk_Navi_WithPlayerTalk({'MessageId': 'EventFlowMsg/SageOfForest:NaviRepeat_00_01'})

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
    GameDataActor.EventTriggerAddOrSubGameDataInt({'GameDataName': 'AllSage_AwakeSageCount', 'Value': -1, 'Index': -1})
    ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'SageOfForest', 'StepName': 'Complete', 'IsWaitEnd': True, 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False})
    ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsWaitEnd': True, 'ChallengeName': 'AllSage', 'StepName': 'Step01_00', 'IsIgnoreChallengeProgressUI': True, 'IsIgnoreCompletedChallenge': True})
    ChallengeSystemActor.EventTriggerShowChallengeProgressUI({'ChallengeName': 'AllSage', 'IsFirstStep': False})
    EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetPolicy': 0, 'CameraResetInterpolateCountScale': 2.0})
}

void ForestTemple_SageOfForest_SageRoom() {
    GameSystemActor.EventTriggerBancRequestBeforehandLoad({'BancPath': 'Work/Banc/Scene/KokiriForest/KokiriForest_Adult.bcett.json', 'IsTargetRetry': False})
    Player_Event.EventTriggerParticipateEvent()
    EventSystemActor.EventTransition({'EventName': 'Dm_Awake_Forest', 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0})
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_Awake_Forest_Get', 'FadeInTypeEventEnd': 2})
    GameSystemActor.EventReserveBancChange({'IsWaitEnd': True, 'IsStartOnEvent': False, 'BootEventName': 'ForestTemple_SageOfForest_EscapeFromTempleOutSide', 'NextBanc': 'KokiriForest_Adult', 'NextStartPos': 'WarpFromForestTemple', 'NextPosition': [143.0, 3.4200000762939453, 138.38999938964844], 'NextStartRot': [19.239999771118164, 118.37999725341797, 0.0], 'FadePattern': 2, 'EventStarterName': '', 'IsItemWarp': False})
}

void SageOfFire_Arrive_FireBolero() {
    SoundSystemActor.EventTriggerStopInGameBgm({'FadeType': 0, 'WithPlayableEvent': False, 'CommandLife': 0, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False, 'WaitingResumeInGameBgm': False})
    Player_Event.EventTriggerParticipateEvent()
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 2, 'EventName': 'Dm_DeathMtCrater_0010'})
    if GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfFire_IsCompleted_Exp'}) {
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'SageOfFire', 'IsIgnoreCompletedChallenge': True, 'IsIgnoreChallengeProgressUI': False, 'IsWaitEnd': True, 'StepName': 'Complete'})
        ChallengeSystemActor.EventTriggerShowChallengeProgressUI({'ChallengeName': 'AllSage', 'IsFirstStep': False})
        GameDataActor.EventTriggerAddOrSubGameDataInt({'GameDataName': 'AllSage_AwakeSageCount', 'Value': -1, 'Index': -1})
        EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetPolicy': 0, 'CameraResetInterpolateCountScale': 2.0})
        if GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'AllSage_IsAfter_Step01_00_02_Exp'})
        && !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'AllSage_IsAfter_Step01_Exp'}) {
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfWater_IsCompleted_Exp'}) {
                ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsWaitEnd': True, 'ChallengeName': 'AllSage', 'IsIgnoreChallengeProgressUI': True, 'IsIgnoreCompletedChallenge': True, 'StepName': 'Step01_00_02'})
            } else {
                ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsWaitEnd': True, 'ChallengeName': 'AllSage', 'IsIgnoreChallengeProgressUI': True, 'IsIgnoreCompletedChallenge': True, 'StepName': 'Step01_00_01'})
            }
        }
    }
}

void FireTemple_SageOfFire_SageRoom() {
    GameSystemActor.EventTriggerBancRequestBeforehandLoad({'BancPath': 'Work/Banc/Scene/DeathMountainCrater/DeathMountainCrater_Adult.bcett.json', 'IsTargetRetry': False})
    Player_Event.EventTriggerParticipateEvent()
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_Awake_Fire', 'FadeInTypeEventEnd': 0})
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 2, 'EventName': 'Dm_Awake_Fire_Get'})
    GameSystemActor.EventReserveBancChange({'NextBanc': 'DeathMountainCrater_Adult', 'NextStartPos': 'FireBolero', 'IsWaitEnd': True, 'NextPosition': [0.0, 0.0, 0.0], 'NextStartRot': [0.0, 0.0, 0.0], 'IsStartOnEvent': False, 'BootEventName': 'Demo_SageOfFire_Arrive_FireBolero', 'EventStarterName': '', 'IsItemWarp': False, 'FadePattern': 2})
}

void SageOfWater_ClearEvent() {
    Player_Event.EventTriggerParticipateEvent()
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfWater_IsCompleted_Exp'}) {
        switchcall Common_Dungeon_WarpFromBossArea.DungeonWarp_Choices_Basic({'DungeonWarp_00': 'EventFlowMsg/SageOfWater:DungeonWarp_00_Second', 'DungeonWarp_01': 'EventFlowMsg/SageOfWater:DungeonWarp_01_Second', 'DungeonWarp_03': 'EventFlowMsg/SageOfWater:DungeonWarp_03'}) {
          case 3013883440:
            Event62:
            EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_WaterTemple_0040', 'FadeInTypeEventEnd': 2})
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfWater_IsCompleted_Exp'}) {
                GameSystemActor.EventReserveBancChange({'IsWaitEnd': True, 'NextPosition': [0.0, 0.0, 0.0], 'NextStartRot': [0.0, 0.0, 0.0], 'IsStartOnEvent': False, 'NextStartPos': 'WaterSerenade', 'NextBanc': 'HyruleField_Adult', 'EventStarterName': '', 'BootEventName': 'Dm_LakeHrl_0035', 'IsItemWarp': False, 'FadePattern': 2})
            } else {
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'SageOfWater_EscapeFromWaterTemple', 'Index': -1, 'Value': True})
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'MiniGame_Fishing_Rainy', 'Value': False})
                GameSystemActor.EventReserveBancChange({'IsWaitEnd': True, 'NextBanc': 'SageRoom', 'NextStartPos': '', 'NextPosition': [0.0, 0.0, 0.0], 'NextStartRot': [0.0, 0.0, 0.0], 'IsStartOnEvent': False, 'BootEventName': 'SageOfWater_SageRoom', 'EventStarterName': '', 'IsItemWarp': False, 'FadePattern': 2})
            }
        }
    } else {
        switchcall Common_Dungeon_WarpFromBossArea.DungeonWarp_Choices_Basic({'DungeonWarp_00': 'EventFlowMsg/SageOfWater:DungeonWarp_00_Second', 'DungeonWarp_01': 'EventFlowMsg/SageOfWater:DungeonWarp_01_Second', 'DungeonWarp_03': 'EventFlowMsg/SageOfWater:DungeonWarp_03'}) {
          case 3013883440:
            goto Event62
        }
    }
}

void SageOfWater_Arrive_WaterSerenade() {
    if GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfWater_IsCompleted_Exp'}) {
        EventWorldManagerController.EventTrigger_SetTime({'TimeHour': 5, 'TimeMin': 30})
        Player_Event.EventTriggerParticipateEvent()
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'SageOfWater_Icedelete', 'Index': -1, 'Value': True})
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_LakeHrl_0020', 'FadeInTypeEventEnd': 1})

        fork {
            Player_Event.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'UseDemoWait': True, 'ASCommand': 'EvtWait', 'Position': [-188.4499969482422, 131.35000610351562, 510.75], 'YAngle': 60.0, 'ClothWarpMode': 0, 'EnableInAir': False})
        } {
            EventCamera.EventMoveToTargetPosCamera({'CameraCollisionLookAtActorOffset': [0.0, 3.0, 0.0], 'IsWaitEnd': True, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'CameraCollisionMode': 1, 'Actor1ActorName': 'Player_Event', 'Actor2ActorName': 'Player_Event', 'Actor1InstanceName': '', 'Actor2InstanceName': '', 'IsIgnorePosVectorReferenceActorRot': False, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'TargetFovy': 50.0, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActor': 0, 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'MoveTime': 0, 'IsAtVectorReferenceActorPosOnce': False, 'EnableCameraAlpha': True, 'PosVector': [-192.22300720214844, 133.47999572753906, 508.42999267578125], 'AtVector': [-188.4250030517578, 133.10000610351562, 510.80999755859375], 'IsEnableRevertFast': False})
        }

        GameSystemActor.EventTriggerRequestOwnedHorseWarpToSafePositionIfInWater({'Position': [-110.91000366210938, 131.82000732421875, 445.2699890136719]})
        Npc_Navi.EventNaviWarpToPlayerHomePosition({'IsWaitEnd': True, 'IsNearOffset': False, 'Type': -1, 'IsDisguisedPlayerPos': False, 'Target': 0, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'OffsetBase': 0, 'PosOffset': [0.0, 0.0, 0.0], 'YAngle': 0.0})
        EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'AfterKeepEndInterpolateCountScale': 1.0, 'ChangeToManualModeAfterEvent': False, 'KeepManualModeFrame': 120.0, 'IsKeepWithRelativePos': False})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'Npc_Zora_011_IsRedIcejustafter', 'Value': False})
        GameDataActor.EventTriggerAddOrSubGameDataInt({'GameDataName': 'AllSage_AwakeSageCount', 'Value': -1, 'Index': -1})
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsIgnoreCompletedChallenge': True, 'IsIgnoreChallengeProgressUI': False, 'IsWaitEnd': True, 'StepName': 'Complete', 'ChallengeName': 'SageOfWater'})
        ChallengeSystemActor.EventTriggerShowChallengeProgressUI({'ChallengeName': 'AllSage', 'IsFirstStep': False})

        call AllSage.GoneSheik_And_Meet()

        if GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'AllSage_IsAfter_Step01_00_02_Exp'})
        && !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'AllSage_IsAfter_Step01_Exp'}) {
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfFire_IsCompleted_Exp'}) {
                ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsWaitEnd': True, 'ChallengeName': 'AllSage', 'IsIgnoreChallengeProgressUI': True, 'IsIgnoreCompletedChallenge': True, 'StepName': 'Step01_00_02'})
            } else {
                ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsWaitEnd': True, 'ChallengeName': 'AllSage', 'IsIgnoreChallengeProgressUI': True, 'IsIgnoreCompletedChallenge': True, 'StepName': 'Step01_00_01'})
            }
        }
    }
}

void SageOfWater_SageRoom() {
    GameSystemActor.EventTriggerBancRequestBeforehandLoad({'BancPath': 'Work/Banc/Scene/HyruleField/HyruleField_Adult.bcett.json', 'IsTargetRetry': False})
    Player_Event.EventTriggerParticipateEvent()
    EventSystemActor.EventTransition({'EventName': 'Dm_Awake_Water', 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0})
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_Awake_Water_Get', 'FadeInTypeEventEnd': 2})
    GameSystemActor.EventReserveBancChange({'IsWaitEnd': True, 'NextPosition': [0.0, 0.0, 0.0], 'NextStartRot': [0.0, 0.0, 0.0], 'IsStartOnEvent': False, 'NextStartPos': 'WaterSerenade', 'BootEventName': 'Demo_SageOfWater_Arrive_WaterSerenade', 'NextBanc': 'HyruleField_Adult', 'EventStarterName': '', 'IsItemWarp': False, 'FadePattern': 2})
}

void SageOfSpirit_Clear() {
    Player_Event.EventTriggerParticipateEvent()
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfSpirit_IsCompleted_Exp'}) {
        switchcall Common_Dungeon_WarpFromBossArea.DungeonWarp_Choices_SpiritTemple({'DungeonWarp_00': 'EventFlowMsg/SageOfSpirit:DungeonWarp_06', 'DungeonWarp_01': 'EventFlowMsg/SageOfSpirit:DungeonWarp_07', 'DungeonWarp_03': 'EventFlowMsg/SageOfSpirit:DungeonWarp_05'}) {
          case 3013883440:
            Event140:
            EventSystemActor.EventTransition({'EventName': 'Dm_SpiritTemple_0040', 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 2})
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfSpirit_IsCompleted_Exp'}) {
                EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 0.0, 'CameraResetPolicy': 0})
                GameSystemActor.EventReserveBancChange({'NextBanc': 'DesertColossus_Adult', 'NextStartRot': [0.0, 0.0, 0.0], 'IsStartOnEvent': False, 'IsWaitEnd': True, 'BootEventName': 'SpiritTemple_Level_Room_34_Escape', 'NextStartPos': 'SpiritRequiem', 'NextPosition': [0.0, 0.0, 0.0], 'EventStarterName': '', 'IsItemWarp': False, 'FadePattern': 2})
            } else {
                GameSystemActor.EventReserveBancChange({'NextStartPos': '', 'NextStartRot': [0.0, 0.0, 0.0], 'IsStartOnEvent': False, 'IsWaitEnd': True, 'NextBanc': 'SageRoom', 'BootEventName': 'SpiritTemple_SageOfSpirit_SageRoom', 'EventStarterName': '', 'NextPosition': [0.0, 0.0, 0.0], 'IsItemWarp': False, 'FadePattern': 2})
            }
        }
    } else {
        switchcall Common_Dungeon_WarpFromBossArea.DungeonWarp_Choices_SpiritTemple({'DungeonWarp_00': 'EventFlowMsg/SageOfSpirit:DungeonWarp_06', 'DungeonWarp_01': 'EventFlowMsg/SageOfSpirit:DungeonWarp_07', 'DungeonWarp_03': 'EventFlowMsg/SageOfSpirit:DungeonWarp_05'}) {
          case 3013883440:
            EventWorldManagerController.EventTrigger_SetTime({'TimeHour': 12, 'TimeMin': 0})
            goto Event140
        }
    }
}

void SpiritTemple_Level_Room_34_Escape() {
    Player_Event.EventTriggerParticipateEvent()
    EventSystemActor.EventTransition({'EventName': 'Dm_DesertColossus_0040', 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 2})
    EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetPolicy': 0, 'CameraResetInterpolateCountScale': 2.0})
}

void SpiritTemple_SageOfSpirit_SageRoom() {
    GameSystemActor.EventTriggerBancRequestBeforehandLoad({'BancPath': 'Work/Banc/Scene/DesertColossus/DesertColossus_Adult.bcett.json', 'IsTargetRetry': False})
    Player_Event.EventTriggerParticipateEvent()
    EventSystemActor.EventTransition({'EventName': 'Dm_Awake_Spirit', 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0})
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 2, 'EventName': 'Dm_Awake_Spirit_Get'})
    ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'SageOfSpirit', 'IsIgnoreCompletedChallenge': True, 'IsWaitEnd': True, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'Complete'})
    ChallengeSystemActor.EventTriggerShowChallengeProgressUI({'ChallengeName': 'AllSage', 'IsFirstStep': False})
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'SageRoom_Allsage_LastSage', 'FadeInTypeEventEnd': 2})
    GameDataActor.EventTriggerAddOrSubGameDataInt({'GameDataName': 'AllSage_AwakeSageCount', 'Value': -1, 'Index': -1})
    GameSystemActor.EventReserveBancChange({'NextBanc': 'DesertColossus_Adult', 'NextStartRot': [0.0, 0.0, 0.0], 'IsStartOnEvent': False, 'IsWaitEnd': True, 'BootEventName': 'SpiritTemple_Level_Room_34_Escape', 'NextStartPos': 'SpiritRequiem', 'NextPosition': [0.0, 0.0, 0.0], 'EventStarterName': '', 'IsItemWarp': False, 'FadePattern': 2})
}

void ShadowTemple_Warp_Graveyard() {
    Player_Event.EventTriggerParticipateEvent()
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Dm_Graveyard_0030'})
    if GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfShadow_IsCompleted_Exp'}) {
        GameDataActor.EventTriggerAddOrSubGameDataInt({'GameDataName': 'AllSage_AwakeSageCount', 'Value': -1, 'Index': -1})
        ChallengeSystemActor.EventTriggerShowChallengeProgressUI({'ChallengeName': 'AllSage', 'IsFirstStep': False})
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsWaitEnd': True, 'IsIgnoreChallengeProgressUI': False, 'StepName': 'Complete', 'ChallengeName': 'SageOfShadow', 'IsIgnoreCompletedChallenge': False})
        if GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'AllSage_IsAfter_Step01_00_02_Exp'}) {
            ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsWaitEnd': True, 'ChallengeName': 'AllSage', 'IsIgnoreChallengeProgressUI': True, 'IsIgnoreCompletedChallenge': True, 'StepName': 'Step01_00_03'})
        }
    }
}

void ShadowTemple_BossArea_WarpIn() {
    Player_Event.EventTriggerParticipateEvent()
    DevelopEventSystemActor.EventDemoProductSupportComment({'DispTime': 1, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'IsWaitEnd': False, 'Text1': '演出等は仮のイベントです'})
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfShadow_IsCompleted_Exp'}) {
        switchcall Common_Dungeon_WarpFromBossArea.DungeonWarp_Choices_Basic({'DungeonWarp_00': 'EventFlowMsg/SageOfShadow:DungeonWarp_00_Second', 'DungeonWarp_01': 'EventFlowMsg/SageOfShadow:DungeonWarp_01_Second', 'DungeonWarp_03': 'EventFlowMsg/SageOfShadow:DungeonWarp_03'}) {
          case 3013883440:
            Event109:
            EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_ShadowTemple_0020', 'FadeInTypeEventEnd': 2})
            if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'SageOfShadow_IsCompleted_Exp'}) {
                EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 0.0, 'CameraResetPolicy': 0})
                GameSystemActor.EventReserveBancChange({'IsWaitEnd': True, 'NextPosition': [0.0, 0.0, 0.0], 'NextStartRot': [0.0, 0.0, 0.0], 'IsStartOnEvent': False, 'NextBanc': 'Graveyard_Adult', 'NextStartPos': 'ShadowNocturne', 'BootEventName': 'ShadowTemple_Warp_Graveyard', 'EventStarterName': '', 'IsItemWarp': False, 'FadePattern': 2})
            } else {
                GameSystemActor.EventReserveBancChange({'IsWaitEnd': True, 'NextPosition': [0.0, 0.0, 0.0], 'NextStartRot': [0.0, 0.0, 0.0], 'IsStartOnEvent': False, 'NextBanc': 'SageRoom', 'NextStartPos': '', 'BootEventName': 'ShadowTemple_SageOfShadow_SageRoom', 'EventStarterName': '', 'IsItemWarp': False, 'FadePattern': 2})
            }
        }
    } else {
        switchcall Common_Dungeon_WarpFromBossArea.DungeonWarp_Choices_Basic({'DungeonWarp_00': 'EventFlowMsg/SageOfShadow:DungeonWarp_00_Second', 'DungeonWarp_01': 'EventFlowMsg/SageOfShadow:DungeonWarp_01_Second', 'DungeonWarp_03': 'EventFlowMsg/SageOfShadow:DungeonWarp_03'}) {
          case 3013883440:
            EventWorldManagerController.EventTrigger_SetTime({'TimeHour': 12, 'TimeMin': 0})
            goto Event109
        }
    }
}

void ShadowTemple_Warp_ChamberOfSages() {
    GameSystemActor.EventTriggerBancRequestBeforehandLoad({'BancPath': 'Work/Banc/Scene/Graveyard/Graveyard_Adult.bcett.json', 'IsTargetRetry': False})
    Player_Event.EventTriggerParticipateEvent()
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_Awake_Shadow', 'FadeInTypeEventEnd': 0})
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_Awake_Shadow_Get', 'FadeInTypeEventEnd': 2})
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'SageRoom_Allsage_LastSage', 'FadeInTypeEventEnd': 2})
    GameSystemActor.EventReserveBancChange({'IsWaitEnd': True, 'NextPosition': [0.0, 0.0, 0.0], 'NextStartRot': [0.0, 0.0, 0.0], 'IsStartOnEvent': False, 'NextBanc': 'Graveyard_Adult', 'NextStartPos': 'ShadowNocturne', 'BootEventName': 'ShadowTemple_Warp_Graveyard', 'EventStarterName': '', 'IsItemWarp': False, 'FadePattern': 2})
}

void Get_StoneOfFire_EscapeDungeon() {
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Get_StoneOfFire_IsAfter_EscapeDungeon_Exp'}) {
        switchcall Common_Dungeon_WarpFromBossArea.DungeonWarp_Choices_Basic({'DungeonWarp_00': 'EventFlowMsg/Get_StoneOfForest:DungeonWarp_00_Second', 'DungeonWarp_01': 'EventFlowMsg/Get_StoneOfForest:DungeonWarp_01_Second', 'DungeonWarp_03': 'EventFlowMsg/Get_StoneOfForest:DungeonWarp_03'}) {
          case 3013883440:
            Event56:
            EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 2, 'EventName': 'Dm_DodongoCave_0030'})
            if !Player_Event.EventQueryPlayerIsChild() {
                GameSystemActor.EventReserveBancChange({'NextStartRot': [0.0, 0.0, 0.0], 'IsWaitEnd': True, 'BootEventName': 'Get_StoneOfFire_Complete', 'NextBanc': 'DeathMountainTrail_Child', 'IsStartOnEvent': False, 'NextStartPos': 'DodongoCavernFront', 'NextPosition': [0.0, 0.0, 0.0], 'EventStarterName': '', 'FadePattern': 2, 'IsItemWarp': False})
            } else {
                GameSystemActor.EventReserveBancChange({'NextStartRot': [0.0, 0.0, 0.0], 'IsWaitEnd': True, 'BootEventName': 'Get_StoneOfFire_Complete', 'IsStartOnEvent': False, 'NextBanc': 'DeathMountainTrail_Adult', 'NextStartPos': 'DodongoCavernFront', 'NextPosition': [0.0, 0.0, 0.0], 'EventStarterName': '', 'FadePattern': 2, 'IsItemWarp': False})
            }
        }
    } else {
        switchcall Common_Dungeon_WarpFromBossArea.DungeonWarp_Choices_Basic({'DungeonWarp_00': 'EventFlowMsg/Get_StoneOfFire:DungeonWarp_00_00', 'DungeonWarp_03': 'EventFlowMsg/Get_StoneOfFire:DungeonWarp_03', 'DungeonWarp_01': 'EventFlowMsg/Get_StoneOfFire:DungeonWarp_01_Second'}) {
          case 3013883440:
            EventWorldManagerController.EventTrigger_SetTime({'TimeHour': 12, 'TimeMin': 0})
            goto Event56
        }
    }
}

void Get_StoneOfFire_Complete() {
    Player_Event.EventTriggerParticipateEvent()
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Get_StoneOfFire_IsCompleted_Exp'}) {
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 2, 'EventName': 'Dm_DeathMtTrail_0027'})
    } else {
        EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 0.0, 'CameraResetPolicy': 0})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Get_StoneOfFire_TektiteDelete', 'Index': -1, 'Value': True})
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_DeathMtTrail_0020', 'FadeInTypeEventEnd': 0})
        EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'EventName': 'Dm_DeathMtTrail_0025', 'FadeInTypeEventEnd': 2})
        Player_Event.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'UseDemoWait': True, 'ASCommand': 'EvtWait', 'Position': [-46.0099983215332, 119.12999725341797, 26.59000015258789], 'ClothWarpMode': 0, 'EnableInAir': False, 'YAngle': 28.0})
        Npc_Navi.EventWarpToTargetActor({'TargetActorKind': 1, 'OffsetBase': 1, 'ActorName': 'Player_Event', 'IsWaitEnd': True, 'InstanceName': '', 'YAngle': 0.0, 'PositionOffset': [-0.4099999964237213, 1.350000023841858, 0.0], 'ClothWarpMode': -1})
        Player_Event.EventTriggerPlayerLookAtObject({'Target': 3, 'ActorName': 'Npc_Navi', 'TurnFaceControlType': 1, 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'PosOffset': [0.0, 0.0, 0.0], 'Direction': 0.0})

        call Get_StoneOfFire_NaviRepeat()

        ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsWaitEnd': True, 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'Get_StoneOfFire', 'StepName': 'Complete'})

        call DoorOfTime.DoorOfTime_CheckStoneNum()


        call SubEvent_GetEponaSong.GetEponaSong_StepCheck()

        if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Meet_GreatFairy_IsAfter_GoToTopOfMountain_Exp'}) {
            ChallengeSystemActor.EventTriggerShowChallengeProgressUI({'ChallengeName': 'DoorOfTime', 'IsFirstStep': False})
        } else {
            ChallengeSystemActor.EventExecuteProgressChallengeStep({'IsWaitEnd': True, 'IsIgnoreCompletedChallenge': False, 'IsIgnoreChallengeProgressUI': False, 'ChallengeName': 'Meet_GreatFairy', 'StepName': 'GoToTopOfMountain'})
            ChallengeSystemActor.EventTriggerShowChallengeProgressUI({'ChallengeName': 'Meet_GreatFairy', 'IsFirstStep': True})
        }
    }
}

void Get_StoneOfFire_NaviRepeat() {
    Player_Event.EventPlayerWait({'IsWaitEnd': True})
    EventCamera.EventChangeTemporarilyToPlayerCamera({'IsWaitEnd': False, 'EnableControle': False})
    EventSystemActor.EventWait({'Frames': 16, 'IsWaitEnd': True})

    call NaviEventCommon.NaviWarp_PlayerHomePos({'IsLookAtPlayer': False})

    UISystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    SoundSystemActor.EventTriggerStartInGameBgm({'IsFadeIn': False, 'WithPlayableEvent': False, 'ResumeDelay': 0})
    SoundSystemActor.EventTriggerSoundStartSceneBgm({'StartType': 2, 'BgmName': 'BGM_HyruleField'})

    call NaviEventCommon.InitTalk_NaviPlayerFront({'IsLookAtNavi': True})

    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Get_StoneOfWater_IsCompleted_Exp'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'IsGet.Item_DinFire', 'Index': -1}) {

            call NaviEventCommon.EventTalk_Navi_WithPlayerTalk({'MessageId': 'EventFlowMsg/Get_StoneOfFire:NaviRepeat_01_01'})


            call NaviChat.NaviEmotionChange({'EmotionType': 1})

        } else {

            call NaviEventCommon.EventTalk_Navi_WithPlayerTalk({'MessageId': 'EventFlowMsg/Get_StoneOfFire:NaviRepeat_01_00'})

        }
    } else
    if !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'Get_StoneOfWater_IsAfter_Ready_Exp'}) {
        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'IsGet.Item_DinFire', 'Index': -1}) {

            call NaviEventCommon.EventTalk_Navi_WithPlayerTalk({'MessageId': 'EventFlowMsg/Get_StoneOfFire:NaviRepeat_00_02'})

        } else {

            call NaviEventCommon.EventTalk_Navi_WithPlayerTalk({'MessageId': 'EventFlowMsg/Get_StoneOfFire:NaviRepeat_01_00'})

        }
    } else
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'IsGet.Item_DinFire', 'Index': -1}) {

        call NaviEventCommon.EventTalk_Navi_WithPlayerTalk({'MessageId': 'EventFlowMsg/Get_StoneOfFire:NaviRepeat_00_01'})

    } else {

        call NaviEventCommon.EventTalk_Navi_WithPlayerTalk({'MessageId': 'EventFlowMsg/Get_StoneOfFire:NaviRepeat_00_00'})

    }
}
