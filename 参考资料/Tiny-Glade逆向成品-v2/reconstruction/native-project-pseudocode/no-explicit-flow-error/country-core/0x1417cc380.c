// VA 0x1417cc380, PDB extent 248 bytes
// country_core::resources::stairs::stairs_state::_::impl$0::serialize<ref_mut$<serde_json::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global> >,serde_json::ser::CompactFormatter> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/stairs/stairs_state.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::stairs::stairs_state::_::impl$0::serialize<ref_mut$<serde_json::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global>
   >,serde_json::ser::CompactFormatter> > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/stairs/stairs_state.rs
   Extent: 248 */

longlong pdb_1417cc380(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_2;
  lVar2 = plVar1[2];
  if (*plVar1 == lVar2) {
    pdb_142d7f1b0(plVar1,lVar2,1,1,1);
    lVar2 = plVar1[2];
  }
  *(undefined1 *)(plVar1[1] + lVar2) = 0x5b;
  plVar1[2] = lVar2 + 1;
  lVar2 = pdb_1417beaf0(param_1,param_2);
  if (lVar2 == 0) {
    lVar2 = plVar1[2];
    if (*plVar1 == lVar2) {
      pdb_142d7f1b0(plVar1,lVar2,1,1,1);
      lVar2 = plVar1[2];
    }
    *(undefined1 *)(plVar1[1] + lVar2) = 0x2c;
    plVar1[2] = lVar2 + 1;
    lVar2 = pdb_1417beaf0(param_1 + 4,param_2);
    if (lVar2 == 0) {
      lVar2 = plVar1[2];
      if (*plVar1 == lVar2) {
        pdb_142d7f1b0(plVar1,lVar2,1,1,1);
        lVar2 = plVar1[2];
      }
      *(undefined1 *)(plVar1[1] + lVar2) = 0x5d;
      plVar1[2] = lVar2 + 1;
      lVar2 = 0;
    }
  }
  return lVar2;
}

