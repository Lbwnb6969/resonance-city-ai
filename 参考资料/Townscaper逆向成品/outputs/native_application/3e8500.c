// RVA 0x3e8500 | Placemaker.Ui.UpdateState$$SetCurrentOrTarget
// PDB: UpdateState_SetCurrentOrTarget_m9D15321C43FEC10844F06C0AE89604AC0F0B6843
// Body: [[103e8500, 103e8548]]
// Direct callees:
// 103e8320 UpdateState_CheckUpdating_m7397FCA65C184C4D75A5428D3FB9902E94204D7E
// 103e9610 UpdateState_set_target_mE17720317B95AD21B3A598B430573508DBB96BE4

void __cdecl
UpdateState_SetCurrentOrTarget_m9D15321C43FEC10844F06C0AE89604AC0F0B6843
          (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *param_1,float param_2,
          MethodInfo *param_3)

{
  if ((param_1->___isUpdating_2 != false) && (param_1->____current_0 != param_2)) {
    param_1->____current_0 = param_2;
    UpdateState_CheckUpdating_m7397FCA65C184C4D75A5428D3FB9902E94204D7E(param_1,(MethodInfo *)0x0);
  }
  UpdateState_set_target_mE17720317B95AD21B3A598B430573508DBB96BE4
            (param_1,param_2,(MethodInfo *)0x0);
  return;
}
