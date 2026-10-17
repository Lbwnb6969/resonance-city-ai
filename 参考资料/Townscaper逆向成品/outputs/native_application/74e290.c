// RVA 0x74e290 | Placemaker.Modules.OrientedModule$$op_Inequality
// PDB: OrientedModule_op_Inequality_mD61FC3E78D0E38DD879A25D0961D64D94B89F1B6
// Body: [[1074e290, 1074e2f9]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata

bool __cdecl
OrientedModule_op_Inequality_mD61FC3E78D0E38DD879A25D0961D64D94B89F1B6
          (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360 param_1,
          OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360 param_2,MethodInfo *param_3)

{
  if (DAT_1151ebde == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360_il2cpp_TypeInfo_var
              );
    DAT_1151ebde = '\x01';
  }
  if ((OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360_il2cpp_TypeInfo_var->has_cctor !=
       '\0') &&
     (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360_il2cpp_TypeInfo_var->cctor_finished
      == 0)) {
    il2cpp_runtime_class_init
              (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360_il2cpp_TypeInfo_var);
  }
  if (param_1.___moduleIndex_0 != param_2.___moduleIndex_0) {
    return true;
  }
  return param_1.___flags_1 != param_2.___flags_1;
}
