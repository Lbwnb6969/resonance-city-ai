// VA 0x1414ec950, PDB extent 530 bytes
// system_decorator::decorator_visual::playermade_stairs::foliage_exclusion::append_plank_foliage_quad
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/playermade_stairs/foliage_exclusion.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_decorator::decorator_visual::playermade_stairs::foliage_exclusion::append_plank_foliage_quad
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/playermade_stairs/foliage_exclusion.rs
   Extent: 530 */

void pdb_1414ec950(longlong *param_1,float *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  longlong lVar7;
  longlong lVar8;
  float fVar10;
  undefined1 auVar9 [16];
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined8 uStack_118;
  float fStack_110;
  undefined8 uStack_10c;
  float fStack_104;
  undefined8 uStack_100;
  float fStack_f8;
  undefined8 uStack_f4;
  float fStack_ec;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  fVar11 = param_2[3];
  fVar12 = param_2[4];
  fVar13 = param_2[5];
  fVar3 = param_2[6];
  fVar4 = param_2[7];
  fVar5 = param_2[8];
  fVar6 = param_2[9];
  fVar10 = fVar3 * fVar3 + fVar4 * fVar4;
  auVar9._0_4_ = fVar11 * fVar11 + fVar12 * fVar12 + fVar13 * fVar13;
  auVar9._4_4_ = fVar10 + fVar5 * fVar5;
  auVar9._8_4_ = fVar10 + param_2[6] * param_2[6];
  auVar9._12_4_ = fVar5 * fVar5 + fVar6 * fVar6 + fVar6 * fVar6;
  auVar9 = sqrtps(auVar9,auVar9);
  auVar9 = divps(_DAT_143316d20,auVar9);
  fVar10 = auVar9._4_4_;
  fVar14 = auVar9._0_4_;
  fVar15 = fVar14 + _DAT_142e36f28;
  fVar18 = (_DAT_1431ff8c0 - fVar10) * fVar3;
  fVar19 = (_UNK_1431ff8c4 - fVar10) * fVar4;
  fVar20 = (_UNK_1431ff8c8 - fVar10) * fVar5;
  fVar21 = (float)*(undefined8 *)(param_2 + 10);
  fStack_ec = (float)((ulonglong)*(undefined8 *)(param_2 + 10) >> 0x20);
  fVar10 = fVar10 + _DAT_142e36f50;
  fVar16 = fVar15 * fVar11 + *param_2 * _DAT_143316d30;
  fVar17 = fVar15 * fVar12 + param_2[1] * _UNK_143316d34;
  fVar15 = fVar15 * fVar13 + param_2[2] * _UNK_143316d38;
  fVar11 = *param_2 * _DAT_143316d30 - fVar14 * fVar11;
  fVar12 = param_2[1] * _UNK_143316d34 - fVar14 * fVar12;
  fVar13 = param_2[2] * _UNK_143316d38 - fVar14 * fVar13;
  uStack_118 = CONCAT44(fVar12 + fVar19 + fVar21,fVar11 + fVar18 + fVar6);
  fStack_110 = fVar13 + fVar20 + fStack_ec;
  uStack_10c = CONCAT44(fVar19 + fVar17 + fVar21,fVar18 + fVar16 + fVar6);
  fStack_104 = fVar20 + fVar15 + fStack_ec;
  fStack_f8 = fVar13 + fVar10 * fVar5 + fStack_ec;
  uStack_f4 = CONCAT44(fVar10 * fVar4 + fVar17 + fVar21,fVar10 * fVar3 + fVar16 + fVar6);
  fStack_ec = fVar10 * fVar5 + fVar15 + fStack_ec;
  uStack_100 = CONCAT44(fVar12 + fVar10 * fVar4 + fVar21,fVar11 + fVar10 * fVar3 + fVar6);
  uStack_e8 = 0;
  uStack_e0 = 1;
  uStack_d8 = 2;
  uStack_d0 = 2;
  uStack_c8 = 1;
  uStack_c0 = 3;
  pdb_1414ecd30(&uStack_a8,&uStack_e8,&uStack_118);
  lVar8 = param_1[2];
  if ((ulonglong)(*param_1 - lVar8) < 6) {
    pdb_142d7f1b0(param_1,lVar8,6,0x10,0x10);
    lVar8 = param_1[2];
  }
  lVar2 = param_1[1];
  lVar7 = lVar8 * 0x10;
  puVar1 = (undefined8 *)(lVar2 + 0x50 + lVar7);
  *puVar1 = uStack_58;
  puVar1[1] = uStack_50;
  puVar1 = (undefined8 *)(lVar2 + 0x40 + lVar7);
  *puVar1 = uStack_68;
  puVar1[1] = uStack_60;
  puVar1 = (undefined8 *)(lVar2 + 0x30 + lVar7);
  *puVar1 = uStack_78;
  puVar1[1] = uStack_70;
  puVar1 = (undefined8 *)(lVar2 + 0x20 + lVar7);
  *puVar1 = uStack_88;
  puVar1[1] = uStack_80;
  puVar1 = (undefined8 *)(lVar2 + 0x10 + lVar7);
  *puVar1 = uStack_98;
  puVar1[1] = uStack_90;
  *(undefined8 *)(lVar2 + lVar7) = uStack_a8;
  ((undefined8 *)(lVar2 + lVar7))[1] = uStack_a0;
  param_1[2] = lVar8 + 6;
  return;
}

