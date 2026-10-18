// VA 0x140a771e0, PDB extent 27 bytes
// country_core::resources::ui_settings::impl$4::default
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/ui_settings.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::resources::ui_settings::impl$4::default
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/ui_settings.rs
   Extent: 27 */

undefined8 * pdb_140a771e0(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0x1010000;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  *param_1 = _DAT_14303aa90;
  return param_1;
}

