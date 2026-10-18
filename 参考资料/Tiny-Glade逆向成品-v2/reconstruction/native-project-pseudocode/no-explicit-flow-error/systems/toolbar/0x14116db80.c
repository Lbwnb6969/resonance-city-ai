// VA 0x14116db80, PDB extent 302 bytes
// toolbar::mei::core::MeiContext::new_at_pos<ref$<str$> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/core.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: toolbar::mei::core::MeiContext::new_at_pos<ref$<str$> >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/core.rs
   Extent: 302 */

undefined8 *
pdb_14116db80(undefined8 *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5,undefined4 param_6,undefined8 *param_7,undefined4 param_8,
             undefined4 param_9,char param_10)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  uStack_88 = param_3;
  uStack_80 = param_4;
  uVar2 = pdb_140bbbcb0(&uStack_88);
  uVar2 = uVar2 ^ 0xb1695320004fb443;
  uVar5 = uVar2;
  lVar3 = pdb_14072c2d0(param_2);
  *(undefined1 *)(lVar3 + 0x5e) = 0;
  if (param_10 != '\0') {
    *(undefined1 *)(lVar3 + 0xcb) = 1;
  }
  if ((uVar5 & 1) == 0) {
    lVar3 = param_2[2];
    if (lVar3 == *param_2) {
      pdb_142d7f080(param_2);
    }
    lVar1 = param_2[1];
    lVar4 = lVar3 * 0x38;
    *(undefined4 *)(lVar1 + lVar4) = 4;
    *(undefined4 *)(lVar1 + 4 + lVar4) = param_5;
    *(undefined4 *)(lVar1 + 8 + lVar4) = param_6;
    *(undefined4 *)(lVar1 + 0xc + lVar4) = param_8;
    *(undefined4 *)(lVar1 + 0x10 + lVar4) = param_9;
    *(undefined8 *)(lVar1 + 0x14 + lVar4) = *param_7;
    *(undefined4 *)(lVar1 + 0x1c + lVar4) = *(undefined4 *)(param_7 + 1);
    *(ulonglong *)(lVar1 + 0x30 + lVar4) = uVar2;
    param_2[2] = lVar3 + 1;
  }
  *param_1 = param_2;
  param_1[1] = uVar2;
  param_1[2] = 0;
  return param_1;
}

