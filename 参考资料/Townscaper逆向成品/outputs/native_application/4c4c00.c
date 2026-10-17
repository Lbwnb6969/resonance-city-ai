// RVA 0x4c4c00 | Placemaker.Ui.DisableableButton$$Placemaker.Ui.UiMaster.IUiSetup.OnStart
// PDB: DisableableButton_Placemaker_Ui_UiMaster_IUiSetup_OnStart_m302D29E5D9D3963CF813D00FA4FE2A1C164E2DF4
// Body: [[104c4c00, 104c4cfa]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 102c1f90 TMP_Offset__ctor_m015A6148C7CD342FAF43B7D165DD2C36E06019F4
// 10a4aa60 Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499

void __cdecl
DisableableButton_Placemaker_Ui_UiMaster_IUiSetup_OnStart_m302D29E5D9D3963CF813D00FA4FE2A1C164E2DF4
          (DisableableButton_t1FFBF591208239F608B0F9F3FADEFF79EA469513 *param_1,
          UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *param_2,MethodInfo *param_3)

{
  Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 *pGVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  float *pfVar5;
  float fVar6;
  undefined1 local_24 [16];
  TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 local_14;

  if (DAT_1151d132 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    DAT_1151d132 = '\x01';
  }
  pGVar1 = param_1->___background_6;
  if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
  }
  bVar4 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
                    ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)pGVar1,(MethodInfo *)0x0);
  if (bVar4) {
    pGVar1 = param_1->___background_6;
    if (pGVar1 == (Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_codegen_raise_null_reference_exception();
    }
    pfVar5 = (float *)(**(code **)(pGVar1->_padding_ + 0x16c))
                                (local_24,pGVar1,*(undefined4 *)(pGVar1->_padding_ + 0x170));
    fVar6 = pfVar5[1];
    fVar2 = pfVar5[2];
    fVar3 = pfVar5[3];
    (param_1->___bgColor0_8).___r_0 = *pfVar5;
    (param_1->___bgColor0_8).___g_1 = fVar6;
    (param_1->___bgColor0_8).___b_2 = fVar2;
    (param_1->___bgColor0_8).___a_3 = fVar3;
    fVar6 = (param_1->___bgColor0_8).___g_1 * __real_3f333333 +
            (param_1->___bgColor0_8).___r_0 * __real_3e4ccccd +
            (param_1->___bgColor0_8).___b_2 * __real_3dcccccd;
    local_14.___m_Left_0 = 0.0;
    local_14.___m_Right_1 = 0.0;
    local_14.___m_Top_2 = 0.0;
    local_14.___m_Bottom_3 = 0.0;
    TMP_Offset__ctor_m015A6148C7CD342FAF43B7D165DD2C36E06019F4
              (&local_14,fVar6,fVar6,fVar6,(param_1->___bgColor0_8).___a_3,(MethodInfo *)0x0);
    (param_1->___bgColor1_9).___r_0 = local_14.___m_Left_0;
    (param_1->___bgColor1_9).___g_1 = local_14.___m_Right_1;
    (param_1->___bgColor1_9).___b_2 = local_14.___m_Top_2;
    (param_1->___bgColor1_9).___a_3 = local_14.___m_Bottom_3;
  }
  return;
}
