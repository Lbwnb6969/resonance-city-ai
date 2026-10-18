// VA 0x1405bdba0, PDB extent 2838 bytes
// system_decorator::decorator_visual::playermade_stairs::playermade_stairs_assemble_visuals::playermade_stairs_assemble::closure$40<true>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/playermade_stairs/playermade_stairs_assemble_visuals.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_decorator::decorator_visual::playermade_stairs::playermade_stairs_assemble_visuals::playermade_stairs_assemble::closure$40<true>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/playermade_stairs/playermade_stairs_assemble_visuals.rs
   Extent: 2838 */

void pdb_1405bdba0(undefined8 *param_1,longlong *param_2,char param_3)

{
  ulonglong uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  code *pcVar12;
  byte *pbVar13;
  float *pfVar14;
  uint uVar15;
  longlong lVar16;
  undefined4 *puVar17;
  ulonglong uVar18;
  byte *pbVar19;
  ulonglong uVar20;
  byte *pbVar21;
  longlong lVar22;
  float extraout_XMM0_Da;
  float fVar23;
  float fVar24;
  byte *pbStack_1f8;
  byte *pbStack_1f0;
  byte *pbStack_1e8;
  longlong lStack_1e0;
  byte *pbStack_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  float fStack_1c8;
  undefined4 uStack_1c4;
  byte *pbStack_1c0;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  byte *pbStack_1b0;
  longlong lStack_1a8;
  byte *pbStack_1a0;
  undefined4 uStack_198;
  undefined4 uStack_194;
  float fStack_190;
  undefined4 uStack_18c;
  byte *pbStack_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  byte *pbStack_178;
  longlong lStack_170;
  byte *pbStack_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  float fStack_158;
  undefined4 uStack_154;
  byte *pbStack_148;
  undefined8 uStack_140;
  byte *pbStack_138;
  longlong lStack_130;
  byte *pbStack_128;
  byte *pbStack_110;
  byte *pbStack_108;
  byte *pbStack_100;
  byte *pbStack_f8;
  byte *pbStack_f0;
  byte *pbStack_e8;
  ulonglong uStack_e0;
  longlong lStack_d8;
  byte *pbStack_d0;
  longlong lStack_c8;
  ulonglong uStack_b8;
  undefined8 *puStack_b0;
  float *pfStack_a8;
  code *pcStack_a0;
  float *pfStack_98;
  float fStack_8c;
  byte *pbStack_88;
  undefined8 uStack_80;
  
  uStack_80 = 0xfffffffffffffffe;
  lVar16 = *param_2;
  lVar22 = *(longlong *)(lVar16 + 8);
  uStack_b8 = *(ulonglong *)(lVar16 + 0x10);
  uVar20 = uStack_b8 * 4;
  uStack_e0 = uVar20;
  puStack_b0 = param_1;
  if (uStack_b8 == 0) {
    pbStack_88 = (byte *)0x4;
    lVar16 = 0;
  }
  else {
    pdb_14007ee60();
    pbStack_88 = pub_1406abab0(uVar20,4);
    if (pbStack_88 == (byte *)0x0) {
      pdb_142dc7e2a(4,uStack_e0);
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    if (uStack_b8 < 9) {
      uVar20 = 0;
    }
    else {
      uVar20 = 8;
      if ((uStack_b8 & 7) != 0) {
        uVar20 = (ulonglong)((uint)uStack_b8 & 7);
      }
      uVar20 = uStack_b8 - uVar20;
      puVar17 = (undefined4 *)(lVar22 + 0x58);
      uVar18 = 0;
      do {
        uVar2 = puVar17[-0x12];
        uVar3 = puVar17[-0xf];
        uVar4 = puVar17[-0xc];
        uVar5 = *puVar17;
        uVar6 = puVar17[-3];
        uVar7 = puVar17[-6];
        uVar8 = puVar17[-9];
        pbVar19 = pbStack_88 + uVar18 * 4;
        *(undefined4 *)pbVar19 = puVar17[-0x15];
        *(undefined4 *)(pbVar19 + 4) = uVar2;
        *(undefined4 *)(pbVar19 + 8) = uVar3;
        *(undefined4 *)(pbVar19 + 0xc) = uVar4;
        pbVar19 = pbStack_88 + uVar18 * 4 + 0x10;
        *(undefined4 *)pbVar19 = uVar8;
        *(undefined4 *)(pbVar19 + 4) = uVar7;
        *(undefined4 *)(pbVar19 + 8) = uVar6;
        *(undefined4 *)(pbVar19 + 0xc) = uVar5;
        uVar18 = uVar18 + 8;
        puVar17 = puVar17 + 0x18;
      } while (uVar20 != uVar18);
    }
    puVar17 = (undefined4 *)(lVar22 + uVar20 * 0xc + 4);
    do {
      *(undefined4 *)(pbStack_88 + uVar20 * 4) = *puVar17;
      uVar20 = uVar20 + 1;
      puVar17 = puVar17 + 3;
    } while (uStack_b8 != uVar20);
    lVar22 = *(longlong *)(lVar16 + 8);
    lVar16 = *(longlong *)(lVar16 + 0x10);
  }
  pdb_14017ede0(&pbStack_188,lVar22,lVar22 + lVar16 * 0xc);
  pdb_140080c90(&pbStack_1c0,&pbStack_188,0);
  pbStack_1f0 = (byte *)CONCAT44(uStack_1b4,uStack_1b8);
  uStack_140 = pbStack_1b0;
  pbStack_148 = pbStack_1f0;
  if (SBORROW8(0,(longlong)pbStack_1c0)) {
    puStack_b0[1] = pbStack_1f0;
    puStack_b0[2] = pbStack_1b0;
    *puStack_b0 = 0x8000000000000000;
    pbVar19 = pbStack_88;
  }
  else {
    uStack_1d0 = uStack_198;
    uStack_1cc = uStack_194;
    fStack_1c8 = fStack_190;
    uStack_1c4 = uStack_18c;
    lStack_1e0 = lStack_1a8;
    pbStack_1d8 = pbStack_1a0;
    pbStack_1e8 = pbStack_1b0;
    pbStack_1f8 = pbStack_1c0;
    fStack_8c = _DAT_142f6e3f0 / fStack_190;
    if (param_3 == '\0') {
      fVar23 = _DAT_142e36f28 - fStack_8c;
      if (_DAT_142e36f28 - fStack_8c <= _DAT_142e36f50) {
        fVar23 = _DAT_142e36f50;
      }
      fVar24 = _DAT_142e36f28;
      fStack_8c = fVar23;
      if (_DAT_142e36f28 < fVar23) {
        pfStack_a8 = &fStack_8c;
        pcStack_a0 = pdb_140f70fc0;
                    /* WARNING: Subroutine does not return */
        pdb_142dc83d0(&UNK_142f948c8,&pfStack_a8,&UNK_142f6ed20);
      }
    }
    else {
      if (_DAT_142e36f50 <= fStack_8c) {
        fStack_8c = _DAT_142e36f50;
      }
      fVar23 = 0.0;
      fVar24 = fStack_8c;
      if (fStack_8c < 0.0) {
        pfStack_a8 = &fStack_8c;
        pcStack_a0 = pdb_140f70fc0;
                    /* WARNING: Subroutine does not return */
        pdb_142dc83d0(&UNK_142f948c8,&pfStack_a8,&UNK_142f6ed38);
      }
    }
    pdb_140082040(&pbStack_1c0,&pbStack_1f8,fVar23,fVar24);
    lStack_d8 = CONCAT44(uStack_1b4,uStack_1b8);
    pbStack_d0 = pbStack_1b0;
    if (SBORROW8(0,(longlong)pbStack_1c0)) {
      puStack_b0[1] = lStack_d8;
      puStack_b0[2] = pbStack_1b0;
      *puStack_b0 = 0x8000000000000000;
      pbVar19 = pbStack_88;
    }
    else {
      uStack_160 = uStack_198;
      uStack_15c = uStack_194;
      fStack_158 = fStack_190;
      uStack_154 = uStack_18c;
      lStack_170 = lStack_1a8;
      pbStack_168 = pbStack_1a0;
      uStack_180 = uStack_1b8;
      uStack_17c = uStack_1b4;
      pbStack_178 = pbStack_1b0;
      pbStack_188 = pbStack_1c0;
      pdb_1400813a0(&pbStack_148,&pbStack_188,4,1);
      pbVar19 = pbStack_88;
      pbVar13 = pbStack_138;
      pbVar21 = uStack_140;
      pbStack_f8 = uStack_140;
      pbStack_f0 = pbStack_138;
      if (SBORROW8(0,(longlong)pbStack_148)) {
        puStack_b0[1] = uStack_140;
        puStack_b0[2] = pbStack_138;
        *puStack_b0 = 0x8000000000000000;
        lStack_130 = lStack_170;
        pbStack_128 = pbStack_168;
        if (pbStack_188 != (byte *)0x0) {
          pub_1406abac0((byte *)CONCAT44(uStack_17c,uStack_180),(longlong)pbStack_188 << 3,4);
          lStack_130 = lStack_170;
          pbStack_128 = pbStack_168;
        }
      }
      else {
        pbStack_108 = pbStack_148;
        if (pbStack_188 != (byte *)0x0) {
          pub_1406abac0((byte *)CONCAT44(uStack_17c,uStack_180),(longlong)pbStack_188 << 3,4);
        }
        if (lStack_170 != 0) {
          pub_1406abac0(pbStack_168,lStack_170 << 2,4);
        }
        lStack_d8 = 0;
        pbStack_d0 = (byte *)0x4;
        lStack_c8 = 0;
        pfStack_a8 = (float *)0x0;
        pcStack_a0 = (code *)0x4;
        pfStack_98 = (float *)0x0;
        pbStack_148 = (byte *)0x0;
        uStack_140 = (byte *)0x4;
        pbStack_138 = (byte *)0x0;
        pbStack_110 = pbVar21 + (longlong)pbVar13 * 8;
        lVar16 = param_2[1];
        lVar22 = param_2[2];
        pbStack_100 = pbVar21;
        while (pbStack_e8 = pbVar21, pbVar21 != pbStack_110) {
          uVar15 = pdb_140081190(&pbStack_1f8,*(undefined4 *)pbVar21,*(undefined4 *)(pbVar21 + 4));
          lVar11 = lStack_c8;
          uVar18 = (ulonglong)uVar15;
          uVar20 = *(ulonglong *)(lVar16 + 0x10);
          if (uVar20 <= uVar18) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2(uVar18,uVar20,&UNK_142f6ed50);
          }
          uVar1 = uVar18 + 1;
          if (uVar20 <= uVar1) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2(uVar1,uVar20,&UNK_142f6ed50);
          }
          lVar10 = *(longlong *)(lVar16 + 8);
          fVar23 = *(float *)(lVar10 + uVar18 * 4);
          fVar24 = *(float *)(lVar10 + 4 + uVar18 * 4);
          if (lStack_c8 == lStack_d8) {
            pdb_142d89720(&lStack_d8);
          }
          pfVar14 = pfStack_98;
          *(float *)(pbStack_d0 + lVar11 * 4) = (fVar24 - fVar23) * extraout_XMM0_Da + fVar23;
          lStack_c8 = lVar11 + 1;
          uVar20 = *(ulonglong *)(lVar22 + 0x10);
          if (uVar20 <= uVar18) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2(uVar18,uVar20,&UNK_142f6ed68);
          }
          if (uVar20 <= uVar1) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2(uVar1,uVar20,&UNK_142f6ed68);
          }
          lVar11 = *(longlong *)(lVar22 + 8);
          uVar9 = *(undefined8 *)(lVar11 + uVar18 * 8);
          fVar23 = (float)uVar9;
          fVar24 = (float)((ulonglong)uVar9 >> 0x20);
          uVar9 = *(undefined8 *)(lVar11 + 8 + uVar18 * 8);
          if (pfStack_98 == pfStack_a8) {
            pdb_142db07d0(&pfStack_a8);
          }
          *(ulonglong *)(pcStack_a0 + (longlong)pfVar14 * 8) =
               CONCAT44(extraout_XMM0_Da * ((float)((ulonglong)uVar9 >> 0x20) - fVar24) + fVar24,
                        extraout_XMM0_Da * ((float)uVar9 - fVar23) + fVar23);
          pfStack_98 = (float *)((longlong)pfVar14 + 1);
          if (uStack_b8 <= uVar18) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2(uVar18,uStack_b8,&UNK_142f6ed80);
          }
          if (uStack_b8 <= uVar1) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2(uVar1,uStack_b8,&UNK_142f6ed80);
          }
          pdb_140df4540(&pbStack_1c0,pbStack_e8,
                        (*(float *)(pbStack_88 + uVar18 * 4 + 4) -
                        *(float *)(pbStack_88 + uVar18 * 4)) * extraout_XMM0_Da +
                        *(float *)(pbStack_88 + uVar18 * 4));
          pbVar19 = pbStack_138;
          if (pbStack_138 == pbStack_148) {
            pdb_142db7820(&pbStack_148);
          }
          pbVar21 = pbStack_e8 + 8;
          *(undefined4 *)(uStack_140 + (longlong)pbVar19 * 0xc + 8) = uStack_1b8;
          *(byte **)(uStack_140 + (longlong)pbVar19 * 0xc) = pbStack_1c0;
          pbStack_138 = pbVar19 + 1;
        }
        pbStack_178 = pbStack_138;
        pbStack_188 = pbStack_148;
        uStack_180 = (undefined4)uStack_140;
        uStack_17c = uStack_140._4_4_;
        pdb_140080930(&pbStack_1c0,&pbStack_188,1);
        pbVar19 = pbStack_88;
        pbStack_f8 = (byte *)CONCAT44(uStack_1b4,uStack_1b8);
        pbStack_f0 = pbStack_1b0;
        if (SBORROW8(0,(longlong)pbStack_1c0)) {
          puStack_b0[1] = pbStack_f8;
          puStack_b0[2] = pbStack_1b0;
          *puStack_b0 = 0x8000000000000000;
          if (pfStack_a8 != (float *)0x0) {
            pub_1406abac0((byte *)pcStack_a0,(longlong)pfStack_a8 << 3,4);
          }
          if (lStack_d8 != 0) {
            pub_1406abac0(pbStack_d0,lStack_d8 << 2,4);
          }
        }
        else {
          puStack_b0[5] = CONCAT44(uStack_194,uStack_198);
          puStack_b0[6] = CONCAT44(uStack_18c,fStack_190);
          puStack_b0[3] = lStack_1a8;
          puStack_b0[4] = pbStack_1a0;
          puStack_b0[1] = pbStack_f8;
          puStack_b0[2] = pbStack_1b0;
          puStack_b0[7] = pfStack_a8;
          puStack_b0[8] = pcStack_a0;
          puStack_b0[9] = pfStack_98;
          puStack_b0[0xc] = lStack_c8;
          puStack_b0[10] = lStack_d8;
          puStack_b0[0xb] = pbStack_d0;
          *puStack_b0 = pbStack_1c0;
        }
        if (pbStack_108 != (byte *)0x0) {
          pub_1406abac0(pbStack_100,(longlong)pbStack_108 << 3,4);
        }
      }
      if (lStack_130 != 0) {
        pub_1406abac0(pbStack_128,lStack_130 << 2,4);
      }
    }
    if (pbStack_1f8 != (byte *)0x0) {
      pub_1406abac0(pbStack_1f0,(longlong)pbStack_1f8 << 3,4);
    }
    if (lStack_1e0 != 0) {
      pub_1406abac0(pbStack_1d8,lStack_1e0 << 2,4);
    }
  }
  if (uStack_b8 != 0) {
    pub_1406abac0(pbVar19,uStack_e0,4);
  }
  return;
}

