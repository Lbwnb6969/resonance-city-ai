// VA 0x140a009f0, PDB extent 141 bytes
// country_core::resources::gui::impl$9::default
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/gui.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::resources::gui::impl$9::default
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/gui.rs
   Extent: 141 */

void pdb_140a009f0(undefined8 *param_1)

{
  *(undefined2 *)((longlong)param_1 + 0xd3) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined2 *)((longlong)param_1 + 0xc5) = 0;
  param_1[0x17] = _DAT_1430342c0;
  *param_1 = 0;
  *(undefined1 *)((longlong)param_1 + 199) = 1;
  param_1[2] = 0x8000000000000000;
  param_1[6] = 0x8000000000000000;
  param_1[10] = 0x8000000000000000;
  param_1[0xe] = 0x8000000000000000;
  param_1[0x12] = 0x8000000000000000;
  param_1[0x16] = 0;
  *(undefined1 *)((longlong)param_1 + 0xd5) = 0;
  param_1[0x19] = 0;
  *(undefined4 *)((longlong)param_1 + 0xcf) = 0;
  return;
}

