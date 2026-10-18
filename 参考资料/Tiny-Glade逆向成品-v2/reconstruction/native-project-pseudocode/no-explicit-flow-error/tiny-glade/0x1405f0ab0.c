// VA 0x1405f0ab0, PDB extent 1770 bytes
// tiny_glade::gui::gui_mod_editor::editing_view<tiny_glade::gui::gui_mod_editor::do_gui_mod_editor::closure_env$0>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/gui_mod_editor.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   tiny_glade::gui::gui_mod_editor::editing_view<tiny_glade::gui::gui_mod_editor::do_gui_mod_editor::closure_env$0>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/gui_mod_editor.rs
   Extent: 1770 */

void pdb_1405f0ab0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  byte *pbVar2;
  undefined *puVar3;
  undefined8 uVar4;
  bool bVar5;
  bool bVar6;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined8 uStack_208;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined8 uStack_1e8;
  ulonglong uStack_1e0;
  byte *pbStack_1d8;
  longlong *plStack_1d0;
  undefined1 uStack_1c8;
  undefined8 uStack_180;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 uStack_158;
  byte *pbStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined1 uStack_e8;
  undefined4 uStack_e7;
  undefined8 uStack_e3;
  undefined2 uStack_db;
  undefined1 uStack_d9;
  undefined2 uStack_d8;
  undefined1 uStack_d6;
  undefined1 uStack_d3;
  undefined4 auStack_b8 [2];
  undefined4 uStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined2 uStack_8c;
  undefined2 uStack_8a;
  undefined2 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 uStack_58;
  undefined4 uStack_57;
  undefined8 uStack_53;
  undefined2 uStack_4b;
  undefined1 uStack_49;
  ulonglong uStack_48;
  undefined1 uStack_3b;
  undefined1 uStack_3a;
  undefined1 uStack_39;
  undefined8 uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  if (*(char *)(param_2 + 0x1b0) != '\0') {
    pdb_140572d40(&uStack_148,&UNK_142f747bc,0x49);
    uStack_d8 = 0x200;
    uStack_d6 = 2;
    uStack_d3 = 2;
    pdb_140d7b910(auStack_b8,&uStack_148,param_1);
    plVar1 = (longlong *)CONCAT44(uStack_a4,uStack_a8);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      pdb_140d71bf0(&uStack_a8);
    }
  }
  pdb_140572d40(&uStack_148,&UNK_142f74805,0x62);
  uStack_d8 = 0x200;
  uStack_d6 = 2;
  uStack_d3 = 2;
  pdb_140d7b910(auStack_b8,&uStack_148,param_1);
  plVar1 = (longlong *)CONCAT44(uStack_a4,uStack_a8);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    pdb_140d71bf0(&uStack_a8);
  }
  if (SBORROW8(0,*(longlong *)(param_2 + 0xb0))) {
    if (!SBORROW8(0,*(longlong *)(param_2 + 200))) {
      pdb_1404372d0(auStack_b8,*(undefined8 *)(param_2 + 0xd0),*(undefined8 *)(param_2 + 0xd8));
      uStack_58 = 1;
      uStack_57 = 0xff6b6bff;
      uStack_128 = (undefined4)uStack_98;
      uStack_124 = uStack_98._4_4_;
      uStack_120 = uStack_90;
      uStack_114 = uStack_84;
      uStack_110 = uStack_80;
      uStack_10c = uStack_7c;
      uStack_108 = uStack_78;
      uStack_100 = uStack_70;
      uStack_f8 = uStack_68;
      uStack_f4 = uStack_64;
      uStack_f0 = uStack_60;
      uStack_ec = uStack_5c;
      uStack_e8 = 1;
      uStack_e7 = 0xff6b6bff;
      uStack_e3 = uStack_53;
      uStack_db = uStack_4b;
      uStack_d9 = uStack_49;
      uStack_d8 = 0x200;
      uStack_d6 = 2;
      uStack_d3 = 2;
      pdb_140d7b910(&uStack_1e0,&uStack_148,param_1);
      LOCK();
      *plStack_1d0 = *plStack_1d0 + -1;
      UNLOCK();
      if (*plStack_1d0 == 0) {
        pdb_140d71bf0(&plStack_1d0);
      }
    }
    if (*(longlong *)(param_2 + 0x58) != 0) {
      uStack_1e0 = 0x8000000000000000;
      uStack_168 = -0x8000000000000000;
      uStack_180 = -0x8000000000000000;
      uStack_148 = 0x452821e638d01376;
      uStack_140 = 0xbe5466cf34e90c6e;
      uStack_138 = 0xc0ac29b7c97c50de;
      uStack_130 = 0x3f84d5b5b5470913;
      uStack_98 = pdb_140572df0(&uStack_148,&UNK_142f748b9,0x10);
      uStack_98 = uStack_98 + (ulonglong)(uStack_98 == 0);
      auStack_b8[0] = 0;
      uStack_b0 = 0;
      uStack_a8 = _DAT_142f74520;
      uStack_a4 = _UNK_142f74524;
      uStack_a0 = _UNK_142f74528;
      uStack_9c = _UNK_142f7452c;
      uStack_90 = 0x1000100;
      uStack_8c = 0;
      uStack_8a = 0x101;
      uStack_88 = 0x101;
      pdb_14007ee60();
      pbVar2 = pub_1406abab0(0x38,8);
      if (pbVar2 == (byte *)0x0) {
        uStack_39 = 0;
        uStack_3a = 1;
        uStack_3b = 1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc7e11(8,0x38);
      }
      *(longlong *)pbVar2 = param_2 + 0x48;
      *(ulonglong **)(pbVar2 + 8) = &uStack_1e0;
      *(undefined8 **)(pbVar2 + 0x10) = &uStack_180;
      *(undefined8 *)(pbVar2 + 0x18) = param_5;
      *(undefined8 **)(pbVar2 + 0x20) = &uStack_168;
      *(undefined8 *)(pbVar2 + 0x28) = param_3;
      *(undefined8 *)(pbVar2 + 0x30) = param_4;
      uStack_39 = 0;
      uStack_3a = 1;
      uStack_3b = 1;
      pdb_1400d6a00(&uStack_148,auStack_b8,param_1,pbVar2,&UNK_142e3ee68);
      bVar5 = SBORROW8(0,uStack_1e0);
      if (!bVar5) {
        uStack_48 = uStack_1e0;
        pbStack_150 = pbStack_1d8;
        pdb_140acd110(param_2,pbStack_1d8,plStack_1d0,uStack_1c8);
        if (uStack_48 != 0) {
          pub_1406abac0(pbStack_150,uStack_48,1);
        }
      }
      bVar6 = SBORROW8(0,uStack_168);
      if (!bVar6) {
        uStack_1e8 = uStack_158;
        uStack_1f8 = (undefined4)uStack_168;
        uStack_1f4 = uStack_168._4_4_;
        uStack_1f0 = uStack_160;
        uStack_1ec = uStack_15c;
        uStack_39 = 0;
        uStack_3a = 0;
        uStack_3b = bVar5;
        pdb_140acd130(param_2,&uStack_1f8);
      }
      if (SBORROW8(0,uStack_180)) {
        return;
      }
      uStack_208 = uStack_170;
      uStack_218 = (undefined4)uStack_180;
      uStack_214 = uStack_180._4_4_;
      uStack_210 = uStack_178;
      uStack_20c = uStack_174;
      uStack_39 = 1;
      uStack_3b = bVar5;
      uStack_3a = bVar6;
      pdb_140ace8a0(param_2,&uStack_218);
      return;
    }
    puVar3 = &UNK_142f748c9;
    uVar4 = 0x15;
  }
  else {
    pdb_1404372d0(auStack_b8,*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(param_2 + 0xc0));
    uStack_58 = 1;
    uStack_57 = 0xff6b6bff;
    uStack_128 = (undefined4)uStack_98;
    uStack_124 = uStack_98._4_4_;
    uStack_120 = uStack_90;
    uStack_114 = uStack_84;
    uStack_110 = uStack_80;
    uStack_10c = uStack_7c;
    uStack_108 = uStack_78;
    uStack_100 = uStack_70;
    uStack_f8 = uStack_68;
    uStack_f4 = uStack_64;
    uStack_f0 = uStack_60;
    uStack_ec = uStack_5c;
    uStack_e8 = 1;
    uStack_e7 = 0xff6b6bff;
    uStack_e3 = uStack_53;
    uStack_db = uStack_4b;
    uStack_d9 = uStack_49;
    uStack_d8 = 0x200;
    uStack_d6 = 2;
    uStack_d3 = 2;
    pdb_140d7b910(&uStack_1e0,&uStack_148,param_1);
    LOCK();
    *plStack_1d0 = *plStack_1d0 + -1;
    UNLOCK();
    if (*plStack_1d0 == 0) {
      pdb_140d71bf0(&plStack_1d0);
    }
    puVar3 = &UNK_142f74867;
    uVar4 = 0x52;
  }
  pdb_140572d40(&uStack_148,puVar3,uVar4);
  uStack_d8 = 0x200;
  uStack_d6 = 2;
  uStack_d3 = 2;
  pdb_140d7b910(auStack_b8,&uStack_148,param_1);
  plVar1 = (longlong *)CONCAT44(uStack_a4,uStack_a8);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    pdb_140d71bf0(&uStack_a8);
  }
  return;
}

