// VA 0x140407c80, PDB extent 252 bytes
// serde_json::de::impl$11::next_key_seed<serde_json::read::SliceRead,serde::private::de::content::ContentVisitor>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   serde_json::de::impl$11::next_key_seed<serde_json::read::SliceRead,serde::private::de::content::ContentVisitor>
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
   Extent: 252 */

undefined1 * pdb_140407c80(undefined1 *param_1,longlong *param_2)

{
  longlong lVar1;
  byte *pbVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  char cStack_48;
  char cStack_47;
  undefined6 uStack_46;
  byte *pbStack_40;
  byte *pbStack_38;
  
  pdb_140407a40(&cStack_48);
  if (cStack_48 == '\x01') {
    *(byte **)(param_1 + 8) = pbStack_40;
    *param_1 = 0x17;
    return param_1;
  }
  if (cStack_47 == '\0') {
    *param_1 = 0x16;
    return param_1;
  }
  lVar1 = *param_2;
  *(longlong *)(lVar1 + 0x28) = *(longlong *)(lVar1 + 0x28) + 1;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  pdb_140de3740(&cStack_48,lVar1 + 0x18);
  lVar1 = CONCAT62(uStack_46,CONCAT11(cStack_47,cStack_48));
  if (lVar1 == 2) {
    *(byte **)(param_1 + 8) = pbStack_40;
    *param_1 = 0x17;
    return param_1;
  }
  if ((int)lVar1 == 1) {
    if ((longlong)pbStack_38 < 0) {
      uVar4 = 0;
    }
    else {
      uVar3 = 0xc;
      if (pbStack_38 == (byte *)0x0) {
        pbVar2 = (byte *)0x1;
        pbStack_38 = (byte *)0x0;
        pbStack_40 = (byte *)0x0;
        goto LAB_140407d5d;
      }
      pdb_14007ee60();
      uVar4 = 1;
      pbVar2 = pub_1406abab0((ulonglong)pbStack_38,1);
      if (pbVar2 != (byte *)0x0) {
        pub_142e32760(pbVar2,pbStack_40,pbStack_38);
        pbStack_40 = pbStack_38;
        goto LAB_140407d5d;
      }
    }
    pdb_142dc7e2a(uVar4,pbStack_38);
  }
  uVar3 = 0xd;
  pbVar2 = pbStack_38;
LAB_140407d5d:
  *param_1 = uVar3;
  *(byte **)(param_1 + 8) = pbStack_40;
  *(byte **)(param_1 + 0x10) = pbVar2;
  *(byte **)(param_1 + 0x18) = pbStack_38;
  return param_1;
}

