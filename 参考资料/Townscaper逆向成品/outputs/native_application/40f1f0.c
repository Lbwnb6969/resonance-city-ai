// RVA 0x40f1f0 | Os.Hex.HexOnionIterator$$GetAt
// PDB: HexOnionIterator_GetAt_m77AC3EB0094C6DB479CAD46013BE81DA6F26152A
// Body: [[1040f1f0, 1040f213]]
// Direct callees:
// 10192150 memset
// 1040f4b0 HexOnionIterator_set_vertIndex_mF30A15DCE36DA2BE0C85C3F5DFFEC8D7EF781EDB

HexOnionIterator_tE8578AFBA6B4BFBD516B38EF522902EB5E0CD82B * __cdecl
HexOnionIterator_GetAt_m77AC3EB0094C6DB479CAD46013BE81DA6F26152A
          (HexOnionIterator_tE8578AFBA6B4BFBD516B38EF522902EB5E0CD82B *__return_storage_ptr__,
          uint param_1,MethodInfo *param_2)

{
  memset((uchar *)__return_storage_ptr__,'\0',0x2c);
  HexOnionIterator_set_vertIndex_mF30A15DCE36DA2BE0C85C3F5DFFEC8D7EF781EDB
            (__return_storage_ptr__,param_1,(MethodInfo *)0x0);
  return __return_storage_ptr__;
}
