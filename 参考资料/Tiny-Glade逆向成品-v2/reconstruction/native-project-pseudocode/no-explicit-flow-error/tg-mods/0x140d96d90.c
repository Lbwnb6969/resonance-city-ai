// VA 0x140d96d90, PDB extent 11240 bytes
// tg_mods::discovery::scan_mods_root
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-mods/src/discovery.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tg_mods::discovery::scan_mods_root
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tg-mods/src/discovery.rs
   Extent: 11240 */

void pdb_140d96d90(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,longlong *param_6)

{
  byte *pbVar1;
  undefined8 *puVar2;
  code *pcVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte *******pppppppbVar24;
  undefined4 uVar25;
  undefined1 uVar26;
  byte *******pppppppbVar27;
  byte *******pppppppbVar28;
  char cVar29;
  ushort uVar30;
  uint uVar31;
  int iVar32;
  uint uVar33;
  longlong lVar34;
  byte *******pppppppbVar35;
  byte *pbVar36;
  ulonglong uVar37;
  byte *******pppppppbVar38;
  byte *******pppppppbVar39;
  longlong *plVar40;
  undefined8 uVar41;
  byte *******pppppppbVar42;
  undefined1 (*pauVar43) [16];
  ulonglong arg1;
  byte *pbVar44;
  undefined1 (*pauVar45) [16];
  byte bVar46;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
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
  undefined1 auVar49 [16];
  byte *******pppppppbStack_da0;
  undefined1 auStack_d98 [592];
  undefined1 (*pauStack_b48) [16];
  byte *******pppppppbStack_b40;
  longlong *plStack_b38;
  longlong lStack_b30;
  longlong lStack_b28;
  ulonglong uStack_b20;
  undefined1 auStack_8d0 [32];
  byte *******pppppppbStack_8b0;
  byte *******pppppppbStack_8a8;
  byte *******pppppppbStack_8a0;
  byte *******pppppppbStack_898;
  longlong lStack_878;
  longlong lStack_870;
  longlong alStack_868 [36];
  byte *******pppppppbStack_748;
  byte *******pppppppbStack_740;
  undefined8 uStack_738;
  undefined8 uStack_730;
  byte *******pppppppbStack_728;
  byte *******pppppppbStack_720;
  byte *******pppppppbStack_718;
  byte *******pppppppbStack_710;
  byte *******pppppppbStack_708;
  byte *******pppppppbStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_4e8;
  byte *******pppppppbStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  byte *******pppppppbStack_4c8;
  byte *******pppppppbStack_4c0;
  byte *******pppppppbStack_4b8;
  byte *******pppppppbStack_4b0;
  undefined8 uStack_4a8;
  byte *******pppppppbStack_4a0;
  undefined1 auStack_498 [16];
  byte *******pppppppbStack_488;
  byte *******pppppppbStack_480;
  byte *******pppppppbStack_478;
  byte *******pppppppbStack_470;
  undefined1 uStack_468;
  undefined4 uStack_467;
  undefined3 uStack_463;
  byte *******pppppppbStack_460;
  byte *******pppppppbStack_458;
  byte *******pppppppbStack_450;
  byte *******pppppppbStack_448;
  byte bStack_440;
  byte *******pppppppbStack_278;
  byte *******pppppppbStack_270;
  byte *******pppppppbStack_260;
  byte *******pppppppbStack_258;
  byte *******pppppppbStack_250;
  byte *******pppppppbStack_240;
  byte *******pppppppbStack_238;
  byte *******pppppppbStack_230;
  longlong lStack_228;
  longlong *plStack_220;
  byte *******pppppppbStack_218;
  byte *******pppppppbStack_210;
  undefined4 uStack_208;
  undefined4 uStack_204;
  uint uStack_200;
  ulonglong uStack_1f8;
  undefined8 uStack_1f0;
  ulonglong uStack_1e8;
  byte *pbStack_1e0;
  byte *******pppppppbStack_1d8;
  undefined1 uStack_1d0;
  ulonglong uStack_1c8;
  ulonglong uStack_1c0;
  ulonglong uStack_1b8;
  byte *******pppppppbStack_1b0;
  byte *******pppppppbStack_1a8;
  longlong lStack_1a0;
  byte *******pppppppbStack_198;
  byte *******pppppppbStack_190;
  ulonglong uStack_188;
  ulonglong uStack_180;
  ulonglong uStack_178;
  byte ******ppppppbStack_170;
  byte *pbStack_168;
  longlong lStack_160;
  byte *******pppppppbStack_158;
  byte *******pppppppbStack_150;
  undefined8 uStack_148;
  byte *******pppppppbStack_140;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  byte *******pppppppbStack_128;
  byte *******pppppppbStack_120;
  byte *******pppppppbStack_118;
  byte *******pppppppbStack_110;
  byte *******pppppppbStack_108;
  undefined4 uStack_100;
  undefined3 uStack_fc;
  byte *******pppppppbStack_f8;
  byte *******pppppppbStack_f0;
  ulonglong uStack_e0;
  undefined1 uStack_d1;
  byte *******pppppppbStack_d0;
  byte *******pppppppbStack_c8;
  byte *******pppppppbStack_c0;
  byte *******pppppppbStack_b8;
  byte *******pppppppbStack_b0;
  byte *******pppppppbStack_a8;
  byte *******pppppppbStack_a0;
  byte *******pppppppbStack_98;
  byte bStack_88;
  undefined1 uStack_87;
  undefined1 uStack_86;
  undefined1 uStack_85;
  undefined1 uStack_84;
  undefined1 uStack_83;
  undefined1 uStack_82;
  undefined1 uStack_81;
  undefined8 uStack_80;
  
  uStack_80 = 0xfffffffffffffffe;
  pdb_140f4f710(&pauStack_b48);
  if ((int)pauStack_b48 == 2) {
    pppppppbStack_4e0 = pppppppbStack_b40;
    uStack_4e8 = (byte *******)0x2;
  }
  else {
    pub_142e32760(&uStack_4e8,&pauStack_b48,0x270);
    if (uStack_4e8 != (byte *******)0x2) {
      uStack_1f0 = param_4;
      pub_142e32760(&pauStack_b48,&uStack_4e8,0x270);
      uStack_188 = 0;
      uStack_180 = 8;
      uStack_178 = 0;
      uStack_1c8 = 0;
      uStack_1c0 = 8;
      uStack_1b8 = 0;
      lStack_228 = param_6[3];
      plStack_220 = param_6 + 4;
      lStack_1a0 = *param_6;
      uStack_1f8 = param_6[1];
      iVar5 = -(uint)(CONCAT13(unaff_XMM6_Bd,
                               CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))) ==
                     CONCAT13(unaff_XMM6_Bd,
                              CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))));
      iVar6 = -(uint)(CONCAT13(unaff_XMM6_Bh,
                               CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be))) ==
                     CONCAT13(unaff_XMM6_Bh,
                              CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be))));
      iVar7 = -(uint)(CONCAT13(unaff_XMM6_Bl,
                               CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi))) ==
                     CONCAT13(unaff_XMM6_Bl,
                              CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi))));
      iVar8 = -(uint)(CONCAT13(unaff_XMM6_Bp,
                               CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm))) ==
                     CONCAT13(unaff_XMM6_Bp,
                              CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm))));
LAB_140d96f30:
      do {
        while( true ) {
          pdb_140f59fa0(&uStack_4e8,&pauStack_b48);
          if ((int)uStack_4e8 != 1) {
            if (pauStack_b48 != (undefined1 (*) [16])0x0) {
              pdb_140f590a0(&pppppppbStack_b40);
            }
            LOCK();
            *plStack_b38 = *plStack_b38 + -1;
            UNLOCK();
            if (*plStack_b38 == 0) {
              pdb_140cd0de0(&plStack_b38);
            }
            pauStack_b48 = (undefined1 (*) [16])&uStack_d1;
            uVar37 = uStack_178;
            if (1 < uStack_178) {
              if (uStack_178 < 0x15) {
                pdb_141dabf70(uStack_180,uStack_178,1,&pauStack_b48);
              }
              else {
                pdb_141920290(uStack_180,uStack_178,&pauStack_b48);
              }
            }
            plVar40 = (longlong *)pdb_140f3bda0();
            if ((char)plVar40[2] == '\x01') {
              lStack_b28 = *plVar40;
              uVar37 = plVar40[1];
            }
            else {
              lStack_b28 = pdb_140f4fd10();
              *plVar40 = lStack_b28;
              plVar40[1] = uVar37;
              *(undefined1 *)(plVar40 + 2) = 1;
            }
            *plVar40 = lStack_b28 + 1;
            plStack_b38 = _DAT_1431e5530;
            lStack_b30 = _UNK_1431e5538;
            pauStack_b48 = _DAT_1431e5520;
            pppppppbStack_b40 = (byte *******)_UNK_1431e5528;
            uStack_b20 = uVar37;
            pdb_141da27c0(&uStack_188,&pauStack_b48);
            pppppppbVar38 = pppppppbStack_b40;
            param_1[2] = uStack_178;
            *param_1 = uStack_188;
            param_1[1] = uStack_180;
            param_1[5] = uStack_1b8;
            param_1[3] = uStack_1c8;
            param_1[4] = uStack_1c0;
            if (pppppppbStack_b40 == (byte *******)0x0) {
              return;
            }
            if (lStack_b30 != 0) {
              auVar47 = *pauStack_b48;
              pauVar45 = pauStack_b48 + 1;
              uVar33 = ~(uint)(ushort)((ushort)(SUB161(auVar47 >> 7,0) & 1) |
                                       (ushort)(SUB161(auVar47 >> 0xf,0) & 1) << 1 |
                                       (ushort)(SUB161(auVar47 >> 0x17,0) & 1) << 2 |
                                       (ushort)(SUB161(auVar47 >> 0x1f,0) & 1) << 3 |
                                       (ushort)(SUB161(auVar47 >> 0x27,0) & 1) << 4 |
                                       (ushort)(SUB161(auVar47 >> 0x2f,0) & 1) << 5 |
                                       (ushort)(SUB161(auVar47 >> 0x37,0) & 1) << 6 |
                                       (ushort)(SUB161(auVar47 >> 0x3f,0) & 1) << 7 |
                                       (ushort)(SUB161(auVar47 >> 0x47,0) & 1) << 8 |
                                       (ushort)(SUB161(auVar47 >> 0x4f,0) & 1) << 9 |
                                       (ushort)(SUB161(auVar47 >> 0x57,0) & 1) << 10 |
                                       (ushort)(SUB161(auVar47 >> 0x5f,0) & 1) << 0xb |
                                       (ushort)(SUB161(auVar47 >> 0x67,0) & 1) << 0xc |
                                       (ushort)(SUB161(auVar47 >> 0x6f,0) & 1) << 0xd |
                                       (ushort)(SUB161(auVar47 >> 0x77,0) & 1) << 0xe |
                                      (ushort)(byte)(auVar47[0xf] >> 7) << 0xf);
              pauVar43 = pauStack_b48;
              lVar34 = lStack_b30;
              do {
                if ((short)uVar33 == 0) {
                  do {
                    auVar47 = *pauVar45;
                    pauVar43 = pauVar43 + -0x18;
                    pauVar45 = pauVar45 + 1;
                    uVar33 = (ushort)((ushort)(SUB161(auVar47 >> 7,0) & 1) |
                                      (ushort)(SUB161(auVar47 >> 0xf,0) & 1) << 1 |
                                      (ushort)(SUB161(auVar47 >> 0x17,0) & 1) << 2 |
                                      (ushort)(SUB161(auVar47 >> 0x1f,0) & 1) << 3 |
                                      (ushort)(SUB161(auVar47 >> 0x27,0) & 1) << 4 |
                                      (ushort)(SUB161(auVar47 >> 0x2f,0) & 1) << 5 |
                                      (ushort)(SUB161(auVar47 >> 0x37,0) & 1) << 6 |
                                      (ushort)(SUB161(auVar47 >> 0x3f,0) & 1) << 7 |
                                      (ushort)(SUB161(auVar47 >> 0x47,0) & 1) << 8 |
                                      (ushort)(SUB161(auVar47 >> 0x4f,0) & 1) << 9 |
                                      (ushort)(SUB161(auVar47 >> 0x57,0) & 1) << 10 |
                                      (ushort)(SUB161(auVar47 >> 0x5f,0) & 1) << 0xb |
                                      (ushort)(SUB161(auVar47 >> 0x67,0) & 1) << 0xc |
                                      (ushort)(SUB161(auVar47 >> 0x6f,0) & 1) << 0xd |
                                      (ushort)(SUB161(auVar47 >> 0x77,0) & 1) << 0xe |
                                     (ushort)(byte)(auVar47[0xf] >> 7) << 0xf) ^ 0xffff;
                  } while (uVar33 == 0);
                }
                uVar31 = 0;
                for (uVar4 = uVar33; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
                  uVar31 = uVar31 + 1;
                }
                uVar37 = *(ulonglong *)((longlong)pauVar43 + (ulonglong)uVar31 * -0x18 + -0x18);
                if (uVar37 != 0) {
                  pub_1406abac0(*(byte **)((longlong)pauVar43 + (ulonglong)uVar31 * -0x18 + -0x10),
                                uVar37,1);
                }
                uVar33 = uVar33 - 1 & uVar33;
                lVar34 = lVar34 + -1;
              } while (lVar34 != 0);
            }
            uVar37 = (longlong)pppppppbVar38 * 0x18 + 0x27U & 0xfffffffffffffff0;
            arg1 = (longlong)pppppppbVar38 + uVar37 + 0x11;
            if (arg1 == 0) {
              return;
            }
            pub_1406abac0((byte *)((longlong)pauStack_b48 - uVar37),arg1,0x10);
            return;
          }
          pub_142e32760(&pppppppbStack_748,&pppppppbStack_4e0,600);
          pppppppbVar38 = pppppppbStack_748;
          if (pppppppbStack_748 != (byte *******)0x0) break;
          pdb_1404b38e0(&pppppppbStack_740);
        }
        pub_142e32760(auStack_d98,&uStack_4d8,0x250);
        pppppppbStack_da0 = pppppppbVar38;
        pdb_140f46b10(&uStack_1e8,&pppppppbStack_da0);
        pppppppbVar38 = pppppppbStack_1d8;
        pbVar44 = pbStack_1e0;
        cVar29 = pdb_140f3ea80(pbStack_1e0,pppppppbStack_1d8);
        if (cVar29 == '\0') {
          pppppppbVar35 = pppppppbVar38;
          lVar34 = pdb_140f3ee10(pbVar44,pppppppbVar38);
          if (lVar34 != 0) {
            pdb_140f69110(&uStack_4e8,lVar34,pppppppbVar35);
            pppppppbVar35 = uStack_4d8;
            if ((char)uStack_4e8 == '\0') goto LAB_140d97021;
          }
        }
        else {
          pppppppbVar35 = pppppppbVar38;
          lVar34 = pdb_140f3ecf0(pbVar44,pppppppbVar38);
          if (lVar34 != 0) {
            pdb_140f69110(&uStack_4e8,lVar34,pppppppbVar35);
            pppppppbVar35 = uStack_4d8;
            if ((int)uStack_4e8 != 1) {
LAB_140d97021:
              pppppppbStack_c0 = pppppppbVar35;
              pppppppbStack_158 = pppppppbStack_4e0;
              uStack_4d8 = pppppppbStack_c0;
              bStack_88 = pdb_140f3ea80(pbVar44,pppppppbVar38);
              if (bStack_88 == 0) {
                lVar34 = pdb_140f3ec80(pbVar44,pppppppbVar38);
                if (lVar34 != 0) {
                  cVar29 = pdb_140af90d0(lVar34);
                  if (cVar29 != '\0') {
                    pppppppbVar35 = pppppppbStack_b0;
                    pppppppbVar39 = pppppppbStack_98;
                    if (lStack_228 != 0) {
                      pbVar36 = (byte *)pdb_1400af950(plStack_220,pppppppbStack_158,pppppppbStack_c0
                                                     );
                      bVar46 = (byte)((ulonglong)pbVar36 >> 0x39);
                      auVar47 = ZEXT216(CONCAT11(bVar46,bVar46));
                      auVar47 = pshuflw(auVar47,auVar47,0);
                      pppppppbVar42 = (byte *******)0x0;
                      while( true ) {
                        pbVar1 = (byte *)((longlong)((ulonglong)pbVar36 & uStack_1f8) + lStack_1a0);
                        bVar46 = *pbVar1;
                        bVar9 = pbVar1[1];
                        bVar10 = pbVar1[2];
                        bVar11 = pbVar1[3];
                        bVar12 = pbVar1[4];
                        bVar13 = pbVar1[5];
                        bVar14 = pbVar1[6];
                        bVar15 = pbVar1[7];
                        bVar16 = pbVar1[8];
                        bVar17 = pbVar1[9];
                        bVar18 = pbVar1[10];
                        bVar19 = pbVar1[0xb];
                        bVar20 = pbVar1[0xc];
                        bVar21 = pbVar1[0xd];
                        bVar22 = pbVar1[0xe];
                        bVar23 = pbVar1[0xf];
                        auVar48[0] = -(bVar46 == auVar47[0]);
                        auVar48[1] = -(bVar9 == auVar47[1]);
                        auVar48[2] = -(bVar10 == auVar47[2]);
                        auVar48[3] = -(bVar11 == auVar47[3]);
                        auVar48[4] = -(bVar12 == auVar47[4]);
                        auVar48[5] = -(bVar13 == auVar47[5]);
                        auVar48[6] = -(bVar14 == auVar47[6]);
                        auVar48[7] = -(bVar15 == auVar47[7]);
                        auVar48[8] = -(bVar16 == auVar47[0]);
                        auVar48[9] = -(bVar17 == auVar47[1]);
                        auVar48[10] = -(bVar18 == auVar47[2]);
                        auVar48[0xb] = -(bVar19 == auVar47[3]);
                        auVar48[0xc] = -(bVar20 == auVar47[4]);
                        auVar48[0xd] = -(bVar21 == auVar47[5]);
                        auVar48[0xe] = -(bVar22 == auVar47[6]);
                        auVar48[0xf] = -(bVar23 == auVar47[7]);
                        uVar30 = (ushort)(SUB161(auVar48 >> 7,0) & 1) |
                                 (ushort)(SUB161(auVar48 >> 0xf,0) & 1) << 1 |
                                 (ushort)(SUB161(auVar48 >> 0x17,0) & 1) << 2 |
                                 (ushort)(SUB161(auVar48 >> 0x1f,0) & 1) << 3 |
                                 (ushort)(SUB161(auVar48 >> 0x27,0) & 1) << 4 |
                                 (ushort)(SUB161(auVar48 >> 0x2f,0) & 1) << 5 |
                                 (ushort)(SUB161(auVar48 >> 0x37,0) & 1) << 6 |
                                 (ushort)(SUB161(auVar48 >> 0x3f,0) & 1) << 7 |
                                 (ushort)(SUB161(auVar48 >> 0x47,0) & 1) << 8 |
                                 (ushort)(SUB161(auVar48 >> 0x4f,0) & 1) << 9 |
                                 (ushort)(SUB161(auVar48 >> 0x57,0) & 1) << 10 |
                                 (ushort)(SUB161(auVar48 >> 0x5f,0) & 1) << 0xb |
                                 (ushort)(SUB161(auVar48 >> 0x67,0) & 1) << 0xc |
                                 (ushort)(SUB161(auVar48 >> 0x6f,0) & 1) << 0xd |
                                 (ushort)(SUB161(auVar48 >> 0x77,0) & 1) << 0xe |
                                 (ushort)(auVar48[0xf] >> 7) << 0xf;
                        pppppppbVar27 = (byte *******)((ulonglong)pbVar36 & uStack_1f8);
                        pppppppbVar28 = (byte *******)(ulonglong)uVar30;
                        pppppppbVar35 = pppppppbStack_b0;
                        pppppppbVar24 = pppppppbStack_a0;
                        pppppppbVar39 = pppppppbStack_98;
                        while (pppppppbStack_b0 = pppppppbVar42, pppppppbStack_a0 = pppppppbVar28,
                              pppppppbStack_98 = pppppppbVar27, uVar30 != 0) {
                          uVar33 = 0;
                          for (uVar31 = (uint)pppppppbStack_a0; (uVar31 & 1) == 0;
                              uVar31 = uVar31 >> 1 | 0x80000000) {
                            uVar33 = uVar33 + 1;
                          }
                          uVar37 = (ulonglong)((longlong)pppppppbStack_98 + (ulonglong)uVar33) &
                                   uStack_1f8;
                          if (pppppppbStack_c0 == *(byte ********)(lStack_1a0 + -8 + uVar37 * -0x18)
                             ) {
                            iVar32 = pub_142e32750(pppppppbStack_158,
                                                   *(undefined8 *)
                                                    (lStack_1a0 + uVar37 * -0x18 + -0x10),
                                                   pppppppbStack_c0);
                            if (iVar32 == 0) goto LAB_140d97e3b;
                          }
                          iVar32 = (int)pppppppbStack_a0 + -1;
                          uVar30 = (ushort)iVar32 & (ushort)pppppppbStack_a0;
                          pppppppbVar27 = pppppppbStack_98;
                          pppppppbVar28 =
                               (byte *******)
                               (ulonglong)CONCAT22((short)((uint)iVar32 >> 0x10),uVar30);
                          pppppppbVar42 = pppppppbStack_b0;
                          pppppppbVar35 = pppppppbStack_b0;
                          pppppppbVar24 = pppppppbStack_a0;
                          pppppppbVar39 = pppppppbStack_98;
                        }
                        auVar49[0] = -(bVar46 == (byte)iVar5);
                        auVar49[1] = -(bVar9 == (byte)((uint)iVar5 >> 8));
                        auVar49[2] = -(bVar10 == (byte)((uint)iVar5 >> 0x10));
                        auVar49[3] = -(bVar11 == (byte)((uint)iVar5 >> 0x18));
                        auVar49[4] = -(bVar12 == (byte)iVar6);
                        auVar49[5] = -(bVar13 == (byte)((uint)iVar6 >> 8));
                        auVar49[6] = -(bVar14 == (byte)((uint)iVar6 >> 0x10));
                        auVar49[7] = -(bVar15 == (byte)((uint)iVar6 >> 0x18));
                        auVar49[8] = -(bVar16 == (byte)iVar7);
                        auVar49[9] = -(bVar17 == (byte)((uint)iVar7 >> 8));
                        auVar49[10] = -(bVar18 == (byte)((uint)iVar7 >> 0x10));
                        auVar49[0xb] = -(bVar19 == (byte)((uint)iVar7 >> 0x18));
                        auVar49[0xc] = -(bVar20 == (byte)iVar8);
                        auVar49[0xd] = -(bVar21 == (byte)((uint)iVar8 >> 8));
                        auVar49[0xe] = -(bVar22 == (byte)((uint)iVar8 >> 0x10));
                        auVar49[0xf] = -(bVar23 == (byte)((uint)iVar8 >> 0x18));
                        pppppppbStack_a0 = pppppppbVar24;
                        if ((((((((((((((((SUB161(auVar49 >> 7,0) & 1) != 0 ||
                                         (SUB161(auVar49 >> 0xf,0) & 1) != 0) ||
                                        (SUB161(auVar49 >> 0x17,0) & 1) != 0) ||
                                       (SUB161(auVar49 >> 0x1f,0) & 1) != 0) ||
                                      (SUB161(auVar49 >> 0x27,0) & 1) != 0) ||
                                     (SUB161(auVar49 >> 0x2f,0) & 1) != 0) ||
                                    (SUB161(auVar49 >> 0x37,0) & 1) != 0) ||
                                   (SUB161(auVar49 >> 0x3f,0) & 1) != 0) ||
                                  (SUB161(auVar49 >> 0x47,0) & 1) != 0) ||
                                 (SUB161(auVar49 >> 0x4f,0) & 1) != 0) ||
                                (SUB161(auVar49 >> 0x57,0) & 1) != 0) ||
                               (SUB161(auVar49 >> 0x5f,0) & 1) != 0) ||
                              (SUB161(auVar49 >> 0x67,0) & 1) != 0) ||
                             (SUB161(auVar49 >> 0x6f,0) & 1) != 0) ||
                            (SUB161(auVar49 >> 0x77,0) & 1) != 0) || auVar49[0xf] < '\0') break;
                        pbVar36 = (byte *)((longlong)pppppppbStack_98 + (longlong)pppppppbStack_b0)
                                  + 0x10;
                        pppppppbVar42 = pppppppbStack_b0 + 2;
                        pppppppbStack_b0 = pppppppbVar35;
                        pppppppbStack_98 = pppppppbVar39;
                      }
                    }
                    pppppppbStack_98 = pppppppbVar39;
                    pppppppbStack_b0 = pppppppbVar35;
                    pdb_140f55fb0(&uStack_4e8,pbVar44,pppppppbVar38);
                    pdb_141dafae0(&pppppppbStack_748,&uStack_4e8,&UNK_1431e57a0,0xb);
                    pppppppbStack_a0 = pppppppbStack_748;
                    if (SBORROW8(0,(longlong)pppppppbStack_748)) {
                      pppppppbStack_f0 = pppppppbStack_740;
                      pppppppbStack_f8 = (byte *******)0x8000000000000000;
                    }
                    else {
                      uStack_85 = 1;
                      pppppppbStack_d0 = pppppppbStack_740;
                      pppppppbStack_c8 = uStack_738;
                      pppppppbVar35 = pppppppbStack_740;
                      pdb_140faf160(auStack_8d0);
                      uStack_85 = 1;
                      uVar41 = pdb_140dc7210();
                      uStack_85 = 1;
                      pdb_140f3e9e0(&pppppppbStack_748,uVar41,pppppppbVar35,&UNK_1431e5686,9);
                      pppppppbStack_98 = pppppppbStack_740;
                      pppppppbStack_b0 = uStack_738;
                      pdb_140faf0a0(&uStack_4e8,auStack_8d0);
                      pdb_140f3e9e0(&pppppppbStack_218,pppppppbStack_98,pppppppbStack_b0,
                                    (longlong)&uStack_4e8 + 4,(ulonglong)uStack_4e8 & 0xffffffff);
                      if (pppppppbStack_748 != (byte *******)0x0) {
                        pub_1406abac0((byte *)pppppppbStack_98,(ulonglong)pppppppbStack_748,1);
                      }
                      pppppppbVar35 = (byte *******)CONCAT44(uStack_204,uStack_208);
                      uStack_83 = 1;
                      uStack_84 = 1;
                      pppppppbStack_98 = pppppppbStack_210;
                      pppppppbStack_b0 = pppppppbVar35;
                      cVar29 = pdb_140f3ea80();
                      if (cVar29 == '\0') {
                        if (2 < *_DAT_143ca8e90) {
                          uStack_83 = 1;
                          uStack_84 = 1;
                          pdb_141b1e240(&pppppppbStack_128,pbVar44,pppppppbVar38,2);
                          pdb_141b1e240(&pppppppbStack_8b0,pppppppbStack_98,pppppppbStack_b0,2);
                          pppppppbStack_748 = (byte *******)&pppppppbStack_128;
                          pppppppbStack_740 = (byte *******)pdb_140f58250;
                          uStack_730 = pdb_140f58250;
                          uStack_4e8 = (byte *******)&UNK_1431e55d2;
                          pppppppbStack_4e0 = (byte *******)0x12;
                          uStack_4d8._0_4_ = 0x431e55d2;
                          uStack_4d8._4_4_ = 1;
                          uStack_4d0._0_4_ = 0x12;
                          uStack_4d0._4_4_ = 0;
                          pppppppbStack_4c8 = (byte *******)&UNK_1431e57c8;
                          uStack_738 = (byte *******)&pppppppbStack_8b0;
                          pdb_1400c9be0(&UNK_1431e57ab,&pppppppbStack_748,3,&uStack_4e8);
                          if (pppppppbStack_8b0 != (byte *******)0x0) {
                            pub_1406abac0((byte *)pppppppbStack_8a8,(ulonglong)pppppppbStack_8b0,1);
                          }
                          pppppppbVar35 = pppppppbStack_128;
                          if (pppppppbStack_128 != (byte *******)0x0) {
                            pub_1406abac0((byte *)pppppppbStack_120,(ulonglong)pppppppbStack_128,1);
                          }
                        }
                        uStack_83 = 1;
                        uStack_84 = 1;
                        uVar41 = pdb_140dc7210();
                        uStack_83 = 1;
                        uStack_84 = 1;
                        pdb_140f3e9e0(&pppppppbStack_748,uVar41,pppppppbVar35,&UNK_1431e5686,9);
                        pppppppbVar38 = uStack_738;
                        pppppppbStack_a8 = pppppppbStack_740;
                        pdb_140faf0a0(&uStack_4e8,auStack_8d0);
                        pppppppbStack_120 = (byte *******)pdb_141db0020;
                        pppppppbStack_128 = (byte *******)&uStack_4e8;
                        pdb_140f60760(&pppppppbStack_8b0,&UNK_1431e57e0,&pppppppbStack_128);
                        uStack_4e8 = pppppppbStack_8b0;
                        pppppppbStack_4e0 = pppppppbStack_8a8;
                        uStack_4d8._0_4_ = SUB84(pppppppbStack_8a0,0);
                        uStack_4d8._4_4_ = (undefined4)((ulonglong)pppppppbStack_8a0 >> 0x20);
                        pdb_1417cc7b0(&pppppppbStack_260,pppppppbStack_a8,pppppppbVar38,&uStack_4e8)
                        ;
                        if (pppppppbStack_748 != (byte *******)0x0) {
                          pub_1406abac0((byte *)pppppppbStack_a8,(ulonglong)pppppppbStack_748,1);
                        }
                        uStack_81 = 1;
                        uStack_82 = 1;
                        pppppppbStack_a8 = pppppppbStack_258;
                        pppppppbStack_b8 = pppppppbStack_250;
                        pdb_140f4f620(&uStack_4e8);
                        if ((int)uStack_4e8 == 2) {
                          pppppppbStack_748 = (byte *******)0x2;
LAB_140d97b47:
                          pppppppbStack_740 = pppppppbStack_4e0;
                          uStack_81 = 1;
                          uStack_82 = 1;
                          pdb_1404b38e0(&pppppppbStack_740);
LAB_140d97b62:
                          uStack_4e8 = (byte *******)CONCAT71(uStack_4e8._1_7_,1);
                          uStack_81 = 1;
                          uStack_82 = 1;
                          uVar41 = pdb_140f46c40(&uStack_4e8,pppppppbStack_a8,pppppppbStack_b8);
                          uStack_81 = 1;
                          uStack_82 = 1;
                          pppppppbVar38 = (byte *******)pdb_141dafce0(uVar41,&UNK_1431e57ff,0x11);
                          if (pppppppbVar38 != (byte *******)0x0) goto LAB_140d97cba;
                          pppppppbStack_8b0 = pppppppbStack_a0;
                          pppppppbStack_8a8 = pppppppbStack_d0;
                          pppppppbStack_8a0 = pppppppbStack_c8;
                          pppppppbStack_898 = (byte *******)0x0;
                          uStack_81 = 1;
                          uStack_82 = 0;
                          pdb_141db0030(&uStack_4e8,&pppppppbStack_8b0);
                          uStack_81 = 1;
                          uStack_82 = 0;
                          pdb_141dafbd0(&pppppppbStack_748,&uStack_4e8,&UNK_1431e5810,0xb);
                          if (SBORROW8(0,(longlong)pppppppbStack_748)) {
                            pppppppbStack_f0 = pppppppbStack_740;
                            bVar46 = 0;
                            goto LAB_140d97cd5;
                          }
                          pppppppbStack_108 = pppppppbStack_728;
                          pppppppbStack_118 = uStack_738;
                          pppppppbStack_110 = (byte *******)uStack_730;
                          pppppppbStack_128 = pppppppbStack_748;
                          pppppppbStack_120 = pppppppbStack_740;
                          pppppppbStack_198 = (byte *******)pppppppbStack_728[4];
                          pppppppbVar38 = (byte *******)0x0;
                          if (pppppppbStack_198 != (byte *******)0x0) {
                            do {
                              pdb_141db0b50(&uStack_4e8,&pppppppbStack_128,pppppppbVar38);
                              pdb_141dafda0(&pppppppbStack_748,&uStack_4e8,&UNK_1431e5833,0x11);
                              pppppppbVar39 = pppppppbStack_740;
                              pppppppbVar35 = pppppppbStack_748;
                              pppppppbStack_c8 = pppppppbVar38;
                              if (pppppppbStack_748 == (byte *******)0x2) {
                                pppppppbStack_f8 = (byte *******)0x8000000000000000;
                                pppppppbStack_f0 = pppppppbStack_740;
                                goto LAB_140d985bd;
                              }
                              pub_142e32760(&pppppppbStack_8a0,&uStack_738,0x158);
                              pppppppbStack_8b0 = pppppppbVar35;
                              pppppppbStack_8a8 = pppppppbVar39;
                              plVar40 = (longlong *)(lStack_870 + 8);
                              if (!SBORROW8(0,lStack_878)) {
                                plVar40 = &lStack_870;
                              }
                              uStack_4e8 = (byte *******)*plVar40;
                              plVar40 = (longlong *)(lStack_870 + 0x10);
                              if (!SBORROW8(0,lStack_878)) {
                                plVar40 = alStack_868;
                              }
                              pppppppbStack_4e0 = (byte *******)((longlong)uStack_4e8 + *plVar40);
                              uStack_148 = (byte *******)CONCAT71(uStack_148._1_7_,0x5c);
                              pppppppbStack_748 =
                                   (byte *******)CONCAT71(pppppppbStack_748._1_7_,0x2f);
                              uStack_4d8 = (byte *******)&uStack_148;
                              uStack_4d0 = (byte *******)&pppppppbStack_748;
                              pdb_141da2510(&ppppppbStack_170,&uStack_4e8);
                              lVar34 = lStack_160;
                              pbVar44 = pbStack_168;
                              pdb_140f3ddd0(&uStack_4e8,pbStack_168,lStack_160);
                              pppppppbStack_c8 = (byte *******)((longlong)pppppppbStack_c8 + 1);
                              do {
                                pdb_140f5bb30(&pppppppbStack_748,&uStack_4e8);
                              } while ((char)pppppppbStack_748 == '\t');
                              if ((char)pppppppbStack_748 != '\n') {
LAB_140d98554:
                                uStack_4e8 = &ppppppbStack_170;
                                pppppppbStack_4e0 = (byte *******)pdb_140094770;
                                pppppppbStack_f0 = (byte *******)pdb_142db59e0(&uStack_4e8);
                                pppppppbStack_f8 = (byte *******)0x8000000000000000;
LAB_140d98591:
                                if (ppppppbStack_170 != (byte ******)0x0) {
                                  pub_1406abac0(pbStack_168,(ulonglong)ppppppbStack_170,1);
                                }
                                pdb_140f74fe0(&pppppppbStack_8b0);
                                goto LAB_140d985bd;
                              }
                              pdb_140f3e010(&uStack_148,pbVar44,lVar34);
                              pppppppbVar38 = pppppppbStack_c8;
                              if (SBORROW8(0,(longlong)uStack_148)) goto LAB_140d98554;
                              uStack_738 = (byte *******)CONCAT44(uStack_134,uStack_138);
                              uStack_730 = (code *)CONCAT44(uStack_12c,uStack_130);
                              pppppppbStack_748 = uStack_148;
                              pppppppbStack_740 = pppppppbStack_140;
                              if ((lStack_160 == 0) || (pbStack_168[lStack_160 + -1] != 0x2f)) {
                                pdb_140f3e9e0(&uStack_4e8,pppppppbStack_a8,pppppppbStack_b8,
                                              pppppppbStack_140,uStack_738);
                                pppppppbStack_190 = pppppppbStack_4e0;
                                pppppppbVar35 = uStack_4d8;
                                lVar34 = pdb_140f3eaf0();
                                if (lVar34 == 0) {
LAB_140d98377:
                                  uVar41 = pdb_141db0d40(&uStack_4e8);
                                  lVar34 = pdb_141daf8b0(uVar41);
                                  pppppppbVar39 = pppppppbVar35;
                                  if (lVar34 == 1) goto LAB_140d98688;
                                  pppppppbVar39 = (byte *******)&uStack_148;
                                  uStack_148 = pppppppbVar35;
                                  uVar33 = pdb_141db0da0(&pppppppbStack_8b0);
                                  uVar37 = pdb_141daf770(uVar33 & 1);
                                  if ((uVar37 & 1) == 0) {
                                    CloseHandle(uStack_148);
                                    if (uStack_4e8 != (byte *******)0x0) {
                                      pub_1406abac0((byte *)pppppppbStack_190,(ulonglong)uStack_4e8,
                                                    1);
                                    }
                                    if (pppppppbStack_748 != (byte *******)0x0) {
                                      pub_1406abac0((byte *)pppppppbStack_740,
                                                    (ulonglong)pppppppbStack_748,1);
                                    }
                                    if (ppppppbStack_170 != (byte ******)0x0) {
                                      pub_1406abac0(pbStack_168,(ulonglong)ppppppbStack_170,1);
                                    }
                                    pdb_140f74fe0(&pppppppbStack_8b0);
                                    goto LAB_140d98441;
                                  }
                                  pppppppbStack_f8 = (byte *******)0x8000000000000000;
                                  pppppppbStack_f0 = pppppppbVar39;
                                  CloseHandle(uStack_148);
                                }
                                else {
                                  uStack_148 = (byte *******)CONCAT71(uStack_148._1_7_,1);
                                  uVar41 = pdb_140f46c40(&uStack_148,lVar34,pppppppbVar35);
                                  pppppppbVar35 = (byte *******)&UNK_1431e5844;
                                  pppppppbVar39 =
                                       (byte *******)pdb_141dafce0(uVar41,&UNK_1431e5844,0x12);
                                  if (pppppppbVar39 == (byte *******)0x0) goto LAB_140d98377;
LAB_140d98688:
                                  pppppppbStack_f0 = pppppppbVar39;
                                  pppppppbStack_f8 = (byte *******)0x8000000000000000;
                                }
                                if (uStack_4e8 != (byte *******)0x0) {
                                  pub_1406abac0((byte *)pppppppbStack_190,(ulonglong)uStack_4e8,1);
                                }
                                if (pppppppbStack_748 != (byte *******)0x0) {
                                  pub_1406abac0((byte *)pppppppbStack_740,
                                                (ulonglong)pppppppbStack_748,1);
                                }
                                goto LAB_140d98591;
                              }
                              if (uStack_148 != (byte *******)0x0) {
                                pub_1406abac0((byte *)pppppppbStack_140,(ulonglong)uStack_148,1);
                              }
                              if (ppppppbStack_170 != (byte ******)0x0) {
                                pub_1406abac0(pbStack_168,(ulonglong)ppppppbStack_170,1);
                              }
                              pdb_140f74fe0(&pppppppbStack_8b0);
                              pppppppbVar38 = pppppppbStack_c8;
LAB_140d98441:
                            } while (pppppppbVar38 < pppppppbStack_198);
                          }
                          pppppppbVar38 =
                               (byte *******)
                               pdb_140f4f450(pppppppbStack_a8,pppppppbStack_b8,pppppppbStack_98,
                                             pppppppbStack_b0);
                          pppppppbStack_748 = pppppppbVar38;
                          if (pppppppbVar38 == (byte *******)0x0) {
LAB_140d984e5:
                            pdb_140d9a1d0(pppppppbStack_98,pppppppbStack_b0);
                            uStack_e0 = (ulonglong)uStack_200;
                            pppppppbStack_f8 = pppppppbStack_218;
                            pppppppbStack_f0 = pppppppbStack_210;
                            uStack_81 = 0;
                            uStack_82 = 0;
                            pdb_141da0730(&pppppppbStack_128);
                            pppppppbVar38 = pppppppbStack_260;
                            pppppppbVar35 = pppppppbStack_a8;
                            goto joined_r0x000140d9853c;
                          }
                          uStack_86 = 1;
                          cVar29 = pdb_140f3ea80(pppppppbStack_98,pppppppbStack_b0);
                          if (cVar29 != '\0') {
                            uStack_86 = 1;
                            uStack_4e8 = (byte *******)
                                         pdb_140f4ef90(pppppppbStack_a8,pppppppbStack_b8);
                            if (uStack_4e8 != (byte *******)0x0) {
                              uStack_86 = 1;
                              pdb_1404b38e0(&uStack_4e8);
                            }
                            pdb_1404b38e0(&pppppppbStack_748);
                            goto LAB_140d984e5;
                          }
                          uStack_4e8 = (byte *******)0x8000000000000000;
                          uStack_86 = 0;
                          pppppppbStack_4e0 = pppppppbVar38;
                          pdb_141daf9f0(&pppppppbStack_f8,&uStack_4e8,&UNK_1431e581b,0x18);
LAB_140d985bd:
                          uStack_81 = 1;
                          uStack_82 = 0;
                          pdb_141da0730(&pppppppbStack_128);
                          bVar46 = 0;
                          pppppppbVar38 = pppppppbStack_a0;
                        }
                        else {
                          pppppppbStack_748 = uStack_4e8;
                          pppppppbStack_740 = pppppppbStack_4e0;
                          uStack_6f8 = auStack_498._0_8_;
                          pppppppbStack_708 = uStack_4a8;
                          pppppppbStack_700 = pppppppbStack_4a0;
                          pppppppbStack_718 = pppppppbStack_4b8;
                          pppppppbStack_710 = pppppppbStack_4b0;
                          pppppppbStack_728 = pppppppbStack_4c8;
                          pppppppbStack_720 = pppppppbStack_4c0;
                          uStack_738 = (byte *******)
                                       CONCAT44(uStack_4d8._4_4_,(undefined4)uStack_4d8);
                          uStack_730 = (code *)uStack_4d0;
                          if (uStack_4e8 == (byte *******)0x2) goto LAB_140d97b47;
                          uStack_81 = 1;
                          uStack_82 = 1;
                          uVar41 = pdb_140f4ef90(pppppppbStack_a8,pppppppbStack_b8);
                          uStack_81 = 1;
                          uStack_82 = 1;
                          pppppppbVar38 = (byte *******)pdb_141dafce0(uVar41,&UNK_1431e57e8,0x17);
                          if (pppppppbVar38 == (byte *******)0x0) goto LAB_140d97b62;
LAB_140d97cba:
                          bVar46 = 1;
                          pppppppbStack_f0 = pppppppbVar38;
LAB_140d97cd5:
                          pppppppbStack_f8 = (byte *******)0x8000000000000000;
                          pppppppbVar38 = pppppppbStack_a0;
                        }
                        pppppppbStack_a0 = pppppppbVar38;
                        if (pppppppbStack_260 != (byte *******)0x0) {
                          pub_1406abac0((byte *)pppppppbStack_a8,(ulonglong)pppppppbStack_260,1);
                        }
                        if (pppppppbStack_218 != (byte *******)0x0) {
                          pub_1406abac0((byte *)pppppppbStack_98,(ulonglong)pppppppbStack_218,1);
                        }
                        pppppppbVar35 = pppppppbStack_d0;
                        if ((bool)(pppppppbVar38 != (byte *******)0x0 & bVar46)) goto LAB_140d97d33;
                      }
                      else {
                        uStack_83 = 1;
                        uStack_84 = 1;
                        pdb_140d9a1d0(pppppppbStack_98,pppppppbStack_b0);
                        uStack_e0 = (ulonglong)uStack_200;
                        pppppppbVar38 = pppppppbStack_a0;
                        pppppppbStack_f8 = pppppppbStack_218;
                        pppppppbStack_f0 = pppppppbStack_210;
                        pppppppbVar35 = pppppppbStack_d0;
joined_r0x000140d9853c:
                        if (pppppppbVar38 != (byte *******)0x0) {
LAB_140d97d33:
                          pub_1406abac0((byte *)pppppppbVar35,(ulonglong)pppppppbVar38,1);
                        }
                      }
                      if (!SBORROW8(0,(longlong)pppppppbStack_f8)) {
                        pppppppbStack_a8 = pppppppbStack_f8;
                        pppppppbStack_b8 = pppppppbStack_f0;
                        uVar26 = (undefined1)uStack_e0;
                        uStack_87 = 1;
                        pdb_140dbd540(&uStack_4e8,&pppppppbStack_f8);
                        uVar37 = uStack_1b8;
                        uStack_4d0._0_4_ = CONCAT31(uStack_4d0._1_3_,uVar26);
                        if (uStack_1b8 == uStack_1c8) {
                          pdb_142d7e6e0(&uStack_1c8);
                        }
                        lVar34 = uVar37 * 0x20;
                        puVar2 = (undefined8 *)(uStack_1c0 + 0x10 + lVar34);
                        *puVar2 = uStack_4d8;
                        *(undefined4 *)(puVar2 + 1) = (undefined4)uStack_4d0;
                        *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_4d0._4_4_;
                        puVar2 = (undefined8 *)(uStack_1c0 + lVar34);
                        *puVar2 = uStack_4e8;
                        puVar2[1] = pppppppbStack_4e0;
                        uStack_1b8 = uVar37 + 1;
                        uStack_87 = 0;
                        pdb_140d9a400(&uStack_4e8,&pppppppbStack_f8);
                        pbVar44 = pbStack_1e0;
                        pppppppbVar35 = uStack_4d8;
                        pppppppbStack_a0 = pppppppbStack_4e0;
                        auVar47._8_4_ = (undefined4)uStack_4d0;
                        auVar47._0_8_ = uStack_4d8;
                        auVar47._12_4_ = uStack_4d0._4_4_;
                        pppppppbStack_b0 = pppppppbStack_4c0;
                        pppppppbStack_128 = pppppppbStack_4b8;
                        pppppppbStack_120 = pppppppbStack_4b0;
                        uVar25 = uStack_4a8._1_4_;
                        uStack_148._4_4_ =
                             (undefined4)(CONCAT14(uStack_148._7_1_,uStack_4a8._4_4_) >> 8);
                        uStack_148 = (byte *******)CONCAT44(uStack_148._4_4_,uVar25);
                        if (SBORROW8(0,(longlong)pppppppbStack_4c8) &&
                            ((ulonglong)uStack_4a8 & 1) == 0) {
                          pppppppbVar35 = uStack_4e8;
                          if (2 < *_DAT_143ca8e90) {
                            pppppppbStack_98 = uStack_4e8;
                            pppppppbStack_1a8 = (byte *******)0x8000000000000000;
                            pdb_141b1e240(&pppppppbStack_8b0,pbStack_1e0,pppppppbStack_1d8,2);
                            pppppppbStack_748 = (byte *******)&pppppppbStack_8b0;
                            pppppppbStack_740 = (byte *******)pdb_140f58250;
                            uStack_738 = (byte *******)&UNK_1431e55f8;
                            uStack_730 = pdb_1402ed400;
                            uStack_4e8 = (byte *******)&UNK_1431e55d2;
                            pppppppbStack_4e0 = (byte *******)0x12;
                            uStack_4d8._0_4_ = 0x431e55d2;
                            uStack_4d8._4_4_ = 1;
                            uStack_4d0._0_4_ = 0x12;
                            uStack_4d0._4_4_ = 0;
                            pppppppbStack_4c8 = (byte *******)&UNK_1431e5658;
                            pdb_1400c9be0(&UNK_1431e5608,&pppppppbStack_748,3,&uStack_4e8);
                            goto LAB_140d974c3;
                          }
                          goto LAB_140d974e8;
                        }
                        pppppppbStack_c8 =
                             (byte *******)CONCAT71(pppppppbStack_c8._1_7_,(undefined1)uStack_4a8);
                        pppppppbStack_98 = uStack_4e8;
                        pppppppbStack_d0 = pppppppbStack_4c8;
                        pppppppbStack_1a8 = pppppppbStack_4c8;
                        pdb_141b49380(&pppppppbStack_240,pbStack_1e0,pppppppbStack_1d8,
                                      pppppppbStack_4e0,uStack_4d8,uStack_1f0,param_5);
                        goto LAB_140d9733d;
                      }
                    }
                    pppppppbStack_128 = pppppppbStack_f0;
                    if (*_DAT_143ca8e90 != 0) {
                      pdb_141b1e240(&pppppppbStack_8b0,pbStack_1e0,pppppppbStack_1d8,2);
                      pppppppbStack_740 = (byte *******)pdb_140f58250;
                      uStack_738 = (byte *******)&pppppppbStack_128;
                      uStack_730 = pdb_140f36c30;
                      uStack_4e8 = (byte *******)&UNK_1431e55d2;
                      pppppppbStack_4e0 = (byte *******)0x12;
                      uStack_4d8._0_4_ = 0x431e55d2;
                      uStack_4d8._4_4_ = 1;
                      uStack_4d0._0_4_ = 0x12;
                      uStack_4d0._4_4_ = 0;
                      pppppppbStack_4c8 = (byte *******)&UNK_1431e56a8;
                      pppppppbStack_748 = (byte *******)&pppppppbStack_8b0;
                      pdb_1400c9be0(&UNK_1431e568f,&pppppppbStack_748,1,&uStack_4e8);
                      if (pppppppbStack_8b0 != (byte *******)0x0) {
                        pub_1406abac0((byte *)pppppppbStack_8a8,(ulonglong)pppppppbStack_8b0,1);
                      }
                    }
                    pdb_140f36c40(&pppppppbStack_128);
                  }
                }
              }
              else {
                if ((longlong)pppppppbVar38 < 0) {
                  uVar41 = 0;
LAB_140d988a5:
                  pdb_142dc7e2a(uVar41,pppppppbVar38);
                  goto LAB_140d988b8;
                }
                if (pppppppbVar38 == (byte *******)0x0) {
                  pppppppbStack_748 = (byte *******)0x0;
                  pppppppbStack_740 = (byte *******)0x1;
                }
                else {
                  pdb_14007ee60();
                  pppppppbVar35 = (byte *******)pub_1406abab0((ulonglong)pppppppbVar38,1);
                  uVar41 = 1;
                  if (pppppppbVar35 == (byte *******)0x0) goto LAB_140d988a5;
                  pppppppbStack_748 = pppppppbVar38;
                  pppppppbStack_740 = pppppppbVar35;
                  pub_142e32760(pppppppbVar35,pbVar44,pppppppbVar38);
                }
                uStack_738 = pppppppbVar38;
                uStack_730 = (code *)CONCAT71(uStack_730._1_7_,uStack_1d0);
                pdb_140d9a400(&uStack_4e8,&pppppppbStack_748);
                pppppppbVar35 = uStack_4d8;
                auVar47._8_4_ = (undefined4)uStack_4d0;
                auVar47._0_8_ = uStack_4d8;
                auVar47._12_4_ = uStack_4d0._4_4_;
                pppppppbStack_b0 = pppppppbStack_4c0;
                pppppppbStack_128 = pppppppbStack_4b8;
                pppppppbStack_120 = pppppppbStack_4b0;
                uVar25 = uStack_4a8._1_4_;
                uStack_148._4_4_ = (undefined4)(CONCAT14(uStack_148._7_1_,uStack_4a8._4_4_) >> 8);
                uStack_148 = (byte *******)CONCAT44(uStack_148._4_4_,uVar25);
                pppppppbStack_a0 = pppppppbStack_4e0;
                if (!SBORROW8(0,(longlong)pppppppbStack_4c8) || ((ulonglong)uStack_4a8 & 1) != 0) {
                  pppppppbStack_c8 =
                       (byte *******)CONCAT71(pppppppbStack_c8._1_7_,(undefined1)uStack_4a8);
                  pppppppbStack_98 = uStack_4e8;
                  pppppppbStack_d0 = pppppppbStack_4c8;
                  pppppppbStack_1b0 = pppppppbStack_4c8;
                  pdb_141b4a7f0(&pppppppbStack_240,pppppppbStack_4e0,uStack_4d8,uStack_1f0,param_5);
LAB_140d9733d:
                  pppppppbStack_278 = pppppppbStack_128;
                  pppppppbStack_270 = pppppppbStack_120;
                  uStack_fc = (undefined3)((ulonglong)uStack_148 >> 0x20);
                  bStack_88 = bStack_88 ^ 1;
                  pppppppbStack_a8 = pppppppbStack_240;
                  pppppppbStack_b8 = pppppppbStack_238;
                  uStack_100 = (undefined4)uStack_148;
                  if ((longlong)pppppppbStack_c0 < 0) {
                    uVar41 = 0;
                    pppppppbVar38 = pppppppbStack_150;
LAB_140d988b2:
                    pdb_142dc7e2a(uVar41,pppppppbVar38);
LAB_140d988b8:
                    /* WARNING: Does not return */
                    pcVar3 = (code *)invalidInstructionException();
                    (*pcVar3)();
                  }
                  if (pppppppbStack_c0 == (byte *******)0x0) {
                    pppppppbStack_150 = (byte *******)0x1;
                  }
                  else {
                    pppppppbStack_198 = pppppppbVar35;
                    pdb_14007ee60(pppppppbVar35,pppppppbStack_150);
                    pppppppbVar38 = pppppppbStack_c0;
                    pppppppbVar35 = (byte *******)pub_1406abab0((ulonglong)pppppppbStack_c0,1);
                    if (pppppppbVar35 == (byte *******)0x0) {
                      uVar41 = 1;
                      goto LAB_140d988b2;
                    }
                    pppppppbStack_150 = pppppppbVar35;
                    pub_142e32760(pppppppbVar35,pppppppbStack_158,pppppppbVar38);
                    pppppppbVar35 = pppppppbStack_198;
                  }
                  uStack_738 = (byte *******)0x0;
                  uStack_730 = (code *)0x3;
                  pppppppbStack_728 = (byte *******)&UNK_1431e56c3;
                  pppppppbStack_720 = (byte *******)0xd;
                  pppppppbStack_718 = (byte *******)&UNK_1431e56d0;
                  pppppppbStack_710 = (byte *******)0xe;
                  pppppppbStack_708 = (byte *******)&UNK_1431e56de;
                  pppppppbStack_700 = (byte *******)0xd;
                  pppppppbStack_748 = pppppppbStack_a0;
                  pppppppbStack_740 = pppppppbVar35;
                  pdb_141daebe0(&pppppppbStack_8b0,&pppppppbStack_748);
                  uVar37 = uStack_178;
                  if (!SBORROW8(0,(longlong)pppppppbStack_8b0)) {
                    pppppppbStack_118 = pppppppbStack_898;
                    pppppppbStack_128 = pppppppbStack_8a8;
                    pppppppbStack_120 = pppppppbStack_8a0;
                  }
                  uStack_4a8 = pppppppbStack_98;
                  pppppppbStack_4a0 = pppppppbStack_a0;
                  pppppppbStack_488 = pppppppbStack_d0;
                  pppppppbStack_480 = pppppppbStack_b0;
                  pppppppbStack_478 = pppppppbStack_278;
                  pppppppbStack_470 = pppppppbStack_270;
                  uStack_468 = pppppppbStack_c8._0_1_;
                  uStack_463 = uStack_fc;
                  uStack_467 = uStack_100;
                  pppppppbStack_4c8 = pppppppbStack_230;
                  uStack_4d8._0_4_ = SUB84(pppppppbStack_240,0);
                  uStack_4d8._4_4_ = (undefined4)((ulonglong)pppppppbStack_240 >> 0x20);
                  uStack_4d0._0_4_ = SUB84(pppppppbStack_238,0);
                  uStack_4d0._4_4_ = (undefined4)((ulonglong)pppppppbStack_238 >> 0x20);
                  pppppppbStack_4c0 = pppppppbStack_c0;
                  pppppppbStack_4b8 = pppppppbStack_150;
                  pppppppbStack_4b0 = pppppppbStack_c0;
                  pppppppbStack_460 = pppppppbStack_8b0;
                  pppppppbStack_448 = pppppppbStack_118;
                  pppppppbStack_458 = pppppppbStack_128;
                  pppppppbStack_450 = pppppppbStack_120;
                  uStack_4e8 = (byte *******)0x0;
                  bStack_440 = bStack_88;
                  auStack_498 = auVar47;
                  if (uStack_178 == uStack_188) {
                    pdb_142d91cc0(&uStack_188);
                  }
                  pub_142e32760(uVar37 * 0xb0 + uStack_180,&uStack_4e8,0xb0);
                  uStack_178 = uVar37 + 1;
                  if (uStack_1e8 != 0) {
                    pub_1406abac0(pbVar44,uStack_1e8,1);
                  }
                  LOCK();
                  *pppppppbStack_da0 = (byte ******)((longlong)*pppppppbStack_da0 + -1);
                  UNLOCK();
                  if (*pppppppbStack_da0 == (byte ******)0x0) {
                    pdb_140cd0de0(&pppppppbStack_da0);
                  }
                  goto LAB_140d96f30;
                }
                pppppppbVar35 = uStack_4e8;
                if (2 < *_DAT_143ca8e90) {
                  pppppppbStack_98 = uStack_4e8;
                  pppppppbStack_1b0 = (byte *******)0x8000000000000000;
                  pdb_141b1e240(&pppppppbStack_8b0,pbVar44,pppppppbVar38,2);
                  pppppppbStack_748 = (byte *******)&pppppppbStack_8b0;
                  pppppppbStack_740 = (byte *******)pdb_140f58250;
                  uStack_738 = (byte *******)&UNK_1431e55f8;
                  uStack_730 = pdb_1402ed400;
                  uStack_4e8 = (byte *******)&UNK_1431e55d2;
                  pppppppbStack_4e0 = (byte *******)0x12;
                  uStack_4d8._0_4_ = 0x431e55d2;
                  uStack_4d8._4_4_ = 1;
                  uStack_4d0._0_4_ = 0x12;
                  uStack_4d0._4_4_ = 0;
                  pppppppbStack_4c8 = (byte *******)&UNK_1431e5658;
                  pdb_1400c9be0(&UNK_1431e5608,&pppppppbStack_748,3,&uStack_4e8);
LAB_140d974c3:
                  if (pppppppbStack_8b0 != (byte *******)0x0) {
                    pub_1406abac0((byte *)pppppppbStack_8a8,(ulonglong)pppppppbStack_8b0,1);
                  }
                  pppppppbVar35 = pppppppbStack_98;
                }
LAB_140d974e8:
                if (pppppppbVar35 != (byte *******)0x0) {
                  pub_1406abac0((byte *)pppppppbStack_a0,(ulonglong)pppppppbVar35,1);
                }
              }
            }
          }
        }
LAB_140d97e3b:
        if (uStack_1e8 != 0) {
          pub_1406abac0(pbStack_1e0,uStack_1e8,1);
        }
        LOCK();
        *pppppppbStack_da0 = (byte ******)((longlong)*pppppppbStack_da0 + -1);
        UNLOCK();
        if (*pppppppbStack_da0 == (byte ******)0x0) {
          pdb_140cd0de0(&pppppppbStack_da0);
        }
      } while( true );
    }
  }
  pdb_1404b38e0(&pppppppbStack_4e0);
  *param_1 = 0;
  param_1[1] = 8;
  *(undefined1 (*) [16])(param_1 + 2) = (undefined1  [16])0x0;
  param_1[4] = 8;
  param_1[5] = 0;
  return;
}

