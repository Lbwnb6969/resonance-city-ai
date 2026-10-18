// VA 0x140a302b0, PDB extent 396 bytes
// glam::features::impl_serde::f32::impl$15::deserialize::impl$0::visit_seq<ref_mut$<serde_json::value::de::SeqDeserializer> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   glam::features::impl_serde::f32::impl$15::deserialize::impl$0::visit_seq<ref_mut$<serde_json::value::de::SeqDeserializer>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
   Extent: 396 */

undefined4 * pdb_140a302b0(undefined4 *param_1,longlong param_2)

{
  char *pcVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined1 uStack_79;
  int iStack_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  char cStack_68;
  undefined4 uStack_67;
  undefined4 uStack_63;
  undefined4 uStack_5f;
  undefined3 uStack_5b;
  undefined1 uStack_58;
  undefined3 uStack_57;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  pcVar1 = *(char **)(param_2 + 8);
  pcVar2 = *(char **)(param_2 + 0x18);
  if (pcVar1 == pcVar2) {
LAB_140a303c3:
    uVar5 = 0;
LAB_140a30410:
    uStack_70 = pdb_142d8f0e0(uVar5,&uStack_79,&UNK_14303a330);
  }
  else {
    *(char **)(param_2 + 8) = pcVar1 + 0x20;
    if (*pcVar1 == '\x06') goto LAB_140a303c3;
    uStack_67 = *(undefined4 *)(pcVar1 + 1);
    uStack_63 = *(undefined4 *)(pcVar1 + 5);
    uStack_5f = *(undefined4 *)(pcVar1 + 9);
    uStack_54 = *(undefined4 *)(pcVar1 + 0x14);
    uStack_50 = *(undefined4 *)(pcVar1 + 0x18);
    uStack_4c = *(undefined4 *)(pcVar1 + 0x1c);
    uStack_5b = (undefined3)*(undefined4 *)(pcVar1 + 0xd);
    uStack_58 = (undefined1)*(undefined4 *)(pcVar1 + 0x10);
    uStack_57 = (undefined3)((uint)*(undefined4 *)(pcVar1 + 0x10) >> 8);
    cStack_68 = *pcVar1;
    pdb_1414fde70(&iStack_78,&cStack_68);
    uVar4 = uStack_74;
    if (iStack_78 == 1) goto LAB_140a30415;
    if (pcVar1 + 0x20 == pcVar2) {
LAB_140a303ec:
      uVar5 = 1;
      goto LAB_140a30410;
    }
    *(char **)(param_2 + 8) = pcVar1 + 0x40;
    if (pcVar1[0x20] == '\x06') goto LAB_140a303ec;
    uStack_67 = *(undefined4 *)(pcVar1 + 0x21);
    uStack_63 = *(undefined4 *)(pcVar1 + 0x25);
    uStack_5f = *(undefined4 *)(pcVar1 + 0x29);
    uStack_54 = *(undefined4 *)(pcVar1 + 0x34);
    uStack_50 = *(undefined4 *)(pcVar1 + 0x38);
    uStack_4c = *(undefined4 *)(pcVar1 + 0x3c);
    uStack_5b = (undefined3)*(undefined4 *)(pcVar1 + 0x2d);
    uStack_58 = (undefined1)*(undefined4 *)(pcVar1 + 0x30);
    uStack_57 = (undefined3)((uint)*(undefined4 *)(pcVar1 + 0x30) >> 8);
    cStack_68 = pcVar1[0x20];
    pdb_1414fde70(&iStack_78,&cStack_68);
    uVar3 = uStack_74;
    if ((char)iStack_78 == '\0') {
      if (pcVar1 + 0x40 != pcVar2) {
        *(char **)(param_2 + 8) = pcVar1 + 0x60;
        if (pcVar1[0x40] != '\x06') {
          uStack_67 = *(undefined4 *)(pcVar1 + 0x41);
          uStack_63 = *(undefined4 *)(pcVar1 + 0x45);
          uStack_5f = *(undefined4 *)(pcVar1 + 0x49);
          uStack_54 = *(undefined4 *)(pcVar1 + 0x54);
          uStack_50 = *(undefined4 *)(pcVar1 + 0x58);
          uStack_4c = *(undefined4 *)(pcVar1 + 0x5c);
          uStack_5b = (undefined3)*(undefined4 *)(pcVar1 + 0x4d);
          uStack_58 = (undefined1)*(undefined4 *)(pcVar1 + 0x50);
          uStack_57 = (undefined3)((uint)*(undefined4 *)(pcVar1 + 0x50) >> 8);
          cStack_68 = pcVar1[0x40];
          pdb_1414fde70(&iStack_78,&cStack_68);
          if ((char)iStack_78 == '\0') {
            param_1[1] = uVar4;
            param_1[2] = uVar3;
            param_1[3] = uStack_74;
            uVar4 = 0;
            goto LAB_140a3041e;
          }
          goto LAB_140a30415;
        }
      }
      uVar5 = 2;
      goto LAB_140a30410;
    }
  }
LAB_140a30415:
  *(undefined8 *)(param_1 + 2) = uStack_70;
  uVar4 = 1;
LAB_140a3041e:
  *param_1 = uVar4;
  return param_1;
}

