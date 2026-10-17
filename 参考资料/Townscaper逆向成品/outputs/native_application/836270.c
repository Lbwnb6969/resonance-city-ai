// RVA 0x836270 | Os.Utils.ExtraMath$$ClosestPoint
// PDB: ExtraMath_ClosestPoint_mC51805C60CC2F43BB1C4D3CE88312BD938C293B1
// Body: [[10836270, 108362be]]
// Direct callees:

int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 * __cdecl
ExtraMath_ClosestPoint_mC51805C60CC2F43BB1C4D3CE88312BD938C293B1
          (int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 *__return_storage_ptr__,
          int3x2_t46BD20B6395352D24BFF91DD4E49249C2171424F param_1,
          int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 param_2,MethodInfo *param_3)

{
  if (param_1.___c0_0.___y_1 <= param_2.___y_1) {
    param_1.___c0_0.___y_1 = param_2.___y_1;
  }
  if (param_1.___c0_0.___z_2 <= param_2.___z_2) {
    param_1.___c0_0.___z_2 = param_2.___z_2;
  }
  if (param_1.___c0_0.___x_0 <= param_2.___x_0) {
    param_1.___c0_0.___x_0 = param_2.___x_0;
  }
  if (param_1.___c1_1.___x_0 < param_1.___c0_0.___x_0) {
    param_1.___c0_0.___x_0 = param_1.___c1_1.___x_0;
  }
  if (param_1.___c1_1.___y_1 < param_1.___c0_0.___y_1) {
    param_1.___c0_0.___y_1 = param_1.___c1_1.___y_1;
  }
  if (param_1.___c1_1.___z_2 < param_1.___c0_0.___z_2) {
    param_1.___c0_0.___z_2 = param_1.___c1_1.___z_2;
  }
  __return_storage_ptr__->___x_0 = param_1.___c0_0.___x_0;
  __return_storage_ptr__->___y_1 = param_1.___c0_0.___y_1;
  __return_storage_ptr__->___z_2 = param_1.___c0_0.___z_2;
  return __return_storage_ptr__;
}
