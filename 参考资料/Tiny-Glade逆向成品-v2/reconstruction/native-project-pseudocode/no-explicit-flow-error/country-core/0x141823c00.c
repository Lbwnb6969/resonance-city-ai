// VA 0x141823c00, PDB extent 2576 bytes
// country_core::game_key_bindings::_::impl$0::serialize<ref_mut$<ron::ser::Serializer<ref_mut$<alloc::string::String> > > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/game_key_bindings.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::game_key_bindings::_::impl$0::serialize<ref_mut$<ron::ser::Serializer<ref_mut$<alloc::string::String>
   > > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/game_key_bindings.rs
   Extent: 2576 */

char * pdb_141823c00(char *param_1,longlong param_2,undefined8 param_3)

{
  int *piVar1;
  longlong lVar2;
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
  undefined1 uStack_21;
  undefined8 uStack_20;
  
  uStack_20 = 0xfffffffffffffffe;
  pdb_1424fc620(&uStack_78,param_3,&UNK_143340348,0xb,0x29);
  if ((char)uStack_78 == '2') {
    uStack_88 = CONCAT71(uStack_5f,uStack_60);
    uStack_98 = uStack_70;
    uStack_94 = uStack_6c;
    uStack_90 = uStack_68;
    uStack_8c = uStack_64;
    uStack_21 = 1;
    pdb_1424f6a80(&uStack_78,&uStack_98,&UNK_143340353,0xc,param_2);
    if ((char)uStack_78 == '2') {
      uStack_21 = 1;
      pdb_1424f6a80(&uStack_78,&uStack_98,&UNK_14334035f,9,param_2 + 0x18);
      if ((char)uStack_78 == '2') {
        uStack_21 = 1;
        pdb_1424f6a80(&uStack_78,&uStack_98,&UNK_143340368,9,param_2 + 0x30);
        if ((char)uStack_78 == '2') {
          uStack_21 = 1;
          pdb_1424f6a80(&uStack_78,&uStack_98,&UNK_143340371,10,param_2 + 0x48);
          if ((char)uStack_78 == '2') {
            uStack_21 = 1;
            pdb_1424f6a80(&uStack_78,&uStack_98,&UNK_14334037b,7,param_2 + 0x60);
            if ((char)uStack_78 == '2') {
              uStack_21 = 1;
              pdb_1424f6a80(&uStack_78,&uStack_98,&UNK_143340382,9,param_2 + 0x78);
              if ((char)uStack_78 == '2') {
                uStack_21 = 1;
                pdb_1424f6a80(&uStack_78,&uStack_98,&UNK_14334038b,0xb,param_2 + 0x90);
                if ((char)uStack_78 == '2') {
                  uStack_21 = 1;
                  pdb_1424f6a80(&uStack_78,&uStack_98,&UNK_143340396,0xc,param_2 + 0xa8);
                  if ((char)uStack_78 == '2') {
                    uStack_21 = 1;
                    pdb_1424f6a80(&uStack_78,&uStack_98,&UNK_1433403a2,0x12,param_2 + 0xc0);
                    if ((char)uStack_78 == '2') {
                      uStack_21 = 1;
                      pdb_1424f6a80(&uStack_78,&uStack_98,&UNK_1433403b4,0xf,param_2 + 0xd8);
                      if ((char)uStack_78 == '2') {
                        uStack_21 = 1;
                        pdb_1424f6a80(&uStack_78,&uStack_98,&UNK_1433403c3,7,param_2 + 0xf0);
                        if ((char)uStack_78 == '2') {
                          uStack_21 = 1;
                          pdb_1424f6a80(&uStack_78,&uStack_98,&UNK_1433403ca,8,param_2 + 0x108);
                          if ((char)uStack_78 == '2') {
                            uStack_21 = 1;
                            pdb_1424f6a80(&uStack_78,&uStack_98,&UNK_1433403d2,8,param_2 + 0x120);
                            if ((char)uStack_78 == '2') {
                              uStack_21 = 1;
                              pdb_1424f6a80(&uStack_78,&uStack_98,&UNK_1433403da,4,param_2 + 0x138);
                              if ((char)uStack_78 == '2') {
                                uStack_21 = 1;
                                pdb_1424f6a80(&uStack_78,&uStack_98,&UNK_1433403de,10,
                                              param_2 + 0x150);
                                if ((char)uStack_78 == '2') {
                                  uStack_21 = 1;
                                  pdb_1424f6a80(&uStack_78,&uStack_98,&UNK_1433403e8,9,
                                                param_2 + 0x168);
                                  if ((char)uStack_78 == '2') {
                                    uStack_21 = 1;
                                    pdb_1424f6a80(&uStack_78,&uStack_98,&UNK_1433403f1,6,
                                                  param_2 + 0x180);
                                    if ((char)uStack_78 == '2') {
                                      uStack_21 = 1;
                                      pdb_1424f6a80(&uStack_78,&uStack_98,&UNK_1433403f7,7,
                                                    param_2 + 0x198);
                                      if ((char)uStack_78 == '2') {
                                        uStack_21 = 1;
                                        pdb_1424f6a80(&uStack_78,&uStack_98,&UNK_1433403fe,6,
                                                      param_2 + 0x1b0);
                                        if ((char)uStack_78 == '2') {
                                          uStack_21 = 1;
                                          pdb_1424f6a80(&uStack_78,&uStack_98,&UNK_143340404,4,
                                                        param_2 + 0x1c8);
                                          if ((char)uStack_78 == '2') {
                                            uStack_21 = 1;
                                            pdb_1424f6a80(&uStack_78,&uStack_98,&UNK_143340408,5,
                                                          param_2 + 0x1e0);
                                            if ((char)uStack_78 == '2') {
                                              uStack_21 = 1;
                                              pdb_1424f6a80(&uStack_78,&uStack_98,&UNK_14334040d,9,
                                                            param_2 + 0x1f8);
                                              if ((char)uStack_78 == '2') {
                                                uStack_21 = 1;
                                                pdb_1424f6a80(&uStack_78,&uStack_98,&UNK_143340416,
                                                              0xb,param_2 + 0x210);
                                                if ((char)uStack_78 == '2') {
                                                  uStack_21 = 1;
                                                  pdb_1424f6a80(&uStack_78,&uStack_98,&UNK_143340421
                                                                ,4,param_2 + 0x228);
                                                  if ((char)uStack_78 == '2') {
                                                    uStack_21 = 1;
                                                    pdb_1424f6a80(&uStack_78,&uStack_98,
                                                                  &UNK_143340425,4,param_2 + 0x240);
                                                    if ((char)uStack_78 == '2') {
                                                      uStack_21 = 1;
                                                      pdb_1424f6a80(&uStack_78,&uStack_98,
                                                                    &UNK_143340429,6,param_2 + 600);
                                                      if ((char)uStack_78 == '2') {
                                                        uStack_21 = 1;
                                                        pdb_1424f6a80(&uStack_78,&uStack_98,
                                                                      &UNK_14334042f,10,
                                                                      param_2 + 0x270);
                                                        if ((char)uStack_78 == '2') {
                                                          uStack_21 = 1;
                                                          pdb_1424f6a80(&uStack_78,&uStack_98,
                                                                        &UNK_143340439,0x10,
                                                                        param_2 + 0x288);
                                                          if ((char)uStack_78 == '2') {
                                                            uStack_21 = 1;
                                                            pdb_1424f6a80(&uStack_78,&uStack_98,
                                                                          &UNK_143340449,0x12,
                                                                          param_2 + 0x2a0);
                                                            if ((char)uStack_78 == '2') {
                                                              uStack_21 = 1;
                                                              pdb_1424f6a80(&uStack_78,&uStack_98,
                                                                            &UNK_14334045b,10,
                                                                            param_2 + 0x2b8);
                                                              if ((char)uStack_78 == '2') {
                                                                uStack_21 = 1;
                                                                pdb_1424f6a80(&uStack_78,&uStack_98,
                                                                              &UNK_143340465,8,
                                                                              param_2 + 0x2d0);
                                                                if ((char)uStack_78 == '2') {
                                                                  uStack_21 = 1;
                                                                  pdb_1424f6a80(&uStack_78,
                                                                                &uStack_98,
                                                                                &UNK_14334046d,0x11,
                                                                                param_2 + 0x2e8);
                                                                  if ((char)uStack_78 == '2') {
                                                                    uStack_21 = 1;
                                                                    pdb_1424f6a80(&uStack_78,
                                                                                  &uStack_98,
                                                                                  &UNK_14334047e,9,
                                                                                  param_2 + 0x300);
                                                                    if ((char)uStack_78 == '2') {
                                                                      uStack_21 = 1;
                                                                      pdb_1424f6a80(&uStack_78,
                                                                                    &uStack_98,
                                                                                    &UNK_143340487,
                                                                                    10,param_2 + 
                                                  0x318);
                                                  if ((char)uStack_78 == '2') {
                                                    uStack_21 = 1;
                                                    pdb_1424f6a80(&uStack_78,&uStack_98,
                                                                  &UNK_143340491,7,param_2 + 0x330);
                                                    if ((char)uStack_78 == '2') {
                                                      uStack_21 = 1;
                                                      pdb_1424f6a80(&uStack_78,&uStack_98,
                                                                    &UNK_143340498,8,param_2 + 0x348
                                                                   );
                                                      if ((char)uStack_78 == '2') {
                                                        uStack_21 = 1;
                                                        pdb_1424f6a80(&uStack_78,&uStack_98,
                                                                      &UNK_1433404a0,7,
                                                                      param_2 + 0x360);
                                                        if ((char)uStack_78 == '2') {
                                                          uStack_21 = 1;
                                                          pdb_1424f6a80(&uStack_78,&uStack_98,
                                                                        &UNK_1433404a7,5,
                                                                        param_2 + 0x378);
                                                          if ((char)uStack_78 == '2') {
                                                            uStack_21 = 1;
                                                            pdb_1424f6a80(&uStack_78,&uStack_98,
                                                                          &UNK_1433404ac,0xb,
                                                                          param_2 + 0x390);
                                                            if ((char)uStack_78 == '2') {
                                                              uStack_21 = 1;
                                                              pdb_1424f6a80(&uStack_78,&uStack_98,
                                                                            &UNK_1433404b7,0xb,
                                                                            param_2 + 0x3a8);
                                                              if ((char)uStack_78 == '2') {
                                                                uStack_21 = 1;
                                                                pdb_1424f6a80(&uStack_78,&uStack_98,
                                                                              &UNK_1433404c2,0x13,
                                                                              param_2 + 0x3c0);
                                                                if ((char)uStack_78 == '2') {
                                                                  uStack_68 = (undefined4)uStack_88;
                                                                  uStack_64 = (undefined4)
                                                                              ((ulonglong)uStack_88
                                                                              >> 0x20);
                                                                  uStack_78 = uStack_98;
                                                                  uStack_74 = uStack_94;
                                                                  uStack_70 = uStack_90;
                                                                  uStack_6c = uStack_8c;
                                                                  uStack_21 = 0;
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
    *(ulonglong *)(param_1 + 0x40) = CONCAT71(uStack_37,uStack_38);
    *(ulonglong *)(param_1 + 0x31) = CONCAT17(uStack_40,uStack_47);
    *(ulonglong *)(param_1 + 0x39) = CONCAT17(uStack_38,uStack_3f);
    *(ulonglong *)(param_1 + 0x21) = CONCAT17(uStack_50,uStack_57);
    *(ulonglong *)(param_1 + 0x29) = CONCAT17(uStack_48,uStack_4f);
    *(ulonglong *)(param_1 + 0x11) = CONCAT17(uStack_60,CONCAT43(uStack_64,uStack_68._1_3_));
    *(ulonglong *)(param_1 + 0x19) = CONCAT17(uStack_58,uStack_5f);
    *(ulonglong *)(param_1 + 1) =
         CONCAT17((undefined1)uStack_70,CONCAT43(uStack_74,uStack_78._1_3_));
    *(ulonglong *)(param_1 + 9) =
         CONCAT17((undefined1)uStack_68,CONCAT43(uStack_6c,uStack_70._1_3_));
    *param_1 = (char)uStack_78;
    piVar1 = (int *)CONCAT44(uStack_8c,uStack_90);
    if (*piVar1 == 1) {
      lVar2 = -1;
      if (*(longlong *)(piVar1 + 2) + 1 != 0) {
        lVar2 = *(longlong *)(piVar1 + 2) + 1;
      }
      *(longlong *)(piVar1 + 2) = lVar2;
    }
  }
  else {
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
  }
  return param_1;
}

