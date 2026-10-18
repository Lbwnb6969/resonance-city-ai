// VA 0x1409f1370, PDB extent 359 bytes
// country_core::systems::collision::world::_::impl$0::init_state
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/collision/world.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::collision::world::_::impl$0::init_state
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/collision/world.rs
   Extent: 359 */

undefined8 pdb_1409f1370(longlong param_1)

{
  undefined8 uVar1;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong lStack_50;
  byte *pbStack_48;
  undefined8 uStack_40;
  longlong lStack_38;
  longlong lStack_30;
  undefined8 uStack_28;
  
  uStack_28 = 0xfffffffffffffffe;
  lStack_50 = 0;
  pbStack_48 = (byte *)0x8;
  uStack_40 = 0;
  uStack_68 = _DAT_143324c10;
  uStack_64 = _UNK_143324c14;
  uStack_60 = _UNK_143324c18;
  uStack_5c = _UNK_143324c1c;
  lStack_38 = param_1 + 0x38;
  lStack_30 = param_1 + 0x5a0;
  uVar1 = pdb_1416e02c0(&lStack_50,&uStack_68);
  if (lStack_50 != 0) {
    pub_1406abac0(pbStack_48,lStack_50 << 3,8);
  }
  lStack_50 = 0;
  pbStack_48 = (byte *)0x8;
  uStack_40 = 0;
  uStack_68 = _DAT_1433250d0;
  uStack_64 = _UNK_1433250d4;
  uStack_60 = _UNK_1433250d8;
  uStack_5c = _UNK_1433250dc;
  lStack_38 = param_1 + 0x38;
  lStack_30 = param_1 + 0x5a0;
  pdb_1416e6840(&lStack_50,&uStack_68);
  if (lStack_50 != 0) {
    pub_1406abac0(pbStack_48,lStack_50 << 3,8);
  }
  return uVar1;
}

