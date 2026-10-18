// VA 0x140a76030, PDB extent 11 bytes
// country_core::resources::ui_settings::ToolbarAlignment::is_horizontal
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/ui_settings.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::ui_settings::ToolbarAlignment::is_horizontal
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/ui_settings.rs
   Extent: 11 */

bool pdb_140a76030(char *param_1)

{
  return (byte)(*param_1 - 3U) < 0xfe;
}

