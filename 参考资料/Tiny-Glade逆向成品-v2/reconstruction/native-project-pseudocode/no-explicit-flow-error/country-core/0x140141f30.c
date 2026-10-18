// VA 0x140141f30, PDB extent 1618 bytes
// country_core::render::render_config::_::impl$0::serialize<ref_mut$<ron::ser::Serializer<ref_mut$<alloc::string::String> > > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/render_config.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::render::render_config::_::impl$0::serialize<ref_mut$<ron::ser::Serializer<ref_mut$<alloc::string::String>
   > > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/render_config.rs
   Extent: 1618 */

char * pdb_140141f30(char *param_1,longlong param_2,undefined8 param_3)

{
  uint uVar1;
  int *piVar2;
  longlong lVar3;
  longlong alStack_b8 [2];
  undefined7 uStack_a8;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined1 uStack_60;
  undefined7 uStack_5f;
  undefined1 uStack_58;
  undefined7 uStack_57;
  undefined1 uStack_50;
  undefined7 uStack_4f;
  undefined1 uStack_48;
  undefined7 uStack_47;
  undefined1 uStack_40;
  undefined7 uStack_3f;
  undefined1 uStack_38;
  undefined7 uStack_37;
  undefined1 uStack_29;
  undefined8 uStack_28;
  
  uStack_28 = 0xfffffffffffffffe;
  uVar1 = *(uint *)(param_2 + 0x88);
  pdb_140141220(&uStack_78,param_3,&UNK_142e47cea,0xd,(ulonglong)uVar1 + 0x16);
  if ((char)uStack_78 != '2') {
    uStack_a8 = (undefined7)(CONCAT44(uStack_64,uStack_68) >> 8);
    *(ulonglong *)(param_1 + 0x40) = CONCAT71(uStack_37,uStack_38);
    *(ulonglong *)(param_1 + 0x30) = CONCAT71(uStack_47,uStack_48);
    *(ulonglong *)(param_1 + 0x38) = CONCAT71(uStack_3f,uStack_40);
    *(ulonglong *)(param_1 + 0x20) = CONCAT71(uStack_57,uStack_58);
    *(ulonglong *)(param_1 + 0x28) = CONCAT71(uStack_4f,uStack_50);
    *(ulonglong *)(param_1 + 0x10) = CONCAT71(uStack_a8,(undefined1)uStack_68);
    *(ulonglong *)(param_1 + 0x18) = CONCAT71(uStack_5f,uStack_60);
    *(ulonglong *)(param_1 + 1) =
         CONCAT17((undefined1)uStack_70,CONCAT43(uStack_74,uStack_78._1_3_));
    *(ulonglong *)(param_1 + 9) =
         CONCAT17((undefined1)uStack_68,CONCAT43(uStack_6c,uStack_70._1_3_));
    *param_1 = (char)uStack_78;
    return param_1;
  }
  uStack_88 = CONCAT71(uStack_5f,uStack_60);
  uStack_98 = uStack_70;
  uStack_94 = uStack_6c;
  uStack_90 = uStack_68;
  uStack_8c = uStack_64;
  uStack_29 = 1;
  pdb_14012f0d0(&uStack_78,&uStack_98,&UNK_142e47cf7,7,param_2 + 0x90);
  if ((char)uStack_78 == '2') {
    uStack_29 = 1;
    pdb_1401350a0(&uStack_78,&uStack_98,&UNK_142e47cfe,7,param_2 + 0x38);
    if ((char)uStack_78 == '2') {
      if ((char)uVar1 != '\0') {
        alStack_b8[0] = param_2 + 0x88;
        uStack_29 = 1;
        pdb_140139f60(&uStack_78,&uStack_98,&UNK_142e47d05,0x16,alStack_b8);
        if ((char)uStack_78 != '2') goto LAB_1401424e6;
      }
      uStack_29 = 1;
      pdb_140136960(&uStack_78,&uStack_98,&UNK_142e47d1b,0xc,param_2 + 0xaa);
      if ((char)uStack_78 == '2') {
        uStack_29 = 1;
        pdb_140136960(&uStack_78,&uStack_98,&UNK_142e47d27,0x16,param_2 + 0xab);
        if ((char)uStack_78 == '2') {
          uStack_29 = 1;
          pdb_140136960(&uStack_78,&uStack_98,&UNK_142e47d3d,10,param_2 + 0xac);
          if ((char)uStack_78 == '2') {
            uStack_29 = 1;
            pdb_140136960(&uStack_78,&uStack_98,&UNK_142e47d47,0x14,param_2 + 0xad);
            if ((char)uStack_78 == '2') {
              uStack_29 = 1;
              pdb_140130a60(&uStack_78,&uStack_98,&UNK_142e47d5b,0xe,param_2 + 0xc5);
              if ((char)uStack_78 == '2') {
                uStack_29 = 1;
                pdb_14013b850(&uStack_78,&uStack_98,&UNK_142e47d69,0x10,param_2 + 0xc6);
                if ((char)uStack_78 == '2') {
                  uStack_29 = 1;
                  pdb_140133580(&uStack_78,&uStack_98,&UNK_142e47d79,9,param_2 + 0x94);
                  if ((char)uStack_78 == '2') {
                    uStack_29 = 1;
                    pdb_140133580(&uStack_78,&uStack_98,&UNK_142e47d82,7,param_2 + 0x98);
                    if ((char)uStack_78 == '2') {
                      uStack_29 = 1;
                      pdb_140133580(&uStack_78,&uStack_98,&UNK_142e47d89,0x10,param_2 + 0x9c);
                      if ((char)uStack_78 == '2') {
                        uStack_29 = 1;
                        pdb_140133580(&uStack_78,&uStack_98,&UNK_142e47d99,0xb,param_2 + 0xa0);
                        if ((char)uStack_78 == '2') {
                          uStack_29 = 1;
                          pdb_14013e6d0(&uStack_78,&uStack_98,&UNK_142e47da4,0x1b,param_2);
                          if ((char)uStack_78 == '2') {
                            uStack_29 = 1;
                            pdb_14013c4b0(&uStack_78,&uStack_98,&UNK_142e47dbf,0x14,param_2 + 0xae);
                            if ((char)uStack_78 == '2') {
                              uStack_29 = 1;
                              pdb_140136960(&uStack_78,&uStack_98,&UNK_142e47dd3,0x13,param_2 + 0xbf
                                           );
                              if ((char)uStack_78 == '2') {
                                uStack_29 = 1;
                                pdb_140136960(&uStack_78,&uStack_98,&UNK_142e47de6,0xd,
                                              param_2 + 0xc0);
                                if ((char)uStack_78 == '2') {
                                  uStack_29 = 1;
                                  pdb_140136960(&uStack_78,&uStack_98,&UNK_142e47df3,0x19,
                                                param_2 + 0xc1);
                                  if ((char)uStack_78 == '2') {
                                    uStack_29 = 1;
                                    pdb_140136960(&uStack_78,&uStack_98,&UNK_142e47e0c,0x13,
                                                  param_2 + 0xc2);
                                    if ((char)uStack_78 == '2') {
                                      uStack_29 = 1;
                                      pdb_140136960(&uStack_78,&uStack_98,&UNK_142e47e1f,0x10,
                                                    param_2 + 0xc3);
                                      if ((char)uStack_78 == '2') {
                                        uStack_29 = 1;
                                        pdb_140136960(&uStack_78,&uStack_98,&UNK_142e47e2f,0x12,
                                                      param_2 + 0xc4);
                                        if ((char)uStack_78 == '2') {
                                          uStack_29 = 1;
                                          pdb_140128380(&uStack_78,&uStack_98,&UNK_142e47e41,0x16,
                                                        param_2 + 0x18);
                                          if ((char)uStack_78 == '2') {
                                            uStack_29 = 1;
                                            pdb_140128fe0(&uStack_78,&uStack_98,&UNK_142e47e57,0xb,
                                                          param_2 + 0xa4);
                                            if ((char)uStack_78 == '2') {
                                              uStack_68 = (undefined4)uStack_88;
                                              uStack_64 = (undefined4)((ulonglong)uStack_88 >> 0x20)
                                              ;
                                              uStack_78 = uStack_98;
                                              uStack_74 = uStack_94;
                                              uStack_70 = uStack_90;
                                              uStack_6c = uStack_8c;
                                              uStack_29 = 0;
                                              pdb_140140500(param_1,&uStack_78);
                                              return param_1;
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
            }
          }
        }
      }
    }
  }
LAB_1401424e6:
  *(ulonglong *)(param_1 + 0x40) = CONCAT71(uStack_37,uStack_38);
  *(ulonglong *)(param_1 + 0x31) = CONCAT17(uStack_40,uStack_47);
  *(ulonglong *)(param_1 + 0x39) = CONCAT17(uStack_38,uStack_3f);
  *(ulonglong *)(param_1 + 0x21) = CONCAT17(uStack_50,uStack_57);
  *(ulonglong *)(param_1 + 0x29) = CONCAT17(uStack_48,uStack_4f);
  *(ulonglong *)(param_1 + 0x11) = CONCAT17(uStack_60,CONCAT43(uStack_64,uStack_68._1_3_));
  *(ulonglong *)(param_1 + 0x19) = CONCAT17(uStack_58,uStack_5f);
  *(ulonglong *)(param_1 + 1) = CONCAT17((undefined1)uStack_70,CONCAT43(uStack_74,uStack_78._1_3_));
  *(ulonglong *)(param_1 + 9) = CONCAT17((undefined1)uStack_68,CONCAT43(uStack_6c,uStack_70._1_3_));
  *param_1 = (char)uStack_78;
  piVar2 = (int *)CONCAT44(uStack_8c,uStack_90);
  if (*piVar2 == 1) {
    lVar3 = -1;
    if (*(longlong *)(piVar2 + 2) + 1 != 0) {
      lVar3 = *(longlong *)(piVar2 + 2) + 1;
    }
    *(longlong *)(piVar2 + 2) = lVar3;
  }
  return param_1;
}

