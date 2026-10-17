// RVA 0x3d9bd0 | Placemaker.ModuleMath$$GetMaterialCount
// PDB: ModuleMath_GetMaterialCount_m80C13C427533C8EAB910A47EE6985FE1E12E6538
// Body: [[103d9bd0, 103d9c2a]]
// Direct callees:
// 1022f760 ByteQube_get_Item_mE3492B70E811E9F3F8B624387821C58CEB8E2DE8
// 108805f0 Bitwise_IsBitSet_mDECCB4076F66983FF22C752B60269245CF22AE70
// 10880610 Bitwise_SetBit_mE96C3FEEF70EF527A878D4AD14F8042E808E6C1B

int __cdecl
ModuleMath_GetMaterialCount_m80C13C427533C8EAB910A47EE6985FE1E12E6538
          (ByteQube_tF71134A3E9F43437AFBE59D8B5F352AE75B814B2 param_1,MethodInfo *param_2)

{
  byte bVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  uchar local_8 [4];

  bVar3 = 0;
  iVar4 = 0;
  local_8[0] = '\0';
  local_8[1] = '\0';
  local_8[2] = '\0';
  local_8[3] = '\0';
  do {
    bVar1 = ByteQube_get_Item_mE3492B70E811E9F3F8B624387821C58CEB8E2DE8
                      (&param_1,iVar4,(MethodInfo *)0x0);
    if (bVar1 < 0xf) {
      bVar2 = Bitwise_IsBitSet_mDECCB4076F66983FF22C752B60269245CF22AE70
                        (local_8[0],(uint)bVar1,(MethodInfo *)0x0);
      if (!bVar2) {
        bVar3 = bVar3 + 1;
        Bitwise_SetBit_mE96C3FEEF70EF527A878D4AD14F8042E808E6C1B
                  (local_8,(uint)bVar1,true,(MethodInfo *)0x0);
      }
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 8);
  return (uint)bVar3;
}
