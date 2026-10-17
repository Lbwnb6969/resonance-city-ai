// RVA 0x1df1c0 | Placemaker.Ui.SaveMenu.<>c__DisplayClass44_0$$<Placemaker.Ui.UiMaster.IUiSetup.OnSetup>b__5
// PDB: U3CU3Ec__DisplayClass44_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__5_m6915F75350B6DB3139E1B291F8F1254906FB9F2D
// Body: [[101df1c0, 101df220]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1066ff00 Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F

void __cdecl
U3CU3Ec__DisplayClass44_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__5_m6915F75350B6DB3139E1B291F8F1254906FB9F2D
          (U3CU3Ec__DisplayClass44_0_tE7C4E51611B4F53D9BAB77C326867432E712C0BC *param_1,
          float param_2,MethodInfo *param_3)

{
  undefined1 auVar1 [12];
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar2;

  if (param_1->___U3CU3E4__this_0 != (SaveMenu_t5FABF5FD9F5391352EFA4B985C68F0D9E2D9E2E8 *)0x0) {
    pTVar2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                       ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                        param_1->___U3CU3E4__this_0,(MethodInfo *)0x0);
    if (pTVar2 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
      auVar1._4_8_ = 0;
      auVar1._0_4_ = param_2;
      Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC
                (pTVar2,(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E)(auVar1 << 0x40),
                 (MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
