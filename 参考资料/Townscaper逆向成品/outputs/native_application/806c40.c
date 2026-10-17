// RVA 0x806c40 | Placemaker.Quads.Quad$$IsValid
// PDB: Quad_IsValid_mAFF3A31F94E7A320D6392C9E04051004DB4EA8C0
// Body: [[10806c40, 10806c5c]]
// Direct callees:

bool __cdecl
Quad_IsValid_mAFF3A31F94E7A320D6392C9E04051004DB4EA8C0
          (Quad_t1E4E0FD4F68559FA20870CFBD24EB4162BEDBDAB *param_1,MethodInfo *param_2)

{
  if ((param_1->___v0_1).___x_0 != (param_1->___v1_2).___x_0) {
    return true;
  }
  return (param_1->___v0_1).___y_1 != (param_1->___v1_2).___y_1;
}
