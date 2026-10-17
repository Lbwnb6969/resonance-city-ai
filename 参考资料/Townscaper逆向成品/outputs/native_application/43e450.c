// RVA 0x43e450 | FuryStudios.FurySDK.ClassTypeReference$$CreateInstanceWithArguments<object>
// PDB: ClassTypeReference_CreateInstanceWithArguments_TisRuntimeObject_m26BB1A77DD9FC3BF2CB0C23935D882D579B7B84B_gshared
// Body: [[1043e450, 1043e52f]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1015daa0 InitFromCodegenSlow
// 1018e500 IsInst
// 1018e530 RaiseInvalidCastException
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103bcea0 Ref_Equal_mA7CCFB984697A4E40EE7BE8919C2A31BF952ED6F
// 105ee9e0 SchemaDatatypeMap_op_Explicit_mD7A9E8D81D7399FA63CE4294C55F1A459E9108F4
// 10a8d3d0 Activator_CreateInstance_mF3E09E8AC19EE563314B326117091D4B9CC918C1

Il2CppObject * __cdecl
ClassTypeReference_CreateInstanceWithArguments_TisRuntimeObject_m26BB1A77DD9FC3BF2CB0C23935D882D579B7B84B_gshared
          (ClassTypeReference_tF5B5E0BC89426798A9F3DAC88BD2B0C9B2B8DECD *param_1,
          ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE *param_2,MethodInfo *param_3)

{
  String_t *pSVar1;
  Il2CppClass *pIVar2;
  bool bVar3;
  DatatypeImplementation_t8243B569BC6821FF8A6C2A544BDE1C522A416B15 *pDVar4;
  Il2CppObject *pIVar5;
  Il2CppObject *pIVar6;
  Il2CppClass *pIVar7;

  if (DAT_1151cc61 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata((uint *)&Type_t_il2cpp_TypeInfo_var);
    DAT_1151cc61 = '\x01';
  }
  if (param_1 == (ClassTypeReference_tF5B5E0BC89426798A9F3DAC88BD2B0C9B2B8DECD *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_null_reference_exception();
  }
  pSVar1 = (String_t *)param_1->____type_1;
  if ((Type_t_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (Type_t_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(Type_t_il2cpp_TypeInfo_var);
  }
  bVar3 = Ref_Equal_mA7CCFB984697A4E40EE7BE8919C2A31BF952ED6F
                    (pSVar1,(String_t *)0x0,(MethodInfo *)0x0);
  if (!bVar3) {
    pDVar4 = SchemaDatatypeMap_op_Explicit_mD7A9E8D81D7399FA63CE4294C55F1A459E9108F4
                       ((SchemaDatatypeMap_t89F5A171396C2FF9555DBB013CDCF009EA8F202E *)param_1,
                        (MethodInfo *)0x0);
    pIVar5 = Activator_CreateInstance_mF3E09E8AC19EE563314B326117091D4B9CC918C1
                       ((Type_t *)pDVar4,param_2,(MethodInfo *)0x0);
    pIVar2 = *(Il2CppClass **)(param_3->field6_0x18).methodMetadataHandle;
    pIVar7 = pIVar2;
    if (pIVar2->initialized_and_no_error == 0) {
      il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar2);
      pIVar7 = *(Il2CppClass **)(param_3->field6_0x18).methodMetadataHandle;
    }
    if (pIVar7->initialized_and_no_error == 0) {
      il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar7);
    }
    pIVar5 = IsInst(pIVar5,pIVar7);
    if (pIVar5 != (Il2CppObject *)0x0) {
      pIVar6 = IsInst(pIVar5,pIVar2);
      if (pIVar6 != (Il2CppObject *)0x0) {
        return pIVar6;
      }
                    /* WARNING: Subroutine does not return */
      RaiseInvalidCastException(pIVar5,pIVar2);
    }
  }
  return (Il2CppObject *)0x0;
}
