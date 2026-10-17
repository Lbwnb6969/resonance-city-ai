// RVA 0x9c50b0 | Placemaker.StorageUtils.<FillSaveCard>d__22$$MoveNext
// PDB: U3CFillSaveCardU3Ed__22_MoveNext_mB4836B40E92A78D507F850E8F29C175A961D03FC
// Body: [[109c50b0, 109c51f0]]
// Direct callees:
// 1003e420 Invoke
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 102fd6f0 StorageUtils_GetSaveFilePath_m0DB39B9F24B0160CBE4CEE8526905B58A9A70153
// 102fdaa0 StorageUtils_SaveToPath_m6B7C8E01A7F67A4A7D6D2D4AEC84DCEECE4EBD02
// 10a3cbf0 Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8
// 10a4a8b0 Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB
// 10f02470 String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B
// 1102ffd0 List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared

bool __cdecl
U3CFillSaveCardU3Ed__22_MoveNext_mB4836B40E92A78D507F850E8F29C175A961D03FC
          (U3CFillSaveCardU3Ed__22_t65F010375508E19A2E6634FBF3AC38F11D3BB4E9 *param_1,
          MethodInfo *param_2)

{
  StorageUtils_t6E9DFB789C54B9B5604E6701C1D0E230BB7FAEF3 *pSVar1;
  String_t *pSVar2;
  Il2CppObject *pIVar3;
  int iVar4;

  if (DAT_1151ff3e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralC1D1B8228B1842D3F4CD80192906AF79657DE3CA);
    DAT_1151ff3e = '\x01';
  }
  pSVar1 = param_1->___U3CU3E4__this_2;
  if (param_1->___U3CU3E1__state_0 == 0) {
    param_1->___U3CU3E1__state_0 = -1;
    if ((param_1->___card_3 == (SaveCard_t0D4BB910CDF8BB065BDBE2557107FC323BDAAC67 *)0x0) ||
       (pSVar2 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB
                           ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)param_1->___card_3,
                            (MethodInfo *)0x0),
       pSVar1 == (StorageUtils_t6E9DFB789C54B9B5604E6701C1D0E230BB7FAEF3 *)0x0)) goto LAB_109c51ec;
    pSVar2 = StorageUtils_GetSaveFilePath_m0DB39B9F24B0160CBE4CEE8526905B58A9A70153
                       (pSVar1,pSVar2,(MethodInfo *)0x0);
    param_1->___U3CpathU3E5__2_4 = pSVar2;
    pSVar2 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B
                       (_stringLiteralC1D1B8228B1842D3F4CD80192906AF79657DE3CA,pSVar2,
                        (MethodInfo *)0x0);
    if ((Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->has_cctor != '\0') &&
       (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->cctor_finished == 0)) {
      il2cpp_runtime_class_init(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)
      ;
    }
    Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8((Il2CppObject *)pSVar2,(MethodInfo *)0x0);
    if (param_1->___card_3 == (SaveCard_t0D4BB910CDF8BB065BDBE2557107FC323BDAAC67 *)0x0)
    goto LAB_109c51ec;
    pIVar3 = StorageUtils_SaveToPath_m6B7C8E01A7F67A4A7D6D2D4AEC84DCEECE4EBD02
                       (pSVar1,param_1->___U3CpathU3E5__2_4,param_1->___card_3->___saveData_8,
                        (MethodInfo *)0x0);
    param_1->___U3CsaveToPathU3E5__3_5 = pIVar3;
  }
  else {
    if (param_1->___U3CU3E1__state_0 != 1) {
      return false;
    }
    param_1->___U3CU3E1__state_0 = -1;
  }
  if (param_1->___U3CsaveToPathU3E5__3_5 != (Il2CppObject *)0x0) {
    iVar4 = InterfaceFuncInvoker0<int>::Invoke
                      (0,IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var,
                       param_1->___U3CsaveToPathU3E5__3_5);
    if ((char)iVar4 != '\0') {
      param_1->___U3CU3E2__current_1 = (Il2CppObject *)0x0;
      param_1->___U3CU3E1__state_0 = 1;
      return true;
    }
    if ((pSVar1 != (StorageUtils_t6E9DFB789C54B9B5604E6701C1D0E230BB7FAEF3 *)0x0) &&
       ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)pSVar1->___loadedFiles_7 !=
        (List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)0x0)) {
      List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)pSVar1->___loadedFiles_7,
                 (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)
                 param_1->___U3CpathU3E5__2_4,
                 List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
      return false;
    }
  }
LAB_109c51ec:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
