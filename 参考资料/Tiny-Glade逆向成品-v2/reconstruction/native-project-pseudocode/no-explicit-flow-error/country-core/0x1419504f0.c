// VA 0x1419504f0, PDB extent 682 bytes
// country_core::resources::history::terrain_edit::_::impl$0::deserialize::impl$2::visit_enum<serde_json::value::de::EnumDeserializer>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/terrain_edit.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::history::terrain_edit::_::impl$0::deserialize::impl$2::visit_enum<serde_json::value::de::EnumDeserializer>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/terrain_edit.rs
   Extent: 682 */

longlong * pdb_1419504f0(longlong *param_1)

{
  longlong lVar1;
  uint uVar2;
  longlong lStack_80;
  uint uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  longlong lStack_60;
  longlong lStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  longlong lStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  longlong lStack_28;
  int iStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  pdb_141be5060(&lStack_80);
  lVar1 = CONCAT44(uStack_74,uStack_78);
  if ((char)lStack_80 != '\x03') {
    lStack_28 = lStack_60;
    uStack_38 = uStack_70;
    uStack_34 = uStack_6c;
    uStack_30 = (undefined4)uStack_68;
    uStack_2c = uStack_68._4_4_;
    uVar2 = uStack_78 & 0xff;
    if ((char)lStack_80 == '\0') {
      if (uVar2 == 6) {
        iStack_20 = CONCAT31(iStack_20._1_3_,0xd);
        lVar1 = pdb_142db90e0(&iStack_20,&UNK_14339ab48,&UNK_143399fa8);
      }
      else {
        uStack_78 = uStack_70;
        uStack_74 = uStack_6c;
        uStack_70 = (undefined4)uStack_68;
        uStack_6c = uStack_68._4_4_;
        uStack_68 = lStack_60;
        pdb_1415022d0(&lStack_58,&lStack_80,&UNK_14335a7a0,0x14,&UNK_14335a7d8,5);
        if (!SBORROW8(0,lStack_58)) {
          param_1[3] = CONCAT44(uStack_44,uStack_48);
          param_1[4] = lStack_40;
          param_1[1] = lStack_58;
          param_1[2] = CONCAT44(uStack_4c,uStack_50);
          lVar1 = -0x8000000000000000;
          goto LAB_141950522;
        }
        lVar1 = CONCAT44(uStack_4c,uStack_50);
      }
    }
    else if ((char)lStack_80 == '\x01') {
      if (uVar2 == 6) {
        lStack_58 = CONCAT71(lStack_58._1_7_,0xd);
        lVar1 = pdb_142db90e0(&lStack_58,&UNK_14339ab48,&UNK_143399fa8);
      }
      else {
        uStack_78 = uStack_70;
        uStack_74 = uStack_6c;
        uStack_70 = (undefined4)uStack_68;
        uStack_6c = uStack_68._4_4_;
        uStack_68 = lStack_60;
        pdb_141503200(&iStack_20,&lStack_80,&UNK_14335a828,0x15,&UNK_14335a8b8,8);
        if (iStack_20 != 1) {
          *(undefined4 *)(param_1 + 3) = uStack_c;
          param_1[1] = CONCAT44(uStack_18,uStack_1c);
          param_1[2] = CONCAT44(uStack_10,uStack_14);
          lVar1 = -0x7fffffffffffffff;
          goto LAB_141950522;
        }
        lVar1 = CONCAT44(uStack_14,uStack_18);
      }
    }
    else if (uVar2 == 6) {
      lStack_80 = CONCAT71(lStack_80._1_7_,0xd);
      lVar1 = pdb_142db90e0(&lStack_80,&UNK_14339ab48,&UNK_143399fa8);
    }
    else {
      uStack_50 = uStack_70;
      uStack_4c = uStack_6c;
      uStack_48 = (undefined4)uStack_68;
      uStack_44 = uStack_68._4_4_;
      lStack_40 = lStack_60;
      pdb_1415019b0(&lStack_80,&lStack_58,&UNK_14335a86f,0x15,&UNK_14335a938,3);
      if (!SBORROW8(0,lStack_80)) {
        param_1[4] = lStack_60;
        param_1[2] = CONCAT44(uStack_6c,uStack_70);
        param_1[3] = uStack_68;
        *param_1 = lStack_80;
        param_1[1] = CONCAT44(uStack_74,uStack_78);
        return param_1;
      }
      lVar1 = CONCAT44(uStack_74,uStack_78);
    }
  }
  param_1[1] = lVar1;
  lVar1 = -0x7ffffffffffffffe;
LAB_141950522:
  *param_1 = lVar1;
  return param_1;
}

