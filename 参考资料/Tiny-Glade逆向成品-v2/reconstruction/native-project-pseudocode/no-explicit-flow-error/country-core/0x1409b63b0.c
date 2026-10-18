// VA 0x1409b63b0, PDB extent 731 bytes
// country_core::systems::render_loop::compute_passes::prefix_scan::inclusive_prefix_scan_u32_1m_indirect
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/compute_passes/prefix_scan.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::render_loop::compute_passes::prefix_scan::inclusive_prefix_scan_u32_1m_indirect
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/compute_passes/prefix_scan.rs
   Extent: 731 */

void pdb_1409b63b0(longlong param_1,uint *param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  int iVar7;
  uint uVar8;
  uint *puStack_1a8;
  undefined4 *puStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  ulonglong uStack_188;
  undefined4 uStack_17c;
  undefined1 uStack_178;
  undefined8 uStack_174;
  undefined4 uStack_16c;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined2 auStack_150 [2];
  undefined4 uStack_14c;
  undefined1 uStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined4 uStack_c8;
  int iStack_c4;
  undefined8 uStack_c0;
  
  uVar1 = *param_2;
  uStack_188 = (ulonglong)(uVar1 >> 2) & 0x3ff;
  if ((uVar1 >> 2 & 0x3ff) == 0) {
    uVar3 = uVar1 >> 0xc;
    puStack_1a8 = (uint *)0x0;
    puStack_1a0 = (undefined4 *)0x8;
    uStack_198 = 0;
    uVar6 = pdb_14177be60(*(undefined8 *)(param_1 + 0x208),&UNK_1433319e8,0x33,&puStack_1a8);
    pdb_140e291c0(auStack_150,&UNK_1433319e8,0x33,uVar6,param_1);
    pdb_141787bc0(&uStack_c8,auStack_150,param_2);
    pdb_140e29040(&uStack_c8,param_3,param_4);
    uVar4 = uVar3 + (uVar3 == 0);
    uVar8 = uVar4 & 0x3ff;
    iVar7 = 0;
    if (uVar8 != 0) {
      iVar7 = 0x400 - uVar8;
    }
    uVar5 = pdb_140e25e40((iVar7 + uVar4) * 4);
    auStack_150[0] = 1;
    puStack_140 = &UNK_14302aba0;
    uStack_138 = 0x10;
    uStack_190 = param_3;
    uStack_14c = uVar5;
    uStack_148 = (char)uVar8;
    uStack_16c = pdb_140e2b4e0(param_1,auStack_150);
    uStack_174 = 0xffffffff00000000;
    uStack_168 = 0;
    uStack_160 = 8;
    uStack_158 = 0;
    uStack_17c = uVar5;
    uStack_178 = (char)uVar8;
    uVar6 = pdb_14177be60(*(undefined8 *)(param_1 + 0x208),&UNK_143331361,0x3d,&uStack_168);
    pdb_140e291c0(&uStack_c8,&UNK_143331361,0x3d,uVar6,param_1);
    uStack_198 = CONCAT44(uStack_198._4_4_,uVar3);
    puStack_1a8 = param_2;
    puStack_1a0 = &uStack_17c;
    pdb_14179bc30(auStack_150,&uStack_c8,&puStack_1a8);
    iStack_c4 = uVar3 - (uVar1 >> 0xd);
    uStack_c0 = 0x100000001;
    uStack_c8 = 1;
    pdb_140e28810(auStack_150,&uStack_c8);
    puStack_1a8 = (uint *)0x0;
    puStack_1a0 = (undefined4 *)0x8;
    uStack_198 = 0;
    uVar6 = pdb_14177be60(*(undefined8 *)(param_1 + 0x208),&UNK_1433314c7,0x39,&puStack_1a8);
    pdb_140e291c0(auStack_150,&UNK_1433314c7,0x39,uVar6,param_1);
    pdb_14178a560(&uStack_c8,auStack_150,param_2,&uStack_17c);
    pdb_140e29040(&uStack_c8,uStack_190,param_4);
    return;
  }
  pdb_142dc7fb4(0,&uStack_188,&UNK_14302ab98,0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

