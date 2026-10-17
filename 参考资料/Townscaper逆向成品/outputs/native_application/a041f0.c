// RVA 0xa041f0 | Placemaker.Ui.SavingIndicator$$<Placemaker.Ui.UiMaster.IUiSetup.OnSetup>b__4_0
// PDB: SavingIndicator_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__4_0_m8D7D3F471FC2EC3875E8EEB51D0EE6D5E05231FB
// Body: [[10a041f0, 10a04213]]
// Direct callees:
// 10a36ea0 Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32

void __cdecl
SavingIndicator_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__4_0_m8D7D3F471FC2EC3875E8EEB51D0EE6D5E05231FB
          (SavingIndicator_t9457FAD85DE82B04815367EDBC5F215E699471B7 *param_1,int param_2,
          int param_3,MethodInfo *param_4)

{
  param_1->___on_7 = 0 < param_3;
  if (0 < param_3) {
    Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32
              ((Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 *)param_1,true,(MethodInfo *)0x0
              );
  }
  return;
}
