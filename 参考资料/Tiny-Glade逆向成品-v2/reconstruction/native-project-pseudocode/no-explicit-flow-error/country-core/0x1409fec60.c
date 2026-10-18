// VA 0x1409fec60, PDB extent 1467 bytes
// country_core::systems::wall::adjust_wall_height::adjust_wall_ui_mode::UiWallHeight::widget
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/adjust_wall_height/adjust_wall_ui_mode.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::wall::adjust_wall_height::adjust_wall_ui_mode::UiWallHeight::widget
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/adjust_wall_height/adjust_wall_ui_mode.rs
   Extent: 1467 */

void pdb_1409fec60(longlong param_1,undefined8 param_2,longlong param_3,byte param_4,char param_5)

{
  float fVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  longlong unaff_RSI;
  longlong lVar4;
  ulonglong uVar5;
  longlong unaff_R13;
  undefined4 uVar6;
  float fVar7;
  longlong lStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  uint uStack_150;
  undefined8 uStack_148;
  int iStack_138;
  int iStack_120;
  int iStack_108;
  undefined2 uStack_f0;
  undefined8 uStack_ec;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  byte bStack_c0;
  undefined1 uStack_bf;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  longlong lStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  longlong lStack_78;
  undefined8 uStack_70;
  undefined1 uStack_61;
  undefined8 uStack_60;
  
  uVar6 = _DAT_142e36f50;
  uStack_60 = 0xfffffffffffffffe;
  if (*(char *)(param_1 + 9) == '\x01') {
    unaff_R13 = *(longlong *)(param_3 + 0x90);
    unaff_RSI = *(longlong *)(param_3 + 0xe0);
    uVar5 = *(ulonglong *)(param_3 + 0x98);
    if (*(ulonglong *)(param_3 + 0xe8) < *(ulonglong *)(param_3 + 0x98)) {
      uVar5 = *(ulonglong *)(param_3 + 0xe8);
    }
    uVar3 = uVar5 * 0xc;
    if (param_5 == '\0') {
      if (uVar5 < 0xaaaaaaaaaaaaaab) goto LAB_1409fede4;
LAB_1409fedd6:
      param_2 = 0;
      goto LAB_1409fedd9;
    }
    if (0xaaaaaaaaaaaaaaa < uVar5) goto LAB_1409fedd6;
    if (uVar5 == 0) {
LAB_1409fee40:
      uStack_a8 = (byte *)0x4;
      uVar5 = 0;
      goto LAB_1409ff0be;
    }
    lStack_78 = param_3;
    uStack_70 = param_2;
    pdb_14007ee60();
    param_2 = 4;
    uStack_a8 = pub_1406abab0(uVar3,4);
    fVar7 = _DAT_143020e94;
    if (uStack_a8 == (byte *)0x0) goto LAB_1409fedd9;
    if (uVar5 == 1) {
      uVar3 = 0;
    }
    else {
      lVar4 = 5;
      uVar3 = 0;
      do {
        uVar6 = *(undefined4 *)(unaff_R13 + -0xc + lVar4 * 4);
        fVar1 = *(float *)(unaff_RSI + uVar3 * 4);
        *(undefined4 *)(uStack_a8 + lVar4 * 4 + -0x14) =
             *(undefined4 *)(unaff_R13 + -0x14 + lVar4 * 4);
        *(float *)(uStack_a8 + lVar4 * 4 + -0x10) = fVar1 + fVar7;
        *(undefined4 *)(uStack_a8 + lVar4 * 4 + -0xc) = uVar6;
        uVar6 = *(undefined4 *)(unaff_R13 + lVar4 * 4);
        fVar1 = *(float *)(unaff_RSI + 4 + uVar3 * 4);
        uVar3 = uVar3 + 2;
        *(undefined4 *)(uStack_a8 + lVar4 * 4 + -8) = *(undefined4 *)(unaff_R13 + -8 + lVar4 * 4);
        *(float *)(uStack_a8 + lVar4 * 4 + -4) = fVar1 + fVar7;
        *(undefined4 *)(uStack_a8 + lVar4 * 4) = uVar6;
        lVar4 = lVar4 + 6;
      } while ((uVar5 & 0xffffffffffffffe) != uVar3);
      param_3 = lStack_78;
      param_2 = uStack_70;
      if ((uVar5 & 1) == 0) goto LAB_1409ff0be;
    }
    lVar4 = uVar3 * 0xc;
    uVar6 = *(undefined4 *)(unaff_R13 + lVar4);
    fVar7 = *(float *)(unaff_RSI + uVar3 * 4) + _DAT_143020e94;
LAB_1409ff0a6:
    uVar2 = *(undefined4 *)(unaff_R13 + 8 + lVar4);
    *(undefined4 *)(uStack_a8 + lVar4) = uVar6;
    *(float *)(uStack_a8 + lVar4 + 4) = fVar7;
    *(undefined4 *)(uStack_a8 + lVar4 + 8) = uVar2;
    param_3 = lStack_78;
    param_2 = uStack_70;
  }
  else {
    uVar5 = *(ulonglong *)(param_3 + 0x98);
    if (*(ulonglong *)(param_3 + 0xe8) < *(ulonglong *)(param_3 + 0x98)) {
      uVar5 = *(ulonglong *)(param_3 + 0xe8);
    }
    uVar3 = uVar5 * 0xc;
    if (0xaaaaaaaaaaaaaaa < uVar5) goto LAB_1409fedd6;
    if (uVar5 == 0) {
      uStack_a8 = (byte *)0x4;
      uVar5 = 0;
      goto LAB_1409ff0d7;
    }
    unaff_RSI = *(longlong *)(param_3 + 0x90);
    unaff_R13 = *(longlong *)(param_3 + 0xe0);
    uStack_70 = param_2;
    pdb_14007ee60();
    param_2 = 4;
    uStack_a8 = pub_1406abab0(uVar3,4);
    fVar7 = _DAT_142e382c0;
    if (uStack_a8 != (byte *)0x0) {
      param_2 = uStack_70;
      if (uVar5 == 1) {
        uVar3 = 0;
      }
      else {
        lVar4 = 5;
        uVar3 = 0;
        do {
          uVar2 = *(undefined4 *)(unaff_RSI + -0xc + lVar4 * 4);
          fVar1 = *(float *)(unaff_R13 + uVar3 * 4);
          *(undefined4 *)(uStack_a8 + lVar4 * 4 + -0x14) =
               *(undefined4 *)(unaff_RSI + -0x14 + lVar4 * 4);
          *(float *)(uStack_a8 + lVar4 * 4 + -0x10) = fVar1 + fVar7;
          *(undefined4 *)(uStack_a8 + lVar4 * 4 + -0xc) = uVar2;
          uVar2 = *(undefined4 *)(unaff_RSI + lVar4 * 4);
          fVar1 = *(float *)(unaff_R13 + 4 + uVar3 * 4);
          uVar3 = uVar3 + 2;
          *(undefined4 *)(uStack_a8 + lVar4 * 4 + -8) = *(undefined4 *)(unaff_RSI + -8 + lVar4 * 4);
          *(float *)(uStack_a8 + lVar4 * 4 + -4) = fVar1 + fVar7;
          *(undefined4 *)(uStack_a8 + lVar4 * 4) = uVar2;
          lVar4 = lVar4 + 6;
        } while ((uVar5 & 0xffffffffffffffe) != uVar3);
        if ((uVar5 & 1) == 0) goto LAB_1409ff0d7;
      }
      lVar4 = uVar3 * 0xc;
      fVar7 = *(float *)(unaff_R13 + uVar3 * 4) + _DAT_142e382c0;
      uVar2 = *(undefined4 *)(unaff_RSI + 8 + lVar4);
      *(undefined4 *)(uStack_a8 + lVar4) = *(undefined4 *)(unaff_RSI + lVar4);
      *(float *)(uStack_a8 + lVar4 + 4) = fVar7;
      *(undefined4 *)(uStack_a8 + lVar4 + 8) = uVar2;
      goto LAB_1409ff0d7;
    }
LAB_1409fedd9:
    do {
      pdb_142dc7e2a(param_2,uVar3);
LAB_1409fede4:
      if (uVar5 == 0) goto LAB_1409fee40;
      lStack_78 = param_3;
      uStack_70 = param_2;
      pdb_14007ee60();
      param_2 = 4;
      uStack_a8 = pub_1406abab0(uVar3,4);
    } while (uStack_a8 == (byte *)0x0);
    if (uVar5 == 1) {
      uVar3 = 0;
LAB_1409ff08b:
      lVar4 = uVar3 * 0xc;
      uVar6 = *(undefined4 *)(unaff_R13 + lVar4);
      fVar7 = *(float *)(unaff_RSI + uVar3 * 4) + 0.0;
      goto LAB_1409ff0a6;
    }
    lVar4 = 5;
    uVar3 = 0;
    do {
      uVar6 = *(undefined4 *)(unaff_R13 + -0xc + lVar4 * 4);
      fVar7 = *(float *)(unaff_RSI + uVar3 * 4);
      *(undefined4 *)(uStack_a8 + lVar4 * 4 + -0x14) =
           *(undefined4 *)(unaff_R13 + -0x14 + lVar4 * 4);
      *(float *)(uStack_a8 + lVar4 * 4 + -0x10) = fVar7 + 0.0;
      *(undefined4 *)(uStack_a8 + lVar4 * 4 + -0xc) = uVar6;
      uVar6 = *(undefined4 *)(unaff_R13 + lVar4 * 4);
      fVar7 = *(float *)(unaff_RSI + 4 + uVar3 * 4);
      uVar3 = uVar3 + 2;
      *(undefined4 *)(uStack_a8 + lVar4 * 4 + -8) = *(undefined4 *)(unaff_R13 + -8 + lVar4 * 4);
      *(float *)(uStack_a8 + lVar4 * 4 + -4) = fVar7 + 0.0;
      *(undefined4 *)(uStack_a8 + lVar4 * 4) = uVar6;
      lVar4 = lVar4 + 6;
    } while ((uVar5 & 0xffffffffffffffe) != uVar3);
    param_3 = lStack_78;
    param_2 = uStack_70;
    if ((uVar5 & 1) != 0) goto LAB_1409ff08b;
  }
LAB_1409ff0be:
  uVar6 = *(undefined4 *)(&UNK_1430342b0 + (ulonglong)(*(uint *)(param_3 + 600) < 2) * 4);
LAB_1409ff0d7:
  uStack_b8 = CONCAT31(uStack_b8._1_3_,1);
  pcStack_90 = pdb_140c04ef0;
  uStack_61 = 1;
  uStack_b4 = uVar6;
  uStack_b0 = uVar5;
  uStack_a0 = uVar5;
  lStack_98 = param_1;
  pdb_140f60760(&lStack_168,&UNK_1430345b8,&lStack_98);
  param_4 = param_4 ^ 1;
  iStack_120 = (uint)param_4 + (uint)param_4 * 2;
  iStack_138 = (uint)param_4 + (uint)param_4;
  lStack_98 = lStack_168;
  pcStack_90 = (code *)uStack_160;
  uStack_88 = uStack_158;
  uStack_d0 = (undefined4)uStack_a8;
  uStack_cc = uStack_a8._4_4_;
  uStack_c8 = (undefined4)uStack_a0;
  uStack_c4 = uStack_a0._4_4_;
  uStack_e0 = uStack_b8;
  uStack_dc = uStack_b4;
  uStack_d8 = (undefined4)uStack_b0;
  uStack_d4 = uStack_b0._4_4_;
  bStack_c0 = *(byte *)(param_1 + 8) ^ 1;
  lStack_168 = 0;
  uStack_160 = 8;
  uStack_158 = 0;
  uStack_150 = (uint)param_4;
  uStack_148 = 1;
  uStack_f0 = 0x202;
  uStack_ec = 0;
  uStack_e4 = 0;
  uStack_bf = 1;
  uStack_61 = 0;
  iStack_108 = iStack_120;
  pdb_1409008d0(param_2,&lStack_98,&lStack_168);
  return;
}

