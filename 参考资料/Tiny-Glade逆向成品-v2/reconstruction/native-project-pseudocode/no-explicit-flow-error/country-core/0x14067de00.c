// VA 0x14067de00, PDB extent 412 bytes
// country_core::resources::glade_color_customization::_::impl$0::serialize<serde_json::value::ser::Serializer>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/glade_color_customization.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::glade_color_customization::_::impl$0::serialize<serde_json::value::ser::Serializer>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/glade_color_customization.rs
   Extent: 412 */

undefined1 * pdb_14067de00(undefined1 *param_1,longlong param_2)

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
  lVar1 = pdb_1403bd270(&uStack_58,&UNK_142f93ea2,0xc,param_2);
  if (lVar1 == 0) {
    uStack_21 = 1;
    lVar1 = pdb_1403bd270(&uStack_58,&UNK_142f93eae,0xc,param_2 + 4);
    if (lVar1 == 0) {
      uStack_21 = 1;
      lVar1 = pdb_1403bd270(&uStack_58,&UNK_142f93eba,10,param_2 + 8);
      if (lVar1 == 0) {
        uStack_21 = 1;
        lVar1 = pdb_1403be480(&uStack_58,&UNK_142f93ec4,10,param_2 + 0x10);
        if (lVar1 == 0) {
          uStack_21 = 1;
          lVar1 = pdb_1403c0a70(&uStack_58,&UNK_142f93ece,9,param_2 + 0x11);
          if (lVar1 == 0) {
            uStack_21 = 1;
            lVar1 = pdb_1403bd270(&uStack_58,&UNK_142f93ed7,0xb,param_2 + 0xc);
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
  *(longlong *)(param_1 + 8) = lVar1;
  *param_1 = 6;
  pdb_14067e6a0(&uStack_58);
  return param_1;
}

