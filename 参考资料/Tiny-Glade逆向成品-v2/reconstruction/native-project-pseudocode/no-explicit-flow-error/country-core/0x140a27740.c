// VA 0x140a27740, PDB extent 12 bytes
// country_core::systems::steam::missing_mods::MissingMods::has_issues
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/steam/missing_mods.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::steam::missing_mods::MissingMods::has_issues
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/steam/missing_mods.rs
   Extent: 12 */

undefined8 pdb_140a27740(longlong param_1)

{
  ulonglong uVar1;
  
  uVar1 = *(ulonglong *)(param_1 + 0x30) | *(ulonglong *)(param_1 + 0x10);
  return CONCAT71((int7)(uVar1 >> 8),uVar1 != 0);
}

