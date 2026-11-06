-------- EventFlow: Dm_StaffCredit_0007 --------

Actor: UISystemActor
entrypoint: None()
actions: ['EventEventFadeIn', 'EventTriggerDisplayStaffRollEndNext', 'EventWaitInputTheEndNext', 'EventWaitDisplayStaffRollEndNext']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventTransition', 'EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventTriggerPlayScarecrowSongForEnding', 'EventTriggerStopPlay']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventSoundRequestDucking', 'EventSoundReleaseDucking']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void InsideGanonCastle_Dungeon_BossDie_2() {
    UISystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': True, 'Length': 0, 'Color': 0})
    UISystemActor.EventWaitDisplayStaffRollEndNext({'WaitFrame': 1200, 'IsWaitEnd': True})
    UISystemActor.EventTriggerDisplayStaffRollEndNext()
    EventSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})

    fork {
        UISystemActor.EventWaitInputTheEndNext({'IsWaitEnd': True})
    } {
        GameSystemActor.EventTriggerPlayScarecrowSongForEnding()
    }

    SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'Dm:OcarinaPlayingミュート（エンディングカカシ演奏用）', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 2})
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 2, 'EventName': 'Dm_StaffCredit_0010'})
    SoundSystemActor.EventSoundReleaseDucking({'DuckingName': 'Dm:OcarinaPlayingミュート（エンディングカカシ演奏用）', 'DuckingName2': '', 'DuckingName3': '', 'IsImmediately': False, 'IsClearRefCount': False})
    GameSystemActor.EventTriggerStopPlay()
}
