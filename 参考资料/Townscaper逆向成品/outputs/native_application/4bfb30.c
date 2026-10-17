// RVA 0x4bfb30 | Placemaker.Ui.CreditsMenu$$<Placemaker.Ui.UiMaster.IUiSetup.OnSetup>b__11_1
// PDB: CreditsMenu_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__11_1_m2458862F182FC2B5C2847DD2F8D7DCD654D52F29
// Body: [[104bfb30, 104bfb50]]
// Direct callees:
// 101d1420 AutoScroll_ResetTimer_m8C1E2E380D89E28F1AAA57A4DE2CF559FB482886

void __cdecl
CreditsMenu_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__11_1_m2458862F182FC2B5C2847DD2F8D7DCD654D52F29
          (CreditsMenu_tE101B90DEBA1E200189C86C0CFA340BA4872BB12 *param_1,MethodInfo *param_2)

{
  (param_1->___autoScroll_10).___U3CisActiveU3Ek__BackingField_0 = true;
  AutoScroll_ResetTimer_m8C1E2E380D89E28F1AAA57A4DE2CF559FB482886
            (&param_1->___autoScroll_10,10.0,(MethodInfo *)0x0);
  return;
}
