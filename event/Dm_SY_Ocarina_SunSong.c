-------- EventFlow: Dm_SY_Ocarina_SunSong --------

Actor: EventWorldManagerController
entrypoint: None()
actions: ['EventTrigger_SetTime', 'EventTrigger_RequestVisualOnlyTime']
queries: ['EventQueryTimeDivision', 'EventQueryIsCurrentTimeInSpecifiedTimeRange']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventAIScheduleNPCForceWarpToCurrentAnchor', 'EventCloseMessageDialog', 'EventTriggerSetIsTimeElapsedToNightByOcarinaSunSong']
queries: ['EventQueryIsSunSongMakesMiddleTimeFromCurrentBanc']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerWait']
queries: ['EventQueryPlayerIsChild']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: UISystemActor
entrypoint: None()
actions: ['EventEventFadeOut', 'EventEventFadeIn']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: PostProcessingActor
entrypoint: None()
actions: ['EventSetAdvancedDoFForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerSoundSetSunSongInfo']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool', 'EventQueryIsGameDataBoolExp']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: ChallengeSystemActor
entrypoint: None()
actions: ['EventExecuteProgressChallengeStep']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void SunSong() {
    if !EventWorldManagerController.EventQueryTimeDivision() {

        fork {
            UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 0})
            PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'StartDistance': 0.0, 'EndDistance': 0.0, 'StartFNumber': 0.0, 'EndFNumber': 0.0, 'StartBluarLevel': 0.0, 'EndBluarLevel': 0.0, 'IsPrimaryApply': False, 'IsAutoFocalDist': False, 'RequiredFrame': 0, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
        } {
            GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})
        }

        if !GameSystemActor.EventQueryIsSunSongMakesMiddleTimeFromCurrentBanc() {
            EventWorldManagerController.EventTrigger_SetTime({'TimeMin': 0, 'TimeHour': 0})
            EventWorldManagerController.EventTrigger_RequestVisualOnlyTime({'Hour': 19, 'LerpTime': 3.0, 'Sec': 0, 'Min': 30})
            Event31:
            SoundSystemActor.EventTriggerSoundSetSunSongInfo({'NextTimeDivision': 1})

            call Market_WarpNPC()

            GameSystemActor.EventAIScheduleNPCForceWarpToCurrentAnchor({'IsWaitEnd': True})
            Player_Event.EventPlayerWait({'IsWaitEnd': True})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
            UISystemActor.EventEventFadeIn({'IsWaitEnd': False, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 0})
        } else {
            EventWorldManagerController.EventTrigger_SetTime({'TimeMin': 0, 'TimeHour': 20})
            EventWorldManagerController.EventTrigger_RequestVisualOnlyTime({'Min': 45, 'Hour': 18, 'LerpTime': 4.0, 'Sec': 0})
            GameSystemActor.EventTriggerSetIsTimeElapsedToNightByOcarinaSunSong()
            goto Event31
        }
    } else {

        fork {
            UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Length': 0, 'Color': 1})
            PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'StartDistance': 0.0, 'EndDistance': 0.0, 'StartFNumber': 0.0, 'EndFNumber': 0.0, 'StartBluarLevel': 0.0, 'EndBluarLevel': 0.0, 'IsPrimaryApply': False, 'IsAutoFocalDist': False, 'RequiredFrame': 0, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
        } {
            GameSystemActor.EventCloseMessageDialog({'IsWaitEnd': True})
        }


        call MiniGame_DiggingHole()


        call GraveYard_DiggingHoleTour_UpdateFlag_Before()

        if !GameSystemActor.EventQueryIsSunSongMakesMiddleTimeFromCurrentBanc() {
            EventWorldManagerController.EventTrigger_SetTime({'TimeMin': 0, 'TimeHour': 12})
            EventWorldManagerController.EventTrigger_RequestVisualOnlyTime({'LerpTime': 3.0, 'Hour': 5, 'Min': 45, 'Sec': 0})
            Event30:
            SoundSystemActor.EventTriggerSoundSetSunSongInfo({'NextTimeDivision': 0})

            call Market_WarpNPC()


            call GraveYard_DiggingHoleTour_UpdateFlag_After()

            GameSystemActor.EventAIScheduleNPCForceWarpToCurrentAnchor({'IsWaitEnd': True})
            Player_Event.EventPlayerWait({'IsWaitEnd': True})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
            UISystemActor.EventEventFadeIn({'IsWaitEnd': False, 'IsNoPlayAnime': False, 'Color': 1, 'Length': 0})
        } else {
            EventWorldManagerController.EventTrigger_SetTime({'TimeMin': 0, 'TimeHour': 6})
            EventWorldManagerController.EventTrigger_RequestVisualOnlyTime({'LerpTime': 4.0, 'Hour': 5, 'Min': 0, 'Sec': 0})
            goto Event30
        }
    }
}

void GraveYard_DiggingHoleTour_UpdateFlag_Before() {
    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'GraveYard_Hylia_030_AISchedule_For_SongOfSun_Temporary'})
    EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
}

void GraveYard_DiggingHoleTour_UpdateFlag_After() {
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GraveYard_Hylia_030_AISchedule_For_SongOfSun_Temporary'}) {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'GraveYard_Hylia_030_AISchedule_For_SongOfSun', 'Value': True})
    } else {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'GraveYard_Hylia_030_AISchedule_For_SongOfSun', 'Value': False})
    }
    EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
}

void Market_WarpNPC() {
    if !Player_Event.EventQueryPlayerIsChild()
    && !GameDataActor.EventQueryIsGameDataBoolExp({'GameDataName': 'DoorOfTime_IsAfterStep03_AND_SageOfForest_NotCompleted_Exp'}) {
        if !EventWorldManagerController.EventQueryIsCurrentTimeInSpecifiedTimeRange({'StartTime': 8, 'EndTme': 20}) {
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Market_OneOfMemberAssembled', 'Value': True, 'Index': -1})
        } else {
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'Market_OneOfMemberAssembled', 'Index': -1, 'Value': False})
        }
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
    }
}

void MiniGame_DiggingHole() {
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'GraveYard_DiggingHoleTour_Start', 'Index': -1}) {
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': False, 'GameDataName': 'MiniGame_DiggingHole_SetDoPlate'})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'GraveYard_Hylia_Dampe_001_TourEnd_Use_SongOfSun', 'Value': True})
        GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'GraveYard_DiggingHoleTour_Start', 'Value': False})
        ChallengeSystemActor.EventExecuteProgressChallengeStep({'ChallengeName': 'MiniGame_DiggingHole', 'StepName': 'Wait', 'IsIgnoreChallengeProgressUI': True, 'IsWaitEnd': True, 'IsIgnoreCompletedChallenge': False})
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
    }
}
