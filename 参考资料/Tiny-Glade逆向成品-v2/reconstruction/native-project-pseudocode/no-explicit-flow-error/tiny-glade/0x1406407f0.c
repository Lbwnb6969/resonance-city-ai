// VA 0x1406407f0, PDB extent 582 bytes
// tiny_glade::crash_pickup::crash_payload::_::impl$0::serialize<ref_mut$<serde_json::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global> >,serde_json::ser::CompactFormatter> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/crash_pickup/crash_payload.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   tiny_glade::crash_pickup::crash_payload::_::impl$0::serialize<ref_mut$<serde_json::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global>
   >,serde_json::ser::CompactFormatter> > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/crash_pickup/crash_payload.rs
   Extent: 582 */

longlong pdb_1406407f0(longlong param_1,longlong *param_2)

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
  lVar2 = pdb_14054a7d0(&uStack_28,&UNK_142f8b666,0xb,param_1);
  if (lVar2 == 0) {
    if ((char)uStack_28 != '\0') {
LAB_140640853:
      lVar2 = pdb_142db9040(&stack0xffffffffffffffe8,0,0);
      return lVar2;
    }
    lVar2 = pdb_140549a70(&uStack_28,&UNK_142f8b671,0xd,param_1 + 0x18);
    if (lVar2 == 0) {
      if ((char)uStack_28 != '\0') goto LAB_140640853;
      lVar2 = pdb_140549a70(&uStack_28,&UNK_142f8b67e,10,param_1 + 0x38);
      if (lVar2 == 0) {
        if ((char)uStack_28 != '\0') goto LAB_140640853;
        lVar2 = pdb_1405428e0(&uStack_28,&UNK_142f8b688,4,param_1 + 0x58);
        if (lVar2 == 0) {
          if ((char)uStack_28 != '\0') goto LAB_140640853;
          lVar2 = pdb_140549a70(&uStack_28,&UNK_142f8b68c,6,param_1 + 0x168);
          if (lVar2 == 0) {
            if ((char)uStack_28 != '\0') goto LAB_140640853;
            lVar2 = pdb_140549a70(&uStack_28,&UNK_142f8b692,3,param_1 + 0x188);
            if (lVar2 == 0) {
              if ((char)uStack_28 != '\0') goto LAB_140640853;
              lVar2 = pdb_140549a70(&uStack_28,&UNK_142f8b695,7,param_1 + 0x1a8);
              if (lVar2 == 0) {
                if ((char)uStack_28 != '\0') goto LAB_140640853;
                lVar2 = pdb_140549a70(&uStack_28,&UNK_142f8b69c,8,param_1 + 0x1c8);
                if (lVar2 == 0) {
                  if ((char)uStack_28 != '\0') goto LAB_140640853;
                  lVar2 = pdb_140549a70(&uStack_28,&UNK_142f8b6a4,0xe,param_1 + 0x1e8);
                  if (((lVar2 == 0) && (lVar2 = 0, (uStack_28 & 1) == 0)) &&
                     (uStack_28._1_1_ != '\0')) {
                    pdb_140172c20(*plStack_20,&UNK_142f8b610,1);
                    lVar2 = 0;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return lVar2;
}

