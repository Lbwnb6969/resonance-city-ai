// VA 0x140a8cd60, PDB extent 4910 bytes
// country_core::resources::audio_resources::AudioCore::new
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/audio_resources.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::resources::audio_resources::AudioCore::new
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/audio_resources.rs
   Extent: 4910 */

undefined8 * pdb_140a8cd60(undefined8 *param_1,byte param_2)

{
  code *pcVar1;
  code *pcVar2;
  ulonglong uVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  code cVar10;
  code cVar11;
  code cVar12;
  code cVar13;
  code cVar14;
  code cVar15;
  code cVar16;
  code cVar17;
  code cVar18;
  code cVar19;
  code cVar20;
  code cVar21;
  code cVar22;
  code cVar23;
  code cVar24;
  code cVar25;
  undefined8 *puVar26;
  longlong lVar27;
  ushort uVar28;
  int iVar29;
  int iVar30;
  longlong *plVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  byte *pbVar34;
  code *pcVar35;
  byte *pbVar36;
  undefined4 uVar37;
  code **ppcVar38;
  longlong lVar39;
  uint uVar40;
  byte bVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
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
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined8 in_stack_fffffffffffff958;
  ulonglong in_stack_fffffffffffff960;
  code *pcStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  code *pcStack_658;
  ulonglong uStack_418;
  undefined8 uStack_410;
  longlong lStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3e8;
  undefined4 uStack_3e0;
  code *pcStack_3d8;
  code *pcStack_3d0;
  code *pcStack_3c8;
  ulonglong uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  code *pcStack_398;
  undefined8 uStack_390;
  undefined *puStack_388;
  code **ppcStack_380;
  code *pcStack_160;
  ulonglong uStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  code *pcStack_128;
  ulonglong uStack_120;
  undefined8 uStack_118;
  longlong lStack_110;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 *puStack_f8;
  code *pcStack_f0;
  undefined8 uStack_e8;
  ulonglong uStack_e0;
  undefined8 uStack_d8;
  longlong lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  int iStack_b0;
  undefined4 uStack_ac;
  code *pcStack_a8;
  code *pcStack_a0;
  longlong lStack_98;
  byte *pbStack_90;
  undefined1 uStack_83;
  undefined1 uStack_82;
  undefined1 uStack_81;
  undefined8 uStack_80;
  
  uVar37 = (undefined4)((ulonglong)in_stack_fffffffffffff958 >> 0x20);
  uStack_80 = 0xfffffffffffffffe;
  pdb_14180ad40(&pcStack_3d8);
  pcVar35 = pcStack_3d0;
  if (pcStack_3d8 == (code *)0x8000000000000004) {
    pcStack_a0 = pcStack_3d0;
    pdb_14180a7b0(&pcStack_3d8,&pcStack_a0);
    pcVar1 = pcStack_3d0;
    if (pcStack_3d8 == (code *)0x8000000000000004) {
      pcStack_a8 = pcStack_3d0;
      in_stack_fffffffffffff960 = in_stack_fffffffffffff960 & 0xffffffff00000000;
      pdb_14180b7f0(&pcStack_3d8,&pcStack_a8,0);
      if (pcStack_3d8 == (code *)0x8000000000000004) {
        pdb_14180b4c0(&pcStack_688,&pcStack_a8);
        pcVar4 = uStack_680;
        if (pcStack_688 != (code *)0x8000000000000004) {
          uStack_3a8 = pcStack_658;
          pcStack_3c8 = uStack_678;
          uStack_3c0 = uStack_670;
          pcStack_3d8 = pcStack_688;
          pcStack_3d0 = uStack_680;
                    /* WARNING: Subroutine does not return */
          pdb_142dc8170(&UNK_143044570,0x2b,&pcStack_3d8,&UNK_143044530,&UNK_143044060,
                        in_stack_fffffffffffff960);
        }
        pcStack_160 = pcVar1;
        iVar30 = uStack_680._4_4_;
        uStack_ac = (int)uStack_680;
        iStack_b0 = uStack_680._4_4_;
        pdb_14180b630(&pcStack_688,&pcStack_a8);
        if (pcStack_688 != (code *)0x8000000000000004) {
          uStack_3a8 = pcStack_658;
          pcStack_3c8 = uStack_678;
          uStack_3c0 = uStack_670;
          pcStack_3d8 = pcStack_688;
          pcStack_3d0 = uStack_680;
                    /* WARNING: Subroutine does not return */
          pdb_142dc8170(&UNK_143044570,0x2b,&pcStack_3d8,&UNK_143044530,&UNK_143044078,
                        in_stack_fffffffffffff960);
        }
        fVar7 = (float)(int)uStack_680;
        if (*_DAT_143ca8e90 < 5) {
          if (4 < *_DAT_143ca8e90) goto LAB_140a8d3be;
LAB_140a8ceba:
          uVar3 = *_DAT_143ca8e90;
        }
        else {
          pcStack_688 = (code *)&uStack_ac;
          uStack_680 = pdb_140f71a50;
          pcStack_3d8 = (code *)0x0;
          pcStack_3d0 = (code *)&UNK_143043e7a;
          pcStack_3c8 = (code *)0x28;
          uStack_3c0 = 0;
          uStack_3b8 = &UNK_143043d10;
          uStack_3b0 = 0x34;
          uStack_3a8 = (undefined *)0x5;
          uStack_3a0 = &UNK_143043e7a;
          pcStack_398 = (code *)0x28;
          uStack_390 = 0x6e00000001;
          puStack_388 = &UNK_143044090;
          ppcStack_380 = &pcStack_688;
          pdb_140f332f0(&uStack_81,&pcStack_3d8);
          if (*_DAT_143ca8e90 < 5) goto LAB_140a8ceba;
LAB_140a8d3be:
          pcStack_688 = (code *)&iStack_b0;
          uStack_680 = pdb_140f71c50;
          pcStack_3d8 = (code *)0x0;
          pcStack_3d0 = (code *)&UNK_143043e7a;
          pcStack_3c8 = (code *)0x28;
          uStack_3c0 = 0;
          uStack_3b8 = &UNK_143043d10;
          uStack_3b0 = 0x34;
          uStack_3a8 = (undefined *)0x5;
          uStack_3a0 = &UNK_143043e7a;
          pcStack_398 = (code *)0x28;
          uStack_390 = 0x6f00000001;
          puStack_388 = &UNK_1430440a8;
          ppcStack_380 = &pcStack_688;
          pdb_140f332f0(&uStack_81,&pcStack_3d8);
          uVar3 = *_DAT_143ca8e90;
        }
        if (4 < uVar3) {
          uVar3 = (ulonglong)uStack_e8 >> 0x20;
          uStack_e8 = (code *)CONCAT44((int)uVar3,
                                       ((float)iVar30 + _DAT_142f61000) *
                                       (((float)((ulonglong)pcVar4 & 0xffffffff) * _DAT_142e4bfe4) /
                                       fVar7));
          pcStack_688 = (code *)&uStack_e8;
          uStack_680 = pdb_140f70fc0;
          pcStack_3d8 = (code *)0x0;
          pcStack_3d0 = (code *)&UNK_143043e7a;
          pcStack_3c8 = (code *)0x28;
          uStack_3c0 = 0;
          uStack_3b8 = &UNK_143043d10;
          uStack_3b0 = 0x34;
          uStack_3a8 = (undefined *)0x5;
          uStack_3a0 = &UNK_143043e7a;
          pcStack_398 = (code *)0x28;
          uStack_390 = 0x7000000001;
          puStack_388 = &UNK_1430440bf;
          ppcStack_380 = &pcStack_688;
          pdb_140f332f0(&uStack_81,&pcStack_3d8);
        }
        pdb_141a16d00(&pcStack_3d8,&pcStack_a0,0x400,(ulonglong)(param_2 ^ 1) << 2,
                      CONCAT44(uVar37,4),0);
        if (pcStack_3d8 == (code *)0x8000000000000004) {
          pdb_140f4f710(&pcStack_3d8,&UNK_1430440e3,0x16);
          pcVar4 = pcStack_3d0;
          pcVar1 = pcStack_3d8;
          if (pcStack_3d8 == (code *)0x2) {
            pcStack_3d8 = pcStack_3d0;
                    /* WARNING: Subroutine does not return */
            pdb_142dc8170(&UNK_1430440f9,0x14,&pcStack_3d8,&UNK_143044510,&UNK_143044110);
          }
          pub_142e32760(&uStack_678,&pcStack_3c8,0x260);
          pcStack_688 = pcVar1;
          uStack_680 = pcVar4;
          uStack_82 = 1;
          plVar31 = (longlong *)pdb_14008d710(0);
          if (plVar31 == (longlong *)0x0) {
            uStack_82 = 1;
            pdb_142dc7890(&UNK_143326860);
LAB_140a8dbfd:
                    /* WARNING: Does not return */
            pcVar35 = (code *)invalidInstructionException();
            (*pcVar35)();
          }
          pcStack_f0 = pcVar35;
          uStack_c8 = *plVar31;
          uStack_c0 = plVar31[1];
          *plVar31 = *plVar31 + 1;
          uStack_d8 = _DAT_143366cc0;
          lStack_d0 = _UNK_143366cc8;
          uStack_e8 = _DAT_143366cb0;
          uStack_e0 = _UNK_143366cb8;
          ppcVar38 = &pcStack_3d8;
          puStack_f8 = param_1;
          pub_142e32760(ppcVar38,&pcStack_688,0x270);
          pdb_1417a70e0(&uStack_e8);
          pcStack_128 = uStack_e8;
          uStack_120 = uStack_e0;
          uStack_118 = uStack_d8;
          lStack_110 = lStack_d0;
          uStack_108 = (undefined4)uStack_c8;
          uStack_104 = uStack_c8._4_4_;
          uStack_100 = (undefined4)uStack_c0;
          uStack_fc = uStack_c0._4_4_;
          uStack_3e8 = pdb_140f3c9d0();
          uStack_3e0 = SUB84(ppcVar38,0);
          pcStack_3d0 = (code *)0x5;
          pcStack_3c8 = (code *)&UNK_143044128;
          uStack_3c0 = 0x13;
          uStack_3b8 = &UNK_14304413b;
          uStack_3b0 = 0xb;
          uStack_3a8 = &UNK_143044146;
          uStack_3a0 = (undefined *)0x12;
          pcStack_398 = (code *)&UNK_143044158;
          uStack_390 = 7;
          puStack_388 = &UNK_14304415f;
          ppcStack_380 = (code **)0xe;
          iVar30 = -(uint)(CONCAT13(unaff_XMM6_Bh,
                                    CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be)))
                          == CONCAT13(unaff_XMM6_Bh,
                                      CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be)))
                          );
          iVar8 = -(uint)(CONCAT13(unaff_XMM6_Bl,
                                   CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi))) ==
                         CONCAT13(unaff_XMM6_Bl,
                                  CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi))));
          iVar9 = -(uint)(CONCAT13(unaff_XMM6_Bp,
                                   CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm))) ==
                         CONCAT13(unaff_XMM6_Bp,
                                  CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm))));
          pcVar35 = (code *)0x0;
LAB_140a8d26e:
          if (pcVar35 != (code *)0x5) {
            pcVar1 = pcVar35 + 1;
            pcVar4 = (&pcStack_3c8)[(longlong)pcVar35 * 2];
            uVar3 = (&uStack_3c0)[(longlong)pcVar35 * 2];
            pcStack_3d8 = pcVar1;
            lVar27 = lStack_98;
            if (lStack_110 != 0) {
              uVar33 = pdb_1400af950(&uStack_108,pcVar4,uVar3);
              pcVar35 = pcStack_128;
              bVar41 = (byte)(uVar33 >> 0x39);
              auVar43 = ZEXT216(CONCAT11(bVar41,bVar41));
              auVar43 = pshuflw(auVar43,auVar43,0);
              lVar39 = 0;
              pbVar36 = (byte *)uStack_120;
              while( true ) {
                uVar33 = uVar33 & (ulonglong)pbVar36;
                pcVar2 = pcVar35 + uVar33;
                cVar10 = *pcVar2;
                cVar11 = pcVar2[1];
                cVar12 = pcVar2[2];
                cVar13 = pcVar2[3];
                cVar14 = pcVar2[4];
                cVar15 = pcVar2[5];
                cVar16 = pcVar2[6];
                cVar17 = pcVar2[7];
                cVar18 = pcVar2[8];
                cVar19 = pcVar2[9];
                cVar20 = pcVar2[10];
                cVar21 = pcVar2[0xb];
                cVar22 = pcVar2[0xc];
                cVar23 = pcVar2[0xd];
                cVar24 = pcVar2[0xe];
                cVar25 = pcVar2[0xf];
                auVar42[0] = -(cVar10 == auVar43[0]);
                auVar42[1] = -(cVar11 == auVar43[1]);
                auVar42[2] = -(cVar12 == auVar43[2]);
                auVar42[3] = -(cVar13 == auVar43[3]);
                auVar42[4] = -(cVar14 == auVar43[4]);
                auVar42[5] = -(cVar15 == auVar43[5]);
                auVar42[6] = -(cVar16 == auVar43[6]);
                auVar42[7] = -(cVar17 == auVar43[7]);
                auVar42[8] = -(cVar18 == auVar43[0]);
                auVar42[9] = -(cVar19 == auVar43[1]);
                auVar42[10] = -(cVar20 == auVar43[2]);
                auVar42[0xb] = -(cVar21 == auVar43[3]);
                auVar42[0xc] = -(cVar22 == auVar43[4]);
                auVar42[0xd] = -(cVar23 == auVar43[5]);
                auVar42[0xe] = -(cVar24 == auVar43[6]);
                auVar42[0xf] = -(cVar25 == auVar43[7]);
                uVar28 = (ushort)(SUB161(auVar42 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar42 >> 0xf,0) & 1) << 1 |
                         (ushort)(SUB161(auVar42 >> 0x17,0) & 1) << 2 |
                         (ushort)(SUB161(auVar42 >> 0x1f,0) & 1) << 3 |
                         (ushort)(SUB161(auVar42 >> 0x27,0) & 1) << 4 |
                         (ushort)(SUB161(auVar42 >> 0x2f,0) & 1) << 5 |
                         (ushort)(SUB161(auVar42 >> 0x37,0) & 1) << 6 |
                         (ushort)(SUB161(auVar42 >> 0x3f,0) & 1) << 7 |
                         (ushort)(SUB161(auVar42 >> 0x47,0) & 1) << 8 |
                         (ushort)(SUB161(auVar42 >> 0x4f,0) & 1) << 9 |
                         (ushort)(SUB161(auVar42 >> 0x57,0) & 1) << 10 |
                         (ushort)(SUB161(auVar42 >> 0x5f,0) & 1) << 0xb |
                         (ushort)(SUB161(auVar42 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auVar42 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auVar42 >> 0x77,0) & 1) << 0xe |
                         (ushort)(auVar42[0xf] >> 7) << 0xf;
                uVar40 = (uint)uVar28;
                lVar27 = lStack_98;
                while (lStack_98 = lVar39, uVar28 != 0) {
                  uVar5 = 0;
                  for (uVar6 = uVar40; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
                    uVar5 = uVar5 + 1;
                  }
                  uVar32 = uVar5 + uVar33 & (ulonglong)pbVar36;
                  pbStack_90 = pbVar36;
                  if ((uVar3 == *(ulonglong *)(pcVar35 + (uVar32 * -9 + -7) * 8)) &&
                     (iVar29 = pub_142e32750(pcVar4,*(undefined8 *)
                                                     (pcVar35 + (uVar32 * -9 + -8) * 8),uVar3),
                     iVar29 == 0)) {
                    ppcVar38 = &pcStack_a0;
                    pdb_140a8b960(pcVar35 + (uVar32 * -9 + -6) * 8);
                    pcVar35 = pcVar1;
                    goto LAB_140a8d26e;
                  }
                  uVar28 = (ushort)(uVar40 - 1) & (ushort)uVar40;
                  uVar40 = CONCAT22((short)(uVar40 - 1 >> 0x10),uVar28);
                  pbVar36 = pbStack_90;
                  lVar39 = lStack_98;
                  lVar27 = lStack_98;
                }
                auVar45[0] = -(cVar10 == (code)0xff);
                auVar45[1] = -(cVar11 == (code)0xff);
                auVar45[2] = -(cVar12 == (code)0xff);
                auVar45[3] = -(cVar13 == (code)0xff);
                auVar45[4] = -(cVar14 == SUB41(iVar30,0));
                auVar45[5] = -(cVar15 == SUB41((uint)iVar30 >> 8,0));
                auVar45[6] = -(cVar16 == SUB41((uint)iVar30 >> 0x10,0));
                auVar45[7] = -(cVar17 == SUB41((uint)iVar30 >> 0x18,0));
                auVar45[8] = -(cVar18 == SUB41(iVar8,0));
                auVar45[9] = -(cVar19 == SUB41((uint)iVar8 >> 8,0));
                auVar45[10] = -(cVar20 == SUB41((uint)iVar8 >> 0x10,0));
                auVar45[0xb] = -(cVar21 == SUB41((uint)iVar8 >> 0x18,0));
                auVar45[0xc] = -(cVar22 == SUB41(iVar9,0));
                auVar45[0xd] = -(cVar23 == SUB41((uint)iVar9 >> 8,0));
                auVar45[0xe] = -(cVar24 == SUB41((uint)iVar9 >> 0x10,0));
                auVar45[0xf] = -(cVar25 == SUB41((uint)iVar9 >> 0x18,0));
                if ((((((((((((((((SUB161(auVar45 >> 7,0) & 1) != 0 ||
                                 (SUB161(auVar45 >> 0xf,0) & 1) != 0) ||
                                (SUB161(auVar45 >> 0x17,0) & 1) != 0) ||
                               (SUB161(auVar45 >> 0x1f,0) & 1) != 0) ||
                              (SUB161(auVar45 >> 0x27,0) & 1) != 0) ||
                             (SUB161(auVar45 >> 0x2f,0) & 1) != 0) ||
                            (SUB161(auVar45 >> 0x37,0) & 1) != 0) ||
                           (SUB161(auVar45 >> 0x3f,0) & 1) != 0) ||
                          (SUB161(auVar45 >> 0x47,0) & 1) != 0) ||
                         (SUB161(auVar45 >> 0x4f,0) & 1) != 0) ||
                        (SUB161(auVar45 >> 0x57,0) & 1) != 0) ||
                       (SUB161(auVar45 >> 0x5f,0) & 1) != 0) || (SUB161(auVar45 >> 0x67,0) & 1) != 0
                      ) || (SUB161(auVar45 >> 0x6f,0) & 1) != 0) ||
                    (SUB161(auVar45 >> 0x77,0) & 1) != 0) || auVar45[0xf] < '\0') break;
                uVar33 = uVar33 + lStack_98 + 0x10;
                lVar39 = lStack_98 + 0x10;
                lStack_98 = lVar27;
              }
            }
            lStack_98 = lVar27;
            pdb_142dc8110(pcVar4,uVar3,&UNK_1430441a8);
            goto LAB_140a8dbfd;
          }
          pcStack_3d0 = (code *)0x5;
          pcStack_3c8 = (code *)&UNK_143044128;
          uStack_3c0 = 0x13;
          uStack_3b8 = &UNK_14304413b;
          uStack_3b0 = 0xb;
          uStack_3a8 = &UNK_143044146;
          uStack_3a0 = (undefined *)0x12;
          pcStack_398 = (code *)&UNK_143044158;
          uStack_390 = 7;
          puStack_388 = &UNK_14304415f;
          ppcStack_380 = (code **)0xe;
          pcVar35 = (code *)0x0;
LAB_140a8d5f7:
          uVar37 = SUB84(ppcVar38,0);
          if (pcVar35 != (code *)0x5) {
            pcVar1 = pcVar35 + 1;
            pcVar4 = (&pcStack_3c8)[(longlong)pcVar35 * 2];
            uVar3 = (&uStack_3c0)[(longlong)pcVar35 * 2];
            pcStack_3d8 = pcVar1;
            lVar27 = lStack_98;
            pbVar36 = pbStack_90;
            if (lStack_110 != 0) {
              uVar32 = pdb_1400af950(&uStack_108,pcVar4,uVar3);
              uVar33 = uStack_120;
              pcVar35 = pcStack_128;
              bVar41 = (byte)(uVar32 >> 0x39);
              auVar43 = ZEXT216(CONCAT11(bVar41,bVar41));
              auVar43 = pshuflw(auVar43,auVar43,0);
              lVar39 = 0;
              while( true ) {
                pbVar34 = (byte *)(uVar32 & uVar33);
                pcVar2 = pcVar35 + (longlong)pbVar34;
                cVar10 = *pcVar2;
                cVar11 = pcVar2[1];
                cVar12 = pcVar2[2];
                cVar13 = pcVar2[3];
                cVar14 = pcVar2[4];
                cVar15 = pcVar2[5];
                cVar16 = pcVar2[6];
                cVar17 = pcVar2[7];
                cVar18 = pcVar2[8];
                cVar19 = pcVar2[9];
                cVar20 = pcVar2[10];
                cVar21 = pcVar2[0xb];
                cVar22 = pcVar2[0xc];
                cVar23 = pcVar2[0xd];
                cVar24 = pcVar2[0xe];
                cVar25 = pcVar2[0xf];
                auVar44[0] = -(cVar10 == auVar43[0]);
                auVar44[1] = -(cVar11 == auVar43[1]);
                auVar44[2] = -(cVar12 == auVar43[2]);
                auVar44[3] = -(cVar13 == auVar43[3]);
                auVar44[4] = -(cVar14 == auVar43[4]);
                auVar44[5] = -(cVar15 == auVar43[5]);
                auVar44[6] = -(cVar16 == auVar43[6]);
                auVar44[7] = -(cVar17 == auVar43[7]);
                auVar44[8] = -(cVar18 == auVar43[0]);
                auVar44[9] = -(cVar19 == auVar43[1]);
                auVar44[10] = -(cVar20 == auVar43[2]);
                auVar44[0xb] = -(cVar21 == auVar43[3]);
                auVar44[0xc] = -(cVar22 == auVar43[4]);
                auVar44[0xd] = -(cVar23 == auVar43[5]);
                auVar44[0xe] = -(cVar24 == auVar43[6]);
                auVar44[0xf] = -(cVar25 == auVar43[7]);
                uVar28 = (ushort)(SUB161(auVar44 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar44 >> 0xf,0) & 1) << 1 |
                         (ushort)(SUB161(auVar44 >> 0x17,0) & 1) << 2 |
                         (ushort)(SUB161(auVar44 >> 0x1f,0) & 1) << 3 |
                         (ushort)(SUB161(auVar44 >> 0x27,0) & 1) << 4 |
                         (ushort)(SUB161(auVar44 >> 0x2f,0) & 1) << 5 |
                         (ushort)(SUB161(auVar44 >> 0x37,0) & 1) << 6 |
                         (ushort)(SUB161(auVar44 >> 0x3f,0) & 1) << 7 |
                         (ushort)(SUB161(auVar44 >> 0x47,0) & 1) << 8 |
                         (ushort)(SUB161(auVar44 >> 0x4f,0) & 1) << 9 |
                         (ushort)(SUB161(auVar44 >> 0x57,0) & 1) << 10 |
                         (ushort)(SUB161(auVar44 >> 0x5f,0) & 1) << 0xb |
                         (ushort)(SUB161(auVar44 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auVar44 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auVar44 >> 0x77,0) & 1) << 0xe |
                         (ushort)(auVar44[0xf] >> 7) << 0xf;
                uVar40 = (uint)uVar28;
                lVar27 = lStack_98;
                pbVar36 = pbStack_90;
                while (lStack_98 = lVar39, pbStack_90 = pbVar34, uVar28 != 0) {
                  uVar5 = 0;
                  for (uVar6 = uVar40; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
                    uVar5 = uVar5 + 1;
                  }
                  uVar32 = (ulonglong)uVar5 + (longlong)pbStack_90 & uVar33;
                  if (uVar3 == *(ulonglong *)(pcVar35 + (uVar32 * -9 + -7) * 8)) {
                    ppcVar38 = *(code ***)(pcVar35 + (uVar32 * -9 + -8) * 8);
                    iVar30 = pub_142e32750(pcVar4,ppcVar38,uVar3);
                    if (iVar30 == 0) {
                      pdb_140a8b7e0(pcVar35 + (uVar32 * -9 + -6) * 8);
                      pcVar35 = pcVar1;
                      goto LAB_140a8d5f7;
                    }
                  }
                  uVar28 = (ushort)(uVar40 - 1) & (ushort)uVar40;
                  uVar40 = CONCAT22((short)(uVar40 - 1 >> 0x10),uVar28);
                  pbVar34 = pbStack_90;
                  lVar39 = lStack_98;
                  lVar27 = lStack_98;
                  pbVar36 = pbStack_90;
                }
                auVar46[0] = -(cVar10 == (code)0xff);
                auVar46[1] = -(cVar11 == (code)0xff);
                auVar46[2] = -(cVar12 == (code)0xff);
                auVar46[3] = -(cVar13 == (code)0xff);
                auVar46[4] = -(cVar14 == (code)0xff);
                auVar46[5] = -(cVar15 == (code)0xff);
                auVar46[6] = -(cVar16 == (code)0xff);
                auVar46[7] = -(cVar17 == (code)0xff);
                auVar46[8] = -(cVar18 == (code)0xff);
                auVar46[9] = -(cVar19 == (code)0xff);
                auVar46[10] = -(cVar20 == (code)0xff);
                auVar46[0xb] = -(cVar21 == (code)0xff);
                auVar46[0xc] = -(cVar22 == (code)0xff);
                auVar46[0xd] = -(cVar23 == (code)0xff);
                auVar46[0xe] = -(cVar24 == (code)0xff);
                auVar46[0xf] = -(cVar25 == (code)0xff);
                if ((((((((((((((((SUB161(auVar46 >> 7,0) & 1) != 0 ||
                                 (SUB161(auVar46 >> 0xf,0) & 1) != 0) ||
                                (SUB161(auVar46 >> 0x17,0) & 1) != 0) ||
                               (SUB161(auVar46 >> 0x1f,0) & 1) != 0) ||
                              (SUB161(auVar46 >> 0x27,0) & 1) != 0) ||
                             (SUB161(auVar46 >> 0x2f,0) & 1) != 0) ||
                            (SUB161(auVar46 >> 0x37,0) & 1) != 0) ||
                           (SUB161(auVar46 >> 0x3f,0) & 1) != 0) ||
                          (SUB161(auVar46 >> 0x47,0) & 1) != 0) ||
                         (SUB161(auVar46 >> 0x4f,0) & 1) != 0) ||
                        (SUB161(auVar46 >> 0x57,0) & 1) != 0) ||
                       (SUB161(auVar46 >> 0x5f,0) & 1) != 0) || (SUB161(auVar46 >> 0x67,0) & 1) != 0
                      ) || (SUB161(auVar46 >> 0x6f,0) & 1) != 0) ||
                    (SUB161(auVar46 >> 0x77,0) & 1) != 0) || auVar46[0xf] < '\0') break;
                uVar32 = (longlong)pbStack_90 + lStack_98 + 0x10;
                lVar39 = lStack_98 + 0x10;
                lStack_98 = lVar27;
                pbStack_90 = pbVar36;
              }
            }
            pbStack_90 = pbVar36;
            lStack_98 = lVar27;
            pdb_142dc8110(pcVar4,uVar3,&UNK_143044190);
            goto LAB_140a8dbfd;
          }
          if (3 < *_DAT_143ca8e90) {
            uStack_e8 = (code *)pdb_140f3cb70(&uStack_3e8);
            uStack_e0 = CONCAT44(uStack_e0._4_4_,uVar37);
            pcStack_688 = (code *)&uStack_e8;
            uStack_680 = pdb_140f72840;
            pcStack_3d8 = (code *)0x0;
            pcStack_3d0 = (code *)&UNK_143043e7a;
            pcStack_3c8 = (code *)0x28;
            uStack_3c0 = 0;
            uStack_3b8 = &UNK_143043d10;
            uStack_3b0 = 0x34;
            uStack_3a8 = (undefined *)0x4;
            uStack_3a0 = &UNK_143043e7a;
            pcStack_398 = (code *)0x28;
            uStack_390 = 0xaa00000001;
            puStack_388 = &UNK_14304416d;
            ppcStack_380 = &pcStack_688;
            pdb_140f332f0(&uStack_81,&pcStack_3d8);
          }
          pcVar35 = pcStack_f0;
          uStack_660 = CONCAT44(uStack_fc,uStack_100);
          uStack_418 = uStack_120;
          uStack_410 = uStack_118;
          lStack_408 = lStack_110;
          uStack_668 = CONCAT44(uStack_104,uStack_108);
          param_1 = puStack_f8;
          uStack_400 = uStack_668;
          uStack_3f8 = uStack_660;
          if (pcStack_128 != (code *)0x0) {
            uStack_670 = lStack_110;
            uStack_680 = (code *)uStack_120;
            uStack_678 = (code *)uStack_118;
            pcStack_688 = pcStack_128;
            pcStack_658 = pcStack_f0;
            uStack_83 = 1;
            pdb_141a54c60(&pcStack_3d8,1);
            puVar26 = puStack_f8;
            uVar3 = uStack_3c0;
            pcVar1 = pcStack_3c8;
            uStack_e8 = pcStack_3c8;
            uStack_e0 = uStack_3c0;
            pcStack_398 = pcStack_658;
            uStack_3a8._0_4_ = (undefined4)uStack_668;
            uStack_3a8._4_4_ = uStack_668._4_4_;
            uStack_3a0._0_4_ = (undefined4)uStack_660;
            uStack_3a0._4_4_ = uStack_660._4_4_;
            uStack_3b8._0_4_ = SUB84(uStack_678,0);
            uStack_3b8._4_4_ = uStack_678._4_4_;
            uStack_3b0._0_4_ = (undefined4)uStack_670;
            uStack_3b0._4_4_ = uStack_670._4_4_;
            pcStack_3c8 = pcStack_688;
            uStack_3c0 = (ulonglong)uStack_680;
            pdb_14007ee60();
            pbVar36 = pub_1406abab0(0x48,8);
            if (pbVar36 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc7e11(8,0x48);
            }
            *(code **)(pbVar36 + 0x40) = pcStack_398;
            *(undefined4 *)(pbVar36 + 0x30) = (undefined4)uStack_3a8;
            *(undefined4 *)(pbVar36 + 0x34) = uStack_3a8._4_4_;
            *(undefined4 *)(pbVar36 + 0x38) = (undefined4)uStack_3a0;
            *(undefined4 *)(pbVar36 + 0x3c) = uStack_3a0._4_4_;
            *(undefined4 *)(pbVar36 + 0x20) = (undefined4)uStack_3b8;
            *(undefined4 *)(pbVar36 + 0x24) = uStack_3b8._4_4_;
            *(undefined4 *)(pbVar36 + 0x28) = (undefined4)uStack_3b0;
            *(undefined4 *)(pbVar36 + 0x2c) = uStack_3b0._4_4_;
            *(code **)(pbVar36 + 0x10) = pcStack_3c8;
            *(ulonglong *)(pbVar36 + 0x18) = uStack_3c0;
            *(code **)pbVar36 = pcStack_3d8;
            *(code **)(pbVar36 + 8) = pcStack_3d0;
            pdb_14007ee60();
            pbVar34 = pub_1406abab0(0x20,8);
            if (pbVar34 != (byte *)0x0) {
              pbVar34[0] = 1;
              pbVar34[1] = 0;
              pbVar34[2] = 0;
              pbVar34[3] = 0;
              pbVar34[4] = 0;
              pbVar34[5] = 0;
              pbVar34[6] = 0;
              pbVar34[7] = 0;
              pbVar34[8] = 1;
              pbVar34[9] = 0;
              pbVar34[10] = 0;
              pbVar34[0xb] = 0;
              pbVar34[0xc] = 0;
              pbVar34[0xd] = 0;
              pbVar34[0xe] = 0;
              pbVar34[0xf] = 0;
              *(code **)(pbVar34 + 0x10) = pcVar35;
              *(code **)(pbVar34 + 0x18) = pcStack_160;
              puVar26[2] = pbVar34;
              *puVar26 = pbVar36;
              puVar26[1] = &UNK_1430442d8;
              puVar26[3] = 1;
              *(undefined2 *)(puVar26 + 4) = 0;
              puVar26[5] = pcVar1;
              puVar26[6] = uVar3;
              return puVar26;
            }
            pbStack_90 = pbVar36;
                    /* WARNING: Subroutine does not return */
            pdb_142dc7e11(8,0x20);
          }
          goto LAB_140a8d70e;
        }
      }
      uStack_158 = uStack_3c0;
      puStack_150 = uStack_3b8;
      uStack_148 = uStack_3b0;
      puStack_140 = uStack_3a8;
    }
    else {
      uStack_158 = uStack_3c0;
      puStack_150 = uStack_3b8;
      uStack_148 = uStack_3b0;
      puStack_140 = uStack_3a8;
    }
  }
  else {
    uStack_158 = uStack_3c0;
    puStack_150 = uStack_3b8;
    uStack_148 = uStack_3b0;
    puStack_140 = uStack_3a8;
  }
  uStack_3c0 = uStack_158;
  uStack_3b8 = puStack_150;
  uStack_3b0 = uStack_148;
  uStack_3a8 = puStack_140;
  pcVar35 = (code *)pdb_142d8ef60(&pcStack_3d8);
LAB_140a8d70e:
  uStack_e8 = pcVar35;
  if (*_DAT_143ca8e90 != 0) {
    pcStack_688 = (code *)&uStack_e8;
    uStack_680 = pdb_140f36c30;
    pcStack_3d8 = (code *)0x0;
    pcStack_3d0 = (code *)&UNK_143043e7a;
    pcStack_3c8 = (code *)0x28;
    uStack_3c0 = 0;
    uStack_3b8 = &UNK_143043d10;
    uStack_3b0 = 0x34;
    uStack_3a8 = (undefined *)0x1;
    uStack_3a0 = &UNK_143043e7a;
    pcStack_398 = (code *)0x28;
    uStack_390 = 0x12b00000001;
    puStack_388 = &UNK_1430442f8;
    ppcStack_380 = &pcStack_688;
    pdb_140f332f0(&uStack_81,&pcStack_3d8);
  }
  pdb_140f36c40(&uStack_e8);
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 1;
  param_1[1] = &UNK_143044320;
  return param_1;
}

