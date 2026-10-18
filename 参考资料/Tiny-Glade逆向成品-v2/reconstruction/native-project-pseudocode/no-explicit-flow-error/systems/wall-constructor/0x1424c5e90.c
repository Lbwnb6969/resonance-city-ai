// VA 0x1424c5e90, PDB extent 917 bytes
// system_wall_constructor::construct_elevation_supports::circle_bottom_layer::add_bottom_brick<ref_mut$<system_wall_constructor::construct_elevation_supports::circle_bottom_layer::construct_circle_bottom_layer::closure_env$0> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_elevation_supports/circle_bottom_layer.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_wall_constructor::construct_elevation_supports::circle_bottom_layer::add_bottom_brick<ref_mut$<system_wall_constructor::construct_elevation_supports::circle_bottom_layer::construct_circle_bottom_layer::closure_env$0>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_elevation_supports/circle_bottom_layer.rs
   Extent: 917 */

void pdb_1424c5e90(undefined8 param_1,float param_2,float param_3,float param_4,float param_5,
                  float param_6,undefined8 *param_7,undefined4 param_8,float param_9,
                  undefined4 param_10,undefined8 param_11,byte param_12)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
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
  float fStack_240;
  float fStack_23c;
  float fStack_238;
  float fStack_234;
  float fStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined8 uStack_1e4;
  int iStack_1dc;
  float fStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined8 uStack_1a4;
  undefined8 uStack_19c;
  undefined8 uStack_194;
  undefined4 uStack_18c;
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
  float fStack_14c;
  uint uStack_148;
  float fStack_144;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined4 uStack_100;
  undefined8 auStack_e8 [24];
  
  fVar8 = (float)pdb_140e02880();
  fVar3 = _DAT_142e36f50;
  fVar9 = (fVar8 * _DAT_142e36f50 - (_DAT_142e36f28 - fVar8) * _DAT_142e36f50) * _DAT_142e3787c +
          _DAT_142e3798c;
  param_9 = param_9 + _DAT_14300ccb0;
  fVar8 = param_9;
  if (fVar9 <= param_9) {
    fVar8 = fVar9;
  }
  fVar8 = (float)((uint)param_9 & -(uint)NAN(fVar9) | ~-(uint)NAN(fVar9) & (uint)fVar8);
  fVar17 = SQRT((param_3 - param_5) * (param_3 - param_5) +
                (param_2 - param_4) * (param_2 - param_4));
  auStack_e8[0] =
       CONCAT44((param_5 + param_3) * _UNK_142e36f64,(param_4 + param_2) * _DAT_142e36f60);
  param_4 = param_4 - param_2;
  param_5 = param_5 - param_3;
  fVar18 = _DAT_142e36f28 / SQRT(param_5 * param_5 + param_4 * param_4);
  param_4 = param_4 * fVar18;
  fVar18 = fVar18 * param_5;
  fStack_240 = param_4;
  fStack_23c = fVar18;
  pdb_140df4520(&fStack_238,&fStack_240);
  fVar5 = fStack_230;
  fVar4 = fStack_234;
  fVar9 = fStack_238;
  uStack_148 = (uint)fVar18 ^ _DAT_142e37820;
  fStack_144 = param_4;
  pdb_140df4520(&fStack_238,&uStack_148);
  fVar13 = fVar8 * _DAT_142e378e0;
  fVar14 = fVar8 * _UNK_142e378e4;
  fVar15 = fVar8 * _UNK_142e378e8;
  fVar16 = fVar8 * _UNK_142e378ec;
  fVar18 = fStack_238 * _DAT_143309780;
  fVar10 = fStack_234 * _UNK_143309784;
  fVar11 = fStack_230 * _UNK_143309788;
  fVar12 = fStack_230 * _UNK_14330978c;
  pdb_140df4540(&fStack_238,auStack_e8,fVar8 * fVar3 + param_6);
  fStack_158 = fStack_238;
  fStack_154 = fStack_234;
  fStack_150 = fStack_230;
  fStack_14c = fStack_230;
  fStack_188 = fVar17 * fVar9;
  fStack_184 = fVar17 * fVar4;
  fStack_180 = fVar17 * fVar5;
  fStack_17c = fVar17 * fVar5;
  fStack_178 = fVar13;
  fStack_174 = fVar14;
  fStack_170 = fVar15;
  fStack_16c = fVar16;
  fStack_168 = fVar18;
  fStack_164 = fVar10;
  fStack_160 = fVar11;
  fStack_15c = fVar12;
  pdb_140e07fe0(&fStack_1d4,&fStack_188);
  uVar7 = pdb_1409012c0(param_8);
  pdb_140951920(&uStack_148);
  uStack_1a4 = uStack_118;
  uStack_19c = uStack_110;
  uStack_18c = uStack_100;
  uStack_194 = uStack_108;
  uStack_1f8 = uStack_108;
  uStack_1f0 = uStack_100;
  uStack_208 = uStack_118;
  uStack_200 = uStack_110;
  uStack_218 = uStack_1b4;
  uStack_214 = uStack_1b0;
  uStack_210 = uStack_1ac;
  uStack_20c = uStack_1a8;
  uStack_228 = uStack_1c4;
  uStack_224 = uStack_1c0;
  uStack_220 = uStack_1bc;
  uStack_21c = uStack_1b8;
  fStack_238 = fStack_1d4;
  fStack_234 = (float)uStack_1d0;
  fStack_230 = (float)uStack_1cc;
  uStack_22c = uStack_1c8;
  uStack_1ec = param_10;
  uStack_1e4 = param_11;
  uVar1 = *param_7;
  puVar2 = (undefined1 *)param_7[1];
  uStack_1e8 = uVar7;
  iStack_1dc = (uint)param_12 << 0xd;
  pdb_14094c790(auStack_e8,&fStack_238);
  cVar6 = pdb_1413f66a0(uVar1,auStack_e8);
  if (cVar6 != '\0') {
    *puVar2 = 1;
  }
  return;
}

