// VA 0x142326ff0, PDB extent 4618 bytes
// toolbar::menu::mods_glade_tab::apply_button
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/menu/mods_glade_tab.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: toolbar::menu::mods_glade_tab::apply_button
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/menu/mods_glade_tab.rs
   Extent: 4618 */

void pdb_142326ff0(undefined8 param_1,longlong param_2,byte *****param_3,longlong param_4,
                  byte *****param_5,undefined8 param_6,undefined1 *param_7,undefined8 param_8,
                  longlong *param_9)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  char cVar8;
  int iVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  byte *pbVar12;
  byte ****ppppbVar13;
  undefined8 uVar14;
  undefined1 uVar15;
  byte *****pppppbVar16;
  undefined1 uVar17;
  byte *pbVar18;
  longlong lVar19;
  uint uVar20;
  ushort uVar21;
  ulonglong uVar22;
  longlong lVar23;
  longlong lVar24;
  byte *****pppppbVar25;
  byte *****pppppbVar26;
  longlong lVar27;
  byte *****pppppbVar28;
  byte bVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auStack_3f0 [40];
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  byte ****ppppbStack_3b8;
  byte *pbStack_3b0;
  byte ****ppppbStack_3a8;
  byte ****ppppbStack_3a0;
  byte ****ppppbStack_398;
  byte ****ppppbStack_390;
  byte ****ppppbStack_388;
  byte ****ppppbStack_380;
  byte ****ppppbStack_378;
  byte ****ppppbStack_370;
  byte ****ppppbStack_368;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined4 uStack_358;
  undefined8 uStack_354;
  undefined1 uStack_34c;
  undefined1 uStack_34b;
  byte ****ppppbStack_348;
  byte ****ppppbStack_340;
  byte ****ppppbStack_338;
  byte ****ppppbStack_330;
  byte ****ppppbStack_328;
  undefined1 uStack_320;
  byte ****ppppbStack_318;
  byte ****ppppbStack_310;
  byte ****ppppbStack_308;
  byte ****ppppbStack_300;
  byte ****ppppbStack_2f8;
  byte ****ppppbStack_2f0;
  byte ****ppppbStack_2e8;
  byte ****ppppbStack_2e0;
  byte ****ppppbStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_240;
  undefined1 uStack_238;
  byte ***pppbStack_230;
  byte *pbStack_228;
  undefined8 uStack_220;
  longlong lStack_210;
  byte *pbStack_208;
  byte ****ppppbStack_200;
  undefined8 *puStack_1f8;
  byte ****ppppbStack_1f0;
  byte ****ppppbStack_1e8;
  byte ****ppppbStack_1e0;
  byte ****ppppbStack_1d8;
  byte ****ppppbStack_1d0;
  undefined8 uStack_1c8;
  byte ****ppppbStack_1c0;
  byte ****ppppbStack_1b8;
  byte ****ppppbStack_1b0;
  byte ****ppppbStack_1a8;
  byte ****ppppbStack_1a0;
  byte ****ppppbStack_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 uStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  byte ****ppppbStack_150;
  undefined8 uStack_d0;
  undefined1 uStack_c8;
  byte *pbStack_b8;
  byte ****ppppbStack_b0;
  byte ****ppppbStack_a8;
  byte ****ppppbStack_a0;
  byte ****ppppbStack_98;
  byte ****ppppbStack_90;
  byte ****ppppbStack_88;
  undefined8 uStack_80;
  byte ***pppbStack_70;
  byte ****ppppbStack_68;
  undefined1 uStack_59;
  byte ****ppppbStack_58;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  ppppbStack_58 = (byte ****)param_3;
  pdb_140d92570(&lStack_210,*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x28));
  pbVar12 = pbStack_208;
  if ((byte *****)ppppbStack_200 == param_5) {
    if (param_5 != (byte *****)0x0) {
      lVar27 = 0;
      do {
        if ((*(longlong *)(pbVar12 + lVar27 + 0x10) != *(longlong *)(param_4 + 0x10 + lVar27)) ||
           (iVar9 = pub_142e32750(*(undefined8 *)(pbVar12 + lVar27 + 8),
                                  *(undefined8 *)(param_4 + 8 + lVar27)), iVar9 != 0))
        goto LAB_14232709d;
        lVar27 = lVar27 + 0x18;
      } while ((longlong)param_5 * 0x18 != lVar27);
    }
LAB_1423272d5:
    if ((byte *****)ppppbStack_200 != (byte *****)0x0) {
      pbVar18 = pbVar12 + 8;
      pppppbVar26 = (byte *****)ppppbStack_200;
      do {
        if (*(ulonglong *)(pbVar18 + -8) != 0) {
          pub_1406abac0(*(byte **)pbVar18,*(ulonglong *)(pbVar18 + -8),1);
        }
        pbVar18 = pbVar18 + 0x18;
        pppppbVar26 = (byte *****)((longlong)pppppbVar26 + -1);
      } while (pppppbVar26 != (byte *****)0x0);
    }
    if (lStack_210 != 0) {
      pub_1406abac0(pbVar12,lStack_210 * 0x18,8);
    }
    return;
  }
LAB_14232709d:
  uVar14 = 0x19;
  uVar10 = pdb_140dc6290(&UNK_1434da1b4,0x19);
  pdb_140f5f4f0(&ppppbStack_1a8,uVar10,uVar14);
  ppppbStack_68 = ppppbStack_1a0;
  pdb_1407339e0(&ppppbStack_1c0,param_1,ppppbStack_1a0,ppppbStack_198);
  if ((byte *****)ppppbStack_1a8 != (byte *****)0x0) {
    pub_1406abac0((byte *)ppppbStack_68,(ulonglong)ppppbStack_1a8,1);
  }
  pppppbVar26 = (byte *****)ppppbStack_1c0;
  if ((byte ****)ppppbStack_1c0[0x39] != (byte ****)0x0) {
    pppppbVar25 = (byte *****)(ppppbStack_1c0 + 0x3a);
    uVar11 = pdb_1400af0a0(pppppbVar25,&ppppbStack_1b8);
    pppppbVar16 = (byte *****)ppppbStack_1b8;
    ppppbVar13 = pppppbVar26[0x36];
    bVar29 = (byte)(uVar11 >> 0x39);
    auVar30 = ZEXT216(CONCAT11(bVar29,bVar29));
    auVar30 = pshuflw(auVar30,auVar30,0);
    lVar27 = 0;
    do {
      uVar11 = uVar11 & (ulonglong)pppppbVar26[0x37];
      auVar2 = *(undefined1 (*) [16])((longlong)ppppbVar13 + uVar11);
      auVar33[0] = -(auVar2[0] == auVar30[0]);
      auVar33[1] = -(auVar2[1] == auVar30[1]);
      auVar33[2] = -(auVar2[2] == auVar30[2]);
      auVar33[3] = -(auVar2[3] == auVar30[3]);
      auVar33[4] = -(auVar2[4] == auVar30[4]);
      auVar33[5] = -(auVar2[5] == auVar30[5]);
      auVar33[6] = -(auVar2[6] == auVar30[6]);
      auVar33[7] = -(auVar2[7] == auVar30[7]);
      auVar33[8] = -(auVar2[8] == auVar30[0]);
      auVar33[9] = -(auVar2[9] == auVar30[1]);
      auVar33[10] = -(auVar2[10] == auVar30[2]);
      auVar33[0xb] = -(auVar2[0xb] == auVar30[3]);
      auVar33[0xc] = -(auVar2[0xc] == auVar30[4]);
      auVar33[0xd] = -(auVar2[0xd] == auVar30[5]);
      auVar33[0xe] = -(auVar2[0xe] == auVar30[6]);
      auVar33[0xf] = -(auVar2[0xf] == auVar30[7]);
      uVar21 = (ushort)(SUB161(auVar33 >> 7,0) & 1) | (ushort)(SUB161(auVar33 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar33 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar33 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar33 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar33 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar33 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar33 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar33 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar33 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar33 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar33 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar33 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar33 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar33 >> 0x77,0) & 1) << 0xe | (ushort)(auVar33[0xf] >> 7) << 0xf;
      uVar20 = (uint)uVar21;
      while (uVar21 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar20; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar22 = uVar4 + uVar11 & (ulonglong)pppppbVar26[0x37];
        if (ppppbStack_1b8 == (byte ****)ppppbVar13[uVar22 * -0x1b + -0x1b]) {
          if ((*(byte *)((longlong)ppppbVar13 + uVar22 * -0xd8 + -6) & 0x30) == 0) {
LAB_142327357:
            if (pppppbVar26[0x39] == (byte ****)0x0) goto LAB_142327443;
            uVar11 = pdb_1400af0a0(pppppbVar25,&ppppbStack_1b8);
            ppppbVar13 = pppppbVar26[0x36];
            bVar29 = (byte)(uVar11 >> 0x39);
            auVar30 = ZEXT216(CONCAT11(bVar29,bVar29));
            auVar30 = pshuflw(auVar30,auVar30,0);
            lVar27 = 0;
            goto LAB_1423273a4;
          }
          uVar7 = pdb_140b7e9a0(param_2 + 0xa0,ppppbStack_58);
          ppppbStack_1a8 = (byte ****)CONCAT71(ppppbStack_1a8._1_7_,uVar7);
          cVar8 = pdb_140b7e570(&ppppbStack_1a8);
          if (cVar8 == '\0') {
            ppppbStack_1a8 = (byte ****)pdb_140b80de0(ppppbStack_58);
            if ((byte *****)ppppbStack_1a8 == (byte *****)0x0) goto LAB_142327357;
            pdb_140f36c40(&ppppbStack_1a8);
          }
          *(undefined4 *)param_9[2] = *(undefined4 *)((longlong)param_9 + 0x1c);
          lVar27 = *param_9;
          lVar23 = *(longlong *)(lVar27 + 0x30);
          uVar10 = *(undefined8 *)(lVar27 + 0x40);
          if (lVar23 == *(longlong *)(lVar27 + 0x20)) {
            pdb_142d7e980(lVar27 + 0x20);
          }
          lVar19 = *(longlong *)(lVar27 + 0x28);
          *(undefined8 *)(lVar19 + lVar23 * 0x10) = uVar10;
          *(undefined1 *)(lVar19 + 8 + lVar23 * 0x10) = 0xe;
          *(longlong *)(lVar27 + 0x30) = lVar23 + 1;
          *(longlong *)(lVar27 + 0x40) = *(longlong *)(lVar27 + 0x40) + 1;
          goto LAB_14232728b;
        }
        uVar21 = (ushort)(uVar20 - 1) & (ushort)uVar20;
        uVar20 = CONCAT22((short)(uVar20 - 1 >> 0x10),uVar21);
      }
      auVar31[0] = -(auVar2[0] == -1);
      auVar31[1] = -(auVar2[1] == -1);
      auVar31[2] = -(auVar2[2] == -1);
      auVar31[3] = -(auVar2[3] == -1);
      auVar31[4] = -(auVar2[4] == -1);
      auVar31[5] = -(auVar2[5] == -1);
      auVar31[6] = -(auVar2[6] == -1);
      auVar31[7] = -(auVar2[7] == -1);
      auVar31[8] = -(auVar2[8] == -1);
      auVar31[9] = -(auVar2[9] == -1);
      auVar31[10] = -(auVar2[10] == -1);
      auVar31[0xb] = -(auVar2[0xb] == -1);
      auVar31[0xc] = -(auVar2[0xc] == -1);
      auVar31[0xd] = -(auVar2[0xd] == -1);
      auVar31[0xe] = -(auVar2[0xe] == -1);
      auVar31[0xf] = -(auVar2[0xf] == -1);
      if ((((((((((((((((SUB161(auVar31 >> 7,0) & 1) != 0 || (SUB161(auVar31 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar31 >> 0x17,0) & 1) != 0) || (SUB161(auVar31 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar31 >> 0x27,0) & 1) != 0) || (SUB161(auVar31 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar31 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar31 >> 0x3f,0) & 1) != 0) || (SUB161(auVar31 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar31 >> 0x4f,0) & 1) != 0) || (SUB161(auVar31 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar31 >> 0x5f,0) & 1) != 0) || (SUB161(auVar31 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar31 >> 0x6f,0) & 1) != 0) || (SUB161(auVar31 >> 0x77,0) & 1) != 0) ||
          auVar31[0xf] < '\0') break;
      uVar11 = uVar11 + lVar27 + 0x10;
      lVar27 = lVar27 + 0x10;
    } while( true );
  }
  pdb_142dc8110(&UNK_142fa60f8,0x16,&UNK_142fa6ad0);
LAB_142327da4:
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
LAB_1423273a4:
  uVar11 = uVar11 & (ulonglong)pppppbVar26[0x37];
  auVar2 = *(undefined1 (*) [16])((longlong)ppppbVar13 + uVar11);
  auVar34[0] = -(auVar2[0] == auVar30[0]);
  auVar34[1] = -(auVar2[1] == auVar30[1]);
  auVar34[2] = -(auVar2[2] == auVar30[2]);
  auVar34[3] = -(auVar2[3] == auVar30[3]);
  auVar34[4] = -(auVar2[4] == auVar30[4]);
  auVar34[5] = -(auVar2[5] == auVar30[5]);
  auVar34[6] = -(auVar2[6] == auVar30[6]);
  auVar34[7] = -(auVar2[7] == auVar30[7]);
  auVar34[8] = -(auVar2[8] == auVar30[0]);
  auVar34[9] = -(auVar2[9] == auVar30[1]);
  auVar34[10] = -(auVar2[10] == auVar30[2]);
  auVar34[0xb] = -(auVar2[0xb] == auVar30[3]);
  auVar34[0xc] = -(auVar2[0xc] == auVar30[4]);
  auVar34[0xd] = -(auVar2[0xd] == auVar30[5]);
  auVar34[0xe] = -(auVar2[0xe] == auVar30[6]);
  auVar34[0xf] = -(auVar2[0xf] == auVar30[7]);
  uVar21 = (ushort)(SUB161(auVar34 >> 7,0) & 1) | (ushort)(SUB161(auVar34 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar34 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar34 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar34 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar34 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar34 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar34 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar34 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar34 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar34 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar34 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar34 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar34 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar34 >> 0x77,0) & 1) << 0xe | (ushort)(auVar34[0xf] >> 7) << 0xf;
  uVar20 = (uint)uVar21;
  while( true ) {
    if (uVar21 == 0) goto LAB_1423273ea;
    uVar4 = 0;
    for (uVar5 = uVar20; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
      uVar4 = uVar4 + 1;
    }
    uVar22 = uVar4 + uVar11 & (ulonglong)pppppbVar26[0x37];
    if (pppppbVar16 == (byte *****)ppppbVar13[uVar22 * -0x1b + -0x1b]) break;
    uVar21 = (ushort)(uVar20 - 1) & (ushort)uVar20;
    uVar20 = CONCAT22((short)(uVar20 - 1 >> 0x10),uVar21);
  }
  if ((*(byte *)((longlong)ppppbVar13 + uVar22 * -0xd8 + -6) & 0x30) == 0) goto LAB_14232728b;
  uStack_3c8 = *(undefined8 *)(param_2 + 0xa0);
  uStack_3c0 = *(undefined8 *)(param_2 + 0xa8);
  pppppbVar25 = *(byte ******)(param_2 + 0x10);
  if ((longlong)pppppbVar25 < 0) {
    pppppbVar26 = (byte *****)0x0;
  }
  else {
    uVar7 = *(undefined1 *)(param_2 + 0x98);
    puStack_1f8 = (undefined8 *)(param_2 + 0xa0);
    ppppbStack_58 = (byte ****)pppppbVar25;
    if (pppppbVar25 == (byte *****)0x0) {
      pbVar12 = (byte *)0x1;
      goto LAB_142327549;
    }
    ppppbStack_68 = (byte ****)CONCAT71(ppppbStack_68._1_7_,uVar7);
    lVar27 = *(longlong *)(param_2 + 8);
    pdb_14007ee60();
    pppppbVar25 = (byte *****)ppppbStack_58;
    pppppbVar26 = (byte *****)0x1;
    pbVar12 = pub_1406abab0((ulonglong)ppppbStack_58,1);
    if (pbVar12 != (byte *)0x0) {
      pppppbVar16 = (byte *****)((longlong)pppppbVar25 - 1U);
      if (pppppbVar25 < (byte *****)((longlong)pppppbVar25 - 1U)) {
        pppppbVar16 = pppppbVar25;
      }
      if (pppppbVar16 < (byte *****)0x20) {
        lVar24 = 0;
        pppppbVar28 = pppppbVar25;
        lVar23 = lVar27;
      }
      else {
        uVar22 = (longlong)pppppbVar16 + 1;
        uVar11 = 0x20;
        if ((uVar22 & 0x1f) != 0) {
          uVar11 = (ulonglong)((uint)uVar22 & 0x1f);
        }
        lVar24 = uVar22 - uVar11;
        pppppbVar28 = (byte *****)((longlong)pppppbVar25 - lVar24);
        lVar23 = lVar27 + lVar24;
        lVar19 = 0;
        do {
          uVar10 = ((undefined8 *)(lVar27 + lVar19))[1];
          puVar1 = (undefined8 *)(lVar27 + 0x10 + lVar19);
          uVar14 = *puVar1;
          uVar6 = puVar1[1];
          *(undefined8 *)(pbVar12 + lVar19) = *(undefined8 *)(lVar27 + lVar19);
          *(undefined8 *)(pbVar12 + lVar19 + 8) = uVar10;
          *(undefined8 *)(pbVar12 + lVar19 + 0x10) = uVar14;
          *(undefined8 *)(pbVar12 + lVar19 + 0x10 + 8) = uVar6;
          lVar19 = lVar19 + 0x20;
        } while (lVar24 != lVar19);
      }
      pppppbVar16 = (byte *****)((longlong)pppppbVar25 + lVar27);
      pppppbVar25 = (byte *****)0x0;
      do {
        uVar7 = ppppbStack_68._0_1_;
        if ((byte *****)((longlong)pppppbVar25 + lVar23) == pppppbVar16) break;
        (pbVar12 + lVar24)[(longlong)pppppbVar25] = *(byte *)((longlong)pppppbVar25 + lVar23);
        pppppbVar25 = (byte *****)((longlong)pppppbVar25 + 1);
      } while (pppppbVar28 != pppppbVar25);
LAB_142327549:
      uVar17 = SUB81(pppppbVar26,0);
      uVar15 = SUB81(pppppbVar16,0);
      pbStack_b8 = pbVar12;
      if (SBORROW8(0,*(longlong *)(param_2 + 0x30))) {
        ppppbStack_68 = (byte ****)0x8000000000000000;
      }
      else {
        uVar15 = *(undefined1 *)(param_2 + 0x58);
        pdb_140f60be0(&ppppbStack_1a8,param_2 + 0x30);
        uStack_180 = CONCAT31(uStack_180._1_3_,uVar15);
        ppppbStack_308 = *(byte *****)(param_2 + 0x50);
        ppppbStack_2f8 = *(byte *****)(param_2 + 0x60);
        ppppbStack_2f0 = (byte ****)CONCAT44(ppppbStack_2f0._4_4_,*(undefined4 *)(param_2 + 0x68));
        uVar15 = *(undefined1 *)(param_2 + 0x6c);
        uVar17 = *(undefined1 *)(param_2 + 0x6d);
        ppppbStack_68 = ppppbStack_1a8;
        ppppbStack_b0 = ppppbStack_1a0;
        ppppbStack_300 = (byte ****)CONCAT44(uStack_17c,uStack_180);
        ppppbStack_1a8 = ppppbStack_198;
        uStack_190 = uStack_180;
        uStack_18c = uStack_17c;
        uStack_188 = SUB84(ppppbStack_2f8,0);
        uStack_184 = (undefined4)((ulonglong)ppppbStack_2f8 >> 0x20);
        ppppbStack_1a0 = (byte ****)*(byte ******)(param_2 + 0x48);
        ppppbStack_198 = ppppbStack_308;
        uStack_180 = *(undefined4 *)(param_2 + 0x68);
      }
      pdb_1411b3320(&ppppbStack_1f0,param_2 + 0x18);
      if (SBORROW8(0,*(longlong *)(param_2 + 0x70))) {
        ppppbStack_318 = (byte ****)0x8000000000000000;
      }
      else {
        ppppbStack_300 = *(byte *****)(param_2 + 0x88);
        ppppbStack_2f8 = *(byte *****)(param_2 + 0x90);
        pdb_140f60be0(&ppppbStack_318,param_2 + 0x70);
        ppppbStack_a8 = ppppbStack_310;
        ppppbStack_a0 = ppppbStack_308;
        ppppbStack_98 = ppppbStack_300;
        ppppbStack_90 = ppppbStack_2f8;
      }
      ppppbStack_3b8 = ppppbStack_58;
      pbStack_3b0 = pbStack_b8;
      ppppbStack_3a8 = ppppbStack_58;
      ppppbStack_388 = ppppbStack_68;
      ppppbStack_380 = ppppbStack_b0;
      ppppbStack_378 = ppppbStack_1a8;
      ppppbStack_370 = ppppbStack_1a0;
      ppppbStack_368 = ppppbStack_198;
      uStack_360 = uStack_190;
      uStack_354 = CONCAT44(uStack_180,uStack_184);
      uStack_35c = uStack_18c;
      uStack_358 = uStack_188;
      ppppbStack_3a0 = ppppbStack_1f0;
      ppppbStack_398 = ppppbStack_1e8;
      ppppbStack_390 = ppppbStack_1e0;
      ppppbStack_340 = ppppbStack_a8;
      ppppbStack_338 = ppppbStack_a0;
      ppppbStack_330 = ppppbStack_98;
      ppppbStack_328 = ppppbStack_90;
      uStack_34c = uVar15;
      uStack_34b = uVar17;
      ppppbStack_348 = ppppbStack_318;
      uStack_320 = uVar7;
      if (param_5 == (byte *****)0x0) {
        pppppbVar26 = (byte *****)0x8;
      }
      else {
        pdb_14007ee60();
        pppppbVar26 = (byte *****)pub_1406abab0((longlong)param_5 * 0x18,8);
        if (pppppbVar26 == (byte *****)0x0) {
          pdb_142dc7e2a(8,(longlong)param_5 * 0x18);
          goto LAB_142327da4;
        }
      }
      lVar27 = param_4 + (longlong)param_5 * 0x18;
      ppppbStack_58 = (byte ****)0x0;
      ppppbStack_310 = (byte ****)pppppbVar26;
      ppppbStack_318 = (byte ****)param_5;
      pppppbVar25 = (byte *****)ppppbStack_398;
      pppppbVar16 = (byte *****)ppppbStack_390;
      pppppbVar28 = param_5;
      for (; (ppppbStack_398 = (byte ****)pppppbVar25, ppppbStack_390 = (byte ****)pppppbVar16,
             pppppbVar28 != (byte *****)0x0 &&
             (pppppbVar28 = (byte *****)((longlong)pppppbVar28 + -1), param_4 != lVar27));
          param_4 = param_4 + 0x18) {
        if (param_5 <= ppppbStack_58) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(ppppbStack_58,param_5,&UNK_1434da348);
        }
        pdb_140f60be0(&ppppbStack_1a8,param_4);
        pppppbVar26[(longlong)ppppbStack_58 * 3 + 2] = ppppbStack_198;
        pppppbVar26[(longlong)ppppbStack_58 * 3] = ppppbStack_1a8;
        (pppppbVar26 + (longlong)ppppbStack_58 * 3)[1] = ppppbStack_1a0;
        ppppbStack_58 = (byte ****)((longlong)ppppbStack_58 + 1);
        pppppbVar25 = (byte *****)ppppbStack_398;
        pppppbVar16 = (byte *****)ppppbStack_390;
      }
      ppppbStack_98 = (byte ****)param_5;
      ppppbStack_a8 = ppppbStack_318;
      ppppbStack_a0 = ppppbStack_310;
      if (pppppbVar16 != (byte *****)0x0) {
        pppppbVar26 = pppppbVar25 + 1;
        do {
          if (pppppbVar26[-1] != (byte ****)0x0) {
            pub_1406abac0((byte *)*pppppbVar26,(ulonglong)pppppbVar26[-1],1);
          }
          pppppbVar26 = pppppbVar26 + 3;
          pppppbVar16 = (byte *****)((longlong)pppppbVar16 + -1);
        } while (pppppbVar16 != (byte *****)0x0);
      }
      if ((byte *****)ppppbStack_3a0 != (byte *****)0x0) {
        pub_1406abac0((byte *)pppppbVar25,(longlong)ppppbStack_3a0 * 0x18,8);
      }
      ppppbStack_390 = ppppbStack_98;
      ppppbStack_3a0 = ppppbStack_a8;
      ppppbStack_398 = ppppbStack_a0;
      pdb_140a923d0(&ppppbStack_1a8,&ppppbStack_3b8);
      puVar1 = puStack_1f8;
      pdb_140c5d220(auStack_3f0,&ppppbStack_1a8);
      pdb_140a937d0(&ppppbStack_1a8,&uStack_3c8);
      ppppbStack_58 = ppppbStack_1a0;
      pdb_140f3e9e0(&pppbStack_230,ppppbStack_1a0,ppppbStack_198,&UNK_1434da1cd,0xc);
      if ((byte *****)ppppbStack_1a8 != (byte *****)0x0) {
        pub_1406abac0((byte *)ppppbStack_58,(ulonglong)ppppbStack_1a8,1);
      }
      pdb_141920a00(&ppppbStack_1f0,pbStack_228,uStack_220,auStack_3f0);
      if (SBORROW8(0,(longlong)ppppbStack_1f0)) {
        ppppbStack_a8 = ppppbStack_1e8;
        if (*_DAT_143ca8e90 != 0) {
          ppppbStack_310 = (byte ****)pdb_140f58250;
          ppppbStack_308 = (byte ****)&ppppbStack_a8;
          ppppbStack_300 = (byte ****)pdb_140f36c20;
          ppppbStack_1a8 = (byte ****)0x0;
          ppppbStack_1a0 = (byte ****)&UNK_1434da25f;
          ppppbStack_198 = (byte ****)0x1d;
          uStack_190 = 0;
          uStack_18c = 0;
          uStack_188 = 0x434da1d9;
          uStack_184 = 1;
          uStack_180 = 0x31;
          uStack_17c = 0;
          uStack_178 = 1;
          puStack_170 = &UNK_1434da25f;
          uStack_168 = 0x1d;
          uStack_160 = 0x7d00000001;
          puStack_158 = &UNK_1434da27c;
          ppppbStack_150 = (byte ****)&ppppbStack_318;
          ppppbStack_318 = &pppbStack_230;
          pdb_140f332f0(&uStack_59,&ppppbStack_1a8);
        }
        pdb_140f36c40(&ppppbStack_a8);
      }
      else {
        ppppbStack_88 = ppppbStack_1d0;
        uStack_80 = uStack_1c8;
        ppppbStack_98 = ppppbStack_1e0;
        ppppbStack_90 = ppppbStack_1d8;
        ppppbStack_a8 = ppppbStack_1f0;
        ppppbStack_a0 = ppppbStack_1e8;
        ppppbStack_1a8 = (byte ****)*puVar1;
        ppppbStack_1a0 = (byte ****)puVar1[1];
        uStack_49 = 1;
        ppppbVar13 = (byte ****)pdb_140a92450(&ppppbStack_3b8,&ppppbStack_1a8);
        if (ppppbVar13 == (byte ****)0x0) {
          *param_7 = 2;
          ppppbStack_2d8 = ppppbStack_1d0;
          uStack_2d0 = uStack_1c8;
          ppppbStack_2e8 = ppppbStack_1e0;
          ppppbStack_2e0 = ppppbStack_1d8;
          ppppbStack_2f8 = ppppbStack_1f0;
          ppppbStack_2f0 = ppppbStack_1e8;
          uStack_2c8 = *puVar1;
          uStack_2c0 = puVar1[1];
          uStack_190 = 0;
          uStack_18c = 0x80000000;
          ppppbStack_1a8 = (byte ****)0x0;
          ppppbStack_1a0 = (byte ****)0x8;
          ppppbStack_198 = (byte ****)0x0;
          uStack_c8 = 0;
          uStack_d0 = 0;
          ppppbStack_300 = (byte ****)0x8000000000000003;
          ppppbStack_318 = (byte ****)0x0;
          ppppbStack_310 = (byte ****)0x8;
          ppppbStack_308 = (byte ****)0x0;
          uStack_238 = 0;
          uStack_240 = 0;
          pdb_1411b0760(param_8,&ppppbStack_318,&UNK_1434da210);
          ppppbStack_1a8 = (byte ****)0x2;
          uStack_49 = 0;
          pdb_140a003a0(param_6,&ppppbStack_1a8);
          *(undefined4 *)param_9[2] = *(undefined4 *)((longlong)param_9 + 0x1c);
          lVar27 = *param_9;
          lVar23 = *(longlong *)(lVar27 + 0x30);
          uVar10 = *(undefined8 *)(lVar27 + 0x40);
          if (lVar23 == *(longlong *)(lVar27 + 0x20)) {
            uStack_49 = 0;
            pdb_142d7e980(lVar27 + 0x20);
          }
          lVar19 = *(longlong *)(lVar27 + 0x28);
          *(undefined8 *)(lVar19 + lVar23 * 0x10) = uVar10;
          *(undefined1 *)(lVar19 + 8 + lVar23 * 0x10) = 8;
          *(longlong *)(lVar27 + 0x30) = lVar23 + 1;
          *(longlong *)(lVar27 + 0x40) = *(longlong *)(lVar27 + 0x40) + 1;
        }
        else {
          pppbStack_70 = (byte ***)ppppbVar13;
          if (*_DAT_143ca8e90 != 0) {
            ppppbStack_318 = &pppbStack_70;
            ppppbStack_310 = (byte ****)pdb_140f36c20;
            ppppbStack_1a8 = (byte ****)0x0;
            ppppbStack_1a0 = (byte ****)&UNK_1434da25f;
            ppppbStack_198 = (byte ****)0x1d;
            uStack_190 = 0;
            uStack_18c = 0;
            uStack_188 = 0x434da1d9;
            uStack_184 = 1;
            uStack_180 = 0x31;
            uStack_17c = 0;
            uStack_178 = 1;
            puStack_170 = &UNK_1434da25f;
            uStack_168 = 0x1d;
            uStack_160 = 0x7900000001;
            puStack_158 = &UNK_1434da228;
            ppppbStack_150 = (byte ****)&ppppbStack_318;
            pdb_140f332f0(&uStack_59,&ppppbStack_1a8);
          }
          uStack_49 = 1;
          pdb_140f36c40(&pppbStack_70);
          ppppbStack_58 = ppppbStack_88;
          pdb_141180fc0();
          pub_1406abac0((byte *)ppppbStack_58,0x140,8);
          if ((byte *****)ppppbStack_a8 != (byte *****)0x0) {
            pub_1406abac0((byte *)ppppbStack_a0,(ulonglong)ppppbStack_a8,1);
          }
        }
      }
      if ((byte ****)pppbStack_230 != (byte ****)0x0) {
        pub_1406abac0(pbStack_228,(ulonglong)pppbStack_230,1);
      }
      pdb_1404cc180(&ppppbStack_3b8);
LAB_14232728b:
      ppppbStack_198 = ppppbStack_1b0;
      ppppbStack_1a8 = ppppbStack_1c0;
      ppppbStack_1a0 = ppppbStack_1b8;
      uVar14 = 0x13;
      uVar10 = pdb_140dc6290(&UNK_1434da2af,0x13);
      pdb_140726690(&ppppbStack_1a8,uVar10,uVar14);
      pbVar12 = pbStack_208;
      goto LAB_1423272d5;
    }
  }
  pdb_142dc7e2a(pppppbVar26,pppppbVar25);
  goto LAB_142327da4;
LAB_1423273ea:
  auVar32[0] = -(auVar2[0] == -1);
  auVar32[1] = -(auVar2[1] == -1);
  auVar32[2] = -(auVar2[2] == -1);
  auVar32[3] = -(auVar2[3] == -1);
  auVar32[4] = -(auVar2[4] == -1);
  auVar32[5] = -(auVar2[5] == -1);
  auVar32[6] = -(auVar2[6] == -1);
  auVar32[7] = -(auVar2[7] == -1);
  auVar32[8] = -(auVar2[8] == -1);
  auVar32[9] = -(auVar2[9] == -1);
  auVar32[10] = -(auVar2[10] == -1);
  auVar32[0xb] = -(auVar2[0xb] == -1);
  auVar32[0xc] = -(auVar2[0xc] == -1);
  auVar32[0xd] = -(auVar2[0xd] == -1);
  auVar32[0xe] = -(auVar2[0xe] == -1);
  auVar32[0xf] = -(auVar2[0xf] == -1);
  if ((((((((((((((((SUB161(auVar32 >> 7,0) & 1) != 0 || (SUB161(auVar32 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar32 >> 0x17,0) & 1) != 0) || (SUB161(auVar32 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar32 >> 0x27,0) & 1) != 0) || (SUB161(auVar32 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar32 >> 0x37,0) & 1) != 0) || (SUB161(auVar32 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar32 >> 0x47,0) & 1) != 0) || (SUB161(auVar32 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar32 >> 0x57,0) & 1) != 0) || (SUB161(auVar32 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar32 >> 0x67,0) & 1) != 0) || (SUB161(auVar32 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar32 >> 0x77,0) & 1) != 0) || auVar32[0xf] < '\0') goto LAB_142327443;
  uVar11 = uVar11 + lVar27 + 0x10;
  lVar27 = lVar27 + 0x10;
  goto LAB_1423273a4;
LAB_142327443:
  pdb_142dc8110(&UNK_142fa60f8,0x16,&UNK_142fa6ad0);
  goto LAB_142327da4;
}

