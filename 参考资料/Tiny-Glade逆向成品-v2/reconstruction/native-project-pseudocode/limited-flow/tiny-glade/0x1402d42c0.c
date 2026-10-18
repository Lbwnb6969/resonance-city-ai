// VA 0x1402d42c0, PDB extent 2798 bytes
// ron::de::impl$2::deserialize_struct<country_core::resources::audio_settings::_::impl$0::deserialize::__Visitor>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   ron::de::impl$2::deserialize_struct<country_core::resources::audio_settings::_::impl$0::deserialize::__Visitor>
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
   Extent: 2798 */

char * pdb_1402d42c0(char *param_1,int *param_2,undefined8 param_3,longlong param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  byte bVar5;
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
  undefined8 uVar20;
  undefined8 uVar21;
  char cVar22;
  char cVar23;
  char *pcVar24;
  longlong lVar25;
  byte unaff_R13B;
  undefined1 auVar26 [16];
  undefined4 unaff_XMM6_Da;
  undefined4 unaff_XMM8_Da;
  undefined4 unaff_XMM9_Da;
  undefined4 unaff_XMM10_Da;
  undefined4 unaff_XMM10_Db;
  undefined4 unaff_XMM11_Da;
  undefined4 unaff_XMM12_Da;
  undefined2 uStack_1fc;
  char cStack_1f8;
  byte bStack_1f7;
  char cStack_1f6;
  char cStack_1f5;
  char cStack_1f4;
  char cStack_1f3;
  char cStack_1f2;
  char cStack_1f1;
  char cStack_1f0;
  char cStack_1ef;
  char cStack_1ee;
  char cStack_1ed;
  char cStack_1ec;
  char cStack_1eb;
  char cStack_1ea;
  char cStack_1e9;
  undefined2 uStack_1e8;
  undefined6 uStack_1e6;
  undefined2 uStack_1e0;
  undefined6 uStack_1de;
  undefined2 uStack_1d8;
  undefined6 uStack_1d6;
  undefined2 uStack_1d0;
  undefined6 uStack_1ce;
  undefined2 uStack_1c8;
  undefined6 uStack_1c6;
  undefined2 uStack_1c0;
  undefined6 uStack_1be;
  undefined2 uStack_1b8;
  undefined6 uStack_1b6;
  int *piStack_1a8;
  undefined2 uStack_1a0;
  undefined1 uStack_19e;
  uint uStack_188;
  uint uStack_184;
  uint uStack_180;
  uint uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 uStack_f8;
  
  if (((char)param_2[0x1a] == '\0') &&
     (pdb_140dd1950(&cStack_1f8,param_2 + 4,param_3,param_4), cStack_1f8 != '2')) {
    *(ulonglong *)(param_1 + 0x40) = CONCAT62(uStack_1b6,uStack_1b8);
    *(ulonglong *)(param_1 + 0x32) = CONCAT26(uStack_1c0,uStack_1c6);
    *(ulonglong *)(param_1 + 0x3a) = CONCAT26(uStack_1b8,uStack_1be);
    *(ulonglong *)(param_1 + 0x22) = CONCAT26(uStack_1d0,uStack_1d6);
    *(ulonglong *)(param_1 + 0x2a) = CONCAT26(uStack_1c8,uStack_1ce);
    *(ulonglong *)(param_1 + 0x12) = CONCAT26(uStack_1e0,uStack_1e6);
    *(ulonglong *)(param_1 + 0x1a) = CONCAT26(uStack_1d8,uStack_1de);
    *(ulonglong *)(param_1 + 2) =
         CONCAT17(cStack_1ef,
                  CONCAT16(cStack_1f0,
                           CONCAT15(cStack_1f1,
                                    CONCAT14(cStack_1f2,
                                             CONCAT13(cStack_1f3,
                                                      CONCAT12(cStack_1f4,
                                                               CONCAT11(cStack_1f5,cStack_1f6)))))))
    ;
    *(ulonglong *)(param_1 + 10) =
         CONCAT26(uStack_1e8,
                  CONCAT15(cStack_1e9,
                           CONCAT14(cStack_1ea,
                                    CONCAT13(cStack_1eb,
                                             CONCAT12(cStack_1ec,CONCAT11(cStack_1ed,cStack_1ee)))))
                 );
    *param_1 = cStack_1f8;
    param_1[1] = bStack_1f7;
    return param_1;
  }
  piVar1 = param_2 + 4;
  pdb_140dd4ac0(&cStack_1f8,piVar1);
  if (cStack_1f8 != '2') goto LAB_1402d4a8b;
  cVar22 = '\x01';
  if ((char)param_2[0x1a] == '\0') {
    cVar22 = pdb_140dce020(piVar1,0x28);
    if (cVar22 == '\0') {
      if (param_4 != 0) {
        *param_1 = '\x16';
        *(undefined8 *)(param_1 + 8) = param_3;
        *(longlong *)(param_1 + 0x10) = param_4;
        return param_1;
      }
      *param_1 = '\x15';
      return param_1;
    }
    cVar22 = (char)param_2[0x1a];
  }
  *(char *)(param_2 + 0x1a) = '\0';
  if ((char)*param_2 != '\0') {
    if (*(longlong *)(param_2 + 2) == 0) {
      *param_1 = '0';
      return param_1;
    }
    *(longlong *)(param_2 + 2) = *(longlong *)(param_2 + 2) + -1;
  }
  uStack_1a0 = 0x103;
  uStack_19e = 0;
  piStack_1a8 = param_2;
  pdb_140dca8b0(&cStack_1f8,&piStack_1a8);
  cVar19 = UNK_142e699ef;
  cVar18 = UNK_142e699ee;
  cVar17 = UNK_142e699ed;
  cVar16 = UNK_142e699ec;
  cVar15 = UNK_142e699eb;
  cVar14 = UNK_142e699ea;
  cVar13 = UNK_142e699e9;
  cVar12 = UNK_142e699e8;
  cVar11 = UNK_142e699e7;
  cVar10 = UNK_142e699e6;
  cVar9 = UNK_142e699e5;
  cVar8 = UNK_142e699e4;
  cVar7 = UNK_142e699e3;
  cVar6 = UNK_142e699e2;
  bVar5 = UNK_142e699e1;
  cVar23 = DAT_142e699e0;
  if (cStack_1f8 != '2') {
    uStack_1fc = CONCAT11(cStack_1f5,cStack_1f6);
    unaff_XMM6_Da = CONCAT13(cStack_1f1,CONCAT12(cStack_1f2,CONCAT11(cStack_1f3,cStack_1f4)));
    unaff_XMM10_Da = (undefined4)CONCAT62(uStack_1e6,uStack_1e8);
    unaff_XMM10_Db = (undefined4)((uint6)uStack_1e6 >> 0x10);
    uStack_138 = CONCAT62(uStack_1d6,uStack_1d8);
    uStack_130 = CONCAT62(uStack_1ce,uStack_1d0);
    uStack_128 = CONCAT62(uStack_1c6,uStack_1c8);
    uStack_120 = CONCAT62(uStack_1be,uStack_1c0);
    uStack_118 = CONCAT62(uStack_1b6,uStack_1b8);
    cVar23 = cStack_1f8;
    unaff_R13B = bStack_1f7;
    goto LAB_1402d4b8b;
  }
  uStack_16c = 0;
  uStack_188 = 0;
  uStack_180 = 0;
  uStack_17c = 0;
  uStack_184 = 0;
  uStack_170 = 0;
  uStack_174 = 0;
  uStack_178 = 0;
  if ((bStack_1f7 & 1) == 0) {
    pdb_140ca2220(&cStack_1f8);
    if ((uStack_188 & 1) == 0) {
      unaff_XMM8_Da = CONCAT13(cStack_1f5,CONCAT12(cStack_1f6,CONCAT11(bStack_1f7,cStack_1f8)));
      if ((uStack_180 & 1) != 0) goto LAB_1402d49ef;
LAB_1402d4b1f:
      unaff_XMM11_Da = CONCAT13(cStack_1f1,CONCAT12(cStack_1f2,CONCAT11(cStack_1f3,cStack_1f4)));
      if ((uStack_17c & 1) != 0) goto LAB_1402d49fd;
LAB_1402d4b34:
      unaff_XMM12_Da = CONCAT13(cStack_1ed,CONCAT12(cStack_1ee,CONCAT11(cStack_1ef,cStack_1f0)));
      if ((uStack_184 & 1) != 0) goto LAB_1402d4a0b;
LAB_1402d4b49:
      unaff_XMM9_Da = CONCAT13(cStack_1e9,CONCAT12(cStack_1ea,CONCAT11(cStack_1eb,cStack_1ec)));
      uStack_138 = CONCAT44(unaff_XMM12_Da,unaff_XMM11_Da);
      iVar2 = *param_2;
      uVar4 = uStack_138;
    }
    else {
      if ((uStack_180 & 1) == 0) goto LAB_1402d4b1f;
LAB_1402d49ef:
      if ((uStack_17c & 1) == 0) goto LAB_1402d4b34;
LAB_1402d49fd:
      if ((uStack_184 & 1) == 0) goto LAB_1402d4b49;
LAB_1402d4a0b:
      uStack_138 = CONCAT44(unaff_XMM12_Da,unaff_XMM11_Da);
      iVar2 = *param_2;
      uVar4 = uStack_138;
    }
    if (iVar2 == 1) {
      lVar25 = -1;
      if (*(longlong *)(param_2 + 2) + 1 != 0) {
        lVar25 = *(longlong *)(param_2 + 2) + 1;
      }
      *(longlong *)(param_2 + 2) = lVar25;
    }
    pdb_140dd4ac0(&cStack_1f8,piVar1);
    if (cStack_1f8 == '2') {
      if ((cVar22 == '\0') && (cVar22 = pdb_140dce020(piVar1,0x29), cVar22 == '\0')) {
        *param_1 = '\x17';
        return param_1;
      }
      *(undefined4 *)(param_1 + 4) = unaff_XMM8_Da;
      *(undefined8 *)(param_1 + 8) = uVar4;
      *(undefined4 *)(param_1 + 0x10) = unaff_XMM9_Da;
      *param_1 = '2';
      return param_1;
    }
LAB_1402d4a8b:
    *(ulonglong *)(param_1 + 0x40) = CONCAT62(uStack_1b6,uStack_1b8);
    *(ulonglong *)(param_1 + 0x30) = CONCAT62(uStack_1c6,uStack_1c8);
    *(ulonglong *)(param_1 + 0x38) = CONCAT62(uStack_1be,uStack_1c0);
    *(ulonglong *)(param_1 + 0x20) = CONCAT62(uStack_1d6,uStack_1d8);
    *(ulonglong *)(param_1 + 0x28) = CONCAT62(uStack_1ce,uStack_1d0);
    *(ulonglong *)(param_1 + 0x10) = CONCAT62(uStack_1e6,uStack_1e8);
    *(ulonglong *)(param_1 + 0x18) = CONCAT62(uStack_1de,uStack_1e0);
    *(ulonglong *)param_1 =
         CONCAT17(cStack_1f1,
                  CONCAT16(cStack_1f2,
                           CONCAT15(cStack_1f3,
                                    CONCAT14(cStack_1f4,
                                             CONCAT13(cStack_1f5,
                                                      CONCAT12(cStack_1f6,
                                                               CONCAT11(bStack_1f7,cStack_1f8)))))))
    ;
    *(ulonglong *)(param_1 + 8) =
         CONCAT17(cStack_1e9,
                  CONCAT16(cStack_1ea,
                           CONCAT15(cStack_1eb,
                                    CONCAT14(cStack_1ec,
                                             CONCAT13(cStack_1ed,
                                                      CONCAT12(cStack_1ee,
                                                               CONCAT11(cStack_1ef,cStack_1f0)))))))
    ;
    return param_1;
  }
  pdb_140dcace0(&cStack_1f8);
  piVar1 = piStack_1a8;
  auVar26[0] = -(cStack_1f8 == cVar23);
  auVar26[1] = -(bStack_1f7 == bVar5);
  auVar26[2] = -(cStack_1f6 == cVar6);
  auVar26[3] = -(cStack_1f5 == cVar7);
  auVar26[4] = -(cStack_1f4 == cVar8);
  auVar26[5] = -(cStack_1f3 == cVar9);
  auVar26[6] = -(cStack_1f2 == cVar10);
  auVar26[7] = -(cStack_1f1 == cVar11);
  auVar26[8] = -(cStack_1f0 == cVar12);
  auVar26[9] = -(cStack_1ef == cVar13);
  auVar26[10] = -(cStack_1ee == cVar14);
  auVar26[0xb] = -(cStack_1ed == cVar15);
  auVar26[0xc] = -(cStack_1ec == cVar16);
  auVar26[0xd] = -(cStack_1eb == cVar17);
  auVar26[0xe] = -(cStack_1ea == cVar18);
  auVar26[0xf] = -(cStack_1e9 == cVar19);
  uStack_19e = (ushort)((ushort)(SUB161(auVar26 >> 7,0) & 1) |
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
                       (ushort)(auVar26[0xf] >> 7) << 0xf) == 0xffff;
  cVar23 = (char)*piStack_1a8;
  if ((char)uStack_1a0 == '\x01') {
    if (cVar23 != '\0') {
      if (*(longlong *)(piStack_1a8 + 2) == 0) goto LAB_1402d4b73;
      *(longlong *)(piStack_1a8 + 2) = *(longlong *)(piStack_1a8 + 2) + -1;
    }
    pdb_1402cd370(&cStack_1f8);
joined_r0x0001402d4697:
    if (cStack_1f8 != '2') {
      uStack_1fc = CONCAT11(cStack_1f5,cStack_1f6);
      unaff_XMM6_Da = CONCAT13(cStack_1f1,CONCAT12(cStack_1f2,CONCAT11(cStack_1f3,cStack_1f4)));
      unaff_XMM10_Da = (undefined4)CONCAT62(uStack_1e6,uStack_1e8);
      unaff_XMM10_Db = (undefined4)((uint6)uStack_1e6 >> 0x10);
      uStack_138 = CONCAT62(uStack_1d6,uStack_1d8);
      uStack_130 = CONCAT62(uStack_1ce,uStack_1d0);
      uStack_128 = CONCAT62(uStack_1c6,uStack_1c8);
      uStack_120 = CONCAT62(uStack_1be,uStack_1c0);
      uStack_118 = CONCAT62(uStack_1b6,uStack_1b8);
    }
    unaff_R13B = bStack_1f7;
    if ((char)*piStack_1a8 != '\0') {
LAB_1402d45ee:
      lVar25 = *(longlong *)(piStack_1a8 + 2) + 1;
      if (lVar25 == 0) {
        lVar25 = -1;
      }
      *(longlong *)(piStack_1a8 + 2) = lVar25;
    }
  }
  else {
    if ((char)uStack_1a0 == '\x03') {
      if (cVar23 != '\0') {
        if (*(longlong *)(piStack_1a8 + 2) == 0) goto LAB_1402d4b73;
        *(longlong *)(piStack_1a8 + 2) = *(longlong *)(piStack_1a8 + 2) + -1;
      }
      pdb_1402e6670(&cStack_1f8);
      goto joined_r0x0001402d4697;
    }
    if (cVar23 != '\0') {
      if (*(longlong *)(piStack_1a8 + 2) == 0) {
LAB_1402d4b73:
        cVar23 = '0';
        goto LAB_1402d4b8b;
      }
      *(longlong *)(piStack_1a8 + 2) = *(longlong *)(piStack_1a8 + 2) + -1;
    }
    pdb_140dcce90(&cStack_1f8,piStack_1a8 + 4);
    if (cStack_1f8 == '2') {
      plVar3 = (longlong *)
               CONCAT17(cStack_1e9,
                        CONCAT16(cStack_1ea,
                                 CONCAT15(cStack_1eb,
                                          CONCAT14(cStack_1ec,
                                                   CONCAT13(cStack_1ed,
                                                            CONCAT12(cStack_1ee,
                                                                     CONCAT11(cStack_1ef,cStack_1f0)
                                                                    ))))));
      *(longlong **)(piVar1 + 0x16) = plVar3;
      *(ulonglong *)(piVar1 + 0x18) = CONCAT62(uStack_1e6,uStack_1e8);
      switch(CONCAT62(uStack_1e6,uStack_1e8)) {
      case 10:
        if ((short)plVar3[1] == _UNK_142e3341e && *plVar3 == _UNK_142e33416) {
          iVar2 = *piStack_1a8;
          unaff_R13B = 2;
          goto joined_r0x0001402d48ff;
        }
        break;
      case 0xc:
        if ((int)plVar3[1] == _UNK_142e33412 && *plVar3 == _UNK_142e3340a) {
          iVar2 = *piStack_1a8;
          unaff_R13B = 1;
          goto joined_r0x0001402d48ff;
        }
        break;
      case 0xd:
        if (*(longlong *)((longlong)plVar3 + 5) == CONCAT53(_UNK_142e33405,_UNK_142e33402) &&
            *plVar3 == CONCAT35(_UNK_142e33402,_UNK_142e333fd)) {
          iVar2 = *piStack_1a8;
          unaff_R13B = 0;
          goto joined_r0x0001402d48ff;
        }
        break;
      case 0xf:
        if (*(longlong *)((longlong)plVar3 + 7) == CONCAT71(_UNK_142e33428,UNK_142e33427) &&
            *plVar3 == CONCAT17(UNK_142e33427,_UNK_142e33420)) {
          iVar2 = *piStack_1a8;
          unaff_R13B = 3;
          goto joined_r0x0001402d48ff;
        }
      }
      unaff_R13B = 4;
      iVar2 = *piStack_1a8;
    }
    else {
      uStack_1fc = CONCAT11(cStack_1f5,cStack_1f6);
      unaff_XMM6_Da = CONCAT13(cStack_1f1,CONCAT12(cStack_1f2,CONCAT11(cStack_1f3,cStack_1f4)));
      unaff_XMM10_Da = (undefined4)CONCAT62(uStack_1e6,uStack_1e8);
      unaff_XMM10_Db = (undefined4)((uint6)uStack_1e6 >> 0x10);
      uStack_138 = CONCAT62(uStack_1d6,uStack_1d8);
      uStack_130 = CONCAT62(uStack_1ce,uStack_1d0);
      uStack_128 = CONCAT62(uStack_1c6,uStack_1c8);
      uStack_120 = CONCAT62(uStack_1be,uStack_1c0);
      uStack_118 = CONCAT62(uStack_1b6,uStack_1b8);
      iVar2 = *piStack_1a8;
      unaff_R13B = bStack_1f7;
    }
joined_r0x0001402d48ff:
    if (iVar2 == 1) goto LAB_1402d45ee;
  }
  cVar23 = cStack_1f8;
  if (cStack_1f8 == '2') {
                    /* WARNING: Could not recover jumptable at 0x0001402d4618. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar24 = (char *)(*(code *)(&UNK_142e6abac +
                                *(int *)(&UNK_142e6abac + (ulonglong)unaff_R13B * 4)))();
    return pcVar24;
  }
LAB_1402d4b8b:
  uStack_f8 = uStack_118;
  uVar21 = uStack_138;
  uStack_148 = uStack_118;
  uStack_158 = uStack_128;
  uVar4 = uStack_158;
  uStack_150 = uStack_120;
  uVar20 = uStack_150;
  uStack_168 = uStack_138;
  uStack_160 = uStack_130;
  uStack_138 = CONCAT44(unaff_XMM6_Da,CONCAT22(uStack_1fc,CONCAT11(unaff_R13B,cVar23)));
  uStack_158._0_4_ = (undefined4)uStack_128;
  uStack_158._4_4_ = (undefined4)((ulonglong)uStack_128 >> 0x20);
  uStack_150._0_4_ = (undefined4)uStack_120;
  uStack_150._4_4_ = (undefined4)((ulonglong)uStack_120 >> 0x20);
  uStack_118 = uVar21;
  uStack_110 = uStack_130;
  uStack_108 = (undefined4)uStack_158;
  uStack_104 = uStack_158._4_4_;
  uStack_100 = (undefined4)uStack_150;
  uStack_fc = uStack_150._4_4_;
  if (cVar22 != '\0') {
    param_3 = 0;
  }
  if (param_4 == 0) {
    param_3 = 0;
  }
  uStack_158 = uVar4;
  uStack_150 = uVar20;
  uStack_128 = CONCAT44(unaff_XMM10_Db,unaff_XMM10_Da);
  pdb_140dca990(&cStack_1f8,&uStack_138,param_3,param_4);
  *(uint *)param_1 = CONCAT13(cStack_1f5,CONCAT12(cStack_1f6,CONCAT11(bStack_1f7,cStack_1f8)));
  *(uint *)(param_1 + 4) = CONCAT13(cStack_1f1,CONCAT12(cStack_1f2,CONCAT11(cStack_1f3,cStack_1f4)))
  ;
  *(ulonglong *)(param_1 + 8) =
       CONCAT17(cStack_1e9,
                CONCAT16(cStack_1ea,
                         CONCAT15(cStack_1eb,
                                  CONCAT14(cStack_1ec,
                                           CONCAT13(cStack_1ed,
                                                    CONCAT12(cStack_1ee,
                                                             CONCAT11(cStack_1ef,cStack_1f0)))))));
  *(ulonglong *)(param_1 + 0x10) = CONCAT62(uStack_1e6,uStack_1e8);
  *(ulonglong *)(param_1 + 0x18) = CONCAT62(uStack_1de,uStack_1e0);
  *(ulonglong *)(param_1 + 0x20) = CONCAT62(uStack_1d6,uStack_1d8);
  *(ulonglong *)(param_1 + 0x28) = CONCAT62(uStack_1ce,uStack_1d0);
  *(ulonglong *)(param_1 + 0x30) = CONCAT62(uStack_1c6,uStack_1c8);
  *(ulonglong *)(param_1 + 0x38) = CONCAT62(uStack_1be,uStack_1c0);
  *(ulonglong *)(param_1 + 0x40) = CONCAT62(uStack_1b6,uStack_1b8);
  return param_1;
}

