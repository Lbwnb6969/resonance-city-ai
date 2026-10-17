// RVA 0x807200 | Placemaker.Quads.Quad$$get_hexPosSum
// PDB: Quad_get_hexPosSum_m4512DD189AC5EB998A10A8BFE033ED3669979B31
// Body: [[10807200, 1080723b]]
// Direct callees:

int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 __cdecl
Quad_get_hexPosSum_m4512DD189AC5EB998A10A8BFE033ED3669979B31
          (Quad_t1E4E0FD4F68559FA20870CFBD24EB4162BEDBDAB *param_1,MethodInfo *param_2)

{
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar1;

  iVar1.___x_0 = (param_1->___v3_4).___x_0 +
                 (param_1->___v1_2).___x_0 + (param_1->___v0_1).___x_0 + (param_1->___v2_3).___x_0;
  iVar1.___y_1 = (param_1->___v3_4).___y_1 +
                 (param_1->___v2_3).___y_1 + (param_1->___v0_1).___y_1 + (param_1->___v1_2).___y_1;
  return iVar1;
}
