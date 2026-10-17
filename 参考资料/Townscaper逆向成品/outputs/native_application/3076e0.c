// RVA 0x3076e0 | Placemaker.Ui.Toucher$$<OnGUI>g__DrawPos|16_0
// PDB: Toucher_U3COnGUIU3Eg__DrawPosU7C16_0_m95E6EAB0661EEB818082DE3E1AF6E0CE06C985F7
// Body: [[103076e0, 10307797]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 102c1f90 TMP_Offset__ctor_m015A6148C7CD342FAF43B7D165DD2C36E06019F4
// 1066c6a0 Texture2D_get_whiteTexture_m4ED96995BA1D42F7D2823BD9D18023CFE3C680A0
// 1102c080 GUI_DrawTexture_mDD0221088900E3F53BA7B8A03B9E5CD2E6FDD0F8

void __cdecl
Toucher_U3COnGUIU3Eg__DrawPosU7C16_0_m95E6EAB0661EEB818082DE3E1AF6E0CE06C985F7
          (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 param_1,float param_2,
          MethodInfo *param_3)

{
  Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 RVar1;
  Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *pTVar2;
  TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 local_14;

  if (DAT_1151c239 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
    DAT_1151c239 = '\x01';
  }
  local_14.___m_Left_0 = 0.0;
  local_14.___m_Right_1 = 0.0;
  local_14.___m_Top_2 = 0.0;
  local_14.___m_Bottom_3 = 0.0;
  TMP_Offset__ctor_m015A6148C7CD342FAF43B7D165DD2C36E06019F4
            (&local_14,param_1.___x_0 - param_2 * __real_3f000000,
             param_1.___y_1 - param_2 * __real_3f000000,param_2,param_2,(MethodInfo *)0x0);
  pTVar2 = Texture2D_get_whiteTexture_m4ED96995BA1D42F7D2823BD9D18023CFE3C680A0((MethodInfo *)0x0);
  if ((GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
  }
  RVar1.___m_YMin_1 = local_14.___m_Right_1;
  RVar1.___m_XMin_0 = local_14.___m_Left_0;
  RVar1.___m_Width_2 = local_14.___m_Top_2;
  RVar1.___m_Height_3 = local_14.___m_Bottom_3;
  GUI_DrawTexture_mDD0221088900E3F53BA7B8A03B9E5CD2E6FDD0F8
            (RVar1,(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)pTVar2,(MethodInfo *)0x0);
  return;
}
