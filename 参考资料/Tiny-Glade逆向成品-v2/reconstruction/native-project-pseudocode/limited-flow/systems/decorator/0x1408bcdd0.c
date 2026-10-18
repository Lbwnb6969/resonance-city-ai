// VA 0x1408bcdd0, PDB extent 11176 bytes
// system_decorator::decorator_visual::playermade_stairs::utils::stairs_wooden_railings_assemble::assemble_deferred_wooden_railings
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/playermade_stairs/utils/stairs_wooden_railings_assemble.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Removing unreachable block (ram,0x000140f3c374) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_decorator::decorator_visual::playermade_stairs::utils::stairs_wooden_railings_assemble::assemble_deferred_wooden_railings
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/playermade_stairs/utils/stairs_wooden_railings_assemble.rs
   Extent: 11176 */

void pdb_1408bcdd0(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                  longlong *param_5,undefined8 param_6,undefined4 param_7,byte param_8)

{
  float *pfVar1;
  undefined8 *puVar2;
  float *pfVar3;
  unkuint9 Var4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ushort uVar8;
  uint uVar9;
  uint uVar10;
  byte *pbVar11;
  ulonglong uVar12;
  longlong lVar13;
  byte *pbVar14;
  undefined8 uVar15;
  float *pfVar16;
  float *pfVar17;
  float *pfVar18;
  byte *pbVar19;
  longlong lVar20;
  ushort uVar21;
  float *pfVar22;
  float *pfVar23;
  longlong lVar24;
  ulonglong uVar25;
  longlong lVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  longlong lVar29;
  float *pfVar30;
  longlong lVar31;
  float *pfVar32;
  float fVar33;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float fVar34;
  undefined4 uVar35;
  float extraout_XMM0_Da_01;
  float extraout_XMM0_Da_02;
  float fVar36;
  float fVar37;
  float afStack_2c8 [2];
  undefined8 uStack_2c0;
  float *apfStack_2b8 [2];
  byte *pbStack_2a8;
  float *pfStack_2a0;
  undefined8 uStack_298;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  longlong lStack_280;
  float *pfStack_278;
  byte *pbStack_270;
  float *pfStack_268;
  float *pfStack_260;
  float *pfStack_258;
  float *pfStack_250;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined8 uStack_238;
  longlong lStack_228;
  byte *pbStack_220;
  longlong lStack_218;
  float *apfStack_210 [4];
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  float afStack_1e0 [2];
  undefined8 uStack_1d8;
  float afStack_1d0 [2];
  float *pfStack_1c8;
  byte *pbStack_1c0;
  float *pfStack_1b8;
  undefined8 uStack_1b0;
  float *pfStack_1a8;
  float *pfStack_1a0;
  byte *pbStack_198;
  byte *pbStack_190;
  longlong lStack_188;
  longlong lStack_180;
  undefined4 uStack_174;
  longlong lStack_170;
  byte *pbStack_168;
  longlong lStack_160;
  longlong lStack_158;
  byte *pbStack_150;
  longlong lStack_148;
  byte *pbStack_140;
  float *pfStack_138;
  float *pfStack_130;
  float *pfStack_128;
  byte *pbStack_120;
  float *pfStack_118;
  float *pfStack_110;
  float *pfStack_108;
  float *pfStack_100;
  byte bStack_f3;
  undefined1 uStack_f1;
  undefined8 uStack_f0;
  
  fVar34 = _DAT_142e36f24;
  uStack_f0 = 0xfffffffffffffffe;
  lVar20 = param_5[2];
  bStack_f3 = param_8;
  uStack_288 = param_3;
  uStack_284 = param_2;
  if (param_8 < 2 || lVar20 == 0) {
    pbStack_120 = (byte *)param_5;
    pfStack_110 = (float *)param_5[1];
    pfStack_100 = (float *)0x0;
    lVar26 = (longlong)pfStack_110;
    pfStack_108 = (float *)lVar20;
    while (pfVar30 = pfStack_110, pfStack_108 != pfStack_100) {
      pfStack_100 = (float *)((longlong)pfStack_100 + 1);
      pdb_1404a41c0(lVar26);
      lVar26 = lVar26 + 0x68;
    }
    if (*(longlong *)pbStack_120 != 0) {
      uVar15 = GetProcessHeap(pfStack_110,*(longlong *)pbStack_120 * 0x68);
                    /* WARNING: Could not recover jumptable at 0x000140f3c38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      HeapFree(uVar15,0,pfVar30);
      return;
    }
  }
  else {
    uStack_174 = param_7;
    lStack_228 = 0;
    pbStack_220 = (byte *)0x8;
    lStack_218 = 0;
    pfStack_258 = (float *)*param_5;
    pfStack_268 = (float *)param_5[1];
    pfVar22 = pfStack_268 + lVar20 * 0x1a;
    pfStack_128 = pfStack_258;
    pfStack_138 = pfStack_268;
    pfVar30 = pfStack_268;
    pfStack_260 = pfStack_268;
    pfStack_250 = pfVar22;
    while (lVar20 = lStack_218, pfVar17 = pfVar22, pfVar30 != pfVar22) {
      pfVar17 = pfVar30 + 0x1a;
      pfVar3 = *(float **)pfVar30;
      pfStack_260 = pfVar17;
      if (SBORROW8(0,(longlong)pfVar3)) break;
      apfStack_210[0] = pfVar3;
      uStack_1b0 = *(undefined8 *)(pfVar30 + 0x18);
      pfStack_1b8 = *(float **)(pfVar30 + 0x16);
      uVar15 = uStack_1b0;
      pfStack_1c8 = *(float **)(pfVar30 + 0x12);
      pbStack_1c0 = *(byte **)(pfVar30 + 0x14);
      pfVar16 = *(float **)(pfVar30 + 2);
      pfVar1 = *(float **)(pfVar30 + 4);
      afStack_1e0[0] = pfVar30[0xc];
      pbVar14 = *(byte **)(pfVar30 + 0xc);
      uStack_1d8._0_4_ = pfVar30[0xe];
      uStack_1d8._4_4_ = pfVar30[0xf];
      afStack_1d0[0] = pfVar30[0x10];
      afStack_1d0[1] = pfVar30[0x11];
      uStack_1e8 = *(ulonglong *)(pfVar30 + 10);
      afStack_1e0[1] = pfVar30[0xd];
      apfStack_210[3] = *(float **)(pfVar30 + 6);
      uStack_1f0 = *(byte **)(pfVar30 + 8);
      apfStack_210[1] = pfVar16;
      apfStack_210[2] = pfVar1;
      lVar26 = lStack_218 * 0x68;
      if ((lStack_218 == 0) || (pbVar11 = pbStack_220 + lVar26 + -0x68, pbVar11 == (byte *)0x0)) {
LAB_1408bd0d0:
        uStack_298 = uStack_1b0;
        pbStack_2a8 = *(byte **)(pfVar30 + 0x14);
        pfStack_2a0 = *(float **)(pfVar30 + 0x16);
        apfStack_2b8[0] = *(float **)(pfVar30 + 0x10);
        apfStack_2b8[1] = pfStack_1c8;
        afStack_2c8[0] = afStack_1e0[0];
        afStack_2c8[1] = pfVar30[0xd];
        uStack_2c0._0_4_ = pfVar30[0xe];
        uStack_2c0._4_4_ = pfVar30[0xf];
        uStack_1b0 = uVar15;
        if (lStack_218 == lStack_228) {
          pdb_142d8d8d0(&lStack_228);
        }
        *(undefined8 *)(pbStack_220 + lVar26 + 0x60) = uStack_1b0;
        *(byte **)(pbStack_220 + lVar26 + 0x50) = pbStack_1c0;
        *(float **)(pbStack_220 + lVar26 + 0x50 + 8) = pfStack_1b8;
        *(ulonglong *)(pbStack_220 + lVar26 + 0x40) = CONCAT44(afStack_1d0[1],afStack_1d0[0]);
        *(float **)(pbStack_220 + lVar26 + 0x40 + 8) = pfStack_1c8;
        *(ulonglong *)(pbStack_220 + lVar26 + 0x30) = CONCAT44(afStack_1e0[1],afStack_1e0[0]);
        *(ulonglong *)(pbStack_220 + lVar26 + 0x30 + 8) =
             CONCAT44(uStack_1d8._4_4_,(float)uStack_1d8);
        *(byte **)(pbStack_220 + lVar26 + 0x20) = uStack_1f0;
        *(ulonglong *)(pbStack_220 + lVar26 + 0x20 + 8) = uStack_1e8;
        *(float **)(pbStack_220 + lVar26 + 0x10) = apfStack_210[2];
        *(float **)(pbStack_220 + lVar26 + 0x10 + 8) = apfStack_210[3];
        *(float **)(pbStack_220 + lVar26) = apfStack_210[0];
        *(float **)(pbStack_220 + lVar26 + 8) = apfStack_210[1];
        lStack_218 = lVar20 + 1;
        pfVar30 = pfVar17;
      }
      else {
        pbVar19 = pbStack_220 + lVar26;
        if ((*(float *)(pbVar19 + -8) != (float)uStack_1b0) ||
           (NAN(*(float *)(pbVar19 + -8)) || NAN((float)uStack_1b0))) goto LAB_1408bd0d0;
        lVar29 = *(longlong *)(pbVar19 + -0x58);
        if ((lVar29 == 0) || (lVar13 = *(longlong *)(pbVar19 + -0x60), lVar13 + lVar29 * 0xc == 0xc)
           ) {
          uStack_f1 = 1;
          uStack_1b0 = uVar15;
                    /* WARNING: Subroutine does not return */
          pdb_142dc8150(&UNK_143015e60);
        }
        if (pfVar1 == (float *)0x0) {
          uStack_f1 = 1;
          uStack_1b0 = uVar15;
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(0,0,&UNK_143015e78);
        }
        lVar24 = lVar13 + lVar29 * 0xc;
        fVar33 = *(float *)(lVar24 + -8) - pfVar16[1];
        fVar36 = *(float *)(lVar24 + -0xc) - *pfVar16;
        fVar37 = *(float *)(lVar24 + -4) - pfVar16[2];
        if (fVar34 <= fVar37 * fVar37 + fVar33 * fVar33 + fVar36 * fVar36) goto LAB_1408bd0d0;
        pfStack_100 = (float *)pbVar19;
        pbStack_120 = pbVar14;
        if ((!SBORROW8(0,(longlong)pbVar14) != !SBORROW8(0,*(longlong *)(pbVar19 + -0x38))) ||
           (pfStack_1a8 = pfStack_1c8,
           SBORROW8(0,(longlong)pfStack_1c8) ==
           !SBORROW8(0,*(longlong *)(pbStack_220 + lVar26 + -0x20)))) goto LAB_1408bd0d0;
        if ((ulonglong)(*(longlong *)pbVar11 - lVar29) < (longlong)pfVar1 - 1U) {
          uStack_f1 = 1;
          uStack_1b0 = uVar15;
          pdb_142d7f1b0(pbVar11,lVar29,(longlong)pfVar1 - 1U,4,0xc);
          lVar13 = *(longlong *)((longlong)pfStack_100 + -0x60);
          lVar29 = *(longlong *)((longlong)pfStack_100 + -0x58);
          pfStack_108 = pfVar22;
          pfStack_110 = pfVar17;
          pfVar30 = pfStack_100;
        }
        else {
          pfStack_108 = pfVar22;
          pfStack_110 = pfVar17;
          uStack_1b0 = uVar15;
          pfVar30 = pfStack_100;
        }
        if (pfVar1 != (float *)0x1) {
          if (pfVar1 == (float *)0x2) {
            lVar26 = 0;
          }
          else {
            uVar25 = (longlong)pfVar1 * 0xc - 0xc;
            lVar20 = lVar13 + lVar29 * 0xc;
            lVar24 = 0xc;
            lVar26 = 0;
            do {
              *(undefined4 *)(lVar20 + -4 + lVar24) =
                   *(undefined4 *)((longlong)pfVar16 + lVar24 + 8);
              *(undefined8 *)(lVar20 + -0xc + lVar24) = *(undefined8 *)((longlong)pfVar16 + lVar24);
              *(undefined8 *)(lVar20 + lVar24) = *(undefined8 *)((longlong)pfVar16 + lVar24 + 0xc);
              *(undefined4 *)(lVar20 + 8 + lVar24) =
                   *(undefined4 *)((longlong)pfVar16 + lVar24 + 0x14);
              lVar24 = lVar24 + 0x18;
              lVar26 = lVar26 + -2;
            } while (-lVar26 != (uVar25 / 0xc & 0xfffffffffffffffe));
            lVar29 = lVar29 - lVar26;
            if (((uVar25 >> 2) * -0x5555555555555555 & 1) == 0) goto LAB_1408bd255;
            lVar26 = -lVar26;
          }
          *(float *)(lVar13 + 8 + lVar29 * 0xc) = pfVar16[lVar26 * 3 + 5];
          *(undefined8 *)(lVar13 + lVar29 * 0xc) = *(undefined8 *)(pfVar16 + lVar26 * 3 + 3);
          lVar29 = lVar29 + 1;
        }
LAB_1408bd255:
        *(longlong *)((longlong)pfVar30 + -0x58) = lVar29;
        uVar25 = 0;
        pfStack_110 = pfVar17;
        pfStack_108 = pfVar22;
        pfStack_100 = pfVar30;
        while (uVar12 = uVar25, uVar25 = uStack_1e8, pbVar14 = uStack_1f0, uVar12 < 2) {
          uVar25 = uVar12 + 1;
          if ((!SBORROW8(0,*(longlong *)((longlong)pfVar30 + uVar12 * 0x18 + -0x38))) &&
             (!SBORROW8(0,*(longlong *)(afStack_1e0 + uVar12 * 6)))) {
            pbVar14 = (byte *)((longlong)pfVar30 + uVar12 * 0x18 + -0x38);
            uVar28 = *(ulonglong *)(afStack_1d0 + uVar12 * 6);
            uVar27 = (uVar28 - 1) + (ulonglong)(uVar28 == 0);
            lVar20 = (&uStack_1d8)[uVar12 * 3];
            lVar26 = *(longlong *)(pbVar14 + 0x10);
            if ((ulonglong)(*(longlong *)((longlong)pfVar30 + uVar12 * 0x18 + -0x38) - lVar26) <
                uVar27) {
              uStack_f1 = 1;
              pfStack_130 = pfVar16;
              pdb_142d7f1b0(pbVar14,lVar26,uVar27,4,0xc);
              lVar26 = *(longlong *)(pbVar14 + 0x10);
              pfVar16 = pfStack_130;
            }
            if (1 < uVar28) {
              lVar29 = *(longlong *)(pbVar14 + 8);
              if (uVar28 == 2) {
                lVar13 = 0;
              }
              else {
                uVar12 = uVar28 * 0xc - 0xc;
                lVar24 = lVar29 + lVar26 * 0xc;
                lVar31 = 0xc;
                lVar13 = 0;
                do {
                  *(undefined4 *)(lVar24 + -4 + lVar31) = *(undefined4 *)(lVar20 + 8 + lVar31);
                  *(undefined8 *)(lVar24 + -0xc + lVar31) = *(undefined8 *)(lVar20 + lVar31);
                  *(undefined8 *)(lVar24 + lVar31) = *(undefined8 *)(lVar20 + 0xc + lVar31);
                  *(undefined4 *)(lVar24 + 8 + lVar31) = *(undefined4 *)(lVar20 + 0x14 + lVar31);
                  lVar31 = lVar31 + 0x18;
                  lVar13 = lVar13 + -2;
                } while (-lVar13 != (uVar12 / 0xc & 0xfffffffffffffffe));
                lVar26 = lVar26 - lVar13;
                if (((uVar12 >> 2) * -0x5555555555555555 & 1) == 0) goto LAB_1408bd28c;
                lVar13 = -lVar13;
              }
              *(undefined4 *)(lVar29 + 8 + lVar26 * 0xc) =
                   *(undefined4 *)(lVar20 + 0x14 + lVar13 * 0xc);
              *(undefined8 *)(lVar29 + lVar26 * 0xc) = *(undefined8 *)(lVar20 + 0xc + lVar13 * 0xc);
              lVar26 = lVar26 + 1;
            }
LAB_1408bd28c:
            *(longlong *)(pbVar14 + 0x10) = lVar26;
          }
        }
        uVar12 = (uStack_1e8 - 1) + (ulonglong)(uStack_1e8 == 0);
        lVar20 = *(longlong *)((longlong)pfStack_100 + -0x40);
        uVar15 = uStack_1b0;
        pfVar30 = pfStack_110;
        pfVar22 = pfStack_108;
        if ((ulonglong)(*(longlong *)((longlong)pfStack_100 + -0x50) - lVar20) < uVar12) {
          uStack_f1 = 1;
          pdb_142d7f1b0((byte *)((longlong)pfStack_100 + -0x50),lVar20,uVar12,4,4);
          lVar20 = *(longlong *)((longlong)pfStack_100 + -0x40);
          uVar15 = uStack_1b0;
          pfVar30 = pfStack_110;
          pfVar22 = pfStack_108;
        }
        if (1 < uVar25) {
          lVar26 = *(longlong *)((longlong)pfStack_100 + -0x48);
          uVar25 = uVar25 + 0x3fffffffffffffff;
          uVar12 = uVar25 & 0x3fffffffffffffff;
          if ((uVar12 < 8) || (((lVar26 + lVar20 * 4) - (longlong)pbVar14) - 4U < 0x20)) {
            uVar28 = 0;
          }
          else {
            lVar29 = lVar20 * 4;
            uVar28 = uVar25 & 0x3ffffffffffffff8;
            lVar20 = lVar20 + uVar28;
            lVar29 = lVar29 + lVar26;
            uVar27 = 0;
            do {
              uVar7 = *(undefined8 *)(pbVar14 + uVar27 * 4 + 4 + 8);
              uVar5 = *(undefined8 *)(pbVar14 + uVar27 * 4 + 0x14);
              uVar6 = *(undefined8 *)(pbVar14 + uVar27 * 4 + 0x14 + 8);
              puVar2 = (undefined8 *)(lVar29 + uVar27 * 4);
              *puVar2 = *(undefined8 *)(pbVar14 + uVar27 * 4 + 4);
              puVar2[1] = uVar7;
              puVar2 = (undefined8 *)(lVar29 + 0x10 + uVar27 * 4);
              *puVar2 = uVar5;
              puVar2[1] = uVar6;
              uVar27 = uVar27 + 8;
            } while (uVar28 != uVar27);
            if (uVar12 == uVar28) goto LAB_1408bd620;
          }
          uVar27 = uVar28;
          if ((uVar25 & 3) != 0) {
            lVar13 = 4;
            lVar29 = 0;
            do {
              *(undefined4 *)(lVar26 + lVar20 * 4 + -4 + lVar13) =
                   *(undefined4 *)(pbVar14 + lVar13 + uVar28 * 4);
              lVar29 = lVar29 + -1;
              lVar13 = lVar13 + 4;
            } while (-lVar29 != (uVar25 & 3));
            lVar20 = lVar20 - lVar29;
            uVar27 = uVar28 - lVar29;
          }
          if (uVar28 - uVar12 < 0xfffffffffffffffd) {
            lVar26 = lVar26 + lVar20 * 4;
            lVar29 = 0;
            do {
              *(undefined4 *)(lVar26 + lVar29 * 4) =
                   *(undefined4 *)(pbVar14 + lVar29 * 4 + uVar27 * 4 + 4);
              *(undefined4 *)(lVar26 + 4 + lVar29 * 4) =
                   *(undefined4 *)(pbVar14 + lVar29 * 4 + uVar27 * 4 + 8);
              *(undefined4 *)(lVar26 + 8 + lVar29 * 4) =
                   *(undefined4 *)(pbVar14 + lVar29 * 4 + uVar27 * 4 + 0xc);
              *(undefined4 *)(lVar26 + 0xc + lVar29 * 4) =
                   *(undefined4 *)(pbVar14 + lVar29 * 4 + uVar27 * 4 + 0x10);
              lVar29 = lVar29 + 4;
            } while (uVar12 - uVar27 != lVar29);
            lVar20 = lVar20 + lVar29;
          }
        }
LAB_1408bd620:
        *(longlong *)((longlong)pfStack_100 + -0x40) = lVar20;
        uStack_1b0._5_1_ = (byte)((ulonglong)uVar15 >> 0x28);
        *(byte *)((longlong)pfStack_100 + -3) = uStack_1b0._5_1_;
        uStack_1b0 = uVar15;
        pfStack_110 = pfVar30;
        pfStack_108 = pfVar22;
        if (pfVar3 != (float *)0x0) {
          pub_1406abac0((byte *)pfVar16,(longlong)pfVar3 * 0xc,4);
        }
        if ((!SBORROW8(0,(longlong)pbStack_120)) && (pbStack_120 != (byte *)0x0)) {
          pub_1406abac0((byte *)CONCAT44(uStack_1d8._4_4_,(float)uStack_1d8),
                        (longlong)pbStack_120 * 0xc,4);
        }
        if ((!SBORROW8(0,(longlong)pfStack_1a8)) && (pfStack_1a8 != (float *)0x0)) {
          pub_1406abac0(pbStack_1c0,(longlong)pfStack_1a8 * 0xc,4);
        }
        if (apfStack_210[3] != (float *)0x0) {
          pub_1406abac0(pbVar14,(longlong)apfStack_210[3] << 2,4);
        }
      }
    }
    pfStack_108 = (float *)(((ulonglong)((longlong)pfVar22 - (longlong)pfVar17) >> 3) *
                           0x4ec4ec4ec4ec4ec5);
    pfStack_100 = (float *)0x0;
    pfStack_110 = pfVar17;
    while (pfStack_108 != pfStack_100) {
      pfStack_100 = (float *)((longlong)pfStack_100 + 1);
      pdb_1404a41c0(pfVar17);
      pfVar17 = pfVar17 + 0x1a;
    }
    if (pfStack_128 != (float *)0x0) {
      pub_1406abac0((byte *)pfStack_138,(longlong)pfStack_128 * 0x68,8);
    }
    lStack_180 = lStack_228;
    lVar20 = lStack_218 * 0x68;
    pbStack_140 = pbStack_220 + lVar20;
    pbStack_270 = pbStack_220;
    pbVar11 = pbStack_220;
    pbVar14 = pbStack_220;
    while( true ) {
      pbStack_198 = pbStack_140;
      if (pbVar11 == pbStack_140) break;
      pbStack_198 = pbVar11 + 0x68;
      if (SBORROW8(0,(longlong)*(float **)pbVar11)) break;
      pfStack_2a0 = *(float **)(pbVar11 + 0x58);
      uStack_298 = *(undefined8 *)(pbVar11 + 0x60);
      apfStack_2b8[1] = *(float **)(pbVar11 + 0x48);
      pbStack_2a8 = *(byte **)(pbVar11 + 0x50);
      pfStack_260 = *(float **)(pbVar11 + 8);
      pfStack_258 = *(float **)(pbVar11 + 0x10);
      lVar26 = *(longlong *)(pbVar11 + 0x18);
      pbVar19 = *(byte **)(pbVar11 + 0x20);
      pfVar30 = *(float **)(pbVar11 + 0x28);
      afStack_2c8[0] = *(float *)(pbVar11 + 0x30);
      afStack_2c8[1] = *(float *)(pbVar11 + 0x34);
      uStack_2c0._0_4_ = *(float *)(pbVar11 + 0x38);
      uStack_2c0._4_4_ = *(float *)(pbVar11 + 0x3c);
      apfStack_2b8[0] = *(float **)(pbVar11 + 0x40);
      pfStack_268 = *(float **)pbVar11;
      pbStack_190 = pbVar14 + 0x68;
      lStack_188 = lVar20 + -0x68;
      pdb_140080930(apfStack_210,&pfStack_268,1);
      pbVar14 = pbStack_190;
      lVar20 = lStack_188;
      if (SBORROW8(0,(longlong)apfStack_210[0])) {
LAB_1408bda43:
        lVar29 = CONCAT44(afStack_2c8[1],afStack_2c8[0]);
        if ((!SBORROW8(0,lVar29)) && (lVar29 != 0)) {
          pub_1406abac0((byte *)CONCAT44(uStack_2c0._4_4_,(float)uStack_2c0),lVar29 * 0xc,4);
        }
        pbVar11 = pbStack_198;
        if ((!SBORROW8(0,(longlong)apfStack_2b8[1])) && (apfStack_2b8[1] != (float *)0x0)) {
          pub_1406abac0(pbStack_2a8,(longlong)apfStack_2b8[1] * 0xc,4);
          pbVar11 = pbStack_198;
        }
      }
      else {
        uStack_238 = CONCAT44(afStack_1e0[1],afStack_1e0[0]);
        uStack_248 = (undefined4)uStack_1f0;
        uStack_244 = uStack_1f0._4_4_;
        uStack_240 = (undefined4)uStack_1e8;
        uStack_23c = uStack_1e8._4_4_;
        pfStack_258 = apfStack_210[2];
        pfStack_250 = apfStack_210[3];
        pfStack_268 = apfStack_210[0];
        pfStack_278 = apfStack_210[1];
        pfStack_260 = pfStack_278;
        pdb_140c9aac0(apfStack_210,apfStack_210[1],apfStack_210[2]);
        lVar20 = lStack_188;
        pbVar14 = pbStack_190;
        pfVar16 = apfStack_210[2];
        pfVar3 = apfStack_210[1];
        pfVar17 = apfStack_210[0];
        pbVar11 = pbStack_2a8;
        pfVar22 = apfStack_2b8[1];
        if (SBORROW8(0,(longlong)apfStack_210[0])) {
          if (pfStack_268 != (float *)0x0) {
            pub_1406abac0((byte *)pfStack_278,(longlong)pfStack_268 * 0xc,4);
          }
          if (pfStack_250 != (float *)0x0) {
            pub_1406abac0((byte *)CONCAT44(uStack_244,uStack_248),(longlong)pfStack_250 << 2,4);
          }
          goto LAB_1408bda43;
        }
        apfStack_210[0] = (float *)0x0;
        apfStack_210[1] = (float *)0x4;
        apfStack_210[2] = (float *)0x0;
        apfStack_210[3] = (float *)0x0;
        uStack_1f0 = (byte *)0x4;
        uStack_1e8 = 0;
        lStack_158 = 0;
        pbStack_150 = (byte *)0x4;
        lStack_148 = 0;
        lStack_170 = 0;
        pbStack_168 = (byte *)0x4;
        lStack_160 = 0;
        uStack_28c = (undefined4)uStack_298;
        pfStack_138 = (float *)CONCAT44(uStack_244,uStack_248);
        pfStack_130 = (float *)CONCAT44(uStack_23c,uStack_240);
        lVar13 = CONCAT44(afStack_2c8[1],afStack_2c8[0]);
        lStack_280 = CONCAT44(uStack_2c0._4_4_,(float)uStack_2c0);
        lVar20 = (longlong)apfStack_2b8[0] * 0xc;
        pfVar1 = (float *)(lStack_280 + lVar20);
        pfStack_1a0 = pfStack_2a0;
        lVar29 = (longlong)pfStack_2a0 * 0xc;
        pbVar14 = pbStack_2a8 + lVar29;
        pfStack_128 = pfVar3;
        pfStack_1a8 = pfVar16;
        pfStack_108 = pfVar3;
        pfStack_118 = apfStack_2b8[0];
        pbStack_120 = pbVar19;
        pfStack_110 = pfVar30;
        while ((float *)0x1 < pfStack_1a8) {
          uVar9 = pdb_14148cd70(&pfStack_268,pfStack_108,pfStack_128[2]);
          pfVar32 = (float *)(ulonglong)uVar9;
          uVar10 = pdb_14148cd70(&pfStack_268);
          pfVar3 = (float *)((longlong)pfVar32 + 1);
          pfVar23 = (float *)(ulonglong)uVar10;
          pfVar30 = (float *)((longlong)pfVar23 + 1);
          if (!SBORROW8(0,lVar13)) {
            if (pfStack_118 <= pfVar32) goto LAB_1408be9ed;
            if (pfStack_118 <= pfVar3) goto LAB_1408bea17;
            if (((uVar9 < uVar10) && (~(ulonglong)pfVar32 + (longlong)pfVar23 != 0)) &&
               ((longlong)pfVar3 * 0xc + 0xc != lVar20)) {
              pfVar18 = (float *)((longlong)pfVar3 * 0xc + lStack_280 + 0xc);
              lVar24 = (longlong)pfVar32 + (2 - (longlong)pfVar23);
              do {
                if (lVar24 == 0) break;
                pfVar18 = pfVar18 + 3;
                lVar24 = lVar24 + 1;
              } while (pfVar18 != pfVar1);
            }
            if (pfStack_118 <= pfVar23) goto LAB_1408bea3a;
            if (pfStack_118 <= pfVar30) goto LAB_1408bea64;
          }
          lVar24 = -(longlong)pfVar22;
          if (!SBORROW8(0,(longlong)pfVar22)) {
            if (pfStack_1a0 <= pfVar32) {
              pfStack_118 = pfStack_1a0;
LAB_1408be9ed:
                    /* WARNING: Subroutine does not return */
              pdb_142dc81f2(pfVar32,pfStack_118,&UNK_143015c80);
            }
            if (pfStack_1a0 <= pfVar3) {
              pfStack_118 = pfStack_1a0;
LAB_1408bea17:
                    /* WARNING: Subroutine does not return */
              pdb_142dc81f2(pfVar3,pfStack_118,&UNK_143015c80);
            }
            if (((uVar9 < uVar10) && (~(ulonglong)pfVar32 + (longlong)pfVar23 != 0)) &&
               ((longlong)pfVar3 * 0xc + 0xc != lVar29)) {
              pbVar19 = pbVar11 + (longlong)pfVar3 * 0xc + 0xc;
              lVar24 = (longlong)pfVar32 + (2 - (longlong)pfVar23);
              do {
                if (lVar24 == 0) break;
                pbVar19 = pbVar19 + 0xc;
                lVar24 = lVar24 + 1;
              } while (pbVar19 != pbVar14);
            }
            if (pfStack_1a0 <= pfVar23) {
              pfStack_118 = pfStack_1a0;
LAB_1408bea3a:
                    /* WARNING: Subroutine does not return */
              pdb_142dc81f2(pfVar23,pfStack_118,&UNK_143015c98);
            }
            if (pfStack_1a0 <= pfVar30) {
              pfStack_118 = pfStack_1a0;
LAB_1408bea64:
                    /* WARNING: Subroutine does not return */
              pdb_142dc81f2(pfVar30,pfStack_118,&UNK_143015c98);
            }
            lVar24 = (longlong)pfVar30 * 3;
          }
          fVar34 = (float)pub_142e329c0(lVar24);
          if (fVar34 <= _DAT_142e36f28) {
            fVar34 = _DAT_142e36f28;
          }
          pfStack_100 = (float *)0x0;
          if (0.0 <= fVar34) {
            pfStack_100 = (float *)((longlong)(fVar34 - _DAT_142e36f2c) & (longlong)fVar34 >> 0x3f |
                                   (longlong)fVar34);
          }
          if (_DAT_142e36f30 < fVar34) {
            pfStack_100 = (float *)0xffffffffffffffff;
          }
          if (pfStack_130 <= pfVar32) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2(pfVar32,pfStack_130,&UNK_14330d6e8);
          }
          if (pfStack_130 <= pfVar3) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2(pfVar3,pfStack_130,&UNK_14330d700);
          }
          if ((extraout_XMM0_Da < 0.0) || (_DAT_142e36f28 < extraout_XMM0_Da)) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc83b0(&UNK_14330d490,0x2a,&UNK_14330d4e0);
          }
          uVar35 = pdb_140de9fd0(pfStack_138[(longlong)pfVar32],pfStack_130,extraout_XMM0_Da);
          if (pfStack_130 <= pfVar23) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2(pfVar23,pfStack_130,&UNK_14330d6e8);
          }
          if (pfStack_130 <= pfVar30) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2(pfVar30,pfStack_130,&UNK_14330d700);
          }
          if ((extraout_XMM0_Da_00 < 0.0) || (_DAT_142e36f28 < extraout_XMM0_Da_00)) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc83b0(&UNK_14330d490,0x2a,&UNK_14330d4e0);
          }
          pdb_140de9fd0(pfStack_138[(longlong)pfVar23],pfStack_130,extraout_XMM0_Da_00);
          Var4 = ZEXT89(pfStack_100);
          pfStack_1a8 = (float *)((longlong)pfStack_1a8 + -1);
          pfStack_128 = pfStack_128 + 3;
          pfVar30 = (float *)0x0;
          while (pfVar30 < pfStack_100) {
            if (((float)pfVar30 / (float)(unkint9)Var4 < 0.0) ||
               (_DAT_142e36f28 < (float)pfVar30 / (float)(unkint9)Var4)) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc83b0(&UNK_14330d490,0x2a,&UNK_14330d4e0);
            }
            pdb_140de9fd0(uVar35);
            uVar9 = pdb_14148c300();
            pfVar30 = (float *)((longlong)pfVar30 + 1);
            pfVar23 = (float *)(ulonglong)uVar9;
            pfVar3 = (float *)((longlong)pfVar23 + 1);
            uVar25 = 0;
            while (uVar12 = uVar25, lVar24 = lStack_148, uVar12 < 2) {
              uVar25 = uVar12 + 1;
              if (!SBORROW8(0,*(longlong *)(afStack_2c8 + uVar12 * 6))) {
                pfVar32 = apfStack_2b8[uVar12 * 3];
                if (pfVar32 <= pfVar23) {
                    /* WARNING: Subroutine does not return */
                  pdb_142dc81f2(pfVar23,pfVar32,&UNK_143015e48);
                }
                if (pfVar32 <= pfVar3) {
                    /* WARNING: Subroutine does not return */
                  pdb_142dc81f2(pfVar3,pfVar32,&UNK_143015e48);
                }
                pfVar32 = apfStack_2b8[uVar12 * 3 + -1];
                fVar34 = pfVar32[(longlong)pfVar23 * 3 + 2];
                fVar33 = pfVar32[(longlong)pfVar3 * 3 + 2];
                fVar36 = (float)*(undefined8 *)(pfVar32 + (longlong)pfVar23 * 3);
                fVar37 = (float)((ulonglong)*(undefined8 *)(pfVar32 + (longlong)pfVar23 * 3) >> 0x20
                                );
                uVar15 = *(undefined8 *)(pfVar32 + (longlong)pfVar3 * 3);
                pfVar32 = apfStack_210[uVar12 * 3 + 2];
                if (pfVar32 == apfStack_210[uVar12 * 3]) {
                  pdb_142db7820(apfStack_210 + uVar12 * 3);
                }
                pfVar18 = apfStack_210[uVar12 * 3 + 1];
                *(ulonglong *)(pfVar18 + (longlong)pfVar32 * 3) =
                     CONCAT44(((float)((ulonglong)uVar15 >> 0x20) - fVar37) * extraout_XMM0_Da_01 +
                              fVar37,((float)uVar15 - fVar36) * extraout_XMM0_Da_01 + fVar36);
                pfVar18[(longlong)pfVar32 * 3 + 2] =
                     (fVar33 - fVar34) * extraout_XMM0_Da_01 + fVar34;
                apfStack_210[uVar12 * 3 + 2] = (float *)((longlong)pfVar32 + 1);
              }
            }
            if (lStack_148 == lStack_158) {
              pdb_142d8d7f0(&lStack_158);
            }
            lVar31 = lStack_160;
            *(uint *)(pbStack_150 + lVar24 * 8) = uVar9;
            *(float *)(pbStack_150 + lVar24 * 8 + 4) = extraout_XMM0_Da_01;
            lStack_148 = lVar24 + 1;
            if (pfStack_110 <= pfVar23) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc81f2(pfVar23,pfStack_110,&UNK_143015e30);
            }
            if (pfStack_110 <= pfVar3) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc81f2(pfVar3,pfStack_110,&UNK_143015e30);
            }
            fVar34 = *(float *)(pbStack_120 + (longlong)pfVar23 * 4);
            fVar33 = *(float *)(pbStack_120 + (longlong)pfVar23 * 4 + 4);
            if (lStack_160 == lStack_170) {
              pdb_142d89720(&lStack_170);
            }
            *(float *)(pbStack_168 + lVar31 * 4) = (fVar33 - fVar34) * extraout_XMM0_Da_01 + fVar34;
            lStack_160 = lVar31 + 1;
          }
        }
        if ((pfVar16 == (float *)0x0) || (pfStack_108 + (longlong)pfVar16 * 3 == (float *)0xc)) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc8150(&UNK_143015db8);
        }
        uVar9 = pdb_14148cd70(&pfStack_268,pfStack_108,pfStack_108[(longlong)pfVar16 * 3 + -1]);
        pfVar22 = (float *)(ulonglong)uVar9;
        pfVar30 = (float *)((longlong)pfVar22 + 1);
        uVar25 = 0;
        while (uVar12 = uVar25, lVar20 = lStack_148, uVar12 < 2) {
          uVar25 = uVar12 + 1;
          if (!SBORROW8(0,*(longlong *)(afStack_2c8 + uVar12 * 6))) {
            pfVar3 = apfStack_2b8[uVar12 * 3];
            if (pfVar3 <= pfVar22) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc81f2(pfVar22,pfVar3,&UNK_143015e18);
            }
            if (pfVar3 <= pfVar30) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc81f2(pfVar30,pfVar3,&UNK_143015e18);
            }
            pfVar3 = apfStack_2b8[uVar12 * 3 + -1];
            fVar34 = pfVar3[(longlong)pfVar22 * 3 + 2];
            fVar33 = pfVar3[(longlong)pfVar30 * 3 + 2];
            fVar36 = (float)*(undefined8 *)(pfVar3 + (longlong)pfVar22 * 3);
            fVar37 = (float)((ulonglong)*(undefined8 *)(pfVar3 + (longlong)pfVar22 * 3) >> 0x20);
            uVar15 = *(undefined8 *)(pfVar3 + (longlong)pfVar30 * 3);
            pfVar3 = apfStack_210[uVar12 * 3 + 2];
            if (pfVar3 == apfStack_210[uVar12 * 3]) {
              pdb_142db7820(apfStack_210 + uVar12 * 3);
            }
            pfVar16 = apfStack_210[uVar12 * 3 + 1];
            *(ulonglong *)(pfVar16 + (longlong)pfVar3 * 3) =
                 CONCAT44(((float)((ulonglong)uVar15 >> 0x20) - fVar37) * extraout_XMM0_Da_02 +
                          fVar37,((float)uVar15 - fVar36) * extraout_XMM0_Da_02 + fVar36);
            pfVar16[(longlong)pfVar3 * 3 + 2] = (fVar33 - fVar34) * extraout_XMM0_Da_02 + fVar34;
            apfStack_210[uVar12 * 3 + 2] = (float *)((longlong)pfVar3 + 1);
          }
        }
        if (lStack_148 == lStack_158) {
          pdb_142d8d7f0(&lStack_158);
        }
        lVar29 = lStack_160;
        *(uint *)(pbStack_150 + lVar20 * 8) = uVar9;
        *(float *)(pbStack_150 + lVar20 * 8 + 4) = extraout_XMM0_Da_02;
        lStack_148 = lVar20 + 1;
        if (pfStack_110 <= pfVar22) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(pfVar22,pfStack_110,&UNK_143015dd0);
        }
        if (pfStack_110 <= pfVar30) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(pfVar30,pfStack_110,&UNK_143015dd0);
        }
        fVar34 = *(float *)(pbStack_120 + (longlong)pfVar22 * 4);
        fVar33 = *(float *)(pbStack_120 + (longlong)pfVar22 * 4 + 4);
        if (lStack_160 == lStack_170) {
          pdb_142d89720(&lStack_170);
        }
        *(float *)(pbStack_168 + lVar29 * 4) = (fVar33 - fVar34) * extraout_XMM0_Da_02 + fVar34;
        lStack_160 = lVar29 + 1;
        uVar8 = (ushort)uStack_298._4_1_;
        uVar21 = (ushort)uStack_298._5_1_;
        uVar25 = 0;
        lVar20 = 0;
        while (lVar29 = lVar20, uVar12 = uVar25, lVar29 != 0x30) {
          lVar13 = *(longlong *)((longlong)apfStack_210 + lVar29 + 0x10U);
          uVar25 = uVar12 + 1;
          lVar20 = lVar29 + 0x18;
          if (lVar13 != 0) {
            pdb_1408bae10(param_6,uStack_174,param_4,
                          *(undefined8 *)((longlong)apfStack_210 + lVar29 + 8U),lVar13,
                          pbStack_168._0_4_,(undefined4)lStack_160,bStack_f3,1,uVar12,
                          (uVar21 ^ 1) << 8 | uVar8 ^ 1);
            if (1 < uVar12) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc81f2(uVar12,2,&UNK_143015de8);
            }
            if (SBORROW8(0,*(longlong *)(afStack_2c8 + uVar12 * 6))) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc8150(&UNK_143015e00);
            }
            pdb_1408b9980(param_1,uStack_284,uStack_288,uStack_174,bStack_f3,
                          *(undefined4 *)(apfStack_2b8 + uVar12 * 3 + -1),
                          *(undefined4 *)(apfStack_2b8 + uVar12 * 3),pbStack_150,lStack_148);
          }
        }
        if (lStack_170 != 0) {
          pub_1406abac0(pbStack_168,lStack_170 << 2,4);
        }
        pfVar30 = pfStack_108;
        pbVar19 = pbStack_120;
        lVar20 = lStack_188;
        pbVar14 = pbStack_190;
        if (lStack_158 != 0) {
          pub_1406abac0(pbStack_150,lStack_158 << 3,4);
        }
        if (apfStack_210[0] != (float *)0x0) {
          pub_1406abac0((byte *)apfStack_210[1],(longlong)apfStack_210[0] * 0xc,4);
        }
        if (apfStack_210[3] != (float *)0x0) {
          pub_1406abac0(uStack_1f0,(longlong)apfStack_210[3] * 0xc,4);
        }
        if (pfVar17 != (float *)0x0) {
          pub_1406abac0((byte *)pfVar30,(longlong)pfVar17 * 0xc,4);
        }
        if (pfStack_268 != (float *)0x0) {
          pub_1406abac0((byte *)pfStack_278,(longlong)pfStack_268 * 0xc,4);
        }
        if (pfStack_250 != (float *)0x0) {
          pub_1406abac0((byte *)pfStack_138,(longlong)pfStack_250 << 2,4);
        }
        lVar29 = CONCAT44(afStack_2c8[1],afStack_2c8[0]);
        if ((!SBORROW8(0,lVar29)) && (lVar29 != 0)) {
          pub_1406abac0((byte *)CONCAT44(uStack_2c0._4_4_,(float)uStack_2c0),lVar29 * 0xc,4);
        }
        pbVar11 = pbStack_198;
        if ((!SBORROW8(0,(longlong)apfStack_2b8[1])) && (apfStack_2b8[1] != (float *)0x0)) {
          pub_1406abac0(pbStack_2a8,(longlong)apfStack_2b8[1] * 0xc,4);
          pbVar11 = pbStack_198;
        }
      }
      if (lVar26 != 0) {
        pbStack_198 = pbVar11;
        pub_1406abac0(pbVar19,lVar26 << 2,4);
        pbVar11 = pbStack_198;
      }
    }
    pbStack_140 = (byte *)(((ulonglong)((longlong)pbStack_140 - (longlong)pbStack_198) >> 3) *
                          0x4ec4ec4ec4ec4ec5);
    pfStack_100 = (float *)0x0;
    pbVar14 = pbStack_198;
    while ((float *)pbStack_140 != pfStack_100) {
      pfStack_100 = (float *)((longlong)pfStack_100 + 1);
      pdb_1404a41c0(pbVar14);
      pbVar14 = pbVar14 + 0x68;
    }
    if (lStack_180 != 0) {
      pub_1406abac0(pbStack_270,lStack_180 * 0x68,8);
    }
  }
  return;
}

