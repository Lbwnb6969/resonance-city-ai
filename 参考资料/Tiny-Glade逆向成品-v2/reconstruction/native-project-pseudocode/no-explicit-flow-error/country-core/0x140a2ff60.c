// VA 0x140a2ff60, PDB extent 269 bytes
// glam::features::impl_serde::f32::impl$13::deserialize::impl$0::visit_seq<ref_mut$<serde_json::value::de::SeqDeserializer> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   glam::features::impl_serde::f32::impl$13::deserialize::impl$0::visit_seq<ref_mut$<serde_json::value::de::SeqDeserializer>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
   Extent: 269 */

undefined4 * pdb_140a2ff60(undefined4 *param_1,longlong param_2)

{
  char *pcVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 uStack_69;
  int iStack_68;
  undefined4 uStack_64;
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
  
  pcVar1 = *(char **)(param_2 + 8);
  pcVar2 = *(char **)(param_2 + 0x18);
  if (pcVar1 == pcVar2) {
LAB_140a30028:
    uVar4 = 0;
LAB_140a30049:
    uStack_60 = pdb_142d8f0e0(uVar4,&uStack_69,&UNK_14303a310);
  }
  else {
    *(char **)(param_2 + 8) = pcVar1 + 0x20;
    if (*pcVar1 == '\x06') goto LAB_140a30028;
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
    pdb_1414fde70(&iStack_68,&cStack_58);
    uVar3 = uStack_64;
    if (iStack_68 != 1) {
      if (pcVar1 + 0x20 != pcVar2) {
        *(char **)(param_2 + 8) = pcVar1 + 0x40;
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
          pdb_1414fde70(&iStack_68,&cStack_58);
          if ((char)iStack_68 == '\0') {
            param_1[1] = uVar3;
            param_1[2] = uStack_64;
            uVar3 = 0;
            goto LAB_140a30057;
          }
          goto LAB_140a3004e;
        }
      }
      uVar4 = 1;
      goto LAB_140a30049;
    }
  }
LAB_140a3004e:
  *(undefined8 *)(param_1 + 2) = uStack_60;
  uVar3 = 1;
LAB_140a30057:
  *param_1 = uVar3;
  return param_1;
}

