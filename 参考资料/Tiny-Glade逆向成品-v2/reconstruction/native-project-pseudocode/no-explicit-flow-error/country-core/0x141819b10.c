// VA 0x141819b10, PDB extent 5096 bytes
// ron::de::impl$2::deserialize_struct<country_core::startup::load_mesh_atlases::_::impl$0::deserialize::__Visitor>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   ron::de::impl$2::deserialize_struct<country_core::startup::load_mesh_atlases::_::impl$0::deserialize::__Visitor>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
   Extent: 5096 */

char * pdb_141819b10(char *param_1,int *param_2,undefined8 param_3,longlong param_4)

{
  byte bVar1;
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
  undefined4 uVar16;
  undefined4 uVar17;
  char cVar18;
  byte bVar19;
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
  char cVar33;
  undefined4 uVar34;
  char cVar35;
  byte bVar36;
  char cVar37;
  char cVar38;
  char cVar39;
  char cVar40;
  char cVar41;
  char cVar42;
  char cVar43;
  char cVar44;
  char cVar45;
  char cVar46;
  char cVar47;
  char cVar48;
  char cVar49;
  char cVar50;
  int *piVar51;
  int *piVar52;
  char cVar53;
  char cVar54;
  longlong lVar55;
  byte bVar56;
  byte *pbVar57;
  undefined8 uVar58;
  byte *pbVar59;
  byte unaff_R14B;
  int *piVar60;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined4 unaff_XMM6_Da;
  undefined4 uVar64;
  undefined4 unaff_XMM6_Db;
  undefined4 unaff_XMM6_Dc;
  undefined4 uVar65;
  undefined4 unaff_XMM6_Dd;
  undefined4 unaff_XMM7_Da;
  undefined4 unaff_XMM7_Db;
  undefined4 unaff_XMM7_Dc;
  undefined4 uVar66;
  undefined4 unaff_XMM7_Dd;
  undefined4 unaff_XMM8_Da;
  undefined4 unaff_XMM8_Db;
  undefined4 unaff_XMM8_Dc;
  undefined4 unaff_XMM8_Dd;
  undefined4 unaff_XMM9_Da;
  undefined4 unaff_XMM9_Db;
  undefined4 unaff_XMM9_Dc;
  undefined4 unaff_XMM9_Dd;
  undefined4 uVar67;
  undefined4 uVar68;
  int *piStack_280;
  undefined8 uStack_278;
  int *piStack_270;
  int *piStack_268;
  undefined8 uStack_260;
  int *piStack_258;
  longlong lStack_250;
  undefined8 uStack_248;
  int *piStack_240;
  int *piStack_238;
  int *piStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  int *piStack_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  int *piStack_1b8;
  int *piStack_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  int *piStack_198;
  byte *pbStack_190;
  int *piStack_188;
  undefined2 uStack_180;
  char cStack_17e;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined4 uStack_150;
  undefined2 uStack_14c;
  char cStack_148;
  byte bStack_147;
  char cStack_146;
  char cStack_145;
  char cStack_144;
  char cStack_143;
  char cStack_142;
  char cStack_141;
  char cStack_140;
  char cStack_13f;
  char cStack_13e;
  char cStack_13d;
  char cStack_13c;
  char cStack_13b;
  char cStack_13a;
  char cStack_139;
  undefined2 uStack_138;
  undefined2 uStack_136;
  undefined4 uStack_134;
  undefined2 uStack_130;
  undefined2 uStack_12e;
  undefined4 uStack_12c;
  undefined2 uStack_128;
  undefined2 uStack_126;
  undefined4 uStack_124;
  undefined2 uStack_120;
  undefined6 uStack_11e;
  undefined2 uStack_118;
  undefined6 uStack_116;
  undefined2 uStack_110;
  undefined6 uStack_10e;
  undefined2 uStack_108;
  undefined6 uStack_106;
  byte bStack_f9;
  undefined4 uStack_f8;
  undefined2 uStack_f4;
  undefined8 uStack_f0;
  
  uStack_f0 = 0xfffffffffffffffe;
  if (((char)param_2[0x1a] == '\0') &&
     (pdb_140dd1950(&cStack_148,param_2 + 4,param_3,param_4), cStack_148 != '2')) {
    *(ulonglong *)(param_1 + 0x40) = CONCAT62(uStack_106,uStack_108);
    *(ulonglong *)(param_1 + 0x32) = CONCAT26(uStack_110,uStack_116);
    *(ulonglong *)(param_1 + 0x3a) = CONCAT26(uStack_108,uStack_10e);
    *(ulonglong *)(param_1 + 0x22) = CONCAT26(uStack_120,CONCAT42(uStack_124,uStack_126));
    *(ulonglong *)(param_1 + 0x2a) = CONCAT26(uStack_118,uStack_11e);
    *(ulonglong *)(param_1 + 0x12) = CONCAT26(uStack_130,CONCAT42(uStack_134,uStack_136));
    *(ulonglong *)(param_1 + 0x1a) = CONCAT26(uStack_128,CONCAT42(uStack_12c,uStack_12e));
    *(ulonglong *)(param_1 + 2) =
         CONCAT17(cStack_13f,
                  CONCAT16(cStack_140,
                           CONCAT15(cStack_141,
                                    CONCAT14(cStack_142,
                                             CONCAT13(cStack_143,
                                                      CONCAT12(cStack_144,
                                                               CONCAT11(cStack_145,cStack_146)))))))
    ;
    *(ulonglong *)(param_1 + 10) =
         CONCAT26(uStack_138,
                  CONCAT15(cStack_139,
                           CONCAT14(cStack_13a,
                                    CONCAT13(cStack_13b,
                                             CONCAT12(cStack_13c,CONCAT11(cStack_13d,cStack_13e)))))
                 );
    *param_1 = cStack_148;
    param_1[1] = bStack_147;
  }
  else {
    piStack_240 = param_2 + 4;
    pdb_140dd4ac0(&cStack_148);
    if (cStack_148 == '2') {
      bStack_f9 = 1;
      if ((char)param_2[0x1a] == '\0') {
        cVar53 = pdb_140dce020(param_2 + 4,0x28);
        if (cVar53 == '\0') {
          if (param_4 != 0) {
            *param_1 = '\x16';
            *(undefined8 *)(param_1 + 8) = param_3;
            *(longlong *)(param_1 + 0x10) = param_4;
            return param_1;
          }
          *param_1 = '\x15';
          return param_1;
        }
        bStack_f9 = *(byte *)(param_2 + 0x1a);
      }
      *(char *)(param_2 + 0x1a) = '\0';
      if ((char)*param_2 != '\0') {
        if (*(longlong *)(param_2 + 2) == 0) {
          *param_1 = '0';
          return param_1;
        }
        *(longlong *)(param_2 + 2) = *(longlong *)(param_2 + 2) + -1;
      }
      cVar50 = UNK_14333ec2f;
      cVar49 = UNK_14333ec2e;
      cVar48 = UNK_14333ec2d;
      cVar47 = UNK_14333ec2c;
      cVar46 = UNK_14333ec2b;
      cVar45 = UNK_14333ec2a;
      cVar44 = UNK_14333ec29;
      cVar43 = UNK_14333ec28;
      cVar42 = UNK_14333ec27;
      cVar41 = UNK_14333ec26;
      cVar40 = UNK_14333ec25;
      cVar39 = UNK_14333ec24;
      cVar38 = UNK_14333ec23;
      cVar37 = UNK_14333ec22;
      bVar36 = UNK_14333ec21;
      cVar35 = DAT_14333ec20;
      uVar34 = _UNK_14333ec1c;
      uVar66 = _UNK_14333ec18;
      cVar33 = UNK_14333ec0f;
      cVar32 = UNK_14333ec0e;
      cVar31 = UNK_14333ec0d;
      cVar30 = UNK_14333ec0c;
      cVar29 = UNK_14333ec0b;
      cVar28 = UNK_14333ec0a;
      cVar27 = UNK_14333ec09;
      cVar26 = UNK_14333ec08;
      cVar25 = UNK_14333ec07;
      cVar24 = UNK_14333ec06;
      cVar23 = UNK_14333ec05;
      cVar22 = UNK_14333ec04;
      cVar21 = UNK_14333ec03;
      cVar20 = UNK_14333ec02;
      bVar19 = UNK_14333ec01;
      cVar18 = DAT_14333ec00;
      uVar17 = _UNK_14333ebfc;
      uVar16 = _UNK_14333ebf8;
      cVar15 = UNK_14333ebef;
      cVar14 = UNK_14333ebee;
      cVar13 = UNK_14333ebed;
      cVar12 = UNK_14333ebec;
      cVar11 = UNK_14333ebeb;
      cVar10 = UNK_14333ebea;
      cVar9 = UNK_14333ebe9;
      cVar8 = UNK_14333ebe8;
      cVar7 = UNK_14333ebe7;
      cVar6 = UNK_14333ebe6;
      cVar5 = UNK_14333ebe5;
      cVar4 = UNK_14333ebe4;
      cVar3 = UNK_14333ebe3;
      cVar2 = UNK_14333ebe2;
      bVar1 = UNK_14333ebe1;
      cVar53 = DAT_14333ebe0;
      uStack_180 = 0x103;
      cStack_17e = '\0';
      piStack_1a8 = (int *)0x8000000000000000;
      piStack_1c8 = (int *)0x8000000000000000;
      lStack_250 = param_4;
      uStack_248 = param_3;
      piStack_188 = param_2;
LAB_141819ca0:
      do {
        pdb_140dca8b0(&cStack_148,&piStack_188);
        bVar56 = bStack_147;
        if (cStack_148 != '2') {
          uStack_f4 = CONCAT11(cStack_141,cStack_142);
          uStack_f8 = CONCAT13(cStack_143,CONCAT12(cStack_144,CONCAT11(cStack_145,cStack_146)));
          unaff_XMM7_Da = CONCAT13(cStack_13d,CONCAT12(cStack_13e,CONCAT11(cStack_13f,cStack_140)));
          unaff_XMM7_Db = CONCAT13(cStack_139,CONCAT12(cStack_13a,CONCAT11(cStack_13b,cStack_13c)));
          uStack_160 = CONCAT62(uStack_11e,uStack_120);
          uStack_158 = CONCAT62(uStack_116,uStack_118);
          uStack_178 = CONCAT62(uStack_10e,uStack_110);
          uStack_170 = CONCAT62(uStack_106,uStack_108);
          unaff_XMM7_Dc = CONCAT22(uStack_136,uStack_138);
          unaff_XMM7_Dd = uStack_134;
          cVar54 = cStack_148;
          unaff_R14B = bStack_147;
          unaff_XMM6_Da = CONCAT22(uStack_12e,uStack_130);
          unaff_XMM6_Db = uStack_12c;
          unaff_XMM6_Dc = CONCAT22(uStack_126,uStack_128);
          unaff_XMM6_Dd = uStack_124;
LAB_14181a595:
          bVar56 = unaff_R14B;
          uVar66 = unaff_XMM7_Dc;
          uStack_14c = uStack_f4;
          uStack_150 = uStack_f8;
          uStack_1d8 = uStack_178;
          uStack_1d0 = uStack_170;
          goto LAB_14181a5bc;
        }
        if ((bStack_147 & 1) == 0) goto LAB_14181a417;
        pdb_140dcace0(&cStack_148);
        piVar51 = piStack_188;
        auVar61[0] = -(cStack_148 == cVar53);
        auVar61[1] = -(bStack_147 == bVar1);
        auVar61[2] = -(cStack_146 == cVar2);
        auVar61[3] = -(cStack_145 == cVar3);
        auVar61[4] = -(cStack_144 == cVar4);
        auVar61[5] = -(cStack_143 == cVar5);
        auVar61[6] = -(cStack_142 == cVar6);
        auVar61[7] = -(cStack_141 == cVar7);
        auVar61[8] = -(cStack_140 == cVar8);
        auVar61[9] = -(cStack_13f == cVar9);
        auVar61[10] = -(cStack_13e == cVar10);
        auVar61[0xb] = -(cStack_13d == cVar11);
        auVar61[0xc] = -(cStack_13c == cVar12);
        auVar61[0xd] = -(cStack_13b == cVar13);
        auVar61[0xe] = -(cStack_13a == cVar14);
        auVar61[0xf] = -(cStack_139 == cVar15);
        cStack_17e = (ushort)((ushort)(SUB161(auVar61 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar61 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar61 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar61 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar61 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar61 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar61 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar61 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar61 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar61 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar61 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar61 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar61 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar61 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar61 >> 0x77,0) & 1) << 0xe |
                             (ushort)(auVar61[0xf] >> 7) << 0xf) == 0xffff;
        cVar54 = (char)*piStack_188;
        uVar64 = unaff_XMM6_Da;
        uVar65 = unaff_XMM6_Dc;
        if ((char)uStack_180 == '\x01') {
          if (cVar54 != '\0') {
            if (*(longlong *)(piStack_188 + 2) == 0) goto LAB_14181a58f;
            *(longlong *)(piStack_188 + 2) = *(longlong *)(piStack_188 + 2) + -1;
          }
          uStack_228 = piStack_188;
          uStack_220 = CONCAT71(uStack_220._1_7_,1);
          pdb_14090dbb0(&cStack_148,&uStack_228);
LAB_141819d7c:
          unaff_R14B = bStack_147;
          if (cStack_148 != '2') {
            uStack_f4 = CONCAT11(cStack_141,cStack_142);
            uStack_f8 = CONCAT13(cStack_143,CONCAT12(cStack_144,CONCAT11(cStack_145,cStack_146)));
            unaff_XMM7_Da =
                 CONCAT13(cStack_13d,CONCAT12(cStack_13e,CONCAT11(cStack_13f,cStack_140)));
            unaff_XMM7_Db =
                 CONCAT13(cStack_139,CONCAT12(cStack_13a,CONCAT11(cStack_13b,cStack_13c)));
            unaff_XMM7_Dc = CONCAT22(uStack_136,uStack_138);
            uVar64 = CONCAT22(uStack_12e,uStack_130);
            uVar65 = CONCAT22(uStack_126,uStack_128);
            uStack_160 = CONCAT62(uStack_11e,uStack_120);
            uStack_158 = CONCAT62(uStack_116,uStack_118);
            uStack_178 = CONCAT62(uStack_10e,uStack_110);
            uStack_170 = CONCAT62(uStack_106,uStack_108);
            unaff_XMM7_Dd = uStack_134;
            unaff_XMM6_Db = uStack_12c;
            unaff_XMM6_Dd = uStack_124;
          }
        }
        else {
          if ((char)uStack_180 == '\x03') {
            if (cVar54 != '\0') {
              if (*(longlong *)(piStack_188 + 2) == 0) goto LAB_14181a58f;
              *(longlong *)(piStack_188 + 2) = *(longlong *)(piStack_188 + 2) + -1;
            }
            uStack_228 = piStack_188;
            uStack_220 = (ulonglong)uStack_220._1_7_ << 8;
            pdb_14090dbb0(&cStack_148,&uStack_228);
            goto LAB_141819d7c;
          }
          if (cVar54 != '\0') {
            if (*(longlong *)(piStack_188 + 2) == 0) {
LAB_14181a58f:
              cVar54 = '0';
              goto LAB_14181a595;
            }
            *(longlong *)(piStack_188 + 2) = *(longlong *)(piStack_188 + 2) + -1;
          }
          pdb_140dcce90(&cStack_148,piStack_188 + 4);
          if (cStack_148 == '2') {
            piVar60 = (int *)CONCAT17(cStack_139,
                                      CONCAT16(cStack_13a,
                                               CONCAT15(cStack_13b,
                                                        CONCAT14(cStack_13c,
                                                                 CONCAT13(cStack_13d,
                                                                          CONCAT12(cStack_13e,
                                                                                   CONCAT11(
                                                  cStack_13f,cStack_140)))))));
            lVar55 = CONCAT44(uStack_134,CONCAT22(uStack_136,uStack_138));
            *(int **)(piVar51 + 0x16) = piVar60;
            *(longlong *)(piVar51 + 0x18) = lVar55;
            if (lVar55 == 3) {
              if (*(char *)((longlong)piVar60 + 2) != DAT_143340d9f ||
                  (short)*piVar60 != _DAT_143340d9d) goto LAB_14181a0f6;
              unaff_R14B = 1;
            }
            else if ((lVar55 == 6) &&
                    ((short)piVar60[1] == _DAT_143340d9b && *piVar60 == _DAT_143340d97)) {
              unaff_R14B = 0;
            }
            else {
LAB_14181a0f6:
              unaff_R14B = 2;
            }
          }
          else {
            uStack_f8 = CONCAT13(cStack_143,CONCAT12(cStack_144,CONCAT11(cStack_145,cStack_146)));
            uStack_f4 = CONCAT11(cStack_141,cStack_142);
            uStack_160 = CONCAT62(uStack_11e,uStack_120);
            uStack_158 = CONCAT62(uStack_116,uStack_118);
            uStack_178 = CONCAT62(uStack_10e,uStack_110);
            uStack_170 = CONCAT62(uStack_106,uStack_108);
            unaff_XMM7_Da =
                 CONCAT13(cStack_13d,CONCAT12(cStack_13e,CONCAT11(cStack_13f,cStack_140)));
            unaff_XMM7_Db =
                 CONCAT13(cStack_139,CONCAT12(cStack_13a,CONCAT11(cStack_13b,cStack_13c)));
            unaff_XMM7_Dc = CONCAT22(uStack_136,uStack_138);
            unaff_XMM7_Dd = uStack_134;
            uVar64 = CONCAT22(uStack_12e,uStack_130);
            unaff_XMM6_Db = uStack_12c;
            uVar65 = CONCAT22(uStack_126,uStack_128);
            unaff_XMM6_Dd = uStack_124;
            unaff_R14B = bStack_147;
          }
        }
        piVar51 = piStack_188;
        if ((char)*piStack_188 != '\0') {
          lVar55 = *(longlong *)(piStack_188 + 2) + 1;
          if (lVar55 == 0) {
            lVar55 = -1;
          }
          *(longlong *)(piStack_188 + 2) = lVar55;
        }
        cVar54 = cStack_148;
        unaff_XMM6_Da = uVar64;
        unaff_XMM6_Dc = uVar65;
        if (cStack_148 != '2') goto LAB_14181a595;
        if (unaff_R14B != 2) {
          if (unaff_R14B == 0) {
            if (!SBORROW8(0,(longlong)piStack_1a8)) {
              unaff_XMM6_Da = 0;
              unaff_XMM6_Dc = 0;
              unaff_XMM7_Da = 0x4333ee96;
              unaff_XMM7_Db = 1;
              unaff_XMM7_Dd = uVar34;
              cVar54 = ',';
              unaff_XMM6_Db = 0x80000000;
              unaff_XMM6_Dd = 0;
              goto LAB_14181a5bc;
            }
            piVar60 = piStack_188 + 4;
            pdb_140dd4ac0(&cStack_148,piVar60);
            if (cStack_148 == '2') {
              cVar54 = pdb_140dce020(piVar60,0x3a);
              unaff_XMM6_Da = SUB84(piStack_238,0);
              uVar67 = (undefined4)((ulonglong)piStack_238 >> 0x20);
              unaff_XMM6_Dc = 0;
              uVar68 = 0;
              if (cVar54 == '\0') {
                cVar54 = '\x12';
                unaff_XMM7_Da = unaff_XMM8_Da;
                unaff_XMM7_Db = unaff_XMM8_Db;
                uVar66 = unaff_XMM8_Dc;
                goto LAB_14181a97c;
              }
              pdb_140dd4ac0(&cStack_148,piVar60);
              if (cStack_148 != '2') goto LAB_14181a82b;
              if (cStack_17e == '\0') {
LAB_14181a197:
                if ((char)*piVar51 != '\0') {
                  if (*(longlong *)(piVar51 + 2) == 0) goto LAB_14181a979;
                  *(longlong *)(piVar51 + 2) = *(longlong *)(piVar51 + 2) + -1;
                }
                pdb_141810120(&cStack_148,piVar51);
                if (cStack_148 != '2') goto LAB_14181a82b;
                uStack_228 = (int *)CONCAT17(cStack_139,
                                             CONCAT16(cStack_13a,
                                                      CONCAT15(cStack_13b,
                                                               CONCAT14(cStack_13c,
                                                                        CONCAT13(cStack_13d,
                                                                                 CONCAT12(cStack_13e
                                                                                          ,CONCAT11(
                                                  cStack_13f,cStack_140)))))));
                uStack_220 = CONCAT44(uStack_134,CONCAT22(uStack_136,uStack_138));
                uStack_218 = (int *)CONCAT44(uStack_12c,CONCAT22(uStack_12e,uStack_130));
                if (*piVar51 == 1) {
                  lVar55 = *(longlong *)(piVar51 + 2) + 1;
                  if (lVar55 == 0) {
                    lVar55 = -1;
                  }
                  *(longlong *)(piVar51 + 2) = lVar55;
                }
                pdb_140dd3ab0(&cStack_148,piVar60);
                uVar68 = uStack_124;
                uVar67 = uStack_12c;
                unaff_XMM8_Dd = uStack_134;
                cVar54 = cStack_148;
                piVar52 = piStack_1a8;
                piVar51 = uStack_228;
                piVar60 = (int *)(ulonglong)bStack_147;
                if (cStack_148 == '2') {
                  uStack_180 = CONCAT11(bStack_147,(char)uStack_180);
                  unaff_XMM8_Da = (undefined4)uStack_228;
                  unaff_XMM8_Db = uStack_228._4_4_;
                  unaff_XMM8_Dc = (undefined4)uStack_220;
                  uVar67 = (undefined4)uStack_220;
                  unaff_XMM8_Dd = uStack_220._4_4_;
                  uVar68 = uStack_220._4_4_;
                  piStack_238 = uStack_218;
                  if (!SBORROW8(0,(longlong)piStack_1a8)) {
                    pbStack_190 = (byte *)CONCAT44(uStack_19c,uStack_1a0);
                    if (piStack_198 != (int *)0x0) {
                      pbVar57 = pbStack_190 + 8;
                      piVar60 = piStack_198;
                      do {
                        if (*(ulonglong *)(pbVar57 + -8) != 0) {
                          pub_1406abac0(*(byte **)pbVar57,*(ulonglong *)(pbVar57 + -8),1);
                        }
                        pbVar57 = pbVar57 + 0x18;
                        piVar60 = (int *)((longlong)piVar60 + -1);
                      } while (piVar60 != (int *)0x0);
                    }
                    if (piVar52 != (int *)0x0) {
                      pub_1406abac0(pbStack_190,(longlong)piVar52 * 0x18,8);
                    }
                  }
                  piStack_1a8 = piVar51;
                  piStack_198 = piStack_238;
                  unaff_XMM6_Da = uVar64;
                  unaff_XMM6_Dc = uVar65;
                  uStack_1a0 = uVar67;
                  uStack_19c = uVar68;
                  goto LAB_141819ca0;
                }
                uStack_f4 = CONCAT11(cStack_141,cStack_142);
                uStack_f8 = CONCAT13(cStack_143,CONCAT12(cStack_144,CONCAT11(cStack_145,cStack_146))
                                    );
                unaff_XMM7_Da =
                     CONCAT13(cStack_13d,CONCAT12(cStack_13e,CONCAT11(cStack_13f,cStack_140)));
                unaff_XMM7_Db =
                     CONCAT13(cStack_139,CONCAT12(cStack_13a,CONCAT11(cStack_13b,cStack_13c)));
                uVar66 = CONCAT22(uStack_136,uStack_138);
                unaff_XMM6_Da = CONCAT22(uStack_12e,uStack_130);
                unaff_XMM6_Dc = CONCAT22(uStack_126,uStack_128);
                uStack_160 = CONCAT62(uStack_11e,uStack_120);
                uStack_158 = CONCAT62(uStack_116,uStack_118);
                uStack_178 = CONCAT62(uStack_10e,uStack_110);
                uStack_170 = CONCAT62(uStack_106,uStack_108);
                pdb_1404ca240(&uStack_228);
              }
              else {
                pdb_140dca950(&cStack_148);
                auVar63[0] = -(cStack_148 == cVar35);
                auVar63[1] = -(bStack_147 == bVar36);
                auVar63[2] = -(cStack_146 == cVar37);
                auVar63[3] = -(cStack_145 == cVar38);
                auVar63[4] = -(cStack_144 == cVar39);
                auVar63[5] = -(cStack_143 == cVar40);
                auVar63[6] = -(cStack_142 == cVar41);
                auVar63[7] = -(cStack_141 == cVar42);
                auVar63[8] = -(cStack_140 == cVar43);
                auVar63[9] = -(cStack_13f == cVar44);
                auVar63[10] = -(cStack_13e == cVar45);
                auVar63[0xb] = -(cStack_13d == cVar46);
                auVar63[0xc] = -(cStack_13c == cVar47);
                auVar63[0xd] = -(cStack_13b == cVar48);
                auVar63[0xe] = -(cStack_13a == cVar49);
                auVar63[0xf] = -(cStack_139 == cVar50);
                if ((ushort)((ushort)(SUB161(auVar63 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar63 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar63 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar63 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar63 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar63 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar63 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar63 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar63 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar63 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar63 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar63 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar63 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar63 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar63 >> 0x77,0) & 1) << 0xe |
                            (ushort)(auVar63[0xf] >> 7) << 0xf) == 0xffff) goto LAB_14181a197;
                cVar54 = '\x19';
                unaff_XMM7_Da = unaff_XMM8_Da;
                unaff_XMM7_Db = unaff_XMM8_Db;
                uVar66 = unaff_XMM8_Dc;
                if (*piVar51 == 1) {
                  if (*(longlong *)(piVar51 + 2) != 0) {
                    *(longlong *)(piVar51 + 2) = *(longlong *)(piVar51 + 2) + -1;
                    goto LAB_14181a97c;
                  }
LAB_14181a979:
                  cVar54 = '0';
                  unaff_XMM7_Da = unaff_XMM8_Da;
                  unaff_XMM7_Db = unaff_XMM8_Db;
                  uVar66 = unaff_XMM8_Dc;
                }
              }
            }
            else {
LAB_14181a82b:
              piVar60 = (int *)(ulonglong)bStack_147;
              uStack_f8 = CONCAT13(cStack_143,CONCAT12(cStack_144,CONCAT11(cStack_145,cStack_146)));
              uStack_f4 = CONCAT11(cStack_141,cStack_142);
              unaff_XMM6_Da = CONCAT22(uStack_12e,uStack_130);
              unaff_XMM6_Dc = CONCAT22(uStack_126,uStack_128);
              uStack_160 = CONCAT62(uStack_11e,uStack_120);
              uStack_158 = CONCAT62(uStack_116,uStack_118);
              uStack_178 = CONCAT62(uStack_10e,uStack_110);
              uStack_170 = CONCAT62(uStack_106,uStack_108);
              unaff_XMM7_Da =
                   CONCAT13(cStack_13d,CONCAT12(cStack_13e,CONCAT11(cStack_13f,cStack_140)));
              unaff_XMM7_Db =
                   CONCAT13(cStack_139,CONCAT12(cStack_13a,CONCAT11(cStack_13b,cStack_13c)));
              uVar66 = CONCAT22(uStack_136,uStack_138);
              unaff_XMM8_Dd = uStack_134;
              uVar67 = uStack_12c;
              uVar68 = uStack_124;
              cVar54 = cStack_148;
            }
LAB_14181a97c:
            bVar56 = (byte)piVar60;
            uStack_14c = uStack_f4;
            uStack_150 = uStack_f8;
            uStack_1d8 = uStack_178;
            uStack_1d0 = uStack_170;
            unaff_XMM7_Dd = unaff_XMM8_Dd;
            unaff_XMM6_Db = uVar67;
            unaff_XMM6_Dd = uVar68;
            goto LAB_14181a5bc;
          }
          if (unaff_R14B != 1) {
LAB_14181a417:
            bVar1 = bStack_f9;
            piStack_270 = (int *)0x0;
            piStack_268 = piStack_1c8;
            if (SBORROW8(0,(longlong)piStack_1c8)) {
              piStack_268 = piStack_270;
            }
            uStack_278 = 8;
            uStack_260 = CONCAT44(uStack_1bc,uStack_1c0);
            piStack_258 = piStack_1b8;
            if (SBORROW8(0,(longlong)piStack_1c8)) {
              uStack_260 = 8;
              piStack_258 = piStack_270;
            }
            piStack_280 = (int *)0x0;
            if (!SBORROW8(0,(longlong)piStack_1a8)) {
              uStack_278 = CONCAT44(uStack_19c,uStack_1a0);
              piStack_270 = piStack_198;
              piStack_280 = piStack_1a8;
            }
            if (*param_2 == 1) {
              lVar55 = -1;
              if (*(longlong *)(param_2 + 2) + 1 != 0) {
                lVar55 = *(longlong *)(param_2 + 2) + 1;
              }
              *(longlong *)(param_2 + 2) = lVar55;
            }
            pdb_140dd4ac0(&cStack_148,piStack_240);
            if (cStack_148 == '2') {
              if ((bVar1 != 0) || (cVar53 = pdb_140dce020(piStack_240,0x29), cVar53 != '\0')) {
                *(undefined8 *)(param_1 + 0x28) = uStack_260;
                *(int **)(param_1 + 0x30) = piStack_258;
                *(int **)(param_1 + 0x18) = piStack_270;
                *(int **)(param_1 + 0x20) = piStack_268;
                *(int **)(param_1 + 8) = piStack_280;
                *(undefined8 *)(param_1 + 0x10) = uStack_278;
                *param_1 = '2';
                return param_1;
              }
              *param_1 = '\x17';
            }
            else {
              *(ulonglong *)(param_1 + 0x40) = CONCAT62(uStack_106,uStack_108);
              *(ulonglong *)(param_1 + 0x30) = CONCAT62(uStack_116,uStack_118);
              *(ulonglong *)(param_1 + 0x38) = CONCAT62(uStack_10e,uStack_110);
              *(ulonglong *)(param_1 + 0x20) = CONCAT44(uStack_124,CONCAT22(uStack_126,uStack_128));
              *(ulonglong *)(param_1 + 0x28) = CONCAT62(uStack_11e,uStack_120);
              *(ulonglong *)(param_1 + 0x10) = CONCAT44(uStack_134,CONCAT22(uStack_136,uStack_138));
              *(ulonglong *)(param_1 + 0x18) = CONCAT44(uStack_12c,CONCAT22(uStack_12e,uStack_130));
              *(ulonglong *)param_1 =
                   CONCAT17(cStack_141,
                            CONCAT16(cStack_142,
                                     CONCAT15(cStack_143,
                                              CONCAT14(cStack_144,
                                                       CONCAT13(cStack_145,
                                                                CONCAT12(cStack_146,
                                                                         CONCAT11(bStack_147,
                                                                                  cStack_148)))))));
              *(ulonglong *)(param_1 + 8) =
                   CONCAT17(cStack_139,
                            CONCAT16(cStack_13a,
                                     CONCAT15(cStack_13b,
                                              CONCAT14(cStack_13c,
                                                       CONCAT13(cStack_13d,
                                                                CONCAT12(cStack_13e,
                                                                         CONCAT11(cStack_13f,
                                                                                  cStack_140)))))));
            }
            pdb_140999dd0(&piStack_280);
            return param_1;
          }
          if (!SBORROW8(0,(longlong)piStack_1c8)) {
            unaff_XMM7_Da = 0x4333ee9c;
            unaff_XMM7_Db = 1;
            unaff_XMM6_Da = 0;
            unaff_XMM6_Dc = 0;
            uVar66 = uVar16;
            unaff_XMM7_Dd = uVar17;
            cVar54 = ',';
            bVar56 = bStack_f9;
            unaff_XMM6_Db = 0x80000000;
            unaff_XMM6_Dd = 0;
            goto LAB_14181a5bc;
          }
          piVar60 = piStack_188 + 4;
          pdb_140dd4ac0(&cStack_148,piVar60);
          if (cStack_148 == '2') {
            cVar54 = pdb_140dce020(piVar60,0x3a);
            unaff_XMM6_Da = SUB84(piStack_230,0);
            uVar67 = (undefined4)((ulonglong)piStack_230 >> 0x20);
            unaff_XMM6_Dc = 0;
            uVar68 = 0;
            if (cVar54 == '\0') {
              cVar54 = '\x12';
              unaff_XMM7_Da = unaff_XMM9_Da;
              unaff_XMM7_Db = unaff_XMM9_Db;
              goto LAB_14181a9cb;
            }
            pdb_140dd4ac0(&cStack_148,piVar60);
            if (cStack_148 != '2') goto LAB_14181a7c9;
            if (cStack_17e == '\0') {
LAB_141819fd3:
              if ((char)*piVar51 != '\0') {
                if (*(longlong *)(piVar51 + 2) == 0) goto LAB_14181a9c8;
                *(longlong *)(piVar51 + 2) = *(longlong *)(piVar51 + 2) + -1;
              }
              pdb_14180fee0(&cStack_148,piVar51);
              if (cStack_148 != '2') goto LAB_14181a7c9;
              uStack_228 = (int *)CONCAT17(cStack_139,
                                           CONCAT16(cStack_13a,
                                                    CONCAT15(cStack_13b,
                                                             CONCAT14(cStack_13c,
                                                                      CONCAT13(cStack_13d,
                                                                               CONCAT12(cStack_13e,
                                                                                        CONCAT11(
                                                  cStack_13f,cStack_140)))))));
              uStack_220 = CONCAT44(uStack_134,CONCAT22(uStack_136,uStack_138));
              uStack_218 = (int *)CONCAT44(uStack_12c,CONCAT22(uStack_12e,uStack_130));
              if (*piVar51 == 1) {
                lVar55 = *(longlong *)(piVar51 + 2) + 1;
                if (lVar55 == 0) {
                  lVar55 = -1;
                }
                *(longlong *)(piVar51 + 2) = lVar55;
              }
              pdb_140dd3ab0(&cStack_148,piVar60);
              uVar68 = uStack_124;
              uVar67 = uStack_12c;
              unaff_XMM9_Dd = uStack_134;
              cVar54 = cStack_148;
              piVar52 = piStack_1c8;
              piVar51 = uStack_228;
              piVar60 = (int *)(ulonglong)bStack_147;
              if (cStack_148 == '2') {
                uStack_180 = CONCAT11(bStack_147,(char)uStack_180);
                unaff_XMM9_Da = (undefined4)uStack_228;
                unaff_XMM9_Db = uStack_228._4_4_;
                unaff_XMM9_Dc = (undefined4)uStack_220;
                uVar67 = (undefined4)uStack_220;
                unaff_XMM9_Dd = uStack_220._4_4_;
                uVar68 = uStack_220._4_4_;
                piStack_230 = uStack_218;
                if (!SBORROW8(0,(longlong)piStack_1c8)) {
                  pbStack_190 = (byte *)CONCAT44(uStack_1bc,uStack_1c0);
                  if (piStack_1b8 != (int *)0x0) {
                    pbVar57 = pbStack_190 + 8;
                    piVar60 = piStack_1b8;
                    do {
                      if (*(ulonglong *)(pbVar57 + -8) != 0) {
                        pub_1406abac0(*(byte **)pbVar57,*(ulonglong *)(pbVar57 + -8),1);
                      }
                      pbVar57 = pbVar57 + 0x20;
                      piVar60 = (int *)((longlong)piVar60 + -1);
                    } while (piVar60 != (int *)0x0);
                  }
                  if (piVar52 != (int *)0x0) {
                    pub_1406abac0(pbStack_190,(longlong)piVar52 << 5,8);
                  }
                }
                piStack_1c8 = piVar51;
                piStack_1b8 = piStack_230;
                unaff_XMM6_Da = uVar64;
                unaff_XMM6_Dc = uVar65;
                uStack_1c0 = uVar67;
                uStack_1bc = uVar68;
                goto LAB_141819ca0;
              }
              uStack_f4 = CONCAT11(cStack_141,cStack_142);
              uStack_f8 = CONCAT13(cStack_143,CONCAT12(cStack_144,CONCAT11(cStack_145,cStack_146)));
              unaff_XMM7_Da =
                   CONCAT13(cStack_13d,CONCAT12(cStack_13e,CONCAT11(cStack_13f,cStack_140)));
              unaff_XMM7_Db =
                   CONCAT13(cStack_139,CONCAT12(cStack_13a,CONCAT11(cStack_13b,cStack_13c)));
              unaff_XMM9_Dc = CONCAT22(uStack_136,uStack_138);
              unaff_XMM6_Da = CONCAT22(uStack_12e,uStack_130);
              unaff_XMM6_Dc = CONCAT22(uStack_126,uStack_128);
              uStack_160 = CONCAT62(uStack_11e,uStack_120);
              uStack_158 = CONCAT62(uStack_116,uStack_118);
              uStack_178 = CONCAT62(uStack_10e,uStack_110);
              uStack_170 = CONCAT62(uStack_106,uStack_108);
              pdb_1400d9d50(&uStack_228);
            }
            else {
              pdb_140dca950(&cStack_148);
              auVar62[0] = -(cStack_148 == cVar18);
              auVar62[1] = -(bStack_147 == bVar19);
              auVar62[2] = -(cStack_146 == cVar20);
              auVar62[3] = -(cStack_145 == cVar21);
              auVar62[4] = -(cStack_144 == cVar22);
              auVar62[5] = -(cStack_143 == cVar23);
              auVar62[6] = -(cStack_142 == cVar24);
              auVar62[7] = -(cStack_141 == cVar25);
              auVar62[8] = -(cStack_140 == cVar26);
              auVar62[9] = -(cStack_13f == cVar27);
              auVar62[10] = -(cStack_13e == cVar28);
              auVar62[0xb] = -(cStack_13d == cVar29);
              auVar62[0xc] = -(cStack_13c == cVar30);
              auVar62[0xd] = -(cStack_13b == cVar31);
              auVar62[0xe] = -(cStack_13a == cVar32);
              auVar62[0xf] = -(cStack_139 == cVar33);
              if ((ushort)((ushort)(SUB161(auVar62 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar62 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar62 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar62 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar62 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar62 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar62 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auVar62 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auVar62 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(auVar62 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auVar62 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auVar62 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(auVar62 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar62 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar62 >> 0x77,0) & 1) << 0xe |
                          (ushort)(auVar62[0xf] >> 7) << 0xf) == 0xffff) goto LAB_141819fd3;
              cVar54 = '\x19';
              unaff_XMM7_Da = unaff_XMM9_Da;
              unaff_XMM7_Db = unaff_XMM9_Db;
              if (*piVar51 == 1) {
                if (*(longlong *)(piVar51 + 2) != 0) {
                  *(longlong *)(piVar51 + 2) = *(longlong *)(piVar51 + 2) + -1;
                  goto LAB_14181a9cb;
                }
LAB_14181a9c8:
                cVar54 = '0';
                unaff_XMM7_Da = unaff_XMM9_Da;
                unaff_XMM7_Db = unaff_XMM9_Db;
              }
            }
          }
          else {
LAB_14181a7c9:
            piVar60 = (int *)(ulonglong)bStack_147;
            uStack_f8 = CONCAT13(cStack_143,CONCAT12(cStack_144,CONCAT11(cStack_145,cStack_146)));
            uStack_f4 = CONCAT11(cStack_141,cStack_142);
            unaff_XMM9_Dc = CONCAT22(uStack_136,uStack_138);
            unaff_XMM6_Da = CONCAT22(uStack_12e,uStack_130);
            unaff_XMM6_Dc = CONCAT22(uStack_126,uStack_128);
            uStack_160 = CONCAT62(uStack_11e,uStack_120);
            uStack_158 = CONCAT62(uStack_116,uStack_118);
            uStack_178 = CONCAT62(uStack_10e,uStack_110);
            uStack_170 = CONCAT62(uStack_106,uStack_108);
            unaff_XMM7_Da =
                 CONCAT13(cStack_13d,CONCAT12(cStack_13e,CONCAT11(cStack_13f,cStack_140)));
            unaff_XMM7_Db =
                 CONCAT13(cStack_139,CONCAT12(cStack_13a,CONCAT11(cStack_13b,cStack_13c)));
            unaff_XMM9_Dd = uStack_134;
            uVar67 = uStack_12c;
            uVar68 = uStack_124;
            cVar54 = cStack_148;
          }
LAB_14181a9cb:
          uStack_14c = uStack_f4;
          uStack_150 = uStack_f8;
          uStack_1d8 = uStack_178;
          uStack_1d0 = uStack_170;
          uVar66 = unaff_XMM9_Dc;
          unaff_XMM7_Dd = unaff_XMM9_Dd;
          bVar56 = (byte)piVar60;
          unaff_XMM6_Db = uVar67;
          unaff_XMM6_Dd = uVar68;
          goto LAB_14181a5bc;
        }
        pdb_14180d6d0(&cStack_148,&piStack_188);
      } while (cStack_148 == '2');
      uStack_150 = CONCAT13(cStack_143,CONCAT12(cStack_144,CONCAT11(cStack_145,cStack_146)));
      uStack_14c = CONCAT11(cStack_141,cStack_142);
      unaff_XMM7_Da = CONCAT13(cStack_13d,CONCAT12(cStack_13e,CONCAT11(cStack_13f,cStack_140)));
      unaff_XMM7_Db = CONCAT13(cStack_139,CONCAT12(cStack_13a,CONCAT11(cStack_13b,cStack_13c)));
      uVar66 = CONCAT22(uStack_136,uStack_138);
      unaff_XMM6_Da = CONCAT22(uStack_12e,uStack_130);
      unaff_XMM6_Dc = CONCAT22(uStack_126,uStack_128);
      uStack_160 = CONCAT62(uStack_11e,uStack_120);
      uStack_158 = CONCAT62(uStack_116,uStack_118);
      uStack_1d8 = CONCAT62(uStack_10e,uStack_110);
      uStack_1d0 = CONCAT62(uStack_106,uStack_108);
      unaff_XMM7_Dd = uStack_134;
      cVar54 = cStack_148;
      bVar56 = bStack_147;
      unaff_XMM6_Db = uStack_12c;
      unaff_XMM6_Dd = uStack_124;
LAB_14181a5bc:
      piVar51 = piStack_1c8;
      if (!SBORROW8(0,(longlong)piStack_1c8)) {
        pbVar57 = (byte *)CONCAT44(uStack_1bc,uStack_1c0);
        if (piStack_1b8 != (int *)0x0) {
          pbVar59 = pbVar57 + 8;
          piVar60 = piStack_1b8;
          do {
            if (*(ulonglong *)(pbVar59 + -8) != 0) {
              pub_1406abac0(*(byte **)pbVar59,*(ulonglong *)(pbVar59 + -8),1);
            }
            pbVar59 = pbVar59 + 0x20;
            piVar60 = (int *)((longlong)piVar60 + -1);
          } while (piVar60 != (int *)0x0);
        }
        if (piVar51 != (int *)0x0) {
          pub_1406abac0(pbVar57,(longlong)piVar51 << 5,8);
        }
      }
      piVar51 = piStack_1a8;
      if (!SBORROW8(0,(longlong)piStack_1a8)) {
        pbVar57 = (byte *)CONCAT44(uStack_19c,uStack_1a0);
        if (piStack_198 != (int *)0x0) {
          pbVar59 = pbVar57 + 8;
          piVar60 = piStack_198;
          do {
            if (*(ulonglong *)(pbVar59 + -8) != 0) {
              pub_1406abac0(*(byte **)pbVar59,*(ulonglong *)(pbVar59 + -8),1);
            }
            pbVar59 = pbVar59 + 0x18;
            piVar60 = (int *)((longlong)piVar60 + -1);
          } while (piVar60 != (int *)0x0);
        }
        if (piVar51 != (int *)0x0) {
          pub_1406abac0(pbVar57,(longlong)piVar51 * 0x18,8);
        }
      }
      uStack_228 = (int *)CONCAT26(uStack_14c,CONCAT42(uStack_150,CONCAT11(bVar56,cVar54)));
      uStack_220 = CONCAT44(unaff_XMM7_Db,unaff_XMM7_Da);
      uStack_218 = (int *)CONCAT44(unaff_XMM7_Dd,uVar66);
      uStack_200 = uStack_160;
      uStack_1f8 = uStack_158;
      uVar58 = uStack_248;
      if (bStack_f9 != 0) {
        uVar58 = 0;
      }
      uStack_1f0 = uStack_1d8;
      uStack_1e8 = uStack_1d0;
      if (lStack_250 == 0) {
        uVar58 = 0;
      }
      uStack_210 = unaff_XMM6_Da;
      uStack_20c = unaff_XMM6_Db;
      uStack_208 = unaff_XMM6_Dc;
      uStack_204 = unaff_XMM6_Dd;
      pdb_140dca990(&cStack_148,&uStack_228,uVar58);
      *(ushort *)(param_1 + 6) = CONCAT11(cStack_141,cStack_142);
      *(uint *)(param_1 + 2) =
           CONCAT13(cStack_143,CONCAT12(cStack_144,CONCAT11(cStack_145,cStack_146)));
      *(ulonglong *)(param_1 + 0x38) = CONCAT62(uStack_10e,uStack_110);
      *(ulonglong *)(param_1 + 0x40) = CONCAT62(uStack_106,uStack_108);
      *(ushort *)param_1 = CONCAT11(bStack_147,cStack_148);
      *(ulonglong *)(param_1 + 8) =
           CONCAT17(cStack_139,
                    CONCAT16(cStack_13a,
                             CONCAT15(cStack_13b,
                                      CONCAT14(cStack_13c,
                                               CONCAT13(cStack_13d,
                                                        CONCAT12(cStack_13e,
                                                                 CONCAT11(cStack_13f,cStack_140)))))
                            ));
      *(ulonglong *)(param_1 + 0x10) = CONCAT44(uStack_134,CONCAT22(uStack_136,uStack_138));
      *(ulonglong *)(param_1 + 0x18) = CONCAT44(uStack_12c,CONCAT22(uStack_12e,uStack_130));
      *(ulonglong *)(param_1 + 0x20) = CONCAT44(uStack_124,CONCAT22(uStack_126,uStack_128));
      *(ulonglong *)(param_1 + 0x28) = CONCAT62(uStack_11e,uStack_120);
      *(ulonglong *)(param_1 + 0x30) = CONCAT62(uStack_116,uStack_118);
    }
    else {
      *(ulonglong *)(param_1 + 0x40) = CONCAT62(uStack_106,uStack_108);
      *(ulonglong *)(param_1 + 0x30) = CONCAT62(uStack_116,uStack_118);
      *(ulonglong *)(param_1 + 0x38) = CONCAT62(uStack_10e,uStack_110);
      *(ulonglong *)(param_1 + 0x20) = CONCAT44(uStack_124,CONCAT22(uStack_126,uStack_128));
      *(ulonglong *)(param_1 + 0x28) = CONCAT62(uStack_11e,uStack_120);
      *(ulonglong *)(param_1 + 0x10) = CONCAT44(uStack_134,CONCAT22(uStack_136,uStack_138));
      *(ulonglong *)(param_1 + 0x18) = CONCAT44(uStack_12c,CONCAT22(uStack_12e,uStack_130));
      *(ulonglong *)param_1 =
           CONCAT17(cStack_141,
                    CONCAT16(cStack_142,
                             CONCAT15(cStack_143,
                                      CONCAT14(cStack_144,
                                               CONCAT13(cStack_145,
                                                        CONCAT12(cStack_146,
                                                                 CONCAT11(bStack_147,cStack_148)))))
                            ));
      *(ulonglong *)(param_1 + 8) =
           CONCAT17(cStack_139,
                    CONCAT16(cStack_13a,
                             CONCAT15(cStack_13b,
                                      CONCAT14(cStack_13c,
                                               CONCAT13(cStack_13d,
                                                        CONCAT12(cStack_13e,
                                                                 CONCAT11(cStack_13f,cStack_140)))))
                            ));
    }
  }
  return param_1;
}

