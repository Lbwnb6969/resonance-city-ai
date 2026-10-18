// VA 0x140d953e0, PDB extent 6572 bytes
// tg_mods::discovery::discover_mods
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-mods/src/discovery.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tg_mods::discovery::discover_mods
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tg-mods/src/discovery.rs
   Extent: 6572 */

undefined8 * pdb_140d953e0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  code cVar3;
  code cVar4;
  code cVar5;
  code cVar6;
  code cVar7;
  code cVar8;
  code cVar9;
  code cVar10;
  code cVar11;
  code cVar12;
  code cVar13;
  code cVar14;
  code cVar15;
  code cVar16;
  code cVar17;
  code cVar18;
  code *pcVar19;
  ulonglong *puVar20;
  longlong ***ppplVar21;
  longlong ***ppplVar22;
  char cVar23;
  ushort uVar24;
  int iVar25;
  code *pcVar26;
  undefined8 *puVar27;
  ulonglong uVar28;
  undefined8 uVar29;
  longlong lVar30;
  longlong lVar31;
  undefined *puVar32;
  longlong ****pppplVar33;
  ulonglong uVar34;
  longlong *****ppppplVar35;
  code *pcVar36;
  code *arg1;
  longlong ***ppplVar37;
  undefined1 (*pauVar38) [16];
  longlong *****ppppplVar39;
  longlong ****pppplVar40;
  undefined1 (*pauVar41) [16];
  longlong ****pppplVar42;
  uint uVar43;
  byte bVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  longlong ****pppplStack_b08;
  code *apcStack_b00 [2];
  longlong ****pppplStack_aec;
  longlong ****pppplStack_8b0;
  code *pcStack_8a8;
  longlong *plStack_8a0;
  code *pcStack_898;
  longlong ***ppplStack_658;
  longlong ***ppplStack_650;
  longlong ***ppplStack_648;
  code *pcStack_640;
  longlong ****pppplStack_638;
  code *pcStack_630;
  longlong ****pppplStack_628;
  code *pcStack_620;
  undefined1 auStack_3e8 [16];
  longlong ***ppplStack_3d8;
  code *pcStack_3d0;
  longlong ****pppplStack_3c8;
  code *pcStack_3c0;
  undefined8 uStack_3b8;
  undefined *puStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined *puStack_398;
  longlong ****pppplStack_390;
  undefined8 *puStack_170;
  longlong lStack_168;
  code *pcStack_160;
  longlong ***ppplStack_158;
  longlong ***ppplStack_150;
  longlong ***ppplStack_148;
  code *pcStack_138;
  longlong ****pppplStack_130;
  code *pcStack_128;
  ulonglong uStack_118;
  code *pcStack_110;
  longlong ***ppplStack_108;
  undefined8 uStack_100;
  longlong ****pppplStack_f8;
  longlong ****pppplStack_f0;
  undefined8 uStack_e8;
  ulonglong uStack_d8;
  code *pcStack_d0;
  longlong lStack_c8;
  code *pcStack_b8;
  longlong ***ppplStack_b0;
  longlong lStack_a8;
  longlong ****pppplStack_a0;
  code *pcStack_98;
  code *pcStack_90;
  undefined1 uStack_81;
  undefined8 uStack_80;
  
  uStack_80 = 0xfffffffffffffffe;
  pcVar36 = (code *)&UNK_1431e5963;
  pdb_140f4c4e0(auStack_3e8,&UNK_1431e5963,0x13);
  if (SBORROW8(0,auStack_3e8._0_8_)) {
    pcVar26 = (code *)pdb_140dc7520(-auStack_3e8._0_8_);
    pdb_140f3e9e0(&uStack_118,pcVar26,pcVar36,&UNK_1431e5976,4);
    pcVar36 = pcVar26;
  }
  else {
    uStack_100 = pcStack_3d0;
    pcStack_110 = (code *)auStack_3e8._8_8_;
    ppplStack_108 = ppplStack_3d8;
    uStack_118 = auStack_3e8._0_8_;
  }
  pppplVar33 = (longlong ****)ppplStack_108;
  pcVar26 = pcStack_110;
  puVar27 = (undefined8 *)pdb_140f3bda0();
  if (*(char *)(puVar27 + 2) == '\x01') {
    pppplStack_3c8 = (longlong ****)*puVar27;
    pcVar36 = (code *)puVar27[1];
  }
  else {
    pppplStack_3c8 = (longlong ****)pdb_140f4fd10();
    *puVar27 = pppplStack_3c8;
    puVar27[1] = pcVar36;
    *(undefined1 *)(puVar27 + 2) = 1;
  }
  *puVar27 = (undefined *)((longlong)pppplStack_3c8 + 1);
  pcVar19 = _UNK_1431e5538;
  pppplVar42 = _DAT_1431e5530;
  auVar46 = _DAT_1431e5520;
  ppplStack_3d8 = (longlong ***)_DAT_1431e5530;
  pcStack_3d0 = _UNK_1431e5538;
  auStack_3e8 = _DAT_1431e5520;
  arg1 = pcVar26;
  pcStack_3c0 = pcVar36;
  pdb_140d96d90(&ppplStack_658,pcVar26,pppplVar33,param_2,param_3,auStack_3e8);
  pcStack_98 = pcVar26;
  ppplStack_148 = ppplStack_648;
  ppplStack_158 = ppplStack_658;
  ppplStack_150 = ppplStack_650;
  pcStack_128 = pcStack_630;
  pcStack_138 = pcStack_640;
  pppplStack_130 = pppplStack_638;
  uVar29 = auStack_3e8._8_8_;
  if (auStack_3e8._8_8_ != 0) {
    if (pcStack_3d0 != (code *)0x0) {
      auVar45 = *(undefined1 (*) [16])auStack_3e8._0_8_;
      pauVar41 = (undefined1 (*) [16])(auStack_3e8._0_8_ + 0x10);
      uVar43 = ~(uint)(ushort)((ushort)(SUB161(auVar45 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar45 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar45 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar45 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar45 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar45 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar45 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar45 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar45 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar45 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar45 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar45 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar45 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar45 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar45 >> 0x77,0) & 1) << 0xe |
                              (ushort)(byte)(auVar45[0xf] >> 7) << 0xf);
      pauVar38 = (undefined1 (*) [16])auStack_3e8._0_8_;
      pcVar36 = pcStack_3d0;
      do {
        if ((short)uVar43 == 0) {
          do {
            auVar45 = *pauVar41;
            pauVar38 = pauVar38 + -0x18;
            pauVar41 = pauVar41 + 1;
            uVar43 = (ushort)((ushort)(SUB161(auVar45 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar45 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar45 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar45 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar45 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar45 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar45 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar45 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar45 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar45 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar45 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar45 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar45 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar45 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar45 >> 0x77,0) & 1) << 0xe |
                             (ushort)(byte)(auVar45[0xf] >> 7) << 0xf) ^ 0xffff;
          } while (uVar43 == 0);
        }
        uVar1 = 0;
        for (uVar2 = uVar43; (uVar2 & 1) == 0; uVar2 = uVar2 >> 1 | 0x80000000) {
          uVar1 = uVar1 + 1;
        }
        arg1 = *(code **)((longlong)pauVar38 + (ulonglong)uVar1 * -0x18 + -0x18);
        if (arg1 != (code *)0x0) {
          pub_1406abac0(*(byte **)((longlong)pauVar38 + (ulonglong)uVar1 * -0x18 + -0x10),
                        (ulonglong)arg1,1);
        }
        uVar43 = uVar43 - 1 & uVar43;
        pcVar36 = pcVar36 + -1;
      } while (pcVar36 != (code *)0x0);
    }
    uVar28 = uVar29 * 0x18 + 0x27U & 0xfffffffffffffff0;
    pcVar36 = (code *)(uVar29 + uVar28 + 0x11);
    if (pcVar36 != (code *)0x0) {
      pub_1406abac0((byte *)(auStack_3e8._0_8_ - uVar28),(ulonglong)pcVar36,0x10);
      arg1 = pcVar36;
    }
  }
  pppplStack_a0 = pppplStack_130;
  pcStack_b8 = pcStack_128;
  puStack_170 = param_1;
  uVar29 = pdb_140dc7210();
  pdb_140f3e9e0(&pppplStack_8b0,uVar29,arg1,&UNK_1431e5686,9);
  pcStack_90 = pcStack_8a8;
  pdb_140f4f710(auStack_3e8,pcStack_8a8,plStack_8a0);
  if (auStack_3e8._0_4_ == 2) {
    ppplStack_658 = (longlong ***)0x2;
    ppplStack_650 = (longlong ***)auStack_3e8._8_8_;
  }
  else {
    pub_142e32760(&ppplStack_658,auStack_3e8,0x270);
  }
  if ((longlong *****)pppplStack_8b0 != (longlong *****)0x0) {
    pub_1406abac0((byte *)pcStack_90,(ulonglong)pppplStack_8b0,1);
  }
  if ((int)ppplStack_658 == 2) {
    pdb_1404b38e0(&ppplStack_650);
    pcVar36 = pcStack_98;
  }
  else {
    pub_142e32760(auStack_3e8,&ppplStack_658,0x270);
    while( true ) {
      pdb_140f59fa0(&ppplStack_658,auStack_3e8);
      if ((int)ppplStack_658 != 1) break;
      pub_142e32760(&pppplStack_8b0,&ppplStack_650,600);
      pppplVar33 = pppplStack_8b0;
      if ((longlong *****)pppplStack_8b0 == (longlong *****)0x0) {
        pdb_1404b38e0(&pcStack_8a8);
      }
      else {
        pub_142e32760(apcStack_b00,&ppplStack_648,0x250);
        pppplStack_b08 = pppplVar33;
        pdb_140f46b10(&uStack_d8,&pppplStack_b08);
        lVar31 = lStack_c8;
        pcStack_90 = pcStack_d0;
        cVar23 = pdb_140f3ea80(pcStack_d0,lStack_c8);
        if ((cVar23 == '\0') ||
           (cVar23 = pdb_141dafea0(&uStack_d8,pppplStack_a0,pcStack_b8), cVar23 != '\0')) {
          if (uStack_d8 != 0) {
            pub_1406abac0((byte *)pcStack_90,uStack_d8,1);
          }
          LOCK();
          *pppplStack_b08 = (longlong ***)((longlong)*pppplStack_b08 + -1);
          UNLOCK();
          if ((longlong ****)*pppplStack_b08 == (longlong ****)0x0) {
            pdb_140cd0de0(&pppplStack_b08);
          }
        }
        else {
          pdb_140f3e9e0(&pppplStack_8b0,pcStack_90,lVar31,&UNK_1431e56eb,10);
          pcStack_98 = pcStack_8a8;
          pdb_140f4f620(&ppplStack_658,pcStack_8a8,plStack_8a0);
          ppppplVar39 = (longlong *****)pppplStack_628;
          ppplVar37 = ppplStack_658;
          pppplVar33 = (longlong ****)ppplStack_650;
          if ((longlong *****)pppplStack_8b0 != (longlong *****)0x0) {
            ppplStack_b0 = ppplStack_650;
            pub_1406abac0((byte *)pcStack_98,(ulonglong)pppplStack_8b0,1);
            pppplVar33 = (longlong ****)ppplStack_b0;
          }
          pppplVar40 = pppplStack_aec;
          if ((int)ppplVar37 == 2) {
            ppplStack_658 = (longlong ***)pppplVar33;
            pdb_1404b38e0(&ppplStack_658);
            ppppplVar39 = (longlong *****)pppplVar40;
          }
          pppplStack_8b0 = (longlong ****)ppppplVar39;
          pdb_140f3fd70(&ppplStack_658,&pppplStack_8b0);
          if (((int)ppplStack_658 != 1) && ((longlong ****)0x278d00 < ppplStack_650)) {
            if (2 < *_DAT_143ca8e90) {
              pdb_141b1e240(&pppplStack_8b0,pcStack_90,lVar31,2);
              pppplStack_f8 = (longlong ****)&pppplStack_8b0;
              pppplStack_f0 = (longlong ****)pdb_140f58250;
              ppplStack_658 = (longlong ***)&UNK_1431e55d2;
              ppplStack_650 = (longlong ***)0x12;
              ppplStack_648 = (longlong ***)&UNK_1431e55d2;
              pcStack_640 = (code *)0x12;
              pppplStack_638 = (longlong ****)&UNK_1431e5718;
              pdb_1400c9be0(&UNK_1431e56f5,&pppplStack_f8,3,&ppplStack_658);
              if ((longlong *****)pppplStack_8b0 != (longlong *****)0x0) {
                pub_1406abac0((byte *)pcStack_8a8,(ulonglong)pppplStack_8b0,1);
              }
            }
            lVar30 = pdb_140f4ef90(pcStack_90,lVar31);
            if (lVar30 != 0) {
              lStack_a8 = lVar30;
              if (1 < *_DAT_143ca8e90) {
                pdb_141b1e240(&pppplStack_f8,pcStack_90,lVar31,2);
                pcStack_8a8 = pdb_140f58250;
                plStack_8a0 = &lStack_a8;
                pcStack_898 = pdb_140f59780;
                ppplStack_658 = (longlong ***)&UNK_1431e55d2;
                ppplStack_650 = (longlong ***)0x12;
                ppplStack_648 = (longlong ***)&UNK_1431e55d2;
                pcStack_640 = (code *)0x12;
                pppplStack_638 = (longlong ****)&UNK_1431e5748;
                pppplStack_8b0 = (longlong ****)&pppplStack_f8;
                pdb_1400c9be0(&UNK_1431e5730,&pppplStack_8b0,2,&ppplStack_658);
                if ((longlong *****)pppplStack_f8 != (longlong *****)0x0) {
                  pub_1406abac0((byte *)pppplStack_f0,(ulonglong)pppplStack_f8,1);
                }
              }
              pdb_1404b38e0(&lStack_a8);
            }
          }
          if (uStack_d8 != 0) {
            pub_1406abac0((byte *)pcStack_90,uStack_d8,1);
          }
          LOCK();
          *pppplStack_b08 = (longlong ***)((longlong)*pppplStack_b08 + -1);
          UNLOCK();
          if ((longlong ****)*pppplStack_b08 == (longlong ****)0x0) {
            pdb_140cd0de0(&pppplStack_b08);
          }
        }
      }
    }
    if (auStack_3e8._0_8_ != 0) {
      pdb_140f590a0(auStack_3e8 + 8);
    }
    LOCK();
    *ppplStack_3d8 = (longlong **)((longlong)*ppplStack_3d8 + -1);
    UNLOCK();
    pcVar36 = pcStack_110;
    pppplVar33 = (longlong ****)ppplStack_108;
    if ((longlong ***)*ppplStack_3d8 == (longlong ***)0x0) {
      pdb_140cd0de0(&ppplStack_3d8);
      pcVar36 = pcStack_110;
      pppplVar33 = (longlong ****)ppplStack_108;
    }
  }
  pcStack_98 = pcVar36;
  pdb_140f4f710(auStack_3e8,pcVar36,pppplVar33);
  if (auStack_3e8._0_4_ == 2) {
    ppplStack_650 = (longlong ***)auStack_3e8._8_8_;
    ppplStack_658 = (longlong ***)0x2;
  }
  else {
    pub_142e32760(&ppplStack_658,auStack_3e8,0x270);
    if ((longlong ****)ppplStack_658 != (longlong ****)0x2) {
      pcVar36 = (code *)auStack_3e8;
      pub_142e32760(pcVar36,&ppplStack_658,0x270);
      pdb_141da4770(&uStack_d8);
      puVar27 = (undefined8 *)pdb_140f3bda0();
      if (*(char *)(puVar27 + 2) == '\x01') {
        pppplStack_3c8 = (longlong ****)*puVar27;
        pcVar36 = (code *)puVar27[1];
      }
      else {
        pppplStack_3c8 = (longlong ****)pdb_140f4fd10();
        *puVar27 = pppplStack_3c8;
        puVar27[1] = pcVar36;
        *(undefined1 *)(puVar27 + 2) = 1;
      }
      *puVar27 = (undefined *)((longlong)pppplStack_3c8 + 1);
      lStack_168 = lStack_c8;
      pcStack_b8 = pcStack_d0 + lStack_c8 * 0x18;
      ppplStack_3d8 = (longlong ***)pppplVar42;
      pcStack_3d0 = pcVar19;
      auStack_3e8 = auVar46;
      pcStack_3c0 = pcVar36;
      ppplStack_b0 = (longlong ***)pppplVar33;
      pdb_141dae830(pcStack_d0,pcStack_b8,auStack_3e8);
      pppplStack_638 = pppplStack_3c8;
      pcStack_630 = pcStack_3c0;
      ppplStack_648 = ppplStack_3d8;
      pcStack_640 = pcStack_3d0;
      ppplStack_658 = (longlong ***)auStack_3e8._0_8_;
      ppplStack_650 = (longlong ***)auStack_3e8._8_8_;
      pcStack_160 = pcStack_d0;
      pcVar36 = pcStack_98;
LAB_140d9603e:
      pcVar26 = pcStack_d0;
      if (pcVar26 != pcStack_b8) {
        ppplVar37 = *(longlong ****)(pcVar26 + 0x10);
        lVar31 = pdb_141b4a940(*(undefined8 *)(pcVar26 + 8));
        pcStack_d0 = pcVar26 + 0x18;
        if (lVar31 != 0) {
          ppppplVar39 = (longlong *****)pppplStack_a0;
          pcStack_90 = pcStack_d0;
          if (pcStack_640 != (code *)0x0) {
            puVar32 = (undefined *)pdb_1400af950(&pppplStack_638,lVar31,ppplVar37);
            ppplVar22 = ppplStack_650;
            ppplVar21 = ppplStack_658;
            bVar44 = (byte)((ulonglong)puVar32 >> 0x39);
            auVar46 = ZEXT216(CONCAT11(bVar44,bVar44));
            auVar46 = pshuflw(auVar46,auVar46,0);
            ppppplVar35 = (longlong *****)0x0;
            while( true ) {
              uVar28 = (ulonglong)puVar32 & (ulonglong)ppplVar22;
              pcVar36 = (code *)((longlong)ppplVar21 + uVar28);
              cVar3 = *pcVar36;
              cVar4 = pcVar36[1];
              cVar5 = pcVar36[2];
              cVar6 = pcVar36[3];
              cVar7 = pcVar36[4];
              cVar8 = pcVar36[5];
              cVar9 = pcVar36[6];
              cVar10 = pcVar36[7];
              cVar11 = pcVar36[8];
              cVar12 = pcVar36[9];
              cVar13 = pcVar36[10];
              cVar14 = pcVar36[0xb];
              cVar15 = pcVar36[0xc];
              cVar16 = pcVar36[0xd];
              cVar17 = pcVar36[0xe];
              cVar18 = pcVar36[0xf];
              auVar45[0] = -(cVar3 == auVar46[0]);
              auVar45[1] = -(cVar4 == auVar46[1]);
              auVar45[2] = -(cVar5 == auVar46[2]);
              auVar45[3] = -(cVar6 == auVar46[3]);
              auVar45[4] = -(cVar7 == auVar46[4]);
              auVar45[5] = -(cVar8 == auVar46[5]);
              auVar45[6] = -(cVar9 == auVar46[6]);
              auVar45[7] = -(cVar10 == auVar46[7]);
              auVar45[8] = -(cVar11 == auVar46[0]);
              auVar45[9] = -(cVar12 == auVar46[1]);
              auVar45[10] = -(cVar13 == auVar46[2]);
              auVar45[0xb] = -(cVar14 == auVar46[3]);
              auVar45[0xc] = -(cVar15 == auVar46[4]);
              auVar45[0xd] = -(cVar16 == auVar46[5]);
              auVar45[0xe] = -(cVar17 == auVar46[6]);
              auVar45[0xf] = -(cVar18 == auVar46[7]);
              uVar24 = (ushort)(SUB161(auVar45 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar45 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar45 >> 0x17,0) & 1) << 2 |
                       (ushort)(SUB161(auVar45 >> 0x1f,0) & 1) << 3 |
                       (ushort)(SUB161(auVar45 >> 0x27,0) & 1) << 4 |
                       (ushort)(SUB161(auVar45 >> 0x2f,0) & 1) << 5 |
                       (ushort)(SUB161(auVar45 >> 0x37,0) & 1) << 6 |
                       (ushort)(SUB161(auVar45 >> 0x3f,0) & 1) << 7 |
                       (ushort)(SUB161(auVar45 >> 0x47,0) & 1) << 8 |
                       (ushort)(SUB161(auVar45 >> 0x4f,0) & 1) << 9 |
                       (ushort)(SUB161(auVar45 >> 0x57,0) & 1) << 10 |
                       (ushort)(SUB161(auVar45 >> 0x5f,0) & 1) << 0xb |
                       (ushort)(SUB161(auVar45 >> 0x67,0) & 1) << 0xc |
                       (ushort)(SUB161(auVar45 >> 0x6f,0) & 1) << 0xd |
                       (ushort)(SUB161(auVar45 >> 0x77,0) & 1) << 0xe |
                       (ushort)(auVar45[0xf] >> 7) << 0xf;
              uVar43 = (uint)uVar24;
              ppppplVar39 = (longlong *****)pppplStack_a0;
              pcVar36 = pcStack_98;
              while (pppplStack_a0 = (longlong ****)ppppplVar35, pcStack_98 = pcVar36, uVar24 != 0)
              {
                uVar1 = 0;
                for (uVar2 = uVar43; (uVar2 & 1) == 0; uVar2 = uVar2 >> 1 | 0x80000000) {
                  uVar1 = uVar1 + 1;
                }
                uVar34 = uVar1 + uVar28 & (ulonglong)ppplVar22;
                if ((ppplVar37 == (longlong ***)ppplVar21[uVar34 * -2 + -1]) &&
                   (iVar25 = pub_142e32750(lVar31,ppplVar21[uVar34 * -2 + -2],ppplVar37),
                   pcStack_d0 = pcStack_90, pcVar36 = pcStack_98, iVar25 == 0)) goto LAB_140d9603e;
                uVar24 = (ushort)(uVar43 - 1) & (ushort)uVar43;
                uVar43 = CONCAT22((short)(uVar43 - 1 >> 0x10),uVar24);
                ppppplVar35 = (longlong *****)pppplStack_a0;
                ppppplVar39 = (longlong *****)pppplStack_a0;
                pcVar36 = pcStack_98;
              }
              auVar47[0] = -(cVar3 == (code)0xff);
              auVar47[1] = -(cVar4 == (code)0xff);
              auVar47[2] = -(cVar5 == (code)0xff);
              auVar47[3] = -(cVar6 == (code)0xff);
              auVar47[4] = -(cVar7 == (code)0xff);
              auVar47[5] = -(cVar8 == (code)0xff);
              auVar47[6] = -(cVar9 == (code)0xff);
              auVar47[7] = -(cVar10 == (code)0xff);
              auVar47[8] = -(cVar11 == (code)0xff);
              auVar47[9] = -(cVar12 == (code)0xff);
              auVar47[10] = -(cVar13 == (code)0xff);
              auVar47[0xb] = -(cVar14 == (code)0xff);
              auVar47[0xc] = -(cVar15 == (code)0xff);
              auVar47[0xd] = -(cVar16 == (code)0xff);
              auVar47[0xe] = -(cVar17 == (code)0xff);
              auVar47[0xf] = -(cVar18 == (code)0xff);
              if ((((((((((((((((SUB161(auVar47 >> 7,0) & 1) != 0 ||
                               (SUB161(auVar47 >> 0xf,0) & 1) != 0) ||
                              (SUB161(auVar47 >> 0x17,0) & 1) != 0) ||
                             (SUB161(auVar47 >> 0x1f,0) & 1) != 0) ||
                            (SUB161(auVar47 >> 0x27,0) & 1) != 0) ||
                           (SUB161(auVar47 >> 0x2f,0) & 1) != 0) ||
                          (SUB161(auVar47 >> 0x37,0) & 1) != 0) ||
                         (SUB161(auVar47 >> 0x3f,0) & 1) != 0) ||
                        (SUB161(auVar47 >> 0x47,0) & 1) != 0) ||
                       (SUB161(auVar47 >> 0x4f,0) & 1) != 0) || (SUB161(auVar47 >> 0x57,0) & 1) != 0
                      ) || (SUB161(auVar47 >> 0x5f,0) & 1) != 0) ||
                    (SUB161(auVar47 >> 0x67,0) & 1) != 0) || (SUB161(auVar47 >> 0x6f,0) & 1) != 0)
                  || (SUB161(auVar47 >> 0x77,0) & 1) != 0) || auVar47[0xf] < '\0') break;
              puVar32 = (undefined *)((longlong)pppplStack_a0 + uVar28 + 0x10);
              ppppplVar35 = (longlong *****)(pppplStack_a0 + 2);
              pppplStack_a0 = (longlong ****)ppppplVar39;
            }
          }
          pppplStack_a0 = (longlong ****)ppppplVar39;
          pdb_140f3e9e0(&pppplStack_f8,pcVar36,ppplStack_b0,*(undefined8 *)(pcVar26 + 8),
                        *(undefined8 *)(pcVar26 + 0x10));
          uVar29 = uStack_e8;
          pppplStack_a0 = pppplStack_f0;
          if (2 < *_DAT_143ca8e90) {
            pdb_141b1e240(&pppplStack_8b0,pppplStack_f0,uStack_e8,2);
            pppplStack_b08 = (longlong ****)&pppplStack_8b0;
            apcStack_b00[0] = pdb_140f58250;
            auStack_3e8 = ZEXT816(0x1431e55d2) << 0x40;
            ppplStack_3d8 = (longlong ***)0x12;
            pcStack_3d0 = (code *)0x0;
            pppplStack_3c8 = (longlong ****)&UNK_1431e555f;
            pcStack_3c0 = (code *)0x1f;
            uStack_3b8 = 3;
            puStack_3b0 = &UNK_1431e55d2;
            uStack_3a8 = 0x12;
            uStack_3a0 = 0x1e000000001;
            puStack_398 = &UNK_1431e5877;
            pppplStack_390 = (longlong ****)&pppplStack_b08;
            pdb_140f332f0(&uStack_81,auStack_3e8);
            if ((longlong *****)pppplStack_8b0 != (longlong *****)0x0) {
              pub_1406abac0((byte *)pcStack_8a8,(ulonglong)pppplStack_8b0,1);
            }
          }
          lVar31 = pdb_140f4eda0(pppplStack_a0,uVar29);
          if (lVar31 != 0) {
            lStack_a8 = lVar31;
            if (1 < *_DAT_143ca8e90) {
              pdb_141b1e240(&pppplStack_b08,pppplStack_a0,uVar29,2);
              pcStack_8a8 = pdb_140f58250;
              plStack_8a0 = &lStack_a8;
              pcStack_898 = pdb_140f59780;
              auStack_3e8 = ZEXT816(0x1431e55d2) << 0x40;
              ppplStack_3d8 = (longlong ***)0x12;
              pcStack_3d0 = (code *)0x0;
              pppplStack_3c8 = (longlong ****)&UNK_1431e555f;
              pcStack_3c0 = (code *)0x1f;
              uStack_3b8 = 2;
              puStack_3b0 = &UNK_1431e55d2;
              uStack_3a8 = 0x12;
              uStack_3a0 = 0x1e200000001;
              puStack_398 = &UNK_1431e58a4;
              pppplStack_390 = (longlong ****)&pppplStack_8b0;
              pppplStack_8b0 = (longlong ****)&pppplStack_b08;
              pdb_140f332f0(&uStack_81,auStack_3e8);
              if ((longlong *****)pppplStack_b08 != (longlong *****)0x0) {
                pub_1406abac0((byte *)apcStack_b00[0],(ulonglong)pppplStack_b08,1);
              }
            }
            pdb_1404b38e0(&lStack_a8);
          }
          pcStack_d0 = pcStack_90;
          if ((longlong *****)pppplStack_f8 != (longlong *****)0x0) {
            pub_1406abac0((byte *)pppplStack_a0,(ulonglong)pppplStack_f8,1);
            pcStack_d0 = pcStack_90;
          }
        }
        goto LAB_140d9603e;
      }
      if ((longlong ****)ppplStack_650 != (longlong ****)0x0) {
        uVar28 = (longlong)ppplStack_650 * 0x11 + 0x21;
        if (uVar28 != 0) {
          pub_1406abac0((byte *)((longlong)ppplStack_658 - ((longlong)ppplStack_650 * 0x10 + 0x10)),
                        uVar28,0x10);
        }
      }
      pcVar36 = pcStack_160;
      if (lStack_168 != 0) {
        pcVar26 = pcStack_160 + 8;
        lVar31 = lStack_168;
        do {
          if (*(ulonglong *)(pcVar26 + -8) != 0) {
            pub_1406abac0(*(byte **)pcVar26,*(ulonglong *)(pcVar26 + -8),1);
          }
          pcVar26 = pcVar26 + 0x18;
          lVar31 = lVar31 + -1;
        } while (lVar31 != 0);
      }
      if (uStack_d8 != 0) {
        pub_1406abac0((byte *)pcVar36,uStack_d8 * 0x18,8);
      }
      goto LAB_140d95c18;
    }
  }
  pdb_1404b38e0(&ppplStack_650);
LAB_140d95c18:
  puVar20 = _DAT_143ca8e90;
  pppplVar42 = (longlong ****)(ppplStack_150 + (longlong)ppplStack_148 * 0x16);
  pppplVar33 = (longlong ****)ppplStack_150;
  while (pppplVar40 = pppplVar33, pppplVar33 = pppplStack_130, puVar27 = puStack_170,
        pppplVar40 != pppplVar42) {
    pppplVar33 = pppplVar40 + 0x16;
    if (2 < *puVar20) {
      pdb_141b1e240(&pppplStack_8b0,pppplVar40[9],pppplVar40[10],2);
      pdb_140d93010(&pppplStack_b08,pppplVar40 + 0xc);
      ppplStack_658 = (longlong ***)(pppplVar40 + 5);
      ppplStack_648 = (longlong ***)(pppplVar40 + 2);
      ppplStack_650 = (longlong ***)pdb_140094770;
      pcStack_640 = pdb_141351190;
      pppplStack_638 = (longlong ****)&pppplStack_8b0;
      pcStack_630 = pdb_140f58250;
      pcStack_620 = pdb_140001020;
      auStack_3e8 = ZEXT816(0x1431e55d2) << 0x40;
      ppplStack_3d8 = (longlong ***)0x12;
      pcStack_3d0 = (code *)0x0;
      pppplStack_3c8 = (longlong ****)&UNK_1431e555f;
      pcStack_3c0 = (code *)0x1f;
      uStack_3b8 = 3;
      puStack_3b0 = &UNK_1431e55d2;
      uStack_3a8 = 0x12;
      uStack_3a0 = 0xa800000001;
      puStack_398 = &UNK_1431e5670;
      pppplStack_390 = &ppplStack_658;
      pppplStack_628 = (longlong ****)&pppplStack_b08;
      pdb_140f332f0(&uStack_81,auStack_3e8);
      if ((longlong *****)pppplStack_b08 != (longlong *****)0x0) {
        pub_1406abac0((byte *)apcStack_b00[0],(ulonglong)pppplStack_b08,1);
      }
      if ((longlong *****)pppplStack_8b0 != (longlong *****)0x0) {
        pub_1406abac0((byte *)pcStack_8a8,(ulonglong)pppplStack_8b0,1);
      }
    }
  }
  puStack_170[2] = ppplStack_148;
  *puStack_170 = ppplStack_158;
  puStack_170[1] = ppplStack_150;
  if (pcStack_128 != (code *)0x0) {
    ppppplVar39 = (longlong *****)(pppplStack_130 + 1);
    pcVar36 = pcStack_128;
    do {
      if (ppppplVar39[-1] != (longlong ****)0x0) {
        pub_1406abac0((byte *)*ppppplVar39,(ulonglong)ppppplVar39[-1],1);
      }
      ppppplVar39 = ppppplVar39 + 4;
      pcVar36 = pcVar36 + -1;
    } while (pcVar36 != (code *)0x0);
  }
  if (pcStack_138 != (code *)0x0) {
    pub_1406abac0((byte *)pppplVar33,(longlong)pcStack_138 << 5,8);
  }
  if (uStack_118 != 0) {
    pub_1406abac0((byte *)pcStack_98,uStack_118,1);
  }
  return puVar27;
}

