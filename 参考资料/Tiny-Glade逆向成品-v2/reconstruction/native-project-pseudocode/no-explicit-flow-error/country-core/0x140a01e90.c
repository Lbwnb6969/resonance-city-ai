// VA 0x140a01e90, PDB extent 197 bytes
// country_core::systems::world_raster::_::impl$0::init_state
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/world_raster.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::world_raster::_::impl$0::init_state
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/world_raster.rs
   Extent: 197 */

undefined8 pdb_140a01e90(longlong param_1)

{
  undefined8 uVar1;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong lStack_48;
  byte *pbStack_40;
  undefined8 uStack_38;
  longlong lStack_30;
  longlong lStack_28;
  undefined8 uStack_20;
  
  uStack_20 = 0xfffffffffffffffe;
  uVar1 = pdb_1416bb090();
  lStack_30 = param_1 + 0x38;
  lStack_28 = param_1 + 0x5a0;
  lStack_48 = 0;
  pbStack_40 = (byte *)0x8;
  uStack_38 = 0;
  uStack_58 = _DAT_1433254f0;
  uStack_54 = _UNK_1433254f4;
  uStack_50 = _UNK_1433254f8;
  uStack_4c = _UNK_1433254fc;
  pdb_1416d3b60(&lStack_48,&uStack_58);
  if (lStack_48 != 0) {
    pub_1406abac0(pbStack_40,lStack_48 << 3,8);
  }
  return uVar1;
}

