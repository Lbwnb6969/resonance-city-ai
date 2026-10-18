// VA 0x140b22160, PDB extent 793 bytes
// country_core::systems::render_loop::compute_passes::grass2::alloc_grass2_splat_buffers
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/compute_passes/grass2.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::render_loop::compute_passes::grass2::alloc_grass2_splat_buffers
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/compute_passes/grass2.rs
   Extent: 793 */

void pdb_140b22160(undefined4 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined8 uVar12;
  undefined2 auStack_88 [2];
  undefined4 uStack_84;
  undefined1 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  uVar12 = param_2;
  uVar1 = pdb_140e25e40(0x18);
  auStack_88[0] = 1;
  puStack_78 = &UNK_143055f68;
  uStack_70 = 0x17;
  uVar5 = SUB81(auStack_88,0);
  uStack_84 = uVar1;
  uStack_80 = (char)uVar12;
  uVar2 = pdb_140e2b4e0(param_2);
  *param_1 = uVar1;
  *(char *)(param_1 + 1) = (char)uVar12;
  *(undefined8 *)(param_1 + 2) = 0xffffffff00000000;
  param_1[4] = uVar2;
  uStack_84 = pdb_140e25e40(4);
  auStack_88[0] = 1;
  puStack_78 = &UNK_143055f7f;
  uStack_70 = 0x18;
  uVar6 = SUB81(auStack_88,0);
  uStack_80 = uVar5;
  uStack_44 = uStack_84;
  uStack_48 = pdb_140e2b4e0(param_2);
  uStack_84 = pdb_140e25e40(0x158000);
  auStack_88[0] = 1;
  puStack_78 = &UNK_143055f97;
  uStack_70 = 0x1a;
  uVar7 = SUB81(auStack_88,0);
  uStack_80 = uVar6;
  uStack_4c = uStack_84;
  uStack_50 = pdb_140e2b4e0(param_2);
  uStack_84 = pdb_140e25e40(0x2850000);
  auStack_88[0] = 1;
  puStack_78 = &UNK_143055fb1;
  uStack_70 = 0x18;
  uVar8 = SUB81(auStack_88,0);
  uStack_80 = uVar7;
  uStack_54 = uStack_84;
  uStack_5c = pdb_140e2b4e0(param_2);
  uStack_84 = pdb_140e25e40(0x2b0000);
  auStack_88[0] = 1;
  puStack_78 = &UNK_143055fc9;
  uStack_70 = 0x21;
  uVar9 = SUB81(auStack_88,0);
  uStack_80 = uVar8;
  uStack_58 = uStack_84;
  uStack_60 = pdb_140e2b4e0(param_2);
  uVar1 = pdb_140e25e40(0x100004);
  auStack_88[0] = 1;
  puStack_78 = &UNK_143055fea;
  uStack_70 = 0x22;
  uVar10 = SUB81(auStack_88,0);
  uStack_84 = uVar1;
  uStack_80 = uVar9;
  uStack_64 = pdb_140e2b4e0(param_2);
  uVar2 = pdb_140e25e40(0x20);
  auStack_88[0] = 1;
  puStack_78 = &UNK_14305600c;
  uStack_70 = 0x1a;
  uVar11 = SUB81(auStack_88,0);
  uStack_84 = uVar2;
  uStack_80 = uVar10;
  uStack_68 = pdb_140e2b4e0(param_2);
  uVar3 = pdb_140e25e40(0x20);
  auStack_88[0] = 1;
  puStack_78 = &UNK_143056026;
  uStack_70 = 0x1c;
  uStack_84 = uVar3;
  uStack_80 = uVar11;
  uVar4 = pdb_140e2b4e0(param_2,auStack_88);
  param_1[5] = uStack_54;
  *(undefined1 *)(param_1 + 6) = uVar7;
  *(undefined8 *)(param_1 + 7) = 0xffffffff00000000;
  param_1[9] = uStack_5c;
  param_1[10] = uStack_44;
  *(undefined1 *)(param_1 + 0xb) = uVar5;
  *(undefined8 *)(param_1 + 0xc) = 0xffffffff00000000;
  param_1[0xe] = uStack_48;
  param_1[0xf] = uStack_4c;
  *(undefined1 *)(param_1 + 0x10) = uVar6;
  *(undefined8 *)(param_1 + 0x11) = 0xffffffff00000000;
  param_1[0x13] = uStack_50;
  param_1[0x14] = uStack_58;
  *(undefined1 *)(param_1 + 0x15) = uVar8;
  *(undefined8 *)(param_1 + 0x16) = 0xffffffff00000000;
  param_1[0x18] = uStack_60;
  param_1[0x19] = uVar1;
  *(undefined1 *)(param_1 + 0x1a) = uVar9;
  *(undefined8 *)(param_1 + 0x1b) = 0xffffffff00000000;
  param_1[0x1d] = uStack_64;
  param_1[0x1e] = uVar2;
  *(undefined1 *)(param_1 + 0x1f) = uVar10;
  *(undefined8 *)(param_1 + 0x20) = 0xffffffff00000000;
  param_1[0x22] = uStack_68;
  param_1[0x23] = uVar3;
  *(undefined1 *)(param_1 + 0x24) = uVar11;
  *(undefined8 *)(param_1 + 0x25) = 0xffffffff00000000;
  param_1[0x27] = uVar4;
  return;
}

