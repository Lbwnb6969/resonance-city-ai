// VA 0x1402e55e0, PDB extent 3264 bytes
// ron::de::impl$2::deserialize_struct<country_core::game_config::_::impl$0::deserialize::__Visitor>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Removing unreachable block (ram,0x0001402e5ddc) */
/* WARNING: Removing unreachable block (ram,0x0001402e5db4) */
/* WARNING: Removing unreachable block (ram,0x0001402e5dc8) */
/* WARNING: Removing unreachable block (ram,0x0001402e5ded) */
/* Matched PDB project procedure:
   ron::de::impl$2::deserialize_struct<country_core::game_config::_::impl$0::deserialize::__Visitor>
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
   Extent: 3264 */

char * pdb_1402e55e0(char *param_1,int *param_2,undefined8 param_3,longlong param_4)

{
  int *piVar1;
  int iVar2;
  byte bVar3;
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
  int *piVar17;
  char cVar18;
  char cVar19;
  char *pcVar20;
  ulonglong uVar21;
  longlong lVar22;
  byte bVar23;
  uint uVar24;
  ulonglong unaff_R13;
  undefined1 auVar25 [16];
  undefined1 unaff_XMM7 [16];
  byte bStack_21c;
  char cStack_218;
  byte bStack_217;
  byte bStack_216;
  byte bStack_215;
  char cStack_214;
  char cStack_213;
  char cStack_212;
  char cStack_211;
  char cStack_210;
  char cStack_20f;
  char cStack_20e;
  char cStack_20d;
  char cStack_20c;
  char cStack_20b;
  char cStack_20a;
  char cStack_209;
  undefined2 uStack_208;
  undefined6 uStack_206;
  undefined2 uStack_200;
  undefined6 uStack_1fe;
  undefined2 uStack_1f8;
  undefined6 uStack_1f6;
  undefined2 uStack_1f0;
  undefined6 uStack_1ee;
  undefined2 uStack_1e8;
  undefined6 uStack_1e6;
  undefined2 uStack_1e0;
  undefined6 uStack_1de;
  undefined2 uStack_1d8;
  undefined6 uStack_1d6;
  ulonglong uStack_1c8;
  longlong lStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  int *piStack_188;
  undefined2 uStack_180;
  undefined1 uStack_17e;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  int *piStack_148;
  undefined8 uStack_140;
  longlong lStack_138;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 auStack_f8 [16];
  
  if (((char)param_2[0x1a] == '\0') &&
     (pdb_140dd1950(&cStack_218,param_2 + 4,param_3,param_4), cStack_218 != '2')) {
    *(ulonglong *)(param_1 + 0x40) = CONCAT62(uStack_1d6,uStack_1d8);
    *(ulonglong *)(param_1 + 0x32) = CONCAT26(uStack_1e0,uStack_1e6);
    *(ulonglong *)(param_1 + 0x3a) = CONCAT26(uStack_1d8,uStack_1de);
    *(ulonglong *)(param_1 + 0x22) = CONCAT26(uStack_1f0,uStack_1f6);
    *(ulonglong *)(param_1 + 0x2a) = CONCAT26(uStack_1e8,uStack_1ee);
    *(ulonglong *)(param_1 + 0x12) = CONCAT26(uStack_200,uStack_206);
    *(ulonglong *)(param_1 + 0x1a) = CONCAT26(uStack_1f8,uStack_1fe);
    *(ulonglong *)(param_1 + 2) =
         CONCAT17(cStack_20f,
                  CONCAT16(cStack_210,
                           CONCAT15(cStack_211,
                                    CONCAT14(cStack_212,
                                             CONCAT13(cStack_213,
                                                      CONCAT12(cStack_214,
                                                               CONCAT11(bStack_215,bStack_216)))))))
    ;
    *(ulonglong *)(param_1 + 10) =
         CONCAT26(uStack_208,
                  CONCAT15(cStack_209,
                           CONCAT14(cStack_20a,
                                    CONCAT13(cStack_20b,
                                             CONCAT12(cStack_20c,CONCAT11(cStack_20d,cStack_20e)))))
                 );
    *param_1 = cStack_218;
    param_1[1] = bStack_217;
    return param_1;
  }
  piVar1 = param_2 + 4;
  pdb_140dd4ac0(&cStack_218,piVar1);
  if (cStack_218 != '2') {
LAB_1402e5ec4:
    *(ulonglong *)(param_1 + 0x40) = CONCAT62(uStack_1d6,uStack_1d8);
    *(ulonglong *)(param_1 + 0x30) = CONCAT62(uStack_1e6,uStack_1e8);
    *(ulonglong *)(param_1 + 0x38) = CONCAT62(uStack_1de,uStack_1e0);
    *(ulonglong *)(param_1 + 0x20) = CONCAT62(uStack_1f6,uStack_1f8);
    *(ulonglong *)(param_1 + 0x28) = CONCAT62(uStack_1ee,uStack_1f0);
    *(ulonglong *)(param_1 + 0x10) = CONCAT62(uStack_206,uStack_208);
    *(ulonglong *)(param_1 + 0x18) = CONCAT62(uStack_1fe,uStack_200);
    *(ulonglong *)param_1 =
         CONCAT17(cStack_211,
                  CONCAT16(cStack_212,
                           CONCAT15(cStack_213,
                                    CONCAT14(cStack_214,
                                             CONCAT13(bStack_215,
                                                      CONCAT12(bStack_216,
                                                               CONCAT11(bStack_217,cStack_218)))))))
    ;
    *(ulonglong *)(param_1 + 8) =
         CONCAT17(cStack_209,
                  CONCAT16(cStack_20a,
                           CONCAT15(cStack_20b,
                                    CONCAT14(cStack_20c,
                                             CONCAT13(cStack_20d,
                                                      CONCAT12(cStack_20e,
                                                               CONCAT11(cStack_20f,cStack_210)))))))
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
  uStack_180 = 0x103;
  uStack_17e = 0;
  piStack_188 = param_2;
  pdb_140dca8b0(&cStack_218,&piStack_188);
  cVar16 = UNK_142e69d6f;
  cVar15 = UNK_142e69d6e;
  cVar14 = UNK_142e69d6d;
  cVar13 = UNK_142e69d6c;
  cVar12 = UNK_142e69d6b;
  cVar11 = UNK_142e69d6a;
  cVar10 = UNK_142e69d69;
  cVar9 = UNK_142e69d68;
  cVar8 = UNK_142e69d67;
  cVar7 = UNK_142e69d66;
  cVar6 = UNK_142e69d65;
  cVar5 = UNK_142e69d64;
  bVar4 = UNK_142e69d63;
  bVar3 = UNK_142e69d62;
  bVar23 = UNK_142e69d61;
  cVar19 = DAT_142e69d60;
  if (cStack_218 != '2') {
    unaff_XMM7 = ZEXT416(CONCAT13(cStack_211,CONCAT12(cStack_212,CONCAT11(cStack_213,cStack_214))));
    lStack_138 = CONCAT17(cStack_209,
                          CONCAT16(cStack_20a,
                                   CONCAT15(cStack_20b,
                                            CONCAT14(cStack_20c,
                                                     CONCAT13(cStack_20d,
                                                              CONCAT12(cStack_20e,
                                                                       CONCAT11(cStack_20f,
                                                                                cStack_210)))))));
    uStack_178 = CONCAT62(uStack_1f6,uStack_1f8);
    uStack_170 = CONCAT62(uStack_1ee,uStack_1f0);
    uStack_168 = CONCAT62(uStack_1e6,uStack_1e8);
    uStack_160 = CONCAT62(uStack_1de,uStack_1e0);
    uStack_158 = CONCAT62(uStack_1d6,uStack_1d8);
    uVar24 = (uint)bStack_217;
    cVar19 = cStack_218;
    bVar23 = bStack_216;
    bStack_21c = bStack_215;
    goto LAB_1402e5f5c;
  }
  piStack_148 = piVar1;
  if ((bStack_217 & 1) == 0) {
    uVar21 = pdb_140a39710();
    uStack_1c8 = uVar21 >> 8 & 0xffffff;
    if (*param_2 == 1) {
      lVar22 = -1;
      if (*(longlong *)(param_2 + 2) + 1 != 0) {
        lVar22 = *(longlong *)(param_2 + 2) + 1;
      }
      *(longlong *)(param_2 + 2) = lVar22;
    }
    pdb_140dd4ac0(&cStack_218,piStack_148);
    if (cStack_218 != '2') goto LAB_1402e5ec4;
    if (cVar18 == '\0') {
      cVar18 = pdb_140dce020(piStack_148,0x29);
      cVar19 = '\x17';
      if (cVar18 == '\0') goto LAB_1402e5ebd;
    }
    *(uint *)(param_1 + 1) =
         (uint)uVar21 & 1 |
         ((uint)uStack_1c8 & 1) << 8 |
         ((uint)(uVar21 >> 0x10) & 1) << 0x10 | (uint)((byte)(uVar21 >> 0x18) & 1) << 0x18;
    param_1[7] = (byte)(uVar21 >> 0x30) & 1;
    *(ushort *)(param_1 + 5) =
         (ushort)(uVar21 >> 0x20) & 1 |
         (ushort)(((ulonglong)((uint)(uVar21 >> 0x28) & 1) << 0x28) >> 0x20);
    param_1[8] = (byte)(uVar21 >> 0x38) & 1;
    cVar19 = '2';
LAB_1402e5ebd:
    *param_1 = cVar19;
    return param_1;
  }
  pdb_140dcace0(&cStack_218);
  piVar1 = piStack_188;
  auVar25[0] = -(cStack_218 == cVar19);
  auVar25[1] = -(bStack_217 == bVar23);
  auVar25[2] = -(bStack_216 == bVar3);
  auVar25[3] = -(bStack_215 == bVar4);
  auVar25[4] = -(cStack_214 == cVar5);
  auVar25[5] = -(cStack_213 == cVar6);
  auVar25[6] = -(cStack_212 == cVar7);
  auVar25[7] = -(cStack_211 == cVar8);
  auVar25[8] = -(cStack_210 == cVar9);
  auVar25[9] = -(cStack_20f == cVar10);
  auVar25[10] = -(cStack_20e == cVar11);
  auVar25[0xb] = -(cStack_20d == cVar12);
  auVar25[0xc] = -(cStack_20c == cVar13);
  auVar25[0xd] = -(cStack_20b == cVar14);
  auVar25[0xe] = -(cStack_20a == cVar15);
  auVar25[0xf] = -(cStack_209 == cVar16);
  uStack_17e = (ushort)((ushort)(SUB161(auVar25 >> 7,0) & 1) |
                        (ushort)(SUB161(auVar25 >> 0xf,0) & 1) << 1 |
                        (ushort)(SUB161(auVar25 >> 0x17,0) & 1) << 2 |
                        (ushort)(SUB161(auVar25 >> 0x1f,0) & 1) << 3 |
                        (ushort)(SUB161(auVar25 >> 0x27,0) & 1) << 4 |
                        (ushort)(SUB161(auVar25 >> 0x2f,0) & 1) << 5 |
                        (ushort)(SUB161(auVar25 >> 0x37,0) & 1) << 6 |
                        (ushort)(SUB161(auVar25 >> 0x3f,0) & 1) << 7 |
                        (ushort)(SUB161(auVar25 >> 0x47,0) & 1) << 8 |
                        (ushort)(SUB161(auVar25 >> 0x4f,0) & 1) << 9 |
                        (ushort)(SUB161(auVar25 >> 0x57,0) & 1) << 10 |
                        (ushort)(SUB161(auVar25 >> 0x5f,0) & 1) << 0xb |
                        (ushort)(SUB161(auVar25 >> 0x67,0) & 1) << 0xc |
                        (ushort)(SUB161(auVar25 >> 0x6f,0) & 1) << 0xd |
                        (ushort)(SUB161(auVar25 >> 0x77,0) & 1) << 0xe |
                       (ushort)(auVar25[0xf] >> 7) << 0xf) == 0xffff;
  cVar19 = (char)*piStack_188;
  if ((char)uStack_180 == '\x01') {
    if (cVar19 != '\0') {
      if (*(longlong *)(piStack_188 + 2) == 0) goto LAB_1402e5f43;
      *(longlong *)(piStack_188 + 2) = *(longlong *)(piStack_188 + 2) + -1;
    }
    lStack_138 = CONCAT71(lStack_138._1_7_,1);
LAB_1402e5918:
    uStack_140 = piStack_188;
    pdb_140342ec0(&cStack_218,&uStack_140);
    if (cStack_218 != '2') {
      uStack_1c8 = CONCAT71(uStack_1c8._1_7_,bStack_216);
      unaff_XMM7 = ZEXT416(CONCAT13(cStack_211,CONCAT12(cStack_212,CONCAT11(cStack_213,cStack_214)))
                          );
      lStack_1c0 = CONCAT17(cStack_209,
                            CONCAT16(cStack_20a,
                                     CONCAT15(cStack_20b,
                                              CONCAT14(cStack_20c,
                                                       CONCAT13(cStack_20d,
                                                                CONCAT12(cStack_20e,
                                                                         CONCAT11(cStack_20f,
                                                                                  cStack_210)))))));
      uStack_178 = CONCAT62(uStack_1f6,uStack_1f8);
      uStack_170 = CONCAT62(uStack_1ee,uStack_1f0);
      uStack_168 = CONCAT62(uStack_1e6,uStack_1e8);
      uStack_160 = CONCAT62(uStack_1de,uStack_1e0);
      uStack_158 = CONCAT62(uStack_1d6,uStack_1d8);
      bStack_21c = bStack_215;
    }
    unaff_R13 = (ulonglong)bStack_217;
    cVar19 = cStack_218;
    if ((char)*piStack_188 != '\0') {
LAB_1402e59a1:
      lVar22 = *(longlong *)(piStack_188 + 2) + 1;
      if (lVar22 == 0) {
        lVar22 = -1;
      }
      *(longlong *)(piStack_188 + 2) = lVar22;
    }
LAB_1402e59b7:
    if (cVar19 == '2') {
                    /* WARNING: Could not recover jumptable at 0x0001402e59d1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pcVar20 = (char *)(*(code *)(&UNK_142e6ad38 + *(int *)(&UNK_142e6ad38 + unaff_R13 * 4)))();
      return pcVar20;
    }
  }
  else {
    if ((char)uStack_180 != '\x03') {
      if (cVar19 != '\0') {
        if (*(longlong *)(piStack_188 + 2) == 0) goto LAB_1402e5f43;
        *(longlong *)(piStack_188 + 2) = *(longlong *)(piStack_188 + 2) + -1;
      }
      pdb_140dcce90(&cStack_218,piStack_188 + 4);
      piVar17 = uStack_140;
      if (cStack_218 == '2') {
        *(ulonglong *)(piVar1 + 0x16) =
             CONCAT17(cStack_209,
                      CONCAT16(cStack_20a,
                               CONCAT15(cStack_20b,
                                        CONCAT14(cStack_20c,
                                                 CONCAT13(cStack_20d,
                                                          CONCAT12(cStack_20e,
                                                                   CONCAT11(cStack_20f,cStack_210)))
                                                ))));
        *(ulonglong *)(piVar1 + 0x18) = CONCAT62(uStack_206,uStack_208);
        pdb_14014e150(&uStack_140);
        if ((char)uStack_140 != '2') {
          lStack_1c0 = lStack_138;
          cVar19 = (char)uStack_140;
          goto LAB_1402e5c66;
        }
        cVar19 = '2';
        iVar2 = *piStack_188;
      }
      else {
        uStack_140._5_3_ =
             (undefined3)
             (CONCAT13(cStack_211,CONCAT12(cStack_212,CONCAT11(cStack_213,cStack_214))) >> 8);
        uStack_140._0_1_ = (char)piVar17;
        uStack_140._0_5_ =
             CONCAT41(CONCAT13(cStack_214,CONCAT12(bStack_215,CONCAT11(bStack_216,bStack_217))),
                      (char)uStack_140);
        lStack_1c0 = CONCAT17(cStack_209,
                              CONCAT16(cStack_20a,
                                       CONCAT15(cStack_20b,
                                                CONCAT14(cStack_20c,
                                                         CONCAT13(cStack_20d,
                                                                  CONCAT12(cStack_20e,
                                                                           CONCAT11(cStack_20f,
                                                                                    cStack_210))))))
                             );
        uStack_120 = CONCAT62(uStack_1f6,uStack_1f8);
        uStack_118 = CONCAT62(uStack_1ee,uStack_1f0);
        uStack_110 = CONCAT62(uStack_1e6,uStack_1e8);
        uStack_108 = CONCAT62(uStack_1de,uStack_1e0);
        uStack_100 = CONCAT62(uStack_1d6,uStack_1d8);
        cVar19 = cStack_218;
LAB_1402e5c66:
        uStack_1c8 = CONCAT71(uStack_1c8._1_7_,uStack_140._2_1_);
        unaff_XMM7 = ZEXT416(uStack_140._4_4_);
        iVar2 = *piStack_188;
        uStack_158 = uStack_100;
        uStack_178 = uStack_120;
        uStack_170 = uStack_118;
        uStack_168 = uStack_110;
        uStack_160 = uStack_108;
        bStack_21c = uStack_140._3_1_;
      }
      unaff_R13 = (ulonglong)uStack_140 >> 8 & 0xff;
      if (iVar2 == 1) goto LAB_1402e59a1;
      goto LAB_1402e59b7;
    }
    if (cVar19 == '\0') {
LAB_1402e58d7:
      lStack_138 = (ulonglong)lStack_138._1_7_ << 8;
      goto LAB_1402e5918;
    }
    if (*(longlong *)(piStack_188 + 2) != 0) {
      *(longlong *)(piStack_188 + 2) = *(longlong *)(piStack_188 + 2) + -1;
      goto LAB_1402e58d7;
    }
LAB_1402e5f43:
    cVar19 = '0';
  }
  uVar24 = (uint)unaff_R13;
  lStack_138 = lStack_1c0;
  bVar23 = (byte)uStack_1c8;
LAB_1402e5f5c:
  uStack_198 = uStack_158;
  uStack_1a8 = uStack_168;
  uStack_1a0 = uStack_160;
  uStack_1b8 = uStack_178;
  uStack_1b0 = uStack_170;
  auStack_f8[1] = unaff_XMM7[1];
  uStack_140._0_5_ =
       CONCAT41(uVar24 & 0xff |
                (uint)bVar23 << 8 | (uint)bStack_21c << 0x10 | unaff_XMM7._0_4_ << 0x18,cVar19);
  uStack_140 = (int *)CONCAT17(unaff_XMM7[3],
                               CONCAT25((ushort)auStack_f8[1] |
                                        (ushort)(((ulonglong)(unaff_XMM7._0_4_ >> 0x10) << 0x28) >>
                                                0x20),(undefined5)uStack_140));
  uStack_120 = uStack_178;
  uStack_118 = uStack_170;
  if (cVar18 != '\0') {
    param_3 = 0;
  }
  uStack_100 = uStack_158;
  if (param_4 == 0) {
    param_3 = 0;
  }
  auStack_f8 = unaff_XMM7;
  pdb_140dca990(&cStack_218,&uStack_140,param_3);
  *param_1 = cStack_218;
  param_1[7] = cStack_211;
  *(ushort *)(param_1 + 5) = CONCAT11(cStack_212,cStack_213);
  *(uint *)(param_1 + 1) = CONCAT13(cStack_214,CONCAT12(bStack_215,CONCAT11(bStack_216,bStack_217)))
  ;
  *(ulonglong *)(param_1 + 8) =
       CONCAT17(cStack_209,
                CONCAT16(cStack_20a,
                         CONCAT15(cStack_20b,
                                  CONCAT14(cStack_20c,
                                           CONCAT13(cStack_20d,
                                                    CONCAT12(cStack_20e,
                                                             CONCAT11(cStack_20f,cStack_210)))))));
  *(ulonglong *)(param_1 + 0x10) = CONCAT62(uStack_206,uStack_208);
  *(ulonglong *)(param_1 + 0x18) = CONCAT62(uStack_1fe,uStack_200);
  *(ulonglong *)(param_1 + 0x20) = CONCAT62(uStack_1f6,uStack_1f8);
  *(ulonglong *)(param_1 + 0x28) = CONCAT62(uStack_1ee,uStack_1f0);
  *(ulonglong *)(param_1 + 0x30) = CONCAT62(uStack_1e6,uStack_1e8);
  *(ulonglong *)(param_1 + 0x38) = CONCAT62(uStack_1de,uStack_1e0);
  *(ulonglong *)(param_1 + 0x40) = CONCAT62(uStack_1d6,uStack_1d8);
  return param_1;
}

