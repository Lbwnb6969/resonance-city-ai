// RVA 0xa044b0 | Os.Utils.SbyteFloat3$$Equals
// PDB: SbyteFloat3_Equals_m53800DA1C5F68CD7AE9DE0C060958DE993883F5E
// Body: [[10a044b0, 10a04552]]
// Direct callees:
// 10128030 il2cpp_object_unbox
// 1018e530 RaiseInvalidCastException
// 1018e950 il2cpp_codegen_initialize_runtime_metadata

bool __cdecl
SbyteFloat3_Equals_m53800DA1C5F68CD7AE9DE0C060958DE993883F5E
          (SbyteFloat3_t3C51AC7B3F6B94CFCF5CAA7971D05408AEC6B894 *param_1,Il2CppObject *param_2,
          MethodInfo *param_3)

{
  char cVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  Il2CppObject *pIVar4;
  undefined2 *puVar5;
  char local_8;
  char cStack_7;

  if (DAT_115201c0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&SbyteFloat3_t3C51AC7B3F6B94CFCF5CAA7971D05408AEC6B894_il2cpp_TypeInfo_var);
    DAT_115201c0 = '\x01';
  }
  if (param_2 != (Il2CppObject *)0x0) {
    pIVar4 = (Il2CppObject *)0x0;
    if ((param_2->field0_0x0).klass ==
        SbyteFloat3_t3C51AC7B3F6B94CFCF5CAA7971D05408AEC6B894_il2cpp_TypeInfo_var) {
      pIVar4 = param_2;
    }
    if (pIVar4 != (Il2CppObject *)0x0) {
      uVar2 = param_1->___x_2;
      uVar3 = param_1->___y_3;
      cVar1 = param_1->___z_4;
      if (((param_2->field0_0x0).klass)->element_class !=
          SbyteFloat3_t3C51AC7B3F6B94CFCF5CAA7971D05408AEC6B894_il2cpp_TypeInfo_var->element_class)
      {
                    /* WARNING: Subroutine does not return */
        RaiseInvalidCastException
                  (param_2,SbyteFloat3_t3C51AC7B3F6B94CFCF5CAA7971D05408AEC6B894_il2cpp_TypeInfo_var
                  );
      }
      puVar5 = il2cpp_object_unbox(param_2);
      param_2._0_1_ = (char)*puVar5;
      if ((uVar2 == (char)param_2) &&
         (param_2._1_1_ = (char)((ushort)*puVar5 >> 8), uVar3 == param_2._1_1_)) {
        return cVar1 == *(char *)(puVar5 + 1);
      }
      return false;
    }
  }
  return false;
}
