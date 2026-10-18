// VA 0x140bbc1b0, PDB extent 28 bytes
// country_core::resources::editing_highlight::EditingHighlight::clear
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/editing_highlight.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::editing_highlight::EditingHighlight::clear
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/editing_highlight.rs
   Extent: 28 */

void pdb_140bbc1b0(undefined8 *param_1)

{
  *(undefined4 *)param_1[2] = *(undefined4 *)((longlong)param_1 + 0x1c);
  param_1 = (undefined8 *)*param_1;
  *(undefined8 *)((longlong)param_1 + 5) = 0;
  *param_1 = 0;
  return;
}

