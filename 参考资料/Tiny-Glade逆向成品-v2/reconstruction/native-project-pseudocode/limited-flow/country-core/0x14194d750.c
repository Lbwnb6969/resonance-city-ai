// VA 0x14194d750, PDB extent 8652 bytes
// country_core::resources::history::wall_compound_edit::_::impl$0::serialize<ref_mut$<serde_json::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global> >,serde_json::ser::CompactFormatter> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/wall_compound_edit.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::history::wall_compound_edit::_::impl$0::serialize<ref_mut$<serde_json::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global>
   >,serde_json::ser::CompactFormatter> > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/wall_compound_edit.rs
   Extent: 8652 */

void pdb_14194d750(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014194d787. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_14335b1e0 +
            *(int *)(&UNK_14335b1e0 + (*param_1 >> 0x3f & *param_1 + 0x8000000000000001U) * 4)))();
  return;
}

