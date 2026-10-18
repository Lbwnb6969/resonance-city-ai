// VA 0x1406406d0, PDB extent 280 bytes
// tiny_glade::crash_pickup::crash_payload::_::impl$0::serialize<ref_mut$<serde_json::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global> >,serde_json::ser::CompactFormatter> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/crash_pickup/crash_payload.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   tiny_glade::crash_pickup::crash_payload::_::impl$0::serialize<ref_mut$<serde_json::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global>
   >,serde_json::ser::CompactFormatter> > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/crash_pickup/crash_payload.rs
   Extent: 280 */

longlong pdb_1406406d0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined2 uStack_28;
  longlong *plStack_20;
  
  plVar1 = (longlong *)*param_2;
  lVar2 = plVar1[2];
  if (*plVar1 == lVar2) {
    pdb_142d7f1b0(plVar1,lVar2,1,1,1);
    lVar2 = plVar1[2];
  }
  *(undefined1 *)(plVar1[1] + lVar2) = 0x7b;
  plVar1[2] = lVar2 + 1;
  uStack_28 = 0x100;
  plStack_20 = param_2;
  lVar2 = pdb_14054acf0(&uStack_28,&UNK_142f8b61e,0xe,param_1);
  if (lVar2 == 0) {
    if ((char)uStack_28 == '\x01') {
      lVar2 = pdb_142db9040(&stack0xffffffffffffffe8,0,0);
      return lVar2;
    }
    lVar2 = pdb_140541590(&uStack_28,&UNK_142f8b62c,7,param_1 + 0x20);
    if (((lVar2 == 0) && (lVar2 = 0, (uStack_28 & 1) == 0)) && (uStack_28._1_1_ != '\0')) {
      plVar1 = (longlong *)*plStack_20;
      lVar2 = plVar1[2];
      if (*plVar1 == lVar2) {
        pdb_142d7f1b0(plVar1,lVar2,1,1,1);
        lVar2 = plVar1[2];
      }
      *(undefined1 *)(plVar1[1] + lVar2) = 0x7d;
      plVar1[2] = lVar2 + 1;
      lVar2 = 0;
    }
  }
  return lVar2;
}

