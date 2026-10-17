// RVA 0x836440 | Os.Utils.ExtraMath$$Encapsulate
// PDB: ExtraMath_Encapsulate_mBF71E8D2A2612AF82D645A5AEB46BC7125BB6838
// Body: [[10836440, 108364ad]]
// Direct callees:

int3x2_t46BD20B6395352D24BFF91DD4E49249C2171424F * __cdecl
ExtraMath_Encapsulate_mBF71E8D2A2612AF82D645A5AEB46BC7125BB6838
          (int3x2_t46BD20B6395352D24BFF91DD4E49249C2171424F *__return_storage_ptr__,
          int3x2_t46BD20B6395352D24BFF91DD4E49249C2171424F param_1,
          int3x2_t46BD20B6395352D24BFF91DD4E49249C2171424F param_2,MethodInfo *param_3)

{
  if (param_2.___c0_0.___x_0 <= param_1.___c0_0.___x_0) {
    param_1.___c0_0.___x_0 = param_2.___c0_0.___x_0;
  }
  if (param_2.___c0_0.___y_1 <= param_1.___c0_0.___y_1) {
    param_1.___c0_0.___y_1 = param_2.___c0_0.___y_1;
  }
  if (param_2.___c0_0.___z_2 <= param_1.___c0_0.___z_2) {
    param_1.___c0_0.___z_2 = param_2.___c0_0.___z_2;
  }
  if (param_1.___c1_1.___x_0 <= param_2.___c1_1.___x_0) {
    param_1.___c1_1.___x_0 = param_2.___c1_1.___x_0;
  }
  (__return_storage_ptr__->___c0_0).___x_0 = param_1.___c0_0.___x_0;
  (__return_storage_ptr__->___c0_0).___y_1 = param_1.___c0_0.___y_1;
  if (param_1.___c1_1.___y_1 <= param_2.___c1_1.___y_1) {
    param_1.___c1_1.___y_1 = param_2.___c1_1.___y_1;
  }
  if (param_1.___c1_1.___z_2 <= param_2.___c1_1.___z_2) {
    param_1.___c1_1.___z_2 = param_2.___c1_1.___z_2;
  }
  (__return_storage_ptr__->___c1_1).___x_0 = param_1.___c1_1.___x_0;
  (__return_storage_ptr__->___c1_1).___y_1 = param_1.___c1_1.___y_1;
  (__return_storage_ptr__->___c0_0).___z_2 = param_1.___c0_0.___z_2;
  (__return_storage_ptr__->___c1_1).___z_2 = param_1.___c1_1.___z_2;
  return __return_storage_ptr__;
}
