// VA 0x1409afcc0, PDB extent 811 bytes
// country_core::systems::render_loop::compute_passes::compute_path_masks::blur_path_mask
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/compute_passes/compute_path_masks.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::render_loop::compute_passes::compute_path_masks::blur_path_mask
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/compute_passes/compute_path_masks.rs
   Extent: 811 */

void pdb_1409afcc0(undefined8 *param_1,longlong param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined4 *puStack_1a8;
  undefined4 *puStack_1a0;
  undefined4 uStack_198;
  undefined1 uStack_194;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined2 uStack_160;
  undefined2 uStack_15e;
  undefined4 uStack_15c;
  undefined2 uStack_158;
  undefined4 uStack_156;
  undefined1 uStack_152;
  undefined1 uStack_151;
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_b8;
  undefined8 uStack_b4;
  undefined4 uStack_ac;
  
  uStack_160 = 0;
  uStack_15e = 0x200;
  uStack_15c = 0x10200;
  uStack_158 = 1;
  uStack_156 = 0x2014c01;
  uStack_152 = 0;
  puStack_150 = &UNK_143029915;
  uStack_148 = 0xb;
  uStack_15c = pdb_140e2b4e0(param_2,&uStack_160);
  uStack_158 = 0x200;
  uStack_156 = 0x10200;
  uStack_152 = 1;
  uStack_151 = 0;
  puStack_150 = (undefined *)CONCAT35(puStack_150._5_3_,0x2014c01);
  uStack_160 = 0;
  uStack_15e = 0;
  if (*(char *)(param_2 + 0x24c) == '\x01') {
    pdb_140e19620(&uStack_160,param_2);
  }
  uStack_c8 = puStack_150;
  uStack_d8 = CONCAT22(uStack_15e,uStack_160);
  uStack_d4 = uStack_15c;
  uStack_d0 = CONCAT17(uStack_151,CONCAT16(uStack_152,CONCAT42(uStack_156,uStack_158)));
  uStack_160 = 0;
  uStack_15e = 0x200;
  uStack_15c = 0x10200;
  uStack_158 = 1;
  uStack_156 = 0x2014c01;
  uStack_152 = 0;
  puStack_150 = &UNK_143029920;
  uStack_148 = 0xb;
  uStack_15c = pdb_140e2b4e0(param_2,&uStack_160);
  uStack_158 = 0x200;
  uStack_156 = 0x10200;
  uStack_152 = 1;
  uStack_151 = 0;
  puStack_150 = (undefined *)CONCAT35(puStack_150._5_3_,0x2014c01);
  uStack_160 = 0;
  uStack_15e = 0;
  if (*(char *)(param_2 + 0x24c) == '\x01') {
    pdb_140e19620(&uStack_160,param_2);
  }
  uStack_168 = puStack_150;
  uStack_178 = CONCAT22(uStack_15e,uStack_160);
  uStack_174 = uStack_15c;
  uStack_170 = CONCAT17(uStack_151,CONCAT16(uStack_152,CONCAT42(uStack_156,uStack_158)));
  uStack_190 = 0;
  uStack_188 = 8;
  uStack_180 = 0;
  uVar1 = pdb_14177be60(*(undefined8 *)(param_2 + 0x208),&UNK_1433314a6,0x21,&uStack_190);
  pdb_140e291c0(&uStack_b8,&UNK_1433314a6,0x21,uVar1,param_2);
  uStack_198 = 0x40000000;
  uStack_194 = 1;
  puStack_1a8 = param_3;
  puStack_1a0 = &uStack_d8;
  pdb_1417a0e30(&uStack_160,&uStack_b8,&puStack_1a8);
  uStack_b4 = 0x20000000200;
  uStack_ac = 1;
  uStack_b8 = 1;
  pdb_140e28810(&uStack_160,&uStack_b8);
  uStack_190 = 0;
  uStack_188 = 8;
  uStack_180 = 0;
  uVar1 = pdb_14177be60(*(undefined8 *)(param_2 + 0x208),&UNK_1433314a6,0x21,&uStack_190);
  pdb_140e291c0(&uStack_b8,&UNK_1433314a6,0x21,uVar1,param_2);
  puStack_1a0 = &uStack_178;
  uStack_198 = 0x40000000;
  uStack_194 = 0;
  puStack_1a8 = &uStack_d8;
  pdb_1417a0e30(&uStack_160,&uStack_b8,&puStack_1a8);
  uStack_b4 = 0x20000000200;
  uStack_ac = 1;
  uStack_b8 = 1;
  pdb_140e28810(&uStack_160,&uStack_b8);
  param_1[2] = uStack_168;
  *param_1 = CONCAT44(uStack_174,uStack_178);
  param_1[1] = uStack_170;
  return;
}

