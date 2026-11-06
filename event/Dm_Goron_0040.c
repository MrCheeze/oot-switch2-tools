-------- EventFlow: Dm_Goron_0040 --------

Actor: Player_Event
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventPlayerTurnAndLook', 'EventPlayerWait']
queries: ['EventQueryCheckPlayerState']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveCameraAnimationInstructionsForFlowchart', 'EventTriggerRequestCameraShake', 'EventMoveToTargetPosCamera', 'EventTriggerSendKeepStateMessageToPlayerCamera', 'EventTriggerSendReserveCameraResetMessageToPlayerCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: Obj_GoronCity_LargePot_A_01
entrypoint: None()
actions: ['EventGoronLargePotDropPrize', 'EventGoronLargePotPlayRouletteAS', 'EventTriggerGoronLargePotDeleteAndReservePrizeHolderData', 'EventTriggerEmitXLink']
queries: ['EventQueryGetGoronLargePotFaceType']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: SoundSystemActor
entrypoint: None()
actions: ['EventTriggerSoundReadRiddle', 'EventTriggerBanEmitSpecificSLinkUser']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: DevelopEventSystemActor
entrypoint: None()
actions: ['EventDemoProductSupportComment']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Npc_Navi
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventNaviMoveAroundToPlayer']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: Npc_Goron_003_Child
entrypoint: None()
actions: ['EventTriggerParticipateEvent', 'EventGoOffstageForUser']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Accessory4': ''}

Actor: Npc_Goron_006_Child
entrypoint: None()
actions: ['EventTriggerParticipateEvent']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_SubWeapon': '', 'EquipmentUser_SubWeapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_Tool': '', 'EquipmentUser_SubTool': '', 'EquipmentUser_Accessory1': '', 'EquipmentUser_Accessory2': '', 'EquipmentUser_Accessory3': '', 'EquipmentUser_Accessory4': ''}

Actor: PostProcessingActor
entrypoint: None()
actions: ['EventSetDoFForFlowchart']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventEffectEmitter
entrypoint: None()
actions: ['EventNodeEffectEmit']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor[1]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor[1]
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void EntryPoint0() {

    call Common.AirStartUp()


    call RoulettePot()

    Obj_GoronCity_LargePot_A_01.EventGoronLargePotDropPrize({'IsWaitEnd': True})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 50})

    fork {
        EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'IsWaitEnd': True, 'SceneName': 'C02-0', 'RootType': 0, 'IsIgnoreRootRot': False, 'CameraName': '', 'IsReferenceRootOnce': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False})
    } {
        DevelopEventSystemActor.EventDemoProductSupportComment({'IsWaitEnd': False, 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 150, 'BgAlignW': 0, 'BgAlignH': 0, 'Text4': '', 'Text3': '', 'Text2': '', 'Text1': 'C03'})
    }

    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 20})

    call AfterDrop()

}

void RoulettePot() {

    fork {

        call Player_Check()

    } {
        Npc_Goron_006_Child.EventTriggerParticipateEvent()
    } {

        fork {
            EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 90})
        } {
            EventCamera.EventTriggerRequestCameraShake({'Pattern': 1, 'ApplyType': 0, 'LoopEndCount': 1, 'Power': 3.0, 'IsRumbleController': True})
        } {
            Npc_Goron_003_Child.EventTriggerParticipateEvent()
        } {
            DevelopEventSystemActor.EventDemoProductSupportComment({'IsWaitEnd': False, 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 150, 'BgAlignW': 0, 'BgAlignH': 0, 'Text4': '', 'Text3': '', 'Text2': '', 'Text1': 'C01'})
        }


        fork {
            SoundSystemActor.EventTriggerBanEmitSpecificSLinkUser({'SLinkUserName': 'Npc_Goron_006_Child', 'CommandLife': 0, 'BanType': 0})
            EventCamera.EventMoveCameraAnimationInstructionsForFlowchart({'SceneName': 'C01-1', 'RootType': 0, 'IsWaitEnd': True, 'CameraName': '', 'IsIgnoreRootRot': False, 'IsReferenceRootOnce': False, 'TargetActorName': '', 'TargetActorInstanceName': '', 'OverwriteStartFrame': -1.0, 'OverwriteEndFrame': -1.0, 'IsLoop': False, 'InterpolateFrame': 0.0, 'CalcUpInInterpolate': False})
        } {
            Npc_Goron_003_Child.EventGoOffstageForUser({'IsWaitEnd': True, 'IsSleepXLink': True, 'ExecuteSetSpeedZeroEveryFrame': False, 'IsRidingTargetGoOffstage': False})
        } {
            DevelopEventSystemActor.EventDemoProductSupportComment({'IsWaitEnd': False, 'Text5': '', 'TextColor': 1, 'BgColor': 5, 'BgAlpha': 5, 'DispTime': 150, 'BgAlignW': 0, 'BgAlignH': 0, 'Text4': '', 'Text3': '', 'Text2': '', 'Text1': 'C02'})
        }

    } {
        if Obj_GoronCity_LargePot_A_01.EventQueryGetGoronLargePotFaceType() in [0, 1, 2] {
            Obj_GoronCity_LargePot_A_01.EventGoronLargePotPlayRouletteAS({'IsWaitEnd': True})
            Obj_GoronCity_LargePot_A_01.EventTriggerGoronLargePotDeleteAndReservePrizeHolderData()
        }
    } {
        PostProcessingActor.EventSetDoFForFlowchart({'IsWaitEnd': True, 'IsAutoFocalDist': False, 'EndDistance': 0.0, 'EndFNumber': 0.0, 'EndBluarLevel': 0.0, 'IsPrimaryApply': False, 'RequiredFrame': 0})
    } {
        Obj_GoronCity_LargePot_A_01.EventTriggerEmitXLink({'ELinkKey': 'Dm_Goron_0040_Explosion_C01', 'SLinkKey': ''})
        EventSystemActor[1].EventWait({'IsWaitEnd': True, 'Frames': 5})
        EventEffectEmitter.EventNodeEffectEmit({'ActorName': 'Obj_GoronCity_LargePot_A_01', 'IsWaitEnd': False, 'InstanceName': '', 'ELinkKeyName': 'Dm_Goron_0040_Smoke_C01'})
    }

}

void AfterDrop() {
    SoundSystemActor.EventTriggerSoundReadRiddle({'IsWaitEnd': True, 'BgmReadRiddleType': 0})
    EventSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 100})
    if !Player_Event.EventQueryCheckPlayerState({'State': 35}) {
        if !Player_Event.EventQueryCheckPlayerState({'State': 3}) {
            EventCamera.EventMoveToTargetPosCamera({'Actor1ActorName': 'Player_Event', 'PosVector': [0.0, 1.690000057220459, -3.7899999618530273], 'AtVector': [0.0, 1.3600000143051147, 0.0], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'IsPosVectorReferenceActorPosOnce': False, 'IsAtVectorReferenceActorPosOnce': False, 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveToTargetPosCalcMode': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
            EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'AfterKeepEndInterpolateCountScale': 0.0, 'KeepManualModeFrame': 120.0, 'IsKeepWithRelativePos': False, 'ChangeToManualModeAfterEvent': False})
        } else {
            EventCamera.EventMoveToTargetPosCamera({'IsWaitEnd': True, 'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'EnableCameraAlpha': True, 'Actor1ActorName': 'Player_Event', 'PosVector': [0.0, 1.2400000095367432, -4.909999847412109], 'AtVector': [0.0, 0.5899999737739563, -0.07999999821186066], 'TargetFovy': 50.0, 'PosVectorSetType': 3, 'AtVectorSetType': 3, 'IsPosVectorReferenceActorPosOnce': False, 'IsIgnorePosVectorReferenceActorRot': False, 'IsAtVectorReferenceActorPosOnce': False, 'MoveToTargetPosCalcMode': 0, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsEnableRevertFast': False})
            EventCamera.EventTriggerSendKeepStateMessageToPlayerCamera({'AfterKeepEndInterpolateCountScale': 0.0, 'KeepManualModeFrame': 120.0, 'ChangeToManualModeAfterEvent': False, 'IsKeepWithRelativePos': True})
        }
    } else {
        EventCamera.EventTriggerSendReserveCameraResetMessageToPlayerCamera({'CameraResetInterpolateCountScale': 0.0, 'CameraResetPolicy': 1})
    }
}

void Player_Check() {
    if !Player_Event.EventQueryCheckPlayerState({'State': 3}) {
        if !Player_Event.EventQueryCheckPlayerState({'State': 4}) {
            if !Player_Event.EventQueryCheckPlayerState({'State': 2}) {
                Event48:
                Player_Event.EventTriggerParticipateEvent()
                Npc_Navi.EventTriggerParticipateEvent()
                GameSystemActor[1].EventWait({'IsWaitEnd': True, 'Frames': 1})
                Player_Event.EventPlayerWait({'IsWaitEnd': False})
            } else {

                fork {
                    Player_Event.EventTriggerParticipateEvent()
                    GameSystemActor[1].EventWait({'IsWaitEnd': True, 'Frames': 1})
                    Player_Event.EventPlayerTurnAndLook({'Target': 3, 'TurnFaceControlType': 1, 'WorldPos': [0.0, 0.0, 0.0], 'Direction': 0.0, 'IsWaitEnd': True, 'OffsetBase': 0, 'UpperASCommand': '', 'UseNormalTurn': False, 'SlowTurn': True, 'ActorName': 'Obj_GoronCity_LargePot_A_01', 'InstanceName': '', 'PosOffset': [0.0, 3.0, 0.0], 'KeepTalkWait': False, 'IgnoreTargetPosMove': True, 'IsDoNavi': False})
                    Player_Event.EventPlayerWait({'IsWaitEnd': False})
                } {
                    Npc_Navi.EventTriggerParticipateEvent()
                    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 12})
                    Npc_Navi.EventNaviMoveAroundToPlayer({'IsWaitEnd': True, 'IsLookAtObject': True, 'LookAtActorName': 'Obj_GoronCity_LargePot_A_01', 'LookAtTarget': 3, 'LookAtPosOffset': [0.0, 1.0, 0.0], 'IsTurnLooking': True, 'LookAtInstanceName': '', 'LookAtWorldPos': [0.0, 0.0, 0.0], 'LookAtDirection': 0.0, 'LookAtOffsetBase': 0, 'IsUseDisguiseSpeakerPos': False, 'offset': [0.0, 0.0, 0.0], 'IsOffCenterCamera': False, 'PassThrough': -1.0, 'IncSpeedDistance': 0.0, 'IsHomePosition': True, 'IsNearOffset': True, 'MinimumSpeed': 0.30000001192092896, 'DecSpeedDistance': 0.30000001192092896, 'MoveSpeed': 0.5, 'ArrivedASCommand': 'EvtWait', 'OverwriteRotNearDist': -1.0, 'OffsetType': -1, 'IsUseAfterPlayerTurn': True})
                }

            }
        } else {
            goto Event48
        }
    } else {
        Player_Event.EventTriggerParticipateEvent()
        Npc_Navi.EventTriggerParticipateEvent()
    }
}
