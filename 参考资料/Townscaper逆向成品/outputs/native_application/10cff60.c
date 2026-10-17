// RVA 0x10cff60 | FuryStudios.FurySDK.Utils.DebugMenu.MenuNavigationEntry$$Deselect
// PDB: MenuNavigationEntry_Deselect_m310F85AE9396193184B36A2798B880B11CABC4ED
// Body: [[110cff60, 110d0042] [110d0054, 110d008e]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eab0 il2cpp_codegen_raise_exception
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d9d50 U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
// 10267d60 Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared
// 11032ae0 List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared

/* WARNING: Removing unreachable block (ram,0x110d0087) */

void __cdecl
MenuNavigationEntry_Deselect_m310F85AE9396193184B36A2798B880B11CABC4ED
          (MenuNavigationEntry_t55A28B8978894C993D29C5B1123FA8C1B571C7FA *param_1,
          MethodInfo *param_2)

{
  undefined1 *puVar1;
  char cVar2;
  bool bVar3;
  Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *pEVar4;
  Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 local_38;
  U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 local_28;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  local_8 = 0xffffffff;
  puStack_c = &__ehhandler__MenuNavigationEntry_Deselect_m310F85AE9396193184B36A2798B880B11CABC4ED;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffbc;
  ExceptionList = &local_10;
  puVar1 = &stack0xffffffbc;
  if (DAT_11523abf == '\0') {
    ExceptionList = &local_10;
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
    DAT_11523abf = '\x01';
    puVar1 = local_14;
  }
  local_14 = puVar1;
  cVar2 = (**(code **)(param_1->_padding_ + 0xdc))
                    (param_1,*(undefined4 *)(param_1->_padding_ + 0xe0));
  if (cVar2 != '\0') {
    *(undefined1 *)&param_1->_padding_ = 0;
  }
  if ((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)
      param_1->___U3CChildEntriesU3Ek__BackingField_3 !=
      (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)0x0) {
    pEVar4 = List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared
                       (&local_38,
                        (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)
                        param_1->___U3CChildEntriesU3Ek__BackingField_3,
                        List_1_GetEnumerator_m7682428CEA645E683C24036BC18A210063AF19D2_RuntimeMethod_var
                       );
    local_28._padding_ = (int)pEVar4->___list_0;
    local_28._padding_ = pEVar4->___index_1;
    local_28.___U3CU3E1__state_0 = pEVar4->___version_2;
    local_28.___U3CU3E2__current_1 = pEVar4->___current_3;
    local_8 = 0;
    while( true ) {
      bVar3 = Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared
                        ((Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)&local_28,
                         Enumerator_MoveNext_m95FF5A5648AA0531AB6C64FA97B2404010F58B83_RuntimeMethod_var
                        );
      if (!bVar3) {
        local_8 = 0xffffffff;
        U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
                  (&local_28,
                   Enumerator_Dispose_mB8C8A27C6EE4CE2A7FEACFCC6C285A12C5249F1D_RuntimeMethod_var);
        ExceptionList = local_10;
        return;
      }
      if (local_28.___U3CU3E2__current_1 == (Il2CppObject *)0x0) break;
      (*(code *)((local_28.___U3CU3E2__current_1)->field0_0x0).klass[1].klass)
                (local_28.___U3CU3E2__current_1,
                 ((local_28.___U3CU3E2__current_1)->field0_0x0).klass[1].fields);
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
