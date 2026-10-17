// RVA 0x22f8a0 | Placemaker.ByteQube$$op_Inequality
// PDB: ByteQube_op_Inequality_mD1DB83CED148C40918925E2AEF1870E24DABE03F
// Body: [[1022f8a0, 1022f8f6]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1022f810 ByteQube_op_Equality_m0312D2B1297CE58CA873966C66937C60A76541DC

bool __cdecl
ByteQube_op_Inequality_mD1DB83CED148C40918925E2AEF1870E24DABE03F
          (ByteQube_tF71134A3E9F43437AFBE59D8B5F352AE75B814B2 param_1,
          ByteQube_tF71134A3E9F43437AFBE59D8B5F352AE75B814B2 param_2,MethodInfo *param_3)

{
  bool bVar1;

  if (DAT_1151b57d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ByteQube_tF71134A3E9F43437AFBE59D8B5F352AE75B814B2_il2cpp_TypeInfo_var);
    DAT_1151b57d = '\x01';
  }
  if ((ByteQube_tF71134A3E9F43437AFBE59D8B5F352AE75B814B2_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (ByteQube_tF71134A3E9F43437AFBE59D8B5F352AE75B814B2_il2cpp_TypeInfo_var->cctor_finished == 0))
  {
    il2cpp_runtime_class_init
              (ByteQube_tF71134A3E9F43437AFBE59D8B5F352AE75B814B2_il2cpp_TypeInfo_var);
  }
  bVar1 = ByteQube_op_Equality_m0312D2B1297CE58CA873966C66937C60A76541DC
                    (param_1,param_2,(MethodInfo *)0x0);
  return !bVar1;
}
