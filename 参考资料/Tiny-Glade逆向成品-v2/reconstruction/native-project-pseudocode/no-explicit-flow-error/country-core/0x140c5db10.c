// VA 0x140c5db10, PDB extent 57 bytes
// country_core::resources::glade_settings::impl$1::default
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/glade_settings.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::resources::glade_settings::impl$1::default
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/glade_settings.rs
   Extent: 57 */

void pdb_140c5db10(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = _DAT_14306e520;
  *(undefined4 *)(param_1 + 2) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x24) = 1;
  *(undefined8 *)((longlong)param_1 + 0x14) = 8;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0x100000000;
  return;
}

