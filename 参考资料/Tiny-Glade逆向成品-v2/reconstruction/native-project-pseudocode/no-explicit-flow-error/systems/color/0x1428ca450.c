// VA 0x1428ca450, PDB extent 381 bytes
// system_color::show_color_menu::publish_palette_bounds
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/color/src/show_color_menu.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: system_color::show_color_menu::publish_palette_bounds
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/color/src/show_color_menu.rs
   Extent: 381 */

void pdb_1428ca450(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  longlong lVar2;
  undefined4 *puVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 auStack_d8 [5];
  undefined8 uStack_b0;
  longlong lStack_88;
  longlong lStack_80;
  longlong lStack_78;
  longlong lStack_70;
  longlong lStack_68;
  longlong lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  char cStack_28;
  
  lStack_70 = *param_1;
  lStack_88 = param_1[1];
  lStack_68 = *(longlong *)(lStack_70 + 0xf8);
  cStack_28 = *(char *)(lStack_70 + 0x108);
  lVar2 = *(longlong *)(lStack_70 + 0x100) * 4;
  uVar5 = 0;
  lVar4 = 0;
  if (cStack_28 == '\0') {
    do {
      if (lVar2 - lVar4 == 0) goto LAB_1428ca592;
      puVar1 = (uint *)(lStack_68 + lVar4);
      lVar4 = lVar4 + 4;
    } while (*(longlong *)(*(longlong *)(lStack_88 + 0x100) + 0x58 + (ulonglong)*puVar1 * 0xa0) == 0
            );
  }
  else {
    do {
      if (lVar2 - lVar4 == 0) goto LAB_1428ca592;
      puVar1 = (uint *)(lStack_68 + lVar4);
      lVar4 = lVar4 + 4;
    } while (*(longlong *)(*(longlong *)(lStack_88 + 0x1a0) + 0x10 + (ulonglong)*puVar1 * 0x48) == 0
            );
  }
  lStack_60 = lStack_68 + *(longlong *)(lStack_70 + 0x100) * 4;
  lStack_80 = lStack_88 + 0x198;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  auStack_d8[0] = 0;
  uStack_b0 = 0;
  lStack_78 = lStack_88 + 0xf8;
  uStack_58 = 8;
  uStack_50 = 0;
  uStack_48 = 8;
  pdb_142b3db80(&uStack_e8,auStack_d8);
  uVar5 = 1;
LAB_1428ca592:
  *(undefined4 *)param_2[2] = *(undefined4 *)((longlong)param_2 + 0x1c);
  puVar3 = (undefined4 *)*param_2;
  puVar3[4] = uStack_dc;
  *puVar3 = uVar5;
  *(undefined8 *)(puVar3 + 1) = uStack_e8;
  puVar3[3] = uStack_e0;
  return;
}

