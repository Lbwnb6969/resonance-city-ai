// VA 0x1423a4500, PDB extent 407 bytes
// toolbar::menu::corrupted_save_file::ui
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/menu/corrupted_save_file.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: toolbar::menu::corrupted_save_file::ui
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/menu/corrupted_save_file.rs
   Extent: 407 */

void pdb_1423a4500(longlong *param_1,char *param_2,undefined8 *param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong *plStack_68;
  ulonglong uStack_60;
  undefined8 uStack_58;
  char *pcStack_48;
  longlong *plStack_40;
  ulonglong uStack_38;
  undefined8 uStack_30;
  
  puVar1 = (ulonglong *)*param_3;
  lVar5 = param_3[1];
  uVar6 = *puVar1;
  uVar10 = 0;
  uVar4 = uVar6 - *(ulonglong *)(lVar5 + 0x18);
  if (uVar6 < *(ulonglong *)(lVar5 + 0x18)) {
    uVar4 = uVar10;
  }
  uVar9 = uVar6 - *(ulonglong *)(lVar5 + 0x38);
  if (uVar6 < *(ulonglong *)(lVar5 + 0x38)) {
    uVar9 = uVar10;
  }
  uVar6 = *(ulonglong *)(lVar5 + 0x30);
  uVar7 = uVar6 - uVar9;
  if (uVar9 > uVar6) {
    uVar7 = uVar10;
  }
  uVar2 = *(ulonglong *)(lVar5 + 0x10);
  uVar8 = uVar2 - uVar4;
  if (uVar4 > uVar2) {
    uVar8 = uVar10;
  }
  uVar10 = *(ulonglong *)(lVar5 + 0x40);
  *puVar1 = uVar10 - (uVar8 + uVar7);
  if (uVar4 <= uVar2 && uVar2 - uVar4 != 0 || uVar9 <= uVar6 && uVar6 - uVar9 != 0) {
    *puVar1 = uVar10;
    *param_2 = '\0';
  }
  else if (*param_2 != '\0') {
    return;
  }
  *(undefined4 *)param_1[2] = *(undefined4 *)((longlong)param_1 + 0x1c);
  param_1 = (longlong *)*param_1;
  plStack_68 = (longlong *)&UNK_1434e23cd;
  uStack_60 = 0xe;
  pcStack_48 = param_2;
  uVar4 = pdb_140bbbcb0(&plStack_68);
  uVar4 = uVar4 ^ 0xb1695320004fb443;
  uVar6 = uVar4;
  lVar5 = pdb_14072c2d0(param_1);
  *(undefined1 *)(lVar5 + 0x5e) = 0;
  *(undefined1 *)(lVar5 + 0xcb) = 1;
  if ((uVar6 & 1) == 0) {
    lVar5 = param_1[2];
    if (lVar5 == *param_1) {
      pdb_142d7f080(param_1);
    }
    lVar3 = param_1[1];
    *(undefined4 *)(lVar3 + lVar5 * 0x38) = 1;
    *(ulonglong *)(lVar3 + 0x30 + lVar5 * 0x38) = uVar4;
    param_1[2] = lVar5 + 1;
  }
  uStack_30 = 0;
  plStack_40 = param_1;
  uStack_38 = uVar4;
  lVar5 = pdb_1411a3e40(param_1 + 0x36,&uStack_38);
  if (lVar5 != 0) {
    *(undefined4 *)(lVar5 + 0xbc) = 0x40400000;
    uStack_58 = uStack_30;
    plStack_68 = plStack_40;
    uStack_60 = uStack_38;
    pdb_141174160(&plStack_40,&plStack_68,&UNK_1434e23db,0x13,0);
    pdb_14118c4c0(&plStack_40,&UNK_1434e23ee,7,&pcStack_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_142fa6b48);
}

