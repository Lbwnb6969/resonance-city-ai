// VA 0x140bbc520, PDB extent 1020 bytes
// country_core::resources::glade_color_customization::_::impl$0::serialize<serde_json::value::ser::Serializer>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/glade_color_customization.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::glade_color_customization::_::impl$0::serialize<serde_json::value::ser::Serializer>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/glade_color_customization.rs
   Extent: 1020 */

undefined1 * pdb_140bbc520(undefined1 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined1 uStack_21;
  undefined8 uStack_20;
  
  uStack_20 = 0xfffffffffffffffe;
  uStack_58 = 0x8000000000000000;
  uStack_40 = 0;
  uStack_30 = 0;
  uStack_21 = 1;
  lVar1 = pdb_141c08530(&uStack_58,&UNK_143062809,0xd,param_2 + 0x28);
  if (lVar1 == 0) {
    uStack_21 = 1;
    lVar1 = pdb_141c08530(&uStack_58,&UNK_143062816,8,param_2 + 0x2c);
    if (lVar1 == 0) {
      uStack_21 = 1;
      lVar1 = pdb_141c08530(&uStack_58,&UNK_14306281e,0xb,param_2 + 0x30);
      if (lVar1 == 0) {
        uStack_21 = 1;
        lVar1 = pdb_141c08530(&uStack_58,&UNK_143062829,0x10,param_2 + 0x34);
        if (lVar1 == 0) {
          uStack_21 = 1;
          lVar1 = pdb_141c08530(&uStack_58,&UNK_143062839,4,param_2 + 0x38);
          if (lVar1 == 0) {
            uStack_21 = 1;
            lVar1 = pdb_141c01840(&uStack_58,&UNK_14306283d,0x13,param_2 + 0x5f);
            if (lVar1 == 0) {
              uStack_21 = 1;
              lVar1 = pdb_141c009c0(&uStack_58,&UNK_143062850,0x13,param_2 + 0x60);
              if (lVar1 == 0) {
                uStack_21 = 1;
                lVar1 = pdb_141c05af0(&uStack_58,&UNK_143062863,0xc,param_2 + 0x3c);
                if (lVar1 == 0) {
                  uStack_21 = 1;
                  lVar1 = pdb_141c086f0(&uStack_58,&UNK_14306286f,0xb,param_2 + 0x5c);
                  if (lVar1 == 0) {
                    uStack_21 = 1;
                    lVar1 = pdb_141c00f90(&uStack_58,&UNK_14306287a,0xc,param_2 + 0x5d);
                    if (lVar1 == 0) {
                      uStack_21 = 1;
                      lVar1 = pdb_141c08530(&uStack_58,&UNK_143062886,10,param_2 + 0x40);
                      if (lVar1 == 0) {
                        uStack_21 = 1;
                        lVar1 = pdb_141c08530(&uStack_58,&UNK_143062890,0xd,param_2 + 0x44);
                        if (lVar1 == 0) {
                          uStack_21 = 1;
                          lVar1 = pdb_141c08530(&uStack_58,&UNK_14306289d,6,param_2 + 0x48);
                          if (lVar1 == 0) {
                            uStack_21 = 1;
                            lVar1 = pdb_141c08530(&uStack_58,&UNK_1430628a3,0xc,param_2 + 0x4c);
                            if (lVar1 == 0) {
                              uStack_21 = 1;
                              lVar1 = pdb_141c08530(&uStack_58,&UNK_1430628af,4,param_2 + 0x50);
                              if (lVar1 == 0) {
                                uStack_21 = 1;
                                lVar1 = pdb_141c04260(&uStack_58,&UNK_1430628b3,7,param_2);
                                if (lVar1 == 0) {
                                  uStack_21 = 1;
                                  lVar1 = pdb_141c08530(&uStack_58,&UNK_1430628ba,5,param_2 + 0x54);
                                  if (lVar1 == 0) {
                                    uStack_21 = 1;
                                    lVar1 = pdb_141c0b1a0(&uStack_58,&UNK_1430628bf,0xe,
                                                          param_2 + 0x5e);
                                    if (lVar1 == 0) {
                                      uStack_21 = 1;
                                      lVar1 = pdb_141c081f0(&uStack_58,&UNK_1430628cd,0xf,
                                                            param_2 + 0x1c);
                                      if (lVar1 == 0) {
                                        uStack_21 = 1;
                                        lVar1 = pdb_141c06050(&uStack_58,&UNK_143062416,0x12,
                                                              param_2 + 0x58);
                                        if (lVar1 == 0) {
                                          uStack_21 = 1;
                                          lVar1 = pdb_141c07f80(&uStack_58,&UNK_1430628dc,6,
                                                                param_2 + 8);
                                          if (lVar1 == 0) {
                                            uStack_68 = uStack_38;
                                            uStack_64 = uStack_34;
                                            uStack_60 = (undefined4)uStack_30;
                                            uStack_5c = uStack_30._4_4_;
                                            uStack_78 = uStack_48;
                                            uStack_74 = uStack_44;
                                            uStack_70 = (undefined4)uStack_40;
                                            uStack_6c = uStack_40._4_4_;
                                            uStack_88 = (undefined4)uStack_58;
                                            uStack_84 = uStack_58._4_4_;
                                            uStack_80 = uStack_50;
                                            uStack_7c = uStack_4c;
                                            uStack_21 = 0;
                                            pdb_140ddcdc0(param_1,&uStack_88);
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
  *(longlong *)(param_1 + 8) = lVar1;
  *param_1 = 6;
  pdb_140bc0010(&uStack_58);
  return param_1;
}

