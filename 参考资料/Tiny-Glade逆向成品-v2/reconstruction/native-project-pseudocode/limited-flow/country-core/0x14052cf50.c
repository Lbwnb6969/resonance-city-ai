// VA 0x14052cf50, PDB extent 1135 bytes
// country_core::resources::history::decorator_edit::_::impl$0::serialize<ref_mut$<serde_json::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global> >,serde_json::ser::CompactFormatter> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/decorator_edit.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::history::decorator_edit::_::impl$0::serialize<ref_mut$<serde_json::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global>
   >,serde_json::ser::CompactFormatter> > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/decorator_edit.rs
   Extent: 1135 */

void pdb_14052cf50(ulonglong *param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = 3;
  if (2 < *param_1) {
    lVar1 = *param_1 - 3;
  }
                    /* WARNING: Could not recover jumptable at 0x00014052cf81. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_142f64ec8 + *(int *)(&UNK_142f64ec8 + lVar1 * 4)))
            (&UNK_142f64ec8 + *(int *)(&UNK_142f64ec8 + lVar1 * 4),param_2 + 8);
  return;
}

