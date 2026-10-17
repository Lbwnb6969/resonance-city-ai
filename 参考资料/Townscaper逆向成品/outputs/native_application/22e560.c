// RVA 0x22e560 | Os.Utils.ByteFloat3$$Equals
// PDB: ByteFloat3_Equals_m31E0EB14C238BFECDF42A745E56AB598F9393488
// Body: [[1022e560, 1022e602]]
// Direct callees:
// 10128030 il2cpp_object_unbox
// 1018e530 RaiseInvalidCastException
// 1018e950 il2cpp_codegen_initialize_runtime_metadata

bool __cdecl
ByteFloat3_Equals_m31E0EB14C238BFECDF42A745E56AB598F9393488
          (ByteFloat3_t72AB3D3F576296B4B0BBE4BA2DB8A720AEB82C73 *param_1,Il2CppObject *param_2,
          MethodInfo *param_3)

{
  uchar uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  Il2CppObject *pIVar4;
  undefined2 *puVar5;
  char local_8;
  char cStack_7;

  if (DAT_1151b577 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ByteFloat3_t72AB3D3F576296B4B0BBE4BA2DB8A720AEB82C73_il2cpp_TypeInfo_var);
    DAT_1151b577 = '\x01';
  }
  if (param_2 != (Il2CppObject *)0x0) {
    pIVar4 = (Il2CppObject *)0x0;
    if ((param_2->field0_0x0).klass ==
        ByteFloat3_t72AB3D3F576296B4B0BBE4BA2DB8A720AEB82C73_il2cpp_TypeInfo_var) {
      pIVar4 = param_2;
    }
    if (pIVar4 != (Il2CppObject *)0x0) {
      uVar2 = param_1->___x_0;
      uVar3 = param_1->___y_1;
      uVar1 = param_1->___z_2;
      if (((param_2->field0_0x0).klass)->element_class !=
          ByteFloat3_t72AB3D3F576296B4B0BBE4BA2DB8A720AEB82C73_il2cpp_TypeInfo_var->element_class) {
                    /* WARNING: Subroutine does not return */
        RaiseInvalidCastException
                  (param_2,ByteFloat3_t72AB3D3F576296B4B0BBE4BA2DB8A720AEB82C73_il2cpp_TypeInfo_var)
        ;
      }
      puVar5 = il2cpp_object_unbox(param_2);
      param_2._0_1_ = (char)*puVar5;
      if ((uVar2 == (char)param_2) &&
         (param_2._1_1_ = (char)((ushort)*puVar5 >> 8), uVar3 == param_2._1_1_)) {
        return uVar1 == *(uchar *)(puVar5 + 1);
      }
      return false;
    }
  }
  return false;
}
