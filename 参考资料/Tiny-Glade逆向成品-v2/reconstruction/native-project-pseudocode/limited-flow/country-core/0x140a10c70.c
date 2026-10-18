// VA 0x140a10c70, PDB extent 1330 bytes
// country_core::resources::history::wall_compound_edit::impl$4::fmt
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/wall_compound_edit.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::history::wall_compound_edit::impl$4::fmt
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/wall_compound_edit.rs
   Extent: 1330 */

void pdb_140a10c70(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000140a10ca1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_1430387fc +
            *(int *)(&UNK_1430387fc + (*param_1 >> 0x3f & *param_1 + 0x8000000000000001U) * 4)))();
  return;
}

