// RVA 0x418620 | Os.Utils.Intersections$$BoxBox
// PDB: Intersections_BoxBox_mE30031E3E39B2E3D49A7BD48D27A0355499811B7
// Body: [[10418620, 1041866b]]
// Direct callees:

bool __cdecl
Intersections_BoxBox_mE30031E3E39B2E3D49A7BD48D27A0355499811B7
          (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E param_1,
          Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E param_2,
          Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E param_3,
          Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E param_4,MethodInfo *param_5)

{
  if ((((param_3.___x_2 <= param_2.___x_2) && (param_1.___x_2 <= param_4.___x_2)) &&
      (param_3.___y_3 <= param_2.___y_3)) &&
     ((param_1.___y_3 <= param_4.___y_3 && (param_3.___z_4 <= param_2.___z_4)))) {
    return param_1.___z_4 <= param_4.___z_4;
  }
  return false;
}
