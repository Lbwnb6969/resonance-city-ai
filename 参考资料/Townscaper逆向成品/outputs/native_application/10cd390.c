// RVA 0x10cd390 | FuryStudios.FurySDK.ClassImplementsAttribute$$IsConstraintSatisfied
// PDB: ClassImplementsAttribute_IsConstraintSatisfied_m80EBDD457E09EF247B9659FDD875DA64AF2347D3
// Body: [[110cd390, 110cd478]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e740 il2cpp_codegen_get_index_out_of_range_exception
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eab0 il2cpp_codegen_raise_exception
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103bcea0 Ref_Equal_mA7CCFB984697A4E40EE7BE8919C2A31BF952ED6F
// 108296f0 Type_get_IsAbstract_mB16DB56FCABF55740019D32C5286F38E30CAA19F

bool __cdecl
ClassImplementsAttribute_IsConstraintSatisfied_m80EBDD457E09EF247B9659FDD875DA64AF2347D3
          (ClassImplementsAttribute_t5DD318A67C13FF330B57E03F46DD9D6452FB029B *param_1,
          Type_t *param_2,MethodInfo *param_3)

{
  String_t *pSVar1;
  String_t *pSVar2;
  bool bVar3;
  int iVar4;
  Exception_t *pEVar5;
  uint uVar6;
  undefined4 *puVar7;
  MethodInfo *pMVar8;

  if (DAT_11523a64 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata((uint *)&Type_t_il2cpp_TypeInfo_var);
    DAT_11523a64 = '\x01';
  }
  if ((char)param_1->_padding_ == '\0') {
    if (param_2 == (Type_t *)0x0) goto LAB_110cd467;
    bVar3 = Type_get_IsAbstract_mB16DB56FCABF55740019D32C5286F38E30CAA19F(param_2,(MethodInfo *)0x0)
    ;
    if (bVar3) {
      return false;
    }
  }
  if (param_2 != (Type_t *)0x0) {
    iVar4 = (**(code **)(param_2->_padding_ + 0x244))
                      (param_2,*(undefined4 *)(param_2->_padding_ + 0x248));
    uVar6 = 0;
    if (iVar4 != 0) {
      puVar7 = (undefined4 *)(iVar4 + 0x10);
      while( true ) {
        if ((int)*(uint *)(iVar4 + 0xc) <= (int)uVar6) {
          return false;
        }
        if (*(uint *)(iVar4 + 0xc) <= uVar6) break;
        pSVar1 = (String_t *)*puVar7;
        pSVar2 = (String_t *)param_1->___U3CInterfaceTypeU3Ek__BackingField_2;
        if ((Type_t_il2cpp_TypeInfo_var->has_cctor != '\0') &&
           (Type_t_il2cpp_TypeInfo_var->cctor_finished == 0)) {
          il2cpp_runtime_class_init(Type_t_il2cpp_TypeInfo_var);
        }
        bVar3 = Ref_Equal_mA7CCFB984697A4E40EE7BE8919C2A31BF952ED6F(pSVar1,pSVar2,(MethodInfo *)0x0)
        ;
        if (bVar3) {
          return true;
        }
        uVar6 = uVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      pMVar8 = (MethodInfo *)0x0;
      pEVar5 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
      il2cpp_codegen_raise_exception(pEVar5,pMVar8);
    }
  }
LAB_110cd467:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
