// VA 0x140901080, PDB extent 43 bytes
// country_core::resources::walls::decorator::DecoratorDst::as_roof
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::walls::decorator::DecoratorDst::as_roof
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator.rs
   Extent: 43 */

longlong pdb_140901080(longlong param_1)

{
  if (*(char *)(param_1 + 0x22) == '\x02') {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc83b0(&UNK_14301e2b3,0x28,&UNK_14301e2f8);
}

