// RVA 0x836340 | Os.Utils.ExtraMath$$Contains
// PDB: ExtraMath_Contains_mEB34A28B14265492AB4388C9B8E87C210AF4ACC9
// Body: [[10836340, 108363a6]]
// Direct callees:

bool __cdecl
ExtraMath_Contains_mEB34A28B14265492AB4388C9B8E87C210AF4ACC9
          (int3x2_t46BD20B6395352D24BFF91DD4E49249C2171424F param_1,
          float3_t9500D105F273B3D86BD354142E891C48FFF9F71D param_2,MethodInfo *param_3)

{
  if (((((float)param_1.___c0_0.___x_0 <= param_2.___x_0) &&
       ((float)param_1.___c0_0.___y_1 <= param_2.___y_1)) &&
      ((float)param_1.___c0_0.___z_2 <= param_2.___z_2)) &&
     ((param_2.___x_0 <= (float)param_1.___c1_1.___x_0 &&
      (param_2.___y_1 <= (float)param_1.___c1_1.___y_1)))) {
    return param_2.___z_2 <= (float)param_1.___c1_1.___z_2;
  }
  return false;
}
