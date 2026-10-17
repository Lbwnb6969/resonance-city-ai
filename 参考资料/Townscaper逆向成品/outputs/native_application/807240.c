// RVA 0x807240 | Placemaker.Quads.Quad$$get_planePos
// PDB: Quad_get_planePos_mB50996FEE1C86377D56D008237455657B38EB3DD
// Body: [[10807240, 10807294]]
// Direct callees:

float2_tCB7B81181978EDE17722C533A55E345D9A413274 __cdecl
Quad_get_planePos_mB50996FEE1C86377D56D008237455657B38EB3DD
          (Quad_t1E4E0FD4F68559FA20870CFBD24EB4162BEDBDAB *param_1,MethodInfo *param_2)

{
  float2_tCB7B81181978EDE17722C533A55E345D9A413274 fVar1;

  fVar1.___y_1 = ((param_1->___p0_5).___y_1 + (param_1->___p1_6).___y_1 + (param_1->___p2_7).___y_1
                 + (param_1->___p3_8).___y_1) * __real_3e800000;
  fVar1.___x_0 = ((param_1->___p1_6).___x_0 + (param_1->___p0_5).___x_0 + (param_1->___p2_7).___x_0
                 + (param_1->___p3_8).___x_0) * __real_3e800000;
  return fVar1;
}
