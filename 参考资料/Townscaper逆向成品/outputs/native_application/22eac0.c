// RVA 0x22eac0 | Placemaker.ByteQube$$Equals
// PDB: ByteQube_Equals_m83016449B669D9A6AEB9CBEA7094A78E6CCA0A83
// Body: [[1022eac0, 1022eb54]]
// Direct callees:
// 10128030 il2cpp_object_unbox
// 101280f0 il2cpp_runtime_class_init
// 1018e530 RaiseInvalidCastException
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1022f810 ByteQube_op_Equality_m0312D2B1297CE58CA873966C66937C60A76541DC

bool __cdecl
ByteQube_Equals_m83016449B669D9A6AEB9CBEA7094A78E6CCA0A83
          (ByteQube_tF71134A3E9F43437AFBE59D8B5F352AE75B814B2 *param_1,Il2CppObject *param_2,
          MethodInfo *param_3)

{
  ByteQube_tF71134A3E9F43437AFBE59D8B5F352AE75B814B2 BVar1;
  bool bVar2;
  Il2CppObject *pIVar3;
  ByteQube_tF71134A3E9F43437AFBE59D8B5F352AE75B814B2 *pBVar4;
  Il2CppClass *pIVar5;

  if (DAT_1151b57c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ByteQube_tF71134A3E9F43437AFBE59D8B5F352AE75B814B2_il2cpp_TypeInfo_var);
    DAT_1151b57c = '\x01';
  }
  if (param_2 != (Il2CppObject *)0x0) {
    pIVar5 = (param_2->field0_0x0).klass;
    pIVar3 = (Il2CppObject *)0x0;
    if (pIVar5 == ByteQube_tF71134A3E9F43437AFBE59D8B5F352AE75B814B2_il2cpp_TypeInfo_var) {
      pIVar3 = param_2;
    }
    if (pIVar3 != (Il2CppObject *)0x0) {
      BVar1 = *param_1;
      if ((ByteQube_tF71134A3E9F43437AFBE59D8B5F352AE75B814B2_il2cpp_TypeInfo_var->has_cctor != '\0'
          ) && (ByteQube_tF71134A3E9F43437AFBE59D8B5F352AE75B814B2_il2cpp_TypeInfo_var->
                cctor_finished == 0)) {
        il2cpp_runtime_class_init
                  (ByteQube_tF71134A3E9F43437AFBE59D8B5F352AE75B814B2_il2cpp_TypeInfo_var);
        pIVar5 = (param_2->field0_0x0).klass;
      }
      if (pIVar5->element_class ==
          ByteQube_tF71134A3E9F43437AFBE59D8B5F352AE75B814B2_il2cpp_TypeInfo_var->element_class) {
        pBVar4 = il2cpp_object_unbox(param_2);
        bVar2 = ByteQube_op_Equality_m0312D2B1297CE58CA873966C66937C60A76541DC
                          (BVar1,*pBVar4,(MethodInfo *)0x0);
        return bVar2;
      }
                    /* WARNING: Subroutine does not return */
      RaiseInvalidCastException
                (param_2,ByteQube_tF71134A3E9F43437AFBE59D8B5F352AE75B814B2_il2cpp_TypeInfo_var);
    }
  }
  return false;
}
