// RVA 0x2ffe60 | Placemaker.Ui.SunSlider$$Placemaker.Ui.UiMaster.IUiSetup.OnSetup
// PDB: SunSlider_Placemaker_Ui_UiMaster_IUiSetup_OnSetup_m555C094ACB5F40903B2791F5E974C28AE37519BC
// Body: [[102ffe60, 102ffff1]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e740 il2cpp_codegen_get_index_out_of_range_exception
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eab0 il2cpp_codegen_raise_exception
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103e5200 UiMaster_AddState_mBEDD5B000A27415FBFABC160DF4F683F4189BACF
// 103e8550 UpdateState_SnapTo_m09AD136615F50FE42FD5F48CADAC468357F42077
// 103e85c0 UpdateState_SubscribeScale_m4569C9FB666CC62359E2843F9F59129315C7D3CD
// 1066f810 Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046

void __cdecl
SunSlider_Placemaker_Ui_UiMaster_IUiSetup_OnSetup_m555C094ACB5F40903B2791F5E974C28AE37519BC
          (SunSlider_t5377A5354C7D2E09BF671D1681C1B608D4007427 *param_1,
          UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *param_2,MethodInfo *param_3)

{
  TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D *pTVar1;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar2;
  UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *pUVar3;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar4;
  Exception_t *pEVar5;
  int iVar6;
  uint uVar7;
  MethodInfo *pMVar8;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_2c;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_20;
  undefined8 local_14;
  float local_c;
  UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *local_8;

  if (DAT_1151c20a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var);
    DAT_1151c20a = '\x01';
  }
  if (param_1->___handlesToScale_7 ==
      (TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D *)0x0) {
LAB_102fffe0:
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_null_reference_exception();
  }
  uVar7 = param_1->___handlesToScale_7->_padding_ - 1;
  if (-1 < (int)uVar7) {
    iVar6 = uVar7 * 4 + 0x10;
    do {
      pTVar1 = param_1->___handlesToScale_7;
      if (pTVar1 == (TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D *)0x0)
      goto LAB_102fffe0;
      if ((uint)pTVar1->_padding_ <= uVar7) {
        pMVar8 = (MethodInfo *)0x0;
        pEVar5 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
        il2cpp_codegen_raise_exception(pEVar5,pMVar8);
      }
      if (param_1->___scaleZ_8 == (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0)
      goto LAB_102fffe0;
      pTVar2 = *(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 **)
                ((int)pTVar1->m_Items + iVar6 + -0x10);
      local_8 = UpdateState_SubscribeScale_m4569C9FB666CC62359E2843F9F59129315C7D3CD
                          (param_1->___scaleZ_8,pTVar2,'\x04',0.0,1.0,(MethodInfo *)0x0);
      if (pTVar2 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) goto LAB_102fffe0;
      pVVar4 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046
                         (&local_20,pTVar2,(MethodInfo *)0x0);
      local_14._0_4_ = pVVar4->___x_2;
      local_14._4_4_ = pVVar4->___y_3;
      local_c = pVVar4->___z_4;
      if (local_8 == (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0)
      goto LAB_102fffe0;
      UpdateState_SnapTo_m09AD136615F50FE42FD5F48CADAC468357F42077
                (local_8,local_c,(MethodInfo *)0x0);
      if (param_1->___scaleXY_9 == (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0)
      goto LAB_102fffe0;
      local_8 = UpdateState_SubscribeScale_m4569C9FB666CC62359E2843F9F59129315C7D3CD
                          (param_1->___scaleXY_9,pTVar2,'\x03',0.0,1.0,(MethodInfo *)0x0);
      pVVar4 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046
                         (&local_2c,pTVar2,(MethodInfo *)0x0);
      if (local_8 == (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0)
      goto LAB_102fffe0;
      UpdateState_SnapTo_m09AD136615F50FE42FD5F48CADAC468357F42077
                (local_8,pVVar4->___x_2,(MethodInfo *)0x0);
      iVar6 = iVar6 + -4;
      uVar7 = uVar7 - 1;
    } while (-1 < (int)uVar7);
  }
  pUVar3 = param_1->___scaleZ_8;
  if ((UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var->cctor_finished == 0))
  {
    il2cpp_runtime_class_init
              (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var);
  }
  UiMaster_AddState_mBEDD5B000A27415FBFABC160DF4F683F4189BACF(pUVar3,(MethodInfo *)0x0);
  UiMaster_AddState_mBEDD5B000A27415FBFABC160DF4F683F4189BACF
            (param_1->___scaleXY_9,(MethodInfo *)0x0);
  return;
}
