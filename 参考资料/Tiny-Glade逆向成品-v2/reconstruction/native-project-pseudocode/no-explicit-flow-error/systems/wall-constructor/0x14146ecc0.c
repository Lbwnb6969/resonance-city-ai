// VA 0x14146ecc0, PDB extent 1283 bytes
// system_wall_constructor::construct_lintels::place_support_beams::add_diagonal_support<system_wall_constructor::construct_lintels::construct_lintels::closure_env$2>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_lintels/place_support_beams.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_wall_constructor::construct_lintels::place_support_beams::add_diagonal_support<system_wall_constructor::construct_lintels::construct_lintels::closure_env$2>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_lintels/place_support_beams.rs
   Extent: 1283 */

void pdb_14146ecc0(undefined4 param_1,uint param_2,float param_3,longlong param_4,ulonglong param_5,
                  float param_6,char param_7,longlong param_8,ulonglong param_9,undefined8 param_10,
                  undefined1 *param_11,undefined4 param_12,undefined4 param_13)

{
  ulonglong uVar1;
  float fVar2;
  undefined8 uVar3;
  char cVar4;
  uint uVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  float fVar8;
  float fVar9;
  float fVar12;
  float fVar13;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  longlong lStack_1b8;
  ulonglong uStack_1b0;
  code *pcStack_1a8;
  uint uStack_1a0;
  float fStack_19c;
  uint uStack_198;
  float fStack_194;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  
  uVar7 = (ulonglong)param_2;
  if (param_5 <= uVar7) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(uVar7,param_5,&UNK_14330b448);
  }
  uVar1 = uVar7 + 1;
  if (param_5 <= uVar1) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(uVar1,param_5,&UNK_14330b448);
  }
  if (param_9 <= uVar7) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(uVar7,param_9,&UNK_14330b460);
  }
  if (uVar1 < param_9) {
    fVar2 = *(float *)(param_4 + uVar7 * 4);
    fVar20 = (*(float *)(param_4 + 4 + uVar7 * 4) - fVar2) * param_3 + fVar2 + _DAT_143008c20;
    param_6 = param_6 + _DAT_14330b2b8;
    fVar21 = _DAT_142e3798c * fVar20;
    fVar2 = param_6;
    if (fVar21 <= param_6) {
      fVar2 = fVar21;
    }
    fVar22 = (float)(-(uint)NAN(fVar21) & (uint)param_6 | ~-(uint)NAN(fVar21) & (uint)fVar2);
    uVar3 = *(undefined8 *)(param_8 + uVar7 * 0xc);
    fVar8 = (float)uVar3;
    fVar9 = (float)((ulonglong)uVar3 >> 0x20);
    uVar3 = *(undefined8 *)(param_8 + uVar1 * 0xc);
    fVar2 = *(float *)(param_8 + 8 + uVar1 * 0xc);
    fVar21 = *(float *)(param_8 + 8 + uVar7 * 0xc);
    lStack_1b8 = param_8;
    uStack_1b0 = param_9;
    pcStack_1a8 = pdb_140ade410;
    uStack_1a0 = param_2;
    fStack_19c = param_3;
    uStack_198 = param_2;
    fStack_194 = param_3;
    if (param_7 == '\0') {
      pdb_14141d7e0(&lStack_1b8);
      fVar12 = fStack_19c;
      uVar5 = uStack_1a0;
    }
    else {
      pdb_14141df70(&lStack_1b8,_DAT_14330b2bc + fVar22 + _DAT_143007398);
      fVar12 = fStack_194;
      uVar5 = uStack_198;
    }
    uVar7 = (ulonglong)uVar5;
    if (param_5 <= uVar7) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(uVar7,param_5,&UNK_14330b478);
    }
    uVar1 = uVar7 + 1;
    if (param_5 <= uVar1) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(uVar1,param_5,&UNK_14330b478);
    }
    if (uVar7 < param_9) {
      if (uVar1 < param_9) {
        fStack_b4 = (fVar20 - fVar22) + _DAT_14300a4e8;
        fVar22 = fStack_b4 * 0.0;
        fStack_b8 = fVar22 + param_3 * ((float)uVar3 - fVar8) + fVar8;
        fStack_b4 = fStack_b4 + param_3 * ((float)((ulonglong)uVar3 >> 0x20) - fVar9) + fVar9;
        fStack_b0 = fVar22 + param_3 * (fVar2 - fVar21) + fVar21;
        fVar20 = *(float *)(param_4 + uVar7 * 4);
        fVar8 = *(float *)(param_8 + uVar7 * 0xc);
        fVar9 = (*(float *)(param_4 + 4 + uVar7 * 4) - fVar20) * fVar12 + fVar20 + _DAT_143008c24;
        fVar14 = fVar9 * 0.0;
        fVar20 = ((*(float *)(param_8 + uVar1 * 0xc) - fVar8) * fVar12 + fVar8 + fVar14) - fStack_b8
        ;
        uVar3 = *(undefined8 *)(param_8 + 4 + uVar7 * 0xc);
        fVar8 = (float)uVar3;
        fVar18 = (float)((ulonglong)uVar3 >> 0x20);
        uVar3 = *(undefined8 *)(param_8 + 4 + uVar1 * 0xc);
        fVar9 = (fVar9 + fVar12 * ((float)uVar3 - fVar8) + fVar8) - fStack_b4;
        fVar12 = (fVar14 + fVar12 * ((float)((ulonglong)uVar3 >> 0x20) - fVar18) + fVar18) -
                 fStack_b0;
        fVar8 = SQRT(fVar12 * fVar12 + fVar20 * fVar20 + fVar9 * fVar9);
        fVar15 = _DAT_142f60fec + fVar8;
        fVar8 = _DAT_142e36f28 / fVar8;
        fVar20 = fVar20 * fVar8;
        fVar9 = fVar8 * fVar9;
        fVar8 = fVar8 * fVar12;
        fVar12 = _DAT_142e37b00 * fVar20 + (float)_DAT_142e378e0 * fVar8;
        fVar14 = _UNK_142e37b04 * fVar9 + (float)((ulonglong)_DAT_142e378e0 >> 0x20) * fVar20;
        fVar18 = _UNK_142e37b08 * fVar8 + fVar9 * 0.0;
        auVar10._4_4_ = fVar12;
        auVar10._0_4_ = fVar18;
        auVar10._8_4_ = fVar14;
        auVar10._12_4_ = fVar14;
        fVar12 = SQRT(fVar14 * fVar14 + fVar18 * fVar18 + fVar12 * fVar12);
        auVar11._4_4_ = fVar12;
        auVar11._0_4_ = fVar12;
        auVar11._8_4_ = fVar12;
        auVar11._12_4_ = fVar12;
        auVar11 = divps(auVar10,auVar11);
        fVar12 = auVar11._0_4_;
        fVar18 = auVar11._4_4_;
        fVar13 = auVar11._8_4_;
        fVar16 = fVar13 * fVar20 - fVar8 * fVar12;
        fVar17 = fVar12 * fVar9 - fVar20 * fVar18;
        fVar19 = fVar18 * fVar8 - fVar9 * fVar13;
        fStack_e8 = _DAT_14330b2d0 * fVar19 + fVar20 * _DAT_14330b2d0 + _DAT_14330b2c0 * fVar12;
        fStack_e4 = _UNK_14330b2d4 * fVar16 + fVar9 * _UNK_14330b2d4 + _UNK_14330b2c4 * fVar18;
        fStack_e0 = _UNK_14330b2d8 * fVar17 + fVar8 * _UNK_14330b2d8 + _UNK_14330b2c8 * fVar13;
        fStack_dc = _UNK_14330b2dc * fVar17 +
                    fVar8 * _UNK_14330b2dc + _UNK_14330b2cc * auVar11._12_4_;
        fVar14 = auVar11._12_4_ * 0.0;
        fStack_d8 = fVar15 * fVar20 + fVar12 * 0.0 + fVar19 * 0.0;
        fStack_d4 = fVar15 * fVar9 + fVar18 * 0.0 + fVar16 * 0.0;
        fStack_d0 = fVar15 * fVar8 + fVar13 * 0.0 + fVar17 * 0.0;
        fStack_cc = fVar8 * 0.0 + fVar14 + fVar17 * 0.0;
        fVar20 = fVar20 * 0.0 + fVar12 * 0.0;
        fVar9 = fVar9 * 0.0 + fVar18 * 0.0;
        fVar12 = fVar8 * 0.0 + fVar13 * 0.0;
        fVar14 = fVar8 * 0.0 + fVar14;
        fStack_c8 = fVar19 * _DAT_14330b2e0 + fVar20;
        fStack_c4 = fVar16 * _UNK_14330b2e4 + fVar9;
        fStack_c0 = fVar17 * _UNK_14330b2e8 + fVar12;
        fStack_bc = fVar17 * _UNK_14330b2ec + fVar14;
        fStack_b8 = fVar20 + fVar19 * 0.0 + fStack_b8;
        fStack_b4 = fVar9 + fVar16 * 0.0 + fStack_b4;
        fStack_b0 = fVar12 + fVar17 * 0.0 + fStack_b0;
        fStack_ac = fVar14 + fVar17 * 0.0 + fVar22 + param_3 * (fVar2 - fVar21) + fVar21;
        pdb_140e07fe0(&uStack_118,&fStack_e8);
        uVar6 = pdb_1409012c0(param_1);
        pdb_140a77410(&lStack_1b8);
        uStack_168 = uStack_118;
        uStack_160 = uStack_110;
        uStack_158 = uStack_108;
        uStack_154 = uStack_104;
        uStack_150 = uStack_100;
        uStack_14c = uStack_fc;
        uStack_148 = uStack_f8;
        uStack_140 = uStack_f0;
        uStack_138 = param_12;
        uStack_134 = param_13;
        uStack_12c = 0;
        uStack_128 = uStack_178;
        uStack_124 = uStack_174;
        uStack_120 = uStack_170;
        uStack_11c = uStack_16c;
        uStack_130 = uVar6;
        cVar4 = pdb_1413f6d90(param_10,&uStack_168);
        if (cVar4 != '\0') {
          *param_11 = 1;
        }
        return;
      }
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(uVar1,param_9,&UNK_14330b490);
    }
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(uVar7,param_9,&UNK_14330b490);
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc81f2(uVar1,param_9,&UNK_14330b460);
}

