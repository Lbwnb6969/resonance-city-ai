// VA 0x1402d0c90, PDB extent 2653 bytes
// ron::de::impl$2::deserialize_struct<country_core::render::render_config::_::impl$0::deserialize::__Visitor>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   ron::de::impl$2::deserialize_struct<country_core::render::render_config::_::impl$0::deserialize::__Visitor>
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
   Extent: 2653 */

char * pdb_1402d0c90(char *param_1,int *param_2,undefined8 param_3,longlong param_4)

{
  int *piVar1;
  int iVar2;
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
  char cVar16;
  int *piVar17;
  char cVar18;
  char cVar19;
  char *pcVar20;
  longlong lVar21;
  byte bVar22;
  ulonglong unaff_RBP;
  undefined1 auVar23 [16];
  undefined4 unaff_XMM6_Da;
  char cStack_1e6;
  char cStack_1e5;
  char cStack_1d8;
  byte bStack_1d7;
  char cStack_1d6;
  char cStack_1d5;
  char cStack_1d4;
  char cStack_1d3;
  char cStack_1d2;
  char cStack_1d1;
  char cStack_1d0;
  char cStack_1cf;
  char cStack_1ce;
  char cStack_1cd;
  char cStack_1cc;
  char cStack_1cb;
  char cStack_1ca;
  char cStack_1c9;
  undefined2 uStack_1c8;
  undefined6 uStack_1c6;
  undefined2 uStack_1c0;
  undefined6 uStack_1be;
  undefined2 uStack_1b8;
  undefined6 uStack_1b6;
  undefined2 uStack_1b0;
  undefined6 uStack_1ae;
  undefined2 uStack_1a8;
  undefined6 uStack_1a6;
  undefined2 uStack_1a0;
  undefined6 uStack_19e;
  undefined2 uStack_198;
  undefined6 uStack_196;
  longlong lStack_188;
  longlong lStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  int *piStack_150;
  undefined2 uStack_148;
  undefined1 uStack_146;
  undefined8 uStack_140;
  longlong lStack_138;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  int *piStack_d0;
  
  if (((char)param_2[0x1a] == '\0') &&
     (pdb_140dd1950(&cStack_1d8,param_2 + 4,param_3,param_4), cStack_1d8 != '2')) {
    *(ulonglong *)(param_1 + 0x40) = CONCAT62(uStack_196,uStack_198);
    *(ulonglong *)(param_1 + 0x32) = CONCAT26(uStack_1a0,uStack_1a6);
    *(ulonglong *)(param_1 + 0x3a) = CONCAT26(uStack_198,uStack_19e);
    *(ulonglong *)(param_1 + 0x22) = CONCAT26(uStack_1b0,uStack_1b6);
    *(ulonglong *)(param_1 + 0x2a) = CONCAT26(uStack_1a8,uStack_1ae);
    *(ulonglong *)(param_1 + 0x12) = CONCAT26(uStack_1c0,uStack_1c6);
    *(ulonglong *)(param_1 + 0x1a) = CONCAT26(uStack_1b8,uStack_1be);
    *(ulonglong *)(param_1 + 2) =
         CONCAT17(cStack_1cf,
                  CONCAT16(cStack_1d0,
                           CONCAT15(cStack_1d1,
                                    CONCAT14(cStack_1d2,
                                             CONCAT13(cStack_1d3,
                                                      CONCAT12(cStack_1d4,
                                                               CONCAT11(cStack_1d5,cStack_1d6)))))))
    ;
    *(ulonglong *)(param_1 + 10) =
         CONCAT26(uStack_1c8,
                  CONCAT15(cStack_1c9,
                           CONCAT14(cStack_1ca,
                                    CONCAT13(cStack_1cb,
                                             CONCAT12(cStack_1cc,CONCAT11(cStack_1cd,cStack_1ce)))))
                 );
    *param_1 = cStack_1d8;
    param_1[1] = bStack_1d7;
    return param_1;
  }
  piVar1 = param_2 + 4;
  pdb_140dd4ac0(&cStack_1d8,piVar1);
  if (cStack_1d8 != '2') {
LAB_1402d13dc:
    *(ulonglong *)(param_1 + 0x40) = CONCAT62(uStack_196,uStack_198);
    *(ulonglong *)(param_1 + 0x30) = CONCAT62(uStack_1a6,uStack_1a8);
    *(ulonglong *)(param_1 + 0x38) = CONCAT62(uStack_19e,uStack_1a0);
    *(ulonglong *)(param_1 + 0x20) = CONCAT62(uStack_1b6,uStack_1b8);
    *(ulonglong *)(param_1 + 0x28) = CONCAT62(uStack_1ae,uStack_1b0);
    *(ulonglong *)(param_1 + 0x10) = CONCAT62(uStack_1c6,uStack_1c8);
    *(ulonglong *)(param_1 + 0x18) = CONCAT62(uStack_1be,uStack_1c0);
    *(ulonglong *)param_1 =
         CONCAT17(cStack_1d1,
                  CONCAT16(cStack_1d2,
                           CONCAT15(cStack_1d3,
                                    CONCAT14(cStack_1d4,
                                             CONCAT13(cStack_1d5,
                                                      CONCAT12(cStack_1d6,
                                                               CONCAT11(bStack_1d7,cStack_1d8)))))))
    ;
    *(ulonglong *)(param_1 + 8) =
         CONCAT17(cStack_1c9,
                  CONCAT16(cStack_1ca,
                           CONCAT15(cStack_1cb,
                                    CONCAT14(cStack_1cc,
                                             CONCAT13(cStack_1cd,
                                                      CONCAT12(cStack_1ce,
                                                               CONCAT11(cStack_1cf,cStack_1d0)))))))
    ;
    return param_1;
  }
  cVar18 = '\x01';
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
    cVar18 = (char)param_2[0x1a];
  }
  *(char *)(param_2 + 0x1a) = '\0';
  if ((char)*param_2 != '\0') {
    if (*(longlong *)(param_2 + 2) == 0) {
      *param_1 = '0';
      return param_1;
    }
    *(longlong *)(param_2 + 2) = *(longlong *)(param_2 + 2) + -1;
  }
  uStack_148 = 0x103;
  uStack_146 = 0;
  lStack_188 = param_4;
  piStack_150 = param_2;
  pdb_140dca8b0(&cStack_1d8,&piStack_150);
  cVar16 = UNK_142e6987f;
  cVar15 = UNK_142e6987e;
  cVar14 = UNK_142e6987d;
  cVar13 = UNK_142e6987c;
  cVar12 = UNK_142e6987b;
  cVar11 = UNK_142e6987a;
  cVar10 = UNK_142e69879;
  cVar9 = UNK_142e69878;
  cVar8 = UNK_142e69877;
  cVar7 = UNK_142e69876;
  cVar6 = UNK_142e69875;
  cVar5 = UNK_142e69874;
  cVar4 = UNK_142e69873;
  cVar3 = UNK_142e69872;
  bVar22 = UNK_142e69871;
  cVar19 = DAT_142e69870;
  if (cStack_1d8 != '2') {
    unaff_XMM6_Da = CONCAT13(cStack_1d3,CONCAT12(cStack_1d4,CONCAT11(cStack_1d5,cStack_1d6)));
    lStack_138 = CONCAT17(cStack_1c9,
                          CONCAT16(cStack_1ca,
                                   CONCAT15(cStack_1cb,
                                            CONCAT14(cStack_1cc,
                                                     CONCAT13(cStack_1cd,
                                                              CONCAT12(cStack_1ce,
                                                                       CONCAT11(cStack_1cf,
                                                                                cStack_1d0)))))));
    uStack_f8 = CONCAT62(uStack_1b6,uStack_1b8);
    uStack_f0 = CONCAT62(uStack_1ae,uStack_1b0);
    uStack_e8 = CONCAT62(uStack_1a6,uStack_1a8);
    uStack_e0 = CONCAT62(uStack_19e,uStack_1a0);
    uStack_d8 = CONCAT62(uStack_196,uStack_198);
    cVar19 = cStack_1d8;
    cStack_1e5 = cStack_1d2;
    cStack_1e6 = cStack_1d1;
    bVar22 = bStack_1d7;
    goto LAB_1402d146a;
  }
  piStack_d0 = piVar1;
  if ((bStack_1d7 & 1) == 0) {
    if (*param_2 == 1) {
      lVar21 = -1;
      if (*(longlong *)(param_2 + 2) + 1 != 0) {
        lVar21 = *(longlong *)(param_2 + 2) + 1;
      }
      *(longlong *)(param_2 + 2) = lVar21;
    }
    pdb_140dd4ac0(&cStack_1d8,piVar1);
    if (cStack_1d8 == '2') {
      if ((cVar18 == '\0') && (cVar18 = pdb_140dce020(piVar1,0x29), cVar18 == '\0')) {
        *param_1 = '\x17';
        return param_1;
      }
      param_1[1] = '\0';
      param_1[2] = '\0';
      param_1[3] = '\0';
      param_1[4] = '\0';
      param_1[5] = '\0';
      param_1[6] = '\0';
      *param_1 = '2';
      return param_1;
    }
    goto LAB_1402d13dc;
  }
  pdb_140dcace0(&cStack_1d8);
  piVar1 = piStack_150;
  auVar23[0] = -(cStack_1d8 == cVar19);
  auVar23[1] = -(bStack_1d7 == bVar22);
  auVar23[2] = -(cStack_1d6 == cVar3);
  auVar23[3] = -(cStack_1d5 == cVar4);
  auVar23[4] = -(cStack_1d4 == cVar5);
  auVar23[5] = -(cStack_1d3 == cVar6);
  auVar23[6] = -(cStack_1d2 == cVar7);
  auVar23[7] = -(cStack_1d1 == cVar8);
  auVar23[8] = -(cStack_1d0 == cVar9);
  auVar23[9] = -(cStack_1cf == cVar10);
  auVar23[10] = -(cStack_1ce == cVar11);
  auVar23[0xb] = -(cStack_1cd == cVar12);
  auVar23[0xc] = -(cStack_1cc == cVar13);
  auVar23[0xd] = -(cStack_1cb == cVar14);
  auVar23[0xe] = -(cStack_1ca == cVar15);
  auVar23[0xf] = -(cStack_1c9 == cVar16);
  uStack_146 = (ushort)((ushort)(SUB161(auVar23 >> 7,0) & 1) |
                        (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
                        (ushort)(SUB161(auVar23 >> 0x17,0) & 1) << 2 |
                        (ushort)(SUB161(auVar23 >> 0x1f,0) & 1) << 3 |
                        (ushort)(SUB161(auVar23 >> 0x27,0) & 1) << 4 |
                        (ushort)(SUB161(auVar23 >> 0x2f,0) & 1) << 5 |
                        (ushort)(SUB161(auVar23 >> 0x37,0) & 1) << 6 |
                        (ushort)(SUB161(auVar23 >> 0x3f,0) & 1) << 7 |
                        (ushort)(SUB161(auVar23 >> 0x47,0) & 1) << 8 |
                        (ushort)(SUB161(auVar23 >> 0x4f,0) & 1) << 9 |
                        (ushort)(SUB161(auVar23 >> 0x57,0) & 1) << 10 |
                        (ushort)(SUB161(auVar23 >> 0x5f,0) & 1) << 0xb |
                        (ushort)(SUB161(auVar23 >> 0x67,0) & 1) << 0xc |
                        (ushort)(SUB161(auVar23 >> 0x6f,0) & 1) << 0xd |
                        (ushort)(SUB161(auVar23 >> 0x77,0) & 1) << 0xe |
                       (ushort)(auVar23[0xf] >> 7) << 0xf) == 0xffff;
  cVar19 = (char)*piStack_150;
  if ((char)uStack_148 == '\x01') {
    if (cVar19 != '\0') {
      if (*(longlong *)(piStack_150 + 2) == 0) goto LAB_1402d1454;
      *(longlong *)(piStack_150 + 2) = *(longlong *)(piStack_150 + 2) + -1;
    }
    lStack_138 = CONCAT71(lStack_138._1_7_,1);
LAB_1402d0f78:
    uStack_140 = piStack_150;
    pdb_140342d90(&cStack_1d8,&uStack_140);
    if (cStack_1d8 != '2') {
      unaff_XMM6_Da = CONCAT13(cStack_1d3,CONCAT12(cStack_1d4,CONCAT11(cStack_1d5,cStack_1d6)));
      cStack_1e5 = cStack_1d2;
      cStack_1e6 = cStack_1d1;
      lStack_180 = CONCAT17(cStack_1c9,
                            CONCAT16(cStack_1ca,
                                     CONCAT15(cStack_1cb,
                                              CONCAT14(cStack_1cc,
                                                       CONCAT13(cStack_1cd,
                                                                CONCAT12(cStack_1ce,
                                                                         CONCAT11(cStack_1cf,
                                                                                  cStack_1d0)))))));
      uStack_f8 = CONCAT62(uStack_1b6,uStack_1b8);
      uStack_f0 = CONCAT62(uStack_1ae,uStack_1b0);
      uStack_e8 = CONCAT62(uStack_1a6,uStack_1a8);
      uStack_e0 = CONCAT62(uStack_19e,uStack_1a0);
      uStack_d8 = CONCAT62(uStack_196,uStack_198);
    }
    unaff_RBP = (ulonglong)bStack_1d7;
    cVar19 = cStack_1d8;
    if ((char)*piStack_150 != '\0') {
LAB_1402d0ffd:
      lVar21 = *(longlong *)(piStack_150 + 2) + 1;
      if (lVar21 == 0) {
        lVar21 = -1;
      }
      *(longlong *)(piStack_150 + 2) = lVar21;
    }
LAB_1402d1013:
    if (cVar19 == '2') {
                    /* WARNING: Could not recover jumptable at 0x0001402d102d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pcVar20 = (char *)(*(code *)(&UNK_142e6ab18 + *(int *)(&UNK_142e6ab18 + unaff_RBP * 4)))();
      return pcVar20;
    }
  }
  else {
    if ((char)uStack_148 != '\x03') {
      if (cVar19 != '\0') {
        if (*(longlong *)(piStack_150 + 2) == 0) goto LAB_1402d1454;
        *(longlong *)(piStack_150 + 2) = *(longlong *)(piStack_150 + 2) + -1;
      }
      pdb_140dcce90(&cStack_1d8,piStack_150 + 4);
      piVar17 = uStack_140;
      if (cStack_1d8 == '2') {
        *(ulonglong *)(piVar1 + 0x16) =
             CONCAT17(cStack_1c9,
                      CONCAT16(cStack_1ca,
                               CONCAT15(cStack_1cb,
                                        CONCAT14(cStack_1cc,
                                                 CONCAT13(cStack_1cd,
                                                          CONCAT12(cStack_1ce,
                                                                   CONCAT11(cStack_1cf,cStack_1d0)))
                                                ))));
        *(ulonglong *)(piVar1 + 0x18) = CONCAT62(uStack_1c6,uStack_1c8);
        pdb_140143470(&uStack_140);
        if ((char)uStack_140 != '2') {
          lStack_180 = lStack_138;
          cVar19 = (char)uStack_140;
          goto LAB_1402d124b;
        }
        cVar19 = '2';
        iVar2 = *piStack_150;
      }
      else {
        uStack_140._5_3_ =
             (undefined3)
             (CONCAT13(cStack_1d1,CONCAT12(cStack_1d2,CONCAT11(cStack_1d3,cStack_1d4))) >> 8);
        uStack_140._0_1_ = (char)piVar17;
        uStack_140._0_5_ =
             CONCAT41(CONCAT13(cStack_1d4,CONCAT12(cStack_1d5,CONCAT11(cStack_1d6,bStack_1d7))),
                      (char)uStack_140);
        lStack_180 = CONCAT17(cStack_1c9,
                              CONCAT16(cStack_1ca,
                                       CONCAT15(cStack_1cb,
                                                CONCAT14(cStack_1cc,
                                                         CONCAT13(cStack_1cd,
                                                                  CONCAT12(cStack_1ce,
                                                                           CONCAT11(cStack_1cf,
                                                                                    cStack_1d0))))))
                             );
        uStack_120 = CONCAT62(uStack_1b6,uStack_1b8);
        uStack_118 = CONCAT62(uStack_1ae,uStack_1b0);
        uStack_110 = CONCAT62(uStack_1a6,uStack_1a8);
        uStack_108 = CONCAT62(uStack_19e,uStack_1a0);
        uStack_100 = CONCAT62(uStack_196,uStack_198);
        cVar19 = cStack_1d8;
LAB_1402d124b:
        iVar2 = *piStack_150;
        cStack_1e5 = uStack_140._6_1_;
        cStack_1e6 = uStack_140._7_1_;
        uStack_d8 = uStack_100;
        uStack_f8 = uStack_120;
        uStack_f0 = uStack_118;
        uStack_e8 = uStack_110;
        uStack_e0 = uStack_108;
        unaff_XMM6_Da = uStack_140._2_4_;
      }
      unaff_RBP = (ulonglong)uStack_140 >> 8 & 0xff;
      if (iVar2 == 1) goto LAB_1402d0ffd;
      goto LAB_1402d1013;
    }
    if (cVar19 == '\0') {
LAB_1402d0f38:
      lStack_138 = (ulonglong)lStack_138._1_7_ << 8;
      goto LAB_1402d0f78;
    }
    if (*(longlong *)(piStack_150 + 2) != 0) {
      *(longlong *)(piStack_150 + 2) = *(longlong *)(piStack_150 + 2) + -1;
      goto LAB_1402d0f38;
    }
LAB_1402d1454:
    cVar19 = '0';
  }
  lStack_138 = lStack_180;
  bVar22 = (byte)unaff_RBP;
LAB_1402d146a:
  uStack_158 = uStack_d8;
  uStack_168 = uStack_e8;
  uStack_160 = uStack_e0;
  uStack_178 = uStack_f8;
  uStack_170 = uStack_f0;
  uStack_140 = (int *)CONCAT17(cStack_1e6,
                               CONCAT16(cStack_1e5,CONCAT42(unaff_XMM6_Da,CONCAT11(bVar22,cVar19))))
  ;
  uStack_120 = uStack_f8;
  uStack_118 = uStack_f0;
  if (cVar18 != '\0') {
    param_3 = 0;
  }
  uStack_100 = uStack_d8;
  if (lStack_188 == 0) {
    param_3 = 0;
  }
  pdb_140dca990(&cStack_1d8,&uStack_140,param_3);
  *(ulonglong *)param_1 =
       CONCAT17(cStack_1d1,
                CONCAT16(cStack_1d2,
                         CONCAT15(cStack_1d3,
                                  CONCAT14(cStack_1d4,
                                           CONCAT13(cStack_1d5,
                                                    CONCAT12(cStack_1d6,
                                                             CONCAT11(bStack_1d7,cStack_1d8)))))));
  *(ulonglong *)(param_1 + 8) =
       CONCAT17(cStack_1c9,
                CONCAT16(cStack_1ca,
                         CONCAT15(cStack_1cb,
                                  CONCAT14(cStack_1cc,
                                           CONCAT13(cStack_1cd,
                                                    CONCAT12(cStack_1ce,
                                                             CONCAT11(cStack_1cf,cStack_1d0)))))));
  *(ulonglong *)(param_1 + 0x10) = CONCAT62(uStack_1c6,uStack_1c8);
  *(ulonglong *)(param_1 + 0x18) = CONCAT62(uStack_1be,uStack_1c0);
  *(ulonglong *)(param_1 + 0x20) = CONCAT62(uStack_1b6,uStack_1b8);
  *(ulonglong *)(param_1 + 0x28) = CONCAT62(uStack_1ae,uStack_1b0);
  *(ulonglong *)(param_1 + 0x30) = CONCAT62(uStack_1a6,uStack_1a8);
  *(ulonglong *)(param_1 + 0x38) = CONCAT62(uStack_19e,uStack_1a0);
  *(ulonglong *)(param_1 + 0x40) = CONCAT62(uStack_196,uStack_198);
  return param_1;
}

