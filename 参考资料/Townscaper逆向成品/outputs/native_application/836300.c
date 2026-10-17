// RVA 0x836300 | Os.Utils.ExtraMath$$Contains
// PDB: ExtraMath_Contains_m5605C45E9F053FEF949FD7FFBFE244B35E3D0AE1
// Body: [[10836300, 10836330]]
// Direct callees:

bool __cdecl
ExtraMath_Contains_m5605C45E9F053FEF949FD7FFBFE244B35E3D0AE1
          (int3x2_t46BD20B6395352D24BFF91DD4E49249C2171424F param_1,
          int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 param_2,MethodInfo *param_3)

{
  if ((((param_1.___c0_0.___x_0 <= param_2.___x_0) && (param_1.___c0_0.___y_1 <= param_2.___y_1)) &&
      (param_1.___c0_0.___z_2 <= param_2.___z_2)) &&
     ((param_2.___x_0 <= param_1.___c1_1.___x_0 && (param_2.___y_1 <= param_1.___c1_1.___y_1)))) {
    return param_2.___z_2 <= param_1.___c1_1.___z_2;
  }
  return false;
}
