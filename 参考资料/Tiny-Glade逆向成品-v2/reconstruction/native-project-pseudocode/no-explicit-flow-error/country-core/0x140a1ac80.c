// VA 0x140a1ac80, PDB extent 194 bytes
// country_core::resources::history::wall_compound_edit::CompoundEditBuilder::build
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/wall_compound_edit.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::history::wall_compound_edit::CompoundEditBuilder::build
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/wall_compound_edit.rs
   Extent: 194 */

undefined8 pdb_140a1ac80(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lStack_48;
  longlong lStack_40;
  longlong lStack_38;
  longlong lStack_30;
  longlong *plStack_28;
  undefined8 uStack_20;
  
  uStack_20 = 0xfffffffffffffffe;
  lStack_38 = *param_1;
  lStack_48 = param_1[1];
  lVar1 = param_1[2];
  *param_1 = 0;
  param_1[1] = 8;
  param_1[2] = 0;
  lStack_30 = lStack_48 + lVar1 * 0x18;
  lStack_40 = lStack_48;
  plStack_28 = param_1;
  uVar2 = pdb_140c69b60(&lStack_48);
  if (*plStack_28 != 0) {
    pub_1406abac0((byte *)0x8,*plStack_28 * 0x18,8);
  }
  return uVar2;
}

