// RVA 0x9c8d40 | Placemaker.Ui.Toucher.<>c__DisplayClass15_0$$<Placemaker.Ui.UiMaster.IUiSetup.OnSetup>b__0
// PDB: U3CU3Ec__DisplayClass15_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__0_m9E3C25000D5982105C24644A27D4A5B80BD886D0
// Body: [[109c8d40, 109c8de7]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10306220 Toucher_EndRotation_mB89A777581B5DF43B94E4617FF7E7DF26E33F8B5
// 103d47b0 MasterClicker_TouchUp_m78BBEBA1E7393FDADE41428C343A1D6B7E61940D
// 10a36e40 Behaviour_get_enabled_m08077AB79934634E1EAE909C2B482BEF4C15A800
// 10a36ea0 Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32

void __cdecl
U3CU3Ec__DisplayClass15_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__0_m9E3C25000D5982105C24644A27D4A5B80BD886D0
          (U3CU3Ec__DisplayClass15_0_tB60BC81E9228583B7D49B37C16F3AB3FE398BEAB *param_1,int param_2,
          int param_3,MethodInfo *param_4)

{
  int iVar1;
  MasterClicker_t3CC2EEB38FD790B0557073353FD781FDE8459BED *pMVar2;
  bool bVar3;
  Toucher_tE538137A40B930BDCF3263642CE03F76BF793CD7 *pTVar4;

  pTVar4 = param_1->___U3CU3E4__this_0;
  if ((param_3 & 0x78dU) == 0) {
    if (pTVar4 != (Toucher_tE538137A40B930BDCF3263642CE03F76BF793CD7 *)0x0) {
      Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32
                ((Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 *)pTVar4,true,
                 (MethodInfo *)0x0);
      return;
    }
  }
  else if (pTVar4 != (Toucher_tE538137A40B930BDCF3263642CE03F76BF793CD7 *)0x0) {
    bVar3 = Behaviour_get_enabled_m08077AB79934634E1EAE909C2B482BEF4C15A800
                      ((Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 *)pTVar4,
                       (MethodInfo *)0x0);
    if (!bVar3) {
      return;
    }
    pTVar4 = param_1->___U3CU3E4__this_0;
    if (pTVar4 != (Toucher_tE538137A40B930BDCF3263642CE03F76BF793CD7 *)0x0) {
      iVar1 = pTVar4->___state_8;
      if (iVar1 != 0) {
        if (iVar1 == 0x10) {
          if ((param_1->___master_1 == (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) ||
             (pMVar2 = param_1->___master_1->___masterClicker_16,
             pMVar2 == (MasterClicker_t3CC2EEB38FD790B0557073353FD781FDE8459BED *)0x0))
          goto LAB_109c8de3;
          MasterClicker_TouchUp_m78BBEBA1E7393FDADE41428C343A1D6B7E61940D
                    (pMVar2,false,(MethodInfo *)0x0);
        }
        else if (iVar1 == 1) {
          Toucher_EndRotation_mB89A777581B5DF43B94E4617FF7E7DF26E33F8B5(pTVar4,(MethodInfo *)0x0);
        }
        if (param_1->___U3CU3E4__this_0 == (Toucher_tE538137A40B930BDCF3263642CE03F76BF793CD7 *)0x0)
        goto LAB_109c8de3;
        param_1->___U3CU3E4__this_0->___state_8 = 0;
        pTVar4 = param_1->___U3CU3E4__this_0;
      }
      if (pTVar4 != (Toucher_tE538137A40B930BDCF3263642CE03F76BF793CD7 *)0x0) {
        Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32
                  ((Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 *)pTVar4,false,
                   (MethodInfo *)0x0);
        return;
      }
    }
  }
LAB_109c8de3:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
