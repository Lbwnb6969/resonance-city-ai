// VA 0x1408b0b00, PDB extent 2271 bytes
// system_decorator::decorator_visual::playermade_stairs::utils::stairs_assemble_wood_misc::swept_frame_samples
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/playermade_stairs/utils/stairs_assemble_wood_misc.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_decorator::decorator_visual::playermade_stairs::utils::stairs_assemble_wood_misc::swept_frame_samples
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/playermade_stairs/utils/stairs_assemble_wood_misc.rs
   Extent: 2271 */

void pdb_1408b0b00(ulonglong *param_1,ulonglong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  byte *pbVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  uint uVar7;
  uint uVar8;
  float *pfVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  int iVar14;
  undefined8 in_R10;
  bool bVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auVar19 [16];
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  float fVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  uint uVar38;
  undefined1 auVar39 [16];
  float fVar40;
  undefined1 auStack_128 [8];
  float fStack_120;
  ulonglong *puStack_118;
  uint uStack_110;
  uint uStack_10c;
  ulonglong uStack_108;
  byte *pbStack_100;
  ulonglong uStack_f8;
  undefined8 uStack_f0;
  
  uStack_f0 = 0xfffffffffffffffe;
  uVar11 = param_3 * 0x30;
  uVar12 = param_3;
  if (param_3 < 0x2aaaaaaaaaaaaab) goto LAB_1408b0b7e;
  param_1 = (ulonglong *)0x0;
  do {
    param_2 = uVar11;
    pdb_142dc7e2a();
    uVar12 = param_3;
LAB_1408b0b7e:
    puStack_118 = param_1;
    if (uVar11 == 0) {
      pbStack_100 = (byte *)0x4;
      uStack_108 = 0;
      break;
    }
    param_3 = uVar12;
    pdb_14007ee60();
    param_1 = (ulonglong *)0x4;
    pbStack_100 = pub_1406abab0(uVar11,4);
    uStack_108 = uVar12;
  } while (pbStack_100 == (byte *)0x0);
  fVar24 = _DAT_142e36f28;
  fVar33 = 0.0;
  uStack_f8 = 0;
  uVar11 = 0;
  while (uVar11 < uVar12) {
    uVar1 = uVar11 + 1;
    auVar31._0_8_ = *(undefined8 *)(param_2 + uVar11 * 0xc);
    fVar22 = *(float *)(param_2 + 8 + uVar11 * 0xc);
    fVar18 = (float)auVar31._0_8_;
    fVar21 = (float)((ulonglong)auVar31._0_8_ >> 0x20);
    if (uVar11 == 0) {
      if (uVar12 < 2) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(1,uVar12,&UNK_1430152c0);
      }
      fVar18 = (float)*(undefined8 *)(param_2 + 0xc) - fVar18;
      fVar21 = (float)((ulonglong)*(undefined8 *)(param_2 + 0xc) >> 0x20) - fVar21;
      fVar17 = *(float *)(param_2 + 0x14) - fVar22;
    }
    else {
      lVar10 = param_2 + uVar11 * 0xc;
      uVar4 = *(undefined8 *)(lVar10 + -0xc);
      fVar23 = *(float *)(lVar10 + -4);
      fVar25 = (float)uVar4;
      fVar40 = (float)((ulonglong)uVar4 >> 0x20);
      fVar17 = fVar25 - fVar18;
      fVar20 = fVar40 - fVar21;
      fVar28 = fVar23 - fVar22;
      fVar33 = fVar33 + SQRT(fVar28 * fVar28 + fVar20 * fVar20 + fVar17 * fVar17);
      fVar17 = fVar22;
      if (uVar1 != uVar12) {
        if (uVar12 <= uVar1) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar1,uVar12,&UNK_1430152d8);
        }
        uVar4 = *(undefined8 *)(param_2 + uVar1 * 0xc);
        fVar18 = (float)uVar4;
        fVar21 = (float)((ulonglong)uVar4 >> 0x20);
        fVar17 = *(float *)(param_2 + 8 + uVar1 * 0xc);
      }
      fVar21 = fVar21 - fVar40;
      fVar18 = fVar18 - fVar25;
      fVar17 = fVar17 - fVar23;
    }
    fVar23 = fVar24 / SQRT(fVar17 * fVar17 + fVar21 * fVar21 + fVar18 * fVar18);
    bVar15 = (int)fVar23 - 1U < 0x7fffff ||
             (int)ABS(fVar23) - 0x800000U < 0x7f000000 && -1 < (int)fVar23;
    if (bVar15) {
      fVar17 = fVar17 * fVar23;
    }
    else {
      fVar17 = 0.0;
    }
    uVar8 = (uint)bVar15;
    uVar38 = (int)(uVar8 << 0x1f) >> 0x1f & (uint)(fVar18 * fVar23);
    uStack_110 = (uint)fVar17 ^ _DAT_142e37820;
    uStack_10c = uVar38;
    pdb_140df4520(auStack_128,&uStack_110);
    uVar11 = uStack_f8;
    fVar20 = auStack_128._0_4_;
    fVar25 = auStack_128._4_4_;
    fVar18 = fVar24 / SQRT(fVar25 * fVar25 + fVar20 * fVar20 + fStack_120 * fStack_120);
    bVar15 = (int)fVar18 - 1U < 0x7fffff ||
             (int)ABS(fVar18) - 0x800000U < 0x7f000000 && -1 < (int)fVar18;
    if (bVar15) {
      fVar40 = fStack_120 * fVar18;
    }
    else {
      fVar40 = 0.0;
    }
    if (uStack_f8 == uStack_108) {
      pdb_142d8d630(&uStack_108);
    }
    uVar7 = (uint)bVar15;
    uVar16 = (int)(uVar7 << 0x1f) >> 0x1f;
    lVar10 = uVar11 * 0x30;
    *(undefined8 *)(pbStack_100 + lVar10) = auVar31._0_8_;
    *(float *)(pbStack_100 + lVar10 + 8) = fVar22;
    *(float *)(pbStack_100 + lVar10 + 0xc) = fVar33;
    *(uint *)(pbStack_100 + lVar10 + 0x10) = uVar38;
    *(uint *)((longlong)(pbStack_100 + lVar10 + 0x10) + 4) =
         (int)(uVar8 << 0x1f) >> 0x1f & (uint)(fVar21 * fVar23);
    *(float *)(pbStack_100 + lVar10 + 0x18) = fVar17;
    pbVar3 = pbStack_100 + lVar10 + 0x1c;
    pbVar3[0] = 0;
    pbVar3[1] = 0;
    pbVar3[2] = 0;
    pbVar3[3] = 0;
    *(ulonglong *)(pbStack_100 + lVar10 + 0x20) =
         (ulonglong)(~uVar16 & (uint)fVar24) |
         CONCAT44((uint)(fVar25 * fVar18) & (int)(uVar7 << 0x1f) >> 0x1f,
                  (uint)(fVar20 * fVar18) & uVar16);
    *(float *)(pbStack_100 + lVar10 + 0x28) = fVar40;
    pbVar3 = pbStack_100 + lVar10 + 0x2c;
    pbVar3[0] = 0;
    pbVar3[1] = 0;
    pbVar3[2] = 0;
    pbVar3[3] = 0;
    uStack_f8 = uVar11 + 1;
    uVar11 = uVar1;
  }
  uVar11 = _DAT_143015170;
  uVar12 = _UNK_143015178;
  if (uStack_f8 == 0) goto LAB_1408b1268;
  if (uStack_f8 < 4) {
    auVar19 = ZEXT816(0);
    fVar24 = 0.0;
    uVar11 = 0;
LAB_1408b0f26:
    lVar10 = 0;
    auVar31 = auVar19;
    do {
      auVar19._0_4_ = auVar31._0_4_ + (float)*(undefined8 *)(pbStack_100 + lVar10 + uVar11 * 0x30);
      auVar19._4_4_ =
           auVar31._4_4_ +
           (float)((ulonglong)*(undefined8 *)(pbStack_100 + lVar10 + uVar11 * 0x30) >> 0x20);
      auVar19._8_4_ = auVar31._8_4_ + 0.0;
      auVar19._12_4_ = auVar31._12_4_ + 0.0;
      fVar24 = fVar24 + *(float *)(pbStack_100 + lVar10 + uVar11 * 0x30 + 8);
      lVar10 = lVar10 + 0x30;
      auVar31 = auVar19;
    } while ((ulonglong)(((uint)uStack_f8 & 3) << 4) * 3 != lVar10);
  }
  else {
    pfVar9 = (float *)(pbStack_100 + 0x98);
    auVar19 = ZEXT816(0);
    fVar24 = 0.0;
    uVar11 = 0;
    do {
      fVar33 = auVar19._4_4_;
      fVar22 = auVar19._8_4_;
      fVar21 = auVar19._12_4_;
      fVar24 = fVar24 + pfVar9[-0x24] + pfVar9[-0x18] + pfVar9[-0xc] + *pfVar9;
      auVar19._0_4_ =
           (float)*(undefined8 *)(pfVar9 + -2) +
           (float)*(undefined8 *)(pfVar9 + -0xe) +
           (float)*(undefined8 *)(pfVar9 + -0x1a) +
           (float)*(undefined8 *)(pfVar9 + -0x26) + auVar19._0_4_;
      auVar19._4_4_ =
           (float)((ulonglong)*(undefined8 *)(pfVar9 + -2) >> 0x20) +
           (float)((ulonglong)*(undefined8 *)(pfVar9 + -0xe) >> 0x20) +
           (float)((ulonglong)*(undefined8 *)(pfVar9 + -0x1a) >> 0x20) +
           (float)((ulonglong)*(undefined8 *)(pfVar9 + -0x26) >> 0x20) + fVar33;
      auVar19._8_4_ = fVar22 + 0.0 + 0.0 + 0.0 + 0.0;
      auVar19._12_4_ = fVar21 + 0.0 + 0.0 + 0.0 + 0.0;
      uVar11 = uVar11 + 4;
      pfVar9 = pfVar9 + 0x30;
    } while ((uStack_f8 & 0xfffffffffffffffc) != uVar11);
    if ((uStack_f8 & 3) != 0) goto LAB_1408b0f26;
  }
  fVar33 = (float)(longlong)uStack_f8;
  auVar36._4_4_ = fVar33;
  auVar36._0_4_ = fVar33;
  auVar36._8_8_ = 0;
  auVar19 = divps(auVar19,auVar36);
  fVar24 = fVar24 / fVar33;
  fVar33 = auVar19._0_4_;
  fVar22 = auVar19._4_4_;
  if (uStack_f8 < 8) {
    fVar21 = 0.0;
    uVar12 = 0;
LAB_1408b0f78:
    lVar10 = uStack_f8 - uVar12;
    pfVar9 = (float *)(pbStack_100 + uVar12 * 0x30 + 8);
    do {
      fVar18 = (float)*(undefined8 *)(pfVar9 + -2) - fVar33;
      fVar17 = (float)((ulonglong)*(undefined8 *)(pfVar9 + -2) >> 0x20) - fVar22;
      fVar17 = SQRT((*pfVar9 - fVar24) * (*pfVar9 - fVar24) + fVar17 * fVar17 + fVar18 * fVar18);
      fVar18 = fVar17;
      if (fVar17 <= fVar21) {
        fVar18 = fVar21;
      }
      fVar21 = (float)(~-(uint)NAN(fVar21) & (uint)fVar18 | -(uint)NAN(fVar21) & (uint)fVar17);
      pfVar9 = pfVar9 + 0xc;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  else {
    uVar11 = uStack_f8 & 0x3fffffffffffff8;
    pfVar9 = (float *)(pbStack_100 + 0x158);
    lVar10 = 8;
    auVar31 = ZEXT816(0);
    auVar36 = ZEXT816(0);
    do {
      auVar26 = auVar36;
      auVar27 = auVar31;
      auVar6._4_4_ = fVar33;
      auVar6._0_4_ = fVar33;
      auVar6._8_4_ = fVar33;
      auVar6._12_4_ = fVar33;
      auVar35._0_4_ =
           (pfVar9[-0x54] - fVar24) * (pfVar9[-0x54] - fVar24) +
           (pfVar9[-0x55] - fVar22) * (pfVar9[-0x55] - fVar22) +
           (pfVar9[-0x56] - fVar33) * (pfVar9[-0x56] - fVar33);
      auVar35._4_4_ =
           (pfVar9[-0x48] - fVar24) * (pfVar9[-0x48] - fVar24) +
           (pfVar9[-0x49] - fVar22) * (pfVar9[-0x49] - fVar22) +
           (pfVar9[-0x4a] - fVar33) * (pfVar9[-0x4a] - fVar33);
      auVar35._8_4_ =
           (pfVar9[-0x3c] - fVar24) * (pfVar9[-0x3c] - fVar24) +
           (pfVar9[-0x3d] - fVar22) * (pfVar9[-0x3d] - fVar22) +
           (pfVar9[-0x3e] - fVar33) * (pfVar9[-0x3e] - fVar33);
      auVar35._12_4_ =
           (pfVar9[-0x30] - fVar24) * (pfVar9[-0x30] - fVar24) +
           (pfVar9[-0x31] - fVar22) * (pfVar9[-0x31] - fVar22) +
           (pfVar9[-0x32] - fVar33) * (pfVar9[-0x32] - fVar33);
      auVar39._0_4_ =
           (pfVar9[-0x24] - fVar24) * (pfVar9[-0x24] - fVar24) +
           (pfVar9[-0x25] - fVar22) * (pfVar9[-0x25] - fVar22) +
           (pfVar9[-0x26] - fVar33) * (pfVar9[-0x26] - fVar33);
      auVar39._4_4_ =
           (pfVar9[-0x18] - fVar24) * (pfVar9[-0x18] - fVar24) +
           (pfVar9[-0x19] - fVar22) * (pfVar9[-0x19] - fVar22) +
           (pfVar9[-0x1a] - fVar33) * (pfVar9[-0x1a] - fVar33);
      auVar39._8_4_ =
           (pfVar9[-0xc] - fVar24) * (pfVar9[-0xc] - fVar24) +
           (pfVar9[-0xd] - fVar22) * (pfVar9[-0xd] - fVar22) +
           (pfVar9[-0xe] - fVar33) * (pfVar9[-0xe] - fVar33);
      auVar39._12_4_ =
           (*pfVar9 - fVar24) * (*pfVar9 - fVar24) +
           (pfVar9[-1] - fVar22) * (pfVar9[-1] - fVar22) +
           (pfVar9[-2] - fVar33) * (pfVar9[-2] - fVar33);
      auVar31 = sqrtps(auVar6,auVar35);
      auVar36 = sqrtps(auVar35,auVar39);
      auVar37 = maxps(auVar31,auVar27);
      auVar30._0_4_ = ~-(uint)NAN(auVar27._0_4_) & auVar37._0_4_;
      auVar30._4_4_ = ~-(uint)NAN(auVar27._4_4_) & auVar37._4_4_;
      auVar30._8_4_ = ~-(uint)NAN(auVar27._8_4_) & auVar37._8_4_;
      auVar30._12_4_ = ~-(uint)NAN(auVar27._12_4_) & auVar37._12_4_;
      auVar37._4_4_ = (uint)auVar31._4_4_ & -(uint)NAN(auVar27._4_4_);
      auVar37._0_4_ = (uint)auVar31._0_4_ & -(uint)NAN(auVar27._0_4_);
      auVar37._8_4_ = (uint)auVar31._8_4_ & -(uint)NAN(auVar27._8_4_);
      auVar37._12_4_ = (uint)auVar31._12_4_ & -(uint)NAN(auVar27._12_4_);
      auVar32._4_4_ = -(uint)(NAN(auVar31._4_4_) || NAN(auVar36._4_4_));
      auVar32._0_4_ = -(uint)(NAN(auVar31._0_4_) || NAN(auVar36._0_4_));
      auVar32._8_4_ = -(uint)(NAN(auVar31._8_4_) || NAN(auVar36._8_4_));
      auVar32._12_4_ = -(uint)(NAN(auVar31._12_4_) || NAN(auVar36._12_4_));
      auVar31 = maxps(auVar36,auVar26);
      auVar34._0_4_ = ~-(uint)NAN(auVar26._0_4_) & auVar31._0_4_;
      auVar34._4_4_ = ~-(uint)NAN(auVar26._4_4_) & auVar31._4_4_;
      auVar34._8_4_ = ~-(uint)NAN(auVar26._8_4_) & auVar31._8_4_;
      auVar34._12_4_ = ~-(uint)NAN(auVar26._12_4_) & auVar31._12_4_;
      auVar5._4_4_ = (uint)auVar36._4_4_ & -(uint)NAN(auVar26._4_4_);
      auVar5._0_4_ = (uint)auVar36._0_4_ & -(uint)NAN(auVar26._0_4_);
      auVar5._8_4_ = (uint)auVar36._8_4_ & -(uint)NAN(auVar26._8_4_);
      auVar5._12_4_ = (uint)auVar36._12_4_ & -(uint)NAN(auVar26._12_4_);
      iVar14 = movmskps((int)in_R10,auVar32);
      lVar2 = lVar10 + -8;
      if (iVar14 != 0) break;
      lVar13 = lVar10 + uVar11;
      pfVar9 = pfVar9 + 0x60;
      in_R10 = 0;
      lVar10 = lVar2;
      auVar31 = auVar30 | auVar37;
      auVar36 = auVar34 | auVar5;
    } while (lVar13 != 0x10);
    uVar12 = -lVar2;
    if ((char)iVar14 == '\0') {
      uVar12 = uVar11;
      auVar27 = auVar30 | auVar37;
      auVar26 = auVar34 | auVar5;
    }
    auVar31 = maxps(auVar26,auVar27);
    auVar29._0_4_ = auVar26._0_4_ & -(uint)NAN(auVar27._0_4_);
    auVar29._4_4_ = auVar26._4_4_ & -(uint)NAN(auVar27._4_4_);
    auVar29._8_4_ = auVar26._8_4_ & -(uint)NAN(auVar27._8_4_);
    auVar29._12_4_ = auVar26._12_4_ & -(uint)NAN(auVar27._12_4_);
    auVar26._0_4_ = ~-(uint)NAN(auVar27._0_4_) & auVar31._0_4_;
    auVar26._4_4_ = ~-(uint)NAN(auVar27._4_4_) & auVar31._4_4_;
    auVar26._8_4_ = ~-(uint)NAN(auVar27._8_4_) & auVar31._8_4_;
    auVar26._12_4_ = ~-(uint)NAN(auVar27._12_4_) & auVar31._12_4_;
    auVar26 = auVar26 | auVar29;
    fVar18 = auVar26._0_4_;
    fVar17 = auVar26._4_4_;
    fVar23 = auVar26._8_4_;
    fVar20 = auVar26._12_4_;
    auVar31._0_8_ = auVar26._8_8_;
    auVar31._8_4_ = fVar23;
    auVar31._12_4_ = fVar20;
    fVar21 = fVar17;
    if (fVar17 <= fVar18) {
      fVar21 = fVar18;
    }
    fVar21 = (float)(~-(uint)NAN(fVar18) & (uint)fVar21 | -(uint)NAN(fVar18) & (uint)fVar17);
    if (fVar23 <= fVar21) {
      auVar27._4_12_ = auVar31._4_12_;
      auVar27._0_4_ = fVar21;
      auVar31._0_8_ = auVar27._0_8_;
    }
    fVar18 = (float)(-(uint)NAN(fVar21) & (uint)fVar23 | ~-(uint)NAN(fVar21) & (uint)auVar31._0_8_);
    fVar21 = fVar20;
    if (fVar20 <= fVar18) {
      fVar21 = fVar18;
    }
    fVar21 = (float)(-(uint)NAN(fVar18) & (uint)fVar20 | ~-(uint)NAN(fVar18) & (uint)fVar21);
    if ((uStack_f8 != uVar11) || ((char)iVar14 != '\0')) goto LAB_1408b0f78;
  }
  uVar11 = auVar19._0_8_;
  uVar12 = CONCAT44(fVar21,fVar24);
LAB_1408b1268:
  puStack_118[2] = uStack_f8;
  *puStack_118 = uStack_108;
  puStack_118[1] = (ulonglong)pbStack_100;
  puStack_118[3] = uVar11;
  puStack_118[4] = uVar12;
  return;
}

