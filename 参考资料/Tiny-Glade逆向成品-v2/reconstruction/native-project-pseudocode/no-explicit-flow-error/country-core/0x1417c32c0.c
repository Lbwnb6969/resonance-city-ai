// VA 0x1417c32c0, PDB extent 210 bytes
// country_core::resources::walls::decorator::impl$131::fmt
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::walls::decorator::impl$131::fmt
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator.rs
   Extent: 210 */

void pdb_1417c32c0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = 0;
  if (1 < (ulonglong)*(byte *)(param_1 + 0x22)) {
    lVar1 = (ulonglong)*(byte *)(param_1 + 0x22) - 1;
  }
                    /* WARNING: Could not emulate address calculation at 0x0001417c32da */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_143337848 + *(int *)(&UNK_143337848 + lVar1 * 4)))
            (param_2,&UNK_143337848,&UNK_143337848 + *(int *)(&UNK_143337848 + lVar1 * 4));
  return;
}

