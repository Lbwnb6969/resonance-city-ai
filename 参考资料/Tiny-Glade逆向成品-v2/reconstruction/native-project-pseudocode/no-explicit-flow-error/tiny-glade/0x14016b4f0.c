// VA 0x14016b4f0, PDB extent 488 bytes
// tiny_glade::asset_usage_snapshot::_::impl$0::serialize<ref_mut$<serde_json::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global> >,serde_json::ser::PrettyFormatter> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/asset_usage_snapshot.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   tiny_glade::asset_usage_snapshot::_::impl$0::serialize<ref_mut$<serde_json::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global>
   >,serde_json::ser::PrettyFormatter> > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/asset_usage_snapshot.rs
   Extent: 488 */

longlong pdb_14016b4f0(longlong param_1,longlong *param_2)

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
  lVar2 = pdb_1405425b0(&uStack_38,&UNK_142e4ed2d,4,param_1 + 0x30);
  if (lVar2 != 0) {
    return lVar2;
  }
  if ((char)uStack_38 == '\0') {
    lVar2 = pdb_140543850(&uStack_38,&UNK_142e4ed31,0xd,param_1 + 0x40);
    if (lVar2 != 0) {
      return lVar2;
    }
    if ((char)uStack_38 == '\0') {
      lVar2 = pdb_140543850(&uStack_38,&UNK_142e4ed3e,0x16,param_1 + 0x48);
      if (lVar2 != 0) {
        return lVar2;
      }
      if ((char)uStack_38 == '\0') {
        lVar2 = pdb_140543850(&uStack_38,&UNK_142e4ed54,0x1c,param_1 + 0x50);
        if (lVar2 != 0) {
          return lVar2;
        }
        if ((char)uStack_38 == '\0') {
          lVar2 = pdb_140543850(&uStack_38,&UNK_142e4ed70,10,param_1 + 0x58);
          if (lVar2 != 0) {
            return lVar2;
          }
          if ((char)uStack_38 == '\0') {
            lVar2 = pdb_140543850(&uStack_38,&UNK_142e4ed7a,0x13,param_1 + 0x60);
            if (lVar2 != 0) {
              return lVar2;
            }
            if ((char)uStack_38 == '\0') {
              lVar2 = pdb_140543850(&uStack_38,&UNK_142e4ed8d,0x19,param_1 + 0x68);
              if (lVar2 != 0) {
                return lVar2;
              }
              lVar2 = pdb_14016d370(&uStack_38,param_1);
              if (lVar2 != 0) {
                return lVar2;
              }
              lVar2 = pdb_14016d390(&uStack_38,param_1 + 0x18);
              if (lVar2 != 0) {
                return lVar2;
              }
              uStack_28 = uStack_38;
              uStack_24 = uStack_34;
              uStack_20 = (undefined4)uStack_30;
              uStack_1c = uStack_30._4_4_;
              pdb_1400bdf40(&uStack_28);
              return 0;
            }
          }
        }
      }
    }
  }
  lVar2 = pdb_142db8610();
  return lVar2;
}

