// VA 0x1414fda30, PDB extent 486 bytes
// country_core::resources::clutter_registry::impl$3::deserialize<ref_mut$<serde_json::de::Deserializer<serde_json::read::StrRead> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/clutter_registry.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::clutter_registry::impl$3::deserialize<ref_mut$<serde_json::de::Deserializer<serde_json::read::StrRead>
   > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/clutter_registry.rs
   Extent: 486 */

undefined8 pdb_1414fda30(undefined8 param_1)

{
  undefined8 uVar1;
  ulonglong uStack_90;
  byte *pbStack_88;
  ulonglong uStack_80;
  undefined1 *puStack_78;
  code *pcStack_70;
  char cStack_68;
  undefined1 uStack_67;
  undefined8 uStack_60;
  ulonglong uStack_58;
  byte *pbStack_50;
  ulonglong uStack_48;
  byte *pbStack_40;
  byte *pbStack_38;
  ulonglong uStack_30;
  undefined1 uStack_21;
  undefined8 uStack_20;
  
  uStack_20 = 0xfffffffffffffffe;
  pdb_14165c290(&uStack_58,param_1);
  if (SBORROW8(0,uStack_58)) {
    return 1;
  }
  uStack_90 = uStack_58;
  pbStack_88 = pbStack_50;
  uStack_80 = uStack_48;
  pbStack_38 = pbStack_50;
  uStack_30 = uStack_58;
  if (uStack_48 < 8) {
    if (3 < uStack_48) {
LAB_1414fdaa5:
      if (*(int *)pbStack_50 == 0x3a646f6d) goto LAB_1414fdae5;
    }
    pdb_141adad60(&cStack_68);
    if (cStack_68 == '\0') {
      uStack_21 = uStack_67;
      puStack_78 = &uStack_21;
      pcStack_70 = pdb_140c2a9d0;
      pdb_140f60760(&uStack_58,&UNK_14306af45,&puStack_78);
      pbStack_40 = pbStack_50;
      pdb_140e940b0(pbStack_50,uStack_48);
      if (uStack_58 != 0) {
        pub_1406abac0(pbStack_40,uStack_58,1);
      }
      uVar1 = 0;
    }
    else {
      pdb_142de6bf0(&uStack_90,uStack_60);
      uVar1 = 1;
    }
    if (uStack_30 != 0) {
      pub_1406abac0(pbStack_38,uStack_30,1);
    }
  }
  else {
    if (*(longlong *)pbStack_50 != 0x3a6e69746c697562) goto LAB_1414fdaa5;
LAB_1414fdae5:
    pdb_140e940b0(pbStack_50,uStack_48);
    if (uStack_30 != 0) {
      pub_1406abac0(pbStack_38,uStack_30,1);
    }
    uVar1 = 0;
  }
  return uVar1;
}

