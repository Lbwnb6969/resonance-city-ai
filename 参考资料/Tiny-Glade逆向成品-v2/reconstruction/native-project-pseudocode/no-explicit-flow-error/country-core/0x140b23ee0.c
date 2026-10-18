// VA 0x140b23ee0, PDB extent 806 bytes
// country_core::systems::render_loop::compute_passes::grass2::grass2_splat_scan_and_header
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/compute_passes/grass2.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::render_loop::compute_passes::grass2::grass2_splat_scan_and_header
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/compute_passes/grass2.rs
   Extent: 806 */

void pdb_140b23ee0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  longlong lStack_190;
  undefined4 *puStack_188;
  undefined4 *puStack_180;
  longlong lStack_178;
  longlong lStack_170;
  undefined4 uStack_164;
  undefined1 uStack_160;
  undefined8 uStack_15c;
  undefined4 uStack_154;
  undefined2 auStack_150 [2];
  undefined4 uStack_14c;
  undefined1 uStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  
  lVar4 = param_2;
  uVar2 = pdb_140e25e40(0x158000);
  auStack_150[0] = 1;
  puStack_140 = &UNK_143056140;
  uStack_138 = 0x18;
  uStack_14c = uVar2;
  uStack_148 = (char)lVar4;
  uStack_154 = pdb_140e2b4e0(param_1,auStack_150);
  uStack_15c = 0xffffffff00000000;
  lVar1 = param_2 + 0x8c;
  lStack_190 = 0;
  puStack_188 = (undefined4 *)0x8;
  puStack_180 = (undefined4 *)0x0;
  uStack_164 = uVar2;
  uStack_160 = (char)lVar4;
  uVar3 = pdb_14177be60(*(undefined8 *)(param_1 + 0x208),&UNK_143331f69,0x2d,&lStack_190);
  pdb_140e291c0(&uStack_c8,&UNK_143331f69,0x2d,uVar3,param_1);
  pdb_141793dd0(auStack_150,&uStack_c8,param_2,lVar1);
  uStack_c8 = _DAT_142f5c810;
  uStack_c4 = _UNK_142f5c814;
  uStack_c0 = _UNK_142f5c818;
  uStack_bc = _UNK_142f5c81c;
  pdb_140e28810(auStack_150,&uStack_c8);
  uStack_1a8 = 0;
  uStack_1a0 = 8;
  uStack_198 = 0;
  uVar3 = pdb_14177be60(*(undefined8 *)(param_1 + 0x208),&UNK_143330f31,0x2f,&uStack_1a8);
  pdb_140e291c0(auStack_150,&UNK_143330f31,0x2f,uVar3,param_1);
  lStack_190 = param_2;
  puStack_188 = (undefined4 *)(param_2 + 0x14);
  puStack_180 = &uStack_164;
  pdb_141785460(&uStack_c8,auStack_150,&lStack_190);
  pdb_140e29040(&uStack_c8,lVar1,0);
  pdb_1409b63b0(param_1,&uStack_164,lVar1,0x10);
  uStack_1a8 = 0;
  uStack_1a0 = 8;
  uStack_198 = 0;
  uVar3 = pdb_14177be60(*(undefined8 *)(param_1 + 0x208),&UNK_1433312dc,0x31,&uStack_1a8);
  pdb_140e291c0(auStack_150,&UNK_1433312dc,0x31,uVar3,param_1);
  lStack_190 = param_2;
  puStack_188 = &uStack_164;
  puStack_180 = (undefined4 *)lVar1;
  lStack_178 = param_2 + 0x50;
  lStack_170 = param_2 + 0x78;
  pdb_14179d1f0(&uStack_c8,auStack_150,&lStack_190);
  pdb_140e29040(&uStack_c8,lVar1,0);
  uStack_1a8 = 0;
  uStack_1a0 = 8;
  uStack_198 = 0;
  uVar3 = pdb_14177be60(*(undefined8 *)(param_1 + 0x208),&UNK_143330bd9,0x34,&uStack_1a8);
  pdb_140e291c0(auStack_150,&UNK_143330bd9,0x34,uVar3,param_1);
  lStack_190 = param_2 + 0x50;
  puStack_188 = (undefined4 *)lVar1;
  puStack_180 = (undefined4 *)(param_2 + 100);
  pdb_141785460(&uStack_c8,auStack_150,&lStack_190);
  pdb_140e29040(&uStack_c8,param_2 + 0x78,0x10);
  return;
}

