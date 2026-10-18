// VA 0x141b30010, PDB extent 364 bytes
// country_core::resources::history::roof_edit::_::impl$0::deserialize<enum2$<serde_json::value::Value> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/roof_edit.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::history::roof_edit::_::impl$0::deserialize<enum2$<serde_json::value::Value>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/roof_edit.rs
   Extent: 364 */

undefined1 * pdb_141b30010(undefined1 *param_1,byte *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_80 [24];
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  byte *pbStack_28;
  uint uStack_20;
  undefined1 uStack_19;
  undefined8 uStack_18;
  
  uStack_18 = 0xfffffffffffffffe;
  uStack_20 = (uint)*param_2;
  pbStack_28 = param_2;
  if (uStack_20 == 3) {
    uStack_58 = *(undefined8 *)(param_2 + 0x18);
    uStack_68 = *(undefined4 *)(param_2 + 8);
    uStack_64 = *(undefined4 *)(param_2 + 0xc);
    uStack_60 = *(undefined4 *)(param_2 + 0x10);
    uStack_5c = *(undefined4 *)(param_2 + 0x14);
    uStack_50 = CONCAT31(uStack_50._1_3_,6);
    uStack_19 = 1;
    pdb_141b30d70(param_1,&uStack_68);
  }
  else if (*param_2 == 5) {
    uStack_58 = *(undefined8 *)(param_2 + 0x18);
    uStack_68 = *(undefined4 *)(param_2 + 8);
    uStack_64 = *(undefined4 *)(param_2 + 0xc);
    uStack_60 = *(undefined4 *)(param_2 + 0x10);
    uStack_5c = *(undefined4 *)(param_2 + 0x14);
    uStack_19 = 1;
    pdb_141bbebf0(param_1,&uStack_68,&UNK_1433933f8,8,&UNK_1433934f0,5);
  }
  else {
    uStack_68 = *(undefined4 *)param_2;
    uStack_64 = *(undefined4 *)(param_2 + 4);
    uStack_60 = *(undefined4 *)(param_2 + 8);
    uStack_5c = *(undefined4 *)(param_2 + 0xc);
    uStack_58 = *(undefined8 *)(param_2 + 0x10);
    uStack_50 = *(undefined4 *)(param_2 + 0x18);
    uStack_4c = *(undefined4 *)(param_2 + 0x1c);
    pdb_142db9380(auStack_80,&uStack_68);
    uVar1 = pdb_142db90e0(auStack_80,&UNK_143392f58,&UNK_143392f68);
    *(undefined8 *)(param_1 + 8) = uVar1;
    *param_1 = 5;
    uStack_19 = 0;
    pdb_140a7a6f0(pbStack_28);
  }
  return param_1;
}

