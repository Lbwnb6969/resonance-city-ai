// VA 0x140a85220, PDB extent 21 bytes
// country_core::systems::wall::valid_enclosure::ShapeParameters::perimeter
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/valid_enclosure/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::wall::valid_enclosure::ShapeParameters::perimeter
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/valid_enclosure/mod.rs
   Extent: 21 */

float pdb_140a85220(int *param_1)

{
  if (*param_1 == 1) {
    return (float)param_1[5] + (float)param_1[6] + (float)param_1[5] + (float)param_1[6];
  }
  return (float)param_1[3] * _DAT_142f57bcc;
}

