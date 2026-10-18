// VA 0x14036f9d0, PDB extent 979 bytes
// tiny_glade::gui::settings::ui_settings_ui
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/settings.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tiny_glade::gui::settings::ui_settings_ui
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/settings.rs
   Extent: 979 */

void pdb_14036f9d0(byte *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
                  longlong *param_5)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  char cVar10;
  char cVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  longlong lVar18;
  undefined4 uVar19;
  uint *puStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined1 uStack_74;
  undefined8 uStack_70;
  undefined8 uStack_68;
  char *pcStack_60;
  undefined1 auStack_58 [24];
  
  uVar14 = 0x19;
  uVar12 = pdb_140dc6290(&UNK_142f44740,0x19);
  uStack_70 = param_3;
  pdb_140724ba0(auStack_58,param_3,1,0);
  uVar19 = pdb_140724c30();
  uVar1 = *(undefined4 *)((longlong)param_4 + 0x1c);
  puVar2 = (undefined4 *)param_4[2];
  *puVar2 = uVar1;
  lVar3 = *param_4;
  puStack_88 = (uint *)(lVar3 + 0xe8);
  uStack_78 = 0x40000000;
  uStack_74 = 0;
  uStack_80 = _DAT_142f44680;
  uStack_68 = param_2;
  bVar7 = pdb_140308ef0(param_2,uVar12,uVar14,auStack_58,uVar19,&puStack_88);
  bVar9 = *param_1;
  *param_1 = bVar7 | bVar9;
  uVar14 = 0x21;
  uVar12 = pdb_140dc6290(&UNK_142f4477f,0x21);
  pdb_140724ba0(&puStack_88,param_3,1,0);
  uVar19 = pdb_140724c30();
  *puVar2 = uVar1;
  bVar8 = pdb_14030b690(param_2,uVar12,uVar14,&puStack_88,uVar19,lVar3 + 0xf0);
  bVar8 = bVar8 | bVar7 | bVar9;
  *param_1 = bVar8;
  uVar15 = 0x20;
  uVar13 = pdb_140dc6290(&UNK_142f447a0,0x20);
  uVar16 = 0x24;
  uVar14 = pdb_140dc6290(&UNK_142f447c0,0x24);
  uVar12 = uStack_70;
  pdb_140724ba0(&puStack_88,uStack_70,uVar14,uVar16);
  uVar19 = pdb_140724c30();
  uVar14 = uStack_68;
  *puVar2 = uVar1;
  bVar9 = pdb_14030bc20(uStack_68,uVar13,uVar15,&puStack_88,uVar19,lVar3 + 0xf1);
  bVar9 = bVar9 | bVar8;
  *param_1 = bVar9;
  uVar16 = 0x1d;
  uVar13 = pdb_140dc6290(&UNK_142f447e4,0x1d);
  uVar17 = 0x21;
  uVar15 = pdb_140dc6290(&UNK_142f44801,0x21);
  pdb_140724ba0(&puStack_88,uVar12,uVar15,uVar17);
  uVar19 = pdb_140724c30();
  *puVar2 = uVar1;
  pcStack_60 = (char *)(lVar3 + 0xf4);
  cVar10 = pdb_14030bc20(uVar14,uVar13,uVar16,&puStack_88,uVar19,pcStack_60);
  if (*(char *)(lVar3 + 0xf4) == '\x01') {
    pdb_140724ba0(auStack_58,uStack_70,1,0);
    uVar19 = pdb_140724c30();
    *puVar2 = uVar1;
    uStack_78 = 0x43000000;
    uStack_74 = 0;
    uStack_80 = _DAT_142f44690;
    puStack_88 = (uint *)(lVar3 + 0xec);
    cVar11 = pdb_140308ef0(uStack_68,&UNK_142f44822,0x12,auStack_58,uVar19,&puStack_88);
    if (cVar10 == '\0' && cVar11 == '\0') goto LAB_14036fd12;
    cVar10 = *pcStack_60;
    *param_1 = 1;
    if (cVar10 != '\x01') goto LAB_14036fcc2;
    lVar18 = ((ulonglong)*(uint *)(lVar3 + 0xec) << 0x20) + 1;
  }
  else {
    if (cVar10 == '\0') goto LAB_14036fd12;
    *param_1 = 1;
LAB_14036fcc2:
    lVar18 = 0;
  }
  *(undefined4 *)param_5[2] = *(undefined4 *)((longlong)param_5 + 0x1c);
  lVar4 = *param_5;
  lVar5 = *(longlong *)(lVar4 + 0x30);
  uVar12 = *(undefined8 *)(lVar4 + 0x40);
  if (lVar5 == *(longlong *)(lVar4 + 0x20)) {
    pdb_142d7e980(lVar4 + 0x20);
  }
  lVar6 = *(longlong *)(lVar4 + 0x28);
  *(longlong *)(lVar6 + lVar5 * 0x10) = lVar18;
  *(undefined8 *)(lVar6 + 8 + lVar5 * 0x10) = uVar12;
  *(longlong *)(lVar4 + 0x30) = lVar5 + 1;
  *(longlong *)(lVar4 + 0x40) = *(longlong *)(lVar4 + 0x40) + 1;
  bVar9 = 1;
LAB_14036fd12:
  if (*_DAT_143ca4500 == '\0') {
    uVar14 = 0x15;
    uVar12 = pdb_140dc6290(&UNK_142f44834,0x15);
    pdb_140724ba0(&puStack_88,uStack_70,1,0);
    uVar19 = pdb_140724c30();
    *puVar2 = uVar1;
    bVar7 = pdb_14030bc20(uStack_68,uVar12,uVar14,&puStack_88,uVar19,lVar3 + 0xf3);
    *param_1 = bVar9 | bVar7;
  }
  return;
}

