// RVA 0x3e8590 | Placemaker.Ui.UpdateState$$Snap
// PDB: UpdateState_Snap_m4E46213E0C57037828811FB0C271E6FB3CD3E632
// Body: [[103e8590, 103e85be]]
// Direct callees:
// 103e8320 UpdateState_CheckUpdating_m7397FCA65C184C4D75A5428D3FB9902E94204D7E

UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C * __cdecl
UpdateState_Snap_m4E46213E0C57037828811FB0C271E6FB3CD3E632
          (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *param_1,MethodInfo *param_2)

{
  if (param_1->____current_0 != param_1->____target_1) {
    param_1->____current_0 = param_1->____target_1;
    UpdateState_CheckUpdating_m7397FCA65C184C4D75A5428D3FB9902E94204D7E(param_1,(MethodInfo *)0x0);
  }
  return param_1;
}
