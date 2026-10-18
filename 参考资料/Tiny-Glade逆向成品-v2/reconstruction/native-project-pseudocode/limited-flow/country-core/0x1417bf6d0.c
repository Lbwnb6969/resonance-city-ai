// VA 0x1417bf6d0, PDB extent 1275 bytes
// country_core::resources::walls::decorator::_::impl$0::serialize<ref_mut$<serde_json::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global> >,serde_json::ser::PrettyFormatter> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::walls::decorator::_::impl$0::serialize<ref_mut$<serde_json::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global>
   >,serde_json::ser::PrettyFormatter> > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator.rs
   Extent: 1275 */

void pdb_1417bf6d0(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001417bf6f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_143337630 + *(int *)(&UNK_143337630 + *param_1 * 4)))();
  return;
}

