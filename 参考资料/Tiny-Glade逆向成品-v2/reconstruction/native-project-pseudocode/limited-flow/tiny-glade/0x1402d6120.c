// VA 0x1402d6120, PDB extent 3044 bytes
// ron::de::impl$2::deserialize_struct<country_core::render::render_config::_::impl$0::deserialize::__Visitor>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Removing unreachable block (ram,0x0001402d69a2) */
/* WARNING: Removing unreachable block (ram,0x0001402d6c58) */
/* WARNING: Removing unreachable block (ram,0x0001402d698f) */
/* WARNING: Removing unreachable block (ram,0x0001402d6b23) */
/* WARNING: Removing unreachable block (ram,0x0001402d6c6b) */
/* WARNING: Removing unreachable block (ram,0x0001402d69b0) */
/* WARNING: Removing unreachable block (ram,0x0001402d69ce) */
/* WARNING: Removing unreachable block (ram,0x0001402d69dc) */
/* WARNING: Removing unreachable block (ram,0x0001402d69e0) */
/* WARNING: Removing unreachable block (ram,0x0001402d69e4) */
/* WARNING: Removing unreachable block (ram,0x0001402d69f8) */
/* WARNING: Removing unreachable block (ram,0x0001402d69ff) */
/* WARNING: Removing unreachable block (ram,0x0001402d6cb6) */
/* WARNING: Removing unreachable block (ram,0x0001402d6a14) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   ron::de::impl$2::deserialize_struct<country_core::render::render_config::_::impl$0::deserialize::__Visitor>
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
   Extent: 3044 */

char * pdb_1402d6120(char *param_1,int *param_2,undefined8 param_3,longlong param_4)

{
  int iVar1;
  longlong *plVar2;
  byte bVar3;
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
  char cVar17;
  int *piVar18;
  char cVar19;
  char cVar20;
  char *pcVar21;
  longlong lVar22;
  byte unaff_R13B;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined2 unaff_XMM6_Wa;
  undefined2 unaff_XMM6_Wb;
  undefined2 unaff_XMM6_Wc;
  undefined2 unaff_XMM6_Wd;
  undefined2 unaff_XMM6_We;
  undefined2 unaff_XMM6_Wf;
  undefined2 unaff_XMM6_Wg;
  undefined2 unaff_XMM6_Wh;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  char cStack_178;
  byte bStack_177;
  char cStack_176;
  char cStack_175;
  char cStack_174;
  char cStack_173;
  char cStack_172;
  char cStack_171;
  char cStack_170;
  char cStack_16f;
  char cStack_16e;
  char cStack_16d;
  char cStack_16c;
  char cStack_16b;
  char cStack_16a;
  char cStack_169;
  undefined2 uStack_168;
  undefined2 uStack_166;
  undefined2 uStack_164;
  undefined2 uStack_162;
  undefined2 uStack_160;
  undefined2 uStack_15e;
  undefined2 uStack_15c;
  undefined2 uStack_15a;
  undefined2 uStack_158;
  undefined6 uStack_156;
  undefined2 uStack_150;
  undefined6 uStack_14e;
  undefined2 uStack_148;
  undefined6 uStack_146;
  undefined2 uStack_140;
  undefined6 uStack_13e;
  undefined2 uStack_138;
  undefined6 uStack_136;
  int *piStack_120;
  undefined2 uStack_118;
  undefined1 uStack_116;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  char cStack_c8;
  byte bStack_c7;
  undefined2 uStack_c6;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  if (((char)param_2[0x1a] == '\0') &&
     (pdb_140dd1950(&cStack_178,param_2 + 4,param_3,param_4), cStack_178 != '2')) {
    *(ulonglong *)(param_1 + 0x40) = CONCAT62(uStack_136,uStack_138);
    *(ulonglong *)(param_1 + 0x32) = CONCAT26(uStack_140,uStack_146);
    *(ulonglong *)(param_1 + 0x3a) = CONCAT26(uStack_138,uStack_13e);
    *(ulonglong *)(param_1 + 0x22) = CONCAT26(uStack_150,uStack_156);
    *(ulonglong *)(param_1 + 0x2a) = CONCAT26(uStack_148,uStack_14e);
    *(ulonglong *)(param_1 + 0x12) =
         CONCAT26(uStack_160,CONCAT24(uStack_162,CONCAT22(uStack_164,uStack_166)));
    *(ulonglong *)(param_1 + 0x1a) =
         CONCAT26(uStack_158,CONCAT24(uStack_15a,CONCAT22(uStack_15c,uStack_15e)));
    *(ulonglong *)(param_1 + 2) =
         CONCAT17(cStack_16f,
                  CONCAT16(cStack_170,
                           CONCAT15(cStack_171,
                                    CONCAT14(cStack_172,
                                             CONCAT13(cStack_173,
                                                      CONCAT12(cStack_174,
                                                               CONCAT11(cStack_175,cStack_176)))))))
    ;
    *(ulonglong *)(param_1 + 10) =
         CONCAT26(uStack_168,
                  CONCAT15(cStack_169,
                           CONCAT14(cStack_16a,
                                    CONCAT13(cStack_16b,
                                             CONCAT12(cStack_16c,CONCAT11(cStack_16d,cStack_16e)))))
                 );
    *param_1 = cStack_178;
    param_1[1] = bStack_177;
    return param_1;
  }
  pdb_140dd4ac0(&cStack_178,param_2 + 4);
  if (cStack_178 != '2') {
    *(ulonglong *)(param_1 + 0x40) = CONCAT62(uStack_136,uStack_138);
    *(ulonglong *)(param_1 + 0x30) = CONCAT62(uStack_146,uStack_148);
    *(ulonglong *)(param_1 + 0x38) = CONCAT62(uStack_13e,uStack_140);
    *(ulonglong *)(param_1 + 0x20) = CONCAT62(uStack_156,uStack_158);
    *(ulonglong *)(param_1 + 0x28) = CONCAT62(uStack_14e,uStack_150);
    *(ulonglong *)(param_1 + 0x10) =
         CONCAT26(uStack_162,CONCAT24(uStack_164,CONCAT22(uStack_166,uStack_168)));
    *(ulonglong *)(param_1 + 0x18) =
         CONCAT26(uStack_15a,CONCAT24(uStack_15c,CONCAT22(uStack_15e,uStack_160)));
    *(ulonglong *)param_1 =
         CONCAT17(cStack_171,
                  CONCAT16(cStack_172,
                           CONCAT15(cStack_173,
                                    CONCAT14(cStack_174,
                                             CONCAT13(cStack_175,
                                                      CONCAT12(cStack_176,
                                                               CONCAT11(bStack_177,cStack_178)))))))
    ;
    *(ulonglong *)(param_1 + 8) =
         CONCAT17(cStack_169,
                  CONCAT16(cStack_16a,
                           CONCAT15(cStack_16b,
                                    CONCAT14(cStack_16c,
                                             CONCAT13(cStack_16d,
                                                      CONCAT12(cStack_16e,
                                                               CONCAT11(cStack_16f,cStack_170)))))))
    ;
    return param_1;
  }
  cVar19 = '\x01';
  if ((char)param_2[0x1a] == '\0') {
    cVar19 = pdb_140dce020(param_2 + 4,0x28);
    if (cVar19 == '\0') {
      if (param_4 != 0) {
        *param_1 = '\x16';
        *(undefined8 *)(param_1 + 8) = param_3;
        *(longlong *)(param_1 + 0x10) = param_4;
        return param_1;
      }
      *param_1 = '\x15';
      return param_1;
    }
    cVar19 = (char)param_2[0x1a];
  }
  *(char *)(param_2 + 0x1a) = '\0';
  if ((char)*param_2 != '\0') {
    if (*(longlong *)(param_2 + 2) == 0) {
      *param_1 = '0';
      return param_1;
    }
    *(longlong *)(param_2 + 2) = *(longlong *)(param_2 + 2) + -1;
  }
  uStack_118 = 0x103;
  uStack_116 = 0;
  piStack_120 = param_2;
  pdb_140dca8b0(&cStack_178);
  cVar17 = UNK_142e69a4f;
  cVar16 = UNK_142e69a4e;
  cVar15 = UNK_142e69a4d;
  cVar14 = UNK_142e69a4c;
  cVar13 = UNK_142e69a4b;
  cVar12 = UNK_142e69a4a;
  cVar11 = UNK_142e69a49;
  cVar10 = UNK_142e69a48;
  cVar9 = UNK_142e69a47;
  cVar8 = UNK_142e69a46;
  cVar7 = UNK_142e69a45;
  cVar6 = UNK_142e69a44;
  cVar5 = UNK_142e69a43;
  cVar4 = UNK_142e69a42;
  bVar3 = UNK_142e69a41;
  cVar20 = DAT_142e69a40;
  if (cStack_178 == '2') {
    uStack_d0 = 0;
    uStack_e0 = 0;
    uStack_dc = 0;
    uStack_d8 = 0;
    uStack_d4 = 0;
    if ((bStack_177 & 1) == 0) {
      uStack_18c = 0x42e6a1ae;
      uStack_188 = 1;
      cVar20 = '+';
      unaff_XMM6_Wb = 0;
      unaff_XMM6_Wc = 0;
      unaff_XMM6_Wd = 0;
      unaff_XMM6_Wa = _DAT_142e69940;
      unaff_XMM6_We = _UNK_142e69948;
      unaff_XMM6_Wf = _UNK_142e6994a;
      unaff_XMM6_Wg = _UNK_142e6994c;
      unaff_XMM6_Wh = _UNK_142e6994e;
      bStack_c7 = bStack_177;
      goto LAB_1402d6831;
    }
    pdb_140dcace0(&cStack_178);
    piVar18 = piStack_120;
    auVar23[0] = -(cStack_178 == cVar20);
    auVar23[1] = -(bStack_177 == bVar3);
    auVar23[2] = -(cStack_176 == cVar4);
    auVar23[3] = -(cStack_175 == cVar5);
    auVar23[4] = -(cStack_174 == cVar6);
    auVar23[5] = -(cStack_173 == cVar7);
    auVar23[6] = -(cStack_172 == cVar8);
    auVar23[7] = -(cStack_171 == cVar9);
    auVar23[8] = -(cStack_170 == cVar10);
    auVar23[9] = -(cStack_16f == cVar11);
    auVar23[10] = -(cStack_16e == cVar12);
    auVar23[0xb] = -(cStack_16d == cVar13);
    auVar23[0xc] = -(cStack_16c == cVar14);
    auVar23[0xd] = -(cStack_16b == cVar15);
    auVar23[0xe] = -(cStack_16a == cVar16);
    auVar23[0xf] = -(cStack_169 == cVar17);
    uStack_116 = (ushort)((ushort)(SUB161(auVar23 >> 7,0) & 1) |
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
    cVar20 = (char)*piStack_120;
    if ((char)uStack_118 == '\x01') {
      if (cVar20 != '\0') {
        if (*(longlong *)(piStack_120 + 2) == 0) goto LAB_1402d6b06;
        *(longlong *)(piStack_120 + 2) = *(longlong *)(piStack_120 + 2) + -1;
      }
      pdb_1402cd5b0(&cStack_178);
joined_r0x0001402d6487:
      if (cStack_178 != '2') {
        uStack_110 = CONCAT17(cStack_169,
                              CONCAT16(cStack_16a,
                                       CONCAT15(cStack_16b,
                                                CONCAT14(cStack_16c,
                                                         CONCAT13(cStack_16d,
                                                                  CONCAT12(cStack_16e,
                                                                           CONCAT11(cStack_16f,
                                                                                    cStack_170))))))
                             );
        uStack_b8 = CONCAT62(uStack_146,uStack_148);
        uStack_b0 = CONCAT62(uStack_13e,uStack_140);
        cStack_c8 = (char)uStack_158;
        bStack_c7 = (byte)((ushort)uStack_158 >> 8);
        uStack_c6 = (undefined2)uStack_156;
        uStack_c4 = (undefined4)((uint6)uStack_156 >> 0x10);
        uStack_c0 = (undefined4)CONCAT62(uStack_14e,uStack_150);
        uStack_bc = (undefined4)((uint6)uStack_14e >> 0x10);
        uStack_a8 = CONCAT62(uStack_136,uStack_138);
        unaff_XMM6_Wa = uStack_168;
        unaff_XMM6_Wb = uStack_166;
        unaff_XMM6_Wc = uStack_164;
        unaff_XMM6_Wd = uStack_162;
        unaff_XMM6_We = uStack_160;
        unaff_XMM6_Wf = uStack_15e;
        unaff_XMM6_Wg = uStack_15c;
        unaff_XMM6_Wh = uStack_15a;
      }
      unaff_R13B = bStack_177;
      if ((char)*piStack_120 != '\0') {
LAB_1402d63dc:
        lVar22 = *(longlong *)(piStack_120 + 2) + 1;
        if (lVar22 == 0) {
          lVar22 = -1;
        }
        *(longlong *)(piStack_120 + 2) = lVar22;
      }
    }
    else {
      if ((char)uStack_118 == '\x03') {
        if (cVar20 != '\0') {
          if (*(longlong *)(piStack_120 + 2) == 0) goto LAB_1402d6b06;
          *(longlong *)(piStack_120 + 2) = *(longlong *)(piStack_120 + 2) + -1;
        }
        pdb_1402e6550(&cStack_178);
        goto joined_r0x0001402d6487;
      }
      if (cVar20 != '\0') {
        if (*(longlong *)(piStack_120 + 2) == 0) {
LAB_1402d6b06:
          cVar20 = '0';
          goto LAB_1402d67e4;
        }
        *(longlong *)(piStack_120 + 2) = *(longlong *)(piStack_120 + 2) + -1;
      }
      pdb_140dcce90(&cStack_178,piStack_120 + 4);
      if (cStack_178 != '2') {
        uStack_110 = CONCAT17(cStack_169,
                              CONCAT16(cStack_16a,
                                       CONCAT15(cStack_16b,
                                                CONCAT14(cStack_16c,
                                                         CONCAT13(cStack_16d,
                                                                  CONCAT12(cStack_16e,
                                                                           CONCAT11(cStack_16f,
                                                                                    cStack_170))))))
                             );
        uStack_b8 = CONCAT62(uStack_146,uStack_148);
        uStack_b0 = CONCAT62(uStack_13e,uStack_140);
        cStack_c8 = (char)uStack_158;
        bStack_c7 = (byte)((ushort)uStack_158 >> 8);
        uStack_c6 = (undefined2)uStack_156;
        uStack_c4 = (undefined4)((uint6)uStack_156 >> 0x10);
        uStack_c0 = (undefined4)CONCAT62(uStack_14e,uStack_150);
        uStack_bc = (undefined4)((uint6)uStack_14e >> 0x10);
        uStack_a8 = CONCAT62(uStack_136,uStack_138);
        iVar1 = *piStack_120;
        unaff_R13B = bStack_177;
        unaff_XMM6_Wa = uStack_168;
        unaff_XMM6_Wb = uStack_166;
        unaff_XMM6_Wc = uStack_164;
        unaff_XMM6_Wd = uStack_162;
        unaff_XMM6_We = uStack_160;
        unaff_XMM6_Wf = uStack_15e;
        unaff_XMM6_Wg = uStack_15c;
        unaff_XMM6_Wh = uStack_15a;
joined_r0x0001402d66fc:
        if (iVar1 != 1) goto LAB_1402d63f2;
        goto LAB_1402d63dc;
      }
      plVar2 = (longlong *)
               CONCAT17(cStack_169,
                        CONCAT16(cStack_16a,
                                 CONCAT15(cStack_16b,
                                          CONCAT14(cStack_16c,
                                                   CONCAT13(cStack_16d,
                                                            CONCAT12(cStack_16e,
                                                                     CONCAT11(cStack_16f,cStack_170)
                                                                    ))))));
      lVar22 = CONCAT26(uStack_162,CONCAT24(uStack_164,CONCAT22(uStack_166,uStack_168)));
      *(longlong **)(piVar18 + 0x16) = plVar2;
      *(longlong *)(piVar18 + 0x18) = lVar22;
      if (lVar22 == 9) {
        if ((char)plVar2[1] != DAT_142e47c1b || *plVar2 != _DAT_142e47c13) goto LAB_1402d676d;
        unaff_R13B = 1;
        iVar1 = *piStack_120;
        goto joined_r0x0001402d66fc;
      }
      if (lVar22 == 0x17) {
        auVar24[0] = -((char)*plVar2 == DAT_142e47c1c);
        auVar24[1] = -(*(char *)((longlong)plVar2 + 1) == UNK_142e47c1d);
        auVar24[2] = -(*(char *)((longlong)plVar2 + 2) == UNK_142e47c1e);
        auVar24[3] = -(*(char *)((longlong)plVar2 + 3) == UNK_142e47c1f);
        auVar24[4] = -(*(char *)((longlong)plVar2 + 4) == UNK_142e47c20);
        auVar24[5] = -(*(char *)((longlong)plVar2 + 5) == UNK_142e47c21);
        auVar24[6] = -(*(char *)((longlong)plVar2 + 6) == UNK_142e47c22);
        auVar24[7] = -(*(char *)((longlong)plVar2 + 7) == DAT_142e47c23);
        auVar24[8] = -((char)plVar2[1] == UNK_142e47c24);
        auVar24[9] = -(*(char *)((longlong)plVar2 + 9) == UNK_142e47c25);
        auVar24[10] = -(*(char *)((longlong)plVar2 + 10) == UNK_142e47c26);
        auVar24[0xb] = -(*(char *)((longlong)plVar2 + 0xb) == UNK_142e47c27);
        auVar24[0xc] = -(*(char *)((longlong)plVar2 + 0xc) == UNK_142e47c28);
        auVar24[0xd] = -(*(char *)((longlong)plVar2 + 0xd) == UNK_142e47c29);
        auVar24[0xe] = -(*(char *)((longlong)plVar2 + 0xe) == UNK_142e47c2a);
        auVar24[0xf] = -(*(char *)((longlong)plVar2 + 0xf) == UNK_142e47c2b);
        auVar23 = *(undefined1 (*) [16])((longlong)plVar2 + 7);
        auVar25[0] = -(DAT_142e47c23 == auVar23[0]);
        auVar25[1] = -(UNK_142e47c24 == auVar23[1]);
        auVar25[2] = -(UNK_142e47c25 == auVar23[2]);
        auVar25[3] = -(UNK_142e47c26 == auVar23[3]);
        auVar25[4] = -(UNK_142e47c27 == auVar23[4]);
        auVar25[5] = -(UNK_142e47c28 == auVar23[5]);
        auVar25[6] = -(UNK_142e47c29 == auVar23[6]);
        auVar25[7] = -(UNK_142e47c2a == auVar23[7]);
        auVar25[8] = -(UNK_142e47c2b == auVar23[8]);
        auVar25[9] = -(UNK_142e47c2c == auVar23[9]);
        auVar25[10] = -(UNK_142e47c2d == auVar23[10]);
        auVar25[0xb] = -(UNK_142e47c2e == auVar23[0xb]);
        auVar25[0xc] = -(UNK_142e47c2f == auVar23[0xc]);
        auVar25[0xd] = -(UNK_142e47c30 == auVar23[0xd]);
        auVar25[0xe] = -(UNK_142e47c31 == auVar23[0xe]);
        auVar25[0xf] = -(UNK_142e47c32 == auVar23[0xf]);
        auVar25 = auVar25 & auVar24;
        if ((ushort)((ushort)(SUB161(auVar25 >> 7,0) & 1) |
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
                    (ushort)(byte)(auVar25[0xf] >> 7) << 0xf) != 0xffff) goto LAB_1402d676d;
        unaff_R13B = 2;
        iVar1 = *piStack_120;
      }
      else {
        if ((lVar22 == 10) && ((short)plVar2[1] == _DAT_142e47c11 && *plVar2 == _DAT_142e47c09)) {
          unaff_R13B = 0;
          iVar1 = *piStack_120;
          goto joined_r0x0001402d66fc;
        }
LAB_1402d676d:
        unaff_R13B = 3;
        iVar1 = *piStack_120;
      }
      if (iVar1 == 1) goto LAB_1402d63dc;
    }
LAB_1402d63f2:
    cVar20 = cStack_178;
    if (cStack_178 == '2') {
                    /* WARNING: Could not recover jumptable at 0x0001402d640c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pcVar21 = (char *)(*(code *)(&UNK_142e6abd8 +
                                  *(int *)(&UNK_142e6abd8 + (ulonglong)unaff_R13B * 4)))();
      return pcVar21;
    }
  }
  else {
    uStack_110 = CONCAT17(cStack_169,
                          CONCAT16(cStack_16a,
                                   CONCAT15(cStack_16b,
                                            CONCAT14(cStack_16c,
                                                     CONCAT13(cStack_16d,
                                                              CONCAT12(cStack_16e,
                                                                       CONCAT11(cStack_16f,
                                                                                cStack_170)))))));
    cStack_c8 = (char)uStack_158;
    bStack_c7 = (byte)((ushort)uStack_158 >> 8);
    uStack_c6 = (undefined2)uStack_156;
    uStack_c4 = (undefined4)((uint6)uStack_156 >> 0x10);
    uStack_c0 = (undefined4)CONCAT62(uStack_14e,uStack_150);
    uStack_bc = (undefined4)((uint6)uStack_14e >> 0x10);
    uStack_b8 = CONCAT62(uStack_146,uStack_148);
    uStack_b0 = CONCAT62(uStack_13e,uStack_140);
    uStack_a8 = CONCAT62(uStack_136,uStack_138);
    cVar20 = cStack_178;
    unaff_XMM6_Wa = uStack_168;
    unaff_XMM6_Wb = uStack_166;
    unaff_XMM6_Wc = uStack_164;
    unaff_XMM6_Wd = uStack_162;
    unaff_XMM6_We = uStack_160;
    unaff_XMM6_Wf = uStack_15e;
    unaff_XMM6_Wg = uStack_15c;
    unaff_XMM6_Wh = uStack_15a;
    unaff_R13B = bStack_177;
  }
LAB_1402d67e4:
  uStack_18c = (undefined4)uStack_110;
  uStack_188 = (undefined4)((ulonglong)uStack_110 >> 0x20);
  uStack_108 = CONCAT44(uStack_c4,CONCAT22(uStack_c6,CONCAT11(bStack_c7,cStack_c8)));
  uStack_100 = CONCAT44(uStack_bc,uStack_c0);
  uStack_f8 = uStack_b8;
  uStack_f0 = uStack_b0;
  uStack_e8 = uStack_a8;
  bStack_c7 = unaff_R13B;
LAB_1402d6831:
  uStack_c0 = uStack_18c;
  uStack_bc = uStack_188;
  uStack_b8 = CONCAT26(unaff_XMM6_Wd,CONCAT24(unaff_XMM6_Wc,CONCAT22(unaff_XMM6_Wb,unaff_XMM6_Wa)));
  uStack_b0 = CONCAT26(unaff_XMM6_Wh,CONCAT24(unaff_XMM6_Wg,CONCAT22(unaff_XMM6_Wf,unaff_XMM6_We)));
  uStack_a8 = uStack_108;
  uStack_a0 = uStack_100;
  uStack_98 = uStack_f8;
  uStack_90 = uStack_f0;
  if (cVar19 != '\0') {
    param_3 = 0;
  }
  uStack_88 = uStack_e8;
  if (param_4 == 0) {
    param_3 = 0;
  }
  cStack_c8 = cVar20;
  pdb_140dca990(&cStack_178,&cStack_c8,param_3);
  *(uint *)(param_1 + 0xc) =
       CONCAT13(cStack_169,CONCAT12(cStack_16a,CONCAT11(cStack_16b,cStack_16c)));
  *(ulonglong *)(param_1 + 4) =
       CONCAT17(cStack_16d,
                CONCAT16(cStack_16e,
                         CONCAT15(cStack_16f,
                                  CONCAT14(cStack_170,
                                           CONCAT13(cStack_171,
                                                    CONCAT12(cStack_172,
                                                             CONCAT11(cStack_173,cStack_174)))))));
  *(uint *)param_1 = CONCAT13(cStack_175,CONCAT12(cStack_176,CONCAT11(bStack_177,cStack_178)));
  *(ulonglong *)(param_1 + 0x10) =
       CONCAT26(uStack_162,CONCAT24(uStack_164,CONCAT22(uStack_166,uStack_168)));
  *(ulonglong *)(param_1 + 0x18) =
       CONCAT26(uStack_15a,CONCAT24(uStack_15c,CONCAT22(uStack_15e,uStack_160)));
  *(ulonglong *)(param_1 + 0x20) = CONCAT62(uStack_156,uStack_158);
  *(ulonglong *)(param_1 + 0x28) = CONCAT62(uStack_14e,uStack_150);
  *(ulonglong *)(param_1 + 0x30) = CONCAT62(uStack_146,uStack_148);
  *(ulonglong *)(param_1 + 0x38) = CONCAT62(uStack_13e,uStack_140);
  *(ulonglong *)(param_1 + 0x40) = CONCAT62(uStack_136,uStack_138);
  return param_1;
}

