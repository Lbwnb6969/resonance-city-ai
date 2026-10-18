// VA 0x141641110, PDB extent 16 bytes
// country_core::resources::color_icon::ColorMenuBrightnessValue::to_f32
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/color_icon.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::color_icon::ColorMenuBrightnessValue::to_f32
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/color_icon.rs
   Extent: 16 */

undefined4 pdb_141641110(byte param_1)

{
  return *(undefined4 *)(&UNK_143321360 + (ulonglong)param_1 * 4);
}

