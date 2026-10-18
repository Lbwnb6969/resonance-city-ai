// VA 0x1417bec50, PDB extent 1801 bytes
// country_core::resources::walls::decorator::_::impl$0::serialize<ref_mut$<serde_json::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global> >,serde_json::ser::CompactFormatter> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::walls::decorator::_::impl$0::serialize<ref_mut$<serde_json::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global>
   >,serde_json::ser::CompactFormatter> > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator.rs
   Extent: 1801 */

void pdb_1417bec50(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = 0;
  if (1 < (ulonglong)*(byte *)(param_1 + 0x22)) {
    lVar1 = (ulonglong)*(byte *)(param_1 + 0x22) - 1;
  }
                    /* WARNING: Could not emulate address calculation at 0x0001417bec74 */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_143337610 + *(int *)(&UNK_143337610 + lVar1 * 4)))
            (&UNK_143337610 + *(int *)(&UNK_143337610 + lVar1 * 4));
  return;
}

