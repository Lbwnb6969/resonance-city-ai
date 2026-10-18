// VA 0x140b13440, PDB extent 3642 bytes
// country_core::systems::wall::delete_wall::delete_wall
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/delete_wall.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::systems::wall::delete_wall::delete_wall
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/delete_wall.rs
   Extent: 3642 */

void pdb_140b13440(undefined8 *param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                  longlong *param_5,longlong *param_6,longlong *param_7,undefined8 *param_8)

{
  byte *pbVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  ulonglong *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined4 *puVar11;
  longlong lVar12;
  undefined4 *puVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  longlong lVar18;
  undefined4 *puVar19;
  longlong lVar20;
  undefined4 *puVar21;
  longlong lVar22;
  undefined4 *puVar23;
  longlong lVar24;
  undefined4 *puVar25;
  ulonglong uVar26;
  undefined8 uVar27;
  byte *pbVar28;
  longlong lVar29;
  longlong lVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  longlong lVar33;
  longlong lStack_110;
  longlong lStack_108;
  byte *pbStack_e8;
  byte *pbStack_e0;
  undefined8 uStack_d8;
  byte *pbStack_d0;
  byte *pbStack_c8;
  byte *pbStack_c0;
  byte *pbStack_b8;
  longlong lStack_b0;
  undefined4 uStack_a4;
  byte *pbStack_a0;
  byte *pbStack_98;
  byte *pbStack_90;
  byte *pbStack_88;
  byte *pbStack_80;
  byte *pbStack_78;
  byte *pbStack_70;
  byte *pbStack_68;
  undefined8 *puStack_60;
  longlong lStack_58;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  puVar8 = (ulonglong *)*param_1;
  lVar9 = param_1[1];
  uVar10 = *puVar8;
  uVar31 = 0;
  uVar26 = uVar10 - *(ulonglong *)(lVar9 + 0x18);
  if (uVar10 < *(ulonglong *)(lVar9 + 0x18)) {
    uVar26 = uVar31;
  }
  uVar32 = uVar10 - *(ulonglong *)(lVar9 + 0x38);
  if (uVar10 < *(ulonglong *)(lVar9 + 0x38)) {
    uVar32 = uVar31;
  }
  lStack_108 = uVar26 * 0x10 + *(longlong *)(lVar9 + 8);
  uVar10 = *(ulonglong *)(lVar9 + 0x10) - uVar26;
  if (*(ulonglong *)(lVar9 + 0x10) < uVar26) {
    lStack_108 = 8;
    uVar10 = uVar31;
  }
  lStack_110 = uVar32 * 0x10 + *(longlong *)(lVar9 + 0x28);
  uVar26 = *(ulonglong *)(lVar9 + 0x30) - uVar32;
  if (*(ulonglong *)(lVar9 + 0x30) < uVar32) {
    lStack_110 = 8;
    uVar26 = uVar31;
  }
  *puVar8 = (*(longlong *)(lVar9 + 0x40) - uVar26) - uVar10;
  lVar29 = uVar10 * 0x10 + lStack_108;
  lVar33 = uVar26 * 0x10 + lStack_110;
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x1c);
  lVar9 = *param_2;
  puVar11 = (undefined4 *)param_2[2];
  uVar4 = *(undefined4 *)((longlong)param_7 + 0x1c);
  lVar12 = *param_7;
  puVar13 = (undefined4 *)param_7[2];
  pbVar14 = (byte *)*param_8;
  pbVar15 = (byte *)param_8[1];
  pbVar16 = (byte *)param_8[3];
  pbVar17 = (byte *)param_8[2];
  uVar5 = *(undefined4 *)((longlong)param_3 + 0x1c);
  lVar18 = *param_3;
  puVar19 = (undefined4 *)param_3[2];
  uVar6 = *(undefined4 *)((longlong)param_4 + 0x1c);
  lVar20 = *param_4;
  puVar21 = (undefined4 *)param_4[2];
  uVar7 = *(undefined4 *)((longlong)param_5 + 0x1c);
  lVar22 = *param_5;
  puVar23 = (undefined4 *)param_5[2];
  uStack_a4 = *(undefined4 *)((longlong)param_6 + 0x1c);
  lVar24 = *param_6;
  puVar25 = (undefined4 *)param_6[2];
  do {
    if ((lStack_108 == 0) || (lStack_108 == lVar29)) {
      if ((lStack_110 == 0) || (lStack_110 == lVar33)) {
        return;
      }
      lStack_108 = 0;
      lVar30 = lStack_110;
      lStack_110 = lStack_110 + 0x10;
    }
    else {
      lVar30 = lStack_108;
      lStack_108 = lStack_108 + 0x10;
    }
    lVar30 = lVar30 + 8;
    *puVar8 = *puVar8 + 1;
    *puVar11 = uVar3;
    uVar27 = pdb_1400af0a0(lVar9 + 0x50,lVar30);
    pdb_140ca9150(&pbStack_a0,lVar9 + 0x30,uVar27,lVar30);
    *puVar13 = uVar4;
    uVar27 = pdb_1400af0a0(lVar12 + 0x20,lVar30);
    pdb_140ca9150(&pbStack_a0,lVar12,uVar27,lVar30);
    pbVar28 = (byte *)0x0;
    if ((int)pbStack_98 != 0) {
      pbVar28 = pbStack_98;
    }
    if ((int)pbVar28 != 0) {
      pbStack_a0 = pbVar28;
      pbStack_98 = pbVar14;
      pbStack_90 = pbVar15;
      pbStack_88 = pbVar17;
      pbStack_80 = pbVar16;
      pdb_140f04aa0(&pbStack_a0,&UNK_143055028);
    }
    *puVar19 = uVar5;
    uVar27 = pdb_1400af0a0(lVar18 + 0x20,lVar30);
    lStack_b0 = lVar30;
    pdb_140269750(&pbStack_a0,lVar18,uVar27,lVar30);
    if (!SBORROW8(0,(longlong)pbStack_98)) {
      pbStack_e8 = pbStack_90;
      pbStack_e0 = pbStack_88;
    }
    pbStack_a0 = pbStack_98;
    pbStack_98 = pbStack_e8;
    pbStack_90 = pbStack_e0;
    pbStack_88 = (byte *)0x0;
    pbStack_68 = (byte *)0x0;
    pbVar28 = (byte *)0x0;
LAB_140b13790:
    while (pbVar28 != (byte *)0x0) {
      if (pbStack_80 == pbStack_70) {
        uVar27 = 0;
LAB_140b137d2:
        if (pbStack_78 != (byte *)0x0) {
          pub_1406abac0(pbVar28,(longlong)pbStack_78 << 3,8);
        }
        pbStack_88 = (byte *)0x0;
        if ((int)uVar27 == 0) break;
        goto LAB_140b1389c;
      }
      pbVar1 = pbStack_80 + 8;
      uVar27 = *(undefined8 *)pbStack_80;
      pbStack_80 = pbVar1;
      if ((int)uVar27 == 0) goto LAB_140b137d2;
      if ((int)uVar27 == 0) goto LAB_140b138f0;
LAB_140b138a2:
      uStack_d8 = uVar27;
      pbStack_d0 = pbVar14;
      pbStack_c8 = pbVar15;
      pbStack_c0 = pbVar17;
      pbStack_b8 = pbVar16;
      pdb_140f04aa0(&uStack_d8,&UNK_143055088);
    }
    pbVar28 = pbStack_a0;
    if ((pbStack_a0 != (byte *)0x8000000000000001) &&
       (pbStack_a0 = (byte *)0x8000000000000000, !SBORROW8(0,(longlong)pbVar28))) {
      pbStack_70 = pbStack_98 + (longlong)pbStack_90 * 8;
      pbStack_88 = pbStack_98;
      pbStack_80 = pbStack_98;
      pbStack_78 = pbVar28;
      pbVar28 = pbStack_98;
      goto LAB_140b13790;
    }
    if (pbStack_68 == (byte *)0x0) goto LAB_140b1396b;
    if (puStack_60 == puStack_50) {
      uVar27 = 0;
    }
    else {
      puVar2 = puStack_60 + 1;
      uVar27 = *puStack_60;
      puStack_60 = puVar2;
      if ((int)uVar27 != 0) goto LAB_140b1389c;
    }
    if (lStack_58 != 0) {
      pub_1406abac0(pbStack_68,lStack_58 << 3,8);
    }
    pbStack_68 = (byte *)0x0;
LAB_140b1389c:
    pbVar28 = (byte *)0x0;
    if ((int)uVar27 != 0) goto LAB_140b138a2;
LAB_140b138f0:
    if ((-0x7fffffffffffffff < (longlong)pbStack_a0) && (pbStack_a0 != (byte *)0x0)) {
      pub_1406abac0(pbStack_98,(longlong)pbStack_a0 << 3,8);
    }
    if ((pbVar28 != (byte *)0x0) && (pbStack_78 != (byte *)0x0)) {
      pub_1406abac0(pbVar28,(longlong)pbStack_78 << 3,8);
    }
    if ((pbStack_68 != (byte *)0x0) && (lStack_58 != 0)) {
      pub_1406abac0(pbStack_68,lStack_58 << 3,8);
    }
LAB_140b1396b:
    lVar30 = lStack_b0;
    *puVar21 = uVar6;
    uVar27 = pdb_1400af0a0(lVar20 + 0x20,lStack_b0);
    pdb_140269750(&pbStack_a0,lVar20,uVar27,lVar30);
    if (!SBORROW8(0,(longlong)pbStack_98)) {
      pbStack_e8 = pbStack_90;
      pbStack_e0 = pbStack_88;
    }
    pbStack_a0 = pbStack_98;
    pbStack_98 = pbStack_e8;
    pbStack_90 = pbStack_e0;
    pbStack_88 = (byte *)0x0;
    pbStack_68 = (byte *)0x0;
    pbVar28 = (byte *)0x0;
LAB_140b13a10:
    while (pbVar28 != (byte *)0x0) {
      if (pbStack_80 == pbStack_70) {
        uVar27 = 0;
LAB_140b13a52:
        if (pbStack_78 != (byte *)0x0) {
          pub_1406abac0(pbVar28,(longlong)pbStack_78 << 3,8);
        }
        pbStack_88 = (byte *)0x0;
        if ((int)uVar27 == 0) break;
        goto LAB_140b13b1c;
      }
      pbVar1 = pbStack_80 + 8;
      uVar27 = *(undefined8 *)pbStack_80;
      pbStack_80 = pbVar1;
      if ((int)uVar27 == 0) goto LAB_140b13a52;
      if ((int)uVar27 == 0) goto LAB_140b13b70;
LAB_140b13b22:
      uStack_d8 = uVar27;
      pbStack_d0 = pbVar14;
      pbStack_c8 = pbVar15;
      pbStack_c0 = pbVar17;
      pbStack_b8 = pbVar16;
      pdb_140f04aa0(&uStack_d8,&UNK_143055070);
    }
    pbVar28 = pbStack_a0;
    if ((pbStack_a0 != (byte *)0x8000000000000001) &&
       (pbStack_a0 = (byte *)0x8000000000000000, !SBORROW8(0,(longlong)pbVar28))) {
      pbStack_70 = pbStack_98 + (longlong)pbStack_90 * 8;
      pbStack_88 = pbStack_98;
      pbStack_80 = pbStack_98;
      pbStack_78 = pbVar28;
      pbVar28 = pbStack_98;
      goto LAB_140b13a10;
    }
    if (pbStack_68 == (byte *)0x0) goto LAB_140b13beb;
    if (puStack_60 == puStack_50) {
      uVar27 = 0;
    }
    else {
      puVar2 = puStack_60 + 1;
      uVar27 = *puStack_60;
      puStack_60 = puVar2;
      if ((int)uVar27 != 0) goto LAB_140b13b1c;
    }
    if (lStack_58 != 0) {
      pub_1406abac0(pbStack_68,lStack_58 << 3,8);
    }
    pbStack_68 = (byte *)0x0;
LAB_140b13b1c:
    pbVar28 = (byte *)0x0;
    if ((int)uVar27 != 0) goto LAB_140b13b22;
LAB_140b13b70:
    if ((-0x7fffffffffffffff < (longlong)pbStack_a0) && (pbStack_a0 != (byte *)0x0)) {
      pub_1406abac0(pbStack_98,(longlong)pbStack_a0 << 3,8);
    }
    if ((pbVar28 != (byte *)0x0) && (pbStack_78 != (byte *)0x0)) {
      pub_1406abac0(pbVar28,(longlong)pbStack_78 << 3,8);
    }
    if ((pbStack_68 != (byte *)0x0) && (lStack_58 != 0)) {
      pub_1406abac0(pbStack_68,lStack_58 << 3,8);
    }
LAB_140b13beb:
    lVar30 = lStack_b0;
    *puVar23 = uVar7;
    uVar27 = pdb_1400af0a0(lVar22 + 0x20,lStack_b0);
    pdb_140269750(&pbStack_a0,lVar22,uVar27,lVar30);
    if (!SBORROW8(0,(longlong)pbStack_98)) {
      pbStack_e8 = pbStack_90;
      pbStack_e0 = pbStack_88;
    }
    pbStack_a0 = pbStack_98;
    pbStack_98 = pbStack_e8;
    pbStack_90 = pbStack_e0;
    pbStack_88 = (byte *)0x0;
    pbStack_68 = (byte *)0x0;
    pbVar28 = (byte *)0x0;
LAB_140b13c90:
    while (pbVar28 != (byte *)0x0) {
      if (pbStack_80 == pbStack_70) {
        uVar27 = 0;
LAB_140b13cd2:
        if (pbStack_78 != (byte *)0x0) {
          pub_1406abac0(pbVar28,(longlong)pbStack_78 << 3,8);
        }
        pbStack_88 = (byte *)0x0;
        if ((int)uVar27 == 0) break;
        goto LAB_140b13d9c;
      }
      pbVar1 = pbStack_80 + 8;
      uVar27 = *(undefined8 *)pbStack_80;
      pbStack_80 = pbVar1;
      if ((int)uVar27 == 0) goto LAB_140b13cd2;
      if ((int)uVar27 == 0) goto LAB_140b13df0;
LAB_140b13da2:
      uStack_d8 = uVar27;
      pbStack_d0 = pbVar14;
      pbStack_c8 = pbVar15;
      pbStack_c0 = pbVar17;
      pbStack_b8 = pbVar16;
      pdb_140f04aa0(&uStack_d8,&UNK_143055058);
    }
    pbVar28 = pbStack_a0;
    if ((pbStack_a0 != (byte *)0x8000000000000001) &&
       (pbStack_a0 = (byte *)0x8000000000000000, !SBORROW8(0,(longlong)pbVar28))) {
      pbStack_70 = pbStack_98 + (longlong)pbStack_90 * 8;
      pbStack_88 = pbStack_98;
      pbStack_80 = pbStack_98;
      pbStack_78 = pbVar28;
      pbVar28 = pbStack_98;
      goto LAB_140b13c90;
    }
    if (pbStack_68 == (byte *)0x0) goto LAB_140b13e6b;
    if (puStack_60 == puStack_50) {
      uVar27 = 0;
    }
    else {
      puVar2 = puStack_60 + 1;
      uVar27 = *puStack_60;
      puStack_60 = puVar2;
      if ((int)uVar27 != 0) goto LAB_140b13d9c;
    }
    if (lStack_58 != 0) {
      pub_1406abac0(pbStack_68,lStack_58 << 3,8);
    }
    pbStack_68 = (byte *)0x0;
LAB_140b13d9c:
    pbVar28 = (byte *)0x0;
    if ((int)uVar27 != 0) goto LAB_140b13da2;
LAB_140b13df0:
    if ((-0x7fffffffffffffff < (longlong)pbStack_a0) && (pbStack_a0 != (byte *)0x0)) {
      pub_1406abac0(pbStack_98,(longlong)pbStack_a0 << 3,8);
    }
    if ((pbVar28 != (byte *)0x0) && (pbStack_78 != (byte *)0x0)) {
      pub_1406abac0(pbVar28,(longlong)pbStack_78 << 3,8);
    }
    if ((pbStack_68 != (byte *)0x0) && (lStack_58 != 0)) {
      pub_1406abac0(pbStack_68,lStack_58 << 3,8);
    }
LAB_140b13e6b:
    lVar30 = lStack_b0;
    *puVar25 = uStack_a4;
    uVar27 = pdb_1400af0a0(lVar24 + 0x20,lStack_b0);
    pdb_140269750(&pbStack_a0,lVar24,uVar27,lVar30);
    if (!SBORROW8(0,(longlong)pbStack_98)) {
      pbStack_e8 = pbStack_90;
      pbStack_e0 = pbStack_88;
    }
    pbStack_a0 = pbStack_98;
    pbStack_98 = pbStack_e8;
    pbStack_90 = pbStack_e0;
    pbStack_88 = (byte *)0x0;
    pbStack_68 = (byte *)0x0;
    pbVar28 = (byte *)0x0;
LAB_140b13f20:
    while (pbVar28 != (byte *)0x0) {
      if (pbStack_80 == pbStack_70) {
        uVar27 = 0;
LAB_140b13f62:
        if (pbStack_78 != (byte *)0x0) {
          pub_1406abac0(pbVar28,(longlong)pbStack_78 << 3,8);
        }
        pbStack_88 = (byte *)0x0;
        if ((int)uVar27 == 0) break;
        goto LAB_140b1402c;
      }
      pbVar1 = pbStack_80 + 8;
      uVar27 = *(undefined8 *)pbStack_80;
      pbStack_80 = pbVar1;
      if ((int)uVar27 == 0) goto LAB_140b13f62;
      if ((int)uVar27 == 0) goto LAB_140b14080;
LAB_140b14032:
      uStack_d8 = uVar27;
      pbStack_d0 = pbVar14;
      pbStack_c8 = pbVar15;
      pbStack_c0 = pbVar17;
      pbStack_b8 = pbVar16;
      pdb_140f04aa0(&uStack_d8,&UNK_143055040);
    }
    pbVar28 = pbStack_a0;
    if ((pbStack_a0 != (byte *)0x8000000000000001) &&
       (pbStack_a0 = (byte *)0x8000000000000000, !SBORROW8(0,(longlong)pbVar28))) {
      pbStack_70 = pbStack_98 + (longlong)pbStack_90 * 8;
      pbStack_88 = pbStack_98;
      pbStack_80 = pbStack_98;
      pbStack_78 = pbVar28;
      pbVar28 = pbStack_98;
      goto LAB_140b13f20;
    }
    if (pbStack_68 == (byte *)0x0) goto LAB_140b140fb;
    if (puStack_60 == puStack_50) {
      uVar27 = 0;
    }
    else {
      puVar2 = puStack_60 + 1;
      uVar27 = *puStack_60;
      puStack_60 = puVar2;
      if ((int)uVar27 != 0) goto LAB_140b1402c;
    }
    if (lStack_58 != 0) {
      pub_1406abac0(pbStack_68,lStack_58 << 3,8);
    }
    pbStack_68 = (byte *)0x0;
LAB_140b1402c:
    pbVar28 = (byte *)0x0;
    if ((int)uVar27 != 0) goto LAB_140b14032;
LAB_140b14080:
    if ((-0x7fffffffffffffff < (longlong)pbStack_a0) && (pbStack_a0 != (byte *)0x0)) {
      pub_1406abac0(pbStack_98,(longlong)pbStack_a0 << 3,8);
    }
    if ((pbVar28 != (byte *)0x0) && (pbStack_78 != (byte *)0x0)) {
      pub_1406abac0(pbVar28,(longlong)pbStack_78 << 3,8);
    }
    if ((pbStack_68 != (byte *)0x0) && (lStack_58 != 0)) {
      pub_1406abac0(pbStack_68,lStack_58 << 3,8);
    }
LAB_140b140fb:
    lVar30 = lStack_b0;
    *puVar25 = uStack_a4;
    uVar27 = pdb_1400af0a0(lVar24 + 0x50,lStack_b0);
    pdb_140269b90(&pbStack_a0,lVar24 + 0x30,uVar27,lVar30);
    pbVar28 = pbStack_98;
    pbStack_a0 = pbStack_98;
    pbStack_98 = pbStack_90;
    if (pbVar28 != (byte *)0x0) {
      pdb_140977610(&pbStack_a0);
    }
  } while( true );
}

