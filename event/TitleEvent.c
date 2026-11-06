-------- EventFlow: TitleEvent --------

Actor: EventSystemActor
entrypoint: None()
actions: ['EventTransition']
queries: ['EventQueryIsEventSkipedMostRecent']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerStopInGameBgm', 'EventTriggerSoundRequestIgnoreSkipDucking']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryRandomChoice4']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void Title_Loop() {
    SoundSystemActor.EventTriggerStopInGameBgm({'CommandLife': 0, 'IsImmediateOnAutoOff': False, 'IsForceFadeTime': False, 'WithPlayableEvent': True, 'FadeType': 0, 'WaitingResumeInGameBgm': False})
    Event22:
    SoundSystemActor.EventTriggerSoundRequestIgnoreSkipDucking()
    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Dm_Title_0005'})
    if EventSystemActor.EventQueryIsEventSkipedMostRecent() {
        switch GameSystemActor.EventQueryRandomChoice4() {
          case 0:
            SoundSystemActor.EventTriggerSoundRequestIgnoreSkipDucking()
            EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Dm_Title_0045'})
            if EventSystemActor.EventQueryIsEventSkipedMostRecent() {
                SoundSystemActor.EventTriggerSoundRequestIgnoreSkipDucking()
                EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Dm_Title_0065'})
                if EventSystemActor.EventQueryIsEventSkipedMostRecent() {
                    SoundSystemActor.EventTriggerSoundRequestIgnoreSkipDucking()
                    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Dm_Title_0055'})
                    if EventSystemActor.EventQueryIsEventSkipedMostRecent() {
                        goto Event22
                    }
                }
            }
          case 1:
            SoundSystemActor.EventTriggerSoundRequestIgnoreSkipDucking()
            EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Dm_Title_0045'})
            if EventSystemActor.EventQueryIsEventSkipedMostRecent() {
                SoundSystemActor.EventTriggerSoundRequestIgnoreSkipDucking()
                EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Dm_Title_0055'})
                if EventSystemActor.EventQueryIsEventSkipedMostRecent() {
                    SoundSystemActor.EventTriggerSoundRequestIgnoreSkipDucking()
                    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Dm_Title_0095'})
                    if EventSystemActor.EventQueryIsEventSkipedMostRecent() {
                        goto Event22
                    }
                }
            }
          case 2:
            SoundSystemActor.EventTriggerSoundRequestIgnoreSkipDucking()
            EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Dm_Title_0055'})
            if EventSystemActor.EventQueryIsEventSkipedMostRecent() {
                SoundSystemActor.EventTriggerSoundRequestIgnoreSkipDucking()
                EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Dm_Title_0075'})
                if EventSystemActor.EventQueryIsEventSkipedMostRecent() {
                    SoundSystemActor.EventTriggerSoundRequestIgnoreSkipDucking()
                    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Dm_Title_0095'})
                    if EventSystemActor.EventQueryIsEventSkipedMostRecent() {
                        goto Event22
                    }
                }
            }
          case 3:
            SoundSystemActor.EventTriggerSoundRequestIgnoreSkipDucking()
            EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Dm_Title_0045'})
            if EventSystemActor.EventQueryIsEventSkipedMostRecent() {
                SoundSystemActor.EventTriggerSoundRequestIgnoreSkipDucking()
                EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Dm_Title_0075'})
                if EventSystemActor.EventQueryIsEventSkipedMostRecent() {
                    SoundSystemActor.EventTriggerSoundRequestIgnoreSkipDucking()
                    EventSystemActor.EventTransition({'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0, 'EventName': 'Dm_Title_0095'})
                    if EventSystemActor.EventQueryIsEventSkipedMostRecent() {
                        goto Event22
                    }
                }
            }
        }
    }
}
