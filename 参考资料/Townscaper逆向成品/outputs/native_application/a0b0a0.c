// RVA 0xa0b0a0 | Placemaker.ShadowBaker$$UpdateLamps
// PDB: ShadowBaker_UpdateLamps_m097CD91E916EADBAAD830AB183D36D7752093F8B
// Body: [[10a0b0a0, 10a0b1fb]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 102c1f90 TMP_Offset__ctor_m015A6148C7CD342FAF43B7D165DD2C36E06019F4
// 106685e0 Shader_SetGlobalVector_m241FC10C437094156CA0C6CC299A3F09404CE1F3
// 1066d890 Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290
// 10a43e90 Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616
// 10a44190 Mathf_MoveTowards_mE0689B09DD10CD59A01EE9E24880A5BA495FD321

void __cdecl
ShadowBaker_UpdateLamps_m097CD91E916EADBAAD830AB183D36D7752093F8B
          (ShadowBaker_t6F06B45A35DED9505A63AA08A159E2BD749BD427 *param_1,MethodInfo *param_2)

{
  int iVar1;
  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 VVar2;
  float fVar3;
  TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 local_20;
  float local_10;
  float local_c;
  float local_8;

  if (DAT_115201e5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ShadowBaker_t6F06B45A35DED9505A63AA08A159E2BD749BD427_il2cpp_TypeInfo_var);
    DAT_115201e5 = '\x01';
  }
  local_10 = (float)((param_1->___target_21).___y_1 == 0.0);
  fVar3 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616(-1.0,1.0,local_10,(MethodInfo *)0x0);
  local_c = param_1->___lamps_33;
  if (local_c != fVar3) {
    local_8 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290((MethodInfo *)0x0);
    fVar3 = Mathf_MoveTowards_mE0689B09DD10CD59A01EE9E24880A5BA495FD321
                      (local_c,fVar3,local_8 * __real_3f333333,(MethodInfo *)0x0);
    param_1->___lamps_33 = fVar3;
    if ((ShadowBaker_t6F06B45A35DED9505A63AA08A159E2BD749BD427_il2cpp_TypeInfo_var->has_cctor !=
         '\0') &&
       (ShadowBaker_t6F06B45A35DED9505A63AA08A159E2BD749BD427_il2cpp_TypeInfo_var->cctor_finished ==
        0)) {
      il2cpp_runtime_class_init
                (ShadowBaker_t6F06B45A35DED9505A63AA08A159E2BD749BD427_il2cpp_TypeInfo_var);
    }
    iVar1 = *(int *)((int)ShadowBaker_t6F06B45A35DED9505A63AA08A159E2BD749BD427_il2cpp_TypeInfo_var
                          ->static_fields + 0x1c);
    local_20.___m_Left_0 = 0.0;
    local_20.___m_Right_1 = 0.0;
    local_20.___m_Top_2 = 0.0;
    local_20.___m_Bottom_3 = 0.0;
    TMP_Offset__ctor_m015A6148C7CD342FAF43B7D165DD2C36E06019F4
              (&local_20,param_1->___lamps_33,local_10,__real_3f800000 - local_10,0.0,
               (MethodInfo *)0x0);
    VVar2.___y_2 = local_20.___m_Right_1;
    VVar2.___x_1 = local_20.___m_Left_0;
    VVar2.___z_3 = local_20.___m_Top_2;
    VVar2.___w_4 = local_20.___m_Bottom_3;
    Shader_SetGlobalVector_m241FC10C437094156CA0C6CC299A3F09404CE1F3(iVar1,VVar2,(MethodInfo *)0x0);
  }
  return;
}
