// RVA 0x1de360 | Placemaker.Ui.ScreenshotButtons.<>c__DisplayClass20_1$$<Placemaker.Ui.UiMaster.IUiSetup.OnSetup>b__3
// PDB: U3CU3Ec__DisplayClass20_1_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__3_mE181D2E7C1E3CFDFB5F00351D4DF6DE7C060B0BA
// Body: [[101de360, 101de40b]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 102c1f90 TMP_Offset__ctor_m015A6148C7CD342FAF43B7D165DD2C36E06019F4
// 10a39900 Color_Lerp_mC986D7F29103536908D76BD8FC59AA11DC33C197

void __cdecl
U3CU3Ec__DisplayClass20_1_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__3_mE181D2E7C1E3CFDFB5F00351D4DF6DE7C060B0BA
          (U3CU3Ec__DisplayClass20_1_t75E9B92044FD680CE97D5A76B5B84380466E2C48 *param_1,
          float param_2,MethodInfo *param_3)

{
  Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 *pGVar1;
  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 CVar2;
  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 CVar3;
  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 *pCVar4;
  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 local_24;
  TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 local_14;

  local_24.___r_0 = (param_1->___defaultInputColor_1).___r_0;
  local_24.___g_1 = (param_1->___defaultInputColor_1).___g_1;
  local_24.___b_2 = (param_1->___defaultInputColor_1).___b_2;
  local_24.___a_3 = (param_1->___defaultInputColor_1).___a_3;
  pGVar1 = param_1->___pathGraphic_3;
  local_14.___m_Left_0 = 0.0;
  local_14.___m_Right_1 = 0.0;
  local_14.___m_Top_2 = 0.0;
  local_14.___m_Bottom_3 = 0.0;
  TMP_Offset__ctor_m015A6148C7CD342FAF43B7D165DD2C36E06019F4
            (&local_14,1.0,0.0,0.0,1.0,(MethodInfo *)0x0);
  CVar2.___g_1 = local_24.___g_1;
  CVar2.___r_0 = local_24.___r_0;
  CVar2.___b_2 = local_24.___b_2;
  CVar2.___a_3 = local_24.___a_3;
  CVar3.___g_1 = local_14.___m_Right_1;
  CVar3.___r_0 = local_14.___m_Left_0;
  CVar3.___b_2 = local_14.___m_Top_2;
  CVar3.___a_3 = local_14.___m_Bottom_3;
  pCVar4 = Color_Lerp_mC986D7F29103536908D76BD8FC59AA11DC33C197
                     (&local_24,CVar2,CVar3,param_2,(MethodInfo *)0x0);
  if (pGVar1 != (Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 *)0x0) {
    (**(code **)(pGVar1->_padding_ + 0x174))
              (pGVar1,pCVar4->___r_0,pCVar4->___g_1,pCVar4->___b_2,pCVar4->___a_3,
               *(undefined4 *)(pGVar1->_padding_ + 0x178));
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
