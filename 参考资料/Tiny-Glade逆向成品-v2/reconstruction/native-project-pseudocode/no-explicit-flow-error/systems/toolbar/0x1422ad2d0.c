// VA 0x1422ad2d0, PDB extent 39 bytes
// toolbar::menu::thumbnail_scroll::impl$3::on_input
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/menu/thumbnail_scroll.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: toolbar::menu::thumbnail_scroll::impl$3::on_input
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/menu/thumbnail_scroll.rs
   Extent: 39 */

void pdb_1422ad2d0(longlong param_1,longlong param_2)

{
  if ((*(int *)(param_2 + 0x58) == 0xc3) && (*(char *)(param_1 + 0x76) == '\0')) {
    *(float *)(param_1 + 0x5c) =
         *(float *)(param_2 + 4) * _DAT_14335ea98 + *(float *)(param_1 + 0x5c);
  }
  return;
}

