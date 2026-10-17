// RVA 0xa041c0 | Placemaker.Ui.SavingIndicator$$Placemaker.Ui.UiMaster.IUiSetup.OnStart
// PDB: SavingIndicator_Placemaker_Ui_UiMaster_IUiSetup_OnStart_mC14E683FEA94CEA90D3AB643B1DA29618C7EB3CD
// Body: [[10a041c0, 10a041e8]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10a36ea0 Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32

void __cdecl
SavingIndicator_Placemaker_Ui_UiMaster_IUiSetup_OnStart_mC14E683FEA94CEA90D3AB643B1DA29618C7EB3CD
          (SavingIndicator_t9457FAD85DE82B04815367EDBC5F215E699471B7 *param_1,
          UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *param_2,MethodInfo *param_3)

{
  if (param_1->___graphic_6 != (Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 *)0x0) {
    Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32
              ((Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 *)param_1->___graphic_6,false,
               (MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
