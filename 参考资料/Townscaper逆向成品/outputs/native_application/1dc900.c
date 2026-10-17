// RVA 0x1dc900 | Placemaker.Ui.Dim.<>c__DisplayClass11_0$$<Placemaker.Ui.UiMaster.IUiSetup.OnSetup>b__1
// PDB: U3CU3Ec__DisplayClass11_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__1_m55B42FE609CA73266AF551D1AD0033DFFCE6F9AE
// Body: [[101dc900, 101dc973]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10a39900 Color_Lerp_mC986D7F29103536908D76BD8FC59AA11DC33C197

void __cdecl
U3CU3Ec__DisplayClass11_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__1_m55B42FE609CA73266AF551D1AD0033DFFCE6F9AE
          (U3CU3Ec__DisplayClass11_0_t9081E9D92E6D5B7EA3A447DD584F333F49712933 *param_1,
          float param_2,MethodInfo *param_3)

{
  Dim_tDEE64760B7C8CB136E65987008BB21CB16FDA5C6 *pDVar1;
  Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 *pGVar2;
  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 *pCVar3;
  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 local_14;

  pDVar1 = param_1->___U3CU3E4__this_1;
  pGVar2 = param_1->___graphic_0;
  if (pDVar1 != (Dim_tDEE64760B7C8CB136E65987008BB21CB16FDA5C6 *)0x0) {
    pCVar3 = Color_Lerp_mC986D7F29103536908D76BD8FC59AA11DC33C197
                       (&local_14,pDVar1->___dimColor_8,pDVar1->___darkColor_9,param_2,
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
