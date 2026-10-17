// RVA 0x40e070 | Os.Hex.HexMath$$RotateCCW
// PDB: HexMath_RotateCCW_m56AC24E9571527F9085557A17066FBF58E1F1AF4
// Body: [[1040e070, 1040e08e]]
// Direct callees:

int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 * __cdecl
HexMath_RotateCCW_m56AC24E9571527F9085557A17066FBF58E1F1AF4
          (int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 *__return_storage_ptr__,
          int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 param_1,MethodInfo *param_2)

{
  __return_storage_ptr__->___x_0 = -param_1.___y_1;
  __return_storage_ptr__->___y_1 = -param_1.___z_2;
  __return_storage_ptr__->___z_2 = -param_1.___x_0;
  return __return_storage_ptr__;
}
