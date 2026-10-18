// VA 0x141c6a320, PDB extent 5126 bytes
// country_core::systems::save::save_thread::snapshot_gc_thread
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/save/save_thread.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::save::save_thread::snapshot_gc_thread
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/save/save_thread.rs
   Extent: 5126 */

void pdb_141c6a320(longlong *param_1,longlong *param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code ***pppcVar1;
  char *pcVar2;
  byte *arg0;
  code **ppcVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  ulonglong uVar7;
  longlong lVar8;
  code ***pppcVar9;
  byte ****ppppbVar10;
  ushort uVar11;
  undefined4 uVar12;
  byte ****ppppbVar13;
  code **ppcVar14;
  code *pcVar15;
  byte *pbVar16;
  ulonglong uVar17;
  code ***pppcVar18;
  uint uVar19;
  code ***pppcVar20;
  byte bVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined8 uStack_1e8;
  undefined4 uStack_1e0;
  code ****ppppcStack_1d8;
  code *pcStack_1d0;
  undefined8 uStack_1c8;
  longlong lStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 *puStack_1a8;
  longlong *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  code ***pppcStack_188;
  code ***pppcStack_180;
  longlong lStack_178;
  code ***pppcStack_170;
  byte *****pppppbStack_168;
  code *pcStack_160;
  code ****ppppcStack_158;
  code *pcStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  code ****ppppcStack_138;
  byte ****ppppbStack_130;
  longlong lStack_128;
  byte ****ppppbStack_120;
  byte ****ppppbStack_118;
  longlong *plStack_110;
  code ***pppcStack_108;
  code ***pppcStack_100;
  byte ****ppppbStack_f8;
  byte ****ppppbStack_f0;
  byte ****ppppbStack_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 uStack_d8;
  undefined1 uStack_d0;
  undefined7 uStack_cf;
  byte ****ppppbStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  code *****pppppcStack_98;
  byte ****ppppbStack_90;
  code ***pppcStack_88;
  byte ****ppppbStack_80;
  undefined1 uStack_78;
  undefined1 uStack_77;
  undefined1 uStack_76;
  undefined1 uStack_75;
  undefined1 uStack_74;
  undefined1 uStack_73;
  undefined1 uStack_72;
  undefined1 uStack_71;
  undefined8 uStack_70;
  
  uStack_70 = 0xfffffffffffffffe;
  uStack_190 = param_5;
  uStack_75 = 1;
  uStack_76 = 1;
  puStack_1a8 = param_3;
  plStack_1a0 = param_1;
  uStack_198 = param_4;
  plStack_110 = param_2;
  uStack_1e8 = pdb_140f3c9d0();
  uStack_1e0 = SUB84(param_2,0);
  ppppcStack_1d8 = (code ****)*param_3;
  pcStack_1d0 = (code *)param_3[1];
  uStack_1c8 = param_3[2];
  lStack_1c0 = param_3[3];
  uStack_1b8 = param_3[4];
  uStack_1b0 = param_3[5];
  lStack_178 = *param_1;
  pppcStack_188 = (code ***)param_1[1];
  uVar17 = param_1[2] * 0x20;
  pppcVar1 = pppcStack_188 + param_1[2] * 4;
  pppcVar20 = pppcStack_188 + 5;
  pppcStack_108 = (code ***)lStack_178;
  pppcVar9 = pppcStack_188;
  pppcStack_100 = pppcStack_188;
  pppcStack_170 = pppcVar1;
  while (pppcVar9 != pppcVar1) {
    uVar17 = uVar17 - 0x20;
    pppcVar18 = pppcVar9 + 4;
    pppcStack_88 = (code ***)*pppcVar9;
    pppcStack_180 = pppcVar18;
    if (SBORROW8(0,(longlong)pppcStack_88)) {
      if (pppcVar1 != pppcVar18) {
        uVar17 = uVar17 >> 5;
        do {
          if (pppcVar20[-1] != (code **)0x0) {
            pub_1406abac0((byte *)*pppcVar20,(ulonglong)pppcVar20[-1],1);
          }
          pppcVar20 = pppcVar20 + 4;
          uVar17 = uVar17 - 1;
        } while (uVar17 != 0);
      }
      break;
    }
    ppppbVar10 = (byte ****)pppcVar9[1];
    ppcVar3 = pppcVar9[2];
    ppcVar14 = pppcVar9[3];
    ppppbVar13 = (byte ****)pppcVar9[2];
    ppppbStack_f0 = (byte ****)((ulonglong)ppppbStack_f0 & 0xffffffff00000000);
    ppppbStack_e8 = (byte ****)0x0;
    uStack_e0 = 7;
    uStack_d8._4_4_ = 0;
    uStack_d0 = 0;
    uStack_dc = 0;
    uStack_d8._0_4_ = 1;
    uStack_71 = 1;
    ppppbStack_80 = ppppbVar10;
    uVar7 = pdb_140f4a2a0(&ppppbStack_f0,ppppbVar10,ppppbVar13);
    ppppbStack_90 = ppppbVar10;
    if ((uVar7 & 1) == 0) {
      pdb_14007ee60();
      pppcVar9 = (code ***)pub_1406abab0(0x2000,1);
      if (pppcVar9 == (code ***)0x0) {
        pdb_142dc7e2a(1,0x2000);
                    /* WARNING: Does not return */
        pcVar15 = (code *)invalidInstructionException();
        (*pcVar15)();
      }
      ppppbStack_e8 = (byte ****)0x2000;
      uStack_e0 = 0;
      uStack_dc = 0;
      uStack_d8._0_4_ = 0;
      uStack_d8._4_4_ = 0;
      uStack_d0 = 0;
      uStack_cf = 0;
      ppppbStack_c8 = ppppbStack_90;
      uStack_71 = 1;
      ppppbStack_f0 = (byte ****)pppcVar9;
      pdb_14194a9c0(&ppppcStack_138,&ppppbStack_f0);
      if (SBORROW8(0,(longlong)ppppcStack_138)) {
        ppppbStack_f8 = ppppbStack_130;
        if (*_DAT_143ca8e90 != 0) {
          ppppbStack_120 = (byte ****)pdb_140f3ecf0(ppppbStack_80);
          pppppbStack_168 = &ppppbStack_120;
          pcStack_160 = pdb_141c6bed0;
          ppppcStack_158 = (code ****)&ppppbStack_f8;
          pcStack_150 = pdb_140de0640;
          ppppbStack_f0 = (byte ****)0x0;
          ppppbStack_e8 = (byte ****)&UNK_1433a1e13;
          uStack_e0 = 0x28;
          uStack_dc = 0;
          uStack_d8._0_4_ = 0;
          uStack_d8._4_4_ = 0;
          uStack_d0 = 0xb0;
          uStack_cf = 0x1433a1d;
          ppppbStack_c8 = (byte ****)0x33;
          uStack_c0 = 1;
          puStack_b8 = &UNK_1433a1e13;
          uStack_b0 = 0x28;
          uStack_a8 = 0x34600000001;
          puStack_a0 = &UNK_1433a24f2;
          pppppcStack_98 = (code *****)&pppppbStack_168;
          ppppbStack_118 = ppppbVar13;
          pdb_140f332f0(&uStack_73,&ppppbStack_f0);
        }
        ppppbStack_90 = ppppbStack_f8;
        if (*ppppbStack_f8 == (byte ***)0x1) {
          pdb_1404b38e0(ppppbStack_f8 + 1);
        }
        else if ((*ppppbStack_f8 == (byte ***)0x0) && (ppppbStack_f8[2] != (byte ***)0x0)) {
          pub_1406abac0((byte *)ppppbStack_f8[1],(ulonglong)ppppbStack_f8[2],1);
        }
        pub_1406abac0((byte *)ppppbStack_90,0x28,8);
      }
      else {
        uStack_d8 = ppppbStack_130 + lStack_128 * 2;
        ppppbStack_f0 = ppppbStack_130;
        ppppbStack_e8 = ppppbStack_130;
        uStack_e0 = SUB84(ppppcStack_138,0);
        uStack_dc = (undefined4)((ulonglong)ppppcStack_138 >> 0x20);
        uStack_71 = 1;
        pdb_1417a6090(&ppppcStack_1d8,&ppppbStack_f0);
      }
    }
    else {
      ppppbStack_120 = ppppbVar10;
      if (*_DAT_143ca8e90 != 0) {
        ppppcStack_138 = (code ****)pdb_140f3ecf0(ppppbStack_80);
        pppppbStack_168 = (byte *****)&ppppcStack_138;
        pcStack_160 = pdb_141c6bed0;
        ppppcStack_158 = (code ****)&ppppbStack_120;
        pcStack_150 = pdb_140f56800;
        ppppbStack_f0 = (byte ****)0x0;
        ppppbStack_e8 = (byte ****)&UNK_1433a1e13;
        uStack_e0 = 0x28;
        uStack_dc = 0;
        uStack_d8._0_4_ = 0;
        uStack_d8._4_4_ = 0;
        uStack_d0 = 0xb0;
        uStack_cf = 0x1433a1d;
        ppppbStack_c8 = (byte ****)0x33;
        uStack_c0 = 1;
        puStack_b8 = &UNK_1433a1e13;
        uStack_b0 = 0x28;
        uStack_a8 = 0x34e00000001;
        puStack_a0 = &UNK_1433a2522;
        pppppcStack_98 = (code *****)&pppppbStack_168;
        ppppbStack_130 = ppppbVar13;
        pdb_140f332f0(&uStack_73,&ppppbStack_f0);
      }
      uStack_71 = 1;
      pdb_1404b38e0(&ppppbStack_120);
    }
    ppppbStack_f0 = (byte ****)pppcStack_88;
    ppppbStack_e8 = ppppbStack_80;
    uStack_e0 = SUB84(ppcVar3,0);
    uStack_dc = (undefined4)((ulonglong)ppcVar3 >> 0x20);
    uStack_d8._0_4_ = SUB84(ppcVar14,0);
    uStack_d8._4_4_ = (undefined4)((ulonglong)ppcVar14 >> 0x20);
    uStack_71 = 0;
    pdb_141a55310(&pppppbStack_168,&uStack_198,&ppppbStack_f0);
    if (!SBORROW8(0,(longlong)pppppbStack_168)) {
      if (pppppbStack_168 != (byte *****)0x0) {
        pub_1406abac0((byte *)pcStack_160,(ulonglong)pppppbStack_168,1);
      }
      if (2 < *_DAT_143ca8e90) {
        ppppbStack_f0 = (byte ****)0x0;
        ppppbStack_e8 = (byte ****)&UNK_1433a1e13;
        uStack_e0 = 0x28;
        uStack_dc = 0;
        uStack_d8._0_4_ = 0;
        uStack_d8._4_4_ = 0;
        uStack_d0 = 0xb0;
        uStack_cf = 0x1433a1d;
        ppppbStack_c8 = (byte ****)0x33;
        uStack_c0 = 3;
        puStack_b8 = &UNK_1433a1e13;
        uStack_b0 = 0x28;
        uStack_a8 = 0x35a00000001;
        puStack_a0 = &UNK_1433a2543;
        pppppcStack_98 = (code *****)0x9d;
        uStack_71 = 0;
        pdb_140f332f0(&uStack_73,&ppppbStack_f0);
      }
      if (pppcVar1 != pppcVar18) {
        uVar17 = uVar17 >> 5;
        do {
          if (pppcVar20[-1] != (code **)0x0) {
            pub_1406abac0((byte *)*pppcVar20,(ulonglong)pppcVar20[-1],1);
          }
          pppcVar20 = pppcVar20 + 4;
          uVar17 = uVar17 - 1;
        } while (uVar17 != 0);
      }
      if (pppcStack_108 != (code ***)0x0) {
        pub_1406abac0((byte *)pppcStack_100,(longlong)pppcStack_108 << 5,8);
      }
      if (pcStack_1d0 != (code *)0x0) {
        uVar17 = (longlong)pcStack_1d0 * 8 + 0x17U & 0xfffffffffffffff0;
        if (pcStack_1d0 + uVar17 + 0x11 != (code *)0x0) {
          pub_1406abac0((byte *)((longlong)ppppcStack_1d8 - uVar17),
                        (ulonglong)(pcStack_1d0 + uVar17 + 0x11),0x10);
        }
      }
      uStack_77 = 1;
      uStack_78 = 0;
      pdb_140969960(&uStack_198);
      arg0 = (byte *)plStack_110[1];
      lVar8 = plStack_110[2];
      if (lVar8 != 0) {
        pbVar16 = arg0 + 8;
        do {
          if (*(ulonglong *)(pbVar16 + -8) != 0) {
            pub_1406abac0(*(byte **)pbVar16,*(ulonglong *)(pbVar16 + -8),1);
          }
          pbVar16 = pbVar16 + 0x20;
          lVar8 = lVar8 + -1;
        } while (lVar8 != 0);
      }
      if (*plStack_110 == 0) {
        return;
      }
      pub_1406abac0(arg0,*plStack_110 << 5,8);
      return;
    }
    pppcVar20 = pppcVar20 + 4;
    pppcVar9 = pppcVar18;
  }
  if (pppcStack_108 != (code ***)0x0) {
    pub_1406abac0((byte *)pppcStack_100,(longlong)pppcStack_108 << 5,8);
  }
  lStack_178 = *plStack_110;
  pppcStack_188 = (code ***)plStack_110[1];
  uStack_148 = uStack_1b8;
  uStack_140 = uStack_1b0;
  ppppcStack_158 = (code ****)uStack_1c8;
  pcStack_150 = (code *)lStack_1c0;
  pppppbStack_168 = (byte *****)ppppcStack_1d8;
  pcStack_160 = pcStack_1d0;
  uVar17 = plStack_110[2] * 0x20;
  pppcVar1 = pppcStack_188 + plStack_110[2] * 4;
  pppcVar20 = pppcStack_188 + 5;
  pppcVar9 = pppcStack_188;
  pppcStack_170 = pppcVar1;
  pppcStack_108 = pppcStack_188;
  ppppbStack_90 = (byte ****)lStack_178;
  do {
    uVar17 = uVar17 - 0x20;
    if (pppcVar9 == pppcVar1) {
LAB_141c6af82:
      if (ppppbStack_90 != (byte ****)0x0) {
        pub_1406abac0((byte *)pppcStack_108,(longlong)ppppbStack_90 << 5,8);
      }
      pcVar15 = (code *)0x0;
      if (pcStack_160 != (code *)0x0) {
        uVar17 = (longlong)pcStack_160 * 8 + 0x17U & 0xfffffffffffffff0;
        pcVar15 = pcStack_160 + uVar17 + 0x11;
        if (pcVar15 != (code *)0x0) {
          pub_1406abac0((byte *)((longlong)pppppbStack_168 - uVar17),(ulonglong)pcVar15,0x10);
        }
      }
      uVar12 = SUB84(pcVar15,0);
      if (2 < *_DAT_143ca8e90) {
        uStack_74 = 0;
        pppcStack_188 = (code ***)pdb_140f3cb70(&uStack_1e8);
        pppcStack_180 = (code ***)CONCAT44(pppcStack_180._4_4_,uVar12);
        pcStack_160 = pdb_140f72840;
        ppppbStack_f0 = (byte ****)0x0;
        ppppbStack_e8 = (byte ****)&UNK_1433a1e13;
        uStack_e0 = 0x28;
        uStack_dc = 0;
        uStack_d8._0_4_ = 0;
        uStack_d8._4_4_ = 0;
        uStack_d0 = 0xb0;
        uStack_cf = 0x1433a1d;
        ppppbStack_c8 = (byte ****)0x33;
        uStack_c0 = 3;
        puStack_b8 = &UNK_1433a1e13;
        uStack_b0 = 0x28;
        uStack_a8 = 0x36300000001;
        puStack_a0 = &UNK_1433a24d0;
        pppppcStack_98 = (code *****)&pppppbStack_168;
        uStack_74 = 0;
        pppppbStack_168 = (byte *****)&pppcStack_188;
        pdb_140f332f0(&uStack_73,&ppppbStack_f0);
      }
      uStack_77 = 0;
      uStack_78 = 0;
      pdb_140969960(&uStack_198);
      return;
    }
    pppcVar18 = pppcVar9 + 4;
    pppcStack_180 = pppcVar18;
    if (SBORROW8(0,(longlong)*pppcVar9)) {
      if (pppcVar1 != pppcVar18) {
        uVar17 = uVar17 >> 5;
        do {
          if (pppcVar20[-1] != (code **)0x0) {
            pub_1406abac0((byte *)*pppcVar20,(ulonglong)pppcVar20[-1],1);
          }
          pppcVar20 = pppcVar20 + 4;
          uVar17 = uVar17 - 1;
        } while (uVar17 != 0);
      }
      goto LAB_141c6af82;
    }
    pppcStack_88 = (code ***)pppcVar9[1];
    ppcVar3 = pppcVar9[2];
    uStack_72 = 1;
    ppcVar14 = ppcVar3;
    ppppbStack_80 = (byte ****)*pppcVar9;
    lVar8 = pdb_140f3ec80(pppcStack_88,ppcVar3);
    if (lVar8 == 0) {
LAB_141c6ab65:
      if (ppppbStack_80 != (byte ****)0x0) {
        pub_1406abac0((byte *)pppcStack_88,(ulonglong)ppppbStack_80,1);
      }
    }
    else {
      uStack_72 = 1;
      pdb_140f69110(&ppppbStack_f0,lVar8,ppcVar14);
      if ((((char)ppppbStack_f0 != '\0') || (CONCAT44(uStack_dc,uStack_e0) != 8)) ||
         (*ppppbStack_e8 != (byte ***)0x746f687370616e73)) goto LAB_141c6ab65;
      uStack_72 = 1;
      ppcVar14 = ppcVar3;
      lVar8 = pdb_140f3ee10(pppcStack_88,ppcVar3);
      if (lVar8 == 0) goto LAB_141c6ab65;
      uStack_72 = 1;
      pdb_140f69110(&ppppbStack_f0,lVar8,ppcVar14);
      if ((char)ppppbStack_f0 != '\0') goto LAB_141c6ab65;
      ppppbStack_118 = (byte ****)CONCAT44(uStack_dc,uStack_e0);
      ppppbStack_120 = ppppbStack_e8;
      if (ppppbStack_118 != (byte ****)0x0) {
        if (ppppbStack_118 == (byte ****)0x1) {
          cVar6 = *(char *)ppppbStack_e8;
          if ((cVar6 == '+') || (cVar6 == '-')) goto LAB_141c6ad78;
        }
        else {
          cVar6 = *(char *)ppppbStack_e8;
        }
        ppppbVar10 = (byte ****)(ulonglong)(cVar6 == '+');
        if ((ulonglong)((longlong)ppppbStack_118 - (longlong)ppppbVar10) < 0x11) {
          if (ppppbStack_118 == ppppbVar10) {
            pppcVar9 = (code ***)0x0;
          }
          else {
            lVar8 = 0;
            pppcVar9 = (code ***)0x0;
            do {
              uVar19 = (byte)((char *)((longlong)ppppbStack_e8 + (longlong)ppppbVar10))[lVar8] -
                       0x30;
              if (9 < uVar19) goto LAB_141c6ad78;
              pppcVar9 = (code ***)((ulonglong)uVar19 + (longlong)pppcVar9 * 10);
              lVar8 = lVar8 + 1;
            } while (lVar8 != (longlong)ppppbStack_118 + -(longlong)ppppbVar10);
          }
LAB_141c6acb3:
          ppppbStack_f0 = (byte ****)pppcVar9;
          if (pcStack_150 != (code *)0x0) {
            uStack_72 = 1;
            pppcStack_100 = pppcVar9;
            uVar7 = pdb_1400af0a0(&uStack_148,&ppppbStack_f0);
            bVar21 = (byte)(uVar7 >> 0x39);
            auVar22 = ZEXT216(CONCAT11(bVar21,bVar21));
            auVar22 = pshuflw(auVar22,auVar22,0);
            lVar8 = 0;
            while( true ) {
              uVar7 = uVar7 & (ulonglong)pcStack_160;
              pcVar2 = (char *)((longlong)pppppbStack_168 + uVar7);
              auVar24[0] = -(*pcVar2 == auVar22[0]);
              auVar24[1] = -(pcVar2[1] == auVar22[1]);
              auVar24[2] = -(pcVar2[2] == auVar22[2]);
              auVar24[3] = -(pcVar2[3] == auVar22[3]);
              auVar24[4] = -(pcVar2[4] == auVar22[4]);
              auVar24[5] = -(pcVar2[5] == auVar22[5]);
              auVar24[6] = -(pcVar2[6] == auVar22[6]);
              auVar24[7] = -(pcVar2[7] == auVar22[7]);
              auVar24[8] = -(pcVar2[8] == auVar22[0]);
              auVar24[9] = -(pcVar2[9] == auVar22[1]);
              auVar24[10] = -(pcVar2[10] == auVar22[2]);
              auVar24[0xb] = -(pcVar2[0xb] == auVar22[3]);
              auVar24[0xc] = -(pcVar2[0xc] == auVar22[4]);
              auVar24[0xd] = -(pcVar2[0xd] == auVar22[5]);
              auVar24[0xe] = -(pcVar2[0xe] == auVar22[6]);
              auVar24[0xf] = -(pcVar2[0xf] == auVar22[7]);
              uVar11 = (ushort)(SUB161(auVar24 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar24 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar24 >> 0x17,0) & 1) << 2 |
                       (ushort)(SUB161(auVar24 >> 0x1f,0) & 1) << 3 |
                       (ushort)(SUB161(auVar24 >> 0x27,0) & 1) << 4 |
                       (ushort)(SUB161(auVar24 >> 0x2f,0) & 1) << 5 |
                       (ushort)(SUB161(auVar24 >> 0x37,0) & 1) << 6 |
                       (ushort)(SUB161(auVar24 >> 0x3f,0) & 1) << 7 |
                       (ushort)(SUB161(auVar24 >> 0x47,0) & 1) << 8 |
                       (ushort)(SUB161(auVar24 >> 0x4f,0) & 1) << 9 |
                       (ushort)(SUB161(auVar24 >> 0x57,0) & 1) << 10 |
                       (ushort)(SUB161(auVar24 >> 0x5f,0) & 1) << 0xb |
                       (ushort)(SUB161(auVar24 >> 0x67,0) & 1) << 0xc |
                       (ushort)(SUB161(auVar24 >> 0x6f,0) & 1) << 0xd |
                       (ushort)(SUB161(auVar24 >> 0x77,0) & 1) << 0xe |
                       (ushort)(auVar24[0xf] >> 7) << 0xf;
              uVar19 = (uint)uVar11;
              while (uVar11 != 0) {
                uVar4 = 0;
                for (uVar5 = uVar19; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
                  uVar4 = uVar4 + 1;
                }
                if ((byte ****)pppcStack_100 ==
                    pppppbStack_168[-1 - (uVar4 + uVar7 & (ulonglong)pcStack_160)])
                goto LAB_141c6ab65;
                uVar11 = (ushort)(uVar19 - 1) & (ushort)uVar19;
                uVar19 = CONCAT22((short)(uVar19 - 1 >> 0x10),uVar11);
              }
              auVar23[0] = -(*pcVar2 == -1);
              auVar23[1] = -(pcVar2[1] == -1);
              auVar23[2] = -(pcVar2[2] == -1);
              auVar23[3] = -(pcVar2[3] == -1);
              auVar23[4] = -(pcVar2[4] == -1);
              auVar23[5] = -(pcVar2[5] == -1);
              auVar23[6] = -(pcVar2[6] == -1);
              auVar23[7] = -(pcVar2[7] == -1);
              auVar23[8] = -(pcVar2[8] == -1);
              auVar23[9] = -(pcVar2[9] == -1);
              auVar23[10] = -(pcVar2[10] == -1);
              auVar23[0xb] = -(pcVar2[0xb] == -1);
              auVar23[0xc] = -(pcVar2[0xc] == -1);
              auVar23[0xd] = -(pcVar2[0xd] == -1);
              auVar23[0xe] = -(pcVar2[0xe] == -1);
              auVar23[0xf] = -(pcVar2[0xf] == -1);
              if ((((((((((((((((SUB161(auVar23 >> 7,0) & 1) != 0 ||
                               (SUB161(auVar23 >> 0xf,0) & 1) != 0) ||
                              (SUB161(auVar23 >> 0x17,0) & 1) != 0) ||
                             (SUB161(auVar23 >> 0x1f,0) & 1) != 0) ||
                            (SUB161(auVar23 >> 0x27,0) & 1) != 0) ||
                           (SUB161(auVar23 >> 0x2f,0) & 1) != 0) ||
                          (SUB161(auVar23 >> 0x37,0) & 1) != 0) ||
                         (SUB161(auVar23 >> 0x3f,0) & 1) != 0) ||
                        (SUB161(auVar23 >> 0x47,0) & 1) != 0) ||
                       (SUB161(auVar23 >> 0x4f,0) & 1) != 0) || (SUB161(auVar23 >> 0x57,0) & 1) != 0
                      ) || (SUB161(auVar23 >> 0x5f,0) & 1) != 0) ||
                    (SUB161(auVar23 >> 0x67,0) & 1) != 0) || (SUB161(auVar23 >> 0x6f,0) & 1) != 0)
                  || (SUB161(auVar23 >> 0x77,0) & 1) != 0) || auVar23[0xf] < '\0') break;
              uVar7 = uVar7 + lVar8 + 0x10;
              lVar8 = lVar8 + 0x10;
            }
          }
        }
        else {
          lVar8 = 0;
          pppcVar9 = (code ***)0x0;
          while( true ) {
            if (lVar8 == (longlong)ppppbStack_118 + -(longlong)ppppbVar10) goto LAB_141c6acb3;
            auVar22._8_8_ = 0;
            auVar22._0_8_ = pppcVar9;
            uVar7 = SUB168(auVar22 * ZEXT816(10),0);
            if (SUB168(auVar22 * ZEXT816(10),8) != 0) break;
            uVar19 = (byte)((char *)((longlong)ppppbStack_e8 + (longlong)ppppbVar10))[lVar8] - 0x30;
            pppcVar9 = (code ***)(uVar7 + uVar19);
            if ((9 < uVar19) || (lVar8 = lVar8 + 1, CARRY8(uVar7,(ulonglong)uVar19))) break;
          }
        }
      }
LAB_141c6ad78:
      if (3 < *_DAT_143ca8e90) {
        ppppcStack_138 = (code ****)&ppppbStack_120;
        ppppbStack_130 = (byte ****)pdb_1402ed420;
        ppppbStack_f0 = (byte ****)0x0;
        ppppbStack_e8 = (byte ****)&UNK_1433a1e13;
        uStack_e0 = 0x28;
        uStack_dc = 0;
        uStack_d8._0_4_ = 0;
        uStack_d8._4_4_ = 0;
        uStack_d0 = 0xb0;
        uStack_cf = 0x1433a1d;
        ppppbStack_c8 = (byte ****)0x33;
        uStack_c0 = 4;
        puStack_b8 = &UNK_1433a1e13;
        uStack_b0 = 0x28;
        uStack_a8 = 0x37c00000001;
        puStack_a0 = &UNK_1433a2664;
        pppppcStack_98 = &ppppcStack_138;
        uStack_72 = 1;
        pdb_140f332f0(&uStack_73,&ppppbStack_f0);
      }
      ppppbVar10 = (byte ****)pdb_140f4eda0(pppcStack_88,ppcVar3);
      if (ppppbStack_80 != (byte ****)0x0) {
        pub_1406abac0((byte *)pppcStack_88,(ulonglong)ppppbStack_80,1);
      }
      if (ppppbVar10 != (byte ****)0x0) {
        ppppbStack_f8 = ppppbVar10;
        if (1 < *_DAT_143ca8e90) {
          ppppcStack_138 = (code ****)&ppppbStack_f8;
          ppppbStack_130 = (byte ****)pdb_140f56800;
          ppppbStack_f0 = (byte ****)0x0;
          ppppbStack_e8 = (byte ****)&UNK_1433a1e13;
          uStack_e0 = 0x28;
          uStack_dc = 0;
          uStack_d8._0_4_ = 0;
          uStack_d8._4_4_ = 0;
          uStack_d0 = 0xb0;
          uStack_cf = 0x1433a1d;
          ppppbStack_c8 = (byte ****)0x33;
          uStack_c0 = 2;
          puStack_b8 = &UNK_1433a1e13;
          uStack_b0 = 0x28;
          uStack_a8 = 0x37e00000001;
          puStack_a0 = &UNK_1433a2686;
          pppppcStack_98 = &ppppcStack_138;
          pdb_140f332f0(&uStack_73,&ppppbStack_f0);
        }
        uStack_72 = 0;
        pdb_1404b38e0(&ppppbStack_f8);
      }
    }
    pppcVar20 = pppcVar20 + 4;
    pppcVar9 = pppcVar18;
  } while( true );
}

