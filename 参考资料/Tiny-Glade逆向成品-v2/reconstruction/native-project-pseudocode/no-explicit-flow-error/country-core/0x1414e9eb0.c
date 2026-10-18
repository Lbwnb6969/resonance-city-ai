// VA 0x1414e9eb0, PDB extent 775 bytes
// country_core::systems::collision::world::RaycastWorld::iter_shape_overlaps<country_core::systems::collision::world::SubworldColliderHandle,system_decorator::decorator_visual::playermade_stairs::calculate_distortion_from_structural_graph::calculate_distortion_from_structural_graph::closure_env$2,system_decorator::decorator_visual::playermade_stairs::calculate_distortion_from_structural_graph::calculate_distortion_from_structural_graph::closure_env$3>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/collision/world.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::collision::world::RaycastWorld::iter_shape_overlaps<country_core::systems::collision::world::SubworldColliderHandle,system_decorator::decorator_visual::playermade_stairs::calculate_distortion_from_structural_graph::calculate_distortion_from_structural_graph::closure_env$2,system_decorator::decorator_visual::playermade_stairs::calculate_distortion_from_structural_graph::calculate_distortion_from_structural_graph::closure_env$3>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/collision/world.rs
   Extent: 775 */

void pdb_1414e9eb0(undefined4 *param_1,undefined8 param_2,uint param_3,longlong *param_4,
                  undefined4 param_5,undefined4 param_6)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_22c [28];
  undefined1 auStack_210 [24];
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined8 **ppuStack_198;
  undefined4 **ppuStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  undefined4 uStack_168;
  undefined4 uStack_15c;
  undefined4 auStack_150 [2];
  undefined4 uStack_148;
  longlong lStack_140;
  undefined8 **ppuStack_138;
  undefined4 *puStack_130;
  undefined1 *puStack_128;
  longlong lStack_120;
  longlong lStack_118;
  undefined8 uStack_110;
  undefined4 *puStack_108;
  undefined4 **ppuStack_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 *puStack_d8;
  longlong lStack_d0;
  undefined4 *puStack_c8;
  byte *pbStack_c0;
  char *pcStack_b8;
  undefined4 *puStack_b0;
  longlong lStack_a8;
  longlong *plStack_a0;
  byte *pbStack_98;
  longlong *plStack_90;
  longlong *plStack_88;
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
  auStack_150[0] = param_5;
  uStack_148 = param_6;
  plStack_88 = param_4;
  uStack_5c = param_3;
  pdb_1409f9870(&uStack_1f8,param_2,param_1 + 8,0x11);
  uStack_e8 = uStack_1e8;
  uStack_e4 = uStack_1e4;
  uStack_e0 = uStack_1e0;
  uStack_f8 = uStack_1f8;
  uStack_f4 = uStack_1f4;
  uStack_f0 = uStack_1f0;
  uStack_ec = uStack_1ec;
  uStack_78 = uStack_1d8;
  uStack_74 = uStack_1d4;
  uStack_70 = uStack_1d0;
  uStack_6c = uStack_1cc;
  puStack_58 = param_1;
  pdb_1409f9830(&uStack_1f8);
  lVar6 = CONCAT44(uStack_1e4,uStack_1e8);
  puStack_80 = puStack_58 + 0xf60;
  for (lVar5 = CONCAT44(uStack_1f4,uStack_1f8); lVar5 != CONCAT44(uStack_1ec,uStack_1f0);
      lVar5 = lVar5 + 0x390) {
    abStack_49[0] = pdb_1406d0830(lVar6);
    if ((uStack_5c >> (abStack_49[0] & 0x1f) & 1) != 0) {
      if (*plStack_88 == 0) {
        ppuStack_188 = (undefined4 **)0x0;
      }
      else {
        puStack_b0 = puStack_58;
        plStack_a0 = plStack_88;
        pbStack_98 = abStack_49;
        puStack_180 = &UNK_1433168b8;
        ppuStack_188 = &puStack_b0;
        lStack_a8 = lVar5;
      }
      uStack_178 = 0;
      uStack_168 = 0;
      uStack_15c = 0;
      cStack_4a = '\0';
      uVar4 = pdb_1409f9850(&uStack_78);
      puStack_d8 = puStack_58;
      puStack_c8 = auStack_150;
      pbStack_c0 = abStack_49;
      pcStack_b8 = &cStack_4a;
      lVar1 = *(longlong *)(lVar5 + 0x138);
      lVar2 = *(longlong *)(lVar5 + 0x140);
      lStack_d0 = lVar5;
      pdb_1424ef300(auStack_22c,&uStack_f8);
      lStack_120 = (*(longlong *)(lVar2 + 0x10) - 1U & 0xfffffffffffffff0) + lVar1 + 0x10;
      ppuStack_138 = &ppuStack_188;
      puStack_130 = puStack_80;
      puStack_128 = auStack_22c;
      ppuStack_100 = &puStack_d8;
      plStack_90 = &lStack_140;
      lStack_140 = lVar5;
      lStack_118 = lVar2;
      uStack_110 = uVar4;
      puStack_108 = param_1;
      (**(code **)(param_1 + 0x44))(auStack_210,uVar4,&uStack_f8);
      pdb_140ce7140(&uStack_1f8,auStack_210);
      ppuStack_198 = &plStack_90;
      param_1 = &uStack_1f8;
      pdb_1424ef400(lVar5 + 0xc0,param_1,0);
      if (cStack_4a == '\x01') break;
    }
    lVar6 = lVar6 + 1;
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

