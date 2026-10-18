// VA 0x140d93150, PDB extent 18 bytes
// tg_mods::overlay::ModParts::is_empty
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-mods/src/overlay.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: tg_mods::overlay::ModParts::is_empty
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-mods/src/overlay.rs
   Extent: 18 */

byte pdb_140d93150(longlong *param_1)

{
  return ~*(byte *)(param_1 + 4) & SBORROW8(0,*param_1);
}

