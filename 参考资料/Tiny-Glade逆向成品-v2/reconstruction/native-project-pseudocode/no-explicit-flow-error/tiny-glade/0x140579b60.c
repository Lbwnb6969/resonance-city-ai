// VA 0x140579b60, PDB extent 2001 bytes
// tiny_glade::gui::gui_debug::do_camera_snapshot_ui
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/gui_debug.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tiny_glade::gui::gui_debug::do_camera_snapshot_ui
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/gui_debug.rs
   Extent: 2001 */

void pdb_140579b60(longlong param_1,undefined8 *param_2,longlong param_3)

{
  ulonglong uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  char cVar4;
  byte bVar5;
  byte *pbVar6;
  undefined *puVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  ulonglong uStack_428;
  undefined4 uStack_420;
  undefined4 uStack_41c;
  undefined4 uStack_418;
  undefined4 uStack_414;
  undefined4 uStack_410;
  undefined4 uStack_40c;
  undefined4 uStack_408;
  undefined4 uStack_404;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  undefined4 uStack_3f8;
  undefined4 uStack_3f4;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  byte *pbStack_3b0;
  undefined *puStack_3a8;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  undefined4 uStack_398;
  undefined4 uStack_394;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  undefined4 uStack_388;
  undefined4 uStack_384;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined4 uStack_348;
  undefined4 uStack_344;
  undefined1 auStack_268 [16];
  longlong *aplStack_258 [8];
  char cStack_215;
  char cStack_214;
  ulonglong uStack_208;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined8 uStack_1f8;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined8 uStack_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined4 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined1 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 uStack_108;
  byte *pbStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_d8;
  undefined4 uStack_c8;
  undefined1 uStack_c4;
  longlong lStack_60;
  byte *pbStack_58;
  undefined1 uStack_4b;
  undefined1 uStack_4a;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  pdb_14007ee60();
  pbStack_58 = pub_1406abab0(8,8);
  if (pbStack_58 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,8);
  }
  *(longlong *)pbStack_58 = (longlong)param_2 + 0xbc;
  pdb_140d4d1a0(&pbStack_3b0);
  pbStack_100 = pbStack_58;
  puStack_f8 = &UNK_142f68308;
  uStack_130 = 0;
  uStack_128 = _DAT_142f6bf80;
  uStack_120 = 0;
  uStack_118 = _DAT_142f57ad0;
  uStack_110 = _UNK_142f57ad8;
  uStack_108 = 0;
  uStack_c8 = 0x10101;
  uStack_168 = 0;
  uStack_160 = 1;
  uStack_158 = 0;
  uStack_150 = 0;
  uStack_148 = 1;
  uStack_140 = 0;
  uStack_1d8 = pbStack_3b0;
  uStack_1d0 = puStack_3a8;
  uStack_1c8 = uStack_3a0;
  uStack_1c4 = uStack_39c;
  uStack_1c0 = uStack_398;
  uStack_1bc = uStack_394;
  uStack_1b8 = uStack_390;
  uStack_1b4 = uStack_38c;
  uStack_1b0 = uStack_388;
  uStack_1ac = uStack_384;
  uStack_1a8 = uStack_380;
  uStack_1a0 = uStack_378;
  uStack_198 = uStack_370;
  uStack_190 = uStack_368;
  uStack_188 = uStack_360;
  uStack_180 = uStack_358;
  uStack_178 = uStack_350;
  uStack_174 = uStack_34c;
  uStack_170 = uStack_348;
  uStack_16c = uStack_344;
  uStack_208 = 0;
  uStack_1f8 = (longlong *)0x0;
  uStack_1e8 = 0;
  uStack_d8 = 0;
  uStack_f0 = 0;
  uStack_e8 = 0;
  uStack_c4 = 2;
  uStack_138 = 2;
  pdb_14057d8c0(&pbStack_3b0,&uStack_208,&UNK_142f6c270,0x13);
  pdb_140d2b1f0(&uStack_208,&pbStack_3b0,param_1);
  LOCK();
  *uStack_1f8 = *uStack_1f8 + -1;
  UNLOCK();
  if (*uStack_1f8 == 0) {
    pdb_140d71bf0(&uStack_1f8);
  }
  pbStack_3b0 = (byte *)0x4;
  uStack_49 = 0;
  pdb_140572d40(&uStack_208,&UNK_142f6c283,0x14);
  uStack_3c8 = uStack_1a8;
  uStack_3c0 = uStack_1a0;
  uStack_3d8 = CONCAT44(uStack_1b4,uStack_1b8);
  uStack_3d0 = CONCAT44(uStack_1ac,uStack_1b0);
  uStack_3e8 = CONCAT44(uStack_1c4,uStack_1c8);
  uStack_3e0 = CONCAT44(uStack_1bc,uStack_1c0);
  uStack_3f8 = (undefined4)uStack_1d8;
  uStack_3f4 = uStack_1d8._4_4_;
  uStack_3f0 = (undefined4)uStack_1d0;
  uStack_3ec = uStack_1d0._4_4_;
  uStack_408 = (undefined4)uStack_1e8;
  uStack_404 = uStack_1e8._4_4_;
  uStack_400 = uStack_1e0;
  uStack_3fc = uStack_1dc;
  uStack_418 = (undefined4)uStack_1f8;
  uStack_414 = uStack_1f8._4_4_;
  uStack_410 = uStack_1f0;
  uStack_40c = uStack_1ec;
  uStack_428 = uStack_208;
  uStack_420 = uStack_200;
  uStack_41c = uStack_1fc;
  uStack_49 = 1;
  pdb_140d0bbc0(&uStack_208,&pbStack_3b0,&uStack_428);
  pdb_140d0dab0(auStack_268,&uStack_208,param_1);
  if ((cStack_214 == '\0') &&
     ((uStack_208 = uStack_208 & 0xffffffffffffff00, cStack_215 == '\0' ||
      (cVar4 = pdb_1400ad370(aplStack_258,&uStack_208), cVar4 == '\0')))) {
    LOCK();
    *aplStack_258[0] = *aplStack_258[0] + -1;
    UNLOCK();
    if (*aplStack_258[0] == 0) {
      pdb_140d71bf0(aplStack_258);
    }
  }
  else {
    LOCK();
    *aplStack_258[0] = *aplStack_258[0] + -1;
    UNLOCK();
    if (*aplStack_258[0] == 0) {
      pdb_140d71bf0(aplStack_258);
    }
    *param_2 = 1;
  }
  uVar1 = *(ulonglong *)(param_3 + 0x10);
  if (uVar1 != 0) {
    pbStack_58 = (byte *)(param_3 + 0x20);
    uVar8 = 0;
    lStack_60 = param_3;
    do {
      uStack_428 = uVar8;
      pdb_14007ee60();
      pbVar6 = pub_1406abab0(0x18,8);
      if (pbVar6 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc7e11(8,0x18);
      }
      *(ulonglong **)pbVar6 = &uStack_428;
      *(byte **)(pbVar6 + 8) = pbStack_58;
      *(undefined8 **)(pbVar6 + 0x10) = param_2;
      puStack_3a8 = &UNK_142f6c460;
      uStack_4a = 1;
      pbStack_3b0 = pbVar6;
      uVar10 = pdb_140d17be0(param_1);
      bVar5 = *(byte *)(param_1 + 0x10d);
      if (bVar5 - 2 < 2) {
        bVar5 = 1;
        if (*(char *)(param_1 + 0x10c) != '\x02') {
LAB_140579f04:
          bVar5 = 0;
        }
      }
      else if (bVar5 == 0) goto LAB_140579f04;
      uStack_4a = 0;
      pdb_14043abd0(&uStack_208,param_1,uVar10,
                    *(undefined4 *)(*(longlong *)(param_1 + 0x150) + 0x214),
                    (ulonglong)bVar5 << 0x28 | 0x101000000,pbVar6,&UNK_142f6c460);
      LOCK();
      *uStack_1f8 = *uStack_1f8 + -1;
      UNLOCK();
      if (*uStack_1f8 == 0) {
        pdb_140d71bf0(&uStack_1f8);
      }
      param_3 = lStack_60;
      uVar8 = uVar8 + 1;
    } while (uVar1 != uVar8);
    if (*(ulonglong *)(lStack_60 + 0x10) < 2) {
      if (*(ulonglong *)(lStack_60 + 0x10) == 0) goto LAB_14057a092;
      pdb_140572d40(&uStack_208,&UNK_142f6c297,0x16);
      uVar9 = uStack_198;
      uStack_198 = CONCAT53(uStack_198._3_5_,0x20200);
      uVar3 = uStack_198;
      uStack_198._6_2_ = SUB82(uVar9,6);
      uStack_198._0_5_ = (undefined5)uVar3;
      uStack_198._0_6_ = CONCAT15(2,(undefined5)uStack_198);
      pdb_140d7b910(&pbStack_3b0,&uStack_208,param_1);
      plVar2 = (longlong *)CONCAT44(uStack_39c,uStack_3a0);
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        pdb_140d71bf0(&uStack_3a0);
      }
      puVar7 = &UNK_142f6c2ad;
      uVar9 = 0x16;
    }
    else {
      pdb_140572d40(&uStack_208,&UNK_142f6c297,0x16);
      uVar9 = uStack_198;
      uStack_198 = CONCAT53(uStack_198._3_5_,0x20200);
      uVar3 = uStack_198;
      uStack_198._6_2_ = SUB82(uVar9,6);
      uStack_198._0_5_ = (undefined5)uVar3;
      uStack_198._0_6_ = CONCAT15(2,(undefined5)uStack_198);
      pdb_140d7b910(&pbStack_3b0,&uStack_208,param_1);
      plVar2 = (longlong *)CONCAT44(uStack_39c,uStack_3a0);
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        pdb_140d71bf0(&uStack_3a0);
      }
      puVar7 = &UNK_142f6c2c3;
      uVar9 = 0x25;
    }
    pdb_140572d40(&uStack_208,puVar7,uVar9);
    uVar9 = uStack_198;
    uStack_198 = CONCAT53(uStack_198._3_5_,0x20200);
    uVar3 = uStack_198;
    uStack_198._6_2_ = SUB82(uVar9,6);
    uStack_198._0_5_ = (undefined5)uVar3;
    uStack_198._0_6_ = CONCAT15(2,(undefined5)uStack_198);
    pdb_140d7b910(&pbStack_3b0,&uStack_208,param_1);
    plVar2 = (longlong *)CONCAT44(uStack_39c,uStack_3a0);
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      pdb_140d71bf0(&uStack_3a0);
    }
  }
LAB_14057a092:
  pdb_14007ee60();
  pbVar6 = pub_1406abab0(0x10,8);
  if (pbVar6 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,0x10);
  }
  *(longlong *)pbVar6 = param_3;
  *(undefined8 **)(pbVar6 + 8) = param_2;
  puStack_3a8 = &UNK_142f6c420;
  uStack_4b = 1;
  pbStack_3b0 = pbVar6;
  uVar10 = pdb_140d17be0(param_1);
  bVar5 = *(byte *)(param_1 + 0x10d);
  if (bVar5 - 2 < 2) {
    bVar5 = 1;
    if (*(char *)(param_1 + 0x10c) == '\x02') goto LAB_14057a10c;
  }
  else if (bVar5 != 0) goto LAB_14057a10c;
  bVar5 = 0;
LAB_14057a10c:
  uStack_4b = 0;
  pdb_14043abd0(&uStack_208,param_1,uVar10,*(undefined4 *)(*(longlong *)(param_1 + 0x150) + 0x214),
                (ulonglong)bVar5 << 0x28 | 0x101000000,pbVar6,&UNK_142f6c420);
  LOCK();
  *uStack_1f8 = *uStack_1f8 + -1;
  UNLOCK();
  if (*uStack_1f8 == 0) {
    pdb_140d71bf0(&uStack_1f8);
  }
  return;
}

