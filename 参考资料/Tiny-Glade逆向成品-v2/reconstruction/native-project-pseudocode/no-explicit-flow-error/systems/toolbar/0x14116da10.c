// VA 0x14116da10, PDB extent 355 bytes
// toolbar::mei::core::MeiContext::new_at_pos<alloc::string::String>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/core.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: toolbar::mei::core::MeiContext::new_at_pos<alloc::string::String>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/core.rs
   Extent: 355 */

undefined8 *
pdb_14116da10(undefined8 *param_1,longlong *param_2,ulonglong *param_3,undefined4 param_4,
             undefined4 param_5,undefined8 *param_6,undefined4 param_7,undefined4 param_8,
             char param_9)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  byte *pbStack_60;
  ulonglong uStack_58;
  ulonglong *puStack_50;
  byte *pbStack_48;
  undefined8 uStack_40;
  
  uStack_40 = 0xfffffffffffffffe;
  pbStack_60 = (byte *)param_3[1];
  uStack_58 = param_3[2];
  puStack_50 = param_3;
  pbStack_48 = pbStack_60;
  uVar2 = pdb_140bbbcb0(&pbStack_60);
  uVar2 = uVar2 ^ 0xb1695320004fb443;
  uVar4 = uVar2;
  lVar3 = pdb_14072c2d0(param_2);
  *(undefined1 *)(lVar3 + 0x5e) = 0;
  if (param_9 != '\0') {
    *(undefined1 *)(lVar3 + 0xcb) = 1;
  }
  if ((uVar4 & 1) == 0) {
    lVar3 = param_2[2];
    if (lVar3 == *param_2) {
      pdb_142d7f080(param_2);
    }
    lVar1 = param_2[1];
    lVar5 = lVar3 * 0x38;
    *(undefined4 *)(lVar1 + lVar5) = 4;
    *(undefined4 *)(lVar1 + 4 + lVar5) = param_4;
    *(undefined4 *)(lVar1 + 8 + lVar5) = param_5;
    *(undefined4 *)(lVar1 + 0xc + lVar5) = param_7;
    *(undefined4 *)(lVar1 + 0x10 + lVar5) = param_8;
    *(undefined8 *)(lVar1 + 0x14 + lVar5) = *param_6;
    *(undefined4 *)(lVar1 + 0x1c + lVar5) = *(undefined4 *)(param_6 + 1);
    *(ulonglong *)(lVar1 + 0x30 + lVar5) = uVar2;
    param_2[2] = lVar3 + 1;
  }
  *param_1 = param_2;
  param_1[1] = uVar2;
  param_1[2] = 0;
  if (*puStack_50 != 0) {
    pub_1406abac0(pbStack_48,*puStack_50,1);
  }
  return param_1;
}

