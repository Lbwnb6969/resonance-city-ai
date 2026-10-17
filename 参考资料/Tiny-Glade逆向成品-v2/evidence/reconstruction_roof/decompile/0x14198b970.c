// Matched PDB: country_core::resources::roofs::roof_shape::_::impl$0::deserialize<enum2$<serde_json::value::Value> >
// VA 0x14198b970, PDB extent 508 bytes
// Ghidra pseudocode; types and unresolved calls are not original source.

/* Matched PDB:
   country_core::resources::roofs::roof_shape::_::impl$0::deserialize<enum2$<serde_json::value::Value>
   >
   Extent: 508 bytes. No whole-program auto-analysis. */

undefined4 * pdb_14198b970(undefined4 *param_1,byte *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  char acStack_b0 [8];
  longlong lStack_a8;
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
  longlong lStack_48;
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
  if (uStack_20 != 3) {
    if (*param_2 == 5) {
      uStack_78 = *(undefined8 *)(param_2 + 0x18);
      uStack_88 = *(undefined4 *)(param_2 + 8);
      uStack_84 = *(undefined4 *)(param_2 + 0xc);
      uStack_80 = *(undefined4 *)(param_2 + 0x10);
      uStack_7c = *(undefined4 *)(param_2 + 0x14);
      uStack_19 = 1;
      pdb_141bc2f60(param_1,&uStack_88,&UNK_14335c5b0,0xd,&UNK_14335c600,4);
      return param_1;
    }
    uStack_88 = *(undefined4 *)param_2;
    uStack_84 = *(undefined4 *)(param_2 + 4);
    uStack_80 = *(undefined4 *)(param_2 + 8);
    uStack_7c = *(undefined4 *)(param_2 + 0xc);
    uStack_78 = *(undefined8 *)(param_2 + 0x10);
    uStack_70 = *(undefined4 *)(param_2 + 0x18);
    uStack_6c = *(undefined4 *)(param_2 + 0x1c);
    pdb_142db9380(acStack_b0,&uStack_88);
    uVar2 = pdb_142db90e0(acStack_b0,&UNK_14335c4d0,&UNK_14335c4e0);
    *(undefined8 *)(param_1 + 2) = uVar2;
    *param_1 = 1;
    uStack_19 = 0;
    pdb_140a7a6f0(pbStack_28);
    return param_1;
  }
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_88 = *(undefined4 *)(param_2 + 8);
  uStack_84 = *(undefined4 *)(param_2 + 0xc);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_7c = *(undefined4 *)(param_2 + 0x14);
  uStack_70 = CONCAT31(uStack_70._1_3_,6);
  uStack_19 = 1;
  pdb_141be6800(acStack_b0,&uStack_88);
  if (acStack_b0[0] != '\x03') {
    uStack_30 = uStack_90;
    uStack_40 = uStack_a0;
    uStack_3c = uStack_9c;
    uStack_38 = uStack_98;
    uStack_34 = uStack_94;
    lStack_48 = lStack_a8;
    if (acStack_b0[0] == '\0') {
      uStack_19 = 1;
      lStack_a8 = pdb_140de26b0(&lStack_48);
      if (lStack_a8 == 0) {
        *(undefined1 *)(param_1 + 1) = 0;
LAB_14198ba81:
        uVar1 = 0;
        goto LAB_14198ba25;
      }
    }
    else {
      if (acStack_b0[0] != '\x01') {
        uStack_19 = 1;
        pdb_141bebdb0(param_1,&lStack_48,&UNK_14335cbb8,3);
        return param_1;
      }
      uStack_19 = 1;
      lStack_a8 = pdb_140de26b0(&lStack_48);
      if (lStack_a8 == 0) {
        *(undefined1 *)(param_1 + 1) = 1;
        goto LAB_14198ba81;
      }
    }
  }
  *(longlong *)(param_1 + 2) = lStack_a8;
  uVar1 = 1;
LAB_14198ba25:
  *param_1 = uVar1;
  return param_1;
}

