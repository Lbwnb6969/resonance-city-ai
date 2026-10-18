// VA 0x141817f70, PDB extent 2112 bytes
// ron::de::impl$2::deserialize_struct<country_core::game_profile::_::impl$0::deserialize::__Visitor>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Removing unreachable block (ram,0x000141818507) */
/* WARNING: Removing unreachable block (ram,0x000141818792) */
/* WARNING: Removing unreachable block (ram,0x000141818515) */
/* WARNING: Removing unreachable block (ram,0x00014181851b) */
/* WARNING: Removing unreachable block (ram,0x000141818529) */
/* WARNING: Removing unreachable block (ram,0x00014181852d) */
/* WARNING: Removing unreachable block (ram,0x000141818531) */
/* WARNING: Removing unreachable block (ram,0x00014181854d) */
/* WARNING: Removing unreachable block (ram,0x000141818554) */
/* WARNING: Removing unreachable block (ram,0x00014181878b) */
/* WARNING: Removing unreachable block (ram,0x000141818569) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   ron::de::impl$2::deserialize_struct<country_core::game_profile::_::impl$0::deserialize::__Visitor>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
   Extent: 2112 */

char * pdb_141817f70(char *param_1,int *param_2,undefined8 param_3,longlong param_4)

{
  int *piVar1;
  int iVar2;
  undefined1 (*pauVar3) [16];
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
  char cVar19;
  char cVar20;
  char *pcVar21;
  longlong lVar22;
  byte unaff_BPL;
  undefined2 uVar23;
  undefined8 uVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined4 unaff_XMM6_Da;
  undefined4 unaff_XMM8_Da;
  undefined4 unaff_XMM8_Db;
  undefined4 unaff_XMM8_Dc;
  undefined4 unaff_XMM8_Dd;
  undefined2 uStack_1ac;
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
  undefined2 uStack_196;
  undefined4 uStack_194;
  undefined2 uStack_190;
  undefined2 uStack_18e;
  undefined4 uStack_18c;
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
  undefined *puStack_160;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  int *piStack_148;
  undefined2 uStack_140;
  undefined1 uStack_13e;
  int *piStack_138;
  longlong lStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  int *piStack_e8;
  longlong lStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  int *piStack_c0;
  
  uVar24 = param_3;
  if (((char)param_2[0x1a] == '\0') &&
     (pdb_140dd1950(&cStack_1a8,param_2 + 4,param_3,param_4), cStack_1a8 != '2')) {
    *(ulonglong *)(param_1 + 0x40) = CONCAT62(uStack_166,uStack_168);
    *(ulonglong *)(param_1 + 0x32) = CONCAT26(uStack_170,uStack_176);
    *(ulonglong *)(param_1 + 0x3a) = CONCAT26(uStack_168,uStack_16e);
    *(ulonglong *)(param_1 + 0x22) = CONCAT26(uStack_180,uStack_186);
    *(ulonglong *)(param_1 + 0x2a) = CONCAT26(uStack_178,uStack_17e);
    *(ulonglong *)(param_1 + 0x12) = CONCAT26(uStack_190,CONCAT42(uStack_194,uStack_196));
    *(ulonglong *)(param_1 + 0x1a) = CONCAT26(uStack_188,CONCAT42(uStack_18c,uStack_18e));
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
  uVar23 = (undefined2)uVar24;
  piVar1 = param_2 + 4;
  pdb_140dd4ac0(&cStack_1a8,piVar1);
  if (cStack_1a8 != '2') {
    *(ulonglong *)(param_1 + 0x40) = CONCAT62(uStack_166,uStack_168);
    *(ulonglong *)(param_1 + 0x30) = CONCAT62(uStack_176,uStack_178);
    *(ulonglong *)(param_1 + 0x38) = CONCAT62(uStack_16e,uStack_170);
    *(ulonglong *)(param_1 + 0x20) = CONCAT62(uStack_186,uStack_188);
    *(ulonglong *)(param_1 + 0x28) = CONCAT62(uStack_17e,uStack_180);
    *(ulonglong *)(param_1 + 0x10) = CONCAT44(uStack_194,CONCAT22(uStack_196,uStack_198));
    *(ulonglong *)(param_1 + 0x18) = CONCAT44(uStack_18c,CONCAT22(uStack_18e,uStack_190));
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
  cVar19 = '\x01';
  if ((char)param_2[0x1a] == '\0') {
    cVar19 = pdb_140dce020(piVar1,0x28);
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
  uStack_140 = 0x103;
  uStack_13e = 0;
  piStack_148 = param_2;
  pdb_140dca8b0(&cStack_1a8,&piStack_148);
  cVar18 = UNK_142e69c5f;
  cVar17 = UNK_142e69c5e;
  cVar16 = UNK_142e69c5d;
  cVar15 = UNK_142e69c5c;
  cVar14 = UNK_142e69c5b;
  cVar13 = UNK_142e69c5a;
  cVar12 = UNK_142e69c59;
  cVar11 = UNK_142e69c58;
  cVar10 = UNK_142e69c57;
  cVar9 = UNK_142e69c56;
  cVar8 = UNK_142e69c55;
  cVar7 = UNK_142e69c54;
  cVar6 = UNK_142e69c53;
  cVar5 = UNK_142e69c52;
  bVar4 = UNK_142e69c51;
  cVar20 = DAT_142e69c50;
  if (cStack_1a8 == '2') {
    uStack_14c = 0;
    uStack_154 = 0;
    uStack_158 = 0;
    uStack_150 = 0;
    piStack_c0 = piVar1;
    if ((bStack_1a7 & 1) == 0) {
      cVar20 = '+';
      puStack_160 = &UNK_14333ec35;
      unaff_XMM8_Da = _DAT_142e698e0;
      unaff_XMM8_Db = _UNK_142e698e4;
      unaff_XMM8_Dc = _UNK_142e698e8;
      unaff_XMM8_Dd = _UNK_142e698ec;
      goto LAB_14181863a;
    }
    pdb_140dcace0(&cStack_1a8);
    piVar1 = piStack_148;
    auVar25[0] = -(cStack_1a8 == cVar20);
    auVar25[1] = -(bStack_1a7 == bVar4);
    auVar25[2] = -(cStack_1a6 == cVar5);
    auVar25[3] = -(cStack_1a5 == cVar6);
    auVar25[4] = -(cStack_1a4 == cVar7);
    auVar25[5] = -(cStack_1a3 == cVar8);
    auVar25[6] = -(cStack_1a2 == cVar9);
    auVar25[7] = -(cStack_1a1 == cVar10);
    auVar25[8] = -(cStack_1a0 == cVar11);
    auVar25[9] = -(cStack_19f == cVar12);
    auVar25[10] = -(cStack_19e == cVar13);
    auVar25[0xb] = -(cStack_19d == cVar14);
    auVar25[0xc] = -(cStack_19c == cVar15);
    auVar25[0xd] = -(cStack_19b == cVar16);
    auVar25[0xe] = -(cStack_19a == cVar17);
    auVar25[0xf] = -(cStack_199 == cVar18);
    uStack_13e = (ushort)((ushort)(SUB161(auVar25 >> 7,0) & 1) |
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
    cVar20 = (char)*piStack_148;
    if ((char)uStack_140 == '\x01') {
      if (cVar20 != '\0') {
        if (*(longlong *)(piStack_148 + 2) == 0) goto LAB_1418185f2;
        *(longlong *)(piStack_148 + 2) = *(longlong *)(piStack_148 + 2) + -1;
      }
      lStack_130 = CONCAT71(lStack_130._1_7_,1);
LAB_141818208:
      piStack_138 = piStack_148;
      pdb_14090dad0(&cStack_1a8,&piStack_138);
      if (cStack_1a8 != '2') {
        uStack_1ac = CONCAT11(cStack_1a5,cStack_1a6);
        unaff_XMM6_Da = CONCAT13(cStack_1a1,CONCAT12(cStack_1a2,CONCAT11(cStack_1a3,cStack_1a4)));
        puStack_160 = (undefined *)
                      CONCAT17(cStack_199,
                               CONCAT16(cStack_19a,
                                        CONCAT15(cStack_19b,
                                                 CONCAT14(cStack_19c,
                                                          CONCAT13(cStack_19d,
                                                                   CONCAT12(cStack_19e,
                                                                            CONCAT11(cStack_19f,
                                                                                     cStack_1a0)))))
                                       ));
        unaff_XMM8_Da = CONCAT22(uStack_196,uStack_198);
        unaff_XMM8_Dc = CONCAT22(uStack_18e,uStack_190);
        uStack_108 = (int *)CONCAT62(uStack_186,uStack_188);
        puStack_100 = (undefined *)CONCAT62(uStack_17e,uStack_180);
        uStack_f8 = CONCAT62(uStack_176,uStack_178);
        uStack_f0 = CONCAT62(uStack_16e,uStack_170);
        piStack_e8 = (int *)CONCAT62(uStack_166,uStack_168);
        unaff_XMM8_Db = uStack_194;
        unaff_XMM8_Dd = uStack_18c;
      }
      unaff_BPL = bStack_1a7;
      if ((char)*piStack_148 != '\0') {
LAB_14181827f:
        lVar22 = *(longlong *)(piStack_148 + 2) + 1;
        if (lVar22 == 0) {
          lVar22 = -1;
        }
        *(longlong *)(piStack_148 + 2) = lVar22;
      }
    }
    else {
      if ((char)uStack_140 == '\x03') {
        if (cVar20 != '\0') {
          if (*(longlong *)(piStack_148 + 2) == 0) goto LAB_1418185f2;
          *(longlong *)(piStack_148 + 2) = *(longlong *)(piStack_148 + 2) + -1;
        }
        lStack_130 = (ulonglong)lStack_130._1_7_ << 8;
        goto LAB_141818208;
      }
      if (cVar20 != '\0') {
        if (*(longlong *)(piStack_148 + 2) == 0) {
LAB_1418185f2:
          cVar20 = '0';
          uVar23 = uStack_1ac;
          goto LAB_1418185ff;
        }
        *(longlong *)(piStack_148 + 2) = *(longlong *)(piStack_148 + 2) + -1;
      }
      pdb_140dcce90(&cStack_1a8,piStack_148 + 4);
      if (cStack_1a8 == '2') {
        pauVar3 = (undefined1 (*) [16])
                  CONCAT17(cStack_199,
                           CONCAT16(cStack_19a,
                                    CONCAT15(cStack_19b,
                                             CONCAT14(cStack_19c,
                                                      CONCAT13(cStack_19d,
                                                               CONCAT12(cStack_19e,
                                                                        CONCAT11(cStack_19f,
                                                                                 cStack_1a0)))))));
        lVar22 = CONCAT44(uStack_194,CONCAT22(uStack_196,uStack_198));
        *(undefined1 (**) [16])(piVar1 + 0x16) = pauVar3;
        *(longlong *)(piVar1 + 0x18) = lVar22;
        if (lVar22 == 0x10) {
          auVar25 = *pauVar3;
          auVar26[0] = -(DAT_14333f9f9 == auVar25[0]);
          auVar26[1] = -(UNK_14333f9fa == auVar25[1]);
          auVar26[2] = -(UNK_14333f9fb == auVar25[2]);
          auVar26[3] = -(UNK_14333f9fc == auVar25[3]);
          auVar26[4] = -(UNK_14333f9fd == auVar25[4]);
          auVar26[5] = -(UNK_14333f9fe == auVar25[5]);
          auVar26[6] = -(UNK_14333f9ff == auVar25[6]);
          auVar26[7] = -(UNK_14333fa00 == auVar25[7]);
          auVar26[8] = -(UNK_14333fa01 == auVar25[8]);
          auVar26[9] = -(UNK_14333fa02 == auVar25[9]);
          auVar26[10] = -(UNK_14333fa03 == auVar25[10]);
          auVar26[0xb] = -(UNK_14333fa04 == auVar25[0xb]);
          auVar26[0xc] = -(UNK_14333fa05 == auVar25[0xc]);
          auVar26[0xd] = -(UNK_14333fa06 == auVar25[0xd]);
          auVar26[0xe] = -(UNK_14333fa07 == auVar25[0xe]);
          auVar26[0xf] = -(UNK_14333fa08 == auVar25[0xf]);
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
                      (ushort)(auVar26[0xf] >> 7) << 0xf) != 0xffff) goto LAB_141818459;
          unaff_BPL = 1;
          iVar2 = *piStack_148;
        }
        else {
          if ((lVar22 != 7) ||
             (*(int *)(*pauVar3 + 3) != CONCAT31(_UNK_14333f9f6,DAT_14333f9f5) ||
              *(int *)*pauVar3 != _DAT_14333f9f2)) {
LAB_141818459:
            unaff_BPL = 2;
            iVar2 = *piStack_148;
            goto joined_r0x000141818432;
          }
          unaff_BPL = 0;
          iVar2 = *piStack_148;
        }
        if (iVar2 != 1) goto LAB_141818295;
        goto LAB_14181827f;
      }
      uStack_1ac = CONCAT11(cStack_1a5,cStack_1a6);
      unaff_XMM6_Da = CONCAT13(cStack_1a1,CONCAT12(cStack_1a2,CONCAT11(cStack_1a3,cStack_1a4)));
      puStack_160 = (undefined *)
                    CONCAT17(cStack_199,
                             CONCAT16(cStack_19a,
                                      CONCAT15(cStack_19b,
                                               CONCAT14(cStack_19c,
                                                        CONCAT13(cStack_19d,
                                                                 CONCAT12(cStack_19e,
                                                                          CONCAT11(cStack_19f,
                                                                                   cStack_1a0)))))))
      ;
      unaff_XMM8_Da = CONCAT22(uStack_196,uStack_198);
      unaff_XMM8_Dc = CONCAT22(uStack_18e,uStack_190);
      uStack_108 = (int *)CONCAT62(uStack_186,uStack_188);
      puStack_100 = (undefined *)CONCAT62(uStack_17e,uStack_180);
      uStack_f8 = CONCAT62(uStack_176,uStack_178);
      uStack_f0 = CONCAT62(uStack_16e,uStack_170);
      piStack_e8 = (int *)CONCAT62(uStack_166,uStack_168);
      iVar2 = *piStack_148;
      unaff_BPL = bStack_1a7;
      unaff_XMM8_Db = uStack_194;
      unaff_XMM8_Dd = uStack_18c;
joined_r0x000141818432:
      if (iVar2 == 1) goto LAB_14181827f;
    }
LAB_141818295:
    cVar20 = cStack_1a8;
    uVar23 = uStack_1ac;
    if (cStack_1a8 == '2') {
                    /* WARNING: Could not recover jumptable at 0x0001418182af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pcVar21 = (char *)(*(code *)(&UNK_14333f450 +
                                  *(int *)(&UNK_14333f450 + (ulonglong)unaff_BPL * 4)))();
      return pcVar21;
    }
  }
  else {
    unaff_XMM6_Da = CONCAT13(cStack_1a1,CONCAT12(cStack_1a2,CONCAT11(cStack_1a3,cStack_1a4)));
    puStack_160 = (undefined *)
                  CONCAT17(cStack_199,
                           CONCAT16(cStack_19a,
                                    CONCAT15(cStack_19b,
                                             CONCAT14(cStack_19c,
                                                      CONCAT13(cStack_19d,
                                                               CONCAT12(cStack_19e,
                                                                        CONCAT11(cStack_19f,
                                                                                 cStack_1a0)))))));
    unaff_XMM8_Da = CONCAT22(uStack_196,uStack_198);
    unaff_XMM8_Dc = CONCAT22(uStack_18e,uStack_190);
    uStack_108 = (int *)CONCAT62(uStack_186,uStack_188);
    puStack_100 = (undefined *)CONCAT62(uStack_17e,uStack_180);
    uStack_f8 = CONCAT62(uStack_176,uStack_178);
    uStack_f0 = CONCAT62(uStack_16e,uStack_170);
    piStack_e8 = (int *)CONCAT62(uStack_166,uStack_168);
    unaff_XMM8_Db = uStack_194;
    unaff_XMM8_Dd = uStack_18c;
    cVar20 = cStack_1a8;
    uVar23 = CONCAT11(cStack_1a5,cStack_1a6);
    unaff_BPL = bStack_1a7;
  }
LAB_1418185ff:
  uStack_118 = piStack_e8;
  uStack_128 = uStack_f8;
  uStack_120 = uStack_f0;
  piStack_138 = uStack_108;
  lStack_130 = (longlong)puStack_100;
LAB_14181863a:
  uStack_108 = (int *)CONCAT44(unaff_XMM6_Da,CONCAT22(uVar23,CONCAT11(unaff_BPL,cVar20)));
  uStack_f8 = CONCAT44(unaff_XMM8_Db,unaff_XMM8_Da);
  uStack_f0 = CONCAT44(unaff_XMM8_Dd,unaff_XMM8_Dc);
  piStack_e8 = piStack_138;
  lStack_e0 = lStack_130;
  uStack_d8 = uStack_128;
  uStack_d0 = uStack_120;
  if (cVar19 != '\0') {
    param_3 = 0;
  }
  uStack_c8 = uStack_118;
  if (param_4 == 0) {
    param_3 = 0;
  }
  puStack_100 = puStack_160;
  pdb_140dca990(&cStack_1a8,&uStack_108,param_3,param_4);
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
  *(ulonglong *)(param_1 + 0x10) = CONCAT44(uStack_194,CONCAT22(uStack_196,uStack_198));
  *(ulonglong *)(param_1 + 0x18) = CONCAT44(uStack_18c,CONCAT22(uStack_18e,uStack_190));
  *(ulonglong *)(param_1 + 0x20) = CONCAT62(uStack_186,uStack_188);
  *(ulonglong *)(param_1 + 0x28) = CONCAT62(uStack_17e,uStack_180);
  *(ulonglong *)(param_1 + 0x30) = CONCAT62(uStack_176,uStack_178);
  *(ulonglong *)(param_1 + 0x38) = CONCAT62(uStack_16e,uStack_170);
  *(ulonglong *)(param_1 + 0x40) = CONCAT62(uStack_166,uStack_168);
  return param_1;
}

