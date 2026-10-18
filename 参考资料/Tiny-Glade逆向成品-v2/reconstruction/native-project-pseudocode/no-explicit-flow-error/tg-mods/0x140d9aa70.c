// VA 0x140d9aa70, PDB extent 6089 bytes
// tg_mods::discovery::mod_parts
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-mods/src/discovery.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tg_mods::discovery::mod_parts
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tg-mods/src/discovery.rs
   Extent: 6089 */

undefined8 * pdb_140d9aa70(undefined8 *param_1,longlong param_2,longlong param_3)

{
  ulonglong *puVar1;
  char *pcVar2;
  int *piVar3;
  longlong lVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  char cVar19;
  char cVar20;
  char cVar21;
  char cVar22;
  char cVar23;
  char cVar24;
  char cVar25;
  char cVar26;
  bool bVar27;
  undefined8 *puVar28;
  longlong lVar29;
  char cVar30;
  code cVar31;
  int iVar32;
  longlong *plVar33;
  ulonglong uVar34;
  ulonglong *puVar35;
  code *pcVar36;
  ulonglong uVar37;
  undefined8 uVar38;
  longlong lVar39;
  undefined1 (*pauVar40) [16];
  ushort uVar41;
  ulonglong uVar42;
  ulonglong *puVar43;
  longlong lVar44;
  undefined1 (*pauVar45) [16];
  uint uVar46;
  ulonglong *puVar47;
  byte bVar48;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 unaff_XMM6_Ba;
  undefined1 unaff_XMM6_Bb;
  undefined1 unaff_XMM6_Bc;
  undefined1 unaff_XMM6_Bd;
  undefined1 unaff_XMM6_Be;
  undefined1 unaff_XMM6_Bf;
  undefined1 unaff_XMM6_Bg;
  undefined1 unaff_XMM6_Bh;
  undefined1 unaff_XMM6_Bi;
  undefined1 unaff_XMM6_Bj;
  undefined1 unaff_XMM6_Bk;
  undefined1 unaff_XMM6_Bl;
  undefined1 unaff_XMM6_Bm;
  undefined1 unaff_XMM6_Bn;
  undefined1 unaff_XMM6_Bo;
  undefined1 unaff_XMM6_Bp;
  undefined1 auVar53 [16];
  ulonglong *puStack_d48;
  ulonglong *puStack_d40;
  code *pcStack_d38;
  ulonglong *puStack_d30;
  ulonglong *puStack_af0;
  code *pcStack_ae8;
  code **ppcStack_ae0;
  code *pcStack_ad8;
  ulonglong *puStack_ad0;
  code *pcStack_ac8;
  code *pcStack_880;
  code *pcStack_878;
  code *apcStack_870 [74];
  ulonglong *puStack_620;
  uint uStack_618;
  undefined4 uStack_614;
  code *pcStack_610;
  longlong *plStack_608;
  byte bStack_5f1;
  code *pcStack_3c8;
  code *pcStack_3c0;
  longlong *plStack_3b8;
  undefined8 uStack_3b0;
  undefined *puStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined *puStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined *puStack_378;
  ulonglong **ppuStack_370;
  byte *pbStack_158;
  ulonglong uStack_150;
  ulonglong *puStack_140;
  ulonglong uStack_138;
  byte *pbStack_130;
  longlong lStack_128;
  undefined8 *puStack_120;
  undefined1 (*pauStack_118) [16];
  ulonglong uStack_110;
  undefined8 uStack_108;
  longlong lStack_100;
  longlong lStack_f8;
  longlong lStack_f0;
  ulonglong uStack_e8;
  byte *pbStack_e0;
  ulonglong uStack_d8;
  longlong lStack_d0;
  ulonglong *puStack_c8;
  longlong lStack_c0;
  longlong lStack_b8;
  longlong lStack_b0;
  undefined1 uStack_a5;
  undefined4 uStack_a4;
  code *pcStack_a0;
  undefined1 uStack_91;
  code *pcStack_90;
  undefined1 uStack_81;
  undefined8 uStack_80;
  
  uStack_80 = 0xfffffffffffffffe;
  lStack_b8 = param_2;
  lStack_b0 = param_3;
  plVar33 = (longlong *)pdb_140f3bda0();
  if ((char)plVar33[2] == '\x01') {
    lStack_f8 = *plVar33;
    param_2 = plVar33[1];
  }
  else {
    lStack_f8 = pdb_140f4fd10();
    *plVar33 = lStack_f8;
    plVar33[1] = param_2;
    *(undefined1 *)(plVar33 + 2) = 1;
  }
  *plVar33 = lStack_f8 + 1;
  uStack_108 = _DAT_1431e5530;
  lStack_100 = _UNK_1431e5538;
  pauStack_118 = _DAT_1431e5520;
  uStack_110 = _UNK_1431e5528;
  lStack_d0 = 0;
  puStack_c8 = (ulonglong *)0x8;
  lStack_c0 = 0;
  uStack_81 = 1;
  lStack_f0 = param_2;
  pdb_140f4f710(&pcStack_3c8,lStack_b8,lStack_b0);
  puStack_120 = param_1;
  if ((int)pcStack_3c8 == 2) {
    pcStack_ae8 = pcStack_3c0;
    puStack_af0 = (ulonglong *)0x2;
  }
  else {
    pub_142e32760(&puStack_af0,&pcStack_3c8,0x270);
    if (puStack_af0 != (ulonglong *)0x2) {
      pub_142e32760(&pcStack_3c8,&puStack_af0,0x270);
      while( true ) {
        pdb_140f59fa0(&pcStack_880,&pcStack_3c8);
        if ((int)pcStack_880 != 1) break;
        pub_142e32760(&puStack_d48,&pcStack_878,600);
        puVar43 = puStack_d48;
        if (puStack_d48 == (ulonglong *)0x0) {
          pdb_1404b38e0(&puStack_d40);
        }
        else {
          pub_142e32760(&uStack_618,apcStack_870,0x250);
          puStack_620 = puVar43;
          if (((uStack_618 & 0x10) == 0) || ((uStack_618 & 0x400) != 0 && (bStack_5f1 & 0x20) != 0))
          {
LAB_140d9b449:
            LOCK();
            *puStack_620 = *puStack_620 - 1;
            UNLOCK();
            if (*puStack_620 == 0) {
              pdb_140cd0de0(&puStack_620);
            }
          }
          else {
            pdb_140f46c20(&pcStack_880,&puStack_620);
            pcStack_a0 = pcStack_878;
            pdb_140f69110(&puStack_d48,pcStack_878,apcStack_870[0]);
            pcVar5 = pcStack_d38;
            if ((char)puStack_d48 != '\0') {
              if (pcStack_880 != (code *)0x0) {
                pub_1406abac0((byte *)pcStack_a0,(ulonglong)pcStack_880,1);
              }
              goto LAB_140d9b449;
            }
            if ((longlong)pcStack_d38 < 0) {
              uVar38 = 0;
LAB_140d9bb9e:
              pdb_142dc7e2a(uVar38,pcStack_90);
                    /* WARNING: Does not return */
              pcVar5 = (code *)invalidInstructionException();
              (*pcVar5)();
            }
            if (pcStack_d38 == (code *)0x0) {
              pcVar36 = (code *)0x1;
            }
            else {
              pcStack_90 = (code *)puStack_d40;
              pdb_14007ee60();
              pcVar36 = (code *)pub_1406abab0((ulonglong)pcVar5,1);
              if (pcVar36 == (code *)0x0) {
                uVar38 = 1;
                pcStack_90 = pcVar5;
                goto LAB_140d9bb9e;
              }
              pub_142e32760(pcVar36,pcStack_90,pcVar5);
            }
            pcStack_90 = pcVar36;
            if (pcStack_880 != (code *)0x0) {
              pub_1406abac0((byte *)pcStack_a0,(ulonglong)pcStack_880,1);
            }
            lVar44 = lStack_c0;
            if (pcVar5 == (code *)0x6) {
              if (*(short *)(pcStack_90 + 4) != 0x7374 || *(int *)pcStack_90 != 0x65737361) {
LAB_140d9b564:
                bVar27 = false;
LAB_140d9b566:
                if (pcVar5 != (code *)0x7) {
                  if ((code *)0xf < pcVar5) goto LAB_140d9bae6;
                  if ((((pcVar5 != (code *)0x6) ||
                       ((byte)(((byte)((char)*pcStack_90 + 0xbfU) < 0x1a) << 5 | (byte)*pcStack_90)
                        != 0x61)) ||
                      (((byte)(((byte)((char)pcStack_90[1] + 0xbfU) < 0x1a) << 5 |
                              (byte)pcStack_90[1]) != 0x73 ||
                       ((((byte)(((byte)((char)pcStack_90[2] + 0xbfU) < 0x1a) << 5 |
                                (byte)pcStack_90[2]) != 0x73 ||
                         ((byte)(((byte)((char)pcStack_90[3] + 0xbfU) < 0x1a) << 5 |
                                (byte)pcStack_90[3]) != 0x65)) ||
                        ((byte)(((byte)((char)pcStack_90[4] + 0xbfU) < 0x1a) << 5 |
                               (byte)pcStack_90[4]) != 0x74)))))) ||
                     ((byte)(((byte)((char)pcStack_90[5] + 0xbfU) < 0x1a) << 5 | (byte)pcStack_90[5]
                            ) != 0x73)) goto LAB_140d9b6a0;
                  goto LAB_140d9ba8f;
                }
                if (*(int *)(pcStack_90 + 3) != 0x72657474 || *(int *)pcStack_90 != 0x74756c63) {
LAB_140d9b6a0:
                  if ((((bVar27) &&
                       ((byte)(((byte)((char)*pcStack_90 + 0xbfU) < 0x1a) << 5 | (byte)*pcStack_90)
                        == 99)) &&
                      (((((byte)(((byte)((char)pcStack_90[1] + 0xbfU) < 0x1a) << 5 |
                                (byte)pcStack_90[1]) == 0x6f &&
                         (((byte)(((byte)((char)pcStack_90[2] + 0xbfU) < 0x1a) << 5 |
                                 (byte)pcStack_90[2]) == 0x6d &&
                          ((byte)(((byte)((char)pcStack_90[3] + 0xbfU) < 0x1a) << 5 |
                                 (byte)pcStack_90[3]) == 0x70)))) &&
                        ((byte)(((byte)((char)pcStack_90[4] + 0xbfU) < 0x1a) << 5 |
                               (byte)pcStack_90[4]) == 0x69)) &&
                       (((((byte)(((byte)((char)pcStack_90[5] + 0xbfU) < 0x1a) << 5 |
                                 (byte)pcStack_90[5]) == 0x6c &&
                          ((byte)(((byte)((char)pcStack_90[6] + 0xbfU) < 0x1a) << 5 |
                                 (byte)pcStack_90[6]) == 0x65)) &&
                         ((byte)(((byte)((char)pcStack_90[7] + 0xbfU) < 0x1a) << 5 |
                                (byte)pcStack_90[7]) == 100)) &&
                        ((((byte)(((byte)((char)pcStack_90[8] + 0xbfU) < 0x1a) << 5 |
                                 (byte)pcStack_90[8]) == 0x2d &&
                          ((byte)(((byte)((char)pcStack_90[9] + 0xbfU) < 0x1a) << 5 |
                                 (byte)pcStack_90[9]) == 0x61)) &&
                         (((byte)(((byte)((char)pcStack_90[10] + 0xbfU) < 0x1a) << 5 |
                                 (byte)pcStack_90[10]) == 0x73 &&
                          (((byte)(((byte)((char)pcStack_90[0xb] + 0xbfU) < 0x1a) << 5 |
                                  (byte)pcStack_90[0xb]) == 0x73 &&
                           ((byte)(((byte)((char)pcStack_90[0xc] + 0xbfU) < 0x1a) << 5 |
                                  (byte)pcStack_90[0xc]) == 0x65)))))))))))) &&
                     ((byte)(((byte)((char)pcStack_90[0xd] + 0xbfU) < 0x1a) << 5 |
                            (byte)pcStack_90[0xd]) == 0x74)) {
                    cVar31 = pcStack_90[0xe];
                    goto LAB_140d9b980;
                  }
                  goto LAB_140d9b99e;
                }
              }
LAB_140d9bafd:
              pcStack_880 = pcVar5;
              apcStack_870[0] = pcVar5;
              pcStack_878 = pcStack_90;
              pdb_1403b0b40(&pauStack_118,&pcStack_880);
            }
            else {
              if (pcVar5 != (code *)0x8) {
                if (pcVar5 != (code *)0xf) goto LAB_140d9b564;
                bVar27 = true;
                if (*(longlong *)(pcStack_90 + 7) == 0x7374657373612d64 &&
                    *(longlong *)pcStack_90 == 0x64656c69706d6f63) goto LAB_140d9bafd;
                goto LAB_140d9b566;
              }
              if (*(longlong *)pcStack_90 == 0x7365727574786574) goto LAB_140d9bafd;
              if ((((((byte)(((byte)((char)*pcStack_90 + 0xbfU) < 0x1a) << 5 | (byte)*pcStack_90) ==
                      0x74) &&
                    ((byte)(((byte)((char)pcStack_90[1] + 0xbfU) < 0x1a) << 5 | (byte)pcStack_90[1])
                     == 0x65)) &&
                   ((byte)(((byte)((char)pcStack_90[2] + 0xbfU) < 0x1a) << 5 | (byte)pcStack_90[2])
                    == 0x78)) &&
                  (((byte)(((byte)((char)pcStack_90[3] + 0xbfU) < 0x1a) << 5 | (byte)pcStack_90[3])
                    == 0x74 &&
                   ((byte)(((byte)((char)pcStack_90[4] + 0xbfU) < 0x1a) << 5 | (byte)pcStack_90[4])
                    == 0x75)))) &&
                 (((byte)(((byte)((char)pcStack_90[5] + 0xbfU) < 0x1a) << 5 | (byte)pcStack_90[5])
                   == 0x72 &&
                  ((byte)(((byte)((char)pcStack_90[6] + 0xbfU) < 0x1a) << 5 | (byte)pcStack_90[6])
                   == 0x65)))) {
                cVar31 = pcStack_90[7];
LAB_140d9b980:
                if ((byte)(((byte)((char)cVar31 + 0xbfU) < 0x1a) << 5 | (byte)cVar31) == 0x73)
                goto LAB_140d9ba8f;
              }
LAB_140d9b99e:
              if (pcVar5 != (code *)0x0) {
                if (((((pcVar5 == (code *)0x7) &&
                      ((byte)(((byte)((char)*pcStack_90 + 0xbfU) < 0x1a) << 5 | (byte)*pcStack_90)
                       == 99)) &&
                     ((byte)(((byte)((char)pcStack_90[1] + 0xbfU) < 0x1a) << 5 | (byte)pcStack_90[1]
                            ) == 0x6c)) &&
                    (((byte)(((byte)((char)pcStack_90[2] + 0xbfU) < 0x1a) << 5 | (byte)pcStack_90[2]
                            ) == 0x75 &&
                     ((byte)(((byte)((char)pcStack_90[3] + 0xbfU) < 0x1a) << 5 | (byte)pcStack_90[3]
                            ) == 0x74)))) &&
                   (((byte)(((byte)((char)pcStack_90[4] + 0xbfU) < 0x1a) << 5 | (byte)pcStack_90[4])
                     == 0x74 &&
                    (((byte)(((byte)((char)pcStack_90[5] + 0xbfU) < 0x1a) << 5 | (byte)pcStack_90[5]
                            ) == 0x65 &&
                     ((byte)(((byte)((char)pcStack_90[6] + 0xbfU) < 0x1a) << 5 | (byte)pcStack_90[6]
                            ) == 0x72)))))) {
LAB_140d9ba8f:
                  pcStack_a0 = pcVar5;
                  if (lStack_c0 == lStack_d0) {
                    pdb_142d7e830(&lStack_d0);
                  }
                  puStack_c8[lVar44 * 3] = (ulonglong)pcStack_a0;
                  puStack_c8[lVar44 * 3 + 1] = (ulonglong)pcStack_90;
                  puStack_c8[lVar44 * 3 + 2] = (ulonglong)pcStack_a0;
                  lStack_c0 = lVar44 + 1;
                }
                else {
LAB_140d9bae6:
                  pub_1406abac0((byte *)pcStack_90,(ulonglong)pcVar5,1);
                }
              }
            }
            LOCK();
            *puStack_620 = *puStack_620 - 1;
            UNLOCK();
            if (*puStack_620 == 0) {
              pdb_140cd0de0(&puStack_620);
            }
          }
        }
      }
      if (pcStack_3c8 != (code *)0x0) {
        pdb_140f590a0(&pcStack_3c0);
      }
      LOCK();
      *plStack_3b8 = *plStack_3b8 + -1;
      UNLOCK();
      if (*plStack_3b8 == 0) {
        pdb_140cd0de0(&plStack_3b8);
      }
      if ((int)puStack_af0 == 2) {
        uStack_81 = 1;
        pdb_1404b38e0(&pcStack_ae8);
      }
      goto LAB_140d9abb2;
    }
  }
  uStack_81 = 1;
  pdb_1404b38e0(&pcStack_ae8);
LAB_140d9abb2:
  uStack_81 = 1;
  pdb_140f3e9e0(&puStack_620,lStack_b8,lStack_b0,&UNK_1431e58d9,7);
  if (lStack_100 != 0) {
    uStack_91 = 1;
    uVar34 = pdb_1400af950(&lStack_f8,&UNK_1431e58d9,7);
    bVar48 = (byte)(uVar34 >> 0x39);
    auVar49 = ZEXT216(CONCAT11(bVar48,bVar48));
    auVar49 = pshuflw(auVar49,auVar49,0);
    lVar44 = 0;
    while( true ) {
      uVar34 = uVar34 & uStack_110;
      auVar50 = *(undefined1 (*) [16])(*pauStack_118 + uVar34);
      auVar52[0] = -(auVar50[0] == auVar49[0]);
      auVar52[1] = -(auVar50[1] == auVar49[1]);
      auVar52[2] = -(auVar50[2] == auVar49[2]);
      auVar52[3] = -(auVar50[3] == auVar49[3]);
      auVar52[4] = -(auVar50[4] == auVar49[4]);
      auVar52[5] = -(auVar50[5] == auVar49[5]);
      auVar52[6] = -(auVar50[6] == auVar49[6]);
      auVar52[7] = -(auVar50[7] == auVar49[7]);
      auVar52[8] = -(auVar50[8] == auVar49[0]);
      auVar52[9] = -(auVar50[9] == auVar49[1]);
      auVar52[10] = -(auVar50[10] == auVar49[2]);
      auVar52[0xb] = -(auVar50[0xb] == auVar49[3]);
      auVar52[0xc] = -(auVar50[0xc] == auVar49[4]);
      auVar52[0xd] = -(auVar50[0xd] == auVar49[5]);
      auVar52[0xe] = -(auVar50[0xe] == auVar49[6]);
      auVar52[0xf] = -(auVar50[0xf] == auVar49[7]);
      uVar41 = (ushort)(SUB161(auVar52 >> 7,0) & 1) | (ushort)(SUB161(auVar52 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar52 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar52 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar52 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar52 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar52 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar52 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar52 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar52 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar52 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar52 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar52 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar52 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar52 >> 0x77,0) & 1) << 0xe | (ushort)(auVar52[0xf] >> 7) << 0xf;
      uVar46 = (uint)uVar41;
      while (uVar41 != 0) {
        uVar6 = 0;
        for (uVar7 = uVar46; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
          uVar6 = uVar6 + 1;
        }
        uVar42 = uVar6 + uVar34 & uStack_110;
        if ((*(longlong *)((longlong)pauStack_118 + uVar42 * -0x18 + -8) == 7) &&
           (piVar3 = *(int **)((longlong)pauStack_118 + uVar42 * -0x18 + -0x10),
           *(int *)((longlong)piVar3 + 3) == 0x72657474 && *piVar3 == 0x74756c63)) {
          uStack_91 = 1;
          uStack_a4 = pdb_140d99a40(CONCAT44(uStack_614,uStack_618),pcStack_610);
          goto LAB_140d9acf7;
        }
        uVar41 = (ushort)(uVar46 - 1) & (ushort)uVar46;
        uVar46 = CONCAT22((short)(uVar46 - 1 >> 0x10),uVar41);
      }
      auVar51[0] = -(auVar50[0] == -1);
      auVar51[1] = -(auVar50[1] == -1);
      auVar51[2] = -(auVar50[2] == -1);
      auVar51[3] = -(auVar50[3] == -1);
      auVar51[4] = -(auVar50[4] == -1);
      auVar51[5] = -(auVar50[5] == -1);
      auVar51[6] = -(auVar50[6] == -1);
      auVar51[7] = -(auVar50[7] == -1);
      auVar51[8] = -(auVar50[8] == -1);
      auVar51[9] = -(auVar50[9] == -1);
      auVar51[10] = -(auVar50[10] == -1);
      auVar51[0xb] = -(auVar50[0xb] == -1);
      auVar51[0xc] = -(auVar50[0xc] == -1);
      auVar51[0xd] = -(auVar50[0xd] == -1);
      auVar51[0xe] = -(auVar50[0xe] == -1);
      auVar51[0xf] = -(auVar50[0xf] == -1);
      if ((((((((((((((((SUB161(auVar51 >> 7,0) & 1) != 0 || (SUB161(auVar51 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar51 >> 0x17,0) & 1) != 0) || (SUB161(auVar51 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar51 >> 0x27,0) & 1) != 0) || (SUB161(auVar51 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar51 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar51 >> 0x3f,0) & 1) != 0) || (SUB161(auVar51 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar51 >> 0x4f,0) & 1) != 0) || (SUB161(auVar51 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar51 >> 0x5f,0) & 1) != 0) || (SUB161(auVar51 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar51 >> 0x6f,0) & 1) != 0) || (SUB161(auVar51 >> 0x77,0) & 1) != 0) ||
          auVar51[0xf] < '\0') break;
      uVar34 = uVar34 + lVar44 + 0x10;
      lVar44 = lVar44 + 0x10;
    }
  }
  uStack_a4 = 0;
LAB_140d9acf7:
  puVar47 = puStack_c8 + lStack_c0 * 3;
  puStack_d48 = puStack_c8;
  pcStack_a0 = (code *)lStack_d0;
  pcStack_d38 = (code *)lStack_d0;
  uVar34 = lStack_c0 * 0x18;
  puVar43 = puStack_c8 + 4;
  puStack_140 = puStack_c8;
  puVar35 = puStack_c8;
  puStack_d30 = puVar47;
  do {
    pcVar5 = pcStack_a0;
    uVar34 = uVar34 - 0x18;
    if (puVar35 == puVar47) {
LAB_140d9b052:
      if (pcVar5 != (code *)0x0) {
        pub_1406abac0((byte *)puStack_140,(longlong)pcVar5 * 0x18,8);
      }
      iVar8 = -(uint)(CONCAT13(unaff_XMM6_Bd,
                               CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))) ==
                     CONCAT13(unaff_XMM6_Bd,
                              CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))));
      iVar9 = -(uint)(CONCAT13(unaff_XMM6_Bh,
                               CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be))) ==
                     CONCAT13(unaff_XMM6_Bh,
                              CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be))));
      iVar10 = -(uint)(CONCAT13(unaff_XMM6_Bl,
                                CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi))) ==
                      CONCAT13(unaff_XMM6_Bl,
                               CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi))));
      iVar11 = -(uint)(CONCAT13(unaff_XMM6_Bp,
                                CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm))) ==
                      CONCAT13(unaff_XMM6_Bp,
                               CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm))));
      for (lVar44 = 0; lVar44 != 0x30; lVar44 = lVar44 + 0x10) {
        lVar29 = lStack_b0;
        if (lStack_100 != 0) {
          uVar38 = *(undefined8 *)(&UNK_1431e58e0 + lVar44);
          lVar4 = *(longlong *)(&UNK_1431e58e8 + lVar44);
          uStack_91 = 0;
          uVar42 = pdb_1400af950(&lStack_f8,uVar38,lVar4);
          uVar34 = uStack_110;
          pauVar45 = pauStack_118;
          bVar48 = (byte)(uVar42 >> 0x39);
          auVar49 = ZEXT216(CONCAT11(bVar48,bVar48));
          auVar49 = pshuflw(auVar49,auVar49,0);
          lVar39 = 0;
          while( true ) {
            uVar42 = uVar42 & uVar34;
            pcVar2 = *pauVar45 + uVar42;
            cVar30 = *pcVar2;
            cVar12 = pcVar2[1];
            cVar13 = pcVar2[2];
            cVar14 = pcVar2[3];
            cVar15 = pcVar2[4];
            cVar16 = pcVar2[5];
            cVar17 = pcVar2[6];
            cVar18 = pcVar2[7];
            cVar19 = pcVar2[8];
            cVar20 = pcVar2[9];
            cVar21 = pcVar2[10];
            cVar22 = pcVar2[0xb];
            cVar23 = pcVar2[0xc];
            cVar24 = pcVar2[0xd];
            cVar25 = pcVar2[0xe];
            cVar26 = pcVar2[0xf];
            auVar50[0] = -(cVar30 == auVar49[0]);
            auVar50[1] = -(cVar12 == auVar49[1]);
            auVar50[2] = -(cVar13 == auVar49[2]);
            auVar50[3] = -(cVar14 == auVar49[3]);
            auVar50[4] = -(cVar15 == auVar49[4]);
            auVar50[5] = -(cVar16 == auVar49[5]);
            auVar50[6] = -(cVar17 == auVar49[6]);
            auVar50[7] = -(cVar18 == auVar49[7]);
            auVar50[8] = -(cVar19 == auVar49[0]);
            auVar50[9] = -(cVar20 == auVar49[1]);
            auVar50[10] = -(cVar21 == auVar49[2]);
            auVar50[0xb] = -(cVar22 == auVar49[3]);
            auVar50[0xc] = -(cVar23 == auVar49[4]);
            auVar50[0xd] = -(cVar24 == auVar49[5]);
            auVar50[0xe] = -(cVar25 == auVar49[6]);
            auVar50[0xf] = -(cVar26 == auVar49[7]);
            uVar41 = (ushort)(SUB161(auVar50 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar50 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar50 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar50 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar50 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar50 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar50 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar50 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar50 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar50 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar50 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar50 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar50 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar50 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar50 >> 0x77,0) & 1) << 0xe |
                     (ushort)(auVar50[0xf] >> 7) << 0xf;
            uVar46 = (uint)uVar41;
            lVar29 = lStack_b0;
            while (lStack_b0 = lVar39, uVar41 != 0) {
              uVar6 = 0;
              for (uVar7 = uVar46; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
                uVar6 = uVar6 + 1;
              }
              uVar37 = uVar6 + uVar42 & uVar34;
              if ((lVar4 == *(longlong *)((longlong)pauVar45 + uVar37 * -0x18 + -8)) &&
                 (iVar32 = pub_142e32750(uVar38,*(undefined8 *)
                                                 ((longlong)pauVar45 + uVar37 * -0x18 + -0x10),lVar4
                                        ), iVar32 == 0)) goto LAB_140d9b1a6;
              uVar41 = (ushort)(uVar46 - 1) & (ushort)uVar46;
              uVar46 = CONCAT22((short)(uVar46 - 1 >> 0x10),uVar41);
              lVar39 = lStack_b0;
              lVar29 = lStack_b0;
            }
            auVar53[0] = -(cVar30 == (char)iVar8);
            auVar53[1] = -(cVar12 == (char)((uint)iVar8 >> 8));
            auVar53[2] = -(cVar13 == (char)((uint)iVar8 >> 0x10));
            auVar53[3] = -(cVar14 == (char)((uint)iVar8 >> 0x18));
            auVar53[4] = -(cVar15 == (char)iVar9);
            auVar53[5] = -(cVar16 == (char)((uint)iVar9 >> 8));
            auVar53[6] = -(cVar17 == (char)((uint)iVar9 >> 0x10));
            auVar53[7] = -(cVar18 == (char)((uint)iVar9 >> 0x18));
            auVar53[8] = -(cVar19 == (char)iVar10);
            auVar53[9] = -(cVar20 == (char)((uint)iVar10 >> 8));
            auVar53[10] = -(cVar21 == (char)((uint)iVar10 >> 0x10));
            auVar53[0xb] = -(cVar22 == (char)((uint)iVar10 >> 0x18));
            auVar53[0xc] = -(cVar23 == (char)iVar11);
            auVar53[0xd] = -(cVar24 == (char)((uint)iVar11 >> 8));
            auVar53[0xe] = -(cVar25 == (char)((uint)iVar11 >> 0x10));
            auVar53[0xf] = -(cVar26 == (char)((uint)iVar11 >> 0x18));
            if ((((((((((((((((SUB161(auVar53 >> 7,0) & 1) != 0 ||
                             (SUB161(auVar53 >> 0xf,0) & 1) != 0) ||
                            (SUB161(auVar53 >> 0x17,0) & 1) != 0) ||
                           (SUB161(auVar53 >> 0x1f,0) & 1) != 0) ||
                          (SUB161(auVar53 >> 0x27,0) & 1) != 0) ||
                         (SUB161(auVar53 >> 0x2f,0) & 1) != 0) ||
                        (SUB161(auVar53 >> 0x37,0) & 1) != 0) ||
                       (SUB161(auVar53 >> 0x3f,0) & 1) != 0) || (SUB161(auVar53 >> 0x47,0) & 1) != 0
                      ) || (SUB161(auVar53 >> 0x4f,0) & 1) != 0) ||
                    (SUB161(auVar53 >> 0x57,0) & 1) != 0) || (SUB161(auVar53 >> 0x5f,0) & 1) != 0)
                  || (SUB161(auVar53 >> 0x67,0) & 1) != 0) || (SUB161(auVar53 >> 0x6f,0) & 1) != 0)
                || (SUB161(auVar53 >> 0x77,0) & 1) != 0) || auVar53[0xf] < '\0') break;
            uVar42 = uVar42 + lStack_b0 + 0x10;
            lVar39 = lStack_b0 + 0x10;
            lStack_b0 = lVar29;
          }
        }
        lStack_b0 = lVar29;
      }
LAB_140d9b1a6:
      puVar28 = puStack_120;
      if ((char)uStack_a4 == '\0') {
        puVar43 = (ulonglong *)0x8000000000000000;
        if (puStack_620 != (ulonglong *)0x0) {
          pub_1406abac0((byte *)CONCAT44(uStack_614,uStack_618),(ulonglong)puStack_620,1);
        }
      }
      else {
        plStack_3b8 = plStack_608;
        pcStack_3c8 = (code *)CONCAT44(uStack_614,uStack_618);
        pcStack_3c0 = pcStack_610;
        puVar43 = puStack_620;
      }
      uVar34 = uStack_110;
      *(bool *)(puVar28 + 4) = lVar44 != 0x30;
      *puVar28 = puVar43;
      puVar28[3] = plStack_3b8;
      puVar28[1] = pcStack_3c8;
      puVar28[2] = pcStack_3c0;
      if (uStack_110 != 0) {
        if (lStack_100 != 0) {
          auVar49 = *pauStack_118;
          pauVar45 = pauStack_118 + 1;
          uVar46 = ~(uint)(ushort)((ushort)(SUB161(auVar49 >> 7,0) & 1) |
                                   (ushort)(SUB161(auVar49 >> 0xf,0) & 1) << 1 |
                                   (ushort)(SUB161(auVar49 >> 0x17,0) & 1) << 2 |
                                   (ushort)(SUB161(auVar49 >> 0x1f,0) & 1) << 3 |
                                   (ushort)(SUB161(auVar49 >> 0x27,0) & 1) << 4 |
                                   (ushort)(SUB161(auVar49 >> 0x2f,0) & 1) << 5 |
                                   (ushort)(SUB161(auVar49 >> 0x37,0) & 1) << 6 |
                                   (ushort)(SUB161(auVar49 >> 0x3f,0) & 1) << 7 |
                                   (ushort)(SUB161(auVar49 >> 0x47,0) & 1) << 8 |
                                   (ushort)(SUB161(auVar49 >> 0x4f,0) & 1) << 9 |
                                   (ushort)(SUB161(auVar49 >> 0x57,0) & 1) << 10 |
                                   (ushort)(SUB161(auVar49 >> 0x5f,0) & 1) << 0xb |
                                   (ushort)(SUB161(auVar49 >> 0x67,0) & 1) << 0xc |
                                   (ushort)(SUB161(auVar49 >> 0x6f,0) & 1) << 0xd |
                                   (ushort)(SUB161(auVar49 >> 0x77,0) & 1) << 0xe |
                                  (ushort)(byte)(auVar49[0xf] >> 7) << 0xf);
          pauVar40 = pauStack_118;
          lVar44 = lStack_100;
          do {
            if ((short)uVar46 == 0) {
              do {
                auVar49 = *pauVar45;
                pauVar40 = pauVar40 + -0x18;
                pauVar45 = pauVar45 + 1;
                uVar46 = (ushort)((ushort)(SUB161(auVar49 >> 7,0) & 1) |
                                  (ushort)(SUB161(auVar49 >> 0xf,0) & 1) << 1 |
                                  (ushort)(SUB161(auVar49 >> 0x17,0) & 1) << 2 |
                                  (ushort)(SUB161(auVar49 >> 0x1f,0) & 1) << 3 |
                                  (ushort)(SUB161(auVar49 >> 0x27,0) & 1) << 4 |
                                  (ushort)(SUB161(auVar49 >> 0x2f,0) & 1) << 5 |
                                  (ushort)(SUB161(auVar49 >> 0x37,0) & 1) << 6 |
                                  (ushort)(SUB161(auVar49 >> 0x3f,0) & 1) << 7 |
                                  (ushort)(SUB161(auVar49 >> 0x47,0) & 1) << 8 |
                                  (ushort)(SUB161(auVar49 >> 0x4f,0) & 1) << 9 |
                                  (ushort)(SUB161(auVar49 >> 0x57,0) & 1) << 10 |
                                  (ushort)(SUB161(auVar49 >> 0x5f,0) & 1) << 0xb |
                                  (ushort)(SUB161(auVar49 >> 0x67,0) & 1) << 0xc |
                                  (ushort)(SUB161(auVar49 >> 0x6f,0) & 1) << 0xd |
                                  (ushort)(SUB161(auVar49 >> 0x77,0) & 1) << 0xe |
                                 (ushort)(byte)(auVar49[0xf] >> 7) << 0xf) ^ 0xffff;
              } while (uVar46 == 0);
            }
            uVar6 = 0;
            for (uVar7 = uVar46; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
              uVar6 = uVar6 + 1;
            }
            uVar42 = *(ulonglong *)((longlong)pauVar40 + (ulonglong)uVar6 * -0x18 + -0x18);
            if (uVar42 != 0) {
              pub_1406abac0(*(byte **)((longlong)pauVar40 + (ulonglong)uVar6 * -0x18 + -0x10),uVar42
                            ,1);
            }
            uVar46 = uVar46 - 1 & uVar46;
            lVar44 = lVar44 + -1;
          } while (lVar44 != 0);
        }
        uVar42 = uVar34 * 0x18 + 0x27 & 0xfffffffffffffff0;
        uVar34 = uVar34 + uVar42 + 0x11;
        if (uVar34 != 0) {
          pub_1406abac0((byte *)((longlong)pauStack_118 - uVar42),uVar34,0x10);
        }
      }
      return puVar28;
    }
    puVar1 = puVar35 + 3;
    pbStack_158 = (byte *)puVar35[1];
    uStack_150 = puVar35[2];
    puStack_d40 = puVar1;
    if (SBORROW8(0,*puVar35)) {
      if (puVar47 != puVar1) {
        uVar34 = uVar34 / 0x18;
        do {
          if (puVar43[-1] != 0) {
            pub_1406abac0((byte *)*puVar43,puVar43[-1],1);
          }
          puVar43 = puVar43 + 3;
          uVar34 = uVar34 - 1;
        } while (uVar34 != 0);
      }
      goto LAB_140d9b052;
    }
    uStack_e8 = *puVar35;
    pbStack_e0 = pbStack_158;
    uStack_d8 = uStack_150;
    pdb_140f5e900(&uStack_138,pbStack_158,uStack_150);
    if ((lStack_128 == 7) &&
       (*(int *)(pbStack_130 + 3) == 0x72657474 && *(int *)pbStack_130 == 0x74756c63)) {
      pdb_140f3e9e0(&pcStack_3c8,lStack_b8,lStack_b0,pbStack_e0,uStack_d8);
      pcStack_90 = pcStack_3c0;
      cVar30 = pdb_140d99a40(pcStack_3c0,plStack_3b8);
      pcVar5 = pcStack_3c8;
      pcVar36 = pcStack_90;
      if (cVar30 != '\0') {
        if (pcStack_3c8 != (code *)0x0) {
          pub_1406abac0((byte *)pcStack_90,(ulonglong)pcStack_3c8,1);
        }
        goto LAB_140d9ade3;
      }
joined_r0x000140d9af05:
      if (pcVar5 != (code *)0x0) {
        pub_1406abac0((byte *)pcVar36,(ulonglong)pcVar5,1);
      }
    }
    else {
LAB_140d9ade3:
      if (*_DAT_143ca8e90 != 0) {
        pdb_141b1e240(&pcStack_880,lStack_b8,lStack_b0,2);
        puStack_af0 = &uStack_e8;
        pcStack_ae8 = pdb_140094770;
        pcStack_ad8 = pdb_140f58250;
        pcStack_ac8 = pdb_140094770;
        pcStack_3c8 = (code *)0x0;
        pcStack_3c0 = (code *)&UNK_1431e55d2;
        plStack_3b8 = (longlong *)0x12;
        uStack_3b0 = 0;
        puStack_3a8 = &UNK_1431e555f;
        uStack_3a0 = 0x1f;
        uStack_398 = 1;
        puStack_390 = &UNK_1431e55d2;
        uStack_388 = 0x12;
        uStack_380 = 0x4800000001;
        puStack_378 = &UNK_1431e5910;
        ppuStack_370 = &puStack_af0;
        ppcStack_ae0 = &pcStack_880;
        puStack_ad0 = &uStack_138;
        pdb_140f332f0(&uStack_a5,&pcStack_3c8);
        pcVar5 = pcStack_880;
        pcVar36 = pcStack_878;
        goto joined_r0x000140d9af05;
      }
    }
    if (uStack_138 != 0) {
      pub_1406abac0(pbStack_130,uStack_138,1);
    }
    if (uStack_e8 != 0) {
      pub_1406abac0(pbStack_e0,uStack_e8,1);
    }
    puVar43 = puVar43 + 3;
    puVar35 = puVar1;
  } while( true );
}

