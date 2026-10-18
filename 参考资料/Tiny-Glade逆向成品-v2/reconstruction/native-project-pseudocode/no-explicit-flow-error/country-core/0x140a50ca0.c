// VA 0x140a50ca0, PDB extent 485 bytes
// country_core::systems::wall::draw_wall::restore_in_progress_wall_appearance
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/draw_wall.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::wall::draw_wall::restore_in_progress_wall_appearance
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/draw_wall.rs
   Extent: 485 */

void pdb_140a50ca0(longlong param_1,longlong param_2,longlong *param_3,longlong *param_4,
                  longlong *param_5)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 uStack_c1;
  longlong *plStack_c0;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 **ppuStack_48;
  
  uVar3 = *(undefined8 *)(param_2 + 0x80);
  cVar1 = *(char *)(param_2 + 0xa5);
  plStack_c0 = param_4;
  uStack_b8 = uVar3;
  lVar5 = pdb_1417bd890(param_1,&uStack_b8);
  if (lVar5 == 0) {
    if (1 < *_DAT_143ca8e90) {
      pcStack_a8 = pdb_140c04ef0;
      uStack_a0 = 0;
      puStack_98 = &UNK_143021dde;
      uStack_90 = 0x2b;
      uStack_88 = 0;
      puStack_80 = &UNK_143021da7;
      uStack_78 = 0x36;
      uStack_70 = 2;
      puStack_68 = &UNK_143021dde;
      uStack_60 = 0x2b;
      uStack_58 = 0xfd00000001;
      puStack_50 = &UNK_143021d78;
      ppuStack_48 = &puStack_b0;
      puStack_b0 = &uStack_b8;
      pdb_140f332f0(&uStack_c1,&uStack_a0);
    }
  }
  else {
    pdb_1403b05d0(param_1 + 0x60,uVar3);
    *(char *)(lVar5 + 0x69) = cVar1;
  }
  uVar2 = *(undefined4 *)(param_2 + 0x98);
  if (*(char *)(param_2 + 0xa4) == '\0') {
    if (cVar1 == '\0') {
      *(undefined4 *)param_3[2] = *(undefined4 *)((longlong)param_3 + 0x1c);
      lVar5 = *param_3;
      lVar6 = *(longlong *)(lVar5 + 0x30);
      uVar7 = *(undefined8 *)(lVar5 + 0x40);
      if (lVar6 == *(longlong *)(lVar5 + 0x20)) {
        pdb_142d7e830(lVar5 + 0x20);
      }
    }
    else {
      *(undefined4 *)plStack_c0[2] = *(undefined4 *)((longlong)plStack_c0 + 0x1c);
      lVar5 = *plStack_c0;
      lVar6 = *(longlong *)(lVar5 + 0x30);
      uVar7 = *(undefined8 *)(lVar5 + 0x40);
      if (lVar6 == *(longlong *)(lVar5 + 0x20)) {
        pdb_142d7e830(lVar5 + 0x20);
      }
    }
  }
  else {
    *(undefined4 *)param_5[2] = *(undefined4 *)((longlong)param_5 + 0x1c);
    lVar5 = *param_5;
    lVar6 = *(longlong *)(lVar5 + 0x30);
    uVar7 = *(undefined8 *)(lVar5 + 0x40);
    if (lVar6 == *(longlong *)(lVar5 + 0x20)) {
      pdb_142d7e830(lVar5 + 0x20);
    }
  }
  lVar4 = *(longlong *)(lVar5 + 0x28);
  *(undefined8 *)(lVar4 + lVar6 * 0x18) = uVar7;
  *(undefined8 *)(lVar4 + 8 + lVar6 * 0x18) = uVar3;
  *(undefined4 *)(lVar4 + 0x10 + lVar6 * 0x18) = uVar2;
  *(undefined1 *)(lVar4 + 0x14 + lVar6 * 0x18) = 0;
  *(longlong *)(lVar5 + 0x30) = lVar6 + 1;
  *(longlong *)(lVar5 + 0x40) = *(longlong *)(lVar5 + 0x40) + 1;
  return;
}

