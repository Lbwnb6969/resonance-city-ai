// RVA 0x842cc0 | Placemaker.Ui.GenericMenuNavigator$$SelectButton
// PDB: GenericMenuNavigator_SelectButton_mAF6FDB8622BD2B6DEEA955A9D718A95D635B7063
// Body: [[10842cc0, 10842db3]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103e9590 UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15
// 108838a0 ButtonAudio_Play_mA88FCF686BF0E8A1A00EDC47DF998054B60E4093
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10a4aa60 Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499

void __cdecl
GenericMenuNavigator_SelectButton_mAF6FDB8622BD2B6DEEA955A9D718A95D635B7063
          (GenericMenuNavigator_t8DD7647D5CEEB4AE0E944F8565B0F21478F1A333 *param_1,
          NavigableButton_t3E3EB83A5B5751D717C13A670A721528CD3059A1 *param_2,MethodInfo *param_3)

{
  NavigableButton_t3E3EB83A5B5751D717C13A670A721528CD3059A1 *pNVar1;
  UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *pUVar2;
  bool bVar3;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar4;

  if (DAT_1151f44a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    DAT_1151f44a = '\x01';
  }
  pNVar1 = param_1->___selectedButton_8;
  if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
  }
  bVar3 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
                    ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)pNVar1,(MethodInfo *)0x0);
  if (bVar3) {
    if ((param_1->___selectedButton_8 ==
         (NavigableButton_t3E3EB83A5B5751D717C13A670A721528CD3059A1 *)0x0) ||
       (pUVar2 = param_1->___selectedButton_8->___selectedState_6,
       pUVar2 == (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0)) goto LAB_10842daf;
    UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15
              (pUVar2,false,(MethodInfo *)0x0);
  }
  param_1->___selectedButton_8 = param_2;
  if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
  }
  bVar3 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
                    ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)param_2,(MethodInfo *)0x0);
  if (!bVar3) {
    return;
  }
  if ((param_1->___selectedButton_8 !=
       (NavigableButton_t3E3EB83A5B5751D717C13A670A721528CD3059A1 *)0x0) &&
     (pUVar2 = param_1->___selectedButton_8->___selectedState_6,
     pUVar2 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0)) {
    UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15
              (pUVar2,true,(MethodInfo *)0x0);
    if (param_1->___selectedButton_8 !=
        (NavigableButton_t3E3EB83A5B5751D717C13A670A721528CD3059A1 *)0x0) {
      pTVar4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                         ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                          param_1->___selectedButton_8,(MethodInfo *)0x0);
      ButtonAudio_Play_mA88FCF686BF0E8A1A00EDC47DF998054B60E4093(pTVar4,4,1.0,(MethodInfo *)0x0);
      return;
    }
  }
LAB_10842daf:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
