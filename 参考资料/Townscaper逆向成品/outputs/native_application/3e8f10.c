// RVA 0x3e8f10 | Placemaker.Ui.UpdateState$$Update
// PDB: UpdateState_Update_m3CB82BC358B3DDE8EF47FD8C31CDC6ACD1B368E1
// Body: [[103e8f10, 103e8f98]]
// Direct callees:
// 10196230 _libm_sse2_exp_precise
// 103e8320 UpdateState_CheckUpdating_m7397FCA65C184C4D75A5428D3FB9902E94204D7E
// 1066d9d0 Time_get_unscaledDeltaTime_m2C153F1E5C77C6AF655054BC6C76D0C334C0DC84
// 10a43e90 Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616

void __cdecl
UpdateState_Update_m3CB82BC358B3DDE8EF47FD8C31CDC6ACD1B368E1
          (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *param_1,MethodInfo *param_2)

{
  double dVar1;
  float fVar2;

  if (param_1->___isUpdating_2 != false) {
    fVar2 = Time_get_unscaledDeltaTime_m2C153F1E5C77C6AF655054BC6C76D0C334C0DC84((MethodInfo *)0x0);
    dVar1 = (double)((float)((uint)fVar2 ^ __xmm_80000000800000008000000080000000) *
                    param_1->___speed_7);
    _libm_sse2_exp_precise();
    fVar2 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616
                      (param_1->____target_1,param_1->____current_0,(float)dVar1,(MethodInfo *)0x0);
    if (param_1->____current_0 != fVar2) {
      param_1->____current_0 = fVar2;
      UpdateState_CheckUpdating_m7397FCA65C184C4D75A5428D3FB9902E94204D7E(param_1,(MethodInfo *)0x0)
      ;
    }
  }
  return;
}
