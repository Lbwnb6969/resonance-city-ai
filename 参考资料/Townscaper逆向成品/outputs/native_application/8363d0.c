// RVA 0x8363d0 | Os.Utils.ExtraMath$$Encapsulate
// PDB: ExtraMath_Encapsulate_m3E293B7DFEBAEBE115B40E36EF21F04F419C5938
// Body: [[108363d0, 1083643e]]
// Direct callees:

int3x2_t46BD20B6395352D24BFF91DD4E49249C2171424F * __cdecl
ExtraMath_Encapsulate_m3E293B7DFEBAEBE115B40E36EF21F04F419C5938
          (int3x2_t46BD20B6395352D24BFF91DD4E49249C2171424F *__return_storage_ptr__,
          int3x2_t46BD20B6395352D24BFF91DD4E49249C2171424F param_1,
          int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 param_2,MethodInfo *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;

  iVar1 = param_2.___x_0;
  if (param_1.___c0_0.___x_0 <= param_2.___x_0) {
    iVar1 = param_1.___c0_0.___x_0;
  }
  iVar2 = param_2.___y_1;
  if (param_1.___c0_0.___y_1 <= param_2.___y_1) {
    iVar2 = param_1.___c0_0.___y_1;
  }
  iVar3 = param_2.___z_2;
  if (param_1.___c0_0.___z_2 <= param_2.___z_2) {
    iVar3 = param_1.___c0_0.___z_2;
  }
  if (param_2.___x_0 <= param_1.___c1_1.___x_0) {
    param_2.___x_0 = param_1.___c1_1.___x_0;
  }
  if (param_2.___y_1 <= param_1.___c1_1.___y_1) {
    param_2.___y_1 = param_1.___c1_1.___y_1;
  }
  if (param_2.___z_2 <= param_1.___c1_1.___z_2) {
    param_2.___z_2 = param_1.___c1_1.___z_2;
  }
  (__return_storage_ptr__->___c0_0).___x_0 = iVar1;
  (__return_storage_ptr__->___c0_0).___y_1 = iVar2;
  (__return_storage_ptr__->___c1_1).___x_0 = param_2.___x_0;
  (__return_storage_ptr__->___c1_1).___y_1 = param_2.___y_1;
  (__return_storage_ptr__->___c1_1).___z_2 = param_2.___z_2;
  (__return_storage_ptr__->___c0_0).___z_2 = iVar3;
  return __return_storage_ptr__;
}
