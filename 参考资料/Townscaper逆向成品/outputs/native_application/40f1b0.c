// RVA 0x40f1b0 | Os.Hex.HexOnionIterator$$GetAndIncrement
// PDB: HexOnionIterator_GetAndIncrement_m435E0321125D472FEED1318BABCCF536CAD33D81
// Body: [[1040f1b0, 1040f1e1]]
// Direct callees:
// 1040f270 HexOnionIterator_Increment_m11DD829AD1260E23386A320057BABEAC5FC75B71

int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 * __cdecl
HexOnionIterator_GetAndIncrement_m435E0321125D472FEED1318BABCCF536CAD33D81
          (int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 *__return_storage_ptr__,
          HexOnionIterator_tE8578AFBA6B4BFBD516B38EF522902EB5E0CD82B *param_1,MethodInfo *param_2)

{
  int iVar1;
  int iVar2;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 local_10;

  iVar2 = (param_1->____hexPos_5).___y_1;
  iVar1 = (param_1->____hexPos_5).___z_2;
  __return_storage_ptr__->___x_0 = (param_1->____hexPos_5).___x_0;
  __return_storage_ptr__->___y_1 = iVar2;
  __return_storage_ptr__->___z_2 = iVar1;
  HexOnionIterator_Increment_m11DD829AD1260E23386A320057BABEAC5FC75B71
            (&local_10,param_1,(MethodInfo *)0x0);
  return __return_storage_ptr__;
}
