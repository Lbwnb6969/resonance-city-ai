// RVA 0x10cd2a0 | FuryStudios.FurySDK.ClassExtendsAttribute$$IsConstraintSatisfied
// PDB: ClassExtendsAttribute_IsConstraintSatisfied_m12AFFF26B01435E3D877CA02AB7BF88F216DF74E
// Body: [[110cd2a0, 110cd33b]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 108296f0 Type_get_IsAbstract_mB16DB56FCABF55740019D32C5286F38E30CAA19F
// 10829df0 Type_op_Inequality_m6DDC5E923203A79BF505F9275B694AD3FAA36DB0

bool __cdecl
ClassExtendsAttribute_IsConstraintSatisfied_m12AFFF26B01435E3D877CA02AB7BF88F216DF74E
          (ClassExtendsAttribute_tAA25C365B72E7B8A6C058E7728E2FAF43D76B131 *param_1,Type_t *param_2,
          MethodInfo *param_3)

{
  Type_t *pTVar1;
  bool bVar2;
  char cVar3;

  if (DAT_11523a63 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata((uint *)&Type_t_il2cpp_TypeInfo_var);
    DAT_11523a63 = '\x01';
  }
  if ((char)param_1->_padding_ == '\0') {
    if (param_2 == (Type_t *)0x0) goto LAB_110cd337;
    bVar2 = Type_get_IsAbstract_mB16DB56FCABF55740019D32C5286F38E30CAA19F(param_2,(MethodInfo *)0x0)
    ;
    if (bVar2) {
      return false;
    }
  }
  pTVar1 = param_1->___U3CBaseTypeU3Ek__BackingField_2;
  if (pTVar1 != (Type_t *)0x0) {
    cVar3 = (**(code **)(pTVar1->_padding_ + 0x46c))
                      (pTVar1,param_2,*(undefined4 *)(pTVar1->_padding_ + 0x470));
    if (cVar3 == '\0') {
      return false;
    }
    pTVar1 = param_1->___U3CBaseTypeU3Ek__BackingField_2;
    if ((Type_t_il2cpp_TypeInfo_var->has_cctor != '\0') &&
       (Type_t_il2cpp_TypeInfo_var->cctor_finished == 0)) {
      il2cpp_runtime_class_init(Type_t_il2cpp_TypeInfo_var);
    }
    bVar2 = Type_op_Inequality_m6DDC5E923203A79BF505F9275B694AD3FAA36DB0
                      (param_2,pTVar1,(MethodInfo *)0x0);
    return bVar2;
  }
LAB_110cd337:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
