// RVA 0x3e8550 | Placemaker.Ui.UpdateState$$SnapTo
// PDB: UpdateState_SnapTo_m09AD136615F50FE42FD5F48CADAC468357F42077
// Body: [[103e8550, 103e8583]]
// Direct callees:
// 103e8320 UpdateState_CheckUpdating_m7397FCA65C184C4D75A5428D3FB9902E94204D7E

UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C * __cdecl
UpdateState_SnapTo_m09AD136615F50FE42FD5F48CADAC468357F42077
          (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *param_1,float param_2,
          MethodInfo *param_3)

{
  param_1->____target_1 = param_2;
  if (param_1->____current_0 != param_2) {
    param_1->____current_0 = param_2;
    UpdateState_CheckUpdating_m7397FCA65C184C4D75A5428D3FB9902E94204D7E(param_1,(MethodInfo *)0x0);
  }
  return param_1;
}
