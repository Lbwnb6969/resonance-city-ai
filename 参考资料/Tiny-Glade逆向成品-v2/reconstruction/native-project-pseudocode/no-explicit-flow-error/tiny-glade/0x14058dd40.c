// VA 0x14058dd40, PDB extent 1386 bytes
// tiny_glade::gui::gui_error_log::do_gui_error_log
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/gui_error_log.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tiny_glade::gui::gui_error_log::do_gui_error_log
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/gui_error_log.rs
   Extent: 1386 */

void pdb_14058dd40(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  code *pcVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulonglong uStack_3b8;
  longlong lStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined4 uStack_398;
  undefined4 uStack_394;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined2 uStack_2dc;
  ulonglong uStack_2d8;
  undefined4 uStack_2d0;
  undefined1 auStack_2cc [156];
  uint6 uStack_230;
  undefined2 uStack_22a;
  undefined6 uStack_228;
  undefined2 uStack_222;
  undefined4 uStack_220;
  undefined2 uStack_21c;
  undefined2 uStack_21a;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  int iStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  ulonglong uStack_1c8;
  longlong lStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 uStack_198;
  byte *pbStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 uStack_168;
  undefined4 uStack_167;
  undefined4 uStack_163;
  undefined3 uStack_15f;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined4 uStack_130;
  undefined2 uStack_12c;
  undefined4 uStack_12a;
  longlong lStack_120;
  undefined4 uStack_118;
  undefined4 uStack_104;
  undefined4 uStack_f8;
  undefined1 uStack_ec;
  undefined2 uStack_e0;
  undefined4 uStack_de;
  undefined1 uStack_da;
  undefined1 uStack_d7;
  ulonglong uStack_d6;
  undefined6 uStack_ce;
  undefined2 uStack_c8;
  undefined6 uStack_c6;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined2 uStack_a8;
  undefined1 uStack_a6;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined8 uStack_94;
  undefined8 uStack_8c;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined2 uStack_44;
  undefined1 uStack_42;
  byte *pbStack_38;
  undefined1 uStack_29;
  undefined8 uStack_28;
  
  uStack_28 = 0xfffffffffffffffe;
  lVar4 = *param_1;
  if (((!SBORROW8(0,*(longlong *)(lVar4 + 0x90)) ||
        (char)(!SBORROW8(0,*(longlong *)(lVar4 + 0x70)) + !SBORROW8(0,*(longlong *)(lVar4 + 0x50)) +
              !SBORROW8(0,*(longlong *)(lVar4 + 0x30)) + !SBORROW8(0,*(longlong *)(lVar4 + 0x10)))
        != '\0') && (lVar1 = *param_2, lVar1 != 0)) && (*(char *)(lVar4 + 199) == '\x01')) {
    pdb_14007ee60();
    pbStack_190 = pub_1406abab0(1,1);
    if (pbStack_190 == (byte *)0x0) {
      pdb_142dc7e2a(1,1);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    *pbStack_190 = 0x20;
    uStack_198 = 1;
    uStack_188 = 1;
    uStack_180 = (ulonglong)uStack_180._4_4_ << 0x20;
    uStack_170 = 0;
    uStack_178 = (ulonglong)uStack_178._4_4_ << 0x20;
    uStack_1c8 = 3;
    uStack_1b0 = 6;
    uStack_168 = 0;
    uStack_163 = 0;
    uStack_15f = 0;
    uStack_230 = 4;
    uStack_22a = 0;
    pdb_140592870(&uStack_3b8,&uStack_1c8,&uStack_230);
    lVar4 = 0;
    if (2 < uStack_3b8) {
      lVar4 = uStack_3b8 - 3;
    }
    if (lVar4 == 0) {
      puVar7 = &uStack_380;
      puVar5 = &uStack_378;
    }
    else if (lVar4 == 1) {
      puVar7 = &uStack_3a8;
      puVar5 = &uStack_3a0;
    }
    else {
      puVar7 = (undefined8 *)(*(longlong *)(lStack_3b0 + 0x28) + 0x18);
      puVar5 = (undefined8 *)(*(longlong *)(lStack_3b0 + 0x28) + 0x20);
    }
    uStack_1c8 = 0x452821e638d01376;
    lStack_1c0 = 0xbe5466cf34e90c6e;
    uStack_1b8 = 0xc0ac29b7c97c50de;
    uStack_1b0 = 0x3f84d5b5b5470913;
    lStack_120 = pdb_140572df0(&uStack_1c8,*puVar7,*puVar5);
    lStack_120 = lStack_120 + (ulonglong)(lStack_120 == 0);
    uStack_1c8 = uStack_3b8;
    lStack_1c0 = lStack_3b0;
    uStack_1a8 = uStack_398;
    uStack_1a4 = uStack_394;
    uStack_1a0 = uStack_390;
    uStack_19c = uStack_38c;
    uStack_188 = uStack_378;
    uStack_180 = uStack_370;
    uStack_178 = uStack_368;
    uStack_170 = uStack_360;
    uStack_168 = (undefined1)uStack_358;
    uStack_167 = (undefined4)((ulonglong)uStack_358 >> 8);
    uStack_163._0_3_ = (undefined3)((ulonglong)uStack_358 >> 0x28);
    uStack_163._3_1_ = (undefined1)uStack_350;
    uStack_15f = (undefined3)((ulonglong)uStack_350 >> 8);
    uStack_15c = (undefined4)((ulonglong)uStack_350 >> 0x20);
    uStack_22a = 0;
    uStack_228 = 0;
    uStack_222 = 0;
    uStack_220 = 0;
    uStack_21c = 0;
    uStack_158 = 0;
    uStack_150 = 0;
    uStack_148 = _DAT_142f6bf90;
    uStack_140 = _UNK_142f6bf98;
    uStack_138 = 0;
    uStack_130 = 0x1010000;
    uStack_12c = 0;
    uStack_12a = 0x1010101;
    uStack_118 = 0;
    uStack_104 = 0;
    uStack_f8 = 0;
    uStack_ec = 3;
    uStack_e0 = 0;
    uStack_de = 0x1010101;
    uStack_da = 2;
    uStack_d7 = 2;
    uStack_c6 = 0;
    uStack_d6 = (ulonglong)uStack_230;
    uStack_ce = 0;
    uStack_c8 = 0;
    uStack_c0 = _DAT_142f6d7e0;
    uStack_b8 = _UNK_142f6d7e8;
    uStack_b0 = _DAT_142f6d7f0;
    uStack_a8 = 0x101;
    uStack_a6 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_44 = 0x100;
    uStack_42 = 1;
    pdb_1406edc30(&uStack_230);
    uStack_98 = 1;
    uStack_94 = CONCAT26(uStack_22a,uStack_230);
    uStack_8c = CONCAT26(uStack_222,uStack_228);
    uStack_80 = CONCAT22(uStack_21a,uStack_21c);
    uStack_84 = uStack_220;
    uStack_7c = uStack_218;
    uStack_78 = uStack_214;
    uStack_74 = uStack_210;
    uStack_70 = uStack_20c;
    uStack_6c = uStack_208;
    uStack_68 = uStack_204;
    uStack_64 = uStack_200;
    uStack_60 = uStack_1fc;
    uStack_5c = uStack_1f8;
    uStack_58 = uStack_1f4;
    iStack_54 = iStack_1f0;
    uStack_50 = uStack_1ec;
    uStack_4c = uStack_1e8;
    uStack_48 = uStack_1e4;
    pub_142e32760(&uStack_3b8,&uStack_1c8,0xdc);
    pub_142e32760(auStack_2cc,(longlong)&uStack_de + 2,0x9c);
    uStack_2dc = 2;
    uStack_2d8 = (ulonglong)_DAT_142f6d800;
    uStack_2d0 = 0x1000000;
    uStack_29 = 1;
    uVar6 = pdb_1406d0830(lVar1);
    pub_142e32760(&uStack_1c8,&uStack_3b8,0x188);
    pdb_14007ee60();
    pbStack_38 = pub_1406abab0(0x10,8);
    if (pbStack_38 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,0x10);
    }
    *(longlong **)pbStack_38 = param_1;
    *(undefined8 *)(pbStack_38 + 8) = param_3;
    pdb_14058f940(&uStack_230,&uStack_3b8,uVar6,pbStack_38,&UNK_142f6d940);
    if (iStack_1f0 != 2) {
      plVar3 = (longlong *)CONCAT26(uStack_21a,CONCAT24(uStack_21c,uStack_220));
      LOCK();
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (*plVar3 == 0) {
        pdb_140d71bf0(&uStack_220);
      }
    }
  }
  return;
}

