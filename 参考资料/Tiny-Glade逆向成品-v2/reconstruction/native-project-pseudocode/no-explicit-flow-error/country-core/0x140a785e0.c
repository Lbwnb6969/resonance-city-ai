// VA 0x140a785e0, PDB extent 444 bytes
// country_core::resources::history::auto_clutter_edit::_::impl$0::deserialize<enum2$<serde_json::value::Value> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/auto_clutter_edit.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::history::auto_clutter_edit::_::impl$0::deserialize<enum2$<serde_json::value::Value>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/auto_clutter_edit.rs
   Extent: 444 */

undefined8 pdb_140a785e0(byte *param_1)

{
  undefined8 uVar1;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  char cStack_68;
  undefined4 uStack_67;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  char cStack_48;
  undefined4 uStack_47;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  byte *pbStack_28;
  uint uStack_20;
  undefined1 uStack_19;
  undefined8 uStack_18;
  
  uStack_18 = 0xfffffffffffffffe;
  uStack_20 = (uint)*param_1;
  pbStack_28 = param_1;
  if (uStack_20 == 3) {
    uStack_98 = *(undefined8 *)(param_1 + 0x18);
    uStack_a8 = *(undefined4 *)(param_1 + 8);
    uStack_a4 = *(undefined4 *)(param_1 + 0xc);
    uStack_a0 = *(undefined4 *)(param_1 + 0x10);
    uStack_9c = *(undefined4 *)(param_1 + 0x14);
    uStack_90 = CONCAT31(uStack_90._1_3_,6);
    uStack_19 = 1;
    pdb_141be6ef0(&cStack_68,&uStack_a8);
    if (cStack_68 == '\a') {
      return 1;
    }
    uStack_47 = uStack_67;
    uStack_38 = uStack_58;
    uStack_34 = uStack_54;
    uStack_30 = uStack_50;
    uStack_2c = uStack_4c;
    cStack_48 = cStack_68;
    uStack_40 = uStack_60;
    uStack_19 = 1;
    uVar1 = pdb_141bebae0(&cStack_48,&UNK_143042180,1);
  }
  else {
    if (*param_1 != 5) {
      uStack_a8 = *(undefined4 *)param_1;
      uStack_a4 = *(undefined4 *)(param_1 + 4);
      uStack_a0 = *(undefined4 *)(param_1 + 8);
      uStack_9c = *(undefined4 *)(param_1 + 0xc);
      uStack_98 = *(undefined8 *)(param_1 + 0x10);
      uStack_90 = *(undefined4 *)(param_1 + 0x18);
      uStack_8c = *(undefined4 *)(param_1 + 0x1c);
      pdb_142db9380(&cStack_48,&uStack_a8);
      pdb_142db90e0(&cStack_48,&UNK_143041de0,&UNK_143041df0);
      uStack_19 = 0;
      pdb_140a7a6f0(pbStack_28);
      return 1;
    }
    uStack_98 = *(undefined8 *)(param_1 + 0x18);
    uStack_a8 = *(undefined4 *)(param_1 + 8);
    uStack_a4 = *(undefined4 *)(param_1 + 0xc);
    uStack_a0 = *(undefined4 *)(param_1 + 0x10);
    uStack_9c = *(undefined4 *)(param_1 + 0x14);
    uStack_19 = 1;
    uVar1 = pdb_141bc2aa0(&uStack_a8,&UNK_143042088,0xf,&UNK_1430420a0,1);
  }
  return uVar1;
}

