// VA 0x140901700, PDB extent 19 bytes
// country_core::resources::walls::decorator::TransientDecoratorIdGen::new
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::walls::decorator::TransientDecoratorIdGen::new
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator.rs
   Extent: 19 */

undefined8 * pdb_140901700(undefined8 *param_1,undefined8 param_2,undefined1 param_3)

{
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 2) = param_3;
  param_1[1] = 0;
  return param_1;
}

