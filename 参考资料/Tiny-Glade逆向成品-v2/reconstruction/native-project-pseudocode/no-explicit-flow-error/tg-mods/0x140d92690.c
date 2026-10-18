// VA 0x140d92690, PDB extent 43 bytes
// tg_mods::overlay::refresh_active_overlay
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-mods/src/overlay.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: tg_mods::overlay::refresh_active_overlay
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-mods/src/overlay.rs
   Extent: 43 */

undefined8 pdb_140d92690(undefined8 param_1)

{
  undefined1 auStack_28 [24];
  
  pdb_140d8ae10(auStack_28);
  pdb_140d8b880(param_1,auStack_28);
  return param_1;
}

