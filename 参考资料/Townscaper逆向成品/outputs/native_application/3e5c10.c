// RVA 0x3e5c10 | Placemaker.Ui.UiMaster$$GetSmoothAxis2D
// PDB: UiMaster_GetSmoothAxis2D_m34BBE48972B315AF58B4E3D1101F8D1FB11F0C18
// Body: [[103e5c10, 103e5d26]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10672b80 Vector2_get_magnitude_mD30DB8EB73C4A5CD395745AE1CA1C38DC61D2E85
// 10672d70 Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828
// 10a43d20 Mathf_InverseLerp_mCD2E6F9ADCFFB40EB7D3086E444DF2C702F9C29B
// 10f1b180 Player_GetAxis2D_m3BF4976E5A5736D3A31A01338F998ABB7D81191A

Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 __cdecl
UiMaster_GetSmoothAxis2D_m34BBE48972B315AF58B4E3D1101F8D1FB11F0C18
          (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *param_1,String_t *param_2,
          String_t *param_3,MethodInfo *param_4)

{
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar1;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar2;
  float fVar3;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 local_1c;
  float local_14;
  float local_10;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 local_c;

  if (param_1->___player_43 == (Player_t64E5862AF574099CB9D64941CF5AAFD551EDA05E *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_null_reference_exception();
  }
  VVar1 = Player_GetAxis2D_m3BF4976E5A5736D3A31A01338F998ABB7D81191A
                    (param_1->___player_43,param_2,param_3,(MethodInfo *)0x0);
  local_c.___x_0 = local_14;
  local_10 = VVar1.___y_1;
  local_c.___y_1 = local_10;
  VVar2 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828((MethodInfo *)0x0);
  local_14 = VVar1.___x_0;
  local_1c.___y_1 = VVar2.___y_1;
  if (__real_2edbe6fe <=
      (local_10 - local_1c.___y_1) * (local_10 - local_1c.___y_1) +
      (local_14 - local_1c.___x_0) * (local_14 - local_1c.___x_0)) {
    fVar3 = Vector2_get_magnitude_mD30DB8EB73C4A5CD395745AE1CA1C38DC61D2E85
                      (&local_c,(MethodInfo *)0x0);
    local_c.___x_0 = local_c.___x_0 / fVar3;
    local_c.___y_1 = local_c.___y_1 / fVar3;
    fVar3 = Mathf_InverseLerp_mCD2E6F9ADCFFB40EB7D3086E444DF2C702F9C29B
                      (0.1,1.0,fVar3,(MethodInfo *)0x0);
    local_1c.___y_1 = local_c.___y_1 * fVar3 * fVar3;
    local_1c.___x_0 = local_c.___x_0 * fVar3 * fVar3;
    return local_1c;
  }
  VVar1 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828((MethodInfo *)0x0);
  return VVar1;
}
