// VA 0x14057a420, PDB extent 790 bytes
// tiny_glade::gui::gui_debug::nani_capacity_debug_ui
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/gui_debug.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tiny_glade::gui::gui_debug::nani_capacity_debug_ui
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/gui_debug.rs
   Extent: 790 */

void pdb_14057a420(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 auStack_350 [18];
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined4 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 uStack_d8;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a0 [16];
  longlong *aplStack_90 [8];
  char cStack_4d;
  char cStack_4c;
  byte *pbStack_40;
  undefined1 uStack_31;
  undefined8 uStack_30;
  
  uStack_30 = 0xfffffffffffffffe;
  auStack_350[0] = 4;
  uStack_31 = 0;
  pdb_140572d40(&uStack_2c0,&UNK_142f6c348,0x15);
  uStack_b8 = uStack_260;
  uStack_b0 = uStack_258;
  uStack_c8 = uStack_270;
  uStack_c0 = uStack_268;
  uStack_d8 = uStack_280;
  uStack_e8 = (undefined4)uStack_290;
  uStack_e4 = uStack_290._4_4_;
  uStack_e0 = (undefined4)uStack_288;
  uStack_dc = uStack_288._4_4_;
  uStack_f8 = (undefined4)uStack_2a0;
  uStack_f4 = uStack_2a0._4_4_;
  uStack_f0 = (undefined4)uStack_298;
  uStack_ec = uStack_298._4_4_;
  uStack_108 = (undefined4)uStack_2b0;
  uStack_104 = uStack_2b0._4_4_;
  uStack_100 = (undefined4)uStack_2a8;
  uStack_fc = uStack_2a8._4_4_;
  uStack_118 = (undefined4)uStack_2c0;
  uStack_114 = uStack_2c0._4_4_;
  uStack_110 = (undefined4)uStack_2b8;
  uStack_10c = uStack_2b8._4_4_;
  uStack_31 = 1;
  pdb_140d0bbc0(&uStack_2c0,auStack_350,&uStack_118);
  pdb_140d0dab0(auStack_a0,&uStack_2c0,param_1);
  if (cStack_4c == '\0') {
    uStack_2c0 = uStack_2c0 & 0xffffffffffffff00;
    if (cStack_4d != '\0') {
      cVar1 = pdb_1400ad370(aplStack_90,&uStack_2c0);
      if (cVar1 != '\0') goto LAB_14057a4fd;
    }
    LOCK();
    *aplStack_90[0] = *aplStack_90[0] + -1;
    UNLOCK();
    if (*aplStack_90[0] == 0) {
      pdb_140d71bf0(aplStack_90);
    }
  }
  else {
LAB_14057a4fd:
    LOCK();
    *aplStack_90[0] = *aplStack_90[0] + -1;
    UNLOCK();
    if (*aplStack_90[0] == 0) {
      pdb_140d71bf0(aplStack_90);
    }
    pdb_1409620d0(param_4);
  }
  uStack_2c0 = 0x452821e638d01376;
  uStack_2b8 = 0xbe5466cf34e90c6e;
  uStack_2b0 = (longlong *)0xc0ac29b7c97c50de;
  uStack_2a8 = 0x3f84d5b5b5470913;
  uStack_2a0 = pdb_140572df0(&uStack_2c0,&UNK_142f6c35d,0xf);
  uStack_2a0 = uStack_2a0 + (ulonglong)(uStack_2a0 == 0);
  uStack_2c0 = 0;
  uStack_2b0 = (longlong *)((ulonglong)uStack_2b0 & 0xffffffff00000000);
  uStack_2a8 = uStack_2a8 & 0xffffffff00000000;
  uStack_298 = _DAT_142e3ec80;
  uStack_278 = 0;
  uStack_290 = 0;
  uStack_288 = 0;
  pdb_140d34c30(auStack_350,&uStack_2c0,1);
  pdb_14007ee60();
  pbStack_40 = pub_1406abab0(0x18,8);
  if (pbStack_40 != (byte *)0x0) {
    *(undefined8 *)pbStack_40 = param_2;
    *(undefined8 *)(pbStack_40 + 8) = param_3;
    *(undefined8 *)(pbStack_40 + 0x10) = param_4;
    pdb_1405729d0(&uStack_2c0,auStack_350,param_1,pbStack_40,&UNK_142f6a938);
    LOCK();
    *uStack_2b0 = *uStack_2b0 + -1;
    UNLOCK();
    if (*uStack_2b0 == 0) {
      pdb_140d71bf0(&uStack_2b0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc7e11(8,0x18);
}

