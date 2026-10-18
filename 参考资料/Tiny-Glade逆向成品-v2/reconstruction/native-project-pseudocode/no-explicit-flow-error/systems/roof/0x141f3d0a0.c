// VA 0x141f3d0a0, PDB extent 3142 bytes
// system_roof::ui_edit_roof::ui_edit_roof
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/roof/src/ui_edit_roof.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Type propagation algorithm not settling */
/* Matched PDB project procedure: system_roof::ui_edit_roof::ui_edit_roof
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/roof/src/ui_edit_roof.rs
   Extent: 3142 */

void pdb_141f3d0a0(uint *******param_1,uint *******param_2,uint *******param_3,uint *******param_4,
                  undefined8 param_5,longlong param_6)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  uint ******ppppppuVar5;
  uint *****pppppuVar6;
  uint *****pppppuVar7;
  longlong lVar8;
  code *pcVar9;
  char cVar10;
  undefined1 uVar11;
  uint uVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong *plVar15;
  uint ******ppppppuVar16;
  uint ****ppppuVar17;
  ulonglong uVar18;
  uint *****pppppuVar19;
  undefined4 *puVar20;
  uint *******pppppppuVar21;
  undefined *puVar22;
  undefined *puVar23;
  uint *****pppppuVar24;
  uint *****pppppuVar25;
  uint *****pppppuVar26;
  uint *****pppppuVar27;
  uint *******unaff_R12;
  uint ******unaff_R13;
  uint *******pppppppuVar28;
  uint ****unaff_R15;
  uint *******pppppppuStack_2e8;
  uint ***pppuStack_2e0;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  undefined8 uStack_2d0;
  undefined1 auStack_238 [24];
  undefined1 uStack_220;
  char cStack_21f;
  undefined8 uStack_1c0;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined8 uStack_1b0;
  undefined4 auStack_110 [2];
  undefined8 uStack_108;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 uStack_d8;
  uint ******ppppppuStack_c0;
  undefined4 *puStack_b8;
  uint ***pppuStack_b0;
  uint ******ppppppuStack_a8;
  uint ****ppppuStack_a0;
  uint ****ppppuStack_98;
  longlong *plStack_90;
  longlong *plStack_88;
  uint *******pppppppuStack_80;
  uint ******ppppppuStack_78;
  longlong *plStack_70;
  uint ***pppuStack_68;
  uint ***pppuStack_60;
  uint ***pppuStack_58;
  char cStack_4c;
  undefined1 uStack_4b;
  undefined1 uStack_4a;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  cVar10 = pdb_140e94b40();
  plStack_70 = (longlong *)CONCAT71(plStack_70._1_7_,cVar10);
  if (cVar10 == '\0') {
    uStack_f8 = 0;
    ppppppuVar16 = *param_1;
    pppppppuVar28 = param_3;
    if (*(char *)ppppppuVar16 != '\0') goto LAB_141f3d2c6;
    goto LAB_141f3d2c0;
  }
  unaff_R12 = (uint *******)&UNK_14342e620;
  unaff_R15 = (uint ****)0x27;
  uVar18 = 0x27;
  lVar13 = pdb_141f3ebe0(&UNK_14342e620);
  if (lVar13 == 1) {
    if (uVar18 < 0x28) {
      unaff_R12 = (uint *******)&UNK_14342e620;
      uVar14 = pdb_141f3ebe0(&UNK_14342e620);
      if ((uVar14 & 1) != 0) {
        if (0x27 < uVar18 + 2) goto LAB_141f3da5c;
        unaff_R15 = (uint ****)(0x25 - uVar18);
        unaff_R12 = (uint *******)(&UNK_14342e622 + uVar18);
      }
      goto LAB_141f3d149;
    }
  }
  else {
LAB_141f3d149:
    puVar22 = &UNK_14342e4af;
    unaff_R13 = (uint ******)&UNK_14342e488;
    while( true ) {
      bVar2 = puVar22[-1];
      uVar12 = (uint)(char)bVar2;
      pppppppuStack_80 = param_1;
      if ((char)bVar2 < '\0') break;
      puVar22 = puVar22 + -1;
      if (uVar12 == 0x5c) goto LAB_141f3d208;
LAB_141f3d1d4:
      if (uVar12 == 0x2f) goto LAB_141f3d208;
      if (puVar22 == &UNK_14342e488) {
        pppppppuVar21 = (uint *******)0x27;
LAB_141f3d233:
        plVar15 = (longlong *)pdb_140e97000();
        param_1 = param_4;
        pppppppuVar28 = param_2;
        if ((char)plVar15[0xd] != '\x01') goto LAB_141f3d9c9;
        do {
          param_2 = pppppppuVar28;
          param_4 = param_1;
          param_1 = param_4;
          pppppppuVar28 = param_2;
          if (*plVar15 == 0) {
            *plVar15 = -1;
            plStack_88 = plVar15;
            uStack_f0 = pdb_140e94f10(plVar15 + 1,unaff_R12,unaff_R15,unaff_R13,pppppppuVar21,1,0);
            *plStack_88 = *plStack_88 + 1;
            plStack_88 = (longlong *)uStack_f0;
            uStack_f8 = 1;
            ppppppuVar16 = *pppppppuStack_80;
            param_1 = pppppppuStack_80;
            pppppppuVar28 = param_3;
            if (*(char *)ppppppuVar16 == '\0') {
LAB_141f3d2c0:
              if (*(int *)(ppppppuVar16 + 1) == 0) {
                ppppppuVar16 = *param_4;
                ppppppuVar5 = param_4[1];
                pppppuVar6 = *ppppppuVar16;
                pppppuVar24 = (uint *****)0x0;
                pppppuVar25 = (uint *****)((longlong)pppppuVar6 - (longlong)ppppppuVar5[3]);
                if (pppppuVar6 < ppppppuVar5[3]) {
                  pppppuVar25 = pppppuVar24;
                }
                pppppuVar19 = (uint *****)((longlong)pppppuVar6 - (longlong)ppppppuVar5[7]);
                if (pppppuVar6 < ppppppuVar5[7]) {
                  pppppuVar19 = pppppuVar24;
                }
                pppppuVar6 = ppppppuVar5[6];
                pppppuVar26 = (uint *****)((longlong)pppppuVar6 - (longlong)pppppuVar19);
                if (pppppuVar19 > pppppuVar6) {
                  pppppuVar26 = pppppuVar24;
                }
                pppppuVar7 = ppppppuVar5[2];
                pppppuVar27 = (uint *****)((longlong)pppppuVar7 - (longlong)pppppuVar25);
                if (pppppuVar25 > pppppuVar7) {
                  pppppuVar27 = pppppuVar24;
                }
                pppppuVar24 = ppppppuVar5[8];
                *ppppppuVar16 =
                     (uint *****)
                     ((longlong)pppppuVar24 - ((longlong)pppppuVar27 + (longlong)pppppuVar26));
                if (pppppuVar25 <= pppppuVar7 &&
                    (uint *****)((longlong)pppppuVar7 - (longlong)pppppuVar25) != (uint *****)0x0 ||
                    pppppuVar19 <= pppppuVar6 &&
                    (uint *****)((longlong)pppppuVar6 - (longlong)pppppuVar19) != (uint *****)0x0) {
                  *ppppppuVar16 = pppppuVar24;
LAB_141f3d936:
                  if ((char)plStack_70 == '\0') {
                    return;
                  }
                  plVar15 = (longlong *)pdb_140e97000();
                  if ((char)plVar15[0xd] != '\x01') goto LAB_141f3d9fd;
                  goto LAB_141f3d959;
                }
                ppppppuStack_78 = *pppppppuVar28;
                unaff_R12 = (uint *******)ppppppuStack_78[0x1f];
                plStack_90 = *(longlong **)(param_6 + 8);
                if (*(longlong **)(param_6 + 8) == (longlong *)0x0) {
                  plStack_90 = *(longlong **)(param_6 + 0x10);
                }
                unaff_R13 = pppppppuVar28[1];
                param_4 = (uint *******)((longlong)unaff_R12 + (longlong)ppppppuStack_78[0x20] * 4);
                cStack_4c = *(char *)(ppppppuStack_78 + 0x21);
                ppppppuStack_a8 = *param_2;
                unaff_R15 = (uint ****)0x0;
                ppppuStack_a0 = (uint ****)0x8;
                ppppuStack_98 = (uint ****)0x8;
                pppuStack_68 = (uint ***)0x0;
                pppuStack_60 = (uint ***)0x0;
                pppuStack_58 = (uint ***)0x0;
                pppppppuStack_80 = (uint *******)((ulonglong)pppppppuStack_80 & 0xffffffff00000000);
                while( true ) {
                  if (cStack_4c == '\0') {
                    if ((uint)pppppppuStack_80 == (uint)unaff_R15) {
                      do {
                        if (unaff_R12 == param_4) goto LAB_141f3d2c6;
                        uVar18 = (ulonglong)*(uint *)unaff_R12;
                        unaff_R12 = (uint *******)((longlong)unaff_R12 + 4);
                        pppppuVar6 = unaff_R13[0x20];
                        unaff_R15 = pppppuVar6[uVar18 * 0x14 + 0xb];
                      } while (unaff_R15 == (uint ****)0x0);
                      uVar14 = (ulonglong)
                               *(uint *)((longlong)pppppuVar6 + (uVar18 * 0x28 + 0x25) * 4);
                      pppppuVar25 = unaff_R13[0x34];
                      pppppuVar24 = (uint *****)pppppuVar25[uVar14 * 9 + 8];
                      if ((ppppppuStack_78[0x22] < pppppuVar24) &&
                         (pppppuVar25[uVar14 * 9 + 7][(longlong)ppppppuStack_78[0x22]] !=
                          (uint ***)0x0)) {
                        pppuStack_68 = pppppuVar25[uVar14 * 9 + 3]
                                       [~(ulonglong)
                                         pppppuVar25[uVar14 * 9 + 7]
                                         [(longlong)ppppppuStack_78[0x22]] * 6 + 2];
                      }
                      else {
                        pppuStack_68 = (uint ***)0x0;
                      }
                      if ((ppppppuStack_78[0x23] < pppppuVar24) &&
                         (pppppuVar25[uVar14 * 9 + 7][(longlong)ppppppuStack_78[0x23]] !=
                          (uint ***)0x0)) {
                        pppuStack_60 = pppppuVar25[uVar14 * 9 + 3]
                                       [~(ulonglong)
                                         pppppuVar25[uVar14 * 9 + 7]
                                         [(longlong)ppppppuStack_78[0x23]] * 6 + 2];
                      }
                      else {
                        pppuStack_60 = (uint ***)0x0;
                      }
                      if ((ppppppuStack_78[0x24] < pppppuVar24) &&
                         (pppppuVar25[uVar14 * 9 + 7][(longlong)ppppppuStack_78[0x24]] !=
                          (uint ***)0x0)) {
                        pppuStack_58 = pppppuVar25[uVar14 * 9 + 3]
                                       [~(ulonglong)
                                         pppppuVar25[uVar14 * 9 + 7]
                                         [(longlong)ppppppuStack_78[0x24]] * 6 + 2];
                      }
                      else {
                        pppuStack_58 = (uint ***)0x0;
                      }
                      ppppuStack_98 = pppppuVar6[uVar18 * 0x14 + 10];
                      pppppppuStack_80._0_4_ = 0;
                    }
                    ppppuVar17 = ppppuStack_98 + (ulonglong)(uint)pppppppuStack_80 * 2;
                    uVar18 = (ulonglong)
                             ~*(uint *)(ppppuStack_98 + (ulonglong)(uint)pppppppuStack_80 * 2 + 1);
                  }
                  else {
                    if ((uint)pppppppuStack_80 == (uint)unaff_R15) {
                      do {
                        if (unaff_R12 == param_4) goto LAB_141f3d2c6;
                        uVar18 = (ulonglong)*(uint *)unaff_R12;
                        unaff_R12 = (uint *******)((longlong)unaff_R12 + 4);
                        pppppuVar6 = unaff_R13[0x34];
                        unaff_R15 = pppppuVar6[uVar18 * 9 + 2];
                      } while (unaff_R15 == (uint ****)0x0);
                      pppppuVar25 = (uint *****)pppppuVar6[uVar18 * 9 + 8];
                      if ((ppppppuStack_78[0x22] < pppppuVar25) &&
                         (pppppuVar6[uVar18 * 9 + 7][(longlong)ppppppuStack_78[0x22]] !=
                          (uint ***)0x0)) {
                        pppuStack_68 = pppppuVar6[uVar18 * 9 + 3]
                                       [~(ulonglong)
                                         pppppuVar6[uVar18 * 9 + 7][(longlong)ppppppuStack_78[0x22]]
                                        * 6 + 2];
                      }
                      else {
                        pppuStack_68 = (uint ***)0x0;
                      }
                      if ((ppppppuStack_78[0x23] < pppppuVar25) &&
                         (pppppuVar6[uVar18 * 9 + 7][(longlong)ppppppuStack_78[0x23]] !=
                          (uint ***)0x0)) {
                        pppuStack_60 = pppppuVar6[uVar18 * 9 + 3]
                                       [~(ulonglong)
                                         pppppuVar6[uVar18 * 9 + 7][(longlong)ppppppuStack_78[0x23]]
                                        * 6 + 2];
                      }
                      else {
                        pppuStack_60 = (uint ***)0x0;
                      }
                      if ((ppppppuStack_78[0x24] < pppppuVar25) &&
                         (pppppuVar6[uVar18 * 9 + 7][(longlong)ppppppuStack_78[0x24]] !=
                          (uint ***)0x0)) {
                        pppuStack_58 = pppppuVar6[uVar18 * 9 + 3]
                                       [~(ulonglong)
                                         pppppuVar6[uVar18 * 9 + 7][(longlong)ppppppuStack_78[0x24]]
                                        * 6 + 2];
                      }
                      else {
                        pppuStack_58 = (uint ***)0x0;
                      }
                      ppppuStack_a0 = pppppuVar6[uVar18 * 9 + 1];
                      pppppppuStack_80._0_4_ = 0;
                    }
                    uVar18 = (ulonglong)(uint)pppppppuStack_80;
                    ppppuVar17 = ppppuStack_a0 + uVar18;
                  }
                  param_2 = (uint *******)(pppuStack_68 + uVar18 * 0xb);
                  pppppppuVar28 = (uint *******)(pppuStack_58 + uVar18 * 9);
                  pppuStack_b0 = *ppppuVar17;
                  if ((int)pppuStack_b0 == 0) break;
                  cVar10 = pdb_140a007b0(pppuStack_60 + uVar18);
                  pppppppuStack_80 =
                       (uint *******)CONCAT44(pppppppuStack_80._4_4_,(uint)pppppppuStack_80 + 1);
                  if (cVar10 == '\0') {
                    pppuStack_2e0 = (uint ***)pdb_141f3f000;
                    pppppppuStack_2e8 = param_2;
                    pdb_140f60760(&uStack_1c0,&UNK_14342e4af,&pppppppuStack_2e8);
                    uStack_e8 = (int)uStack_1c0;
                    uStack_e4 = uStack_1c0._4_4_;
                    uStack_e0 = uStack_1b8;
                    uStack_dc = uStack_1b4;
                    uStack_d8 = uStack_1b0;
                    uStack_49 = 1;
                    pdb_140a0a220(auStack_238,pppppppuVar28,*(uint *)((longlong)param_2 + 0x4c));
                    uStack_49 = 1;
                    pdb_140fc8750(&uStack_1c0,auStack_238);
                    uStack_2d0 = uStack_1b0;
                    pppuStack_2e0 = uStack_1c0;
                    uStack_2d8 = uStack_1b8;
                    uStack_2d4 = uStack_1b4;
                    pppppppuStack_2e8 = (uint *******)CONCAT71(pppppppuStack_2e8._1_7_,2);
                    uStack_4b = 1;
                    cStack_21f = pdb_140b77990(param_2);
                    param_1 = (uint *******)&pppppppuStack_2e8;
                    cStack_21f = '\f' - cStack_21f;
                    uStack_220 = 1;
                    uStack_4b = 0;
                    pdb_140c9dcb0(&uStack_1c0,param_1,&uStack_220);
                    uStack_4a = 1;
                    pdb_140c9deb0(param_1);
                    uStack_108 = 2;
                    auStack_110[0] = 1;
                    uStack_4a = 1;
                    pdb_140c9de10(&uStack_220,param_1,auStack_110);
                    uStack_4a = 0;
                    pdb_140c9dd20(param_1,&uStack_1c0,&uStack_220);
                    uStack_49 = 0;
                    puVar20 = &uStack_e8;
                    ppppppuStack_c0 = (uint ******)pdb_142807c30(ppppppuStack_a8,puVar20,param_1);
                    pppppppuVar28 = &ppppppuStack_c0;
                    puStack_b8 = puVar20;
                    uVar11 = pdb_1408ffad0(pppppppuVar28);
                    uStack_1c0 = (uint ***)CONCAT71(uStack_1c0._1_7_,uVar11);
                    cVar10 = pdb_1408ff980(&uStack_1c0);
                    if (cVar10 != '\0') {
                      param_1 = (uint *******)*param_2;
                      lVar13 = plStack_90[2];
                      if ((ulonglong)(*plStack_90 - lVar13) < 0x18) {
                        pdb_142d7f1b0(plStack_90,lVar13,0x18,1,1);
                      }
                      lVar8 = plStack_90[1];
                      *(code **)(lVar8 + lVar13) = pdb_140fc5d10;
                      *(uint ********)(lVar8 + 8 + lVar13) = param_1;
                      *(undefined1 *)(lVar8 + 0x10 + lVar13) = 2;
                      param_2 = (uint *******)(lVar13 + 0x18);
                      plStack_90[2] = (longlong)param_2;
                    }
                    pdb_1408ff9a0(&uStack_1c0,pppppppuVar28);
                    if ((int)uStack_1c0 != 2) {
                      uVar11 = pdb_1408ffab0(&ppppppuStack_c0);
                      uStack_1b8 = CONCAT31(uStack_1b8._1_3_,uVar11);
                      uStack_1c0 = pppuStack_b0;
                      pdb_141b74d00(param_5,&uStack_1c0,&UNK_14342e4c0);
                      goto LAB_141f3d936;
                    }
                  }
                }
              }
            }
LAB_141f3d2c6:
            if ((char)plStack_70 == '\0') {
              return;
            }
            plVar15 = (longlong *)pdb_140e97000();
            if (((char)plVar15[0xd] != '\x01') &&
               (plVar15 = (longlong *)pdb_142e293d0(plVar15,0), plVar15 == (longlong *)0x0))
            goto LAB_141f3d9f1;
            param_3 = param_4;
            pppppppuVar21 = param_2;
            if (*plVar15 == 0) {
              *plVar15 = -1;
              plStack_70 = plVar15;
              pdb_140e95370(plVar15 + 1);
LAB_141f3d307:
              *plStack_70 = *plStack_70 + 1;
              return;
            }
          }
          while( true ) {
            plVar15 = (longlong *)pdb_142dc8090(&UNK_14359bf70);
LAB_141f3d9c9:
            plVar15 = (longlong *)pdb_142e293d0(plVar15,0);
            param_4 = param_3;
            param_2 = pppppppuVar21;
            if (plVar15 != (longlong *)0x0) break;
LAB_141f3d9f1:
            do {
              plVar15 = (longlong *)pdb_142dc7890(&UNK_14359bf00);
LAB_141f3d9fd:
              plVar15 = (longlong *)pdb_142e293d0(plVar15,0);
            } while (plVar15 == (longlong *)0x0);
LAB_141f3d959:
            param_3 = param_4;
            pppppppuVar21 = param_2;
            if (*plVar15 == 0) {
              *plVar15 = -1;
              plStack_70 = plVar15;
              pdb_140e95370(plVar15 + 1);
              goto LAB_141f3d307;
            }
          }
        } while( true );
      }
    }
    bVar3 = puVar22[-2];
    if ((char)bVar3 < -0x40) {
      bVar4 = puVar22[-3];
      if ((char)bVar4 < -0x40) {
        pbVar1 = puVar22 + -4;
        puVar22 = puVar22 + -4;
        uVar12 = bVar4 & 0x3f | (*pbVar1 & 7) << 6;
      }
      else {
        puVar22 = puVar22 + -3;
        uVar12 = bVar4 & 0xf;
      }
      uVar12 = bVar3 & 0x3f | uVar12 << 6;
    }
    else {
      puVar22 = puVar22 + -2;
      uVar12 = bVar3 & 0x1f;
    }
    uVar12 = (uint)(bVar2 & 0x3f) | uVar12 << 6;
    if (uVar12 != 0x5c) goto LAB_141f3d1d4;
LAB_141f3d208:
    puVar23 = puVar22 + -0x14342e487;
    if (puVar23 < (undefined *)0x28) {
      pppppppuVar21 = (uint *******)(0x27 - (longlong)puVar23);
      unaff_R13 = (uint ******)(puVar22 + 1);
      goto LAB_141f3d233;
    }
    pdb_142dc8070(&UNK_14342e488,0x27,puVar23,0x27,&UNK_14342e6b0);
  }
  pdb_142dc8070(&UNK_14342e620,0x27,0);
LAB_141f3da5c:
  pdb_142dc8070(&UNK_14342e620,0x27);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}

