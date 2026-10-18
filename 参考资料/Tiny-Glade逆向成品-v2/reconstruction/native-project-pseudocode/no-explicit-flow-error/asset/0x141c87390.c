// VA 0x141c87390, PDB extent 5654 bytes
// asset::prefab::scan::scan_asset_tree_walker
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/asset/src/prefab/scan.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Type propagation algorithm not settling */
/* Matched PDB project procedure: asset::prefab::scan::scan_asset_tree_walker
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/asset/src/prefab/scan.rs
   Extent: 5654 */

byte *******
pdb_141c87390(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
             byte *******param_5,longlong *param_6,longlong *param_7,undefined8 param_8,
             longlong param_9)

{
  undefined4 *puVar1;
  uint *puVar2;
  byte ******ppppppbVar3;
  code *pcVar4;
  byte *******pppppppbVar5;
  longlong *plVar6;
  uint uVar7;
  char cVar8;
  byte *******pppppppbVar9;
  byte *******pppppppbVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  byte *******pppppppbVar14;
  longlong lVar15;
  longlong lVar16;
  undefined8 unaff_R15;
  undefined8 *puVar17;
  ulonglong uVar18;
  undefined4 uVar19;
  byte *******pppppppbStack_918;
  byte *******pppppppbStack_910;
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
  byte *******pppppppbStack_1c8;
  byte *******pppppppbStack_1c0;
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
  byte *******pppppppbStack_168;
  byte *******pppppppbStack_160;
  byte *******pppppppbStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  int iStack_140;
  undefined4 uStack_13c;
  byte *******pppppppbStack_138;
  longlong lStack_130;
  undefined1 auStack_120 [16];
  byte *******pppppppbStack_110;
  byte *******pppppppbStack_108;
  byte *******pppppppbStack_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined8 uStack_e0;
  byte *******pppppppbStack_d8;
  byte *******pppppppbStack_d0;
  byte *******pppppppbStack_c8;
  undefined4 *puStack_c0;
  byte *******pppppppbStack_b8;
  byte *******pppppppbStack_b0;
  byte *******pppppppbStack_a8;
  byte *******pppppppbStack_a0;
  byte *******pppppppbStack_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  byte *******pppppppbStack_70;
  byte *******pppppppbStack_68;
  uint uStack_5c;
  byte *******pppppppbStack_58;
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
  pdb_140f3e9e0(&pppppppbStack_918,param_1,param_2,&UNK_1433a4520,0xb);
  uVar12 = CONCAT44(uStack_904,uStack_908);
  uStack_4d = 1;
  pppppppbStack_68 = pppppppbStack_910;
  pdb_140f4f620(&uStack_438,pppppppbStack_910,uVar12);
  if ((int)uStack_438 == 2) {
    uStack_6a8 = (byte *******)0x2;
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
    if (uStack_438 == (byte *******)0x2) goto LAB_141c87506;
    uStack_4d = 1;
    cVar8 = (**(code **)(param_9 + 0x28))(param_8,pppppppbStack_68,uVar12);
    if (cVar8 != '\0') {
      uStack_4d = 1;
      pdb_141c87100(&uStack_438,pppppppbStack_68,uVar12);
      if (uStack_438 == (byte *******)0x0) {
        if (pppppppbStack_918 == (byte *******)0x0) {
          return uStack_430;
        }
        pub_1406abac0((byte *)pppppppbStack_68,(ulonglong)pppppppbStack_918,1);
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
      pppppppbStack_58 = pppppppbStack_918;
      lVar15 = param_6[2];
      if (lVar15 == *param_6) {
        pdb_142d7e6e0(param_6);
      }
      lVar16 = param_6[1];
      lVar11 = lVar15 * 0x20;
      *(byte ********)(lVar16 + lVar11) = pppppppbStack_58;
      *(byte ********)(lVar16 + 8 + lVar11) = pppppppbStack_68;
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
  if (pppppppbStack_918 != (byte *******)0x0) {
    pub_1406abac0((byte *)pppppppbStack_68,(ulonglong)pppppppbStack_918,1);
  }
  uVar18 = 0;
LAB_141c87538:
  pppppppbStack_68 = (byte *******)param_6[2];
  cStack_49 = (char)uVar18;
  pdb_140f4f710(&uStack_438,param_1,param_2);
  if ((int)uStack_438 == 2) {
    uStack_6a0 = uStack_430;
    uStack_6a8 = (byte *******)0x2;
  }
  else {
    pub_142e32760(&uStack_6a8,&uStack_438,0x270);
  }
  cStack_49 = (char)uVar18;
  pdb_142635100(&pppppppbStack_918,&uStack_6a8,&uStack_1b8);
  pppppppbVar10 = pppppppbStack_910;
  pppppppbVar5 = pppppppbStack_918;
  if (pppppppbStack_918 == (byte *******)0x2) {
LAB_141c875c8:
    if ((char)uVar18 != '\0') {
      pdb_140ca7540(&uStack_1a8,&uStack_188,0xd8,0x10);
    }
  }
  else {
    uStack_5c = (uint)uVar18;
    pub_142e32760(&uStack_428,&uStack_908,0x260);
    uStack_438 = pppppppbVar5;
    uStack_430 = pppppppbVar10;
    pcStack_178 = *(code **)(param_9 + 0x28);
    uStack_170 = (longlong)pppppppbStack_68 << 5 | 8;
    while( true ) {
      pdb_140f59fa0(&uStack_6a8,&uStack_438);
      uVar7 = uStack_698;
      pppppppbVar10 = uStack_6a0;
      if ((int)uStack_6a8 != 1) break;
      pppppppbVar5 = (byte *******)CONCAT44(uStack_694,uStack_698);
      lVar15 = param_6[2] - (longlong)pppppppbStack_68;
      if (pppppppbStack_68 <= (ulonglong)param_6[2]) {
        param_6[2] = (longlong)pppppppbStack_68;
        if (lVar15 != 0) {
          puVar17 = (undefined8 *)(param_6[1] + uStack_170);
          do {
            if (puVar17[-1] != 0) {
              pub_1406abac0((byte *)*puVar17,puVar17[-1],1);
            }
            puVar17 = puVar17 + 4;
            lVar15 = lVar15 + -1;
          } while (lVar15 != 0);
        }
      }
      if (pppppppbVar10 == (byte *******)0x0) {
        pppppppbVar10 = (byte *******)pdb_142e03d30(pppppppbVar5);
LAB_141c88099:
        if (uStack_438 != (byte *******)0x0) {
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
      pub_142e32760(&uStack_908,&uStack_690,0x248);
      pppppppbStack_918 = pppppppbVar10;
      pppppppbStack_910 = pppppppbVar5;
      if (((uVar7 & 0x10) == 0) || ((uVar7 & 0x400) != 0 && (bStack_8e9 & 0x20) != 0)) {
        pdb_140f46c20(&pppppppbStack_a8,&pppppppbStack_918);
        pppppppbStack_58 = pppppppbStack_a0;
        pdb_140f69110(&iStack_140,pppppppbStack_a0,pppppppbStack_98);
        if (iStack_140 == 1) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc8150(&UNK_1433a4530);
        }
        if ((lStack_130 != 0xb) ||
           (pppppppbVar10 = pppppppbStack_a8, pppppppbVar5 = pppppppbStack_58,
           *(longlong *)((longlong)pppppppbStack_138 + 3) != 0x6e6f722e746c7561 ||
           *pppppppbStack_138 != (byte ******)0x2e746c7561666564)) {
          if (pppppppbStack_a8 != (byte *******)0x0) {
            pub_1406abac0((byte *)pppppppbStack_58,(ulonglong)pppppppbStack_a8,1);
          }
          pdb_140f46b10(&pppppppbStack_160,&pppppppbStack_918);
          uVar12 = uStack_150;
          pppppppbVar5 = pppppppbStack_158;
          uStack_4c = 1;
          cVar8 = (*pcStack_178)(param_8,pppppppbStack_158,uStack_150);
          pppppppbVar10 = pppppppbStack_160;
          if (cVar8 != '\0') {
            uStack_4c = 1;
            uVar13 = uVar12;
            lVar15 = pdb_140f3ec80(pppppppbVar5,uVar12);
            pppppppbVar10 = pppppppbStack_160;
            if (lVar15 != 0) {
              uStack_4c = 1;
              pdb_140f69110(&pppppppbStack_a8,lVar15,uVar13);
              if ((int)pppppppbStack_a8 == 1) {
                uStack_4c = 1;
                    /* WARNING: Subroutine does not return */
                pdb_142dc8150(&UNK_1433a45b8);
              }
              pppppppbStack_1c8 = pppppppbStack_a0;
              pppppppbStack_1c0 = pppppppbStack_98;
              if (pppppppbStack_98 != (byte *******)0x3) {
                if ((pppppppbStack_98 == (byte *******)0xc) &&
                   (pppppppbVar10 = pppppppbStack_160,
                   *(int *)(pppppppbStack_a0 + 1) == 0x7265746c &&
                   *pppppppbStack_a0 == (byte ******)0x69662d7465737361))
                goto joined_r0x000141c8794a;
LAB_141c88153:
                pppppppbStack_a8 = (byte *******)&pppppppbStack_1c8;
                pppppppbStack_a0 = (byte *******)pdb_141c889b0;
                uStack_4c = 1;
                pppppppbVar10 = (byte *******)pdb_142defc50(&pppppppbStack_a8);
                goto joined_r0x000141c88190;
              }
              if (*(byte *)((longlong)pppppppbStack_a0 + 2) != 0x6e ||
                  *(short *)pppppppbStack_a0 != 0x6f72) goto LAB_141c88153;
              uStack_4c = 1;
              pdb_141c87100(&pppppppbStack_a8,pppppppbVar5,uVar12);
              pppppppbVar10 = pppppppbStack_a0;
              if (pppppppbStack_a8 == (byte *******)0x0) goto joined_r0x000141c88190;
              uStack_f0 = uStack_88;
              uStack_ec = uStack_84;
              uStack_e8 = uStack_80;
              uStack_e4 = uStack_7c;
              pppppppbStack_100 = pppppppbStack_98;
              uStack_f8 = uStack_90;
              uStack_f4 = uStack_8c;
              pppppppbStack_110 = pppppppbStack_a8;
              pppppppbStack_108 = pppppppbStack_a0;
              uStack_4a = 1;
              uStack_4b = 1;
              pdb_142635370(&pppppppbStack_110,puStack_c0);
              uStack_4a = 1;
              uStack_4b = 1;
              lVar15 = pdb_140f3ee10(pppppppbVar5,uVar12);
              if (lVar15 == 0) {
                uStack_4a = 1;
                uStack_4b = 1;
                    /* WARNING: Subroutine does not return */
                pdb_142dc8150(&UNK_1433a4570);
              }
              uStack_4a = 1;
              uStack_4b = 1;
              uVar19 = pdb_140f69110(&pppppppbStack_a8,lVar15,uVar12);
              pppppppbVar14 = pppppppbStack_98;
              pppppppbVar10 = pppppppbStack_a0;
              if ((int)pppppppbStack_a8 == 1) {
                uStack_4a = 1;
                uStack_4b = 1;
                    /* WARNING: Subroutine does not return */
                pdb_142dc8150(&UNK_1433a4588);
              }
              if ((longlong)param_5 < 0) {
                uVar12 = 0;
                param_5 = pppppppbStack_168;
LAB_141c880e3:
                uStack_4a = 1;
                uStack_4b = 1;
                pdb_142dc7e2a(uVar12,param_5);
                goto LAB_141c8823b;
              }
              if (param_5 == (byte *******)0x0) {
                pppppppbVar9 = (byte *******)0x1;
              }
              else {
                pdb_14007ee60(uVar19,pppppppbStack_168);
                pppppppbVar9 = (byte *******)pub_1406abab0((ulonglong)param_5,1);
                if (pppppppbVar9 == (byte *******)0x0) {
                  uVar12 = 1;
                  goto LAB_141c880e3;
                }
                pub_142e32760(pppppppbVar9,uStack_e0,param_5);
              }
              pppppppbStack_a8 = param_5;
              pppppppbStack_98 = param_5;
              pppppppbStack_168 = pppppppbVar9;
              pppppppbStack_a0 = pppppppbVar9;
              pdb_142635250(&pppppppbStack_a8,pppppppbVar10,pppppppbVar14);
              pppppppbVar10 = pppppppbStack_98;
              pppppppbStack_58 = pppppppbStack_a8;
              pppppppbStack_b0 = pppppppbStack_a0;
              pppppppbVar14 = pppppppbStack_98;
              pppppppbVar9 = (byte *******)pdb_140f606e0(1);
              pppppppbStack_70 = pppppppbVar5;
              pppppppbStack_b8 = pppppppbVar9;
              if (pppppppbVar14 != (byte *******)0x0) {
                pdb_14007ee60();
                pppppppbVar9 = (byte *******)
                               pub_1406abab0((ulonglong)pppppppbVar14,(ulonglong)pppppppbVar9);
              }
              pppppppbVar5 = pppppppbStack_b0;
              if (pppppppbVar9 == (byte *******)0x0) {
                    /* WARNING: Subroutine does not return */
                pdb_142dc7e11(pppppppbStack_b8,pppppppbVar14);
              }
              *pppppppbVar9 = (byte ******)0x1;
              pppppppbVar9[1] = (byte ******)0x1;
              pub_142e32760(pppppppbVar9 + 2,pppppppbStack_b0,pppppppbVar10);
              pppppppbStack_c8 = pppppppbVar10;
              pppppppbStack_d0 = pppppppbVar9;
              if (pppppppbStack_58 != (byte *******)0x0) {
                pub_1406abac0((byte *)pppppppbVar5,(ulonglong)pppppppbStack_58,1);
              }
              pppppppbStack_58 = pppppppbStack_160;
              lVar15 = param_6[2];
              if (lVar15 == *param_6) {
                pdb_142d7e6e0(param_6);
              }
              lVar16 = param_6[1];
              lVar11 = lVar15 * 0x20;
              *(byte ********)(lVar16 + lVar11) = pppppppbStack_58;
              *(byte ********)(lVar16 + 8 + lVar11) = pppppppbStack_70;
              puVar17 = (undefined8 *)(lVar16 + 0x10 + lVar11);
              *puVar17 = uStack_150;
              puVar17[1] = uStack_148;
              param_6[2] = lVar15 + 1;
              LOCK();
              ppppppbVar3 = *pppppppbStack_d0;
              *pppppppbStack_d0 = (byte ******)((longlong)*pppppppbStack_d0 + 1);
              UNLOCK();
              if (*pppppppbStack_d0 == (byte ******)0x0 ||
                  SCARRY8((longlong)ppppppbVar3,1) != (longlong)*pppppppbStack_d0 < 0)
              goto LAB_141c8823b;
              uStack_88 = uStack_f0;
              uStack_84 = uStack_ec;
              uStack_80 = uStack_e8;
              uStack_7c = uStack_e4;
              pppppppbStack_98 = pppppppbStack_100;
              uStack_90 = uStack_f8;
              uStack_8c = uStack_f4;
              pppppppbStack_a8 = pppppppbStack_110;
              pppppppbStack_a0 = pppppppbStack_108;
              uStack_4e = 0;
              pdb_142634320(&iStack_140,param_7 + 9,pppppppbStack_d0,pppppppbStack_c8,
                            &pppppppbStack_a8);
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
                ppppppbVar3 = *pppppppbStack_d0;
                *pppppppbStack_d0 = (byte ******)((longlong)*pppppppbStack_d0 + 1);
                UNLOCK();
                if (*pppppppbStack_d0 == (byte ******)0x0 ||
                    SCARRY8((longlong)ppppppbVar3,1) != (longlong)*pppppppbStack_d0 < 0)
                goto LAB_141c8823b;
                uStack_4e = 0;
                pdb_141c86d40(param_7,uVar12,uVar13,pppppppbStack_d0,pppppppbStack_c8);
              }
              LOCK();
              *pppppppbStack_d0 = (byte ******)((longlong)*pppppppbStack_d0 + -1);
              UNLOCK();
              if (*pppppppbStack_d0 == (byte ******)0x0) {
                uStack_4a = 0;
                uStack_4b = 0;
                pdb_1406ed6a0(&pppppppbStack_d0);
              }
              goto LAB_141c87ada;
            }
          }
        }
joined_r0x000141c8794a:
        if (pppppppbVar10 != (byte *******)0x0) {
          pub_1406abac0((byte *)pppppppbVar5,(ulonglong)pppppppbVar10,1);
        }
        LOCK();
        *pppppppbStack_918 = (byte ******)((longlong)*pppppppbStack_918 + -1);
        UNLOCK();
        if (*pppppppbStack_918 == (byte ******)0x0) {
          pdb_140cd0de0(&pppppppbStack_918);
        }
      }
      else {
        pdb_140f46c20(&iStack_140,&pppppppbStack_918);
        pppppppbStack_b0 = pppppppbStack_138;
        pdb_140f69110(&pppppppbStack_a8,pppppppbStack_138,lStack_130);
        pppppppbVar5 = pppppppbStack_98;
        pppppppbVar10 = pppppppbStack_a0;
        if ((int)pppppppbStack_a8 == 1) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc8150(&UNK_1433a45a0);
        }
        pdb_140f46b10(&pppppppbStack_a8,&pppppppbStack_918);
        pppppppbVar14 = pppppppbStack_98;
        pppppppbStack_58 = pppppppbStack_a0;
        if ((longlong)param_5 < 0) {
          uVar12 = 0;
LAB_141c87eb7:
          pdb_142dc7e2a(uVar12,pppppppbStack_d8);
LAB_141c8823b:
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        if (param_5 == (byte *******)0x0) {
          pppppppbVar9 = (byte *******)0x1;
        }
        else {
          pdb_14007ee60();
          pppppppbVar9 = (byte *******)pub_1406abab0((ulonglong)param_5,1);
          if (pppppppbVar9 == (byte *******)0x0) {
            uVar12 = 1;
            pppppppbStack_d8 = param_5;
            goto LAB_141c87eb7;
          }
          pub_142e32760(pppppppbVar9,uStack_e0,param_5);
        }
        pppppppbStack_110 = param_5;
        pppppppbStack_100 = param_5;
        pppppppbStack_108 = pppppppbVar9;
        pppppppbStack_d8 = pppppppbVar9;
        pdb_142635250(&pppppppbStack_110,pppppppbVar10,pppppppbVar5);
        pppppppbStack_70 = pppppppbStack_110;
        pppppppbStack_b8 = pppppppbStack_108;
        pppppppbVar10 =
             (byte *******)
             pdb_141c87390(pppppppbStack_58,pppppppbVar14,puStack_c0,pppppppbStack_108,
                           pppppppbStack_100,param_6,param_7,param_8,param_9);
        if (pppppppbVar10 != (byte *******)0x0) {
          if (pppppppbStack_70 != (byte *******)0x0) {
            pub_1406abac0((byte *)pppppppbStack_b8,(ulonglong)pppppppbStack_70,1);
          }
          if (pppppppbStack_a8 != (byte *******)0x0) {
            pub_1406abac0((byte *)pppppppbStack_58,(ulonglong)pppppppbStack_a8,1);
          }
          pppppppbStack_160 = (byte *******)CONCAT44(uStack_13c,iStack_140);
          pppppppbVar5 = pppppppbStack_b0;
joined_r0x000141c88190:
          if (pppppppbStack_160 != (byte *******)0x0) {
            pub_1406abac0((byte *)pppppppbVar5,(ulonglong)pppppppbStack_160,1);
          }
          LOCK();
          *pppppppbStack_918 = (byte ******)((longlong)*pppppppbStack_918 + -1);
          UNLOCK();
          if (*pppppppbStack_918 == (byte ******)0x0) {
            pdb_140cd0de0(&pppppppbStack_918);
          }
          goto LAB_141c88099;
        }
        if (pppppppbStack_70 != (byte *******)0x0) {
          pub_1406abac0((byte *)pppppppbStack_b8,(ulonglong)pppppppbStack_70,1);
        }
        if (pppppppbStack_a8 != (byte *******)0x0) {
          pub_1406abac0((byte *)pppppppbStack_58,(ulonglong)pppppppbStack_a8,1);
        }
        if (CONCAT44(uStack_13c,iStack_140) != 0) {
          pub_1406abac0((byte *)pppppppbStack_b0,CONCAT44(uStack_13c,iStack_140),1);
        }
LAB_141c87ada:
        LOCK();
        *pppppppbStack_918 = (byte ******)((longlong)*pppppppbStack_918 + -1);
        UNLOCK();
        if (*pppppppbStack_918 == (byte ******)0x0) {
          pdb_140cd0de0(&pppppppbStack_918);
        }
      }
    }
    if (uStack_438 != (byte *******)0x0) {
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
    pppppppbVar10 = (byte *******)0x0;
  }
  return pppppppbVar10;
}

