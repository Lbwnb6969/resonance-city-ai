// VA 0x140a0dff0, PDB extent 854 bytes
// country_core::resources::walls::wall_trigger_volume::WallTriggerVolume::recompute
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/wall_trigger_volume.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::walls::wall_trigger_volume::WallTriggerVolume::recompute
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/wall_trigger_volume.rs
   Extent: 854 */

void pdb_140a0dff0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined4 auStack_d8 [3];
  uint uStack_cc;
  undefined4 uStack_c8;
  undefined8 uStack_c4;
  undefined1 uStack_bc;
  byte bStack_bb;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 uStack_a8;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  longlong lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  pdb_140a0c9c0();
  uStack_78 = *(undefined4 *)(param_1 + 0x18);
  uStack_74 = *(undefined4 *)(param_1 + 0x1c);
  uVar3 = *(ulonglong *)(param_1 + 0x18);
  uStack_70 = *(undefined4 *)(param_1 + 0x20);
  uStack_6c = *(undefined4 *)(param_1 + 0x24);
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 4;
  *(undefined8 *)(param_1 + 0x28) = 0;
  uStack_68 = 0;
  uVar2 = *(longlong *)(param_1 + 0x10) * 2;
  if (uVar3 < uVar2) {
    pdb_142d7f1b0(&uStack_78,0,uVar2,4,0x24);
  }
  uStack_98 = *(undefined4 *)(param_1 + 0x30);
  uStack_94 = *(undefined4 *)(param_1 + 0x34);
  uVar3 = *(ulonglong *)(param_1 + 0x30);
  uStack_90 = *(undefined4 *)(param_1 + 0x38);
  uStack_8c = *(undefined4 *)(param_1 + 0x3c);
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 4;
  *(undefined8 *)(param_1 + 0x40) = 0;
  uStack_88 = 0;
  if (uVar3 < uVar2) {
    pdb_142d7f1b0(&uStack_98,0,uVar2,4,0x24);
  }
  uStack_b8 = *(undefined4 *)(param_1 + 0x48);
  uStack_b4 = *(undefined4 *)(param_1 + 0x4c);
  uVar3 = *(ulonglong *)(param_1 + 0x48);
  uStack_b0 = *(undefined4 *)(param_1 + 0x50);
  uStack_ac = *(undefined4 *)(param_1 + 0x54);
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 4;
  *(undefined8 *)(param_1 + 0x58) = 0;
  uStack_a8 = 0;
  if (uVar3 < uVar2) {
    pdb_142d7f1b0(&uStack_b8,0,uVar2,4,0x18);
  }
  bStack_bb = *(byte *)(param_2 + 0x2a0) ^ 1;
  uStack_bc = *(uint *)(param_2 + 600) < 2;
  auStack_d8[0] = 0;
  uStack_cc = (uint)(byte)uStack_bc;
  uStack_c8 = 0x3ea147ae;
  uStack_c4 = 0;
  pdb_141b2eb70(param_1,auStack_d8,&uStack_78,&uStack_98,&uStack_b8);
  uStack_48 = uStack_68;
  lStack_58 = CONCAT44(uStack_74,uStack_78);
  uStack_50 = CONCAT44(uStack_6c,uStack_70);
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (lVar1 != 0) {
    pub_1406abac0(*(byte **)(param_1 + 0x20),lVar1 * 0x24,4);
  }
  *(undefined8 *)(param_1 + 0x28) = uStack_48;
  *(longlong *)(param_1 + 0x18) = lStack_58;
  *(undefined8 *)(param_1 + 0x20) = uStack_50;
  uStack_48 = uStack_88;
  lStack_58 = CONCAT44(uStack_94,uStack_98);
  uStack_50 = CONCAT44(uStack_8c,uStack_90);
  lVar1 = *(longlong *)(param_1 + 0x30);
  if (lVar1 != 0) {
    pub_1406abac0(*(byte **)(param_1 + 0x38),lVar1 * 0x24,4);
  }
  *(undefined8 *)(param_1 + 0x40) = uStack_48;
  *(longlong *)(param_1 + 0x30) = lStack_58;
  *(undefined8 *)(param_1 + 0x38) = uStack_50;
  uStack_48 = uStack_a8;
  lStack_58 = CONCAT44(uStack_b4,uStack_b8);
  uStack_50 = CONCAT44(uStack_ac,uStack_b0);
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (lVar1 != 0) {
    pub_1406abac0(*(byte **)(param_1 + 0x50),lVar1 * 0x18,4);
  }
  *(undefined8 *)(param_1 + 0x58) = uStack_48;
  *(longlong *)(param_1 + 0x48) = lStack_58;
  *(undefined8 *)(param_1 + 0x50) = uStack_50;
  *(undefined1 *)(param_1 + 0x60) = *(undefined1 *)(param_2 + 0x2a0);
  return;
}

