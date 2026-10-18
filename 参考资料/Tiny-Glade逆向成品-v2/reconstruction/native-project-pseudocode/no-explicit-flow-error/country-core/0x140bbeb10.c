// VA 0x140bbeb10, PDB extent 524 bytes
// country_core::resources::history::tree_edit::_::impl$0::deserialize<enum2$<serde_json::value::Value> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/tree_edit.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::history::tree_edit::_::impl$0::deserialize<enum2$<serde_json::value::Value>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/tree_edit.rs
   Extent: 524 */

undefined4 * pdb_140bbeb10(undefined4 *param_1,byte *param_2)

{
  undefined8 uVar1;
  char acStack_b0 [8];
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  byte *pbStack_28;
  uint uStack_20;
  undefined1 uStack_19;
  undefined8 uStack_18;
  
  uStack_18 = 0xfffffffffffffffe;
  uStack_20 = (uint)*param_2;
  pbStack_28 = param_2;
  if (uStack_20 == 3) {
    uStack_78 = *(undefined8 *)(param_2 + 0x18);
    uStack_88 = *(undefined4 *)(param_2 + 8);
    uStack_84 = *(undefined4 *)(param_2 + 0xc);
    uStack_80 = *(undefined4 *)(param_2 + 0x10);
    uStack_7c = *(undefined4 *)(param_2 + 0x14);
    uStack_70 = CONCAT31(uStack_70._1_3_,6);
    uStack_19 = 1;
    pdb_141be7250(acStack_b0,&uStack_88);
    if (acStack_b0[0] == '\x03') {
      *(undefined8 *)(param_1 + 2) = uStack_a8;
      *param_1 = 3;
    }
    else {
      uStack_30 = uStack_90;
      uStack_40 = uStack_a0;
      uStack_3c = uStack_9c;
      uStack_38 = uStack_98;
      uStack_34 = uStack_94;
      uStack_48 = uStack_a8;
      if (acStack_b0[0] == '\0') {
        uStack_19 = 1;
        pdb_141beb3d0(param_1,&uStack_48,&UNK_143062eb8,2);
      }
      else if (acStack_b0[0] == '\x01') {
        uStack_19 = 1;
        pdb_141beb6e0(param_1,&uStack_48,&UNK_143062ed8,3);
      }
      else {
        uStack_19 = 1;
        pdb_141bea390(param_1,&uStack_48,&UNK_143062eb8,2);
      }
    }
  }
  else if (*param_2 == 5) {
    uStack_78 = *(undefined8 *)(param_2 + 0x18);
    uStack_88 = *(undefined4 *)(param_2 + 8);
    uStack_84 = *(undefined4 *)(param_2 + 0xc);
    uStack_80 = *(undefined4 *)(param_2 + 0x10);
    uStack_7c = *(undefined4 *)(param_2 + 0x14);
    uStack_19 = 1;
    pdb_141bc4730(param_1,&uStack_88,&UNK_143062ddc,8,&UNK_143062e78,3);
  }
  else {
    uStack_88 = *(undefined4 *)param_2;
    uStack_84 = *(undefined4 *)(param_2 + 4);
    uStack_80 = *(undefined4 *)(param_2 + 8);
    uStack_7c = *(undefined4 *)(param_2 + 0xc);
    uStack_78 = *(undefined8 *)(param_2 + 0x10);
    uStack_70 = *(undefined4 *)(param_2 + 0x18);
    uStack_6c = *(undefined4 *)(param_2 + 0x1c);
    pdb_142db9380(acStack_b0,&uStack_88);
    uVar1 = pdb_142db90e0(acStack_b0,&UNK_143062648,&UNK_143062658);
    *(undefined8 *)(param_1 + 2) = uVar1;
    *param_1 = 3;
    uStack_19 = 0;
    pdb_140a7a6f0(pbStack_28);
  }
  return param_1;
}

