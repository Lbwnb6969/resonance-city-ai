// VA 0x1408bae10, PDB extent 1764 bytes
// system_decorator::decorator_visual::playermade_stairs::utils::stairs_wooden_railings_assemble::construct_wooden_railing_posts
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/playermade_stairs/utils/stairs_wooden_railings_assemble.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_decorator::decorator_visual::playermade_stairs::utils::stairs_wooden_railings_assemble::construct_wooden_railing_posts
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/playermade_stairs/utils/stairs_wooden_railings_assemble.rs
   Extent: 1764 */

void pdb_1408bae10(undefined8 param_1,undefined4 param_2,longlong param_3,undefined8 *param_4,
                  ulonglong param_5,longlong param_6,ulonglong param_7,undefined1 param_8,
                  byte param_9,longlong param_10,ushort param_11)

{
  undefined8 *puVar1;
  float *pfVar2;
  undefined1 auVar3 [16];
  bool bVar4;
  float fVar5;
  float fVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  float fVar12;
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float unaff_XMM13_Da;
  float fVar24;
  float unaff_XMM15_Da;
  float fStack_160;
  float fStack_15c;
  undefined8 uStack_158;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  undefined8 uStack_134;
  float fStack_12c;
  ulonglong uStack_120;
  undefined8 *puStack_118;
  undefined8 *puStack_110;
  float fStack_108;
  float fStack_104;
  undefined8 uStack_100;
  undefined1 auStack_f4 [180];
  
  fVar6 = _DAT_142e36f28;
  fVar5 = _DAT_142e3787c;
  if ((param_9 & 1) == 0) {
    fVar5 = 0.0;
  }
  if (param_5 != 0) {
    puVar1 = (undefined8 *)((longlong)param_4 + param_5 * 0xc);
    fStack_104 = _DAT_1430151b0 + fVar5;
    fVar18 = fStack_104 * 0.0;
    uStack_100 = 0;
    uStack_120 = param_5 - 1;
    uVar9 = 0;
    puStack_118 = param_4;
    fStack_108 = fVar18;
    do {
      if ((param_11 & 1) == 0) {
        if (param_11 < 0x100) {
          while (uVar9 == 0 || uStack_120 == uVar9) {
            param_4 = (undefined8 *)((longlong)param_4 + 0xc);
            uVar9 = uVar9 + 1;
            if (param_4 == puVar1) {
              return;
            }
          }
          puVar11 = (undefined8 *)((longlong)param_4 + 0xc);
          uVar10 = uVar9;
          uVar8 = uVar9 + 1;
        }
        else {
          puVar7 = (undefined8 *)((longlong)param_4 + 0xc);
          puVar11 = puVar7;
          if (uVar9 == 0) {
            if (puVar7 == puVar1) {
              return;
            }
            puVar11 = param_4 + 3;
            uVar9 = 1;
            param_4 = puVar7;
          }
          uVar10 = uVar9;
          uVar8 = uVar9 + 1;
        }
      }
      else {
        puVar11 = (undefined8 *)((longlong)param_4 + 0xc);
        uVar8 = uVar9 + 1;
        uVar10 = uVar9;
        if ((param_11 < 0x100) && (uVar8 == param_5)) {
          if (puVar11 == puVar1) {
            return;
          }
          puVar7 = param_4 + 3;
          param_4 = puVar11;
          uVar10 = param_5;
          puVar11 = puVar7;
          uVar8 = param_5 + 1;
        }
      }
      uVar9 = uVar8;
      fVar19 = (float)*param_4 + _DAT_14300c2c0;
      fVar20 = (float)((ulonglong)*param_4 >> 0x20) + _UNK_14300c2c4;
      fVar21 = _UNK_14300c2cc + 0.0;
      fVar17 = *(float *)(param_4 + 1) + 0.0;
      pfVar2 = (float *)((longlong)puStack_118 + uVar9 * 0xc);
      if (uVar9 < param_5) {
        fVar24 = *pfVar2 - fVar19;
        fVar23 = pfVar2[2] - fVar17;
      }
      else {
        uVar8 = (uVar10 - 1) + (ulonglong)(uVar10 == 0);
        if (param_5 <= uVar8) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar8,param_5,&UNK_143015c68);
        }
        fVar24 = fVar19 - *(float *)((longlong)puStack_118 + uVar8 * 0xc);
        fVar23 = fVar17 - *(float *)((longlong)puStack_118 + uVar8 * 0xc + 8);
      }
      fVar22 = fVar6 / SQRT(fVar23 * fVar23 + fVar24 * fVar24);
      bVar4 = (int)fVar22 - 1U < 0x7fffff ||
              (int)ABS(fVar22) - 0x800000U < 0x7f000000 && -1 < (int)fVar22;
      if (bVar4) {
        fVar24 = fVar24 * fVar22;
      }
      else {
        fVar24 = 0.0;
      }
      if (uVar9 < param_5) {
        unaff_XMM13_Da = *pfVar2;
        unaff_XMM15_Da = pfVar2[2];
      }
      uVar8 = (uVar10 - 1) + (ulonglong)(uVar10 == 0);
      fVar16 = 0.0;
      fVar14 = 0.0;
      if (uVar8 < param_5) {
        fVar14 = *(float *)((longlong)puStack_118 + uVar8 * 0xc);
        fVar16 = *(float *)((longlong)puStack_118 + uVar8 * 0xc + 8);
      }
      fVar12 = unaff_XMM13_Da;
      fVar15 = unaff_XMM15_Da;
      if (param_5 <= uVar9) {
        fVar12 = fVar14;
        fVar15 = fVar16;
      }
      fVar12 = fVar19 - fVar12;
      fVar15 = fVar17 - fVar15;
      fVar14 = fVar6 / SQRT(fVar15 * fVar15 + fVar12 * fVar12);
      uStack_158 = CONCAT44(fVar14 * fVar15,fVar12 * fVar14);
      puStack_110 = puVar11;
      pdb_140df4520(auStack_f4,&uStack_158);
      if (param_7 <= uVar10) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(uVar10,param_7,&UNK_143015c50);
      }
      uStack_158 = CONCAT44(fVar20,fVar19);
      fStack_150 = fVar17;
      pdb_1408b95b0(param_1,param_2,param_3 + 0x60,&uStack_158,auStack_f4,param_8,
                    *(undefined4 *)(param_6 + uVar10 * 4),fVar5);
      if ((param_9 & 1) != 0) {
        fStack_160 = _DAT_142e377f0;
        if (bVar4) {
          fStack_160 = fVar23 * (float)((uint)fVar22 ^ _DAT_142e37820);
        }
        fStack_15c = fVar24;
        pdb_140df4520(&uStack_158,&fStack_160);
        fVar24 = (float)uStack_158;
        fVar23 = uStack_158._4_4_;
        fVar22 = fStack_150;
        fVar14 = 0.0;
        fVar16 = 0.0;
        if (param_10 != 0) {
          fVar24 = (float)((uint)(float)uStack_158 ^ _DAT_142e37820);
          fVar23 = (float)((uint)uStack_158._4_4_ ^ _DAT_142e37820);
          fVar22 = (float)((uint)fStack_150 ^ _UNK_142e37824);
          fVar14 = _UNK_142e37828;
          fVar16 = _UNK_142e3782c;
        }
        fVar19 = fVar19 - fStack_108;
        fVar20 = fVar20 - fStack_104;
        fVar21 = fVar21 - uStack_100._4_4_;
        fVar17 = fVar17 - fVar18;
        auVar13._0_4_ = (fVar23 * _DAT_143009bd0 + fVar20) - fVar20;
        auVar13._4_4_ = (fVar22 * _UNK_143009bd4 + fVar17) - fVar17;
        auVar13._8_4_ = (fVar14 * _UNK_143009bd8 + fVar21) - fVar21;
        auVar13._12_4_ = (fVar16 * _UNK_143009bdc + fVar21) - fVar21;
        fVar21 = (fVar24 * _DAT_142e37988 + fVar19) - fVar19;
        fVar24 = SQRT(auVar13._4_4_ * auVar13._4_4_ +
                      fVar21 * fVar21 + auVar13._0_4_ * auVar13._0_4_);
        if (_DAT_143009d64 <= fVar24) {
          fVar21 = fVar21 / fVar24;
          auVar3._4_4_ = fVar24;
          auVar3._0_4_ = fVar24;
          auVar3._8_8_ = 0;
          auVar13 = divps(auVar13,auVar3);
          fStack_148 = auVar13._0_4_;
          fStack_144 = auVar13._4_4_;
          fVar14 = fVar21 - fStack_148 * 0.0;
          fVar23 = fStack_148 * 0.0 - fStack_144;
          fVar22 = fStack_144 * 0.0 - fVar21 * 0.0;
          fStack_150 = fVar6 / SQRT(fVar14 * fVar14 + fVar22 * fVar22 + fVar23 * fVar23);
          fVar23 = fStack_150 * fVar23;
          fVar22 = fStack_150 * fVar22;
          fStack_150 = fStack_150 * fVar14;
          fVar14 = fStack_144 * fVar22 - fStack_150 * fStack_148;
          fVar16 = fVar21 * fStack_150 - fVar23 * fStack_144;
          fVar12 = fStack_148 * fVar23 - fVar22 * fVar21;
          fVar15 = fVar6 / SQRT(fVar12 * fVar12 + fVar16 * fVar16 + fVar14 * fVar14);
          fStack_150 = fStack_150 * DAT_143015960._8_4_;
          fStack_14c = fVar21 * fVar24;
          fStack_148 = fStack_148 * fVar24;
          fStack_144 = fStack_144 * fVar24;
          fStack_140 = fVar15 * fVar14 * _DAT_14300c2e0;
          fStack_13c = fVar15 * fVar16 * _DAT_14300c2e0;
          uStack_158 = CONCAT44(fVar22 * DAT_143015960._4_4_,fVar23 * (float)DAT_143015960);
          fStack_138 = fVar15 * fVar12 * _DAT_14300c2e0;
          uStack_134 = CONCAT44(fVar20 + _UNK_143015974,fVar19 + _DAT_143015970);
          fStack_12c = fVar17;
          pdb_1408b9880(param_1,param_2,param_3 + 0x60,&uStack_158);
        }
      }
      param_4 = puStack_110;
    } while (puStack_110 != puVar1);
  }
  return;
}

