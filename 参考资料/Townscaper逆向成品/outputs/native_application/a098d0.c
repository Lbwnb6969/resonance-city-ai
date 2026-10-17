// RVA 0xa098d0 | Placemaker.ShadowBaker$$LateUpdate
// PDB: ShadowBaker_LateUpdate_m3E14A76FA6A2A44CBBBA945D427D9A4939822EF1
// Body: [[10a098d0, 10a09b8a]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 102c1f90 TMP_Offset__ctor_m015A6148C7CD342FAF43B7D165DD2C36E06019F4
// 106685e0 Shader_SetGlobalVector_m241FC10C437094156CA0C6CC299A3F09404CE1F3
// 1066d890 Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290
// 10672cf0 Vector2_get_sqrMagnitude_mF489F0EF7E88FF046BA36767ECC50B89674C925A
// 10a09c30 ShadowBaker_MaybeUpdateAngle_mFF76993FFF920A7D662CA12B4C6ADD8275B86144
// 10a09e60 ShadowBaker_MaybeUpdateFraming_mDC5F3ABCC227712A8705A25481D158DA89951C46
// 10a36ea0 Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32
// 10a43d90 Mathf_LerpAngle_m6A298166BC9A889DFB7D69D0B04CFDAB9A008946
// 10a43e90 Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616
// 10a44190 Mathf_MoveTowards_mE0689B09DD10CD59A01EE9E24880A5BA495FD321

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
ShadowBaker_LateUpdate_m3E14A76FA6A2A44CBBBA945D427D9A4939822EF1
          (ShadowBaker_t6F06B45A35DED9505A63AA08A159E2BD749BD427 *param_1,MethodInfo *param_2)

{
  int iVar1;
  bool bVar2;
  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 VVar3;
  float fVar4;
  float fVar5;
  TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 local_24;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 local_14;
  float local_c;
  float local_8;

  if (DAT_115201e4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A_il2cpp_TypeInfo_var);
    DAT_115201e4 = '\x01';
  }
  local_14.___x_0 = 0.0;
  local_14.___y_1 = 0.0;
  fVar4 = (param_1->___target_21).___x_0 - (param_1->___current_20).___x_0;
  fVar5 = (param_1->___target_21).___y_1 - (param_1->___current_20).___y_1;
  if (__real_2edbe6fe <= fVar5 * fVar5 + fVar4 * fVar4) {
    local_14.___y_1 = fVar5;
    local_14.___x_0 = fVar4;
    fVar5 = Vector2_get_sqrMagnitude_mF489F0EF7E88FF046BA36767ECC50B89674C925A
                      (&local_14,(MethodInfo *)0x0);
    fVar4 = (param_1->___target_21).___x_0;
    if (fVar5 < __real_3727c5ac) {
      fVar5 = (param_1->___target_21).___y_1;
      (param_1->___current_20).___x_0 = fVar4;
      (param_1->___current_20).___y_1 = fVar5;
    }
    if (param_1->___snap_30 == false) {
      fVar5 = *(float *)((int)WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A_il2cpp_TypeInfo_var
                              ->static_fields + 0xc);
    }
    else {
      fVar5 = 0.0;
    }
    fVar4 = Mathf_LerpAngle_m6A298166BC9A889DFB7D69D0B04CFDAB9A008946
                      (fVar4 * __real_43b40000,(param_1->___current_20).___x_0 * __real_43b40000,
                       fVar5,(MethodInfo *)0x0);
    (param_1->___current_20).___x_0 = fVar4 * ___real_3b360b61;
    fVar4 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616
                      ((param_1->___target_21).___y_1,(param_1->___current_20).___y_1,fVar5,
                       (MethodInfo *)0x0);
    (param_1->___current_20).___y_1 = fVar4;
    param_1->___angleDirty_29 = true;
  }
  param_1->___snap_30 = false;
  ShadowBaker_MaybeUpdateAngle_mFF76993FFF920A7D662CA12B4C6ADD8275B86144(param_1,(MethodInfo *)0x0);
  ShadowBaker_MaybeUpdateFraming_mDC5F3ABCC227712A8705A25481D158DA89951C46
            (param_1,(MethodInfo *)0x0);
  if (DAT_115201e5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ShadowBaker_t6F06B45A35DED9505A63AA08A159E2BD749BD427_il2cpp_TypeInfo_var);
    DAT_115201e5 = '\x01';
  }
  bVar2 = (param_1->___target_21).___y_1 == 0.0;
  fVar4 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616
                    (-1.0,1.0,(float)bVar2,(MethodInfo *)0x0);
  local_c = param_1->___lamps_33;
  if (local_c != fVar4) {
    local_8 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290((MethodInfo *)0x0);
    fVar4 = Mathf_MoveTowards_mE0689B09DD10CD59A01EE9E24880A5BA495FD321
                      (local_c,fVar4,local_8 * __real_3f333333,(MethodInfo *)0x0);
    param_1->___lamps_33 = fVar4;
    if ((ShadowBaker_t6F06B45A35DED9505A63AA08A159E2BD749BD427_il2cpp_TypeInfo_var->has_cctor !=
         '\0') &&
       (ShadowBaker_t6F06B45A35DED9505A63AA08A159E2BD749BD427_il2cpp_TypeInfo_var->cctor_finished ==
        0)) {
      il2cpp_runtime_class_init
                (ShadowBaker_t6F06B45A35DED9505A63AA08A159E2BD749BD427_il2cpp_TypeInfo_var);
    }
    iVar1 = *(int *)((int)ShadowBaker_t6F06B45A35DED9505A63AA08A159E2BD749BD427_il2cpp_TypeInfo_var
                          ->static_fields + 0x1c);
    local_24.___m_Left_0 = 0.0;
    local_24.___m_Right_1 = 0.0;
    local_24.___m_Top_2 = 0.0;
    local_24.___m_Bottom_3 = 0.0;
    fVar4 = (float)bVar2;
    TMP_Offset__ctor_m015A6148C7CD342FAF43B7D165DD2C36E06019F4
              (&local_24,param_1->___lamps_33,fVar4,__real_3f800000 - fVar4,0.0,(MethodInfo *)0x0);
    VVar3.___y_2 = local_24.___m_Right_1;
    VVar3.___x_1 = local_24.___m_Left_0;
    VVar3.___z_3 = local_24.___m_Top_2;
    VVar3.___w_4 = local_24.___m_Bottom_3;
    Shader_SetGlobalVector_m241FC10C437094156CA0C6CC299A3F09404CE1F3(iVar1,VVar3,(MethodInfo *)0x0);
  }
  if (param_1->___shouldBake_31 != false) {
    if ((Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 *)param_1->___cam_7 ==
        (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_codegen_raise_null_reference_exception();
    }
    Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32
              ((Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 *)param_1->___cam_7,true,
               (MethodInfo *)0x0);
    param_1->___shouldBake_31 = false;
  }
  return;
}
