// RVA 0x836cb0 | Os.Utils.ExtraMath$$OnEdge
// PDB: ExtraMath_OnEdge_mE45946122DEEB1A1C0BA0E937223C96D8EC9F6EE
// Body: [[10836cb0, 10836d27]]
// Direct callees:

bool __cdecl
ExtraMath_OnEdge_mE45946122DEEB1A1C0BA0E937223C96D8EC9F6EE
          (int3x2_t46BD20B6395352D24BFF91DD4E49249C2171424F param_1,
          int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 param_2,MethodInfo *param_3)

{
  if ((((param_2.___x_0 != param_1.___c0_0.___x_0) && (param_2.___x_0 != param_1.___c1_1.___x_0)) ||
      (param_2.___y_1 < param_1.___c0_0.___y_1)) ||
     (((param_1.___c1_1.___y_1 < param_2.___y_1 || (param_2.___z_2 < param_1.___c0_0.___z_2)) ||
      (param_1.___c1_1.___z_2 < param_2.___z_2)))) {
    if ((param_2.___x_0 < param_1.___c0_0.___x_0) || (param_1.___c1_1.___x_0 < param_2.___x_0)) {
      return false;
    }
    if ((((param_2.___y_1 != param_1.___c0_0.___y_1) && (param_2.___y_1 != param_1.___c1_1.___y_1))
        || (param_2.___z_2 < param_1.___c0_0.___z_2)) || (param_1.___c1_1.___z_2 < param_2.___z_2))
    {
      if (param_1.___c1_1.___x_0 < param_2.___x_0) {
        return false;
      }
      if (param_2.___y_1 < param_1.___c0_0.___y_1) {
        return false;
      }
      if (param_1.___c1_1.___y_1 < param_2.___y_1) {
        return false;
      }
      if (param_2.___z_2 != param_1.___c0_0.___z_2) {
        return param_2.___z_2 == param_1.___c1_1.___z_2;
      }
    }
  }
  return true;
}
