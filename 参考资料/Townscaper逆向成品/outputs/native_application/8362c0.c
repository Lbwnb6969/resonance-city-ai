// RVA 0x8362c0 | Os.Utils.ExtraMath$$Contains
// PDB: ExtraMath_Contains_m4E87C578D0FE1625FF04FD3F3242098DD6B32994
// Body: [[108362c0, 108362f9]]
// Direct callees:

bool __cdecl
ExtraMath_Contains_m4E87C578D0FE1625FF04FD3F3242098DD6B32994
          (int3x2_t46BD20B6395352D24BFF91DD4E49249C2171424F param_1,
          int3x2_t46BD20B6395352D24BFF91DD4E49249C2171424F param_2,MethodInfo *param_3)

{
  if ((((param_1.___c0_0.___x_0 <= param_2.___c0_0.___x_0) &&
       (param_1.___c0_0.___y_1 <= param_2.___c0_0.___y_1)) &&
      (param_1.___c0_0.___z_2 <= param_2.___c0_0.___z_2)) &&
     ((param_2.___c1_1.___x_0 <= param_1.___c1_1.___x_0 &&
      (param_2.___c1_1.___y_1 <= param_1.___c1_1.___y_1)))) {
    return param_2.___c1_1.___z_2 <= param_1.___c1_1.___z_2;
  }
  return false;
}
