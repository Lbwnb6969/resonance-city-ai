// VA 0x1403705f0, PDB extent 658 bytes
// tiny_glade::gui::settings::ui_settings_audio
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/settings.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tiny_glade::gui::settings::ui_settings_audio
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/settings.rs
   Extent: 658 */

void pdb_1403705f0(byte *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  longlong lVar1;
  uint uVar2;
  undefined4 *puVar3;
  byte *pbVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  longlong lStack_b0;
  ulonglong uStack_a8;
  undefined4 uStack_a0;
  undefined1 uStack_9c;
  undefined4 uStack_94;
  undefined4 *puStack_90;
  undefined1 auStack_88 [24];
  undefined8 uStack_70;
  undefined8 uStack_68;
  byte *pbStack_60;
  
  uVar9 = 0x20;
  uStack_68 = param_2;
  uVar8 = pdb_140dc6290(&UNK_142f449fe,0x20);
  pdb_140724ba0(auStack_88,param_3,1,0);
  uVar11 = pdb_140724c30();
  uStack_94 = *(undefined4 *)((longlong)param_4 + 0x1c);
  puStack_90 = (undefined4 *)param_4[2];
  *puStack_90 = uStack_94;
  uVar2 = _DAT_142e3b1d8;
  lVar1 = *param_4;
  lStack_b0 = lVar1 + 0xf8;
  uStack_a0 = 0x40000000;
  uStack_9c = 0;
  uStack_a8 = (ulonglong)_DAT_142e3b1d8;
  bVar5 = pdb_140308ef0(param_2,uVar8,uVar9,auStack_88,uVar11,&lStack_b0);
  bVar7 = *param_1;
  *param_1 = bVar5 | bVar7;
  uVar10 = 0x1f;
  pbStack_60 = param_1;
  uVar9 = pdb_140dc6290(&UNK_142f44a1e,0x1f);
  pdb_140724ba0(auStack_88,param_3,1,0);
  uVar12 = pdb_140724c30();
  uVar8 = uStack_68;
  puVar3 = puStack_90;
  uVar11 = uStack_94;
  *puStack_90 = uStack_94;
  lStack_b0 = lVar1 + 0xfc;
  uStack_a0 = 0x40000000;
  uStack_9c = 0;
  uStack_a8 = (ulonglong)uVar2;
  bVar6 = pdb_140308ef0(uStack_68,uVar9,uVar10,auStack_88,uVar12,&lStack_b0);
  pbVar4 = pbStack_60;
  bVar6 = bVar6 | bVar5 | bVar7;
  *pbStack_60 = bVar6;
  uVar10 = 0x21;
  uVar9 = pdb_140dc6290(&UNK_142f44a3d);
  uStack_70 = uVar10;
  pdb_140724ba0(auStack_88,param_3,1,0);
  uVar12 = pdb_140724c30();
  *puVar3 = uVar11;
  lStack_b0 = lVar1 + 0x100;
  uStack_a0 = 0x40000000;
  uStack_9c = 0;
  uStack_a8 = (ulonglong)uVar2;
  bVar7 = pdb_140308ef0(uVar8,uVar9,uStack_70,auStack_88,uVar12,&lStack_b0);
  bVar7 = bVar7 | bVar6;
  *pbVar4 = bVar7;
  uVar10 = 0x22;
  uVar9 = pdb_140dc6290(&UNK_142f44a5e,0x22);
  pdb_140724ba0(auStack_88,param_3,1,0);
  uVar12 = pdb_140724c30();
  *puStack_90 = uVar11;
  lStack_b0 = lVar1 + 0x104;
  uStack_a0 = 0x40000000;
  uStack_9c = 0;
  uStack_a8 = (ulonglong)uVar2;
  bVar5 = pdb_140308ef0(uVar8,uVar9,uVar10,auStack_88,uVar12,&lStack_b0);
  *pbVar4 = bVar5 | bVar7;
  return;
}

