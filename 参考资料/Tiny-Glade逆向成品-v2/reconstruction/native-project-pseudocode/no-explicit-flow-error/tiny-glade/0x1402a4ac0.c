// VA 0x1402a4ac0, PDB extent 869 bytes
// tiny_glade::gui::gui_controls::show_control_tweakers
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/gui_controls.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tiny_glade::gui::gui_controls::show_control_tweakers
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/gui_controls.rs
   Extent: 869 */

void pdb_1402a4ac0(byte *param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  longlong lStack_88;
  ulonglong uStack_80;
  undefined4 uStack_78;
  undefined1 uStack_74;
  undefined1 auStack_70 [48];
  
  uVar6 = 0x24;
  uVar4 = pdb_140dc6290(&UNK_142e65629,0x24);
  pdb_140724ba0(auStack_70,param_3,1,0);
  uVar7 = pdb_140724c30();
  uVar5 = _DAT_142e3c660;
  lStack_88 = param_4 + 0x108;
  uStack_78 = 0x40000000;
  uStack_74 = 0;
  uStack_80 = _DAT_142e3c660;
  bVar1 = pdb_140308ef0(param_2,uVar4,uVar6,auStack_70,uVar7,&lStack_88);
  bVar3 = *param_1;
  *param_1 = bVar1 | bVar3;
  uVar6 = 0x24;
  uVar4 = pdb_140dc6290(&UNK_142e6564d,0x24);
  pdb_140724ba0(auStack_70,param_3,1,0);
  uVar7 = pdb_140724c30();
  lStack_88 = param_4 + 0x10c;
  uStack_78 = 0x40000000;
  uStack_74 = 0;
  uStack_80 = uVar5;
  bVar2 = pdb_140308ef0(param_2,uVar4,uVar6,auStack_70,uVar7,&lStack_88);
  bVar2 = bVar2 | bVar1 | bVar3;
  *param_1 = bVar2;
  uVar4 = 0x1e;
  uVar5 = pdb_140dc6290(&UNK_142e65671,0x1e);
  pdb_140724ba0(&lStack_88,param_3,1,0);
  uVar7 = pdb_140724c30();
  bVar3 = pdb_14030bc20(param_2,uVar5,uVar4,&lStack_88,uVar7,param_4 + 0x120);
  bVar3 = bVar3 | bVar2;
  *param_1 = bVar3;
  uVar4 = 0x1e;
  uVar5 = pdb_140dc6290(&UNK_142e6568f,0x1e);
  pdb_140724ba0(&lStack_88,param_3,1,0);
  uVar7 = pdb_140724c30();
  bVar1 = pdb_14030bc20(param_2,uVar5,uVar4,&lStack_88,uVar7,param_4 + 0x11f);
  bVar1 = bVar1 | bVar3;
  *param_1 = bVar1;
  uVar4 = 0x2a;
  uVar5 = pdb_140dc6290(&UNK_142e656ad,0x2a);
  pdb_140724ba0(&lStack_88,param_3,1,0);
  uVar7 = pdb_140724c30();
  if (*(char *)(param_4 + 0x11c) == '\x06') {
    *(undefined1 *)(param_4 + 0x11c) = 0;
  }
  bVar3 = pdb_1403093b0(param_2,uVar5,uVar4,&lStack_88,uVar7,(undefined1 *)(param_4 + 0x11c));
  bVar1 = bVar1 | bVar3;
  *param_1 = bVar1;
  uVar4 = 0x26;
  uVar5 = pdb_140dc6290(&UNK_142e656d7,0x26);
  pdb_140724ba0(&lStack_88,param_3,1,0);
  uVar7 = pdb_140724c30();
  if (*(char *)(param_4 + 0x11e) == '\x06') {
    *(undefined1 *)(param_4 + 0x11e) = 0;
  }
  bVar3 = pdb_1403093b0(param_2,uVar5,uVar4,&lStack_88,uVar7,(undefined1 *)(param_4 + 0x11e));
  bVar1 = bVar1 | bVar3;
  *param_1 = bVar1;
  if ((*(byte *)(param_4 + 0x11c) | 2) == 3) {
    uVar4 = 0x2c;
    uVar5 = pdb_140dc6290(&UNK_142e656fd,0x2c);
    pdb_140724ba0(auStack_70,param_3,1,0);
    uVar7 = pdb_140724c30();
    lStack_88 = param_4 + 0x110;
    uStack_78 = 0x3f000000;
    uStack_74 = 0;
    uStack_80 = (ulonglong)_DAT_142e37ad4;
    bVar3 = pdb_140308ef0(param_2,uVar5,uVar4,auStack_70,uVar7,&lStack_88);
    *param_1 = bVar1 | bVar3;
  }
  return;
}

