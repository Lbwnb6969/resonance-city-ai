// VA 0x1402d8070, PDB extent 3577 bytes
// ron::de::impl$2::deserialize_struct<country_core::resources::ui_settings::_::impl$0::deserialize::__Visitor>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Removing unreachable block (ram,0x0001402d8a30) */
/* WARNING: Removing unreachable block (ram,0x0001402d89f5) */
/* WARNING: Removing unreachable block (ram,0x0001402d89e2) */
/* WARNING: Removing unreachable block (ram,0x0001402d8a11) */
/* WARNING: Removing unreachable block (ram,0x0001402d8a40) */
/* Matched PDB project procedure:
   ron::de::impl$2::deserialize_struct<country_core::resources::ui_settings::_::impl$0::deserialize::__Visitor>
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
   Extent: 3577 */

char * pdb_1402d8070(char *param_1,int *param_2,undefined8 param_3,ulonglong param_4)

{
  int iVar1;
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
  int *piVar16;
  int *piVar17;
  char cVar18;
  char cVar19;
  char *pcVar20;
  longlong lVar21;
  byte bVar22;
  ulonglong uVar23;
  undefined1 auVar24 [16];
  undefined4 unaff_XMM6_Da;
  undefined4 unaff_XMM7_Da;
  undefined4 unaff_XMM8_Da;
  undefined2 uStack_1d8;
  char cStack_1c8;
  byte bStack_1c7;
  char cStack_1c6;
  char cStack_1c5;
  char cStack_1c4;
  char cStack_1c3;
  char cStack_1c2;
  char cStack_1c1;
  char cStack_1c0;
  char cStack_1bf;
  char cStack_1be;
  char cStack_1bd;
  char cStack_1bc;
  char cStack_1bb;
  char cStack_1ba;
  char cStack_1b9;
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
  undefined2 uStack_190;
  undefined6 uStack_18e;
  undefined2 uStack_188;
  undefined6 uStack_186;
  int *piStack_178;
  undefined2 uStack_170;
  undefined1 uStack_16e;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined8 uStack_120;
  longlong lStack_118;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  ulonglong uStack_a8;
  ulonglong uStack_a0;
  
  if (((char)param_2[0x1a] == '\0') &&
     (pdb_140dd1950(&cStack_1c8,param_2 + 4,param_3,param_4), cStack_1c8 != '2')) {
    *(ulonglong *)(param_1 + 0x40) = CONCAT62(uStack_186,uStack_188);
    *(ulonglong *)(param_1 + 0x32) = CONCAT26(uStack_190,uStack_196);
    *(ulonglong *)(param_1 + 0x3a) = CONCAT26(uStack_188,uStack_18e);
    *(ulonglong *)(param_1 + 0x22) = CONCAT26(uStack_1a0,uStack_1a6);
    *(ulonglong *)(param_1 + 0x2a) = CONCAT26(uStack_198,uStack_19e);
    *(ulonglong *)(param_1 + 0x12) = CONCAT26(uStack_1b0,uStack_1b6);
    *(ulonglong *)(param_1 + 0x1a) = CONCAT26(uStack_1a8,uStack_1ae);
    *(ulonglong *)(param_1 + 2) =
         CONCAT17(cStack_1bf,
                  CONCAT16(cStack_1c0,
                           CONCAT15(cStack_1c1,
                                    CONCAT14(cStack_1c2,
                                             CONCAT13(cStack_1c3,
                                                      CONCAT12(cStack_1c4,
                                                               CONCAT11(cStack_1c5,cStack_1c6)))))))
    ;
    *(ulonglong *)(param_1 + 10) =
         CONCAT26(uStack_1b8,
                  CONCAT15(cStack_1b9,
                           CONCAT14(cStack_1ba,
                                    CONCAT13(cStack_1bb,
                                             CONCAT12(cStack_1bc,CONCAT11(cStack_1bd,cStack_1be)))))
                 );
    *param_1 = cStack_1c8;
    param_1[1] = bStack_1c7;
    return param_1;
  }
  pdb_140dd4ac0(&cStack_1c8,param_2 + 4);
  if (cStack_1c8 != '2') {
LAB_1402d8ae4:
    *(ulonglong *)(param_1 + 0x40) = CONCAT62(uStack_186,uStack_188);
    *(ulonglong *)(param_1 + 0x30) = CONCAT62(uStack_196,uStack_198);
    *(ulonglong *)(param_1 + 0x38) = CONCAT62(uStack_18e,uStack_190);
    *(ulonglong *)(param_1 + 0x20) = CONCAT62(uStack_1a6,uStack_1a8);
    *(ulonglong *)(param_1 + 0x28) = CONCAT62(uStack_19e,uStack_1a0);
    *(ulonglong *)(param_1 + 0x10) = CONCAT62(uStack_1b6,uStack_1b8);
    *(ulonglong *)(param_1 + 0x18) = CONCAT62(uStack_1ae,uStack_1b0);
    *(ulonglong *)param_1 =
         CONCAT17(cStack_1c1,
                  CONCAT16(cStack_1c2,
                           CONCAT15(cStack_1c3,
                                    CONCAT14(cStack_1c4,
                                             CONCAT13(cStack_1c5,
                                                      CONCAT12(cStack_1c6,
                                                               CONCAT11(bStack_1c7,cStack_1c8)))))))
    ;
    *(ulonglong *)(param_1 + 8) =
         CONCAT17(cStack_1b9,
                  CONCAT16(cStack_1ba,
                           CONCAT15(cStack_1bb,
                                    CONCAT14(cStack_1bc,
                                             CONCAT13(cStack_1bd,
                                                      CONCAT12(cStack_1be,
                                                               CONCAT11(cStack_1bf,cStack_1c0)))))))
    ;
    return param_1;
  }
  cVar18 = '\x01';
  if ((char)param_2[0x1a] == '\0') {
    cVar18 = pdb_140dce020(param_2 + 4,0x28);
    if (cVar18 == '\0') {
      if (param_4 != 0) {
        *param_1 = '\x16';
        *(undefined8 *)(param_1 + 8) = param_3;
        *(ulonglong *)(param_1 + 0x10) = param_4;
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
  uStack_170 = 0x103;
  uStack_16e = 0;
  piStack_178 = param_2;
  pdb_140dca8b0(&cStack_1c8,&piStack_178);
  cVar15 = UNK_142e69a8f;
  cVar14 = UNK_142e69a8e;
  cVar13 = UNK_142e69a8d;
  cVar12 = UNK_142e69a8c;
  cVar11 = UNK_142e69a8b;
  cVar10 = UNK_142e69a8a;
  cVar9 = UNK_142e69a89;
  cVar8 = UNK_142e69a88;
  cVar7 = UNK_142e69a87;
  cVar6 = UNK_142e69a86;
  cVar5 = UNK_142e69a85;
  cVar4 = UNK_142e69a84;
  cVar3 = UNK_142e69a83;
  cVar2 = UNK_142e69a82;
  bVar22 = UNK_142e69a81;
  cVar19 = DAT_142e69a80;
  if (cStack_1c8 != '2') {
    uStack_1d8 = CONCAT11(cStack_1c5,cStack_1c6);
    unaff_XMM6_Da = CONCAT13(cStack_1c1,CONCAT12(cStack_1c2,CONCAT11(cStack_1c3,cStack_1c4)));
    uStack_d8 = CONCAT62(uStack_1a6,uStack_1a8);
    uStack_d0 = CONCAT62(uStack_19e,uStack_1a0);
    uStack_c8 = CONCAT62(uStack_196,uStack_198);
    uStack_c0 = CONCAT62(uStack_18e,uStack_190);
    uStack_b8 = CONCAT62(uStack_186,uStack_188);
    cVar19 = cStack_1c8;
    bVar22 = bStack_1c7;
    goto LAB_1402d8849;
  }
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_124 = 0;
  uStack_128 = 0;
  if ((bStack_1c7 & 1) == 0) {
    pdb_140a771e0(&cStack_1c8);
    cVar19 = cStack_1bc;
    if ((uStack_a8 & 1) == 0) {
      unaff_XMM7_Da = CONCAT13(cStack_1c5,CONCAT12(cStack_1c6,CONCAT11(bStack_1c7,cStack_1c8)));
    }
    if ((uStack_a0 & 1) == 0) {
      unaff_XMM8_Da = CONCAT13(cStack_1c1,CONCAT12(cStack_1c2,CONCAT11(cStack_1c3,cStack_1c4)));
    }
    uStack_120._0_5_ = CONCAT14(cStack_1c0,unaff_XMM8_Da);
    uStack_120 = (int *)CONCAT17(cStack_1bd,
                                 CONCAT16(cStack_1be,CONCAT15(cStack_1bf,(undefined5)uStack_120)));
    if (*param_2 == 1) {
      lVar21 = -1;
      if (*(longlong *)(param_2 + 2) + 1 != 0) {
        lVar21 = *(longlong *)(param_2 + 2) + 1;
      }
      *(longlong *)(param_2 + 2) = lVar21;
    }
    pdb_140dd4ac0(&cStack_1c8,param_2 + 4);
    if (cStack_1c8 == '2') {
      if ((cVar18 == '\0') && (cVar18 = pdb_140dce020(param_2 + 4,0x29), cVar18 == '\0')) {
        *param_1 = '\x17';
        return param_1;
      }
      *(undefined4 *)(param_1 + 4) = unaff_XMM7_Da;
      *(int **)(param_1 + 8) = uStack_120;
      param_1[0x10] = cVar19;
      *param_1 = '2';
      return param_1;
    }
    goto LAB_1402d8ae4;
  }
  pdb_140dcace0(&cStack_1c8);
  piVar16 = piStack_178;
  auVar24[0] = -(cStack_1c8 == cVar19);
  auVar24[1] = -(bStack_1c7 == bVar22);
  auVar24[2] = -(cStack_1c6 == cVar2);
  auVar24[3] = -(cStack_1c5 == cVar3);
  auVar24[4] = -(cStack_1c4 == cVar4);
  auVar24[5] = -(cStack_1c3 == cVar5);
  auVar24[6] = -(cStack_1c2 == cVar6);
  auVar24[7] = -(cStack_1c1 == cVar7);
  auVar24[8] = -(cStack_1c0 == cVar8);
  auVar24[9] = -(cStack_1bf == cVar9);
  auVar24[10] = -(cStack_1be == cVar10);
  auVar24[0xb] = -(cStack_1bd == cVar11);
  auVar24[0xc] = -(cStack_1bc == cVar12);
  auVar24[0xd] = -(cStack_1bb == cVar13);
  auVar24[0xe] = -(cStack_1ba == cVar14);
  auVar24[0xf] = -(cStack_1b9 == cVar15);
  uStack_16e = (ushort)((ushort)(SUB161(auVar24 >> 7,0) & 1) |
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
                       (ushort)(auVar24[0xf] >> 7) << 0xf) == 0xffff;
  cVar19 = (char)*piStack_178;
  if ((char)uStack_170 == '\x01') {
    if (cVar19 != '\0') {
      if (*(longlong *)(piStack_178 + 2) == 0) goto LAB_1402d8b58;
      *(longlong *)(piStack_178 + 2) = *(longlong *)(piStack_178 + 2) + -1;
    }
    lStack_118 = CONCAT71(lStack_118._1_7_,1);
LAB_1402d8348:
    uStack_120 = piStack_178;
    pdb_140343430(&cStack_1c8,&uStack_120);
    if (cStack_1c8 != '2') {
      uStack_1d8 = CONCAT11(cStack_1c5,cStack_1c6);
      unaff_XMM6_Da = CONCAT13(cStack_1c1,CONCAT12(cStack_1c2,CONCAT11(cStack_1c3,cStack_1c4)));
      uStack_d8 = CONCAT62(uStack_1a6,uStack_1a8);
      uStack_d0 = CONCAT62(uStack_19e,uStack_1a0);
      uStack_c8 = CONCAT62(uStack_196,uStack_198);
      uStack_c0 = CONCAT62(uStack_18e,uStack_190);
      uStack_b8 = CONCAT62(uStack_186,uStack_188);
    }
    uVar23 = (ulonglong)bStack_1c7;
    cVar19 = cStack_1c8;
    if ((char)*piStack_178 != '\0') {
LAB_1402d83d7:
      lVar21 = *(longlong *)(piStack_178 + 2) + 1;
      if (lVar21 == 0) {
        lVar21 = -1;
      }
      *(longlong *)(piStack_178 + 2) = lVar21;
    }
LAB_1402d83ed:
    if (cVar19 == '2') {
                    /* WARNING: Could not recover jumptable at 0x0001402d8407. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pcVar20 = (char *)(*(code *)(&UNK_142e6ac4c + *(int *)(&UNK_142e6ac4c + uVar23 * 4)))();
      return pcVar20;
    }
  }
  else {
    if ((char)uStack_170 != '\x03') {
      if (cVar19 != '\0') {
        if (*(longlong *)(piStack_178 + 2) == 0) goto LAB_1402d8b58;
        *(longlong *)(piStack_178 + 2) = *(longlong *)(piStack_178 + 2) + -1;
      }
      pdb_140dcce90(&cStack_1c8,piStack_178 + 4);
      piVar17 = uStack_120;
      if (cStack_1c8 == '2') {
        *(ulonglong *)(piVar16 + 0x16) =
             CONCAT17(cStack_1b9,
                      CONCAT16(cStack_1ba,
                               CONCAT15(cStack_1bb,
                                        CONCAT14(cStack_1bc,
                                                 CONCAT13(cStack_1bd,
                                                          CONCAT12(cStack_1be,
                                                                   CONCAT11(cStack_1bf,cStack_1c0)))
                                                ))));
        *(ulonglong *)(piVar16 + 0x18) = CONCAT62(uStack_1b6,uStack_1b8);
        pdb_14052d9f0(&uStack_120);
        cVar19 = (char)uStack_120;
        if ((char)uStack_120 != '2') goto LAB_1402d877f;
        cVar19 = '2';
        iVar1 = *piStack_178;
      }
      else {
        uStack_120._5_3_ =
             (undefined3)
             (CONCAT13(cStack_1c1,CONCAT12(cStack_1c2,CONCAT11(cStack_1c3,cStack_1c4))) >> 8);
        uStack_120._0_1_ = (char)piVar17;
        uStack_120._0_5_ =
             CONCAT41(CONCAT13(cStack_1c4,CONCAT12(cStack_1c5,CONCAT11(cStack_1c6,bStack_1c7))),
                      (char)uStack_120);
        uStack_100 = CONCAT62(uStack_1a6,uStack_1a8);
        uStack_f8 = CONCAT62(uStack_19e,uStack_1a0);
        uStack_f0 = CONCAT62(uStack_196,uStack_198);
        uStack_e8 = CONCAT62(uStack_18e,uStack_190);
        uStack_e0 = CONCAT62(uStack_186,uStack_188);
        cVar19 = cStack_1c8;
LAB_1402d877f:
        iVar1 = *piStack_178;
        uStack_1d8 = uStack_120._2_2_;
        uStack_b8 = uStack_e0;
        uStack_d8 = uStack_100;
        uStack_d0 = uStack_f8;
        uStack_c8 = uStack_f0;
        uStack_c0 = uStack_e8;
        unaff_XMM6_Da = uStack_120._4_4_;
      }
      uVar23 = (ulonglong)uStack_120 >> 8 & 0xff;
      if (iVar1 == 1) goto LAB_1402d83d7;
      goto LAB_1402d83ed;
    }
    if (cVar19 == '\0') {
LAB_1402d830a:
      lStack_118 = (ulonglong)lStack_118._1_7_ << 8;
      goto LAB_1402d8348;
    }
    if (*(longlong *)(piStack_178 + 2) != 0) {
      *(longlong *)(piStack_178 + 2) = *(longlong *)(piStack_178 + 2) + -1;
      goto LAB_1402d830a;
    }
LAB_1402d8b58:
    cVar19 = '0';
    uVar23 = param_4;
  }
  bVar22 = (byte)uVar23;
LAB_1402d8849:
  uStack_148 = uStack_b8;
  uStack_158 = uStack_c8;
  uStack_150 = uStack_c0;
  uStack_168 = uStack_d8;
  uStack_160 = uStack_d0;
  uStack_120 = (int *)CONCAT44(unaff_XMM6_Da,CONCAT22(uStack_1d8,CONCAT11(bVar22,cVar19)));
  uStack_100 = uStack_d8;
  uStack_f8 = uStack_d0;
  if (cVar18 != '\0') {
    param_3 = 0;
  }
  uStack_e0 = uStack_b8;
  if (param_4 == 0) {
    param_3 = 0;
  }
  pdb_140dca990(&cStack_1c8,&uStack_120,param_3);
  *(uint *)param_1 = CONCAT13(cStack_1c5,CONCAT12(cStack_1c6,CONCAT11(bStack_1c7,cStack_1c8)));
  *(uint *)(param_1 + 4) = CONCAT13(cStack_1c1,CONCAT12(cStack_1c2,CONCAT11(cStack_1c3,cStack_1c4)))
  ;
  *(ulonglong *)(param_1 + 8) =
       CONCAT17(cStack_1b9,
                CONCAT16(cStack_1ba,
                         CONCAT15(cStack_1bb,
                                  CONCAT14(cStack_1bc,
                                           CONCAT13(cStack_1bd,
                                                    CONCAT12(cStack_1be,
                                                             CONCAT11(cStack_1bf,cStack_1c0)))))));
  *(ulonglong *)(param_1 + 0x10) = CONCAT62(uStack_1b6,uStack_1b8);
  *(ulonglong *)(param_1 + 0x18) = CONCAT62(uStack_1ae,uStack_1b0);
  *(ulonglong *)(param_1 + 0x20) = CONCAT62(uStack_1a6,uStack_1a8);
  *(ulonglong *)(param_1 + 0x28) = CONCAT62(uStack_19e,uStack_1a0);
  *(ulonglong *)(param_1 + 0x30) = CONCAT62(uStack_196,uStack_198);
  *(ulonglong *)(param_1 + 0x38) = CONCAT62(uStack_18e,uStack_190);
  *(ulonglong *)(param_1 + 0x40) = CONCAT62(uStack_186,uStack_188);
  return param_1;
}

