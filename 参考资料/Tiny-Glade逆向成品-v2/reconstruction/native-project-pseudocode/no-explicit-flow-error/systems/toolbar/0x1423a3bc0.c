// VA 0x1423a3bc0, PDB extent 2366 bytes
// toolbar::menu::missing_mods::ui
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/menu/missing_mods.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: toolbar::menu::missing_mods::ui
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/menu/missing_mods.rs
   Extent: 2366 */

void pdb_1423a3bc0(ulonglong *param_1,undefined8 *param_2,ulonglong *param_3,ulonglong *param_4,
                  ulonglong *param_5,undefined8 param_6,undefined8 param_7,undefined8 *param_8)

{
  char *pcVar1;
  ulonglong uVar2;
  byte *pbVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  uint *puVar7;
  ulonglong **ppuVar8;
  code *pcVar9;
  ulonglong uVar10;
  char cVar11;
  uint uVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong *plVar15;
  undefined8 uVar16;
  ulonglong *puVar17;
  ulonglong *puVar18;
  ulonglong *puVar19;
  ulonglong *puVar20;
  ulonglong *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  ulonglong *puVar24;
  ulonglong *puVar25;
  longlong lVar26;
  ulonglong unaff_R12;
  ulonglong *puVar27;
  ulonglong *puVar28;
  bool bVar29;
  bool bVar30;
  float fVar31;
  float fVar32;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  longlong lStack_e8;
  undefined1 auStack_e0 [32];
  ulonglong *puStack_c0;
  ulonglong **ppuStack_b8;
  ulonglong *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  ulonglong *puStack_98;
  byte *pbStack_90;
  ulonglong *puStack_88;
  undefined8 *puStack_80;
  longlong *plStack_78;
  ulonglong *puStack_70;
  char cStack_61;
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  puStack_80 = param_2;
  cStack_61 = pdb_140e94b40();
  puVar20 = param_3;
  if (cStack_61 == '\0') goto LAB_1423a3d96;
  unaff_R12 = 0x1f;
  lVar13 = pdb_1423a37a0(0x1f);
  puVar21 = (ulonglong *)&UNK_1434e2298;
  if (lVar13 == 1) {
    if ((undefined8 *)0x1f < param_2) {
LAB_1423a4339:
      pdb_142dc8070(&UNK_1434e2298,0x1f,0);
LAB_1423a4359:
      pdb_142dc8070(&UNK_1434e2298,0x1f);
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    uVar14 = pdb_1423a37a0(param_2);
    if ((uVar14 & 1) != 0) {
      if (0x1f < (longlong)param_2 + 2U) goto LAB_1423a4359;
      unaff_R12 = 0x1d - (longlong)param_2;
      puVar21 = (ulonglong *)((longlong)param_2 + 0x1434e229a);
    }
  }
  puVar22 = &UNK_1434e239f;
  puVar27 = (ulonglong *)&UNK_1434e2370;
  do {
    bVar4 = puVar22[-1];
    uVar12 = (uint)(char)bVar4;
    puStack_70 = param_4;
    if ((char)bVar4 < '\0') {
      bVar5 = puVar22[-2];
      if ((char)bVar5 < -0x40) {
        bVar6 = puVar22[-3];
        if ((char)bVar6 < -0x40) {
          pbVar3 = puVar22 + -4;
          puVar22 = puVar22 + -4;
          uVar12 = bVar6 & 0x3f | (*pbVar3 & 7) << 6;
        }
        else {
          puVar22 = puVar22 + -3;
          uVar12 = bVar6 & 0xf;
        }
        uVar12 = bVar5 & 0x3f | uVar12 << 6;
      }
      else {
        puVar22 = puVar22 + -2;
        uVar12 = bVar5 & 0x1f;
      }
      uVar12 = (uint)(bVar4 & 0x3f) | uVar12 << 6;
      if (uVar12 != 0x5c) goto LAB_1423a3ce4;
LAB_1423a3d02:
      puVar23 = puVar22 + -0x1434e236f;
      if (puVar23 < (undefined *)0x30) {
        puVar20 = (ulonglong *)(0x2f - (longlong)puVar23);
        puVar27 = (ulonglong *)(puVar22 + 1);
        goto LAB_1423a3d2a;
      }
      pdb_142dc8070(&UNK_1434e2370,0x2f,puVar23,0x2f,&UNK_1434e2320);
      goto LAB_1423a4339;
    }
    puVar22 = puVar22 + -1;
    if (uVar12 == 0x5c) goto LAB_1423a3d02;
LAB_1423a3ce4:
    if (uVar12 == 0x2f) goto LAB_1423a3d02;
  } while (puVar22 != &UNK_1434e2370);
  puVar20 = (ulonglong *)0x2f;
LAB_1423a3d2a:
  plVar15 = (longlong *)pdb_140e97000();
  if ((char)plVar15[0xd] != '\x01') goto LAB_1423a42b9;
  do {
    if (*plVar15 == 0) {
      *plVar15 = -1;
      plStack_78 = plVar15;
      uVar16 = pdb_140e94f10(plVar15 + 1,puVar21,unaff_R12,puVar27,puVar20,1,0);
      *plStack_78 = *plStack_78 + 1;
      param_4 = puStack_70;
      puVar20 = param_3;
      plStack_78 = (longlong *)uVar16;
LAB_1423a3d96:
      param_3 = param_1;
      param_1 = param_4;
      uVar12 = *(uint *)((longlong)puStack_80 + 0x1c);
      puVar21 = (ulonglong *)(ulonglong)uVar12;
      puVar7 = (uint *)puStack_80[2];
      *puVar7 = uVar12;
      puVar27 = (ulonglong *)*puStack_80;
      if ((char)*puVar27 == '\0') {
        if (*(int *)*param_1 == 2) {
          unaff_R12 = *param_5;
          cVar11 = pdb_140a27740(unaff_R12);
          if (cVar11 != '\0') {
            *(float *)((longlong)puVar27 + 4) =
                 *(float *)(*puVar20 + 0x28) + *(float *)((longlong)puVar27 + 4);
            *(undefined4 *)param_3[2] = *(undefined4 *)((longlong)param_3 + 0x1c);
            ppuVar8 = (ulonglong **)*param_3;
            puStack_f8 = &UNK_1434e239f;
            uStack_f0 = 0xc;
            uVar14 = pdb_140bbbcb0(&puStack_f8);
            puVar21 = (ulonglong *)(uVar14 ^ 0xb1695320004fb443);
            puVar20 = puVar21;
            lVar13 = pdb_14072c2d0(ppuVar8);
            *(undefined1 *)(lVar13 + 0x5e) = 0;
            *(undefined1 *)(lVar13 + 0xcb) = 1;
            if (((ulonglong)puVar20 & 1) == 0) {
              puVar20 = ppuVar8[2];
              if (puVar20 == *ppuVar8) {
                pdb_142d7f080(ppuVar8);
              }
              puVar28 = ppuVar8[1];
              *(undefined4 *)(puVar28 + (longlong)puVar20 * 7) = 1;
              puVar28[(longlong)puVar20 * 7 + 6] = (ulonglong)puVar21;
              ppuVar8[2] = (ulonglong *)((longlong)puVar20 + 1);
            }
            uStack_a8 = 0;
            ppuStack_b8 = ppuVar8;
            puStack_b0 = puVar21;
            pdb_141174160(&puStack_f8,&ppuStack_b8,&UNK_1434e23ab,0x11,0);
            fVar31 = *(float *)((longlong)puVar27 + 4);
            lVar13 = pdb_1411a3e40(lStack_e8 + 0x1b0,auStack_e0);
            if (lVar13 != 0) {
              fVar32 = (fVar31 + _DAT_143009d0c) / _DAT_142e37988;
              fVar31 = 0.0;
              if (0.0 <= fVar32) {
                fVar31 = fVar32;
              }
              fVar32 = _DAT_142e36f28;
              if (fVar31 <= _DAT_142e36f28) {
                fVar32 = fVar31;
              }
              *(float *)(lVar13 + 0xc4) = (_DAT_142e3788c - (fVar32 + fVar32)) * fVar32 * fVar32;
              pdb_141189b80(&puStack_f8,&UNK_1434e23bc,6,param_5);
              puStack_98 = (ulonglong *)0x0;
              pbStack_90 = (byte *)0x8;
              puStack_88 = (ulonglong *)0x0;
              puStack_70 = *(ulonglong **)(unaff_R12 + 8) + *(longlong *)(unaff_R12 + 0x10) * 0xb;
              param_3 = (ulonglong *)0x0;
              puVar20 = (ulonglong *)0x0;
              puVar21 = *(ulonglong **)(unaff_R12 + 8);
LAB_1423a4051:
              if (puVar21 != puStack_70) {
                param_1 = puVar21 + 0xb;
                puVar27 = (ulonglong *)((longlong)puVar20 + 1);
                if (-1 < (longlong)puVar21[7]) {
                  unaff_R12 = puVar21[8];
                  uVar2 = unaff_R12 + puVar21[9] * 0x28;
                  uVar14 = unaff_R12;
                  lVar13 = puVar21[9] * 0x28;
                  do {
                    lVar26 = lVar13;
                    if (lVar26 == 0) break;
                    pcVar1 = (char *)(uVar14 + 0x20);
                    uVar14 = uVar14 + 0x28;
                    lVar13 = lVar26 + -0x28;
                  } while (*pcVar1 != '\x01');
                  do {
                    uVar14 = unaff_R12;
                    if (lVar26 == 0) {
                      puVar20 = puVar27;
                      puVar21 = param_1;
                      if (unaff_R12 == uVar2) goto LAB_1423a4051;
                      uVar14 = unaff_R12 + 0x28;
                      uVar10 = unaff_R12;
                    }
                    else {
                      do {
                        unaff_R12 = uVar14;
                        puVar20 = puVar27;
                        puVar21 = param_1;
                        if (unaff_R12 == uVar2) goto LAB_1423a4051;
                        uVar14 = unaff_R12 + 0x28;
                        uVar10 = unaff_R12;
                      } while (*(char *)(unaff_R12 + 0x20) != '\x01');
                    }
                    unaff_R12 = uVar14;
                    if (param_3 == puStack_98) {
                      pdb_142d7f1b0(&puStack_98,param_3,1,8,0x10);
                    }
                    pbVar3 = pbStack_90 + (longlong)param_3 * 0x10;
                    pbVar3[0] = 0;
                    pbVar3[1] = 0;
                    pbVar3[2] = 0;
                    pbVar3[3] = 0;
                    pbVar3[4] = 0;
                    pbVar3[5] = 0;
                    pbVar3[6] = 0;
                    pbVar3[7] = 0;
                    *(ulonglong *)(pbStack_90 + (longlong)param_3 * 0x10 + 8) = uVar10;
                    param_3 = (ulonglong *)((longlong)param_3 + 1);
                    puStack_88 = param_3;
                  } while( true );
                }
                if (param_3 == puStack_98) {
                  pdb_142d7e980(&puStack_98);
                }
                *(ulonglong **)(pbStack_90 + (longlong)param_3 * 0x10) = puVar21;
                *(ulonglong **)(pbStack_90 + (longlong)param_3 * 0x10 + 8) = puVar20;
                param_3 = (ulonglong *)((longlong)param_3 + 1);
                puVar20 = puVar27;
                puVar21 = param_1;
                puStack_88 = param_3;
                goto LAB_1423a4051;
              }
              ppuStack_b8 = &puStack_98;
              puStack_b0 = param_5;
              uStack_a8 = param_7;
              uStack_a0 = param_6;
              pdb_14118ed50(&puStack_f8,&UNK_1434e23c2,4,&ppuStack_b8);
              pdb_14118baf0(&puStack_f8,&UNK_1434e23c6,7,param_5,puStack_80);
              puVar28 = puVar27;
              if (puStack_98 != (ulonglong *)0x0) {
                pub_1406abac0(pbStack_90,(longlong)puStack_98 << 4,8);
              }
              goto LAB_1423a425e;
            }
            goto LAB_1423a4307;
          }
        }
        *puVar7 = uVar12;
        *(undefined4 *)puVar27 = 1;
        if (cStack_61 == '\0') {
          return;
        }
        plVar15 = (longlong *)pdb_140e97000();
        if (((char)plVar15[0xd] != '\x01') &&
           (plVar15 = (longlong *)pdb_142dcf3a0(plVar15,0), plVar15 == (longlong *)0x0)) break;
        if (*plVar15 == 0) {
          *plVar15 = -1;
          puStack_70 = (ulonglong *)plVar15;
          pdb_140e95370(plVar15 + 1,plStack_78);
          goto LAB_1423a428e;
        }
      }
      else {
        puStack_80 = (undefined8 *)CONCAT44(puStack_80._4_4_,uVar12);
        puVar21 = (ulonglong *)*param_8;
        lVar13 = param_8[1];
        uVar14 = *puVar21;
        puVar20 = (ulonglong *)0x0;
        puVar18 = (ulonglong *)(uVar14 - *(ulonglong *)(lVar13 + 0x18));
        if (uVar14 < *(ulonglong *)(lVar13 + 0x18)) {
          puVar18 = puVar20;
        }
        puVar17 = (ulonglong *)(uVar14 - *(ulonglong *)(lVar13 + 0x38));
        if (uVar14 < *(ulonglong *)(lVar13 + 0x38)) {
          puVar17 = puVar20;
        }
        lVar26 = *(longlong *)(lVar13 + 8);
        puStack_c0 = *(ulonglong **)(lVar13 + 0x30);
        bVar29 = puStack_c0 < puVar17;
        puVar24 = (ulonglong *)((longlong)puStack_c0 - (longlong)puVar17);
        puVar25 = puVar24;
        if (bVar29) {
          puVar25 = puVar20;
        }
        param_3 = *(ulonglong **)(lVar13 + 0x10);
        unaff_R12 = (ulonglong)(bVar29 || puVar24 == (ulonglong *)0x0);
        bVar30 = param_3 < puVar18;
        puVar19 = (ulonglong *)((longlong)param_3 - (longlong)puVar18);
        param_1 = puVar19;
        if (bVar30) {
          param_1 = puVar20;
        }
        puVar20 = *(ulonglong **)(lVar13 + 0x28);
        uVar14 = *(ulonglong *)(lVar13 + 0x40);
        puVar28 = (ulonglong *)
                  CONCAT71((int7)((ulonglong)puVar27 >> 8),bVar30 || puVar19 == (ulonglong *)0x0);
        *puVar21 = (uVar14 - (longlong)puVar25) - (longlong)param_1;
        puStack_70 = puVar27;
        if (!bVar30 && puVar19 != (ulonglong *)0x0 || !bVar29 && puVar24 != (ulonglong *)0x0) {
          puVar20 = puVar20 + (longlong)puVar17 * 2;
          param_1 = (ulonglong *)((longlong)param_1 * 0x10);
          lVar26 = lVar26 + (longlong)puVar18 * 0x10;
          if (param_3 < puVar18) {
            lVar26 = 8;
          }
          puVar24 = (ulonglong *)0x0;
          if (puVar18 < param_3) {
            puVar24 = (ulonglong *)(lVar26 + -0x10 + (longlong)param_1);
          }
          if (puStack_c0 < puVar17) {
            puVar20 = (ulonglong *)0x8;
          }
          puVar18 = puVar20 + (longlong)puVar25 * 2 + -2;
          if (puStack_c0 <= puVar17) {
            puVar18 = puVar24;
          }
          *puVar21 = uVar14;
          fVar31 = _DAT_142e36f28;
          if ((char)puVar18[1] == '\0') {
            fVar31 = 0.0;
          }
          *puVar7 = uVar12;
          *(undefined4 *)puVar27 = 0;
          *(float *)((longlong)puVar27 + 4) = fVar31;
        }
LAB_1423a425e:
        if (cStack_61 == '\0') {
          return;
        }
        plVar15 = (longlong *)pdb_140e97000();
        if (((char)plVar15[0xd] != '\x01') &&
           (plVar15 = (longlong *)pdb_142dcf3a0(plVar15,0), plVar15 == (longlong *)0x0)) break;
        puVar27 = puVar28;
        if (*plVar15 == 0) {
          *plVar15 = -1;
          puStack_70 = (ulonglong *)plVar15;
          pdb_140e95370(plVar15 + 1);
LAB_1423a428e:
          *puStack_70 = *puStack_70 + 1;
          return;
        }
      }
    }
    plVar15 = (longlong *)pdb_142dc8090(&UNK_1432a7f58);
LAB_1423a42b9:
    plVar15 = (longlong *)pdb_142dcf3a0(plVar15,0);
  } while (plVar15 != (longlong *)0x0);
  pdb_142dc7890(&UNK_1432a7ee8);
LAB_1423a4307:
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_142fa6b48);
}

