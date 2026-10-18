// VA 0x1407f60f0, PDB extent 1025 bytes
// system_wall_constructor::construct_platform_stairs::add_colision_geo
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_platform_stairs/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_wall_constructor::construct_platform_stairs::add_colision_geo
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_platform_stairs/mod.rs
   Extent: 1025 */

void pdb_1407f60f0(float *param_1,undefined8 *param_2,float param_3,undefined4 param_4,float param_5
                  ,longlong *param_6)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  longlong lVar7;
  ulonglong uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fStack_258;
  float fStack_254;
  float fStack_250;
  float fStack_24c;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined4 uStack_230;
  undefined8 uStack_22c;
  undefined4 uStack_224;
  undefined8 uStack_220;
  undefined8 uStack_218;
  float afStack_210 [2];
  float fStack_208;
  float afStack_204 [2];
  float fStack_1fc;
  undefined1 auStack_1f8 [12];
  undefined8 uStack_1ec;
  undefined4 uStack_1e4;
  undefined8 uStack_1e0;
  undefined4 uStack_1d8;
  undefined4 uStack_1cc;
  undefined1 auStack_1c8 [12];
  undefined8 uStack_1bc;
  undefined4 uStack_1b4;
  undefined8 uStack_1b0;
  undefined4 uStack_1a8;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined1 auStack_138 [280];
  
  fVar3 = *param_1;
  fVar4 = param_1[2];
  fVar5 = param_1[3];
  fVar6 = param_1[5];
  uStack_220 = *param_2;
  uStack_218 = param_2[1];
  pdb_140df4520(afStack_210,&uStack_220);
  pdb_140df4520(afStack_204,&uStack_218);
  fStack_258 = fVar3;
  fStack_254 = fVar4;
  pdb_140df4540(auStack_1f8,&fStack_258,param_3);
  fVar9 = fVar3 + afStack_210[0] * param_5;
  fVar10 = fVar4 + fStack_208 * param_5;
  uStack_248 = CONCAT44(fVar10,fVar9);
  pdb_140df4540(&uStack_238,&uStack_248,param_3);
  fVar11 = fVar5 + afStack_204[0] * param_5;
  fVar12 = fVar6 + fStack_1fc * param_5;
  uStack_240 = CONCAT44(fVar12,fVar11);
  pdb_140df4540(&uStack_22c,&uStack_240,param_3);
  fStack_250 = fVar5;
  fStack_24c = fVar6;
  pdb_140df4540(&uStack_198,&fStack_250,param_3);
  uStack_1e4 = uStack_230;
  uStack_1ec = uStack_238;
  uStack_1e0 = uStack_22c;
  uStack_1d8 = uStack_224;
  uStack_1cc = uStack_190;
  fStack_258 = fVar3;
  fStack_254 = fVar4;
  pdb_140df4540(auStack_1c8,&fStack_258,param_4);
  uStack_248 = CONCAT44(fVar10,fVar9);
  param_3 = param_3 + _DAT_142e37ad4;
  pdb_140df4540(&uStack_238,&uStack_248,param_3);
  uStack_240 = CONCAT44(fVar12,fVar11);
  pdb_140df4540(&uStack_22c,&uStack_240,param_3);
  fStack_250 = fVar5;
  fStack_24c = fVar6;
  pdb_140df4540(&uStack_198,&fStack_250,param_4);
  uStack_1b4 = uStack_230;
  uStack_1bc = uStack_238;
  uStack_1b0 = uStack_22c;
  uStack_1a8 = uStack_224;
  uStack_19c = uStack_190;
  uVar8 = param_6[2];
  pdb_140b3daf0(&uStack_198,auStack_1f8,auStack_1c8,uVar8 & 0xffffffff);
  if (*param_6 - uVar8 < 8) {
    pdb_142d7f1b0(param_6,uVar8,8,4,0xc);
    uVar8 = param_6[2];
  }
  lVar7 = param_6[1];
  puVar1 = (undefined8 *)(lVar7 + 0x50 + uVar8 * 0xc);
  *puVar1 = uStack_148;
  puVar1[1] = uStack_140;
  puVar1 = (undefined8 *)(lVar7 + 0x40 + uVar8 * 0xc);
  *puVar1 = uStack_158;
  puVar1[1] = uStack_150;
  puVar2 = (undefined4 *)(lVar7 + 0x30 + uVar8 * 0xc);
  *puVar2 = uStack_168;
  puVar2[1] = uStack_164;
  puVar2[2] = uStack_160;
  puVar2[3] = uStack_15c;
  puVar2 = (undefined4 *)(lVar7 + 0x20 + uVar8 * 0xc);
  *puVar2 = uStack_178;
  puVar2[1] = uStack_174;
  puVar2[2] = uStack_170;
  puVar2[3] = uStack_16c;
  puVar2 = (undefined4 *)(lVar7 + 0x10 + uVar8 * 0xc);
  *puVar2 = uStack_188;
  puVar2[1] = uStack_184;
  puVar2[2] = uStack_180;
  puVar2[3] = uStack_17c;
  puVar2 = (undefined4 *)(lVar7 + uVar8 * 0xc);
  *puVar2 = uStack_198;
  puVar2[1] = uStack_194;
  puVar2[2] = uStack_190;
  puVar2[3] = uStack_18c;
  param_6[2] = uVar8 + 8;
  lVar7 = param_6[5];
  if ((ulonglong)(param_6[3] - lVar7) < 0x24) {
    pdb_142d7f1b0(param_6 + 3,lVar7,0x24,4,4);
    lVar7 = param_6[5];
  }
  pub_142e32760(lVar7 * 4 + param_6[4],auStack_138,0x90);
  param_6[5] = lVar7 + 0x24;
  return;
}

