// VA 0x1414fd7c0, PDB extent 614 bytes
// country_core::resources::clutter_registry::impl$3::deserialize<enum2$<serde_json::value::Value> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/clutter_registry.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::clutter_registry::impl$3::deserialize<enum2$<serde_json::value::Value> >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/clutter_registry.rs
   Extent: 614 */

undefined8 pdb_1414fd7c0(byte *param_1)

{
  byte bVar1;
  undefined8 uVar2;
  ulonglong uStack_98;
  byte *pbStack_90;
  ulonglong uStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  ulonglong uStack_70;
  byte *pbStack_68;
  undefined8 uStack_60;
  char cStack_58;
  undefined1 uStack_57;
  undefined8 uStack_50;
  byte *pbStack_48;
  byte *pbStack_40;
  undefined1 uStack_31;
  byte *pbStack_30;
  undefined1 uStack_21;
  undefined8 uStack_20;
  
  uStack_20 = 0xfffffffffffffffe;
  bVar1 = *param_1;
  if (bVar1 != 3) {
    pbStack_30 = param_1;
    pdb_142de6d10(param_1,&uStack_31,&UNK_143318890);
    if (bVar1 < 4) {
      return 1;
    }
    if (bVar1 == 4) {
      pdb_14098c050(pbStack_30 + 8);
      return 1;
    }
    pdb_1409a45e0(pbStack_30 + 8);
    return 1;
  }
  uStack_98 = *(ulonglong *)(param_1 + 8);
  pbStack_90 = *(byte **)(param_1 + 0x10);
  if (SBORROW8(0,uStack_98)) {
    return 1;
  }
  uStack_88 = *(ulonglong *)(param_1 + 0x18);
  pbStack_40 = pbStack_90;
  pbStack_30 = (byte *)uStack_98;
  if (uStack_88 < 8) {
    if (3 < uStack_88) {
LAB_1414fd834:
      if (*(int *)pbStack_90 == 0x3a646f6d) goto LAB_1414fd877;
    }
    pdb_141adad60(&cStack_58,pbStack_90);
    if (cStack_58 == '\0') {
      uStack_21 = uStack_57;
      puStack_80 = &uStack_21;
      pcStack_78 = pdb_140c2a9d0;
      pdb_140f60760(&uStack_70,&UNK_14306af45,&puStack_80);
      pbStack_48 = pbStack_68;
      pdb_140e940b0(pbStack_68,uStack_60);
      if (uStack_70 != 0) {
        pub_1406abac0(pbStack_48,uStack_70,1);
      }
      uVar2 = 0;
    }
    else {
      pdb_142de6bf0(&uStack_98,uStack_50);
      uVar2 = 1;
    }
    if (pbStack_30 != (byte *)0x0) {
      pub_1406abac0(pbStack_40,(ulonglong)pbStack_30,1);
    }
  }
  else {
    if (*(longlong *)pbStack_90 != 0x3a6e69746c697562) goto LAB_1414fd834;
LAB_1414fd877:
    pdb_140e940b0(pbStack_90,uStack_88);
    if (pbStack_30 != (byte *)0x0) {
      pub_1406abac0(pbStack_40,(ulonglong)pbStack_30,1);
    }
    uVar2 = 0;
  }
  return uVar2;
}

