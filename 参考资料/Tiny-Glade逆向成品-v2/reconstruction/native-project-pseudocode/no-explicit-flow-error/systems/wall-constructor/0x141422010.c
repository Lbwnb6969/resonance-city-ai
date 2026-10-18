// VA 0x141422010, PDB extent 721 bytes
// system_wall_constructor::place_pillars::place_pillars::closure$4
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/place_pillars.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_wall_constructor::place_pillars::place_pillars::closure$4
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/place_pillars.rs
   Extent: 721 */

void pdb_141422010(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  int *piVar5;
  char cVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
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
  float fStack_188;
  float fStack_184;
  float fStack_180;
  float fStack_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  undefined8 uStack_154;
  undefined4 uStack_14c;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined4 uStack_130;
  int iStack_12c;
  undefined4 uStack_128;
  undefined8 uStack_124;
  undefined4 uStack_11c;
  undefined1 auStack_118 [48];
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined4 uStack_bc;
  
  lVar4 = *param_1;
  pdb_140df4520(&fStack_188,lVar4);
  fVar1 = *(float *)(param_2 + 1);
  fVar19 = *(float *)(lVar4 + 0x18) * *(float *)(param_1[1] + 0x290);
  uVar2 = *(undefined4 *)(param_3 + 1);
  uVar7 = pdb_1409012c0(*(undefined4 *)(param_1[1] + 0x274));
  piVar5 = (int *)param_1[2];
  iVar3 = *piVar5;
  pdb_140951920(auStack_118);
  fVar8 = fStack_184 * 0.0;
  fVar9 = fStack_180 * 0.0;
  fVar20 = (float)*param_2;
  fVar14 = _DAT_142e36f28 * fStack_188 - _DAT_143308d70 * fStack_184;
  fVar16 = fVar8 - _UNK_143308d74 * fStack_180;
  fVar17 = fVar9 - _UNK_143308d78 * fStack_188;
  fVar13 = _DAT_142e36f28 / SQRT(fVar16 * fVar16 + fVar17 * fVar17 + fVar14 * fVar14);
  fVar14 = fVar13 * fVar14;
  fVar16 = fVar13 * fVar16;
  fVar17 = fVar13 * fVar17;
  fVar15 = fVar16 * fStack_184 - fVar17 * fStack_188;
  fVar18 = fVar14 * fStack_188 - fVar16 * fStack_180;
  fVar10 = fVar15 * 0.0;
  fVar11 = (fVar17 * fStack_180 - fVar14 * fStack_184) * 0.0;
  fVar12 = fVar18 * 0.0;
  fStack_170 = fVar20 * fStack_180 + fVar10 + fVar14 * 0.0;
  fStack_178 = fVar20 * fStack_188 + fVar11 + fVar16 * 0.0;
  fStack_174 = fVar20 * fStack_184 + fVar12 + fVar17 * 0.0;
  fStack_16c = fStack_188 * 0.0 +
               (float)((ulonglong)*param_2 >> 0x20) * (fVar17 * fStack_180 - fVar14 * fStack_184) +
               fVar13 * (fStack_184 * 0.0 - _UNK_143308d7c * fStack_180) * 0.0;
  fStack_158 = fVar1 * fVar14 + fVar9 + fVar10;
  fStack_168 = fVar17 * 0.0 + fVar18 * *(float *)((longlong)param_2 + 4) + fVar8;
  fStack_164 = fVar14 * 0.0 + fVar15 * *(float *)((longlong)param_2 + 4) + fVar9;
  fStack_160 = fVar16 * fVar1 + fVar11 + _UNK_143308d78 * fStack_188;
  fStack_15c = fVar17 * fVar1 + fVar12 + fVar8;
  uStack_154 = *param_3;
  uStack_148 = uStack_e8;
  uStack_140 = uStack_e0;
  uStack_130 = uStack_d0;
  uStack_138 = uStack_d8;
  uStack_124 = CONCAT44(fVar19 + _UNK_143308d84,fVar19 + _DAT_143308d80);
  uStack_11c = uStack_bc;
  lVar4 = param_1[3];
  uStack_14c = uVar2;
  iStack_12c = iVar3;
  uStack_128 = uVar7;
  pdb_14094c790(auStack_118,&fStack_178);
  cVar6 = pdb_1413f66a0(lVar4,auStack_118);
  if (cVar6 != '\0') {
    *(undefined1 *)param_1[4] = 1;
  }
  *piVar5 = *piVar5 + 1;
  return;
}

