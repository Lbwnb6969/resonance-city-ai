// VA 0x1408acd90, PDB extent 1003 bytes
// system_decorator::decorator_visual::playermade_stairs::create_structural_colliders_and_initial_graph::gen_stairs_structural_collider
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/playermade_stairs/create_structural_colliders_and_initial_graph.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_decorator::decorator_visual::playermade_stairs::create_structural_colliders_and_initial_graph::gen_stairs_structural_collider
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/playermade_stairs/create_structural_colliders_and_initial_graph.rs
   Extent: 1003 */

void pdb_1408acd90(undefined8 *param_1,float *param_2,float *param_3,undefined4 param_4,
                  float param_5,undefined4 *param_6,float *param_7,float *param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uStack_1c8;
  float fStack_1c0;
  float fStack_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float fStack_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float fStack_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  undefined4 uStack_14c;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  
  fStack_1b8 = -param_5;
  fStack_1b4 = (float)param_4;
  pdb_140df4520(&fStack_158,&fStack_1b8);
  fVar4 = _DAT_142e36f50;
  fVar11 = *param_7;
  fVar9 = fStack_158 * fVar11 * _DAT_142e36f50;
  fVar10 = fVar11 * fStack_154;
  fVar11 = fVar11 * fStack_150;
  fStack_1b4 = (float)*param_6;
  fStack_1b8 = -(float)param_6[1];
  pdb_140df4520(&fStack_158,&fStack_1b8);
  fVar1 = *param_8;
  fVar10 = fVar10 * _DAT_142e36f60;
  fVar11 = fVar11 * _UNK_142e36f64;
  fVar4 = fVar1 * fStack_158 * fVar4;
  fStack_1a4 = (float)((ulonglong)*(undefined8 *)(param_2 + 1) >> 0x20);
  fVar2 = param_2[2];
  fVar7 = (float)((ulonglong)_DAT_143014b70 >> 0x20);
  fVar8 = (float)*(undefined8 *)(param_2 + 1) + (float)_DAT_143014b70;
  fStack_174 = (float)((ulonglong)*(undefined8 *)(param_3 + 1) >> 0x20);
  fVar3 = param_3[2];
  fVar6 = (float)_DAT_143014b70 + (float)*(undefined8 *)(param_3 + 1);
  fStack_19c = fVar8 - fVar10;
  fStack_1b0 = (fStack_1a4 + fVar7) - fVar11;
  fStack_1b4 = fStack_19c + _DAT_143008210;
  fStack_160 = fStack_154 * fVar1 * _DAT_142e36f60;
  fVar5 = fStack_150 * fVar1 * _UNK_142e36f64;
  fVar1 = *param_2;
  fStack_1b8 = fVar1 - fVar9;
  fVar10 = fVar8 + fVar10;
  fStack_178 = (float)((ulonglong)_DAT_143014b80 >> 0x20);
  fStack_16c = fVar6 - fStack_160;
  fStack_180 = (fVar7 + fStack_174) - fVar5;
  fStack_184 = _DAT_143008210 + fStack_16c;
  fStack_1ac = fVar1 + fVar9;
  fStack_1a8 = fStack_178 + fVar10;
  fStack_1a4 = fStack_1a4 + fVar11;
  fStack_1a0 = fStack_1b8 + 0.0;
  fStack_18c = fStack_1a4 + 0.0;
  fStack_19c = fStack_19c + _DAT_143014b90;
  fStack_198 = fStack_1b0 + _UNK_143014b94;
  fStack_194 = fStack_1ac + _UNK_143014b98;
  fStack_190 = fVar10 + _UNK_143014b9c;
  fVar11 = *param_3;
  fStack_188 = fVar11 - fVar4;
  fStack_160 = fVar6 + fStack_160;
  fStack_17c = fVar11 + fVar4;
  fStack_178 = fStack_178 + fStack_160;
  fStack_174 = fStack_174 + fVar5;
  fStack_170 = fStack_188 + 0.0;
  fStack_15c = fStack_174 + 0.0;
  fStack_16c = fStack_16c + _DAT_143014b90;
  fStack_168 = fStack_180 + _UNK_143014b94;
  fStack_164 = fStack_17c + _UNK_143014b98;
  fStack_160 = fStack_160 + _UNK_143014b9c;
  pdb_1409efc00(&fStack_158,&fStack_1b8,8);
  if (CONCAT44(fStack_154,fStack_158) == 0) {
    fStack_1c0 = fVar2 + fVar3 + _DAT_142e36f50;
    uStack_1c8 = CONCAT44(fVar6 + fVar8 + _UNK_142e36f64,fVar11 + fVar1 + _DAT_142e36f60);
    pdb_1409eff60(param_1,_DAT_142e37934,&uStack_1c8);
  }
  else {
    param_1[0xe] = uStack_e8;
    param_1[0xf] = uStack_e0;
    param_1[0xc] = uStack_f8;
    param_1[0xd] = uStack_f0;
    param_1[10] = uStack_108;
    param_1[0xb] = uStack_100;
    param_1[8] = uStack_118;
    param_1[9] = uStack_110;
    param_1[6] = uStack_128;
    param_1[7] = uStack_120;
    param_1[4] = uStack_138;
    param_1[5] = uStack_130;
    param_1[2] = uStack_148;
    param_1[3] = uStack_140;
    *param_1 = CONCAT44(fStack_154,fStack_158);
    param_1[1] = CONCAT44(uStack_14c,fStack_150);
  }
  return;
}

