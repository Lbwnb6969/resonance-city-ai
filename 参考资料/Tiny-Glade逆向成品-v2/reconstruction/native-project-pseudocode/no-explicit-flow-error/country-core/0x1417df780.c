// VA 0x1417df780, PDB extent 279 bytes
// serde_core::de::impls::range::impl$1::visit_seq<f32,ref_mut$<serde_json::value::de::SeqDeserializer> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   serde_core::de::impls::range::impl$1::visit_seq<f32,ref_mut$<serde_json::value::de::SeqDeserializer>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
   Extent: 279 */

undefined4 *
pdb_1417df780(undefined4 *param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  char *pcVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  int iStack_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  char cStack_58;
  undefined4 uStack_57;
  undefined4 uStack_53;
  undefined4 uStack_4f;
  undefined3 uStack_4b;
  undefined1 uStack_48;
  undefined3 uStack_47;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  pcVar1 = *(char **)(param_4 + 8);
  pcVar2 = *(char **)(param_4 + 0x18);
  uStack_68 = param_2;
  uStack_60 = param_3;
  if (pcVar1 == pcVar2) {
LAB_1417df852:
    uVar4 = 0;
LAB_1417df873:
    uStack_70 = pdb_142d8f0e0(uVar4,&uStack_68,&UNK_14333bb50);
  }
  else {
    *(char **)(param_4 + 8) = pcVar1 + 0x20;
    if (*pcVar1 == '\x06') goto LAB_1417df852;
    uStack_57 = *(undefined4 *)(pcVar1 + 1);
    uStack_53 = *(undefined4 *)(pcVar1 + 5);
    uStack_4f = *(undefined4 *)(pcVar1 + 9);
    uStack_44 = *(undefined4 *)(pcVar1 + 0x14);
    uStack_40 = *(undefined4 *)(pcVar1 + 0x18);
    uStack_3c = *(undefined4 *)(pcVar1 + 0x1c);
    uStack_4b = (undefined3)*(undefined4 *)(pcVar1 + 0xd);
    uStack_48 = (undefined1)*(undefined4 *)(pcVar1 + 0x10);
    uStack_47 = (undefined3)((uint)*(undefined4 *)(pcVar1 + 0x10) >> 8);
    cStack_58 = *pcVar1;
    pdb_1414fde70(&iStack_78,&cStack_58);
    uVar3 = uStack_74;
    if (iStack_78 != 1) {
      if (pcVar1 + 0x20 != pcVar2) {
        *(char **)(param_4 + 8) = pcVar1 + 0x40;
        if (pcVar1[0x20] != '\x06') {
          uStack_57 = *(undefined4 *)(pcVar1 + 0x21);
          uStack_53 = *(undefined4 *)(pcVar1 + 0x25);
          uStack_4f = *(undefined4 *)(pcVar1 + 0x29);
          uStack_44 = *(undefined4 *)(pcVar1 + 0x34);
          uStack_40 = *(undefined4 *)(pcVar1 + 0x38);
          uStack_3c = *(undefined4 *)(pcVar1 + 0x3c);
          uStack_4b = (undefined3)*(undefined4 *)(pcVar1 + 0x2d);
          uStack_48 = (undefined1)*(undefined4 *)(pcVar1 + 0x30);
          uStack_47 = (undefined3)((uint)*(undefined4 *)(pcVar1 + 0x30) >> 8);
          cStack_58 = pcVar1[0x20];
          pdb_1414fde70(&iStack_78,&cStack_58);
          if ((char)iStack_78 == '\0') {
            param_1[1] = uVar3;
            param_1[2] = uStack_74;
            uVar3 = 0;
            goto LAB_1417df881;
          }
          goto LAB_1417df878;
        }
      }
      uVar4 = 1;
      goto LAB_1417df873;
    }
  }
LAB_1417df878:
  *(undefined8 *)(param_1 + 2) = uStack_70;
  uVar3 = 1;
LAB_1417df881:
  *param_1 = uVar3;
  return param_1;
}

