// RVA 0x3d9b00 | Placemaker.ModuleMath$$GetIndexedMaterials
// PDB: ModuleMath_GetIndexedMaterials_m97899D05A4DFEF3B4F6518E9A04350DA8EAB426C
// Body: [[103d9b00, 103d9bcd]]
// Direct callees:
// 1022f760 ByteQube_get_Item_mE3492B70E811E9F3F8B624387821C58CEB8E2DE8
// 1022f900 ByteQube_set_Item_m099317BD655B1FEF5507398AEE3C9B8A19AC81C1
// 108805f0 Bitwise_IsBitSet_mDECCB4076F66983FF22C752B60269245CF22AE70
// 10880610 Bitwise_SetBit_mE96C3FEEF70EF527A878D4AD14F8042E808E6C1B

ByteQube_tF71134A3E9F43437AFBE59D8B5F352AE75B814B2 __cdecl
ModuleMath_GetIndexedMaterials_m97899D05A4DFEF3B4F6518E9A04350DA8EAB426C
          (ByteQube_tF71134A3E9F43437AFBE59D8B5F352AE75B814B2 param_1,MethodInfo *param_2)

{
  int iVar1;
  uchar uVar2;
  bool bVar3;
  byte bVar4;
  byte bVar5;
  uchar uVar6;
  int iVar7;
  uint local_8;

  uVar6 = '\0';
  uVar2 = '\0';
  iVar7 = 0;
  local_8 = local_8 & 0xffffff00;
  do {
    bVar3 = Bitwise_IsBitSet_mDECCB4076F66983FF22C752B60269245CF22AE70
                      ((uchar)local_8,iVar7,(MethodInfo *)0x0);
    if ((!bVar3) &&
       (bVar4 = ByteQube_get_Item_mE3492B70E811E9F3F8B624387821C58CEB8E2DE8
                          (&param_1,iVar7,(MethodInfo *)0x0), bVar4 < 0xf)) {
      ByteQube_set_Item_m099317BD655B1FEF5507398AEE3C9B8A19AC81C1
                (&param_1,iVar7,uVar2,(MethodInfo *)0x0);
      Bitwise_SetBit_mE96C3FEEF70EF527A878D4AD14F8042E808E6C1B
                ((uchar *)&local_8,iVar7,true,(MethodInfo *)0x0);
      iVar1 = iVar7;
      while (iVar1 = iVar1 + 1, iVar1 < 8) {
        bVar5 = ByteQube_get_Item_mE3492B70E811E9F3F8B624387821C58CEB8E2DE8
                          (&param_1,iVar1,(MethodInfo *)0x0);
        if ((bVar5 == bVar4) &&
           (bVar3 = Bitwise_IsBitSet_mDECCB4076F66983FF22C752B60269245CF22AE70
                              ((uchar)local_8,iVar1,(MethodInfo *)0x0), !bVar3)) {
          ByteQube_set_Item_m099317BD655B1FEF5507398AEE3C9B8A19AC81C1
                    (&param_1,iVar1,uVar2,(MethodInfo *)0x0);
          Bitwise_SetBit_mE96C3FEEF70EF527A878D4AD14F8042E808E6C1B
                    ((uchar *)&local_8,iVar1,true,(MethodInfo *)0x0);
        }
      }
      uVar6 = uVar6 + '\x01';
      uVar2 = uVar6;
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 < 8);
  return param_1;
}
