// VA 0x1402e4a20, PDB extent 3007 bytes
// ron::de::impl$2::deserialize_struct<country_core::render::render_config::_::impl$0::deserialize::__Visitor>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   ron::de::impl$2::deserialize_struct<country_core::render::render_config::_::impl$0::deserialize::__Visitor>
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
   Extent: 3007 */

char * pdb_1402e4a20(char *param_1,int *param_2,undefined8 param_3,longlong param_4)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
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
  longlong lVar20;
  char cVar21;
  byte bVar22;
  int *piVar23;
  undefined8 uVar24;
  ulonglong unaff_R12;
  undefined7 uVar25;
  undefined *puVar26;
  ulonglong arg1;
  ulonglong uVar27;
  undefined1 auVar28 [16];
  undefined8 unaff_XMM9_Qa;
  undefined8 unaff_XMM9_Qb;
  ulonglong uStack_1f8;
  byte *pbStack_1f0;
  undefined8 uStack_1e8;
  ulonglong uStack_1e0;
  byte *pbStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  ulonglong uStack_1a8;
  undefined8 uStack_190;
  undefined8 uStack_188;
  longlong lStack_180;
  undefined8 uStack_178;
  int *piStack_170;
  byte *pbStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  byte *pbStack_138;
  undefined8 uStack_130;
  int *piStack_128;
  undefined2 uStack_120;
  undefined1 uStack_11e;
  undefined *puStack_118;
  ulonglong uStack_110;
  ulonglong uStack_108;
  ulonglong uStack_100;
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
  undefined6 uStack_e6;
  undefined2 uStack_e0;
  undefined6 uStack_de;
  undefined2 uStack_d8;
  undefined6 uStack_d6;
  undefined2 uStack_d0;
  undefined2 uStack_ce;
  undefined4 uStack_cc;
  undefined2 uStack_c8;
  undefined2 uStack_c6;
  undefined4 uStack_c4;
  undefined2 uStack_c0;
  undefined6 uStack_be;
  undefined2 uStack_b8;
  undefined6 uStack_b6;
  undefined4 uStack_b0;
  undefined2 uStack_ac;
  undefined4 uStack_a8;
  undefined2 uStack_a4;
  char cStack_a1;
  undefined8 uStack_a0;
  
  uStack_a0 = 0xfffffffffffffffe;
  if (((char)param_2[0x1a] == '\0') &&
     (pdb_140dd1950(&cStack_f8,param_2 + 4,param_3,param_4), cStack_f8 != '2')) {
    *(ulonglong *)(param_1 + 0x40) = CONCAT62(uStack_b6,uStack_b8);
    *(ulonglong *)(param_1 + 0x32) = CONCAT26(uStack_c0,CONCAT42(uStack_c4,uStack_c6));
    *(ulonglong *)(param_1 + 0x3a) = CONCAT26(uStack_b8,uStack_be);
    *(ulonglong *)(param_1 + 0x22) = CONCAT26(uStack_d0,uStack_d6);
    *(ulonglong *)(param_1 + 0x2a) = CONCAT26(uStack_c8,CONCAT42(uStack_cc,uStack_ce));
    *(ulonglong *)(param_1 + 0x12) = CONCAT26(uStack_e0,uStack_e6);
    *(ulonglong *)(param_1 + 0x1a) = CONCAT26(uStack_d8,uStack_de);
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
    piVar23 = param_2 + 4;
    pdb_140dd4ac0(&cStack_f8,piVar23);
    if (cStack_f8 == '2') {
      cStack_a1 = '\x01';
      if ((char)param_2[0x1a] == '\0') {
        cVar19 = pdb_140dce020(piVar23,0x28);
        if (cVar19 == '\0') {
          if (param_4 == 0) {
            *param_1 = '\x15';
            return param_1;
          }
          *param_1 = '\x16';
          *(undefined8 *)(param_1 + 8) = param_3;
          *(longlong *)(param_1 + 0x10) = param_4;
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
      cVar18 = UNK_142e69d5f;
      cVar17 = UNK_142e69d5e;
      cVar16 = UNK_142e69d5d;
      cVar15 = UNK_142e69d5c;
      cVar14 = UNK_142e69d5b;
      cVar13 = UNK_142e69d5a;
      cVar12 = UNK_142e69d59;
      cVar11 = UNK_142e69d58;
      cVar10 = UNK_142e69d57;
      cVar9 = UNK_142e69d56;
      cVar8 = UNK_142e69d55;
      cVar7 = UNK_142e69d54;
      cVar6 = UNK_142e69d53;
      cVar5 = UNK_142e69d52;
      bVar22 = UNK_142e69d51;
      cVar19 = DAT_142e69d50;
      uVar4 = _UNK_142e697f8;
      uVar3 = _DAT_142e697f0;
      uVar2 = _UNK_142e69788;
      uVar24 = _DAT_142e69780;
      uStack_120 = 0x103;
      uStack_11e = 0;
      arg1 = 0x8000000000000000;
      uVar27 = 0x8000000000000000;
      lStack_180 = param_4;
      uStack_178 = param_3;
      piStack_170 = piVar23;
      piStack_128 = param_2;
LAB_1402e4b60:
      do {
        uStack_110 = arg1;
        uStack_108 = uVar27;
        pdb_140dca8b0(&cStack_f8,&piStack_128);
        piVar23 = (int *)(ulonglong)bStack_f7;
        if (cStack_f8 != '2') {
          uStack_a4 = CONCAT11(cStack_f1,cStack_f2);
          uStack_a8 = CONCAT13(cStack_f3,CONCAT12(cStack_f4,CONCAT11(cStack_f5,cStack_f6)));
          puVar26 = (undefined *)
                    CONCAT17(cStack_e9,
                             CONCAT16(cStack_ea,
                                      CONCAT15(cStack_eb,
                                               CONCAT14(cStack_ec,
                                                        CONCAT13(cStack_ed,
                                                                 CONCAT12(cStack_ee,
                                                                          CONCAT11(cStack_ef,
                                                                                   cStack_f0)))))));
          unaff_XMM9_Qa = CONCAT62(uStack_e6,uStack_e8);
          unaff_XMM9_Qb = CONCAT62(uStack_de,uStack_e0);
          unaff_R12 = CONCAT62(uStack_d6,uStack_d8);
          uStack_148 = CONCAT62(uStack_be,uStack_c0);
          uStack_140 = CONCAT62(uStack_b6,uStack_b8);
          cVar21 = cStack_f8;
          goto joined_r0x0001402e4fe6;
        }
        if ((bStack_f7 & 1) == 0) {
LAB_1402e4fbb:
          piVar1 = piStack_170;
          bVar22 = (byte)piVar23;
          if (SBORROW8(0,arg1)) {
            cVar21 = '+';
            arg1 = 0x8000000000000000;
LAB_1402e4fd4:
            puVar26 = &UNK_142e6a4ef;
            unaff_XMM9_Qa = uVar3;
            unaff_XMM9_Qb = uVar4;
            goto joined_r0x0001402e4fe6;
          }
          if (!SBORROW8(0,uVar27)) {
            if (*param_2 == 1) {
              lVar20 = -1;
              if (*(longlong *)(param_2 + 2) + 1 != 0) {
                lVar20 = *(longlong *)(param_2 + 2) + 1;
              }
              *(longlong *)(param_2 + 2) = lVar20;
            }
            pbStack_1f0 = pbStack_138;
            uStack_1e8 = uStack_130;
            pbStack_1d8 = pbStack_168;
            uStack_1d0 = uStack_160;
            uStack_1f8 = arg1;
            uStack_1e0 = uVar27;
            pdb_140dd4ac0(&cStack_f8,piStack_170);
            if (cStack_f8 == '2') {
              if ((cStack_a1 != '\0') || (cVar19 = pdb_140dce020(piVar1,0x29), cVar19 != '\0')) {
                *(byte **)(param_1 + 0x28) = pbStack_1d8;
                *(undefined8 *)(param_1 + 0x30) = uStack_1d0;
                *(undefined8 *)(param_1 + 0x18) = uStack_1e8;
                *(ulonglong *)(param_1 + 0x20) = uStack_1e0;
                *(ulonglong *)(param_1 + 8) = uStack_1f8;
                *(byte **)(param_1 + 0x10) = pbStack_1f0;
                *param_1 = '2';
                return param_1;
              }
              *param_1 = '\x17';
            }
            else {
              *(ulonglong *)(param_1 + 0x40) = CONCAT62(uStack_b6,uStack_b8);
              *(ulonglong *)(param_1 + 0x30) = CONCAT44(uStack_c4,CONCAT22(uStack_c6,uStack_c8));
              *(ulonglong *)(param_1 + 0x38) = CONCAT62(uStack_be,uStack_c0);
              *(ulonglong *)(param_1 + 0x20) = CONCAT62(uStack_d6,uStack_d8);
              *(ulonglong *)(param_1 + 0x28) = CONCAT44(uStack_cc,CONCAT22(uStack_ce,uStack_d0));
              *(ulonglong *)(param_1 + 0x10) = CONCAT62(uStack_e6,uStack_e8);
              *(ulonglong *)(param_1 + 0x18) = CONCAT62(uStack_de,uStack_e0);
              *(ulonglong *)param_1 =
                   CONCAT17(cStack_f1,
                            CONCAT16(cStack_f2,
                                     CONCAT15(cStack_f3,
                                              CONCAT14(cStack_f4,
                                                       CONCAT13(cStack_f5,
                                                                CONCAT12(cStack_f6,
                                                                         CONCAT11(bStack_f7,
                                                                                  cStack_f8)))))));
              *(ulonglong *)(param_1 + 8) =
                   CONCAT17(cStack_e9,
                            CONCAT16(cStack_ea,
                                     CONCAT15(cStack_eb,
                                              CONCAT14(cStack_ec,
                                                       CONCAT13(cStack_ed,
                                                                CONCAT12(cStack_ee,
                                                                         CONCAT11(cStack_ef,
                                                                                  cStack_f0)))))));
            }
            pdb_1404b9ca0(&uStack_1f8);
            return param_1;
          }
          cVar21 = '+';
          puVar26 = &UNK_142e6a4f3;
          unaff_XMM9_Qa = _DAT_142e69780;
          unaff_XMM9_Qb = _UNK_142e69788;
          uVar27 = arg1;
          goto joined_r0x0001402e505f;
        }
        uStack_110 = arg1;
        uStack_108 = uVar27;
        pdb_140dcace0(&cStack_f8);
        piVar23 = piStack_128;
        auVar28[0] = -(cStack_f8 == cVar19);
        auVar28[1] = -(bStack_f7 == bVar22);
        auVar28[2] = -(cStack_f6 == cVar5);
        auVar28[3] = -(cStack_f5 == cVar6);
        auVar28[4] = -(cStack_f4 == cVar7);
        auVar28[5] = -(cStack_f3 == cVar8);
        auVar28[6] = -(cStack_f2 == cVar9);
        auVar28[7] = -(cStack_f1 == cVar10);
        auVar28[8] = -(cStack_f0 == cVar11);
        auVar28[9] = -(cStack_ef == cVar12);
        auVar28[10] = -(cStack_ee == cVar13);
        auVar28[0xb] = -(cStack_ed == cVar14);
        auVar28[0xc] = -(cStack_ec == cVar15);
        auVar28[0xd] = -(cStack_eb == cVar16);
        auVar28[0xe] = -(cStack_ea == cVar17);
        auVar28[0xf] = -(cStack_e9 == cVar18);
        uStack_11e = (ushort)((ushort)(SUB161(auVar28 >> 7,0) & 1) |
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
        cVar21 = (char)*piStack_128;
        if ((char)uStack_120 != '\x01') {
          if ((char)uStack_120 != '\x03') {
            if (cVar21 != '\0') {
              if (*(longlong *)(piStack_128 + 2) == 0) goto LAB_1402e50d3;
              *(longlong *)(piStack_128 + 2) = *(longlong *)(piStack_128 + 2) + -1;
            }
            uStack_110 = arg1;
            uStack_108 = uVar27;
            pdb_140dcce90(&cStack_f8,piStack_128 + 4);
            if (cStack_f8 == '2') {
              piVar1 = (int *)CONCAT17(cStack_e9,
                                       CONCAT16(cStack_ea,
                                                CONCAT15(cStack_eb,
                                                         CONCAT14(cStack_ec,
                                                                  CONCAT13(cStack_ed,
                                                                           CONCAT12(cStack_ee,
                                                                                    CONCAT11(
                                                  cStack_ef,cStack_f0)))))));
              lVar20 = CONCAT62(uStack_e6,uStack_e8);
              *(int **)(piVar23 + 0x16) = piVar1;
              *(longlong *)(piVar23 + 0x18) = lVar20;
              uVar25 = (undefined7)(unaff_R12 >> 8);
              if (lVar20 == 6) {
                if ((short)piVar1[1] != _DAT_142e4802d || *piVar1 != _DAT_142e48029)
                goto LAB_1402e4ead;
                unaff_R12 = CONCAT71(uVar25,1);
              }
              else if ((lVar20 == 4) && (*piVar1 == _DAT_142e48025)) {
                unaff_R12 = 0;
              }
              else {
LAB_1402e4ead:
                unaff_R12 = CONCAT71(uVar25,2);
              }
            }
            else {
              unaff_R12 = (ulonglong)bStack_f7;
              uStack_b0 = CONCAT13(cStack_f3,CONCAT12(cStack_f4,CONCAT11(cStack_f5,cStack_f6)));
              uStack_ac = CONCAT11(cStack_f1,cStack_f2);
              puStack_118 = (undefined *)
                            CONCAT17(cStack_e9,
                                     CONCAT16(cStack_ea,
                                              CONCAT15(cStack_eb,
                                                       CONCAT14(cStack_ec,
                                                                CONCAT13(cStack_ed,
                                                                         CONCAT12(cStack_ee,
                                                                                  CONCAT11(cStack_ef
                                                  ,cStack_f0)))))));
              unaff_XMM9_Qa = CONCAT62(uStack_e6,uStack_e8);
              unaff_XMM9_Qb = CONCAT62(uStack_de,uStack_e0);
              uStack_100 = CONCAT62(uStack_d6,uStack_d8);
              uStack_158 = CONCAT62(uStack_be,uStack_c0);
              uStack_150 = CONCAT62(uStack_b6,uStack_b8);
            }
            goto LAB_1402e4cd3;
          }
          if (cVar21 == '\0') {
LAB_1402e4c06:
            uStack_1c8 = piStack_128;
            puStack_1c0 = (undefined *)((ulonglong)puStack_1c0._1_7_ << 8);
            uStack_110 = arg1;
            uStack_108 = uVar27;
            pdb_140342a20(&cStack_f8,&uStack_1c8);
            goto LAB_1402e4c6f;
          }
          if (*(longlong *)(piStack_128 + 2) != 0) {
            *(longlong *)(piStack_128 + 2) = *(longlong *)(piStack_128 + 2) + -1;
            goto LAB_1402e4c06;
          }
LAB_1402e50d3:
          cVar21 = '0';
LAB_1402e50d5:
          piVar23 = (int *)(unaff_R12 & 0xffffffff);
          puVar26 = puStack_118;
          unaff_R12 = uStack_100;
          uStack_148 = uStack_158;
          uStack_140 = uStack_150;
          uStack_a8 = uStack_b0;
          uStack_a4 = uStack_ac;
          goto joined_r0x0001402e4fe6;
        }
        if (cVar21 != '\0') {
          if (*(longlong *)(piStack_128 + 2) == 0) goto LAB_1402e50d3;
          *(longlong *)(piStack_128 + 2) = *(longlong *)(piStack_128 + 2) + -1;
        }
        uStack_1c8 = piStack_128;
        puStack_1c0 = (undefined *)CONCAT71(puStack_1c0._1_7_,1);
        uStack_110 = arg1;
        uStack_108 = uVar27;
        pdb_140342a20(&cStack_f8,&uStack_1c8);
LAB_1402e4c6f:
        if (cStack_f8 != '2') {
          uStack_ac = CONCAT11(cStack_f1,cStack_f2);
          uStack_b0 = CONCAT13(cStack_f3,CONCAT12(cStack_f4,CONCAT11(cStack_f5,cStack_f6)));
          puStack_118 = (undefined *)
                        CONCAT17(cStack_e9,
                                 CONCAT16(cStack_ea,
                                          CONCAT15(cStack_eb,
                                                   CONCAT14(cStack_ec,
                                                            CONCAT13(cStack_ed,
                                                                     CONCAT12(cStack_ee,
                                                                              CONCAT11(cStack_ef,
                                                                                       cStack_f0))))
                                                  )));
          unaff_XMM9_Qa = CONCAT62(uStack_e6,uStack_e8);
          unaff_XMM9_Qb = CONCAT62(uStack_de,uStack_e0);
          uStack_100 = CONCAT62(uStack_d6,uStack_d8);
          uStack_158 = CONCAT62(uStack_be,uStack_c0);
          uStack_150 = CONCAT62(uStack_b6,uStack_b8);
        }
        unaff_R12 = (ulonglong)bStack_f7;
LAB_1402e4cd3:
        if ((char)*piStack_128 != '\0') {
          lVar20 = *(longlong *)(piStack_128 + 2) + 1;
          if (lVar20 == 0) {
            lVar20 = -1;
          }
          *(longlong *)(piStack_128 + 2) = lVar20;
        }
        cVar21 = cStack_f8;
        if (cStack_f8 != '2') goto LAB_1402e50d5;
        if ((char)unaff_R12 != '\x02') {
          if ((unaff_R12 & 0xff) == 0) {
            if (!SBORROW8(0,arg1)) {
              cVar21 = ',';
              goto LAB_1402e4fd4;
            }
            uStack_110 = 0x8000000000000000;
            uStack_108 = uVar27;
            pdb_1402be570(&cStack_f8,&piStack_128);
            if (cStack_f8 != '2') {
              piVar23 = (int *)(ulonglong)bStack_f7;
              uStack_a8 = CONCAT13(cStack_f3,CONCAT12(cStack_f4,CONCAT11(cStack_f5,cStack_f6)));
              uStack_a4 = CONCAT11(cStack_f1,cStack_f2);
              unaff_XMM9_Qa = CONCAT62(uStack_e6,uStack_e8);
              unaff_XMM9_Qb = CONCAT62(uStack_de,uStack_e0);
              unaff_R12 = CONCAT62(uStack_d6,uStack_d8);
              uStack_148 = CONCAT62(uStack_be,uStack_c0);
              uStack_140 = CONCAT62(uStack_b6,uStack_b8);
              arg1 = 0x8000000000000000;
              puVar26 = (undefined *)
                        CONCAT17(cStack_e9,
                                 CONCAT16(cStack_ea,
                                          CONCAT15(cStack_eb,
                                                   CONCAT14(cStack_ec,
                                                            CONCAT13(cStack_ed,
                                                                     CONCAT12(cStack_ee,
                                                                              CONCAT11(cStack_ef,
                                                                                       cStack_f0))))
                                                  )));
              cVar21 = cStack_f8;
              goto joined_r0x0001402e4fe6;
            }
            arg1 = CONCAT17(cStack_e9,
                            CONCAT16(cStack_ea,
                                     CONCAT15(cStack_eb,
                                              CONCAT14(cStack_ec,
                                                       CONCAT13(cStack_ed,
                                                                CONCAT12(cStack_ee,
                                                                         CONCAT11(cStack_ef,
                                                                                  cStack_f0)))))));
            pbStack_138 = (byte *)CONCAT62(uStack_e6,uStack_e8);
            uStack_130 = CONCAT62(uStack_de,uStack_e0);
          }
          else {
            if (((uint)unaff_R12 & 0xff) != 1) goto LAB_1402e4fbb;
            if (!SBORROW8(0,uVar27)) {
              cVar21 = ',';
              puVar26 = &UNK_142e6a4f3;
              unaff_XMM9_Qa = uVar24;
              unaff_XMM9_Qb = uVar2;
              goto joined_r0x0001402e53f5;
            }
            uStack_108 = 0x8000000000000000;
            uStack_110 = arg1;
            pdb_1402be570(&cStack_f8,&piStack_128);
            if (cStack_f8 != '2') {
              uStack_a8 = CONCAT13(cStack_f3,CONCAT12(cStack_f4,CONCAT11(cStack_f5,cStack_f6)));
              uStack_a4 = CONCAT11(cStack_f1,cStack_f2);
              puVar26 = (undefined *)
                        CONCAT17(cStack_e9,
                                 CONCAT16(cStack_ea,
                                          CONCAT15(cStack_eb,
                                                   CONCAT14(cStack_ec,
                                                            CONCAT13(cStack_ed,
                                                                     CONCAT12(cStack_ee,
                                                                              CONCAT11(cStack_ef,
                                                                                       cStack_f0))))
                                                  )));
              unaff_XMM9_Qa = CONCAT62(uStack_e6,uStack_e8);
              unaff_XMM9_Qb = CONCAT62(uStack_de,uStack_e0);
              unaff_R12 = CONCAT62(uStack_d6,uStack_d8);
              uStack_148 = CONCAT62(uStack_be,uStack_c0);
              uStack_140 = CONCAT62(uStack_b6,uStack_b8);
              cVar21 = cStack_f8;
              bVar22 = bStack_f7;
              goto LAB_1402e513f;
            }
            uVar27 = CONCAT17(cStack_e9,
                              CONCAT16(cStack_ea,
                                       CONCAT15(cStack_eb,
                                                CONCAT14(cStack_ec,
                                                         CONCAT13(cStack_ed,
                                                                  CONCAT12(cStack_ee,
                                                                           CONCAT11(cStack_ef,
                                                                                    cStack_f0)))))))
            ;
            pbStack_168 = (byte *)CONCAT62(uStack_e6,uStack_e8);
            uStack_160 = CONCAT62(uStack_de,uStack_e0);
          }
          goto LAB_1402e4b60;
        }
        uStack_110 = arg1;
        uStack_108 = uVar27;
        pdb_1402c9020(&cStack_f8,&piStack_128);
      } while (cStack_f8 == '2');
      piVar23 = (int *)(ulonglong)bStack_f7;
      uStack_a8 = CONCAT13(cStack_f3,CONCAT12(cStack_f4,CONCAT11(cStack_f5,cStack_f6)));
      uStack_a4 = CONCAT11(cStack_f1,cStack_f2);
      unaff_XMM9_Qa = CONCAT62(uStack_e6,uStack_e8);
      unaff_XMM9_Qb = CONCAT62(uStack_de,uStack_e0);
      unaff_R12 = CONCAT62(uStack_d6,uStack_d8);
      uStack_148 = CONCAT62(uStack_be,uStack_c0);
      uStack_140 = CONCAT62(uStack_b6,uStack_b8);
      puVar26 = (undefined *)
                CONCAT17(cStack_e9,
                         CONCAT16(cStack_ea,
                                  CONCAT15(cStack_eb,
                                           CONCAT14(cStack_ec,
                                                    CONCAT13(cStack_ed,
                                                             CONCAT12(cStack_ee,
                                                                      CONCAT11(cStack_ef,cStack_f0))
                                                            )))));
      cVar21 = cStack_f8;
joined_r0x0001402e4fe6:
      bVar22 = (byte)piVar23;
      if (!SBORROW8(0,uVar27)) {
joined_r0x0001402e53f5:
        bVar22 = (byte)piVar23;
        if (uVar27 != 0) {
          pub_1406abac0(pbStack_168,uVar27,1);
        }
      }
LAB_1402e513f:
      uVar27 = arg1 & 0x7fffffffffffffff;
joined_r0x0001402e505f:
      if (uVar27 != 0) {
        pub_1406abac0(pbStack_138,arg1,1);
      }
      uStack_1c8 = (int *)CONCAT26(uStack_a4,CONCAT42(uStack_a8,CONCAT11(bVar22,cVar21)));
      uVar24 = uStack_178;
      if (cStack_a1 != '\0') {
        uVar24 = 0;
      }
      uStack_190 = uStack_148;
      uStack_188 = uStack_140;
      if (lStack_180 == 0) {
        uVar24 = 0;
      }
      puStack_1c0 = puVar26;
      uStack_1b8 = unaff_XMM9_Qa;
      uStack_1b0 = unaff_XMM9_Qb;
      uStack_1a8 = unaff_R12;
      pdb_140dca990(&cStack_f8,&uStack_1c8,uVar24);
      *(ushort *)(param_1 + 6) = CONCAT11(cStack_f1,cStack_f2);
      *(uint *)(param_1 + 2) = CONCAT13(cStack_f3,CONCAT12(cStack_f4,CONCAT11(cStack_f5,cStack_f6)))
      ;
      *(ulonglong *)(param_1 + 0x38) = CONCAT62(uStack_be,uStack_c0);
      *(ulonglong *)(param_1 + 0x40) = CONCAT62(uStack_b6,uStack_b8);
      *(ushort *)param_1 = CONCAT11(bStack_f7,cStack_f8);
      *(ulonglong *)(param_1 + 8) =
           CONCAT17(cStack_e9,
                    CONCAT16(cStack_ea,
                             CONCAT15(cStack_eb,
                                      CONCAT14(cStack_ec,
                                               CONCAT13(cStack_ed,
                                                        CONCAT12(cStack_ee,
                                                                 CONCAT11(cStack_ef,cStack_f0)))))))
      ;
      *(ulonglong *)(param_1 + 0x10) = CONCAT62(uStack_e6,uStack_e8);
      *(ulonglong *)(param_1 + 0x18) = CONCAT62(uStack_de,uStack_e0);
      *(ulonglong *)(param_1 + 0x20) = CONCAT62(uStack_d6,uStack_d8);
      *(ulonglong *)(param_1 + 0x28) = CONCAT44(uStack_cc,CONCAT22(uStack_ce,uStack_d0));
      *(ulonglong *)(param_1 + 0x30) = CONCAT44(uStack_c4,CONCAT22(uStack_c6,uStack_c8));
    }
    else {
      *(ulonglong *)(param_1 + 0x40) = CONCAT62(uStack_b6,uStack_b8);
      *(ulonglong *)(param_1 + 0x30) = CONCAT44(uStack_c4,CONCAT22(uStack_c6,uStack_c8));
      *(ulonglong *)(param_1 + 0x38) = CONCAT62(uStack_be,uStack_c0);
      *(ulonglong *)(param_1 + 0x20) = CONCAT62(uStack_d6,uStack_d8);
      *(ulonglong *)(param_1 + 0x28) = CONCAT44(uStack_cc,CONCAT22(uStack_ce,uStack_d0));
      *(ulonglong *)(param_1 + 0x10) = CONCAT62(uStack_e6,uStack_e8);
      *(ulonglong *)(param_1 + 0x18) = CONCAT62(uStack_de,uStack_e0);
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

