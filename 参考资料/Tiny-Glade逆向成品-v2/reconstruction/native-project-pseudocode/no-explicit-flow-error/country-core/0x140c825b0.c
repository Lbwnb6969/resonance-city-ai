// VA 0x140c825b0, PDB extent 755 bytes
// country_core::systems::history::replay_raster::_::impl$0::init_state
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/history/replay_raster.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::history::replay_raster::_::impl$0::init_state
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/history/replay_raster.rs
   Extent: 755 */

undefined8 * pdb_140c825b0(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong lStack_68;
  byte *pbStack_60;
  undefined8 uStack_58;
  longlong lStack_50;
  longlong lStack_48;
  undefined8 uStack_40;
  
  uStack_40 = 0xfffffffffffffffe;
  lVar1 = param_2 + 0x38;
  param_2 = param_2 + 0x5a0;
  lStack_68 = 0;
  pbStack_60 = (byte *)0x8;
  uStack_58 = 0;
  uStack_78 = _DAT_143324c50;
  uStack_74 = _UNK_143324c54;
  uStack_70 = _UNK_143324c58;
  uStack_6c = _UNK_143324c5c;
  lStack_50 = lVar1;
  lStack_48 = param_2;
  uVar2 = pdb_1416e3580(&lStack_68,&uStack_78);
  if (lStack_68 != 0) {
    pub_1406abac0(pbStack_60,lStack_68 << 3,8);
  }
  lStack_68 = 0;
  pbStack_60 = (byte *)0x8;
  uStack_58 = 0;
  uStack_78 = _DAT_1433254f0;
  uStack_74 = _UNK_1433254f4;
  uStack_70 = _UNK_1433254f8;
  uStack_6c = _UNK_1433254fc;
  lStack_50 = lVar1;
  lStack_48 = param_2;
  uVar3 = pdb_1416d3b60(&lStack_68,&uStack_78);
  if (lStack_68 != 0) {
    pub_1406abac0(pbStack_60,lStack_68 << 3,8);
  }
  lStack_68 = 0;
  pbStack_60 = (byte *)0x8;
  uStack_58 = 0;
  uStack_78 = _DAT_143325730;
  uStack_74 = _UNK_143325734;
  uStack_70 = _UNK_143325738;
  uStack_6c = _UNK_14332573c;
  lStack_50 = lVar1;
  lStack_48 = param_2;
  uVar4 = pdb_1416d3080(&lStack_68,&uStack_78);
  if (lStack_68 != 0) {
    pub_1406abac0(pbStack_60,lStack_68 << 3,8);
  }
  lStack_68 = 0;
  pbStack_60 = (byte *)0x8;
  uStack_58 = 0;
  uStack_78 = _DAT_1433253c0;
  uStack_74 = _UNK_1433253c4;
  uStack_70 = _UNK_1433253c8;
  uStack_6c = _UNK_1433253cc;
  lStack_50 = lVar1;
  lStack_48 = param_2;
  uVar5 = pdb_1416ce460(&lStack_68,&uStack_78);
  if (lStack_68 != 0) {
    pub_1406abac0(pbStack_60,lStack_68 << 3,8);
  }
  pub_142e32780(param_1 + 4,0,0x1c00);
  *param_1 = uVar2;
  param_1[1] = uVar3;
  param_1[2] = uVar4;
  param_1[3] = uVar5;
  return param_1;
}

