// RVA 0x3e9560 | Placemaker.Ui.UpdateState$$set_current
// PDB: UpdateState_set_current_m4572798247E29F668F5B2D3BDDFC6BC78D302BE5
// Body: [[103e9560, 103e958a]]
// Direct callees:
// 103e8320 UpdateState_CheckUpdating_m7397FCA65C184C4D75A5428D3FB9902E94204D7E

void __cdecl
UpdateState_set_current_m4572798247E29F668F5B2D3BDDFC6BC78D302BE5
          (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *param_1,float param_2,
          MethodInfo *param_3)

{
  if (param_1->____current_0 != param_2) {
    param_1->____current_0 = param_2;
    UpdateState_CheckUpdating_m7397FCA65C184C4D75A5428D3FB9902E94204D7E(param_1,(MethodInfo *)0x0);
  }
  return;
}
