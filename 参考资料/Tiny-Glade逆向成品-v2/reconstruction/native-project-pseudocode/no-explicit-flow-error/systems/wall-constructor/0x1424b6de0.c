// VA 0x1424b6de0, PDB extent 798 bytes
// system_wall_constructor::construct_platform_stairs::wooden_corners::emit_corner_band
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_platform_stairs/wooden_corners.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_wall_constructor::construct_platform_stairs::wooden_corners::emit_corner_band
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_platform_stairs/wooden_corners.rs
   Extent: 798 */

void pdb_1424b6de0(float param_1,float param_2,float param_3,float param_4,float param_5,
                  float param_6,float param_7,undefined4 param_8,undefined4 param_9,
                  undefined4 param_10,undefined4 param_11,undefined4 param_12,longlong *param_13)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  undefined8 uStack_1d0;
  undefined1 auStack_1c4 [12];
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 auStack_168 [80];
  undefined1 auStack_118 [240];
  
  fVar6 = (param_3 + param_5) * param_7 + param_1;
  fVar7 = (param_4 + param_6) * param_7 + param_2;
  uStack_1d0 = CONCAT44((param_4 * param_7 + param_2 + fVar7) * _UNK_142e36f64,
                        (param_3 * param_7 + param_1 + fVar6) * _DAT_142e36f60);
  pdb_140df4540(auStack_1c4,&uStack_1d0,param_8);
  pdb_140aaabb0(auStack_118,auStack_1c4,param_3,param_4,param_9,param_7,param_10,0,1);
  pdb_140aaac40(auStack_168,auStack_118,param_11);
  pdb_140aaa7d0(&uStack_1b8,auStack_168,param_12);
  lVar3 = param_13[2];
  if (lVar3 == *param_13) {
    pdb_142d8db00(param_13);
  }
  lVar4 = param_13[1];
  lVar5 = lVar3 * 0x50;
  puVar1 = (undefined8 *)(lVar4 + 0x40 + lVar5);
  *puVar1 = uStack_178;
  puVar1[1] = uStack_170;
  puVar2 = (undefined4 *)(lVar4 + 0x30 + lVar5);
  *puVar2 = uStack_188;
  puVar2[1] = uStack_184;
  puVar2[2] = uStack_180;
  puVar2[3] = uStack_17c;
  puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar5);
  *puVar1 = uStack_198;
  puVar1[1] = uStack_190;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5);
  *puVar2 = uStack_1a8;
  puVar2[1] = uStack_1a4;
  puVar2[2] = uStack_1a0;
  puVar2[3] = uStack_19c;
  puVar2 = (undefined4 *)(lVar4 + lVar5);
  *puVar2 = uStack_1b8;
  puVar2[1] = uStack_1b4;
  puVar2[2] = uStack_1b0;
  puVar2[3] = uStack_1ac;
  param_13[2] = lVar3 + 1;
  uStack_1d0 = CONCAT44((param_6 * param_7 + param_2 + fVar7) * _UNK_142e36f64,
                        (param_5 * param_7 + param_1 + fVar6) * _DAT_142e36f60);
  pdb_140df4540(auStack_1c4,&uStack_1d0,param_8);
  pdb_140aaabb0(auStack_118,auStack_1c4,param_5,param_6,param_9,param_7,param_10,1,0);
  pdb_140aaac40(auStack_168,auStack_118,param_11);
  pdb_140aaa7d0(&uStack_1b8,auStack_168,param_12);
  lVar3 = param_13[2];
  if (lVar3 == *param_13) {
    pdb_142d8db00(param_13);
  }
  lVar4 = param_13[1];
  lVar5 = lVar3 * 0x50;
  puVar1 = (undefined8 *)(lVar4 + 0x40 + lVar5);
  *puVar1 = uStack_178;
  puVar1[1] = uStack_170;
  puVar1 = (undefined8 *)(lVar4 + 0x30 + lVar5);
  *puVar1 = CONCAT44(uStack_184,uStack_188);
  puVar1[1] = CONCAT44(uStack_17c,uStack_180);
  puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar5);
  *puVar1 = uStack_198;
  puVar1[1] = uStack_190;
  puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar5);
  *puVar1 = CONCAT44(uStack_1a4,uStack_1a8);
  puVar1[1] = CONCAT44(uStack_19c,uStack_1a0);
  *(undefined8 *)(lVar4 + lVar5) = CONCAT44(uStack_1b4,uStack_1b8);
  ((undefined8 *)(lVar4 + lVar5))[1] = CONCAT44(uStack_1ac,uStack_1b0);
  param_13[2] = lVar3 + 1;
  return;
}

