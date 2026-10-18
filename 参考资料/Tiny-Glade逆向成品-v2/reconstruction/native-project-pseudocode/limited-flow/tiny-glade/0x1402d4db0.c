// VA 0x1402d4db0, PDB extent 2512 bytes
// ron::de::impl$2::deserialize_struct<country_core::game_profile::_::impl$0::deserialize::__Visitor>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   ron::de::impl$2::deserialize_struct<country_core::game_profile::_::impl$0::deserialize::__Visitor>
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
   Extent: 2512 */

char * pdb_1402d4db0(char *param_1,int *param_2,undefined8 param_3,longlong param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
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
  undefined8 uVar19;
  char cVar20;
  char cVar21;
  char *pcVar22;
  longlong lVar23;
  byte unaff_R13B;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined4 unaff_XMM6_Da;
  undefined4 unaff_XMM7_Da;
  undefined4 unaff_XMM7_Db;
  undefined2 uStack_1b4;
  char cStack_1a8;
  byte bStack_1a7;
  char cStack_1a6;
  char cStack_1a5;
  char cStack_1a4;
  char cStack_1a3;
  char cStack_1a2;
  char cStack_1a1;
  char cStack_1a0;
  char cStack_19f;
  char cStack_19e;
  char cStack_19d;
  char cStack_19c;
  char cStack_19b;
  char cStack_19a;
  char cStack_199;
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
  undefined2 uStack_170;
  undefined6 uStack_16e;
  undefined2 uStack_168;
  undefined6 uStack_166;
  int *piStack_160;
  undefined2 uStack_158;
  undefined1 uStack_156;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  
  if (((char)param_2[0x1a] == '\0') &&
     (pdb_140dd1950(&cStack_1a8,param_2 + 4,param_3,param_4), cStack_1a8 != '2')) {
    *(ulonglong *)(param_1 + 0x40) = CONCAT62(uStack_166,uStack_168);
    *(ulonglong *)(param_1 + 0x32) = CONCAT26(uStack_170,uStack_176);
    *(ulonglong *)(param_1 + 0x3a) = CONCAT26(uStack_168,uStack_16e);
    *(ulonglong *)(param_1 + 0x22) = CONCAT26(uStack_180,uStack_186);
    *(ulonglong *)(param_1 + 0x2a) = CONCAT26(uStack_178,uStack_17e);
    *(ulonglong *)(param_1 + 0x12) = CONCAT26(uStack_190,uStack_196);
    *(ulonglong *)(param_1 + 0x1a) = CONCAT26(uStack_188,uStack_18e);
    *(ulonglong *)(param_1 + 2) =
         CONCAT17(cStack_19f,
                  CONCAT16(cStack_1a0,
                           CONCAT15(cStack_1a1,
                                    CONCAT14(cStack_1a2,
                                             CONCAT13(cStack_1a3,
                                                      CONCAT12(cStack_1a4,
                                                               CONCAT11(cStack_1a5,cStack_1a6)))))))
    ;
    *(ulonglong *)(param_1 + 10) =
         CONCAT26(uStack_198,
                  CONCAT15(cStack_199,
                           CONCAT14(cStack_19a,
                                    CONCAT13(cStack_19b,
                                             CONCAT12(cStack_19c,CONCAT11(cStack_19d,cStack_19e)))))
                 );
    *param_1 = cStack_1a8;
    param_1[1] = bStack_1a7;
    return param_1;
  }
  piVar1 = param_2 + 4;
  pdb_140dd4ac0(&cStack_1a8,piVar1);
  if (cStack_1a8 != '2') {
LAB_1402d54a6:
    *(ulonglong *)(param_1 + 0x40) = CONCAT62(uStack_166,uStack_168);
    *(ulonglong *)(param_1 + 0x30) = CONCAT62(uStack_176,uStack_178);
    *(ulonglong *)(param_1 + 0x38) = CONCAT62(uStack_16e,uStack_170);
    *(ulonglong *)(param_1 + 0x20) = CONCAT62(uStack_186,uStack_188);
    *(ulonglong *)(param_1 + 0x28) = CONCAT62(uStack_17e,uStack_180);
    *(ulonglong *)(param_1 + 0x10) = CONCAT62(uStack_196,uStack_198);
    *(ulonglong *)(param_1 + 0x18) = CONCAT62(uStack_18e,uStack_190);
    *(ulonglong *)param_1 =
         CONCAT17(cStack_1a1,
                  CONCAT16(cStack_1a2,
                           CONCAT15(cStack_1a3,
                                    CONCAT14(cStack_1a4,
                                             CONCAT13(cStack_1a5,
                                                      CONCAT12(cStack_1a6,
                                                               CONCAT11(bStack_1a7,cStack_1a8)))))))
    ;
    *(ulonglong *)(param_1 + 8) =
         CONCAT17(cStack_199,
                  CONCAT16(cStack_19a,
                           CONCAT15(cStack_19b,
                                    CONCAT14(cStack_19c,
                                             CONCAT13(cStack_19d,
                                                      CONCAT12(cStack_19e,
                                                               CONCAT11(cStack_19f,cStack_1a0)))))))
    ;
    return param_1;
  }
  cVar20 = '\x01';
  if ((char)param_2[0x1a] == '\0') {
    cVar20 = pdb_140dce020(piVar1,0x28);
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
    cVar20 = (char)param_2[0x1a];
  }
  *(char *)(param_2 + 0x1a) = '\0';
  if ((char)*param_2 != '\0') {
    if (*(longlong *)(param_2 + 2) == 0) {
      *param_1 = '0';
      return param_1;
    }
    *(longlong *)(param_2 + 2) = *(longlong *)(param_2 + 2) + -1;
  }
  uStack_158 = 0x103;
  uStack_156 = 0;
  piStack_160 = param_2;
  pdb_140dca8b0(&cStack_1a8,&piStack_160);
  cVar18 = UNK_142e69a0f;
  cVar17 = UNK_142e69a0e;
  cVar16 = UNK_142e69a0d;
  cVar15 = UNK_142e69a0c;
  cVar14 = UNK_142e69a0b;
  cVar13 = UNK_142e69a0a;
  cVar12 = UNK_142e69a09;
  cVar11 = UNK_142e69a08;
  cVar10 = UNK_142e69a07;
  cVar9 = UNK_142e69a06;
  cVar8 = UNK_142e69a05;
  cVar7 = UNK_142e69a04;
  cVar6 = UNK_142e69a03;
  cVar5 = UNK_142e69a02;
  bVar4 = UNK_142e69a01;
  cVar21 = DAT_142e69a00;
  if (cStack_1a8 != '2') {
    uStack_1b4 = CONCAT11(cStack_1a5,cStack_1a6);
    unaff_XMM6_Da = CONCAT13(cStack_1a1,CONCAT12(cStack_1a2,CONCAT11(cStack_1a3,cStack_1a4)));
    unaff_XMM7_Da = (undefined4)CONCAT62(uStack_196,uStack_198);
    unaff_XMM7_Db = (undefined4)((uint6)uStack_196 >> 0x10);
    uStack_f8 = CONCAT62(uStack_186,uStack_188);
    uStack_f0 = CONCAT62(uStack_17e,uStack_180);
    uStack_e8 = CONCAT62(uStack_176,uStack_178);
    uStack_e0 = CONCAT62(uStack_16e,uStack_170);
    uStack_d8 = CONCAT62(uStack_166,uStack_168);
    cVar21 = cStack_1a8;
    unaff_R13B = bStack_1a7;
    goto LAB_1402d54ef;
  }
  uStack_12c = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_13c = 0;
  uStack_130 = 0;
  uStack_134 = 0;
  if ((bStack_1a7 & 1) == 0) {
    if (*param_2 == 1) {
      lVar23 = -1;
      if (*(longlong *)(param_2 + 2) + 1 != 0) {
        lVar23 = *(longlong *)(param_2 + 2) + 1;
      }
      *(longlong *)(param_2 + 2) = lVar23;
    }
    pdb_140dd4ac0(&cStack_1a8,piVar1);
    if (cStack_1a8 == '2') {
      if ((cVar20 == '\0') && (cVar20 = pdb_140dce020(piVar1,0x29), cVar20 == '\0')) {
        *param_1 = '\x17';
        return param_1;
      }
      param_1[4] = '\0';
      param_1[5] = '\0';
      param_1[6] = '\0';
      param_1[7] = '\0';
      param_1[8] = '\0';
      param_1[9] = '\0';
      param_1[10] = '\0';
      param_1[0xb] = '\0';
      param_1[0xc] = '\0';
      param_1[0xd] = '\0';
      param_1[0xe] = '\0';
      param_1[0xf] = '\0';
      param_1[0x10] = '\0';
      param_1[0x11] = '\0';
      param_1[0x12] = '\0';
      param_1[0x13] = '\0';
      param_1[0x14] = '\0';
      param_1[0x15] = '\0';
      param_1[0x16] = '\0';
      param_1[0x17] = '\0';
      *param_1 = '2';
      return param_1;
    }
    goto LAB_1402d54a6;
  }
  pdb_140dcace0(&cStack_1a8);
  piVar1 = piStack_160;
  auVar24[0] = -(cStack_1a8 == cVar21);
  auVar24[1] = -(bStack_1a7 == bVar4);
  auVar24[2] = -(cStack_1a6 == cVar5);
  auVar24[3] = -(cStack_1a5 == cVar6);
  auVar24[4] = -(cStack_1a4 == cVar7);
  auVar24[5] = -(cStack_1a3 == cVar8);
  auVar24[6] = -(cStack_1a2 == cVar9);
  auVar24[7] = -(cStack_1a1 == cVar10);
  auVar24[8] = -(cStack_1a0 == cVar11);
  auVar24[9] = -(cStack_19f == cVar12);
  auVar24[10] = -(cStack_19e == cVar13);
  auVar24[0xb] = -(cStack_19d == cVar14);
  auVar24[0xc] = -(cStack_19c == cVar15);
  auVar24[0xd] = -(cStack_19b == cVar16);
  auVar24[0xe] = -(cStack_19a == cVar17);
  auVar24[0xf] = -(cStack_199 == cVar18);
  uStack_156 = (ushort)((ushort)(SUB161(auVar24 >> 7,0) & 1) |
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
  cVar21 = (char)*piStack_160;
  if ((char)uStack_158 == '\x01') {
    if (cVar21 != '\0') {
      if (*(longlong *)(piStack_160 + 2) == 0) goto LAB_1402d54d7;
      *(longlong *)(piStack_160 + 2) = *(longlong *)(piStack_160 + 2) + -1;
    }
    pdb_1402cc6a0(&cStack_1a8);
joined_r0x0001402d5127:
    if (cStack_1a8 != '2') {
      uStack_1b4 = CONCAT11(cStack_1a5,cStack_1a6);
      unaff_XMM6_Da = CONCAT13(cStack_1a1,CONCAT12(cStack_1a2,CONCAT11(cStack_1a3,cStack_1a4)));
      unaff_XMM7_Da = (undefined4)CONCAT62(uStack_196,uStack_198);
      unaff_XMM7_Db = (undefined4)((uint6)uStack_196 >> 0x10);
      uStack_f8 = CONCAT62(uStack_186,uStack_188);
      uStack_f0 = CONCAT62(uStack_17e,uStack_180);
      uStack_e8 = CONCAT62(uStack_176,uStack_178);
      uStack_e0 = CONCAT62(uStack_16e,uStack_170);
      uStack_d8 = CONCAT62(uStack_166,uStack_168);
    }
    unaff_R13B = bStack_1a7;
    if ((char)*piStack_160 != '\0') {
LAB_1402d5079:
      lVar23 = *(longlong *)(piStack_160 + 2) + 1;
      if (lVar23 == 0) {
        lVar23 = -1;
      }
      *(longlong *)(piStack_160 + 2) = lVar23;
    }
  }
  else {
    if ((char)uStack_158 == '\x03') {
      if (cVar21 != '\0') {
        if (*(longlong *)(piStack_160 + 2) == 0) goto LAB_1402d54d7;
        *(longlong *)(piStack_160 + 2) = *(longlong *)(piStack_160 + 2) + -1;
      }
      pdb_1402e6790(&cStack_1a8);
      goto joined_r0x0001402d5127;
    }
    if (cVar21 != '\0') {
      if (*(longlong *)(piStack_160 + 2) == 0) {
LAB_1402d54d7:
        cVar21 = '0';
        goto LAB_1402d54ef;
      }
      *(longlong *)(piStack_160 + 2) = *(longlong *)(piStack_160 + 2) + -1;
    }
    pdb_140dcce90(&cStack_1a8,piStack_160 + 4);
    if (cStack_1a8 != '2') {
      uStack_1b4 = CONCAT11(cStack_1a5,cStack_1a6);
      unaff_XMM6_Da = CONCAT13(cStack_1a1,CONCAT12(cStack_1a2,CONCAT11(cStack_1a3,cStack_1a4)));
      unaff_XMM7_Da = (undefined4)CONCAT62(uStack_196,uStack_198);
      unaff_XMM7_Db = (undefined4)((uint6)uStack_196 >> 0x10);
      uStack_f8 = CONCAT62(uStack_186,uStack_188);
      uStack_f0 = CONCAT62(uStack_17e,uStack_180);
      uStack_e8 = CONCAT62(uStack_176,uStack_178);
      uStack_e0 = CONCAT62(uStack_16e,uStack_170);
      uStack_d8 = CONCAT62(uStack_166,uStack_168);
      iVar2 = *piStack_160;
      unaff_R13B = bStack_1a7;
joined_r0x0001402d52e1:
      if (iVar2 != 1) goto LAB_1402d508f;
      goto LAB_1402d5079;
    }
    plVar3 = (longlong *)
             CONCAT17(cStack_199,
                      CONCAT16(cStack_19a,
                               CONCAT15(cStack_19b,
                                        CONCAT14(cStack_19c,
                                                 CONCAT13(cStack_19d,
                                                          CONCAT12(cStack_19e,
                                                                   CONCAT11(cStack_19f,cStack_1a0)))
                                                ))));
    lVar23 = CONCAT62(uStack_196,uStack_198);
    *(longlong **)(piVar1 + 0x16) = plVar3;
    *(longlong *)(piVar1 + 0x18) = lVar23;
    if (lVar23 == 0xb) {
      if (*(longlong *)((longlong)plVar3 + 3) != CONCAT35(_UNK_142f5e060,_DAT_142f5e05b) ||
          *plVar3 != CONCAT53(_DAT_142f5e05b,_DAT_142f5e058)) goto LAB_1402d5353;
      unaff_R13B = 2;
      iVar2 = *piStack_160;
      goto joined_r0x0001402d52e1;
    }
    if (lVar23 == 0x11) {
      auVar25[0] = -(DAT_142f5e047 == (char)*plVar3);
      auVar25[1] = -(UNK_142f5e048 == *(char *)((longlong)plVar3 + 1));
      auVar25[2] = -(UNK_142f5e049 == *(char *)((longlong)plVar3 + 2));
      auVar25[3] = -(UNK_142f5e04a == *(char *)((longlong)plVar3 + 3));
      auVar25[4] = -(UNK_142f5e04b == *(char *)((longlong)plVar3 + 4));
      auVar25[5] = -(UNK_142f5e04c == *(char *)((longlong)plVar3 + 5));
      auVar25[6] = -(UNK_142f5e04d == *(char *)((longlong)plVar3 + 6));
      auVar25[7] = -(UNK_142f5e04e == *(char *)((longlong)plVar3 + 7));
      auVar25[8] = -(UNK_142f5e04f == (char)plVar3[1]);
      auVar25[9] = -(UNK_142f5e050 == *(char *)((longlong)plVar3 + 9));
      auVar25[10] = -(UNK_142f5e051 == *(char *)((longlong)plVar3 + 10));
      auVar25[0xb] = -(UNK_142f5e052 == *(char *)((longlong)plVar3 + 0xb));
      auVar25[0xc] = -(UNK_142f5e053 == *(char *)((longlong)plVar3 + 0xc));
      auVar25[0xd] = -(UNK_142f5e054 == *(char *)((longlong)plVar3 + 0xd));
      auVar25[0xe] = -(UNK_142f5e055 == *(char *)((longlong)plVar3 + 0xe));
      auVar25[0xf] = -(UNK_142f5e056 == *(char *)((longlong)plVar3 + 0xf));
      auVar26[0] = -(DAT_142f5e057 == (char)plVar3[2]);
      auVar26[1] = 0xff;
      auVar26[2] = 0xff;
      auVar26[3] = 0xff;
      auVar26[4] = 0xff;
      auVar26[5] = 0xff;
      auVar26[6] = 0xff;
      auVar26[7] = 0xff;
      auVar26[8] = 0xff;
      auVar26[9] = 0xff;
      auVar26[10] = 0xff;
      auVar26[0xb] = 0xff;
      auVar26[0xc] = 0xff;
      auVar26[0xd] = 0xff;
      auVar26[0xe] = 0xff;
      auVar26[0xf] = 0xff;
      auVar26 = auVar26 & auVar25;
      if ((ushort)((ushort)(SUB161(auVar26 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar26 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar26 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar26 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar26 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar26 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar26 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar26 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar26 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar26 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar26 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar26 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar26 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar26 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar26 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar26[0xf] >> 7) << 0xf) != 0xffff) goto LAB_1402d5353;
      unaff_R13B = 1;
      iVar2 = *piStack_160;
    }
    else {
      if ((lVar23 == 0xd) &&
         (*(longlong *)((longlong)plVar3 + 5) == CONCAT53(_UNK_142f5e042,_DAT_142f5e03f) &&
          *plVar3 == CONCAT35(_DAT_142f5e03f,_DAT_142f5e03a))) {
        unaff_R13B = 0;
        iVar2 = *piStack_160;
        goto joined_r0x0001402d52e1;
      }
LAB_1402d5353:
      unaff_R13B = 3;
      iVar2 = *piStack_160;
    }
    if (iVar2 == 1) goto LAB_1402d5079;
  }
LAB_1402d508f:
  cVar21 = cStack_1a8;
  if (cStack_1a8 == '2') {
                    /* WARNING: Could not recover jumptable at 0x0001402d50a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar22 = (char *)(*(code *)(&UNK_142e6abc4 +
                                *(int *)(&UNK_142e6abc4 + (ulonglong)unaff_R13B * 4)))();
    return pcVar22;
  }
LAB_1402d54ef:
  uStack_b8 = uStack_d8;
  uVar19 = uStack_f8;
  uStack_128 = uStack_f8;
  uStack_120 = uStack_f0;
  uStack_118 = uStack_e8;
  uStack_110 = uStack_e0;
  uStack_108 = uStack_d8;
  uStack_f8 = CONCAT44(unaff_XMM6_Da,CONCAT22(uStack_1b4,CONCAT11(unaff_R13B,cVar21)));
  uStack_d8 = uVar19;
  uStack_d0 = uStack_f0;
  uStack_c8 = uStack_e8;
  uStack_c0 = uStack_e0;
  if (cVar20 != '\0') {
    param_3 = 0;
  }
  if (param_4 == 0) {
    param_3 = 0;
  }
  uStack_e8 = CONCAT44(unaff_XMM7_Db,unaff_XMM7_Da);
  pdb_140dca990(&cStack_1a8,&uStack_f8,param_3,param_4);
  *(uint *)param_1 = CONCAT13(cStack_1a5,CONCAT12(cStack_1a6,CONCAT11(bStack_1a7,cStack_1a8)));
  *(uint *)(param_1 + 4) = CONCAT13(cStack_1a1,CONCAT12(cStack_1a2,CONCAT11(cStack_1a3,cStack_1a4)))
  ;
  *(ulonglong *)(param_1 + 8) =
       CONCAT17(cStack_199,
                CONCAT16(cStack_19a,
                         CONCAT15(cStack_19b,
                                  CONCAT14(cStack_19c,
                                           CONCAT13(cStack_19d,
                                                    CONCAT12(cStack_19e,
                                                             CONCAT11(cStack_19f,cStack_1a0)))))));
  *(ulonglong *)(param_1 + 0x10) = CONCAT62(uStack_196,uStack_198);
  *(ulonglong *)(param_1 + 0x18) = CONCAT62(uStack_18e,uStack_190);
  *(ulonglong *)(param_1 + 0x20) = CONCAT62(uStack_186,uStack_188);
  *(ulonglong *)(param_1 + 0x28) = CONCAT62(uStack_17e,uStack_180);
  *(ulonglong *)(param_1 + 0x30) = CONCAT62(uStack_176,uStack_178);
  *(ulonglong *)(param_1 + 0x38) = CONCAT62(uStack_16e,uStack_170);
  *(ulonglong *)(param_1 + 0x40) = CONCAT62(uStack_166,uStack_168);
  return param_1;
}

