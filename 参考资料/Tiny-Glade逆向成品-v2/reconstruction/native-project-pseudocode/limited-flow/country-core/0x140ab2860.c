// VA 0x140ab2860, PDB extent 614 bytes
// country_core::utils::debug_viz::impl$3::emit::closure$1<country_core::utils::debug_viz::impl$3::show_for::closure_env$0>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/utils/debug_viz.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::utils::debug_viz::impl$3::emit::closure$1<country_core::utils::debug_viz::impl$3::show_for::closure_env$0>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/utils/debug_viz.rs
   Extent: 614 */

void pdb_140ab2860(undefined8 param_1,uint *param_2)

{
  byte *pbVar1;
  
  pdb_14007ee60();
  pbVar1 = pub_1406abab0(0x18,4);
  if (pbVar1 != (byte *)0x0) {
    *(uint *)(pbVar1 + 8) = param_2[6];
    *(undefined8 *)pbVar1 = *(undefined8 *)(param_2 + 4);
    *(undefined8 *)(pbVar1 + 0xc) = *(undefined8 *)(param_2 + 7);
    *(uint *)(pbVar1 + 0x14) = param_2[9];
                    /* WARNING: Could not recover jumptable at 0x000140ab28d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_14304aa88 + *(int *)(&UNK_14304aa88 + (ulonglong)*param_2 * 4)))
              (&UNK_14304aa88,&UNK_14304aa88 + *(int *)(&UNK_14304aa88 + (ulonglong)*param_2 * 4));
    return;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc7e11(4,0x18);
}

