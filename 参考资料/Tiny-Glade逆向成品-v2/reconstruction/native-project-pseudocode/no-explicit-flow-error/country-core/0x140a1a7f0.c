// VA 0x140a1a7f0, PDB extent 146 bytes
// country_core::resources::history::wall_compound_edit::CompoundEditBuilder::next_empty
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/wall_compound_edit.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::history::wall_compound_edit::CompoundEditBuilder::next_empty
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/wall_compound_edit.rs
   Extent: 146 */

void pdb_140a1a7f0(longlong *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = param_1[2];
  if (lVar2 == *param_1) {
    pdb_142d7e830(param_1);
  }
  lVar3 = param_1[1];
  *(undefined8 *)(lVar3 + 0x10 + lVar2 * 0x18) = 0;
  puVar1 = (undefined8 *)(lVar3 + lVar2 * 0x18);
  *puVar1 = 0;
  puVar1[1] = 8;
  param_1[2] = lVar2 + 1;
  return;
}

