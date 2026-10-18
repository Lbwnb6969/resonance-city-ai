// VA 0x141c2eb50, PDB extent 1594 bytes
// turbosloth::store::DiskStore::artifact_bytes
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/store.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: turbosloth::store::DiskStore::artifact_bytes
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/store.rs
   Extent: 1594 */

void pdb_141c2eb50(ulonglong *param_1,undefined8 param_2,ulonglong *param_3,undefined8 param_4)

{
  byte *pbVar1;
  code *pcVar2;
  byte bVar3;
  longlong lVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  char cVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  ulonglong **ppuStack_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  ulonglong **ppuStack_140;
  ulonglong *puStack_138;
  undefined8 uStack_130;
  ulonglong **ppuStack_120;
  undefined8 uStack_118;
  longlong lStack_110;
  ulonglong **ppuStack_108;
  undefined8 uStack_100;
  longlong lStack_f8;
  ulonglong uStack_f0;
  byte *pbStack_e8;
  ulonglong uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  ulonglong **ppuStack_c8;
  undefined8 uStack_c0;
  ulonglong *puStack_b8;
  ulonglong ***pppuStack_b0;
  undefined *puStack_a8;
  undefined8 *puStack_a0;
  ulonglong ***pppuStack_98;
  undefined *puStack_90;
  byte *pbStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  ulonglong uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulonglong ***pppuStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  uStack_68 = _DAT_143337b80;
  uStack_60 = _UNK_143337b88;
  uStack_78 = CONCAT44(_UNK_143337b74,_DAT_143337b70);
  uStack_70 = (byte *)CONCAT44(_UNK_143337b7c,_UNK_143337b78);
  puVar13 = &uStack_78;
  puStack_138 = param_3;
  uStack_130 = param_4;
  pdb_141c301a0(&puStack_b8);
  puVar6 = puStack_a0;
  puVar5 = puStack_a8;
  if (((ulonglong)puStack_b8 & 3) != 0) {
    if ((int)puStack_b8 == 2) {
      *param_1 = 0x8000000000000000;
      if (uStack_70 == (byte *)0x0) {
        return;
      }
      if (uStack_70 + (longlong)uStack_70 * 0x10 + 0x21 == (byte *)0x0) {
        return;
      }
      pub_1406abac0((byte *)(uStack_78 - ((longlong)uStack_70 * 0x10 + 0x10)),
                    (ulonglong)(uStack_70 + (longlong)uStack_70 * 0x10 + 0x21),0x10);
      return;
    }
    if (uStack_70 != (byte *)0x0) {
      if (uStack_70 + (longlong)uStack_70 * 0x10 + 0x21 != (byte *)0x0) {
        pub_1406abac0((byte *)(uStack_78 - ((longlong)uStack_70 * 0x10 + 0x10)),
                      (ulonglong)(uStack_70 + (longlong)uStack_70 * 0x10 + 0x21),0x10);
      }
    }
LAB_141c2ed06:
    *param_1 = 0x8000000000000000;
    return;
  }
  if (uStack_70 != (byte *)0x0) {
    if (uStack_70 + (longlong)uStack_70 * 0x10 + 0x21 != (byte *)0x0) {
      pub_1406abac0((byte *)(uStack_78 - ((longlong)uStack_70 * 0x10 + 0x10)),
                    (ulonglong)(uStack_70 + (longlong)uStack_70 * 0x10 + 0x21),0x10);
    }
  }
  pdb_141c2e960(&puStack_b8,param_2,param_3,param_4,puVar13);
  pppuStack_50 = pppuStack_b0;
  pdb_140f55fb0(&uStack_78,pppuStack_b0,puStack_a8);
  if (puStack_b8 != (ulonglong *)0x0) {
    pub_1406abac0((byte *)pppuStack_50,(ulonglong)puStack_b8,1);
  }
  uVar7 = uStack_68;
  if (SBORROW8(0,uStack_78)) {
    pdb_1404b38e0(&uStack_70);
    goto LAB_141c2ed06;
  }
  pppuStack_50 = (ulonglong ***)uStack_78;
  pbStack_80 = uStack_70;
  uVar12 = uStack_68;
  uVar10 = pdb_142570fc0();
  uVar12 = uVar12 ^ (ulonglong)puVar6 | uVar10 ^ (ulonglong)puVar5;
  if (uVar12 == 0) {
    *param_1 = (ulonglong)pppuStack_50;
    param_1[1] = (ulonglong)pbStack_80;
    param_1[2] = uVar7;
    return;
  }
  if (*_DAT_143ca4b08 < 4) {
    uVar12 = (ulonglong)DAT_143cad948;
    bVar3 = DAT_143cad948;
    if (2 < DAT_143cad948) {
      uVar9 = pdb_142db8070(&DAT_143cad938);
      uVar12 = (ulonglong)uVar9;
      bVar3 = (byte)uVar9;
    }
    if ((bVar3 != 0) && (cVar8 = pdb_140dd7f60(_DAT_143cad938), cVar8 != '\0')) {
      pbVar1 = *(byte **)(_DAT_143cad938 + 0x38);
      if (pbVar1 == (byte *)0x0) {
        pdb_142dc8110(&UNK_14339f070,0x22,&UNK_14339f098);
        goto LAB_141c2f094;
      }
      uStack_f0 = *(ulonglong *)(_DAT_143cad938 + 0x30);
      uStack_e0 = *(ulonglong *)(_DAT_143cad938 + 0x40);
      uStack_d8 = *(undefined8 *)(_DAT_143cad938 + 0x48);
      uStack_d0 = 0;
      ppuStack_120 = (ulonglong **)&UNK_14339f0b0;
      uStack_118 = 0x91;
      pbStack_e8 = pbVar1;
      if (pbVar1 == (byte *)0x1) {
        pdb_142dc8110(&UNK_14339f070,0x22,&UNK_14339f098);
        goto LAB_141c2f094;
      }
      lStack_f8 = _DAT_143cad938 + 0x30;
      uStack_58 = 1;
      ppuStack_c8 = &puStack_138;
      puStack_b8 = &uStack_f0;
      pppuStack_b0 = &ppuStack_120;
      puStack_a8 = &UNK_14339f0f8;
      pppuStack_98 = &ppuStack_c8;
      puStack_90 = &UNK_14339f118;
      uStack_100 = 2;
      ppuStack_108 = &puStack_b8;
      puStack_a0 = &uStack_78;
      uStack_78 = uStack_f0;
      uStack_70 = pbVar1;
      uStack_68 = uStack_e0;
      uStack_60 = uStack_d8;
      pdb_141c2f190(&ppuStack_108);
      goto LAB_141c2eff6;
    }
  }
  lVar4 = _DAT_143cad938;
  if ((*_DAT_143ca4ab0 == '\0') && (1 < *_DAT_143ca8e90)) {
    uStack_150 = *(undefined4 *)(_DAT_143cad938 + 0x20);
    uStack_14c = *(undefined4 *)(_DAT_143cad938 + 0x24);
    uStack_148 = *(undefined4 *)(_DAT_143cad938 + 0x28);
    uStack_144 = *(undefined4 *)(_DAT_143cad938 + 0x2c);
    ppuStack_158 = (ulonglong **)0x2;
    uVar11 = pdb_140f33290();
    cVar8 = (**(code **)(uVar12 + 0x18))(uVar11,&ppuStack_158);
    if (cVar8 != '\0') {
      pbVar1 = *(byte **)(_DAT_143cad938 + 0x38);
      if (pbVar1 == (byte *)0x0) {
        pdb_142dc8110(&UNK_14339f070,0x22,&UNK_14339f098);
      }
      else {
        uStack_f0 = *(ulonglong *)(_DAT_143cad938 + 0x30);
        uStack_e0 = *(ulonglong *)(_DAT_143cad938 + 0x40);
        uStack_d8 = *(undefined8 *)(_DAT_143cad938 + 0x48);
        uStack_d0 = 0;
        ppuStack_c8 = (ulonglong **)&UNK_14339f0b0;
        uStack_c0 = 0x91;
        pbStack_e8 = pbVar1;
        if (pbVar1 != (byte *)0x1) {
          lStack_110 = _DAT_143cad938 + 0x30;
          uStack_58 = 1;
          ppuStack_140 = &puStack_138;
          puStack_b8 = &uStack_f0;
          pppuStack_b0 = &ppuStack_c8;
          puStack_a8 = &UNK_14339f0f8;
          pppuStack_98 = &ppuStack_140;
          puStack_90 = &UNK_14339f118;
          uStack_118 = 2;
          lStack_f8 = CONCAT44(uStack_144,uStack_148);
          ppuStack_108 = ppuStack_158;
          uStack_100 = CONCAT44(uStack_14c,uStack_150);
          ppuStack_120 = &puStack_b8;
          puStack_a0 = &uStack_78;
          uStack_78 = uStack_f0;
          uStack_70 = pbVar1;
          uStack_68 = uStack_e0;
          uStack_60 = uStack_d8;
          pdb_140dd7f80(lVar4,uVar11,uVar12,&ppuStack_108,&ppuStack_120);
          goto LAB_141c2eff6;
        }
        pdb_142dc8110(&UNK_14339f070,0x22,&UNK_14339f098);
      }
LAB_141c2f094:
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
  }
LAB_141c2eff6:
  *param_1 = 0x8000000000000000;
  if (pppuStack_50 == (ulonglong ***)0x0) {
    return;
  }
  pub_1406abac0(pbStack_80,(ulonglong)pppuStack_50,1);
  return;
}

