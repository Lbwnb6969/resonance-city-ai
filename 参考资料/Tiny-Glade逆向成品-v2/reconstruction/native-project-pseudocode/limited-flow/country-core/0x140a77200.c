// VA 0x140a77200, PDB extent 260 bytes
// country_core::input::input_stream::impl$8::fmt
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/input/input_stream.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::input::input_stream::impl$8::fmt
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/input/input_stream.rs
   Extent: 260 */

void pdb_140a77200(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = 1;
  if (*param_1 < 0) {
    lVar1 = *param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x000140a77235. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_143041c28 + *(int *)(&UNK_143041c28 + lVar1 * 4)))
            (param_2,&UNK_143041c28,&UNK_143041c28 + *(int *)(&UNK_143041c28 + lVar1 * 4));
  return;
}

