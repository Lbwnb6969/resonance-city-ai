// VA 0x1423a2a80, PDB extent 3345 bytes
// toolbar::menu::daily_welcome::ui
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/menu/daily_welcome.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: toolbar::menu::daily_welcome::ui
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/menu/daily_welcome.rs
   Extent: 3345 */

void pdb_1423a2a80(longlong *******param_1,undefined8 *param_2,longlong *******param_3,
                  longlong *******param_4,undefined8 *param_5,longlong *******param_6,
                  longlong *param_7)

{
  byte *pbVar1;
  longlong ******pppppplVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  ulonglong *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong ******pppppplVar11;
  code *pcVar12;
  longlong *******ppppppplVar13;
  char cVar14;
  uint uVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong *plVar18;
  longlong *******ppppppplVar19;
  undefined8 uVar20;
  longlong lVar21;
  undefined8 *puVar22;
  undefined8 uVar23;
  longlong *******unaff_RBX;
  undefined8 *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined8 *puVar27;
  undefined8 *puVar28;
  longlong *unaff_R12;
  longlong *******ppppppplVar29;
  longlong *******ppppppplVar30;
  bool bVar31;
  float fVar32;
  float fVar33;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  longlong lStack_1b0;
  undefined1 auStack_1a8 [16];
  longlong *******ppppppplStack_198;
  longlong *******ppppppplStack_190;
  longlong *******ppppppplStack_188;
  undefined8 uStack_180;
  longlong *******ppppppplStack_178;
  longlong *plStack_170;
  longlong *******ppppppplStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  longlong *******ppppppplStack_140;
  longlong *plStack_138;
  longlong *******ppppppplStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  longlong *******ppppppplStack_108;
  longlong *plStack_100;
  longlong *******ppppppplStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  longlong *******ppppppplStack_e0;
  longlong *******ppppppplStack_d8;
  undefined4 uStack_cc;
  undefined8 uStack_c8;
  longlong lStack_c0;
  undefined8 uStack_b8;
  longlong *******ppppppplStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong *******ppppppplStack_98;
  longlong *******ppppppplStack_90;
  longlong *******ppppppplStack_88;
  longlong *plStack_80;
  longlong *******ppppppplStack_78;
  longlong *plStack_70;
  longlong *******ppppppplStack_68;
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  puVar22 = param_2;
  cVar14 = pdb_140e94b40();
  if (cVar14 == '\0') {
    lStack_c0 = 0;
    ppppppplVar30 = param_1;
    ppppppplVar29 = param_3;
    param_3 = param_4;
    goto LAB_1423a2c62;
  }
  ppppppplVar30 = (longlong *******)0x20;
  lVar16 = pdb_1423a2660(0x20);
  unaff_R12 = (longlong *)&UNK_1434e2000;
  if (lVar16 == 1) {
    if ((undefined8 *)0x20 < puVar22) {
LAB_1423a34a3:
      pdb_142dc8070(&UNK_1434e2000,0x20,0);
LAB_1423a34c3:
      pdb_142dc8070(&UNK_1434e2000,0x20);
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    uVar17 = pdb_1423a2660(puVar22);
    if ((uVar17 & 1) != 0) {
      if (0x20 < (longlong)puVar22 + 2U) goto LAB_1423a34c3;
      ppppppplVar30 = (longlong *******)(0x1e - (longlong)puVar22);
      unaff_R12 = (longlong *)((longlong)puVar22 + 0x1434e2002);
    }
  }
  puVar25 = &UNK_1434e2108;
  ppppppplVar29 = (longlong *******)&UNK_1434e20d8;
  do {
    bVar3 = puVar25[-1];
    uVar15 = (uint)(char)bVar3;
    ppppppplStack_68 = param_1;
    if ((char)bVar3 < '\0') {
      bVar4 = puVar25[-2];
      if ((char)bVar4 < -0x40) {
        bVar5 = puVar25[-3];
        if ((char)bVar5 < -0x40) {
          pbVar1 = puVar25 + -4;
          puVar25 = puVar25 + -4;
          uVar15 = bVar5 & 0x3f | (*pbVar1 & 7) << 6;
        }
        else {
          puVar25 = puVar25 + -3;
          uVar15 = bVar5 & 0xf;
        }
        uVar15 = bVar4 & 0x3f | uVar15 << 6;
      }
      else {
        puVar25 = puVar25 + -2;
        uVar15 = bVar4 & 0x1f;
      }
      uVar15 = (uint)(bVar3 & 0x3f) | uVar15 << 6;
      if (uVar15 != 0x5c) goto LAB_1423a2bb4;
LAB_1423a2bcc:
      puVar26 = puVar25 + -0x1434e20d7;
      if (puVar26 < (undefined *)0x31) {
        unaff_RBX = (longlong *******)(0x30 - (longlong)puVar26);
        ppppppplVar29 = (longlong *******)(puVar25 + 1);
        goto LAB_1423a2bee;
      }
      pdb_142dc8070(&UNK_1434e20d8,0x30,puVar26,0x30,&UNK_1434e2088);
      goto LAB_1423a34a3;
    }
    puVar25 = puVar25 + -1;
    if (uVar15 == 0x5c) goto LAB_1423a2bcc;
LAB_1423a2bb4:
    if (uVar15 == 0x2f) goto LAB_1423a2bcc;
  } while (puVar25 != &UNK_1434e20d8);
  unaff_RBX = (longlong *******)0x30;
LAB_1423a2bee:
  plVar18 = (longlong *)pdb_140e97000();
  if ((char)plVar18[0xd] != '\x01') goto LAB_1423a3427;
  do {
    if (*plVar18 == 0) {
      *plVar18 = -1;
      plStack_70 = plVar18;
      uStack_b8 = pdb_140e94f10(plVar18 + 1,unaff_R12,ppppppplVar30,ppppppplVar29,unaff_RBX,1,0);
      *plStack_70 = *plStack_70 + 1;
      lStack_c0 = 1;
      ppppppplVar30 = ppppppplStack_68;
      ppppppplVar29 = param_3;
      param_3 = param_4;
LAB_1423a2c62:
      param_4 = ppppppplVar30;
      if (*param_7 == 0) {
LAB_1423a2cdd:
        uVar6 = *(undefined4 *)((longlong)param_2 + 0x1c);
        puVar7 = (undefined4 *)param_2[2];
        *puVar7 = uVar6;
        ppppppplVar30 = (longlong *******)*param_2;
        if (*(char *)ppppppplVar30 == '\0') {
          if (*(int *)*param_3 != 2) {
            *(undefined4 *)ppppppplVar30 = 1;
            goto joined_r0x0001423a2f4f;
          }
          uStack_cc = 0x41900000;
          *(undefined4 *)param_4[2] = *(undefined4 *)((longlong)param_4 + 0x1c);
          param_4 = (longlong *******)*param_4;
          puStack_1c0 = &UNK_1434e2108;
          uStack_1b8 = 7;
          uVar17 = pdb_140bbbcb0(&puStack_1c0);
          param_3 = (longlong *******)(uVar17 ^ 0xb1695320004fb443);
          ppppppplVar19 = param_3;
          lVar16 = pdb_14072c2d0(param_4);
          *(undefined1 *)(lVar16 + 0x5e) = 0;
          *(undefined1 *)(lVar16 + 0xcb) = 1;
          if (((ulonglong)ppppppplVar19 & 1) == 0) {
            pppppplVar2 = param_4[2];
            if (pppppplVar2 == *param_4) {
              pdb_142d7f080(param_4);
            }
            pppppplVar11 = param_4[1];
            *(undefined4 *)(pppppplVar11 + (longlong)pppppplVar2 * 7) = 1;
            pppppplVar11[(longlong)pppppplVar2 * 7 + 6] = (longlong *****)param_3;
            unaff_RBX = (longlong *******)((longlong)pppppplVar2 + 1);
            param_4[2] = (longlong ******)unaff_RBX;
          }
          ppppppplStack_188 = (longlong *******)0x0;
          ppppppplStack_198 = param_4;
          ppppppplStack_190 = param_3;
          pdb_141174160(&puStack_1c0,&ppppppplStack_198,&UNK_1434e210f,0x12,0);
          fVar32 = *(float *)(*ppppppplVar29 + 5) + *(float *)((longlong)ppppppplVar30 + 4);
          *(float *)((longlong)ppppppplVar30 + 4) = fVar32;
          lVar16 = pdb_1411a3e40(lStack_1b0 + 0x1b0,auStack_1a8);
          if (lVar16 == 0) goto LAB_1423a3471;
          fVar33 = (fVar32 + _DAT_143009d0c) / _DAT_142e37988;
          fVar32 = 0.0;
          if (0.0 <= fVar33) {
            fVar32 = fVar33;
          }
          fVar33 = _DAT_142e36f28;
          if (fVar32 <= _DAT_142e36f28) {
            fVar33 = fVar32;
          }
          *(float *)(lVar16 + 0xc4) = (_DAT_142e3788c - (fVar33 + fVar33)) * fVar33 * fVar33;
          pdb_1411925a0(&puStack_1c0,&UNK_1434e2121,5,param_6);
          pdb_141188500(&puStack_1c0,&UNK_1434e2126,7,&uStack_cc,param_2);
          bVar31 = SBORROW8(0,(longlong)**param_6);
          param_4 = param_6;
          if (!bVar31) {
            pppppplVar2 = *param_6 + bVar31;
            cVar14 = pdb_140a82810(pppppplVar2);
            if (cVar14 == '\0') {
              uVar23 = 0x14;
              uVar20 = pdb_140dc6290(&UNK_1434e212d);
            }
            else {
              uVar23 = 0x1b;
              uVar20 = pdb_140dc6290(&UNK_1434e2141);
            }
            pdb_14118fda0(&puStack_1c0,&UNK_1434e215c,6,uVar20,uVar23);
            plVar18 = (longlong *)0x12;
            ppppppplStack_68 = (longlong *******)pdb_140dc6290(&UNK_1434e2162);
            plStack_70 = plVar18;
            if (SBORROW8(0,(longlong)pppppplVar2[0x21])) {
              ppppppplStack_98 = (longlong *******)0x8000000000000000;
            }
            else {
              pdb_140f60be0(&ppppppplStack_198,pppppplVar2 + 0x21);
              ppppppplStack_98 = ppppppplStack_198;
            }
            ppppppplVar19 = ppppppplStack_188;
            ppppppplStack_e0 = ppppppplStack_190;
            unaff_R12 = (longlong *)0x14;
            ppppppplVar30 = (longlong *******)pdb_140dc6290(&UNK_1434e2178);
            if (SBORROW8(0,(longlong)pppppplVar2[0x1b])) {
              ppppppplStack_90 = (longlong *******)0x8000000000000000;
            }
            else {
              pdb_140f60be0(&ppppppplStack_198);
              ppppppplStack_90 = ppppppplStack_198;
            }
            param_3 = ppppppplStack_188;
            ppppppplStack_d8 = ppppppplStack_190;
            plVar18 = (longlong *)0x19;
            ppppppplVar29 = (longlong *******)pdb_140dc6290(&UNK_1434e2192);
            if (SBORROW8(0,(longlong)pppppplVar2[0x1e])) {
              ppppppplStack_88 = (longlong *******)0x8000000000000000;
            }
            else {
              pdb_140f60be0(&ppppppplStack_88,pppppplVar2 + 0x1e);
            }
            uStack_e8 = ppppppplStack_78;
            ppppppplStack_f8 = ppppppplStack_88;
            uStack_f0 = plStack_80;
            ppppppplStack_190 = (longlong *******)0x3;
            ppppppplStack_188 = (longlong *******)&UNK_1434e2174;
            uStack_180 = 4;
            ppppppplStack_178 = ppppppplStack_68;
            plStack_170 = plStack_70;
            ppppppplStack_168 = ppppppplStack_98;
            uStack_160 = ppppppplStack_e0;
            ppppppplVar13 = uStack_160;
            uStack_158 = ppppppplVar19;
            puStack_150 = &UNK_1434e218c;
            uStack_148 = 6;
            ppppppplStack_140 = ppppppplVar30;
            plStack_138 = unaff_R12;
            ppppppplStack_130 = ppppppplStack_90;
            uStack_128 = ppppppplStack_d8;
            uStack_120 = param_3;
            puStack_118 = &UNK_1434e218c;
            uStack_110 = 6;
            ppppppplStack_108 = ppppppplVar29;
            plStack_100 = plVar18;
            ppppppplStack_198 = (longlong *******)0x1;
            param_4 = (longlong *******)0x8000000000000001;
            if (ppppppplStack_98 == (longlong *******)0x8000000000000001) {
              lVar16 = 1;
              lVar21 = 2;
            }
            else {
              param_2 = (undefined8 *)&uStack_a8;
              ppppppplStack_b0 = ppppppplStack_98;
              uStack_160._0_4_ = SUB84(ppppppplStack_e0,0);
              uStack_160._4_4_ = (undefined4)((ulonglong)ppppppplStack_e0 >> 0x20);
              uStack_158._0_4_ = SUB84(ppppppplVar19,0);
              uStack_158._4_4_ = (undefined4)((ulonglong)ppppppplVar19 >> 0x20);
              uStack_a8 = (undefined4)uStack_160;
              uStack_a4 = uStack_160._4_4_;
              uStack_a0 = (undefined4)uStack_158;
              uStack_9c = uStack_158._4_4_;
              unaff_RBX = (longlong *******)&ppppppplStack_198;
              uStack_160 = ppppppplVar13;
              uStack_158 = ppppppplVar19;
              if (!SBORROW8(0,(longlong)ppppppplStack_98)) {
                ppppppplStack_88 = ppppppplStack_68;
                plStack_80 = plStack_70;
                ppppppplStack_78 = (longlong *******)&ppppppplStack_b0;
                uStack_c8 = 1;
                pdb_141187e70(&puStack_1c0,&UNK_1434e2174,4,&ppppppplStack_88);
                if ((!SBORROW8(0,(longlong)ppppppplStack_b0)) &&
                   (ppppppplStack_b0 != (longlong *******)0x0)) {
                  pub_1406abac0((byte *)CONCAT44(uStack_a4,uStack_a8),(ulonglong)ppppppplStack_b0,1)
                  ;
                }
              }
              ppppppplStack_198 = (longlong *******)0x2;
              if (ppppppplStack_130 != (longlong *******)0x8000000000000001) {
                ppppppplStack_b0 = ppppppplStack_130;
                uStack_a8 = (undefined4)uStack_128;
                uStack_a4 = uStack_128._4_4_;
                uStack_a0 = (undefined4)uStack_120;
                uStack_9c = uStack_120._4_4_;
                if (!SBORROW8(0,(longlong)ppppppplStack_130)) {
                  ppppppplStack_88 = ppppppplStack_140;
                  plStack_80 = plStack_138;
                  ppppppplStack_78 = (longlong *******)&ppppppplStack_b0;
                  uStack_c8 = 2;
                  pdb_141187e70(&puStack_1c0,puStack_150,uStack_148,&ppppppplStack_88);
                  if ((!SBORROW8(0,(longlong)ppppppplStack_b0)) &&
                     (ppppppplStack_b0 != (longlong *******)0x0)) {
                    pub_1406abac0((byte *)CONCAT44(uStack_a4,uStack_a8),(ulonglong)ppppppplStack_b0,
                                  1);
                  }
                }
                ppppppplStack_198 = (longlong *******)0x3;
                if (ppppppplStack_f8 != (longlong *******)0x8000000000000001) {
                  ppppppplStack_b0 = ppppppplStack_f8;
                  uStack_a8 = (undefined4)uStack_f0;
                  uStack_a4 = uStack_f0._4_4_;
                  uStack_a0 = (undefined4)uStack_e8;
                  uStack_9c = uStack_e8._4_4_;
                  if (!SBORROW8(0,(longlong)ppppppplStack_f8)) {
                    ppppppplStack_88 = ppppppplStack_108;
                    plStack_80 = plStack_100;
                    ppppppplStack_78 = (longlong *******)&ppppppplStack_b0;
                    uStack_c8 = 3;
                    pdb_141187e70(&puStack_1c0,puStack_118,uStack_110,&ppppppplStack_88);
                    if ((!SBORROW8(0,(longlong)ppppppplStack_b0)) &&
                       (ppppppplStack_b0 != (longlong *******)0x0)) {
                      pub_1406abac0((byte *)CONCAT44(uStack_a4,uStack_a8),
                                    (ulonglong)ppppppplStack_b0,1);
                    }
                  }
                }
                goto LAB_1423a2ef8;
              }
              lVar16 = 2;
              lVar21 = 1;
            }
            param_2 = (undefined8 *)(lVar21 * 0x38);
            param_4 = (longlong *******)(&uStack_160 + lVar16 * 7);
            unaff_RBX = (longlong *******)0x0;
            do {
              uVar17 = *(ulonglong *)
                        ((longlong)(&ppppppplStack_168 + lVar16 * 7) + (longlong)unaff_RBX);
              if ((!SBORROW8(0,uVar17)) && (uVar17 != 0)) {
                pub_1406abac0(*(byte **)((longlong)param_4 + (longlong)unaff_RBX),uVar17,1);
              }
              unaff_RBX = unaff_RBX + 7;
            } while ((longlong)param_2 - (longlong)unaff_RBX != 0);
          }
        }
        else {
          puVar8 = (ulonglong *)*param_5;
          lVar16 = param_5[1];
          uVar17 = *puVar8;
          puVar28 = (undefined8 *)0x0;
          puVar22 = (undefined8 *)(uVar17 - *(ulonglong *)(lVar16 + 0x18));
          if (uVar17 < *(ulonglong *)(lVar16 + 0x18)) {
            puVar22 = puVar28;
          }
          puVar27 = (undefined8 *)(uVar17 - *(ulonglong *)(lVar16 + 0x38));
          if (uVar17 < *(ulonglong *)(lVar16 + 0x38)) {
            puVar27 = puVar28;
          }
          puVar9 = *(undefined8 **)(lVar16 + 0x30);
          param_2 = (undefined8 *)((longlong)puVar9 - (longlong)puVar27);
          if (puVar9 < puVar27) {
            param_2 = puVar28;
          }
          puVar10 = *(undefined8 **)(lVar16 + 0x10);
          puVar24 = (undefined8 *)((longlong)puVar10 - (longlong)puVar22);
          if (puVar10 < puVar22) {
            puVar24 = puVar28;
          }
          uVar17 = *(ulonglong *)(lVar16 + 0x40);
          param_4 = (longlong *******)((longlong)puVar24 + (longlong)param_2);
          *puVar8 = uVar17 - (longlong)param_4;
          if (puVar10 >= puVar22 &&
              (undefined8 *)((longlong)puVar10 - (longlong)puVar22) != (undefined8 *)0x0 ||
              puVar9 >= puVar27 &&
              (undefined8 *)((longlong)puVar9 - (longlong)puVar27) != (undefined8 *)0x0) {
            *puVar8 = uVar17;
            *puVar7 = uVar6;
            *ppppppplVar30 = (longlong ******)0x0;
          }
        }
LAB_1423a2ef8:
        if (lStack_c0 == 0) {
          return;
        }
        plVar18 = (longlong *)pdb_140e97000();
        if (((char)plVar18[0xd] != '\x01') &&
           (plVar18 = (longlong *)pdb_142dcf3a0(plVar18,0), plVar18 == (longlong *)0x0)) break;
        if (*plVar18 == 0) {
          *plVar18 = -1;
          ppppppplStack_68 = (longlong *******)plVar18;
          pdb_140e95370(plVar18 + 1,uStack_b8);
          goto LAB_1423a2f89;
        }
      }
      else {
        ppppppplVar30 = (longlong *******)pdb_1406d0830();
        ppppppplVar19 = (longlong *******)pub_142e31f10();
        unaff_RBX = (longlong *******)*ppppppplVar30;
        LOCK();
        pppppplVar2 = *unaff_RBX;
        *unaff_RBX = (longlong ******)((longlong)*unaff_RBX + 1);
        UNLOCK();
        if (*unaff_RBX == (longlong ******)0x0 ||
            SCARRY8((longlong)pppppplVar2,1) != (longlong)*unaff_RBX < 0) {
                    /* WARNING: Does not return */
          pcVar12 = (code *)invalidInstructionException();
          (*pcVar12)();
        }
        ppppppplStack_198 = unaff_RBX;
        ppppppplStack_190 = ppppppplVar19;
        cVar14 = pub_142e31e90(ppppppplVar19);
        LOCK();
        *unaff_RBX = (longlong ******)((longlong)*unaff_RBX + -1);
        UNLOCK();
        if (cVar14 == '\0') {
          if (*unaff_RBX == (longlong ******)0x0) {
            pdb_140cb1c10(&ppppppplStack_198);
          }
          goto LAB_1423a2cdd;
        }
        if (*unaff_RBX == (longlong ******)0x0) {
          pdb_140cb1c10(&ppppppplStack_198);
        }
joined_r0x0001423a2f4f:
        if (lStack_c0 == 0) {
          return;
        }
        plVar18 = (longlong *)pdb_140e97000();
        if (((char)plVar18[0xd] != '\x01') &&
           (plVar18 = (longlong *)pdb_142dcf3a0(plVar18,0), plVar18 == (longlong *)0x0)) break;
        if (*plVar18 == 0) {
          *plVar18 = -1;
          ppppppplStack_68 = (longlong *******)plVar18;
          pdb_140e95370(plVar18 + 1,uStack_b8);
LAB_1423a2f89:
          *ppppppplStack_68 = (longlong ******)((longlong)*ppppppplStack_68 + 1);
          return;
        }
      }
    }
    plVar18 = (longlong *)pdb_142dc8090(&UNK_1432a7f58);
LAB_1423a3427:
    plVar18 = (longlong *)pdb_142dcf3a0(plVar18,0);
  } while (plVar18 != (longlong *)0x0);
  pdb_142dc7890(&UNK_1432a7ee8);
LAB_1423a3471:
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_142fa6b48);
}

