// VA 0x1409eda30, PDB extent 505 bytes
// country_core::systems::collision::world::RaycastWorld::intersects_any
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/collision/world.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::collision::world::RaycastWorld::intersects_any
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/collision/world.rs
   Extent: 505 */

undefined8 pdb_1409eda30(longlong param_1,undefined8 *param_2,undefined4 param_3,uint param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  char acStack_1de [2];
  undefined4 uStack_1dc;
  char *pcStack_1d8;
  longlong *plStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  longlong lStack_1a8;
  longlong lStack_1a0;
  undefined8 *puStack_198;
  longlong lStack_190;
  longlong **pplStack_188;
  longlong lStack_180;
  undefined8 *puStack_178;
  undefined4 *puStack_170;
  char *pcStack_168;
  char **ppcStack_160;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 uStack_148;
  undefined8 auStack_140 [2];
  longlong *plStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined4 uStack_110;
  undefined4 uStack_104;
  undefined1 auStack_f8 [96];
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong **pplStack_88;
  
  auStack_140[0] = 0;
  uVar2 = *param_2;
  uVar3 = param_2[1];
  uVar1 = param_2[2];
  lVar4 = param_1 + 0xe0;
  uVar5 = 0;
  lVar6 = 0x3c90;
  do {
    if ((param_4 >> (uVar5 & 0x1f) & 1) != 0) {
      lStack_1a0 = lVar4 + -0xc0;
      puStack_198 = auStack_140;
      acStack_1de[0] = '\0';
      plStack_130 = &lStack_1a8;
      puStack_128 = &UNK_143033ff8;
      uStack_120 = 0;
      uStack_110 = 0;
      uStack_104 = 0;
      acStack_1de[1] = 1;
      pcStack_1d8 = acStack_1de;
      pplStack_188 = &plStack_130;
      lStack_180 = param_1 + 0x3d80;
      puStack_178 = &uStack_1c8;
      puStack_170 = &uStack_1dc;
      pcStack_168 = acStack_1de + 1;
      ppcStack_160 = &pcStack_1d8;
      plStack_1d0 = &lStack_190;
      uStack_1c8._0_4_ = (undefined4)uVar2;
      uStack_1c8._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
      uStack_1c0._0_4_ = (undefined4)uVar3;
      uStack_1c0._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
      uStack_158 = (undefined4)uStack_1c8;
      uStack_154 = uStack_1c8._4_4_;
      uStack_150 = (undefined4)uStack_1c0;
      uStack_14c = uStack_1c0._4_4_;
      uStack_1dc = param_3;
      uStack_1c8 = uVar2;
      uStack_1c0 = uVar3;
      uStack_1b8 = uVar1;
      lStack_1a8 = param_1;
      lStack_190 = lStack_1a0;
      uStack_148 = uVar1;
      pdb_140ce7140(auStack_f8,&uStack_158);
      uStack_98 = uStack_1dc;
      uStack_94 = uStack_1dc;
      uStack_90 = uStack_1dc;
      uStack_8c = uStack_1dc;
      pplStack_88 = &plStack_1d0;
      pdb_140950510(lVar4,auStack_f8,0);
      if (acStack_1de[0] != '\0') {
        return 1;
      }
    }
    lVar4 = lVar4 + 0x390;
    uVar5 = uVar5 + 1;
    lVar6 = lVar6 + -0x390;
  } while (lVar6 != 0);
  return 0;
}

