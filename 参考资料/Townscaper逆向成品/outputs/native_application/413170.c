// RVA 0x413170 | Placemaker.HoverData$$get_dstHexPosHeight
// PDB: HoverData_get_dstHexPosHeight_mECF657F999B37E4331678231BD5F1C90EAD7A3E4
// Body: [[10413170, 10413196]]
// Direct callees:

int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 * __cdecl
HoverData_get_dstHexPosHeight_mECF657F999B37E4331678231BD5F1C90EAD7A3E4
          (int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 *__return_storage_ptr__,
          HoverData_t14F4E30D60384FB7DB47D81775CB2091DE7C9D55 *param_1,MethodInfo *param_2)

{
  int iVar1;
  int iVar2;

  iVar1 = (param_1->___dstVert_8).___hexPos_0.___x_0;
  __return_storage_ptr__->___y_1 = (param_1->___dstVert_8).___hexPos_0.___y_1;
  iVar2 = param_1->___dstHeight_11;
  __return_storage_ptr__->___x_0 = iVar1;
  __return_storage_ptr__->___z_2 = iVar2;
  return __return_storage_ptr__;
}
