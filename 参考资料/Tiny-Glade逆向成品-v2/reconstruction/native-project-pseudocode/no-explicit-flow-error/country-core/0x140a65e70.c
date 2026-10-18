// VA 0x140a65e70, PDB extent 559 bytes
// country_core::systems::render_loop::compute_passes::terrain_lighting_texture::compute_terrain_lighting_texture
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/compute_passes/terrain_lighting_texture.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::render_loop::compute_passes::terrain_lighting_texture::compute_terrain_lighting_texture
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/compute_passes/terrain_lighting_texture.rs
   Extent: 559 */

ulonglong pdb_140a65e70(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined2 uStack_138;
  undefined2 uStack_136;
  undefined4 uStack_134;
  undefined2 uStack_130;
  undefined4 uStack_12e;
  undefined1 uStack_12a;
  undefined1 uStack_129;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined4 uStack_b0;
  undefined8 uStack_ac;
  undefined4 uStack_a4;
  
  lVar1 = *(longlong *)(param_1 + 0x130);
  if (lVar1 == *(longlong *)(param_1 + 0x120)) {
    pdb_142d8afd0(param_1 + 0x120);
  }
  lVar2 = *(longlong *)(param_1 + 0x128);
  *(undefined **)(lVar2 + lVar1 * 0x10) = &UNK_1430405e4;
  *(undefined8 *)(lVar2 + 8 + lVar1 * 0x10) = 0x18;
  *(longlong *)(param_1 + 0x130) = lVar1 + 1;
  uStack_138 = 0;
  uStack_136 = 0x200;
  uStack_134 = 0x10200;
  uStack_130 = 1;
  uStack_12e = 0x2017a05;
  uStack_12a = 0;
  puStack_128 = &UNK_1430405fc;
  uStack_120 = 0x14;
  uStack_134 = pdb_140e2b4e0(param_1,&uStack_138);
  uStack_130 = 0x200;
  uStack_12e = 0x10200;
  uStack_12a = 1;
  uStack_129 = 0;
  puStack_128 = (undefined *)CONCAT35(puStack_128._5_3_,0x2017a05);
  uStack_138 = 0;
  uStack_136 = 0;
  if (*(char *)(param_1 + 0x24c) == '\x01') {
    pdb_140e19620(&uStack_138,param_1);
  }
  uStack_158 = puStack_128;
  uStack_168 = CONCAT22(uStack_136,uStack_138);
  uStack_164 = uStack_134;
  uStack_160 = CONCAT17(uStack_129,CONCAT16(uStack_12a,CONCAT42(uStack_12e,uStack_130)));
  uStack_150 = 0;
  uStack_148 = 8;
  uStack_140 = 0;
  uVar3 = pdb_14177be60(*(undefined8 *)(param_1 + 0x208),&UNK_143331285,0x2a,&uStack_150);
  pdb_140e291c0(&uStack_b0,&UNK_143331285,0x2a,uVar3,param_1);
  pdb_141783cb0(&uStack_138,&uStack_b0,&uStack_168);
  uStack_ac = 0x20000000200;
  uStack_a4 = 1;
  uStack_b0 = 1;
  pdb_140e28810(&uStack_138,&uStack_b0);
  pdb_140e09fa0(param_1,&uStack_168);
  uVar4 = pdb_141767ca0(param_1,&UNK_143040610,0x10,&UNK_143040620,0x3a,&uStack_168);
  lVar1 = *(longlong *)(param_1 + 0x130);
  if (lVar1 == *(longlong *)(param_1 + 0x120)) {
    uVar4 = uVar4 & 0xffffffff;
    pdb_142d8afd0(param_1 + 0x120);
  }
  lVar2 = *(longlong *)(param_1 + 0x128);
  *(undefined8 *)(lVar2 + lVar1 * 0x10) = 0;
  *(undefined8 *)(lVar2 + 8 + lVar1 * 0x10) = 0x18;
  *(longlong *)(param_1 + 0x130) = lVar1 + 1;
  return uVar4;
}

