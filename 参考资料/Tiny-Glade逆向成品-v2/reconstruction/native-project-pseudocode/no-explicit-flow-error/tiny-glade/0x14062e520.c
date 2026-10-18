// VA 0x14062e520, PDB extent 657 bytes
// tiny_glade::gui::gui_tod_editor::show_tod_editor
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/gui_tod_editor.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tiny_glade::gui::gui_tod_editor::show_tod_editor
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/gui_tod_editor.rs
   Extent: 657 */

void pdb_14062e520(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined1 auStack_478 [16];
  longlong *aplStack_468 [6];
  int iStack_438;
  undefined4 uStack_358;
  undefined4 uStack_354;
  undefined8 uStack_350;
  undefined4 uStack_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined4 uStack_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined4 uStack_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined1 auStack_2f0 [154];
  undefined8 uStack_256;
  undefined8 uStack_24e;
  undefined4 uStack_246;
  undefined4 uStack_242;
  undefined4 uStack_23e;
  undefined4 uStack_23a;
  undefined4 uStack_236;
  undefined4 uStack_232;
  undefined4 uStack_22e;
  undefined4 uStack_22a;
  undefined4 uStack_226;
  undefined4 uStack_222;
  undefined4 uStack_21e;
  undefined4 uStack_21a;
  undefined8 uStack_216;
  undefined8 uStack_20e;
  undefined8 uStack_206;
  undefined8 uStack_1f0;
  undefined8 uStack_1e4;
  undefined4 uStack_1dc;
  undefined1 auStack_1d8 [153];
  undefined1 uStack_13f;
  undefined8 uStack_13e;
  undefined8 uStack_136;
  undefined4 uStack_12e;
  undefined4 uStack_12a;
  undefined4 uStack_126;
  undefined4 uStack_122;
  undefined4 uStack_11e;
  undefined4 uStack_11a;
  undefined4 uStack_116;
  undefined4 uStack_112;
  undefined4 uStack_10e;
  undefined4 uStack_10a;
  undefined4 uStack_106;
  undefined4 uStack_102;
  undefined8 uStack_fe;
  undefined8 uStack_f6;
  undefined8 uStack_ee;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined8 uStack_cc;
  undefined4 uStack_c4;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  byte *pbStack_50;
  undefined1 uStack_41;
  undefined8 uStack_40;
  
  uStack_40 = 0xfffffffffffffffe;
  if (*(char *)(param_2 + 0x30) != '\0') {
    uStack_41 = 1;
    pdb_14058f3d0(auStack_478,&UNK_142f898f9,0x12);
    uStack_350 = &uStack_41;
    pub_142e32760(auStack_2f0,auStack_478,0x118);
    uStack_58 = uStack_2f8;
    uStack_68 = uStack_308;
    uStack_60 = uStack_300;
    uStack_78 = uStack_318;
    uStack_70 = uStack_310;
    uStack_88 = uStack_328;
    uStack_84 = uStack_324;
    uStack_80 = uStack_320;
    uStack_7c = uStack_31c;
    uStack_98 = uStack_338;
    uStack_94 = uStack_334;
    uStack_90 = uStack_330;
    uStack_8c = uStack_32c;
    uStack_a8 = uStack_348;
    uStack_a4 = uStack_344;
    uStack_a0 = uStack_340;
    uStack_9c = uStack_33c;
    uStack_b8 = uStack_358;
    uStack_b4 = uStack_354;
    uStack_b0 = (undefined4)uStack_350;
    uStack_ac = uStack_350._4_4_;
    pub_142e32760(auStack_1d8,auStack_2f0,0x99);
    uStack_13e = uStack_256;
    uStack_136 = uStack_24e;
    uStack_12e = uStack_246;
    uStack_12a = uStack_242;
    uStack_126 = uStack_23e;
    uStack_122 = uStack_23a;
    uStack_11e = uStack_236;
    uStack_11a = uStack_232;
    uStack_116 = uStack_22e;
    uStack_112 = uStack_22a;
    uStack_10e = uStack_226;
    uStack_10a = uStack_222;
    uStack_106 = uStack_21e;
    uStack_102 = uStack_21a;
    uStack_fe = uStack_216;
    uStack_f6 = uStack_20e;
    uStack_ee = uStack_206;
    uStack_d8 = uStack_1f0;
    uStack_cc = uStack_1e4;
    uStack_c4 = uStack_1dc;
    uStack_13f = 1;
    uStack_d0 = 0x446b0000;
    uStack_c0 = _DAT_142f89680;
    pdb_14007ee60();
    pbStack_50 = pub_1406abab0(0x30,8);
    if (pbStack_50 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,0x30);
    }
    *(longlong *)pbStack_50 = param_2;
    *(undefined8 *)(pbStack_50 + 8) = param_3;
    *(undefined8 *)(pbStack_50 + 0x10) = param_4;
    *(undefined8 *)(pbStack_50 + 0x18) = param_5;
    *(undefined8 *)(pbStack_50 + 0x20) = param_6;
    *(undefined8 *)(pbStack_50 + 0x28) = param_7;
    pdb_14058f940(auStack_478,auStack_1d8,param_1,pbStack_50,&UNK_142f89bd8);
    if (iStack_438 != 2) {
      LOCK();
      *aplStack_468[0] = *aplStack_468[0] + -1;
      UNLOCK();
      if (*aplStack_468[0] == 0) {
        pdb_140d71bf0(aplStack_468);
      }
    }
    *(undefined1 *)(param_2 + 0x30) = uStack_41;
  }
  return;
}

