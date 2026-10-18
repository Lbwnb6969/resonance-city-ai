// VA 0x14198bed0, PDB extent 460 bytes
// country_core::resources::roofs::roof_shape::_::impl$0::serialize<serde_json::value::ser::Serializer>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/roofs/roof_shape.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::roofs::roof_shape::_::impl$0::serialize<serde_json::value::ser::Serializer>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/roofs/roof_shape.rs
   Extent: 460 */

undefined1 * pdb_14198bed0(undefined1 *param_1,longlong param_2)

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
  lVar1 = pdb_141c06050(&uStack_58,&UNK_14335c68f,10,param_2 + 8);
  if (lVar1 == 0) {
    uStack_21 = 1;
    lVar1 = pdb_141c06050(&uStack_58,&UNK_14335c699,9,param_2 + 0xc);
    if (lVar1 == 0) {
      uStack_21 = 1;
      lVar1 = pdb_141c06d70(&uStack_58,&UNK_14335c6a2,0xd,param_2);
      if (lVar1 == 0) {
        uStack_21 = 1;
        lVar1 = pdb_141c06050(&uStack_58,&UNK_14335c6af,0xf,param_2 + 0x10);
        if (lVar1 == 0) {
          uStack_21 = 1;
          lVar1 = pdb_141c09a60(&uStack_58,&UNK_14335c6be,9,param_2 + 0x18);
          if (lVar1 == 0) {
            uStack_21 = 1;
            lVar1 = pdb_141c06050(&uStack_58,&UNK_14335c6c7,0xe,param_2 + 0x14);
            if (lVar1 == 0) {
              uStack_21 = 1;
              lVar1 = pdb_141c0b1a0(&uStack_58,&UNK_14335c6d5,0xe,param_2 + 0x19);
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
  *(longlong *)(param_1 + 8) = lVar1;
  *param_1 = 6;
  pdb_14198f020(&uStack_58);
  return param_1;
}

