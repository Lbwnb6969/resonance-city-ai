// RVA 0x1dc5e0 | Placemaker.Ui.Dim.<>c$$<Placemaker.Ui.UiMaster.IUiSetup.OnSetup>b__11_0
// PDB: U3CU3Ec_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__11_0_mB723273129EBD713A059D4D3CDE7FEE7E40CB136
// Body: [[101dc5e0, 101dc6ca]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 102c1f90 TMP_Offset__ctor_m015A6148C7CD342FAF43B7D165DD2C36E06019F4
// 106685e0 Shader_SetGlobalVector_m241FC10C437094156CA0C6CC299A3F09404CE1F3
// 1066da30 Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA
// 10a43e90 Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616

void __cdecl
U3CU3Ec_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__11_0_mB723273129EBD713A059D4D3CDE7FEE7E40CB136
          (U3CU3Ec_tE05B82489AF89E23C7DEDCE0CC183DF28C789F43 *param_1,float param_2,
          MethodInfo *param_3)

{
  int iVar1;
  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 VVar2;
  float fVar3;
  TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 local_14;

  if (DAT_1151afa6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ShaderIds_tC995CA752F7F260E38D5837C75748EDD5EA54FA7_il2cpp_TypeInfo_var);
    DAT_1151afa6 = '\x01';
  }
  if ((ShaderIds_tC995CA752F7F260E38D5837C75748EDD5EA54FA7_il2cpp_TypeInfo_var->has_cctor != '\0')
     && (ShaderIds_tC995CA752F7F260E38D5837C75748EDD5EA54FA7_il2cpp_TypeInfo_var->cctor_finished ==
         0)) {
    il2cpp_runtime_class_init
              (ShaderIds_tC995CA752F7F260E38D5837C75748EDD5EA54FA7_il2cpp_TypeInfo_var);
  }
  iVar1 = *(int *)((int)ShaderIds_tC995CA752F7F260E38D5837C75748EDD5EA54FA7_il2cpp_TypeInfo_var->
                        static_fields + 0xc);
  local_14.___m_Left_0 = 0.0;
  local_14.___m_Right_1 = 0.0;
  local_14.___m_Top_2 = 0.0;
  local_14.___m_Bottom_3 = 0.0;
  TMP_Offset__ctor_m015A6148C7CD342FAF43B7D165DD2C36E06019F4
            (&local_14,param_2,__real_3f800000 - param_2,0.0,0.0,(MethodInfo *)0x0);
  VVar2.___y_2 = local_14.___m_Right_1;
  VVar2.___x_1 = local_14.___m_Left_0;
  VVar2.___z_3 = local_14.___m_Top_2;
  VVar2.___w_4 = local_14.___m_Bottom_3;
  Shader_SetGlobalVector_m241FC10C437094156CA0C6CC299A3F09404CE1F3(iVar1,VVar2,(MethodInfo *)0x0);
  fVar3 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616(1.0,0.2,param_2,(MethodInfo *)0x0);
  Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA(fVar3,(MethodInfo *)0x0);
  return;
}
