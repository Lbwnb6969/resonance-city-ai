// VA 0x1402d6d10, PDB extent 4960 bytes
// ron::de::impl$2::deserialize_struct<country_core::game_profile::_::impl$0::deserialize::__Visitor>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   ron::de::impl$2::deserialize_struct<country_core::game_profile::_::impl$0::deserialize::__Visitor>
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
   Extent: 4960 */

char * pdb_1402d6d10(char *param_1,int *param_2,undefined8 param_3,longlong param_4)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  byte bVar4;
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
  char cVar16;
  char cVar17;
  char cVar18;
  char *pcVar19;
  longlong lVar20;
  ulonglong unaff_R13;
  undefined1 auVar21 [16];
  undefined4 unaff_XMM6_Da;
  char cStack_1d2;
  char cStack_1d1;
  char cStack_1b8;
  byte bStack_1b7;
  char cStack_1b6;
  char cStack_1b5;
  char cStack_1b4;
  char cStack_1b3;
  char cStack_1b2;
  char cStack_1b1;
  char cStack_1b0;
  char cStack_1af;
  char cStack_1ae;
  char cStack_1ad;
  char cStack_1ac;
  char cStack_1ab;
  char cStack_1aa;
  char cStack_1a9;
  undefined2 uStack_1a8;
  undefined6 uStack_1a6;
  undefined2 uStack_1a0;
  undefined6 uStack_19e;
  undefined2 uStack_198;
  undefined6 uStack_196;
  undefined2 uStack_190;
  undefined6 uStack_18e;
  undefined2 uStack_188;
  undefined6 uStack_186;
  undefined2 uStack_180;
  undefined6 uStack_17e;
  undefined2 uStack_178;
  undefined6 uStack_176;
  undefined1 uStack_163;
  undefined1 uStack_162;
  undefined1 uStack_161;
  byte bStack_160;
  byte bStack_15f;
  byte bStack_15e;
  byte bStack_15d;
  byte bStack_15c;
  undefined1 uStack_15b;
  byte bStack_15a;
  byte bStack_159;
  undefined1 uStack_158;
  byte bStack_157;
  undefined1 uStack_156;
  byte bStack_155;
  byte bStack_154;
  byte bStack_153;
  byte bStack_152;
  byte bStack_151;
  byte bStack_150;
  byte bStack_14f;
  undefined1 uStack_14e;
  undefined1 uStack_14d;
  undefined1 uStack_14c;
  undefined1 uStack_14b;
  undefined1 uStack_14a;
  undefined1 uStack_149;
  undefined1 uStack_148;
  undefined1 uStack_147;
  undefined1 uStack_146;
  undefined1 uStack_145;
  undefined1 uStack_144;
  undefined1 uStack_143;
  undefined1 uStack_142;
  undefined1 uStack_141;
  undefined1 uStack_140;
  undefined1 uStack_13f;
  undefined1 uStack_13e;
  undefined1 uStack_13d;
  undefined1 uStack_13c;
  undefined1 uStack_13b;
  undefined1 uStack_13a;
  char cStack_139;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_108;
  undefined8 uStack_100;
  int *piStack_f0;
  undefined2 uStack_e8;
  undefined1 uStack_e6;
  char cStack_e0;
  byte bStack_df;
  undefined2 uStack_de;
  char cStack_dc;
  char cStack_db;
  char cStack_da;
  char cStack_d9;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  if (((char)param_2[0x1a] == '\0') &&
     (pdb_140dd1950(&cStack_1b8,param_2 + 4,param_3,param_4), cStack_1b8 != '2')) {
    *(ulonglong *)(param_1 + 0x40) = CONCAT62(uStack_176,uStack_178);
    *(ulonglong *)(param_1 + 0x32) = CONCAT26(uStack_180,uStack_186);
    *(ulonglong *)(param_1 + 0x3a) = CONCAT26(uStack_178,uStack_17e);
    *(ulonglong *)(param_1 + 0x22) = CONCAT26(uStack_190,uStack_196);
    *(ulonglong *)(param_1 + 0x2a) = CONCAT26(uStack_188,uStack_18e);
    *(ulonglong *)(param_1 + 0x12) = CONCAT26(uStack_1a0,uStack_1a6);
    *(ulonglong *)(param_1 + 0x1a) = CONCAT26(uStack_198,uStack_19e);
    *(ulonglong *)(param_1 + 2) =
         CONCAT17(cStack_1af,
                  CONCAT16(cStack_1b0,
                           CONCAT15(cStack_1b1,
                                    CONCAT14(cStack_1b2,
                                             CONCAT13(cStack_1b3,
                                                      CONCAT12(cStack_1b4,
                                                               CONCAT11(cStack_1b5,cStack_1b6)))))))
    ;
    *(ulonglong *)(param_1 + 10) =
         CONCAT26(uStack_1a8,
                  CONCAT15(cStack_1a9,
                           CONCAT14(cStack_1aa,
                                    CONCAT13(cStack_1ab,
                                             CONCAT12(cStack_1ac,CONCAT11(cStack_1ad,cStack_1ae)))))
                 );
    *param_1 = cStack_1b8;
    param_1[1] = bStack_1b7;
    return param_1;
  }
  piVar1 = param_2 + 4;
  pdb_140dd4ac0(&cStack_1b8,piVar1);
  if (cStack_1b8 != '2') {
LAB_1402d7bdf:
    *(ulonglong *)(param_1 + 0x40) = CONCAT62(uStack_176,uStack_178);
    *(ulonglong *)(param_1 + 0x30) = CONCAT62(uStack_186,uStack_188);
    *(ulonglong *)(param_1 + 0x38) = CONCAT62(uStack_17e,uStack_180);
    *(ulonglong *)(param_1 + 0x20) = CONCAT62(uStack_196,uStack_198);
    *(ulonglong *)(param_1 + 0x28) = CONCAT62(uStack_18e,uStack_190);
    *(ulonglong *)(param_1 + 0x10) = CONCAT62(uStack_1a6,uStack_1a8);
    *(ulonglong *)(param_1 + 0x18) = CONCAT62(uStack_19e,uStack_1a0);
    *(ulonglong *)param_1 =
         CONCAT17(cStack_1b1,
                  CONCAT16(cStack_1b2,
                           CONCAT15(cStack_1b3,
                                    CONCAT14(cStack_1b4,
                                             CONCAT13(cStack_1b5,
                                                      CONCAT12(cStack_1b6,
                                                               CONCAT11(bStack_1b7,cStack_1b8)))))))
    ;
    *(ulonglong *)(param_1 + 8) =
         CONCAT17(cStack_1a9,
                  CONCAT16(cStack_1aa,
                           CONCAT15(cStack_1ab,
                                    CONCAT14(cStack_1ac,
                                             CONCAT13(cStack_1ad,
                                                      CONCAT12(cStack_1ae,
                                                               CONCAT11(cStack_1af,cStack_1b0)))))))
    ;
    return param_1;
  }
  cStack_139 = '\x01';
  if ((char)param_2[0x1a] == '\0') {
    cVar18 = pdb_140dce020(piVar1,0x28);
    if (cVar18 == '\0') {
      if (param_4 != 0) {
        *param_1 = '\x16';
        *(undefined8 *)(param_1 + 8) = param_3;
        *(longlong *)(param_1 + 0x10) = param_4;
        return param_1;
      }
      *param_1 = '\x15';
      return param_1;
    }
    cStack_139 = (char)param_2[0x1a];
  }
  *(char *)(param_2 + 0x1a) = '\0';
  if ((char)*param_2 != '\0') {
    if (*(longlong *)(param_2 + 2) == 0) {
      *param_1 = '0';
      return param_1;
    }
    *(longlong *)(param_2 + 2) = *(longlong *)(param_2 + 2) + -1;
  }
  uStack_e8 = 0x103;
  uStack_e6 = 0;
  piStack_f0 = param_2;
  pdb_140dca8b0(&cStack_1b8,&piStack_f0);
  cVar17 = UNK_142e69a7f;
  cVar16 = UNK_142e69a7e;
  cVar15 = UNK_142e69a7d;
  cVar14 = UNK_142e69a7c;
  cVar13 = UNK_142e69a7b;
  cVar12 = UNK_142e69a7a;
  cVar11 = UNK_142e69a79;
  cVar10 = UNK_142e69a78;
  cVar9 = UNK_142e69a77;
  cVar8 = UNK_142e69a76;
  cVar7 = UNK_142e69a75;
  cVar6 = UNK_142e69a74;
  cVar5 = UNK_142e69a73;
  cVar2 = UNK_142e69a72;
  bVar4 = UNK_142e69a71;
  cVar18 = DAT_142e69a70;
  if (cStack_1b8 != '2') {
    unaff_XMM6_Da = CONCAT13(cStack_1b3,CONCAT12(cStack_1b4,CONCAT11(cStack_1b5,cStack_1b6)));
    uStack_d8 = CONCAT17(cStack_1a9,
                         CONCAT16(cStack_1aa,
                                  CONCAT15(cStack_1ab,
                                           CONCAT14(cStack_1ac,
                                                    CONCAT13(cStack_1ad,
                                                             CONCAT12(cStack_1ae,
                                                                      CONCAT11(cStack_1af,cStack_1b0
                                                                              )))))));
    uStack_d0 = CONCAT62(uStack_1a6,uStack_1a8);
    uStack_98 = CONCAT62(uStack_196,uStack_198);
    uStack_90 = CONCAT62(uStack_18e,uStack_190);
    uStack_88 = CONCAT62(uStack_186,uStack_188);
    uStack_80 = CONCAT62(uStack_17e,uStack_180);
    uStack_78 = CONCAT62(uStack_176,uStack_178);
    cStack_e0 = cStack_1b8;
    cStack_1d1 = cStack_1b2;
    cStack_1d2 = cStack_1b1;
    bStack_df = bStack_1b7;
    goto LAB_1402d7c94;
  }
  bStack_15a = 2;
  bStack_157 = 2;
  bStack_155 = 2;
  bStack_153 = 2;
  bStack_151 = 2;
  bStack_150 = 2;
  uStack_162 = 2;
  uStack_163 = 2;
  uStack_161 = 2;
  uStack_15b = 2;
  uStack_158 = 2;
  uStack_156 = 2;
  bStack_154 = 2;
  bStack_152 = 2;
  bStack_14f = 2;
  bStack_159 = 2;
  bStack_160 = 2;
  bStack_15f = 2;
  bStack_15e = 2;
  bStack_15d = 2;
  bStack_15c = 2;
  uStack_13a = 2;
  uStack_13b = 2;
  uStack_13c = 2;
  uStack_13d = 2;
  uStack_13e = 2;
  uStack_13f = 2;
  uStack_140 = 2;
  uStack_141 = 2;
  uStack_142 = 2;
  uStack_143 = 2;
  uStack_144 = 2;
  uStack_145 = 2;
  uStack_146 = 2;
  uStack_147 = 2;
  uStack_148 = 2;
  uStack_149 = 2;
  uStack_14a = 2;
  uStack_14b = 2;
  uStack_14c = 2;
  uStack_14d = 2;
  uStack_14e = 2;
  if ((bStack_1b7 & 1) == 0) {
    if (*param_2 == 1) {
      lVar20 = -1;
      if (*(longlong *)(param_2 + 2) + 1 != 0) {
        lVar20 = *(longlong *)(param_2 + 2) + 1;
      }
      *(longlong *)(param_2 + 2) = lVar20;
    }
    pdb_140dd4ac0(&cStack_1b8,piVar1);
    if (cStack_1b8 == '2') {
      if ((cStack_139 == '\0') && (cVar18 = pdb_140dce020(piVar1,0x29), cVar18 == '\0')) {
        *param_1 = '\x17';
        return param_1;
      }
      param_1[1] = '\0';
      param_1[2] = bStack_15a & 1;
      param_1[3] = bStack_157 & 1;
      param_1[4] = bStack_155 & 1;
      param_1[5] = bStack_153 & 1;
      param_1[6] = bStack_151 & 1;
      param_1[7] = bStack_150 & 1;
      *(ulonglong *)(param_1 + 8) =
           (ulonglong)(bStack_152 & 1) << 0x38 | (ulonglong)(bStack_154 & 1) << 0x30 |
           (ulonglong)
           (CONCAT15(uStack_156,
                     CONCAT14(uStack_158,
                              CONCAT13(uStack_15b,
                                       CONCAT12(uStack_161,CONCAT11(uStack_163,uStack_162))))) &
           0x10101010101);
      param_1[0x10] = bStack_14f & 1;
      param_1[0x11] = bStack_159 & 1;
      param_1[0x12] = bStack_160 & 1;
      param_1[0x13] = bStack_15f & 1;
      param_1[0x14] = bStack_15e & 1;
      param_1[0x15] = bStack_15d & 1;
      param_1[0x16] = bStack_15c & 1;
      *param_1 = '2';
      return param_1;
    }
    goto LAB_1402d7bdf;
  }
  pdb_140dcace0(&cStack_1b8);
  piVar1 = piStack_f0;
  auVar21[0] = -(cStack_1b8 == cVar18);
  auVar21[1] = -(bStack_1b7 == bVar4);
  auVar21[2] = -(cStack_1b6 == cVar2);
  auVar21[3] = -(cStack_1b5 == cVar5);
  auVar21[4] = -(cStack_1b4 == cVar6);
  auVar21[5] = -(cStack_1b3 == cVar7);
  auVar21[6] = -(cStack_1b2 == cVar8);
  auVar21[7] = -(cStack_1b1 == cVar9);
  auVar21[8] = -(cStack_1b0 == cVar10);
  auVar21[9] = -(cStack_1af == cVar11);
  auVar21[10] = -(cStack_1ae == cVar12);
  auVar21[0xb] = -(cStack_1ad == cVar13);
  auVar21[0xc] = -(cStack_1ac == cVar14);
  auVar21[0xd] = -(cStack_1ab == cVar15);
  auVar21[0xe] = -(cStack_1aa == cVar16);
  auVar21[0xf] = -(cStack_1a9 == cVar17);
  uStack_e6 = (ushort)((ushort)(SUB161(auVar21 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar21 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar21 >> 0x17,0) & 1) << 2 |
                       (ushort)(SUB161(auVar21 >> 0x1f,0) & 1) << 3 |
                       (ushort)(SUB161(auVar21 >> 0x27,0) & 1) << 4 |
                       (ushort)(SUB161(auVar21 >> 0x2f,0) & 1) << 5 |
                       (ushort)(SUB161(auVar21 >> 0x37,0) & 1) << 6 |
                       (ushort)(SUB161(auVar21 >> 0x3f,0) & 1) << 7 |
                       (ushort)(SUB161(auVar21 >> 0x47,0) & 1) << 8 |
                       (ushort)(SUB161(auVar21 >> 0x4f,0) & 1) << 9 |
                       (ushort)(SUB161(auVar21 >> 0x57,0) & 1) << 10 |
                       (ushort)(SUB161(auVar21 >> 0x5f,0) & 1) << 0xb |
                       (ushort)(SUB161(auVar21 >> 0x67,0) & 1) << 0xc |
                       (ushort)(SUB161(auVar21 >> 0x6f,0) & 1) << 0xd |
                       (ushort)(SUB161(auVar21 >> 0x77,0) & 1) << 0xe |
                      (ushort)(auVar21[0xf] >> 7) << 0xf) == 0xffff;
  cVar18 = (char)*piStack_f0;
  if ((char)uStack_e8 == '\x01') {
    if (cVar18 != '\0') {
      if (*(longlong *)(piStack_f0 + 2) == 0) goto LAB_1402d7c6f;
      *(longlong *)(piStack_f0 + 2) = *(longlong *)(piStack_f0 + 2) + -1;
    }
    pdb_1402cd120(&cStack_1b8,piStack_f0);
    if (cStack_1b8 != '2') {
      unaff_XMM6_Da = CONCAT13(cStack_1b3,CONCAT12(cStack_1b4,CONCAT11(cStack_1b5,cStack_1b6)));
      cStack_1d1 = cStack_1b2;
      cStack_1d2 = cStack_1b1;
      uStack_108 = CONCAT17(cStack_1a9,
                            CONCAT16(cStack_1aa,
                                     CONCAT15(cStack_1ab,
                                              CONCAT14(cStack_1ac,
                                                       CONCAT13(cStack_1ad,
                                                                CONCAT12(cStack_1ae,
                                                                         CONCAT11(cStack_1af,
                                                                                  cStack_1b0)))))));
      uStack_100 = CONCAT62(uStack_1a6,uStack_1a8);
      uStack_98 = CONCAT62(uStack_196,uStack_198);
      uStack_90 = CONCAT62(uStack_18e,uStack_190);
      uStack_88 = CONCAT62(uStack_186,uStack_188);
      uStack_80 = CONCAT62(uStack_17e,uStack_180);
      uStack_78 = CONCAT62(uStack_176,uStack_178);
    }
    unaff_R13 = (ulonglong)bStack_1b7;
    cVar18 = cStack_1b8;
    if ((char)*piStack_f0 == '\0') goto LAB_1402d71d2;
LAB_1402d71bc:
    lVar20 = *(longlong *)(piStack_f0 + 2) + 1;
    if (lVar20 == 0) {
      lVar20 = -1;
    }
    *(longlong *)(piStack_f0 + 2) = lVar20;
LAB_1402d71d2:
    if (cVar18 == '2') {
                    /* WARNING: Could not recover jumptable at 0x0001402d71ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pcVar19 = (char *)(*(code *)(&UNK_142e6abec + *(int *)(&UNK_142e6abec + unaff_R13 * 4)))();
      return pcVar19;
    }
  }
  else {
    if ((char)uStack_e8 != '\x03') {
      if (cVar18 != '\0') {
        if (*(longlong *)(piStack_f0 + 2) == 0) goto LAB_1402d7c6f;
        *(longlong *)(piStack_f0 + 2) = *(longlong *)(piStack_f0 + 2) + -1;
      }
      pdb_140dcce90(&cStack_1b8,piStack_f0 + 4);
      if (cStack_1b8 == '2') {
        *(ulonglong *)(piVar1 + 0x16) =
             CONCAT17(cStack_1a9,
                      CONCAT16(cStack_1aa,
                               CONCAT15(cStack_1ab,
                                        CONCAT14(cStack_1ac,
                                                 CONCAT13(cStack_1ad,
                                                          CONCAT12(cStack_1ae,
                                                                   CONCAT11(cStack_1af,cStack_1b0)))
                                                ))));
        *(ulonglong *)(piVar1 + 0x18) = CONCAT62(uStack_1a6,uStack_1a8);
        pdb_140489500(&cStack_e0);
        if (cStack_e0 != '2') {
          uStack_108 = uStack_d8;
          uStack_100 = uStack_d0;
          goto LAB_1402d7430;
        }
        iVar3 = *piStack_f0;
        cVar18 = '2';
      }
      else {
        cStack_db = cStack_1b3;
        cStack_da = cStack_1b2;
        cStack_d9 = cStack_1b1;
        bStack_df = bStack_1b7;
        uStack_de = (undefined2)(CONCAT12(cStack_1b5,CONCAT11(cStack_1b6,bStack_1b7)) >> 8);
        cStack_dc = cStack_1b4;
        uStack_108 = CONCAT17(cStack_1a9,
                              CONCAT16(cStack_1aa,
                                       CONCAT15(cStack_1ab,
                                                CONCAT14(cStack_1ac,
                                                         CONCAT13(cStack_1ad,
                                                                  CONCAT12(cStack_1ae,
                                                                           CONCAT11(cStack_1af,
                                                                                    cStack_1b0))))))
                             );
        uStack_100 = CONCAT62(uStack_1a6,uStack_1a8);
        uStack_c0 = CONCAT62(uStack_196,uStack_198);
        uStack_b8 = CONCAT62(uStack_18e,uStack_190);
        uStack_b0 = CONCAT62(uStack_186,uStack_188);
        uStack_a8 = CONCAT62(uStack_17e,uStack_180);
        uStack_a0 = CONCAT62(uStack_176,uStack_178);
        cStack_e0 = cStack_1b8;
LAB_1402d7430:
        unaff_XMM6_Da = CONCAT13(cStack_db,CONCAT12(cStack_dc,uStack_de));
        iVar3 = *piStack_f0;
        cVar18 = cStack_e0;
        uStack_98 = uStack_c0;
        uStack_90 = uStack_b8;
        uStack_88 = uStack_b0;
        uStack_80 = uStack_a8;
        uStack_78 = uStack_a0;
        cStack_1d1 = cStack_da;
        cStack_1d2 = cStack_d9;
      }
      unaff_R13 = (ulonglong)bStack_df;
      if (iVar3 == 1) goto LAB_1402d71bc;
      goto LAB_1402d71d2;
    }
    if (cVar18 == '\0') {
LAB_1402d709a:
      pdb_140dcce90(&cStack_1b8,piStack_f0 + 4);
      if (cStack_1b8 == '2') {
        *(ulonglong *)(piVar1 + 0x16) =
             CONCAT17(cStack_1a9,
                      CONCAT16(cStack_1aa,
                               CONCAT15(cStack_1ab,
                                        CONCAT14(cStack_1ac,
                                                 CONCAT13(cStack_1ad,
                                                          CONCAT12(cStack_1ae,
                                                                   CONCAT11(cStack_1af,cStack_1b0)))
                                                ))));
        *(ulonglong *)(piVar1 + 0x18) = CONCAT62(uStack_1a6,uStack_1a8);
        pdb_140489500(&cStack_e0);
        unaff_R13 = (ulonglong)bStack_df;
        if (cStack_e0 != '2') {
          uStack_108 = uStack_d8;
          uStack_100 = uStack_d0;
          goto LAB_1402d739e;
        }
        cVar2 = (char)*piStack_f0;
        cVar18 = '2';
      }
      else {
        cStack_db = cStack_1b3;
        cStack_da = cStack_1b2;
        cStack_d9 = cStack_1b1;
        uStack_de = (undefined2)(CONCAT12(cStack_1b5,CONCAT11(cStack_1b6,bStack_1b7)) >> 8);
        cStack_dc = cStack_1b4;
        uStack_108 = CONCAT17(cStack_1a9,
                              CONCAT16(cStack_1aa,
                                       CONCAT15(cStack_1ab,
                                                CONCAT14(cStack_1ac,
                                                         CONCAT13(cStack_1ad,
                                                                  CONCAT12(cStack_1ae,
                                                                           CONCAT11(cStack_1af,
                                                                                    cStack_1b0))))))
                             );
        uStack_100 = CONCAT62(uStack_1a6,uStack_1a8);
        uStack_c0 = CONCAT62(uStack_196,uStack_198);
        uStack_b8 = CONCAT62(uStack_18e,uStack_190);
        uStack_b0 = CONCAT62(uStack_186,uStack_188);
        uStack_a8 = CONCAT62(uStack_17e,uStack_180);
        uStack_a0 = CONCAT62(uStack_176,uStack_178);
        cStack_e0 = cStack_1b8;
        unaff_R13 = (ulonglong)bStack_1b7;
LAB_1402d739e:
        unaff_XMM6_Da = CONCAT13(cStack_db,CONCAT12(cStack_dc,uStack_de));
        cVar2 = (char)*piStack_f0;
        cVar18 = cStack_e0;
        uStack_98 = uStack_c0;
        uStack_90 = uStack_b8;
        uStack_88 = uStack_b0;
        uStack_80 = uStack_a8;
        uStack_78 = uStack_a0;
        cStack_1d1 = cStack_da;
        cStack_1d2 = cStack_d9;
      }
      if (cVar2 != '\0') goto LAB_1402d71bc;
      goto LAB_1402d71d2;
    }
    if (*(longlong *)(piStack_f0 + 2) != 0) {
      *(longlong *)(piStack_f0 + 2) = *(longlong *)(piStack_f0 + 2) + -1;
      goto LAB_1402d709a;
    }
LAB_1402d7c6f:
    cVar18 = '0';
  }
  uStack_d8 = uStack_108;
  uStack_d0 = uStack_100;
  cStack_e0 = cVar18;
  bStack_df = (byte)unaff_R13;
LAB_1402d7c94:
  uStack_118 = uStack_78;
  uStack_128 = uStack_88;
  uStack_120 = uStack_80;
  uStack_138 = uStack_98;
  uStack_130 = uStack_90;
  uStack_de = (undefined2)unaff_XMM6_Da;
  cStack_dc = (char)((uint)unaff_XMM6_Da >> 0x10);
  cStack_db = (char)((uint)unaff_XMM6_Da >> 0x18);
  uStack_c0 = uStack_98;
  uStack_b8 = uStack_90;
  if (cStack_139 != '\0') {
    param_3 = 0;
  }
  uStack_a0 = uStack_78;
  if (param_4 == 0) {
    param_3 = 0;
  }
  cStack_da = cStack_1d1;
  cStack_d9 = cStack_1d2;
  pdb_140dca990(&cStack_1b8,&cStack_e0,param_3);
  *(ulonglong *)param_1 =
       CONCAT17(cStack_1b1,
                CONCAT16(cStack_1b2,
                         CONCAT15(cStack_1b3,
                                  CONCAT14(cStack_1b4,
                                           CONCAT13(cStack_1b5,
                                                    CONCAT12(cStack_1b6,
                                                             CONCAT11(bStack_1b7,cStack_1b8)))))));
  *(ulonglong *)(param_1 + 8) =
       CONCAT17(cStack_1a9,
                CONCAT16(cStack_1aa,
                         CONCAT15(cStack_1ab,
                                  CONCAT14(cStack_1ac,
                                           CONCAT13(cStack_1ad,
                                                    CONCAT12(cStack_1ae,
                                                             CONCAT11(cStack_1af,cStack_1b0)))))));
  *(ulonglong *)(param_1 + 0x10) = CONCAT62(uStack_1a6,uStack_1a8);
  *(ulonglong *)(param_1 + 0x18) = CONCAT62(uStack_19e,uStack_1a0);
  *(ulonglong *)(param_1 + 0x20) = CONCAT62(uStack_196,uStack_198);
  *(ulonglong *)(param_1 + 0x28) = CONCAT62(uStack_18e,uStack_190);
  *(ulonglong *)(param_1 + 0x30) = CONCAT62(uStack_186,uStack_188);
  *(ulonglong *)(param_1 + 0x38) = CONCAT62(uStack_17e,uStack_180);
  *(ulonglong *)(param_1 + 0x40) = CONCAT62(uStack_176,uStack_178);
  return param_1;
}

