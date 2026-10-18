// VA 0x1428cca20, PDB extent 2681 bytes
// system_color::autoclose_color_menu::autoclose_color_menu
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/color/src/autoclose_color_menu.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_color::autoclose_color_menu::autoclose_color_menu
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/color/src/autoclose_color_menu.rs
   Extent: 2681 */

void pdb_1428cca20(undefined8 *param_1,undefined8 *param_2,byte *param_3,longlong *param_4,
                  undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8,
                  ulonglong *param_9,longlong *param_10)

{
  uint *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  ulonglong *puVar5;
  byte bVar6;
  ulonglong uVar7;
  char *pcVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  int iVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  char *pcVar17;
  uint uVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  ulonglong uVar22;
  uint *puVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  uint *puVar28;
  longlong lVar29;
  bool bVar30;
  bool bVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  ulonglong uStack_e0;
  undefined8 *puStack_d8;
  ulonglong *puStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  longlong lStack_b8;
  undefined8 uStack_b0;
  float fStack_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  ulonglong uStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  longlong *plStack_80;
  byte *pbStack_78;
  undefined8 uStack_70;
  
  uStack_70 = 0xfffffffffffffffe;
  lVar9 = param_1[1];
  uVar14 = *(ulonglong *)*param_1;
  uVar22 = 0;
  uVar11 = uVar14 - *(ulonglong *)(lVar9 + 0x18);
  if (uVar14 < *(ulonglong *)(lVar9 + 0x18)) {
    uVar11 = uVar22;
  }
  uVar7 = uVar14 - *(ulonglong *)(lVar9 + 0x38);
  if (uVar14 < *(ulonglong *)(lVar9 + 0x38)) {
    uVar7 = uVar22;
  }
  uVar14 = *(ulonglong *)(lVar9 + 0x10);
  uVar25 = *(ulonglong *)(lVar9 + 0x30);
  bVar30 = uVar25 < uVar7;
  uVar15 = uVar25 - uVar7;
  uVar16 = uVar15;
  if (bVar30) {
    uVar16 = uVar22;
  }
  bVar31 = uVar14 < uVar11;
  uVar26 = uVar14 - uVar11;
  uVar27 = uVar26;
  if (bVar31) {
    uVar27 = uVar22;
  }
  uVar24 = uVar16 + uVar27;
  if (!bVar31 && uVar26 != 0 || !bVar30 && uVar15 != 0) {
    uVar24 = uVar22;
  }
  lVar29 = *(longlong *)(lVar9 + 8);
  lVar19 = *(longlong *)(lVar9 + 0x28);
  *(ulonglong *)*param_1 = *(longlong *)(lVar9 + 0x40) - uVar24;
  if ((bVar31 || uVar26 == 0) && (bVar30 || uVar15 == 0)) {
LAB_1428ccb0c:
    puVar5 = (ulonglong *)*param_2;
    lVar9 = param_2[1];
    uVar14 = *puVar5;
    uVar22 = 0;
    uVar11 = uVar14 - *(ulonglong *)(lVar9 + 0x18);
    if (uVar14 < *(ulonglong *)(lVar9 + 0x18)) {
      uVar11 = uVar22;
    }
    uVar7 = uVar14 - *(ulonglong *)(lVar9 + 0x38);
    if (uVar14 < *(ulonglong *)(lVar9 + 0x38)) {
      uVar7 = uVar22;
    }
    uVar14 = *(ulonglong *)(lVar9 + 0x30);
    uVar25 = uVar14 - uVar7;
    if (uVar14 < uVar7) {
      uVar25 = uVar22;
    }
    uVar16 = *(ulonglong *)(lVar9 + 0x10);
    uVar15 = uVar16 - uVar11;
    if (uVar16 < uVar11) {
      uVar15 = uVar22;
    }
    uVar22 = *(ulonglong *)(lVar9 + 0x40);
    *puVar5 = uVar22 - (uVar15 + uVar25);
    if ((uVar16 < uVar11 || uVar16 - uVar11 == 0) && (uVar14 < uVar7 || uVar14 - uVar7 == 0)) {
      plStack_80 = *(longlong **)param_3;
      lVar29 = *(longlong *)(param_3 + 8);
      puVar28 = (uint *)plStack_80[0x1f];
      puVar1 = puVar28 + plStack_80[0x20];
      lVar9 = *param_4;
      pbStack_78 = (byte *)lVar9;
      if ((char)plStack_80[0x21] == '\0') {
        lVar19 = 0;
        lVar10 = 8;
        lVar21 = 0;
        uVar18 = 0;
LAB_1428cccef:
        do {
          do {
            if (uVar18 == (uint)lVar19) {
              do {
                if (puVar28 == puVar1) goto LAB_1428ccdf9;
                uVar18 = *puVar28;
                puVar28 = puVar28 + 1;
                lVar9 = *(longlong *)(lVar29 + 0x100);
                lVar19 = *(longlong *)(lVar9 + 0x58 + (ulonglong)uVar18 * 0xa0);
              } while (lVar19 == 0);
              lVar9 = lVar9 + (ulonglong)uVar18 * 0xa0;
              uVar14 = (ulonglong)*(uint *)(lVar9 + 0x94);
              if ((ulonglong)plStack_80[0x22] <
                  *(ulonglong *)(*(longlong *)(lVar29 + 0x1a0) + 0x40 + uVar14 * 0x48)) {
                lVar21 = *(longlong *)(lVar29 + 0x1a0) + uVar14 * 0x48;
                uVar14 = *(ulonglong *)(*(longlong *)(lVar21 + 0x38) + plStack_80[0x22] * 8);
                if (uVar14 == 0) goto LAB_1428ccd76;
                lVar21 = *(longlong *)(*(longlong *)(lVar21 + 0x18) + 0x10 + ~uVar14 * 0x30);
              }
              else {
LAB_1428ccd76:
                lVar21 = 0;
              }
              lVar10 = *(longlong *)(lVar9 + 0x50);
              uVar18 = 0;
            }
            lVar9 = (ulonglong)~*(uint *)(lVar10 + 8 + (ulonglong)uVar18 * 0x10) * 0xd8;
            uVar18 = uVar18 + 1;
            uVar4 = *(uint *)(lVar21 + 0x38 + lVar9);
            iVar13 = uVar4 - 2;
            if (uVar4 < 2) {
              iVar13 = 0xe;
            }
          } while ((iVar13 != 9) && (iVar13 != 0));
          uStack_90 = *(ulonglong *)(lVar9 + lVar21 + 0x40);
          lVar9 = pdb_140b54f80(pbStack_78,uStack_90,&UNK_1435afaf0);
          if (lVar9 == 0) {
            lVar9 = 0;
            goto LAB_1428cccef;
          }
          lVar9 = pdb_140930110(&uStack_b0,lVar9);
        } while ((float)uStack_b0 == 2.8026e-45);
      }
      else {
        lVar19 = 0;
        lVar21 = 0;
        uVar18 = 0;
        do {
          do {
            do {
              if (uVar18 == (uint)lVar19) {
                do {
                  if (puVar28 == puVar1) goto LAB_1428ccdf9;
                  uVar18 = *puVar28;
                  puVar28 = puVar28 + 1;
                  lVar9 = *(longlong *)(lVar29 + 0x1a0);
                  lVar19 = *(longlong *)(lVar9 + 0x10 + (ulonglong)uVar18 * 0x48);
                } while (lVar19 == 0);
                lVar9 = lVar9 + (ulonglong)uVar18 * 0x48;
                if (((ulonglong)plStack_80[0x22] < *(ulonglong *)(lVar9 + 0x40)) &&
                   (uVar14 = *(ulonglong *)(*(longlong *)(lVar9 + 0x38) + plStack_80[0x22] * 8),
                   uVar14 != 0)) {
                  lVar21 = *(longlong *)(*(longlong *)(lVar9 + 0x18) + 0x10 + ~uVar14 * 0x30);
                }
                else {
                  lVar21 = 0;
                }
                uVar18 = 0;
              }
              lVar9 = (ulonglong)uVar18 * 0xd8;
              uVar18 = uVar18 + 1;
              uVar4 = *(uint *)(lVar21 + 0x38 + lVar9);
              iVar13 = uVar4 - 2;
              if (uVar4 < 2) {
                iVar13 = 0xe;
              }
            } while ((iVar13 != 9) && (iVar13 != 0));
            uStack_90 = *(ulonglong *)(lVar9 + lVar21 + 0x40);
            lVar10 = pdb_140b54f80(pbStack_78,uStack_90,&UNK_1435afaf0);
            lVar9 = 0;
          } while (lVar10 == 0);
          lVar9 = pdb_140930110(&uStack_b0,lVar10);
        } while ((float)uStack_b0 == 2.8026e-45);
      }
      uStack_88 = 0;
      bVar30 = true;
      goto LAB_1428cce00;
    }
    *puVar5 = uVar22;
  }
  else {
    lVar19 = lVar19 + uVar7 * 0x38;
    lVar29 = lVar29 + uVar11 * 0x38;
    if (uVar14 < uVar11) {
      lVar29 = 8;
    }
    pcVar17 = (char *)0x0;
    if (uVar11 < uVar14) {
      pcVar17 = (char *)(lVar29 + -0x38 + uVar27 * 0x38);
    }
    if (uVar25 < uVar7) {
      lVar19 = 8;
    }
    pcVar8 = (char *)(lVar19 + -0x38 + uVar16 * 0x38);
    if (uVar25 <= uVar7) {
      pcVar8 = pcVar17;
    }
    if (*pcVar8 == '\a') goto LAB_1428ccb0c;
  }
  *(undefined4 *)param_10[2] = *(undefined4 *)((longlong)param_10 + 0x1c);
  lVar9 = *param_10;
  lVar29 = *(longlong *)(lVar9 + 0x30);
  uVar12 = *(undefined8 *)(lVar9 + 0x40);
  plStack_80 = param_4;
  pbStack_78 = param_3;
  if (lVar29 != *(longlong *)(lVar9 + 0x20)) goto LAB_1428ccca2;
  goto LAB_1428ccc99;
LAB_1428ccdf9:
  uStack_88 = (undefined4)CONCAT71((int7)((ulonglong)lVar9 >> 8),1);
  bVar30 = false;
LAB_1428cce00:
  puVar28 = (uint *)plStack_80[0x1f];
  lVar9 = plStack_80[0x20];
  puVar1 = puVar28 + lVar9;
  puStack_d8 = (undefined8 *)*param_8;
  pbStack_78 = (byte *)CONCAT71(pbStack_78._1_7_,(char)plStack_80[0x21]);
  fVar32 = (float)((ulonglong)_DAT_1435af560 >> 0x20);
  if ((char)plStack_80[0x21] == '\0') {
    lVar21 = 0;
    lVar19 = 8;
    lVar10 = 0;
    uVar18 = 0;
    puVar23 = puVar28;
    do {
      if (uVar18 == (uint)lVar21) {
        do {
          if (puVar23 == puVar1) goto LAB_1428cd09e;
          uVar18 = *puVar23;
          puVar23 = puVar23 + 1;
          lVar21 = *(longlong *)(*(longlong *)(lVar29 + 0x100) + 0x58 + (ulonglong)uVar18 * 0xa0);
        } while (lVar21 == 0);
        lVar19 = *(longlong *)(lVar29 + 0x100) + (ulonglong)uVar18 * 0xa0;
        uVar14 = (ulonglong)*(uint *)(lVar19 + 0x94);
        if ((ulonglong)plStack_80[0x22] <
            *(ulonglong *)(*(longlong *)(lVar29 + 0x1a0) + 0x40 + uVar14 * 0x48)) {
          lVar10 = *(longlong *)(lVar29 + 0x1a0) + uVar14 * 0x48;
          uVar14 = *(ulonglong *)(*(longlong *)(lVar10 + 0x38) + plStack_80[0x22] * 8);
          if (uVar14 == 0) goto LAB_1428ccf78;
          lVar10 = *(longlong *)(*(longlong *)(lVar10 + 0x18) + 0x10 + ~uVar14 * 0x30);
        }
        else {
LAB_1428ccf78:
          lVar10 = 0;
        }
        lVar19 = *(longlong *)(lVar19 + 0x50);
        uVar18 = 0;
      }
      lVar20 = (ulonglong)~*(uint *)(lVar19 + 8 + (ulonglong)uVar18 * 0x10) * 0xd8;
      uVar18 = uVar18 + 1;
      uVar12 = *(undefined8 *)(lVar10 + 0x60 + lVar20);
      uVar2 = *(undefined8 *)(lVar10 + 0x68 + lVar20);
      uVar3 = *(undefined8 *)(lVar10 + 0xc4 + lVar20);
      fVar35 = (float)((ulonglong)uVar3 >> 0x20) * fVar32 + (float)uVar3 * (float)_DAT_1435af560;
      fVar37 = (float)uVar12;
      fVar33 = (float)*puStack_d8 - fVar37;
      fVar38 = (float)((ulonglong)uVar12 >> 0x20);
      fVar34 = (float)((ulonglong)*puStack_d8 >> 0x20) - fVar38;
      fVar37 = fVar37 - (float)uVar2;
      fVar38 = fVar38 - (float)((ulonglong)uVar2 >> 0x20);
      fVar38 = SQRT(fVar38 * fVar38 + fVar37 * fVar37) + *(float *)(lVar10 + 200 + lVar20);
      fVar37 = fVar38;
      if (fVar38 <= fVar35) {
        fVar37 = fVar35;
      }
    } while ((float)(~-(uint)NAN(fVar35) & (uint)fVar37 | -(uint)NAN(fVar35) & (uint)fVar38) <
             SQRT(fVar34 * fVar34 + fVar33 * fVar33));
  }
  else {
    lVar19 = 0;
    lVar21 = 0;
    uVar14 = 0;
    puVar23 = puVar28;
    do {
      if ((int)uVar14 == (int)lVar19) {
        do {
          if (puVar23 == puVar1) goto LAB_1428cd09e;
          uVar18 = *puVar23;
          puVar23 = puVar23 + 1;
          lVar19 = *(longlong *)(*(longlong *)(lVar29 + 0x1a0) + 0x10 + (ulonglong)uVar18 * 0x48);
        } while (lVar19 == 0);
        lVar21 = *(longlong *)(lVar29 + 0x1a0) + (ulonglong)uVar18 * 0x48;
        if (((ulonglong)plStack_80[0x22] < *(ulonglong *)(lVar21 + 0x40)) &&
           (uVar14 = *(ulonglong *)(*(longlong *)(lVar21 + 0x38) + plStack_80[0x22] * 8),
           uVar14 != 0)) {
          lVar21 = *(longlong *)(*(longlong *)(lVar21 + 0x18) + 0x10 + ~uVar14 * 0x30);
        }
        else {
          lVar21 = 0;
        }
        uVar14 = 0;
      }
      lVar10 = uVar14 * 0xd8;
      uVar14 = (ulonglong)((int)uVar14 + 1);
      uVar12 = *(undefined8 *)(lVar21 + 0x60 + lVar10);
      uVar2 = *(undefined8 *)(lVar21 + 0x68 + lVar10);
      uVar3 = *(undefined8 *)(lVar21 + 0xc4 + lVar10);
      fVar35 = (float)((ulonglong)uVar3 >> 0x20) * fVar32 + (float)uVar3 * (float)_DAT_1435af560;
      fVar37 = (float)uVar12;
      fVar33 = (float)*puStack_d8 - fVar37;
      fVar38 = (float)((ulonglong)uVar12 >> 0x20);
      fVar34 = (float)((ulonglong)*puStack_d8 >> 0x20) - fVar38;
      fVar37 = fVar37 - (float)uVar2;
      fVar38 = fVar38 - (float)((ulonglong)uVar2 >> 0x20);
      fVar38 = SQRT(fVar38 * fVar38 + fVar37 * fVar37) + *(float *)(lVar21 + 200 + lVar10);
      fVar37 = fVar38;
      if (fVar38 <= fVar35) {
        fVar37 = fVar35;
      }
    } while ((float)(~-(uint)NAN(fVar35) & (uint)fVar37 | -(uint)NAN(fVar35) & (uint)fVar38) <
             SQRT(fVar34 * fVar34 + fVar33 * fVar33));
  }
  uStack_84 = (undefined4)CONCAT71((int7)((ulonglong)puVar1 >> 8),1);
  goto LAB_1428cd0a5;
LAB_1428cd09e:
  uStack_84 = 0;
LAB_1428cd0a5:
  lVar19 = 0;
  uStack_c0 = 0;
  if (bVar30) {
    uStack_e0 = uStack_90;
    puStack_d0 = &uStack_e0;
    pcStack_c8 = pdb_140c04ef0;
    pdb_140f60760(&uStack_b0,&UNK_143462da0,&puStack_d0);
    pbStack_78 = (byte *)CONCAT44(uStack_a4,fStack_a8);
    pcStack_c8 = (code *)uStack_a0;
    uVar11 = pdb_140bbbcb0(&puStack_d0);
    uVar14 = uStack_b0;
    if (uStack_b0 != 0) {
      pub_1406abac0(pbStack_78,uStack_b0,1);
    }
    uVar12 = *param_7;
    bVar6 = pdb_1408ffd90(uVar12);
    if ((bVar6 & uVar14 == uVar11) == 0) {
      bVar6 = pdb_140900fb0(uVar12,uVar11);
      uStack_b0 = uStack_90;
      uVar12 = pdb_142b3e240(*param_5,*param_6,_DAT_142e36f3c,3,&uStack_b0);
      uStack_c0 = CONCAT71((int7)((ulonglong)uVar12 >> 8),(byte)uVar12 | bVar6);
      puVar28 = (uint *)plStack_80[0x1f];
      lVar9 = plStack_80[0x20];
      pbStack_78 = (byte *)CONCAT71(pbStack_78._1_7_,(char)plStack_80[0x21]);
      goto LAB_1428cd1ce;
    }
  }
  else {
LAB_1428cd1ce:
    fVar32 = _DAT_142e37878;
    puVar1 = puVar28 + lVar9;
    uStack_90 = *param_9;
    lStack_b8 = 8;
    fVar37 = (float)_DAT_1435af560;
    uVar14 = (ulonglong)_DAT_1435af560 >> 0x20;
    lVar9 = 0;
    uVar11 = 0;
    do {
      if ((char)pbStack_78 == '\0') {
        if ((int)uVar11 == (int)lVar19) {
          do {
            if (puVar28 == puVar1) {
              return;
            }
            uVar18 = *puVar28;
            puVar28 = puVar28 + 1;
            lVar19 = *(longlong *)(*(longlong *)(lVar29 + 0x100) + 0x58 + (ulonglong)uVar18 * 0xa0);
          } while (lVar19 == 0);
          lVar21 = *(longlong *)(lVar29 + 0x100) + (ulonglong)uVar18 * 0xa0;
          uVar11 = (ulonglong)*(uint *)(lVar21 + 0x94);
          if ((ulonglong)plStack_80[0x22] <
              *(ulonglong *)(*(longlong *)(lVar29 + 0x1a0) + 0x40 + uVar11 * 0x48)) {
            lVar9 = *(longlong *)(lVar29 + 0x1a0) + uVar11 * 0x48;
            uVar11 = *(ulonglong *)(*(longlong *)(lVar9 + 0x38) + plStack_80[0x22] * 8);
            if (uVar11 == 0) goto LAB_1428cd310;
            lVar9 = *(longlong *)(*(longlong *)(lVar9 + 0x18) + 0x10 + ~uVar11 * 0x30);
          }
          else {
LAB_1428cd310:
            lVar9 = 0;
          }
          lStack_b8 = *(longlong *)(lVar21 + 0x50);
          uVar11 = 0;
        }
        iVar13 = (int)uVar11;
        uVar11 = (ulonglong)~*(uint *)(lStack_b8 + 8 + uVar11 * 0x10);
      }
      else {
        if ((int)uVar11 == (int)lVar19) {
          do {
            if (puVar28 == puVar1) {
              return;
            }
            uVar18 = *puVar28;
            puVar28 = puVar28 + 1;
            lVar19 = *(longlong *)(*(longlong *)(lVar29 + 0x1a0) + 0x10 + (ulonglong)uVar18 * 0x48);
          } while (lVar19 == 0);
          lVar9 = *(longlong *)(lVar29 + 0x1a0) + (ulonglong)uVar18 * 0x48;
          if (((ulonglong)plStack_80[0x22] < *(ulonglong *)(lVar9 + 0x40)) &&
             (uVar11 = *(ulonglong *)(*(longlong *)(lVar9 + 0x38) + plStack_80[0x22] * 8),
             uVar11 != 0)) {
            lVar9 = *(longlong *)(*(longlong *)(lVar9 + 0x18) + 0x10 + ~uVar11 * 0x30);
          }
          else {
            lVar9 = 0;
          }
          uVar11 = 0;
        }
        iVar13 = (int)uVar11;
      }
      lVar21 = uVar11 * 0xd8 + lVar9;
      bVar6 = (byte)uStack_84;
      if ((char)uStack_88 != '\0') {
        fVar38 = (float)((ulonglong)*(undefined8 *)(lVar21 + 0xc4) >> 0x20) * (float)uVar14 +
                 (float)*(undefined8 *)(lVar21 + 0xc4) * fVar37;
        fVar33 = (float)*(undefined8 *)(lVar21 + 0x60);
        fVar34 = (float)*puStack_d8 - fVar33;
        fVar36 = (float)((ulonglong)*(undefined8 *)(lVar21 + 0x60) >> 0x20);
        fVar35 = (float)((ulonglong)*puStack_d8 >> 0x20) - fVar36;
        fVar33 = fVar33 - (float)*(undefined8 *)(lVar21 + 0x68);
        fVar36 = fVar36 - (float)((ulonglong)*(undefined8 *)(lVar21 + 0x68) >> 0x20);
        fVar36 = SQRT(fVar36 * fVar36 + fVar33 * fVar33) + *(float *)(lVar21 + 200);
        fVar33 = fVar36;
        if (fVar36 <= fVar38) {
          fVar33 = fVar38;
        }
        bVar6 = SQRT(fVar35 * fVar35 + fVar34 * fVar34) <=
                (float)(~-(uint)NAN(fVar38) & (uint)fVar33 | -(uint)NAN(fVar38) & (uint)fVar36);
      }
      if ((bVar6 | (byte)uStack_c0) != 1) break;
      uVar11 = (ulonglong)(iVar13 + 1);
      pdb_140a34500(&uStack_b0,uStack_90);
      fVar33 = uStack_b0._4_4_ - *(float *)(lVar21 + 0xd0);
      fVar34 = (float)uStack_b0 - *(float *)(lVar21 + 0xcc);
      fVar35 = fStack_a8 - *(float *)(lVar21 + 0xd4);
    } while (SQRT(fVar35 * fVar35 + fVar33 * fVar33 + fVar34 * fVar34) <= fVar32);
  }
  *(undefined4 *)param_10[2] = *(undefined4 *)((longlong)param_10 + 0x1c);
  lVar9 = *param_10;
  lVar29 = *(longlong *)(lVar9 + 0x30);
  uVar12 = *(undefined8 *)(lVar9 + 0x40);
  if (lVar29 == *(longlong *)(lVar9 + 0x20)) {
LAB_1428ccc99:
    pdb_142d7e980(lVar9 + 0x20);
  }
LAB_1428ccca2:
  lVar19 = *(longlong *)(lVar9 + 0x28);
  *(undefined8 *)(lVar19 + lVar29 * 0x10) = uVar12;
  *(undefined1 *)(lVar19 + 8 + lVar29 * 0x10) = 1;
  *(longlong *)(lVar9 + 0x30) = lVar29 + 1;
  *(longlong *)(lVar9 + 0x40) = *(longlong *)(lVar9 + 0x40) + 1;
  return;
}

