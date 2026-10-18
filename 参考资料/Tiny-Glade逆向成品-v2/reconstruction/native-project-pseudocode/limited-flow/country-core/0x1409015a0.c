// VA 0x1409015a0, PDB extent 18 bytes
// country_core::resources::walls::decorator::DecoratorRotationXZ::from_xz_forward_vector
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::walls::decorator::DecoratorRotationXZ::from_xz_forward_vector
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator.rs
   Extent: 18 */

void pdb_1409015a0(uint param_1,uint param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000142e32980. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  atan2f(param_1 ^ _DAT_142e37820,param_2 ^ _DAT_142e37820);
  return;
}

