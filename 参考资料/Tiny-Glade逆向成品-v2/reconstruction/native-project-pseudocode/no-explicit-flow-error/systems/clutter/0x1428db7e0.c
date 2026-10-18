// VA 0x1428db7e0, PDB extent 1436 bytes
// system_clutter::autoclutter::populate_autoclutter_regions::_::impl$0::init_state
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/clutter/src/autoclutter/populate_autoclutter_regions.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_clutter::autoclutter::populate_autoclutter_regions::_::impl$0::init_state
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/clutter/src/autoclutter/populate_autoclutter_regions.rs
   Extent: 1436 */

longlong pdb_1428db7e0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_500 [280];
  undefined4 uStack_3e8;
  undefined4 uStack_3e4;
  undefined4 uStack_3e0;
  undefined4 uStack_3dc;
  longlong lStack_2c8;
  byte *pbStack_2c0;
  undefined8 uStack_2b8;
  longlong lStack_2b0;
  longlong lStack_2a8;
  undefined1 auStack_1b0 [280];
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  uVar3 = pdb_142177a90(param_2);
  pdb_140bfa8a0(&uStack_98,param_2);
  lVar1 = param_2 + 0x38;
  lVar2 = param_2 + 0x5a0;
  lStack_2c8 = 0;
  pbStack_2c0 = (byte *)0x8;
  uStack_2b8 = 0;
  uStack_3e8 = _DAT_1434679b0;
  uStack_3e4 = _UNK_1434679b4;
  uStack_3e0 = _UNK_1434679b8;
  uStack_3dc = _UNK_1434679bc;
  lStack_2b0 = lVar1;
  lStack_2a8 = lVar2;
  uVar4 = pdb_14217f630(&lStack_2c8,&uStack_3e8);
  if (lStack_2c8 != 0) {
    pub_1406abac0(pbStack_2c0,lStack_2c8 << 3,8);
  }
  lStack_2c8 = 0;
  pbStack_2c0 = (byte *)0x8;
  uStack_2b8 = 0;
  uStack_3e8 = _DAT_143467980;
  uStack_3e4 = _UNK_143467984;
  uStack_3e0 = _UNK_143467988;
  uStack_3dc = _UNK_14346798c;
  lStack_2b0 = lVar1;
  lStack_2a8 = lVar2;
  uVar5 = pdb_14217e410(&lStack_2c8,&uStack_3e8);
  if (lStack_2c8 != 0) {
    pub_1406abac0(pbStack_2c0,lStack_2c8 << 3,8);
  }
  lStack_2c8 = 0;
  pbStack_2c0 = (byte *)0x8;
  uStack_2b8 = 0;
  uStack_3e8 = _DAT_143467990;
  uStack_3e4 = _UNK_143467994;
  uStack_3e0 = _UNK_143467998;
  uStack_3dc = _UNK_14346799c;
  lStack_2b0 = lVar1;
  lStack_2a8 = lVar2;
  uStack_68 = pdb_14217dcd0(&lStack_2c8,&uStack_3e8);
  if (lStack_2c8 != 0) {
    pub_1406abac0(pbStack_2c0,lStack_2c8 << 3,8);
  }
  lStack_2c8 = 0;
  pbStack_2c0 = (byte *)0x8;
  uStack_2b8 = 0;
  uStack_3e8 = _DAT_143467860;
  uStack_3e4 = _UNK_143467864;
  uStack_3e0 = _UNK_143467868;
  uStack_3dc = _UNK_14346786c;
  lStack_2b0 = lVar1;
  lStack_2a8 = lVar2;
  uStack_60 = uVar5;
  uStack_58 = pdb_14217d590(&lStack_2c8,&uStack_3e8);
  uStack_50 = uVar4;
  if (lStack_2c8 != 0) {
    pub_1406abac0(pbStack_2c0,lStack_2c8 << 3,8);
  }
  uVar4 = pdb_142171370(param_2);
  uVar5 = pdb_142176320(param_2);
  pdb_142195020(auStack_500,param_2);
  pdb_142195800(&uStack_3e8,param_2);
  lStack_2c8 = 0;
  pbStack_2c0 = (byte *)0x8;
  uStack_2b8 = 0;
  uStack_78 = _DAT_143467aa0;
  uStack_74 = _UNK_143467aa4;
  uStack_70 = _UNK_143467aa8;
  uStack_6c = _UNK_143467aac;
  lStack_2b0 = lVar1;
  lStack_2a8 = lVar2;
  uVar6 = pdb_14217eb50(&lStack_2c8,&uStack_78);
  if (lStack_2c8 != 0) {
    pub_1406abac0(pbStack_2c0,lStack_2c8 << 3,8);
  }
  *(undefined4 *)(param_1 + 0x248) = uStack_88;
  *(undefined4 *)(param_1 + 0x24c) = uStack_84;
  *(undefined4 *)(param_1 + 0x250) = uStack_80;
  *(undefined4 *)(param_1 + 0x254) = uStack_7c;
  *(undefined4 *)(param_1 + 0x238) = uStack_98;
  *(undefined4 *)(param_1 + 0x23c) = uStack_94;
  *(undefined4 *)(param_1 + 0x240) = uStack_90;
  *(undefined4 *)(param_1 + 0x244) = uStack_8c;
  pub_142e32760(&lStack_2c8,auStack_500,0x118);
  pub_142e32760(auStack_1b0,&uStack_3e8,0x118);
  pub_142e32760(param_1,&lStack_2c8,0x230);
  *(undefined8 *)(param_1 + 0x230) = uVar3;
  *(undefined8 *)(param_1 + 600) = uStack_50;
  *(undefined8 *)(param_1 + 0x260) = uStack_60;
  *(undefined8 *)(param_1 + 0x268) = uStack_68;
  *(undefined8 *)(param_1 + 0x270) = uStack_58;
  *(undefined8 *)(param_1 + 0x278) = uVar4;
  *(undefined8 *)(param_1 + 0x280) = uVar5;
  *(undefined8 *)(param_1 + 0x288) = uVar6;
  return param_1;
}

