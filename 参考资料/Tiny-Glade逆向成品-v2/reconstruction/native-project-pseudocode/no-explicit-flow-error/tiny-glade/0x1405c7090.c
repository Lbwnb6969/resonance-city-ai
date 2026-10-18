// VA 0x1405c7090, PDB extent 4215 bytes
// minidump::minidump::Minidump::read_path<ref$<std::path::Path> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: minidump::minidump::Minidump::read_path<ref$<std::path::Path> >
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
   Extent: 4215 */

undefined8 * pdb_1405c7090(undefined8 *param_1,undefined4 ****param_2)

{
  undefined1 auVar1 [16];
  int iVar2;
  uint uVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  char cVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  code ****ppppcVar13;
  undefined4 ******ppppppuVar14;
  undefined4 ****ppppuVar15;
  ulonglong uVar16;
  longlong lVar17;
  ushort uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  uint uVar21;
  byte bVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  ulonglong in_stack_fffffffffffffd38;
  int iStack_2ac;
  undefined4 uStack_2a8;
  undefined8 uStack_2a4;
  undefined4 uStack_29c;
  code ****ppppcStack_298;
  undefined4 ******ppppppuStack_290;
  undefined *puStack_288;
  code ****ppppcStack_280;
  undefined4 ******ppppppuStack_278;
  undefined *puStack_270;
  ulonglong uStack_268;
  ulonglong uStack_260;
  ulonglong uStack_258;
  ulonglong uStack_250;
  undefined4 ****ppppuStack_248;
  undefined4 ****ppppuStack_240;
  undefined4 ****ppppuStack_238;
  longlong lStack_230;
  undefined8 uStack_228;
  ulonglong uStack_220;
  undefined *puStack_210;
  undefined8 *puStack_208;
  undefined4 ****ppppuStack_200;
  undefined4 ****ppppuStack_1f8;
  int *piStack_1f0;
  ulonglong uStack_1e8;
  code *pcStack_1e0;
  undefined4 ****ppppuStack_1d8;
  undefined4 ****ppppuStack_1d0;
  int *piStack_1c8;
  ulonglong uStack_1c0;
  code *pcStack_1b8;
  uint *puStack_1b0;
  code *pcStack_1a8;
  uint *puStack_1a0;
  code *pcStack_198;
  uint *puStack_190;
  code *pcStack_188;
  uint *puStack_180;
  code *pcStack_178;
  undefined8 uStack_170;
  code ****ppppcStack_168;
  undefined4 ******ppppppuStack_160;
  undefined *puStack_158;
  undefined8 uStack_148;
  undefined4 uStack_140;
  undefined4 ****ppppuStack_138;
  undefined4 *****pppppuStack_130;
  undefined **ppuStack_128;
  undefined *puStack_120;
  code *****pppppcStack_118;
  undefined8 *puStack_110;
  longlong lStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined1 uStack_e0;
  undefined7 uStack_df;
  code *pcStack_d8;
  uint *puStack_d0;
  code *pcStack_c8;
  uint *puStack_c0;
  code *pcStack_b8;
  uint *puStack_b0;
  code *pcStack_a8;
  uint *puStack_a0;
  code *pcStack_98;
  undefined8 uStack_90;
  uint uStack_84;
  code ****ppppcStack_80;
  undefined4 ******ppppppuStack_78;
  undefined *puStack_70;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  longlong lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  uStack_100 = (undefined4 ****)((ulonglong)uStack_100 & 0xffffffff00000000);
  uStack_f8 = (code *)0x0;
  uStack_f0._0_4_ = 7;
  uStack_f0._4_4_ = 0;
  uStack_e4 = 0;
  uStack_e0 = 0;
  uStack_e8 = 1;
  uStack_100 = (undefined4 ****)pdb_140f4a2a0(&uStack_100);
  uStack_f8 = (code *)param_2;
  if (uStack_100 == (undefined4 ****)0x1) {
    pdb_1404b38e0(&uStack_f8);
    param_1[1] = 0;
    *param_1 = 2;
    return param_1;
  }
  ppppuStack_138 = param_2;
  uVar9 = pdb_140cd10f0(param_2);
  if ((uVar9 & 1) == 0) {
    in_stack_fffffffffffffd38 = in_stack_fffffffffffffd38 & 0xffffffffffffff00;
    pdb_140cd1210(&uStack_100);
    param_2 = (undefined4 ****)uStack_f8;
    if ((int)uStack_100 == 2) goto LAB_1405c7172;
    ppppuStack_1d8 = uStack_100;
    piStack_1c8 = (int *)CONCAT44(uStack_f0._4_4_,(undefined4)uStack_f0);
    uStack_1c0 = CONCAT44(uStack_e4,uStack_e8);
    ppppuStack_1d0 = (undefined4 ****)uStack_f8;
    pcStack_1b8 = (code *)CONCAT71(uStack_df,uStack_e0);
    if (uStack_100 != (undefined4 ****)0x2) {
      ppppuStack_200 = uStack_100;
      ppppuStack_1f8 = (undefined4 ****)uStack_f8;
      piStack_1f0 = piStack_1c8;
      uStack_1e8 = uStack_1c0;
      pcStack_1e0 = pcStack_1b8;
      if (((((uStack_1c0 < 4) || (uStack_1c0 < 8)) || (uStack_1c0 < 0xc)) ||
          ((uStack_1c0 < 0x10 || (uStack_1c0 < 0x14)))) || (uStack_1c0 < 0x20)) {
        param_1[1] = 2;
      }
      else {
        iVar2 = *piStack_1c8;
        uVar16 = (ulonglong)(uint)piStack_1c8[1];
        uVar21 = piStack_1c8[2];
        uVar20 = (ulonglong)uVar21;
        uVar8 = piStack_1c8[3];
        uVar19 = (ulonglong)uVar8;
        uVar5 = (uint)*(ulonglong *)(piStack_1c8 + 4);
        uVar3 = piStack_1c8[5];
        uVar11 = *(ulonglong *)(piStack_1c8 + 4);
        uVar9 = *(ulonglong *)(piStack_1c8 + 6);
        if (iVar2 != 0x504d444d) {
          if (iVar2 != 0x4d444d50) {
            param_1[1] = 3;
            goto LAB_1405c7265;
          }
          uVar9 = uVar9 >> 0x38 | (uVar9 & 0xff000000000000) >> 0x28 |
                  (uVar9 & 0xff0000000000) >> 0x18 | (uVar9 & 0xff00000000) >> 8 |
                  (uVar9 & 0xff000000) << 8 | (uVar9 & 0xff0000) << 0x18 | (uVar9 & 0xff00) << 0x28
                  | uVar9 << 0x38;
          uVar20 = uVar20 << 0x20;
          uVar20 = (ulonglong)(uVar21 >> 0x18) | (uVar20 & 0xff000000000000) >> 0x28 |
                   (uVar20 & 0xff0000000000) >> 0x18 | (uVar20 & 0xff00000000) >> 8 |
                   ((ulonglong)uVar8 & 0xff000000) << 8 | ((ulonglong)uVar8 & 0xff0000) << 0x18 |
                   ((ulonglong)uVar8 & 0xff00) << 0x28 | CONCAT44(uVar21,uVar8) << 0x38;
          uVar11 = (ulonglong)uVar5 << 0x20;
          uVar11 = (ulonglong)(uVar5 >> 0x18) | (uVar11 & 0xff000000000000) >> 0x28 |
                   (uVar11 & 0xff0000000000) >> 0x18 | (uVar11 & 0xff00000000) >> 8 |
                   ((ulonglong)uVar3 & 0xff000000) << 8 | ((ulonglong)uVar3 & 0xff0000) << 0x18 |
                   ((ulonglong)uVar3 & 0xff00) << 0x28 | CONCAT44(uVar5,uVar3) << 0x38;
          uVar16 = ((uVar16 & 0xff000000) << 8 | (uVar16 & 0xff0000) << 0x18 |
                    (uVar16 & 0xff00) << 0x28 | uVar16 << 0x38) >> 0x20;
          uVar19 = uVar20 >> 0x20;
        }
        if (((uint)uVar16 & 0xffff) == 0xa793) {
          uVar12 = (uVar20 & 0xffffffff) * 0xc + uVar19;
          uStack_268 = uVar16;
          uStack_260 = uVar9;
          uStack_258 = uVar11;
          uStack_250 = uVar19;
          if (uVar12 <= uStack_1c0) {
            uVar10 = pdb_140332e50(&UNK_142f703f0,piStack_1c8,uVar16,uVar11,
                                   in_stack_fffffffffffffd38);
            pdb_140268800(&uStack_100,0x14,uVar20 & 0xffffffff);
            ppppuStack_238 = (undefined4 ****)CONCAT44(uStack_f0._4_4_,(undefined4)uStack_f0);
            lStack_230 = CONCAT44(uStack_e4,uStack_e8);
            ppppuStack_248 = uStack_100;
            ppppuStack_240 = (undefined4 ****)uStack_f8;
            uStack_228 = uVar10;
            uStack_220 = uVar9;
            uStack_f0 = ppppuStack_238;
            for (uVar21 = 0; uVar21 < (uint)uVar20; uVar21 = uVar21 + 1) {
              uStack_50._4_4_ = uVar21;
              if ((uStack_1e8 < uVar19) || (uStack_1e8 - uVar19 < 4)) {
LAB_1405c7d62:
                param_1[1] = 5;
                *param_1 = 2;
                pdb_1404a2d50(&ppppuStack_248);
                goto LAB_1405c726c;
              }
              uVar8 = *(uint *)((longlong)piStack_1f0 + uVar19);
              uVar5 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 |
                      uVar8 << 0x18;
              if (iVar2 == 0x504d444d) {
                uVar5 = uVar8;
              }
              if (uStack_1e8 - uVar19 < 0xc) goto LAB_1405c7d62;
              uVar8 = *(uint *)((longlong)piStack_1f0 + uVar19 + 4);
              uVar3 = *(uint *)((longlong)piStack_1f0 + uVar19 + 8);
              uVar6 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 |
                      uVar8 << 0x18;
              if (iVar2 == 0x504d444d) {
                uVar6 = uVar8;
              }
              uStack_60 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 |
                          uVar3 << 0x18;
              if (iVar2 == 0x504d444d) {
                uStack_60 = uVar3;
              }
              uStack_100 = (undefined4 ****)CONCAT44(uVar6,uVar21);
              uStack_f8 = (code *)CONCAT44(uVar5,uStack_60);
              ppppcVar13 = (code ****)&ppppuStack_248;
              uStack_64 = uVar6;
              uStack_5c = uVar5;
              pdb_1403b1790(&iStack_2ac,ppppcVar13,uVar5,&uStack_100);
              if (iStack_2ac == 1) {
                uStack_50._0_4_ = uStack_2a8;
                uStack_140 = uStack_29c;
                uStack_148 = uStack_2a4;
                uVar10 = uStack_148;
                if ((int)uVar5 < 0x8000) {
                  if (uVar5 < 0x19) goto LAB_1405c74df;
                }
                else if ((int)uVar5 < 0x43500001) {
                  if ((uVar5 - 0x8000 < 0xd) || (uVar5 == 0xffff)) {
LAB_1405c74df:
                    uStack_148 = uStack_2a4;
                    uStack_84 = uVar5;
                    if ((uVar5 == 0) &&
                       ((uStack_148._0_4_ = (uint)uStack_2a4, (uint)uStack_148 == 0 && (uVar6 == 0))
                       )) goto LAB_1405c73ab;
                    if (*_DAT_143ca4b08 < 4) {
                      bVar22 = *(byte *)(_DAT_143ca4140 + 2);
                      ppppcVar13 = (code ****)(ulonglong)bVar22;
                      uStack_148 = uVar10;
                      if (bVar22 - 1 < 2) {
LAB_1405c7529:
                        cVar7 = pdb_140dd7f60(*_DAT_143ca4140);
                        if (cVar7 != '\0') {
                          lVar17 = *_DAT_143ca4140;
                          if (*(undefined4 *****)(lVar17 + 0x38) == (undefined4 ****)0x0) {
                            pdb_142dc8110(&UNK_142f703fc,0x22,&UNK_142f70480);
                            goto LAB_1405c8043;
                          }
                          ppppuStack_1d8 = *(undefined4 *****)(lVar17 + 0x30);
                          piStack_1c8 = *(int **)(lVar17 + 0x40);
                          uStack_1c0 = *(ulonglong *)(lVar17 + 0x48);
                          lStack_108 = lVar17 + 0x30;
                          pppppcStack_118 = (code *****)&pppppuStack_130;
                          puStack_110 = (undefined8 *)0x1;
                          pcStack_1b8 = (code *)0x0;
                          uStack_100 = (undefined4 ****)&uStack_5c;
                          uStack_f8 = pdb_140f71a50;
                          uStack_f0 = (undefined4 ****)&uStack_84;
                          uStack_e8 = 0x405c63a0;
                          uStack_e4 = 1;
                          uStack_e0 = SUB81(&uStack_50,0);
                          uStack_df = (undefined7)((ulonglong)&uStack_50 >> 8);
                          pcStack_d8 = pdb_140f71a50;
                          puStack_d0 = (uint *)&uStack_148;
                          pcStack_c8 = pdb_140f71a50;
                          puStack_c0 = (uint *)((longlong)&uStack_50 + 4);
                          pcStack_b8 = pdb_140f71a50;
                          puStack_b0 = &uStack_64;
                          pcStack_a8 = pdb_140f71a50;
                          pcStack_98 = pdb_140f71a50;
                          puStack_210 = &UNK_142f70498;
                          puStack_208 = &uStack_100;
                          pppppuStack_130 = &ppppuStack_1d8;
                          ppuStack_128 = &puStack_210;
                          puStack_120 = &UNK_142f70508;
                          ppppppuVar14 = (undefined4 ******)&pppppcStack_118;
                          ppppuStack_1d0 = *(undefined4 *****)(lVar17 + 0x38);
                          puStack_a0 = puStack_c0;
                          pdb_140dd9020();
                          if ((*_DAT_143ca4ab0 == '\0') && (1 < *_DAT_143ca8e90)) {
                            lStack_58 = *_DAT_143ca4140;
                            ppppppuStack_78 = *(undefined4 *******)(lStack_58 + 0x20);
                            puStack_70 = *(undefined **)(lStack_58 + 0x28);
                            ppppcStack_80 = (code ****)0x2;
                            uVar10 = pdb_140f33290();
                            cVar7 = (*(code *)ppppppuVar14[3])(uVar10,&ppppcStack_80);
                            if (cVar7 != '\0') {
                              puStack_158 = puStack_70;
                              ppppcStack_168 = ppppcStack_80;
                              ppppppuStack_160 = ppppppuStack_78;
                              pdb_140dd7f80(lStack_58,uVar10,ppppppuVar14,&ppppcStack_168,
                                            &pppppcStack_118);
                            }
                          }
                          goto LAB_1405c73ab;
                        }
                      }
                      else if (bVar22 != 0) {
                        uVar8 = pdb_142db8070(_DAT_143ca4140);
                        ppppcVar13 = (code ****)(ulonglong)uVar8;
                        if ((char)uVar8 != '\0') goto LAB_1405c7529;
                      }
                    }
                    if ((*_DAT_143ca4ab0 == '\0') && (1 < *_DAT_143ca8e90)) {
                      lStack_58 = *_DAT_143ca4140;
                      ppppppuStack_278 = *(undefined4 *******)(lStack_58 + 0x20);
                      puStack_270 = *(undefined **)(lStack_58 + 0x28);
                      ppppcStack_280 = (code ****)0x2;
                      uVar10 = pdb_140f33290();
                      cVar7 = (*(code *)ppppcVar13[3])(uVar10,&ppppcStack_280);
                      if (cVar7 != '\0') {
                        lVar17 = *_DAT_143ca4140;
                        if (*(undefined4 *****)(lVar17 + 0x38) == (undefined4 ****)0x0) {
                          pdb_142dc8110(&UNK_142f703fc,0x22,&UNK_142f70480);
                          goto LAB_1405c8043;
                        }
                        ppppuStack_1d8 = *(undefined4 *****)(lVar17 + 0x30);
                        piStack_1c8 = *(int **)(lVar17 + 0x40);
                        uStack_1c0 = *(ulonglong *)(lVar17 + 0x48);
                        puStack_120 = (undefined *)(lVar17 + 0x30);
                        pppppuStack_130 = (undefined4 *****)&ppppcStack_80;
                        ppuStack_128 = (undefined **)0x1;
                        puStack_158 = puStack_270;
                        pcStack_1b8 = (code *)0x0;
                        uStack_100 = (undefined4 ****)&uStack_5c;
                        uStack_f8 = pdb_140f71a50;
                        uStack_f0 = (undefined4 ****)&uStack_84;
                        uStack_e8 = 0x405c63a0;
                        uStack_e4 = 1;
                        uStack_e0 = SUB81(&uStack_50,0);
                        uStack_df = (undefined7)((ulonglong)&uStack_50 >> 8);
                        pcStack_d8 = pdb_140f71a50;
                        puStack_d0 = (uint *)&uStack_148;
                        pcStack_c8 = pdb_140f71a50;
                        puStack_c0 = (uint *)((longlong)&uStack_50 + 4);
                        pcStack_b8 = pdb_140f71a50;
                        puStack_b0 = &uStack_64;
                        pcStack_a8 = pdb_140f71a50;
                        pcStack_98 = pdb_140f71a50;
                        pppppcStack_118 = (code *****)&UNK_142f70498;
                        puStack_110 = &uStack_100;
                        ppppcStack_80 = (code ****)&ppppuStack_1d8;
                        ppppppuStack_78 = (undefined4 ******)&pppppcStack_118;
                        puStack_70 = &UNK_142f70508;
                        ppppcStack_168 = ppppcStack_280;
                        ppppppuStack_160 = ppppppuStack_278;
                        ppppuStack_1d0 = *(undefined4 *****)(lVar17 + 0x38);
                        puStack_a0 = puStack_c0;
                        pdb_140dd7f80(lStack_58,uVar10,ppppcVar13,&ppppcStack_168,&pppppuStack_130);
                      }
                    }
                    goto LAB_1405c73ab;
                  }
                }
                else if (((uVar5 + 0xb898ffff < 10) || (uVar5 + 0xb285ffff < 3)) ||
                        (uVar5 == 0x43500001)) goto LAB_1405c74df;
                if (*_DAT_143ca4b08 < 4) {
                  bVar22 = *(byte *)(_DAT_143ca4138 + 2);
                  ppppcVar13 = (code ****)(ulonglong)bVar22;
                  if (bVar22 - 1 < 2) {
LAB_1405c794f:
                    cVar7 = pdb_140dd7f60(*_DAT_143ca4138);
                    if (cVar7 != '\0') {
                      lVar17 = *_DAT_143ca4138;
                      if (*(undefined4 *****)(lVar17 + 0x38) == (undefined4 ****)0x0) {
                        pdb_142dc8110(&UNK_142f703fc,0x22,&UNK_142f70528);
                        goto LAB_1405c8043;
                      }
                      ppppuStack_1d8 = *(undefined4 *****)(lVar17 + 0x30);
                      piStack_1c8 = *(int **)(lVar17 + 0x40);
                      uStack_1c0 = *(ulonglong *)(lVar17 + 0x48);
                      lStack_108 = lVar17 + 0x30;
                      pppppcStack_118 = (code *****)&pppppuStack_130;
                      puStack_110 = (undefined8 *)0x1;
                      pcStack_1b8 = (code *)0x0;
                      uStack_100 = (undefined4 ****)&uStack_5c;
                      uStack_f8 = pdb_140f71a50;
                      uStack_f0 = (undefined4 ****)&uStack_50;
                      uStack_e8 = 0x40f71a50;
                      uStack_e4 = 1;
                      uStack_e0 = SUB81(&uStack_148,0);
                      uStack_df = (undefined7)((ulonglong)&uStack_148 >> 8);
                      pcStack_d8 = pdb_140f71a50;
                      puStack_d0 = (uint *)((longlong)&uStack_50 + 4);
                      pcStack_c8 = pdb_140f71a50;
                      puStack_c0 = &uStack_64;
                      pcStack_b8 = pdb_140f71a50;
                      pcStack_a8 = pdb_140f71a50;
                      puStack_210 = &UNK_142f70540;
                      puStack_208 = &uStack_100;
                      pppppuStack_130 = &ppppuStack_1d8;
                      ppuStack_128 = &puStack_210;
                      puStack_120 = &UNK_142f70508;
                      ppppppuVar14 = (undefined4 ******)&pppppcStack_118;
                      ppppuStack_1d0 = *(undefined4 *****)(lVar17 + 0x38);
                      puStack_b0 = puStack_d0;
                      pdb_140dd9020();
                      if ((*_DAT_143ca4ab0 == '\0') && (1 < *_DAT_143ca8e90)) {
                        lStack_58 = *_DAT_143ca4138;
                        ppppppuStack_78 = *(undefined4 *******)(lStack_58 + 0x20);
                        puStack_70 = *(undefined **)(lStack_58 + 0x28);
                        ppppcStack_80 = (code ****)0x2;
                        uVar10 = pdb_140f33290();
                        cVar7 = (*(code *)ppppppuVar14[3])(uVar10,&ppppcStack_80);
                        if (cVar7 != '\0') {
                          puStack_158 = puStack_70;
                          ppppcStack_168 = ppppcStack_80;
                          ppppppuStack_160 = ppppppuStack_78;
                          pdb_140dd7f80(lStack_58,uVar10,ppppppuVar14,&ppppcStack_168,
                                        &pppppcStack_118);
                        }
                      }
                      goto LAB_1405c73ab;
                    }
                  }
                  else if (bVar22 != 0) {
                    uVar8 = pdb_142db8070(_DAT_143ca4138);
                    ppppcVar13 = (code ****)(ulonglong)uVar8;
                    if ((char)uVar8 != '\0') goto LAB_1405c794f;
                  }
                }
                if ((*_DAT_143ca4ab0 == '\0') && (1 < *_DAT_143ca8e90)) {
                  lStack_58 = *_DAT_143ca4138;
                  ppppppuStack_290 = *(undefined4 *******)(lStack_58 + 0x20);
                  puStack_288 = *(undefined **)(lStack_58 + 0x28);
                  ppppcStack_298 = (code ****)0x2;
                  uVar10 = pdb_140f33290();
                  cVar7 = (*(code *)ppppcVar13[3])(uVar10,&ppppcStack_298);
                  if (cVar7 != '\0') {
                    lVar17 = *_DAT_143ca4138;
                    if (*(undefined4 *****)(lVar17 + 0x38) == (undefined4 ****)0x0) {
                      pdb_142dc8110(&UNK_142f703fc,0x22,&UNK_142f70528);
LAB_1405c8043:
                    /* WARNING: Does not return */
                      pcVar4 = (code *)invalidInstructionException();
                      (*pcVar4)();
                    }
                    ppppuStack_1d8 = *(undefined4 *****)(lVar17 + 0x30);
                    piStack_1c8 = *(int **)(lVar17 + 0x40);
                    uStack_1c0 = *(ulonglong *)(lVar17 + 0x48);
                    puStack_120 = (undefined *)(lVar17 + 0x30);
                    pppppuStack_130 = (undefined4 *****)&ppppcStack_80;
                    ppuStack_128 = (undefined **)0x1;
                    puStack_158 = puStack_288;
                    pcStack_1b8 = (code *)0x0;
                    uStack_100 = (undefined4 ****)&uStack_5c;
                    uStack_f8 = pdb_140f71a50;
                    uStack_f0 = (undefined4 ****)&uStack_50;
                    uStack_e8 = 0x40f71a50;
                    uStack_e4 = 1;
                    uStack_e0 = SUB81(&uStack_148,0);
                    uStack_df = (undefined7)((ulonglong)&uStack_148 >> 8);
                    pcStack_d8 = pdb_140f71a50;
                    puStack_d0 = (uint *)((longlong)&uStack_50 + 4);
                    pcStack_c8 = pdb_140f71a50;
                    puStack_c0 = &uStack_64;
                    pcStack_b8 = pdb_140f71a50;
                    pcStack_a8 = pdb_140f71a50;
                    pppppcStack_118 = (code *****)&UNK_142f70540;
                    puStack_110 = &uStack_100;
                    ppppcStack_80 = (code ****)&ppppuStack_1d8;
                    ppppppuStack_78 = (undefined4 ******)&pppppcStack_118;
                    puStack_70 = &UNK_142f70508;
                    ppppcStack_168 = ppppcStack_298;
                    ppppppuStack_160 = ppppppuStack_290;
                    ppppuStack_1d0 = *(undefined4 *****)(lVar17 + 0x38);
                    puStack_b0 = puStack_d0;
                    pdb_140dd7f80(lStack_58,uVar10,ppppcVar13,&ppppcStack_168,&pppppuStack_130);
                  }
                }
              }
LAB_1405c73ab:
              uVar19 = uVar19 + 0xc;
            }
            ppppuVar15 = (undefined4 ****)0x8000000000000001;
            if (lStack_230 != 0) {
              uVar9 = pdb_1400aede0(&uStack_228,&UNK_142f703f8);
              bVar22 = (byte)(uVar9 >> 0x39);
              auVar23 = ZEXT216(CONCAT11(bVar22,bVar22));
              auVar23 = pshuflw(auVar23,auVar23,0);
              lVar17 = 0;
              while( true ) {
                uVar9 = uVar9 & (ulonglong)ppppuStack_240;
                auVar1 = *(undefined1 (*) [16])((longlong)ppppuStack_248 + uVar9);
                auVar25[0] = -(auVar1[0] == auVar23[0]);
                auVar25[1] = -(auVar1[1] == auVar23[1]);
                auVar25[2] = -(auVar1[2] == auVar23[2]);
                auVar25[3] = -(auVar1[3] == auVar23[3]);
                auVar25[4] = -(auVar1[4] == auVar23[4]);
                auVar25[5] = -(auVar1[5] == auVar23[5]);
                auVar25[6] = -(auVar1[6] == auVar23[6]);
                auVar25[7] = -(auVar1[7] == auVar23[7]);
                auVar25[8] = -(auVar1[8] == auVar23[0]);
                auVar25[9] = -(auVar1[9] == auVar23[1]);
                auVar25[10] = -(auVar1[10] == auVar23[2]);
                auVar25[0xb] = -(auVar1[0xb] == auVar23[3]);
                auVar25[0xc] = -(auVar1[0xc] == auVar23[4]);
                auVar25[0xd] = -(auVar1[0xd] == auVar23[5]);
                auVar25[0xe] = -(auVar1[0xe] == auVar23[6]);
                auVar25[0xf] = -(auVar1[0xf] == auVar23[7]);
                uVar18 = (ushort)(SUB161(auVar25 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar25 >> 0xf,0) & 1) << 1 |
                         (ushort)(SUB161(auVar25 >> 0x17,0) & 1) << 2 |
                         (ushort)(SUB161(auVar25 >> 0x1f,0) & 1) << 3 |
                         (ushort)(SUB161(auVar25 >> 0x27,0) & 1) << 4 |
                         (ushort)(SUB161(auVar25 >> 0x2f,0) & 1) << 5 |
                         (ushort)(SUB161(auVar25 >> 0x37,0) & 1) << 6 |
                         (ushort)(SUB161(auVar25 >> 0x3f,0) & 1) << 7 |
                         (ushort)(SUB161(auVar25 >> 0x47,0) & 1) << 8 |
                         (ushort)(SUB161(auVar25 >> 0x4f,0) & 1) << 9 |
                         (ushort)(SUB161(auVar25 >> 0x57,0) & 1) << 10 |
                         (ushort)(SUB161(auVar25 >> 0x5f,0) & 1) << 0xb |
                         (ushort)(SUB161(auVar25 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auVar25 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auVar25 >> 0x77,0) & 1) << 0xe |
                         (ushort)(auVar25[0xf] >> 7) << 0xf;
                uVar21 = (uint)uVar18;
                while (uVar18 != 0) {
                  uVar8 = 0;
                  for (uVar5 = uVar21; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
                    uVar8 = uVar8 + 1;
                  }
                  uVar11 = uVar8 + uVar9 & (ulonglong)ppppuStack_240;
                  if (*(uint *)((longlong)ppppuStack_248 + (uVar11 * -5 + -5) * 4) == 7) {
                    uVar16 = (ulonglong)*(uint *)((longlong)ppppuStack_248 + (uVar11 * -5 + -3) * 4)
                    ;
                    uVar9 = (ulonglong)*(uint *)((longlong)ppppuStack_248 + (uVar11 * -5 + -2) * 4);
                    if (uVar9 + uVar16 <= uStack_1e8) {
                      pdb_1407e5f90(&uStack_100,uVar9 + (longlong)piStack_1f0,uVar16,piStack_1f0,
                                    uStack_1e8,iVar2 != 0x504d444d,0);
                      ppppuVar15 = uStack_100;
                      if (uStack_100 != (undefined4 ****)0x8000000000000001) {
                        pcStack_178 = pcStack_98;
                        uStack_170 = uStack_90;
                        pcStack_188 = pcStack_a8;
                        puStack_180 = puStack_a0;
                        pcStack_198 = pcStack_b8;
                        puStack_190 = puStack_b0;
                        ppppuStack_1d0 = uStack_f0;
                        piStack_1c8 = (int *)CONCAT44(uStack_e4,uStack_e8);
                        uStack_1c0 = CONCAT71(uStack_df,uStack_e0);
                        pcStack_1a8 = pcStack_c8;
                        puStack_1a0 = puStack_c0;
                        pcStack_1b8 = pcStack_d8;
                        puStack_1b0 = puStack_d0;
                        ppppuStack_1d8 = (undefined4 ****)uStack_f8;
                      }
                    }
                    goto LAB_1405c7efa;
                  }
                  uVar18 = (ushort)(uVar21 - 1) & (ushort)uVar21;
                  uVar21 = CONCAT22((short)(uVar21 - 1 >> 0x10),uVar18);
                }
                auVar24[0] = -(auVar1[0] == -1);
                auVar24[1] = -(auVar1[1] == -1);
                auVar24[2] = -(auVar1[2] == -1);
                auVar24[3] = -(auVar1[3] == -1);
                auVar24[4] = -(auVar1[4] == -1);
                auVar24[5] = -(auVar1[5] == -1);
                auVar24[6] = -(auVar1[6] == -1);
                auVar24[7] = -(auVar1[7] == -1);
                auVar24[8] = -(auVar1[8] == -1);
                auVar24[9] = -(auVar1[9] == -1);
                auVar24[10] = -(auVar1[10] == -1);
                auVar24[0xb] = -(auVar1[0xb] == -1);
                auVar24[0xc] = -(auVar1[0xc] == -1);
                auVar24[0xd] = -(auVar1[0xd] == -1);
                auVar24[0xe] = -(auVar1[0xe] == -1);
                auVar24[0xf] = -(auVar1[0xf] == -1);
                if ((((((((((((((((SUB161(auVar24 >> 7,0) & 1) != 0 ||
                                 (SUB161(auVar24 >> 0xf,0) & 1) != 0) ||
                                (SUB161(auVar24 >> 0x17,0) & 1) != 0) ||
                               (SUB161(auVar24 >> 0x1f,0) & 1) != 0) ||
                              (SUB161(auVar24 >> 0x27,0) & 1) != 0) ||
                             (SUB161(auVar24 >> 0x2f,0) & 1) != 0) ||
                            (SUB161(auVar24 >> 0x37,0) & 1) != 0) ||
                           (SUB161(auVar24 >> 0x3f,0) & 1) != 0) ||
                          (SUB161(auVar24 >> 0x47,0) & 1) != 0) ||
                         (SUB161(auVar24 >> 0x4f,0) & 1) != 0) ||
                        (SUB161(auVar24 >> 0x57,0) & 1) != 0) ||
                       (SUB161(auVar24 >> 0x5f,0) & 1) != 0) || (SUB161(auVar24 >> 0x67,0) & 1) != 0
                      ) || (SUB161(auVar24 >> 0x6f,0) & 1) != 0) ||
                    (SUB161(auVar24 >> 0x77,0) & 1) != 0) || auVar24[0xf] < '\0') break;
                uVar9 = uVar9 + lVar17 + 0x10;
                lVar17 = lVar17 + 0x10;
              }
            }
LAB_1405c7efa:
            param_1[4] = pcStack_1e0;
            param_1[2] = piStack_1f0;
            param_1[3] = uStack_1e8;
            *param_1 = ppppuStack_200;
            param_1[1] = ppppuStack_1f8;
            param_1[0x14] = ppppuStack_248;
            param_1[0x15] = ppppuStack_240;
            param_1[0x16] = ppppuStack_238;
            param_1[0x17] = lStack_230;
            param_1[0x18] = uStack_228;
            param_1[0x19] = uStack_220;
            param_1[5] = ppppuVar15;
            param_1[6] = ppppuStack_1d8;
            param_1[7] = ppppuStack_1d0;
            param_1[8] = piStack_1c8;
            param_1[9] = uStack_1c0;
            param_1[10] = pcStack_1b8;
            param_1[0xb] = puStack_1b0;
            param_1[0xc] = pcStack_1a8;
            param_1[0xd] = puStack_1a0;
            param_1[0xe] = pcStack_198;
            param_1[0xf] = puStack_190;
            param_1[0x10] = pcStack_188;
            param_1[0x11] = puStack_180;
            param_1[0x12] = pcStack_178;
            param_1[0x13] = uStack_170;
            param_1[0x1a] = uStack_260;
            *(undefined4 *)(param_1 + 0x1b) = 0x504d444d;
            *(int *)((longlong)param_1 + 0xdc) = (int)uStack_268;
            *(uint *)(param_1 + 0x1c) = (uint)uVar20;
            *(int *)((longlong)param_1 + 0xe4) = (int)uStack_250;
            param_1[0x1d] = uStack_258;
            *(bool *)(param_1 + 0x1e) = iVar2 != 0x504d444d;
            goto LAB_1405c71a0;
          }
          param_1[1] = 7;
          param_1[2] = uVar12;
          param_1[3] = uStack_1c0;
        }
        else {
          param_1[1] = 4;
        }
      }
LAB_1405c7265:
      *param_1 = 2;
LAB_1405c726c:
      pdb_140cd1040(&ppppuStack_200);
      goto LAB_1405c71a0;
    }
  }
  else {
LAB_1405c7172:
    ppppuStack_1d8 = (undefined4 ****)0x2;
    ppppuStack_1d0 = param_2;
  }
  pdb_1404b38e0(&ppppuStack_1d0);
  param_1[1] = 1;
  *param_1 = 2;
LAB_1405c71a0:
  CloseHandle(ppppuStack_138);
  return param_1;
}

