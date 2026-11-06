-------- Event timeline: Dm_StaffCredit_0010_Env --------
actors: 5
clips: 487
oneshots: 0
cuts: 1
duration: 2940.0
params: (none)

===== Cuts =====

Cut: cut1
start time: 0.0
x4: 0
params: (none)


===== Actors =====

Actor: PostProcessingActor[0]
concurrent clips: 2
actions: ['EventCreateLocationalLightToEventCenter', 'EventEditLocationalLight']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: PostProcessingActor[1]
concurrent clips: 2
actions: ['EventCreateLocationalLightToEventCenter', 'EventEditLocationalLight']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: EventWorldManagerController[0]
concurrent clips: 1
actions: ['Event_SetEnvPaletteForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: EventWorldManagerController[1]
concurrent clips: 1
actions: ['Event_SetDemoPaletteForTimeline']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない

Actor: PostProcessingActor
concurrent clips: 1
actions: ['EventEditLocationalLightAmplifier']
params: EventMemberCreateMethod: 0
IsBindNearestActor: false
IsGrounding: false
IsWorld: false
UseEventAS: 使用しない
UseEventModelAnime: 使用しない


===== Timeline =====

[      0.0] E PostProcessingActor[0] - EventCreateLocationalLightToEventCenter (#0, concurrent=0)
               duration: 2941.0
               Direction:
               - -0.008999999612569809
               - 0.9390000104904175
               - -0.34200000762939453
               InnerAngle: 17.214000701904297
               IsIgnoreRot: false
               LightHash: key
               LightType: 1
               OuterAngle: 65.0
               PositionOffset:
               - 0.0
               - -2.0
               - 0.8080000281333923
[      0.0] E PostProcessingActor[0] - EventEditLocationalLight (#1, concurrent=1)
               duration: 10.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 10
               Intensity: 255.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[      0.0] E PostProcessingActor[1] - EventCreateLocationalLightToEventCenter (#226, concurrent=0)
               duration: 2941.0
               Direction:
               - 0.0
               - 0.5400000214576721
               - -0.8479999899864197
               InnerAngle: 3.3329999446868896
               IsIgnoreRot: false
               LightHash: add
               LightType: 1
               OuterAngle: 10.833000183105469
               PositionOffset:
               - 0.0
               - -2.0
               - 3.5859999656677246
[      0.0] E PostProcessingActor[1] - EventEditLocationalLight (#227, concurrent=1)
               duration: 2941.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: false
               FrameTransitionCount: 0
               Intensity: 280.0
               IsFrameTransition: false
               LightHash: add
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[      0.0] E EventWorldManagerController[0] - Event_SetEnvPaletteForTimeline (#228, concurrent=0)
               duration: 2940.0
               ChangeSpeed: 5
               EnvPaletteName: Dm_StaffCredit_0010
               EnvTimeTableName: ''
               IsWaitEnd: true
[      0.0] E EventWorldManagerController[1] - Event_SetDemoPaletteForTimeline (#229, concurrent=0)
               duration: 560.0
               DemoPaletteName: Dm_StaffCredit_0010_C01
               IsWaitEnd: true
[      0.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#232, concurrent=0)
               duration: 10.0
               Coef: 0.8500000238418579
               FrameTransitionCount: 10
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[     10.0] L PostProcessingActor[0] - EventEditLocationalLight (#1, concurrent=1)
[     10.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#232, concurrent=0)
[     10.0] E PostProcessingActor[0] - EventEditLocationalLight (#2, concurrent=1)
               duration: 10.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 10
               Intensity: 255.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[     10.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#233, concurrent=0)
               duration: 10.0
               Coef: 0.8500000238418579
               FrameTransitionCount: 10
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[     20.0] L PostProcessingActor[0] - EventEditLocationalLight (#2, concurrent=1)
[     20.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#233, concurrent=0)
[     20.0] E PostProcessingActor[0] - EventEditLocationalLight (#3, concurrent=1)
               duration: 10.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 10
               Intensity: 300.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[     20.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#234, concurrent=0)
               duration: 10.0
               Coef: 1.0
               FrameTransitionCount: 10
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[     30.0] L PostProcessingActor[0] - EventEditLocationalLight (#3, concurrent=1)
[     30.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#234, concurrent=0)
[     30.0] E PostProcessingActor[0] - EventEditLocationalLight (#4, concurrent=1)
               duration: 18.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 18
               Intensity: 264.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[     30.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#235, concurrent=0)
               duration: 18.0
               Coef: 0.8799999952316284
               FrameTransitionCount: 18
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[     48.0] L PostProcessingActor[0] - EventEditLocationalLight (#4, concurrent=1)
[     48.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#235, concurrent=0)
[     48.0] E PostProcessingActor[0] - EventEditLocationalLight (#5, concurrent=1)
               duration: 22.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 22
               Intensity: 345.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[     48.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#236, concurrent=0)
               duration: 22.0
               Coef: 1.149999976158142
               FrameTransitionCount: 22
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[     70.0] L PostProcessingActor[0] - EventEditLocationalLight (#5, concurrent=1)
[     70.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#236, concurrent=0)
[     70.0] E PostProcessingActor[0] - EventEditLocationalLight (#6, concurrent=1)
               duration: 10.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 10
               Intensity: 255.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[     70.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#237, concurrent=0)
               duration: 10.0
               Coef: 0.8500000238418579
               FrameTransitionCount: 10
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[     80.0] L PostProcessingActor[0] - EventEditLocationalLight (#6, concurrent=1)
[     80.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#237, concurrent=0)
[     80.0] E PostProcessingActor[0] - EventEditLocationalLight (#7, concurrent=1)
               duration: 12.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 12
               Intensity: 330.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[     80.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#238, concurrent=0)
               duration: 12.0
               Coef: 1.100000023841858
               FrameTransitionCount: 12
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[     92.0] L PostProcessingActor[0] - EventEditLocationalLight (#7, concurrent=1)
[     92.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#238, concurrent=0)
[     92.0] E PostProcessingActor[0] - EventEditLocationalLight (#8, concurrent=1)
               duration: 20.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 20
               Intensity: 255.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[     92.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#239, concurrent=0)
               duration: 20.0
               Coef: 0.8500000238418579
               FrameTransitionCount: 20
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[    112.0] L PostProcessingActor[0] - EventEditLocationalLight (#8, concurrent=1)
[    112.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#239, concurrent=0)
[    112.0] E PostProcessingActor[0] - EventEditLocationalLight (#9, concurrent=1)
               duration: 12.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 12
               Intensity: 330.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[    112.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#240, concurrent=0)
               duration: 12.0
               Coef: 1.100000023841858
               FrameTransitionCount: 12
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[    124.0] L PostProcessingActor[0] - EventEditLocationalLight (#9, concurrent=1)
[    124.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#240, concurrent=0)
[    124.0] E PostProcessingActor[0] - EventEditLocationalLight (#10, concurrent=1)
               duration: 10.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 10
               Intensity: 300.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[    124.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#241, concurrent=0)
               duration: 12.0
               Coef: 1.0
               FrameTransitionCount: 12
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[    134.0] L PostProcessingActor[0] - EventEditLocationalLight (#10, concurrent=1)
[    134.0] E PostProcessingActor[0] - EventEditLocationalLight (#11, concurrent=1)
               duration: 10.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 10
               Intensity: 255.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[    136.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#241, concurrent=0)
[    136.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#242, concurrent=0)
               duration: 10.0
               Coef: 0.8500000238418579
               FrameTransitionCount: 10
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[    144.0] L PostProcessingActor[0] - EventEditLocationalLight (#11, concurrent=1)
[    144.0] E PostProcessingActor[0] - EventEditLocationalLight (#12, concurrent=1)
               duration: 10.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 10
               Intensity: 255.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[    146.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#242, concurrent=0)
[    146.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#243, concurrent=0)
               duration: 8.0
               Coef: 1.100000023841858
               FrameTransitionCount: 8
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[    154.0] L PostProcessingActor[0] - EventEditLocationalLight (#12, concurrent=1)
[    154.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#243, concurrent=0)
[    154.0] E PostProcessingActor[0] - EventEditLocationalLight (#13, concurrent=1)
               duration: 10.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 10
               Intensity: 255.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[    154.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#244, concurrent=0)
               duration: 10.0
               Coef: 1.100000023841858
               FrameTransitionCount: 10
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[    164.0] L PostProcessingActor[0] - EventEditLocationalLight (#13, concurrent=1)
[    164.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#244, concurrent=0)
[    164.0] E PostProcessingActor[0] - EventEditLocationalLight (#14, concurrent=1)
               duration: 10.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 10
               Intensity: 300.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[    164.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#245, concurrent=0)
               duration: 10.0
               Coef: 0.8500000238418579
               FrameTransitionCount: 10
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[    174.0] L PostProcessingActor[0] - EventEditLocationalLight (#14, concurrent=1)
[    174.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#245, concurrent=0)
[    174.0] E PostProcessingActor[0] - EventEditLocationalLight (#15, concurrent=1)
               duration: 18.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 18
               Intensity: 264.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[    174.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#246, concurrent=0)
               duration: 10.0
               Coef: 1.0
               FrameTransitionCount: 10
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[    184.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#246, concurrent=0)
[    184.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#247, concurrent=0)
               duration: 6.0
               Coef: 0.8500000238418579
               FrameTransitionCount: 6
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[    190.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#247, concurrent=0)
[    190.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#248, concurrent=0)
               duration: 8.0
               Coef: 0.8500000238418579
               FrameTransitionCount: 8
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[    192.0] L PostProcessingActor[0] - EventEditLocationalLight (#15, concurrent=1)
[    192.0] E PostProcessingActor[0] - EventEditLocationalLight (#16, concurrent=1)
               duration: 22.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 22
               Intensity: 345.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[    198.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#248, concurrent=0)
[    198.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#249, concurrent=0)
               duration: 10.0
               Coef: 1.0
               FrameTransitionCount: 10
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[    208.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#249, concurrent=0)
[    208.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#250, concurrent=0)
               duration: 10.0
               Coef: 0.8500000238418579
               FrameTransitionCount: 10
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[    214.0] L PostProcessingActor[0] - EventEditLocationalLight (#16, concurrent=1)
[    214.0] E PostProcessingActor[0] - EventEditLocationalLight (#17, concurrent=1)
               duration: 10.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 10
               Intensity: 255.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[    218.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#250, concurrent=0)
[    218.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#251, concurrent=0)
               duration: 10.0
               Coef: 0.8500000238418579
               FrameTransitionCount: 10
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[    224.0] L PostProcessingActor[0] - EventEditLocationalLight (#17, concurrent=1)
[    224.0] E PostProcessingActor[0] - EventEditLocationalLight (#18, concurrent=1)
               duration: 12.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 12
               Intensity: 330.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[    228.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#251, concurrent=0)
[    228.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#252, concurrent=0)
               duration: 10.0
               Coef: 1.0
               FrameTransitionCount: 10
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[    236.0] L PostProcessingActor[0] - EventEditLocationalLight (#18, concurrent=1)
[    236.0] E PostProcessingActor[0] - EventEditLocationalLight (#19, concurrent=1)
               duration: 20.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 20
               Intensity: 255.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[    238.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#252, concurrent=0)
[    238.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#253, concurrent=0)
               duration: 18.0
               Coef: 0.8799999952316284
               FrameTransitionCount: 18
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[    256.0] L PostProcessingActor[0] - EventEditLocationalLight (#19, concurrent=1)
[    256.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#253, concurrent=0)
[    256.0] E PostProcessingActor[0] - EventEditLocationalLight (#20, concurrent=1)
               duration: 12.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 12
               Intensity: 330.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[    256.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#254, concurrent=0)
               duration: 22.0
               Coef: 1.149999976158142
               FrameTransitionCount: 22
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[    268.0] L PostProcessingActor[0] - EventEditLocationalLight (#20, concurrent=1)
[    268.0] E PostProcessingActor[0] - EventEditLocationalLight (#21, concurrent=1)
               duration: 10.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 10
               Intensity: 300.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[    278.0] L PostProcessingActor[0] - EventEditLocationalLight (#21, concurrent=1)
[    278.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#254, concurrent=0)
[    278.0] E PostProcessingActor[0] - EventEditLocationalLight (#22, concurrent=1)
               duration: 10.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 10
               Intensity: 255.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[    278.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#255, concurrent=0)
               duration: 10.0
               Coef: 0.8500000238418579
               FrameTransitionCount: 10
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[    288.0] L PostProcessingActor[0] - EventEditLocationalLight (#22, concurrent=1)
[    288.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#255, concurrent=0)
[    288.0] E PostProcessingActor[0] - EventEditLocationalLight (#23, concurrent=1)
               duration: 10.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 10
               Intensity: 255.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[    288.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#256, concurrent=0)
               duration: 12.0
               Coef: 1.100000023841858
               FrameTransitionCount: 12
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[    298.0] L PostProcessingActor[0] - EventEditLocationalLight (#23, concurrent=1)
[    298.0] E PostProcessingActor[0] - EventEditLocationalLight (#24, concurrent=1)
               duration: 10.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 10
               Intensity: 255.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[    300.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#256, concurrent=0)
[    300.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#257, concurrent=0)
               duration: 20.0
               Coef: 0.8500000238418579
               FrameTransitionCount: 20
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[    308.0] L PostProcessingActor[0] - EventEditLocationalLight (#24, concurrent=1)
[    308.0] E PostProcessingActor[0] - EventEditLocationalLight (#25, concurrent=1)
               duration: 10.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 10
               Intensity: 300.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[    318.0] L PostProcessingActor[0] - EventEditLocationalLight (#25, concurrent=1)
[    318.0] E PostProcessingActor[0] - EventEditLocationalLight (#26, concurrent=1)
               duration: 18.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 18
               Intensity: 264.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[    320.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#257, concurrent=0)
[    320.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#258, concurrent=0)
               duration: 12.0
               Coef: 1.100000023841858
               FrameTransitionCount: 12
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[    332.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#258, concurrent=0)
[    332.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#259, concurrent=0)
               duration: 12.0
               Coef: 1.0
               FrameTransitionCount: 12
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[    336.0] L PostProcessingActor[0] - EventEditLocationalLight (#26, concurrent=1)
[    336.0] E PostProcessingActor[0] - EventEditLocationalLight (#27, concurrent=1)
               duration: 22.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 22
               Intensity: 345.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[    344.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#259, concurrent=0)
[    344.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#260, concurrent=0)
               duration: 10.0
               Coef: 0.8500000238418579
               FrameTransitionCount: 10
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[    354.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#260, concurrent=0)
[    354.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#261, concurrent=0)
               duration: 8.0
               Coef: 1.100000023841858
               FrameTransitionCount: 8
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[    358.0] L PostProcessingActor[0] - EventEditLocationalLight (#27, concurrent=1)
[    358.0] E PostProcessingActor[0] - EventEditLocationalLight (#28, concurrent=1)
               duration: 10.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 10
               Intensity: 255.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[    362.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#261, concurrent=0)
[    362.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#262, concurrent=0)
               duration: 10.0
               Coef: 1.100000023841858
               FrameTransitionCount: 10
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[    368.0] L PostProcessingActor[0] - EventEditLocationalLight (#28, concurrent=1)
[    368.0] E PostProcessingActor[0] - EventEditLocationalLight (#29, concurrent=1)
               duration: 12.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 12
               Intensity: 330.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[    372.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#262, concurrent=0)
[    372.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#263, concurrent=0)
               duration: 10.0
               Coef: 0.8500000238418579
               FrameTransitionCount: 10
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[    380.0] L PostProcessingActor[0] - EventEditLocationalLight (#29, concurrent=1)
[    380.0] E PostProcessingActor[0] - EventEditLocationalLight (#30, concurrent=1)
               duration: 20.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 20
               Intensity: 255.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[    382.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#263, concurrent=0)
[    382.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#264, concurrent=0)
               duration: 10.0
               Coef: 1.0
               FrameTransitionCount: 10
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[    392.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#264, concurrent=0)
[    392.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#265, concurrent=0)
               duration: 6.0
               Coef: 0.8500000238418579
               FrameTransitionCount: 6
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[    398.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#265, concurrent=0)
[    398.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#266, concurrent=0)
               duration: 8.0
               Coef: 0.8500000238418579
               FrameTransitionCount: 8
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[    400.0] L PostProcessingActor[0] - EventEditLocationalLight (#30, concurrent=1)
[    400.0] E PostProcessingActor[0] - EventEditLocationalLight (#31, concurrent=1)
               duration: 12.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 12
               Intensity: 330.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[    406.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#266, concurrent=0)
[    406.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#267, concurrent=0)
               duration: 10.0
               Coef: 1.0
               FrameTransitionCount: 10
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[    412.0] L PostProcessingActor[0] - EventEditLocationalLight (#31, concurrent=1)
[    412.0] E PostProcessingActor[0] - EventEditLocationalLight (#32, concurrent=1)
               duration: 10.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 10
               Intensity: 300.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[    416.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#267, concurrent=0)
[    416.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#268, concurrent=0)
               duration: 10.0
               Coef: 0.8500000238418579
               FrameTransitionCount: 10
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[    422.0] L PostProcessingActor[0] - EventEditLocationalLight (#32, concurrent=1)
[    422.0] E PostProcessingActor[0] - EventEditLocationalLight (#33, concurrent=1)
               duration: 10.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 10
               Intensity: 255.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[    426.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#268, concurrent=0)
[    426.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#269, concurrent=0)
               duration: 10.0
               Coef: 0.8500000238418579
               FrameTransitionCount: 10
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[    432.0] L PostProcessingActor[0] - EventEditLocationalLight (#33, concurrent=1)
[    432.0] E PostProcessingActor[0] - EventEditLocationalLight (#34, concurrent=1)
               duration: 10.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 10
               Intensity: 255.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[    436.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#269, concurrent=0)
[    436.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#270, concurrent=0)
               duration: 10.0
               Coef: 1.0
               FrameTransitionCount: 10
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[    442.0] L PostProcessingActor[0] - EventEditLocationalLight (#34, concurrent=1)
[    442.0] E PostProcessingActor[0] - EventEditLocationalLight (#35, concurrent=1)
               duration: 10.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 10
               Intensity: 255.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[    446.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#270, concurrent=0)
[    446.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#271, concurrent=0)
               duration: 18.0
               Coef: 0.8799999952316284
               FrameTransitionCount: 18
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[    452.0] L PostProcessingActor[0] - EventEditLocationalLight (#35, concurrent=1)
[    452.0] E PostProcessingActor[0] - EventEditLocationalLight (#36, concurrent=1)
               duration: 10.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 10
               Intensity: 300.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[    462.0] L PostProcessingActor[0] - EventEditLocationalLight (#36, concurrent=1)
[    462.0] E PostProcessingActor[0] - EventEditLocationalLight (#37, concurrent=1)
               duration: 18.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 18
               Intensity: 264.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[    464.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#271, concurrent=0)
[    464.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#272, concurrent=0)
               duration: 22.0
               Coef: 1.149999976158142
               FrameTransitionCount: 22
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[    480.0] L PostProcessingActor[0] - EventEditLocationalLight (#37, concurrent=1)
[    480.0] E PostProcessingActor[0] - EventEditLocationalLight (#38, concurrent=1)
               duration: 22.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 22
               Intensity: 345.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[    486.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#272, concurrent=0)
[    486.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#273, concurrent=0)
               duration: 10.0
               Coef: 0.8500000238418579
               FrameTransitionCount: 10
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[    496.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#273, concurrent=0)
[    496.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#274, concurrent=0)
               duration: 12.0
               Coef: 1.100000023841858
               FrameTransitionCount: 12
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[    502.0] L PostProcessingActor[0] - EventEditLocationalLight (#38, concurrent=1)
[    502.0] E PostProcessingActor[0] - EventEditLocationalLight (#39, concurrent=1)
               duration: 10.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 10
               Intensity: 255.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[    508.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#274, concurrent=0)
[    508.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#275, concurrent=0)
               duration: 20.0
               Coef: 0.8500000238418579
               FrameTransitionCount: 20
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[    512.0] L PostProcessingActor[0] - EventEditLocationalLight (#39, concurrent=1)
[    512.0] E PostProcessingActor[0] - EventEditLocationalLight (#40, concurrent=1)
               duration: 12.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 12
               Intensity: 330.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[    524.0] L PostProcessingActor[0] - EventEditLocationalLight (#40, concurrent=1)
[    524.0] E PostProcessingActor[0] - EventEditLocationalLight (#41, concurrent=1)
               duration: 20.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 20
               Intensity: 255.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[    528.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#275, concurrent=0)
[    528.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#276, concurrent=0)
               duration: 12.0
               Coef: 1.100000023841858
               FrameTransitionCount: 12
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[    540.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#276, concurrent=0)
[    540.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#277, concurrent=0)
               duration: 12.0
               Coef: 1.0
               FrameTransitionCount: 12
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[    544.0] L PostProcessingActor[0] - EventEditLocationalLight (#41, concurrent=1)
[    544.0] E PostProcessingActor[0] - EventEditLocationalLight (#42, concurrent=1)
               duration: 12.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 12
               Intensity: 330.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[    552.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#277, concurrent=0)
[    552.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#278, concurrent=0)
               duration: 10.0
               Coef: 0.8500000238418579
               FrameTransitionCount: 10
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[    556.0] L PostProcessingActor[0] - EventEditLocationalLight (#42, concurrent=1)
[    556.0] E PostProcessingActor[0] - EventEditLocationalLight (#43, concurrent=1)
               duration: 10.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 10
               Intensity: 300.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[    560.0] L EventWorldManagerController[1] - Event_SetDemoPaletteForTimeline (#229, concurrent=0)
[    560.0] E EventWorldManagerController[1] - Event_SetDemoPaletteForTimeline (#230, concurrent=0)
               duration: 1420.0
               DemoPaletteName: Dm_StaffCredit_0010_C02
               IsWaitEnd: true
[    562.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#278, concurrent=0)
[    562.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#279, concurrent=0)
               duration: 8.0
               Coef: 1.100000023841858
               FrameTransitionCount: 8
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[    566.0] L PostProcessingActor[0] - EventEditLocationalLight (#43, concurrent=1)
[    566.0] E PostProcessingActor[0] - EventEditLocationalLight (#44, concurrent=1)
               duration: 10.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 10
               Intensity: 255.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[    570.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#279, concurrent=0)
[    570.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#280, concurrent=0)
               duration: 10.0
               Coef: 1.100000023841858
               FrameTransitionCount: 10
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[    576.0] L PostProcessingActor[0] - EventEditLocationalLight (#44, concurrent=1)
[    576.0] E PostProcessingActor[0] - EventEditLocationalLight (#45, concurrent=1)
               duration: 10.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 10
               Intensity: 255.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[    580.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#280, concurrent=0)
[    580.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#281, concurrent=0)
               duration: 10.0
               Coef: 0.8500000238418579
               FrameTransitionCount: 10
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[    586.0] L PostProcessingActor[0] - EventEditLocationalLight (#45, concurrent=1)
[    586.0] E PostProcessingActor[0] - EventEditLocationalLight (#46, concurrent=1)
               duration: 10.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 10
               Intensity: 255.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[    590.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#281, concurrent=0)
[    590.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#282, concurrent=0)
               duration: 10.0
               Coef: 1.0
               FrameTransitionCount: 10
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[    596.0] L PostProcessingActor[0] - EventEditLocationalLight (#46, concurrent=1)
[    596.0] E PostProcessingActor[0] - EventEditLocationalLight (#47, concurrent=1)
               duration: 10.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 10
               Intensity: 300.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[    600.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#282, concurrent=0)
[    600.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#283, concurrent=0)
               duration: 6.0
               Coef: 0.8500000238418579
               FrameTransitionCount: 6
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[    606.0] L PostProcessingActor[0] - EventEditLocationalLight (#47, concurrent=1)
[    606.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#283, concurrent=0)
[    606.0] E PostProcessingActor[0] - EventEditLocationalLight (#48, concurrent=1)
               duration: 18.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 18
               Intensity: 264.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[    606.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#284, concurrent=0)
               duration: 8.0
               Coef: 0.8500000238418579
               FrameTransitionCount: 8
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[    614.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#284, concurrent=0)
[    614.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#285, concurrent=0)
               duration: 10.0
               Coef: 1.0
               FrameTransitionCount: 10
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[    624.0] L PostProcessingActor[0] - EventEditLocationalLight (#48, concurrent=1)
[    624.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#285, concurrent=0)
[    624.0] E PostProcessingActor[0] - EventEditLocationalLight (#49, concurrent=1)
               duration: 22.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 22
               Intensity: 345.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[    624.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#286, concurrent=0)
               duration: 10.0
               Coef: 0.8500000238418579
               FrameTransitionCount: 10
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[    634.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#286, concurrent=0)
[    634.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#287, concurrent=0)
               duration: 10.0
               Coef: 0.8500000238418579
               FrameTransitionCount: 10
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[    644.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#287, concurrent=0)
[    644.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#288, concurrent=0)
               duration: 10.0
               Coef: 1.0
               FrameTransitionCount: 10
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[    646.0] L PostProcessingActor[0] - EventEditLocationalLight (#49, concurrent=1)
[    646.0] E PostProcessingActor[0] - EventEditLocationalLight (#50, concurrent=1)
               duration: 10.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 10
               Intensity: 255.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[    654.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#288, concurrent=0)
[    654.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#289, concurrent=0)
               duration: 18.0
               Coef: 0.8799999952316284
               FrameTransitionCount: 18
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[    656.0] L PostProcessingActor[0] - EventEditLocationalLight (#50, concurrent=1)
[    656.0] E PostProcessingActor[0] - EventEditLocationalLight (#51, concurrent=1)
               duration: 12.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 12
               Intensity: 330.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[    668.0] L PostProcessingActor[0] - EventEditLocationalLight (#51, concurrent=1)
[    668.0] E PostProcessingActor[0] - EventEditLocationalLight (#52, concurrent=1)
               duration: 20.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 20
               Intensity: 255.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[    672.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#289, concurrent=0)
[    672.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#290, concurrent=0)
               duration: 22.0
               Coef: 1.149999976158142
               FrameTransitionCount: 22
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[    688.0] L PostProcessingActor[0] - EventEditLocationalLight (#52, concurrent=1)
[    688.0] E PostProcessingActor[0] - EventEditLocationalLight (#53, concurrent=1)
               duration: 12.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 12
               Intensity: 330.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[    694.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#290, concurrent=0)
[    694.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#291, concurrent=0)
               duration: 10.0
               Coef: 0.8500000238418579
               FrameTransitionCount: 10
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[    700.0] L PostProcessingActor[0] - EventEditLocationalLight (#53, concurrent=1)
[    700.0] E PostProcessingActor[0] - EventEditLocationalLight (#54, concurrent=1)
               duration: 10.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 10
               Intensity: 300.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[    704.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#291, concurrent=0)
[    704.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#292, concurrent=0)
               duration: 12.0
               Coef: 1.100000023841858
               FrameTransitionCount: 12
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[    710.0] L PostProcessingActor[0] - EventEditLocationalLight (#54, concurrent=1)
[    710.0] E PostProcessingActor[0] - EventEditLocationalLight (#55, concurrent=1)
               duration: 10.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 10
               Intensity: 255.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[    716.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#292, concurrent=0)
[    716.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#293, concurrent=0)
               duration: 20.0
               Coef: 0.8500000238418579
               FrameTransitionCount: 20
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[    720.0] L PostProcessingActor[0] - EventEditLocationalLight (#55, concurrent=1)
[    720.0] E PostProcessingActor[0] - EventEditLocationalLight (#56, concurrent=1)
               duration: 10.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 10
               Intensity: 255.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[    730.0] L PostProcessingActor[0] - EventEditLocationalLight (#56, concurrent=1)
[    730.0] E PostProcessingActor[0] - EventEditLocationalLight (#57, concurrent=1)
               duration: 10.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 10
               Intensity: 255.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[    736.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#293, concurrent=0)
[    736.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#294, concurrent=0)
               duration: 12.0
               Coef: 1.100000023841858
               FrameTransitionCount: 12
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[    740.0] L PostProcessingActor[0] - EventEditLocationalLight (#57, concurrent=1)
[    740.0] E PostProcessingActor[0] - EventEditLocationalLight (#58, concurrent=1)
               duration: 10.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 10
               Intensity: 300.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[    748.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#294, concurrent=0)
[    748.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#295, concurrent=0)
               duration: 12.0
               Coef: 1.0
               FrameTransitionCount: 12
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[    750.0] L PostProcessingActor[0] - EventEditLocationalLight (#58, concurrent=1)
[    750.0] E PostProcessingActor[0] - EventEditLocationalLight (#59, concurrent=1)
               duration: 18.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 18
               Intensity: 264.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[    760.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#295, concurrent=0)
[    760.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#296, concurrent=0)
               duration: 10.0
               Coef: 0.8500000238418579
               FrameTransitionCount: 10
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[    768.0] L PostProcessingActor[0] - EventEditLocationalLight (#59, concurrent=1)
[    768.0] E PostProcessingActor[0] - EventEditLocationalLight (#60, concurrent=1)
               duration: 22.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 22
               Intensity: 345.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[    770.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#296, concurrent=0)
[    770.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#297, concurrent=0)
               duration: 8.0
               Coef: 1.100000023841858
               FrameTransitionCount: 8
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[    778.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#297, concurrent=0)
[    778.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#298, concurrent=0)
               duration: 10.0
               Coef: 1.100000023841858
               FrameTransitionCount: 10
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[    788.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#298, concurrent=0)
[    788.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#299, concurrent=0)
               duration: 10.0
               Coef: 0.8500000238418579
               FrameTransitionCount: 10
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[    790.0] L PostProcessingActor[0] - EventEditLocationalLight (#60, concurrent=1)
[    790.0] E PostProcessingActor[0] - EventEditLocationalLight (#61, concurrent=1)
               duration: 10.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 10
               Intensity: 255.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[    798.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#299, concurrent=0)
[    798.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#300, concurrent=0)
               duration: 10.0
               Coef: 1.0
               FrameTransitionCount: 10
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[    800.0] L PostProcessingActor[0] - EventEditLocationalLight (#61, concurrent=1)
[    800.0] E PostProcessingActor[0] - EventEditLocationalLight (#62, concurrent=1)
               duration: 12.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 12
               Intensity: 330.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[    808.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#300, concurrent=0)
[    808.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#301, concurrent=0)
               duration: 6.0
               Coef: 0.8500000238418579
               FrameTransitionCount: 6
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[    812.0] L PostProcessingActor[0] - EventEditLocationalLight (#62, concurrent=1)
[    812.0] E PostProcessingActor[0] - EventEditLocationalLight (#63, concurrent=1)
               duration: 20.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 20
               Intensity: 255.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[    814.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#301, concurrent=0)
[    814.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#302, concurrent=0)
               duration: 8.0
               Coef: 0.8500000238418579
               FrameTransitionCount: 8
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[    822.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#302, concurrent=0)
[    822.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#303, concurrent=0)
               duration: 10.0
               Coef: 1.0
               FrameTransitionCount: 10
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[    832.0] L PostProcessingActor[0] - EventEditLocationalLight (#63, concurrent=1)
[    832.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#303, concurrent=0)
[    832.0] E PostProcessingActor[0] - EventEditLocationalLight (#64, concurrent=1)
               duration: 12.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 12
               Intensity: 330.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[    832.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#304, concurrent=0)
               duration: 10.0
               Coef: 0.8500000238418579
               FrameTransitionCount: 10
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[    842.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#304, concurrent=0)
[    842.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#305, concurrent=0)
               duration: 10.0
               Coef: 0.8500000238418579
               FrameTransitionCount: 10
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[    844.0] L PostProcessingActor[0] - EventEditLocationalLight (#64, concurrent=1)
[    844.0] E PostProcessingActor[0] - EventEditLocationalLight (#65, concurrent=1)
               duration: 10.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 10
               Intensity: 300.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[    852.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#305, concurrent=0)
[    852.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#306, concurrent=0)
               duration: 10.0
               Coef: 1.0
               FrameTransitionCount: 10
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[    854.0] L PostProcessingActor[0] - EventEditLocationalLight (#65, concurrent=1)
[    854.0] E PostProcessingActor[0] - EventEditLocationalLight (#66, concurrent=1)
               duration: 10.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 10
               Intensity: 255.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[    862.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#306, concurrent=0)
[    862.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#307, concurrent=0)
               duration: 18.0
               Coef: 0.8799999952316284
               FrameTransitionCount: 18
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[    864.0] L PostProcessingActor[0] - EventEditLocationalLight (#66, concurrent=1)
[    864.0] E PostProcessingActor[0] - EventEditLocationalLight (#67, concurrent=1)
               duration: 10.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 10
               Intensity: 255.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[    874.0] L PostProcessingActor[0] - EventEditLocationalLight (#67, concurrent=1)
[    874.0] E PostProcessingActor[0] - EventEditLocationalLight (#68, concurrent=1)
               duration: 10.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 10
               Intensity: 255.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[    880.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#307, concurrent=0)
[    880.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#308, concurrent=0)
               duration: 22.0
               Coef: 1.149999976158142
               FrameTransitionCount: 22
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[    884.0] L PostProcessingActor[0] - EventEditLocationalLight (#68, concurrent=1)
[    884.0] E PostProcessingActor[0] - EventEditLocationalLight (#69, concurrent=1)
               duration: 10.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 10
               Intensity: 300.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[    894.0] L PostProcessingActor[0] - EventEditLocationalLight (#69, concurrent=1)
[    894.0] E PostProcessingActor[0] - EventEditLocationalLight (#70, concurrent=1)
               duration: 18.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 18
               Intensity: 264.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[    902.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#308, concurrent=0)
[    902.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#309, concurrent=0)
               duration: 10.0
               Coef: 0.8500000238418579
               FrameTransitionCount: 10
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[    912.0] L PostProcessingActor[0] - EventEditLocationalLight (#70, concurrent=1)
[    912.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#309, concurrent=0)
[    912.0] E PostProcessingActor[0] - EventEditLocationalLight (#71, concurrent=1)
               duration: 22.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 22
               Intensity: 345.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[    912.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#310, concurrent=0)
               duration: 12.0
               Coef: 1.100000023841858
               FrameTransitionCount: 12
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[    924.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#310, concurrent=0)
[    924.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#311, concurrent=0)
               duration: 20.0
               Coef: 0.8500000238418579
               FrameTransitionCount: 20
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[    934.0] L PostProcessingActor[0] - EventEditLocationalLight (#71, concurrent=1)
[    934.0] E PostProcessingActor[0] - EventEditLocationalLight (#72, concurrent=1)
               duration: 10.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 10
               Intensity: 255.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[    944.0] L PostProcessingActor[0] - EventEditLocationalLight (#72, concurrent=1)
[    944.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#311, concurrent=0)
[    944.0] E PostProcessingActor[0] - EventEditLocationalLight (#73, concurrent=1)
               duration: 12.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 12
               Intensity: 330.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[    944.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#312, concurrent=0)
               duration: 12.0
               Coef: 1.100000023841858
               FrameTransitionCount: 12
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[    956.0] L PostProcessingActor[0] - EventEditLocationalLight (#73, concurrent=1)
[    956.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#312, concurrent=0)
[    956.0] E PostProcessingActor[0] - EventEditLocationalLight (#74, concurrent=1)
               duration: 20.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 20
               Intensity: 255.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[    956.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#313, concurrent=0)
               duration: 12.0
               Coef: 1.0
               FrameTransitionCount: 12
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[    968.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#313, concurrent=0)
[    968.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#314, concurrent=0)
               duration: 10.0
               Coef: 0.8500000238418579
               FrameTransitionCount: 10
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[    976.0] L PostProcessingActor[0] - EventEditLocationalLight (#74, concurrent=1)
[    976.0] E PostProcessingActor[0] - EventEditLocationalLight (#75, concurrent=1)
               duration: 12.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 12
               Intensity: 330.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[    978.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#314, concurrent=0)
[    978.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#315, concurrent=0)
               duration: 8.0
               Coef: 1.100000023841858
               FrameTransitionCount: 8
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[    986.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#315, concurrent=0)
[    986.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#316, concurrent=0)
               duration: 10.0
               Coef: 1.100000023841858
               FrameTransitionCount: 10
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[    988.0] L PostProcessingActor[0] - EventEditLocationalLight (#75, concurrent=1)
[    988.0] E PostProcessingActor[0] - EventEditLocationalLight (#76, concurrent=1)
               duration: 10.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 10
               Intensity: 300.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[    996.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#316, concurrent=0)
[    996.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#317, concurrent=0)
               duration: 10.0
               Coef: 0.8500000238418579
               FrameTransitionCount: 10
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[    998.0] L PostProcessingActor[0] - EventEditLocationalLight (#76, concurrent=1)
[    998.0] E PostProcessingActor[0] - EventEditLocationalLight (#77, concurrent=1)
               duration: 10.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 10
               Intensity: 255.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   1006.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#317, concurrent=0)
[   1006.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#318, concurrent=0)
               duration: 10.0
               Coef: 1.0
               FrameTransitionCount: 10
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   1008.0] L PostProcessingActor[0] - EventEditLocationalLight (#77, concurrent=1)
[   1008.0] E PostProcessingActor[0] - EventEditLocationalLight (#78, concurrent=1)
               duration: 10.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 10
               Intensity: 255.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   1016.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#318, concurrent=0)
[   1016.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#319, concurrent=0)
               duration: 6.0
               Coef: 0.8500000238418579
               FrameTransitionCount: 6
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   1018.0] L PostProcessingActor[0] - EventEditLocationalLight (#78, concurrent=1)
[   1018.0] E PostProcessingActor[0] - EventEditLocationalLight (#79, concurrent=1)
               duration: 10.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 10
               Intensity: 255.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   1022.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#319, concurrent=0)
[   1022.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#320, concurrent=0)
               duration: 8.0
               Coef: 0.8500000238418579
               FrameTransitionCount: 8
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   1028.0] L PostProcessingActor[0] - EventEditLocationalLight (#79, concurrent=1)
[   1028.0] E PostProcessingActor[0] - EventEditLocationalLight (#80, concurrent=1)
               duration: 10.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 10
               Intensity: 300.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   1030.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#320, concurrent=0)
[   1030.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#321, concurrent=0)
               duration: 10.0
               Coef: 1.0
               FrameTransitionCount: 10
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   1038.0] L PostProcessingActor[0] - EventEditLocationalLight (#80, concurrent=1)
[   1038.0] E PostProcessingActor[0] - EventEditLocationalLight (#81, concurrent=1)
               duration: 18.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 18
               Intensity: 264.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   1040.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#321, concurrent=0)
[   1040.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#322, concurrent=0)
               duration: 10.0
               Coef: 0.8500000238418579
               FrameTransitionCount: 10
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   1050.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#322, concurrent=0)
[   1050.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#323, concurrent=0)
               duration: 10.0
               Coef: 0.8500000238418579
               FrameTransitionCount: 10
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   1056.0] L PostProcessingActor[0] - EventEditLocationalLight (#81, concurrent=1)
[   1056.0] E PostProcessingActor[0] - EventEditLocationalLight (#82, concurrent=1)
               duration: 22.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 22
               Intensity: 345.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   1060.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#323, concurrent=0)
[   1060.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#324, concurrent=0)
               duration: 10.0
               Coef: 1.0
               FrameTransitionCount: 10
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   1070.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#324, concurrent=0)
[   1070.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#325, concurrent=0)
               duration: 18.0
               Coef: 0.8799999952316284
               FrameTransitionCount: 18
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   1078.0] L PostProcessingActor[0] - EventEditLocationalLight (#82, concurrent=1)
[   1078.0] E PostProcessingActor[0] - EventEditLocationalLight (#83, concurrent=1)
               duration: 10.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 10
               Intensity: 255.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   1088.0] L PostProcessingActor[0] - EventEditLocationalLight (#83, concurrent=1)
[   1088.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#325, concurrent=0)
[   1088.0] E PostProcessingActor[0] - EventEditLocationalLight (#84, concurrent=1)
               duration: 12.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 12
               Intensity: 330.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   1088.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#326, concurrent=0)
               duration: 22.0
               Coef: 1.149999976158142
               FrameTransitionCount: 22
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   1100.0] L PostProcessingActor[0] - EventEditLocationalLight (#84, concurrent=1)
[   1100.0] E PostProcessingActor[0] - EventEditLocationalLight (#85, concurrent=1)
               duration: 20.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 20
               Intensity: 255.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   1110.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#326, concurrent=0)
[   1110.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#327, concurrent=0)
               duration: 10.0
               Coef: 0.8500000238418579
               FrameTransitionCount: 10
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   1120.0] L PostProcessingActor[0] - EventEditLocationalLight (#85, concurrent=1)
[   1120.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#327, concurrent=0)
[   1120.0] E PostProcessingActor[0] - EventEditLocationalLight (#86, concurrent=1)
               duration: 12.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 12
               Intensity: 330.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   1120.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#328, concurrent=0)
               duration: 12.0
               Coef: 1.100000023841858
               FrameTransitionCount: 12
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   1132.0] L PostProcessingActor[0] - EventEditLocationalLight (#86, concurrent=1)
[   1132.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#328, concurrent=0)
[   1132.0] E PostProcessingActor[0] - EventEditLocationalLight (#87, concurrent=1)
               duration: 10.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 10
               Intensity: 300.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   1132.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#329, concurrent=0)
               duration: 20.0
               Coef: 0.8500000238418579
               FrameTransitionCount: 20
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   1142.0] L PostProcessingActor[0] - EventEditLocationalLight (#87, concurrent=1)
[   1142.0] E PostProcessingActor[0] - EventEditLocationalLight (#88, concurrent=1)
               duration: 10.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 10
               Intensity: 255.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   1152.0] L PostProcessingActor[0] - EventEditLocationalLight (#88, concurrent=1)
[   1152.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#329, concurrent=0)
[   1152.0] E PostProcessingActor[0] - EventEditLocationalLight (#89, concurrent=1)
               duration: 10.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 10
               Intensity: 255.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   1152.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#330, concurrent=0)
               duration: 12.0
               Coef: 1.100000023841858
               FrameTransitionCount: 12
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   1162.0] L PostProcessingActor[0] - EventEditLocationalLight (#89, concurrent=1)
[   1162.0] E PostProcessingActor[0] - EventEditLocationalLight (#90, concurrent=1)
               duration: 10.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 10
               Intensity: 255.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   1164.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#330, concurrent=0)
[   1164.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#331, concurrent=0)
               duration: 12.0
               Coef: 1.0
               FrameTransitionCount: 12
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   1172.0] L PostProcessingActor[0] - EventEditLocationalLight (#90, concurrent=1)
[   1172.0] E PostProcessingActor[0] - EventEditLocationalLight (#91, concurrent=1)
               duration: 10.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 10
               Intensity: 300.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   1176.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#331, concurrent=0)
[   1176.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#332, concurrent=0)
               duration: 10.0
               Coef: 0.8500000238418579
               FrameTransitionCount: 10
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   1182.0] L PostProcessingActor[0] - EventEditLocationalLight (#91, concurrent=1)
[   1182.0] E PostProcessingActor[0] - EventEditLocationalLight (#92, concurrent=1)
               duration: 18.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 18
               Intensity: 264.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   1186.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#332, concurrent=0)
[   1186.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#333, concurrent=0)
               duration: 8.0
               Coef: 1.100000023841858
               FrameTransitionCount: 8
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   1194.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#333, concurrent=0)
[   1194.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#334, concurrent=0)
               duration: 10.0
               Coef: 1.100000023841858
               FrameTransitionCount: 10
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   1200.0] L PostProcessingActor[0] - EventEditLocationalLight (#92, concurrent=1)
[   1200.0] E PostProcessingActor[0] - EventEditLocationalLight (#93, concurrent=1)
               duration: 22.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 22
               Intensity: 345.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   1204.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#334, concurrent=0)
[   1204.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#335, concurrent=0)
               duration: 10.0
               Coef: 0.8500000238418579
               FrameTransitionCount: 10
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   1214.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#335, concurrent=0)
[   1214.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#336, concurrent=0)
               duration: 10.0
               Coef: 1.0
               FrameTransitionCount: 10
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   1222.0] L PostProcessingActor[0] - EventEditLocationalLight (#93, concurrent=1)
[   1222.0] E PostProcessingActor[0] - EventEditLocationalLight (#94, concurrent=1)
               duration: 10.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 10
               Intensity: 255.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   1224.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#336, concurrent=0)
[   1224.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#337, concurrent=0)
               duration: 6.0
               Coef: 0.8500000238418579
               FrameTransitionCount: 6
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   1230.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#337, concurrent=0)
[   1230.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#338, concurrent=0)
               duration: 8.0
               Coef: 0.8500000238418579
               FrameTransitionCount: 8
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   1232.0] L PostProcessingActor[0] - EventEditLocationalLight (#94, concurrent=1)
[   1232.0] E PostProcessingActor[0] - EventEditLocationalLight (#95, concurrent=1)
               duration: 12.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 12
               Intensity: 330.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   1238.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#338, concurrent=0)
[   1238.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#339, concurrent=0)
               duration: 10.0
               Coef: 1.0
               FrameTransitionCount: 10
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   1244.0] L PostProcessingActor[0] - EventEditLocationalLight (#95, concurrent=1)
[   1244.0] E PostProcessingActor[0] - EventEditLocationalLight (#96, concurrent=1)
               duration: 20.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 20
               Intensity: 255.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   1248.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#339, concurrent=0)
[   1248.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#340, concurrent=0)
               duration: 10.0
               Coef: 0.8500000238418579
               FrameTransitionCount: 10
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   1258.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#340, concurrent=0)
[   1258.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#341, concurrent=0)
               duration: 10.0
               Coef: 0.8500000238418579
               FrameTransitionCount: 10
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   1264.0] L PostProcessingActor[0] - EventEditLocationalLight (#96, concurrent=1)
[   1264.0] E PostProcessingActor[0] - EventEditLocationalLight (#97, concurrent=1)
               duration: 12.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 12
               Intensity: 330.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   1268.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#341, concurrent=0)
[   1268.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#342, concurrent=0)
               duration: 10.0
               Coef: 1.0
               FrameTransitionCount: 10
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   1276.0] L PostProcessingActor[0] - EventEditLocationalLight (#97, concurrent=1)
[   1276.0] E PostProcessingActor[0] - EventEditLocationalLight (#98, concurrent=1)
               duration: 10.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 10
               Intensity: 300.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   1278.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#342, concurrent=0)
[   1278.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#343, concurrent=0)
               duration: 18.0
               Coef: 0.8799999952316284
               FrameTransitionCount: 18
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   1286.0] L PostProcessingActor[0] - EventEditLocationalLight (#98, concurrent=1)
[   1286.0] E PostProcessingActor[0] - EventEditLocationalLight (#99, concurrent=1)
               duration: 10.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 10
               Intensity: 255.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   1296.0] L PostProcessingActor[0] - EventEditLocationalLight (#99, concurrent=1)
[   1296.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#343, concurrent=0)
[   1296.0] E PostProcessingActor[0] - EventEditLocationalLight (#100, concurrent=1)
               duration: 10.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 10
               Intensity: 255.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   1296.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#344, concurrent=0)
               duration: 22.0
               Coef: 1.149999976158142
               FrameTransitionCount: 22
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   1306.0] L PostProcessingActor[0] - EventEditLocationalLight (#100, concurrent=1)
[   1306.0] E PostProcessingActor[0] - EventEditLocationalLight (#101, concurrent=1)
               duration: 10.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 10
               Intensity: 255.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   1316.0] L PostProcessingActor[0] - EventEditLocationalLight (#101, concurrent=1)
[   1316.0] E PostProcessingActor[0] - EventEditLocationalLight (#102, concurrent=1)
               duration: 10.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 10
               Intensity: 300.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   1318.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#344, concurrent=0)
[   1318.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#345, concurrent=0)
               duration: 10.0
               Coef: 0.8500000238418579
               FrameTransitionCount: 10
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   1326.0] L PostProcessingActor[0] - EventEditLocationalLight (#102, concurrent=1)
[   1326.0] E PostProcessingActor[0] - EventEditLocationalLight (#103, concurrent=1)
               duration: 18.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 18
               Intensity: 264.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   1328.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#345, concurrent=0)
[   1328.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#346, concurrent=0)
               duration: 12.0
               Coef: 1.100000023841858
               FrameTransitionCount: 12
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   1340.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#346, concurrent=0)
[   1340.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#347, concurrent=0)
               duration: 20.0
               Coef: 0.8500000238418579
               FrameTransitionCount: 20
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   1344.0] L PostProcessingActor[0] - EventEditLocationalLight (#103, concurrent=1)
[   1344.0] E PostProcessingActor[0] - EventEditLocationalLight (#104, concurrent=1)
               duration: 22.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 22
               Intensity: 345.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   1360.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#347, concurrent=0)
[   1360.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#348, concurrent=0)
               duration: 12.0
               Coef: 1.100000023841858
               FrameTransitionCount: 12
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   1366.0] L PostProcessingActor[0] - EventEditLocationalLight (#104, concurrent=1)
[   1366.0] E PostProcessingActor[0] - EventEditLocationalLight (#105, concurrent=1)
               duration: 10.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 10
               Intensity: 255.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   1372.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#348, concurrent=0)
[   1372.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#349, concurrent=0)
               duration: 12.0
               Coef: 1.0
               FrameTransitionCount: 12
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   1376.0] L PostProcessingActor[0] - EventEditLocationalLight (#105, concurrent=1)
[   1376.0] E PostProcessingActor[0] - EventEditLocationalLight (#106, concurrent=1)
               duration: 12.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 12
               Intensity: 330.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   1384.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#349, concurrent=0)
[   1384.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#350, concurrent=0)
               duration: 10.0
               Coef: 0.8500000238418579
               FrameTransitionCount: 10
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   1388.0] L PostProcessingActor[0] - EventEditLocationalLight (#106, concurrent=1)
[   1388.0] E PostProcessingActor[0] - EventEditLocationalLight (#107, concurrent=1)
               duration: 20.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 20
               Intensity: 255.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   1394.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#350, concurrent=0)
[   1394.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#351, concurrent=0)
               duration: 8.0
               Coef: 1.100000023841858
               FrameTransitionCount: 8
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   1402.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#351, concurrent=0)
[   1402.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#352, concurrent=0)
               duration: 10.0
               Coef: 1.100000023841858
               FrameTransitionCount: 10
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   1408.0] L PostProcessingActor[0] - EventEditLocationalLight (#107, concurrent=1)
[   1408.0] E PostProcessingActor[0] - EventEditLocationalLight (#108, concurrent=1)
               duration: 12.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 12
               Intensity: 330.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   1412.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#352, concurrent=0)
[   1412.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#353, concurrent=0)
               duration: 10.0
               Coef: 0.8500000238418579
               FrameTransitionCount: 10
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   1420.0] L PostProcessingActor[0] - EventEditLocationalLight (#108, concurrent=1)
[   1420.0] E PostProcessingActor[0] - EventEditLocationalLight (#109, concurrent=1)
               duration: 10.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 10
               Intensity: 300.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   1422.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#353, concurrent=0)
[   1422.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#354, concurrent=0)
               duration: 10.0
               Coef: 1.0
               FrameTransitionCount: 10
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   1430.0] L PostProcessingActor[0] - EventEditLocationalLight (#109, concurrent=1)
[   1430.0] E PostProcessingActor[0] - EventEditLocationalLight (#110, concurrent=1)
               duration: 10.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 10
               Intensity: 255.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   1432.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#354, concurrent=0)
[   1432.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#355, concurrent=0)
               duration: 6.0
               Coef: 0.8500000238418579
               FrameTransitionCount: 6
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   1438.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#355, concurrent=0)
[   1438.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#356, concurrent=0)
               duration: 8.0
               Coef: 0.8500000238418579
               FrameTransitionCount: 8
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   1440.0] L PostProcessingActor[0] - EventEditLocationalLight (#110, concurrent=1)
[   1440.0] E PostProcessingActor[0] - EventEditLocationalLight (#111, concurrent=1)
               duration: 10.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 10
               Intensity: 255.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   1446.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#356, concurrent=0)
[   1446.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#357, concurrent=0)
               duration: 10.0
               Coef: 1.0
               FrameTransitionCount: 10
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   1450.0] L PostProcessingActor[0] - EventEditLocationalLight (#111, concurrent=1)
[   1450.0] E PostProcessingActor[0] - EventEditLocationalLight (#112, concurrent=1)
               duration: 10.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 10
               Intensity: 255.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   1456.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#357, concurrent=0)
[   1456.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#358, concurrent=0)
               duration: 10.0
               Coef: 0.8500000238418579
               FrameTransitionCount: 10
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   1460.0] L PostProcessingActor[0] - EventEditLocationalLight (#112, concurrent=1)
[   1460.0] E PostProcessingActor[0] - EventEditLocationalLight (#113, concurrent=1)
               duration: 10.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 10
               Intensity: 300.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   1466.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#358, concurrent=0)
[   1466.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#359, concurrent=0)
               duration: 10.0
               Coef: 0.8500000238418579
               FrameTransitionCount: 10
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   1470.0] L PostProcessingActor[0] - EventEditLocationalLight (#113, concurrent=1)
[   1470.0] E PostProcessingActor[0] - EventEditLocationalLight (#114, concurrent=1)
               duration: 18.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 18
               Intensity: 264.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   1476.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#359, concurrent=0)
[   1476.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#360, concurrent=0)
               duration: 10.0
               Coef: 1.0
               FrameTransitionCount: 10
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   1486.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#360, concurrent=0)
[   1486.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#361, concurrent=0)
               duration: 18.0
               Coef: 0.8799999952316284
               FrameTransitionCount: 18
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   1488.0] L PostProcessingActor[0] - EventEditLocationalLight (#114, concurrent=1)
[   1488.0] E PostProcessingActor[0] - EventEditLocationalLight (#115, concurrent=1)
               duration: 22.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 22
               Intensity: 345.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   1504.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#361, concurrent=0)
[   1504.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#362, concurrent=0)
               duration: 22.0
               Coef: 1.149999976158142
               FrameTransitionCount: 22
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   1510.0] L PostProcessingActor[0] - EventEditLocationalLight (#115, concurrent=1)
[   1510.0] E PostProcessingActor[0] - EventEditLocationalLight (#116, concurrent=1)
               duration: 10.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 10
               Intensity: 255.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   1520.0] L PostProcessingActor[0] - EventEditLocationalLight (#116, concurrent=1)
[   1520.0] E PostProcessingActor[0] - EventEditLocationalLight (#117, concurrent=1)
               duration: 12.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 12
               Intensity: 330.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   1526.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#362, concurrent=0)
[   1526.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#363, concurrent=0)
               duration: 10.0
               Coef: 0.8500000238418579
               FrameTransitionCount: 10
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   1532.0] L PostProcessingActor[0] - EventEditLocationalLight (#117, concurrent=1)
[   1532.0] E PostProcessingActor[0] - EventEditLocationalLight (#118, concurrent=1)
               duration: 20.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 20
               Intensity: 255.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   1536.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#363, concurrent=0)
[   1536.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#364, concurrent=0)
               duration: 12.0
               Coef: 1.100000023841858
               FrameTransitionCount: 12
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   1548.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#364, concurrent=0)
[   1548.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#365, concurrent=0)
               duration: 20.0
               Coef: 0.8500000238418579
               FrameTransitionCount: 20
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   1552.0] L PostProcessingActor[0] - EventEditLocationalLight (#118, concurrent=1)
[   1552.0] E PostProcessingActor[0] - EventEditLocationalLight (#119, concurrent=1)
               duration: 12.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 12
               Intensity: 330.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   1564.0] L PostProcessingActor[0] - EventEditLocationalLight (#119, concurrent=1)
[   1564.0] E PostProcessingActor[0] - EventEditLocationalLight (#120, concurrent=1)
               duration: 10.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 10
               Intensity: 300.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   1568.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#365, concurrent=0)
[   1568.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#366, concurrent=0)
               duration: 12.0
               Coef: 1.100000023841858
               FrameTransitionCount: 12
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   1574.0] L PostProcessingActor[0] - EventEditLocationalLight (#120, concurrent=1)
[   1574.0] E PostProcessingActor[0] - EventEditLocationalLight (#121, concurrent=1)
               duration: 10.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 10
               Intensity: 255.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   1580.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#366, concurrent=0)
[   1580.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#367, concurrent=0)
               duration: 12.0
               Coef: 1.0
               FrameTransitionCount: 12
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   1584.0] L PostProcessingActor[0] - EventEditLocationalLight (#121, concurrent=1)
[   1584.0] E PostProcessingActor[0] - EventEditLocationalLight (#122, concurrent=1)
               duration: 10.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 10
               Intensity: 255.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   1592.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#367, concurrent=0)
[   1592.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#368, concurrent=0)
               duration: 10.0
               Coef: 0.8500000238418579
               FrameTransitionCount: 10
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   1594.0] L PostProcessingActor[0] - EventEditLocationalLight (#122, concurrent=1)
[   1594.0] E PostProcessingActor[0] - EventEditLocationalLight (#123, concurrent=1)
               duration: 10.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 10
               Intensity: 255.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   1602.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#368, concurrent=0)
[   1602.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#369, concurrent=0)
               duration: 8.0
               Coef: 1.100000023841858
               FrameTransitionCount: 8
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   1604.0] L PostProcessingActor[0] - EventEditLocationalLight (#123, concurrent=1)
[   1604.0] E PostProcessingActor[0] - EventEditLocationalLight (#124, concurrent=1)
               duration: 10.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 10
               Intensity: 300.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   1610.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#369, concurrent=0)
[   1610.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#370, concurrent=0)
               duration: 10.0
               Coef: 1.100000023841858
               FrameTransitionCount: 10
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   1614.0] L PostProcessingActor[0] - EventEditLocationalLight (#124, concurrent=1)
[   1614.0] E PostProcessingActor[0] - EventEditLocationalLight (#125, concurrent=1)
               duration: 18.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 18
               Intensity: 264.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   1620.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#370, concurrent=0)
[   1620.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#371, concurrent=0)
               duration: 10.0
               Coef: 0.8500000238418579
               FrameTransitionCount: 10
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   1630.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#371, concurrent=0)
[   1630.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#372, concurrent=0)
               duration: 10.0
               Coef: 1.0
               FrameTransitionCount: 10
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   1632.0] L PostProcessingActor[0] - EventEditLocationalLight (#125, concurrent=1)
[   1632.0] E PostProcessingActor[0] - EventEditLocationalLight (#126, concurrent=1)
               duration: 22.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 22
               Intensity: 345.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   1640.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#372, concurrent=0)
[   1640.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#373, concurrent=0)
               duration: 6.0
               Coef: 0.8500000238418579
               FrameTransitionCount: 6
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   1646.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#373, concurrent=0)
[   1646.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#374, concurrent=0)
               duration: 8.0
               Coef: 0.8500000238418579
               FrameTransitionCount: 8
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   1654.0] L PostProcessingActor[0] - EventEditLocationalLight (#126, concurrent=1)
[   1654.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#374, concurrent=0)
[   1654.0] E PostProcessingActor[0] - EventEditLocationalLight (#127, concurrent=1)
               duration: 10.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 10
               Intensity: 255.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   1654.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#375, concurrent=0)
               duration: 9.0
               Coef: 1.0
               FrameTransitionCount: 9
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   1663.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#375, concurrent=0)
[   1663.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#376, concurrent=0)
               duration: 10.0
               Coef: 0.8500000238418579
               FrameTransitionCount: 10
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   1664.0] L PostProcessingActor[0] - EventEditLocationalLight (#127, concurrent=1)
[   1664.0] E PostProcessingActor[0] - EventEditLocationalLight (#128, concurrent=1)
               duration: 12.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 12
               Intensity: 330.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   1673.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#376, concurrent=0)
[   1673.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#377, concurrent=0)
               duration: 10.0
               Coef: 0.8500000238418579
               FrameTransitionCount: 10
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   1676.0] L PostProcessingActor[0] - EventEditLocationalLight (#128, concurrent=1)
[   1676.0] E PostProcessingActor[0] - EventEditLocationalLight (#129, concurrent=1)
               duration: 20.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 20
               Intensity: 255.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   1683.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#377, concurrent=0)
[   1683.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#378, concurrent=0)
               duration: 10.0
               Coef: 1.0
               FrameTransitionCount: 10
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   1693.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#378, concurrent=0)
[   1693.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#379, concurrent=0)
               duration: 18.0
               Coef: 0.8799999952316284
               FrameTransitionCount: 18
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   1696.0] L PostProcessingActor[0] - EventEditLocationalLight (#129, concurrent=1)
[   1696.0] E PostProcessingActor[0] - EventEditLocationalLight (#130, concurrent=1)
               duration: 12.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 12
               Intensity: 330.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   1708.0] L PostProcessingActor[0] - EventEditLocationalLight (#130, concurrent=1)
[   1708.0] E PostProcessingActor[0] - EventEditLocationalLight (#131, concurrent=1)
               duration: 10.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 10
               Intensity: 300.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   1711.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#379, concurrent=0)
[   1711.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#380, concurrent=0)
               duration: 22.0
               Coef: 1.149999976158142
               FrameTransitionCount: 22
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   1718.0] L PostProcessingActor[0] - EventEditLocationalLight (#131, concurrent=1)
[   1718.0] E PostProcessingActor[0] - EventEditLocationalLight (#132, concurrent=1)
               duration: 10.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 10
               Intensity: 255.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   1728.0] L PostProcessingActor[0] - EventEditLocationalLight (#132, concurrent=1)
[   1728.0] E PostProcessingActor[0] - EventEditLocationalLight (#133, concurrent=1)
               duration: 10.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 10
               Intensity: 255.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   1733.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#380, concurrent=0)
[   1733.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#381, concurrent=0)
               duration: 10.0
               Coef: 0.8500000238418579
               FrameTransitionCount: 10
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   1738.0] L PostProcessingActor[0] - EventEditLocationalLight (#133, concurrent=1)
[   1738.0] E PostProcessingActor[0] - EventEditLocationalLight (#134, concurrent=1)
               duration: 10.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 10
               Intensity: 255.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   1743.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#381, concurrent=0)
[   1743.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#382, concurrent=0)
               duration: 12.0
               Coef: 1.100000023841858
               FrameTransitionCount: 12
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   1748.0] L PostProcessingActor[0] - EventEditLocationalLight (#134, concurrent=1)
[   1748.0] E PostProcessingActor[0] - EventEditLocationalLight (#135, concurrent=1)
               duration: 10.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 10
               Intensity: 300.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   1755.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#382, concurrent=0)
[   1755.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#383, concurrent=0)
               duration: 20.0
               Coef: 0.8500000238418579
               FrameTransitionCount: 20
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   1758.0] L PostProcessingActor[0] - EventEditLocationalLight (#135, concurrent=1)
[   1758.0] E PostProcessingActor[0] - EventEditLocationalLight (#136, concurrent=1)
               duration: 18.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 18
               Intensity: 264.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   1775.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#383, concurrent=0)
[   1775.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#384, concurrent=0)
               duration: 12.0
               Coef: 1.100000023841858
               FrameTransitionCount: 12
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   1776.0] L PostProcessingActor[0] - EventEditLocationalLight (#136, concurrent=1)
[   1776.0] E PostProcessingActor[0] - EventEditLocationalLight (#137, concurrent=1)
               duration: 22.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 22
               Intensity: 345.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   1787.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#384, concurrent=0)
[   1787.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#385, concurrent=0)
               duration: 12.0
               Coef: 1.0
               FrameTransitionCount: 12
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   1798.0] L PostProcessingActor[0] - EventEditLocationalLight (#137, concurrent=1)
[   1798.0] E PostProcessingActor[0] - EventEditLocationalLight (#138, concurrent=1)
               duration: 10.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 10
               Intensity: 255.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   1799.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#385, concurrent=0)
[   1799.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#386, concurrent=0)
               duration: 10.0
               Coef: 0.8500000238418579
               FrameTransitionCount: 10
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   1808.0] L PostProcessingActor[0] - EventEditLocationalLight (#138, concurrent=1)
[   1808.0] E PostProcessingActor[0] - EventEditLocationalLight (#139, concurrent=1)
               duration: 12.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 12
               Intensity: 330.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   1809.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#386, concurrent=0)
[   1809.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#387, concurrent=0)
               duration: 8.0
               Coef: 1.100000023841858
               FrameTransitionCount: 8
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   1817.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#387, concurrent=0)
[   1817.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#388, concurrent=0)
               duration: 10.0
               Coef: 1.100000023841858
               FrameTransitionCount: 10
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   1820.0] L PostProcessingActor[0] - EventEditLocationalLight (#139, concurrent=1)
[   1820.0] E PostProcessingActor[0] - EventEditLocationalLight (#140, concurrent=1)
               duration: 20.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 20
               Intensity: 255.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   1827.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#388, concurrent=0)
[   1827.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#389, concurrent=0)
               duration: 10.0
               Coef: 0.8500000238418579
               FrameTransitionCount: 10
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   1837.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#389, concurrent=0)
[   1837.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#390, concurrent=0)
               duration: 10.0
               Coef: 1.0
               FrameTransitionCount: 10
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   1840.0] L PostProcessingActor[0] - EventEditLocationalLight (#140, concurrent=1)
[   1840.0] E PostProcessingActor[0] - EventEditLocationalLight (#141, concurrent=1)
               duration: 12.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 12
               Intensity: 330.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   1847.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#390, concurrent=0)
[   1847.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#391, concurrent=0)
               duration: 6.0
               Coef: 0.8500000238418579
               FrameTransitionCount: 6
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   1852.0] L PostProcessingActor[0] - EventEditLocationalLight (#141, concurrent=1)
[   1852.0] E PostProcessingActor[0] - EventEditLocationalLight (#142, concurrent=1)
               duration: 10.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 10
               Intensity: 300.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   1853.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#391, concurrent=0)
[   1853.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#392, concurrent=0)
               duration: 8.0
               Coef: 0.8500000238418579
               FrameTransitionCount: 8
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   1861.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#392, concurrent=0)
[   1861.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#393, concurrent=0)
               duration: 10.0
               Coef: 1.0
               FrameTransitionCount: 10
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   1862.0] L PostProcessingActor[0] - EventEditLocationalLight (#142, concurrent=1)
[   1862.0] E PostProcessingActor[0] - EventEditLocationalLight (#143, concurrent=1)
               duration: 10.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 10
               Intensity: 255.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   1871.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#393, concurrent=0)
[   1871.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#394, concurrent=0)
               duration: 10.0
               Coef: 0.8500000238418579
               FrameTransitionCount: 10
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   1872.0] L PostProcessingActor[0] - EventEditLocationalLight (#143, concurrent=1)
[   1872.0] E PostProcessingActor[0] - EventEditLocationalLight (#144, concurrent=1)
               duration: 10.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 10
               Intensity: 255.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   1881.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#394, concurrent=0)
[   1881.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#395, concurrent=0)
               duration: 10.0
               Coef: 0.8500000238418579
               FrameTransitionCount: 10
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   1882.0] L PostProcessingActor[0] - EventEditLocationalLight (#144, concurrent=1)
[   1882.0] E PostProcessingActor[0] - EventEditLocationalLight (#145, concurrent=1)
               duration: 10.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 10
               Intensity: 255.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   1891.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#395, concurrent=0)
[   1891.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#396, concurrent=0)
               duration: 10.0
               Coef: 1.0
               FrameTransitionCount: 10
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   1892.0] L PostProcessingActor[0] - EventEditLocationalLight (#145, concurrent=1)
[   1892.0] E PostProcessingActor[0] - EventEditLocationalLight (#146, concurrent=1)
               duration: 10.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 10
               Intensity: 300.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   1901.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#396, concurrent=0)
[   1901.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#397, concurrent=0)
               duration: 18.0
               Coef: 0.8799999952316284
               FrameTransitionCount: 18
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   1902.0] L PostProcessingActor[0] - EventEditLocationalLight (#146, concurrent=1)
[   1902.0] E PostProcessingActor[0] - EventEditLocationalLight (#147, concurrent=1)
               duration: 18.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 18
               Intensity: 264.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   1919.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#397, concurrent=0)
[   1919.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#398, concurrent=0)
               duration: 22.0
               Coef: 1.149999976158142
               FrameTransitionCount: 22
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   1920.0] L PostProcessingActor[0] - EventEditLocationalLight (#147, concurrent=1)
[   1920.0] E PostProcessingActor[0] - EventEditLocationalLight (#148, concurrent=1)
               duration: 22.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 22
               Intensity: 345.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   1941.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#398, concurrent=0)
[   1941.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#399, concurrent=0)
               duration: 10.0
               Coef: 0.8500000238418579
               FrameTransitionCount: 10
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   1942.0] L PostProcessingActor[0] - EventEditLocationalLight (#148, concurrent=1)
[   1942.0] E PostProcessingActor[0] - EventEditLocationalLight (#149, concurrent=1)
               duration: 10.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 10
               Intensity: 255.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   1951.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#399, concurrent=0)
[   1951.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#400, concurrent=0)
               duration: 12.0
               Coef: 1.100000023841858
               FrameTransitionCount: 12
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   1952.0] L PostProcessingActor[0] - EventEditLocationalLight (#149, concurrent=1)
[   1952.0] E PostProcessingActor[0] - EventEditLocationalLight (#150, concurrent=1)
               duration: 12.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 12
               Intensity: 330.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   1963.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#400, concurrent=0)
[   1963.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#401, concurrent=0)
               duration: 20.0
               Coef: 0.8500000238418579
               FrameTransitionCount: 20
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   1964.0] L PostProcessingActor[0] - EventEditLocationalLight (#150, concurrent=1)
[   1964.0] E PostProcessingActor[0] - EventEditLocationalLight (#151, concurrent=1)
               duration: 20.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 20
               Intensity: 255.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   1980.0] L EventWorldManagerController[1] - Event_SetDemoPaletteForTimeline (#230, concurrent=0)
[   1980.0] E EventWorldManagerController[1] - Event_SetDemoPaletteForTimeline (#231, concurrent=0)
               duration: 960.0
               DemoPaletteName: Dm_StaffCredit_0010_C03
               IsWaitEnd: true
[   1983.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#401, concurrent=0)
[   1983.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#402, concurrent=0)
               duration: 12.0
               Coef: 1.100000023841858
               FrameTransitionCount: 12
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   1984.0] L PostProcessingActor[0] - EventEditLocationalLight (#151, concurrent=1)
[   1984.0] E PostProcessingActor[0] - EventEditLocationalLight (#152, concurrent=1)
               duration: 12.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 12
               Intensity: 320.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   1995.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#402, concurrent=0)
[   1995.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#403, concurrent=0)
               duration: 12.0
               Coef: 1.0
               FrameTransitionCount: 12
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   1996.0] L PostProcessingActor[0] - EventEditLocationalLight (#152, concurrent=1)
[   1996.0] E PostProcessingActor[0] - EventEditLocationalLight (#153, concurrent=1)
               duration: 10.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 10
               Intensity: 300.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   2006.0] L PostProcessingActor[0] - EventEditLocationalLight (#153, concurrent=1)
[   2006.0] E PostProcessingActor[0] - EventEditLocationalLight (#154, concurrent=1)
               duration: 10.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 10
               Intensity: 265.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   2007.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#403, concurrent=0)
[   2007.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#404, concurrent=0)
               duration: 10.0
               Coef: 0.8500000238418579
               FrameTransitionCount: 10
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   2016.0] L PostProcessingActor[0] - EventEditLocationalLight (#154, concurrent=1)
[   2016.0] E PostProcessingActor[0] - EventEditLocationalLight (#155, concurrent=1)
               duration: 10.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 10
               Intensity: 265.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   2017.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#404, concurrent=0)
[   2017.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#405, concurrent=0)
               duration: 8.0
               Coef: 1.100000023841858
               FrameTransitionCount: 8
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   2025.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#405, concurrent=0)
[   2025.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#406, concurrent=0)
               duration: 10.0
               Coef: 1.100000023841858
               FrameTransitionCount: 10
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   2026.0] L PostProcessingActor[0] - EventEditLocationalLight (#155, concurrent=1)
[   2026.0] E PostProcessingActor[0] - EventEditLocationalLight (#156, concurrent=1)
               duration: 10.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 10
               Intensity: 270.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   2035.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#406, concurrent=0)
[   2035.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#407, concurrent=0)
               duration: 10.0
               Coef: 0.8500000238418579
               FrameTransitionCount: 10
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   2036.0] L PostProcessingActor[0] - EventEditLocationalLight (#156, concurrent=1)
[   2036.0] E PostProcessingActor[0] - EventEditLocationalLight (#157, concurrent=1)
               duration: 10.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 10
               Intensity: 300.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   2045.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#407, concurrent=0)
[   2045.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#408, concurrent=0)
               duration: 10.0
               Coef: 1.0
               FrameTransitionCount: 10
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   2046.0] L PostProcessingActor[0] - EventEditLocationalLight (#157, concurrent=1)
[   2046.0] E PostProcessingActor[0] - EventEditLocationalLight (#158, concurrent=1)
               duration: 18.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 18
               Intensity: 275.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   2055.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#408, concurrent=0)
[   2055.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#409, concurrent=0)
               duration: 6.0
               Coef: 0.8500000238418579
               FrameTransitionCount: 6
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   2061.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#409, concurrent=0)
[   2061.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#410, concurrent=0)
               duration: 8.0
               Coef: 0.8500000238418579
               FrameTransitionCount: 8
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   2064.0] L PostProcessingActor[0] - EventEditLocationalLight (#158, concurrent=1)
[   2064.0] E PostProcessingActor[0] - EventEditLocationalLight (#159, concurrent=1)
               duration: 22.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 22
               Intensity: 335.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   2069.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#410, concurrent=0)
[   2069.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#411, concurrent=0)
               duration: 10.0
               Coef: 1.0
               FrameTransitionCount: 10
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   2079.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#411, concurrent=0)
[   2079.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#412, concurrent=0)
               duration: 10.0
               Coef: 0.8500000238418579
               FrameTransitionCount: 10
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   2086.0] L PostProcessingActor[0] - EventEditLocationalLight (#159, concurrent=1)
[   2086.0] E PostProcessingActor[0] - EventEditLocationalLight (#160, concurrent=1)
               duration: 10.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 10
               Intensity: 265.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   2089.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#412, concurrent=0)
[   2089.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#413, concurrent=0)
               duration: 10.0
               Coef: 0.8500000238418579
               FrameTransitionCount: 10
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   2096.0] L PostProcessingActor[0] - EventEditLocationalLight (#160, concurrent=1)
[   2096.0] E PostProcessingActor[0] - EventEditLocationalLight (#161, concurrent=1)
               duration: 12.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 12
               Intensity: 320.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   2099.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#413, concurrent=0)
[   2099.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#414, concurrent=0)
               duration: 10.0
               Coef: 1.0
               FrameTransitionCount: 10
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   2108.0] L PostProcessingActor[0] - EventEditLocationalLight (#161, concurrent=1)
[   2108.0] E PostProcessingActor[0] - EventEditLocationalLight (#162, concurrent=1)
               duration: 20.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 20
               Intensity: 265.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   2109.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#414, concurrent=0)
[   2109.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#415, concurrent=0)
               duration: 18.0
               Coef: 0.8799999952316284
               FrameTransitionCount: 18
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   2127.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#415, concurrent=0)
[   2127.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#416, concurrent=0)
               duration: 22.0
               Coef: 1.149999976158142
               FrameTransitionCount: 22
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   2128.0] L PostProcessingActor[0] - EventEditLocationalLight (#162, concurrent=1)
[   2128.0] E PostProcessingActor[0] - EventEditLocationalLight (#163, concurrent=1)
               duration: 12.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 12
               Intensity: 320.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   2140.0] L PostProcessingActor[0] - EventEditLocationalLight (#163, concurrent=1)
[   2140.0] E PostProcessingActor[0] - EventEditLocationalLight (#164, concurrent=1)
               duration: 10.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 10
               Intensity: 300.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   2149.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#416, concurrent=0)
[   2149.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#417, concurrent=0)
               duration: 10.0
               Coef: 0.8500000238418579
               FrameTransitionCount: 10
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   2150.0] L PostProcessingActor[0] - EventEditLocationalLight (#164, concurrent=1)
[   2150.0] E PostProcessingActor[0] - EventEditLocationalLight (#165, concurrent=1)
               duration: 10.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 10
               Intensity: 265.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   2159.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#417, concurrent=0)
[   2159.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#418, concurrent=0)
               duration: 12.0
               Coef: 1.100000023841858
               FrameTransitionCount: 12
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   2160.0] L PostProcessingActor[0] - EventEditLocationalLight (#165, concurrent=1)
[   2160.0] E PostProcessingActor[0] - EventEditLocationalLight (#166, concurrent=1)
               duration: 10.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 10
               Intensity: 265.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   2170.0] L PostProcessingActor[0] - EventEditLocationalLight (#166, concurrent=1)
[   2170.0] E PostProcessingActor[0] - EventEditLocationalLight (#167, concurrent=1)
               duration: 10.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 10
               Intensity: 265.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   2171.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#418, concurrent=0)
[   2171.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#419, concurrent=0)
               duration: 20.0
               Coef: 0.8500000238418579
               FrameTransitionCount: 20
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   2180.0] L PostProcessingActor[0] - EventEditLocationalLight (#167, concurrent=1)
[   2180.0] E PostProcessingActor[0] - EventEditLocationalLight (#168, concurrent=1)
               duration: 10.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 10
               Intensity: 300.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   2190.0] L PostProcessingActor[0] - EventEditLocationalLight (#168, concurrent=1)
[   2190.0] E PostProcessingActor[0] - EventEditLocationalLight (#169, concurrent=1)
               duration: 18.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 18
               Intensity: 274.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   2191.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#419, concurrent=0)
[   2191.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#420, concurrent=0)
               duration: 12.0
               Coef: 1.100000023841858
               FrameTransitionCount: 12
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   2203.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#420, concurrent=0)
[   2203.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#421, concurrent=0)
               duration: 12.0
               Coef: 1.0
               FrameTransitionCount: 12
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   2208.0] L PostProcessingActor[0] - EventEditLocationalLight (#169, concurrent=1)
[   2208.0] E PostProcessingActor[0] - EventEditLocationalLight (#170, concurrent=1)
               duration: 22.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 22
               Intensity: 335.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   2215.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#421, concurrent=0)
[   2215.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#422, concurrent=0)
               duration: 10.0
               Coef: 0.8500000238418579
               FrameTransitionCount: 10
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   2225.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#422, concurrent=0)
[   2225.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#423, concurrent=0)
               duration: 8.0
               Coef: 1.100000023841858
               FrameTransitionCount: 8
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   2230.0] L PostProcessingActor[0] - EventEditLocationalLight (#170, concurrent=1)
[   2230.0] E PostProcessingActor[0] - EventEditLocationalLight (#171, concurrent=1)
               duration: 10.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 10
               Intensity: 265.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   2233.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#423, concurrent=0)
[   2233.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#424, concurrent=0)
               duration: 10.0
               Coef: 1.100000023841858
               FrameTransitionCount: 10
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   2240.0] L PostProcessingActor[0] - EventEditLocationalLight (#171, concurrent=1)
[   2240.0] E PostProcessingActor[0] - EventEditLocationalLight (#172, concurrent=1)
               duration: 12.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 12
               Intensity: 320.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   2243.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#424, concurrent=0)
[   2243.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#425, concurrent=0)
               duration: 10.0
               Coef: 0.8500000238418579
               FrameTransitionCount: 10
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   2252.0] L PostProcessingActor[0] - EventEditLocationalLight (#172, concurrent=1)
[   2252.0] E PostProcessingActor[0] - EventEditLocationalLight (#173, concurrent=1)
               duration: 20.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 20
               Intensity: 265.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   2253.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#425, concurrent=0)
[   2253.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#426, concurrent=0)
               duration: 10.0
               Coef: 1.0
               FrameTransitionCount: 10
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   2263.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#426, concurrent=0)
[   2263.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#427, concurrent=0)
               duration: 6.0
               Coef: 0.8500000238418579
               FrameTransitionCount: 6
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   2269.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#427, concurrent=0)
[   2269.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#428, concurrent=0)
               duration: 8.0
               Coef: 0.8500000238418579
               FrameTransitionCount: 8
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   2272.0] L PostProcessingActor[0] - EventEditLocationalLight (#173, concurrent=1)
[   2272.0] E PostProcessingActor[0] - EventEditLocationalLight (#174, concurrent=1)
               duration: 12.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 12
               Intensity: 320.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   2277.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#428, concurrent=0)
[   2277.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#429, concurrent=0)
               duration: 10.0
               Coef: 1.0
               FrameTransitionCount: 10
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   2284.0] L PostProcessingActor[0] - EventEditLocationalLight (#174, concurrent=1)
[   2284.0] E PostProcessingActor[0] - EventEditLocationalLight (#175, concurrent=1)
               duration: 10.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 10
               Intensity: 300.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   2287.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#429, concurrent=0)
[   2287.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#430, concurrent=0)
               duration: 10.0
               Coef: 0.8500000238418579
               FrameTransitionCount: 10
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   2294.0] L PostProcessingActor[0] - EventEditLocationalLight (#175, concurrent=1)
[   2294.0] E PostProcessingActor[0] - EventEditLocationalLight (#176, concurrent=1)
               duration: 10.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 10
               Intensity: 275.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   2297.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#430, concurrent=0)
[   2297.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#431, concurrent=0)
               duration: 10.0
               Coef: 0.8500000238418579
               FrameTransitionCount: 10
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   2304.0] L PostProcessingActor[0] - EventEditLocationalLight (#176, concurrent=1)
[   2304.0] E PostProcessingActor[0] - EventEditLocationalLight (#177, concurrent=1)
               duration: 10.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 10
               Intensity: 265.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   2307.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#431, concurrent=0)
[   2307.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#432, concurrent=0)
               duration: 10.0
               Coef: 1.0
               FrameTransitionCount: 10
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   2314.0] L PostProcessingActor[0] - EventEditLocationalLight (#177, concurrent=1)
[   2314.0] E PostProcessingActor[0] - EventEditLocationalLight (#178, concurrent=1)
               duration: 10.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 10
               Intensity: 265.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   2317.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#432, concurrent=0)
[   2317.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#433, concurrent=0)
               duration: 18.0
               Coef: 0.8799999952316284
               FrameTransitionCount: 18
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   2324.0] L PostProcessingActor[0] - EventEditLocationalLight (#178, concurrent=1)
[   2324.0] E PostProcessingActor[0] - EventEditLocationalLight (#179, concurrent=1)
               duration: 10.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 10
               Intensity: 300.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   2334.0] L PostProcessingActor[0] - EventEditLocationalLight (#179, concurrent=1)
[   2334.0] E PostProcessingActor[0] - EventEditLocationalLight (#180, concurrent=1)
               duration: 18.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 18
               Intensity: 275.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   2335.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#433, concurrent=0)
[   2335.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#434, concurrent=0)
               duration: 22.0
               Coef: 1.149999976158142
               FrameTransitionCount: 22
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   2352.0] L PostProcessingActor[0] - EventEditLocationalLight (#180, concurrent=1)
[   2352.0] E PostProcessingActor[0] - EventEditLocationalLight (#181, concurrent=1)
               duration: 22.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 22
               Intensity: 335.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   2357.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#434, concurrent=0)
[   2357.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#435, concurrent=0)
               duration: 10.0
               Coef: 0.8500000238418579
               FrameTransitionCount: 10
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   2367.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#435, concurrent=0)
[   2367.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#436, concurrent=0)
               duration: 12.0
               Coef: 1.100000023841858
               FrameTransitionCount: 12
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   2374.0] L PostProcessingActor[0] - EventEditLocationalLight (#181, concurrent=1)
[   2374.0] E PostProcessingActor[0] - EventEditLocationalLight (#182, concurrent=1)
               duration: 10.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 10
               Intensity: 265.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   2379.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#436, concurrent=0)
[   2379.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#437, concurrent=0)
               duration: 20.0
               Coef: 0.8500000238418579
               FrameTransitionCount: 20
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   2384.0] L PostProcessingActor[0] - EventEditLocationalLight (#182, concurrent=1)
[   2384.0] E PostProcessingActor[0] - EventEditLocationalLight (#183, concurrent=1)
               duration: 12.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 12
               Intensity: 320.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   2396.0] L PostProcessingActor[0] - EventEditLocationalLight (#183, concurrent=1)
[   2396.0] E PostProcessingActor[0] - EventEditLocationalLight (#184, concurrent=1)
               duration: 20.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 20
               Intensity: 275.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   2399.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#437, concurrent=0)
[   2399.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#438, concurrent=0)
               duration: 12.0
               Coef: 1.100000023841858
               FrameTransitionCount: 12
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   2411.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#438, concurrent=0)
[   2411.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#439, concurrent=0)
               duration: 12.0
               Coef: 1.0
               FrameTransitionCount: 12
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   2416.0] L PostProcessingActor[0] - EventEditLocationalLight (#184, concurrent=1)
[   2416.0] E PostProcessingActor[0] - EventEditLocationalLight (#185, concurrent=1)
               duration: 12.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 12
               Intensity: 310.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   2423.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#439, concurrent=0)
[   2423.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#440, concurrent=0)
               duration: 10.0
               Coef: 0.8500000238418579
               FrameTransitionCount: 10
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   2428.0] L PostProcessingActor[0] - EventEditLocationalLight (#185, concurrent=1)
[   2428.0] E PostProcessingActor[0] - EventEditLocationalLight (#186, concurrent=1)
               duration: 10.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 10
               Intensity: 300.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   2433.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#440, concurrent=0)
[   2433.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#441, concurrent=0)
               duration: 8.0
               Coef: 1.100000023841858
               FrameTransitionCount: 8
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   2438.0] L PostProcessingActor[0] - EventEditLocationalLight (#186, concurrent=1)
[   2438.0] E PostProcessingActor[0] - EventEditLocationalLight (#187, concurrent=1)
               duration: 10.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 10
               Intensity: 275.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   2441.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#441, concurrent=0)
[   2441.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#442, concurrent=0)
               duration: 10.0
               Coef: 1.100000023841858
               FrameTransitionCount: 10
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   2448.0] L PostProcessingActor[0] - EventEditLocationalLight (#187, concurrent=1)
[   2448.0] E PostProcessingActor[0] - EventEditLocationalLight (#188, concurrent=1)
               duration: 10.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 10
               Intensity: 275.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   2451.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#442, concurrent=0)
[   2451.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#443, concurrent=0)
               duration: 10.0
               Coef: 0.8500000238418579
               FrameTransitionCount: 10
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   2458.0] L PostProcessingActor[0] - EventEditLocationalLight (#188, concurrent=1)
[   2458.0] E PostProcessingActor[0] - EventEditLocationalLight (#189, concurrent=1)
               duration: 10.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 10
               Intensity: 285.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   2461.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#443, concurrent=0)
[   2461.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#444, concurrent=0)
               duration: 10.0
               Coef: 1.0
               FrameTransitionCount: 10
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   2468.0] L PostProcessingActor[0] - EventEditLocationalLight (#189, concurrent=1)
[   2468.0] E PostProcessingActor[0] - EventEditLocationalLight (#190, concurrent=1)
               duration: 10.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 10
               Intensity: 300.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   2471.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#444, concurrent=0)
[   2471.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#445, concurrent=0)
               duration: 6.0
               Coef: 0.8500000238418579
               FrameTransitionCount: 6
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   2477.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#445, concurrent=0)
[   2477.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#446, concurrent=0)
               duration: 8.0
               Coef: 0.8500000238418579
               FrameTransitionCount: 8
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   2478.0] L PostProcessingActor[0] - EventEditLocationalLight (#190, concurrent=1)
[   2478.0] E PostProcessingActor[0] - EventEditLocationalLight (#191, concurrent=1)
               duration: 18.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 18
               Intensity: 274.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   2485.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#446, concurrent=0)
[   2485.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#447, concurrent=0)
               duration: 10.0
               Coef: 1.0
               FrameTransitionCount: 10
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   2495.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#447, concurrent=0)
[   2495.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#448, concurrent=0)
               duration: 10.0
               Coef: 0.8500000238418579
               FrameTransitionCount: 10
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   2496.0] L PostProcessingActor[0] - EventEditLocationalLight (#191, concurrent=1)
[   2496.0] E PostProcessingActor[0] - EventEditLocationalLight (#192, concurrent=1)
               duration: 22.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 22
               Intensity: 335.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   2505.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#448, concurrent=0)
[   2505.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#449, concurrent=0)
               duration: 10.0
               Coef: 0.8500000238418579
               FrameTransitionCount: 10
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   2515.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#449, concurrent=0)
[   2515.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#450, concurrent=0)
               duration: 10.0
               Coef: 1.0
               FrameTransitionCount: 10
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   2518.0] L PostProcessingActor[0] - EventEditLocationalLight (#192, concurrent=1)
[   2518.0] E PostProcessingActor[0] - EventEditLocationalLight (#193, concurrent=1)
               duration: 10.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 10
               Intensity: 265.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   2525.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#450, concurrent=0)
[   2525.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#451, concurrent=0)
               duration: 18.0
               Coef: 0.8799999952316284
               FrameTransitionCount: 18
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   2528.0] L PostProcessingActor[0] - EventEditLocationalLight (#193, concurrent=1)
[   2528.0] E PostProcessingActor[0] - EventEditLocationalLight (#194, concurrent=1)
               duration: 12.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 12
               Intensity: 320.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   2540.0] L PostProcessingActor[0] - EventEditLocationalLight (#194, concurrent=1)
[   2540.0] E PostProcessingActor[0] - EventEditLocationalLight (#195, concurrent=1)
               duration: 20.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 20
               Intensity: 265.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   2543.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#451, concurrent=0)
[   2543.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#452, concurrent=0)
               duration: 22.0
               Coef: 1.149999976158142
               FrameTransitionCount: 22
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   2560.0] L PostProcessingActor[0] - EventEditLocationalLight (#195, concurrent=1)
[   2560.0] E PostProcessingActor[0] - EventEditLocationalLight (#196, concurrent=1)
               duration: 12.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 12
               Intensity: 305.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   2565.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#452, concurrent=0)
[   2565.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#453, concurrent=0)
               duration: 10.0
               Coef: 0.8500000238418579
               FrameTransitionCount: 10
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   2572.0] L PostProcessingActor[0] - EventEditLocationalLight (#196, concurrent=1)
[   2572.0] E PostProcessingActor[0] - EventEditLocationalLight (#197, concurrent=1)
               duration: 10.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 10
               Intensity: 300.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   2575.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#453, concurrent=0)
[   2575.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#454, concurrent=0)
               duration: 12.0
               Coef: 1.100000023841858
               FrameTransitionCount: 12
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   2582.0] L PostProcessingActor[0] - EventEditLocationalLight (#197, concurrent=1)
[   2582.0] E PostProcessingActor[0] - EventEditLocationalLight (#198, concurrent=1)
               duration: 10.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 10
               Intensity: 270.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   2587.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#454, concurrent=0)
[   2587.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#455, concurrent=0)
               duration: 20.0
               Coef: 0.8500000238418579
               FrameTransitionCount: 20
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   2592.0] L PostProcessingActor[0] - EventEditLocationalLight (#198, concurrent=1)
[   2592.0] E PostProcessingActor[0] - EventEditLocationalLight (#199, concurrent=1)
               duration: 10.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 10
               Intensity: 270.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   2602.0] L PostProcessingActor[0] - EventEditLocationalLight (#199, concurrent=1)
[   2602.0] E PostProcessingActor[0] - EventEditLocationalLight (#200, concurrent=1)
               duration: 10.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 10
               Intensity: 270.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   2607.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#455, concurrent=0)
[   2607.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#456, concurrent=0)
               duration: 12.0
               Coef: 1.100000023841858
               FrameTransitionCount: 12
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   2612.0] L PostProcessingActor[0] - EventEditLocationalLight (#200, concurrent=1)
[   2612.0] E PostProcessingActor[0] - EventEditLocationalLight (#201, concurrent=1)
               duration: 10.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 10
               Intensity: 300.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   2619.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#456, concurrent=0)
[   2619.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#457, concurrent=0)
               duration: 12.0
               Coef: 1.0
               FrameTransitionCount: 12
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   2622.0] L PostProcessingActor[0] - EventEditLocationalLight (#201, concurrent=1)
[   2622.0] E PostProcessingActor[0] - EventEditLocationalLight (#202, concurrent=1)
               duration: 18.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 18
               Intensity: 285.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   2631.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#457, concurrent=0)
[   2631.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#458, concurrent=0)
               duration: 10.0
               Coef: 0.8500000238418579
               FrameTransitionCount: 10
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   2640.0] L PostProcessingActor[0] - EventEditLocationalLight (#202, concurrent=1)
[   2640.0] E PostProcessingActor[0] - EventEditLocationalLight (#203, concurrent=1)
               duration: 22.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 22
               Intensity: 320.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   2641.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#458, concurrent=0)
[   2641.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#459, concurrent=0)
               duration: 8.0
               Coef: 1.100000023841858
               FrameTransitionCount: 8
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   2649.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#459, concurrent=0)
[   2649.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#460, concurrent=0)
               duration: 10.0
               Coef: 1.100000023841858
               FrameTransitionCount: 10
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   2659.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#460, concurrent=0)
[   2659.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#461, concurrent=0)
               duration: 10.0
               Coef: 0.8500000238418579
               FrameTransitionCount: 10
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   2662.0] L PostProcessingActor[0] - EventEditLocationalLight (#203, concurrent=1)
[   2662.0] E PostProcessingActor[0] - EventEditLocationalLight (#204, concurrent=1)
               duration: 10.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 10
               Intensity: 300.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   2669.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#461, concurrent=0)
[   2669.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#462, concurrent=0)
               duration: 10.0
               Coef: 1.0
               FrameTransitionCount: 10
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   2672.0] L PostProcessingActor[0] - EventEditLocationalLight (#204, concurrent=1)
[   2672.0] E PostProcessingActor[0] - EventEditLocationalLight (#205, concurrent=1)
               duration: 12.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 12
               Intensity: 310.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   2679.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#462, concurrent=0)
[   2679.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#463, concurrent=0)
               duration: 6.0
               Coef: 0.8500000238418579
               FrameTransitionCount: 6
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   2684.0] L PostProcessingActor[0] - EventEditLocationalLight (#205, concurrent=1)
[   2684.0] E PostProcessingActor[0] - EventEditLocationalLight (#206, concurrent=1)
               duration: 20.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 20
               Intensity: 300.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   2685.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#463, concurrent=0)
[   2685.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#464, concurrent=0)
               duration: 8.0
               Coef: 0.8500000238418579
               FrameTransitionCount: 8
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   2693.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#464, concurrent=0)
[   2693.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#465, concurrent=0)
               duration: 10.0
               Coef: 1.0
               FrameTransitionCount: 10
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   2703.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#465, concurrent=0)
[   2703.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#466, concurrent=0)
               duration: 10.0
               Coef: 0.8500000238418579
               FrameTransitionCount: 10
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   2704.0] L PostProcessingActor[0] - EventEditLocationalLight (#206, concurrent=1)
[   2704.0] E PostProcessingActor[0] - EventEditLocationalLight (#207, concurrent=1)
               duration: 12.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 12
               Intensity: 290.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   2713.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#466, concurrent=0)
[   2713.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#467, concurrent=0)
               duration: 10.0
               Coef: 0.8500000238418579
               FrameTransitionCount: 10
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   2716.0] L PostProcessingActor[0] - EventEditLocationalLight (#207, concurrent=1)
[   2716.0] E PostProcessingActor[0] - EventEditLocationalLight (#208, concurrent=1)
               duration: 10.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 10
               Intensity: 300.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   2723.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#467, concurrent=0)
[   2723.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#468, concurrent=0)
               duration: 10.0
               Coef: 1.0
               FrameTransitionCount: 10
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   2726.0] L PostProcessingActor[0] - EventEditLocationalLight (#208, concurrent=1)
[   2726.0] E PostProcessingActor[0] - EventEditLocationalLight (#209, concurrent=1)
               duration: 10.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 10
               Intensity: 280.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   2733.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#468, concurrent=0)
[   2733.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#469, concurrent=0)
               duration: 18.0
               Coef: 0.8799999952316284
               FrameTransitionCount: 18
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   2736.0] L PostProcessingActor[0] - EventEditLocationalLight (#209, concurrent=1)
[   2736.0] E PostProcessingActor[0] - EventEditLocationalLight (#210, concurrent=1)
               duration: 10.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 10
               Intensity: 290.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   2746.0] L PostProcessingActor[0] - EventEditLocationalLight (#210, concurrent=1)
[   2746.0] E PostProcessingActor[0] - EventEditLocationalLight (#211, concurrent=1)
               duration: 10.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 10
               Intensity: 295.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   2751.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#469, concurrent=0)
[   2751.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#470, concurrent=0)
               duration: 22.0
               Coef: 1.149999976158142
               FrameTransitionCount: 22
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   2756.0] L PostProcessingActor[0] - EventEditLocationalLight (#211, concurrent=1)
[   2756.0] E PostProcessingActor[0] - EventEditLocationalLight (#212, concurrent=1)
               duration: 10.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 10
               Intensity: 300.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   2766.0] L PostProcessingActor[0] - EventEditLocationalLight (#212, concurrent=1)
[   2766.0] E PostProcessingActor[0] - EventEditLocationalLight (#213, concurrent=1)
               duration: 18.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 18
               Intensity: 280.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   2773.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#470, concurrent=0)
[   2773.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#471, concurrent=0)
               duration: 10.0
               Coef: 0.8500000238418579
               FrameTransitionCount: 10
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   2783.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#471, concurrent=0)
[   2783.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#472, concurrent=0)
               duration: 12.0
               Coef: 1.100000023841858
               FrameTransitionCount: 12
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   2784.0] L PostProcessingActor[0] - EventEditLocationalLight (#213, concurrent=1)
[   2784.0] E PostProcessingActor[0] - EventEditLocationalLight (#214, concurrent=1)
               duration: 22.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 22
               Intensity: 330.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   2795.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#472, concurrent=0)
[   2795.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#473, concurrent=0)
               duration: 20.0
               Coef: 0.8500000238418579
               FrameTransitionCount: 20
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   2806.0] L PostProcessingActor[0] - EventEditLocationalLight (#214, concurrent=1)
[   2806.0] E PostProcessingActor[0] - EventEditLocationalLight (#215, concurrent=1)
               duration: 10.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 10
               Intensity: 320.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   2815.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#473, concurrent=0)
[   2815.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#474, concurrent=0)
               duration: 12.0
               Coef: 1.100000023841858
               FrameTransitionCount: 12
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   2816.0] L PostProcessingActor[0] - EventEditLocationalLight (#215, concurrent=1)
[   2816.0] E PostProcessingActor[0] - EventEditLocationalLight (#216, concurrent=1)
               duration: 12.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 12
               Intensity: 300.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   2827.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#474, concurrent=0)
[   2827.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#475, concurrent=0)
               duration: 12.0
               Coef: 1.0
               FrameTransitionCount: 12
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   2828.0] L PostProcessingActor[0] - EventEditLocationalLight (#216, concurrent=1)
[   2828.0] E PostProcessingActor[0] - EventEditLocationalLight (#217, concurrent=1)
               duration: 20.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 20
               Intensity: 270.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   2839.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#475, concurrent=0)
[   2839.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#476, concurrent=0)
               duration: 10.0
               Coef: 0.8500000238418579
               FrameTransitionCount: 10
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   2848.0] L PostProcessingActor[0] - EventEditLocationalLight (#217, concurrent=1)
[   2848.0] E PostProcessingActor[0] - EventEditLocationalLight (#218, concurrent=1)
               duration: 12.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 12
               Intensity: 300.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   2849.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#476, concurrent=0)
[   2849.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#477, concurrent=0)
               duration: 8.0
               Coef: 1.100000023841858
               FrameTransitionCount: 8
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   2857.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#477, concurrent=0)
[   2857.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#478, concurrent=0)
               duration: 10.0
               Coef: 1.100000023841858
               FrameTransitionCount: 10
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   2860.0] L PostProcessingActor[0] - EventEditLocationalLight (#218, concurrent=1)
[   2860.0] E PostProcessingActor[0] - EventEditLocationalLight (#219, concurrent=1)
               duration: 10.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 10
               Intensity: 300.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   2867.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#478, concurrent=0)
[   2867.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#479, concurrent=0)
               duration: 10.0
               Coef: 0.8500000238418579
               FrameTransitionCount: 10
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   2870.0] L PostProcessingActor[0] - EventEditLocationalLight (#219, concurrent=1)
[   2870.0] E PostProcessingActor[0] - EventEditLocationalLight (#220, concurrent=1)
               duration: 10.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 10
               Intensity: 270.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   2877.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#479, concurrent=0)
[   2877.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#480, concurrent=0)
               duration: 10.0
               Coef: 1.0
               FrameTransitionCount: 10
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   2880.0] L PostProcessingActor[0] - EventEditLocationalLight (#220, concurrent=1)
[   2880.0] E PostProcessingActor[0] - EventEditLocationalLight (#221, concurrent=1)
               duration: 10.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 10
               Intensity: 270.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   2887.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#480, concurrent=0)
[   2887.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#481, concurrent=0)
               duration: 6.0
               Coef: 0.8500000238418579
               FrameTransitionCount: 6
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   2890.0] L PostProcessingActor[0] - EventEditLocationalLight (#221, concurrent=1)
[   2890.0] E PostProcessingActor[0] - EventEditLocationalLight (#222, concurrent=1)
               duration: 10.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 10
               Intensity: 270.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   2893.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#481, concurrent=0)
[   2893.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#482, concurrent=0)
               duration: 8.0
               Coef: 0.8500000238418579
               FrameTransitionCount: 8
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   2900.0] L PostProcessingActor[0] - EventEditLocationalLight (#222, concurrent=1)
[   2900.0] E PostProcessingActor[0] - EventEditLocationalLight (#223, concurrent=1)
               duration: 10.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 10
               Intensity: 300.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   2901.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#482, concurrent=0)
[   2901.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#483, concurrent=0)
               duration: 10.0
               Coef: 1.0
               FrameTransitionCount: 10
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   2910.0] L PostProcessingActor[0] - EventEditLocationalLight (#223, concurrent=1)
[   2910.0] E PostProcessingActor[0] - EventEditLocationalLight (#224, concurrent=1)
               duration: 18.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 18
               Intensity: 280.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   2911.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#483, concurrent=0)
[   2911.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#484, concurrent=0)
               duration: 10.0
               Coef: 0.8500000238418579
               FrameTransitionCount: 10
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   2921.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#484, concurrent=0)
[   2921.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#485, concurrent=0)
               duration: 10.0
               Coef: 0.8500000238418579
               FrameTransitionCount: 10
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   2928.0] L PostProcessingActor[0] - EventEditLocationalLight (#224, concurrent=1)
[   2928.0] E PostProcessingActor[0] - EventEditLocationalLight (#225, concurrent=1)
               duration: 13.0
               Color:
               - 1.659999966621399
               - 0.7900000214576721
               - 0.33000001311302185
               EditColor: true
               EditIntensity: true
               EditSourceRadius: true
               FrameTransitionCount: 22
               Intensity: 330.0
               IsFrameTransition: true
               LightHash: key
               LocationalLightCreateType: 0
               SourceRadius: 0.10000000149011612
[   2931.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#485, concurrent=0)
[   2931.0] E PostProcessingActor - EventEditLocationalLightAmplifier (#486, concurrent=0)
               duration: 10.0
               Coef: 1.0
               FrameTransitionCount: 10
               IsFrameTransition: true
               LightHash: Amplifier_DemoTapestry_01
[   2940.0] L EventWorldManagerController[0] - Event_SetEnvPaletteForTimeline (#228, concurrent=0)
[   2940.0] L EventWorldManagerController[1] - Event_SetDemoPaletteForTimeline (#231, concurrent=0)
[   2941.0] L PostProcessingActor[0] - EventCreateLocationalLightToEventCenter (#0, concurrent=0)
[   2941.0] L PostProcessingActor[0] - EventEditLocationalLight (#225, concurrent=1)
[   2941.0] L PostProcessingActor[1] - EventCreateLocationalLightToEventCenter (#226, concurrent=0)
[   2941.0] L PostProcessingActor[1] - EventEditLocationalLight (#227, concurrent=1)
[   2941.0] L PostProcessingActor - EventEditLocationalLightAmplifier (#486, concurrent=0)
