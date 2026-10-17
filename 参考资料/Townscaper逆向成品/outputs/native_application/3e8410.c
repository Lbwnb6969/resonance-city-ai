// RVA 0x3e8410 | Placemaker.Ui.UpdateState$$Follow
// PDB: UpdateState_Follow_m5F1417FB4DF3429B9E518D454F8342C9F7737E77
// Body: [[103e8410, 103e8470]]
// Direct callees:
// 103e8320 UpdateState_CheckUpdating_m7397FCA65C184C4D75A5428D3FB9902E94204D7E
// 103e9610 UpdateState_set_target_mE17720317B95AD21B3A598B430573508DBB96BE4

UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C * __cdecl
UpdateState_Follow_m5F1417FB4DF3429B9E518D454F8342C9F7737E77
          (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *param_1,float param_2,
          MethodInfo *param_3)

{
  if (param_1->____target_1 != param_1->____current_0) {
    UpdateState_set_target_mE17720317B95AD21B3A598B430573508DBB96BE4
              (param_1,param_2,(MethodInfo *)0x0);
    return param_1;
  }
  UpdateState_set_target_mE17720317B95AD21B3A598B430573508DBB96BE4
            (param_1,param_2,(MethodInfo *)0x0);
  if (param_1->____current_0 != param_2) {
    param_1->____current_0 = param_2;
    UpdateState_CheckUpdating_m7397FCA65C184C4D75A5428D3FB9902E94204D7E(param_1,(MethodInfo *)0x0);
  }
  return param_1;
}
