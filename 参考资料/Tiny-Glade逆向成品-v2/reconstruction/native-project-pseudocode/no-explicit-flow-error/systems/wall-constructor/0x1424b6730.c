// VA 0x1424b6730, PDB extent 528 bytes
// system_wall_constructor::construct_platform_stairs::emit_wooden_stair_pieces::add_straight_halftimber_span
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_platform_stairs/emit_wooden_stair_pieces.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_wall_constructor::construct_platform_stairs::emit_wooden_stair_pieces::add_straight_halftimber_span
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_platform_stairs/emit_wooden_stair_pieces.rs
   Extent: 528 */

void pdb_1424b6730(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                  undefined4 param_9,float param_10,undefined4 param_11,undefined4 param_12,
                  longlong *param_13)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
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
  undefined1 auStack_d8 [176];
  
  auVar5._0_4_ = (float)param_3 - (float)param_1;
  auVar5._4_4_ = (float)param_4 - (float)param_2;
  auVar5._8_4_ = (float)((ulonglong)param_3 >> 0x20) - (float)((ulonglong)param_1 >> 0x20);
  auVar5._12_4_ = (float)((ulonglong)param_4 >> 0x20) - (float)((ulonglong)param_2 >> 0x20);
  fVar7 = SQRT(auVar5._4_4_ * auVar5._4_4_ + auVar5._0_4_ * auVar5._0_4_);
  auVar6._4_4_ = fVar7;
  auVar6._0_4_ = fVar7;
  auVar6._8_8_ = 0;
  auVar6 = divps(auVar5,auVar6);
  fVar9 = param_10 * auVar6._0_4_ * _DAT_142e36f60;
  fVar10 = param_10 * auVar6._4_4_ * _UNK_142e36f64;
  fVar7 = (float)param_1 - fVar9;
  fVar8 = (float)param_2 - fVar10;
  fVar9 = fVar9 + (float)param_3;
  fVar10 = fVar10 + (float)param_4;
  uStack_130 = CONCAT44((fVar8 + fVar10) * _UNK_142e36f64,(fVar7 + fVar9) * _DAT_142e36f60);
  pdb_140df4540(auStack_d8,&uStack_130,param_7);
  fVar7 = fVar7 - fVar9;
  fVar8 = fVar8 - fVar10;
  pdb_140aaabb0(&uStack_128,auStack_d8,param_5,param_6,param_8,SQRT(fVar8 * fVar8 + fVar7 * fVar7),
                param_9,0,0);
  pdb_140aaac40(auStack_d8,&uStack_128,param_11);
  pdb_140aaa7d0(&uStack_128,auStack_d8,param_12);
  lVar2 = param_13[2];
  if (lVar2 == *param_13) {
    pdb_142d8db00(param_13);
  }
  lVar3 = param_13[1];
  lVar4 = lVar2 * 0x50;
  puVar1 = (undefined8 *)(lVar3 + 0x40 + lVar4);
  *puVar1 = uStack_e8;
  puVar1[1] = uStack_e0;
  puVar1 = (undefined8 *)(lVar3 + 0x30 + lVar4);
  *puVar1 = uStack_f8;
  puVar1[1] = uStack_f0;
  puVar1 = (undefined8 *)(lVar3 + 0x20 + lVar4);
  *puVar1 = uStack_108;
  puVar1[1] = uStack_100;
  puVar1 = (undefined8 *)(lVar3 + 0x10 + lVar4);
  *puVar1 = uStack_118;
  puVar1[1] = uStack_110;
  *(undefined8 *)(lVar3 + lVar4) = uStack_128;
  ((undefined8 *)(lVar3 + lVar4))[1] = uStack_120;
  param_13[2] = lVar2 + 1;
  return;
}

