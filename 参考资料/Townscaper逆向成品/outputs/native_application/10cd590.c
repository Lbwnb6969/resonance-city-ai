// RVA 0x10cd590 | FuryStudios.FurySDK.ClassTypeReference$$ToString
// PDB: ClassTypeReference_ToString_m87E216484EAF58DD767A70EFDD78508CDAC5BAB1
// Body: [[110cd590, 110cd61c]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10829df0 Type_op_Inequality_m6DDC5E923203A79BF505F9275B694AD3FAA36DB0

String_t * __cdecl
ClassTypeReference_ToString_m87E216484EAF58DD767A70EFDD78508CDAC5BAB1
          (ClassTypeReference_tF5B5E0BC89426798A9F3DAC88BD2B0C9B2B8DECD *param_1,MethodInfo *param_2
          )

{
  Type_t *pTVar1;
  bool bVar2;
  String_t *pSVar3;

  if (DAT_11523a6b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata((uint *)&Type_t_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral41D4ECEC72974BEA998FBA733A15A0EA3B7DF9B1);
    DAT_11523a6b = '\x01';
  }
  pTVar1 = param_1->____type_1;
  if ((Type_t_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (Type_t_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(Type_t_il2cpp_TypeInfo_var);
  }
  bVar2 = Type_op_Inequality_m6DDC5E923203A79BF505F9275B694AD3FAA36DB0
                    (pTVar1,(Type_t *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pTVar1 = param_1->____type_1;
    if (pTVar1 != (Type_t *)0x0) {
      pSVar3 = (String_t *)
               (**(code **)(pTVar1->_padding_ + 0x19c))
                         (pTVar1,*(undefined4 *)(pTVar1->_padding_ + 0x1a0));
      return pSVar3;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_null_reference_exception();
  }
  return _stringLiteral41D4ECEC72974BEA998FBA733A15A0EA3B7DF9B1;
}
