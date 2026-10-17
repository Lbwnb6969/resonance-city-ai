// RVA 0x10cfdc0 | FuryStudios.FurySDK.Utils.DebugMenu.MenuNavigationEntry$$CloseAllChildsExcept
// PDB: MenuNavigationEntry_CloseAllChildsExcept_m6133F108AACA33A00D6D056D09191CBAF1EB32A0
// Body: [[110cfdc0, 110cfec5]]
// Direct callees:
// 1003e660 Invoke
// 1003e6d0 IsInstClass
// 1003f250 CastclassClass
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 10267d60 Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared
// 11032ae0 List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared
// 110cfed7 FUN_110cfed7
// 110cff20 MenuNavigationEntry_Close_mC2843EF4CF7FF84C9D777A243BE8A092F168BAC4

void __cdecl
MenuNavigationEntry_CloseAllChildsExcept_m6133F108AACA33A00D6D056D09191CBAF1EB32A0
          (MenuNavigationEntry_t55A28B8978894C993D29C5B1123FA8C1B571C7FA *param_1,
          MenuEntry_t15C75C6FC55F35DE7B493D1070C99E46049A1922 *param_2,MethodInfo *param_3)

{
  Il2CppClass *pIVar1;
  Il2CppObject *pIVar2;
  undefined1 *puVar3;
  bool bVar4;
  Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *pEVar5;
  Il2CppObject *pIVar6;
  MenuNavigationEntry_t55A28B8978894C993D29C5B1123FA8C1B571C7FA *pMVar7;
  Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 local_38;
  Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 local_28;
  undefined1 *local_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  local_8 = 0xffffffff;
  puStack_c = &
              __ehhandler__MenuNavigationEntry_CloseAllChildsExcept_m6133F108AACA33A00D6D056D09191CBAF1EB32A0
  ;
  pvStack_10 = ExceptionList;
  local_14 = &stack0xffffffbc;
  ExceptionList = &pvStack_10;
  puVar3 = &stack0xffffffbc;
  if (DAT_11523abe == '\0') {
    ExceptionList = &pvStack_10;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Enumerator_Dispose_mB8C8A27C6EE4CE2A7FEACFCC6C285A12C5249F1D_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Enumerator_MoveNext_m95FF5A5648AA0531AB6C64FA97B2404010F58B83_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Enumerator_get_Current_m60DFEA5F90B1A4A67702E53ABC1B1CBD77AF0749_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       List_1_GetEnumerator_m7682428CEA645E683C24036BC18A210063AF19D2_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       MenuNavigationEntry_t55A28B8978894C993D29C5B1123FA8C1B571C7FA_il2cpp_TypeInfo_var
              );
    DAT_11523abe = '\x01';
    puVar3 = local_14;
  }
  local_14 = puVar3;
  if ((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)
      param_1->___U3CChildEntriesU3Ek__BackingField_3 !=
      (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)0x0) {
    pEVar5 = List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared
                       (&local_38,
                        (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)
                        param_1->___U3CChildEntriesU3Ek__BackingField_3,
                        List_1_GetEnumerator_m7682428CEA645E683C24036BC18A210063AF19D2_RuntimeMethod_var
                       );
    local_28.___list_0 = pEVar5->___list_0;
    local_28.___index_1 = pEVar5->___index_1;
    local_28.___version_2 = pEVar5->___version_2;
    local_28.___current_3 = pEVar5->___current_3;
    local_8 = 0;
    while( true ) {
      while( true ) {
        do {
          bVar4 = Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared
                            (&local_28,
                             Enumerator_MoveNext_m95FF5A5648AA0531AB6C64FA97B2404010F58B83_RuntimeMethod_var
                            );
          pIVar2 = local_28.___current_3;
          pIVar1 = MenuNavigationEntry_t55A28B8978894C993D29C5B1123FA8C1B571C7FA_il2cpp_TypeInfo_var
          ;
          if (!bVar4) {
            FUN_110cfed7();
            return;
          }
        } while ((MenuEntry_t15C75C6FC55F35DE7B493D1070C99E46049A1922 *)local_28.___current_3 ==
                 param_2);
        pIVar6 = IsInstClass(local_28.___current_3,
                             MenuNavigationEntry_t55A28B8978894C993D29C5B1123FA8C1B571C7FA_il2cpp_TypeInfo_var
                            );
        if (pIVar6 == (Il2CppObject *)0x0) break;
        pIVar6 = CastclassClass(pIVar2,pIVar1);
        if (pIVar6 == (Il2CppObject *)0x0) goto LAB_110cff05;
        pMVar7 = (MenuNavigationEntry_t55A28B8978894C993D29C5B1123FA8C1B571C7FA *)
                 CastclassClass(pIVar2,
                                MenuNavigationEntry_t55A28B8978894C993D29C5B1123FA8C1B571C7FA_il2cpp_TypeInfo_var
                               );
        MenuNavigationEntry_Close_mC2843EF4CF7FF84C9D777A243BE8A092F168BAC4
                  (pMVar7,(MethodInfo *)0x0);
      }
      if ((MenuEntry_t15C75C6FC55F35DE7B493D1070C99E46049A1922 *)pIVar2 ==
          (MenuEntry_t15C75C6FC55F35DE7B493D1070C99E46049A1922 *)0x0) break;
      VirtFuncInvoker0<int>::Invoke(8,pIVar2);
    }
  }
LAB_110cff05:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
