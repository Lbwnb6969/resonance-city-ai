// RVA 0x8369e0 | Os.Utils.ExtraMath$$Intersects
// PDB: ExtraMath_Intersects_m8F0B8EF286A9F43A802D8770B0543E6C34E4644D
// Body: [[108369e0, 10836a19]]
// Direct callees:

bool __cdecl
ExtraMath_Intersects_m8F0B8EF286A9F43A802D8770B0543E6C34E4644D
          (int3x2_t46BD20B6395352D24BFF91DD4E49249C2171424F param_1,
          int3x2_t46BD20B6395352D24BFF91DD4E49249C2171424F param_2,MethodInfo *param_3)

{
  if ((((param_2.___c0_0.___x_0 <= param_1.___c1_1.___x_0) &&
       (param_1.___c0_0.___x_0 <= param_2.___c1_1.___x_0)) &&
      (param_2.___c0_0.___y_1 <= param_1.___c1_1.___y_1)) &&
     ((param_1.___c0_0.___y_1 <= param_2.___c1_1.___y_1 &&
      (param_2.___c0_0.___z_2 <= param_1.___c1_1.___z_2)))) {
    return param_1.___c0_0.___z_2 <= param_2.___c1_1.___z_2;
  }
  return false;
}
