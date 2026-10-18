// VA 0x14116dcb0, PDB extent 162 bytes
// toolbar::mei::core::MeiContext::safe_frame<ref$<str$> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/core.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: toolbar::mei::core::MeiContext::safe_frame<ref$<str$> >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/core.rs
   Extent: 162 */

undefined8 *
pdb_14116dcb0(undefined8 *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
             char param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uStack_38 = param_3;
  uStack_30 = param_4;
  uVar2 = pdb_140bbbcb0(&uStack_38);
  uVar2 = uVar2 ^ 0xb1695320004fb443;
  uVar4 = uVar2;
  lVar3 = pdb_14072c2d0(param_2);
  *(undefined1 *)(lVar3 + 0x5e) = 0;
  if (param_5 != '\0') {
    *(undefined1 *)(lVar3 + 0xcb) = 1;
  }
  if ((uVar4 & 1) == 0) {
    lVar3 = param_2[2];
    if (lVar3 == *param_2) {
      pdb_142d7f080(param_2);
    }
    lVar1 = param_2[1];
    *(undefined4 *)(lVar1 + lVar3 * 0x38) = 1;
    *(ulonglong *)(lVar1 + 0x30 + lVar3 * 0x38) = uVar2;
    param_2[2] = lVar3 + 1;
  }
  *param_1 = param_2;
  param_1[1] = uVar2;
  param_1[2] = 0;
  return param_1;
}

