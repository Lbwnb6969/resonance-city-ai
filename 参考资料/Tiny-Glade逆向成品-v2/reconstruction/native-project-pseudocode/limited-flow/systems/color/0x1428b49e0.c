// VA 0x1428b49e0, PDB extent 7678 bytes
// system_color::show_color_menu::hide_color_menu
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/color/src/show_color_menu.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: system_color::show_color_menu::hide_color_menu
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/color/src/show_color_menu.rs
   Extent: 7678 */

void pdb_1428b49e0(undefined8 *param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                  longlong *param_5,undefined8 *param_6,longlong *param_7,longlong *param_8,
                  longlong *param_9,longlong *param_10,longlong *param_11,longlong *param_12,
                  longlong *param_13,longlong *param_14)

{
  uint *puVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong *plVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  char cVar21;
  longlong lVar22;
  undefined8 *puVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  uint uVar28;
  ulonglong uVar29;
  longlong lVar30;
  longlong *plVar31;
  char cVar32;
  longlong lVar33;
  uint *puVar34;
  ulonglong uVar35;
  longlong lVar36;
  longlong lStack_370;
  undefined8 uStack_250;
  undefined8 uStack_248;
  longlong *plStack_240;
  longlong *plStack_238;
  undefined8 uStack_230;
  longlong lStack_228;
  longlong lStack_220;
  longlong lStack_218;
  longlong lStack_210;
  longlong lStack_208;
  longlong lStack_200;
  longlong lStack_1f8;
  longlong lStack_1f0;
  longlong lStack_1e8;
  longlong lStack_1e0;
  longlong lStack_1d8;
  longlong lStack_1d0;
  longlong lStack_1c8;
  longlong lStack_1c0;
  longlong lStack_1b8;
  longlong lStack_1b0;
  longlong lStack_1a8;
  longlong lStack_1a0;
  longlong lStack_198;
  longlong lStack_190;
  longlong *plStack_188;
  longlong lStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  longlong lStack_158;
  longlong lStack_150;
  longlong lStack_148;
  longlong lStack_140;
  longlong lStack_138;
  longlong lStack_130;
  longlong lStack_128;
  longlong lStack_120;
  longlong lStack_118;
  longlong lStack_110;
  longlong lStack_108;
  longlong lStack_100;
  longlong lStack_f8;
  longlong lStack_f0;
  longlong lStack_e8;
  longlong lStack_e0;
  longlong lStack_d8;
  longlong lStack_d0;
  longlong lStack_c8;
  longlong lStack_c0;
  longlong lStack_b8;
  longlong lStack_b0;
  longlong lStack_a8;
  longlong lStack_a0;
  longlong lStack_98;
  longlong lStack_90;
  longlong lStack_88;
  longlong lStack_80;
  longlong lStack_78;
  longlong lStack_70;
  longlong lStack_68;
  longlong *plStack_60;
  
  puVar2 = (ulonglong *)*param_1;
  lVar36 = param_1[1];
  uVar24 = *puVar2;
  uVar29 = 0;
  uVar26 = uVar24 - *(ulonglong *)(lVar36 + 0x18);
  if (uVar24 < *(ulonglong *)(lVar36 + 0x18)) {
    uVar26 = uVar29;
  }
  uVar25 = uVar24 - *(ulonglong *)(lVar36 + 0x38);
  if (uVar24 < *(ulonglong *)(lVar36 + 0x38)) {
    uVar25 = uVar29;
  }
  uVar24 = *(ulonglong *)(lVar36 + 0x10);
  uVar3 = *(ulonglong *)(lVar36 + 0x30);
  uVar27 = uVar3 - uVar25;
  if (uVar25 > uVar3) {
    uVar27 = uVar29;
  }
  uVar35 = uVar24 - uVar26;
  if (uVar26 > uVar24) {
    uVar35 = uVar29;
  }
  uVar29 = *(ulonglong *)(lVar36 + 0x40);
  lVar33 = *(longlong *)(lVar36 + 8);
  lVar36 = *(longlong *)(lVar36 + 0x28);
  lVar22 = param_8[4];
  lStack_80 = param_8[6];
  lVar4 = param_8[0x10];
  lStack_88 = param_8[0x12];
  lVar5 = param_8[0x14];
  lStack_90 = param_8[0x16];
  lVar6 = param_8[0x1c];
  lStack_1b0 = param_8[0x1e];
  lVar7 = param_8[0x20];
  lStack_1b8 = param_8[0x22];
  lVar8 = param_8[0x24];
  lStack_1c0 = param_8[0x26];
  lVar9 = param_8[0x28];
  lStack_98 = param_8[0x2a];
  lVar10 = param_8[0x2c];
  lStack_a0 = param_8[0x2e];
  lVar11 = param_8[0x30];
  lStack_a8 = param_8[0x32];
  lVar12 = param_8[0x34];
  lStack_b0 = param_8[0x36];
  lVar13 = param_8[0x38];
  lStack_b8 = param_8[0x3a];
  lVar14 = param_8[0x3c];
  lStack_1a8 = param_8[0x3e];
  *puVar2 = (uVar29 - uVar27) - uVar35;
  plStack_60 = param_4;
  if (uVar26 <= uVar24 && uVar24 - uVar26 != 0 || uVar25 <= uVar3 && uVar3 - uVar25 != 0) {
    lVar36 = lVar36 + uVar25 * 0x10;
    lVar33 = lVar33 + uVar26 * 0x10;
    if (uVar24 < uVar26) {
      lVar33 = 8;
    }
    lVar30 = 0;
    if (uVar26 < uVar24) {
      lVar30 = lVar33 + -0x10 + uVar35 * 0x10;
    }
    if (uVar3 < uVar25) {
      lVar36 = 8;
    }
    lVar36 = lVar36 + -0x10 + uVar27 * 0x10;
    if (uVar3 <= uVar25) {
      lVar36 = lVar30;
    }
    *puVar2 = uVar29;
    cVar32 = *(char *)(lVar36 + 8);
  }
  else {
    cVar21 = pdb_140938b60(*(undefined4 *)(*param_5 + 0xa0),*(undefined4 *)(*param_5 + 0xa4));
    cVar32 = '\x01';
    if (cVar21 == '\0') {
      return;
    }
  }
  lStack_1a0 = *param_3;
  lVar36 = param_3[1];
  puVar34 = *(uint **)(lStack_1a0 + 0xf8);
  puVar1 = puVar34 + *(longlong *)(lStack_1a0 + 0x100);
  plVar15 = (longlong *)param_6[1];
  plVar31 = (longlong *)param_6[2];
  lStack_1d8 = param_12[2];
  lStack_1c8 = *param_11;
  lStack_c0 = param_11[2];
  lStack_1d0 = *param_10;
  lStack_c8 = param_10[2];
  lStack_1e0 = param_8[2];
  lStack_1e8 = *param_7;
  lStack_d0 = param_7[2];
  lStack_1f0 = *param_9;
  lStack_d8 = param_9[2];
  lStack_140 = param_13[2];
  lStack_228 = *param_14;
  lStack_148 = param_14[2];
  lStack_180 = *param_2;
  lStack_68 = param_2[2];
  cVar21 = *(char *)(lStack_1a0 + 0x108);
  lStack_1f8 = lVar14 + 0x20;
  lStack_200 = *param_12 + 0x20;
  lStack_e0 = lStack_1c8 + 0x20;
  lStack_e8 = lStack_1d0 + 0x20;
  lStack_f0 = lVar13 + 0x20;
  lStack_f8 = lVar4 + 0x20;
  lStack_208 = lVar8 + 0x20;
  lStack_210 = *param_8 + 0x20;
  lStack_218 = lVar6 + 0x20;
  lStack_100 = lVar9 + 0x20;
  lStack_220 = lVar7 + 0x20;
  lStack_108 = lVar10 + 0x20;
  lStack_110 = lVar5 + 0x20;
  lStack_118 = lVar11 + 0x20;
  lStack_120 = lStack_1e8 + 0x20;
  lStack_128 = lVar22 + 0x20;
  lStack_130 = lVar12 + 0x20;
  lStack_138 = lStack_1f0 + 0x20;
  lStack_150 = *param_13 + 0x20;
  lStack_158 = lStack_228 + 0x20;
  lStack_78 = lStack_180 + 0x20;
  lVar33 = 0;
  lStack_190 = 8;
  lStack_198 = 8;
  lStack_370 = 0;
  uVar28 = 0;
  lStack_70 = lVar36;
  uVar19 = *param_6;
  plStack_188 = plVar15;
  uVar20 = param_6[3];
  uVar16 = uStack_250;
  uVar17 = uStack_248;
  uVar18 = uStack_230;
  do {
    uStack_230 = uVar20;
    uStack_248 = uVar19;
    uStack_170 = uStack_248;
    uStack_178 = uStack_230;
    if (cVar21 == '\0') {
      if (uVar28 == (uint)lVar33) {
        do {
          if (puVar34 == puVar1) goto LAB_1428b6617;
          uVar28 = *puVar34;
          puVar34 = puVar34 + 1;
          lVar33 = *(longlong *)(*(longlong *)(lVar36 + 0x100) + 0x58 + (ulonglong)uVar28 * 0xa0);
        } while (lVar33 == 0);
        lVar22 = *(longlong *)(lVar36 + 0x100) + (ulonglong)uVar28 * 0xa0;
        uVar24 = (ulonglong)*(uint *)(lVar22 + 0x94);
        if (*(ulonglong *)(lStack_1a0 + 0x110) <
            *(ulonglong *)(*(longlong *)(lVar36 + 0x1a0) + 0x40 + uVar24 * 0x48)) {
          lVar4 = *(longlong *)(lVar36 + 0x1a0) + uVar24 * 0x48;
          uVar24 = *(ulonglong *)
                    (*(longlong *)(lVar4 + 0x38) + *(ulonglong *)(lStack_1a0 + 0x110) * 8);
          if (uVar24 == 0) goto LAB_1428b51a0;
          lStack_370 = *(longlong *)(*(longlong *)(lVar4 + 0x18) + 0x10 + ~uVar24 * 0x30);
        }
        else {
LAB_1428b51a0:
          lStack_370 = 0;
        }
        lStack_198 = *(longlong *)(lVar22 + 0x50);
        uVar28 = 0;
      }
      puVar23 = (undefined8 *)(lStack_198 + (ulonglong)uVar28 * 0x10);
      uVar24 = (ulonglong)~*(uint *)(lStack_198 + 8 + (ulonglong)uVar28 * 0x10);
    }
    else {
      if (uVar28 == (uint)lVar33) {
        do {
          if (puVar34 == puVar1) goto LAB_1428b6617;
          uVar28 = *puVar34;
          puVar34 = puVar34 + 1;
          lVar33 = *(longlong *)(*(longlong *)(lVar36 + 0x1a0) + 0x10 + (ulonglong)uVar28 * 0x48);
        } while (lVar33 == 0);
        lVar22 = *(longlong *)(lVar36 + 0x1a0) + (ulonglong)uVar28 * 0x48;
        if ((*(ulonglong *)(lStack_1a0 + 0x110) < *(ulonglong *)(lVar22 + 0x40)) &&
           (uVar24 = *(ulonglong *)
                      (*(longlong *)(lVar22 + 0x38) + *(ulonglong *)(lStack_1a0 + 0x110) * 8),
           uVar24 != 0)) {
          lStack_370 = *(longlong *)(*(longlong *)(lVar22 + 0x18) + 0x10 + ~uVar24 * 0x30);
        }
        else {
          lStack_370 = 0;
        }
        lStack_190 = *(longlong *)(lVar22 + 8);
        uVar28 = 0;
      }
      uVar24 = (ulonglong)uVar28;
      puVar23 = (undefined8 *)(lStack_190 + uVar24 * 8);
    }
    uStack_250 = *puVar23;
    if ((int)uStack_250 == 0) {
LAB_1428b6617:
      lVar36 = *plStack_60;
      lVar33 = plStack_60[1];
      puVar34 = *(uint **)(lVar36 + 0xf8);
      puVar1 = puVar34 + *(longlong *)(lVar36 + 0x100);
      if (plVar15 != (longlong *)0x0) {
        plVar31 = plVar15;
      }
      uStack_250 = uVar16;
      if (*(char *)(lVar36 + 0x108) == '\0') {
        while (uStack_230 = uVar18, uStack_248 = uVar17, puVar34 != puVar1) {
          uVar28 = *puVar34;
          puVar34 = puVar34 + 1;
          lVar36 = *(longlong *)(lVar33 + 0x100);
          lVar22 = *(longlong *)(lVar36 + 0x58 + (ulonglong)uVar28 * 0xa0);
          uVar17 = uStack_248;
          uVar18 = uStack_230;
          if (lVar22 != 0) {
            lVar36 = *(longlong *)(lVar36 + (ulonglong)uVar28 * 0xa0 + 0x50);
            uVar28 = 0;
            do {
              uVar16 = *(undefined8 *)(lVar36 + (ulonglong)uVar28 * 0x10);
              if ((int)uVar16 == 0) {
                return;
              }
              lVar4 = plVar31[2];
              if ((ulonglong)(*plVar31 - lVar4) < 0x18) {
                pdb_142d7f1b0(plVar31,lVar4,0x18,1,1);
              }
              uVar28 = uVar28 + 1;
              lVar5 = plVar31[1];
              *(code **)(lVar5 + lVar4) = pdb_1428d3380;
              *(undefined8 *)(lVar5 + 8 + lVar4) = uVar16;
              *(undefined1 *)(lVar5 + 0x10 + lVar4) = 0;
              plVar31[2] = lVar4 + 0x18;
              uVar17 = uStack_248;
              uVar18 = uStack_230;
            } while (uVar28 != (uint)lVar22);
          }
        }
      }
      else {
        while (uStack_230 = uVar18, uStack_248 = uVar17, puVar34 != puVar1) {
          uVar28 = *puVar34;
          puVar34 = puVar34 + 1;
          lVar36 = *(longlong *)(lVar33 + 0x1a0);
          lVar22 = *(longlong *)(lVar36 + 0x10 + (ulonglong)uVar28 * 0x48);
          uVar17 = uStack_248;
          uVar18 = uStack_230;
          if (lVar22 != 0) {
            lVar36 = *(longlong *)(lVar36 + (ulonglong)uVar28 * 0x48 + 8);
            uVar28 = 0;
            do {
              uVar16 = *(undefined8 *)(lVar36 + (ulonglong)uVar28 * 8);
              if ((int)uVar16 == 0) {
                return;
              }
              lVar4 = plVar31[2];
              if ((ulonglong)(*plVar31 - lVar4) < 0x18) {
                pdb_142d7f1b0(plVar31,lVar4,0x18,1,1);
              }
              uVar28 = uVar28 + 1;
              lVar5 = plVar31[1];
              *(code **)(lVar5 + lVar4) = pdb_1428d3380;
              *(undefined8 *)(lVar5 + 8 + lVar4) = uVar16;
              *(undefined1 *)(lVar5 + 0x10 + lVar4) = 0;
              plVar31[2] = lVar4 + 0x18;
              uVar17 = uStack_248;
              uVar18 = uStack_230;
            } while (uVar28 != (uint)lVar22);
          }
        }
      }
      return;
    }
    uVar28 = uVar28 + 1;
    if (cVar32 != '\0') {
      uVar28 = *(uint *)(uVar24 * 0xd8 + lStack_370 + 0x38);
      uVar24 = (ulonglong)(uVar28 - 2);
      if (uVar28 < 2) {
        uVar24 = 0xe;
      }
      uStack_250 = uVar16;
      uStack_248 = uVar17;
      uStack_230 = uVar18;
                    /* WARNING: Could not recover jumptable at 0x0001428b531e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_1435af19c + *(int *)(&UNK_1435af19c + uVar24 * 4)))();
      return;
    }
    plStack_240 = plVar15;
    plStack_238 = plVar31;
    pdb_140f04aa0(&uStack_250,&UNK_1435ae880);
    uVar19 = uStack_170;
    uVar20 = uStack_178;
    uVar16 = uStack_250;
    uVar17 = uStack_248;
    uVar18 = uStack_230;
  } while( true );
}

