// RVA 0x806380 | Placemaker.Props.PropWireFlagMesh$$.ctor
// PDB: PropWireFlagMesh__ctor_mA264AA275A583C2B9B306874FEA5E6BD56F945D3
// Body: [[10806380, 108063a9]]
// Direct callees:
// 10675010 Vector4_get_zero_m9E807FEBC8B638914DF4A0BA87C0BD95A19F5200
// 10a36df0 Behaviour__ctor_mCACD3614226521EA607B0F3640C0FAC7EACCBCE0

void __cdecl
PropWireFlagMesh__ctor_mA264AA275A583C2B9B306874FEA5E6BD56F945D3
          (PropWireFlagMesh_tF947C4B731B76D44E46A94372A9502CB5F4822C5 *param_1,MethodInfo *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *pVVar4;
  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 local_14;

  pVVar4 = Vector4_get_zero_m9E807FEBC8B638914DF4A0BA87C0BD95A19F5200(&local_14,(MethodInfo *)0x0);
  fVar1 = pVVar4->___y_2;
  fVar2 = pVVar4->___z_3;
  fVar3 = pVVar4->___w_4;
  (param_1->___uv_4).___x_1 = pVVar4->___x_1;
  (param_1->___uv_4).___y_2 = fVar1;
  (param_1->___uv_4).___z_3 = fVar2;
  (param_1->___uv_4).___w_4 = fVar3;
  Behaviour__ctor_mCACD3614226521EA607B0F3640C0FAC7EACCBCE0
            ((Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 *)param_1,(MethodInfo *)0x0);
  return;
}
