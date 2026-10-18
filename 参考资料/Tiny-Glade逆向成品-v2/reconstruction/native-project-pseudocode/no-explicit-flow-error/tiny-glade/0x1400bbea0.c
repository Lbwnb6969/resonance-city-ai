// VA 0x1400bbea0, PDB extent 608 bytes
// tiny_glade::vram_snapshot::_::impl$0::serialize<ref_mut$<serde_json::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global> >,serde_json::ser::PrettyFormatter> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/vram_snapshot.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   tiny_glade::vram_snapshot::_::impl$0::serialize<ref_mut$<serde_json::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global>
   >,serde_json::ser::PrettyFormatter> > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/vram_snapshot.rs
   Extent: 608 */

longlong pdb_1400bbea0(longlong param_1,longlong *param_2)

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
  lVar2 = pdb_1405425b0(&uStack_38,&UNK_142e3c072,4,param_1 + 0x30);
  if (lVar2 != 0) {
    return lVar2;
  }
  if ((char)uStack_38 == '\0') {
    lVar2 = pdb_140543850(&uStack_38,&UNK_142e3c076,0x1f,param_1 + 0x40);
    if (lVar2 != 0) {
      return lVar2;
    }
    if ((char)uStack_38 == '\0') {
      lVar2 = pdb_140543850(&uStack_38,&UNK_142e3c095,0x20,param_1 + 0x48);
      if (lVar2 != 0) {
        return lVar2;
      }
      if ((char)uStack_38 == '\0') {
        lVar2 = pdb_140543850(&uStack_38,&UNK_142e3c0b5,0x13,param_1 + 0x50);
        if (lVar2 != 0) {
          return lVar2;
        }
        if ((char)uStack_38 == '\0') {
          lVar2 = pdb_140543850(&uStack_38,&UNK_142e3c0c8,0x15,param_1 + 0x58);
          if (lVar2 != 0) {
            return lVar2;
          }
          if ((char)uStack_38 == '\0') {
            lVar2 = pdb_140543850(&uStack_38,&UNK_142e3c0dd,0x14,param_1 + 0x60);
            if (lVar2 != 0) {
              return lVar2;
            }
            if ((char)uStack_38 == '\0') {
              lVar2 = pdb_140543850(&uStack_38,&UNK_142e3c0f1,0x1b,param_1 + 0x68);
              if (lVar2 != 0) {
                return lVar2;
              }
              if ((char)uStack_38 == '\0') {
                lVar2 = pdb_140543850(&uStack_38,&UNK_142e3c10c,0x18,param_1 + 0x70);
                if (lVar2 != 0) {
                  return lVar2;
                }
                if ((char)uStack_38 == '\0') {
                  lVar2 = pdb_140543850(&uStack_38,&UNK_142e3c124,0x12,param_1 + 0x78);
                  if (lVar2 != 0) {
                    return lVar2;
                  }
                  lVar2 = pdb_1400bdf20(&uStack_38,param_1 + 0x80);
                  if (lVar2 != 0) {
                    return lVar2;
                  }
                  lVar2 = pdb_1400bdf00(&uStack_38,param_1);
                  if (lVar2 != 0) {
                    return lVar2;
                  }
                  lVar2 = pdb_1400bdee0(&uStack_38,param_1 + 0x18);
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
    }
  }
  lVar2 = pdb_142db8610();
  return lVar2;
}

