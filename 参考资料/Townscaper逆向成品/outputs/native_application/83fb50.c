// RVA 0x83fb50 | Placemaker.Ui.GamepadStepper$$Update
// PDB: GamepadStepper_Update_mD1AAED95BE7A77271FDFB6EED38BF501EF159D41
// Body: [[1083fb50, 1084006e]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 10128ae0 il2cpp_value_box
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1066d9d0 Time_get_unscaledDeltaTime_m2C153F1E5C77C6AF655054BC6C76D0C334C0DC84
// 1066ff00 Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC
// 10672d70 Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10a3cbf0 Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8
// 10a44440 Mathf_Sign_m01716387C82B9523CFFADED7B2037D75F57FE2FB
// 10f1c7d0 Player_GetAxis_mF22EA1C33DFDEC6BB8466692D4FDAB058B819C2E

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
GamepadStepper_Update_mD1AAED95BE7A77271FDFB6EED38BF501EF159D41
          (GamepadStepper_tB783B5F0133E8F1214002089AA55086072FBC7A6 *param_1,MethodInfo *param_2)

{
  int *piVar1;
  Player_t64E5862AF574099CB9D64941CF5AAFD551EDA05E *pPVar2;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar3;
  GamepadStepper_tB783B5F0133E8F1214002089AA55086072FBC7A6 *pGVar4;
  int iVar5;
  Il2CppObject *pIVar6;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar7;
  float fVar8;
  float fVar9;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar10;
  float fVar11;
  float fVar12;
  float fStack_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;

  pGVar4 = param_1;
  if (DAT_1151f41a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral14BC80A4FCEB21C92921A978B940ECB3BFA86E80);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral2E7C78DF09D6C513DDD9998F9D1E25F197C88763);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral3956EC32329CFF49D5EEA599342BBC4A938A3520);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralA9753FAA8F290A9AAF4381B61383AC2B2A23CC39);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralE49C63A7E6EC18C2711DEBAAB30DF47B11DAFAA0);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralFF740F1452FFAF82498252A4098820F7821535A7);
    DAT_1151f41a = '\x01';
  }
  if ((param_1->___uiMaster_4 == (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) ||
     (pPVar2 = param_1->___uiMaster_4->___player_43,
     pPVar2 == (Player_t64E5862AF574099CB9D64941CF5AAFD551EDA05E *)0x0)) goto LAB_1084006a;
  local_10 = Player_GetAxis_mF22EA1C33DFDEC6BB8466692D4FDAB058B819C2E
                       (pPVar2,_stringLiteral14BC80A4FCEB21C92921A978B940ECB3BFA86E80,
                        (MethodInfo *)0x0);
  local_c = Player_GetAxis_mF22EA1C33DFDEC6BB8466692D4FDAB058B819C2E
                      (pPVar2,_stringLiteralA9753FAA8F290A9AAF4381B61383AC2B2A23CC39,
                       (MethodInfo *)0x0);
  fVar9 = (float)((uint)local_10 & __xmm_7fffffff7fffffff7fffffff7fffffff);
  local_c = (float)((uint)local_c ^ __xmm_80000000800000008000000080000000);
  local_8 = (float)((uint)local_c & __xmm_7fffffff7fffffff7fffffff7fffffff);
  local_14 = local_10;
  (param_1->___axis_13).___x_0 = local_10;
  (param_1->___axis_13).___y_1 = local_c;
  VVar10 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828((MethodInfo *)0x0);
  fVar11 = fStack_1c;
  fStack_1c = VVar10.___x_0;
  local_18 = VVar10.___y_1;
  (param_1->___stepVector_12).___x_0 = fVar11;
  (param_1->___stepVector_12).___y_1 = local_18;
  fVar11 = __real_3e4ccccd;
  if (param_1->___mode_5 == 0) {
    if (local_8 < fVar9) {
      if (__real_3e4ccccd < fVar9) {
        param_1->___mode_5 = 3;
        fVar11 = Mathf_Sign_m01716387C82B9523CFFADED7B2037D75F57FE2FB(local_10,(MethodInfo *)0x0);
        (param_1->___stepVector_12).___x_0 = fVar11;
        goto LAB_1083fcc1;
      }
    }
    else if (__real_3e4ccccd < local_8) {
      param_1->___mode_5 = 0xc;
      fVar11 = Mathf_Sign_m01716387C82B9523CFFADED7B2037D75F57FE2FB(local_c,(MethodInfo *)0x0);
      (param_1->___stepVector_12).___y_1 = fVar11;
LAB_1083fcc1:
      fVar11 = __real_3e4ccccd;
      param_1->___steps_6 = param_1->___steps_6 + 1;
    }
  }
  fVar12 = __real_3f19999a;
  fVar8 = __real_3f4ccccd;
  iVar5 = param_1->___mode_5;
  if (((iVar5 == 3) && (iVar5 = 3, __real_3f19999a < local_8)) &&
     (fVar9 * __real_3f4ccccd < local_8)) {
    param_1->___mode_5 = 0xf;
    iVar5 = 0xf;
  }
  if (((iVar5 == 0xc) && (fVar12 < fVar9)) && (local_8 * fVar8 < fVar9)) {
    param_1->___mode_5 = 0xf;
    iVar5 = 0xf;
  }
  if (iVar5 == 0) {
LAB_1083fd52:
    VVar10 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828((MethodInfo *)0x0);
    fVar11 = fStack_1c;
    fStack_1c = VVar10.___x_0;
    local_18 = VVar10.___y_1;
    (param_1->___stepper_7).___x_0 = fVar11;
    (param_1->___stepper_7).___y_1 = local_18;
    param_1->___steps_6 = 0;
  }
  else {
    if ((fVar9 < fVar11) && (local_8 < fVar11)) {
      param_1->___mode_5 = 0;
      goto LAB_1083fd52;
    }
    if (iVar5 == 3) {
      local_c = 0.0;
    }
    else if (iVar5 == 0xc) {
      local_14 = 0.0;
    }
    piVar1 = &param_1->___steps_6;
    if (*piVar1 < 2) {
      param_1 = (GamepadStepper_tB783B5F0133E8F1214002089AA55086072FBC7A6 *)0x40000000;
    }
    else {
      param_1 = (GamepadStepper_tB783B5F0133E8F1214002089AA55086072FBC7A6 *)0x40400000;
      if (3 < *piVar1) {
        param_1 = (GamepadStepper_tB783B5F0133E8F1214002089AA55086072FBC7A6 *)0x40c00000;
      }
    }
    fVar12 = Time_get_unscaledDeltaTime_m2C153F1E5C77C6AF655054BC6C76D0C334C0DC84((MethodInfo *)0x0)
    ;
    fVar9 = __real_bf800000;
    fVar11 = __real_3f800000;
    fVar8 = fVar12 * (float)param_1 * local_c + (pGVar4->___stepper_7).___y_1;
    fVar12 = fVar12 * (float)param_1 * local_14 + (pGVar4->___stepper_7).___x_0;
    (pGVar4->___stepper_7).___y_1 = fVar8;
    (pGVar4->___stepper_7).___x_0 = fVar12;
    if (fVar11 < fVar12) {
      (pGVar4->___stepVector_12).___x_0 = 1.0;
      (pGVar4->___stepper_7).___x_0 = fVar12 - fVar11;
LAB_10840029:
      pGVar4->___steps_6 = pGVar4->___steps_6 + 1;
    }
    else if (fVar12 < fVar9) {
      (pGVar4->___stepper_7).___x_0 = fVar12 + fVar11;
      (pGVar4->___stepVector_12).___x_0 = -1.0;
      goto LAB_10840029;
    }
    if (fVar11 < fVar8) {
      (pGVar4->___stepper_7).___y_1 = fVar8 - fVar11;
      (pGVar4->___stepVector_12).___y_1 = 1.0;
      pGVar4->___steps_6 = pGVar4->___steps_6 + 1;
    }
    else if (fVar8 < fVar9) {
      (pGVar4->___stepper_7).___y_1 = fVar8 + fVar11;
      (pGVar4->___stepVector_12).___y_1 = -1.0;
      pGVar4->___steps_6 = pGVar4->___steps_6 + 1;
    }
  }
  fVar11 = (pGVar4->___stepVector_12).___x_0;
  pGVar4->___stepLeft_8 = fVar11 < 0.0;
  pGVar4->___stepRight_9 = 0.0 < fVar11;
  fVar9 = (pGVar4->___stepVector_12).___y_1;
  pGVar4->___stepDown_11 = fVar9 < 0.0;
  pGVar4->___stepUp_10 = 0.0 < fVar9;
  if (fVar11 < 0.0) {
    if ((Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->has_cctor != '\0') &&
       (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->cctor_finished == 0)) {
      il2cpp_runtime_class_init(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)
      ;
    }
    Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8
              ((Il2CppObject *)_stringLiteralE49C63A7E6EC18C2711DEBAAB30DF47B11DAFAA0,
               (MethodInfo *)0x0);
  }
  if (pGVar4->___stepRight_9 != false) {
    if ((Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->has_cctor != '\0') &&
       (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->cctor_finished == 0)) {
      il2cpp_runtime_class_init(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)
      ;
    }
    Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8
              ((Il2CppObject *)_stringLiteralFF740F1452FFAF82498252A4098820F7821535A7,
               (MethodInfo *)0x0);
  }
  if (pGVar4->___stepUp_10 != false) {
    if ((Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->has_cctor != '\0') &&
       (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->cctor_finished == 0)) {
      il2cpp_runtime_class_init(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)
      ;
    }
    Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8
              ((Il2CppObject *)_stringLiteral2E7C78DF09D6C513DDD9998F9D1E25F197C88763,
               (MethodInfo *)0x0);
  }
  if (pGVar4->___stepDown_11 != false) {
    if ((Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->has_cctor != '\0') &&
       (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->cctor_finished == 0)) {
      il2cpp_runtime_class_init(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)
      ;
    }
    Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8
              ((Il2CppObject *)_stringLiteral3956EC32329CFF49D5EEA599342BBC4A938A3520,
               (MethodInfo *)0x0);
  }
  fVar11 = (pGVar4->___stepVector_12).___x_0;
  local_14 = (pGVar4->___stepVector_12).___y_1;
  VVar10 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828((MethodInfo *)0x0);
  fVar11 = fVar11 - fStack_1c;
  fStack_1c = VVar10.___x_0;
  local_18 = VVar10.___y_1;
  if (__real_2edbe6fe <= (local_14 - local_18) * (local_14 - local_18) + fVar11 * fVar11) {
    fStack_1c = (pGVar4->___stepVector_12).___x_0;
    local_18 = (pGVar4->___stepVector_12).___y_1;
    pIVar6 = il2cpp_value_box(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var,
                              &fStack_1c);
    if ((Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->has_cctor != '\0') &&
       (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->cctor_finished == 0)) {
      il2cpp_runtime_class_init(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)
      ;
    }
    Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(pIVar6,(MethodInfo *)0x0);
  }
  pTVar7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                     ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pGVar4,
                      (MethodInfo *)0x0);
  fStack_1c = (pGVar4->___stepper_7).___y_1 * ___real_41a00000;
  local_18 = 0.0;
  if (pTVar7 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
    VVar3.___y_3 = fStack_1c;
    VVar3.___x_2 = (pGVar4->___stepper_7).___x_0 * ___real_41a00000;
    VVar3.___z_4 = 0.0;
    Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC
              (pTVar7,VVar3,(MethodInfo *)0x0);
    return;
  }
LAB_1084006a:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
