// VA 0x14215ea30, PDB extent 605 bytes
// system_color::color_menu::delete_color_icon_entities
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/color/src/color_menu.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: system_color::color_menu::delete_color_icon_entities
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/color/src/color_menu.rs
   Extent: 605 */

void pdb_14215ea30(longlong *param_1,undefined8 *param_2)

{
  uint *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  uint *puVar13;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  lVar2 = *param_1;
  lVar3 = param_1[1];
  puVar13 = *(uint **)(lVar2 + 0xf8);
  puVar1 = puVar13 + *(longlong *)(lVar2 + 0x100);
  uVar4 = *param_2;
  uVar5 = param_2[1];
  uVar6 = param_2[3];
  uVar7 = param_2[2];
  if (*(char *)(lVar2 + 0x108) != '\0') {
    lVar12 = 0;
    lVar9 = 8;
    lVar10 = 0;
    uVar11 = 0;
    while( true ) {
      if (uVar11 == (uint)lVar12) {
        do {
          if (puVar13 == puVar1) {
            return;
          }
          uVar11 = *puVar13;
          puVar13 = puVar13 + 1;
          lVar12 = *(longlong *)(*(longlong *)(lVar3 + 0x1a0) + 0x10 + (ulonglong)uVar11 * 0x48);
        } while (lVar12 == 0);
        lVar9 = *(longlong *)(lVar3 + 0x1a0) + (ulonglong)uVar11 * 0x48;
        if ((*(ulonglong *)(lVar2 + 0x110) < *(ulonglong *)(lVar9 + 0x40)) &&
           (uVar8 = *(ulonglong *)(*(longlong *)(lVar9 + 0x38) + *(ulonglong *)(lVar2 + 0x110) * 8),
           uVar8 != 0)) {
          lVar10 = *(longlong *)(*(longlong *)(lVar9 + 0x18) + 0x10 + ~uVar8 * 0x30);
        }
        else {
          lVar10 = 0;
        }
        lVar9 = *(longlong *)(lVar9 + 8);
        uVar11 = 0;
      }
      uVar8 = (ulonglong)uVar11;
      uStack_80 = *(undefined8 *)(lVar9 + uVar8 * 8);
      if ((int)uStack_80 == 0) break;
      uVar11 = uVar11 + 1;
      if (*(float *)(lVar10 + 0x18 + uVar8 * 0x24) <= 0.0) {
        uStack_78 = uVar4;
        uStack_70 = uVar5;
        uStack_68 = uVar7;
        uStack_60 = uVar6;
        pdb_140f04aa0(&uStack_80,&UNK_143463e20);
      }
    }
    return;
  }
  lVar12 = 0;
  lVar9 = 8;
  lVar10 = 0;
  uVar11 = 0;
  do {
    if (uVar11 == (uint)lVar12) {
      do {
        if (puVar13 == puVar1) {
          return;
        }
        uVar11 = *puVar13;
        puVar13 = puVar13 + 1;
        lVar12 = *(longlong *)(*(longlong *)(lVar3 + 0x100) + 0x58 + (ulonglong)uVar11 * 0xa0);
      } while (lVar12 == 0);
      lVar9 = *(longlong *)(lVar3 + 0x100) + (ulonglong)uVar11 * 0xa0;
      uVar8 = (ulonglong)*(uint *)(lVar9 + 0x94);
      if (*(ulonglong *)(lVar2 + 0x110) <
          *(ulonglong *)(*(longlong *)(lVar3 + 0x1a0) + 0x40 + uVar8 * 0x48)) {
        lVar10 = *(longlong *)(lVar3 + 0x1a0) + uVar8 * 0x48;
        uVar8 = *(ulonglong *)(*(longlong *)(lVar10 + 0x38) + *(ulonglong *)(lVar2 + 0x110) * 8);
        if (uVar8 == 0) goto LAB_14215ec02;
        lVar10 = *(longlong *)(*(longlong *)(lVar10 + 0x18) + 0x10 + ~uVar8 * 0x30);
      }
      else {
LAB_14215ec02:
        lVar10 = 0;
      }
      lVar9 = *(longlong *)(lVar9 + 0x50);
      uVar11 = 0;
    }
    uVar8 = (ulonglong)uVar11;
    uStack_80 = *(undefined8 *)(lVar9 + uVar8 * 0x10);
    if ((int)uStack_80 == 0) {
      return;
    }
    uVar11 = uVar11 + 1;
    if (*(float *)(lVar10 + 0x18 + (ulonglong)~*(uint *)(uVar8 * 0x10 + lVar9 + 8) * 0x24) <= 0.0) {
      uStack_78 = uVar4;
      uStack_70 = uVar5;
      uStack_68 = uVar7;
      uStack_60 = uVar6;
      pdb_140f04aa0(&uStack_80,&UNK_143463e20);
    }
  } while( true );
}

