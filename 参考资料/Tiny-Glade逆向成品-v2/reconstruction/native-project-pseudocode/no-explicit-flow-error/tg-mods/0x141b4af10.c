// VA 0x141b4af10, PDB extent 5365 bytes
// tg_mods::identity::mint_into
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-mods/src/identity.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tg_mods::identity::mint_into
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tg-mods/src/identity.rs
   Extent: 5365 */

void pdb_141b4af10(undefined4 *param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auVar4 [16];
  undefined8 uVar5;
  undefined8 **ppuVar6;
  undefined4 uVar7;
  code *pcVar8;
  code *pcVar9;
  byte *pbVar10;
  code *pcVar11;
  undefined8 *puVar12;
  code *pcVar13;
  undefined8 *puVar14;
  undefined4 *puVar15;
  ulonglong uVar16;
  code *pcVar17;
  ulonglong uVar18;
  undefined8 uVar19;
  longlong lVar20;
  code *pcVar21;
  bool bVar22;
  bool bVar23;
  undefined8 *puStack_8e8;
  byte *pbStack_8e0;
  code *pcStack_8d8;
  byte *pbStack_8d0;
  undefined8 *puStack_8c8;
  undefined8 uStack_8c0;
  code *pcStack_8b8;
  byte *pbStack_8b0;
  undefined8 uStack_8a8;
  undefined8 uStack_8a0;
  undefined8 uStack_898;
  undefined8 uStack_890;
  undefined7 uStack_888;
  undefined4 uStack_881;
  undefined1 uStack_87d;
  undefined4 uStack_878;
  undefined4 uStack_874;
  undefined4 uStack_870;
  undefined4 uStack_86c;
  undefined4 uStack_868;
  undefined4 uStack_864;
  undefined4 uStack_860;
  undefined4 uStack_85c;
  undefined4 uStack_858;
  longlong alStack_170 [3];
  undefined4 *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  byte *pbStack_140;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  byte *pbStack_128;
  undefined1 auStack_118 [12];
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  longlong lStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  longlong *plStack_d8;
  code *pcStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong lStack_88;
  code *pcStack_80;
  undefined8 uStack_78;
  undefined8 **ppuStack_70;
  byte *pbStack_68;
  code *pcStack_60;
  code *pcStack_58;
  undefined1 uStack_4b;
  undefined1 uStack_4a;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  if ((param_4 & 1) == 0) {
    param_5 = 0;
  }
  alStack_170[2] = param_5;
  pdb_141b4aa80(&uStack_98);
  uVar7 = (undefined4)param_5;
  uStack_c8 = 0;
  uStack_c0 = 0;
  plStack_d8 = (longlong *)0x0;
  pcStack_d0 = (code *)0x0;
  uStack_e8 = (byte *)0x0;
  pcStack_e0 = (code *)0x0;
  uStack_f8 = (code *)0x0;
  pcStack_f0 = (code *)0x0;
  uStack_b8 = _DAT_143396414;
  uStack_b4 = _UNK_143396418;
  uStack_b0 = _UNK_14339641c;
  uStack_ac = _UNK_143396420;
  uStack_a8 = _DAT_143396424;
  uStack_a4 = _UNK_143396428;
  uStack_a0 = _UNK_14339642c;
  uStack_9c = _UNK_143396430;
  uStack_878 = _DAT_143396414;
  uStack_874 = _UNK_143396418;
  uStack_870 = _UNK_14339641c;
  uStack_86c = _UNK_143396420;
  uStack_868 = _DAT_143396424;
  uStack_864 = _UNK_143396428;
  uStack_860 = _UNK_14339642c;
  uStack_85c = _UNK_143396430;
  puStack_8e8 = (undefined8 *)0x0;
  pbStack_8e0 = (byte *)0x0;
  pcStack_8d8 = (code *)0x0;
  pbStack_8d0 = (byte *)0x0;
  puStack_8c8 = (undefined8 *)0x0;
  uStack_8c0 = 0;
  pcStack_8b8 = (code *)0x0;
  pbStack_8b0 = (byte *)0x0;
  uStack_8a8 = (code *)CONCAT44(_UNK_143396418,_DAT_143396414);
  uStack_8a0 = CONCAT44(_UNK_143396420,_UNK_14339641c);
  uStack_898 = (undefined *)CONCAT44(_UNK_143396428,_DAT_143396424);
  uStack_890 = (undefined8 *)CONCAT44(_UNK_143396430,_UNK_14339642c);
  uStack_888 = 0;
  uStack_881 = 0;
  uStack_87d = 1;
  uStack_858 = 0;
  uStack_138 = pdb_140f3fd40();
  uStack_134 = uVar7;
  pdb_140f3fcf0(&uStack_f8,&uStack_138,0xd53e8000,0x19db1de);
  _auStack_118 = ZEXT816(0);
  if ((char)uStack_f8 == '\0') {
    auVar4._8_8_ = 0;
    auVar4._0_8_ = pcStack_f0;
    _auStack_118 = ZEXT816(1000000000) * auVar4 + ZEXT416((uint)uStack_e8);
  }
  uVar7 = pdb_140f4da40();
  alStack_170[0] = CONCAT44(alStack_170[0]._4_4_,uVar7);
  uStack_f8 = (code *)auStack_118;
  pcStack_f0 = pdb_140f6e870;
  pcStack_e0 = pdb_140f71a50;
  plStack_d8 = alStack_170 + 2;
  pcStack_d0 = pdb_140f72a40;
  uStack_e8 = (byte *)alStack_170;
  pdb_140f60760(&uStack_78,&UNK_14339652e,&uStack_f8);
  pcStack_58 = (code *)uStack_78;
  pcStack_80 = (code *)ppuStack_70;
  pdb_140fafcc0(&puStack_8e8,ppuStack_70,pbStack_68);
  if (pcStack_58 != (code *)0x0) {
    pub_1406abac0((byte *)pcStack_80,(ulonglong)pcStack_58,1);
  }
  pdb_140fafcc0(&puStack_8e8,param_2,param_3);
  pdb_140fb0450(&uStack_78,&puStack_8e8);
  pdb_140faf0a0(&uStack_f8,&uStack_78);
  if (((ulonglong)uStack_f8 & 0xffffffff) < 0x11) {
    if ((int)uStack_f8 == 0x10) goto LAB_141b4b181;
  }
  else if (-0x41 < uStack_e8._4_1_) {
LAB_141b4b181:
    alStack_170[1] = 0x10;
    ppuStack_70 = (undefined8 **)pdb_140001020;
    pcStack_60 = pdb_1402ed400;
    alStack_170[0] = (longlong)&uStack_f8 + 4;
    uStack_78 = (undefined8 **)&uStack_98;
    pbStack_68 = (byte *)alStack_170;
    pdb_140f60760(auStack_118,&UNK_143396550,&uStack_78);
    uStack_138 = auStack_118._0_4_;
    uStack_134 = auStack_118._4_4_;
    uStack_130 = auStack_118._8_4_;
    uStack_12c = uStack_10c;
    pbStack_128 = (byte *)CONCAT44(uStack_104,uStack_108);
    if (uStack_98 != (code *)0x0) {
      pub_1406abac0((byte *)CONCAT44(uStack_8c,uStack_90),(ulonglong)uStack_98,1);
    }
    uStack_98 = (code *)0x0;
    lStack_88 = 0;
    pdb_14007ee60();
    pcVar8 = (code *)pub_1406abab0(6,1);
    pbVar10 = pbStack_128;
    if (pcVar8 == (code *)0x0) {
      pdb_142dc7e2a(1,6);
      goto LAB_141b4be2d;
    }
    *(undefined2 *)(pcVar8 + 4) = 0x6469;
    *(undefined4 *)pcVar8 = 0x5f646f6d;
    uStack_78 = (undefined8 **)0x6;
    pbStack_68 = (byte *)0x6;
    ppuStack_70 = (undefined8 **)pcVar8;
    if ((longlong)pbStack_128 < 0) {
      uVar19 = 0;
LAB_141b4b27d:
      uStack_4b = 1;
      pdb_142dc7e2a(uVar19,pbVar10);
      goto LAB_141b4be2d;
    }
    puStack_158 = param_1;
    uStack_150 = param_3;
    uStack_148 = param_2;
    if (pbStack_128 == (byte *)0x0) {
      pcVar8 = (code *)0x1;
    }
    else {
      uVar5 = CONCAT44(uStack_12c,uStack_130);
      pdb_14007ee60();
      uVar19 = 1;
      pcVar8 = (code *)pub_1406abab0((ulonglong)pbVar10,1);
      if (pcVar8 == (code *)0x0) goto LAB_141b4b27d;
      pub_142e32760(pcVar8,uVar5,pbVar10);
    }
    puStack_8e8 = (undefined8 *)CONCAT71(puStack_8e8._1_7_,3);
    pbStack_8e0 = pbVar10;
    pbStack_8d0 = pbVar10;
    uStack_4b = 0;
    pcStack_8d8 = pcVar8;
    pdb_141da5910(&uStack_f8,&uStack_98,&uStack_78,&puStack_8e8);
    switch((ulonglong)uStack_f8 & 0xff) {
    case 0:
    case 1:
    case 2:
    case 6:
      break;
    case 3:
      if (pcStack_f0 != (code *)0x0) {
        uVar16 = 1;
        pbVar10 = uStack_e8;
        pcVar8 = pcStack_f0;
code_r0x000141b4b41b:
        pub_1406abac0(pbVar10,(ulonglong)pcVar8,uVar16);
      }
      break;
    case 4:
      pcStack_80 = pcStack_e0;
      pcStack_58 = (code *)0x0;
      pbStack_140 = uStack_e8;
      pbVar10 = uStack_e8;
      while (pcStack_80 != pcStack_58) {
        pcStack_58 = pcStack_58 + 1;
        pdb_141da14f0(pbVar10);
        pbVar10 = pbVar10 + 0x20;
      }
      if (pcStack_f0 != (code *)0x0) {
        uVar16 = 8;
        pbVar10 = pbStack_140;
        pcVar8 = (code *)((longlong)pcStack_f0 << 5);
        goto code_r0x000141b4b41b;
      }
      break;
    default:
      if (pcStack_f0 == (code *)0x0) {
        uStack_8a8 = (code *)0x0;
      }
      else {
        pbStack_8e0 = (byte *)0x0;
        pcStack_8d8 = pcStack_f0;
        pbStack_8d0 = uStack_e8;
        uStack_8c0 = 0;
        pcStack_8b8 = pcStack_f0;
        pbStack_8b0 = uStack_e8;
        uStack_8a8 = pcStack_e0;
      }
      puStack_8e8 = (undefined8 *)(ulonglong)(pcStack_f0 != (code *)0x0);
      puStack_8c8 = puStack_8e8;
      pdb_141da5b20(&uStack_78,&puStack_8e8);
      if (uStack_78 != (undefined8 **)0x0) {
        do {
          auStack_118._0_8_ = &puStack_8e8;
          pdb_141da1d20(&uStack_78);
          pdb_141da5b20(&uStack_78,&puStack_8e8);
        } while (uStack_78 != (undefined8 **)0x0);
      }
    }
    auStack_118._8_4_ = (undefined4)uStack_98;
    uStack_10c = uStack_98._4_4_;
    uStack_108 = uStack_90;
    uStack_104 = uStack_8c;
    lStack_100 = lStack_88;
    auStack_118[0] = 5;
    pdb_14007ee60();
    pcVar8 = (code *)pub_1406abab0(0x80,1);
    if (pcVar8 == (code *)0x0) {
      pdb_142dc7e2a(1,0x80);
      goto LAB_141b4be2d;
    }
    uStack_f8 = (code *)0x80;
    pbStack_8e0 = &UNK_1433963c0;
    pcStack_8d8 = (code *)0x2;
    puStack_8c8 = (undefined8 *)((ulonglong)puStack_8c8 & 0xffffffffffffff00);
    *pcVar8 = (code)0x7b;
    uStack_e8 = (byte *)0x1;
    bVar23 = lStack_100 == 0;
    if (bVar23) {
      pcVar8[1] = (code)0x7d;
      uStack_e8 = (byte *)0x2;
    }
    pbStack_8d0 = (byte *)(ulonglong)!bVar23;
    uStack_78 = (undefined8 **)
                ((ulonglong)CONCAT61((int6)((ulonglong)uStack_78 >> 0x10),lStack_100 != 0) << 8);
    pcVar13 = stack0xfffffffffffffef0;
    bVar23 = stack0xfffffffffffffef0 != (code *)0x0;
    lVar20 = lStack_100;
    if (!bVar23) {
      lVar20 = 0;
    }
    pcVar21 = (code *)0x0;
    pcVar9 = stack0xfffffffffffffef0;
    uVar16 = CONCAT44(uStack_104,uStack_108);
    puStack_8e8 = &uStack_f8;
    pcStack_f0 = pcVar8;
    ppuStack_70 = &puStack_8e8;
    do {
      ppuVar6 = ppuStack_70;
      bVar22 = lVar20 == 0;
      lVar20 = lVar20 + -1;
      if (bVar22) {
        if (uStack_78._0_1_ == (code)0x1) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc83b0(&UNK_1433963c2,0x28,&UNK_143396648);
        }
        if (uStack_78._1_1_ == '\0') goto LAB_141b4b813;
        plVar1 = *ppuStack_70;
        puVar14 = (undefined8 *)((longlong)ppuStack_70[3] + -1);
        ppuStack_70[3] = puVar14;
        if (*(char *)(ppuVar6 + 4) == '\0') {
          lVar20 = plVar1[2];
          goto LAB_141b4b7f9;
        }
        lVar20 = plVar1[2];
        if (*plVar1 == lVar20) {
          pdb_142d7f1b0(plVar1,lVar20,1,1,1);
          lVar20 = plVar1[2];
        }
        *(undefined1 *)(plVar1[1] + lVar20) = 10;
        lVar20 = lVar20 + 1;
        plVar1[2] = lVar20;
        if (puVar14 == (undefined8 *)0x0) goto LAB_141b4b7f9;
        puVar2 = ppuVar6[1];
        puVar3 = ppuVar6[2];
        puVar12 = (undefined8 *)0x0;
        goto LAB_141b4bd65;
      }
      if (!bVar23) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_1433d9570);
      }
      if (pcVar21 == (code *)0x0) {
        pcVar8 = pcVar9;
        if (uVar16 != 0) {
          uVar18 = uVar16;
          if ((uVar16 & 7) != 0) {
            uVar18 = 0;
            do {
              pcVar9 = *(code **)(pcVar9 + 0x278);
              uVar18 = uVar18 + 1;
            } while ((uVar16 & 7) != uVar18);
            uVar18 = uVar16 - uVar18;
          }
          pcVar8 = pcVar9;
          if (7 < uVar16) {
            do {
              pcVar9 = *(code **)(*(longlong *)
                                   (*(longlong *)
                                     (*(longlong *)
                                       (*(longlong *)
                                         (*(longlong *)
                                           (*(longlong *)(*(longlong *)(pcVar9 + 0x278) + 0x278) +
                                           0x278) + 0x278) + 0x278) + 0x278) + 0x278) + 0x278);
              uVar18 = uVar18 - 8;
              pcVar8 = pcVar9;
            } while (uVar18 != 0);
          }
        }
        uVar16 = 0;
        pcVar9 = (code *)0x0;
        if (*(short *)(pcVar8 + 0x272) == 0) goto LAB_141b4b660;
      }
      else {
        pcVar8 = pcVar21;
        if (*(ushort *)(pcVar21 + 0x272) <= uVar16) {
LAB_141b4b660:
          do {
            pcVar21 = *(code **)(pcVar8 + 0x160);
            if (pcVar21 == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc8150(&UNK_1433d95a0);
            }
            pcVar9 = pcVar9 + 1;
            pcVar11 = pcVar8 + 0x270;
            uVar16 = (ulonglong)*(ushort *)pcVar11;
            pcVar8 = pcVar21;
          } while (*(ushort *)(pcVar21 + 0x272) <= *(ushort *)pcVar11);
        }
      }
      pcVar21 = pcVar8;
      if (pcVar9 == (code *)0x0) {
        uVar18 = uVar16 + 1;
      }
      else {
        pcVar11 = pcVar8 + uVar16 * 8 + 0x280;
        pcVar17 = pcVar9;
        if (((ulonglong)pcVar9 & 7) != 0) {
          uVar18 = 0;
          do {
            pcVar21 = *(code **)pcVar11;
            pcVar11 = pcVar21 + 0x278;
            uVar18 = uVar18 + 1;
          } while (((ulonglong)pcVar9 & 7) != uVar18);
          pcVar17 = pcVar9 + -uVar18;
        }
        if ((code *)0x7 < pcVar9) {
          do {
            pcVar21 = *(code **)(*(longlong *)
                                  (*(longlong *)
                                    (*(longlong *)
                                      (*(longlong *)
                                        (*(longlong *)
                                          (*(longlong *)(*(longlong *)pcVar11 + 0x278) + 0x278) +
                                        0x278) + 0x278) + 0x278) + 0x278) + 0x278);
            pcVar11 = pcVar21 + 0x278;
            pcVar17 = pcVar17 + -8;
          } while (pcVar17 != (code *)0x0);
        }
        uVar18 = 0;
      }
      pcVar8 = (code *)pdb_14261ec40(&uStack_78,pcVar8 + uVar16 * 0x18 + 0x168,
                                     pcVar8 + uVar16 * 0x20);
      bVar23 = true;
      pcVar9 = (code *)0x0;
      uVar16 = uVar18;
    } while (pcVar8 == (code *)0x0);
    if (uStack_f8 != (code *)0x0) {
      pub_1406abac0((byte *)pcStack_f0,(ulonglong)uStack_f8,1);
    }
    goto LAB_141b4b82d;
  }
  pdb_142dc8070((longlong)&uStack_f8 + 4,(ulonglong)uStack_f8 & 0xffffffff,0,0x10,&UNK_143396538);
LAB_141b4be2d:
                    /* WARNING: Does not return */
  pcVar8 = (code *)invalidInstructionException();
  (*pcVar8)();
LAB_141b4bd65:
  do {
    if ((undefined8 *)(*plVar1 - lVar20) < puVar3) {
      pdb_142d7f1b0(plVar1,lVar20,puVar3,1,1);
      lVar20 = plVar1[2];
LAB_141b4bd40:
      pub_142e32760(plVar1[1] + lVar20,puVar2,puVar3);
    }
    else if (puVar3 != (undefined8 *)0x0) goto LAB_141b4bd40;
    lVar20 = lVar20 + (longlong)puVar3;
    plVar1[2] = lVar20;
    puVar12 = (undefined8 *)((longlong)puVar12 + 1);
  } while (puVar12 != puVar14);
LAB_141b4b7f9:
  if (*plVar1 == lVar20) {
    pdb_142d7f1b0(plVar1,lVar20,1,1,1);
    lVar20 = plVar1[2];
  }
  *(undefined1 *)(plVar1[1] + lVar20) = 0x7d;
  plVar1[2] = lVar20 + 1;
LAB_141b4b813:
  uVar5 = uStack_148;
  uVar19 = uStack_150;
  pcVar8 = pcStack_f0;
  if (!SBORROW8(0,(longlong)uStack_f8)) {
    pcStack_80 = uStack_f8;
    pcStack_58 = pcStack_f0;
    pcVar8 = (code *)pdb_140f561c0(uStack_148,uStack_150,pcStack_f0,uStack_e8);
    puVar15 = puStack_158;
    if (pcStack_80 != (code *)0x0) {
      pub_1406abac0((byte *)pcStack_58,(ulonglong)pcStack_80,1);
    }
    if (pcVar8 == (code *)0x0) {
      if (2 < *_DAT_143ca8e90) {
        pdb_141b1e240(&uStack_78,uVar5,uVar19,3);
        pcStack_f0 = pdb_141351190;
        pcStack_e0 = pdb_140f58250;
        puStack_8e8 = (undefined8 *)0x0;
        pbStack_8e0 = &UNK_14339647b;
        pcStack_8d8 = (code *)0x11;
        pbStack_8d0 = (byte *)0x0;
        puStack_8c8 = (undefined8 *)&UNK_14339643f;
        uStack_8c0 = 0x1e;
        pcStack_8b8 = (code *)0x3;
        pbStack_8b0 = &UNK_14339647b;
        uStack_8a8 = (code *)0x11;
        uStack_8a0 = 0xda00000001;
        uStack_898 = &UNK_1433965bf;
        uStack_890 = &uStack_f8;
        uStack_f8 = (code *)&uStack_138;
        uStack_e8 = (byte *)&uStack_78;
        pdb_140f332f0(&uStack_4a,&puStack_8e8);
        if (uStack_78 != (undefined8 **)0x0) {
          pub_1406abac0((byte *)ppuStack_70,(ulonglong)uStack_78,1);
        }
      }
    }
    else {
      uStack_98 = pcVar8;
      if (*_DAT_143ca8e90 != 0) {
        pdb_141b1e240(&uStack_78,uVar5,uVar19,3);
        pcStack_f0 = pdb_140f58250;
        uStack_e8 = (byte *)&uStack_98;
        pcStack_e0 = pdb_140f59780;
        puStack_8e8 = (undefined8 *)0x0;
        pbStack_8e0 = &UNK_14339647b;
        pcStack_8d8 = (code *)0x11;
        pbStack_8d0 = (byte *)0x0;
        puStack_8c8 = (undefined8 *)&UNK_14339643f;
        uStack_8c0 = 0x1e;
        pcStack_8b8 = (code *)0x1;
        pbStack_8b0 = &UNK_14339647b;
        uStack_8a8 = (code *)0x11;
        uStack_8a0 = 0xd500000001;
        uStack_898 = &UNK_143396580;
        uStack_890 = &uStack_f8;
        uStack_f8 = (code *)&uStack_78;
        pdb_140f332f0(&uStack_4a,&puStack_8e8);
        if (uStack_78 != (undefined8 **)0x0) {
          pub_1406abac0((byte *)ppuStack_70,(ulonglong)uStack_78,1);
        }
      }
      pdb_1404b38e0();
    }
    goto LAB_141b4bb39;
  }
LAB_141b4b82d:
  puVar15 = puStack_158;
  uStack_98 = pcVar8;
  if (*_DAT_143ca8e90 != 0) {
    pdb_141b1e240(&uStack_78,uStack_148,uStack_150,3);
    pcStack_f0 = pdb_140f58250;
    uStack_e8 = (byte *)&uStack_98;
    pcStack_e0 = pdb_140de07e0;
    puStack_8e8 = (undefined8 *)0x0;
    pbStack_8e0 = &UNK_14339647b;
    pcStack_8d8 = (code *)0x11;
    pbStack_8d0 = (byte *)0x0;
    puStack_8c8 = (undefined8 *)&UNK_14339643f;
    uStack_8c0 = 0x1e;
    pcStack_8b8 = (code *)0x1;
    pbStack_8b0 = &UNK_14339647b;
    uStack_8a8 = (code *)0x11;
    uStack_8a0 = 0xdd00000001;
    uStack_898 = &UNK_1433965d8;
    uStack_890 = &uStack_f8;
    uStack_f8 = (code *)&uStack_78;
    pdb_140f332f0(&uStack_4a,&puStack_8e8);
    if (uStack_78 != (undefined8 **)0x0) {
      pub_1406abac0((byte *)ppuStack_70,(ulonglong)uStack_78,1);
    }
  }
  pcStack_58 = uStack_98;
  if (*(longlong *)uStack_98 == 1) {
    pdb_1404b38e0(uStack_98 + 8);
  }
  else if ((*(longlong *)uStack_98 == 0) && (*(ulonglong *)(uStack_98 + 0x10) != 0)) {
    pub_1406abac0(*(byte **)(uStack_98 + 8),*(ulonglong *)(uStack_98 + 0x10),1);
  }
  pub_1406abac0((byte *)pcStack_58,0x28,8);
  pcVar13 = stack0xfffffffffffffef0;
LAB_141b4bb39:
  *(byte **)(puVar15 + 4) = pbStack_128;
  *puVar15 = uStack_138;
  puVar15[1] = uStack_134;
  puVar15[2] = uStack_130;
  puVar15[3] = uStack_12c;
  if (pcVar13 == (code *)0x0) {
    uStack_8a8 = (code *)0x0;
  }
  else {
    pbStack_8d0 = (byte *)CONCAT44(uStack_104,uStack_108);
    pbStack_8e0 = (undefined *)0x0;
    uStack_8c0 = 0;
    uStack_8a8 = (code *)lStack_100;
    pcStack_8d8 = pcVar13;
    pcStack_8b8 = pcVar13;
    pbStack_8b0 = pbStack_8d0;
  }
  puStack_8e8 = (undefined8 *)(ulonglong)(pcVar13 != (code *)0x0);
  uStack_49 = 0;
  puStack_8c8 = puStack_8e8;
  pdb_141da5b20(&uStack_f8,&puStack_8e8);
  if (uStack_f8 != (code *)0x0) {
    do {
      uStack_78 = &puStack_8e8;
      pdb_141da1d20(&uStack_f8);
      uStack_49 = 0;
      pdb_141da5b20(&uStack_f8,&puStack_8e8);
    } while (uStack_f8 != (code *)0x0);
  }
  return;
}

