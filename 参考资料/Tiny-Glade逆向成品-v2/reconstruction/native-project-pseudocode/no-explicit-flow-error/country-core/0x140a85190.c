// VA 0x140a85190, PDB extent 62 bytes
// country_core::systems::wall::valid_enclosure::ShapeParameters::as_curve2
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/valid_enclosure/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::wall::valid_enclosure::ShapeParameters::as_curve2
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/valid_enclosure/mod.rs
   Extent: 62 */

undefined8 pdb_140a85190(undefined8 param_1,int *param_2)

{
  if (*param_2 == 1) {
    pdb_140df37e0(param_1);
    return param_1;
  }
  pdb_140defcd0(param_1,param_2 + 1,_DAT_142e3787c);
  return param_1;
}

