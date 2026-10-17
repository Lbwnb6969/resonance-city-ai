// RVA 0xa0cbf0 | Placemaker.Ui.SideMenu$$Placemaker.Ui.UiMaster.IUiSetup.OnStart
// PDB: SideMenu_Placemaker_Ui_UiMaster_IUiSetup_OnStart_mA1C9114FCF12117B590470617D37CDA9543A79E7
// Body: [[10a0cbf0, 10a0cc22]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10661ea0 RectTransform_get_sizeDelta_mCFAE8C916280C173AB79BE32B910376E310D1C50

void __cdecl
SideMenu_Placemaker_Ui_UiMaster_IUiSetup_OnStart_mA1C9114FCF12117B590470617D37CDA9543A79E7
          (SideMenu_tD900EEBEF28F284D7567E3D721E0DA61C0F5D1DF *param_1,
          UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *param_2,MethodInfo *param_3)

{
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar1;

  if (param_1->___iconNotch_6 != (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)0x0) {
    VVar1 = RectTransform_get_sizeDelta_mCFAE8C916280C173AB79BE32B910376E310D1C50
                      (param_1->___iconNotch_6,(MethodInfo *)0x0);
    param_1->___iconNotchDefaultSize_19 = VVar1.___x_0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
