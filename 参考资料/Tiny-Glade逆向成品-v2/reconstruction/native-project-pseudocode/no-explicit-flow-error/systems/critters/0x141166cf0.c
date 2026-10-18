// VA 0x141166cf0, PDB extent 4198 bytes
// system_critters::spawn_ducks::despawn_ducks
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/critters/src/spawn_ducks.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_critters::spawn_ducks::despawn_ducks
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/critters/src/spawn_ducks.rs
   Extent: 4198 */

void pdb_141166cf0(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulonglong *puVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  ulonglong *puVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  byte *pbVar18;
  ulonglong uVar19;
  undefined8 *puVar20;
  int *piVar21;
  byte *pbVar22;
  byte bVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  undefined8 *puVar27;
  undefined8 *puVar28;
  uint *puVar29;
  undefined8 *puVar30;
  undefined8 *puVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined1 auStack_1e0 [16];
  undefined1 auStack_1d0 [16];
  undefined1 auStack_1c0 [16];
  undefined1 auStack_1b0 [16];
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  ulonglong *puStack_190;
  longlong lStack_188;
  longlong lStack_180;
  ulonglong *puStack_178;
  byte *pbStack_170;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 uStack_158;
  undefined4 uStack_150;
  float fStack_14c;
  undefined8 uStack_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  longlong lStack_120;
  longlong lStack_118;
  undefined8 uStack_110;
  longlong lStack_108;
  longlong lStack_100;
  byte *pbStack_f8;
  undefined8 uStack_f0;
  
  uStack_f0 = 0xfffffffffffffffe;
  lVar15 = pdb_1406d0830(*param_4);
  puVar27 = (undefined8 *)(lVar15 + 0x20);
  puVar30 = (undefined8 *)(lVar15 + 0x28);
  if (*(char *)(lVar15 + 0x298) == '\0') {
    puVar30 = (undefined8 *)(lVar15 + 0x10);
    puVar27 = (undefined8 *)(lVar15 + 8);
  }
  uStack_198 = *puVar30;
  uStack_1a0 = *puVar27;
  pdb_140bfabf0(auStack_1e0,param_3);
  *(undefined4 *)param_1[2] = *(undefined4 *)((longlong)param_1 + 0x1c);
  uVar13 = _DAT_143006a28;
  fVar37 = _DAT_142e37934;
  fVar12 = _DAT_142e36f34;
  fVar11 = _DAT_142e36f28;
  puStack_190 = (ulonglong *)*param_1;
  lStack_118 = *param_2;
  lStack_120 = param_2[1];
  puVar29 = *(uint **)(lStack_118 + 0xf8);
  puVar1 = puVar29 + *(longlong *)(lStack_118 + 0x100);
  cVar4 = *(char *)(lStack_118 + 0x108);
  puStack_178 = puStack_190 + 2;
  lVar15 = 0;
  lStack_188 = 8;
  lStack_180 = 8;
  pbStack_f8 = (byte *)0x0;
  lStack_108 = 0;
  lStack_100 = 0;
  uStack_110 = (undefined8 *)((ulonglong)uStack_110._4_4_ << 0x20);
LAB_141166e83:
  if (cVar4 == '\0') {
    if ((uint)uStack_110 == (uint)lVar15) {
      do {
        if (puVar29 == puVar1) goto LAB_1411674af;
        uVar5 = *puVar29;
        puVar29 = puVar29 + 1;
        lVar15 = *(longlong *)(*(longlong *)(lStack_120 + 0x100) + 0x58 + (ulonglong)uVar5 * 0xa0);
      } while (lVar15 == 0);
      lVar16 = *(longlong *)(lStack_120 + 0x100) + (ulonglong)uVar5 * 0xa0;
      uVar19 = (ulonglong)*(uint *)(lVar16 + 0x94);
      lVar17 = *(longlong *)(lStack_120 + 0x1a0) + uVar19 * 0x48;
      uVar19 = *(ulonglong *)(*(longlong *)(lStack_120 + 0x1a0) + 0x40 + uVar19 * 0x48);
      if ((*(ulonglong *)(lStack_118 + 0x110) < uVar19) &&
         (uVar25 = *(ulonglong *)
                    (*(longlong *)(lVar17 + 0x38) + *(ulonglong *)(lStack_118 + 0x110) * 8),
         uVar25 != 0)) {
        pbStack_f8 = *(byte **)(*(longlong *)(lVar17 + 0x18) + 0x10 + ~uVar25 * 0x30);
        uVar25 = *(ulonglong *)(lStack_118 + 0x118);
        if (uVar19 <= uVar25) goto LAB_1411670c2;
LAB_141167047:
        uVar25 = *(ulonglong *)(*(longlong *)(lVar17 + 0x38) + uVar25 * 8);
        if (uVar25 == 0) goto LAB_1411670c2;
        lStack_108 = *(longlong *)(*(longlong *)(lVar17 + 0x18) + 0x10 + ~uVar25 * 0x30);
        uVar25 = *(ulonglong *)(lStack_118 + 0x120);
        if (uVar25 < uVar19) goto LAB_1411670d9;
LAB_141167127:
        lStack_100 = 0;
      }
      else {
        pbStack_f8 = (byte *)0x0;
        uVar25 = *(ulonglong *)(lStack_118 + 0x118);
        if (uVar25 < uVar19) goto LAB_141167047;
LAB_1411670c2:
        lStack_108 = 0;
        uVar25 = *(ulonglong *)(lStack_118 + 0x120);
        if (uVar19 <= uVar25) goto LAB_141167127;
LAB_1411670d9:
        uVar19 = *(ulonglong *)(*(longlong *)(lVar17 + 0x38) + uVar25 * 8);
        if (uVar19 == 0) goto LAB_141167127;
        lStack_100 = *(longlong *)(*(longlong *)(lVar17 + 0x18) + 0x10 + ~uVar19 * 0x30);
      }
      lStack_180 = *(longlong *)(lVar16 + 0x50);
      uStack_110._0_4_ = 0;
    }
    puVar27 = (undefined8 *)(lStack_180 + (ulonglong)(uint)uStack_110 * 0x10);
    uVar19 = (ulonglong)~*(uint *)(lStack_180 + 8 + (ulonglong)(uint)uStack_110 * 0x10);
  }
  else {
    if ((uint)uStack_110 == (uint)lVar15) {
      do {
        if (puVar29 == puVar1) goto LAB_1411674af;
        uVar5 = *puVar29;
        puVar29 = puVar29 + 1;
        lVar15 = *(longlong *)(*(longlong *)(lStack_120 + 0x1a0) + 0x10 + (ulonglong)uVar5 * 0x48);
      } while (lVar15 == 0);
      lVar17 = *(longlong *)(lStack_120 + 0x1a0) + (ulonglong)uVar5 * 0x48;
      uVar19 = *(ulonglong *)(lVar17 + 0x40);
      if ((*(ulonglong *)(lStack_118 + 0x110) < uVar19) &&
         (uVar25 = *(ulonglong *)
                    (*(longlong *)(lVar17 + 0x38) + *(ulonglong *)(lStack_118 + 0x110) * 8),
         uVar25 != 0)) {
        pbStack_f8 = *(byte **)(*(longlong *)(lVar17 + 0x18) + 0x10 + ~uVar25 * 0x30);
        uVar25 = *(ulonglong *)(lStack_118 + 0x118);
        if (uVar19 <= uVar25) goto LAB_141167081;
LAB_141166ff6:
        uVar25 = *(ulonglong *)(*(longlong *)(lVar17 + 0x38) + uVar25 * 8);
        if (uVar25 == 0) goto LAB_141167081;
        lStack_108 = *(longlong *)(*(longlong *)(lVar17 + 0x18) + 0x10 + ~uVar25 * 0x30);
        uVar25 = *(ulonglong *)(lStack_118 + 0x120);
        if (uVar25 < uVar19) goto LAB_141167098;
LAB_141167103:
        lStack_100 = 0;
      }
      else {
        pbStack_f8 = (byte *)0x0;
        uVar25 = *(ulonglong *)(lStack_118 + 0x118);
        if (uVar25 < uVar19) goto LAB_141166ff6;
LAB_141167081:
        lStack_108 = 0;
        uVar25 = *(ulonglong *)(lStack_118 + 0x120);
        if (uVar19 <= uVar25) goto LAB_141167103;
LAB_141167098:
        uVar19 = *(ulonglong *)(*(longlong *)(lVar17 + 0x38) + uVar25 * 8);
        if (uVar19 == 0) goto LAB_141167103;
        lStack_100 = *(longlong *)(*(longlong *)(lVar17 + 0x18) + 0x10 + ~uVar19 * 0x30);
      }
      lStack_188 = *(longlong *)(lVar17 + 8);
      uStack_110._0_4_ = 0;
    }
    uVar19 = (ulonglong)(uint)uStack_110;
    puVar27 = (undefined8 *)(lStack_188 + uVar19 * 8);
  }
  pbVar22 = pbStack_f8;
  lVar17 = uVar19 * 0x100 + lStack_108;
  uVar6 = *puVar27;
  if ((int)uVar6 == 0) goto LAB_1411674af;
  uStack_110 = (undefined8 *)CONCAT44(uStack_110._4_4_,(uint)uStack_110 + 1);
  if (*(byte *)(lStack_100 + uVar19) != 2) goto LAB_141167390;
  uVar2 = *(undefined4 *)(pbStack_f8 + uVar19 * 0x30 + 0x10);
  uVar3 = *(undefined4 *)(pbStack_f8 + uVar19 * 0x30 + 0x18);
  fVar32 = (float)pdb_140a7d8d0(&uStack_1a0,uVar2,uVar3,uVar13,0x43020000);
  if (fVar37 <= fVar32) {
    fVar32 = (float)pdb_140a7d8d0(auStack_1e0,uVar2,uVar3,uVar13,0x43020000);
    fVar33 = (float)pdb_140a7d8d0(auStack_1d0,uVar2,uVar3,uVar13,0x43020000);
    fVar34 = (float)pdb_140a7d8d0(auStack_1c0,uVar2,uVar3,uVar13,0x43020000);
    fVar35 = (float)pdb_140a7d8d0(auStack_1b0,uVar2,uVar3,uVar13,0x43020000);
    fVar35 = fVar35 + fVar34 + fVar33 + fVar32;
    fVar32 = 0.0;
    if (0.0 <= fVar35) {
      fVar32 = fVar35;
    }
    fVar33 = fVar11;
    if (fVar32 <= fVar11) {
      fVar33 = fVar32;
    }
    if (_DAT_143020f30 < fVar33) goto LAB_141167269;
    goto LAB_141166e83;
  }
  goto LAB_141167269;
LAB_1411674af:
  puVar8 = (ulonglong *)*param_5;
  lVar15 = param_5[1];
  uVar19 = *puVar8;
  uVar26 = 0;
  uVar25 = uVar19 - *(ulonglong *)(lVar15 + 0x18);
  if (uVar19 < *(ulonglong *)(lVar15 + 0x18)) {
    uVar25 = uVar26;
  }
  uVar24 = uVar19 - *(ulonglong *)(lVar15 + 0x38);
  if (uVar19 < *(ulonglong *)(lVar15 + 0x38)) {
    uVar24 = uVar26;
  }
  puVar27 = (undefined8 *)(uVar25 * 0x10 + *(longlong *)(lVar15 + 8));
  uVar19 = *(ulonglong *)(lVar15 + 0x10) - uVar25;
  if (*(ulonglong *)(lVar15 + 0x10) < uVar25) {
    puVar27 = (undefined8 *)0x8;
    uVar19 = uVar26;
  }
  puVar30 = (undefined8 *)(uVar24 * 0x10 + *(longlong *)(lVar15 + 0x28));
  uVar25 = *(ulonglong *)(lVar15 + 0x30) - uVar24;
  if (*(ulonglong *)(lVar15 + 0x30) < uVar24) {
    puVar30 = (undefined8 *)0x8;
    uVar25 = uVar26;
  }
  *puVar8 = (*(longlong *)(lVar15 + 0x40) - uVar25) - uVar19;
  fVar11 = _DAT_142e36f28;
  uStack_110 = puVar30 + uVar25 * 2;
  puVar28 = puVar27;
  do {
    do {
      if ((puVar28 == (undefined8 *)0x0) || (puVar28 == puVar27 + uVar19 * 2)) {
        if ((puVar30 == (undefined8 *)0x0) || (puVar30 == uStack_110)) {
          return;
        }
        puVar31 = puVar30 + 2;
        puVar20 = (undefined8 *)0x0;
        puVar28 = puVar30;
      }
      else {
        puVar20 = puVar28 + 2;
        puVar31 = puVar30;
      }
      *puVar8 = *puVar8 + 1;
      uVar6 = *puVar28;
      puVar28 = puVar20;
      puVar30 = puVar31;
    } while ((((*(ulonglong *)(lStack_120 + 0x10) <= (ulonglong)~(uint)uVar6) ||
              (piVar21 = (int *)((ulonglong)~(uint)uVar6 * 0x18 + *(longlong *)(lStack_120 + 8)),
              piVar21[4] != (int)((ulonglong)uVar6 >> 0x20))) || (*piVar21 == 0)) ||
            ((uVar25 = *(ulonglong *)(piVar21 + 2),
             *(ulonglong *)(lStack_118 + 0x38) <= (uVar25 & 0xffffffff) ||
             ((*(ulonglong *)(*(longlong *)(lStack_118 + 0x28) + (uVar25 >> 6 & 0x3ffffff) * 8) >>
               (uVar25 & 0x3f) & 1) == 0))));
    uVar25 = uVar25 >> 0x20;
    lVar17 = *(longlong *)(lStack_120 + 0x1a0);
    lVar15 = lVar17 + uVar25 * 0x48;
    lVar16 = *(longlong *)(lVar17 + 0x38 + uVar25 * 0x48);
    if (*(ulonglong *)(lStack_118 + 0x110) < *(ulonglong *)(lVar17 + 0x40 + uVar25 * 0x48)) {
      uVar25 = *(ulonglong *)(lVar16 + *(ulonglong *)(lStack_118 + 0x110) * 8);
      lVar15 = *(longlong *)(lVar15 + 0x18);
      if (uVar25 == 0) goto LAB_141167657;
      lVar17 = *(longlong *)(lVar15 + 0x10 + ~uVar25 * 0x30);
    }
    else {
      lVar15 = *(longlong *)(lVar15 + 0x18);
LAB_141167657:
      lVar17 = 0;
    }
    uVar5 = piVar21[1];
    if (*(char *)(*(longlong *)
                   (lVar15 + 0x10 +
                   ~*(ulonglong *)(lVar16 + *(longlong *)(lStack_118 + 0x120) * 8) * 0x30) +
                 (ulonglong)~uVar5) != '\x03') {
      pdb_14007ee60();
      pbVar22 = pub_1406abab0(0x20,8);
      if (pbVar22 == (byte *)0x0) {
LAB_14116781e:
                    /* WARNING: Subroutine does not return */
        pdb_142dc7e11(8,0x20);
      }
      pbStack_f8 = pbVar22;
      pdb_14007ee60();
      pbVar22 = pub_1406abab0(0xc,4);
      puVar14 = puStack_190;
      if (pbVar22 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc7e11(4,0xc);
      }
      lVar17 = lVar17 + (ulonglong)~uVar5 * 0x30;
      uVar7 = *(undefined8 *)(lVar17 + 0x10);
      *(undefined4 *)(pbVar22 + 8) = *(undefined4 *)(lVar17 + 0x18);
      *(undefined8 *)pbVar22 = uVar7;
      pbStack_f8[0] = 1;
      pbStack_f8[1] = 0;
      pbStack_f8[2] = 0;
      pbStack_f8[3] = 0;
      pbStack_f8[4] = 0;
      pbStack_f8[5] = 0;
      pbStack_f8[6] = 0;
      pbStack_f8[7] = 0;
      *(byte **)(pbStack_f8 + 8) = pbVar22;
      pbStack_f8[0x10] = 1;
      pbStack_f8[0x11] = 0;
      pbStack_f8[0x12] = 0;
      pbStack_f8[0x13] = 0;
      pbStack_f8[0x14] = 0;
      pbStack_f8[0x15] = 0;
      pbStack_f8[0x16] = 0;
      pbStack_f8[0x17] = 0;
      pbStack_f8[0x18] = 0;
      uStack_138 = 1;
      uStack_130 = pbStack_f8;
      uStack_128 = 1;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = *puStack_190;
      uVar25 = SUB168(auVar10 * ZEXT816(0x4385df649fccf645),0);
      uVar26 = puStack_190[1] * 0x4385df649fccf645 +
               SUB168(auVar10 * ZEXT816(0x4385df649fccf645),8) + *puStack_190 * 0x2360ed051fc65da4;
      *puStack_190 = uVar25;
      puStack_190[1] = uVar26;
      uVar25 = uVar26 ^ uVar25;
      bVar23 = (byte)(uVar26 >> 0x3a);
      fVar37 = fVar11;
      uStack_150 = pdb_140de9510((float)(((uint)(uVar25 >> bVar23) | (uint)(uVar25 << 0x40 - bVar23)
                                         ) >> 9 | 0x3f800000) + fVar12);
      uStack_158 = uStack_128;
      uStack_168 = (undefined4)uStack_138;
      uStack_164 = uStack_138._4_4_;
      uStack_160 = (undefined4)uStack_130;
      uStack_15c = uStack_130._4_4_;
      uStack_140 = 0;
      uVar25 = puVar14[4];
      fStack_14c = fVar37;
      uStack_148 = uVar6;
      if (uVar25 == puVar14[2]) {
        pdb_142d7e7c0(puStack_178);
      }
      uVar26 = puVar14[3];
      lVar15 = uVar25 * 0x30;
      puVar20 = (undefined8 *)(uVar26 + 0x20 + lVar15);
      *puVar20 = uStack_148;
      puVar20[1] = CONCAT44(uStack_13c,uStack_140);
      puVar20 = (undefined8 *)(uVar26 + 0x10 + lVar15);
      *puVar20 = uStack_158;
      puVar20[1] = CONCAT44(fStack_14c,uStack_150);
      *(undefined8 *)(uVar26 + lVar15) = CONCAT44(uStack_164,uStack_168);
      ((undefined8 *)(uVar26 + lVar15))[1] = CONCAT44(uStack_15c,uStack_160);
      puVar14[4] = uVar25 + 1;
    }
  } while( true );
LAB_141167390:
  if (((1 < *(byte *)(lStack_100 + uVar19)) || (lVar16 = *(longlong *)(lVar17 + 0xa0), lVar16 == 0))
     || (lVar17 = *(longlong *)(lVar17 + 0x98), lVar17 + lVar16 * 0xc == 0xc)) goto LAB_141166e83;
  lVar17 = lVar17 + lVar16 * 0xc;
  uVar2 = *(undefined4 *)(lVar17 + -0xc);
  uVar3 = *(undefined4 *)(lVar17 + -4);
  fVar32 = (float)pdb_140a7d8d0(&uStack_1a0,uVar2,uVar3,uVar13,0x43020000);
  fVar33 = (float)pdb_140a7d8d0(auStack_1e0,uVar2,uVar3,uVar13,0x43020000);
  fVar34 = (float)pdb_140a7d8d0(auStack_1d0,uVar2,uVar3,uVar13,0x43020000);
  fVar35 = (float)pdb_140a7d8d0(auStack_1c0,uVar2,uVar3,uVar13,0x43020000);
  fVar36 = (float)pdb_140a7d8d0(auStack_1b0,uVar2,uVar3,uVar13,0x43020000);
  if (_DAT_142e3b1d8 <= fVar32) {
    fVar36 = fVar33 + fVar34 + fVar35 + fVar36;
    fVar32 = 0.0;
    if (0.0 <= fVar36) {
      fVar32 = fVar36;
    }
    fVar33 = fVar11;
    if (fVar32 <= fVar11) {
      fVar33 = fVar32;
    }
    if (fVar33 <= _DAT_143007998) goto LAB_141166e83;
  }
LAB_141167269:
  pdb_14007ee60();
  pbVar18 = pub_1406abab0(0x20,8);
  if (pbVar18 == (byte *)0x0) goto LAB_14116781e;
  pbStack_170 = pbVar18;
  pdb_14007ee60();
  pbVar18 = pub_1406abab0(0xc,4);
  puVar8 = puStack_190;
  if (pbVar18 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(4,0xc);
  }
  uVar7 = *(undefined8 *)(pbVar22 + uVar19 * 0x30 + 0x10);
  *(undefined4 *)(pbVar18 + 8) = *(undefined4 *)(pbVar22 + uVar19 * 0x30 + 0x18);
  *(undefined8 *)pbVar18 = uVar7;
  pbStack_170[0] = 1;
  pbStack_170[1] = 0;
  pbStack_170[2] = 0;
  pbStack_170[3] = 0;
  pbStack_170[4] = 0;
  pbStack_170[5] = 0;
  pbStack_170[6] = 0;
  pbStack_170[7] = 0;
  *(byte **)(pbStack_170 + 8) = pbVar18;
  pbStack_170[0x10] = 1;
  pbStack_170[0x11] = 0;
  pbStack_170[0x12] = 0;
  pbStack_170[0x13] = 0;
  pbStack_170[0x14] = 0;
  pbStack_170[0x15] = 0;
  pbStack_170[0x16] = 0;
  pbStack_170[0x17] = 0;
  pbStack_170[0x18] = 0;
  uStack_138 = 1;
  uStack_130 = pbStack_170;
  uStack_128 = 1;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = *puStack_190;
  uVar19 = SUB168(auVar9 * ZEXT816(0x4385df649fccf645),0);
  uVar25 = puStack_190[1] * 0x4385df649fccf645 +
           SUB168(auVar9 * ZEXT816(0x4385df649fccf645),8) + *puStack_190 * 0x2360ed051fc65da4;
  *puStack_190 = uVar19;
  puStack_190[1] = uVar25;
  uVar19 = uVar25 ^ uVar19;
  bVar23 = (byte)(uVar25 >> 0x3a);
  fVar32 = fVar11;
  uStack_150 = pdb_140de9510((float)(((uint)(uVar19 >> bVar23) | (uint)(uVar19 << 0x40 - bVar23)) >>
                                     9 | 0x3f800000) + fVar12);
  uStack_158 = uStack_128;
  uStack_168 = (undefined4)uStack_138;
  uStack_164 = uStack_138._4_4_;
  uStack_160 = (undefined4)uStack_130;
  uStack_15c = uStack_130._4_4_;
  uStack_140 = 0;
  uVar19 = puVar8[4];
  fStack_14c = fVar32;
  uStack_148 = uVar6;
  if (uVar19 == puVar8[2]) {
    pdb_142d7e7c0(puStack_178);
  }
  uVar25 = puVar8[3];
  lVar17 = uVar19 * 0x30;
  puVar27 = (undefined8 *)(uVar25 + 0x20 + lVar17);
  *puVar27 = uStack_148;
  puVar27[1] = CONCAT44(uStack_13c,uStack_140);
  puVar27 = (undefined8 *)(uVar25 + 0x10 + lVar17);
  *puVar27 = uStack_158;
  puVar27[1] = CONCAT44(fStack_14c,uStack_150);
  *(undefined8 *)(uVar25 + lVar17) = CONCAT44(uStack_164,uStack_168);
  ((undefined8 *)(uVar25 + lVar17))[1] = CONCAT44(uStack_15c,uStack_160);
  puVar8[4] = uVar19 + 1;
  goto LAB_141166e83;
}

