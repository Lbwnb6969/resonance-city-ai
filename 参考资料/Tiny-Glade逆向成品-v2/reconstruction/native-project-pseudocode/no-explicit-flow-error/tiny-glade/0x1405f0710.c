// VA 0x1405f0710, PDB extent 923 bytes
// tiny_glade::gui::gui_mod_editor::modal_view<tiny_glade::gui::gui_mod_editor::do_gui_mod_editor::closure_env$0>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/gui_mod_editor.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   tiny_glade::gui::gui_mod_editor::modal_view<tiny_glade::gui::gui_mod_editor::do_gui_mod_editor::closure_env$0>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/gui_mod_editor.rs
   Extent: 923 */

void pdb_1405f0710(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined8 uStack_370;
  ulonglong uStack_368;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined4 uStack_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined4 uStack_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined4 uStack_338;
  undefined4 uStack_334;
  int iStack_330;
  undefined4 uStack_32c;
  undefined4 uStack_328;
  undefined4 uStack_324;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined2 uStack_292;
  undefined2 uStack_288;
  byte bStack_285;
  undefined8 uStack_284;
  undefined8 uStack_27c;
  undefined8 uStack_274;
  undefined8 uStack_26c;
  undefined8 uStack_264;
  undefined8 uStack_25c;
  undefined4 uStack_254;
  undefined8 uStack_24e;
  undefined8 uStack_246;
  undefined8 uStack_23e;
  undefined8 uStack_236;
  undefined8 uStack_22e;
  undefined8 uStack_226;
  undefined8 uStack_21e;
  undefined8 uStack_216;
  undefined8 uStack_20e;
  undefined8 uStack_206;
  undefined4 uStack_1fe;
  undefined4 uStack_1fa;
  undefined4 uStack_1f6;
  undefined4 uStack_1f2;
  undefined2 uStack_1ee;
  ushort uStack_1eb;
  undefined1 uStack_1e9;
  undefined8 uStack_1e8;
  ulonglong uStack_1e0;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  int iStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined2 uStack_10c;
  undefined2 uStack_10a;
  undefined8 uStack_108;
  undefined2 uStack_100;
  undefined1 uStack_fe;
  byte bStack_fd;
  undefined8 uStack_fc;
  undefined8 uStack_f4;
  undefined8 uStack_ec;
  undefined8 uStack_e4;
  undefined8 uStack_dc;
  undefined8 uStack_d4;
  undefined4 uStack_cc;
  undefined2 uStack_c8;
  undefined8 uStack_c6;
  undefined8 uStack_be;
  undefined8 uStack_b6;
  undefined8 uStack_ae;
  undefined8 uStack_a6;
  undefined8 uStack_9e;
  undefined8 uStack_96;
  undefined8 uStack_8e;
  undefined8 uStack_86;
  undefined8 uStack_7e;
  undefined4 uStack_76;
  undefined4 uStack_72;
  undefined4 uStack_6e;
  undefined4 uStack_6a;
  undefined2 uStack_66;
  undefined1 uStack_64;
  ushort uStack_63;
  undefined1 uStack_61;
  ulonglong uStack_58;
  byte *pbStack_50;
  byte *pbStack_40;
  char acStack_31 [9];
  
  acStack_31[1] = -2;
  acStack_31[2] = -1;
  acStack_31[3] = -1;
  acStack_31[4] = -1;
  acStack_31[5] = -1;
  acStack_31[6] = -1;
  acStack_31[7] = -1;
  acStack_31[8] = -1;
  acStack_31[0] = '\x02';
  pdb_140f60be0(&uStack_58,param_2 + 0x30);
  pdb_14058f3d0(&uStack_370,&UNK_142f74618,0x10);
  uStack_1eb = (ushort)(byte)uStack_1eb;
  pub_142e32760(&uStack_1e8,&uStack_370,0xdc);
  uStack_fc = uStack_284;
  uStack_f4 = uStack_27c;
  uStack_ec = uStack_274;
  uStack_e4 = uStack_26c;
  uStack_dc = uStack_264;
  uStack_d4 = uStack_25c;
  uStack_cc = uStack_254;
  uStack_c6 = uStack_24e;
  uStack_be = uStack_246;
  uStack_b6 = uStack_23e;
  uStack_ae = uStack_236;
  uStack_a6 = uStack_22e;
  uStack_9e = uStack_226;
  uStack_96 = uStack_21e;
  uStack_8e = uStack_216;
  uStack_86 = uStack_20e;
  uStack_7e = uStack_206;
  uStack_76 = uStack_1fe;
  uStack_72 = uStack_1fa;
  uStack_6e = uStack_1f6;
  uStack_6a = uStack_1f2;
  uStack_66 = uStack_1ee;
  uStack_61 = uStack_1e9;
  uStack_63 = uStack_1eb;
  bStack_fd = bStack_285 & 1;
  uStack_10c = 0x101;
  uStack_10a = uStack_292;
  uStack_108 = 0;
  uStack_100 = uStack_288;
  uStack_fe = 0;
  uStack_c8 = 0;
  uStack_64 = 0;
  pdb_14007ee60();
  pbStack_40 = pub_1406abab0(0x20,8);
  if (pbStack_40 != (byte *)0x0) {
    *(longlong *)pbStack_40 = param_2 + 0x100;
    *(char **)(pbStack_40 + 8) = acStack_31;
    *(ulonglong **)(pbStack_40 + 0x10) = &uStack_58;
    *(undefined8 *)(pbStack_40 + 0x18) = param_3;
    pdb_14058f940(&uStack_370,&uStack_1e8,param_1,pbStack_40,&UNK_142f74f10);
    if (iStack_330 != 2) {
      uStack_1e8 = uStack_370;
      uStack_1e0 = uStack_368;
      uStack_188 = uStack_310;
      uStack_198 = uStack_320;
      uStack_190 = uStack_318;
      iStack_1a8 = iStack_330;
      uStack_1a4 = uStack_32c;
      uStack_1a0 = uStack_328;
      uStack_19c = uStack_324;
      uStack_1b8 = uStack_340;
      uStack_1b4 = uStack_33c;
      uStack_1b0 = uStack_338;
      uStack_1ac = uStack_334;
      uStack_1c8 = uStack_350;
      uStack_1c4 = uStack_34c;
      uStack_1c0 = uStack_348;
      uStack_1bc = uStack_344;
      uStack_1d8 = uStack_360;
      uStack_1d4 = uStack_35c;
      uStack_1d0 = uStack_358;
      uStack_1cc = uStack_354;
      pdb_140d56290(param_1,uStack_370,uStack_368 & 0xff);
      plVar1 = (longlong *)CONCAT44(uStack_1d4,uStack_1d8);
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        pdb_140d71bf0(&uStack_1d8);
      }
    }
    if (acStack_31[0] == '\0') {
      pdb_140acddc0(param_2);
    }
    else if (acStack_31[0] != '\x02') {
      pdb_140acd240(param_2);
    }
    if (uStack_58 != 0) {
      pub_1406abac0(pbStack_50,uStack_58,1);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc7e11(8,0x20);
}

