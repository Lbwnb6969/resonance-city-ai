// VA 0x140579520, PDB extent 1599 bytes
// tiny_glade::gui::gui_debug::do_freecam_save
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/gui_debug.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: tiny_glade::gui::gui_debug::do_freecam_save
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/gui_debug.rs
   Extent: 1599 */

void pdb_140579520(int *param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  byte *pbStack_370;
  undefined *puStack_368;
  longlong *aplStack_360 [16];
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  int iStack_2d0;
  undefined4 uStack_2cc;
  undefined8 uStack_2c8;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  undefined8 uStack_2a0;
  undefined4 uStack_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined8 uStack_288;
  undefined1 uStack_280;
  undefined4 uStack_27f;
  undefined4 uStack_27b;
  undefined3 uStack_277;
  undefined4 uStack_274;
  undefined2 uStack_270;
  undefined1 uStack_26e;
  undefined1 uStack_26b;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  int iStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  int iStack_c8;
  int iStack_c4;
  int iStack_c0;
  int iStack_bc;
  longlong *aplStack_b8 [8];
  char cStack_75;
  char cStack_74;
  undefined8 uStack_5c;
  int iStack_54;
  undefined8 uStack_50;
  int iStack_48;
  undefined1 uStack_43;
  undefined1 uStack_42;
  undefined1 uStack_41;
  undefined8 uStack_40;
  
  uStack_40 = 0xfffffffffffffffe;
  iVar5 = *param_1;
  if (iVar5 == 1) {
    aplStack_b8[0] = *(longlong **)(param_1 + 5);
    iStack_c8 = param_1[1];
    iStack_c4 = param_1[2];
    iStack_c0 = param_1[3];
    iStack_bc = param_1[4];
    uStack_2e0 = &iStack_c8;
    uStack_2d8 = pdb_140684400;
    pdb_140f60760(&uStack_138,&UNK_142f6c190,&uStack_2e0);
    uStack_280 = 0;
    uStack_27b = 0;
    uStack_277 = 0;
    uStack_2e0 = (int *)0x3;
    uStack_2c8 = 6;
    uStack_2b0 = uStack_138;
    uStack_2ac = uStack_134;
    uStack_2a8 = uStack_130;
    uStack_2a4 = uStack_12c;
    uStack_2a0 = CONCAT44(uStack_124,iStack_128);
    uStack_298 = 0;
    uStack_290 = 0;
    uStack_288 = 0;
    uStack_270 = 0x200;
    uStack_26e = 2;
    uStack_26b = 2;
    pdb_140d7b910(&pbStack_370,&uStack_2e0,param_2);
    LOCK();
    *aplStack_360[0] = *aplStack_360[0] + -1;
    UNLOCK();
    if (*aplStack_360[0] == 0) {
      pdb_140d71bf0(aplStack_360);
    }
  }
  pbStack_370 = (byte *)0x4;
  uStack_41 = 0;
  pdb_140572d40(&uStack_2e0,&UNK_142f6c192,0xd);
  uStack_d8 = CONCAT35((undefined3)uStack_27b,CONCAT41(uStack_27f,uStack_280));
  uStack_d0 = CONCAT44(uStack_274,CONCAT31(uStack_277,uStack_27b._3_1_));
  uStack_e8 = CONCAT44(uStack_28c,uStack_290);
  uStack_e0 = uStack_288;
  uStack_f0 = CONCAT44(uStack_294,uStack_298);
  uStack_f8 = uStack_2a0;
  uStack_108 = uStack_2b0;
  uStack_104 = uStack_2ac;
  uStack_100 = uStack_2a8;
  uStack_fc = uStack_2a4;
  uStack_118 = uStack_2c0;
  uStack_114 = uStack_2bc;
  uStack_110 = uStack_2b8;
  uStack_10c = uStack_2b4;
  iStack_128 = iStack_2d0;
  uStack_124 = uStack_2cc;
  uStack_120 = (undefined4)uStack_2c8;
  uStack_11c = uStack_2c8._4_4_;
  uStack_138 = (undefined4)uStack_2e0;
  uStack_134 = uStack_2e0._4_4_;
  uStack_130 = (undefined4)uStack_2d8;
  uStack_12c = uStack_2d8._4_4_;
  uStack_41 = 1;
  iVar8 = iStack_2d0;
  pdb_140d0bbc0(&uStack_2e0,&pbStack_370,&uStack_138);
  pdb_140d0dab0(&iStack_c8,&uStack_2e0,param_2);
  if ((cStack_74 == '\0') &&
     ((uStack_2e0 = (int *)((ulonglong)uStack_2e0 & 0xffffffffffffff00), cStack_75 == '\0' ||
      (cVar2 = pdb_1400ad370(aplStack_b8,&uStack_2e0), cVar2 == '\0')))) {
    LOCK();
    *aplStack_b8[0] = *aplStack_b8[0] + -1;
    UNLOCK();
    if (*aplStack_b8[0] == 0) {
      pdb_140d71bf0(aplStack_b8);
    }
  }
  else {
    LOCK();
    *aplStack_b8[0] = *aplStack_b8[0] + -1;
    UNLOCK();
    if (*aplStack_b8[0] == 0) {
      pdb_140d71bf0(aplStack_b8);
    }
    pdb_140a6e180(&uStack_5c,param_3 + 0x270);
    iVar6 = pdb_140a6e270(param_3 + 0x270);
    iVar5 = *(int *)(param_3 + 0x2c8);
    *param_1 = 1;
    param_1[3] = iStack_54;
    *(undefined8 *)(param_1 + 1) = uStack_5c;
    param_1[4] = iVar6;
    param_1[5] = iVar8;
    param_1[6] = iVar5;
    iVar5 = 1;
  }
  pbStack_370 = (byte *)0x4;
  uStack_42 = 0;
  pdb_140572d40(&uStack_2e0,&UNK_142f6c19f,7);
  uStack_d8 = CONCAT35((undefined3)uStack_27b,CONCAT41(uStack_27f,uStack_280));
  uStack_d0 = CONCAT44(uStack_274,CONCAT31(uStack_277,uStack_27b._3_1_));
  uStack_e8 = CONCAT44(uStack_28c,uStack_290);
  uStack_e0 = uStack_288;
  uStack_f0 = CONCAT44(uStack_294,uStack_298);
  uStack_f8 = uStack_2a0;
  uStack_108 = uStack_2b0;
  uStack_104 = uStack_2ac;
  uStack_100 = uStack_2a8;
  uStack_fc = uStack_2a4;
  uStack_118 = uStack_2c0;
  uStack_114 = uStack_2bc;
  uStack_110 = uStack_2b8;
  uStack_10c = uStack_2b4;
  iStack_128 = iStack_2d0;
  uStack_124 = uStack_2cc;
  uStack_120 = (undefined4)uStack_2c8;
  uStack_11c = uStack_2c8._4_4_;
  uStack_138 = (undefined4)uStack_2e0;
  uStack_134 = uStack_2e0._4_4_;
  uStack_130 = (undefined4)uStack_2d8;
  uStack_12c = uStack_2d8._4_4_;
  uStack_42 = 1;
  pdb_140d0bbc0(&uStack_2e0,&pbStack_370,&uStack_138);
  pdb_140d0dab0(&iStack_c8,&uStack_2e0,param_2);
  if ((cStack_74 == '\0') &&
     ((uStack_2e0 = (int *)((ulonglong)uStack_2e0 & 0xffffffffffffff00), cStack_75 == '\0' ||
      (cVar2 = pdb_1400ad370(aplStack_b8,&uStack_2e0), cVar2 == '\0')))) {
    LOCK();
    *aplStack_b8[0] = *aplStack_b8[0] + -1;
    UNLOCK();
    if (*aplStack_b8[0] == 0) {
      pdb_140d71bf0(aplStack_b8);
    }
  }
  else {
    LOCK();
    *aplStack_b8[0] = *aplStack_b8[0] + -1;
    UNLOCK();
    if (*aplStack_b8[0] == 0) {
      pdb_140d71bf0(aplStack_b8);
    }
    if ((char)iVar5 != '\0') {
      iStack_48 = param_1[3];
      uStack_50 = *(undefined8 *)(param_1 + 1);
      iVar5 = param_1[6];
      pdb_140a6e360(param_3 + 0x270,&uStack_50,param_1[4],param_1[5]);
      *(int *)(param_3 + 0x2cc) = iVar5;
    }
  }
  pdb_14007ee60();
  pbVar4 = pub_1406abab0(8,8);
  if (pbVar4 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,8);
  }
  *(int **)pbVar4 = param_1;
  puStack_368 = &UNK_142f6c480;
  uStack_43 = 1;
  pbStack_370 = pbVar4;
  uVar7 = pdb_140d17be0(param_2);
  bVar3 = *(byte *)(param_2 + 0x10d);
  if (bVar3 - 2 < 2) {
    bVar3 = 1;
    if (*(char *)(param_2 + 0x10c) == '\x02') goto LAB_140579960;
  }
  else if (bVar3 != 0) goto LAB_140579960;
  bVar3 = 0;
LAB_140579960:
  uStack_43 = 0;
  pdb_14043abd0(&uStack_2e0,param_2,uVar7,*(undefined4 *)(*(longlong *)(param_2 + 0x150) + 0x214),
                (ulonglong)bVar3 << 0x28 | 0x101000000,pbVar4,&UNK_142f6c480);
  plVar1 = (longlong *)CONCAT44(uStack_2cc,iStack_2d0);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    pdb_140d71bf0(&iStack_2d0);
  }
  return;
}

