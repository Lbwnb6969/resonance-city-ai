// VA 0x1411664e0, PDB extent 2062 bytes
// system_critters::spawn_ducks::spawn_ducks
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/critters/src/spawn_ducks.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_critters::spawn_ducks::spawn_ducks
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/critters/src/spawn_ducks.rs
   Extent: 2062 */

void pdb_1411664e0(undefined8 *param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                  undefined8 *param_5,longlong *param_6,undefined8 *param_7,undefined8 param_8,
                  longlong *param_9)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fVar11;
  char cVar12;
  uint *puVar13;
  ulonglong uVar14;
  byte bVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  longlong lVar21;
  undefined8 *puVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  float fVar30;
  byte *pbStack_180;
  longlong lStack_178;
  longlong lStack_170;
  longlong lStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  ulonglong uStack_150;
  ulonglong *puStack_148;
  undefined4 uStack_140;
  float fStack_13c;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  ulonglong uStack_118;
  undefined8 uStack_110;
  undefined4 uStack_108;
  undefined4 uStack_100;
  undefined4 *puStack_f0;
  longlong lStack_e8;
  ulonglong uStack_e0;
  undefined8 *puStack_d8;
  ulonglong uStack_d0;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  byte *pbStack_b8;
  longlong lStack_b0;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  
  uStack_a0 = 0xfffffffffffffffe;
  if (*_DAT_143ca4500 != '\0') {
    return;
  }
  cVar12 = pdb_140a3d910(*param_9 + 0x98);
  if (cVar12 != '\0') {
    return;
  }
  lVar16 = *param_6;
  fVar25 = *(float *)(lVar16 + 0x28);
  uStack_a4 = *(undefined4 *)((longlong)param_3 + 0x1c);
  puStack_f0 = (undefined4 *)param_3[2];
  *puStack_f0 = uStack_a4;
  lStack_e8 = *param_3;
  *(float *)(lStack_e8 + 0x18) = fVar25 + *(float *)(lStack_e8 + 0x18);
  puVar6 = (ulonglong *)*param_7;
  lVar18 = param_7[1];
  uVar14 = *puVar6;
  uVar20 = 0;
  uVar19 = uVar14 - *(ulonglong *)(lVar18 + 0x18);
  if (uVar14 < *(ulonglong *)(lVar18 + 0x18)) {
    uVar19 = uVar20;
  }
  uVar17 = uVar14 - *(ulonglong *)(lVar18 + 0x38);
  if (uVar14 < *(ulonglong *)(lVar18 + 0x38)) {
    uVar17 = uVar20;
  }
  uVar14 = *(ulonglong *)(lVar18 + 0x30);
  uVar23 = uVar14 - uVar17;
  if (uVar17 > uVar14) {
    uVar23 = uVar20;
  }
  uVar7 = *(ulonglong *)(lVar18 + 0x10);
  uVar24 = uVar7 - uVar19;
  if (uVar19 > uVar7) {
    uVar24 = uVar20;
  }
  uVar20 = *(ulonglong *)(lVar18 + 0x40);
  *puVar6 = uVar20 - (uVar24 + uVar23);
  if (uVar19 <= uVar7 && uVar7 - uVar19 != 0 || uVar17 <= uVar14 && uVar14 - uVar17 != 0) {
    *puVar6 = uVar20;
    fVar25 = *(float *)(lVar16 + 0x28);
    *puStack_f0 = uStack_a4;
    fVar25 = fVar25 + fVar25 + *(float *)(lStack_e8 + 0x18);
    *(float *)(lStack_e8 + 0x18) = fVar25;
    if (fVar25 < _DAT_142e37844) {
      return;
    }
  }
  else if (*(float *)(lStack_e8 + 0x18) < _DAT_142e37844) {
    return;
  }
  lVar16 = *param_2;
  if (*(longlong *)(lVar16 + 0x100) == 0) {
    lVar16 = 0;
  }
  else {
    puVar13 = *(uint **)(lVar16 + 0xf8);
    lVar18 = *(longlong *)(lVar16 + 0x100) * 4;
    if (*(char *)(lVar16 + 0x108) == '\0') {
      lVar16 = 0;
      lVar21 = 0;
      do {
        uVar14 = *(ulonglong *)
                  (*(longlong *)(param_2[1] + 0x100) + 0x58 +
                  (ulonglong)*(uint *)((longlong)puVar13 + lVar21) * 0xa0);
        if ((int)uVar14 != 0) {
          lVar16 = lVar16 + (uVar14 & 0xffffffff);
        }
        lVar21 = lVar21 + 4;
      } while (lVar18 != lVar21);
    }
    else {
      lVar21 = *(longlong *)(param_2[1] + 0x1a0);
      uVar19 = lVar18 - 4;
      uVar20 = (uVar19 >> 2) + 1;
      uVar14 = (ulonglong)((uint)uVar20 & 3);
      if (uVar19 < 0xc) {
        lVar16 = 0;
      }
      else {
        uVar20 = uVar20 & 0xfffffffffffffffc;
        lVar16 = 0;
        do {
          uVar5 = *puVar13;
          puVar1 = puVar13 + 1;
          puVar2 = puVar13 + 2;
          puVar3 = puVar13 + 3;
          puVar13 = puVar13 + 4;
          lVar16 = (ulonglong)*(uint *)(lVar21 + 0x10 + (ulonglong)*puVar3 * 0x48) +
                   (ulonglong)*(uint *)(lVar21 + 0x10 + (ulonglong)*puVar2 * 0x48) +
                   (ulonglong)*(uint *)(lVar21 + 0x10 + (ulonglong)*puVar1 * 0x48) +
                   (ulonglong)*(uint *)(lVar21 + 0x10 + (ulonglong)uVar5 * 0x48) + lVar16;
          uVar20 = uVar20 - 4;
        } while (uVar20 != 0);
        if (uVar14 == 0) goto LAB_141166778;
      }
      uVar19 = 0;
      do {
        lVar16 = lVar16 + (ulonglong)*(uint *)(lVar21 + 0x10 + (ulonglong)puVar13[uVar19] * 0x48);
        uVar19 = uVar19 + 1;
      } while (uVar14 != uVar19);
    }
  }
LAB_141166778:
  lVar18 = pdb_1406d0830(*param_1);
  puVar4 = (undefined8 *)(lVar18 + 0x20);
  puVar22 = (undefined8 *)(lVar18 + 0x28);
  if (*(char *)(lVar18 + 0x298) == '\0') {
    puVar22 = (undefined8 *)(lVar18 + 0x10);
    puVar4 = (undefined8 *)(lVar18 + 8);
  }
  uStack_158 = *puVar22;
  uStack_160 = *puVar4;
  *(undefined4 *)param_4[2] = *(undefined4 *)((longlong)param_4 + 0x1c);
  puVar6 = (ulonglong *)*param_4;
  if (lVar16 + puVar6[4] < 0xf) {
    puStack_148 = puVar6 + 2;
    *puStack_f0 = uStack_a4;
    pdb_14229c970(&pbStack_180,*(longlong *)(lStack_e8 + 8),
                  *(longlong *)(lStack_e8 + 8) + *(longlong *)(lStack_e8 + 0x10) * 0xc,param_8);
    fVar25 = _DAT_143020f30;
    pbStack_b8 = pbStack_180;
    lStack_b0 = lStack_170;
    uVar8 = *param_5;
    lVar16 = lStack_168;
    do {
      do {
        while( true ) {
          if (lStack_178 == lVar16) {
            if (lStack_b0 == 0) {
              return;
            }
            pub_1406abac0(pbStack_b8,lStack_b0 << 3,8);
            return;
          }
          lVar18 = *(longlong *)(lVar16 + -8);
          fVar26 = (float)pdb_140a7d8d0(&uStack_160);
          lVar16 = lVar16 + -8;
          if (fVar25 < fVar26) break;
          *(undefined1 *)(lVar18 + 8) = 0;
        }
      } while (*(char *)(lVar18 + 8) != '\0');
      pdb_140df4540(&fStack_c4,lVar18,0);
      fVar11 = fStack_bc;
      fVar26 = fStack_c4;
      fVar27 = (float)pdb_14140ce00(uVar8);
    } while (0.0 < fVar27);
    puStack_d8 = (undefined8 *)pdb_1411664a0();
    *(float *)(puStack_d8 + 1) = fStack_bc;
    *puStack_d8 = CONCAT44(fStack_c0,fStack_c4);
    fVar25 = _DAT_142e36f34;
    uStack_e0 = 1;
    uStack_150 = 1;
    while (uStack_d0 = uStack_150, uStack_150 < 3) {
      auVar9._8_8_ = 0;
      auVar9._0_8_ = *puVar6;
      uVar14 = SUB168(auVar9 * ZEXT816(0x4385df649fccf645),0);
      uVar19 = puVar6[1] * 0x4385df649fccf645 +
               SUB168(auVar9 * ZEXT816(0x4385df649fccf645),8) + *puVar6 * 0x2360ed051fc65da4;
      puVar6[1] = uVar19;
      uVar20 = uVar19 ^ uVar14;
      bVar15 = (byte)(uVar19 >> 0x3a);
      *puVar6 = uVar14;
      fVar27 = (float)(((uint)(uVar20 >> bVar15) | (uint)(uVar20 << 0x40 - bVar15)) >> 9 |
                      0x3f800000) + fVar25;
      uStack_140 = pdb_140de8230((float)(longlong)uStack_150);
      fStack_13c = fVar27;
      pdb_140df4520(&uStack_128,&uStack_140);
      uVar19 = uStack_d0;
      fVar27 = SUB84(uStack_128,0);
      uVar14 = (ulonglong)uStack_128 >> 0x20;
      fVar30 = puStack_120._0_4_ + fVar11;
      if (uStack_d0 == uStack_e0) {
        pdb_142db7820(&uStack_e0);
      }
      *(ulonglong *)((longlong)puStack_d8 + uVar19 * 0xc) =
           CONCAT44((float)uVar14 + fStack_c0,fVar27 + fVar26);
      *(float *)((longlong)puStack_d8 + uVar19 * 0xc + 8) = fVar30;
      uStack_150 = uVar19 + 1;
    }
    uStack_110 = (longlong)puStack_d8 + uStack_150 * 0xc;
    uStack_128 = puStack_d8;
    puStack_120 = puStack_d8;
    uStack_118 = uStack_e0;
    pdb_142298d50(&uStack_140,&uStack_128);
    auVar10._8_8_ = 0;
    auVar10._0_8_ = *puVar6;
    uVar14 = SUB168(auVar10 * ZEXT816(0x4385df649fccf645),0);
    uVar19 = puVar6[1] * 0x4385df649fccf645 +
             SUB168(auVar10 * ZEXT816(0x4385df649fccf645),8) + *puVar6 * 0x2360ed051fc65da4;
    *puVar6 = uVar14;
    puVar6[1] = uVar19;
    uVar14 = uVar19 ^ uVar14;
    bVar15 = (byte)(uVar19 >> 0x3a);
    uVar29 = _DAT_142e36f28;
    uVar28 = pdb_140de9510((float)(((uint)(uVar14 >> bVar15) | (uint)(uVar14 << 0x40 - bVar15)) >> 9
                                  | 0x3f800000) + _DAT_142e36f34);
    uStack_118 = uStack_130;
    uStack_128 = (undefined8 *)CONCAT44(fStack_13c,uStack_140);
    uStack_110 = CONCAT44(uVar29,uVar28);
    uStack_108 = 0;
    uStack_100 = 0;
    pdb_1411680b0(puStack_148,&uStack_128);
    *(undefined1 *)(lVar18 + 8) = 1;
    if (lStack_b0 != 0) {
      pub_1406abac0(pbStack_b8,lStack_b0 << 3,8);
    }
    *puStack_f0 = uStack_a4;
    *(undefined4 *)(lStack_e8 + 0x18) = 0;
  }
  return;
}

