// VA 0x140485570, PDB extent 401 bytes
// country_core::input::input_stream::_::impl$0::serialize<ref_mut$<serde_json::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global> >,serde_json::ser::CompactFormatter> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/input/input_stream.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::input::input_stream::_::impl$0::serialize<ref_mut$<serde_json::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global>
   >,serde_json::ser::CompactFormatter> > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/input/input_stream.rs
   Extent: 401 */

longlong pdb_140485570(longlong param_1,longlong *param_2)

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
  lVar2 = pdb_14054c7e0(&uStack_28,&UNK_142f5d7cf,0xb,param_1 + 0x40);
  if (lVar2 == 0) {
    if ((char)uStack_28 != '\0') {
LAB_1404855d4:
      lVar2 = pdb_142db9040(&stack0xffffffffffffffe8,0,0);
      return lVar2;
    }
    lVar2 = pdb_1405432b0(&uStack_28,&UNK_142f5d7da,0xc,param_1 + 0x48);
    if (lVar2 == 0) {
      if ((char)uStack_28 != '\0') goto LAB_1404855d4;
      lVar2 = pdb_140548740(&uStack_28,&UNK_142f5d7e6,0xd,param_1 + 0x4c);
      if (lVar2 == 0) {
        if ((char)uStack_28 != '\0') goto LAB_1404855d4;
        lVar2 = pdb_140548740(&uStack_28,&UNK_142f5d7f3,0xd,param_1 + 0x58);
        if (lVar2 == 0) {
          lVar2 = pdb_1404861d0(&uStack_28,param_1 + 0x30);
          if (lVar2 == 0) {
            lVar2 = pdb_1404861f0(&uStack_28,param_1);
            if (lVar2 == 0) {
              lVar2 = pdb_1404861b0(&uStack_28,param_1 + 0x18);
              if (((lVar2 == 0) && (lVar2 = 0, (uStack_28 & 1) == 0)) && (uStack_28._1_1_ != '\0'))
              {
                pdb_140172c20(*plStack_20,&UNK_142f5d74c,1);
                lVar2 = 0;
              }
            }
          }
        }
      }
    }
  }
  return lVar2;
}

