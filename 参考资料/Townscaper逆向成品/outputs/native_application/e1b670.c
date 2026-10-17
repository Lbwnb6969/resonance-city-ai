// RVA 0xe1b670 | Placemaker.GridGenerator$$MotivateCluster
// PDB: GridGenerator_MotivateCluster_mB7281C5C68EE24385493DEE78BC97E71A3EEAC47
// Body: [[10e1b670, 10e1b75c] [10e1b760, 10e1b97a]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1021c6c0 Dictionary_2_Add_m01FEB2F3B89795A9E2DF74E83079B76347F934F6_gshared
// 1021f6d0 Dictionary_2_Remove_m015EB7A9E4C8CDD944B0FDE3AF4BD8641FFC57FF_gshared
// 10224ac0 Dictionary_2_TryGetValue_mA3D568BC1487F80294B1510559EDAE366F1F4887_gshared
// 103dce70 MotivationCounter_AddMotivation_mB680A627CA4E6A1E1F7ABD0BF491B3FFC5975E52
// 1040d900 HexCluster__ctor_m1D677B43F8BFB90F5366863B970B50AC9E452E77
// 1040e0d0 HexMath_RotateCW2_mD1082E727BC8D5F3EA036E2B6B8F0397D09AF1DB
// 105d1420 List_1_Clear_m4335002B0D1AECDD647452579DC34E13BD1B83CD_gshared
// 10aa2e60 ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
// 10e10e90 GridGenerator_GetPatchOffset_m025E033F6EF8E282C9DC571A2001949E6E73511D
// 10e1b980 GridGenerator_MotivatePatch_m84854DAECD34CCB231323EBCF7C76E9F6F2A5C97
// 1102ffd0 List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared

HexCluster_tBF30C42359904C9666E094787C2C4DB5F36A5C9B * __cdecl
GridGenerator_MotivateCluster_mB7281C5C68EE24385493DEE78BC97E71A3EEAC47
          (GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0 *param_1,
          int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 param_2,
          int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 param_3,MethodInfo *param_4)

{
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar1;
  GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0 *pGVar2;
  bool bVar3;
  List_1_tF4B4555E11BC6BB26520E7E17DC313ED89F5391A *pLVar4;
  OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360 OVar5;
  int iVar6;
  uint uVar7;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar8;
  OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360 local_8;

  pGVar2 = param_1;
  if (DAT_11522665 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Dictionary_2_Add_m7C6B5B44FC91AD65F298CB4C5B825C8BB0DEEB28_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Dictionary_2_Remove_m87C07C52CFD7C646A6DA5171FE2CA7269E93FA18_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Dictionary_2_TryGetValue_mBCB9D84BB00DC59C63AE4620BDF3DB02549F8729_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&HexCluster_tBF30C42359904C9666E094787C2C4DB5F36A5C9B_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Add_m1461F3088662280147B5986230556ABF1BF15FB7_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Clear_m6BE528E6DE3484A7ADBCF7A125B9D3B399AAD8D2_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Clear_mBF0892E98D103CC59EB4BE00AD9406FDD27B8E26_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_m94659482ECB8CBF2829B433C6509EDB4B994E006_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m923B0102B95B516B412D05909C39CE4C2A095C51_RuntimeMethod_var)
    ;
    DAT_11522665 = '\x01';
  }
  local_8.___moduleIndex_0 = 0;
  local_8.___flags_1 = '\0';
  local_8._3_1_ = 0;
  if ((Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)param_1->___clusterDict_12 !=
      (Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)0x0) {
    bVar3 = Dictionary_2_TryGetValue_mA3D568BC1487F80294B1510559EDAE366F1F4887_gshared
                      ((Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)
                       param_1->___clusterDict_12,param_2,(Il2CppObject **)&local_8,
                       Dictionary_2_TryGetValue_mBCB9D84BB00DC59C63AE4620BDF3DB02549F8729_RuntimeMethod_var
                      );
    if (bVar3) {
LAB_10e1b8ae:
      if (local_8 != (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)0x0) {
        iVar6 = MotivationCounter_AddMotivation_mB680A627CA4E6A1E1F7ABD0BF491B3FFC5975E52
                          ((MotivationCounter_t0A263E14534ECFAB9C180D71127E5C3713804F1E *)
                           ((int)local_8 + 0x10),param_3,(MethodInfo *)0x0);
        if (iVar6 == 1) {
          if (local_8 == (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)0x0)
          goto LAB_10e1b976;
          if (*(char *)((int)local_8 + 0x13) == '\0') {
            *(undefined1 *)((int)local_8 + 0x12) = 0;
            if (local_8 == (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)0x0)
            goto LAB_10e1b976;
            iVar8 = GridGenerator_GetPatchOffset_m025E033F6EF8E282C9DC571A2001949E6E73511D
                              (param_1,*(int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 *)
                                        ((int)local_8 + 8),(MethodInfo *)0x0);
            param_1 = (GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0 *)iVar8.___y_1;
            iVar6 = 0;
            do {
              if (local_8 == (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)0x0)
              goto LAB_10e1b976;
              iVar1.___y_1 = *(int *)((int)local_8 + 0xc) + iVar8.___y_1;
              iVar1.___x_0 = *(int *)((int)local_8 + 8) + iVar8.___x_0;
              GridGenerator_MotivatePatch_m84854DAECD34CCB231323EBCF7C76E9F6F2A5C97
                        (pGVar2,iVar1,param_2,(MethodInfo *)0x0);
              if ((HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->has_cctor
                   != '\0') &&
                 (HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->
                  cctor_finished == 0)) {
                il2cpp_runtime_class_init
                          (HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var);
              }
              iVar8.___y_1 = (int)param_1;
              iVar8.___x_0 = iVar8.___x_0;
              iVar8 = HexMath_RotateCW2_mD1082E727BC8D5F3EA036E2B6B8F0397D09AF1DB
                                (iVar8,(MethodInfo *)0x0);
              param_1 = (GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0 *)iVar8.___y_1;
              iVar6 = iVar6 + 1;
            } while (iVar6 < 3);
          }
        }
        return (HexCluster_tBF30C42359904C9666E094787C2C4DB5F36A5C9B *)local_8;
      }
    }
    else {
      pLVar4 = param_1->___clusters_11;
      uVar7 = 0;
      if (pLVar4 != (List_1_tF4B4555E11BC6BB26520E7E17DC313ED89F5391A *)0x0) {
        iVar6 = 0x10;
        while ((int)uVar7 < pLVar4->____size_2) {
          if (pLVar4 == (List_1_tF4B4555E11BC6BB26520E7E17DC313ED89F5391A *)0x0) goto LAB_10e1b976;
          if ((uint)pLVar4->____size_2 <= uVar7) {
                    /* WARNING: Subroutine does not return */
            ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                      ((MethodInfo *)0x0);
          }
          OVar5 = *(OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360 *)
                   (pLVar4->____items_1 + iVar6);
          if (OVar5 == (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)0x0)
          goto LAB_10e1b976;
          if (*(char *)((int)OVar5 + 0x10) == '\0') {
            *(undefined1 *)((int)OVar5 + 0x12) = 0;
            local_8 = OVar5;
            if (((((OVar5 != (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)0x0) &&
                  (*(undefined1 *)((int)OVar5 + 0x11) = 0,
                  OVar5 != (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)0x0)) &&
                 (*(List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 **)((int)OVar5 + 0x24) !=
                  (List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)0x0)) &&
                ((List_1_Clear_m4335002B0D1AECDD647452579DC34E13BD1B83CD_gshared
                            (*(List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 **)
                              ((int)OVar5 + 0x24),
                             List_1_Clear_m6BE528E6DE3484A7ADBCF7A125B9D3B399AAD8D2_RuntimeMethod_var
                            ),
                 local_8 != (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)0x0 &&
                 (*(List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 **)((int)local_8 + 0x20) !=
                  (List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)0x0)))) &&
               ((List_1_Clear_m4335002B0D1AECDD647452579DC34E13BD1B83CD_gshared
                           (*(List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 **)
                             ((int)local_8 + 0x20),
                            List_1_Clear_mBF0892E98D103CC59EB4BE00AD9406FDD27B8E26_RuntimeMethod_var
                           ),
                local_8 != (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)0x0 &&
                ((*(undefined1 *)((int)local_8 + 0x13) = 0,
                 local_8 != (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)0x0 &&
                 ((Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)
                  param_1->___clusterDict_12 !=
                  (Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)0x0)))))) {
              Dictionary_2_Remove_m015EB7A9E4C8CDD944B0FDE3AF4BD8641FFC57FF_gshared
                        ((Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)
                         param_1->___clusterDict_12,
                         *(int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 *)((int)local_8 + 8),
                         Dictionary_2_Remove_m87C07C52CFD7C646A6DA5171FE2CA7269E93FA18_RuntimeMethod_var
                        );
              break;
            }
            goto LAB_10e1b976;
          }
          uVar7 = uVar7 + 1;
          iVar6 = iVar6 + 4;
          pLVar4 = param_1->___clusters_11;
          if (pLVar4 == (List_1_tF4B4555E11BC6BB26520E7E17DC313ED89F5391A *)0x0) goto LAB_10e1b976;
        }
        if (local_8 == (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)0x0) {
          OVar5 = (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)
                  il2cpp_codegen_object_new
                            (
                            HexCluster_tBF30C42359904C9666E094787C2C4DB5F36A5C9B_il2cpp_TypeInfo_var
                            );
          HexCluster__ctor_m1D677B43F8BFB90F5366863B970B50AC9E452E77
                    ((HexCluster_tBF30C42359904C9666E094787C2C4DB5F36A5C9B *)OVar5,(MethodInfo *)0x0
                    );
          local_8 = OVar5;
          if (((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)param_1->___clusters_11 ==
               (List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)0x0) ||
             (List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                        ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)param_1->___clusters_11
                         ,OVar5,
                         List_1_Add_m1461F3088662280147B5986230556ABF1BF15FB7_RuntimeMethod_var),
             local_8 == (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)0x0))
          goto LAB_10e1b976;
        }
        *(int *)((int)local_8 + 8) = param_2.___x_0;
        *(int *)((int)local_8 + 0xc) = param_2.___y_1;
        if ((local_8 != (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)0x0) &&
           ((Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)param_1->___clusterDict_12 !=
            (Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)0x0)) {
          Dictionary_2_Add_m01FEB2F3B89795A9E2DF74E83079B76347F934F6_gshared
                    ((Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)
                     param_1->___clusterDict_12,
                     *(int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 *)((int)local_8 + 8),
                     (Il2CppObject *)local_8,
                     Dictionary_2_Add_m7C6B5B44FC91AD65F298CB4C5B825C8BB0DEEB28_RuntimeMethod_var);
          goto LAB_10e1b8ae;
        }
      }
    }
  }
LAB_10e1b976:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
