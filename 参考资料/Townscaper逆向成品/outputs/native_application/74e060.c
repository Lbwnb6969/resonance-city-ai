// RVA 0x74e060 | Placemaker.Modules.OrientedModule$$Equals
// PDB: OrientedModule_Equals_m0B5B024ACB77A7E31119F931CB149C8AA63864E5
// Body: [[1074e060, 1074e0ff]]
// Direct callees:
// 10128030 il2cpp_object_unbox
// 101280f0 il2cpp_runtime_class_init
// 1018e530 RaiseInvalidCastException
// 1018e950 il2cpp_codegen_initialize_runtime_metadata

bool __cdecl
OrientedModule_Equals_m0B5B024ACB77A7E31119F931CB149C8AA63864E5
          (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360 *param_1,Il2CppObject *param_2,
          MethodInfo *param_3)

{
  OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360 OVar1;
  Il2CppObject *pIVar2;
  undefined4 *puVar3;
  Il2CppClass *pIVar4;

  if (DAT_1151ebdf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360_il2cpp_TypeInfo_var
              );
    DAT_1151ebdf = '\x01';
  }
  if (param_2 != (Il2CppObject *)0x0) {
    pIVar4 = (param_2->field0_0x0).klass;
    pIVar2 = (Il2CppObject *)0x0;
    if (pIVar4 == OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360_il2cpp_TypeInfo_var) {
      pIVar2 = param_2;
    }
    if (pIVar2 != (Il2CppObject *)0x0) {
      OVar1 = *param_1;
      if ((OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360_il2cpp_TypeInfo_var->has_cctor
           != '\0') &&
         (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360_il2cpp_TypeInfo_var->
          cctor_finished == 0)) {
        il2cpp_runtime_class_init
                  (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360_il2cpp_TypeInfo_var);
        pIVar4 = (param_2->field0_0x0).klass;
      }
      if (pIVar4->element_class ==
          OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360_il2cpp_TypeInfo_var->
          element_class) {
        puVar3 = il2cpp_object_unbox(param_2);
        if (OVar1.___moduleIndex_0 != (ushort)*puVar3) {
          return false;
        }
        return OVar1.___flags_1 == (uchar)((uint)*puVar3 >> 0x10);
      }
                    /* WARNING: Subroutine does not return */
      RaiseInvalidCastException
                (param_2,
                 OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360_il2cpp_TypeInfo_var);
    }
  }
  return false;
}
