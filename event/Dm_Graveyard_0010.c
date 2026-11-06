-------- EventFlow: Dm_Graveyard_0010 --------

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart', 'EventPlayerWarpToTargetActor']
queries: ['EventQueryPlayerIsChild']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'UseEventModelAnime': 'Work/Model/Event/Dm_Graveyard_0010/Dm_Graveyard_0010_Player_Child/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_Graveyard_0010_Player_Child.root.as', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveCameraAnimationInstructionsForFlowchart', 'EventTriggerSendReserveCameraResetMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerSetGameDataBool']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventWarpToTargetActor', 'EventNaviMoveAtPos', 'EventNaviFollowPlayer', 'EventNaviLookAtObject', 'EventPlayAS', 'EventNaviMoveAroundToPlayer', 'EventNaviRequestBallonMessage']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: PostProcessingActor
entrypoint: None()
actions: ['EventSetAdvancedDoFForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Dm_Locator[pos]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 1}

Actor: DevelopEventSystemActor[cut_number]
entrypoint: None()
actions: ['EventDemoProductSupportComment']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerSoundReadRiddle', 'EventSoundStartSound', 'EventSoundRequestDucking']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait', 'EventTraverseAroundAndWaitCreateActor']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Dm_Locator
entrypoint: None()
actions: ['EventTriggerEmitXLink', 'EventWarpToTargetPosAndRot', 'EventTriggerXLinkFadeByKey']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 1}

Actor: EventEffectEmitter
entrypoint: None()
actions: ['EventEffectAddELinkHiddenSetting']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor[1]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventWorldManagerController
entrypoint: None()
actions: ['EventTriggerSetDemoPaletteForFlowchart', 'EventTriggerResetDemoPaletteForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[1]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor[Rumble]
entrypoint: None()
actions: ['EventTriggerControllerRumble']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void EntryPoint0() {
    SoundSystemActor.EventSoundRequestDucking({'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 0, 'DuckingName': 'Dm:Bgmミュート(即フェード)'})
    Dm_Locator[pos].EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'Position': [42.31999969482422, 104.55999755859375, 2.630000114440918], 'ClothWarpMode': -1})
    if !Player_Event.EventQueryPlayerIsChild() {

        fork {
            DevelopEventSystemActor[cut_number].EventDemoProductSupportComment({'Text1': 'C01', 'IsWaitEnd': True, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3})
        } {
            EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'SceneName': 'C01-0', 'IsWaitEnd': True, 'CameraName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'RootType': 3, 'TargetActorName': 'Dm_Locator', 'TargetActorInstanceName': 'pos'})
        } {
            PostProcessingActor.EventSetAdvancedDoFForFlowchart({'StartDistance': 3000.0, 'EndDistance': 3000.0, 'StartFNumber': 22.0, 'EndFNumber': 22.0, 'IsWaitEnd': True, 'StartBluarLevel': 0.0, 'EndBluarLevel': 0.0, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsAutoFocalDist': False, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
        } {
            Player_Event.EventPlayerWarpToTargetActor({'IsWaitEnd': True, 'UseDemoWait': True, 'YAngle': 90.0, 'TargetActorKind': 1, 'ActorName': 'Dm_Locator', 'InstanceName': 'pos', 'OffsetBase': 1, 'PositionOffset': [0.0, 0.0, 0.0], 'ASCommand': 'EvtWait'})
            Npc_Navi.EventWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Player_Event', 'IsWaitEnd': True, 'InstanceName': '', 'YAngle': 0.0, 'OffsetBase': 1, 'PositionOffset': [0.5, 1.2000000476837158, 0.0], 'ClothWarpMode': -1})
            Npc_Navi.EventPlayAS({'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
        } {
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 0})
            EventEffectEmitter.EventEffectAddELinkHiddenSetting({'ActorName': 'Camera', 'KeyName': 'Thunder'})
            Dm_Locator.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'Position': [42.31999969482422, 104.55999755859375, 2.630000114440918], 'YAngle': 90.0, 'ClothWarpMode': -1})
            Dm_Locator.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_Graveyard_0010_ThunderFar'})
        } {
            SoundSystemActor.EventSoundStartSound({'SLinkKey': 'Thunder', 'IsIgnoreDucking': True})
        } {
            EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': False, 'Frames': 0, 'PrevDemoPaletteName': 'Dm_Graveyard_0010_C01', 'CurrDemoPaletteName': 'Dm_Graveyard_0010_C01'})
        }


        fork {
            DevelopEventSystemActor[cut_number].EventDemoProductSupportComment({'IsWaitEnd': True, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'Text1': 'C02'})
        } {
            EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'RootType': 3, 'SceneName': 'C02-0', 'IsReferenceRootOnce': True, 'TargetActorName': 'Dm_Locator', 'TargetActorInstanceName': 'pos'})
        } {
            Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'Child_C02', 'UseAnmDriven': True, 'IsAllSlot': True, 'ClothWarpMode': 2})
        } {
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
            Dm_Locator.EventTriggerXLinkFadeByKey({'SLinkKey': '', 'ELinkKey': 'Dm_Graveyard_0010_ThunderFar', 'IsKill': True})
        } {
            EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': False, 'Frames': 0, 'PrevDemoPaletteName': 'Dm_Graveyard_0010_C02', 'CurrDemoPaletteName': 'Dm_Graveyard_0010_C02'})
        }


        fork {
            DevelopEventSystemActor[cut_number].EventDemoProductSupportComment({'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'Text1': 'C03', 'IsWaitEnd': False, 'Text2': ''})
        } {
            EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'RootType': 3, 'SceneName': 'C03-0', 'TargetActorName': 'Dm_Locator', 'TargetActorInstanceName': 'pos'})
        } {
            PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsAutoFocalDist': False, 'StartFNumber': 447.0, 'EndFNumber': 447.0, 'StartBluarLevel': 3.0, 'EndBluarLevel': 3.0, 'IsWaitEnd': True, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'EndDistance': 0.8899999856948853, 'StartDistance': 0.8899999856948853, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
        } {
            Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'Child_C03', 'UseAnmDriven': True, 'ClothWarpMode': 0, 'IsAllSlot': True})
        } {
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 4})
            Dm_Locator.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'Position': [42.31999969482422, 104.55999755859375, 2.630000114440918], 'YAngle': 90.0, 'ClothWarpMode': -1})
            Dm_Locator.EventTriggerEmitXLink({'ELinkKey': 'Dm_Graveyard_0010_ThunderLight', 'SLinkKey': ''})
        } {
            EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': False, 'Frames': 0, 'PrevDemoPaletteName': 'Dm_Graveyard_0010_C03', 'CurrDemoPaletteName': 'Dm_Graveyard_0010_C03'})
        }


        fork {
            DevelopEventSystemActor[cut_number].EventDemoProductSupportComment({'IsWaitEnd': True, 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'Text1': 'C04', 'Text2': ''})
        } {
            EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'RootType': 3, 'SceneName': 'C04-0', 'TargetActorName': 'Dm_Locator', 'TargetActorInstanceName': 'pos'})
        } {
            PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsAutoFocalDist': False, 'IsWaitEnd': True, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'StartDistance': 0.0, 'EndDistance': 0.0, 'StartFNumber': 0.0, 'EndFNumber': 0.0, 'StartBluarLevel': 0.0, 'EndBluarLevel': 0.0, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
        } {
            Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'Child_C04', 'UseAnmDriven': True, 'ClothWarpMode': 0, 'IsAllSlot': False})
        } {
            Npc_Navi.EventNaviMoveAroundToPlayer({'IsWaitEnd': True, 'IsLookAtObject': False, 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsTurnLooking': False, 'IsUseDisguiseSpeakerPos': False, 'IsHomePosition': False, 'IsNearOffset': False, 'IsOffCenterCamera': False, 'PassThrough': -1.0, 'MoveSpeed': 0.0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'offset': [0.30000001192092896, 0.0, 0.0], 'ArrivedASCommand': '', 'OverwriteRotNearDist': -1.0, 'OffsetType': -1, 'IsUseAfterPlayerTurn': False})
        } {
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 0})
            Dm_Locator.EventTriggerXLinkFadeByKey({'ELinkKey': 'Dm_Graveyard_0010_ThunderLight', 'SLinkKey': '', 'IsKill': True})
            Dm_Locator.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'Position': [50.060001373291016, 113.5, 2.680000066757202], 'ClothWarpMode': -1})
            Dm_Locator.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_Graveyard_0010_Electric'})
        } {
            EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': False, 'Frames': 0, 'PrevDemoPaletteName': 'Dm_Graveyard_0010_C04', 'CurrDemoPaletteName': 'Dm_Graveyard_0010_C04'})
        }


        fork {
            DevelopEventSystemActor[cut_number].EventDemoProductSupportComment({'IsWaitEnd': True, 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'Text1': 'C05', 'Text2': ''})
        } {
            EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'RootType': 3, 'TargetActorName': 'Dm_Locator', 'SceneName': 'C05-0', 'TargetActorInstanceName': 'pos'})
        } {
            Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'UseAnmDriven': True, 'ASCommand': 'Child_C05', 'ClothWarpMode': 0})
        } {
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 270})
            Dm_Locator.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'Position': [48.36000061035156, 104.55999755859375, 2.609999895095825], 'YAngle': 0.0, 'ClothWarpMode': -1})
            Dm_Locator.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_Graveyard_0010_Thunder_Start'})
            Dm_Locator.EventTriggerXLinkFadeByKey({'SLinkKey': '', 'ELinkKey': 'Dm_Graveyard_0010_Electric', 'IsKill': True})
        } {
            EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': False, 'Frames': 0, 'PrevDemoPaletteName': 'Dm_Graveyard_0010_C05', 'CurrDemoPaletteName': 'Dm_Graveyard_0010_C05'})
        } {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 285})
            GameSystemActor[Rumble].EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Middle_Byeen'})
        }


        fork {
            DevelopEventSystemActor[cut_number].EventDemoProductSupportComment({'IsWaitEnd': True, 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'Text1': 'C06', 'Text2': ''})
        } {
            EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'RootType': 3, 'TargetActorName': 'Dm_Locator', 'SceneName': 'C06-0', 'TargetActorInstanceName': 'pos'})
        } {
            Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'UseAnmDriven': True, 'ASCommand': 'Child_C06', 'ClothWarpMode': 0})
        } {
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'GraveYard_RoyalFamilyTomb_Breaked'})
        } {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 37})
            Npc_Navi.EventNaviMoveAtPos({'IsWaitEnd': True, 'IsLookAtObject': False, 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsTurnLooking': False, 'MoveSpeed': 0.0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'WorldPos': [39.869998931884766, 105.12999725341797, 2.119999885559082], 'ASCommand': '', 'OverwriteRotNearDist': -1.0})
            Npc_Navi.EventNaviLookAtObject({'IsWaitEnd': True, 'Target': 2, 'OffsetBase': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsTurnX': True, 'PosOffset': [-5.0, 0.0, 0.0]})
        } {
            GameSystemActor[1].EventWait({'IsWaitEnd': True, 'Frames': 0})
            Dm_Locator.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_Graveyard_0010_Thunder'})
            Dm_Locator.EventTriggerXLinkFadeByKey({'SLinkKey': '', 'ELinkKey': 'Dm_Graveyard_0010_Thunder_Start', 'IsKill': True})
        } {
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'GraveYard_RoyalFamilyTomb_Open', 'Index': -1, 'Value': True})
            GameSystemActor.EventTraverseAroundAndWaitCreateActor({'IsFastLoad': False, 'IsWaitEnd': True})
        } {
            EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': False, 'Frames': 0, 'PrevDemoPaletteName': 'Dm_Graveyard_0010_C06', 'CurrDemoPaletteName': 'Dm_Graveyard_0010_C06'})
        } {
            EventSystemActor[1].EventWait({'IsWaitEnd': True, 'Frames': 28})
            GameSystemActor[Rumble].EventTriggerControllerRumble({'RumbleCall': 'Demo_Large_Dohoon', 'Length': 1.0})
        }


        fork {
            DevelopEventSystemActor[cut_number].EventDemoProductSupportComment({'IsWaitEnd': True, 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'Text1': 'C07', 'Text2': ''})
        } {
            EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'RootType': 3, 'TargetActorName': 'Dm_Locator', 'SceneName': 'C07-0', 'TargetActorInstanceName': 'pos'})
        } {
            Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'UseAnmDriven': True, 'ASCommand': 'Child_C07', 'ClothWarpMode': 2})
        } {
            Npc_Navi.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'Worry_Down'})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 304})
            Npc_Navi.EventNaviFollowPlayer({'IsWaitEnd': True, 'IsNearOffset': False, 'offset': [0.0, 0.0, 0.0], 'IsHomePosition': True, 'Speed': -1.0, 'OffsetType': -1})
        } {
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 245})
            Dm_Locator.EventTriggerXLinkFadeByKey({'SLinkKey': '', 'ELinkKey': 'Dm_Graveyard_0010_Thunder', 'IsKill': True})
            SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 0})
        } {
            EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': False, 'Frames': 0, 'PrevDemoPaletteName': 'Dm_Graveyard_0010_C07', 'CurrDemoPaletteName': 'Dm_Graveyard_0010_C07'})
        }

        EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 0.0, 'CameraResetPolicy': 0})
        Event160:
        EventWorldManagerController.EventTriggerResetDemoPaletteForFlowchart({'IsWaitEnd': False})
        Npc_Navi.EventNaviRequestBallonMessage({'Index': 294})
    } else {

        fork {
            DevelopEventSystemActor[cut_number].EventDemoProductSupportComment({'Text1': 'C01', 'IsWaitEnd': True, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3})
        } {
            EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'SceneName': 'C01-0', 'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'RootType': 3, 'TargetActorName': 'Dm_Locator', 'TargetActorInstanceName': 'pos'})
        } {
            PostProcessingActor.EventSetAdvancedDoFForFlowchart({'StartDistance': 3000.0, 'EndDistance': 3000.0, 'StartFNumber': 22.0, 'EndFNumber': 22.0, 'IsWaitEnd': True, 'StartBluarLevel': 0.0, 'EndBluarLevel': 0.0, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'IsAutoFocalDist': False, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
        } {
            Player_Event.EventPlayerWarpToTargetActor({'IsWaitEnd': True, 'UseDemoWait': True, 'YAngle': 90.0, 'TargetActorKind': 1, 'ActorName': 'Dm_Locator', 'InstanceName': 'pos', 'OffsetBase': 1, 'PositionOffset': [0.0, 0.0, 0.0], 'ASCommand': 'EvtWait'})
            Npc_Navi.EventWarpToTargetActor({'TargetActorKind': 1, 'ActorName': 'Player_Event', 'IsWaitEnd': True, 'InstanceName': '', 'YAngle': 0.0, 'OffsetBase': 1, 'PositionOffset': [0.5, 1.2000000476837158, 0.0], 'ClothWarpMode': -1})
            Npc_Navi.EventPlayAS({'ASName': 'Wait', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False})
        } {
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 0})
            EventEffectEmitter.EventEffectAddELinkHiddenSetting({'ActorName': 'Camera', 'KeyName': 'Thunder'})
            Dm_Locator.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'Position': [42.31999969482422, 104.55999755859375, 2.630000114440918], 'YAngle': 90.0, 'ClothWarpMode': -1})
            Dm_Locator.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_Graveyard_0010_ThunderFar'})
        } {
            SoundSystemActor.EventSoundStartSound({'SLinkKey': 'Thunder', 'IsIgnoreDucking': True})
        } {
            EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': False, 'Frames': 0, 'PrevDemoPaletteName': 'Dm_Graveyard_0010_C01', 'CurrDemoPaletteName': 'Dm_Graveyard_0010_C01'})
        }


        fork {
            DevelopEventSystemActor[cut_number].EventDemoProductSupportComment({'IsWaitEnd': True, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'Text1': 'C02'})
        } {
            EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'RootType': 3, 'TargetActorName': 'Dm_Locator', 'TargetActorInstanceName': 'pos', 'SceneName': 'C02-0'})
        } {
            Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'ASCommand': 'Adult_C02', 'UseAnmDriven': True, 'ClothWarpMode': 0})
        } {
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 5})
            Dm_Locator.EventTriggerXLinkFadeByKey({'SLinkKey': '', 'ELinkKey': 'Dm_Graveyard_0010_ThunderFar', 'IsKill': True})
        } {
            EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': False, 'Frames': 0, 'PrevDemoPaletteName': 'Dm_Graveyard_0010_C02', 'CurrDemoPaletteName': 'Dm_Graveyard_0010_C02'})
        }


        fork {
            DevelopEventSystemActor[cut_number].EventDemoProductSupportComment({'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'Text1': 'C03', 'IsWaitEnd': False, 'Text2': ''})
        } {
            EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'RootType': 3, 'TargetActorName': 'Dm_Locator', 'SceneName': 'C03-0-Adult', 'TargetActorInstanceName': 'pos'})
        } {
            PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'StartFNumber': 447.0, 'EndFNumber': 447.0, 'StartDistance': 0.8899999856948853, 'EndDistance': 0.8899999856948853, 'StartBluarLevel': 3.0, 'EndBluarLevel': 3.0, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
        } {
            Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'UseAnmDriven': True, 'ASCommand': 'Adult_C03', 'ClothWarpMode': 0})
        } {
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 4})
            Dm_Locator.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'Position': [42.31999969482422, 104.55999755859375, 2.630000114440918], 'YAngle': 90.0, 'ClothWarpMode': -1})
            Dm_Locator.EventTriggerEmitXLink({'ELinkKey': 'Dm_Graveyard_0010_ThunderLight', 'SLinkKey': ''})
        } {
            EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': False, 'Frames': 0, 'PrevDemoPaletteName': 'Dm_Graveyard_0010_C03', 'CurrDemoPaletteName': 'Dm_Graveyard_0010_C03'})
        }


        fork {
            DevelopEventSystemActor[cut_number].EventDemoProductSupportComment({'IsWaitEnd': True, 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'Text1': 'C04', 'Text2': ''})
        } {
            EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'RootType': 3, 'TargetActorName': 'Dm_Locator', 'TargetActorInstanceName': 'pos', 'SceneName': 'C04-0'})
        } {
            PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsAutoFocalDist': False, 'IsWaitEnd': True, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'StartDistance': 0.0, 'EndDistance': 0.0, 'StartFNumber': 0.0, 'EndFNumber': 0.0, 'StartBluarLevel': 0.0, 'EndBluarLevel': 0.0, 'IsEnableNear': True, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
        } {
            Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'UseAnmDriven': True, 'ASCommand': 'Adult_C04', 'ClothWarpMode': 0})
        } {
            Npc_Navi.EventNaviMoveAroundToPlayer({'IsWaitEnd': True, 'IsLookAtObject': False, 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsTurnLooking': False, 'IsUseDisguiseSpeakerPos': False, 'IsHomePosition': False, 'IsNearOffset': False, 'IsOffCenterCamera': False, 'PassThrough': -1.0, 'MoveSpeed': 0.0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'offset': [0.6000000238418579, -0.30000001192092896, 0.0], 'ArrivedASCommand': '', 'OverwriteRotNearDist': -1.0, 'OffsetType': -1, 'IsUseAfterPlayerTurn': False})
        } {
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 0})
            Dm_Locator.EventTriggerXLinkFadeByKey({'ELinkKey': 'Dm_Graveyard_0010_ThunderLight', 'SLinkKey': '', 'IsKill': True})
            Dm_Locator.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 0.0, 'Position': [50.060001373291016, 113.5, 2.680000066757202], 'ClothWarpMode': -1})
            Dm_Locator.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_Graveyard_0010_Electric'})
        } {
            EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': False, 'Frames': 0, 'PrevDemoPaletteName': 'Dm_Graveyard_0010_C04', 'CurrDemoPaletteName': 'Dm_Graveyard_0010_C04'})
        }


        fork {
            DevelopEventSystemActor[cut_number].EventDemoProductSupportComment({'IsWaitEnd': True, 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'Text1': 'C05', 'Text2': ''})
        } {
            EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'RootType': 3, 'TargetActorName': 'Dm_Locator', 'SceneName': 'C05-0', 'TargetActorInstanceName': 'pos'})
        } {
            Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'UseAnmDriven': True, 'ASCommand': 'Adult_C05', 'ClothWarpMode': 0})
        } {
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 270})
            Dm_Locator.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'Position': [48.36000061035156, 104.55999755859375, 2.609999895095825], 'YAngle': 0.0, 'ClothWarpMode': -1})
            Dm_Locator.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_Graveyard_0010_Thunder_Start'})
            Dm_Locator.EventTriggerXLinkFadeByKey({'SLinkKey': '', 'ELinkKey': 'Dm_Graveyard_0010_Electric', 'IsKill': True})
        } {
            EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': False, 'Frames': 0, 'PrevDemoPaletteName': 'Dm_Graveyard_0010_C05', 'CurrDemoPaletteName': 'Dm_Graveyard_0010_C05'})
        } {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 285})
            GameSystemActor[Rumble].EventTriggerControllerRumble({'Length': 0.0, 'RumbleCall': 'Demo_Middle_Byeen'})
        }


        fork {
            DevelopEventSystemActor[cut_number].EventDemoProductSupportComment({'IsWaitEnd': True, 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'Text1': 'C06', 'Text2': ''})
        } {
            EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'RootType': 3, 'TargetActorName': 'Dm_Locator', 'TargetActorInstanceName': 'pos', 'SceneName': 'C06-0'})
        } {
            Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'UseAnmDriven': True, 'ASCommand': 'Adult_C06', 'ClothWarpMode': 0})
        } {
            GameDataActor.EventTriggerSetGameDataBool({'Index': -1, 'Value': True, 'GameDataName': 'GraveYard_RoyalFamilyTomb_Breaked'})
        } {
            GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'GraveYard_RoyalFamilyTomb_Open', 'Index': -1, 'Value': True})
            GameSystemActor.EventTraverseAroundAndWaitCreateActor({'IsFastLoad': False, 'IsWaitEnd': True})
        } {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 42})
            Npc_Navi.EventNaviMoveAtPos({'IsWaitEnd': True, 'IsLookAtObject': False, 'LookAtTarget': 0, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsTurnLooking': False, 'MoveSpeed': 0.0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'WorldPos': [39.529998779296875, 105.33999633789062, 2.0999999046325684], 'ASCommand': '', 'OverwriteRotNearDist': -1.0})
            Npc_Navi.EventNaviLookAtObject({'IsWaitEnd': True, 'Target': 2, 'OffsetBase': 1, 'ActorName': '', 'InstanceName': '', 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsTurnX': True, 'PosOffset': [-5.0, 0.0, 0.0]})
        } {
            GameSystemActor[1].EventWait({'IsWaitEnd': True, 'Frames': 0})
            Dm_Locator.EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_Graveyard_0010_Thunder'})
            Dm_Locator.EventTriggerXLinkFadeByKey({'SLinkKey': '', 'ELinkKey': 'Dm_Graveyard_0010_Thunder_Start', 'IsKill': True})
        } {
            EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': False, 'Frames': 0, 'PrevDemoPaletteName': 'Dm_Graveyard_0010_C06', 'CurrDemoPaletteName': 'Dm_Graveyard_0010_C06'})
        } {
            EventSystemActor[1].EventWait({'IsWaitEnd': True, 'Frames': 28})
            GameSystemActor[Rumble].EventTriggerControllerRumble({'RumbleCall': 'Demo_Large_Dohoon', 'Length': 1.0})
        }


        fork {
            DevelopEventSystemActor[cut_number].EventDemoProductSupportComment({'IsWaitEnd': True, 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'Text1': 'C07', 'Text2': ''})
        } {
            EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False, 'RootType': 3, 'TargetActorName': 'Dm_Locator', 'SceneName': 'C07-0', 'TargetActorInstanceName': 'pos'})
        } {
            Player_Event.EventPlayerPlayASForFlowchart({'IsWaitEnd': True, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ForceFadeFrame': -1.0, 'UseAnmDriven': True, 'ASCommand': 'Adult_C07', 'ClothWarpMode': 2})
        } {
            Npc_Navi.EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': False, 'IsWaitEnd': False, 'ASName': 'Worry_Down'})
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 314})
            Npc_Navi.EventNaviFollowPlayer({'IsWaitEnd': True, 'IsNearOffset': False, 'offset': [0.0, 0.0, 0.0], 'IsHomePosition': True, 'Speed': -1.0, 'OffsetType': -1})
        } {
            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 245})
            Dm_Locator.EventTriggerXLinkFadeByKey({'SLinkKey': '', 'ELinkKey': 'Dm_Graveyard_0010_Thunder', 'IsKill': True})
            SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 0})
        } {
            EventWorldManagerController.EventTriggerSetDemoPaletteForFlowchart({'IsWaitEnd': False, 'Frames': 0, 'PrevDemoPaletteName': 'Dm_Graveyard_0010_C07', 'CurrDemoPaletteName': 'Dm_Graveyard_0010_C07'})
        }

        EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 0.0, 'CameraResetPolicy': 0})
        goto Event160
    }
}
