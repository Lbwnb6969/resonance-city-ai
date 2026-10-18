// VA 0x1406410c0, PDB extent 1915 bytes
// tiny_glade::crash_pickup::crash_payload::_::impl$0::serialize<ref_mut$<serde_json::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global> >,serde_json::ser::CompactFormatter> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/crash_pickup/crash_payload.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   tiny_glade::crash_pickup::crash_payload::_::impl$0::serialize<ref_mut$<serde_json::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global>
   >,serde_json::ser::CompactFormatter> > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/crash_pickup/crash_payload.rs
   Extent: 1915 */

void pdb_1406410c0(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001406410f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_142f8bae4 +
            *(int *)(&UNK_142f8bae4 + (*param_1 >> 0x3f & *param_1 + 0x8000000000000001U) * 4)))();
  return;
}

