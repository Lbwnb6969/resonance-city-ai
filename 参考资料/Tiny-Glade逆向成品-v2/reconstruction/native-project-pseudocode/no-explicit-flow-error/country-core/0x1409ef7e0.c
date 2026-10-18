// VA 0x1409ef7e0, PDB extent 927 bytes
// country_core::systems::collision::world::RaycastWorld::raycast_intersections_with_ray
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/collision/world.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::collision::world::RaycastWorld::raycast_intersections_with_ray
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/collision/world.rs
   Extent: 927 */

void pdb_1409ef7e0(undefined8 *param_1,longlong param_2,undefined8 *param_3,undefined8 param_4,
                  undefined4 param_5,uint param_6)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uStack_228;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined7 uStack_218;
  undefined1 uStack_211;
  undefined7 uStack_210;
  undefined4 uStack_209;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 **ppuStack_1b8;
  longlong *plStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined4 uStack_180;
  undefined4 uStack_174;
  undefined8 auStack_168 [2];
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 uStack_148;
  longlong lStack_140;
  longlong lStack_138;
  undefined8 *puStack_130;
  undefined8 *puStack_128;
  longlong lStack_120;
  longlong lStack_118;
  undefined8 *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_e8;
  undefined8 **ppuStack_e0;
  longlong lStack_d8;
  undefined8 *puStack_d0;
  undefined4 *puStack_c8;
  undefined1 *puStack_c0;
  longlong *plStack_b8;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined1 *puStack_98;
  ulonglong uStack_90;
  undefined4 uStack_88;
  undefined1 uStack_82;
  undefined1 uStack_81;
  undefined8 uStack_80;
  
  uStack_80 = 0xfffffffffffffffe;
  auStack_168[0] = 0;
  uStack_a0 = 0;
  puStack_98 = (undefined1 *)0x8;
  uStack_90 = 0;
  puStack_a8 = param_1;
  pdb_1419c14e0(&uStack_e8,param_4,param_3,param_5);
  if ((int)uStack_e8 == 1) {
    uVar6 = uStack_e8._4_4_;
    uStack_209 = (undefined4)lStack_d8;
    uStack_211 = SUB81(ppuStack_e0,0);
    uStack_210 = (undefined7)((ulonglong)ppuStack_e0 >> 8);
    pdb_142d7ee50(&uStack_a0);
    *puStack_98 = 0xb;
    *(undefined4 *)(puStack_98 + 1) = (undefined4)uStack_228;
    *(undefined4 *)(puStack_98 + 5) = uStack_228._4_4_;
    *(undefined4 *)(puStack_98 + 9) = uStack_220;
    *(undefined4 *)(puStack_98 + 0xd) = uStack_21c;
    *(ulonglong *)(puStack_98 + 0x11) = CONCAT17(uStack_211,uStack_218);
    *(ulonglong *)(puStack_98 + 0x19) = CONCAT17((undefined1)uStack_209,uStack_210);
    *(undefined4 *)(puStack_98 + 0x20) = uStack_209;
    *(undefined8 *)(puStack_98 + 0x24) = 0x3f80000000000000;
    *(undefined4 *)(puStack_98 + 0x2c) = 0;
    *(undefined4 *)(puStack_98 + 0x30) = uVar6;
    *(undefined4 *)(puStack_98 + 0x34) = 0;
    uStack_90 = 1;
  }
  uVar4 = *param_3;
  uVar5 = param_3[1];
  uVar2 = param_3[2];
  lVar7 = 0x20;
  uVar8 = 0;
  while (lVar10 = lVar7, lVar10 != 0x3cb0) {
    uVar1 = uVar8 + 1;
    uVar3 = uVar8 & 0x1f;
    lVar7 = lVar10 + 0x390;
    uVar8 = uVar1;
    if ((param_6 >> uVar3 & 1) != 0) {
      lVar9 = lVar10 + param_2;
      puStack_110 = auStack_168;
      plStack_1a0 = &lStack_120;
      puStack_198 = &UNK_143033fc8;
      uStack_190 = 0;
      uStack_180 = 0;
      uStack_174 = 0;
      puStack_128 = &uStack_a0;
      uStack_88 = param_5;
      uStack_81 = 1;
      ppuStack_e0 = &plStack_1a0;
      lStack_d8 = param_2 + 0x3d80;
      puStack_d0 = &uStack_108;
      puStack_c8 = &uStack_88;
      puStack_c0 = &uStack_81;
      plStack_b8 = &lStack_140;
      puStack_b0 = &uStack_e8;
      uStack_108._0_4_ = (undefined4)uVar4;
      uStack_108._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
      uStack_100._0_4_ = (undefined4)uVar5;
      uStack_100._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
      uStack_158 = (undefined4)uStack_108;
      uStack_154 = uStack_108._4_4_;
      uStack_150 = (undefined4)uStack_100;
      uStack_14c = uStack_100._4_4_;
      uStack_148 = uVar2;
      lStack_140 = lVar9;
      lStack_138 = param_2;
      puStack_130 = param_3;
      lStack_120 = param_2;
      lStack_118 = lVar9;
      uStack_108 = uVar4;
      uStack_100 = uVar5;
      uStack_f8 = uVar2;
      uStack_e8 = lVar9;
      pdb_140ce7140(&uStack_228,&uStack_158);
      uStack_1c8 = uStack_88;
      uStack_1c4 = uStack_88;
      uStack_1c0 = uStack_88;
      uStack_1bc = uStack_88;
      ppuStack_1b8 = &puStack_b0;
      pdb_140950a60(lVar9 + 0xc0,&uStack_228,0);
    }
  }
  uStack_228 = &uStack_82;
  if (1 < uStack_90) {
    if (uStack_90 < 0x15) {
      pdb_14151bc20(puStack_98,uStack_90,1,&uStack_228);
    }
    else {
      pdb_140a90b80(puStack_98,uStack_90,&uStack_228);
    }
  }
  puStack_a8[2] = uStack_90;
  *puStack_a8 = uStack_a0;
  puStack_a8[1] = puStack_98;
  return;
}

