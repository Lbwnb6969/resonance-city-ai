// VA 0x1402d5780, PDB extent 2458 bytes
// ron::de::impl$2::deserialize_struct<rhapsody::raw::init::_::impl$0::deserialize::__Visitor>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   ron::de::impl$2::deserialize_struct<rhapsody::raw::init::_::impl$0::deserialize::__Visitor>
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
   Extent: 2458 */

char * pdb_1402d5780(char *param_1,int *param_2,undefined8 param_3,longlong param_4)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  char cVar20;
  longlong lVar21;
  undefined1 uVar22;
  int *piVar23;
  longlong lVar24;
  int *piVar25;
  byte *pbVar26;
  char cVar27;
  undefined1 auVar28 [16];
  undefined4 unaff_XMM6_Da;
  undefined4 unaff_XMM6_Db;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 unaff_XMM8_Da;
  undefined4 unaff_XMM8_Db;
  undefined4 unaff_XMM8_Dc;
  undefined4 unaff_XMM8_Dd;
  undefined8 uStack_1c8;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  int *piStack_1a0;
  longlong lStack_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  longlong lStack_178;
  byte *pbStack_170;
  longlong lStack_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  int *piStack_158;
  byte *pbStack_150;
  int *piStack_148;
  longlong lStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined4 uStack_124;
  int *piStack_120;
  undefined2 uStack_118;
  undefined1 uStack_116;
  undefined *puStack_110;
  uint uStack_104;
  undefined *puStack_100;
  char cStack_f8;
  byte bStack_f7;
  char cStack_f6;
  char cStack_f5;
  char cStack_f4;
  char cStack_f3;
  char cStack_f2;
  char cStack_f1;
  char cStack_f0;
  char cStack_ef;
  char cStack_ee;
  char cStack_ed;
  char cStack_ec;
  char cStack_eb;
  char cStack_ea;
  char cStack_e9;
  undefined2 uStack_e8;
  undefined2 uStack_e6;
  undefined4 uStack_e4;
  undefined2 uStack_e0;
  undefined2 uStack_de;
  undefined4 uStack_dc;
  undefined2 uStack_d8;
  undefined6 uStack_d6;
  undefined2 uStack_d0;
  undefined6 uStack_ce;
  undefined2 uStack_c8;
  undefined6 uStack_c6;
  undefined2 uStack_c0;
  undefined6 uStack_be;
  undefined2 uStack_b8;
  undefined6 uStack_b6;
  longlong lStack_b0;
  undefined4 uStack_a8;
  undefined2 uStack_a4;
  char cStack_a1;
  undefined8 uStack_a0;
  
  uStack_a0 = 0xfffffffffffffffe;
  if (((char)param_2[0x1a] == '\0') &&
     (pdb_140dd1950(&cStack_f8,param_2 + 4,param_3,param_4), cStack_f8 != '2')) {
    *(ulonglong *)(param_1 + 0x40) = CONCAT62(uStack_b6,uStack_b8);
    *(ulonglong *)(param_1 + 0x32) = CONCAT26(uStack_c0,uStack_c6);
    *(ulonglong *)(param_1 + 0x3a) = CONCAT26(uStack_b8,uStack_be);
    *(ulonglong *)(param_1 + 0x22) = CONCAT26(uStack_d0,uStack_d6);
    *(ulonglong *)(param_1 + 0x2a) = CONCAT26(uStack_c8,uStack_ce);
    *(ulonglong *)(param_1 + 0x12) = CONCAT26(uStack_e0,CONCAT42(uStack_e4,uStack_e6));
    *(ulonglong *)(param_1 + 0x1a) = CONCAT26(uStack_d8,CONCAT42(uStack_dc,uStack_de));
    *(ulonglong *)(param_1 + 2) =
         CONCAT17(cStack_ef,
                  CONCAT16(cStack_f0,
                           CONCAT15(cStack_f1,
                                    CONCAT14(cStack_f2,
                                             CONCAT13(cStack_f3,
                                                      CONCAT12(cStack_f4,
                                                               CONCAT11(cStack_f5,cStack_f6)))))));
    *(ulonglong *)(param_1 + 10) =
         CONCAT26(uStack_e8,
                  CONCAT15(cStack_e9,
                           CONCAT14(cStack_ea,
                                    CONCAT13(cStack_eb,
                                             CONCAT12(cStack_ec,CONCAT11(cStack_ed,cStack_ee))))));
    *param_1 = cStack_f8;
    param_1[1] = bStack_f7;
  }
  else {
    piVar25 = param_2 + 4;
    pdb_140dd4ac0(&cStack_f8,piVar25);
    if (cStack_f8 == '2') {
      cStack_a1 = '\x01';
      if ((char)param_2[0x1a] == '\0') {
        cVar20 = pdb_140dce020(piVar25,0x28);
        if (cVar20 == '\0') {
          if (param_4 != 0) {
            *param_1 = '\x16';
            *(undefined8 *)(param_1 + 8) = param_3;
            *(longlong *)(param_1 + 0x10) = param_4;
            return param_1;
          }
          *param_1 = '\x15';
          return param_1;
        }
        cStack_a1 = (char)param_2[0x1a];
      }
      *(char *)(param_2 + 0x1a) = '\0';
      if ((char)*param_2 != '\0') {
        if (*(longlong *)(param_2 + 2) == 0) {
          *param_1 = '0';
          return param_1;
        }
        *(longlong *)(param_2 + 2) = *(longlong *)(param_2 + 2) + -1;
      }
      uVar19 = _UNK_142e69a3c;
      uVar18 = _UNK_142e69a38;
      uVar17 = _UNK_142e69a34;
      uVar16 = _DAT_142e69a30;
      cVar15 = UNK_142e69a2f;
      cVar14 = UNK_142e69a2e;
      cVar13 = UNK_142e69a2d;
      cVar12 = UNK_142e69a2c;
      cVar11 = UNK_142e69a2b;
      cVar10 = UNK_142e69a2a;
      cVar9 = UNK_142e69a29;
      cVar8 = UNK_142e69a28;
      cVar7 = UNK_142e69a27;
      cVar6 = UNK_142e69a26;
      cVar5 = UNK_142e69a25;
      cVar4 = UNK_142e69a24;
      cVar3 = UNK_142e69a23;
      cVar2 = UNK_142e69a22;
      bVar1 = UNK_142e69a21;
      cVar20 = DAT_142e69a20;
      uVar32 = _UNK_142e698ec;
      uVar31 = _UNK_142e698e8;
      uVar30 = _UNK_142e698e4;
      uVar29 = _DAT_142e698e0;
      uStack_118 = 0x103;
      uStack_116 = 0;
      lStack_b0 = -0x8000000000000000;
      uStack_104 = 0;
      puStack_100 = &UNK_142e69de8;
      lVar24 = param_4;
      piStack_158 = piVar25;
      piStack_120 = param_2;
LAB_1402d58e0:
      do {
        pdb_140dca8b0(&cStack_f8,&piStack_120);
        piVar23 = (int *)(ulonglong)bStack_f7;
        if (cStack_f8 != '2') {
          uStack_a4 = CONCAT11(cStack_f5,cStack_f6);
          uStack_a8 = CONCAT13(cStack_f1,CONCAT12(cStack_f2,CONCAT11(cStack_f3,cStack_f4)));
          puStack_110 = (undefined *)
                        CONCAT17(cStack_e9,
                                 CONCAT16(cStack_ea,
                                          CONCAT15(cStack_eb,
                                                   CONCAT14(cStack_ec,
                                                            CONCAT13(cStack_ed,
                                                                     CONCAT12(cStack_ee,
                                                                              CONCAT11(cStack_ef,
                                                                                       cStack_f0))))
                                                  )));
          uVar29 = CONCAT22(uStack_e6,uStack_e8);
          uVar31 = CONCAT22(uStack_de,uStack_e0);
          unaff_XMM6_Da = (undefined4)CONCAT62(uStack_d6,uStack_d8);
          unaff_XMM6_Db = (undefined4)((uint6)uStack_d6 >> 0x10);
          uStack_1c8 = (int *)CONCAT62(uStack_ce,uStack_d0);
          puStack_1c0 = (undefined *)CONCAT62(uStack_c6,uStack_c8);
          uStack_1b8 = CONCAT62(uStack_be,uStack_c0);
          uStack_1b0 = CONCAT62(uStack_b6,uStack_b8);
          uVar30 = uStack_e4;
          uVar32 = uStack_dc;
          cVar27 = cStack_f8;
LAB_1402d5dcb:
          uStack_138 = uStack_1b8;
          uStack_130 = uStack_1b0;
          piStack_148 = uStack_1c8;
          lStack_140 = (longlong)puStack_1c0;
          puStack_100 = puStack_110;
          goto LAB_1402d5de8;
        }
        if ((bStack_f7 & 1) == 0) {
LAB_1402d5cca:
          cVar20 = cStack_a1;
          uVar22 = SUB81(piVar23,0);
          cVar27 = '+';
          if ((uStack_104 & 1) != 0) {
            if (!SBORROW8(0,lStack_b0)) {
              if (*param_2 == 1) {
                lVar21 = -1;
                if (*(longlong *)(param_2 + 2) + 1 != 0) {
                  lVar21 = *(longlong *)(param_2 + 2) + 1;
                }
                *(longlong *)(param_2 + 2) = lVar21;
              }
              lStack_178 = lStack_b0;
              pbStack_170 = pbStack_150;
              uStack_160 = uStack_124;
              lStack_168 = lVar24;
              pdb_140dd4ac0(&cStack_f8,piStack_158);
              if (cStack_f8 == '2') {
                if ((cVar20 != '\0') || (cVar20 = pdb_140dce020(piStack_158,0x29), cVar20 != '\0'))
                {
                  *(longlong *)(param_1 + 0x18) = lStack_168;
                  *(ulonglong *)(param_1 + 0x20) = CONCAT44(uStack_15c,uStack_160);
                  *(longlong *)(param_1 + 8) = lStack_178;
                  *(byte **)(param_1 + 0x10) = pbStack_170;
                  *param_1 = '2';
                  return param_1;
                }
                *param_1 = '\x17';
              }
              else {
                *(ulonglong *)(param_1 + 0x40) = CONCAT62(uStack_b6,uStack_b8);
                *(ulonglong *)(param_1 + 0x30) = CONCAT62(uStack_c6,uStack_c8);
                *(ulonglong *)(param_1 + 0x38) = CONCAT62(uStack_be,uStack_c0);
                *(ulonglong *)(param_1 + 0x20) = CONCAT62(uStack_d6,uStack_d8);
                *(ulonglong *)(param_1 + 0x28) = CONCAT62(uStack_ce,uStack_d0);
                *(ulonglong *)(param_1 + 0x10) = CONCAT44(uStack_e4,CONCAT22(uStack_e6,uStack_e8));
                *(ulonglong *)(param_1 + 0x18) = CONCAT44(uStack_dc,CONCAT22(uStack_de,uStack_e0));
                *(ulonglong *)param_1 =
                     CONCAT17(cStack_f1,
                              CONCAT16(cStack_f2,
                                       CONCAT15(cStack_f3,
                                                CONCAT14(cStack_f4,
                                                         CONCAT13(cStack_f5,
                                                                  CONCAT12(cStack_f6,
                                                                           CONCAT11(bStack_f7,
                                                                                    cStack_f8)))))))
                ;
                *(ulonglong *)(param_1 + 8) =
                     CONCAT17(cStack_e9,
                              CONCAT16(cStack_ea,
                                       CONCAT15(cStack_eb,
                                                CONCAT14(cStack_ec,
                                                         CONCAT13(cStack_ed,
                                                                  CONCAT12(cStack_ee,
                                                                           CONCAT11(cStack_ef,
                                                                                    cStack_f0)))))))
                ;
              }
              pdb_1404c99a0(&lStack_178);
              return param_1;
            }
            puStack_100 = &UNK_142e69def;
            uVar29 = uVar16;
            uVar30 = uVar17;
            uVar31 = uVar18;
            uVar32 = uVar19;
          }
          goto LAB_1402d5df0;
        }
        pdb_140dcace0(&cStack_f8);
        piVar23 = piStack_120;
        auVar28[0] = -(cStack_f8 == cVar20);
        auVar28[1] = -(bStack_f7 == bVar1);
        auVar28[2] = -(cStack_f6 == cVar2);
        auVar28[3] = -(cStack_f5 == cVar3);
        auVar28[4] = -(cStack_f4 == cVar4);
        auVar28[5] = -(cStack_f3 == cVar5);
        auVar28[6] = -(cStack_f2 == cVar6);
        auVar28[7] = -(cStack_f1 == cVar7);
        auVar28[8] = -(cStack_f0 == cVar8);
        auVar28[9] = -(cStack_ef == cVar9);
        auVar28[10] = -(cStack_ee == cVar10);
        auVar28[0xb] = -(cStack_ed == cVar11);
        auVar28[0xc] = -(cStack_ec == cVar12);
        auVar28[0xd] = -(cStack_eb == cVar13);
        auVar28[0xe] = -(cStack_ea == cVar14);
        auVar28[0xf] = -(cStack_e9 == cVar15);
        uStack_116 = (ushort)((ushort)(SUB161(auVar28 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar28 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar28 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar28 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar28 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar28 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar28 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar28 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar28 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar28 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar28 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar28 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar28 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar28 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar28 >> 0x77,0) & 1) << 0xe |
                             (ushort)(auVar28[0xf] >> 7) << 0xf) == 0xffff;
        cVar27 = (char)*piStack_120;
        if ((char)uStack_118 != '\x01') {
          if ((char)uStack_118 != '\x03') {
            if (cVar27 != '\0') {
              if (*(longlong *)(piStack_120 + 2) == 0) goto LAB_1402d5dbe;
              *(longlong *)(piStack_120 + 2) = *(longlong *)(piStack_120 + 2) + -1;
            }
            pdb_140dcce90(&cStack_f8,piStack_120 + 4);
            if (cStack_f8 == '2') {
              piVar25 = (int *)CONCAT17(cStack_e9,
                                        CONCAT16(cStack_ea,
                                                 CONCAT15(cStack_eb,
                                                          CONCAT14(cStack_ec,
                                                                   CONCAT13(cStack_ed,
                                                                            CONCAT12(cStack_ee,
                                                                                     CONCAT11(
                                                  cStack_ef,cStack_f0)))))));
              lVar21 = CONCAT44(uStack_e4,CONCAT22(uStack_e6,uStack_e8));
              *(int **)(piVar23 + 0x16) = piVar25;
              *(longlong *)(piVar23 + 0x18) = lVar21;
              if (lVar21 == 5) {
                if ((char)piVar25[1] != 's' || *piVar25 != 0x6d657469) goto LAB_1402d5bd6;
                piVar25 = (int *)0x1;
              }
              else if ((lVar21 == 7) &&
                      (*(int *)((longlong)piVar25 + 3) == 0x6e6f6973 && *piVar25 == 0x73726576)) {
                piVar25 = (int *)0x0;
              }
              else {
LAB_1402d5bd6:
                piVar25 = (int *)0x2;
              }
            }
            else {
              piVar25 = (int *)(ulonglong)bStack_f7;
              uStack_a4 = CONCAT11(cStack_f5,cStack_f6);
              uStack_a8 = CONCAT13(cStack_f1,CONCAT12(cStack_f2,CONCAT11(cStack_f3,cStack_f4)));
              puStack_110 = (undefined *)
                            CONCAT17(cStack_e9,
                                     CONCAT16(cStack_ea,
                                              CONCAT15(cStack_eb,
                                                       CONCAT14(cStack_ec,
                                                                CONCAT13(cStack_ed,
                                                                         CONCAT12(cStack_ee,
                                                                                  CONCAT11(cStack_ef
                                                  ,cStack_f0)))))));
              unaff_XMM8_Da = CONCAT22(uStack_e6,uStack_e8);
              unaff_XMM8_Dc = CONCAT22(uStack_de,uStack_e0);
              unaff_XMM6_Da = (undefined4)CONCAT62(uStack_d6,uStack_d8);
              unaff_XMM6_Db = (undefined4)((uint6)uStack_d6 >> 0x10);
              uStack_1c8 = (int *)CONCAT62(uStack_ce,uStack_d0);
              puStack_1c0 = (undefined *)CONCAT62(uStack_c6,uStack_c8);
              uStack_1b8 = CONCAT62(uStack_be,uStack_c0);
              uStack_1b0 = CONCAT62(uStack_b6,uStack_b8);
              unaff_XMM8_Db = uStack_e4;
              unaff_XMM8_Dd = uStack_dc;
            }
            goto LAB_1402d5a13;
          }
          if (cVar27 == '\0') {
LAB_1402d5969:
            piStack_148 = piStack_120;
            lStack_140 = (ulonglong)lStack_140._1_7_ << 8;
            pdb_140343120(&cStack_f8,&piStack_148);
            goto LAB_1402d59ad;
          }
          if (*(longlong *)(piStack_120 + 2) != 0) {
            *(longlong *)(piStack_120 + 2) = *(longlong *)(piStack_120 + 2) + -1;
            goto LAB_1402d5969;
          }
LAB_1402d5dbe:
          cVar27 = '0';
LAB_1402d5dc1:
          piVar23 = (int *)((ulonglong)piVar25 & 0xffffffff);
          uVar29 = unaff_XMM8_Da;
          uVar30 = unaff_XMM8_Db;
          uVar31 = unaff_XMM8_Dc;
          uVar32 = unaff_XMM8_Dd;
          goto LAB_1402d5dcb;
        }
        if (cVar27 != '\0') {
          if (*(longlong *)(piStack_120 + 2) == 0) goto LAB_1402d5dbe;
          *(longlong *)(piStack_120 + 2) = *(longlong *)(piStack_120 + 2) + -1;
        }
        piStack_148 = piStack_120;
        lStack_140 = CONCAT71(lStack_140._1_7_,1);
        pdb_140343120(&cStack_f8,&piStack_148);
LAB_1402d59ad:
        if (cStack_f8 != '2') {
          uStack_a4 = CONCAT11(cStack_f5,cStack_f6);
          uStack_a8 = CONCAT13(cStack_f1,CONCAT12(cStack_f2,CONCAT11(cStack_f3,cStack_f4)));
          puStack_110 = (undefined *)
                        CONCAT17(cStack_e9,
                                 CONCAT16(cStack_ea,
                                          CONCAT15(cStack_eb,
                                                   CONCAT14(cStack_ec,
                                                            CONCAT13(cStack_ed,
                                                                     CONCAT12(cStack_ee,
                                                                              CONCAT11(cStack_ef,
                                                                                       cStack_f0))))
                                                  )));
          unaff_XMM8_Da = CONCAT22(uStack_e6,uStack_e8);
          unaff_XMM8_Dc = CONCAT22(uStack_de,uStack_e0);
          unaff_XMM6_Da = (undefined4)CONCAT62(uStack_d6,uStack_d8);
          unaff_XMM6_Db = (undefined4)((uint6)uStack_d6 >> 0x10);
          uStack_1c8 = (int *)CONCAT62(uStack_ce,uStack_d0);
          puStack_1c0 = (undefined *)CONCAT62(uStack_c6,uStack_c8);
          uStack_1b8 = CONCAT62(uStack_be,uStack_c0);
          uStack_1b0 = CONCAT62(uStack_b6,uStack_b8);
          unaff_XMM8_Db = uStack_e4;
          unaff_XMM8_Dd = uStack_dc;
        }
        piVar25 = (int *)(ulonglong)bStack_f7;
LAB_1402d5a13:
        if ((char)*piStack_120 != '\0') {
          lVar21 = *(longlong *)(piStack_120 + 2) + 1;
          if (lVar21 == 0) {
            lVar21 = -1;
          }
          *(longlong *)(piStack_120 + 2) = lVar21;
        }
        cVar27 = cStack_f8;
        if (cStack_f8 != '2') goto LAB_1402d5dc1;
        if ((char)piVar25 != '\x02') {
          if (piVar25 == (int *)0x0) {
            if (uStack_104 != 0) {
              cVar27 = ',';
              goto LAB_1402d5de8;
            }
            pdb_1402bf0c0(&cStack_f8,&piStack_120);
            if (cStack_f8 != '2') break;
            uStack_124 = CONCAT13(cStack_f1,CONCAT12(cStack_f2,CONCAT11(cStack_f3,cStack_f4)));
            uStack_104 = 1;
          }
          else {
            if ((int)piVar25 != 1) goto LAB_1402d5cca;
            if (!SBORROW8(0,lStack_b0)) {
              cVar27 = ',';
              puStack_100 = &UNK_142e69def;
              uVar29 = uVar16;
              uVar30 = uVar17;
              uVar31 = uVar18;
              uVar32 = uVar19;
              goto LAB_1402d5de8;
            }
            pdb_1402be890(&cStack_f8,&piStack_120);
            if (cStack_f8 != '2') break;
            lStack_b0 = CONCAT17(cStack_e9,
                                 CONCAT16(cStack_ea,
                                          CONCAT15(cStack_eb,
                                                   CONCAT14(cStack_ec,
                                                            CONCAT13(cStack_ed,
                                                                     CONCAT12(cStack_ee,
                                                                              CONCAT11(cStack_ef,
                                                                                       cStack_f0))))
                                                  )));
            pbStack_150 = (byte *)CONCAT44(uStack_e4,CONCAT22(uStack_e6,uStack_e8));
            lVar24 = CONCAT44(uStack_dc,CONCAT22(uStack_de,uStack_e0));
          }
          goto LAB_1402d58e0;
        }
        pdb_1402c9020(&cStack_f8,&piStack_120);
      } while (cStack_f8 == '2');
      piVar23 = (int *)(ulonglong)bStack_f7;
      uStack_a4 = CONCAT11(cStack_f5,cStack_f6);
      uStack_a8 = CONCAT13(cStack_f1,CONCAT12(cStack_f2,CONCAT11(cStack_f3,cStack_f4)));
      puStack_100 = (undefined *)
                    CONCAT17(cStack_e9,
                             CONCAT16(cStack_ea,
                                      CONCAT15(cStack_eb,
                                               CONCAT14(cStack_ec,
                                                        CONCAT13(cStack_ed,
                                                                 CONCAT12(cStack_ee,
                                                                          CONCAT11(cStack_ef,
                                                                                   cStack_f0)))))));
      unaff_XMM6_Da = (undefined4)CONCAT62(uStack_d6,uStack_d8);
      unaff_XMM6_Db = (undefined4)((uint6)uStack_d6 >> 0x10);
      piStack_148 = (int *)CONCAT62(uStack_ce,uStack_d0);
      lStack_140 = CONCAT62(uStack_c6,uStack_c8);
      uStack_138 = CONCAT62(uStack_be,uStack_c0);
      uStack_130 = CONCAT62(uStack_b6,uStack_b8);
      uVar29 = CONCAT22(uStack_e6,uStack_e8);
      uVar30 = uStack_e4;
      uVar31 = CONCAT22(uStack_de,uStack_e0);
      uVar32 = uStack_dc;
      cVar27 = cStack_f8;
LAB_1402d5de8:
      uVar22 = SUB81(piVar23,0);
LAB_1402d5df0:
      cVar20 = cStack_a1;
      lVar21 = lStack_b0;
      if (!SBORROW8(0,lStack_b0)) {
        if (lVar24 != 0) {
          pbVar26 = pbStack_150 + 0x10;
          do {
            if (*(ulonglong *)(pbVar26 + -8) != 0) {
              pub_1406abac0(*(byte **)pbVar26,*(ulonglong *)(pbVar26 + -8),1);
            }
            pbVar26 = pbVar26 + 0x20;
            lVar24 = lVar24 + -1;
          } while (lVar24 != 0);
        }
        if (lVar21 != 0) {
          pub_1406abac0(pbStack_150,lVar21 << 5,8);
        }
      }
      uStack_1c8 = (int *)CONCAT44(uStack_a8,CONCAT22(uStack_a4,CONCAT11(uVar22,cVar27)));
      puStack_1c0 = puStack_100;
      uStack_1b8 = CONCAT44(uVar30,uVar29);
      uStack_1b0 = CONCAT44(uVar32,uVar31);
      uStack_1a8 = CONCAT44(unaff_XMM6_Db,unaff_XMM6_Da);
      piStack_1a0 = piStack_148;
      lStack_198 = lStack_140;
      if (cVar20 != '\0') {
        param_3 = 0;
      }
      uStack_190 = (undefined4)uStack_138;
      uStack_18c = uStack_138._4_4_;
      uStack_188 = (undefined4)uStack_130;
      uStack_184 = uStack_130._4_4_;
      if (param_4 == 0) {
        param_3 = 0;
      }
      pdb_140dca990(&cStack_f8,&uStack_1c8,param_3);
      *(ulonglong *)param_1 =
           CONCAT17(cStack_f1,
                    CONCAT16(cStack_f2,
                             CONCAT15(cStack_f3,
                                      CONCAT14(cStack_f4,
                                               CONCAT13(cStack_f5,
                                                        CONCAT12(cStack_f6,
                                                                 CONCAT11(bStack_f7,cStack_f8)))))))
      ;
      *(ulonglong *)(param_1 + 8) =
           CONCAT17(cStack_e9,
                    CONCAT16(cStack_ea,
                             CONCAT15(cStack_eb,
                                      CONCAT14(cStack_ec,
                                               CONCAT13(cStack_ed,
                                                        CONCAT12(cStack_ee,
                                                                 CONCAT11(cStack_ef,cStack_f0)))))))
      ;
      *(ulonglong *)(param_1 + 0x10) = CONCAT44(uStack_e4,CONCAT22(uStack_e6,uStack_e8));
      *(ulonglong *)(param_1 + 0x18) = CONCAT44(uStack_dc,CONCAT22(uStack_de,uStack_e0));
      *(ulonglong *)(param_1 + 0x20) = CONCAT62(uStack_d6,uStack_d8);
      *(ulonglong *)(param_1 + 0x28) = CONCAT62(uStack_ce,uStack_d0);
      *(ulonglong *)(param_1 + 0x30) = CONCAT62(uStack_c6,uStack_c8);
      *(ulonglong *)(param_1 + 0x38) = CONCAT62(uStack_be,uStack_c0);
      *(ulonglong *)(param_1 + 0x40) = CONCAT62(uStack_b6,uStack_b8);
    }
    else {
      *(ulonglong *)(param_1 + 0x40) = CONCAT62(uStack_b6,uStack_b8);
      *(ulonglong *)(param_1 + 0x30) = CONCAT62(uStack_c6,uStack_c8);
      *(ulonglong *)(param_1 + 0x38) = CONCAT62(uStack_be,uStack_c0);
      *(ulonglong *)(param_1 + 0x20) = CONCAT62(uStack_d6,uStack_d8);
      *(ulonglong *)(param_1 + 0x28) = CONCAT62(uStack_ce,uStack_d0);
      *(ulonglong *)(param_1 + 0x10) = CONCAT44(uStack_e4,CONCAT22(uStack_e6,uStack_e8));
      *(ulonglong *)(param_1 + 0x18) = CONCAT44(uStack_dc,CONCAT22(uStack_de,uStack_e0));
      *(ulonglong *)param_1 =
           CONCAT17(cStack_f1,
                    CONCAT16(cStack_f2,
                             CONCAT15(cStack_f3,
                                      CONCAT14(cStack_f4,
                                               CONCAT13(cStack_f5,
                                                        CONCAT12(cStack_f6,
                                                                 CONCAT11(bStack_f7,cStack_f8)))))))
      ;
      *(ulonglong *)(param_1 + 8) =
           CONCAT17(cStack_e9,
                    CONCAT16(cStack_ea,
                             CONCAT15(cStack_eb,
                                      CONCAT14(cStack_ec,
                                               CONCAT13(cStack_ed,
                                                        CONCAT12(cStack_ee,
                                                                 CONCAT11(cStack_ef,cStack_f0)))))))
      ;
    }
  }
  return param_1;
}

