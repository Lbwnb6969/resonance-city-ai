// RVA 0x1e0590 | Placemaker.Ui.DisableableButton.<>c__DisplayClass7_0$$<Placemaker.Ui.UiMaster.IUiSetup.OnSetup>b__2
// PDB: U3CU3Ec__DisplayClass7_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__2_m301E6D60D3156B77A450E566C57F1B32F1AA5970
// Body: [[101e0590, 101e0603]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10a39900 Color_Lerp_mC986D7F29103536908D76BD8FC59AA11DC33C197

void __cdecl
U3CU3Ec__DisplayClass7_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__2_m301E6D60D3156B77A450E566C57F1B32F1AA5970
          (U3CU3Ec__DisplayClass7_0_t2D2D5F44546698252BBD5E1151B6BEC677BE60FF *param_1,float param_2
          ,MethodInfo *param_3)

{
  DisableableButton_t1FFBF591208239F608B0F9F3FADEFF79EA469513 *pDVar1;
  Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 *pGVar2;
  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 *pCVar3;
  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 local_14;

  pDVar1 = param_1->___U3CU3E4__this_0;
  if (pDVar1 != (DisableableButton_t1FFBF591208239F608B0F9F3FADEFF79EA469513 *)0x0) {
    pGVar2 = pDVar1->___background_6;
    pCVar3 = Color_Lerp_mC986D7F29103536908D76BD8FC59AA11DC33C197
                       (&local_14,pDVar1->___bgColor0_8,pDVar1->___bgColor1_9,param_2,
                        (MethodInfo *)0x0);
    if (pGVar2 != (Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 *)0x0) {
      (**(code **)(pGVar2->_padding_ + 0x174))
                (pGVar2,pCVar3->___r_0,pCVar3->___g_1,pCVar3->___b_2,pCVar3->___a_3,
                 *(undefined4 *)(pGVar2->_padding_ + 0x178));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
