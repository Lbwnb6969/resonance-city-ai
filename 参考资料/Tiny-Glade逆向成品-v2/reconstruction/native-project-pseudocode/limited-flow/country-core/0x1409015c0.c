// VA 0x1409015c0, PDB extent 17 bytes
// country_core::resources::walls::decorator::DecoratorRotationXZ::offset
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::walls::decorator::DecoratorRotationXZ::offset
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator.rs
   Extent: 17 */

void pdb_1409015c0(float param_1,float param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000142e32a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fmodf(param_1 + param_2,_DAT_142f57bcc);
  return;
}

