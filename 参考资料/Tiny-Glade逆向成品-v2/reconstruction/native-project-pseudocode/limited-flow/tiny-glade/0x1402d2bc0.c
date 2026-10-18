// VA 0x1402d2bc0, PDB extent 5882 bytes
// ron::de::impl$2::deserialize_struct<country_core::game_config::_::impl$0::deserialize::__Visitor>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Removing unreachable block (ram,0x0001402d3a74) */
/* WARNING: Removing unreachable block (ram,0x0001402d3ab0) */
/* Matched PDB project procedure:
   ron::de::impl$2::deserialize_struct<country_core::game_config::_::impl$0::deserialize::__Visitor>
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
   Extent: 5882 */

char * pdb_1402d2bc0(char *param_1,int *param_2,undefined8 param_3,ulonglong param_4)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
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
  char cVar19;
  int *piVar20;
  char cVar21;
  char cVar22;
  char *pcVar23;
  longlong lVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  ulonglong uVar28;
  undefined2 uVar29;
  byte bVar30;
  undefined1 auVar31 [16];
  undefined4 unaff_XMM6_Da;
  undefined4 uVar32;
  undefined4 unaff_XMM7_Da;
  undefined4 unaff_XMM7_Db;
  undefined4 unaff_XMM8_Da;
  undefined4 unaff_XMM11_Da;
  undefined4 unaff_XMM12_Da;
  undefined4 unaff_XMM15_Da;
  char cStack_248;
  byte bStack_247;
  char cStack_246;
  char cStack_245;
  char cStack_244;
  char cStack_243;
  char cStack_242;
  char cStack_241;
  char cStack_240;
  char cStack_23f;
  char cStack_23e;
  char cStack_23d;
  char cStack_23c;
  char cStack_23b;
  char cStack_23a;
  char cStack_239;
  undefined2 uStack_238;
  undefined2 uStack_236;
  undefined1 uStack_234;
  byte bStack_233;
  byte bStack_232;
  byte bStack_231;
  undefined1 uStack_230;
  byte bStack_22f;
  byte bStack_22e;
  byte bStack_22d;
  undefined4 uStack_22c;
  undefined2 uStack_228;
  undefined6 uStack_226;
  undefined2 uStack_220;
  undefined6 uStack_21e;
  undefined2 uStack_218;
  undefined6 uStack_216;
  undefined2 uStack_210;
  undefined6 uStack_20e;
  undefined2 uStack_208;
  undefined6 uStack_206;
  byte bStack_1f5;
  byte bStack_1f4;
  byte bStack_1f3;
  byte bStack_1f2;
  byte bStack_1f1;
  byte bStack_1f0;
  undefined1 uStack_1ef;
  undefined1 uStack_1ee;
  undefined1 uStack_1ed;
  uint uStack_1ec;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  int *piStack_1b8;
  undefined2 uStack_1b0;
  undefined1 uStack_1ae;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined8 uStack_180;
  longlong lStack_178;
  undefined8 uStack_170;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  ulonglong uStack_110;
  ulonglong uStack_108;
  ulonglong uStack_100;
  ulonglong uStack_f8;
  ulonglong uStack_f0;
  
  if (((char)param_2[0x1a] == '\0') &&
     (pdb_140dd1950(&cStack_248,param_2 + 4,param_3,param_4), cStack_248 != '2')) {
    *(ulonglong *)(param_1 + 0x40) = CONCAT62(uStack_206,uStack_208);
    *(ulonglong *)(param_1 + 0x32) = CONCAT26(uStack_210,uStack_216);
    *(ulonglong *)(param_1 + 0x3a) = CONCAT26(uStack_208,uStack_20e);
    *(ulonglong *)(param_1 + 0x22) = CONCAT26(uStack_220,uStack_226);
    *(ulonglong *)(param_1 + 0x2a) = CONCAT26(uStack_218,uStack_21e);
    *(ulonglong *)(param_1 + 0x12) =
         CONCAT17(bStack_22f,
                  CONCAT16(uStack_230,
                           CONCAT15(bStack_231,
                                    CONCAT14(bStack_232,
                                             CONCAT13(bStack_233,CONCAT12(uStack_234,uStack_236)))))
                 );
    *(ulonglong *)(param_1 + 0x1a) =
         CONCAT26(uStack_228,CONCAT42(uStack_22c,CONCAT11(bStack_22d,bStack_22e)));
    *(ulonglong *)(param_1 + 2) =
         CONCAT17(cStack_23f,
                  CONCAT16(cStack_240,
                           CONCAT15(cStack_241,
                                    CONCAT14(cStack_242,
                                             CONCAT13(cStack_243,
                                                      CONCAT12(cStack_244,
                                                               CONCAT11(cStack_245,cStack_246)))))))
    ;
    *(ulonglong *)(param_1 + 10) =
         CONCAT26(uStack_238,
                  CONCAT15(cStack_239,
                           CONCAT14(cStack_23a,
                                    CONCAT13(cStack_23b,
                                             CONCAT12(cStack_23c,CONCAT11(cStack_23d,cStack_23e)))))
                 );
    *param_1 = cStack_248;
    param_1[1] = bStack_247;
    return param_1;
  }
  piVar1 = param_2 + 4;
  pdb_140dd4ac0(&cStack_248,piVar1);
  if (cStack_248 != '2') {
LAB_1402d3c30:
    *(ulonglong *)(param_1 + 0x40) = CONCAT62(uStack_206,uStack_208);
    *(ulonglong *)(param_1 + 0x30) = CONCAT62(uStack_216,uStack_218);
    *(ulonglong *)(param_1 + 0x38) = CONCAT62(uStack_20e,uStack_210);
    *(ulonglong *)(param_1 + 0x20) = CONCAT62(uStack_226,uStack_228);
    *(ulonglong *)(param_1 + 0x28) = CONCAT62(uStack_21e,uStack_220);
    *(ulonglong *)(param_1 + 0x10) =
         CONCAT17(bStack_231,
                  CONCAT16(bStack_232,
                           CONCAT15(bStack_233,CONCAT14(uStack_234,CONCAT22(uStack_236,uStack_238)))
                          ));
    *(ulonglong *)(param_1 + 0x18) =
         CONCAT44(uStack_22c,
                  CONCAT13(bStack_22d,CONCAT12(bStack_22e,CONCAT11(bStack_22f,uStack_230))));
    *(ulonglong *)param_1 =
         CONCAT17(cStack_241,
                  CONCAT16(cStack_242,
                           CONCAT15(cStack_243,
                                    CONCAT14(cStack_244,
                                             CONCAT13(cStack_245,
                                                      CONCAT12(cStack_246,
                                                               CONCAT11(bStack_247,cStack_248)))))))
    ;
    *(ulonglong *)(param_1 + 8) =
         CONCAT17(cStack_239,
                  CONCAT16(cStack_23a,
                           CONCAT15(cStack_23b,
                                    CONCAT14(cStack_23c,
                                             CONCAT13(cStack_23d,
                                                      CONCAT12(cStack_23e,
                                                               CONCAT11(cStack_23f,cStack_240)))))))
    ;
    return param_1;
  }
  cVar21 = '\x01';
  if ((char)param_2[0x1a] == '\0') {
    cVar21 = pdb_140dce020(piVar1,0x28);
    if (cVar21 == '\0') {
      if (param_4 != 0) {
        *param_1 = '\x16';
        *(undefined8 *)(param_1 + 8) = param_3;
        *(ulonglong *)(param_1 + 0x10) = param_4;
        return param_1;
      }
      *param_1 = '\x15';
      return param_1;
    }
    cVar21 = (char)param_2[0x1a];
  }
  *(char *)(param_2 + 0x1a) = '\0';
  if ((char)*param_2 != '\0') {
    if (*(longlong *)(param_2 + 2) == 0) {
      *param_1 = '0';
      return param_1;
    }
    *(longlong *)(param_2 + 2) = *(longlong *)(param_2 + 2) + -1;
  }
  uStack_1b0 = 0x103;
  uStack_1ae = 0;
  piStack_1b8 = param_2;
  pdb_140dca8b0(&cStack_248,&piStack_1b8);
  cVar19 = UNK_142e6995f;
  cVar18 = UNK_142e6995e;
  cVar17 = UNK_142e6995d;
  cVar16 = UNK_142e6995c;
  cVar15 = UNK_142e6995b;
  cVar14 = UNK_142e6995a;
  cVar13 = UNK_142e69959;
  cVar12 = UNK_142e69958;
  cVar11 = UNK_142e69957;
  cVar10 = UNK_142e69956;
  cVar9 = UNK_142e69955;
  cVar8 = UNK_142e69954;
  cVar7 = UNK_142e69953;
  cVar6 = UNK_142e69952;
  bVar27 = UNK_142e69951;
  cVar22 = DAT_142e69950;
  if (cStack_248 != '2') {
    uVar29 = CONCAT11(cStack_245,cStack_246);
    unaff_XMM6_Da = CONCAT13(cStack_241,CONCAT12(cStack_242,CONCAT11(cStack_243,cStack_244)));
    unaff_XMM7_Da = CONCAT22(uStack_236,uStack_238);
    unaff_XMM7_Db =
         (undefined4)
         (CONCAT17(bStack_231,
                   CONCAT16(bStack_232,CONCAT15(bStack_233,CONCAT14(uStack_234,unaff_XMM7_Da)))) >>
         0x20);
    uStack_138 = CONCAT62(uStack_226,uStack_228);
    uStack_130 = CONCAT62(uStack_21e,uStack_220);
    uStack_128 = CONCAT62(uStack_216,uStack_218);
    uStack_120 = CONCAT62(uStack_20e,uStack_210);
    uStack_118 = CONCAT62(uStack_206,uStack_208);
    cVar22 = cStack_248;
    bVar27 = bStack_247;
    goto LAB_1402d38bb;
  }
  bStack_1f1 = 2;
  bStack_1f5 = 7;
  bStack_1f3 = 7;
  bStack_1f2 = 2;
  bStack_1f0 = 2;
  bStack_1f4 = 2;
  uStack_1ed = 2;
  uStack_1ee = 2;
  uStack_1ef = 2;
  uStack_110 = 0;
  uStack_108 = 0;
  uStack_100 = 0;
  uStack_f8 = 0;
  uStack_f0 = 0;
  uStack_188 = 0;
  uStack_18c = 0;
  uStack_190 = 0;
  uStack_194 = 0;
  uStack_198 = 0;
  if ((bStack_247 & 1) == 0) {
    pdb_140a39720(&cStack_248);
    bVar27 = bStack_231;
    uVar32 = uStack_184;
    if ((uStack_110 & 1) == 0) {
      uVar32 = CONCAT13(cStack_245,CONCAT12(cStack_246,CONCAT11(bStack_247,cStack_248)));
    }
    if ((uStack_108 & 1) == 0) {
      unaff_XMM11_Da = CONCAT13(cStack_241,CONCAT12(cStack_242,CONCAT11(cStack_243,cStack_244)));
    }
    if (bStack_1f1 == 2) {
      uStack_1ec = CONCAT13(bStack_22d,CONCAT12(bStack_22e,CONCAT11(bStack_22f,uStack_230)));
    }
    else {
      uStack_1ec = (uint)(bStack_1f1 & 1);
    }
    uVar5 = CONCAT13(bStack_231,CONCAT12(bStack_232,CONCAT11(bStack_233,uStack_234)));
    bVar2 = bStack_233;
    if (bStack_1f5 != 7) {
      bVar2 = bStack_1f5;
    }
    bVar30 = bStack_232;
    if (bStack_1f3 != 7) {
      bVar30 = bStack_1f3;
    }
    if ((uStack_100 & 1) == 0) {
      unaff_XMM12_Da = CONCAT13(cStack_23d,CONCAT12(cStack_23e,CONCAT11(cStack_23f,cStack_240)));
    }
    if ((uStack_f8 & 1) == 0) {
      unaff_XMM15_Da = CONCAT13(cStack_239,CONCAT12(cStack_23a,CONCAT11(cStack_23b,cStack_23c)));
    }
    if ((uStack_f0 & 1) == 0) {
      unaff_XMM8_Da = CONCAT22(uStack_236,uStack_238);
    }
    bVar25 = bStack_22f;
    if (bStack_1f2 != 2) {
      bVar25 = bStack_1f2 & 1;
    }
    bVar26 = bStack_22e;
    if (bStack_1f0 != 2) {
      bVar26 = bStack_1f0 & 1;
    }
    bVar4 = bStack_22d;
    if (bStack_1f4 != 2) {
      bVar4 = bStack_1f4 & 1;
    }
    uStack_180 = (int *)CONCAT44(unaff_XMM12_Da,unaff_XMM11_Da);
    if (*param_2 == 1) {
      lVar24 = -1;
      if (*(longlong *)(param_2 + 2) + 1 != 0) {
        lVar24 = *(longlong *)(param_2 + 2) + 1;
      }
      *(longlong *)(param_2 + 2) = lVar24;
    }
    pdb_140dd4ac0(&cStack_248,piVar1);
    if (cStack_248 == '2') {
      if ((cVar21 == '\0') && (cVar21 = pdb_140dce020(piVar1,0x29), cVar21 == '\0')) {
        *param_1 = '\x17';
        return param_1;
      }
      *(undefined4 *)(param_1 + 4) = uVar32;
      *(int **)(param_1 + 8) = uStack_180;
      *(undefined4 *)(param_1 + 0x10) = unaff_XMM15_Da;
      *(undefined4 *)(param_1 + 0x14) = unaff_XMM8_Da;
      *(ulonglong *)(param_1 + 0x18) =
           (ulonglong)uVar5 & 0xff |
           (ulonglong)bVar2 << 8 |
           (ulonglong)bVar30 << 0x10 |
           (ulonglong)bVar27 << 0x18 |
           (ulonglong)(byte)uStack_1ec << 0x20 |
           (ulonglong)bVar25 << 0x28 | (ulonglong)bVar26 << 0x30 | (ulonglong)bVar4 << 0x38;
      *param_1 = '2';
      return param_1;
    }
    goto LAB_1402d3c30;
  }
  pdb_140dcace0(&cStack_248);
  piVar1 = piStack_1b8;
  auVar31[0] = -(cStack_248 == cVar22);
  auVar31[1] = -(bStack_247 == bVar27);
  auVar31[2] = -(cStack_246 == cVar6);
  auVar31[3] = -(cStack_245 == cVar7);
  auVar31[4] = -(cStack_244 == cVar8);
  auVar31[5] = -(cStack_243 == cVar9);
  auVar31[6] = -(cStack_242 == cVar10);
  auVar31[7] = -(cStack_241 == cVar11);
  auVar31[8] = -(cStack_240 == cVar12);
  auVar31[9] = -(cStack_23f == cVar13);
  auVar31[10] = -(cStack_23e == cVar14);
  auVar31[0xb] = -(cStack_23d == cVar15);
  auVar31[0xc] = -(cStack_23c == cVar16);
  auVar31[0xd] = -(cStack_23b == cVar17);
  auVar31[0xe] = -(cStack_23a == cVar18);
  auVar31[0xf] = -(cStack_239 == cVar19);
  uStack_1ae = (ushort)((ushort)(SUB161(auVar31 >> 7,0) & 1) |
                        (ushort)(SUB161(auVar31 >> 0xf,0) & 1) << 1 |
                        (ushort)(SUB161(auVar31 >> 0x17,0) & 1) << 2 |
                        (ushort)(SUB161(auVar31 >> 0x1f,0) & 1) << 3 |
                        (ushort)(SUB161(auVar31 >> 0x27,0) & 1) << 4 |
                        (ushort)(SUB161(auVar31 >> 0x2f,0) & 1) << 5 |
                        (ushort)(SUB161(auVar31 >> 0x37,0) & 1) << 6 |
                        (ushort)(SUB161(auVar31 >> 0x3f,0) & 1) << 7 |
                        (ushort)(SUB161(auVar31 >> 0x47,0) & 1) << 8 |
                        (ushort)(SUB161(auVar31 >> 0x4f,0) & 1) << 9 |
                        (ushort)(SUB161(auVar31 >> 0x57,0) & 1) << 10 |
                        (ushort)(SUB161(auVar31 >> 0x5f,0) & 1) << 0xb |
                        (ushort)(SUB161(auVar31 >> 0x67,0) & 1) << 0xc |
                        (ushort)(SUB161(auVar31 >> 0x6f,0) & 1) << 0xd |
                        (ushort)(SUB161(auVar31 >> 0x77,0) & 1) << 0xe |
                       (ushort)(auVar31[0xf] >> 7) << 0xf) == 0xffff;
  cVar22 = (char)*piStack_1b8;
  if ((char)uStack_1b0 == '\x01') {
    if (cVar22 != '\0') {
      if (*(longlong *)(piStack_1b8 + 2) == 0) goto LAB_1402d3d4f;
      *(longlong *)(piStack_1b8 + 2) = *(longlong *)(piStack_1b8 + 2) + -1;
    }
    lStack_178 = CONCAT71(lStack_178._1_7_,1);
LAB_1402d2f68:
    uStack_180 = piStack_1b8;
    pdb_140342ff0(&cStack_248,&uStack_180);
    if (cStack_248 != '2') {
      uStack_1ec = CONCAT22(uStack_1ec._2_2_,CONCAT11(cStack_245,cStack_246));
      unaff_XMM6_Da = CONCAT13(cStack_241,CONCAT12(cStack_242,CONCAT11(cStack_243,cStack_244)));
      unaff_XMM7_Da = CONCAT22(uStack_236,uStack_238);
      unaff_XMM7_Db =
           (undefined4)
           (CONCAT17(bStack_231,
                     CONCAT16(bStack_232,CONCAT15(bStack_233,CONCAT14(uStack_234,unaff_XMM7_Da))))
           >> 0x20);
      uStack_138 = CONCAT62(uStack_226,uStack_228);
      uStack_130 = CONCAT62(uStack_21e,uStack_220);
      uStack_128 = CONCAT62(uStack_216,uStack_218);
      uStack_120 = CONCAT62(uStack_20e,uStack_210);
      uStack_118 = CONCAT62(uStack_206,uStack_208);
    }
    uVar28 = (ulonglong)bStack_247;
    cVar22 = cStack_248;
    if ((char)*piStack_1b8 != '\0') {
LAB_1402d2ff3:
      lVar24 = *(longlong *)(piStack_1b8 + 2) + 1;
      if (lVar24 == 0) {
        lVar24 = -1;
      }
      *(longlong *)(piStack_1b8 + 2) = lVar24;
    }
LAB_1402d3009:
    if (cVar22 == '2') {
                    /* WARNING: Could not recover jumptable at 0x0001402d3023. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pcVar23 = (char *)(*(code *)(&UNK_142e6ab58 + *(int *)(&UNK_142e6ab58 + uVar28 * 4)))();
      return pcVar23;
    }
  }
  else {
    if ((char)uStack_1b0 != '\x03') {
      if (cVar22 != '\0') {
        if (*(longlong *)(piStack_1b8 + 2) == 0) goto LAB_1402d3d4f;
        *(longlong *)(piStack_1b8 + 2) = *(longlong *)(piStack_1b8 + 2) + -1;
      }
      pdb_140dcce90(&cStack_248,piStack_1b8 + 4);
      piVar20 = uStack_180;
      if (cStack_248 == '2') {
        *(ulonglong *)(piVar1 + 0x16) =
             CONCAT17(cStack_239,
                      CONCAT16(cStack_23a,
                               CONCAT15(cStack_23b,
                                        CONCAT14(cStack_23c,
                                                 CONCAT13(cStack_23d,
                                                          CONCAT12(cStack_23e,
                                                                   CONCAT11(cStack_23f,cStack_240)))
                                                ))));
        *(ulonglong *)(piVar1 + 0x18) =
             CONCAT17(bStack_231,
                      CONCAT16(bStack_232,
                               CONCAT15(bStack_233,
                                        CONCAT14(uStack_234,CONCAT22(uStack_236,uStack_238)))));
        pdb_14014e2c0(&uStack_180);
        if ((char)uStack_180 != '2') {
          unaff_XMM7_Da = (undefined4)uStack_170;
          unaff_XMM7_Db = (undefined4)((ulonglong)uStack_170 >> 0x20);
          cVar22 = (char)uStack_180;
          goto LAB_1402d314c;
        }
        cVar22 = '2';
        iVar3 = *piStack_1b8;
      }
      else {
        uStack_180._5_3_ =
             (undefined3)
             (CONCAT13(cStack_241,CONCAT12(cStack_242,CONCAT11(cStack_243,cStack_244))) >> 8);
        uStack_180._0_1_ = (char)piVar20;
        uStack_180._0_5_ =
             CONCAT41(CONCAT13(cStack_244,CONCAT12(cStack_245,CONCAT11(cStack_246,bStack_247))),
                      (char)uStack_180);
        unaff_XMM7_Da = CONCAT22(uStack_236,uStack_238);
        unaff_XMM7_Db =
             (undefined4)
             (CONCAT17(bStack_231,
                       CONCAT16(bStack_232,CONCAT15(bStack_233,CONCAT14(uStack_234,unaff_XMM7_Da))))
             >> 0x20);
        uStack_160 = CONCAT62(uStack_226,uStack_228);
        uStack_158 = CONCAT62(uStack_21e,uStack_220);
        uStack_150 = CONCAT62(uStack_216,uStack_218);
        uStack_148 = CONCAT62(uStack_20e,uStack_210);
        uStack_140 = CONCAT62(uStack_206,uStack_208);
        cVar22 = cStack_248;
LAB_1402d314c:
        uStack_1ec = CONCAT22(uStack_1ec._2_2_,uStack_180._2_2_);
        iVar3 = *piStack_1b8;
        uStack_118 = uStack_140;
        uStack_138 = uStack_160;
        uStack_130 = uStack_158;
        uStack_128 = uStack_150;
        uStack_120 = uStack_148;
        unaff_XMM6_Da = uStack_180._4_4_;
      }
      uVar28 = (ulonglong)uStack_180 >> 8 & 0xff;
      if (iVar3 == 1) goto LAB_1402d2ff3;
      goto LAB_1402d3009;
    }
    if (cVar22 == '\0') {
LAB_1402d2f2a:
      lStack_178 = (ulonglong)lStack_178._1_7_ << 8;
      goto LAB_1402d2f68;
    }
    if (*(longlong *)(piStack_1b8 + 2) != 0) {
      *(longlong *)(piStack_1b8 + 2) = *(longlong *)(piStack_1b8 + 2) + -1;
      goto LAB_1402d2f2a;
    }
LAB_1402d3d4f:
    cVar22 = '0';
    uVar28 = param_4;
  }
  uVar29 = (undefined2)uStack_1ec;
  bVar27 = (byte)uVar28;
LAB_1402d38bb:
  uStack_1c8 = uStack_118;
  uStack_1d8 = uStack_128;
  uStack_1d0 = uStack_120;
  uStack_1e8 = uStack_138;
  uStack_1e0 = uStack_130;
  uStack_180 = (int *)CONCAT44(unaff_XMM6_Da,CONCAT22(uVar29,CONCAT11(bVar27,cVar22)));
  uStack_170 = CONCAT44(unaff_XMM7_Db,unaff_XMM7_Da);
  uStack_160 = uStack_138;
  uStack_158 = uStack_130;
  if (cVar21 != '\0') {
    param_3 = 0;
  }
  uStack_140 = uStack_118;
  if (param_4 == 0) {
    param_3 = 0;
  }
  pdb_140dca990(&cStack_248,&uStack_180,param_3);
  *(uint *)param_1 = CONCAT13(cStack_245,CONCAT12(cStack_246,CONCAT11(bStack_247,cStack_248)));
  *(uint *)(param_1 + 4) = CONCAT13(cStack_241,CONCAT12(cStack_242,CONCAT11(cStack_243,cStack_244)))
  ;
  *(ulonglong *)(param_1 + 8) =
       CONCAT17(cStack_239,
                CONCAT16(cStack_23a,
                         CONCAT15(cStack_23b,
                                  CONCAT14(cStack_23c,
                                           CONCAT13(cStack_23d,
                                                    CONCAT12(cStack_23e,
                                                             CONCAT11(cStack_23f,cStack_240)))))));
  *(ulonglong *)(param_1 + 0x10) =
       CONCAT17(bStack_231,
                CONCAT16(bStack_232,
                         CONCAT15(bStack_233,CONCAT14(uStack_234,CONCAT22(uStack_236,uStack_238)))))
  ;
  *(ulonglong *)(param_1 + 0x18) =
       CONCAT44(uStack_22c,CONCAT13(bStack_22d,CONCAT12(bStack_22e,CONCAT11(bStack_22f,uStack_230)))
               );
  *(ulonglong *)(param_1 + 0x20) = CONCAT62(uStack_226,uStack_228);
  *(ulonglong *)(param_1 + 0x28) = CONCAT62(uStack_21e,uStack_220);
  *(ulonglong *)(param_1 + 0x30) = CONCAT62(uStack_216,uStack_218);
  *(ulonglong *)(param_1 + 0x38) = CONCAT62(uStack_20e,uStack_210);
  *(ulonglong *)(param_1 + 0x40) = CONCAT62(uStack_206,uStack_208);
  return param_1;
}

