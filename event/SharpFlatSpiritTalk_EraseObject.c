-------- EventFlow: SharpFlatSpiritTalk_EraseObject --------

Actor: Player_Event
entrypoint: None()
actions: ['EventPlayerWarpToTargetPosAndRot']
queries: ['EventQueryPlayerIsChild']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 4, 'BindTargetActorNameComponent': 'Player', 'EquipmentUser_Weapon': '', 'EquipmentUser_Weapon_EquipmentState': 0, 'EquipmentUser_Shield': '', 'EquipmentUser_Shield_EquipmentState': 0, 'EquipmentUser_Bow': '', 'EquipmentUser_Bow_EquipmentState': 0, 'EquipmentUser_ArmorHead': '', 'EquipmentUser_ArmorUpper': '', 'EquipmentUser_ArmorLower': ''}

Actor: GameDataActor
entrypoint: None()
actions: ['EventTriggerExcludeNextTalkChoice', 'EventTriggerSetGameDataBool']
queries: ['EventQueryIsGameDataBool']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: GameSystemActor
entrypoint: None()
actions: ['EventWait']
queries: ['EventQueryTalkChoice3', 'EventQueryTalkChoice4']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventSystemActor
entrypoint: None()
actions: ['EventWait']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Obj_Spirit_PoeSharp
entrypoint: None()
actions: ['EventWarpToTargetPosAndRot', 'EventTriggerDeleteSelf', 'EventTriggerEmitXLink', 'EventPoeSpiritTalk']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: EventCamera
entrypoint: None()
actions: ['EventMoveToTargetPosCamera']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない', 'ExceptionalBindType': 3}

Actor: UISystemActor
entrypoint: None()
actions: ['EventEventFadeIn']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: Obj_Spirit_PoeFlat
entrypoint: None()
actions: ['EventTriggerDeleteSelf', 'EventWarpToTargetPosAndRot', 'EventTriggerEmitXLink', 'EventPoeSpiritTalk']
queries: []
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

Actor: PouchSystemActor
entrypoint: None()
actions: []
queries: ['EventQueryIsExistInPouch']
params: {'EventMemberCreateMethod': 0, 'IsBindNearestActor': False, 'IsGrounding': False, 'IsWorld': False, 'UseEventModelAnime': '使用しない', 'UseEventAS': '使用しない'}

void SharpTalk() {
    Player_Event.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'UseDemoWait': True, 'YAngle': 135.0, 'ASCommand': 'EvtWait', 'Position': [40.619998931884766, 104.5, -0.009999999776482582], 'ClothWarpMode': 0, 'EnableInAir': False})
    Obj_Spirit_PoeSharp.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': -40.0, 'ClothWarpMode': -1, 'Position': [41.9900016784668, 105.4000015258789, -1.350000023841858]})
    if !Player_Event.EventQueryPlayerIsChild() {
        EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': False, 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'Actor1ActorName': '', 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'PosVector': [39.25, 105.41999816894531, -0.1599999964237213], 'AtVector': [42.349998474121094, 105.5, -0.8299999833106995], 'TargetFovy': 50.0, 'IsEnableRevertFast': False})
    } else {
        EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': False, 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'Actor1ActorName': '', 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'PosVector': [38.90999984741211, 105.7699966430664, -0.15000000596046448], 'AtVector': [42.849998474121094, 105.72000122070312, -0.8500000238418579], 'TargetFovy': 50.0, 'IsEnableRevertFast': False})
    }

    call NaviEventCommon.NaviWarp_PlayerHomePos_Choice({'IsLookAtPlayer': False, 'IsLeft': False})

    EventSystemActor.EventWait({'Frames': 60, 'IsWaitEnd': True})
    UISystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    Obj_Spirit_PoeSharp.EventPoeSpiritTalk({'ChoiceLabel1': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Enemy_Event:SharpFlatSpiritTalk_47', 'MaintainPerformanceState': 0})
    Obj_Spirit_PoeSharp.EventPoeSpiritTalk({'ChoiceLabel1': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Enemy_Event:SharpFlatSpiritTalk_40', 'MaintainPerformanceState': 0})
    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'GraveYard_Field_Sharp_Talked'})
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'RoyalFamilyTomb_MelodyGet_Clear'}) {

        call MelodyGet_Sun_SubEvent.MelodyGet_Sun_ListenTips_Sharp()

    } else {
        Obj_Spirit_PoeSharp.EventPoeSpiritTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Enemy_Event:SharpFlatSpiritTalk_43', 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MaintainPerformanceState': 0})
        if !Player_Event.EventQueryPlayerIsChild() {
            Obj_Spirit_PoeSharp.EventPoeSpiritTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 201, 'ChoiceLabel2': 202, 'ChoiceNumber': 3, 'ChoiceLabel3': 204, 'MessageId': 'EventFlowMsg/Enemy_Event:SharpFlatSpiritTalk_49', 'MaintainPerformanceState': 0})
            Event29:
            switch GameSystemActor.EventQueryTalkChoice3() {
              case 0:
                Obj_Spirit_PoeSharp.EventPoeSpiritTalk({'MessageId': 'EventFlowMsg/Enemy_Event:SharpFlatSpiritTalk_50', 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0})
                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GraveYard_RoyalFamilyTomb_Open'}) {
                    Obj_Spirit_PoeSharp.EventPoeSpiritTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Enemy_Event:SharpFlatSpiritTalk_127', 'MaintainPerformanceState': 0})
                }
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.SharpFlatSpiritTalk_EraseObject_SharpTalk_Event203', 'Value': True, 'Index': -1})
                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 2})
                if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.SharpFlatSpiritTalk_EraseObject_SharpTalk_Event30', 'Index': -1}) {
                    Event52:
                    Obj_Spirit_PoeSharp.EventPoeSpiritTalk({'MessageId': 'EventFlowMsg/Enemy_Event:SharpFlatSpiritTalk_69', 'EndDialogOption': 2, 'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsCloseDialog': True, 'MaintainPerformanceState': 0})
                    Event32:
                    Obj_Spirit_PoeSharp.EventTriggerEmitXLink({'ELinkKey': 'Dm_SharpFlatSpiritTalk_EraseObject_00', 'SLinkKey': 'Dm_SharpFlatSpiritTalk_EraseObject_00'})
                    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
                    Obj_Spirit_PoeSharp.EventTriggerDeleteSelf()
                    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
                } else {
                    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 2})
                    Event37:
                    GameDataActor.EventTriggerExcludeNextTalkChoice({'ChoiceExcludeGameData3': '', 'ChoiceExcludeGameData4': '', 'ChoiceExcludeGameData5': '', 'IsInvertGameData1': False, 'IsInvertGameData2': False, 'IsInvertGameData3': False, 'IsInvertGameData4': False, 'IsInvertGameData5': False, 'ChoiceExcludeGameData1': 'HaveTalked_Special.SharpFlatSpiritTalk_EraseObject_SharpTalk_Event203', 'ChoiceExcludeGameData2': 'HaveTalked_Special.SharpFlatSpiritTalk_EraseObject_SharpTalk_Event30'})
                    Obj_Spirit_PoeSharp.EventPoeSpiritTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 201, 'ChoiceLabel2': 202, 'ChoiceNumber': 3, 'ChoiceLabel3': 204, 'MessageId': 'EventFlowMsg/Enemy_Event:SharpFlatSpiritTalk_51', 'MaintainPerformanceState': 0})
                    goto Event29
                }
              case 1:
                Obj_Spirit_PoeSharp.EventPoeSpiritTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Enemy_Event:SharpFlatSpiritTalk_44', 'ChoiceLabel1': 201, 'IsCloseDialog': False, 'ChoiceLabel2': 202, 'ChoiceNumber': 0, 'MaintainPerformanceState': 0})
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.SharpFlatSpiritTalk_EraseObject_SharpTalk_Event30', 'Value': True, 'Index': -1})
                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 2})
                if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.SharpFlatSpiritTalk_EraseObject_SharpTalk_Event203', 'Index': -1}) {
                    goto Event52
                } else {
                    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 2})
                    goto Event37
                }
              case 2:
                Obj_Spirit_PoeSharp.EventPoeSpiritTalk({'MessageId': 'EventFlowMsg/Enemy_Event:SharpFlatSpiritTalk_88', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0})

                call Spirit_Sharp_Off()

            }
        } else
        if !PouchSystemActor.EventQueryIsExistInPouch({'Actor': 'Item_Hookshot', 'Num': 1}) {
            Obj_Spirit_PoeSharp.EventPoeSpiritTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Enemy_Event:SharpFlatSpiritTalk_49', 'MaintainPerformanceState': 0, 'ChoiceLabel3': 204, 'ChoiceLabel2': 202, 'ChoiceNumber': 3, 'ChoiceLabel1': 201, 'ChoiceLabel4': 0})
            Event137:
            switch GameSystemActor.EventQueryTalkChoice3() {
              case 0:
                Obj_Spirit_PoeSharp.EventPoeSpiritTalk({'MessageId': 'EventFlowMsg/Enemy_Event:SharpFlatSpiritTalk_50', 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0})
                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GraveYard_RoyalFamilyTomb_Open'}) {
                    Obj_Spirit_PoeSharp.EventPoeSpiritTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Enemy_Event:SharpFlatSpiritTalk_127', 'MaintainPerformanceState': 0})
                }
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.SharpFlatSpiritTalk_EraseObject_SharpTalk_Event100', 'Value': True, 'Index': -1})
                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 2})
                Event20:
                if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.SharpFlatSpiritTalk_EraseObject_SharpTalk_Event100', 'Index': -1}) {
                    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.SharpFlatSpiritTalk_EraseObject_SharpTalk_Event21', 'Index': -1}) {
                        goto Event52
                    } else {
                        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 2})
                        Event58:
                        GameDataActor.EventTriggerExcludeNextTalkChoice({'ChoiceExcludeGameData4': '', 'ChoiceExcludeGameData5': '', 'IsInvertGameData1': False, 'IsInvertGameData2': False, 'IsInvertGameData3': False, 'IsInvertGameData4': False, 'IsInvertGameData5': False, 'ChoiceExcludeGameData3': '', 'ChoiceExcludeGameData1': 'HaveTalked_Special.SharpFlatSpiritTalk_EraseObject_SharpTalk_Event100', 'ChoiceExcludeGameData2': 'HaveTalked_Special.SharpFlatSpiritTalk_EraseObject_SharpTalk_Event21'})
                        Obj_Spirit_PoeSharp.EventPoeSpiritTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 201, 'ChoiceLabel4': 204, 'MessageId': 'EventFlowMsg/Enemy_Event:SharpFlatSpiritTalk_51', 'MaintainPerformanceState': 0, 'ChoiceLabel2': 202, 'ChoiceLabel3': 204, 'ChoiceNumber': 3})
                        goto Event137
                    }
                } else {
                    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 2})
                    goto Event58
                }
              case 1:
                Obj_Spirit_PoeSharp.EventPoeSpiritTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Enemy_Event:SharpFlatSpiritTalk_44', 'ChoiceLabel1': 201, 'IsCloseDialog': False, 'ChoiceLabel2': 203, 'ChoiceLabel3': 202, 'ChoiceNumber': 0, 'MaintainPerformanceState': 0})
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.SharpFlatSpiritTalk_EraseObject_SharpTalk_Event21', 'Value': True, 'Index': -1})
                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 2})
                goto Event20
              case 2:
                Obj_Spirit_PoeSharp.EventPoeSpiritTalk({'MessageId': 'EventFlowMsg/Enemy_Event:SharpFlatSpiritTalk_88', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0})

                call Spirit_Sharp_Off()

            }
        } else {
            Obj_Spirit_PoeSharp.EventPoeSpiritTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 201, 'ChoiceLabel2': 203, 'ChoiceLabel3': 202, 'ChoiceNumber': 4, 'ChoiceLabel4': 204, 'MessageId': 'EventFlowMsg/Enemy_Event:SharpFlatSpiritTalk_49', 'MaintainPerformanceState': 0})
            Event40:
            switch GameSystemActor.EventQueryTalkChoice4() {
              case 0:
                Obj_Spirit_PoeSharp.EventPoeSpiritTalk({'MessageId': 'EventFlowMsg/Enemy_Event:SharpFlatSpiritTalk_50', 'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0})
                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GraveYard_RoyalFamilyTomb_Open'}) {
                    Obj_Spirit_PoeSharp.EventPoeSpiritTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Enemy_Event:SharpFlatSpiritTalk_127', 'MaintainPerformanceState': 0})
                }
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.SharpFlatSpiritTalk_EraseObject_SharpTalk_Event204', 'Value': True, 'Index': -1})
                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 2})
                Event72:
                if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.SharpFlatSpiritTalk_EraseObject_SharpTalk_Event204', 'Index': -1}) {
                    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.SharpFlatSpiritTalk_EraseObject_SharpTalk_Event45', 'Index': -1}) {
                        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.SharpFlatSpiritTalk_EraseObject_SharpTalk_Event44', 'Index': -1}) {
                            goto Event52
                        } else {
                            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 2})
                            Event41:
                            GameDataActor.EventTriggerExcludeNextTalkChoice({'ChoiceExcludeGameData4': '', 'ChoiceExcludeGameData5': '', 'IsInvertGameData1': False, 'IsInvertGameData2': False, 'IsInvertGameData3': False, 'IsInvertGameData4': False, 'IsInvertGameData5': False, 'ChoiceExcludeGameData2': 'HaveTalked_Special.SharpFlatSpiritTalk_EraseObject_SharpTalk_Event44', 'ChoiceExcludeGameData1': 'HaveTalked_Special.SharpFlatSpiritTalk_EraseObject_SharpTalk_Event204', 'ChoiceExcludeGameData3': 'HaveTalked_Special.SharpFlatSpiritTalk_EraseObject_SharpTalk_Event45'})
                            Obj_Spirit_PoeSharp.EventPoeSpiritTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 201, 'ChoiceLabel2': 203, 'ChoiceLabel3': 202, 'ChoiceNumber': 4, 'ChoiceLabel4': 204, 'MessageId': 'EventFlowMsg/Enemy_Event:SharpFlatSpiritTalk_51', 'MaintainPerformanceState': 0})
                            goto Event40
                        }
                    } else {
                        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 2})
                        goto Event41
                    }
                } else {
                    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 2})
                    goto Event41
                }
              case 1:
                Obj_Spirit_PoeSharp.EventPoeSpiritTalk({'MessageId': 'EventFlowMsg/Enemy_Event:SharpFlatSpiritTalk_74', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0})
                Obj_Spirit_PoeSharp.EventPoeSpiritTalk({'MessageId': 'EventFlowMsg/Enemy_Event:SharpFlatSpiritTalk_76', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0})
                Obj_Spirit_PoeSharp.EventPoeSpiritTalk({'MessageId': 'EventFlowMsg/Enemy_Event:SharpFlatSpiritTalk_77', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0})
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.SharpFlatSpiritTalk_EraseObject_SharpTalk_Event44', 'Value': True, 'Index': -1})
                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 2})
                goto Event72
              case 2:
                Obj_Spirit_PoeSharp.EventPoeSpiritTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Enemy_Event:SharpFlatSpiritTalk_44', 'ChoiceLabel1': 201, 'IsCloseDialog': False, 'ChoiceLabel2': 203, 'ChoiceLabel3': 202, 'ChoiceNumber': 0, 'MaintainPerformanceState': 0})
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.SharpFlatSpiritTalk_EraseObject_SharpTalk_Event45', 'Value': True, 'Index': -1})
                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 2})
                goto Event72
              case 3:
                Obj_Spirit_PoeSharp.EventPoeSpiritTalk({'MessageId': 'EventFlowMsg/Enemy_Event:SharpFlatSpiritTalk_88', 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MaintainPerformanceState': 0})

                call Spirit_Sharp_Off()

            }
        }
    }
}

void FlatTalk() {
    Player_Event.EventPlayerWarpToTargetPosAndRot({'IsWaitEnd': True, 'UseDemoWait': True, 'YAngle': 45.0, 'Position': [40.630001068115234, 104.5, 5.210000038146973], 'ASCommand': 'EvtWait', 'ClothWarpMode': 0, 'EnableInAir': False})
    Obj_Spirit_PoeFlat.EventWarpToTargetPosAndRot({'IsWaitEnd': True, 'YAngle': 225.0, 'ClothWarpMode': -1, 'Position': [41.75, 105.4000015258789, 6.349999904632568]})
    if !Player_Event.EventQueryPlayerIsChild() {
        EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': False, 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'Actor1ActorName': '', 'PosVector': [39.150001525878906, 105.43000030517578, 5.349999904632568], 'AtVector': [42.93000030517578, 105.5, 6.150000095367432], 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    } else {
        EventCamera.EventMoveToTargetPosCamera({'Actor1InstanceName': '', 'Actor2ActorName': '', 'Actor2InstanceName': '', 'LookAtDis': -1.0, 'FovySetType': 0, 'MoveTime': 0, 'StartAccelerateRate': 0.0, 'EndRecelerateRate': 0.0, 'IsLinearMove': False, 'MoveTotargetPosType': 0, 'CameraCollisionMode': 1, 'CameraCollisionLookAtActor': 0, 'CameraCollisionLookAtActorOffset': [0.0, 1.5, 0.0], 'LatShiftRange': 0.0, 'LongShiftRange': 0.0, 'IsPosVectorReferenceActorPosOnce': True, 'IsAtVectorReferenceActorPosOnce': True, 'IsIgnorePosVectorReferenceActorRot': False, 'IsIgnoreAtVectorReferenceActorRot': False, 'IsWaitEnd': False, 'PosVectorSetType': 0, 'AtVectorSetType': 0, 'Actor1ActorName': '', 'PosVector': [38.619998931884766, 105.58999633789062, 5.239999771118164], 'AtVector': [42.93000030517578, 105.66999816894531, 6.150000095367432], 'TargetFovy': 50.0, 'MoveToTargetPosCalcMode': 0, 'MoveTimeLater': 0, 'DelayLater': 0, 'EnableCameraAlpha': True, 'IsEnableRevertFast': False})
    }

    call NaviEventCommon.NaviWarp_PlayerHomePos_Choice({'IsLookAtPlayer': False, 'IsLeft': True})

    EventSystemActor.EventWait({'Frames': 60, 'IsWaitEnd': True})
    UISystemActor.EventEventFadeIn({'IsWaitEnd': True, 'IsNoPlayAnime': False, 'Color': 0, 'Length': 1})
    Obj_Spirit_PoeFlat.EventPoeSpiritTalk({'ChoiceLabel1': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Enemy_Event:SharpFlatSpiritTalk_95', 'MaintainPerformanceState': 0})
    Obj_Spirit_PoeFlat.EventPoeSpiritTalk({'ChoiceLabel1': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Enemy_Event:SharpFlatSpiritTalk_40', 'MaintainPerformanceState': 0})
    Obj_Spirit_PoeFlat.EventPoeSpiritTalk({'ChoiceLabel1': 0, 'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceNumber': 0, 'ChoiceLabel2': 0, 'MessageId': 'EventFlowMsg/Enemy_Event:SharpFlatSpiritTalk_125', 'MaintainPerformanceState': 0})
    GameDataActor.EventTriggerSetGameDataBool({'Value': True, 'Index': -1, 'GameDataName': 'GraveYard_Field_Flat_Talked'})
    if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'RoyalFamilyTomb_MelodyGet_Clear'}) {

        call MelodyGet_Sun_SubEvent.MelodyGet_Sun_ListenTips_Flat()

    } else {
        Obj_Spirit_PoeFlat.EventPoeSpiritTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Enemy_Event:SharpFlatSpiritTalk_43', 'ChoiceCancelNo': 0, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'MaintainPerformanceState': 0})
        if !Player_Event.EventQueryPlayerIsChild() {
            Obj_Spirit_PoeFlat.EventPoeSpiritTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 201, 'ChoiceLabel2': 202, 'ChoiceNumber': 3, 'ChoiceLabel3': 204, 'MessageId': 'EventFlowMsg/Enemy_Event:SharpFlatSpiritTalk_49', 'MaintainPerformanceState': 0})
            Event131:
            switch GameSystemActor.EventQueryTalkChoice3() {
              case 0:
                Obj_Spirit_PoeFlat.EventPoeSpiritTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Enemy_Event:SharpFlatSpiritTalk_110', 'MaintainPerformanceState': 0})
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GraveYard_RoyalFamilyTomb_Open'}) {
                    Obj_Spirit_PoeFlat.EventPoeSpiritTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Enemy_Event:SharpFlatSpiritTalk_127', 'MaintainPerformanceState': 0})
                }
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.SharpFlatSpiritTalk_EraseObject_FlatTalk_Event205', 'Value': True, 'Index': -1})
                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 2})
                if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.SharpFlatSpiritTalk_EraseObject_FlatTalk_Event124', 'Index': -1}) {
                    Event141:
                    Obj_Spirit_PoeFlat.EventPoeSpiritTalk({'EndDialogOption': 2, 'IsWaitEnd': True, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'IsCloseDialog': True, 'MessageId': 'EventFlowMsg/Enemy_Event:SharpFlatSpiritTalk_111', 'MaintainPerformanceState': 0})
                    Event82:
                    Obj_Spirit_PoeFlat.EventTriggerEmitXLink({'ELinkKey': 'Dm_SharpFlatSpiritTalk_EraseObject_00', 'SLinkKey': 'Dm_SharpFlatSpiritTalk_EraseObject_00'})
                    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 10})
                    Obj_Spirit_PoeFlat.EventTriggerDeleteSelf()
                    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 60})
                } else {
                    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 2})
                    Event132:
                    GameDataActor.EventTriggerExcludeNextTalkChoice({'ChoiceExcludeGameData3': '', 'ChoiceExcludeGameData4': '', 'ChoiceExcludeGameData5': '', 'IsInvertGameData1': False, 'IsInvertGameData2': False, 'IsInvertGameData3': False, 'IsInvertGameData4': False, 'IsInvertGameData5': False, 'ChoiceExcludeGameData1': 'HaveTalked_Special.SharpFlatSpiritTalk_EraseObject_FlatTalk_Event205', 'ChoiceExcludeGameData2': 'HaveTalked_Special.SharpFlatSpiritTalk_EraseObject_FlatTalk_Event124'})
                    Obj_Spirit_PoeFlat.EventPoeSpiritTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 201, 'ChoiceLabel2': 202, 'ChoiceNumber': 3, 'ChoiceLabel3': 204, 'MessageId': 'EventFlowMsg/Enemy_Event:SharpFlatSpiritTalk_51', 'MaintainPerformanceState': 0})
                    goto Event131
                }
              case 1:
                Obj_Spirit_PoeFlat.EventPoeSpiritTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 201, 'IsCloseDialog': False, 'ChoiceLabel2': 202, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Enemy_Event:SharpFlatSpiritTalk_108', 'MaintainPerformanceState': 0})
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.SharpFlatSpiritTalk_EraseObject_FlatTalk_Event124', 'Value': True, 'Index': -1})
                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 2})
                if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.SharpFlatSpiritTalk_EraseObject_FlatTalk_Event205', 'Index': -1}) {
                    goto Event141
                } else {
                    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 2})
                    goto Event132
                }
              case 2:
                Obj_Spirit_PoeFlat.EventPoeSpiritTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Enemy_Event:SharpFlatSpiritTalk_115', 'MaintainPerformanceState': 0})

                call SpiritFlat_Off()

            }
        } else
        if !PouchSystemActor.EventQueryIsExistInPouch({'Actor': 'Item_Hookshot', 'Num': 1}) {
            Obj_Spirit_PoeFlat.EventPoeSpiritTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 201, 'MessageId': 'EventFlowMsg/Enemy_Event:SharpFlatSpiritTalk_49', 'MaintainPerformanceState': 0, 'ChoiceLabel3': 204, 'ChoiceNumber': 3, 'ChoiceLabel2': 202, 'ChoiceLabel4': 0})
            Event110:
            switch GameSystemActor.EventQueryTalkChoice3() {
              case 0:
                Obj_Spirit_PoeFlat.EventPoeSpiritTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Enemy_Event:SharpFlatSpiritTalk_110', 'MaintainPerformanceState': 0})
                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GraveYard_RoyalFamilyTomb_Open'}) {
                    Obj_Spirit_PoeFlat.EventPoeSpiritTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Enemy_Event:SharpFlatSpiritTalk_127', 'MaintainPerformanceState': 0})
                }
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.SharpFlatSpiritTalk_EraseObject_FlatTalk_Event159', 'Value': True, 'Index': -1})
                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 2})
                Event138:
                if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.SharpFlatSpiritTalk_EraseObject_FlatTalk_Event159', 'Index': -1}) {
                    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.SharpFlatSpiritTalk_EraseObject_FlatTalk_Event134', 'Index': -1}) {
                        goto Event141
                    } else {
                        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 2})
                        Event155:
                        GameDataActor.EventTriggerExcludeNextTalkChoice({'ChoiceExcludeGameData4': '', 'ChoiceExcludeGameData5': '', 'IsInvertGameData1': False, 'IsInvertGameData2': False, 'IsInvertGameData3': False, 'IsInvertGameData4': False, 'IsInvertGameData5': False, 'ChoiceExcludeGameData3': '', 'ChoiceExcludeGameData1': 'HaveTalked_Special.SharpFlatSpiritTalk_EraseObject_FlatTalk_Event159', 'ChoiceExcludeGameData2': 'HaveTalked_Special.SharpFlatSpiritTalk_EraseObject_FlatTalk_Event134'})
                        Obj_Spirit_PoeFlat.EventPoeSpiritTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 201, 'ChoiceLabel4': 204, 'MessageId': 'EventFlowMsg/Enemy_Event:SharpFlatSpiritTalk_51', 'MaintainPerformanceState': 0, 'ChoiceNumber': 3, 'ChoiceLabel2': 202, 'ChoiceLabel3': 204})
                        goto Event110
                    }
                } else {
                    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 2})
                    goto Event155
                }
              case 1:
                Obj_Spirit_PoeFlat.EventPoeSpiritTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 201, 'IsCloseDialog': False, 'ChoiceLabel2': 203, 'ChoiceLabel3': 202, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Enemy_Event:SharpFlatSpiritTalk_108', 'MaintainPerformanceState': 0})
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.SharpFlatSpiritTalk_EraseObject_FlatTalk_Event134', 'Value': True, 'Index': -1})
                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 2})
                goto Event138
              case 2:
                Obj_Spirit_PoeFlat.EventPoeSpiritTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Enemy_Event:SharpFlatSpiritTalk_115', 'MaintainPerformanceState': 0})

                call SpiritFlat_Off()

            }
        } else {
            Obj_Spirit_PoeFlat.EventPoeSpiritTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 201, 'ChoiceLabel2': 203, 'ChoiceLabel3': 202, 'ChoiceNumber': 4, 'ChoiceLabel4': 204, 'MessageId': 'EventFlowMsg/Enemy_Event:SharpFlatSpiritTalk_49', 'MaintainPerformanceState': 0})
            Event142:
            switch GameSystemActor.EventQueryTalkChoice4() {
              case 0:
                Obj_Spirit_PoeFlat.EventPoeSpiritTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Enemy_Event:SharpFlatSpiritTalk_110', 'MaintainPerformanceState': 0})
                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 30})
                if !GameDataActor.EventQueryIsGameDataBool({'Index': -1, 'GameDataName': 'GraveYard_RoyalFamilyTomb_Open'}) {
                    Obj_Spirit_PoeFlat.EventPoeSpiritTalk({'IsCloseDialog': True, 'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Enemy_Event:SharpFlatSpiritTalk_127', 'MaintainPerformanceState': 0})
                }
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.SharpFlatSpiritTalk_EraseObject_FlatTalk_Event206', 'Value': True, 'Index': -1})
                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 2})
                Event74:
                if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.SharpFlatSpiritTalk_EraseObject_FlatTalk_Event206', 'Index': -1}) {
                    if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.SharpFlatSpiritTalk_EraseObject_FlatTalk_Event145', 'Index': -1}) {
                        if !GameDataActor.EventQueryIsGameDataBool({'GameDataName': 'HaveTalked_Special.SharpFlatSpiritTalk_EraseObject_FlatTalk_Event144', 'Index': -1}) {
                            goto Event141
                        } else {
                            GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 2})
                            Event143:
                            GameDataActor.EventTriggerExcludeNextTalkChoice({'ChoiceExcludeGameData4': '', 'ChoiceExcludeGameData5': '', 'IsInvertGameData1': False, 'IsInvertGameData2': False, 'IsInvertGameData3': False, 'IsInvertGameData4': False, 'IsInvertGameData5': False, 'ChoiceExcludeGameData1': 'HaveTalked_Special.SharpFlatSpiritTalk_EraseObject_FlatTalk_Event206', 'ChoiceExcludeGameData2': 'HaveTalked_Special.SharpFlatSpiritTalk_EraseObject_FlatTalk_Event144', 'ChoiceExcludeGameData3': 'HaveTalked_Special.SharpFlatSpiritTalk_EraseObject_FlatTalk_Event145'})
                            Obj_Spirit_PoeFlat.EventPoeSpiritTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 201, 'ChoiceLabel2': 203, 'ChoiceLabel3': 202, 'ChoiceNumber': 4, 'ChoiceLabel4': 204, 'MessageId': 'EventFlowMsg/Enemy_Event:SharpFlatSpiritTalk_51', 'MaintainPerformanceState': 0})
                            goto Event142
                        }
                    } else {
                        GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 2})
                        goto Event143
                    }
                } else {
                    GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 2})
                    goto Event143
                }
              case 1:
                Obj_Spirit_PoeFlat.EventPoeSpiritTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Enemy_Event:SharpFlatSpiritTalk_112', 'MaintainPerformanceState': 0})
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.SharpFlatSpiritTalk_EraseObject_FlatTalk_Event144', 'Value': True, 'Index': -1})
                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 2})
                goto Event74
              case 2:
                Obj_Spirit_PoeFlat.EventPoeSpiritTalk({'IsWaitEnd': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'ChoiceLabel1': 201, 'IsCloseDialog': False, 'ChoiceLabel2': 203, 'ChoiceLabel3': 202, 'ChoiceNumber': 0, 'MessageId': 'EventFlowMsg/Enemy_Event:SharpFlatSpiritTalk_108', 'MaintainPerformanceState': 0})
                GameDataActor.EventTriggerSetGameDataBool({'GameDataName': 'HaveTalked_Special.SharpFlatSpiritTalk_EraseObject_FlatTalk_Event145', 'Value': True, 'Index': -1})
                GameSystemActor.EventWait({'IsWaitEnd': True, 'Frames': 2})
                goto Event74
              case 3:
                Obj_Spirit_PoeFlat.EventPoeSpiritTalk({'IsWaitEnd': True, 'IsCloseDialog': True, 'EndDialogOption': 0, 'ASName': '', 'IsAnimeDriven': False, 'IsPlayASAllSlot': False, 'ChoiceNumber': 0, 'ChoiceLabel1': 0, 'ChoiceLabel2': 0, 'ChoiceLabel3': 0, 'ChoiceLabel4': 0, 'ChoiceDefaultNo': 0, 'ChoiceCancelNo': 0, 'IsNotBecomeSpeaker': False, 'ChangeMstxtForActor': False, 'IsAnonymous': False, 'NotPlayLipSyncAnim': False, 'IsOverrideStyle': False, 'OverrideStyle': 0, 'IsNotOpenIfSkipedMostRecent': False, 'MessageId': 'EventFlowMsg/Enemy_Event:SharpFlatSpiritTalk_115', 'MaintainPerformanceState': 0})

                call SpiritFlat_Off()

            }
        }
    }
}

void SpiritFlat_Off() {
    goto Event82
}

void Spirit_Sharp_Off() {
    goto Event32
}
