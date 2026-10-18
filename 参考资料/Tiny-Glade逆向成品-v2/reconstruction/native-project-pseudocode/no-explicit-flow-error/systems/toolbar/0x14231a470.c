// VA 0x14231a470, PDB extent 3336 bytes
// ron::de::impl$2::deserialize_struct<tg_text::font_table::_::impl$0::deserialize::__Visitor>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   ron::de::impl$2::deserialize_struct<tg_text::font_table::_::impl$0::deserialize::__Visitor>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/lib.rs
   Extent: 3336 */

char * pdb_14231a470(char *param_1,int *param_2,undefined8 param_3,ulonglong param_4)

{
  uint uVar1;
  int *piVar2;
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
  byte bVar18;
  char cVar19;
  char cVar20;
  char cVar21;
  char cVar22;
  char cVar23;
  char cVar24;
  char cVar25;
  char cVar26;
  char cVar27;
  char cVar28;
  char cVar29;
  char cVar30;
  char cVar31;
  char cVar32;
  ulonglong uVar33;
  char cVar34;
  char cVar35;
  longlong lVar36;
  undefined8 uVar37;
  char *pcVar38;
  int *piVar39;
  ulonglong uVar40;
  char cVar41;
  int *piVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined4 unaff_XMM6_Da;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  undefined4 unaff_XMM10_Da;
  undefined4 unaff_XMM11_Da;
  undefined4 unaff_XMM11_Db;
  undefined4 unaff_XMM11_Dc;
  undefined4 unaff_XMM11_Dd;
  undefined4 unaff_XMM12_Da;
  undefined4 unaff_XMM12_Db;
  undefined4 unaff_XMM12_Dc;
  undefined4 unaff_XMM12_Dd;
  undefined8 uStack_1e8;
  char *pcStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined4 uStack_1c4;
  int *piStack_1c0;
  ulonglong uStack_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined8 uStack_198;
  int iStack_18c;
  int *piStack_188;
  ulonglong uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  int *piStack_168;
  undefined2 uStack_160;
  char cStack_15e;
  char *pcStack_158;
  byte *pbStack_150;
  uint uStack_144;
  ulonglong uStack_140;
  char cStack_138;
  byte bStack_137;
  char cStack_136;
  char cStack_135;
  char cStack_134;
  char cStack_133;
  char cStack_132;
  char cStack_131;
  char cStack_130;
  char cStack_12f;
  char cStack_12e;
  char cStack_12d;
  char cStack_12c;
  char cStack_12b;
  char cStack_12a;
  char cStack_129;
  undefined2 uStack_128;
  undefined2 uStack_126;
  undefined4 uStack_124;
  undefined2 uStack_120;
  undefined2 uStack_11e;
  undefined4 uStack_11c;
  undefined2 uStack_118;
  undefined2 uStack_116;
  uint uStack_114;
  undefined2 uStack_110;
  undefined6 uStack_10e;
  undefined2 uStack_108;
  undefined6 uStack_106;
  undefined2 uStack_100;
  undefined6 uStack_fe;
  undefined2 uStack_f8;
  undefined6 uStack_f6;
  ulonglong uStack_f0;
  ushort uStack_e4;
  undefined1 uStack_e2;
  char cStack_e1;
  undefined8 uStack_e0;
  
  uStack_e0 = 0xfffffffffffffffe;
  if (((char)param_2[0x1a] == '\0') &&
     (pdb_140dd1950(&cStack_138,param_2 + 4,param_3,param_4), cStack_138 != '2')) {
    *(ulonglong *)(param_1 + 0x40) = CONCAT62(uStack_f6,uStack_f8);
    *(ulonglong *)(param_1 + 0x32) = CONCAT26(uStack_100,uStack_106);
    *(ulonglong *)(param_1 + 0x3a) = CONCAT26(uStack_f8,uStack_fe);
    *(ulonglong *)(param_1 + 0x22) = CONCAT26(uStack_110,CONCAT42(uStack_114,uStack_116));
    *(ulonglong *)(param_1 + 0x2a) = CONCAT26(uStack_108,uStack_10e);
    *(ulonglong *)(param_1 + 0x12) = CONCAT26(uStack_120,CONCAT42(uStack_124,uStack_126));
    *(ulonglong *)(param_1 + 0x1a) = CONCAT26(uStack_118,CONCAT42(uStack_11c,uStack_11e));
    *(ulonglong *)(param_1 + 2) =
         CONCAT17(cStack_12f,
                  CONCAT16(cStack_130,
                           CONCAT15(cStack_131,
                                    CONCAT14(cStack_132,
                                             CONCAT13(cStack_133,
                                                      CONCAT12(cStack_134,
                                                               CONCAT11(cStack_135,cStack_136)))))))
    ;
    *(ulonglong *)(param_1 + 10) =
         CONCAT26(uStack_128,
                  CONCAT15(cStack_129,
                           CONCAT14(cStack_12a,
                                    CONCAT13(cStack_12b,
                                             CONCAT12(cStack_12c,CONCAT11(cStack_12d,cStack_12e)))))
                 );
    *param_1 = cStack_138;
    param_1[1] = bStack_137;
    return param_1;
  }
  piVar42 = param_2 + 4;
  pdb_140dd4ac0(&cStack_138,piVar42);
  if (cStack_138 != '2') {
    *(ulonglong *)(param_1 + 0x40) = CONCAT62(uStack_f6,uStack_f8);
    *(ulonglong *)(param_1 + 0x30) = CONCAT62(uStack_106,uStack_108);
    *(ulonglong *)(param_1 + 0x38) = CONCAT62(uStack_fe,uStack_100);
    *(ulonglong *)(param_1 + 0x20) = CONCAT44(uStack_114,CONCAT22(uStack_116,uStack_118));
    *(ulonglong *)(param_1 + 0x28) = CONCAT62(uStack_10e,uStack_110);
    *(ulonglong *)(param_1 + 0x10) = CONCAT44(uStack_124,CONCAT22(uStack_126,uStack_128));
    *(ulonglong *)(param_1 + 0x18) = CONCAT44(uStack_11c,CONCAT22(uStack_11e,uStack_120));
    *(ulonglong *)param_1 =
         CONCAT17(cStack_131,
                  CONCAT16(cStack_132,
                           CONCAT15(cStack_133,
                                    CONCAT14(cStack_134,
                                             CONCAT13(cStack_135,
                                                      CONCAT12(cStack_136,
                                                               CONCAT11(bStack_137,cStack_138)))))))
    ;
    *(ulonglong *)(param_1 + 8) =
         CONCAT17(cStack_129,
                  CONCAT16(cStack_12a,
                           CONCAT15(cStack_12b,
                                    CONCAT14(cStack_12c,
                                             CONCAT13(cStack_12d,
                                                      CONCAT12(cStack_12e,
                                                               CONCAT11(cStack_12f,cStack_130)))))))
    ;
    return param_1;
  }
  cStack_e1 = '\x01';
  if ((char)param_2[0x1a] == '\0') {
    cVar34 = pdb_140dce020(piVar42,0x28);
    if (cVar34 == '\0') {
      if (param_4 != 0) {
        *param_1 = '\x16';
        *(undefined8 *)(param_1 + 8) = param_3;
        *(ulonglong *)(param_1 + 0x10) = param_4;
        return param_1;
      }
      *param_1 = '\x15';
      return param_1;
    }
    cStack_e1 = (char)param_2[0x1a];
  }
  *(char *)(param_2 + 0x1a) = '\0';
  if ((char)*param_2 != '\0') {
    if (*(longlong *)(param_2 + 2) == 0) {
      *param_1 = '0';
      return param_1;
    }
    *(longlong *)(param_2 + 2) = *(longlong *)(param_2 + 2) + -1;
  }
  cVar32 = UNK_1434d8dbf;
  cVar31 = UNK_1434d8dbe;
  cVar30 = UNK_1434d8dbd;
  cVar29 = UNK_1434d8dbc;
  cVar28 = UNK_1434d8dbb;
  cVar27 = UNK_1434d8dba;
  cVar26 = UNK_1434d8db9;
  cVar25 = UNK_1434d8db8;
  cVar24 = UNK_1434d8db7;
  cVar23 = UNK_1434d8db6;
  cVar22 = UNK_1434d8db5;
  cVar21 = UNK_1434d8db4;
  cVar20 = UNK_1434d8db3;
  cVar19 = UNK_1434d8db2;
  bVar18 = UNK_1434d8db1;
  cVar17 = DAT_1434d8db0;
  uVar48 = _UNK_142e69a3c;
  uVar47 = _UNK_142e69a38;
  uVar46 = _UNK_142e69a34;
  uVar45 = _DAT_142e69a30;
  uVar52 = _UNK_142e6978c;
  uVar51 = _UNK_142e69788;
  uVar50 = _UNK_142e69784;
  uVar49 = _DAT_142e69780;
  cVar16 = UNK_142e6971f;
  cVar15 = UNK_142e6971e;
  cVar14 = UNK_142e6971d;
  cVar13 = UNK_142e6971c;
  cVar12 = UNK_142e6971b;
  cVar11 = UNK_142e6971a;
  cVar10 = UNK_142e69719;
  cVar9 = UNK_142e69718;
  cVar8 = UNK_142e69717;
  cVar7 = UNK_142e69716;
  cVar6 = UNK_142e69715;
  cVar5 = UNK_142e69714;
  cVar4 = UNK_142e69713;
  cVar41 = UNK_142e69712;
  bVar3 = UNK_142e69711;
  cVar34 = DAT_142e69710;
  uStack_160 = 0x103;
  cStack_15e = '\0';
  uStack_198 = (int *)((ulonglong)uStack_198._4_4_ << 0x20);
  uStack_f0 = 0x8000000000000000;
  iStack_18c = 0;
  uVar40 = param_4;
  piStack_168 = param_2;
LAB_14231a5c5:
  pbStack_150 = (byte *)CONCAT44(unaff_XMM12_Db,unaff_XMM12_Da);
LAB_14231a5e0:
  uStack_e2 = 1;
  uStack_140 = uStack_f0;
  pdb_140dca8b0(&cStack_138,&piStack_168);
  uVar33 = uStack_f0;
  piVar39 = (int *)(ulonglong)bStack_137;
  if (cStack_138 != '2') {
    uStack_e4 = CONCAT11(cStack_135,cStack_136);
    unaff_XMM10_Da = CONCAT13(cStack_131,CONCAT12(cStack_132,CONCAT11(cStack_133,cStack_134)));
    pcVar38 = (char *)CONCAT17(cStack_129,
                               CONCAT16(cStack_12a,
                                        CONCAT15(cStack_12b,
                                                 CONCAT14(cStack_12c,
                                                          CONCAT13(cStack_12d,
                                                                   CONCAT12(cStack_12e,
                                                                            CONCAT11(cStack_12f,
                                                                                     cStack_130)))))
                                       ));
    uVar45 = CONCAT22(uStack_126,uStack_128);
    uVar47 = CONCAT22(uStack_11e,uStack_120);
    uStack_1e8 = (int *)CONCAT62(uStack_10e,uStack_110);
    pcStack_1e0 = (char *)CONCAT62(uStack_106,uStack_108);
    uStack_1d8 = CONCAT62(uStack_fe,uStack_100);
    uStack_1d0 = CONCAT62(uStack_f6,uStack_f8);
    uVar46 = uStack_124;
    uVar48 = uStack_11c;
    cVar35 = cStack_138;
    uVar1 = uStack_114;
LAB_14231ac4a:
    param_2 = (int *)(ulonglong)uVar1;
    piVar42 = (int *)(ulonglong)uStack_e4;
    uStack_178 = uStack_1d8;
    uStack_170 = uStack_1d0;
    piStack_188 = uStack_1e8;
    uStack_180 = (ulonglong)pcStack_1e0;
    unaff_XMM6_Da = unaff_XMM10_Da;
    goto LAB_14231ac6b;
  }
  if ((bStack_137 & 1) == 0) {
LAB_14231ab4e:
    cVar34 = cStack_e1;
    if (!SBORROW8(0,uStack_f0)) {
      if (((ulonglong)uStack_198 & 1) == 0) {
        unaff_XMM6_Da = pdb_140c74ee0();
      }
      if (*param_2 == 1) {
        lVar36 = -1;
        if (*(longlong *)(param_2 + 2) + 1 != 0) {
          lVar36 = *(longlong *)(param_2 + 2) + 1;
        }
        *(longlong *)(param_2 + 2) = lVar36;
      }
      pdb_140dd4ac0(&cStack_138,piVar42);
      if (cStack_138 == '2') {
        if ((cVar34 != '\0') || (cVar34 = pdb_140dce020(piVar42,0x29), cVar34 != '\0')) {
          *(ulonglong *)(param_1 + 8) = uStack_f0;
          *(undefined4 *)(param_1 + 0x10) = unaff_XMM12_Da;
          *(undefined4 *)(param_1 + 0x14) = unaff_XMM12_Db;
          *(undefined4 *)(param_1 + 0x18) = unaff_XMM12_Dc;
          *(undefined4 *)(param_1 + 0x1c) = unaff_XMM12_Dd;
          *(undefined4 *)(param_1 + 0x20) = unaff_XMM6_Da;
          *param_1 = '2';
          return param_1;
        }
        *param_1 = '\x17';
      }
      else {
        *(ulonglong *)(param_1 + 0x40) = CONCAT62(uStack_f6,uStack_f8);
        *(ulonglong *)(param_1 + 0x30) = CONCAT62(uStack_106,uStack_108);
        *(ulonglong *)(param_1 + 0x38) = CONCAT62(uStack_fe,uStack_100);
        *(ulonglong *)(param_1 + 0x20) = CONCAT44(uStack_114,CONCAT22(uStack_116,uStack_118));
        *(ulonglong *)(param_1 + 0x28) = CONCAT62(uStack_10e,uStack_110);
        *(ulonglong *)(param_1 + 0x10) = CONCAT44(uStack_124,CONCAT22(uStack_126,uStack_128));
        *(ulonglong *)(param_1 + 0x18) = CONCAT44(uStack_11c,CONCAT22(uStack_11e,uStack_120));
        *(ulonglong *)param_1 =
             CONCAT17(cStack_131,
                      CONCAT16(cStack_132,
                               CONCAT15(cStack_133,
                                        CONCAT14(cStack_134,
                                                 CONCAT13(cStack_135,
                                                          CONCAT12(cStack_136,
                                                                   CONCAT11(bStack_137,cStack_138)))
                                                ))));
        *(ulonglong *)(param_1 + 8) =
             CONCAT17(cStack_129,
                      CONCAT16(cStack_12a,
                               CONCAT15(cStack_12b,
                                        CONCAT14(cStack_12c,
                                                 CONCAT13(cStack_12d,
                                                          CONCAT12(cStack_12e,
                                                                   CONCAT11(cStack_12f,cStack_130)))
                                                ))));
      }
      if (uStack_f0 == 0) {
        return param_1;
      }
      pub_1406abac0(pbStack_150,uStack_f0,1);
      return param_1;
    }
    pcVar38 = 
    "familyscaledrawlayoutslotsourcescalingtuple variant NodeLayoutConfigAttrib::Size with 2 elements"
    ;
    uVar49 = _DAT_142e69780;
    uVar50 = _UNK_142e69784;
    uVar51 = _UNK_142e69788;
    uVar52 = _UNK_142e6978c;
    cVar41 = '+';
    goto LAB_14231ac95;
  }
  uStack_140 = uStack_f0;
  uStack_e2 = 1;
  pdb_140dcace0(&cStack_138);
  piVar39 = piStack_168;
  auVar43[0] = -(cStack_138 == cVar17);
  auVar43[1] = -(bStack_137 == bVar18);
  auVar43[2] = -(cStack_136 == cVar19);
  auVar43[3] = -(cStack_135 == cVar20);
  auVar43[4] = -(cStack_134 == cVar21);
  auVar43[5] = -(cStack_133 == cVar22);
  auVar43[6] = -(cStack_132 == cVar23);
  auVar43[7] = -(cStack_131 == cVar24);
  auVar43[8] = -(cStack_130 == cVar25);
  auVar43[9] = -(cStack_12f == cVar26);
  auVar43[10] = -(cStack_12e == cVar27);
  auVar43[0xb] = -(cStack_12d == cVar28);
  auVar43[0xc] = -(cStack_12c == cVar29);
  auVar43[0xd] = -(cStack_12b == cVar30);
  auVar43[0xe] = -(cStack_12a == cVar31);
  auVar43[0xf] = -(cStack_129 == cVar32);
  cStack_15e = (ushort)((ushort)(SUB161(auVar43 >> 7,0) & 1) |
                        (ushort)(SUB161(auVar43 >> 0xf,0) & 1) << 1 |
                        (ushort)(SUB161(auVar43 >> 0x17,0) & 1) << 2 |
                        (ushort)(SUB161(auVar43 >> 0x1f,0) & 1) << 3 |
                        (ushort)(SUB161(auVar43 >> 0x27,0) & 1) << 4 |
                        (ushort)(SUB161(auVar43 >> 0x2f,0) & 1) << 5 |
                        (ushort)(SUB161(auVar43 >> 0x37,0) & 1) << 6 |
                        (ushort)(SUB161(auVar43 >> 0x3f,0) & 1) << 7 |
                        (ushort)(SUB161(auVar43 >> 0x47,0) & 1) << 8 |
                        (ushort)(SUB161(auVar43 >> 0x4f,0) & 1) << 9 |
                        (ushort)(SUB161(auVar43 >> 0x57,0) & 1) << 10 |
                        (ushort)(SUB161(auVar43 >> 0x5f,0) & 1) << 0xb |
                        (ushort)(SUB161(auVar43 >> 0x67,0) & 1) << 0xc |
                        (ushort)(SUB161(auVar43 >> 0x6f,0) & 1) << 0xd |
                        (ushort)(SUB161(auVar43 >> 0x77,0) & 1) << 0xe |
                       (ushort)(auVar43[0xf] >> 7) << 0xf) == 0xffff;
  cVar35 = (char)*piStack_168;
  if ((char)uStack_160 != '\x01') {
    if ((char)uStack_160 != '\x03') {
      if (cVar35 != '\0') {
        if (*(longlong *)(piStack_168 + 2) == 0) goto LAB_14231ac35;
        *(longlong *)(piStack_168 + 2) = *(longlong *)(piStack_168 + 2) + -1;
      }
      uStack_140 = uVar33;
      uStack_e2 = 1;
      pdb_140dcce90(&cStack_138,piStack_168 + 4);
      if (cStack_138 == '2') {
        piVar2 = (int *)CONCAT17(cStack_129,
                                 CONCAT16(cStack_12a,
                                          CONCAT15(cStack_12b,
                                                   CONCAT14(cStack_12c,
                                                            CONCAT13(cStack_12d,
                                                                     CONCAT12(cStack_12e,
                                                                              CONCAT11(cStack_12f,
                                                                                       cStack_130)))
                                                           ))));
        lVar36 = CONCAT44(uStack_124,CONCAT22(uStack_126,uStack_128));
        *(int **)(piVar39 + 0x16) = piVar2;
        *(longlong *)(piVar39 + 0x18) = lVar36;
        if (lVar36 == 5) {
          if ((char)piVar2[1] != DAT_1434d9a0a || *piVar2 != _DAT_1434d9a06) goto LAB_14231aa15;
          uVar40 = 1;
        }
        else if ((lVar36 == 6) && ((short)piVar2[1] == _DAT_1434d9a04 && *piVar2 == _DAT_1434d9a00))
        {
          uVar40 = 0;
        }
        else {
LAB_14231aa15:
          uVar40 = 2;
        }
      }
      else {
        uVar40 = (ulonglong)bStack_137;
        uStack_e4 = CONCAT11(cStack_135,cStack_136);
        unaff_XMM10_Da = CONCAT13(cStack_131,CONCAT12(cStack_132,CONCAT11(cStack_133,cStack_134)));
        pcStack_158 = (char *)CONCAT17(cStack_129,
                                       CONCAT16(cStack_12a,
                                                CONCAT15(cStack_12b,
                                                         CONCAT14(cStack_12c,
                                                                  CONCAT13(cStack_12d,
                                                                           CONCAT12(cStack_12e,
                                                                                    CONCAT11(
                                                  cStack_12f,cStack_130)))))));
        unaff_XMM11_Da = CONCAT22(uStack_126,uStack_128);
        unaff_XMM11_Dc = CONCAT22(uStack_11e,uStack_120);
        uStack_144 = uStack_114;
        uStack_1e8 = (int *)CONCAT62(uStack_10e,uStack_110);
        pcStack_1e0 = (char *)CONCAT62(uStack_106,uStack_108);
        uStack_1d8 = CONCAT62(uStack_fe,uStack_100);
        uStack_1d0 = CONCAT62(uStack_f6,uStack_f8);
        unaff_XMM11_Db = uStack_124;
        unaff_XMM11_Dd = uStack_11c;
      }
      goto LAB_14231a72e;
    }
    if (cVar35 == '\0') {
LAB_14231a677:
      piStack_188 = piStack_168;
      uStack_180 = uStack_180 & 0xffffffffffffff00;
      uStack_140 = uVar33;
      uStack_e2 = 1;
      pdb_1429b42d0(&cStack_138,&piStack_188);
      goto LAB_14231a6d8;
    }
    if (*(longlong *)(piStack_168 + 2) != 0) {
      *(longlong *)(piStack_168 + 2) = *(longlong *)(piStack_168 + 2) + -1;
      goto LAB_14231a677;
    }
LAB_14231ac35:
    cVar35 = '0';
LAB_14231ac38:
    piVar39 = (int *)(uVar40 & 0xffffffff);
    pcVar38 = pcStack_158;
    uVar45 = unaff_XMM11_Da;
    uVar46 = unaff_XMM11_Db;
    uVar47 = unaff_XMM11_Dc;
    uVar48 = unaff_XMM11_Dd;
    uVar1 = uStack_144;
    goto LAB_14231ac4a;
  }
  if (cVar35 != '\0') {
    if (*(longlong *)(piStack_168 + 2) == 0) goto LAB_14231ac35;
    *(longlong *)(piStack_168 + 2) = *(longlong *)(piStack_168 + 2) + -1;
  }
  piStack_188 = piStack_168;
  uStack_180 = CONCAT71(uStack_180._1_7_,1);
  uStack_140 = uVar33;
  uStack_e2 = 1;
  pdb_1429b42d0(&cStack_138,&piStack_188);
LAB_14231a6d8:
  if (cStack_138 != '2') {
    uStack_e4 = CONCAT11(cStack_135,cStack_136);
    unaff_XMM10_Da = CONCAT13(cStack_131,CONCAT12(cStack_132,CONCAT11(cStack_133,cStack_134)));
    pcStack_158 = (char *)CONCAT17(cStack_129,
                                   CONCAT16(cStack_12a,
                                            CONCAT15(cStack_12b,
                                                     CONCAT14(cStack_12c,
                                                              CONCAT13(cStack_12d,
                                                                       CONCAT12(cStack_12e,
                                                                                CONCAT11(cStack_12f,
                                                                                         cStack_130)
                                                                               ))))));
    unaff_XMM11_Da = CONCAT22(uStack_126,uStack_128);
    unaff_XMM11_Dc = CONCAT22(uStack_11e,uStack_120);
    uStack_144 = uStack_114;
    uStack_1e8 = (int *)CONCAT62(uStack_10e,uStack_110);
    pcStack_1e0 = (char *)CONCAT62(uStack_106,uStack_108);
    uStack_1d8 = CONCAT62(uStack_fe,uStack_100);
    uStack_1d0 = CONCAT62(uStack_f6,uStack_f8);
    unaff_XMM11_Db = uStack_124;
    unaff_XMM11_Dd = uStack_11c;
  }
  uVar40 = (ulonglong)bStack_137;
LAB_14231a72e:
  piVar39 = piStack_168;
  if ((char)*piStack_168 != '\0') {
    lVar36 = *(longlong *)(piStack_168 + 2) + 1;
    if (lVar36 == 0) {
      lVar36 = -1;
    }
    *(longlong *)(piStack_168 + 2) = lVar36;
  }
  cVar35 = cStack_138;
  if (cStack_138 != '2') goto LAB_14231ac38;
  if ((char)uVar40 == '\x02') goto code_r0x00014231a761;
  if (uVar40 == 0) goto LAB_14231aa25;
  if ((int)uVar40 != 1) goto LAB_14231ab4e;
  if (iStack_18c != 0) {
    cVar35 = ',';
LAB_14231ae85:
    pcVar38 = 
    "scaledrawlayoutslotsourcescalingtuple variant NodeLayoutConfigAttrib::Size with 2 elements";
    goto LAB_14231ac6b;
  }
  uStack_198 = piStack_168 + 4;
  uStack_140 = uStack_f0;
  uStack_e2 = 1;
  pdb_140dd4ac0(&cStack_138);
  uVar33 = uStack_f0;
  if (cStack_138 == '2') {
    uStack_140 = uStack_f0;
    uStack_e2 = 1;
    cVar35 = pdb_140dce020(piVar39 + 4,0x3a);
    if (cVar35 == '\0') {
      cVar35 = '\x12';
      goto LAB_14231ae85;
    }
    uStack_140 = uVar33;
    uStack_e2 = 1;
    pdb_140dd4ac0(&cStack_138,piVar39 + 4);
    uVar33 = uStack_f0;
    if (cStack_138 != '2') goto LAB_14231abf3;
    if (cStack_15e != '\0') {
      uStack_140 = uStack_f0;
      uStack_e2 = 1;
      pcVar38 = &cStack_138;
      pdb_140dca950();
      auVar44[0] = -(cStack_138 == cVar34);
      auVar44[1] = -(bStack_137 == bVar3);
      auVar44[2] = -(cStack_136 == cVar41);
      auVar44[3] = -(cStack_135 == cVar4);
      auVar44[4] = -(cStack_134 == cVar5);
      auVar44[5] = -(cStack_133 == cVar6);
      auVar44[6] = -(cStack_132 == cVar7);
      auVar44[7] = -(cStack_131 == cVar8);
      auVar44[8] = -(cStack_130 == cVar9);
      auVar44[9] = -(cStack_12f == cVar10);
      auVar44[10] = -(cStack_12e == cVar11);
      auVar44[0xb] = -(cStack_12d == cVar12);
      auVar44[0xc] = -(cStack_12c == cVar13);
      auVar44[0xd] = -(cStack_12b == cVar14);
      auVar44[0xe] = -(cStack_12a == cVar15);
      auVar44[0xf] = -(cStack_129 == cVar16);
      if ((ushort)((ushort)(SUB161(auVar44 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar44 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar44 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar44 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar44 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar44 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar44 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar44 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar44 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar44 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar44 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar44 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar44 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar44 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar44 >> 0x77,0) & 1) << 0xe |
                  (ushort)(auVar44[0xf] >> 7) << 0xf) == 0xffff) goto LAB_14231a94f;
      cVar35 = '\x19';
      if (*piVar39 == 1) {
        if (*(longlong *)(piVar39 + 2) == 0) {
          uVar45 = _DAT_14300b150;
          uVar46 = _UNK_14300b154;
          uVar47 = _UNK_14300b158;
          uVar48 = _UNK_14300b15c;
          cVar35 = '0';
        }
        else {
          *(longlong *)(piVar39 + 2) = *(longlong *)(piVar39 + 2) + -1;
        }
      }
      goto LAB_14231ac6b;
    }
LAB_14231a94f:
    if ((char)*piVar39 != '\0') {
      if (*(longlong *)(piVar39 + 2) == 0) {
        cVar35 = '0';
        goto LAB_14231ae85;
      }
      *(longlong *)(piVar39 + 2) = *(longlong *)(piVar39 + 2) + -1;
    }
    uStack_140 = uVar33;
    uStack_e2 = 1;
    pdb_14231f6b0(&cStack_138,piVar39 + 4);
    if (cStack_138 != '2') goto LAB_14231abf3;
    if (*piVar39 == 1) {
      lVar36 = *(longlong *)(piVar39 + 2) + 1;
      if (lVar36 == 0) {
        lVar36 = -1;
      }
      *(longlong *)(piVar39 + 2) = lVar36;
    }
    unaff_XMM6_Da = CONCAT13(cStack_131,CONCAT12(cStack_132,CONCAT11(cStack_133,cStack_134)));
    uStack_140 = uStack_f0;
    uStack_e2 = 1;
    uVar37 = pdb_140dd3ab0(&cStack_138,uStack_198);
    if (cStack_138 == '2') {
      uStack_160 = CONCAT11(bStack_137,(char)uStack_160);
      uStack_198 = (int *)CONCAT44(uStack_198._4_4_,(int)CONCAT71((int7)((ulonglong)uVar37 >> 8),1))
      ;
      iStack_18c = 1;
      goto LAB_14231a5e0;
    }
  }
  goto LAB_14231abf3;
code_r0x00014231a761:
  uStack_140 = uStack_f0;
  uStack_e2 = 1;
  pdb_142310000(&cStack_138,&piStack_168);
  if (cStack_138 == '2') goto LAB_14231a5e0;
LAB_14231abf3:
  piVar39 = (int *)(ulonglong)bStack_137;
  piVar42 = (int *)(ulonglong)CONCAT11(cStack_135,cStack_136);
  pcVar38 = (char *)CONCAT17(cStack_129,
                             CONCAT16(cStack_12a,
                                      CONCAT15(cStack_12b,
                                               CONCAT14(cStack_12c,
                                                        CONCAT13(cStack_12d,
                                                                 CONCAT12(cStack_12e,
                                                                          CONCAT11(cStack_12f,
                                                                                   cStack_130)))))))
  ;
  uVar45 = CONCAT22(uStack_126,uStack_128);
  uVar47 = CONCAT22(uStack_11e,uStack_120);
  param_2 = (int *)(ulonglong)uStack_114;
  piStack_188 = (int *)CONCAT62(uStack_10e,uStack_110);
  uStack_180 = CONCAT62(uStack_106,uStack_108);
  uStack_178 = CONCAT62(uStack_fe,uStack_100);
  uStack_170 = CONCAT62(uStack_f6,uStack_f8);
  uVar46 = uStack_124;
  uVar48 = uStack_11c;
  cVar35 = cStack_138;
  unaff_XMM6_Da = CONCAT13(cStack_131,CONCAT12(cStack_132,CONCAT11(cStack_133,cStack_134)));
LAB_14231ac6b:
  uVar49 = uVar45;
  uVar50 = uVar46;
  uVar51 = uVar47;
  uVar52 = uVar48;
  cVar41 = cVar35;
  cVar34 = cStack_e1;
  if ((SBORROW8(0,uStack_f0)) || (uStack_f0 == 0)) goto LAB_14231ac95;
  goto LAB_14231ac86;
LAB_14231aa25:
  if (!SBORROW8(0,uStack_f0)) {
    cVar35 = ',';
    cVar41 = ',';
    pcVar38 = 
    "familyscaledrawlayoutslotsourcescalingtuple variant NodeLayoutConfigAttrib::Size with 2 elements"
    ;
    cVar34 = cStack_e1;
    if (uStack_f0 != 0) {
LAB_14231ac86:
      cVar34 = cStack_e1;
      pub_1406abac0(pbStack_150,uStack_f0,1);
      cVar41 = cVar35;
    }
    goto LAB_14231ac95;
  }
  uStack_140 = 0x8000000000000000;
  uStack_e2 = 1;
  pdb_1402be570(&cStack_138,&piStack_168);
  if (cStack_138 != '2') {
    piVar42 = (int *)(ulonglong)CONCAT11(cStack_135,cStack_136);
    unaff_XMM6_Da = CONCAT13(cStack_131,CONCAT12(cStack_132,CONCAT11(cStack_133,cStack_134)));
    pcVar38 = (char *)CONCAT17(cStack_129,
                               CONCAT16(cStack_12a,
                                        CONCAT15(cStack_12b,
                                                 CONCAT14(cStack_12c,
                                                          CONCAT13(cStack_12d,
                                                                   CONCAT12(cStack_12e,
                                                                            CONCAT11(cStack_12f,
                                                                                     cStack_130)))))
                                       ));
    uVar49 = CONCAT22(uStack_126,uStack_128);
    uVar51 = CONCAT22(uStack_11e,uStack_120);
    param_2 = (int *)(ulonglong)uStack_114;
    piStack_188 = (int *)CONCAT62(uStack_10e,uStack_110);
    uStack_180 = CONCAT62(uStack_106,uStack_108);
    uStack_178 = CONCAT62(uStack_fe,uStack_100);
    uStack_170 = CONCAT62(uStack_f6,uStack_f8);
    piVar39 = (int *)(ulonglong)bStack_137;
    uVar50 = uStack_124;
    uVar52 = uStack_11c;
    cVar41 = cStack_138;
    cVar34 = cStack_e1;
LAB_14231ac95:
    uStack_1e8 = (int *)CONCAT44(unaff_XMM6_Da,
                                 CONCAT22((short)piVar42,CONCAT11((char)piVar39,cVar41)));
    uStack_1d8 = CONCAT44(uVar50,uVar49);
    uStack_1d0 = CONCAT44(uVar52,uVar51);
    uStack_1c4 = SUB84(param_2,0);
    piStack_1c0 = piStack_188;
    uStack_1b8 = uStack_180;
    if (cVar34 != '\0') {
      param_3 = 0;
    }
    uStack_1b0 = (undefined4)uStack_178;
    uStack_1ac = uStack_178._4_4_;
    uStack_1a8 = (undefined4)uStack_170;
    uStack_1a4 = uStack_170._4_4_;
    if (param_4 == 0) {
      param_3 = 0;
    }
    pcStack_1e0 = pcVar38;
    pdb_140dca990(&cStack_138,&uStack_1e8,param_3);
    *(uint *)param_1 = CONCAT13(cStack_135,CONCAT12(cStack_136,CONCAT11(bStack_137,cStack_138)));
    *(uint *)(param_1 + 4) =
         CONCAT13(cStack_131,CONCAT12(cStack_132,CONCAT11(cStack_133,cStack_134)));
    *(ulonglong *)(param_1 + 8) =
         CONCAT17(cStack_129,
                  CONCAT16(cStack_12a,
                           CONCAT15(cStack_12b,
                                    CONCAT14(cStack_12c,
                                             CONCAT13(cStack_12d,
                                                      CONCAT12(cStack_12e,
                                                               CONCAT11(cStack_12f,cStack_130)))))))
    ;
    *(ulonglong *)(param_1 + 0x10) = CONCAT44(uStack_124,CONCAT22(uStack_126,uStack_128));
    *(ulonglong *)(param_1 + 0x18) = CONCAT44(uStack_11c,CONCAT22(uStack_11e,uStack_120));
    *(uint *)(param_1 + 0x20) = CONCAT22(uStack_116,uStack_118);
    *(uint *)(param_1 + 0x24) = uStack_114;
    *(ulonglong *)(param_1 + 0x28) = CONCAT62(uStack_10e,uStack_110);
    *(ulonglong *)(param_1 + 0x30) = CONCAT62(uStack_106,uStack_108);
    *(ulonglong *)(param_1 + 0x38) = CONCAT62(uStack_fe,uStack_100);
    *(ulonglong *)(param_1 + 0x40) = CONCAT62(uStack_f6,uStack_f8);
    return param_1;
  }
  uStack_f0 = CONCAT17(cStack_129,
                       CONCAT16(cStack_12a,
                                CONCAT15(cStack_12b,
                                         CONCAT14(cStack_12c,
                                                  CONCAT13(cStack_12d,
                                                           CONCAT12(cStack_12e,
                                                                    CONCAT11(cStack_12f,cStack_130))
                                                          )))));
  unaff_XMM12_Da = CONCAT22(uStack_126,uStack_128);
  unaff_XMM12_Dc = CONCAT22(uStack_11e,uStack_120);
  unaff_XMM12_Db = uStack_124;
  unaff_XMM12_Dd = uStack_11c;
  goto LAB_14231a5c5;
}

