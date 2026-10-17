// RVA 0x10d0480 | FuryStudios.FurySDK.Utils.OrConditions$$IsSatisfied
// PDB: OrConditions_IsSatisfied_m8381DE248E7C63AEDAF4D31FB52DC3223D64A890
// Body: [[110d0480, 110d05b8]]
// Direct callees:
// 1003e420 Invoke
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 10267d60 Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared
// 10a3ca70 Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7
// 11032ae0 List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared
// 110d05d3 FUN_110d05d3

bool __cdecl
OrConditions_IsSatisfied_m8381DE248E7C63AEDAF4D31FB52DC3223D64A890
          (OrConditions_t5DFCD063F16BF0FCA8B1F255E52D1BBCA3CB6F55 *param_1,MethodInfo *param_2)

{
  undefined1 *puVar1;
  bool bVar2;
  undefined1 uVar3;
  Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *pEVar4;
  int iVar5;
  Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 local_48;
  Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 local_38;
  undefined4 local_28;
  undefined4 local_20;
  undefined1 local_16;
  undefined1 local_15;
  undefined1 *local_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  local_8 = 0xffffffff;
  puStack_c = &__ehhandler__OrConditions_IsSatisfied_m8381DE248E7C63AEDAF4D31FB52DC3223D64A890;
  pvStack_10 = ExceptionList;
  local_14 = &stack0xffffffac;
  ExceptionList = &pvStack_10;
  puVar1 = &stack0xffffffac;
  if (DAT_11523a8a == '\0') {
    ExceptionList = &pvStack_10;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Enumerator_Dispose_m08BF2BF302A2AACEC7079EB6B6B603B691BD8636_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Enumerator_MoveNext_m28F0130CA56B0B8F3B29597EC776045B261957B9_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Enumerator_get_Current_mCDFE6500253675DC93F947DC2C73E615CAE57D41_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ICondition_t82D263874F0091508E7EF216E360728103238913_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       List_1_GetEnumerator_mE49DC3ABDD1BA2E2A424265876F1170B7D0AEB5A_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralFF5EA6A805B7225776046E2CC8949EC6BD380446);
    DAT_11523a8a = '\x01';
    puVar1 = local_14;
  }
  local_14 = puVar1;
  local_15 = 0;
  local_16 = 0;
  local_20 = 0;
  if (*(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 **)&param_1->field_0x8 !=
      (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)0x0) {
    pEVar4 = List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared
                       (&local_48,
                        *(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 **)&param_1->field_0x8,
                        List_1_GetEnumerator_mE49DC3ABDD1BA2E2A424265876F1170B7D0AEB5A_RuntimeMethod_var
                       );
    local_38.___list_0 = pEVar4->___list_0;
    local_38.___index_1 = pEVar4->___index_1;
    local_38.___version_2 = pEVar4->___version_2;
    local_38.___current_3 = pEVar4->___current_3;
    local_8 = 0;
    do {
      while( true ) {
        bVar2 = Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared
                          (&local_38,
                           Enumerator_MoveNext_m28F0130CA56B0B8F3B29597EC776045B261957B9_RuntimeMethod_var
                          );
        if (!bVar2) {
          local_28 = 0x4a;
          local_20 = 1;
          uVar3 = FUN_110d05d3();
          return (bool)uVar3;
        }
        if (local_38.___current_3 != (Il2CppObject *)0x0) break;
        if ((Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->has_cctor != '\0')
           && (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->cctor_finished
               == 0)) {
          il2cpp_runtime_class_init
                    (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
        }
        Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7
                  ((Il2CppObject *)_stringLiteralFF5EA6A805B7225776046E2CC8949EC6BD380446,
                   (MethodInfo *)0x0);
      }
      iVar5 = InterfaceFuncInvoker0<int>::Invoke
                        (0,ICondition_t82D263874F0091508E7EF216E360728103238913_il2cpp_TypeInfo_var,
                         local_38.___current_3);
    } while ((char)iVar5 == '\0');
    local_15 = 1;
    local_28 = 0x4c;
    local_20 = 1;
    uVar3 = FUN_110d05d3();
    return (bool)uVar3;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
