-------- EventFlow: ActionGuide --------

Actor: UISystemActor
entrypoint: None()
actions: ['EventOpenActionGuideScreen', 'EventTriggerNoticeActionGuideScreenClosable', 'EventCloseActionGuideScreen', 'EventTriggerRequestOpenActionGuide', 'EventTriggerSetCurrentMenuCategory', 'EventTriggerRequestOpenActionGuideTutorial']
queries: ['EventQueryHaveOpenedActionGuide', 'EventQueryIsOpenActionWindow', 'EventQueryIsOpenActionWindowFromGameData', 'EventQueryGetActionGuidePattern']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataInt', 'EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: PouchSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryCheckPouchContentCategory', 'EventQueryCheckPouchContentCategoryFromGameData']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait', 'EventTransition']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void OpenActionGuideSceen() {
    if UISystemActor.EventQueryHaveOpenedActionGuide({'ActionGuideType': 'ActionGuideType'}) {
        Event40:
        switch UISystemActor.EventQueryGetActionGuidePattern({'ActionGuideType': 'ActionGuideType'}) {
          case 0:
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
            UISystemActor.EventOpenActionGuideScreen({'IsWaitEnd': False, 'ActionGuideType': 'ActionGuideType'})
            EventSystemActor.EventWait({'Frames': 60, 'IsWaitEnd': True})
            UISystemActor.EventTriggerNoticeActionGuideScreenClosable()
            UISystemActor.EventCloseActionGuideScreen({'IsWaitEnd': True})
          case 1:
            UISystemActor.EventTriggerRequestOpenActionGuide({'ActionGuideType': 'ActionGuideType'})
          case 2:
            UISystemActor.EventTriggerRequestOpenActionGuideTutorial({'ActionGuideType': 'ActionGuideType'})
        }
    }
}

void OpenActionGuideSceenForce() {
    goto Event40
}

void ActionGuide() {
    switch PouchSystemActor.EventQueryCheckPouchContentCategory({'ActorName': 'ActorName'}) {
      case [0, 3, 4]:
        if !UISystemActor.EventQueryIsOpenActionWindow({'ActorName': 'ActorName', 'ActionGuideType': 52})
        && !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'UI_IsNeedOpenPlusMenuEquipActionGuide'})
        && GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'UI_GetWeaponShieldArmorNum', 'Value': 2, 'Index': -1}) in [1, 2] {

            call OpenActionGuideSceenForce({'ActionGuideType': 52})

            UISystemActor.EventTriggerSetCurrentMenuCategory({'MenuCategory': 3})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'UI_IsNeedOpenPlusMenuEquipActionGuide', 'Value': False})
        }
      case [1, 5]:
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'UI_IsNeedOpenPlusMenuItemActionGuide'}) {
            switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'UI_GetAssignableItemNum', 'Index': -1, 'Value': 2}) {
              case 1:

                call OpenActionGuideSceen({'ActionGuideType': 51})

                UISystemActor.EventTriggerSetCurrentMenuCategory({'MenuCategory': 4})
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'UI_IsNeedOpenPlusMenuItemActionGuide', 'Value': False})
              case 2:
                Event22:
                if GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'UI_GetAssignableItemNum', 'Index': -1, 'Value': 3}) in [1, 2]
                && !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'UI_IsNeedOpenShortCutActionGuide', 'Index': -1}) {

                    call OpenActionGuideSceen({'ActionGuideType': 16})

                    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'UI_IsNeedOpenShortCutActionGuide', 'Index': -1, 'Value': False})
                }
            }
        } else
        goto Event22
      case 6:
        if !UISystemActor.EventQueryIsOpenActionWindow({'ActorName': 'ActorName', 'ActionGuideType': 61}) {

            call OpenActionGuideSceen({'ActionGuideType': 61})

        }
      case 9:
        if !UISystemActor.EventQueryIsOpenActionWindow({'ActorName': 'ActorName', 'ActionGuideType': 44})
        && !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'UI_IsNeedOpenPlusMenuHeadActionGuide'}) {

            call OpenActionGuideSceenForce({'ActionGuideType': 62})

            UISystemActor.EventTriggerSetCurrentMenuCategory({'MenuCategory': 3})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'UI_IsNeedOpenPlusMenuHeadActionGuide', 'Value': False})
        }
      case 10:
        if !UISystemActor.EventQueryIsOpenActionWindow({'ActorName': 'ActorName', 'ActionGuideType': 45})
        && !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'UI_IsNeedOpenPlusMenuBootActionGuide'}) {

            call OpenActionGuideSceenForce({'ActionGuideType': 63})

            UISystemActor.EventTriggerSetCurrentMenuCategory({'MenuCategory': 3})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'UI_IsNeedOpenPlusMenuBootActionGuide', 'Value': False})
        }
    }
}

void ActionGuideForShop() {
    switch PouchSystemActor.EventQueryCheckPouchContentCategoryFromGameData({'GameData': 'Shop_SelectItemName'}) {
      case [0, 3, 4]:
        if !UISystemActor.EventQueryIsOpenActionWindowFromGameData({'GameData': 'Shop_SelectItemName', 'ActionGuideType': 52})
        && !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'UI_IsNeedOpenPlusMenuEquipActionGuide'})
        && GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'UI_GetWeaponShieldArmorNum', 'Value': 2, 'Index': -1}) in [1, 2] {
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})

            call OpenActionGuideSceenForce({'ActionGuideType': 52})

            UISystemActor.EventTriggerSetCurrentMenuCategory({'MenuCategory': 3})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'UI_IsNeedOpenPlusMenuEquipActionGuide', 'Value': False})
        }
      case [1, 5]:
        if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'UI_IsNeedOpenPlusMenuItemActionGuide'}) {
            switch GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'UI_GetAssignableItemNum', 'Index': -1, 'Value': 2}) {
              case 1:
                if UISystemActor.EventQueryHaveOpenedActionGuide({'ActionGuideType': 51}) {
                    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
                }

                call OpenActionGuideSceen({'ActionGuideType': 51})

                UISystemActor.EventTriggerSetCurrentMenuCategory({'MenuCategory': 4})
                GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'UI_IsNeedOpenPlusMenuItemActionGuide', 'Value': False})
              case 2:
                Event38:
                if GameDataActor.EventQueryIsGameDataInt({'GameDataName': 'UI_GetAssignableItemNum', 'Index': -1, 'Value': 3}) in [1, 2]
                && !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'UI_IsNeedOpenShortCutActionGuide', 'Index': -1}) {
                    if UISystemActor.EventQueryHaveOpenedActionGuide({'ActionGuideType': 16}) {
                        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
                    }

                    call OpenActionGuideSceen({'ActionGuideType': 16})

                    GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'UI_IsNeedOpenShortCutActionGuide', 'Index': -1, 'Value': False})
                }
            }
        } else
        goto Event38
      case 9:
        if !UISystemActor.EventQueryIsOpenActionWindowFromGameData({'GameData': 'Shop_SelectItemName', 'ActionGuideType': 44})
        && !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'UI_IsNeedOpenPlusMenuHeadActionGuide'}) {
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})

            call OpenActionGuideSceenForce({'ActionGuideType': 62})

            UISystemActor.EventTriggerSetCurrentMenuCategory({'MenuCategory': 3})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'UI_IsNeedOpenPlusMenuHeadActionGuide', 'Value': False})
        }
      case 10:
        if !UISystemActor.EventQueryIsOpenActionWindowFromGameData({'GameData': 'Shop_SelectItemName', 'ActionGuideType': 45})
        && !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'UI_IsNeedOpenPlusMenuBootActionGuide'}) {
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})

            call OpenActionGuideSceenForce({'ActionGuideType': 63})

            UISystemActor.EventTriggerSetCurrentMenuCategory({'MenuCategory': 3})
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'GameDataName': 'UI_IsNeedOpenPlusMenuHeadActionGuide', 'Value': False})
        }
    }
}

void OpenActionGuideSceenForOcarina() {

    call OpenActionGuideSceen({'ActionGuideType': 8})

    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'ActionGuide_IsRequestOcarina', 'Index': -1}) {
        EventSystemActor.EventTransition({'EventName': 'Dm_SY_Ocarina', 'IsWaitEnd': True, 'SpecialEventActionType': 1, 'FadeInTypeEventEnd': 0})
        GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'ActionGuide_IsRequestOcarina', 'Value': False, 'Index': -1})
    }
}
