-------- EventFlow: Dm_SY_Treasurebox --------

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait', 'EventTriggerRequestAutoSave', 'EventGetDungeonMap', 'EventGetDungeonCompass', 'EventGetDungeonBossKey', 'EventGetDungeonSmallKey', 'EventTriggerControllerRumble']
queries: ['EventQueryExistEventStarter']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: TreasureBox_EventStarter
entrypoint: None()
actions: ['EventTriggerTreasureBoxOpened', 'EventPlayAS', 'EventTriggerTBoxPushPoseMask', 'EventTriggerTBoxErasePauseMask', 'EventTriggerTBoxRequestCancelSleepActorHolderData', 'EventTriggerEmitXLink', 'EventTreasureBoxSetRigLightIntensityScale', 'EventTriggerTBoxRequestSleepActorHolderData']
queries: ['EventQueryTreasureBoxIsDungeonCommonItemInside', 'EventQueryTreasureBoxCheckActorName']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 1}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart', 'EventPlayerWarpToTargetActor']
queries: ['EventQueryPlayerIsChild']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveCameraAnimationInstructionsForFlowchart']
queries: ['EventQueryCheckIsCameraAnimeConflictCameraCollision']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventAS': '使用しない', 'ExceptionalBindType': 3, 'UseEventModelAnime': 'Work/Model/Event/Dm_SY_Treasurebox/Dm_SY_Treasurebox/workspace.pp__ModelProject.gyml'}

Actor: PouchSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryCanAddToPorch']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: PouchContentGuestPerformer
entrypoint: None()
actions: ['EventPlayAS', 'EventTriggerPlayerNoHit', 'EventTriggerModelBindForItemGetDemo', 'EventTriggerInvalidateShadow', 'EventTriggerSetModelLodManual']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 2}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerSoundControlBGM', 'EventTriggerSoundStartFanfare']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: UISystemActor
entrypoint: None()
actions: ['EventTriggerSetCurrentMenuCategory', 'EventTriggerRequestOpenPickUpWindow', 'EventEventFadeOut', 'EventTriggerSetDisplayBossKey']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventPlayAS', 'EventWarpToTargetActor']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'ExceptionalBindType': 3, 'UseEventModelAnime': 'Work/Model/Event/Dm_SY_Treasurebox/Dm_SY_Treasurebox_Npc_Navi/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_SY_Treasurebox_Navi.root.as'}

Actor: EventEffectEmitter
entrypoint: None()
actions: ['EventEffectStartGetItem', 'EventEffectStopGetItem']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameDataActor
entrypoint: None()
actions: []
queries: ['EventQueryIsBool']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[vibration]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[Treasurebox]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void Success() {

    call Success_({'ContentName': 'ContentName', 'IsMiniGame': False})

}

void Open() {
    TreasureBox_EventStarter.EventTreasureBoxSetRigLightIntensityScale({'FadeFrame': 0.0, 'IntensityScale': 0.0, 'IsWaitEnd': False})
    TreasureBox_EventStarter.EventTriggerTBoxPushPoseMask()
    EventSystemActor[Treasurebox].EventWait({'Frames': 1, 'IsWaitEnd': True})
    if !Player_Event.EventQueryPlayerIsChild() {
        TreasureBox_EventStarter.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_SY_Treasurebox_Obj_TBox_A_Open_Child'})
        TreasureBox_EventStarter.EventPlayAS({'ASName': 'FrontOpen', 'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    } else {
        TreasureBox_EventStarter.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_SY_Treasurebox_Obj_TBox_A_Open_Adult'})
        TreasureBox_EventStarter.EventPlayAS({'IsWaitEnd': True, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'ASName': 'FrontOpen_Adult'})
    }
}

void Success_PlayerPerform() {
    if !Player_Event.EventQueryPlayerIsChild() {

        fork {
            if !EventCamera.EventQueryCheckIsCameraAnimeConflictCameraCollision({'SceneName': 'C01-1', 'RootType': 2, 'CameraName': '', 'IsIgnoreRootRot': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'CheckInterval': 10, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0}) {
                if !EventCamera.EventQueryCheckIsCameraAnimeConflictCameraCollision({'SceneName': 'C01-2', 'RootType': 2, 'CameraName': '', 'IsIgnoreRootRot': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'CheckInterval': 10, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0}) {
                    EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'CameraName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': True, 'RootType': 2, 'TargetActorName': '', 'SceneName': 'C01-3'})
                } else {
                    EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'CameraName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': True, 'RootType': 2, 'TargetActorName': '', 'SceneName': 'C01-2'})
                }
            } else {
                EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'CameraName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': True, 'RootType': 2, 'TargetActorName': '', 'SceneName': 'C01-1'})
            }
        } {
            Player_Event.EventPlayerWarpToTargetActor({'IsWaitEnd': True, 'TargetActorKind': 0, 'InstanceName': '', 'UseDemoWait': True, 'YAngle': 180.0, 'ActorName': '', 'OffsetBase': 1, 'ASCommand': 'DemoOpenTreasureBox', 'PositionOffset': [0.0, 0.0, 0.9200000166893005]})
            Player_Event.EventPlayerPlayASForFlowchart({'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'KeepOneTimeAnm': False, 'UseAnmDriven': True, 'IsAllSlot': True, 'ASCommand': 'DemoOpenTreasureBox', 'ClothWarpMode': 0})
        } {

            call Process_Treasurebox({'ContentName': 'ContentName'})

        } {
            EventSystemActor[vibration].EventWait({'IsWaitEnd': True, 'Frames': 230})
            GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Middle_Don'})
            EventSystemActor[vibration].EventWait({'IsWaitEnd': True, 'Frames': 70})
            GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Middle_Short'})
            EventSystemActor[vibration].EventWait({'IsWaitEnd': True, 'Frames': 20})
            GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Small_Don'})
            EventSystemActor[vibration].EventWait({'IsWaitEnd': True, 'Frames': 20})
            GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Small_Piton'})
        }

    } else {

        fork {
            switch TreasureBox_EventStarter.EventQueryTreasureBoxCheckActorName({'ActorName': 'ContentName'}) {
              case [0, 1]:
                EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'CameraName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': True, 'RootType': 2, 'TargetActorName': '', 'SceneName': 'C02-4'})
              case [2, 3, 4, 5, 6, 7, 8, 99]:
                if !EventCamera.EventQueryCheckIsCameraAnimeConflictCameraCollision({'RootType': 2, 'CameraName': '', 'IsIgnoreRootRot': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'CheckInterval': 10, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'SceneName': 'C02-0'}) {
                    if !EventCamera.EventQueryCheckIsCameraAnimeConflictCameraCollision({'RootType': 2, 'CameraName': '', 'IsIgnoreRootRot': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'CheckInterval': 10, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'SceneName': 'C02-1'}) {
                        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'CameraName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': True, 'RootType': 2, 'TargetActorName': '', 'SceneName': 'C02-2'})
                    } else {
                        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'CameraName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': True, 'RootType': 2, 'TargetActorName': '', 'SceneName': 'C02-1'})
                    }
                } else {
                    EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'CameraName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': True, 'RootType': 2, 'TargetActorName': '', 'SceneName': 'C02-0'})
                }
            }
        } {
            Player_Event.EventPlayerWarpToTargetActor({'IsWaitEnd': True, 'TargetActorKind': 0, 'InstanceName': '', 'UseDemoWait': True, 'YAngle': 180.0, 'ActorName': '', 'OffsetBase': 1, 'PositionOffset': [0.0, 0.0, 0.8799999952316284], 'ASCommand': 'DemoOpenTreasureBox'})
            Player_Event.EventPlayerPlayASForFlowchart({'ForceFadeFrame': -1.0, 'IsWaitEnd': False, 'KeepOneTimeAnm': False, 'UseAnmDriven': True, 'IsAllSlot': True, 'ASCommand': 'DemoOpenTreasureBox', 'ClothWarpMode': 0})
        } {

            call Process_Treasurebox({'ContentName': 'ContentName'})

        } {
            EventSystemActor[vibration].EventWait({'IsWaitEnd': True, 'Frames': 230})
            GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Middle_Don'})
            EventSystemActor[vibration].EventWait({'IsWaitEnd': True, 'Frames': 110})
            GameSystemActor.EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Middle'})
        }

    }
}

void Success_Leave() {
    GameSystemActor.EventWait({'Frames': 1, 'IsWaitEnd': True})
    TreasureBox_EventStarter.EventTriggerTreasureBoxOpened()
    TreasureBox_EventStarter.EventTriggerTBoxErasePauseMask()
    switch TreasureBox_EventStarter.EventQueryTreasureBoxIsDungeonCommonItemInside({'ActorName': 'ContentName'}) {
      case 0:

        call ActionGuide.OpenActionGuideSceen({'ActionGuideType': 11})

        Event81:
        UISystemActor.EventTriggerSetCurrentMenuCategory({'MenuCategory': 2})
        Event8:
        GameSystemActor.EventTriggerRequestAutoSave()
        switch TreasureBox_EventStarter.EventQueryTreasureBoxCheckActorName({'ActorName': 'ContentName'}) {
          case [0, 1, 7, 8, 99]:
            Event96:
            if GameDataActor.EventQueryIsBool({'BoolValue': 'IsMiniGame'}) {
                EventEffectEmitter.EventEffectStopGetItem()
                TreasureBox_EventStarter.EventTriggerTBoxRequestSleepActorHolderData()
            }
          case [2, 3, 4, 5]:
            UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
            goto Event96
          case 6:
            UISystemActor.EventEventFadeOut({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 0})
            goto Event96
        }
      case 1:
        goto Event81
      case [2, 3, 4]:

        call Dm_SY_Get.CheckHeart({'ActorName': 'ContentName'})


        call ActionGuide.ActionGuide({'ActorName': 'ContentName'})

        goto Event8
    }
}

void Success_AddContent() {
    switch TreasureBox_EventStarter.EventQueryTreasureBoxIsDungeonCommonItemInside({'ActorName': 'ContentName'}) {
      case [0, 1, 2, 3]:

        call GetPouchContent.DisplayGetByActorName({'ActorName': 'ContentName'})

        switch TreasureBox_EventStarter.EventQueryTreasureBoxIsDungeonCommonItemInside({'ActorName': 'ContentName'}) {
          case 0:
            GameSystemActor.EventGetDungeonMap({'IsWaitEnd': True})
            Event21:
            UISystemActor.EventTriggerRequestOpenPickUpWindow({'ActorName': 'ContentName'})
          case 1:
            GameSystemActor.EventGetDungeonCompass({'IsWaitEnd': True})
            goto Event21
          case 2:
            GameSystemActor.EventGetDungeonBossKey({'IsWaitEnd': True})
            UISystemActor.EventTriggerSetDisplayBossKey({'IsDisplayBossKey': True})
            EventSystemActor.EventWait({'Frames': 50, 'IsWaitEnd': True})
            Event15:
            UISystemActor.EventTriggerRequestOpenPickUpWindow({'ActorName': 'ContentName'})
          case 3:
            GameSystemActor.EventGetDungeonSmallKey({'IsWaitEnd': True})
            goto Event15
          case 4:
            Event25:
            switch PouchSystemActor.EventQueryCanAddToPorch({'Actor': 'ContentName'}) {
              case [0, 1]:
                if !GameDataActor.EventQueryIsBool({'BoolValue': 'IsMiniGame'}) {

                    call GetPouchContent.GetPouchContentByActorNameForTreasureBox({'ActorName': 'ContentName'})

                } else {

                    call GetPouchContent.GetPouchContentByActorNameForShowPickUpWindow({'ActorName': 'ContentName'})

                    switch TreasureBox_EventStarter.EventQueryTreasureBoxCheckActorName({'ActorName': 'ContentName'}) {
                      case [0, 1, 2, 3, 4, 5, 6, 99]:
                        goto Event15
                      case [7, 8]:

                        call Dm_SY_Get.MPOpen()

                        goto Event15
                    }
                }
              case 2:

                call GetPouchContent.DisplayGetByActorName({'ActorName': 'ContentName'})

            }
        }
      case 4:
        goto Event25
    }
}

void DisplayContent() {
    TreasureBox_EventStarter.EventTriggerTBoxRequestCancelSleepActorHolderData()
    PouchContentGuestPerformer.EventTriggerSetModelLodManual({'LodLevel': 0})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 1})
    EventEffectEmitter.EventEffectStartGetItem({'ActorName': 'ContentName', 'GameDataName': '', 'IsBottleDemo': False})
}

void Item_Rotation() {

    call DisplayContent({'ContentName': 'ContentName'})

    PouchContentGuestPerformer.EventPlayAS({'ASName': 'Rotate_GetDemo', 'IsWaitEnd': False, 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False})
    PouchContentGuestPerformer.EventTriggerPlayerNoHit()
    PouchContentGuestPerformer.EventTriggerModelBindForItemGetDemo({'ActorName': 'Player_Event', 'InstanceName': '', 'BoneName': '', 'RotOffset': [0.0, 0.0, 0.0], 'TransOffset': [0.0, 0.0, 0.0]})
    PouchContentGuestPerformer.EventTriggerInvalidateShadow()
}

void Process_Treasurebox() {

    fork {
        EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 473})
        SoundSystemActor.EventTriggerSoundControlBGM({'ControlType': 1})

        call Item_Rotation({'ContentName': 'ContentName'})

    } {

        call Open()

    } {
        if !Player_Event.EventQueryPlayerIsChild() {
            Npc_Navi.EventWarpToTargetActor({'IsWaitEnd': True, 'OffsetBase': 1, 'InstanceName': '', 'TargetActorKind': 0, 'ActorName': '', 'PositionOffset': [0.10999999940395355, 1.0299999713897705, 1.309999942779541], 'ClothWarpMode': -1, 'YAngle': -200.51930236816406})
            Npc_Navi.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsWaitEnd': False, 'ASName': 'Dm_SY_Treasurebox_Navi-A-0', 'IsAnimeDriven': True, 'ForceFadeInFrame': -1.0})
        } else {
            Npc_Navi.EventWarpToTargetActor({'IsWaitEnd': True, 'OffsetBase': 1, 'InstanceName': '', 'TargetActorKind': 0, 'ActorName': '', 'ClothWarpMode': -1, 'PositionOffset': [0.03999999910593033, 1.350000023841858, 1.309999942779541], 'YAngle': -200.51930236816406})
            Npc_Navi.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'IsWaitEnd': False, 'IsAnimeDriven': True, 'ForceFadeInFrame': -1.0, 'ASName': 'Dm_SY_Treasurebox_Navi_Adult-A-0'})
        }
    }

}

void SuccessForMiniGame() {

    call Success_({'ContentName': 'ContentName', 'IsMiniGame': True})

}

void Success_() {
    if !GameSystemActor.EventQueryExistEventStarter() {
        SoundSystemActor.EventTriggerSoundStartFanfare({'IsEnableIntro': True, 'GameDataName': '', 'ActorName': 'ContentName'})

        call Success_PlayerPerform({'ContentName': 'ContentName'})

        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})

        call Success_AddContent({'ContentName': 'ContentName', 'IsMiniGame': 'IsMiniGame'})


        call Success_Leave({'ContentName': 'ContentName', 'IsMiniGame': 'IsMiniGame'})

    } else {
        GameSystemActor.EventWait({'Frames': 30, 'IsWaitEnd': True})
    }
}
