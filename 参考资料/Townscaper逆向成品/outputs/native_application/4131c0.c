// RVA 0x4131c0 | Placemaker.HoverData$$get_srcHexPosHeight
// PDB: HoverData_get_srcHexPosHeight_m56D3E07396E782BC6C87ED5F0666B54ED11773CB
// Body: [[104131c0, 104131e0]]
// Direct callees:

int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 * __cdecl
HoverData_get_srcHexPosHeight_m56D3E07396E782BC6C87ED5F0666B54ED11773CB
          (int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 *__return_storage_ptr__,
          HoverData_t14F4E30D60384FB7DB47D81775CB2091DE7C9D55 *param_1,MethodInfo *param_2)

{
  int iVar1;
  int iVar2;

  iVar1 = (param_1->___srcVert_7).___hexPos_0.___x_0;
  __return_storage_ptr__->___y_1 = (param_1->___srcVert_7).___hexPos_0.___y_1;
  iVar2 = param_1->___srcHeight_10;
  __return_storage_ptr__->___x_0 = iVar1;
  __return_storage_ptr__->___z_2 = iVar2;
  return __return_storage_ptr__;
}
