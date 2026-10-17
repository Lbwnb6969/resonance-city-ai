// RVA 0xe1f2c0 | Placemaker.GridGenerator$$SceneProcessIteration
// PDB: GridGenerator_SceneProcessIteration_mC2D4A820EAE089D978AF34EBBB785ECE48FB5528
// Body: [[10e1f2c0, 10e1f472] [10e1f476, 10e1f4d2]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d8560 OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
// 1021c780 Dictionary_2_Clear_m03F6E27B9533062BA140D8F18D7B7A24CE042834_gshared
// 1021f6d0 Dictionary_2_Remove_m015EB7A9E4C8CDD944B0FDE3AF4BD8641FFC57FF_gshared
// 105d1420 List_1_Clear_m4335002B0D1AECDD647452579DC34E13BD1B83CD_gshared
// 10aa2e60 ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
// 10e14000 GridGenerator_IterateBit_mF26D0807021BAE5BAF362E29DF459A8153FF8A43
// 10e1b130 GridGenerator_MotivateBit_m7A45A63DB98425844274A56EC6010ABF46706836
// 11036bc0 List_1_RemoveAt_m66148860899ECCAE9B323372032BFC1C255393D2_gshared

void __cdecl
GridGenerator_SceneProcessIteration_mC2D4A820EAE089D978AF34EBBB785ECE48FB5528
          (GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0 *param_1,MethodInfo *param_2)

{
  Il2CppObject *pIVar1;
  List_1_t927A37FDB2886AACED2696AF8B9C469E7A7CCCEC *pLVar2;
  int iVar3;
  GridBit_t23465B0696352D0154A3D888F98761FDAED90C75 *pGVar4;
  Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F *pFVar5;
  uint uVar6;
  int local_8;

  if (DAT_1152266b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Dictionary_2_Clear_m9B5D39FF8E020BB44ACB60028E2D6E3F848BB8D4_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Dictionary_2_Remove_mEF6FF66A267A31DF6951F6060422DB35D3C7A10B_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Clear_m4743EF9D5BD9614E636CFDA763E997F32872C2DD_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_RemoveAt_m39AFFB088383B5EDC0801FB5B06EECE9FF463503_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_m7ED1E524A3DE8D1223620101C9EB572E56434550_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m12161826693622E81B5DD33F2E8553106668DEB5_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CU3Ec_U3CSceneProcessIterationU3Eb__46_0_m117C9D416759D107F2EA963B7FB0BC9D2417F887_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&U3CU3Ec_tD641639A4EFD0151E1F57E1488AC89DD26C7E73A_il2cpp_TypeInfo_var);
    DAT_1152266b = '\x01';
  }
  pGVar4 = GridGenerator_MotivateBit_m7A45A63DB98425844274A56EC6010ABF46706836
                     (param_1,(int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568)0x0,(MethodInfo *)0x0)
  ;
  if (pGVar4 != (GridBit_t23465B0696352D0154A3D888F98761FDAED90C75 *)0x0) {
    while (pGVar4->___state_9 < 4) {
      if ((U3CU3Ec_tD641639A4EFD0151E1F57E1488AC89DD26C7E73A_il2cpp_TypeInfo_var->has_cctor != '\0')
         && (U3CU3Ec_tD641639A4EFD0151E1F57E1488AC89DD26C7E73A_il2cpp_TypeInfo_var->cctor_finished
             == 0)) {
        il2cpp_runtime_class_init
                  (U3CU3Ec_tD641639A4EFD0151E1F57E1488AC89DD26C7E73A_il2cpp_TypeInfo_var);
      }
      pFVar5 = *(Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F **)
                ((int)U3CU3Ec_tD641639A4EFD0151E1F57E1488AC89DD26C7E73A_il2cpp_TypeInfo_var->
                      static_fields + 4);
      if (pFVar5 == (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F *)0x0) {
        if ((U3CU3Ec_tD641639A4EFD0151E1F57E1488AC89DD26C7E73A_il2cpp_TypeInfo_var->has_cctor !=
             '\0') &&
           (U3CU3Ec_tD641639A4EFD0151E1F57E1488AC89DD26C7E73A_il2cpp_TypeInfo_var->cctor_finished ==
            0)) {
          il2cpp_runtime_class_init
                    (U3CU3Ec_tD641639A4EFD0151E1F57E1488AC89DD26C7E73A_il2cpp_TypeInfo_var);
        }
        pIVar1 = *(Il2CppObject **)
                  U3CU3Ec_tD641639A4EFD0151E1F57E1488AC89DD26C7E73A_il2cpp_TypeInfo_var->
                  static_fields;
        pFVar5 = (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F *)
                 il2cpp_codegen_object_new
                           (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F_il2cpp_TypeInfo_var);
        OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
                  ((OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)pFVar5,pIVar1,
                   (int)
                   U3CU3Ec_U3CSceneProcessIterationU3Eb__46_0_m117C9D416759D107F2EA963B7FB0BC9D2417F887_RuntimeMethod_var
                   ,Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_RuntimeMethod_var);
        *(Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F **)
         ((int)U3CU3Ec_tD641639A4EFD0151E1F57E1488AC89DD26C7E73A_il2cpp_TypeInfo_var->static_fields
         + 4) = pFVar5;
      }
      if (param_1 == (GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0 *)0x0)
      goto LAB_10e1f4ce;
      GridGenerator_IterateBit_mF26D0807021BAE5BAF362E29DF459A8153FF8A43
                (param_1,pGVar4,pFVar5,(MethodInfo *)0x0);
    }
    pGVar4->___clusterCount_7 = '\0';
    if ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)param_1->___clusters_11 !=
        (List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)0x0) {
      List_1_Clear_m4335002B0D1AECDD647452579DC34E13BD1B83CD_gshared
                ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)param_1->___clusters_11,
                 List_1_Clear_m4743EF9D5BD9614E636CFDA763E997F32872C2DD_RuntimeMethod_var);
      if ((Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)param_1->___clusterDict_12 !=
          (Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)0x0) {
        Dictionary_2_Clear_m03F6E27B9533062BA140D8F18D7B7A24CE042834_gshared
                  ((Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)
                   param_1->___clusterDict_12,
                   Dictionary_2_Clear_m9B5D39FF8E020BB44ACB60028E2D6E3F848BB8D4_RuntimeMethod_var);
        if (param_1->___patches_9 != (List_1_t927A37FDB2886AACED2696AF8B9C469E7A7CCCEC *)0x0) {
          uVar6 = param_1->___patches_9->____size_2 - 1;
          if (-1 < (int)uVar6) {
            local_8 = uVar6 * 4 + 0x10;
            do {
              pLVar2 = param_1->___patches_9;
              if (pLVar2 == (List_1_t927A37FDB2886AACED2696AF8B9C469E7A7CCCEC *)0x0)
              goto LAB_10e1f4ce;
              if ((uint)pLVar2->____size_2 <= uVar6) {
                    /* WARNING: Subroutine does not return */
                ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                          ((MethodInfo *)0x0);
              }
              iVar3 = *(int *)(pLVar2->____items_1 + local_8);
              if (iVar3 == 0) goto LAB_10e1f4ce;
              if (*(char *)(iVar3 + 0x1c) == '\0') {
                if ((Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)
                    param_1->___patchDict_10 ==
                    (Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)0x0)
                goto LAB_10e1f4ce;
                Dictionary_2_Remove_m015EB7A9E4C8CDD944B0FDE3AF4BD8641FFC57FF_gshared
                          ((Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)
                           param_1->___patchDict_10,
                           *(int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 *)(iVar3 + 8),
                           Dictionary_2_Remove_mEF6FF66A267A31DF6951F6060422DB35D3C7A10B_RuntimeMethod_var
                          );
                if ((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)param_1->___patches_9 ==
                    (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)0x0) goto LAB_10e1f4ce;
                List_1_RemoveAt_m66148860899ECCAE9B323372032BFC1C255393D2_gshared
                          ((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)param_1->___patches_9
                           ,uVar6,
                           List_1_RemoveAt_m39AFFB088383B5EDC0801FB5B06EECE9FF463503_RuntimeMethod_var
                          );
              }
              local_8 = local_8 + -4;
              uVar6 = uVar6 - 1;
            } while (-1 < (int)uVar6);
          }
          return;
        }
      }
    }
  }
LAB_10e1f4ce:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
