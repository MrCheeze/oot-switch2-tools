-------- EventFlow: Dm_SY_Ocarina_move_Ed --------

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera', 'EventChangeTemporarilyToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerPlayASForFlowchart', 'EventTriggerEmitXLink', 'EventGoOffstageForUser', 'EventPlayerWarpVanish', 'EventPlayerWarpToTargetActor']
queries: ['EventQueryPlayerIsChild']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: DevelopEventSystemActor
entrypoint: None()
actions: ['EventDemoProductSupportComment']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: UISystemActor
entrypoint: None()
actions: ['EventEventFadeIn', 'EventTriggerOpenCurrentSmallLocationUI']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: PostProcessingActor
entrypoint: None()
actions: ['EventSetAdvancedDoFForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventGoOffstageForUser', 'EventNaviMoveAroundToPlayer', 'EventWarpToTargetActor']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: EventSystemActor[ESA1]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[ESA2]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Dm_Locator[EffectPosEnd]
entrypoint: None()
actions: ['EventPlayAS', 'EventWarpToTargetActor', 'EventTriggerEmitXLink']
queries: []
params: {'EventMemberCreateMethod': 1, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': 'Work/Model/Event/Dm_SY_Ocarina_move_Ed/Dm_SY_Ocarina_move_Ed_Dm_Locator/workspace.pp__ModelProject.gyml', 'UseEventAS': 'Work/AS/Root/Event/Dm_SY_Ocarina_move_Ed_Dm_Locator.root.as'}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventTriggerWarpInFadeOcarinaMelodyHandle']
queries: ['EventQueryMelodyTypeForNormal', 'EventQueryIsDistanceBetweenActorsClose']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerStopInGameBgm', 'EventTriggerSoundStartSceneBgm', 'EventSoundRequestDucking', 'EventSoundReleaseDucking']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[ESA3]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Kokiri_Saria_Child_SacredForestMeadow
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Accessory4': '', 'EventMemberCreateMethod': 3}

Actor: LastRiddenAnimal_ForEvent
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Dm_Locator[pos]
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot']
queries: []
params: {'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EventMemberCreateMethod': 1}

void ocarina_move_end() {
    GameSystemActor.EventTriggerWarpInFadeOcarinaMelodyHandle()

    call CareEponaBranch()

    if !Player_Event.EventQueryPlayerIsChild() {
        switch GameSystemActor.EventQueryMelodyTypeForNormal() {
          case [0, 1, 2, 3, 4, 5, 7, 8, 9, 10, 11, 12, 13]:
            SoundSystemActor.EventTriggerStopInGameBgm({'IsImmediateOnAutoOff': True, 'FadeType': 0, 'WithPlayableEvent': False, 'CommandLife': 0, 'IsForceFadeTime': False, 'WaitingResumeInGameBgm': False})
            Event14:

            fork {

                fork {
                    EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 2, 'LatShiftRange': 60.0, 'LongShiftRange': 180.0, 'FovySetType': 0, 'MoveTime': 0, 'IsWaitEnd': True, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'Actor1ActorName': 'Player_Event', 'TargetFovy': 40.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'PosVector': [0.7599999904632568, 1.75, 2.1700000762939453], 'AtVector': [1.3799999952316284, 1.899999976158142, 0.1599999964237213], 'IsEnableRevertFast': False})
                    EventSystemActor[ESA1].EventWait({'IsWaitEnd': True, 'Frames': 40})
                    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'MoveTime': 100, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'Actor1ActorName': 'Player_Event', 'PosVector': [1.2599999904632568, 1.9700000286102295, 1.7599999904632568], 'AtVector': [0.3400000035762787, 0.9599999785423279, 0.46000000834465027], 'TargetFovy': 40.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsEnableRevertFast': False})
                } {
                    UISystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Length': 1, 'Color': 1})
                    UISystemActor.EventTriggerOpenCurrentSmallLocationUI()
                }

                EventSystemActor[ESA1].EventWait({'IsWaitEnd': True, 'Frames': 45})
                switch GameSystemActor.EventQueryMelodyTypeForNormal() {
                  case [0, 1, 2, 3, 4, 5, 7, 8, 9, 10, 11, 12, 13]:
                    Event96:
                    EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player_Event', 'PosVector': [0.0, 1.690000057220459, -3.7899999618530273], 'AtVector': [0.0, 1.3600000143051147, 0.0], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'MoveTime': 120, 'IsEnableRevertFast': False})
                  case 6:
                    SoundSystemActor.EventSoundReleaseDucking({'DuckingName': 'Dm:Bgmミュート(即フェード)', 'IsImmediately': True, 'DuckingName2': '', 'DuckingName3': '', 'IsClearRefCount': False})
                    goto Event96
                }
            } {
                Npc_Navi.EventWarpToTargetActor({'IsWaitEnd': True, 'TargetActorKind': 1, 'ActorName': 'Player_Event', 'OffsetBase': 1, 'InstanceName': '', 'YAngle': 0.0, 'PositionOffset': [-0.20000000298023224, 0.800000011920929, -0.4000000059604645], 'ClothWarpMode': -1})
                Npc_Navi.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
                EventSystemActor[ESA2].EventWait({'IsWaitEnd': True, 'Frames': 120})
                Npc_Navi.EventNaviMoveAroundToPlayer({'IsHomePosition': True, 'IsWaitEnd': True, 'offset': [0.0, 0.0, 0.0], 'IsNearOffset': True, 'LookAtTarget': 0, 'IsLookAtObject': False, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsTurnLooking': False, 'MoveSpeed': 0.0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'IsUseDisguiseSpeakerPos': False, 'IsOffCenterCamera': False, 'PassThrough': -1.0, 'ArrivedASCommand': '', 'OverwriteRotNearDist': -1.0, 'OffsetType': -1, 'IsUseAfterPlayerTurn': True})
            } {
                PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'StartFNumber': 21.6299991607666, 'EndFNumber': 21.6299991607666, 'EndBluarLevel': 2.5, 'StartBluarLevel': 2.5, 'StartDistance': 4.0, 'EndDistance': 4.0, 'IsEnableNear': False, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
            } {
                Player_Event.EventGoOffstageForUser({'IsWaitEnd': False, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
                EventSystemActor[ESA3].EventWait({'IsWaitEnd': True, 'Frames': 91})
                Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ASCommand': 'DemoOcarinamove_ed', 'ForceFadeFrame': 0.0, 'ClothWarpMode': 0, 'IsWaitEnd': False})

                call PlayerEffects()

            } {
                DevelopEventSystemActor.EventDemoProductSupportComment({'IsWaitEnd': True, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'Text1': 'C01'})
            } {

                call ParticleEffects()

            } {
                Npc_Kokiri_Saria_Child_SacredForestMeadow.EventTriggerParticipateEvent()
            }

            Event24:
            EventCamera.EventChangeTemporarilyToPlayerCamera({'IsWaitEnd': False, 'EnableControle': False})
          case 6:
            SoundSystemActor.EventTriggerSoundStartSceneBgm({'BgmName': 'BGM_SacredForestMeadow', 'StartType': 2})
            SoundSystemActor.EventSoundRequestDucking({'DuckingName': 'Dm:Bgmミュート(即フェード)', 'DuckingName2': '', 'DuckingName3': '', 'CommandLife': 2})
            goto Event14
        }
    } else {
        SoundSystemActor.EventTriggerStopInGameBgm({'IsImmediateOnAutoOff': True, 'FadeType': 0, 'WithPlayableEvent': False, 'CommandLife': 0, 'IsForceFadeTime': False, 'WaitingResumeInGameBgm': False})

        fork {

            fork {
                EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 2, 'LatShiftRange': 60.0, 'LongShiftRange': 180.0, 'FovySetType': 0, 'MoveTime': 0, 'IsWaitEnd': True, 'Actor1ActorName': 'Player_Event', 'PosVector': [1.0800000429153442, 2.3399999141693115, 1.5199999809265137], 'AtVector': [1.9600000381469727, 2.4700000286102295, 0.18000000715255737], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
                EventSystemActor[ESA1].EventWait({'IsWaitEnd': True, 'Frames': 40})
                EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player_Event', 'PosVector': [1.1200000047683716, 2.4000000953674316, 1.5800000429153442], 'AtVector': [0.3400000035762787, 1.3799999952316284, 0.46000000834465027], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveTime': 100, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
            } {
                UISystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Length': 1, 'Color': 1})
                UISystemActor.EventTriggerOpenCurrentSmallLocationUI()
            }

            EventSystemActor[ESA1].EventWait({'IsWaitEnd': True, 'Frames': 45})
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'Actor1ActorName': 'Player_Event', 'PosVector': [0.0, 2.140000104904175, -4.480000019073486], 'AtVector': [0.0, 1.75, 0.0], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'MoveTime': 120, 'IsEnableRevertFast': False})
        } {
            Npc_Navi.EventWarpToTargetActor({'IsWaitEnd': True, 'TargetActorKind': 1, 'ActorName': 'Player_Event', 'OffsetBase': 1, 'InstanceName': '', 'YAngle': 0.0, 'PositionOffset': [-0.20000000298023224, 0.800000011920929, -0.4000000059604645], 'ClothWarpMode': -1})
            Npc_Navi.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
            EventSystemActor[ESA2].EventWait({'IsWaitEnd': True, 'Frames': 120})
            Npc_Navi.EventNaviMoveAroundToPlayer({'IsHomePosition': True, 'IsWaitEnd': True, 'offset': [0.0, 0.0, 0.0], 'IsNearOffset': True, 'LookAtTarget': 0, 'IsLookAtObject': False, 'LookAtActorName': '', 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtPosOffset': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsTurnLooking': False, 'MoveSpeed': 0.0, 'MinimumSpeed': 0.0, 'IncSpeedDistance': 0.0, 'DecSpeedDistance': 0.0, 'IsUseDisguiseSpeakerPos': False, 'IsOffCenterCamera': False, 'PassThrough': -1.0, 'ArrivedASCommand': '', 'OverwriteRotNearDist': -1.0, 'OffsetType': -1, 'IsUseAfterPlayerTurn': True})
        } {
            PostProcessingActor.EventSetAdvancedDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'IsPrimaryApply': False, 'RequiredFrame': 0, 'StartFNumber': 21.6299991607666, 'EndFNumber': 21.6299991607666, 'StartDistance': 3.0, 'EndDistance': 3.0, 'EndBluarLevel': 2.5, 'StartBluarLevel': 2.5, 'IsEnableNear': False, 'IsEnableDofFarCancel': False, 'IsEnableNearDepthBlur': True, 'NearDepthBlurAdd': 3.0})
        } {
            DevelopEventSystemActor.EventDemoProductSupportComment({'IsWaitEnd': True, 'Text2': '', 'Text3': '', 'Text4': '', 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'BgAlignW': 0, 'BgAlignH': 0, 'DispTime': 3, 'Text1': 'C01'})
        } {
            Player_Event.EventGoOffstageForUser({'IsWaitEnd': False, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
            EventSystemActor[ESA3].EventWait({'IsWaitEnd': True, 'Frames': 91})
            Player_Event.EventPlayerPlayASForFlowchart({'UseAnmDriven': False, 'IsAllSlot': False, 'KeepOneTimeAnm': False, 'ASCommand': 'DemoOcarinamove_ed', 'ForceFadeFrame': 0.0, 'ClothWarpMode': 0, 'IsWaitEnd': False})

            call PlayerEffects()

        } {

            call ParticleEffects()

        }

        goto Event24
    }
}

void ParticleEffects() {
    if !Player_Event.EventQueryPlayerIsChild() {
        switch GameSystemActor.EventQueryMelodyTypeForNormal() {
          case 6:
            Player_Event.EventTriggerEmitXLink({'ELinkKey': '', 'SLinkKey': 'Dm_SY_Ocarina_move_Ed_Particle'})
            Dm_Locator[EffectPosEnd].EventWarpToTargetActor({'IsWaitEnd': True, 'ActorName': 'Player_Event', 'OffsetBase': 1, 'InstanceName': '', 'YAngle': 0.0, 'PositionOffset': [0.0, 0.0, 0.0], 'TargetActorKind': 1, 'ClothWarpMode': -1})
            Dm_Locator[EffectPosEnd].EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_SY_Ocarina_move_Ed_Child_Particle_End_00'})
            Dm_Locator[EffectPosEnd].EventPlayAS({'ASName': 'ChildEd', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': True, 'IsWaitEnd': False})
          case 7:
            Player_Event.EventTriggerEmitXLink({'ELinkKey': '', 'SLinkKey': 'Dm_SY_Ocarina_move_Ed_Particle'})
            Dm_Locator[EffectPosEnd].EventWarpToTargetActor({'IsWaitEnd': True, 'ActorName': 'Player_Event', 'OffsetBase': 1, 'InstanceName': '', 'YAngle': 0.0, 'PositionOffset': [0.0, 0.0, 0.0], 'TargetActorKind': 1, 'ClothWarpMode': -1})
            Dm_Locator[EffectPosEnd].EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_SY_Ocarina_move_Ed_Child_Particle_End_Fire_00'})
            Dm_Locator[EffectPosEnd].EventPlayAS({'ASName': 'ChildEd', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': True, 'IsWaitEnd': False})
          case 8:
            Player_Event.EventTriggerEmitXLink({'ELinkKey': '', 'SLinkKey': 'Dm_SY_Ocarina_move_Ed_Particle'})
            Dm_Locator[EffectPosEnd].EventWarpToTargetActor({'IsWaitEnd': True, 'ActorName': 'Player_Event', 'OffsetBase': 1, 'InstanceName': '', 'YAngle': 0.0, 'PositionOffset': [0.0, 0.0, 0.0], 'TargetActorKind': 1, 'ClothWarpMode': -1})
            Dm_Locator[EffectPosEnd].EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_SY_Ocarina_move_Ed_Child_Particle_End_Water_00'})
            Dm_Locator[EffectPosEnd].EventPlayAS({'ASName': 'ChildEd', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': True, 'IsWaitEnd': False})
          case 9:
            Player_Event.EventTriggerEmitXLink({'ELinkKey': '', 'SLinkKey': 'Dm_SY_Ocarina_move_Ed_Particle'})
            Dm_Locator[EffectPosEnd].EventWarpToTargetActor({'IsWaitEnd': True, 'ActorName': 'Player_Event', 'OffsetBase': 1, 'InstanceName': '', 'YAngle': 0.0, 'PositionOffset': [0.0, 0.0, 0.0], 'TargetActorKind': 1, 'ClothWarpMode': -1})
            Dm_Locator[EffectPosEnd].EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_SY_Ocarina_move_Ed_Child_Particle_End_Spirit_00'})
            Dm_Locator[EffectPosEnd].EventPlayAS({'ASName': 'ChildEd', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': True, 'IsWaitEnd': False})
          case 10:
            Player_Event.EventTriggerEmitXLink({'ELinkKey': '', 'SLinkKey': 'Dm_SY_Ocarina_move_Ed_Particle'})
            Dm_Locator[EffectPosEnd].EventWarpToTargetActor({'IsWaitEnd': True, 'ActorName': 'Player_Event', 'OffsetBase': 1, 'InstanceName': '', 'YAngle': 0.0, 'PositionOffset': [0.0, 0.0, 0.0], 'TargetActorKind': 1, 'ClothWarpMode': -1})
            Dm_Locator[EffectPosEnd].EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_SY_Ocarina_move_Ed_Child_Particle_End_Shadow_00'})
            Dm_Locator[EffectPosEnd].EventPlayAS({'ASName': 'ChildEd', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': True, 'IsWaitEnd': False})
          case 11:
            Player_Event.EventTriggerEmitXLink({'ELinkKey': '', 'SLinkKey': 'Dm_SY_Ocarina_move_Ed_Particle'})
            Dm_Locator[EffectPosEnd].EventWarpToTargetActor({'IsWaitEnd': True, 'ActorName': 'Player_Event', 'OffsetBase': 1, 'InstanceName': '', 'YAngle': 0.0, 'PositionOffset': [0.0, 0.0, 0.0], 'TargetActorKind': 1, 'ClothWarpMode': -1})
            Dm_Locator[EffectPosEnd].EventTriggerEmitXLink({'ELinkKey': 'Dm_SY_Ocarina_move_Ed_Child_Particle_End_Light_00', 'SLinkKey': ''})
            Dm_Locator[EffectPosEnd].EventPlayAS({'ASName': 'ChildEd', 'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': True, 'IsWaitEnd': False})
        }
    } else
    switch GameSystemActor.EventQueryMelodyTypeForNormal() {
      case 6:
        Player_Event.EventTriggerEmitXLink({'ELinkKey': '', 'SLinkKey': 'Dm_SY_Ocarina_move_Ed_Particle'})
        Dm_Locator[EffectPosEnd].EventWarpToTargetActor({'IsWaitEnd': True, 'ActorName': 'Player_Event', 'OffsetBase': 1, 'InstanceName': '', 'YAngle': 0.0, 'PositionOffset': [0.0, 0.0, 0.0], 'TargetActorKind': 1, 'ClothWarpMode': -1})
        Dm_Locator[EffectPosEnd].EventTriggerEmitXLink({'ELinkKey': 'Dm_SY_Ocarina_move_Ed_Particle_End_00', 'SLinkKey': ''})
        Dm_Locator[EffectPosEnd].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': True, 'ASName': 'AdultEd', 'IsWaitEnd': False})
      case 7:
        Player_Event.EventTriggerEmitXLink({'ELinkKey': '', 'SLinkKey': 'Dm_SY_Ocarina_move_Ed_Particle'})
        Dm_Locator[EffectPosEnd].EventWarpToTargetActor({'IsWaitEnd': True, 'ActorName': 'Player_Event', 'OffsetBase': 1, 'InstanceName': '', 'YAngle': 0.0, 'PositionOffset': [0.0, 0.0, 0.0], 'TargetActorKind': 1, 'ClothWarpMode': -1})
        Dm_Locator[EffectPosEnd].EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_SY_Ocarina_move_Ed_Particle_End_Fire_00'})
        Dm_Locator[EffectPosEnd].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': True, 'ASName': 'AdultEd', 'IsWaitEnd': False})
      case 8:
        Player_Event.EventTriggerEmitXLink({'ELinkKey': '', 'SLinkKey': 'Dm_SY_Ocarina_move_Ed_Particle'})
        Dm_Locator[EffectPosEnd].EventWarpToTargetActor({'IsWaitEnd': True, 'ActorName': 'Player_Event', 'OffsetBase': 1, 'InstanceName': '', 'YAngle': 0.0, 'PositionOffset': [0.0, 0.0, 0.0], 'TargetActorKind': 1, 'ClothWarpMode': -1})
        Dm_Locator[EffectPosEnd].EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_SY_Ocarina_move_Ed_Particle_End_Water_00'})
        Dm_Locator[EffectPosEnd].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': True, 'ASName': 'AdultEd', 'IsWaitEnd': False})
      case 9:
        Player_Event.EventTriggerEmitXLink({'ELinkKey': '', 'SLinkKey': 'Dm_SY_Ocarina_move_Ed_Particle'})
        Dm_Locator[EffectPosEnd].EventWarpToTargetActor({'IsWaitEnd': True, 'ActorName': 'Player_Event', 'OffsetBase': 1, 'InstanceName': '', 'YAngle': 0.0, 'PositionOffset': [0.0, 0.0, 0.0], 'TargetActorKind': 1, 'ClothWarpMode': -1})
        Dm_Locator[EffectPosEnd].EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_SY_Ocarina_move_Ed_Particle_End_Spirit_00'})
        Dm_Locator[EffectPosEnd].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': True, 'ASName': 'AdultEd', 'IsWaitEnd': False})
      case 10:
        Player_Event.EventTriggerEmitXLink({'ELinkKey': '', 'SLinkKey': 'Dm_SY_Ocarina_move_Ed_Particle'})
        Dm_Locator[EffectPosEnd].EventWarpToTargetActor({'IsWaitEnd': True, 'ActorName': 'Player_Event', 'OffsetBase': 1, 'InstanceName': '', 'YAngle': 0.0, 'PositionOffset': [0.0, 0.0, 0.0], 'TargetActorKind': 1, 'ClothWarpMode': -1})
        Dm_Locator[EffectPosEnd].EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_SY_Ocarina_move_Ed_Particle_End_Shadow_00'})
        Dm_Locator[EffectPosEnd].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': True, 'ASName': 'AdultEd', 'IsWaitEnd': False})
      case 11:
        Player_Event.EventTriggerEmitXLink({'ELinkKey': '', 'SLinkKey': 'Dm_SY_Ocarina_move_Ed_Particle'})
        Dm_Locator[EffectPosEnd].EventWarpToTargetActor({'IsWaitEnd': True, 'ActorName': 'Player_Event', 'OffsetBase': 1, 'InstanceName': '', 'YAngle': 0.0, 'PositionOffset': [0.0, 0.0, 0.0], 'TargetActorKind': 1, 'ClothWarpMode': -1})
        Dm_Locator[EffectPosEnd].EventTriggerEmitXLink({'SLinkKey': '', 'ELinkKey': 'Dm_SY_Ocarina_move_Ed_Particle_End_Light_00'})
        Dm_Locator[EffectPosEnd].EventPlayAS({'Partial': '', 'IsAllSlot': False, 'ForceFadeInFrame': -1.0, 'IsAnimeDriven': True, 'ASName': 'AdultEd', 'IsWaitEnd': False})
    }
}

void PlayerEffects() {
    Player_Event.EventPlayerWarpVanish({'IsReverse': True, 'IsFarore': False, 'IsWaitEnd': False, 'Frame': 60.0})
    EventSystemActor[ESA3].EventWait({'IsWaitEnd': True, 'Frames': 1})
    if !Player_Event.EventQueryPlayerIsChild() {
        switch GameSystemActor.EventQueryMelodyTypeForNormal() {
          case 6:
            Player_Event.EventTriggerEmitXLink({'ELinkKey': 'Dm_SY_Ocarina_move_Ed_Child_Particle_00', 'SLinkKey': 'Dm_SY_Ocarina_move_Ed'})
          case 7:
            Player_Event.EventTriggerEmitXLink({'ELinkKey': 'Dm_SY_Ocarina_move_Ed_Child_Particle_Fire_00', 'SLinkKey': 'Dm_SY_Ocarina_move_Ed'})
          case 8:
            Player_Event.EventTriggerEmitXLink({'ELinkKey': 'Dm_SY_Ocarina_move_Ed_Child_Particle_Water_00', 'SLinkKey': 'Dm_SY_Ocarina_move_Ed'})
          case 9:
            Player_Event.EventTriggerEmitXLink({'ELinkKey': 'Dm_SY_Ocarina_move_Ed_Child_Particle_Spirit_00', 'SLinkKey': 'Dm_SY_Ocarina_move_Ed'})
          case 10:
            Player_Event.EventTriggerEmitXLink({'ELinkKey': 'Dm_SY_Ocarina_move_Ed_Child_Particle_Shadow_00', 'SLinkKey': 'Dm_SY_Ocarina_move_Ed'})
          case 11:
            Player_Event.EventTriggerEmitXLink({'ELinkKey': 'Dm_SY_Ocarina_move_Ed_Child_Particle_Light_00', 'SLinkKey': 'Dm_SY_Ocarina_move_Ed'})
        }
    } else
    switch GameSystemActor.EventQueryMelodyTypeForNormal() {
      case 6:
        Player_Event.EventTriggerEmitXLink({'ELinkKey': 'Dm_SY_Ocarina_move_Ed_Particle_00', 'SLinkKey': 'Dm_SY_Ocarina_move_Ed'})
      case 7:
        Player_Event.EventTriggerEmitXLink({'ELinkKey': 'Dm_SY_Ocarina_move_Ed_Particle_Fire_00', 'SLinkKey': 'Dm_SY_Ocarina_move_Ed'})
      case 8:
        Player_Event.EventTriggerEmitXLink({'ELinkKey': 'Dm_SY_Ocarina_move_Ed_Particle_Water_00', 'SLinkKey': 'Dm_SY_Ocarina_move_Ed'})
      case 9:
        Player_Event.EventTriggerEmitXLink({'ELinkKey': 'Dm_SY_Ocarina_move_Ed_Particle_Spirit_00', 'SLinkKey': 'Dm_SY_Ocarina_move_Ed'})
      case 10:
        Player_Event.EventTriggerEmitXLink({'ELinkKey': 'Dm_SY_Ocarina_move_Ed_Particle_Shadow_00', 'SLinkKey': 'Dm_SY_Ocarina_move_Ed'})
      case 11:
        Player_Event.EventTriggerEmitXLink({'ELinkKey': 'Dm_SY_Ocarina_move_Ed_Particle_Light_00', 'SLinkKey': 'Dm_SY_Ocarina_move_Ed'})
    }
}

void CareEponaBranch() {
    Dm_Locator[pos].EventWarpToTargetPosAndRot({'Position': [-202.2899932861328, 131.75, 509.8299865722656], 'ClothWarpMode': -1, 'YAngle': 138.3159942626953, 'IsWaitEnd': True})
    if !GameSystemActor.EventQueryIsDistanceBetweenActorsClose({'ActorNameB': 'LastRiddenAnimal_ForEvent', 'IsAnchorActorA': False, 'InstanceNameB': '', 'IsAnchorActorB': False, 'IsTargetPlayingAllEvent': False, 'ActorNameA': 'Dm_Locator', 'InstanceNameA': 'pos', 'CheckDistance': 25.0}) {
        LastRiddenAnimal_ForEvent.EventWarpToTargetPosAndRot({'Position': [-198.0, 131.0, 507.0], 'IsWaitEnd': True, 'YAngle': 0.0, 'ClothWarpMode': -1})
        Player_Event.EventPlayerWarpToTargetActor({'IsWaitEnd': False, 'TargetActorKind': 1, 'ActorName': 'Dm_Locator', 'InstanceName': 'pos', 'OffsetBase': 1, 'PositionOffset': [0.0, 0.0, 0.0], 'YAngle': 0.0, 'UseDemoWait': True, 'ASCommand': 'EvtWait'})
    }
}
