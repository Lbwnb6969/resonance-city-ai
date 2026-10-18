// VA 0x140af82c0, PDB extent 351 bytes
// country_core::components::drawable::impl$8::fmt
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/components/drawable.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::components::drawable::impl$8::fmt
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/components/drawable.rs
   Extent: 351 */

void pdb_140af82c0(uint *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000140af82db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_143051e08 + *(int *)(&UNK_143051e08 + (ulonglong)*param_1 * 4)))
            (param_1 + 1,&UNK_143051e08 + *(int *)(&UNK_143051e08 + (ulonglong)*param_1 * 4));
  return;
}

