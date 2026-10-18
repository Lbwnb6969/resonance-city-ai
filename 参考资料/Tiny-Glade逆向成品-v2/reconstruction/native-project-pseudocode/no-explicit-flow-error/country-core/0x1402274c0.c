// VA 0x1402274c0, PDB extent 732 bytes
// country_core::resources::critters::sheep::_::impl$0::serialize<serde_json::value::ser::Serializer>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/critters/sheep.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::critters::sheep::_::impl$0::serialize<serde_json::value::ser::Serializer>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/critters/sheep.rs
   Extent: 732 */

undefined1 * pdb_1402274c0(undefined1 *param_1,char *param_2)

{
  longlong lVar1;
  ulonglong uStack_a8;
  byte *pbStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  longlong lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulonglong uStack_58;
  byte *pbStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 uStack_22;
  undefined1 uStack_21;
  undefined8 uStack_20;
  
  uStack_20 = 0xfffffffffffffffe;
  if (*param_2 == '\x01') {
    pdb_140ddcab0(&uStack_a8,&UNK_142e62148,0xe,1,&UNK_142e62163,7,3);
    if (SBORROW8(0,uStack_a8)) {
LAB_14022763e:
      *(byte **)(param_1 + 8) = pbStack_a0;
      *param_1 = 6;
      return param_1;
    }
    uStack_38 = (undefined4)uStack_88;
    uStack_34 = uStack_88._4_4_;
    uStack_30 = (undefined4)uStack_80;
    uStack_2c = uStack_80._4_4_;
    uStack_48 = (undefined4)uStack_98;
    uStack_44 = uStack_98._4_4_;
    uStack_40 = (undefined4)uStack_90;
    uStack_3c = uStack_90._4_4_;
    uStack_58 = uStack_a8;
    pbStack_50 = pbStack_a0;
    uStack_21 = 1;
    lVar1 = pdb_1403bc140(&uStack_58,&UNK_142e6215a,9,param_2 + 4);
    if (lVar1 == 0) {
      uStack_21 = 1;
      lVar1 = pdb_1403bc140(&uStack_58,&UNK_142e6216a,0x13,param_2 + 8);
      if (lVar1 == 0) {
        uStack_21 = 1;
        lVar1 = pdb_1403bc4e0(&uStack_58,&UNK_142e6217d,0x10,param_2 + 1);
        if (lVar1 == 0) {
          uStack_88 = CONCAT44(uStack_34,uStack_38);
          uStack_80 = CONCAT44(uStack_2c,uStack_30);
          uStack_98 = CONCAT44(uStack_44,uStack_48);
          uStack_90 = CONCAT44(uStack_3c,uStack_40);
          uStack_a8 = uStack_58;
          pbStack_a0 = pbStack_50;
          uStack_21 = 0;
          pdb_140ddc650(param_1,&uStack_a8);
          return param_1;
        }
      }
    }
  }
  else {
    pdb_140ddcab0(&uStack_a8,&UNK_142e62148,0xe,0,&UNK_142e62156,4,1);
    if (SBORROW8(0,uStack_a8)) goto LAB_14022763e;
    uStack_38 = (undefined4)uStack_88;
    uStack_34 = uStack_88._4_4_;
    uStack_30 = (undefined4)uStack_80;
    uStack_2c = uStack_80._4_4_;
    uStack_48 = (undefined4)uStack_98;
    uStack_44 = uStack_98._4_4_;
    uStack_40 = (undefined4)uStack_90;
    uStack_3c = uStack_90._4_4_;
    uStack_58 = uStack_a8;
    pbStack_50 = pbStack_a0;
    uStack_22 = 1;
    lVar1 = pdb_1403bc140(&uStack_58,&UNK_142e6215a,9,param_2 + 4);
    if (lVar1 == 0) {
      uStack_88 = CONCAT44(uStack_34,uStack_38);
      uStack_80 = CONCAT44(uStack_2c,uStack_30);
      uStack_98 = CONCAT44(uStack_44,uStack_48);
      uStack_90 = CONCAT44(uStack_3c,uStack_40);
      uStack_a8 = uStack_58;
      pbStack_a0 = pbStack_50;
      uStack_22 = 0;
      pdb_140ddc650(param_1,&uStack_a8);
      return param_1;
    }
  }
  *(longlong *)(param_1 + 8) = lVar1;
  *param_1 = 6;
  if (uStack_58 != 0) {
    pub_1406abac0(pbStack_50,uStack_58,1);
  }
  lVar1 = CONCAT44(uStack_3c,uStack_40);
  if (lVar1 == 0) {
    uStack_68 = 0;
  }
  else {
    uStack_90 = CONCAT44(uStack_34,uStack_38);
    uStack_68 = CONCAT44(uStack_2c,uStack_30);
    pbStack_a0 = (byte *)0x0;
    uStack_80 = 0;
    uStack_98 = lVar1;
    lStack_78 = lVar1;
    uStack_70 = uStack_90;
  }
  uStack_a8 = (ulonglong)(lVar1 != 0);
  uStack_88 = uStack_a8;
  pdb_1404a0530(&uStack_a8);
  return param_1;
}

