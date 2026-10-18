// VA 0x141cb4430, PDB extent 4486 bytes
// serde_json::de::impl$7::deserialize_struct<serde_json::read::SliceRead,tg_package_integrity::_::impl$0::deserialize::__Visitor>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-package-integrity/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   serde_json::de::impl$7::deserialize_struct<serde_json::read::SliceRead,tg_package_integrity::_::impl$0::deserialize::__Visitor>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tg-package-integrity/src/lib.rs
   Extent: 4486 */

undefined8 * pdb_141cb4430(undefined8 *param_1,undefined8 *param_2)

{
  char *pcVar1;
  char cVar2;
  byte bVar3;
  bool bVar4;
  uint extraout_EAX;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  code *pcVar8;
  longlong lVar9;
  longlong extraout_RAX;
  longlong extraout_RAX_00;
  ulonglong uVar10;
  code *pcVar11;
  undefined *puVar12;
  uint uVar13;
  longlong *plVar14;
  code *pcVar15;
  bool bVar16;
  ulonglong uVar17;
  undefined *puVar18;
  undefined *puVar19;
  longlong unaff_R12;
  longlong lVar20;
  longlong lVar21;
  byte bVar22;
  undefined8 *puVar23;
  uint uStack_b4;
  undefined8 *puStack_b0;
  code *pcStack_a8;
  longlong lStack_a0;
  undefined1 uStack_91;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  longlong lStack_78;
  code *pcStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  longlong lStack_58;
  uint uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  uVar10 = param_2[4];
  uVar5 = param_2[5];
  if (uVar5 < uVar10) {
    plVar14 = param_2 + 3;
    do {
      uVar5 = uVar5 + 1;
      bVar22 = *(byte *)(param_2[3] + -1 + uVar5);
      if ((0x20 < (ulonglong)bVar22) || ((0x100002600U >> ((ulonglong)bVar22 & 0x3f) & 1) == 0)) {
        if (bVar22 == 0x5b) {
          pcVar1 = (char *)(param_2 + 7);
          *pcVar1 = *pcVar1 + -1;
          if (*pcVar1 != '\0') {
            param_2[5] = uVar5;
            pcStack_80 = (code *)CONCAT71(pcStack_80._1_7_,1);
            uStack_88 = param_2;
            pdb_140407e70(&uStack_68,&uStack_88);
            if ((char)uStack_68 == '\x01') goto LAB_141cb4c5c;
            if (uStack_68._1_1_ == '\x01') {
              pdb_141cb3ed0(&uStack_68,uStack_88);
              if ((int)uStack_68 == 1) {
LAB_141cb4c5c:
                uVar13 = (uint)plVar14;
                goto LAB_141cb4c60;
              }
              uVar13 = uStack_68._4_4_;
              plVar14 = (longlong *)(ulonglong)uStack_68._4_4_;
              pdb_140407e70(&uStack_68,&uStack_88);
              if ((char)uStack_68 == '\x01') goto LAB_141cb4c5c;
              if (uStack_68._1_1_ != '\x01') {
                uVar6 = 1;
                goto LAB_141cb4e13;
              }
              pdb_141cb4040(&uStack_68,uStack_88);
              lVar9 = lStack_58;
              pcVar8 = pcStack_60;
              puVar23 = uStack_68;
              if (SBORROW8(0,(longlong)uStack_68)) goto LAB_141cb4c60;
            }
            else {
              uVar6 = 0;
LAB_141cb4e13:
              uVar13 = (uint)plVar14;
              pcStack_60 = (code *)pdb_142e217a0(uVar6,&UNK_1433aa790,&UNK_1433aa7a0);
LAB_141cb4c60:
              lVar9 = unaff_R12;
              pcVar8 = pcStack_60;
              puVar23 = (undefined8 *)0x8000000000000000;
            }
            *(char *)(param_2 + 7) = *(char *)(param_2 + 7) + '\x01';
            uStack_68 = puVar23;
            pcStack_60 = pcVar8;
            lStack_58 = lVar9;
            uStack_50 = uVar13;
            pcVar11 = (code *)pdb_140404e50(param_2);
            if (!SBORROW8(0,(longlong)puVar23)) {
              if (pcVar11 == (code *)0x0) goto LAB_141cb516c;
              if (lVar9 != 0) {
                pcVar15 = pcVar8 + 0x20;
                do {
                  if (*(ulonglong *)(pcVar15 + -0x20) != 0) {
                    pub_1406abac0(*(byte **)(pcVar15 + -0x18),*(ulonglong *)(pcVar15 + -0x20),1);
                  }
                  if (*(ulonglong *)(pcVar15 + -8) != 0) {
                    pub_1406abac0(*(byte **)pcVar15,*(ulonglong *)(pcVar15 + -8),1);
                  }
                  pcVar15 = pcVar15 + 0x30;
                  lVar9 = lVar9 + -1;
                } while (lVar9 != 0);
              }
              goto LAB_141cb50b6;
            }
            pcVar15 = pcVar8;
            if (pcVar11 == (code *)0x0) goto LAB_141cb51ac;
            lVar9 = *(longlong *)pcVar11;
            pcStack_70 = pcVar11;
            if (lVar9 != 1) goto LAB_141cb5082;
            pdb_1404b38e0(pcVar11 + 8);
            goto LAB_141cb5124;
          }
        }
        else {
          if (bVar22 != 0x7b) {
            pcVar15 = (code *)pdb_142df4920(param_2,&uStack_91,&UNK_1433aa800);
            goto LAB_141cb51ac;
          }
          pcVar1 = (char *)(param_2 + 7);
          *pcVar1 = *pcVar1 + -1;
          if (*pcVar1 != '\0') {
            param_2[5] = uVar5;
            puStack_b0 = (undefined8 *)0x8000000000000000;
            bVar16 = true;
            bVar4 = false;
            lVar20 = 0;
            if (uVar10 <= uVar5) goto LAB_141cb4bca;
            goto LAB_141cb4500;
          }
        }
        uStack_68 = (undefined8 *)0x18;
        goto LAB_141cb44af;
      }
      param_2[5] = uVar5;
    } while (uVar5 != uVar10);
  }
  uStack_68 = (undefined8 *)0x5;
LAB_141cb44af:
  uVar6 = pdb_142d84ef0(param_2,&uStack_68);
  goto LAB_141cb51b7;
LAB_141cb49d0:
  if ((uVar5 & 1) != 0) {
    uStack_68 = (undefined8 *)0x7;
    if (bVar22 != 0x5b) {
      if ((int)uVar10 != 0x7b) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc83b0(&UNK_1433aa678,0x28,&UNK_1433aa700);
      }
      uStack_68 = (undefined8 *)0x8;
    }
    pcVar8 = (code *)pdb_142d84ef0(param_2,&uStack_68);
    goto LAB_141cb4be1;
  }
LAB_141cb49e8:
  puStack_90 = (undefined8 *)CONCAT71(puStack_90._1_7_,bVar22);
  if (bVar22 == 0x7b) {
    if (puVar12 <= puVar7) {
LAB_141cb4ecb:
      uStack_68 = (undefined8 *)0x3;
      pcVar8 = (code *)pdb_142d84ef0(param_2,&uStack_68);
      goto LAB_141cb4be1;
    }
    while( true ) {
      puVar7 = puVar7 + 1;
      uVar10 = (ulonglong)(byte)puVar7[lVar9 + -1];
      if (0x22 < uVar10) goto LAB_141cb538c;
      if ((0x100002600U >> (uVar10 & 0x3f) & 1) == 0) break;
      param_2[5] = puVar7;
      if (puVar7 == puVar12) goto LAB_141cb4ecb;
    }
    if (uVar10 != 0x22) {
LAB_141cb538c:
      uStack_68 = (undefined8 *)0x11;
      pcVar8 = (code *)pdb_142d84ef0(param_2,&uStack_68);
      goto LAB_141cb4be1;
    }
    param_2[5] = puVar7;
    pcVar8 = (code *)pdb_140de3540(plVar14);
    if (pcVar8 != (code *)0x0) goto LAB_141cb4be1;
    puVar12 = (undefined *)param_2[4];
    puVar7 = (undefined *)param_2[5];
    if (puVar12 <= puVar7) {
LAB_141cb4ee4:
      uStack_68 = (undefined8 *)0x3;
      pcVar8 = (code *)pdb_142d84ef0(param_2,&uStack_68);
      goto LAB_141cb4be1;
    }
    lVar9 = *plVar14;
    uVar5 = -(longlong)puVar12;
    while( true ) {
      puVar7 = puVar7 + 1;
      uVar10 = (ulonglong)(byte)puVar7[lVar9 + -1];
      if (0x3a < uVar10) goto LAB_141cb53be;
      if ((0x100002600U >> (uVar10 & 0x3f) & 1) == 0) break;
      param_2[5] = puVar7;
      if (puVar7 == puVar12) goto LAB_141cb4ee4;
    }
    if (uVar10 != 0x3a) {
LAB_141cb53be:
      uStack_68 = (undefined8 *)0x6;
      pcVar8 = (code *)pdb_142d84ef0(param_2,&uStack_68);
      goto LAB_141cb4be1;
    }
    param_2[5] = puVar7;
  }
  pcStack_70 = (code *)CONCAT44(pcStack_70._4_4_,(int)CONCAT71((int7)(uVar5 >> 8),1));
  if (puVar12 <= puVar7) goto LAB_141cb4dea;
  goto LAB_141cb46d5;
LAB_141cb4500:
  do {
    while( true ) {
      bVar22 = *(byte *)(*plVar14 + uVar5);
      if ((0x20 < (ulonglong)bVar22) || ((0x100002600U >> ((ulonglong)bVar22 & 0x3f) & 1) == 0))
      break;
      uVar5 = uVar5 + 1;
      param_2[5] = uVar5;
      if (uVar10 == uVar5) goto LAB_141cb4bca;
    }
    if (bVar22 == 0x7d) {
      if (lVar20 == 0) {
        uStack_88 = (undefined8 *)&UNK_1433aa758;
        pcStack_80 = (code *)0x7;
        uStack_68 = &uStack_88;
        pcStack_60 = pdb_1402ed400;
        pcVar8 = (code *)pdb_142d872f0(&UNK_14355d0d0,&uStack_68);
      }
      else {
        lVar9 = lStack_a0;
        pcVar8 = pcStack_a8;
        puVar23 = puStack_b0;
        if (!SBORROW8(0,(longlong)puStack_b0)) goto LAB_141cb4ffa;
        uStack_88 = (undefined8 *)&UNK_1433aa75f;
        pcStack_80 = (code *)0x5;
        uStack_68 = &uStack_88;
        pcStack_60 = pdb_1402ed400;
        pcVar8 = (code *)pdb_142d872f0(&UNK_14355d0d0,&uStack_68);
      }
      goto LAB_141cb4be1;
    }
    if (bVar16) {
      if (bVar22 != 0x22) {
        uStack_68 = (undefined8 *)0x11;
        pcVar8 = (code *)pdb_142d84ef0(param_2,&uStack_68);
        goto LAB_141cb4be1;
      }
    }
    else {
      if (bVar22 != 0x2c) {
        uStack_68 = (undefined8 *)0x8;
        pcVar8 = (code *)pdb_142d84ef0(param_2,&uStack_68);
        goto LAB_141cb4be1;
      }
      uVar5 = uVar5 + 1;
      param_2[5] = uVar5;
      if (uVar10 <= uVar5) {
LAB_141cb4e39:
        uStack_68 = (undefined8 *)0x5;
        pcVar8 = (code *)pdb_142d84ef0(param_2,&uStack_68);
        goto LAB_141cb4be1;
      }
      while( true ) {
        bVar22 = *(byte *)(*plVar14 + uVar5);
        uVar17 = (ulonglong)bVar22;
        if (0x22 < uVar17) goto LAB_141cb51e4;
        if ((0x100002600U >> (uVar17 & 0x3f) & 1) == 0) break;
        uVar5 = uVar5 + 1;
        param_2[5] = uVar5;
        if (uVar10 == uVar5) goto LAB_141cb4e39;
      }
      if (uVar17 != 0x22) {
LAB_141cb51e4:
        if (bVar22 == 0x7d) {
          uStack_68 = (undefined8 *)0x15;
          pcVar8 = (code *)pdb_142d84ef0(param_2,&uStack_68);
        }
        else {
          uStack_68 = (undefined8 *)0x11;
          pcVar8 = (code *)pdb_142d84ef0(param_2,&uStack_68);
        }
        goto LAB_141cb4be1;
      }
    }
    param_2[5] = uVar5 + 1;
    param_2[2] = 0;
    pdb_140de3740(&uStack_68,plVar14,param_2);
    pcVar8 = pcStack_60;
    if ((int)uStack_68 == 2) goto LAB_141cb4be1;
    if (lStack_58 == 5) {
      if (pcStack_60[4] != DAT_1433aa963 || *(int *)pcStack_60 != _DAT_1433aa95f)
      goto LAB_141cb4663;
      if (!SBORROW8(0,(longlong)puStack_b0)) {
        uStack_88 = (undefined8 *)&UNK_1433aa75f;
        pcStack_80 = (code *)0x5;
        uStack_68 = &uStack_88;
        pcStack_60 = pdb_1402ed400;
        pcVar8 = (code *)pdb_142d872f0(&UNK_14355d103,&uStack_68);
        goto LAB_141cb4be1;
      }
      uVar10 = param_2[5];
      if ((ulonglong)param_2[4] <= uVar10) {
LAB_141cb4e67:
        uStack_68 = (undefined8 *)0x3;
        pcVar8 = (code *)pdb_142d84ef0(param_2,&uStack_68);
        goto LAB_141cb4be1;
      }
      while( true ) {
        uVar10 = uVar10 + 1;
        uVar5 = (ulonglong)*(byte *)(*plVar14 + -1 + uVar10);
        if (0x3a < uVar5) goto LAB_141cb5328;
        if ((0x100002600U >> (uVar5 & 0x3f) & 1) == 0) break;
        param_2[5] = uVar10;
        if (uVar10 == param_2[4]) goto LAB_141cb4e67;
      }
      if (uVar5 != 0x3a) {
LAB_141cb5328:
        uStack_68 = (undefined8 *)0x6;
        pcVar8 = (code *)pdb_142d84ef0(param_2,&uStack_68);
        goto LAB_141cb4be1;
      }
      param_2[5] = uVar10;
      pdb_141cb4040(&uStack_88,param_2);
      lVar9 = lStack_78;
      pcVar8 = pcStack_80;
      if (SBORROW8(0,(longlong)uStack_88)) goto LAB_141cb4be1;
      puStack_90 = uStack_88;
      pcStack_70 = pcStack_80;
      if (!SBORROW8(0,(longlong)puStack_b0)) {
        pdb_14049a0e0(&puStack_b0);
      }
      puStack_b0 = puStack_90;
      pcStack_a8 = pcStack_70;
      lStack_a0 = lVar9;
    }
    else {
      if ((lStack_58 != 7) ||
         (*(int *)(pcStack_60 + 3) != CONCAT31(_UNK_1433aa95c,DAT_1433aa95b) ||
          *(int *)pcStack_60 != _DAT_1433aa958)) {
LAB_141cb4663:
        puVar12 = (undefined *)param_2[4];
        puVar7 = (undefined *)param_2[5];
        if (puVar7 < puVar12) {
          lVar9 = *plVar14;
          while( true ) {
            puVar7 = puVar7 + 1;
            uVar10 = (ulonglong)(byte)puVar7[lVar9 + -1];
            if (0x3a < uVar10) goto LAB_141cb5203;
            if ((0x100002600U >> (uVar10 & 0x3f) & 1) == 0) break;
            param_2[5] = puVar7;
            if (puVar7 == puVar12) goto LAB_141cb4e20;
          }
          if (uVar10 == 0x3a) {
            param_2[5] = puVar7;
            param_2[2] = 0;
            if (puVar7 < puVar12) {
              pcStack_70 = (code *)((ulonglong)pcStack_70 & 0xffffffff00000000);
LAB_141cb46d5:
              puVar7 = puVar7 + 5;
              puVar18 = (undefined *)-(longlong)puVar12;
              while( true ) {
                bVar22 = puVar7[lVar9 + -5];
                uVar10 = (ulonglong)bVar22;
                if (0x2d < uVar10) break;
                if ((0x100002600U >> (uVar10 & 0x3f) & 1) == 0) {
                  if (uVar10 == 0x22) {
                    param_2[5] = puVar7 + -4;
                    pcVar8 = (code *)pdb_140de3540(plVar14);
                    goto LAB_141cb4900;
                  }
                  if (uVar10 == 0x2d) {
                    param_2[5] = puVar7 + -4;
                    pcVar8 = (code *)pdb_1404046a0(param_2);
                    goto LAB_141cb4900;
                  }
                  break;
                }
                param_2[5] = puVar7 + -4;
                puVar19 = puVar18 + (longlong)puVar7;
                puVar7 = puVar7 + 1;
                if (puVar19 == (undefined *)0x4) goto LAB_141cb4dea;
              }
              puVar19 = (undefined *)(ulonglong)(bVar22 - 0x5b);
              puVar18 = puVar19;
              if (bVar22 - 0x5b < 0x21) {
                puVar18 = &UNK_1433aa8a4 + *(int *)(&UNK_1433aa8a4 + (longlong)puVar19 * 4);
                switch(puVar19) {
                case (undefined *)0x0:
                case (undefined *)0x20:
                  pdb_1415e0590(param_2,(ulonglong)pcStack_70 & 0xffffffff);
                  param_2[5] = param_2[5] + 1;
                  uVar5 = 0;
                  break;
                default:
                  goto LAB_141cb48eb;
                case (undefined *)0xb:
                  param_2[5] = puVar7 + -4;
                  if (puVar7 + -4 < puVar12) {
                    cVar2 = puVar7[lVar9 + -4];
                    param_2[5] = puVar7 + -3;
                    if (cVar2 == 'a') {
                      if (puVar12 <= puVar7 + -3) goto code_r0x000141cb4efd;
                      cVar2 = puVar7[lVar9 + -3];
                      param_2[5] = puVar7 + -2;
                      if (cVar2 == 'l') {
                        if (puVar12 <= puVar7 + -2) goto code_r0x000141cb4efd;
                        cVar2 = puVar7[lVar9 + -2];
                        puVar18 = puVar7 + -1;
                        param_2[5] = puVar18;
                        if (cVar2 == 's') {
                          if (puVar12 <= puVar18) goto code_r0x000141cb4efd;
                          cVar2 = puVar7[lVar9 + -1];
                          param_2[5] = puVar7;
                          if (cVar2 == 'e') goto code_r0x000141cb490c;
                        }
                      }
                    }
                    uStack_68 = (undefined8 *)0x9;
                    pcVar8 = (code *)pdb_142d855a0(param_2,&uStack_68);
                  }
                  else {
code_r0x000141cb4efd:
                    uStack_68 = (undefined8 *)0x5;
                    pcVar8 = (code *)pdb_142d855a0(param_2,&uStack_68);
                  }
                  goto LAB_141cb4be1;
                case (undefined *)0x13:
                  param_2[5] = puVar7 + -4;
                  if (puVar7 + -4 < puVar12) {
                    cVar2 = puVar7[lVar9 + -4];
                    param_2[5] = puVar7 + -3;
                    if (cVar2 == 'u') {
                      if (puVar12 <= puVar7 + -3) goto code_r0x000141cb4f23;
                      cVar2 = puVar7[lVar9 + -3];
                      puVar18 = puVar7 + -2;
                      param_2[5] = puVar18;
                      if (cVar2 != 'l') goto code_r0x000141cb5280;
                      if (puVar12 <= puVar18) goto code_r0x000141cb4f23;
                      cVar2 = puVar7[lVar9 + -2];
                      param_2[5] = puVar7 + -1;
                      if (cVar2 != 'l') goto code_r0x000141cb5280;
                      goto code_r0x000141cb490c;
                    }
code_r0x000141cb5280:
                    uStack_68 = (undefined8 *)0x9;
                    pcVar8 = (code *)pdb_142d855a0(param_2,&uStack_68);
                  }
                  else {
code_r0x000141cb4f23:
                    uStack_68 = (undefined8 *)0x5;
                    pcVar8 = (code *)pdb_142d855a0(param_2,&uStack_68);
                  }
                  goto LAB_141cb4be1;
                case (undefined *)0x19:
                  param_2[5] = puVar7 + -4;
                  if (puVar7 + -4 < puVar12) {
                    cVar2 = puVar7[lVar9 + -4];
                    param_2[5] = puVar7 + -3;
                    if (cVar2 == 'r') {
                      if (puVar12 <= puVar7 + -3) goto code_r0x000141cb4f3c;
                      cVar2 = puVar7[lVar9 + -3];
                      puVar18 = puVar7 + -2;
                      param_2[5] = puVar18;
                      if (cVar2 == 'u') {
                        if (puVar12 <= puVar18) goto code_r0x000141cb4f3c;
                        cVar2 = puVar7[lVar9 + -2];
                        param_2[5] = puVar7 + -1;
                        if (cVar2 == 'e') goto code_r0x000141cb490c;
                      }
                    }
                    uStack_68 = (undefined8 *)0x9;
                    pcVar8 = (code *)pdb_142d855a0(param_2,&uStack_68);
                  }
                  else {
code_r0x000141cb4f3c:
                    uStack_68 = (undefined8 *)0x5;
                    pcVar8 = (code *)pdb_142d855a0(param_2,&uStack_68);
                  }
                  goto LAB_141cb4be1;
                }
              }
              else {
LAB_141cb48eb:
                if (9 < (byte)(bVar22 - 0x30)) {
                  uStack_68 = (undefined8 *)0xa;
                  pcVar8 = (code *)pdb_142d84ef0(param_2,&uStack_68);
                  goto LAB_141cb4be1;
                }
                pcVar8 = (code *)pdb_1404046a0(param_2);
LAB_141cb4900:
                if (pcVar8 != (code *)0x0) goto LAB_141cb4be1;
code_r0x000141cb490c:
                uVar5 = CONCAT71((int7)((ulonglong)puVar18 >> 8),1);
                if (((ulonglong)pcStack_70 & 1) == 0) {
                  lVar9 = param_2[2];
                  if (lVar9 == 0) goto LAB_141cb4bb6;
                  param_2[2] = lVar9 + -1;
                  uVar10 = (ulonglong)*(byte *)(param_2[1] + -1 + lVar9);
                }
                else {
                  uVar10 = (ulonglong)puStack_90 & 0xff;
                }
              }
              bVar22 = (byte)uVar10;
              puVar12 = (undefined *)param_2[4];
              puVar7 = (undefined *)param_2[5];
              if (puVar7 < puVar12) {
                lVar9 = param_2[3];
                lVar21 = param_2[2];
                do {
                  while( true ) {
                    bVar3 = puVar7[lVar9];
                    uVar17 = (ulonglong)bVar3;
                    bVar22 = (byte)uVar10;
                    if (0x2c < uVar17) break;
                    if ((0x100002600U >> (uVar17 & 0x3f) & 1) == 0) {
                      if (uVar17 != 0x2c) break;
                      if ((uVar5 & 1) != 0) {
                        puVar7 = puVar7 + 1;
                        param_2[5] = puVar7;
                      }
                      goto LAB_141cb49e8;
                    }
                    puVar7 = puVar7 + 1;
                    param_2[5] = puVar7;
                    if (puVar12 == puVar7) goto LAB_141cb4e99;
                  }
                  if (bVar3 == 0x5d) {
                    if (bVar22 != 0x5b) goto LAB_141cb49d0;
                  }
                  else if ((bVar3 != 0x7d) || (bVar22 != 0x7b)) goto LAB_141cb49d0;
                  puVar7 = puVar7 + 1;
                  param_2[5] = puVar7;
                  if (lVar21 == 0) goto LAB_141cb4bb6;
                  param_2[2] = lVar21 + -1;
                  bVar22 = *(byte *)(param_2[1] + -1 + lVar21);
                  uVar10 = (ulonglong)bVar22;
                  uVar5 = CONCAT71((int7)(uVar5 >> 8),1);
                  lVar21 = lVar21 + -1;
                  if (puVar12 <= puVar7) break;
                } while( true );
              }
LAB_141cb4e99:
              uStack_68 = (undefined8 *)0x2;
              if (bVar22 != 0x5b) {
                if (bVar22 != 0x7b) {
                    /* WARNING: Subroutine does not return */
                  pdb_142dc83b0(&UNK_1433aa678,0x28,&UNK_1433aa6e8);
                }
                uStack_68 = (undefined8 *)0x3;
              }
              pcVar8 = (code *)pdb_142d84ef0(param_2,&uStack_68);
              goto LAB_141cb4be1;
            }
LAB_141cb4dea:
            uStack_68 = (undefined8 *)0x5;
            pcVar8 = (code *)pdb_142d84ef0(param_2,&uStack_68);
          }
          else {
LAB_141cb5203:
            uStack_68 = (undefined8 *)0x6;
            pcVar8 = (code *)pdb_142d84ef0(param_2,&uStack_68);
          }
        }
        else {
LAB_141cb4e20:
          uStack_68 = (undefined8 *)0x3;
          pcVar8 = (code *)pdb_142d84ef0(param_2,&uStack_68);
        }
        goto LAB_141cb4be1;
      }
      if (bVar4) {
        uStack_88 = (undefined8 *)&UNK_1433aa758;
        pcStack_80 = (code *)0x7;
        uStack_68 = &uStack_88;
        pcStack_60 = pdb_1402ed400;
        pcVar8 = (code *)pdb_142d872f0(&UNK_14355d103,&uStack_68);
        goto LAB_141cb4be1;
      }
      uVar10 = param_2[5];
      if ((ulonglong)param_2[4] <= uVar10) {
LAB_141cb4e80:
        uStack_68 = (undefined8 *)0x3;
        pcVar8 = (code *)pdb_142d84ef0(param_2,&uStack_68);
        goto LAB_141cb4be1;
      }
      while( true ) {
        uVar10 = uVar10 + 1;
        uVar5 = (ulonglong)*(byte *)(*plVar14 + -1 + uVar10);
        if (0x3a < uVar5) goto LAB_141cb5341;
        if ((0x100002600U >> (uVar5 & 0x3f) & 1) == 0) break;
        param_2[5] = uVar10;
        if (uVar10 == param_2[4]) goto LAB_141cb4e80;
      }
      if (uVar5 != 0x3a) {
LAB_141cb5341:
        uStack_68 = (undefined8 *)0x6;
        pcVar8 = (code *)pdb_142d84ef0(param_2,&uStack_68);
        goto LAB_141cb4be1;
      }
      param_2[5] = uVar10;
      pdb_141cb3ed0(&uStack_88,param_2);
      if ((char)uStack_88 != '\0') {
        lVar9 = -(longlong)puStack_b0;
        uStack_b4 = (uint)lVar9;
        puVar23 = puStack_b0;
        pcVar11 = pcStack_a8;
        lVar21 = lStack_a0;
        pcVar8 = pcStack_80;
        pcVar15 = pcStack_70;
        goto joined_r0x000141cb4f63;
      }
      uStack_b4 = uStack_88._4_4_;
      lVar20 = 1;
      bVar4 = true;
    }
LAB_141cb4bb6:
    uVar10 = param_2[4];
    uVar5 = param_2[5];
    bVar16 = false;
  } while (uVar5 < uVar10);
LAB_141cb4bca:
  uStack_68 = (undefined8 *)0x3;
  pcVar8 = (code *)pdb_142d84ef0(param_2,&uStack_68);
LAB_141cb4be1:
  lVar9 = -(longlong)puStack_b0;
  uStack_b4 = (uint)lVar9;
  puVar23 = puStack_b0;
  pcVar11 = pcStack_a8;
  lVar21 = lStack_a0;
  pcVar15 = pcStack_70;
joined_r0x000141cb4f63:
  pcStack_70 = pcVar8;
  puStack_b0 = puVar23;
  pcStack_a8 = pcVar11;
  lStack_a0 = lVar21;
  if (SBORROW8(0,(longlong)puVar23)) {
    lVar9 = lVar20;
    pcVar8 = pcStack_70;
    puVar23 = (undefined8 *)0x8000000000000000;
    pcStack_70 = pcVar15;
  }
  else {
    uStack_b4 = (uint)lVar9;
    puStack_90 = param_1;
    if (lVar21 != 0) {
      pcVar8 = pcVar11 + 0x20;
      do {
        if (*(ulonglong *)(pcVar8 + -0x20) != 0) {
          pub_1406abac0(*(byte **)(pcVar8 + -0x18),*(ulonglong *)(pcVar8 + -0x20),1);
          lVar9 = extraout_RAX;
        }
        if (*(ulonglong *)(pcVar8 + -8) != 0) {
          pub_1406abac0(*(byte **)pcVar8,*(ulonglong *)(pcVar8 + -8),1);
          lVar9 = extraout_RAX_00;
        }
        uStack_b4 = (uint)lVar9;
        pcVar8 = pcVar8 + 0x30;
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
    }
    if (puVar23 != (undefined8 *)0x0) {
      pub_1406abac0((byte *)pcVar11,(longlong)puVar23 * 0x30,8);
      uStack_b4 = extraout_EAX;
    }
    param_1 = puStack_90;
    lVar9 = 0;
    pcVar8 = pcStack_70;
    puVar23 = (undefined8 *)0x8000000000000000;
  }
LAB_141cb4ffa:
  *(char *)(param_2 + 7) = *(char *)(param_2 + 7) + '\x01';
  uVar10 = param_2[5];
  uStack_68 = puVar23;
  pcStack_60 = pcVar8;
  lStack_58 = lVar9;
  uStack_50 = uStack_b4;
  if (uVar10 < (ulonglong)param_2[4]) {
    do {
      uVar10 = uVar10 + 1;
      bVar22 = *(byte *)(*plVar14 + -1 + uVar10);
      uVar5 = (ulonglong)bVar22;
      if (0x2c < uVar5) {
LAB_141cb515a:
        if (bVar22 != 0x7d) {
          uStack_88 = (undefined8 *)0x16;
          pcVar11 = (code *)pdb_142d84ef0(param_2,&uStack_88);
          goto LAB_141cb5065;
        }
        param_2[5] = uVar10;
        pcVar15 = pcVar8;
        if (!SBORROW8(0,(longlong)puVar23)) {
LAB_141cb516c:
          param_1[2] = lVar9;
          param_1[3] = CONCAT44(uStack_4c,uStack_50);
          *param_1 = puVar23;
          param_1[1] = pcVar8;
          return param_1;
        }
        goto LAB_141cb51ac;
      }
      if ((0x100002600U >> (uVar5 & 0x3f) & 1) == 0) {
        if (uVar5 != 0x2c) goto LAB_141cb515a;
        uStack_88 = (undefined8 *)0x15;
        pcVar11 = (code *)pdb_142d84ef0(param_2,&uStack_88);
        goto LAB_141cb5065;
      }
      param_2[5] = uVar10;
    } while (uVar10 != param_2[4]);
  }
  uStack_88 = (undefined8 *)0x3;
  pcVar11 = (code *)pdb_142d84ef0(param_2,&uStack_88);
LAB_141cb5065:
  if (SBORROW8(0,(longlong)puVar23)) {
    lVar9 = *(longlong *)pcVar11;
    pcStack_70 = pcVar11;
    if (lVar9 == 1) {
      pdb_1404b38e0(pcVar11 + 8);
    }
    else {
LAB_141cb5082:
      if ((lVar9 == 0) && (*(ulonglong *)(pcStack_70 + 0x10) != 0)) {
        pub_1406abac0(*(byte **)(pcStack_70 + 8),*(ulonglong *)(pcStack_70 + 0x10),1);
      }
    }
LAB_141cb5124:
    pub_1406abac0((byte *)pcStack_70,0x28,8);
    pcVar15 = pcVar8;
  }
  else {
    if (lVar9 != 0) {
      pcVar15 = pcVar8 + 0x20;
      do {
        if (*(ulonglong *)(pcVar15 + -0x20) != 0) {
          pub_1406abac0(*(byte **)(pcVar15 + -0x18),*(ulonglong *)(pcVar15 + -0x20),1);
        }
        if (*(ulonglong *)(pcVar15 + -8) != 0) {
          pub_1406abac0(*(byte **)pcVar15,*(ulonglong *)(pcVar15 + -8),1);
        }
        pcVar15 = pcVar15 + 0x30;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
    }
LAB_141cb50b6:
    pcVar15 = pcVar11;
    if (puVar23 != (undefined8 *)0x0) {
      pub_1406abac0((byte *)pcVar8,(longlong)puVar23 * 0x30,8);
    }
  }
LAB_141cb51ac:
  uVar6 = pdb_142d86ed0(pcVar15,param_2);
LAB_141cb51b7:
  param_1[1] = uVar6;
  *param_1 = 0x8000000000000000;
  return param_1;
}

