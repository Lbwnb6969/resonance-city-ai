// RVA 0x2f85f0 | Placemaker.Ui.SimpleMessage$$SetBackgroundColor
// PDB: SimpleMessage_SetBackgroundColor_m3F99E0B54E1B7E4E203E7AB2C51E2B61488BB85E
// Body: [[102f85f0, 102f86be] [102f86d0, 102f870a]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eab0 il2cpp_codegen_raise_exception
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d9d50 U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
// 10267d60 Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared
// 11032ae0 List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared

/* WARNING: Removing unreachable block (ram,0x102f8703) */

void __cdecl
SimpleMessage_SetBackgroundColor_m3F99E0B54E1B7E4E203E7AB2C51E2B61488BB85E
          (SimpleMessage_t9F2B162AE3E95AE6F3559BBA44801038293C7A3A *param_1,
          Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 param_2,MethodInfo *param_3)

{
  Il2CppClass *pIVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  bool bVar4;
  Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *pEVar5;
  Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 local_38;
  U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 local_28;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  local_8 = 0xffffffff;
  puStack_c = &
              __ehhandler__SimpleMessage_SetBackgroundColor_m3F99E0B54E1B7E4E203E7AB2C51E2B61488BB85E
  ;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffbc;
  ExceptionList = &local_10;
  puVar3 = &stack0xffffffbc;
  if (DAT_1151c18d == '\0') {
    ExceptionList = &local_10;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Enumerator_Dispose_m486BB61307154FBC5DCEC4A7EB7AC2607961A5CF_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Enumerator_MoveNext_m7ABF23A2311AE4EE56C35F116A80A3F5BD653E99_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Enumerator_get_Current_mD95D3412BD3CBB714C974D4771D62F8777BA5274_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       List_1_GetEnumerator_mE1369BFF36AED71986A58FFF0EBF48F4B4A858A1_RuntimeMethod_var
              );
    DAT_1151c18d = '\x01';
    puVar3 = local_14;
  }
  local_14 = puVar3;
  if ((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)param_1->___backgrounds_9 !=
      (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)0x0) {
    pEVar5 = List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared
                       (&local_38,
                        (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)
                        param_1->___backgrounds_9,
                        List_1_GetEnumerator_mE1369BFF36AED71986A58FFF0EBF48F4B4A858A1_RuntimeMethod_var
                       );
    local_28._padding_ = (int)pEVar5->___list_0;
    local_28._padding_ = pEVar5->___index_1;
    local_28.___U3CU3E1__state_0 = pEVar5->___version_2;
    local_28.___U3CU3E2__current_1 = pEVar5->___current_3;
    local_8 = 0;
    while( true ) {
      bVar4 = Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared
                        ((Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)&local_28,
                         Enumerator_MoveNext_m7ABF23A2311AE4EE56C35F116A80A3F5BD653E99_RuntimeMethod_var
                        );
      if (!bVar4) {
        local_8 = 0xffffffff;
        U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
                  (&local_28,
                   Enumerator_Dispose_m486BB61307154FBC5DCEC4A7EB7AC2607961A5CF_RuntimeMethod_var);
        ExceptionList = local_10;
        return;
      }
      if (local_28.___U3CU3E2__current_1 == (Il2CppObject *)0x0) break;
      pIVar1 = ((local_28.___U3CU3E2__current_1)->field0_0x0).klass;
      uVar2._0_1_ = pIVar1[1].naturalAligment;
      uVar2._1_1_ = pIVar1[1].packingSize;
      uVar2._2_2_ = *(undefined2 *)&pIVar1[1].field_0xba;
      (**(code **)&pIVar1[1].typeHierarchyDepth)
                (local_28.___U3CU3E2__current_1,param_2.___r_0,param_2.___g_1,param_2.___b_2,
                 param_2.___a_3,uVar2);
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
