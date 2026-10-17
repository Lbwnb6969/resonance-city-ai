// RVA 0x10ce970 | FuryStudios.FurySDK.Utils.DebugMenu$$GetCurrentSelection
// PDB: DebugMenu_GetCurrentSelection_m18CD902980B3A28682F126C863D84256CD8C7452
// Body: [[110ce970, 110cea75]]
// Direct callees:
// 1003e6d0 IsInstClass
// 1003e740 List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline
// 1003f250 CastclassClass
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103af0c0 Position__ctor_m3F6A5C351510265E5FCE79C95B2F4CF15BB21F35

ValueTuple_2_t0D3347680BCC1C04168F1A2D22519C3F3BE86CE8 __cdecl
DebugMenu_GetCurrentSelection_m18CD902980B3A28682F126C863D84256CD8C7452
          (DebugMenu_t13A4D5599214DB89C01F159602718CF05EFC9573 *param_1,MethodInfo *param_2)

{
  List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *pLVar1;
  MenuNavigationEntry_t55A28B8978894C993D29C5B1123FA8C1B571C7FA *pMVar2;
  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *pGVar3;
  Il2CppObject *pIVar4;
  MenuNavigationEntry_t55A28B8978894C993D29C5B1123FA8C1B571C7FA *pMVar5;
  int iVar6;
  ValueTuple_2_t0D3347680BCC1C04168F1A2D22519C3F3BE86CE8 local_10;
  MenuNavigationEntry_t55A28B8978894C993D29C5B1123FA8C1B571C7FA *local_8;

  if (DAT_11523a7d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_m79E01CA0DE3BFAFA389517D7B9CC0F26D691B652_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_mE36D014C7DAFC906316B346C2306A180434E993A_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       MenuNavigationEntry_t55A28B8978894C993D29C5B1123FA8C1B571C7FA_il2cpp_TypeInfo_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       ValueTuple_2__ctor_mF47A65FCBB5B9E14EC6264223A27A4FB117AA40B_RuntimeMethod_var
              );
    DAT_11523a7d = '\x01';
  }
  pMVar5 = param_1->___root_2;
  pMVar2 = pMVar5;
  local_8 = pMVar5;
  if (pMVar5 != (MenuNavigationEntry_t55A28B8978894C993D29C5B1123FA8C1B571C7FA *)0x0) {
LAB_110ce9c1:
    iVar6 = 0;
    pMVar5 = (MenuNavigationEntry_t55A28B8978894C993D29C5B1123FA8C1B571C7FA *)0x0;
    local_8 = pMVar2;
    do {
      pMVar2 = pMVar5;
      if ((local_8 == (MenuNavigationEntry_t55A28B8978894C993D29C5B1123FA8C1B571C7FA *)0x0) ||
         (pLVar1 = (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *)
                   local_8->___U3CChildEntriesU3Ek__BackingField_3,
         pLVar1 == (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *)0x0)) {
LAB_110cea71:
                    /* WARNING: Subroutine does not return */
        il2cpp_codegen_raise_null_reference_exception();
      }
      if (pLVar1->____size_2 <= iVar6) goto LAB_110cea2c;
      pGVar3 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline
                         (pLVar1,iVar6,
                          List_1_get_Item_mE36D014C7DAFC906316B346C2306A180434E993A_RuntimeMethod_var
                         );
      if (pGVar3 == (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)0x0) goto LAB_110cea71;
      pMVar5 = local_8;
      if (*(char *)(pGVar3 + 1) != '\0') goto LAB_110cea44;
      pIVar4 = IsInstClass((Il2CppObject *)pGVar3,
                           MenuNavigationEntry_t55A28B8978894C993D29C5B1123FA8C1B571C7FA_il2cpp_TypeInfo_var
                          );
      if (pIVar4 != (Il2CppObject *)0x0) {
        pMVar5 = (MenuNavigationEntry_t55A28B8978894C993D29C5B1123FA8C1B571C7FA *)
                 CastclassClass((Il2CppObject *)pGVar3,
                                MenuNavigationEntry_t55A28B8978894C993D29C5B1123FA8C1B571C7FA_il2cpp_TypeInfo_var
                               );
        if (pMVar5 == (MenuNavigationEntry_t55A28B8978894C993D29C5B1123FA8C1B571C7FA *)0x0)
        goto LAB_110cea71;
        if (pMVar5->___U3CIsExpandedU3Ek__BackingField_4 != false) {
          pMVar2 = pMVar5;
        }
      }
      iVar6 = iVar6 + 1;
      pMVar5 = pMVar2;
    } while( true );
  }
LAB_110cea3b:
  iVar6 = 0;
LAB_110cea44:
  local_10.___Item1_0 = 0;
  local_10.___Item2_1 = (MenuNavigationEntry_t55A28B8978894C993D29C5B1123FA8C1B571C7FA *)0x0;
  Position__ctor_m3F6A5C351510265E5FCE79C95B2F4CF15BB21F35
            ((Position_tD9D8C9ECCEF2EC71D72D9BEE2C4A332E402E6866 *)&local_10,iVar6,
             (Il2CppObject *)pMVar5,
             ValueTuple_2__ctor_mF47A65FCBB5B9E14EC6264223A27A4FB117AA40B_RuntimeMethod_var);
  return local_10;
LAB_110cea2c:
  if (pMVar2 == (MenuNavigationEntry_t55A28B8978894C993D29C5B1123FA8C1B571C7FA *)0x0)
  goto code_r0x110cea35;
  goto LAB_110ce9c1;
code_r0x110cea35:
  pMVar5 = param_1->___root_2;
  local_8 = pMVar2;
  goto LAB_110cea3b;
}
