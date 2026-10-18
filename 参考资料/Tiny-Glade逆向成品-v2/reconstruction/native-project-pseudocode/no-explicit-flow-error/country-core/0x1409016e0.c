// VA 0x1409016e0, PDB extent 18 bytes
// country_core::resources::walls::decorator::DecoratorOpEventKind::id
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::walls::decorator::DecoratorOpEventKind::id
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator.rs
   Extent: 18 */

int pdb_1409016e0(int *param_1)

{
  int *piVar1;
  
  piVar1 = param_1 + 0x1e;
  if (*param_1 == 3) {
    piVar1 = param_1 + 0x10;
  }
  return *piVar1;
}

