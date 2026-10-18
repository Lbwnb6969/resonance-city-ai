// VA 0x1414e9b90, PDB extent 791 bytes
// country_core::systems::collision::world::RaycastWorld::iter_shape_overlaps<country_core::systems::collision::world::SubworldColliderHandle,system_decorator::decorator_visual::playermade_stairs::calculate_distortion_from_structural_graph::calculate_distortion_from_structural_graph::closure_env$0,system_decorator::decorator_visual::playermade_stairs::calculate_distortion_from_structural_graph::calculate_distortion_from_structural_graph::closure_env$1>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/collision/world.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::collision::world::RaycastWorld::iter_shape_overlaps<country_core::systems::collision::world::SubworldColliderHandle,system_decorator::decorator_visual::playermade_stairs::calculate_distortion_from_structural_graph::calculate_distortion_from_structural_graph::closure_env$0,system_decorator::decorator_visual::playermade_stairs::calculate_distortion_from_structural_graph::calculate_distortion_from_structural_graph::closure_env$1>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/collision/world.rs
   Extent: 791 */

void pdb_1414e9b90(undefined4 *param_1,undefined8 param_2,uint param_3,longlong param_4,
                  undefined8 param_5,undefined4 param_6,undefined4 param_7)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_23c [28];
  undefined1 auStack_220 [24];
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 **ppuStack_1a8;
  undefined4 **ppuStack_198;
  undefined *puStack_190;
  undefined8 uStack_188;
  undefined4 uStack_178;
  undefined4 uStack_16c;
  undefined4 auStack_160 [2];
  undefined4 uStack_158;
  longlong lStack_150;
  undefined8 **ppuStack_148;
  undefined4 *puStack_140;
  undefined1 *puStack_138;
  longlong lStack_130;
  longlong lStack_128;
  undefined8 uStack_120;
  undefined4 *puStack_118;
  undefined4 **ppuStack_110;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 *puStack_e0;
  longlong lStack_d8;
  undefined4 *puStack_d0;
  byte *pbStack_c8;
  char *pcStack_c0;
  undefined4 *puStack_b8;
  longlong lStack_b0;
  longlong *plStack_a8;
  byte *pbStack_a0;
  longlong *plStack_98;
  longlong lStack_90;
  undefined8 uStack_88;
  undefined4 *puStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint uStack_5c;
  undefined4 *puStack_58;
  char cStack_4a;
  byte abStack_49 [9];
  
  abStack_49[1] = 0xfe;
  abStack_49[2] = 0xff;
  abStack_49[3] = 0xff;
  abStack_49[4] = 0xff;
  abStack_49[5] = 0xff;
  abStack_49[6] = 0xff;
  abStack_49[7] = 0xff;
  abStack_49[8] = 0xff;
  uStack_88 = param_5;
  auStack_160[0] = param_6;
  uStack_158 = param_7;
  lStack_90 = param_4;
  uStack_5c = param_3;
  pdb_1409f9870(&uStack_208,param_2,param_1 + 8,0x11);
  uStack_f8 = uStack_1f8;
  uStack_f4 = uStack_1f4;
  uStack_f0 = uStack_1f0;
  uStack_108 = uStack_208;
  uStack_104 = uStack_204;
  uStack_100 = uStack_200;
  uStack_fc = uStack_1fc;
  uStack_78 = uStack_1e8;
  uStack_74 = uStack_1e4;
  uStack_70 = uStack_1e0;
  uStack_6c = uStack_1dc;
  puStack_58 = param_1;
  pdb_1409f9830(&uStack_208);
  lVar5 = CONCAT44(uStack_1f4,uStack_1f8);
  puStack_80 = puStack_58 + 0xf60;
  for (lVar6 = CONCAT44(uStack_204,uStack_208); lVar6 != CONCAT44(uStack_1fc,uStack_200);
      lVar6 = lVar6 + 0x390) {
    abStack_49[0] = pdb_1406d0830(lVar5);
    if ((uStack_5c >> (abStack_49[0] & 0x1f) & 1) != 0) {
      if (lStack_90 == 0) {
        ppuStack_198 = (undefined4 **)0x0;
      }
      else {
        puStack_b8 = puStack_58;
        plStack_a8 = &lStack_90;
        pbStack_a0 = abStack_49;
        puStack_190 = &UNK_143316888;
        ppuStack_198 = &puStack_b8;
        lStack_b0 = lVar6;
      }
      uStack_188 = 0;
      uStack_178 = 0;
      uStack_16c = 0;
      cStack_4a = '\0';
      uVar4 = pdb_1409f9850(&uStack_78);
      puStack_e0 = puStack_58;
      puStack_d0 = auStack_160;
      pbStack_c8 = abStack_49;
      pcStack_c0 = &cStack_4a;
      lVar1 = *(longlong *)(lVar6 + 0x138);
      lVar2 = *(longlong *)(lVar6 + 0x140);
      lStack_d8 = lVar6;
      pdb_1424ef300(auStack_23c,&uStack_108);
      lStack_130 = (*(longlong *)(lVar2 + 0x10) - 1U & 0xfffffffffffffff0) + lVar1 + 0x10;
      ppuStack_148 = &ppuStack_198;
      puStack_140 = puStack_80;
      puStack_138 = auStack_23c;
      ppuStack_110 = &puStack_e0;
      plStack_98 = &lStack_150;
      lStack_150 = lVar6;
      lStack_128 = lVar2;
      uStack_120 = uVar4;
      puStack_118 = param_1;
      (**(code **)(param_1 + 0x44))(auStack_220,uVar4,&uStack_108);
      pdb_140ce7140(&uStack_208,auStack_220);
      ppuStack_1a8 = &plStack_98;
      param_1 = &uStack_208;
      pdb_1424ef810(lVar6 + 0xc0,param_1,0);
      if (cStack_4a == '\x01') break;
    }
    lVar5 = lVar5 + 1;
  }
  plVar3 = (longlong *)CONCAT44(uStack_74,uStack_78);
  LOCK();
  *plVar3 = *plVar3 + -1;
  UNLOCK();
  if (*plVar3 == 0) {
    pdb_1406efe00(&uStack_78);
  }
  return;
}

