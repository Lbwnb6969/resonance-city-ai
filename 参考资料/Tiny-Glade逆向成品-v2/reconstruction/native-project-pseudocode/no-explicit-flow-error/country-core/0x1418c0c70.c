// VA 0x1418c0c70, PDB extent 422 bytes
// country_core::resources::session::_::impl$0::serialize<serde_json::value::ser::Serializer>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/session.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::session::_::impl$0::serialize<serde_json::value::ser::Serializer>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/session.rs
   Extent: 422 */

undefined1 * pdb_1418c0c70(undefined1 *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined1 uStack_39;
  undefined8 uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  lVar1 = *(longlong *)(param_2 + 0x28);
  lVar2 = *(longlong *)(param_2 + 0x30);
  lVar3 = *(longlong *)(param_2 + 0x70);
  uStack_70 = 0x8000000000000000;
  uStack_58 = 0;
  uStack_48 = 0;
  uStack_39 = 1;
  lVar4 = pdb_141c057d0(&uStack_70,&UNK_14335631b,5,param_2 + 0x98);
  if (lVar4 == 0) {
    uStack_39 = 1;
    lVar4 = pdb_141c0aa80(&uStack_70,&UNK_143356320,8,param_2);
    if (lVar4 == 0) {
      if (!SBORROW8(0,lVar2)) {
        uStack_39 = 1;
        lVar4 = pdb_141bfff80(&uStack_70,&UNK_143356328,5,param_2 + 0x30);
        if (lVar4 != 0) goto LAB_1418c0d09;
      }
      if (lVar1 != 0) {
        uStack_39 = 1;
        lVar4 = pdb_141c0af40(&uStack_70,&UNK_14335632d,0x10,param_2 + 0x18);
        if (lVar4 != 0) goto LAB_1418c0d09;
      }
      if (!SBORROW8(0,lVar3)) {
        uStack_39 = 1;
        lVar4 = pdb_141c04fc0(&uStack_70,&UNK_14335633d,0xd,param_2 + 0x70);
        if (lVar4 != 0) goto LAB_1418c0d09;
      }
      uStack_88 = uStack_50;
      uStack_84 = uStack_4c;
      uStack_80 = (undefined4)uStack_48;
      uStack_7c = uStack_48._4_4_;
      uStack_98 = uStack_60;
      uStack_94 = uStack_5c;
      uStack_90 = (undefined4)uStack_58;
      uStack_8c = uStack_58._4_4_;
      uStack_a8 = (undefined4)uStack_70;
      uStack_a4 = uStack_70._4_4_;
      uStack_a0 = uStack_68;
      uStack_9c = uStack_64;
      uStack_39 = 0;
      pdb_140ddcdc0(param_1,&uStack_a8);
      return param_1;
    }
  }
LAB_1418c0d09:
  *(longlong *)(param_1 + 8) = lVar4;
  *param_1 = 6;
  pdb_1418c2140(&uStack_70);
  return param_1;
}

