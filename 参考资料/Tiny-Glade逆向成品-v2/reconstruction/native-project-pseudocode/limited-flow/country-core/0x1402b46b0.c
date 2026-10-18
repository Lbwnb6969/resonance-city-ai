// VA 0x1402b46b0, PDB extent 8673 bytes
// country_core::resources::history::wall_compound_edit::_::impl$0::serialize<ref_mut$<serde_json::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global> >,serde_json::ser::CompactFormatter> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/wall_compound_edit.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::history::wall_compound_edit::_::impl$0::serialize<ref_mut$<serde_json::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global>
   >,serde_json::ser::CompactFormatter> > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/wall_compound_edit.rs
   Extent: 8673 */

void pdb_1402b46b0(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001402b46e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_142e68040 +
            *(int *)(&UNK_142e68040 + (*param_1 >> 0x3f & *param_1 + 0x8000000000000001U) * 4)))();
  return;
}

