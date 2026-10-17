// RVA 0x10cd890 | FuryStudios.FurySDK.ClassTypeReference$$set_Type
// PDB: ClassTypeReference_set_Type_m7869E5756C391544FFAEB277692A88B8EAF78D7D
// Body: [[110cd890, 110cda4e]]
// Direct callees:
// 1003e0a0 NullCheck
// 1003e660 Invoke
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018e960 il2cpp_codegen_initialize_runtime_metadata_inline
// 1018ea90 il2cpp_codegen_object_new
// 1018eab0 il2cpp_codegen_raise_exception
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10829780 Type_get_IsClass_m2D39ED0DAFC534D527F8B019DA8B90859A7CA787
// 10829df0 Type_op_Inequality_m6DDC5E923203A79BF505F9275B694AD3FAA36DB0
// 10a920d0 ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D
// 10f027d0 String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44
// 10f04d40 String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17

void __cdecl
ClassTypeReference_set_Type_m7869E5756C391544FFAEB277692A88B8EAF78D7D
          (ClassTypeReference_tF5B5E0BC89426798A9F3DAC88BD2B0C9B2B8DECD *param_1,Type_t *param_2,
          MethodInfo *param_3)

{
  bool bVar1;
  String_t *pSVar2;
  int *piVar3;
  int iVar4;
  Il2CppObject *pIVar5;
  Il2CppClass *pIVar6;
  ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *pAVar7;
  String_t *pSVar8;
  MethodInfo *pMVar9;

  if (DAT_11523a69 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata((uint *)&Type_t_il2cpp_TypeInfo_var);
    DAT_11523a69 = '\x01';
  }
  if ((Type_t_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (Type_t_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(Type_t_il2cpp_TypeInfo_var);
  }
  bVar1 = Type_op_Inequality_m6DDC5E923203A79BF505F9275B694AD3FAA36DB0
                    (param_2,(Type_t *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (param_2 == (Type_t *)0x0) goto LAB_110cda4a;
    bVar1 = Type_get_IsClass_m2D39ED0DAFC534D527F8B019DA8B90859A7CA787(param_2,(MethodInfo *)0x0);
    if (!bVar1) {
      NullCheck(param_2);
      pIVar5 = (Il2CppObject *)VirtFuncInvoker0<int>::Invoke(0x1c,(Il2CppObject *)param_2);
      pMVar9 = (MethodInfo *)0x0;
      pSVar2 = il2cpp_codegen_initialize_runtime_metadata_inline
                         ((uint *)&_stringLiteralECB3DAF6EC145365DDC4CB9128F57BA47057A6BF);
      pSVar2 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(pSVar2,pIVar5,pMVar9);
      pIVar6 = il2cpp_codegen_initialize_runtime_metadata_inline
                         ((uint *)&
                                  ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var
                         );
      pAVar7 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)
               il2cpp_codegen_object_new(pIVar6);
      pMVar9 = (MethodInfo *)0x0;
      pSVar8 = il2cpp_codegen_initialize_runtime_metadata_inline
                         ((uint *)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8);
      ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(pAVar7,pSVar2,pSVar8,pMVar9)
      ;
      pMVar9 = il2cpp_codegen_initialize_runtime_metadata_inline
                         ((uint *)&
                                  ClassTypeReference_set_Type_m7869E5756C391544FFAEB277692A88B8EAF78D7D_RuntimeMethod_var
                         );
                    /* WARNING: Subroutine does not return */
      il2cpp_codegen_raise_exception((Exception_t *)pAVar7,pMVar9);
    }
  }
  bVar1 = DAT_11523a65 == '\0';
  param_1->____type_1 = param_2;
  if (bVar1) {
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
                    (param_2,(Type_t *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    param_1->____classRef_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
    return;
  }
  if (param_2 != (Type_t *)0x0) {
    pSVar2 = (String_t *)
             (**(code **)(param_2->_padding_ + 0x19c))
                       (param_2,*(undefined4 *)(param_2->_padding_ + 0x1a0));
    piVar3 = (int *)(**(code **)(param_2->_padding_ + 0x18c))
                              (param_2,*(undefined4 *)(param_2->_padding_ + 400));
    if (piVar3 != (int *)0x0) {
      iVar4 = (**(code **)(*piVar3 + 0x16c))(piVar3,*(undefined4 *)(*piVar3 + 0x170));
      if (iVar4 != 0) {
        pSVar2 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44
                           (pSVar2,_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D,
                            *(String_t **)(iVar4 + 8),(MethodInfo *)0x0);
        param_1->____classRef_0 = pSVar2;
        return;
      }
    }
  }
LAB_110cda4a:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
