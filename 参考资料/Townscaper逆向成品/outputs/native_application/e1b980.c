// RVA 0xe1b980 | Placemaker.GridGenerator$$MotivatePatch
// PDB: GridGenerator_MotivatePatch_m84854DAECD34CCB231323EBCF7C76E9F6F2A5C97
// Body: [[10e1b980, 10e1ba5c] [10e1ba63, 10e1bbb9]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1021c6c0 Dictionary_2_Add_m01FEB2F3B89795A9E2DF74E83079B76347F934F6_gshared
// 1021f6d0 Dictionary_2_Remove_m015EB7A9E4C8CDD944B0FDE3AF4BD8641FFC57FF_gshared
// 10224ac0 Dictionary_2_TryGetValue_mA3D568BC1487F80294B1510559EDAE366F1F4887_gshared
// 103dce70 MotivationCounter_AddMotivation_mB680A627CA4E6A1E1F7ABD0BF491B3FFC5975E52
// 1040f940 HexPatch__ctor_mC5223B7CF66276BA0A585165218731B2EB92D6AF
// 105d1420 List_1_Clear_m4335002B0D1AECDD647452579DC34E13BD1B83CD_gshared
// 10aa2e60 ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
// 1102ffd0 List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared

HexPatch_t441C0D4878B2BC34A093EB0359C723F5DFD697C5 * __cdecl
GridGenerator_MotivatePatch_m84854DAECD34CCB231323EBCF7C76E9F6F2A5C97
          (GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0 *param_1,
          int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 param_2,
          int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 param_3,MethodInfo *param_4)

{
  bool bVar1;
  List_1_t927A37FDB2886AACED2696AF8B9C469E7A7CCCEC *pLVar2;
  OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360 OVar3;
  int iVar4;
  uint uVar5;
  OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360 local_8;

  if (DAT_11522667 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Dictionary_2_Add_m68EE23513C52E3FE408862847956D829A44F9A81_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Dictionary_2_Remove_mEF6FF66A267A31DF6951F6060422DB35D3C7A10B_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Dictionary_2_TryGetValue_mC63137D5FA2A69BCC84781B1FC7639F5406175F7_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&HexPatch_t441C0D4878B2BC34A093EB0359C723F5DFD697C5_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Add_mEA3A4C1B55C18336182B3F6F9E69F3362DAF3CDB_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Clear_m04848555848ED59E2E419503C1B69AC0F4C315F0_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Clear_mC92A676A3C9BFEFF1C88BADCAF85070A2DCABED4_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_m7ED1E524A3DE8D1223620101C9EB572E56434550_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m12161826693622E81B5DD33F2E8553106668DEB5_RuntimeMethod_var)
    ;
    DAT_11522667 = '\x01';
  }
  local_8.___moduleIndex_0 = 0;
  local_8.___flags_1 = '\0';
  local_8._3_1_ = 0;
  if ((Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)param_1->___patchDict_10 !=
      (Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)0x0) {
    bVar1 = Dictionary_2_TryGetValue_mA3D568BC1487F80294B1510559EDAE366F1F4887_gshared
                      ((Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)
                       param_1->___patchDict_10,param_2,(Il2CppObject **)&local_8,
                       Dictionary_2_TryGetValue_mC63137D5FA2A69BCC84781B1FC7639F5406175F7_RuntimeMethod_var
                      );
    if (bVar1) {
LAB_10e1bb90:
      if (local_8 != (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)0x0) {
        MotivationCounter_AddMotivation_mB680A627CA4E6A1E1F7ABD0BF491B3FFC5975E52
                  ((MotivationCounter_t0A263E14534ECFAB9C180D71127E5C3713804F1E *)
                   ((int)local_8 + 0x1c),param_3,(MethodInfo *)0x0);
        return (HexPatch_t441C0D4878B2BC34A093EB0359C723F5DFD697C5 *)local_8;
      }
    }
    else {
      uVar5 = 0;
      pLVar2 = param_1->___patches_9;
      if (pLVar2 != (List_1_t927A37FDB2886AACED2696AF8B9C469E7A7CCCEC *)0x0) {
        iVar4 = 0x10;
        while ((int)uVar5 < pLVar2->____size_2) {
          if (pLVar2 == (List_1_t927A37FDB2886AACED2696AF8B9C469E7A7CCCEC *)0x0) goto LAB_10e1bbb5;
          if ((uint)pLVar2->____size_2 <= uVar5) {
                    /* WARNING: Subroutine does not return */
            ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                      ((MethodInfo *)0x0);
          }
          OVar3 = *(OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360 *)
                   (pLVar2->____items_1 + iVar4);
          if (OVar3 == (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)0x0)
          goto LAB_10e1bbb5;
          if (*(char *)((int)OVar3 + 0x1c) == '\0') {
            local_8 = OVar3;
            if (((((*(List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 **)((int)OVar3 + 0x14) !=
                    (List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)0x0) &&
                  (List_1_Clear_m4335002B0D1AECDD647452579DC34E13BD1B83CD_gshared
                             (*(List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 **)
                               ((int)OVar3 + 0x14),
                              List_1_Clear_mC92A676A3C9BFEFF1C88BADCAF85070A2DCABED4_RuntimeMethod_var
                             ),
                  local_8 != (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)0x0)) &&
                 (*(List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 **)((int)local_8 + 0x18) !=
                  (List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)0x0)) &&
                ((List_1_Clear_m4335002B0D1AECDD647452579DC34E13BD1B83CD_gshared
                            (*(List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 **)
                              ((int)local_8 + 0x18),
                             List_1_Clear_m04848555848ED59E2E419503C1B69AC0F4C315F0_RuntimeMethod_var
                            ),
                 local_8 != (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)0x0 &&
                 (*(undefined2 *)((int)local_8 + 0x10) = 0,
                 local_8 != (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)0x0)))) &&
               ((*(undefined1 *)((int)local_8 + 0x1d) = 0,
                local_8 != (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)0x0 &&
                ((Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)param_1->___patchDict_10
                 != (Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)0x0)))) {
              Dictionary_2_Remove_m015EB7A9E4C8CDD944B0FDE3AF4BD8641FFC57FF_gshared
                        ((Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)
                         param_1->___patchDict_10,
                         *(int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 *)((int)local_8 + 8),
                         Dictionary_2_Remove_mEF6FF66A267A31DF6951F6060422DB35D3C7A10B_RuntimeMethod_var
                        );
              break;
            }
            goto LAB_10e1bbb5;
          }
          pLVar2 = param_1->___patches_9;
          uVar5 = uVar5 + 1;
          iVar4 = iVar4 + 4;
          if (pLVar2 == (List_1_t927A37FDB2886AACED2696AF8B9C469E7A7CCCEC *)0x0) goto LAB_10e1bbb5;
        }
        if (local_8 == (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)0x0) {
          OVar3 = (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)
                  il2cpp_codegen_object_new
                            (HexPatch_t441C0D4878B2BC34A093EB0359C723F5DFD697C5_il2cpp_TypeInfo_var)
          ;
          HexPatch__ctor_mC5223B7CF66276BA0A585165218731B2EB92D6AF
                    ((HexPatch_t441C0D4878B2BC34A093EB0359C723F5DFD697C5 *)OVar3,(MethodInfo *)0x0);
          local_8 = OVar3;
          if (((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)param_1->___patches_9 ==
               (List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)0x0) ||
             (List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                        ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)param_1->___patches_9,
                         OVar3,
                         List_1_Add_mEA3A4C1B55C18336182B3F6F9E69F3362DAF3CDB_RuntimeMethod_var),
             local_8 == (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)0x0))
          goto LAB_10e1bbb5;
        }
        *(int *)((int)local_8 + 8) = param_2.___x_0;
        *(int *)((int)local_8 + 0xc) = param_2.___y_1;
        if ((local_8 != (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)0x0) &&
           ((Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)param_1->___patchDict_10 !=
            (Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)0x0)) {
          Dictionary_2_Add_m01FEB2F3B89795A9E2DF74E83079B76347F934F6_gshared
                    ((Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)
                     param_1->___patchDict_10,
                     *(int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 *)((int)local_8 + 8),
                     (Il2CppObject *)local_8,
                     Dictionary_2_Add_m68EE23513C52E3FE408862847956D829A44F9A81_RuntimeMethod_var);
          goto LAB_10e1bb90;
        }
      }
    }
  }
LAB_10e1bbb5:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
