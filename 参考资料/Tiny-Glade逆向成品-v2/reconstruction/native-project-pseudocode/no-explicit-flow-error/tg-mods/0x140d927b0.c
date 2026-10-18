// VA 0x140d927b0, PDB extent 20 bytes
// tg_mods::overlay::Mod::is_publishable
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-mods/src/overlay.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: tg_mods::overlay::Mod::is_publishable
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-mods/src/overlay.rs
   Extent: 20 */

bool pdb_140d927b0(longlong *param_1)

{
  return (char)param_1[0x15] == '\0' && *param_1 == 0;
}

