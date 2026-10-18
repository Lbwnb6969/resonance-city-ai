// VA 0x1417bffb0, PDB extent 714 bytes
// country_core::resources::walls::decorator::_::impl$0::serialize<ref_mut$<serde_json::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global> >,serde_json::ser::CompactFormatter> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::walls::decorator::_::impl$0::serialize<ref_mut$<serde_json::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global>
   >,serde_json::ser::CompactFormatter> > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator.rs
   Extent: 714 */

void pdb_1417bffb0(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001417bffcd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_143337670 + *(int *)(&UNK_143337670 + *param_1 * 4)))();
  return;
}

