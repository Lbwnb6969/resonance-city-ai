// VA 0x140373b70, PDB extent 695 bytes
// tiny_glade::gui::settings::ui_settings_developer
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/settings.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tiny_glade::gui::settings::ui_settings_developer
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/settings.rs
   Extent: 695 */

void pdb_140373b70(byte *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  longlong lVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  
  pdb_140724ba0(&uStack_70,param_3,&UNK_142f44aee,0x23);
  uVar8 = pdb_140724c30();
  uVar1 = *(undefined4 *)((longlong)param_4 + 0x1c);
  puVar2 = (undefined4 *)param_4[2];
  *puVar2 = uVar1;
  lVar3 = *param_4;
  bVar4 = pdb_14030bc20(param_2,&UNK_142f44b11,0xf,&uStack_70,uVar8,lVar3 + 0xe3);
  bVar6 = *param_1;
  *param_1 = bVar4 | bVar6;
  pdb_140724ba0(&uStack_70,param_3,&UNK_142f44b20,0x37);
  uVar8 = pdb_140724c30();
  *puVar2 = uVar1;
  bVar5 = pdb_14030bc20(param_2,&UNK_142f44b57,0xf,&uStack_70,uVar8,lVar3 + 0xe0);
  bVar5 = bVar5 | bVar4 | bVar6;
  *param_1 = bVar5;
  pdb_140724ba0(&uStack_70,param_3,&UNK_142f44b66,0x43);
  uVar8 = pdb_140724c30();
  *puVar2 = uVar1;
  bVar6 = pdb_14030bc20(param_2,&UNK_142f44ba9,0xe,&uStack_70,uVar8,lVar3 + 0xe1);
  bVar6 = bVar6 | bVar5;
  *param_1 = bVar6;
  pdb_140724ba0(&uStack_70,param_3,&UNK_142f44bb7,0x30);
  uVar8 = pdb_140724c30();
  *puVar2 = uVar1;
  bVar4 = pdb_14030bc20(param_2,&UNK_142f44be7,0x17,&uStack_70,uVar8,lVar3 + 0xe2);
  bVar4 = bVar4 | bVar6;
  *param_1 = bVar4;
  pdb_140724ba0(&uStack_70,param_3,&UNK_142f44bfe,0x3a);
  uVar8 = pdb_140724c30();
  *puVar2 = uVar1;
  bVar6 = pdb_14030bc20(param_2,&UNK_142f44c38,0x11,&uStack_70,uVar8,lVar3 + 0xbf);
  bVar6 = bVar6 | bVar4;
  *param_1 = bVar6;
  pdb_140724ba0(&uStack_70,param_3,&UNK_142f44c49,0x12);
  uVar8 = pdb_140724c30();
  *puVar2 = uVar1;
  bVar4 = pdb_14030bc20(param_2,&UNK_142f44c5b,9,&uStack_70,uVar8,lVar3 + 0xe6);
  *param_1 = (bVar4 | bVar6) & 1;
  pdb_140734440(&uStack_70,param_2,&UNK_142f44c64,0x2a);
  uVar7 = pdb_140726ff0(&uStack_70);
  pdb_14060a7e0(uVar7,_DAT_142e37994);
  uStack_48 = uStack_60;
  uStack_58 = uStack_70;
  uStack_54 = uStack_6c;
  uStack_50 = uStack_68;
  uStack_4c = uStack_64;
  pdb_140727040(&uStack_70,&uStack_58,0xff4020ff);
  pdb_1406ccf20(&uStack_58,&uStack_70);
  return;
}

