// VA 0x14226d6c0, PDB extent 2100 bytes
// system_critters::butterfly::update_butterfly_goals
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/critters/src/butterfly.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_critters::butterfly::update_butterfly_goals
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/critters/src/butterfly.rs
   Extent: 2100 */

void pdb_14226d6c0(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  uint *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  float fVar4;
  float fVar5;
  char cVar6;
  longlong lVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  bool bVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  longlong lVar17;
  ulonglong uVar18;
  byte bVar19;
  byte bVar20;
  int iVar21;
  longlong lVar22;
  uint *puVar23;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  undefined4 uVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  uint *puVar30;
  longlong lVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  uint uVar37;
  float fVar38;
  longlong lStack_170;
  longlong lStack_158;
  longlong lStack_150;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  longlong lStack_138;
  longlong lStack_130;
  undefined4 uStack_124;
  longlong lStack_120;
  undefined4 *puStack_118;
  longlong lStack_110;
  ulonglong *puStack_108;
  longlong lStack_100;
  ulonglong uStack_f8;
  longlong lStack_f0;
  
  *(undefined4 *)param_2[2] = *(undefined4 *)((longlong)param_2 + 0x1c);
  fVar16 = _DAT_14300e4bc;
  fVar15 = _DAT_142f57bc8;
  fVar14 = _DAT_142e36f50;
  fVar13 = _DAT_142e36f34;
  fVar12 = _DAT_142e36f28;
  puStack_108 = (ulonglong *)*param_2;
  fVar4 = *(float *)(*param_3 + 0x28);
  lVar7 = *param_1;
  lStack_110 = param_1[1];
  uStack_124 = *(undefined4 *)((longlong)param_1 + 0x14);
  puVar30 = *(uint **)(lVar7 + 0xf8);
  puVar1 = puVar30 + *(longlong *)(lVar7 + 0x100);
  cVar6 = *(char *)(lVar7 + 0x108);
  lStack_170 = 0;
  lStack_120 = 8;
  lStack_f0 = 0;
  lStack_150 = 0;
  lStack_158 = 0;
  lVar24 = 0;
  uStack_f8 = 0;
  lVar31 = lStack_110;
  uVar27 = uStack_124;
  do {
    iVar21 = (int)uStack_f8;
    if (cVar6 == '\0') {
      if (iVar21 == (int)lVar24) {
        do {
          if (puVar30 == puVar1) {
            return;
          }
          uVar37 = *puVar30;
          puVar30 = puVar30 + 1;
          lVar24 = *(longlong *)(*(longlong *)(lVar31 + 0x100) + 0x58 + (ulonglong)uVar37 * 0xa0);
        } while (lVar24 == 0);
        lVar17 = *(longlong *)(lVar31 + 0x100) + (ulonglong)uVar37 * 0xa0;
        uVar18 = (ulonglong)*(uint *)(lVar17 + 0x94);
        lVar25 = *(longlong *)(lVar31 + 0x1a0) + uVar18 * 0x48;
        uVar18 = *(ulonglong *)(*(longlong *)(lVar31 + 0x1a0) + 0x40 + uVar18 * 0x48);
        if ((*(ulonglong *)(lVar7 + 0x110) < uVar18) &&
           (uVar28 = *(ulonglong *)
                      (*(longlong *)(lVar25 + 0x38) + *(ulonglong *)(lVar7 + 0x110) * 8),
           uVar28 != 0)) {
          lStack_170 = *(longlong *)(*(longlong *)(lVar25 + 0x18) + 0x10 + ~uVar28 * 0x30);
        }
        else {
          lStack_170 = 0;
        }
        lVar22 = *(longlong *)(lVar25 + 0x38);
        if (*(ulonglong *)(lVar7 + 0x118) < uVar18) {
          uVar18 = *(ulonglong *)(lVar22 + *(ulonglong *)(lVar7 + 0x118) * 8);
          lVar25 = *(longlong *)(lVar25 + 0x18);
          if (uVar18 == 0) goto LAB_14226da3f;
          lStack_f0 = *(longlong *)(lVar25 + 0x10 + ~uVar18 * 0x30);
        }
        else {
          lVar25 = *(longlong *)(lVar25 + 0x18);
LAB_14226da3f:
          lStack_f0 = 0;
        }
        lVar26 = ~*(ulonglong *)(lVar22 + *(longlong *)(lVar7 + 0x120) * 8) * 0x30;
        lStack_150 = *(longlong *)(lVar25 + 0x10 + lVar26);
        lStack_130 = *(longlong *)(lVar25 + 0x28 + lVar26);
        lVar22 = ~*(ulonglong *)(lVar22 + *(longlong *)(lVar7 + 0x128) * 8) * 0x30;
        lStack_158 = *(longlong *)(lVar25 + 0x10 + lVar22);
        lStack_138 = *(longlong *)(lVar25 + 0x28 + lVar22);
        lStack_120 = *(longlong *)(lVar17 + 0x50);
        iVar21 = 0;
        uStack_f8 = 0;
      }
      else {
        uStack_f8 = uStack_f8 & 0xffffffff;
      }
      uStack_f8 = (ulonglong)~*(uint *)(lStack_120 + 8 + uStack_f8 * 0x10);
    }
    else {
      if (iVar21 == (int)lVar24) {
        do {
          if (puVar30 == puVar1) {
            return;
          }
          uVar37 = *puVar30;
          puVar30 = puVar30 + 1;
          lVar24 = *(longlong *)(*(longlong *)(lVar31 + 0x1a0) + 0x10 + (ulonglong)uVar37 * 0x48);
        } while (lVar24 == 0);
        lVar25 = *(longlong *)(lVar31 + 0x1a0) + (ulonglong)uVar37 * 0x48;
        if ((*(ulonglong *)(lVar7 + 0x110) < *(ulonglong *)(lVar25 + 0x40)) &&
           (uVar18 = *(ulonglong *)
                      (*(longlong *)(lVar25 + 0x38) + *(ulonglong *)(lVar7 + 0x110) * 8),
           uVar18 != 0)) {
          lStack_170 = *(longlong *)(*(longlong *)(lVar25 + 0x18) + 0x10 + ~uVar18 * 0x30);
        }
        else {
          lStack_170 = 0;
        }
        lVar17 = *(longlong *)(lVar25 + 0x38);
        if (*(ulonglong *)(lVar7 + 0x118) < *(ulonglong *)(lVar25 + 0x40)) {
          uVar18 = *(ulonglong *)(lVar17 + *(ulonglong *)(lVar7 + 0x118) * 8);
          lVar25 = *(longlong *)(lVar25 + 0x18);
          if (uVar18 == 0) goto LAB_14226d9d9;
          lStack_f0 = *(longlong *)(lVar25 + 0x10 + ~uVar18 * 0x30);
        }
        else {
          lVar25 = *(longlong *)(lVar25 + 0x18);
LAB_14226d9d9:
          lStack_f0 = 0;
        }
        lVar22 = ~*(ulonglong *)(lVar17 + *(longlong *)(lVar7 + 0x120) * 8) * 0x30;
        lStack_150 = *(longlong *)(lVar25 + 0x10 + lVar22);
        lStack_130 = *(longlong *)(lVar25 + 0x28 + lVar22);
        lVar17 = ~*(ulonglong *)(lVar17 + *(longlong *)(lVar7 + 0x128) * 8) * 0x30;
        lStack_158 = *(longlong *)(lVar25 + 0x10 + lVar17);
        lStack_138 = *(longlong *)(lVar25 + 0x28 + lVar17);
        uStack_f8 = 0;
      }
      iVar21 = (int)uStack_f8;
      uStack_f8 = uStack_f8 & 0xffffffff;
    }
    lStack_100 = lStack_f0 + uStack_f8 * 0xc;
    piVar2 = (int *)(lStack_150 + uStack_f8 * 0x18);
    lVar25 = uStack_f8 * 0x30 + lStack_170;
    puVar3 = (undefined4 *)(lStack_130 + uStack_f8 * 4);
    puStack_118 = (undefined4 *)(lStack_138 + uStack_f8 * 4);
    puVar23 = (uint *)(uStack_f8 * 0x10 + lStack_158);
    uStack_f8 = (ulonglong)(iVar21 + 1);
    *puVar3 = uVar27;
    fVar32 = (float)piVar2[2] - fVar4;
    piVar2[2] = (int)fVar32;
    uVar37 = *puVar23;
    if (((fVar32 <= 0.0) || ((uVar37 & 1) == 0)) ||
       (fVar32 = (float)puVar23[2] - *(float *)(lVar25 + 0x14),
       fVar33 = (float)puVar23[1] - *(float *)(lVar25 + 0x10),
       fVar34 = (float)puVar23[3] - *(float *)(lVar25 + 0x18),
       fVar34 * fVar34 + fVar32 * fVar32 + fVar33 * fVar33 < _DAT_1434c87b4)) {
      auVar8._8_8_ = 0;
      auVar8._0_8_ = *puStack_108;
      uVar18 = SUB168(auVar8 * ZEXT816(0x4385df649fccf645),0);
      uVar28 = puStack_108[1] * 0x4385df649fccf645 +
               SUB168(auVar8 * ZEXT816(0x4385df649fccf645),8) + *puStack_108 * 0x2360ed051fc65da4;
      *puStack_108 = uVar18;
      puStack_108[1] = uVar28;
      uVar18 = uVar28 ^ uVar18;
      bVar19 = (byte)(uVar28 >> 0x3a);
      fVar32 = ((float)(((uint)(uVar18 >> bVar19) | (uint)(uVar18 << 0x40 - bVar19)) >> 9 |
                       0x3f800000) + fVar13) * fVar14 + _DAT_142e3b1d8;
      *puVar3 = uVar27;
      piVar2[2] = (int)fVar32;
      uVar18 = *puStack_108;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = uVar18;
      uVar28 = puStack_108[1] * 0x4385df649fccf645 +
               SUB168(auVar9 * ZEXT816(0x4385df649fccf645),8) + uVar18 * 0x2360ed051fc65da4;
      uVar29 = uVar28 ^ SUB168(auVar9 * ZEXT816(0x4385df649fccf645),0);
      bVar19 = (byte)(uVar28 >> 0x3a);
      iVar21 = *piVar2;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = uVar18;
      uVar28 = SUB168(auVar10 * ZEXT816(0x529ed9eb20e0ae99),0);
      uVar18 = puStack_108[1] * 0x529ed9eb20e0ae99 +
               SUB168(auVar10 * ZEXT816(0x529ed9eb20e0ae99),8) + uVar18 * 0x17bce35bdf69743c;
      *puStack_108 = uVar28;
      puStack_108[1] = uVar18;
      uVar28 = uVar18 ^ uVar28;
      bVar20 = (byte)(uVar18 >> 0x3a);
      pdb_140de9570(&fStack_144,
                    CONCAT44((float)(((uint)(uVar28 >> bVar20) | (uint)(uVar28 << 0x40 - bVar20)) >>
                                     9 | 0x3f800000) + fVar13,
                             (float)(((uint)(uVar29 >> bVar19) | (uint)(uVar29 << 0x40 - bVar19)) >>
                                     9 | 0x3f800000) + fVar13));
      fVar34 = fStack_13c;
      fVar33 = fStack_140;
      fVar32 = fStack_144;
      pdb_140df45c0(&fStack_144,lStack_100);
      uVar37 = -(uint)(uVar37 == _UNK_142e3c994);
      fVar35 = (float)(-(uint)(iVar21 == _DAT_142e3c990) & _DAT_1434c87d0 |
                      ~-(uint)(iVar21 == _DAT_142e3c990) & _DAT_1434c87c0);
      fVar38 = (float)(uVar37 & _UNK_1434c87d4 | ~uVar37 & _UNK_1434c87c4);
      fVar36 = fVar33 * fVar35 * fVar14 + fStack_140 * fVar38;
      fVar33 = (float)piVar2[2] * _DAT_1434c87e0;
      fVar32 = fVar38 * fStack_144 + fVar35 * fVar32;
      fVar34 = fVar38 * fStack_13c + fVar35 * fVar34;
      fVar35 = fVar12 / SQRT(fVar34 * fVar34 + fVar36 * fVar36 + fVar32 * fVar32);
      bVar11 = (int)fVar35 - 1U < 0x7fffff ||
               (int)ABS(fVar35) - 0x800000U < 0x7f000000 && -1 < (int)fVar35;
      if (bVar11) {
        fVar36 = fVar36 * fVar35;
      }
      else {
        fVar36 = 0.0;
      }
      fVar38 = *(float *)(lVar25 + 0x10);
      fVar5 = *(float *)(lVar25 + 0x18);
      uVar37 = (uint)bVar11;
      fVar36 = fVar36 * fVar33 + *(float *)(lVar25 + 0x14);
      fVar32 = fVar38 + fVar33 * (float)((int)(uVar37 << 0x1f) >> 0x1f & (uint)(fVar32 * fVar35));
      fVar33 = fVar5 + fVar33 * (float)((int)(uVar37 << 0x1f) >> 0x1f & (uint)(fVar34 * fVar35));
      if (fVar15 <= fVar36) {
        fVar36 = fVar15;
      }
      fVar34 = SQRT(fVar33 * fVar33 + fVar32 * fVar32);
      lVar31 = lStack_110;
      uVar27 = uStack_124;
      if ((fVar34 < fVar16) || (fVar34 < SQRT(fVar5 * fVar5 + fVar38 * fVar38))) {
        *puStack_118 = uStack_124;
        *puVar23 = 1;
        puVar23[1] = (uint)fVar32;
        puVar23[2] = (uint)fVar36;
        puVar23[3] = (uint)fVar33;
      }
      else {
        *puStack_118 = uStack_124;
        *puVar23 = 0;
      }
    }
  } while( true );
}

