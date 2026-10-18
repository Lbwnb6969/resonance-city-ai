// VA 0x140bc0c30, PDB extent 210 bytes
// country_core::resources::walls::decorator::impl$131::fmt
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::walls::decorator::impl$131::fmt
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator.rs
   Extent: 210 */

void pdb_140bc0c30(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = 0;
  if (1 < (ulonglong)*(byte *)(param_1 + 0x22)) {
    lVar1 = (ulonglong)*(byte *)(param_1 + 0x22) - 1;
  }
                    /* WARNING: Could not emulate address calculation at 0x000140bc0c4a */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_1430633fc + *(int *)(&UNK_1430633fc + lVar1 * 4)))
            (param_2,&UNK_1430633fc,&UNK_1430633fc + *(int *)(&UNK_1430633fc + lVar1 * 4));
  return;
}

