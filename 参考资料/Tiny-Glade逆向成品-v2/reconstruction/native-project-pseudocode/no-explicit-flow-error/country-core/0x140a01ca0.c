// VA 0x140a01ca0, PDB extent 471 bytes
// country_core::systems::world_raster::_::impl$0::init_state
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/world_raster.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::world_raster::_::impl$0::init_state
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/world_raster.rs
   Extent: 471 */

undefined8 * pdb_140a01ca0(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong lStack_70;
  byte *pbStack_68;
  undefined8 uStack_60;
  longlong lStack_58;
  longlong lStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  uVar1 = pdb_1416bb090(param_2);
  uVar2 = pdb_14169e090(param_2);
  uVar3 = pdb_141695d50(param_2);
  lStack_70 = 0;
  pbStack_68 = (byte *)0x8;
  uStack_60 = 0;
  uStack_88 = _DAT_143325730;
  uStack_84 = _UNK_143325734;
  uStack_80 = _UNK_143325738;
  uStack_7c = _UNK_14332573c;
  lStack_58 = param_2 + 0x38;
  lStack_50 = param_2 + 0x5a0;
  uVar4 = pdb_1416d3080(&lStack_70,&uStack_88);
  if (lStack_70 != 0) {
    pub_1406abac0(pbStack_68,lStack_70 << 3,8);
  }
  uVar5 = pdb_1416b6590(param_2);
  lStack_70 = 0;
  pbStack_68 = (byte *)0x8;
  uStack_60 = 0;
  uStack_88 = _DAT_143324e10;
  uStack_84 = _UNK_143324e14;
  uStack_80 = _UNK_143324e18;
  uStack_7c = _UNK_143324e1c;
  lStack_58 = param_2 + 0x38;
  lStack_50 = param_2 + 0x5a0;
  uVar6 = pdb_1416ea5e0(&lStack_70,&uStack_88);
  if (lStack_70 != 0) {
    pub_1406abac0(pbStack_68,lStack_70 << 3,8);
  }
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  param_1[4] = uVar5;
  param_1[5] = uVar6;
  return param_1;
}

