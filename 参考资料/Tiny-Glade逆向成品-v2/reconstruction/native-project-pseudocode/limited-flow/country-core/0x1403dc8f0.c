// VA 0x1403dc8f0, PDB extent 3015 bytes
// country_core::resources::history::_::impl$0::serialize<ref_mut$<serde_json::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global> >,serde_json::ser::CompactFormatter> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::history::_::impl$0::serialize<ref_mut$<serde_json::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global>
   >,serde_json::ser::CompactFormatter> > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/mod.rs
   Extent: 3015 */

void pdb_1403dc8f0(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001403dc90d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_142f50818 + *(int *)(&UNK_142f50818 + *param_1 * 4)))();
  return;
}

