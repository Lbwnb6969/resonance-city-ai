// RVA 0x3076b0 | Placemaker.Ui.Toucher$$Placemaker.Ui.UiMaster.IUiSetup.OnStart
// PDB: Toucher_Placemaker_Ui_UiMaster_IUiSetup_OnStart_mFE3CC48C95E50DA491C5868BC0D3F588EB59832F
// Body: [[103076b0, 103076dd]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10a3aa50 Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B

void __cdecl
Toucher_Placemaker_Ui_UiMaster_IUiSetup_OnStart_mFE3CC48C95E50DA491C5868BC0D3F588EB59832F
          (Toucher_tE538137A40B930BDCF3263642CE03F76BF793CD7 *param_1,
          UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *param_2,MethodInfo *param_3)

{
  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *pGVar1;

  param_1->___master_6 = param_2;
  if ((param_2 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
     (param_2->___masterClicker_16 != (MasterClicker_t3CC2EEB38FD790B0557073353FD781FDE8459BED *)0x0
     )) {
    pGVar1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
                       ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                        param_2->___masterClicker_16,(MethodInfo *)0x0);
    param_1->___draggableArea_5 = pGVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
