// VA 0x1417c0870, PDB extent 424 bytes
// country_core::resources::walls::decorator::_::impl$0::deserialize<enum2$<serde_json::value::Value> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::walls::decorator::_::impl$0::deserialize<enum2$<serde_json::value::Value>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator.rs
   Extent: 424 */

undefined1 * pdb_1417c0870(undefined1 *param_1,byte *param_2)

{
  undefined8 uVar1;
  longlong lStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 uStack_98;
  char acStack_90 [8];
  longlong lStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  byte *pbStack_30;
  uint uStack_28;
  undefined1 uStack_21;
  undefined8 uStack_20;
  
  uStack_20 = 0xfffffffffffffffe;
  uStack_28 = (uint)*param_2;
  pbStack_30 = param_2;
  if (uStack_28 == 3) {
    uStack_58 = *(undefined8 *)(param_2 + 0x18);
    uStack_68 = *(undefined4 *)(param_2 + 8);
    uStack_64 = *(undefined4 *)(param_2 + 0xc);
    uStack_60 = *(undefined4 *)(param_2 + 0x10);
    uStack_5c = *(undefined4 *)(param_2 + 0x14);
    uStack_50 = CONCAT31(uStack_50._1_3_,6);
    uStack_21 = 1;
    pdb_141be6d10(acStack_90,&uStack_68);
    if (acStack_90[0] != '\x02') {
      uStack_98 = uStack_70;
      uStack_a8 = uStack_80;
      uStack_a4 = uStack_7c;
      uStack_a0 = uStack_78;
      uStack_9c = uStack_74;
      lStack_b0 = lStack_88;
      uStack_21 = 1;
      lStack_88 = pdb_140de26b0(&lStack_b0);
      if (lStack_88 == 0) {
        param_1[1] = acStack_90[0];
        *param_1 = 0;
        return param_1;
      }
    }
    *(longlong *)(param_1 + 8) = lStack_88;
    *param_1 = 1;
  }
  else if (*param_2 == 5) {
    uStack_58 = *(undefined8 *)(param_2 + 0x18);
    uStack_68 = *(undefined4 *)(param_2 + 8);
    uStack_64 = *(undefined4 *)(param_2 + 0xc);
    uStack_60 = *(undefined4 *)(param_2 + 0x10);
    uStack_5c = *(undefined4 *)(param_2 + 0x14);
    uStack_21 = 1;
    pdb_141bc0fa0(param_1,&uStack_68,&UNK_143336b0e,0xd,&UNK_143336bb8,2);
  }
  else {
    uStack_68 = *(undefined4 *)param_2;
    uStack_64 = *(undefined4 *)(param_2 + 4);
    uStack_60 = *(undefined4 *)(param_2 + 8);
    uStack_5c = *(undefined4 *)(param_2 + 0xc);
    uStack_58 = *(undefined8 *)(param_2 + 0x10);
    uStack_50 = *(undefined4 *)(param_2 + 0x18);
    uStack_4c = *(undefined4 *)(param_2 + 0x1c);
    pdb_142db9380(acStack_90,&uStack_68);
    uVar1 = pdb_142db90e0(acStack_90,&UNK_143336840,&UNK_143336850);
    *(undefined8 *)(param_1 + 8) = uVar1;
    *param_1 = 1;
    uStack_21 = 0;
    pdb_140a7a6f0(pbStack_30);
  }
  return param_1;
}

