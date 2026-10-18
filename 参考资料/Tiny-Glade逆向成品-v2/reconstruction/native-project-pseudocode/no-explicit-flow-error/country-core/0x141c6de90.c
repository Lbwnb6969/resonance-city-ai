// VA 0x141c6de90, PDB extent 379 bytes
// country_core::input::input_stream::_::impl$0::serialize<ref_mut$<serde_json::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global> >,serde_json::ser::PrettyFormatter> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/input/input_stream.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::input::input_stream::_::impl$0::serialize<ref_mut$<serde_json::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global>
   >,serde_json::ser::PrettyFormatter> > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/input/input_stream.rs
   Extent: 379 */

longlong pdb_141c6de90(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  plVar1 = (longlong *)*param_2;
  param_2[3] = param_2[3] + 1;
  *(undefined1 *)(param_2 + 4) = 0;
  lVar2 = plVar1[2];
  if (*plVar1 == lVar2) {
    pdb_142d7f1b0(plVar1,lVar2,1,1,1);
    lVar2 = plVar1[2];
  }
  *(undefined1 *)(plVar1[1] + lVar2) = 0x7b;
  plVar1[2] = lVar2 + 1;
  uStack_38 = CONCAT22(uStack_38._2_2_,0x100);
  uStack_30 = param_2;
  lVar2 = pdb_141b7bb90(&uStack_38,&UNK_1433a3275,0xb,param_1 + 0x40);
  if (lVar2 == 0) {
    if ((char)uStack_38 != '\0') {
LAB_141c6defc:
      lVar2 = pdb_142db9040(&stack0xffffffffffffffe8,0,0);
      return lVar2;
    }
    lVar2 = pdb_141b80db0(&uStack_38,&UNK_1433a3280,0xc,param_1 + 0x48);
    if (lVar2 == 0) {
      if ((char)uStack_38 != '\0') goto LAB_141c6defc;
      lVar2 = pdb_141b80890(&uStack_38,&UNK_1433a328c,0xd,param_1 + 0x4c);
      if (lVar2 == 0) {
        if ((char)uStack_38 != '\0') goto LAB_141c6defc;
        lVar2 = pdb_141b80890(&uStack_38,&UNK_1433a3299,0xd,param_1 + 0x58);
        if (lVar2 == 0) {
          lVar2 = pdb_141c70540(&uStack_38,param_1 + 0x30);
          if (lVar2 == 0) {
            lVar2 = pdb_141c70520(&uStack_38,param_1);
            if (lVar2 == 0) {
              lVar2 = pdb_141c70560(&uStack_38,param_1 + 0x18);
              if (lVar2 == 0) {
                uStack_28 = uStack_38;
                uStack_24 = uStack_34;
                uStack_20 = (undefined4)uStack_30;
                uStack_1c = uStack_30._4_4_;
                pdb_1400bdf40(&uStack_28);
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

