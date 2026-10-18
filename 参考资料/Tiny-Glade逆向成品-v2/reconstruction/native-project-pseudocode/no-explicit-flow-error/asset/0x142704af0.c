// VA 0x142704af0, PDB extent 620 bytes
// asset::foliage::_::impl$0::serialize<serde_json::value::ser::Serializer>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/asset/src/foliage.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   asset::foliage::_::impl$0::serialize<serde_json::value::ser::Serializer>
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/asset/src/foliage.rs
   Extent: 620 */

undefined1 * pdb_142704af0(undefined1 *param_1,longlong param_2)

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
  lVar1 = pdb_142715c80(&uStack_58,&UNK_143589519,0xe,param_2 + 0x10);
  if (lVar1 == 0) {
    uStack_21 = 1;
    lVar1 = pdb_142714900(&uStack_58,&UNK_143589575,9,param_2);
    if (lVar1 == 0) {
      uStack_21 = 1;
      lVar1 = pdb_1427132a0(&uStack_58,&UNK_1435895c0,5,param_2 + 0xb8);
      if (lVar1 == 0) {
        uStack_21 = 1;
        lVar1 = pdb_1427146a0(&uStack_58,&UNK_143589561,0x14,param_2 + 0x28);
        if (lVar1 == 0) {
          uStack_21 = 1;
          lVar1 = pdb_142714b70(&uStack_58,&UNK_143589597,0x18,param_2 + 0x40);
          if (lVar1 == 0) {
            uStack_21 = 1;
            lVar1 = pdb_142713ac0(&uStack_58,&UNK_1435895af,0x11,param_2 + 0x58);
            if (lVar1 == 0) {
              uStack_21 = 1;
              lVar1 = pdb_142713d20(&uStack_58,&UNK_14358953c,0x17,param_2 + 0x70);
              if (lVar1 == 0) {
                uStack_21 = 1;
                lVar1 = pdb_142715500(&uStack_58,&UNK_143589527,0xb,param_2 + 0xbc);
                if (lVar1 == 0) {
                  uStack_21 = 1;
                  lVar1 = pdb_142715030(&uStack_58,&UNK_143589532,10,param_2 + 0x88);
                  if (lVar1 == 0) {
                    uStack_21 = 1;
                    lVar1 = pdb_1427132a0(&uStack_58,&UNK_143589553,0xe,param_2 + 200);
                    if (lVar1 == 0) {
                      uStack_21 = 1;
                      lVar1 = pdb_142715770(&uStack_58,&UNK_14358957e,0x19,param_2 + 0xa0);
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
  *(longlong *)(param_1 + 8) = lVar1;
  *param_1 = 6;
  pdb_1427040f0(&uStack_58);
  return param_1;
}

