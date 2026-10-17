// RVA 0x806aa0 | Placemaker.Quads.Quad$$ContainsVert
// PDB: Quad_ContainsVert_m79B7819458561993C6823FD8A99DD1E85018DF5C
// Body: [[10806aa0, 10806ae3]]
// Direct callees:

bool __cdecl
Quad_ContainsVert_m79B7819458561993C6823FD8A99DD1E85018DF5C
          (Quad_t1E4E0FD4F68559FA20870CFBD24EB4162BEDBDAB *param_1,
          int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 param_2,MethodInfo *param_3)

{
  if ((((param_2.___x_0 != (param_1->___v0_1).___x_0) ||
       (param_2.___y_1 != (param_1->___v0_1).___y_1)) &&
      ((param_2.___x_0 != (param_1->___v1_2).___x_0 || (param_2.___y_1 != (param_1->___v1_2).___y_1)
       ))) && ((param_2.___x_0 != (param_1->___v2_3).___x_0 ||
               (param_2.___y_1 != (param_1->___v2_3).___y_1)))) {
    if (param_2.___x_0 != (param_1->___v3_4).___x_0) {
      return false;
    }
    return param_2.___y_1 == (param_1->___v3_4).___y_1;
  }
  return true;
}
