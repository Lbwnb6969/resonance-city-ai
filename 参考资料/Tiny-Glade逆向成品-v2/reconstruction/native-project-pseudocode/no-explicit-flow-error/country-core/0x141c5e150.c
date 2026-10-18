// VA 0x141c5e150, PDB extent 4730 bytes
// country_core::systems::save::save_thread::save_thread
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/save/save_thread.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::save::save_thread::save_thread
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/save/save_thread.rs
   Extent: 4730 */

void pdb_141c5e150(longlong param_1,undefined8 ****param_2,undefined8 param_3,undefined8 param_4,
                  longlong *param_5)

{
  code cVar1;
  undefined1 auVar2 [16];
  int iVar3;
  uint uVar4;
  undefined8 ***pppuVar5;
  char cVar6;
  longlong *plVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  longlong lVar11;
  ulonglong uVar12;
  code *pcVar13;
  undefined1 (*pauVar14) [16];
  ulonglong uVar15;
  longlong lVar16;
  undefined8 ****ppppuVar17;
  undefined1 (*pauVar18) [16];
  uint uVar19;
  code *pcVar20;
  undefined8 *puVar21;
  bool bVar22;
  undefined8 ***pppuStack_7c8;
  undefined8 uStack_7c0;
  undefined1 auStack_7b8 [8];
  undefined8 uStack_7b0;
  undefined8 uStack_7a8;
  longlong alStack_740 [10];
  undefined8 auStack_6f0 [65];
  undefined1 auStack_4e8 [32];
  undefined1 auStack_4c8 [32];
  undefined8 ***pppuStack_4a8;
  code *pcStack_4a0;
  undefined8 ***pppuStack_498;
  undefined *puStack_490;
  undefined8 ***pppuStack_488;
  code *pcStack_480;
  undefined8 ***pppuStack_478;
  undefined *puStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined *puStack_458;
  undefined8 ***pppuStack_450;
  undefined1 (*pauStack_188) [16];
  longlong lStack_180;
  undefined8 uStack_178;
  longlong lStack_170;
  longlong lStack_168;
  undefined8 ***pppuStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 ***pppuStack_148;
  char cStack_140;
  undefined7 uStack_13f;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  longlong lStack_108;
  undefined8 ***pppuStack_100;
  undefined8 ***pppuStack_f8;
  code *pcStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 ***pppuStack_98;
  code *pcStack_90;
  undefined8 ***pppuStack_88;
  undefined8 ***pppuStack_80;
  code *pcStack_78;
  undefined8 ***pppuStack_70;
  code *pcStack_60;
  code *pcStack_58;
  undefined1 uStack_4b;
  undefined1 uStack_4a;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  pppuStack_7c8 = (undefined8 ****)0x3;
  uStack_158 = param_3;
  uStack_150 = param_4;
  lStack_108 = param_1;
  pppuStack_100 = param_2;
  plVar7 = (longlong *)pdb_140f3bda0();
  if ((char)plVar7[2] == '\x01') {
    lStack_168 = *plVar7;
    param_2 = (undefined8 ****)plVar7[1];
  }
  else {
    lStack_168 = pdb_140f4fd10();
    *plVar7 = lStack_168;
    plVar7[1] = (longlong)param_2;
    *(undefined1 *)(plVar7 + 2) = 1;
  }
  *plVar7 = lStack_168 + 1;
  uStack_178 = _DAT_1433a1da0;
  lStack_170 = _UNK_1433a1da8;
  pauStack_188 = _DAT_1433a1d90;
  lStack_180 = _UNK_1433a1d98;
  pppuStack_160 = param_2;
  uVar8 = pdb_140f3c9d0();
  uVar15 = (ulonglong)param_2 & 0xffffffff;
  pppuStack_98 = (undefined8 ****)0x0;
  pcStack_90 = (code *)0x8;
  pppuStack_88 = (undefined8 ****)0x0;
  do {
    uVar19 = (uint)param_2;
    uVar9 = pdb_140f3c9d0();
    bVar22 = (uint)uVar15 < uVar19;
    if (uVar9 != uVar8) {
      bVar22 = uVar8 < uVar9;
    }
    if (bVar22) {
      pppuStack_80 = (undefined8 ****)0x0;
      pcStack_78 = (code *)0x8;
      pppuStack_70 = (undefined8 ****)0x0;
      if (((int)pppuStack_7c8 != 3) && (alStack_740[0] != 0)) {
        uStack_49 = 1;
        pdb_140c6fb10(auStack_7b8);
        if (alStack_740[0] != 0) {
          uStack_49 = 1;
          pdb_140f3e010(&pppuStack_148,uStack_7b0,uStack_7a8);
          pdb_141c5e050(&pppuStack_f8,alStack_740);
          pppuVar5 = pppuStack_70;
          pcStack_4a0 = (code *)CONCAT71(uStack_13f,cStack_140);
          pppuStack_498 = (undefined8 ***)CONCAT44(uStack_134,uStack_138);
          puStack_490 = (undefined *)CONCAT44(uStack_12c,uStack_130);
          pppuStack_4a8 = pppuStack_148;
          pppuStack_478 = uStack_e8;
          puStack_470 = uStack_e0;
          pppuStack_488 = pppuStack_f8;
          pcStack_480 = pcStack_f0;
          if (pppuStack_70 == pppuStack_80) {
            pdb_142d7ee50(&pppuStack_80);
          }
          lVar11 = (longlong)pppuVar5 * 0x40;
          *(undefined8 ****)(pcStack_78 + lVar11 + 0x30) = pppuStack_478;
          *(undefined **)(pcStack_78 + lVar11 + 0x30 + 8) = puStack_470;
          *(undefined8 ****)(pcStack_78 + lVar11 + 0x20) = pppuStack_488;
          *(code **)(pcStack_78 + lVar11 + 0x20 + 8) = pcStack_480;
          *(undefined8 ****)(pcStack_78 + lVar11 + 0x10) = pppuStack_498;
          *(undefined **)(pcStack_78 + lVar11 + 0x10 + 8) = puStack_490;
          *(undefined8 ****)(pcStack_78 + lVar11) = pppuStack_4a8;
          *(code **)(pcStack_78 + lVar11 + 8) = pcStack_4a0;
          pppuStack_70 = (undefined8 ***)((longlong)pppuVar5 + 1);
        }
      }
      plVar7 = param_5;
      pcVar20 = (code *)(param_5 + 2);
      LOCK();
      bVar22 = (char)param_5[2] == '\0';
      if (bVar22) {
        *(char *)(param_5 + 2) = '\x01';
      }
      UNLOCK();
      if (!bVar22) {
        uStack_49 = 1;
        pdb_142dbd1a0(pcVar20);
      }
      uStack_49 = 1;
      pdb_140e9a150(pcVar20);
      pcStack_58 = pcVar20;
      pdb_1415dfae0(plVar7 + 3,&pppuStack_80);
      uVar8 = pdb_140f5a1d0(uVar9,uVar19,1,0);
      ppppuVar17 = (undefined8 ****)pppuStack_88;
      uVar15 = (ulonglong)uVar19;
      if ((pppuStack_70 != pppuStack_88) ||
         (cVar6 = pdb_1417ce430(pcStack_78,pcStack_90), cVar6 == '\0')) {
        if ((undefined8 ****)pppuStack_70 == (undefined8 ****)0x0) {
          if (2 < *_DAT_143ca8e90) {
            pppuStack_4a8 = (undefined8 ****)0x0;
            pcStack_4a0 = (code *)&UNK_1433a1e13;
            pppuStack_498 = (undefined8 ****)0x28;
            puStack_490 = (undefined *)0x0;
            pppuStack_488 = (undefined8 ***)&UNK_1433a1db0;
            pcStack_480 = (code *)0x33;
            pppuStack_478 = (undefined8 ****)0x3;
            puStack_470 = &UNK_1433a1e13;
            uStack_468 = 0x28;
            uStack_460 = 0x18600000001;
            puStack_458 = &UNK_1433a1e3b;
            pppuStack_450 = (undefined8 ****)0x39;
            pdb_140f332f0(&uStack_4b,&pppuStack_4a8);
          }
        }
        else if (*_DAT_143ca8e90 != 0) {
          pppuStack_148 = pppuStack_70;
          pppuStack_f8 = &pppuStack_148;
          pcStack_f0 = pdb_140f72a40;
          pppuStack_4a8 = (undefined8 ****)0x0;
          pcStack_4a0 = (code *)&UNK_1433a1e13;
          pppuStack_498 = (undefined8 ****)0x28;
          puStack_490 = (undefined *)0x0;
          pppuStack_488 = (undefined8 ***)&UNK_1433a1db0;
          pcStack_480 = (code *)0x33;
          pppuStack_478 = (undefined8 ****)0x1;
          puStack_470 = &UNK_1433a1e13;
          uStack_468 = 0x28;
          uStack_460 = 0x18800000001;
          puStack_458 = &UNK_1433a1de4;
          pppuStack_450 = &pppuStack_f8;
          pdb_140f332f0(&uStack_4b,&pppuStack_4a8);
        }
        pdb_1415e61e0(&pppuStack_4a8,&pppuStack_80);
        pdb_141a54f70(&pppuStack_f8,&uStack_158,&pppuStack_4a8);
        pcVar13 = pcStack_90;
        pcVar20 = pcStack_f0;
        pppuVar5 = pppuStack_f8;
        if (SBORROW8(0,(longlong)pppuStack_f8)) {
          pppuStack_498 = pppuStack_70;
          pppuStack_4a8 = pppuStack_80;
          pcStack_4a0 = pcStack_78;
          if (ppppuVar17 != (undefined8 ****)0x0) {
            pcVar20 = pcStack_90 + 0x30;
            do {
              if (*(ulonglong *)(pcVar20 + -0x30) != 0) {
                pub_1406abac0(*(byte **)(pcVar20 + -0x28),*(ulonglong *)(pcVar20 + -0x30),1);
              }
              if (*(ulonglong *)(pcVar20 + -8) != 0) {
                pub_1406abac0(*(byte **)pcVar20,*(ulonglong *)(pcVar20 + -8),1);
              }
              pcVar20 = pcVar20 + 0x40;
              ppppuVar17 = (undefined8 ****)((longlong)ppppuVar17 + -1);
            } while (ppppuVar17 != (undefined8 ****)0x0);
          }
          if ((undefined8 ****)pppuStack_98 != (undefined8 ****)0x0) {
            pub_1406abac0((byte *)pcVar13,(longlong)pppuStack_98 << 6,8);
          }
          pcVar20 = pcStack_58;
          pppuStack_88 = pppuStack_498;
          pppuStack_98 = pppuStack_4a8;
          pcStack_90 = pcStack_4a0;
          uStack_49 = 0;
          pdb_140e9a350();
          LOCK();
          cVar1 = *pcVar20;
          if (cVar1 == (code)0x1) {
            *pcVar20 = (code)0x0;
          }
          UNLOCK();
          if (cVar1 != (code)0x1) {
            uStack_49 = 0;
            pdb_142dbcef0(pcVar20,0);
          }
          goto LAB_141c5e850;
        }
        if (uStack_e8 != (undefined8 ****)0x0) {
          pcVar13 = pcStack_f0 + 0x30;
          ppppuVar17 = uStack_e8;
          do {
            if (*(ulonglong *)(pcVar13 + -0x30) != 0) {
              pub_1406abac0(*(byte **)(pcVar13 + -0x28),*(ulonglong *)(pcVar13 + -0x30),1);
            }
            if (*(ulonglong *)(pcVar13 + -8) != 0) {
              pub_1406abac0(*(byte **)pcVar13,*(ulonglong *)(pcVar13 + -8),1);
            }
            pcVar13 = pcVar13 + 0x40;
            ppppuVar17 = (undefined8 ****)((longlong)ppppuVar17 + -1);
          } while (ppppuVar17 != (undefined8 ****)0x0);
        }
        if ((undefined8 ****)pppuVar5 != (undefined8 ****)0x0) {
          pub_1406abac0((byte *)pcVar20,(longlong)pppuVar5 << 6,8);
        }
      }
      pcVar20 = pcStack_58;
      uStack_49 = 1;
      pdb_140e9a350();
      LOCK();
      cVar1 = *pcVar20;
      if (cVar1 == (code)0x1) {
        *pcVar20 = (code)0x0;
      }
      UNLOCK();
      if (cVar1 != (code)0x1) {
        uStack_49 = 1;
        pdb_142dbcef0(pcVar20,0);
      }
      pcVar20 = pcStack_78;
      if ((undefined8 ****)pppuStack_70 != (undefined8 ****)0x0) {
        pcVar13 = pcStack_78 + 0x30;
        ppppuVar17 = (undefined8 ****)pppuStack_70;
        do {
          if (*(ulonglong *)(pcVar13 + -0x30) != 0) {
            pub_1406abac0(*(byte **)(pcVar13 + -0x28),*(ulonglong *)(pcVar13 + -0x30),1);
          }
          if (*(ulonglong *)(pcVar13 + -8) != 0) {
            pub_1406abac0(*(byte **)pcVar13,*(ulonglong *)(pcVar13 + -8),1);
          }
          pcVar13 = pcVar13 + 0x40;
          ppppuVar17 = (undefined8 ****)((longlong)ppppuVar17 + -1);
        } while (ppppuVar17 != (undefined8 ****)0x0);
      }
      if ((undefined8 ****)pppuStack_80 != (undefined8 ****)0x0) {
        pub_1406abac0((byte *)pcVar20,(longlong)pppuStack_80 << 6,8);
      }
    }
LAB_141c5e850:
    if ((undefined8 ****)pppuStack_7c8 != (undefined8 ****)0x3) {
      if ((undefined8 ****)pppuStack_7c8 == (undefined8 ****)0x0) {
        pdb_141a9cb80(&pppuStack_148,uStack_7c0);
      }
      else if ((int)pppuStack_7c8 == 1) {
        pdb_141a98360(&pppuStack_148);
      }
      else {
        pdb_141c16840(&pppuStack_148);
      }
      if (!SBORROW8(0,(longlong)pppuStack_148)) {
        pcStack_f0 = (code *)CONCAT71(uStack_13f,cStack_140);
        uStack_e8 = (undefined8 ****)CONCAT44(uStack_134,uStack_138);
        uStack_e0 = (undefined *)CONCAT44(uStack_12c,uStack_130);
        pppuStack_f8 = pppuStack_148;
        uVar10 = pdb_1417c4360(auStack_4c8,&pppuStack_f8);
        pdb_140cab7d0(&pppuStack_4a8,auStack_4e8,uVar10);
        if (SBORROW8(0,(longlong)pppuStack_4a8)) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc83b0(&UNK_1433a1e57,0x44,&UNK_1433a1ea0);
        }
        if ((undefined8 ****)pppuStack_4a8 != (undefined8 ****)0x0) {
          pub_1406abac0((byte *)pcStack_4a0,(ulonglong)pppuStack_4a8,1);
        }
        if ((undefined8 ****)pppuStack_f8 != (undefined8 ****)0x0) {
          pub_1406abac0((byte *)pcStack_f0,(ulonglong)pppuStack_f8,1);
        }
      }
    }
    pppuStack_4a8 = &pppuStack_7c8;
    pdb_1417bcc50(&pauStack_188,&pppuStack_4a8);
    if (lStack_108 == 2) {
      ppppuVar17 = (undefined8 ****)pppuStack_100;
      pdb_141c16d20(&pppuStack_148);
      uVar19 = (uint)ppppuVar17;
    }
    else if ((int)lStack_108 == 1) {
      ppppuVar17 = (undefined8 ****)pppuStack_100;
      pdb_141a97ad0(&pppuStack_148);
      uVar19 = (uint)ppppuVar17;
    }
    else {
      ppppuVar17 = (undefined8 ****)pppuStack_100;
      pdb_141a9ce30(&pppuStack_148);
      uVar19 = (uint)ppppuVar17;
    }
    pppuVar5 = pppuStack_7c8;
    plVar7 = param_5;
    if ((int)pppuStack_148 == 0xb) {
      if (cStack_140 != '\0') {
        pppuStack_7c8 = (undefined8 ***)0x3;
        if ((undefined8 ****)pppuVar5 != (undefined8 ****)0x3) {
          pppuStack_4a8 = pppuVar5;
          pub_142e32760(&pcStack_4a0,&uStack_7c0,0x318);
          cVar6 = pdb_141c5fe60(&pppuStack_4a8);
          if ((cVar6 == '\0') && (*_DAT_143ca8e90 != 0)) {
            pppuStack_f8 = (undefined8 ****)0x0;
            pcStack_f0 = (code *)&UNK_1433a1e13;
            uStack_e8 = (undefined8 ****)0x28;
            uStack_e0 = (undefined *)0x0;
            uStack_d8 = (undefined8 ****)&UNK_1433a1db0;
            uStack_d0 = (code *)0x33;
            uStack_c8 = (undefined8 ****)0x1;
            uStack_c0 = &UNK_1433a1e13;
            uStack_b8 = 0x28;
            uStack_b0 = 0x1df00000001;
            puStack_a8 = &UNK_1433a1f00;
            uStack_a0 = 0x67;
            pdb_140f332f0(&uStack_4b,&pppuStack_f8);
          }
          pdb_1409993e0(&pppuStack_4a8);
        }
        pcVar20 = pcStack_90;
        if ((undefined8 ****)pppuStack_88 != (undefined8 ****)0x0) {
          pcVar13 = pcStack_90 + 0x30;
          ppppuVar17 = (undefined8 ****)pppuStack_88;
          do {
            if (*(ulonglong *)(pcVar13 + -0x30) != 0) {
              pub_1406abac0(*(byte **)(pcVar13 + -0x28),*(ulonglong *)(pcVar13 + -0x30),1);
            }
            if (*(ulonglong *)(pcVar13 + -8) != 0) {
              pub_1406abac0(*(byte **)pcVar13,*(ulonglong *)(pcVar13 + -8),1);
            }
            pcVar13 = pcVar13 + 0x40;
            ppppuVar17 = (undefined8 ****)((longlong)ppppuVar17 + -1);
          } while (ppppuVar17 != (undefined8 ****)0x0);
        }
        if ((undefined8 ****)pppuStack_98 != (undefined8 ****)0x0) {
          pub_1406abac0((byte *)pcVar20,(longlong)pppuStack_98 << 6,8);
        }
        lVar11 = lStack_180;
        if (lStack_180 != 0) {
          if (lStack_170 != 0) {
            auVar2 = *pauStack_188;
            pauVar18 = pauStack_188 + 1;
            uVar19 = ~(uint)(ushort)((ushort)(SUB161(auVar2 >> 7,0) & 1) |
                                     (ushort)(SUB161(auVar2 >> 0xf,0) & 1) << 1 |
                                     (ushort)(SUB161(auVar2 >> 0x17,0) & 1) << 2 |
                                     (ushort)(SUB161(auVar2 >> 0x1f,0) & 1) << 3 |
                                     (ushort)(SUB161(auVar2 >> 0x27,0) & 1) << 4 |
                                     (ushort)(SUB161(auVar2 >> 0x2f,0) & 1) << 5 |
                                     (ushort)(SUB161(auVar2 >> 0x37,0) & 1) << 6 |
                                     (ushort)(SUB161(auVar2 >> 0x3f,0) & 1) << 7 |
                                     (ushort)(SUB161(auVar2 >> 0x47,0) & 1) << 8 |
                                     (ushort)(SUB161(auVar2 >> 0x4f,0) & 1) << 9 |
                                     (ushort)(SUB161(auVar2 >> 0x57,0) & 1) << 10 |
                                     (ushort)(SUB161(auVar2 >> 0x5f,0) & 1) << 0xb |
                                     (ushort)(SUB161(auVar2 >> 0x67,0) & 1) << 0xc |
                                     (ushort)(SUB161(auVar2 >> 0x6f,0) & 1) << 0xd |
                                     (ushort)(SUB161(auVar2 >> 0x77,0) & 1) << 0xe |
                                    (ushort)(byte)(auVar2[0xf] >> 7) << 0xf);
            pauVar14 = pauStack_188;
            lVar16 = lStack_170;
            do {
              if ((short)uVar19 == 0) {
                do {
                  auVar2 = *pauVar18;
                  pauVar14 = pauVar14 + -0x20;
                  pauVar18 = pauVar18 + 1;
                  uVar19 = (ushort)((ushort)(SUB161(auVar2 >> 7,0) & 1) |
                                    (ushort)(SUB161(auVar2 >> 0xf,0) & 1) << 1 |
                                    (ushort)(SUB161(auVar2 >> 0x17,0) & 1) << 2 |
                                    (ushort)(SUB161(auVar2 >> 0x1f,0) & 1) << 3 |
                                    (ushort)(SUB161(auVar2 >> 0x27,0) & 1) << 4 |
                                    (ushort)(SUB161(auVar2 >> 0x2f,0) & 1) << 5 |
                                    (ushort)(SUB161(auVar2 >> 0x37,0) & 1) << 6 |
                                    (ushort)(SUB161(auVar2 >> 0x3f,0) & 1) << 7 |
                                    (ushort)(SUB161(auVar2 >> 0x47,0) & 1) << 8 |
                                    (ushort)(SUB161(auVar2 >> 0x4f,0) & 1) << 9 |
                                    (ushort)(SUB161(auVar2 >> 0x57,0) & 1) << 10 |
                                    (ushort)(SUB161(auVar2 >> 0x5f,0) & 1) << 0xb |
                                    (ushort)(SUB161(auVar2 >> 0x67,0) & 1) << 0xc |
                                    (ushort)(SUB161(auVar2 >> 0x6f,0) & 1) << 0xd |
                                    (ushort)(SUB161(auVar2 >> 0x77,0) & 1) << 0xe |
                                   (ushort)(byte)(auVar2[0xf] >> 7) << 0xf) ^ 0xffff;
                } while (uVar19 == 0);
              }
              iVar3 = 0;
              for (uVar4 = uVar19; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
                iVar3 = iVar3 + 1;
              }
              uVar8 = *(ulonglong *)((longlong)pauVar14 + (-0x20 - (ulonglong)(uint)(iVar3 << 5)));
              if (uVar8 != 0) {
                pub_1406abac0(*(byte **)((longlong)pauVar14 +
                                        (-0x18 - (ulonglong)(uint)(iVar3 << 5))),uVar8,1);
              }
              uVar19 = uVar19 - 1 & uVar19;
              lVar16 = lVar16 + -1;
            } while (lVar16 != 0);
          }
          lVar16 = lVar11 * 0x20 + 0x20;
          uVar8 = lVar11 + lVar16 + 0x11;
          if (uVar8 != 0) {
            pub_1406abac0((byte *)((longlong)pauStack_188 - lVar16),uVar8,0x10);
          }
        }
        if ((int)pppuStack_7c8 != 3) {
          pdb_1409993e0(&pppuStack_7c8);
        }
        LOCK();
        *param_5 = *param_5 + -1;
        UNLOCK();
        if (*param_5 == 0) {
          pdb_140c7aad0(&param_5);
        }
        pdb_14096c8c0(&uStack_158);
        pdb_140969730(&lStack_108);
        return;
      }
      if ((int)pppuStack_7c8 != 3) {
        uVar9 = pdb_140f3c9d0();
        puVar21 = auStack_6f0;
        uVar12 = 0;
        do {
          if (!SBORROW8(0,(longlong)*puVar21)) {
            bVar22 = (ulonglong)puVar21[3] <= uVar9;
            if (puVar21[3] == uVar9) {
              bVar22 = *(uint *)(puVar21 + 4) <= uVar19;
            }
            if (bVar22) {
              pcStack_58 = (code *)*puVar21;
              *puVar21 = 0x8000000000000000;
              pcStack_60 = (code *)puVar21[1];
              pdb_141c5f3d0(&pppuStack_7c8,uVar12 & 0xffffffff);
              if (pcStack_58 != (code *)0x0) {
                pub_1406abac0((byte *)pcStack_60,(ulonglong)pcStack_58,1);
              }
            }
          }
          uVar12 = uVar12 + 1;
          puVar21 = puVar21 + 5;
        } while (uVar12 != 0xd);
      }
      param_2 = (undefined8 ****)0x989680;
      pdb_140f502d0(0);
    }
    else {
      pppuStack_f8 = pppuStack_148;
      pcStack_f0 = (code *)CONCAT71(uStack_13f,cStack_140);
      uStack_c8 = (undefined8 ****)CONCAT44(uStack_114,uStack_118);
      uStack_c0 = (undefined *)CONCAT44(uStack_10c,uStack_110);
      uStack_d8 = (undefined8 ****)CONCAT44(uStack_124,uStack_128);
      uStack_d0 = (code *)CONCAT44(uStack_11c,uStack_120);
      uStack_e8 = (undefined8 ****)CONCAT44(uStack_134,uStack_138);
      uStack_e0 = (undefined *)CONCAT44(uStack_12c,uStack_130);
      if ((undefined8 ****)pppuStack_148 == (undefined8 ****)0x3) {
        uStack_4a = 1;
        pdb_140a937d0(&pppuStack_4a8,&uStack_c8);
        pcStack_58 = pcStack_4a0;
        pdb_140f3e9e0(&pppuStack_80,pcStack_4a0,pppuStack_498,&UNK_1433a1eb8,0xc);
        pcStack_60 = pcStack_78;
        cVar6 = pdb_141c608e0(plVar7 + 2,pcStack_78,pppuStack_70);
        if (cVar6 != '\0') {
          if ((undefined8 ****)pppuStack_80 != (undefined8 ****)0x0) {
            pub_1406abac0((byte *)pcStack_60,(ulonglong)pppuStack_80,1);
          }
          if ((undefined8 ****)pppuStack_4a8 != (undefined8 ****)0x0) {
            pub_1406abac0((byte *)pcStack_58,(ulonglong)pppuStack_4a8,1);
          }
          uStack_4a = 1;
                    /* WARNING: Subroutine does not return */
          pdb_142dc83d0(&UNK_1433a1ec4,0x43,&UNK_1433a1ee8);
        }
        if ((undefined8 ****)pppuStack_80 != (undefined8 ****)0x0) {
          pub_1406abac0((byte *)pcStack_60,(ulonglong)pppuStack_80,1);
        }
        if ((undefined8 ****)pppuStack_4a8 != (undefined8 ****)0x0) {
          pub_1406abac0((byte *)pcStack_58,(ulonglong)pppuStack_4a8,1);
        }
      }
      pppuStack_478 = uStack_c8;
      puStack_470 = uStack_c0;
      pppuStack_488 = uStack_d8;
      pcStack_480 = uStack_d0;
      pppuStack_498 = uStack_e8;
      puStack_490 = uStack_e0;
      pppuStack_4a8 = pppuStack_f8;
      pcStack_4a0 = pcStack_f0;
      uStack_4a = 0;
      param_2 = &pppuStack_7c8;
      pdb_141c60ca0(&pppuStack_4a8,&pppuStack_7c8,&pauStack_188);
    }
  } while( true );
}

