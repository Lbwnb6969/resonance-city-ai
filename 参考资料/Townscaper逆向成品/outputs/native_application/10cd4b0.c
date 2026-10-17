// RVA 0x10cd4b0 | FuryStudios.FurySDK.ClassTypeReference$$GetClassRef
// PDB: ClassTypeReference_GetClassRef_mDA711F832169F4A6238281CF1FBD1B4550D25FB1
// Body: [[110cd4b0, 110cd584]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10829df0 Type_op_Inequality_m6DDC5E923203A79BF505F9275B694AD3FAA36DB0
// 10f027d0 String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44

String_t * __cdecl
ClassTypeReference_GetClassRef_mDA711F832169F4A6238281CF1FBD1B4550D25FB1
          (Type_t *param_1,MethodInfo *param_2)

{
  bool bVar1;
  String_t *pSVar2;
  int *piVar3;
  int iVar4;

  if (DAT_11523a65 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata((uint *)&Type_t_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
    DAT_11523a65 = '\x01';
  }
  if ((Type_t_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (Type_t_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(Type_t_il2cpp_TypeInfo_var);
  }
  bVar1 = Type_op_Inequality_m6DDC5E923203A79BF505F9275B694AD3FAA36DB0
                    (param_1,(Type_t *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (param_1 != (Type_t *)0x0) {
      pSVar2 = (String_t *)
               (**(code **)(param_1->_padding_ + 0x19c))
                         (param_1,*(undefined4 *)(param_1->_padding_ + 0x1a0));
      piVar3 = (int *)(**(code **)(param_1->_padding_ + 0x18c))
                                (param_1,*(undefined4 *)(param_1->_padding_ + 400));
      if (piVar3 != (int *)0x0) {
        iVar4 = (**(code **)(*piVar3 + 0x16c))(piVar3,*(undefined4 *)(*piVar3 + 0x170));
        if (iVar4 != 0) {
          pSVar2 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44
                             (pSVar2,_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D,
                              *(String_t **)(iVar4 + 8),(MethodInfo *)0x0);
          return pSVar2;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_null_reference_exception();
  }
  return _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
}
