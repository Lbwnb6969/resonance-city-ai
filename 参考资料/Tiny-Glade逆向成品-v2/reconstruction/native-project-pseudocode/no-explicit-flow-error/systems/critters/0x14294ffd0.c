// VA 0x14294ffd0, PDB extent 1964 bytes
// system_critters::firefly::update_firefly_goals
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/critters/src/firefly.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_critters::firefly::update_firefly_goals
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/critters/src/firefly.rs
   Extent: 1964 */

void pdb_14294ffd0(longlong *param_1,undefined8 *param_2,longlong *param_3,longlong *param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  char cVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  bool bVar12;
  ulonglong uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  uint uVar17;
  longlong lVar18;
  ulonglong uVar19;
  byte bVar20;
  byte bVar21;
  int iVar22;
  longlong lVar23;
  uint *puVar24;
  longlong lVar25;
  longlong lVar26;
  longlong lVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  uint *puVar30;
  uint *puVar31;
  longlong lVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  longlong lStack_170;
  longlong lStack_168;
  longlong lStack_160;
  undefined1 auStack_150 [8];
  float fStack_148;
  longlong lStack_140;
  undefined4 *puStack_138;
  longlong lStack_130;
  longlong lStack_128;
  ulonglong *puStack_120;
  uint *puStack_118;
  ulonglong uStack_110;
  longlong lStack_108;
  longlong lStack_100;
  longlong lStack_f8;
  undefined4 *puStack_f0;
  
  if (*(char *)(*param_3 + 4) != '\x01') {
    return;
  }
  *(undefined4 *)param_2[2] = *(undefined4 *)((longlong)param_2 + 0x1c);
  fVar16 = _DAT_14300e4bc;
  fVar15 = _DAT_142e36f34;
  fVar14 = _DAT_142e36f28;
  puStack_120 = (ulonglong *)*param_2;
  fVar2 = *(float *)(*param_4 + 0x28);
  lVar8 = *param_1;
  lStack_128 = param_1[1];
  uVar7 = *(undefined4 *)((longlong)param_1 + 0x14);
  puVar30 = *(uint **)(lVar8 + 0xf8);
  puStack_118 = puVar30 + *(longlong *)(lVar8 + 0x100);
  cVar6 = *(char *)(lVar8 + 0x108);
  lStack_f8 = 0;
  lStack_140 = 8;
  fVar39 = (float)_DAT_143267c60;
  uVar13 = (ulonglong)_DAT_143267c60 >> 0x20;
  lStack_100 = 0;
  lStack_170 = 0;
  lStack_108 = 0;
  lVar25 = 0;
  uStack_110 = 0;
  puVar31 = puStack_118;
  lVar32 = lStack_128;
  do {
    iVar22 = (int)uStack_110;
    if (cVar6 == '\0') {
      if (iVar22 == (int)lVar25) {
        do {
          if (puVar30 == puVar31) {
            return;
          }
          uVar17 = *puVar30;
          puVar30 = puVar30 + 1;
          lVar25 = *(longlong *)(*(longlong *)(lVar32 + 0x100) + 0x58 + (ulonglong)uVar17 * 0xa0);
        } while (lVar25 == 0);
        lVar18 = *(longlong *)(lVar32 + 0x100) + (ulonglong)uVar17 * 0xa0;
        uVar19 = (ulonglong)*(uint *)(lVar18 + 0x94);
        lVar26 = *(longlong *)(lVar32 + 0x1a0) + uVar19 * 0x48;
        uVar19 = *(ulonglong *)(*(longlong *)(lVar32 + 0x1a0) + 0x40 + uVar19 * 0x48);
        if ((*(ulonglong *)(lVar8 + 0x110) < uVar19) &&
           (uVar28 = *(ulonglong *)
                      (*(longlong *)(lVar26 + 0x38) + *(ulonglong *)(lVar8 + 0x110) * 8),
           uVar28 != 0)) {
          lStack_f8 = *(longlong *)(*(longlong *)(lVar26 + 0x18) + 0x10 + ~uVar28 * 0x30);
        }
        else {
          lStack_f8 = 0;
        }
        lVar23 = *(longlong *)(lVar26 + 0x38);
        if (*(ulonglong *)(lVar8 + 0x118) < uVar19) {
          uVar19 = *(ulonglong *)(lVar23 + *(ulonglong *)(lVar8 + 0x118) * 8);
          lVar26 = *(longlong *)(lVar26 + 0x18);
          if (uVar19 == 0) goto LAB_1429502fe;
          lStack_100 = *(longlong *)(lVar26 + 0x10 + ~uVar19 * 0x30);
        }
        else {
          lVar26 = *(longlong *)(lVar26 + 0x18);
LAB_1429502fe:
          lStack_100 = 0;
        }
        lVar27 = ~*(ulonglong *)(lVar23 + *(longlong *)(lVar8 + 0x120) * 8) * 0x30;
        lStack_170 = *(longlong *)(lVar26 + 0x10 + lVar27);
        lStack_160 = *(longlong *)(lVar26 + 0x28 + lVar27);
        lVar23 = ~*(ulonglong *)(lVar23 + *(longlong *)(lVar8 + 0x128) * 8) * 0x30;
        lStack_108 = *(longlong *)(lVar26 + 0x10 + lVar23);
        lStack_168 = *(longlong *)(lVar26 + 0x28 + lVar23);
        lStack_140 = *(longlong *)(lVar18 + 0x50);
        iVar22 = 0;
        uStack_110 = 0;
      }
      else {
        uStack_110 = uStack_110 & 0xffffffff;
      }
      uStack_110 = (ulonglong)~*(uint *)(lStack_140 + 8 + uStack_110 * 0x10);
    }
    else {
      if (iVar22 == (int)lVar25) {
        do {
          if (puVar30 == puVar31) {
            return;
          }
          uVar17 = *puVar30;
          puVar30 = puVar30 + 1;
          lVar25 = *(longlong *)(*(longlong *)(lVar32 + 0x1a0) + 0x10 + (ulonglong)uVar17 * 0x48);
        } while (lVar25 == 0);
        lVar26 = *(longlong *)(lVar32 + 0x1a0) + (ulonglong)uVar17 * 0x48;
        if ((*(ulonglong *)(lVar8 + 0x110) < *(ulonglong *)(lVar26 + 0x40)) &&
           (uVar19 = *(ulonglong *)
                      (*(longlong *)(lVar26 + 0x38) + *(ulonglong *)(lVar8 + 0x110) * 8),
           uVar19 != 0)) {
          lStack_f8 = *(longlong *)(*(longlong *)(lVar26 + 0x18) + 0x10 + ~uVar19 * 0x30);
        }
        else {
          lStack_f8 = 0;
        }
        lVar18 = *(longlong *)(lVar26 + 0x38);
        if (*(ulonglong *)(lVar8 + 0x118) < *(ulonglong *)(lVar26 + 0x40)) {
          uVar19 = *(ulonglong *)(lVar18 + *(ulonglong *)(lVar8 + 0x118) * 8);
          lVar26 = *(longlong *)(lVar26 + 0x18);
          if (uVar19 == 0) goto LAB_14295029d;
          lStack_100 = *(longlong *)(lVar26 + 0x10 + ~uVar19 * 0x30);
        }
        else {
          lVar26 = *(longlong *)(lVar26 + 0x18);
LAB_14295029d:
          lStack_100 = 0;
        }
        lVar23 = ~*(ulonglong *)(lVar18 + *(longlong *)(lVar8 + 0x120) * 8) * 0x30;
        lStack_170 = *(longlong *)(lVar26 + 0x10 + lVar23);
        lStack_160 = *(longlong *)(lVar26 + 0x28 + lVar23);
        lVar18 = ~*(ulonglong *)(lVar18 + *(longlong *)(lVar8 + 0x128) * 8) * 0x30;
        lStack_108 = *(longlong *)(lVar26 + 0x10 + lVar18);
        lStack_168 = *(longlong *)(lVar26 + 0x28 + lVar18);
        uStack_110 = 0;
      }
      iVar22 = (int)uStack_110;
      uStack_110 = uStack_110 & 0xffffffff;
    }
    lStack_130 = lStack_100 + uStack_110 * 0xc;
    lVar26 = uStack_110 * 0x30 + lStack_f8;
    pfVar1 = (float *)(lStack_170 + uStack_110 * 4);
    puStack_f0 = (undefined4 *)(lStack_160 + uStack_110 * 4);
    puStack_138 = (undefined4 *)(lStack_168 + uStack_110 * 4);
    puVar24 = (uint *)(uStack_110 * 0x10 + lStack_108);
    uStack_110 = (ulonglong)(iVar22 + 1);
    *puStack_f0 = uVar7;
    fVar33 = *pfVar1 - fVar2;
    *pfVar1 = fVar33;
    uVar17 = *puVar24;
    puVar31 = puStack_118;
    if (((fVar33 <= 0.0) || ((uVar17 & 1) == 0)) ||
       (fVar33 = (float)puVar24[2] - *(float *)(lVar26 + 0x14),
       fVar36 = (float)puVar24[1] - *(float *)(lVar26 + 0x10),
       fVar37 = (float)puVar24[3] - *(float *)(lVar26 + 0x18),
       fVar37 * fVar37 + fVar33 * fVar33 + fVar36 * fVar36 < _DAT_1434c87b4)) {
      auVar9._8_8_ = 0;
      auVar9._0_8_ = *puStack_120;
      uVar19 = SUB168(auVar9 * ZEXT816(0x4385df649fccf645),0);
      uVar28 = puStack_120[1] * 0x4385df649fccf645 +
               SUB168(auVar9 * ZEXT816(0x4385df649fccf645),8) + *puStack_120 * 0x2360ed051fc65da4;
      *puStack_120 = uVar19;
      puStack_120[1] = uVar28;
      uVar19 = uVar28 ^ uVar19;
      bVar20 = (byte)(uVar28 >> 0x3a);
      fVar33 = ((float)(((uint)(uVar19 >> bVar20) | (uint)(uVar19 << 0x40 - bVar20)) >> 9 |
                       0x3f800000) + fVar15) * _DAT_142e3c608 + _DAT_142e37ad4;
      *puStack_f0 = uVar7;
      *pfVar1 = fVar33;
      uVar19 = *puStack_120;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = uVar19;
      uVar28 = puStack_120[1] * 0x4385df649fccf645 +
               SUB168(auVar10 * ZEXT816(0x4385df649fccf645),8) + uVar19 * 0x2360ed051fc65da4;
      uVar29 = uVar28 ^ SUB168(auVar10 * ZEXT816(0x4385df649fccf645),0);
      bVar20 = (byte)(uVar28 >> 0x3a);
      fVar33 = *(float *)(&UNK_14330e938 + (ulonglong)(uVar17 == 0) * 4);
      auVar11._8_8_ = 0;
      auVar11._0_8_ = uVar19;
      uVar28 = SUB168(auVar11 * ZEXT816(0x529ed9eb20e0ae99),0);
      uVar19 = puStack_120[1] * 0x529ed9eb20e0ae99 +
               SUB168(auVar11 * ZEXT816(0x529ed9eb20e0ae99),8) + uVar19 * 0x17bce35bdf69743c;
      *puStack_120 = uVar28;
      puStack_120[1] = uVar19;
      uVar28 = uVar19 ^ uVar28;
      bVar21 = (byte)(uVar19 >> 0x3a);
      pdb_140de9570(auStack_150,
                    CONCAT44((float)(((uint)(uVar28 >> bVar21) | (uint)(uVar28 << 0x40 - bVar21)) >>
                                     9 | 0x3f800000) + fVar15,
                             (float)(((uint)(uVar29 >> bVar20) | (uint)(uVar29 << 0x40 - bVar20)) >>
                                     9 | 0x3f800000) + fVar15));
      fVar36 = fStack_148;
      fVar37 = auStack_150._0_4_;
      fVar34 = auStack_150._4_4_;
      pdb_140df45c0(auStack_150,lStack_130);
      fVar37 = fVar33 * auStack_150._0_4_ + fVar37 * fVar39;
      fVar34 = fVar33 * auStack_150._4_4_ + fVar34 * (float)uVar13;
      fVar36 = fVar33 * fStack_148 + fVar36;
      fVar33 = fVar14 / SQRT(fVar36 * fVar36 + fVar34 * fVar34 + fVar37 * fVar37);
      bVar12 = (int)fVar33 - 1U < 0x7fffff ||
               (int)ABS(fVar33) - 0x800000U < 0x7f000000 && -1 < (int)fVar33;
      if (bVar12) {
        fVar36 = fVar36 * fVar33;
      }
      else {
        fVar36 = 0.0;
      }
      uVar17 = (uint)bVar12;
      fVar3 = *pfVar1;
      uVar5 = *(undefined8 *)(lVar26 + 0x10);
      fVar4 = *(float *)(lVar26 + 0x18);
      fVar35 = (float)uVar5;
      fVar37 = fVar3 * (float)((int)(uVar17 << 0x1f) >> 0x1f & (uint)(fVar37 * fVar33)) + fVar35;
      fVar38 = fVar36 * fVar3 + fVar4;
      fVar36 = SQRT(fVar38 * fVar38 + fVar37 * fVar37);
      lVar32 = lStack_128;
      if ((fVar36 < fVar16) || (fVar36 < SQRT(fVar4 * fVar4 + fVar35 * fVar35))) {
        *puStack_138 = uVar7;
        *puVar24 = 1;
        *(ulonglong *)(puVar24 + 1) =
             CONCAT44(fVar3 * (float)((int)(uVar17 << 0x1f) >> 0x1f & (uint)(fVar34 * fVar33)) +
                      (float)((ulonglong)uVar5 >> 0x20),fVar37);
        puVar24[3] = (uint)fVar38;
      }
      else {
        *puStack_138 = uVar7;
        *puVar24 = 0;
      }
    }
  } while( true );
}

