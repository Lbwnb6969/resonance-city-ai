// VA 0x140a27750, PDB extent 18 bytes
// country_core::systems::steam::missing_mods::MissingMods::mod_mesh_fit_count
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/steam/missing_mods.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::steam::missing_mods::MissingMods::mod_mesh_fit_count
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/steam/missing_mods.rs
   Extent: 18 */

longlong pdb_140a27750(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = 0;
  if (*(ulonglong *)(param_1 + 0x30) <= *(ulonglong *)(param_1 + 0x80)) {
    lVar1 = *(ulonglong *)(param_1 + 0x80) - *(ulonglong *)(param_1 + 0x30);
  }
  return lVar1;
}

