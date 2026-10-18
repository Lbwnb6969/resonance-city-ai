// VA 0x1422d1850, PDB extent 33 bytes
// toolbar::menu::credits::impl$2::on_input
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/menu/credits.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: toolbar::menu::credits::impl$2::on_input
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/menu/credits.rs
   Extent: 33 */

void pdb_1422d1850(longlong param_1,longlong param_2)

{
  if (*(int *)(param_2 + 0x58) == 0xc3) {
    *(float *)(param_1 + 8) = *(float *)(param_2 + 4) * _DAT_14335ea98 + *(float *)(param_1 + 8);
  }
  return;
}

