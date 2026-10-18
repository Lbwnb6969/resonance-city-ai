// VA 0x140341110, PDB extent 796 bytes
// tiny_glade::tgsr_capture::_::impl$0::serialize<ref_mut$<serde_json::ser::Serializer<ref_mut$<tempfile::file::NamedTempFile<std::fs::File> >,serde_json::ser::CompactFormatter> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/tgsr_capture.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   tiny_glade::tgsr_capture::_::impl$0::serialize<ref_mut$<serde_json::ser::Serializer<ref_mut$<tempfile::file::NamedTempFile<std::fs::File>
   >,serde_json::ser::CompactFormatter> > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/tgsr_capture.rs
   Extent: 796 */

void pdb_140341110(longlong param_1,undefined8 *param_2)

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
  lVar1 = pdb_140546fb0(&uStack_38,&UNK_142f3ead2,7,param_1 + 0x68);
  if (lVar1 == 0) {
    if ((char)uStack_38 == '\x01') {
LAB_140341174:
      pdb_142db8610();
      return;
    }
    lVar1 = pdb_14054dd60(&uStack_38,&UNK_142f3ead9,7,param_1);
    if (lVar1 == 0) {
      if ((char)uStack_38 == '\x01') goto LAB_140341174;
      lVar1 = pdb_140546fb0(&uStack_38,&UNK_142f3eae0,0xb,param_1 + 0x6c);
      if (lVar1 == 0) {
        if ((char)uStack_38 == '\x01') goto LAB_140341174;
        lVar1 = pdb_140546fb0(&uStack_38,&UNK_142f3eaeb,10,param_1 + 0x70);
        if (lVar1 == 0) {
          if ((char)uStack_38 == '\x01') goto LAB_140341174;
          lVar1 = pdb_140546fb0(&uStack_38,&UNK_142f3eaf5,10,param_1 + 0x74);
          if (lVar1 == 0) {
            if ((char)uStack_38 == '\x01') goto LAB_140341174;
            lVar1 = pdb_140547820(&uStack_38,&UNK_142f3eaff,5,param_1 + 0x78);
            if (lVar1 == 0) {
              if ((char)uStack_38 == '\x01') goto LAB_140341174;
              lVar1 = pdb_140546fb0(&uStack_38,&UNK_142f3eb04,4,param_1 + 0x7c);
              if (lVar1 == 0) {
                if ((char)uStack_38 == '\x01') goto LAB_140341174;
                lVar1 = pdb_140546fb0(&uStack_38,&UNK_142f3eb08,1,param_1 + 0x80);
                if (lVar1 == 0) {
                  if ((char)uStack_38 == '\x01') goto LAB_140341174;
                  lVar1 = pdb_140546fb0(&uStack_38,&UNK_142f3eb09,0xb,param_1 + 0x84);
                  if (lVar1 == 0) {
                    if ((char)uStack_38 == '\x01') goto LAB_140341174;
                    lVar1 = pdb_14054c1a0(&uStack_38,&UNK_142f3eb14,0xd,param_1 + 0x50);
                    if (lVar1 == 0) {
                      if ((char)uStack_38 == '\x01') goto LAB_140341174;
                      lVar1 = pdb_14054c1a0(&uStack_38,&UNK_142f3eb21,0x11,param_1 + 0x58);
                      if (lVar1 == 0) {
                        if ((char)uStack_38 == '\x01') goto LAB_140341174;
                        lVar1 = pdb_14054c1a0(&uStack_38,&UNK_142f3eb32,0x14,param_1 + 0x60);
                        if (lVar1 == 0) {
                          lVar1 = pdb_1403435b0(&uStack_38,param_1 + 0x88);
                          if (lVar1 == 0) {
                            if ((char)uStack_38 == '\x01') goto LAB_140341174;
                            lVar1 = pdb_14053fee0(&uStack_38,&UNK_142f3eb5c,0xd,param_1 + 0x30);
                            if (lVar1 == 0) {
                              if ((char)uStack_38 == '\x01') goto LAB_140341174;
                              lVar1 = pdb_14053fee0(&uStack_38,&UNK_142f3eb69,10,param_1 + 0x40);
                              if (lVar1 == 0) {
                                lVar1 = pdb_140343590(&uStack_38,param_1 + 0x18);
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
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}

