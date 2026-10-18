// VA 0x140341580, PDB extent 270 bytes
// tiny_glade::tgsr_capture::_::impl$0::serialize<ref_mut$<serde_json::ser::Serializer<ref_mut$<tempfile::file::NamedTempFile<std::fs::File> >,serde_json::ser::CompactFormatter> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/tgsr_capture.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   tiny_glade::tgsr_capture::_::impl$0::serialize<ref_mut$<serde_json::ser::Serializer<ref_mut$<tempfile::file::NamedTempFile<std::fs::File>
   >,serde_json::ser::CompactFormatter> > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/tgsr_capture.rs
   Extent: 270 */

byte * pdb_140341580(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  byte *pbVar2;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 *puStack_18;
  
  lVar1 = pdb_140117010(*param_2,&UNK_142f3ead1,1);
  if (lVar1 != 0) {
    uStack_20 = 0;
    puStack_18 = (undefined8 *)0x0;
    pdb_14007ee60();
    pbVar2 = pub_1406abab0(0x28,8);
    if (pbVar2 != (byte *)0x0) {
      *(undefined8 **)(pbVar2 + 0x20) = puStack_18;
      *(undefined8 *)(pbVar2 + 0x10) = uStack_28;
      *(ulonglong *)(pbVar2 + 0x18) = uStack_20;
      pbVar2[0] = 1;
      pbVar2[1] = 0;
      pbVar2[2] = 0;
      pbVar2[3] = 0;
      pbVar2[4] = 0;
      pbVar2[5] = 0;
      pbVar2[6] = 0;
      pbVar2[7] = 0;
      *(longlong *)(pbVar2 + 8) = lVar1;
      return pbVar2;
    }
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,0x28);
  }
  uStack_20 = CONCAT62(uStack_20._2_6_,0x100);
  puStack_18 = param_2;
  pbVar2 = (byte *)pdb_14053fee0(&uStack_20,&UNK_142f3ebb3,4,param_1);
  if (pbVar2 == (byte *)0x0) {
    if ((char)uStack_20 == '\x01') {
LAB_1403415e3:
      puStack_18 = (undefined8 *)0xa;
      pbVar2 = (byte *)pdb_142db9040(&puStack_18,0,0);
      return pbVar2;
    }
    pbVar2 = (byte *)pdb_14053fee0(&uStack_20,&UNK_142f3ebb7,6,param_1 + 0x10);
    if (pbVar2 == (byte *)0x0) {
      if ((char)uStack_20 == '\x01') goto LAB_1403415e3;
      pbVar2 = (byte *)pdb_14054c1a0(&uStack_20,&UNK_142f3ebbd,4,param_1 + 0x20);
      if (((pbVar2 == (byte *)0x0) && (pbVar2 = (byte *)0x0, (uStack_20 & 1) == 0)) &&
         (uStack_20._1_1_ != '\0')) {
        lVar1 = pdb_140117010(*puStack_18,&UNK_142f3ead0,1);
        if (lVar1 == 0) {
          return (byte *)0x0;
        }
        pbVar2 = (byte *)pdb_142db8fb0(lVar1);
        return pbVar2;
      }
    }
  }
  return pbVar2;
}

