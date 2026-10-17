// RVA 0x836080 | Os.Utils.ExtraMath$$Center
// PDB: ExtraMath_Center_mA17CB832B764FF16B283E1D50FFD9BD6762D680E
// Body: [[10836080, 108360c1]]
// Direct callees:

int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 * __cdecl
ExtraMath_Center_mA17CB832B764FF16B283E1D50FFD9BD6762D680E
          (int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 *__return_storage_ptr__,
          int3x2_t46BD20B6395352D24BFF91DD4E49249C2171424F param_1,MethodInfo *param_2)

{
  __return_storage_ptr__->___x_0 = (param_1.___c0_0.___x_0 + param_1.___c1_1.___x_0) / 2;
  __return_storage_ptr__->___y_1 = (param_1.___c0_0.___y_1 + param_1.___c1_1.___y_1) / 2;
  __return_storage_ptr__->___z_2 = (param_1.___c0_0.___z_2 + param_1.___c1_1.___z_2) / 2;
  return __return_storage_ptr__;
}
