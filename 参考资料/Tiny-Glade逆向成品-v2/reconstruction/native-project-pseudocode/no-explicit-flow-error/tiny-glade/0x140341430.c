// VA 0x140341430, PDB extent 334 bytes
// tiny_glade::tgsr_capture::_::impl$0::serialize<ref_mut$<serde_json::ser::Serializer<ref_mut$<tempfile::file::NamedTempFile<std::fs::File> >,serde_json::ser::CompactFormatter> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/tgsr_capture.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   tiny_glade::tgsr_capture::_::impl$0::serialize<ref_mut$<serde_json::ser::Serializer<ref_mut$<tempfile::file::NamedTempFile<std::fs::File>
   >,serde_json::ser::CompactFormatter> > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/tgsr_capture.rs
   Extent: 334 */

void pdb_140341430(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  byte *pbVar2;
  undefined8 uStack_38;
  undefined8 *puStack_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 *puStack_20;
  undefined8 uStack_18;
  
  puStack_30 = (undefined8 *)pdb_140117010(*param_2,&UNK_142f3ead1,1);
  if (puStack_30 != (undefined8 *)0x0) {
    uStack_38 = 1;
    puStack_20 = (undefined8 *)0x0;
    uStack_18 = 0;
    pdb_14007ee60();
    pbVar2 = pub_1406abab0(0x28,8);
    if (pbVar2 != (byte *)0x0) {
      *(undefined8 *)(pbVar2 + 0x20) = uStack_18;
      *(ulonglong *)(pbVar2 + 0x10) = CONCAT44(uStack_24,uStack_28);
      *(undefined8 **)(pbVar2 + 0x18) = puStack_20;
      *(undefined8 *)pbVar2 = uStack_38;
      *(undefined8 **)(pbVar2 + 8) = puStack_30;
      return;
    }
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,0x28);
  }
  uStack_38 = CONCAT62(uStack_38._2_6_,0x100);
  puStack_30 = param_2;
  lVar1 = pdb_140548c20(&uStack_38,&UNK_142f3eb79,8,param_1 + 0xc0);
  if (lVar1 == 0) {
    if ((char)uStack_38 == '\x01') {
      uStack_18 = 10;
      pdb_142db9040(&uStack_18,0,0);
      return;
    }
    lVar1 = pdb_140543000(&uStack_38,&UNK_142f3eb81,0xd,param_1);
    if (lVar1 == 0) {
      if ((char)uStack_38 == '\x01') {
LAB_1403414c8:
        pdb_142db8610();
        return;
      }
      lVar1 = pdb_140543000(&uStack_38,&UNK_142f3eb8e,0xc,param_1 + 0x40);
      if (lVar1 == 0) {
        if ((char)uStack_38 == '\x01') goto LAB_1403414c8;
        lVar1 = pdb_140543000(&uStack_38,&UNK_142f3eb9a,0x11,param_1 + 0x80);
        if (lVar1 == 0) {
          if ((char)uStack_38 == '\x01') goto LAB_1403414c8;
          lVar1 = pdb_140547820(&uStack_38,&UNK_142f3ebab,8,param_1 + 200);
          if (lVar1 == 0) {
            uStack_28 = (undefined4)uStack_38;
            uStack_24 = uStack_38._4_4_;
            puStack_20 = puStack_30;
            pdb_1403435d0(&uStack_28);
            return;
          }
        }
      }
    }
  }
  return;
}

