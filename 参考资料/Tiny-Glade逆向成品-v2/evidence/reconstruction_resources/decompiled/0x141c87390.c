// Matched PDB: asset::prefab::scan::scan_asset_tree_walker
// VA 0x141c87390, PDB extent 5654 bytes
// Ghidra pseudocode; types and unresolved calls are not original source.

/* WARNING: Type propagation algorithm not settling */
/* Matched PDB: asset::prefab::scan::scan_asset_tree_walker
   Extent: 5654 bytes. No whole-program auto-analysis. */

longlong *******
pdb_141c87390(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
             longlong *******param_5,longlong *param_6,longlong *param_7,undefined8 param_8,
             longlong param_9)

{
  undefined4 *puVar1;
  uint *puVar2;
  longlong ******pppppplVar3;
  code *pcVar4;
  longlong *******ppppppplVar5;
  longlong *plVar6;
  uint uVar7;
  char cVar8;
  longlong *******ppppppplVar9;
  longlong *******ppppppplVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  longlong *******ppppppplVar14;
  longlong lVar15;
  longlong lVar16;
  undefined8 unaff_R15;
  undefined8 *puVar17;
  ulonglong uVar18;
  undefined4 uVar19;
  longlong *******ppppppplStack_918;
  longlong *******ppppppplStack_910;
  undefined4 uStack_908;
  undefined4 uStack_904;
  undefined4 uStack_900;
  undefined4 uStack_8fc;
  byte bStack_8e9;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  uint uStack_698;
  uint uStack_694;
  uint uStack_690;
  uint uStack_68c;
  undefined4 uStack_688;
  undefined4 uStack_684;
  undefined4 uStack_680;
  undefined4 uStack_67c;
  undefined4 uStack_678;
  undefined4 uStack_674;
  undefined4 uStack_670;
  undefined4 uStack_66c;
  undefined4 uStack_668;
  undefined4 uStack_664;
  undefined4 uStack_660;
  undefined4 uStack_65c;
  undefined8 uStack_658;
  undefined8 uStack_438;
  undefined8 uStack_430;
  uint uStack_428;
  uint uStack_424;
  uint uStack_420;
  uint uStack_41c;
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
  longlong *******ppppppplStack_1c8;
  longlong *******ppppppplStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  code *pcStack_178;
  ulonglong uStack_170;
  longlong *******ppppppplStack_168;
  longlong *******ppppppplStack_160;
  longlong *******ppppppplStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  int iStack_140;
  undefined4 uStack_13c;
  longlong *******ppppppplStack_138;
  longlong lStack_130;
  undefined1 auStack_120 [16];
  longlong *******ppppppplStack_110;
  longlong *******ppppppplStack_108;
  longlong *******ppppppplStack_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined8 uStack_e0;
  longlong *******ppppppplStack_d8;
  longlong *******ppppppplStack_d0;
  longlong *******ppppppplStack_c8;
  undefined4 *puStack_c0;
  longlong *******ppppppplStack_b8;
  longlong *******ppppppplStack_b0;
  longlong *******ppppppplStack_a8;
  longlong *******ppppppplStack_a0;
  longlong *******ppppppplStack_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong *******ppppppplStack_70;
  longlong *******ppppppplStack_68;
  uint uStack_5c;
  longlong *******ppppppplStack_58;
  undefined1 uStack_4e;
  undefined1 uStack_4d;
  undefined1 uStack_4c;
  undefined1 uStack_4b;
  undefined1 uStack_4a;
  char cStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  uStack_1b8 = param_1;
  uStack_1b0 = param_2;
  uStack_e0 = param_4;
  puStack_c0 = param_3;
  pdb_140f3e010(&uStack_438,param_1,param_2);
  lVar15 = param_7[2];
  if (lVar15 == *param_7) {
    pdb_142d7e6e0(param_7);
  }
  lVar16 = param_7[1];
  puVar2 = (uint *)(lVar16 + 0x10 + lVar15 * 0x20);
  *puVar2 = uStack_428;
  puVar2[1] = uStack_424;
  puVar2[2] = uStack_420;
  puVar2[3] = uStack_41c;
  puVar1 = (undefined4 *)(lVar16 + lVar15 * 0x20);
  *puVar1 = (int)uStack_438;
  puVar1[1] = uStack_438._4_4_;
  puVar1[2] = (undefined4)uStack_430;
  puVar1[3] = uStack_430._4_4_;
  param_7[2] = lVar15 + 1;
  cStack_49 = 0;
  pdb_140f3e9e0(&ppppppplStack_918,param_1,param_2,&UNK_1433a4520,0xb);
  uVar12 = CONCAT44(uStack_904,uStack_908);
  uStack_4d = 1;
  ppppppplStack_68 = ppppppplStack_910;
  pdb_140f4f620(&uStack_438,ppppppplStack_910,uVar12);
  if ((int)uStack_438 == 2) {
    uStack_6a8 = (longlong *******)0x2;
LAB_141c87506:
    uStack_6a0 = uStack_430;
    uStack_4d = 1;
    pdb_1404b38e0(&uStack_6a0);
  }
  else {
    uStack_6a8 = uStack_438;
    uStack_6a0 = uStack_430;
    uStack_658 = uStack_3e8;
    uStack_668 = uStack_3f8;
    uStack_664 = uStack_3f4;
    uStack_660 = uStack_3f0;
    uStack_65c = uStack_3ec;
    uStack_678 = uStack_408;
    uStack_674 = uStack_404;
    uStack_670 = uStack_400;
    uStack_66c = uStack_3fc;
    uStack_688 = uStack_418;
    uStack_684 = uStack_414;
    uStack_680 = uStack_410;
    uStack_67c = uStack_40c;
    uStack_698 = uStack_428;
    uStack_694 = uStack_424;
    uStack_690 = uStack_420;
    uStack_68c = uStack_41c;
    if (uStack_438 == (longlong *******)0x2) goto LAB_141c87506;
    uStack_4d = 1;
    cVar8 = (**(code **)(param_9 + 0x28))(param_8,ppppppplStack_68,uVar12);
    if (cVar8 != '\0') {
      uStack_4d = 1;
      pdb_141c87100(&uStack_438,ppppppplStack_68,uVar12);
      if (uStack_438 == (longlong *******)0x0) {
        if (ppppppplStack_918 == (longlong *******)0x0) {
          return uStack_430;
        }
        func_0x0001406abac0(ppppppplStack_68,ppppppplStack_918,1);
        return uStack_430;
      }
      uStack_688 = uStack_418;
      uStack_684 = uStack_414;
      uStack_680 = uStack_410;
      uStack_67c = uStack_40c;
      uStack_698 = uStack_428;
      uStack_694 = uStack_424;
      uStack_690 = uStack_420;
      uStack_68c = uStack_41c;
      uStack_6a8 = uStack_438;
      uStack_6a0 = uStack_430;
      ppppppplStack_58 = ppppppplStack_918;
      lVar15 = param_6[2];
      if (lVar15 == *param_6) {
        pdb_142d7e6e0(param_6);
      }
      lVar16 = param_6[1];
      lVar11 = lVar15 * 0x20;
      *(longlong ********)(lVar16 + lVar11) = ppppppplStack_58;
      *(longlong ********)(lVar16 + 8 + lVar11) = ppppppplStack_68;
      puVar1 = (undefined4 *)(lVar16 + 0x10 + lVar11);
      *puVar1 = uStack_908;
      puVar1[1] = uStack_904;
      puVar1[2] = uStack_900;
      puVar1[3] = uStack_8fc;
      param_6[2] = lVar15 + 1;
      pdb_142635370(&uStack_6a8,puStack_c0);
      uStack_1a8 = (int)uStack_6a8;
      uStack_1a4 = uStack_6a8._4_4_;
      uStack_1a0 = (undefined4)uStack_6a0;
      uStack_19c = uStack_6a0._4_4_;
      uStack_198 = CONCAT44(uStack_694,uStack_698);
      uStack_190 = CONCAT44(uStack_68c,uStack_690);
      uStack_188 = CONCAT44(uStack_684,uStack_688);
      uStack_180 = CONCAT44(uStack_67c,uStack_680);
      puStack_c0 = &uStack_1a8;
      uVar18 = CONCAT71((int7)((ulonglong)unaff_R15 >> 8),1);
      goto LAB_141c87538;
    }
  }
  if (ppppppplStack_918 != (longlong *******)0x0) {
    func_0x0001406abac0(ppppppplStack_68,ppppppplStack_918,1);
  }
  uVar18 = 0;
LAB_141c87538:
  ppppppplStack_68 = (longlong *******)param_6[2];
  cStack_49 = (char)uVar18;
  pdb_140f4f710(&uStack_438,param_1,param_2);
  if ((int)uStack_438 == 2) {
    uStack_6a0 = uStack_430;
    uStack_6a8 = (longlong *******)0x2;
  }
  else {
    func_0x000142e32760(&uStack_6a8,&uStack_438,0x270);
  }
  cStack_49 = (char)uVar18;
  pdb_142635100(&ppppppplStack_918,&uStack_6a8,&uStack_1b8);
  ppppppplVar10 = ppppppplStack_910;
  ppppppplVar5 = ppppppplStack_918;
  if (ppppppplStack_918 == (longlong *******)0x2) {
LAB_141c875c8:
    if ((char)uVar18 != '\0') {
      pdb_140ca7540(&uStack_1a8,&uStack_188,0xd8,0x10);
    }
  }
  else {
    uStack_5c = (uint)uVar18;
    func_0x000142e32760(&uStack_428,&uStack_908,0x260);
    uStack_438 = ppppppplVar5;
    uStack_430 = ppppppplVar10;
    pcStack_178 = *(code **)(param_9 + 0x28);
    uStack_170 = (longlong)ppppppplStack_68 << 5 | 8;
    while( true ) {
      pdb_140f59fa0(&uStack_6a8,&uStack_438);
      uVar7 = uStack_698;
      ppppppplVar10 = uStack_6a0;
      if ((int)uStack_6a8 != 1) break;
      ppppppplVar5 = (longlong *******)CONCAT44(uStack_694,uStack_698);
      lVar15 = param_6[2] - (longlong)ppppppplStack_68;
      if (ppppppplStack_68 <= (ulonglong)param_6[2]) {
        param_6[2] = (longlong)ppppppplStack_68;
        if (lVar15 != 0) {
          puVar17 = (undefined8 *)(param_6[1] + uStack_170);
          do {
            if (puVar17[-1] != 0) {
              func_0x0001406abac0(*puVar17,puVar17[-1],1);
            }
            puVar17 = puVar17 + 4;
            lVar15 = lVar15 + -1;
          } while (lVar15 != 0);
        }
      }
      if (ppppppplVar10 == (longlong *******)0x0) {
        ppppppplVar10 = (longlong *******)pdb_142e03d30(ppppppplVar5);
LAB_141c88099:
        if (uStack_438 != (longlong *******)0x0) {
          pdb_140f590a0(&uStack_430);
        }
        plVar6 = (longlong *)CONCAT44(uStack_424,uStack_428);
        LOCK();
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        uVar18 = (ulonglong)uStack_5c;
        if (*plVar6 == 0) {
          cStack_49 = (char)uStack_5c;
          pdb_140cd0de0(&uStack_428);
        }
        goto LAB_141c875c8;
      }
      func_0x000142e32760(&uStack_908,&uStack_690,0x248);
      ppppppplStack_918 = ppppppplVar10;
      ppppppplStack_910 = ppppppplVar5;
      if (((uVar7 & 0x10) == 0) || ((uVar7 & 0x400) != 0 && (bStack_8e9 & 0x20) != 0)) {
        pdb_140f46c20(&ppppppplStack_a8,&ppppppplStack_918);
        ppppppplStack_58 = ppppppplStack_a0;
        pdb_140f69110(&iStack_140,ppppppplStack_a0,ppppppplStack_98);
        if (iStack_140 == 1) {
          pdb_142dc8150(&UNK_1433a4530);
          goto LAB_141c8823b;
        }
        if ((lStack_130 != 0xb) ||
           (ppppppplVar10 = ppppppplStack_a8, ppppppplVar5 = ppppppplStack_58,
           *(longlong *)((longlong)ppppppplStack_138 + 3) != 0x6e6f722e746c7561 ||
           *ppppppplStack_138 != (longlong ******)0x2e746c7561666564)) {
          if (ppppppplStack_a8 != (longlong *******)0x0) {
            func_0x0001406abac0(ppppppplStack_58,ppppppplStack_a8,1);
          }
          pdb_140f46b10(&ppppppplStack_160,&ppppppplStack_918);
          uVar12 = uStack_150;
          ppppppplVar5 = ppppppplStack_158;
          uStack_4c = 1;
          cVar8 = (*pcStack_178)(param_8,ppppppplStack_158,uStack_150);
          ppppppplVar10 = ppppppplStack_160;
          if (cVar8 != '\0') {
            uStack_4c = 1;
            uVar13 = uVar12;
            lVar15 = pdb_140f3ec80(ppppppplVar5,uVar12);
            ppppppplVar10 = ppppppplStack_160;
            if (lVar15 != 0) {
              uStack_4c = 1;
              pdb_140f69110(&ppppppplStack_a8,lVar15,uVar13);
              if ((int)ppppppplStack_a8 == 1) {
                uStack_4c = 1;
                pdb_142dc8150(&UNK_1433a45b8);
                goto LAB_141c8823b;
              }
              ppppppplStack_1c8 = ppppppplStack_a0;
              ppppppplStack_1c0 = ppppppplStack_98;
              if (ppppppplStack_98 == (longlong *******)0x3) {
                if (*(char *)((longlong)ppppppplStack_a0 + 2) == 'n' &&
                    *(short *)ppppppplStack_a0 == 0x6f72) {
                  uStack_4c = 1;
                  pdb_141c87100(&ppppppplStack_a8,ppppppplVar5,uVar12);
                  ppppppplVar10 = ppppppplStack_a0;
                  if (ppppppplStack_a8 == (longlong *******)0x0) goto joined_r0x000141c88190;
                  uStack_f0 = uStack_88;
                  uStack_ec = uStack_84;
                  uStack_e8 = uStack_80;
                  uStack_e4 = uStack_7c;
                  ppppppplStack_100 = ppppppplStack_98;
                  uStack_f8 = uStack_90;
                  uStack_f4 = uStack_8c;
                  ppppppplStack_110 = ppppppplStack_a8;
                  ppppppplStack_108 = ppppppplStack_a0;
                  uStack_4a = 1;
                  uStack_4b = 1;
                  pdb_142635370(&ppppppplStack_110,puStack_c0);
                  uStack_4a = 1;
                  uStack_4b = 1;
                  lVar15 = pdb_140f3ee10(ppppppplVar5,uVar12);
                  if (lVar15 == 0) {
                    uStack_4a = 1;
                    uStack_4b = 1;
                    pdb_142dc8150(&UNK_1433a4570);
                    goto LAB_141c8823b;
                  }
                  uStack_4a = 1;
                  uStack_4b = 1;
                  uVar19 = pdb_140f69110(&ppppppplStack_a8,lVar15,uVar12);
                  ppppppplVar14 = ppppppplStack_98;
                  ppppppplVar10 = ppppppplStack_a0;
                  if ((int)ppppppplStack_a8 == 1) {
                    uStack_4a = 1;
                    uStack_4b = 1;
                    pdb_142dc8150(&UNK_1433a4588);
                    goto LAB_141c8823b;
                  }
                  if ((longlong)param_5 < 0) {
                    uVar12 = 0;
                    param_5 = ppppppplStack_168;
LAB_141c880e3:
                    uStack_4a = 1;
                    uStack_4b = 1;
                    pdb_142dc7e2a(uVar12,param_5);
                    goto LAB_141c8823b;
                  }
                  if (param_5 == (longlong *******)0x0) {
                    ppppppplVar9 = (longlong *******)0x1;
                  }
                  else {
                    pdb_14007ee60(uVar19,ppppppplStack_168);
                    ppppppplVar9 = (longlong *******)func_0x0001406abab0(param_5,1);
                    if (ppppppplVar9 == (longlong *******)0x0) {
                      uVar12 = 1;
                      goto LAB_141c880e3;
                    }
                    func_0x000142e32760(ppppppplVar9,uStack_e0,param_5);
                  }
                  ppppppplStack_a8 = param_5;
                  ppppppplStack_98 = param_5;
                  ppppppplStack_168 = ppppppplVar9;
                  ppppppplStack_a0 = ppppppplVar9;
                  pdb_142635250(&ppppppplStack_a8,ppppppplVar10,ppppppplVar14);
                  ppppppplVar10 = ppppppplStack_98;
                  ppppppplStack_58 = ppppppplStack_a8;
                  ppppppplStack_b0 = ppppppplStack_a0;
                  ppppppplVar14 = ppppppplStack_98;
                  ppppppplVar9 = (longlong *******)pdb_140f606e0(1);
                  ppppppplStack_70 = ppppppplVar5;
                  ppppppplStack_b8 = ppppppplVar9;
                  if (ppppppplVar14 != (longlong *******)0x0) {
                    pdb_14007ee60();
                    ppppppplVar9 = (longlong *******)func_0x0001406abab0(ppppppplVar14,ppppppplVar9)
                    ;
                  }
                  ppppppplVar5 = ppppppplStack_b0;
                  if (ppppppplVar9 == (longlong *******)0x0) {
                    pdb_142dc7e11(ppppppplStack_b8,ppppppplVar14);
                    goto LAB_141c8823b;
                  }
                  *ppppppplVar9 = (longlong ******)0x1;
                  ppppppplVar9[1] = (longlong ******)0x1;
                  func_0x000142e32760(ppppppplVar9 + 2,ppppppplStack_b0,ppppppplVar10);
                  ppppppplStack_c8 = ppppppplVar10;
                  ppppppplStack_d0 = ppppppplVar9;
                  if (ppppppplStack_58 != (longlong *******)0x0) {
                    func_0x0001406abac0(ppppppplVar5,ppppppplStack_58,1);
                  }
                  ppppppplStack_58 = ppppppplStack_160;
                  lVar15 = param_6[2];
                  if (lVar15 == *param_6) {
                    pdb_142d7e6e0(param_6);
                  }
                  lVar16 = param_6[1];
                  lVar11 = lVar15 * 0x20;
                  *(longlong ********)(lVar16 + lVar11) = ppppppplStack_58;
                  *(longlong ********)(lVar16 + 8 + lVar11) = ppppppplStack_70;
                  puVar17 = (undefined8 *)(lVar16 + 0x10 + lVar11);
                  *puVar17 = uStack_150;
                  puVar17[1] = uStack_148;
                  param_6[2] = lVar15 + 1;
                  LOCK();
                  pppppplVar3 = *ppppppplStack_d0;
                  *ppppppplStack_d0 = (longlong ******)((longlong)*ppppppplStack_d0 + 1);
                  UNLOCK();
                  if (*ppppppplStack_d0 == (longlong ******)0x0 ||
                      SCARRY8((longlong)pppppplVar3,1) != (longlong)*ppppppplStack_d0 < 0)
                  goto LAB_141c8823b;
                  uStack_88 = uStack_f0;
                  uStack_84 = uStack_ec;
                  uStack_80 = uStack_e8;
                  uStack_7c = uStack_e4;
                  ppppppplStack_98 = ppppppplStack_100;
                  uStack_90 = uStack_f8;
                  uStack_8c = uStack_f4;
                  ppppppplStack_a8 = ppppppplStack_110;
                  ppppppplStack_a0 = ppppppplStack_108;
                  uStack_4e = 0;
                  pdb_142634320(&iStack_140,param_7 + 9,ppppppplStack_d0,ppppppplStack_c8,
                                &ppppppplStack_a8);
                  if (CONCAT44(uStack_13c,iStack_140) != 0) {
                    uStack_4e = 0;
                    pdb_140ca7540(&iStack_140,auStack_120,0xd8,0x10);
                  }
                  lVar15 = param_6[1];
                  lVar16 = param_6[2] * 0x20 + lVar15;
                  for (; lVar15 != lVar16; lVar15 = lVar15 + 0x20) {
                    uVar12 = *(undefined8 *)(lVar15 + 8);
                    uVar13 = *(undefined8 *)(lVar15 + 0x10);
                    LOCK();
                    pppppplVar3 = *ppppppplStack_d0;
                    *ppppppplStack_d0 = (longlong ******)((longlong)*ppppppplStack_d0 + 1);
                    UNLOCK();
                    if (*ppppppplStack_d0 == (longlong ******)0x0 ||
                        SCARRY8((longlong)pppppplVar3,1) != (longlong)*ppppppplStack_d0 < 0)
                    goto LAB_141c8823b;
                    uStack_4e = 0;
                    pdb_141c86d40(param_7,uVar12,uVar13,ppppppplStack_d0,ppppppplStack_c8);
                  }
                  LOCK();
                  *ppppppplStack_d0 = (longlong ******)((longlong)*ppppppplStack_d0 + -1);
                  UNLOCK();
                  if (*ppppppplStack_d0 == (longlong ******)0x0) {
                    uStack_4a = 0;
                    uStack_4b = 0;
                    pdb_1406ed6a0(&ppppppplStack_d0);
                  }
                  goto LAB_141c87ada;
                }
              }
              else if ((ppppppplStack_98 == (longlong *******)0xc) &&
                      (ppppppplVar10 = ppppppplStack_160,
                      *(int *)(ppppppplStack_a0 + 1) == 0x7265746c &&
                      *ppppppplStack_a0 == (longlong ******)0x69662d7465737361))
              goto joined_r0x000141c8794a;
              ppppppplStack_a8 = (longlong *******)&ppppppplStack_1c8;
              ppppppplStack_a0 = (longlong *******)pdb_141c889b0;
              uStack_4c = 1;
              ppppppplVar10 = (longlong *******)pdb_142defc50(&ppppppplStack_a8);
              goto joined_r0x000141c88190;
            }
          }
        }
joined_r0x000141c8794a:
        if (ppppppplVar10 != (longlong *******)0x0) {
          func_0x0001406abac0(ppppppplVar5,ppppppplVar10,1);
        }
        LOCK();
        *ppppppplStack_918 = (longlong ******)((longlong)*ppppppplStack_918 + -1);
        UNLOCK();
        if (*ppppppplStack_918 == (longlong ******)0x0) {
          pdb_140cd0de0(&ppppppplStack_918);
        }
      }
      else {
        pdb_140f46c20(&iStack_140,&ppppppplStack_918);
        ppppppplStack_b0 = ppppppplStack_138;
        pdb_140f69110(&ppppppplStack_a8,ppppppplStack_138,lStack_130);
        ppppppplVar5 = ppppppplStack_98;
        ppppppplVar10 = ppppppplStack_a0;
        if ((int)ppppppplStack_a8 == 1) {
          pdb_142dc8150(&UNK_1433a45a0);
          goto LAB_141c8823b;
        }
        pdb_140f46b10(&ppppppplStack_a8,&ppppppplStack_918);
        ppppppplVar14 = ppppppplStack_98;
        ppppppplStack_58 = ppppppplStack_a0;
        if ((longlong)param_5 < 0) {
          uVar12 = 0;
LAB_141c87eb7:
          pdb_142dc7e2a(uVar12,ppppppplStack_d8);
LAB_141c8823b:
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        if (param_5 == (longlong *******)0x0) {
          ppppppplVar9 = (longlong *******)0x1;
        }
        else {
          pdb_14007ee60();
          ppppppplVar9 = (longlong *******)func_0x0001406abab0(param_5,1);
          if (ppppppplVar9 == (longlong *******)0x0) {
            uVar12 = 1;
            ppppppplStack_d8 = param_5;
            goto LAB_141c87eb7;
          }
          func_0x000142e32760(ppppppplVar9,uStack_e0,param_5);
        }
        ppppppplStack_110 = param_5;
        ppppppplStack_100 = param_5;
        ppppppplStack_108 = ppppppplVar9;
        ppppppplStack_d8 = ppppppplVar9;
        pdb_142635250(&ppppppplStack_110,ppppppplVar10,ppppppplVar5);
        ppppppplStack_70 = ppppppplStack_110;
        ppppppplStack_b8 = ppppppplStack_108;
        ppppppplVar10 =
             (longlong *******)
             pdb_141c87390(ppppppplStack_58,ppppppplVar14,puStack_c0,ppppppplStack_108,
                           ppppppplStack_100,param_6,param_7,param_8,param_9);
        if (ppppppplVar10 != (longlong *******)0x0) {
          if (ppppppplStack_70 != (longlong *******)0x0) {
            func_0x0001406abac0(ppppppplStack_b8,ppppppplStack_70,1);
          }
          if (ppppppplStack_a8 != (longlong *******)0x0) {
            func_0x0001406abac0(ppppppplStack_58,ppppppplStack_a8,1);
          }
          ppppppplStack_160 = (longlong *******)CONCAT44(uStack_13c,iStack_140);
          ppppppplVar5 = ppppppplStack_b0;
joined_r0x000141c88190:
          if (ppppppplStack_160 != (longlong *******)0x0) {
            func_0x0001406abac0(ppppppplVar5,ppppppplStack_160,1);
          }
          LOCK();
          *ppppppplStack_918 = (longlong ******)((longlong)*ppppppplStack_918 + -1);
          UNLOCK();
          if (*ppppppplStack_918 == (longlong ******)0x0) {
            pdb_140cd0de0(&ppppppplStack_918);
          }
          goto LAB_141c88099;
        }
        if (ppppppplStack_70 != (longlong *******)0x0) {
          func_0x0001406abac0(ppppppplStack_b8,ppppppplStack_70,1);
        }
        if (ppppppplStack_a8 != (longlong *******)0x0) {
          func_0x0001406abac0(ppppppplStack_58,ppppppplStack_a8,1);
        }
        if (CONCAT44(uStack_13c,iStack_140) != 0) {
          func_0x0001406abac0(ppppppplStack_b0,CONCAT44(uStack_13c,iStack_140),1);
        }
LAB_141c87ada:
        LOCK();
        *ppppppplStack_918 = (longlong ******)((longlong)*ppppppplStack_918 + -1);
        UNLOCK();
        if (*ppppppplStack_918 == (longlong ******)0x0) {
          pdb_140cd0de0(&ppppppplStack_918);
        }
      }
    }
    if (uStack_438 != (longlong *******)0x0) {
      pdb_140f590a0(&uStack_430);
    }
    plVar6 = (longlong *)CONCAT44(uStack_424,uStack_428);
    LOCK();
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    cVar8 = (char)uStack_5c;
    if (*plVar6 == 0) {
      cStack_49 = cVar8;
      pdb_140cd0de0(&uStack_428);
    }
    if (cVar8 != '\0') {
      pdb_140ca7540(&uStack_1a8,&uStack_188,0xd8,0x10);
    }
    ppppppplVar10 = (longlong *******)0x0;
  }
  return ppppppplVar10;
}

