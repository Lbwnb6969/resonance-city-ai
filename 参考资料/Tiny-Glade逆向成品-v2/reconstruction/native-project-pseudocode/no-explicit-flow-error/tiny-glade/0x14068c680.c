// VA 0x14068c680, PDB extent 708 bytes
// tiny_glade::gui::settings::do_gui_escape_menu_settings::closure$5
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/settings.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tiny_glade::gui::settings::do_gui_escape_menu_settings::closure$5
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/settings.rs
   Extent: 708 */

void pdb_14068c680(undefined4 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 uStack_119;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 **ppuStack_b8;
  undefined **ppuStack_b0;
  code *pcStack_a8;
  undefined **ppuStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  
  uVar3 = *(undefined8 *)(param_4 + 8);
  puStack_80 = &UNK_142f95788;
  uStack_78 = 5;
  uStack_118 = param_3;
  uStack_110 = pdb_14072aeb0(&puStack_80);
  uVar1 = _UNK_142f3b4f8;
  uVar5 = _DAT_142f3b4f0;
  puStack_108 = (undefined *)_DAT_142f3b4f0;
  uStack_100 = _UNK_142f3b4f8;
  puStack_108 = (undefined *)pdb_1400affa0(&uStack_110);
  uStack_110 = uVar3;
  uVar3 = pdb_1400b0130(&uStack_110);
  pdb_14072caa0(&uStack_110,param_4,uVar3);
  pdb_140734630(&puStack_80,&uStack_110,&UNK_142f9578d,0x18);
  puStack_90 = &UNK_142f957a5;
  uStack_88 = 4;
  uVar3 = pdb_14072cd40(auStack_70);
  ppuStack_b0 = (undefined **)pdb_14072aeb0(&puStack_90);
  uStack_110 = pdb_140315970(&ppuStack_b0);
  puStack_108 = (undefined *)uVar5;
  uStack_100 = uVar1;
  puStack_108 = (undefined *)pdb_1400affa0(&uStack_110);
  uStack_110 = uVar3;
  uVar4 = pdb_1400b0130(&uStack_110);
  cVar2 = pdb_14072c9c0(auStack_70,uVar4);
  uVar3 = uStack_118;
  if (cVar2 == '\0') {
    if (*_DAT_143ca8e90 != 0) {
      pcStack_a8 = pdb_1402ed420;
      pcStack_98 = pdb_1402ed420;
      uStack_110 = 0;
      puStack_108 = &UNK_142f9589f;
      uStack_100 = 0x14;
      uStack_f8 = 0;
      puStack_f0 = &UNK_142f95876;
      uStack_e8 = 0x28;
      uStack_e0 = 1;
      puStack_d8 = &UNK_142f9589f;
      uStack_d0 = 0x14;
      uStack_c8 = 0xf100000001;
      puStack_c0 = &UNK_142f95858;
      ppuStack_b8 = &ppuStack_b0;
      ppuStack_b0 = &puStack_80;
      ppuStack_a0 = &puStack_90;
      pdb_140f332f0(&uStack_119,&uStack_110);
    }
    ppuStack_b0 = (undefined **)&UNK_142f957a5;
    pcStack_a8 = (code *)0x4;
    uStack_110 = pdb_14072aeb0(&ppuStack_b0);
    puStack_108 = (undefined *)uVar5;
    uStack_100 = uVar1;
    puStack_108 = (undefined *)pdb_1400affa0(&uStack_110);
    uStack_110 = uStack_68;
    uVar5 = pdb_1400b0130(&uStack_110);
    pdb_14072caa0(&uStack_110,auStack_70,uVar5);
  }
  else {
    pdb_14072cd20(&uStack_110,auStack_70,uVar4);
    uVar3 = uStack_118;
  }
  pdb_14068d040(param_1,param_2,uVar3,&uStack_110);
  return;
}

