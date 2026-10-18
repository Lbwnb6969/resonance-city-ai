// VA 0x14094c330, PDB extent 29 bytes
// country_core::geometry::instanced_wall::BrickSourceId::from_fixed_color
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/geometry/instanced_wall.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::geometry::instanced_wall::BrickSourceId::from_fixed_color
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/geometry/instanced_wall.rs
   Extent: 29 */

undefined4 pdb_14094c330(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0x80000000;
  if (param_1 - 100000U < 0xc) {
    uVar1 = *(undefined4 *)(&UNK_14302515c + (ulonglong)(param_1 - 100000U) * 4);
  }
  return uVar1;
}

