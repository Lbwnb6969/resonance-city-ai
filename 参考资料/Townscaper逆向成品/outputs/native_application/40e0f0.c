// RVA 0x40e0f0 | Os.Hex.HexMath$$RotateCW
// PDB: HexMath_RotateCW_m4869DF41303A2C6074160A090C43E1CD10CDC45A
// Body: [[1040e0f0, 1040e10e]]
// Direct callees:

int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 * __cdecl
HexMath_RotateCW_m4869DF41303A2C6074160A090C43E1CD10CDC45A
          (int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 *__return_storage_ptr__,
          int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 param_1,MethodInfo *param_2)

{
  __return_storage_ptr__->___x_0 = -param_1.___z_2;
  __return_storage_ptr__->___y_1 = -param_1.___x_0;
  __return_storage_ptr__->___z_2 = -param_1.___y_1;
  return __return_storage_ptr__;
}
