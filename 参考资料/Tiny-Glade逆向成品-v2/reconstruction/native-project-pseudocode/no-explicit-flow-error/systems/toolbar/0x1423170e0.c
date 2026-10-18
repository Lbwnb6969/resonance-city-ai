// VA 0x1423170e0, PDB extent 4152 bytes
// ron::de::impl$2::deserialize_struct<tg_text::font_table::_::impl$0::deserialize::__Visitor>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   ron::de::impl$2::deserialize_struct<tg_text::font_table::_::impl$0::deserialize::__Visitor>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/lib.rs
   Extent: 4152 */

char * pdb_1423170e0(char *param_1,int *param_2,ulonglong param_3,longlong param_4)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int *piVar8;
  byte bVar9;
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
  char cVar21;
  char cVar22;
  char cVar23;
  char cVar24;
  byte bVar25;
  char cVar26;
  char cVar27;
  char cVar28;
  char cVar29;
  char cVar30;
  char cVar31;
  char cVar32;
  char cVar33;
  char cVar34;
  char cVar35;
  char cVar36;
  char cVar37;
  char cVar38;
  char cVar39;
  int *piVar40;
  undefined *puVar41;
  char cVar42;
  char cVar43;
  longlong lVar44;
  ulonglong uVar45;
  ulonglong arg1;
  char *pcVar46;
  undefined1 uVar47;
  int *piVar48;
  undefined1 (*pauVar49) [16];
  undefined1 (*pauVar50) [16];
  uint uVar51;
  undefined1 (*pauVar52) [16];
  undefined1 (*pauVar53) [16];
  undefined1 (*pauVar54) [16];
  undefined *puVar55;
  undefined1 (*pauVar56) [16];
  byte bVar57;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined4 uVar60;
  undefined4 uVar61;
  undefined4 uVar62;
  undefined4 uVar63;
  undefined4 unaff_XMM7_Da;
  undefined4 unaff_XMM7_Db;
  undefined4 unaff_XMM7_Dc;
  undefined4 unaff_XMM7_Dd;
  undefined4 unaff_XMM8_Da;
  undefined4 unaff_XMM8_Db;
  undefined4 unaff_XMM8_Dc;
  undefined4 unaff_XMM8_Dd;
  undefined1 (*pauStack_278) [16];
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined1 (*pauStack_260) [16];
  int *piStack_258;
  undefined8 uStack_250;
  ulonglong uStack_248;
  longlong lStack_240;
  undefined1 (*pauStack_238) [16];
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined1 (*pauStack_220) [16];
  int *piStack_218;
  undefined8 uStack_210;
  undefined1 (*pauStack_208) [16];
  int *piStack_200;
  int *piStack_1f8;
  undefined1 (*pauStack_1f0) [16];
  undefined4 uStack_1e8;
  undefined2 uStack_1e4;
  undefined1 (*pauStack_1c8) [16];
  int *piStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined1 (*pauStack_188) [16];
  int *piStack_180;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  int *piStack_168;
  char *pcStack_158;
  longlong lStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  int *piStack_128;
  int *piStack_118;
  undefined2 uStack_110;
  char cStack_10e;
  int *piStack_108;
  undefined *puStack_100;
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
  undefined2 uStack_e6;
  undefined4 uStack_e4;
  undefined2 uStack_e0;
  undefined2 uStack_de;
  undefined4 uStack_dc;
  undefined2 uStack_d8;
  undefined2 uStack_d6;
  undefined4 uStack_d4;
  undefined2 uStack_d0;
  undefined2 uStack_ce;
  undefined4 uStack_cc;
  undefined2 uStack_c8;
  undefined6 uStack_c6;
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
    *(ulonglong *)(param_1 + 0x32) = CONCAT26(uStack_c0,uStack_c6);
    *(ulonglong *)(param_1 + 0x3a) = CONCAT26(uStack_b8,uStack_be);
    *(ulonglong *)(param_1 + 0x22) = CONCAT26(uStack_d0,CONCAT42(uStack_d4,uStack_d6));
    *(ulonglong *)(param_1 + 0x2a) = CONCAT26(uStack_c8,CONCAT42(uStack_cc,uStack_ce));
    *(ulonglong *)(param_1 + 0x12) = CONCAT26(uStack_e0,CONCAT42(uStack_e4,uStack_e6));
    *(ulonglong *)(param_1 + 0x1a) = CONCAT26(uStack_d8,CONCAT42(uStack_dc,uStack_de));
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
    piVar48 = param_2 + 4;
    pdb_140dd4ac0(&cStack_f8,piVar48);
    if (cStack_f8 == '2') {
      cStack_a1 = '\x01';
      if ((char)param_2[0x1a] == '\0') {
        cVar42 = pdb_140dce020(piVar48,0x28);
        if (cVar42 == '\0') {
          if (param_4 != 0) {
            *param_1 = '\x16';
            *(ulonglong *)(param_1 + 8) = param_3;
            *(longlong *)(param_1 + 0x10) = param_4;
            return param_1;
          }
          *param_1 = '\x15';
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
      cVar39 = UNK_1434d8d6f;
      cVar38 = UNK_1434d8d6e;
      cVar37 = UNK_1434d8d6d;
      cVar36 = UNK_1434d8d6c;
      cVar35 = UNK_1434d8d6b;
      cVar34 = UNK_1434d8d6a;
      cVar33 = UNK_1434d8d69;
      cVar32 = UNK_1434d8d68;
      cVar31 = UNK_1434d8d67;
      cVar30 = UNK_1434d8d66;
      cVar29 = UNK_1434d8d65;
      cVar28 = UNK_1434d8d64;
      cVar27 = UNK_1434d8d63;
      cVar26 = UNK_1434d8d62;
      bVar25 = UNK_1434d8d61;
      cVar24 = DAT_1434d8d60;
      cVar23 = UNK_1434d8d5f;
      cVar22 = UNK_1434d8d5e;
      cVar21 = UNK_1434d8d5d;
      cVar20 = UNK_1434d8d5c;
      cVar19 = UNK_1434d8d5b;
      cVar18 = UNK_1434d8d5a;
      cVar17 = UNK_1434d8d59;
      cVar16 = UNK_1434d8d58;
      cVar15 = UNK_1434d8d57;
      cVar14 = UNK_1434d8d56;
      cVar13 = UNK_1434d8d55;
      cVar12 = UNK_1434d8d54;
      cVar11 = UNK_1434d8d53;
      cVar10 = UNK_1434d8d52;
      bVar9 = UNK_1434d8d51;
      cVar42 = DAT_1434d8d50;
      uVar63 = _UNK_142e69a3c;
      uVar62 = _UNK_142e69a38;
      uVar61 = _UNK_142e69a34;
      uVar60 = _DAT_142e69a30;
      uStack_110 = 0x103;
      cStack_10e = '\0';
      pauStack_238 = (undefined1 (*) [16])0x0;
      pauVar54 = (undefined1 (*) [16])0x0;
      uStack_248 = param_3;
      piStack_1f8 = piVar48;
      piStack_118 = param_2;
LAB_142317220:
      do {
        pdb_140dca8b0(&cStack_f8,&piStack_118);
        piVar48 = (int *)(ulonglong)bStack_f7;
        if (cStack_f8 != '2') {
          uStack_1e4 = CONCAT11(cStack_f1,cStack_f2);
          uStack_1e8 = CONCAT13(cStack_f3,CONCAT12(cStack_f4,CONCAT11(cStack_f5,cStack_f6)));
          puVar55 = (undefined *)
                    CONCAT17(cStack_e9,
                             CONCAT16(cStack_ea,
                                      CONCAT15(cStack_eb,
                                               CONCAT14(cStack_ec,
                                                        CONCAT13(cStack_ed,
                                                                 CONCAT12(cStack_ee,
                                                                          CONCAT11(cStack_ef,
                                                                                   cStack_f0)))))));
          unaff_XMM8_Da = CONCAT22(uStack_e6,uStack_e8);
          unaff_XMM8_Dc = CONCAT22(uStack_de,uStack_e0);
          uStack_1a8 = (undefined1 (*) [16])CONCAT44(uStack_d4,CONCAT22(uStack_d6,uStack_d8));
          uStack_1a0 = (int *)CONCAT44(uStack_cc,CONCAT22(uStack_ce,uStack_d0));
          uStack_198 = CONCAT62(uStack_c6,uStack_c8);
          uStack_190 = (undefined1 (*) [16])CONCAT62(uStack_be,uStack_c0);
          pauStack_188 = (undefined1 (*) [16])CONCAT62(uStack_b6,uStack_b8);
          uVar61 = uStack_e4;
          uVar63 = uStack_dc;
          cVar43 = cStack_f8;
          goto joined_r0x000142317b38;
        }
        if ((bStack_f7 & 1) == 0) {
LAB_14231786f:
          uVar47 = SUB81(piVar48,0);
          if (pauVar54 != (undefined1 (*) [16])0x0) {
            uStack_138 = uStack_210;
            uStack_148 = pauStack_220;
            uStack_140 = piStack_218;
            if (*param_2 == 1) {
              lVar44 = -1;
              if (*(longlong *)(param_2 + 2) + 1 != 0) {
                lVar44 = *(longlong *)(param_2 + 2) + 1;
              }
              *(longlong *)(param_2 + 2) = lVar44;
            }
            pauStack_260 = pauStack_220;
            piStack_258 = piStack_218;
            uStack_250 = uStack_210;
            pauStack_278 = pauVar54;
            uStack_270 = unaff_XMM7_Da;
            uStack_26c = unaff_XMM7_Db;
            uStack_268 = unaff_XMM7_Dc;
            uStack_264 = unaff_XMM7_Dd;
            pdb_140dd4ac0(&cStack_f8,piStack_1f8);
            piVar48 = piStack_108;
            if (cStack_f8 == '2') {
              if ((cStack_a1 == '\0') && (cVar42 = pdb_140dce020(piStack_1f8,0x29), cVar42 == '\0'))
              {
                *param_1 = '\x17';
                pdb_140976060(&pauStack_278);
                return param_1;
              }
              *(int **)(param_1 + 0x28) = piStack_258;
              *(undefined8 *)(param_1 + 0x30) = uStack_250;
              *(ulonglong *)(param_1 + 0x18) = CONCAT44(uStack_264,uStack_268);
              *(undefined1 (**) [16])(param_1 + 0x20) = pauStack_260;
              *(undefined1 (**) [16])(param_1 + 8) = pauStack_278;
              *(ulonglong *)(param_1 + 0x10) = CONCAT44(uStack_26c,uStack_270);
              *param_1 = '2';
              return param_1;
            }
            *(ulonglong *)(param_1 + 0x40) = CONCAT62(uStack_b6,uStack_b8);
            *(ulonglong *)(param_1 + 0x30) = CONCAT62(uStack_c6,uStack_c8);
            *(ulonglong *)(param_1 + 0x38) = CONCAT62(uStack_be,uStack_c0);
            *(ulonglong *)(param_1 + 0x20) = CONCAT44(uStack_d4,CONCAT22(uStack_d6,uStack_d8));
            *(ulonglong *)(param_1 + 0x28) = CONCAT44(uStack_cc,CONCAT22(uStack_ce,uStack_d0));
            *(ulonglong *)(param_1 + 0x10) = CONCAT44(uStack_e4,CONCAT22(uStack_e6,uStack_e8));
            *(ulonglong *)(param_1 + 0x18) = CONCAT44(uStack_dc,CONCAT22(uStack_de,uStack_e0));
            *(ulonglong *)param_1 =
                 CONCAT17(cStack_f1,
                          CONCAT16(cStack_f2,
                                   CONCAT15(cStack_f3,
                                            CONCAT14(cStack_f4,
                                                     CONCAT13(cStack_f5,
                                                              CONCAT12(cStack_f6,
                                                                       CONCAT11(bStack_f7,cStack_f8)
                                                                      ))))));
            *(ulonglong *)(param_1 + 8) =
                 CONCAT17(cStack_e9,
                          CONCAT16(cStack_ea,
                                   CONCAT15(cStack_eb,
                                            CONCAT14(cStack_ec,
                                                     CONCAT13(cStack_ed,
                                                              CONCAT12(cStack_ee,
                                                                       CONCAT11(cStack_ef,cStack_f0)
                                                                      ))))));
            if (piStack_108 == (int *)0x0) {
              return param_1;
            }
            if (pauStack_260 != (undefined1 (*) [16])0x0) {
              auVar58 = *pauVar54;
              pauVar50 = pauVar54 + 1;
              uVar51 = ~(uint)(ushort)((ushort)(SUB161(auVar58 >> 7,0) & 1) |
                                       (ushort)(SUB161(auVar58 >> 0xf,0) & 1) << 1 |
                                       (ushort)(SUB161(auVar58 >> 0x17,0) & 1) << 2 |
                                       (ushort)(SUB161(auVar58 >> 0x1f,0) & 1) << 3 |
                                       (ushort)(SUB161(auVar58 >> 0x27,0) & 1) << 4 |
                                       (ushort)(SUB161(auVar58 >> 0x2f,0) & 1) << 5 |
                                       (ushort)(SUB161(auVar58 >> 0x37,0) & 1) << 6 |
                                       (ushort)(SUB161(auVar58 >> 0x3f,0) & 1) << 7 |
                                       (ushort)(SUB161(auVar58 >> 0x47,0) & 1) << 8 |
                                       (ushort)(SUB161(auVar58 >> 0x4f,0) & 1) << 9 |
                                       (ushort)(SUB161(auVar58 >> 0x57,0) & 1) << 10 |
                                       (ushort)(SUB161(auVar58 >> 0x5f,0) & 1) << 0xb |
                                       (ushort)(SUB161(auVar58 >> 0x67,0) & 1) << 0xc |
                                       (ushort)(SUB161(auVar58 >> 0x6f,0) & 1) << 0xd |
                                       (ushort)(SUB161(auVar58 >> 0x77,0) & 1) << 0xe |
                                      (ushort)(byte)(auVar58[0xf] >> 7) << 0xf);
              pauVar52 = pauStack_260;
              do {
                if ((short)uVar51 == 0) {
                  do {
                    auVar58 = *pauVar50;
                    pauVar54 = pauVar54 + -0x28;
                    pauVar50 = pauVar50 + 1;
                    uVar51 = (ushort)((ushort)(SUB161(auVar58 >> 7,0) & 1) |
                                      (ushort)(SUB161(auVar58 >> 0xf,0) & 1) << 1 |
                                      (ushort)(SUB161(auVar58 >> 0x17,0) & 1) << 2 |
                                      (ushort)(SUB161(auVar58 >> 0x1f,0) & 1) << 3 |
                                      (ushort)(SUB161(auVar58 >> 0x27,0) & 1) << 4 |
                                      (ushort)(SUB161(auVar58 >> 0x2f,0) & 1) << 5 |
                                      (ushort)(SUB161(auVar58 >> 0x37,0) & 1) << 6 |
                                      (ushort)(SUB161(auVar58 >> 0x3f,0) & 1) << 7 |
                                      (ushort)(SUB161(auVar58 >> 0x47,0) & 1) << 8 |
                                      (ushort)(SUB161(auVar58 >> 0x4f,0) & 1) << 9 |
                                      (ushort)(SUB161(auVar58 >> 0x57,0) & 1) << 10 |
                                      (ushort)(SUB161(auVar58 >> 0x5f,0) & 1) << 0xb |
                                      (ushort)(SUB161(auVar58 >> 0x67,0) & 1) << 0xc |
                                      (ushort)(SUB161(auVar58 >> 0x6f,0) & 1) << 0xd |
                                      (ushort)(SUB161(auVar58 >> 0x77,0) & 1) << 0xe |
                                     (ushort)(byte)(auVar58[0xf] >> 7) << 0xf) ^ 0xffff;
                  } while (uVar51 == 0);
                }
                uVar2 = 0;
                for (uVar3 = uVar51; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
                  uVar2 = uVar2 + 1;
                }
                uVar45 = *(ulonglong *)((longlong)pauVar54 + (ulonglong)uVar2 * -0x28 + -0x20);
                if (uVar45 != 0) {
                  pub_1406abac0(*(byte **)((longlong)pauVar54 + (ulonglong)uVar2 * -0x28 + -0x18),
                                uVar45,1);
                }
                uVar51 = uVar51 - 1 & uVar51;
                pauVar52 = (undefined1 (*) [16])(pauVar52[-1] + 0xf);
              } while (pauVar52 != (undefined1 (*) [16])0x0);
            }
            uVar45 = (longlong)piVar48 * 0x28 + 0x37U & 0xfffffffffffffff0;
            pcVar46 = (char *)((longlong)piVar48 + uVar45 + 0x11);
            if (pcVar46 == (char *)0x0) {
              return param_1;
            }
            pub_1406abac0((byte *)((longlong)pauStack_278 - uVar45),(ulonglong)pcVar46,0x10);
            return param_1;
          }
          cVar43 = '+';
          uStack_1a0 = (int *)&UNK_1434d8e35;
          uVar60 = _DAT_142e69a30;
          uVar61 = _UNK_142e69a34;
          uVar62 = _UNK_142e69a38;
          uVar63 = _UNK_142e69a3c;
          piVar40 = piStack_108;
          puVar41 = puStack_100;
          goto LAB_142317c43;
        }
        pdb_140dcace0(&cStack_f8);
        piVar40 = piStack_118;
        auVar58[0] = -(cStack_f8 == cVar42);
        auVar58[1] = -(bStack_f7 == bVar9);
        auVar58[2] = -(cStack_f6 == cVar10);
        auVar58[3] = -(cStack_f5 == cVar11);
        auVar58[4] = -(cStack_f4 == cVar12);
        auVar58[5] = -(cStack_f3 == cVar13);
        auVar58[6] = -(cStack_f2 == cVar14);
        auVar58[7] = -(cStack_f1 == cVar15);
        auVar58[8] = -(cStack_f0 == cVar16);
        auVar58[9] = -(cStack_ef == cVar17);
        auVar58[10] = -(cStack_ee == cVar18);
        auVar58[0xb] = -(cStack_ed == cVar19);
        auVar58[0xc] = -(cStack_ec == cVar20);
        auVar58[0xd] = -(cStack_eb == cVar21);
        auVar58[0xe] = -(cStack_ea == cVar22);
        auVar58[0xf] = -(cStack_e9 == cVar23);
        cStack_10e = (ushort)((ushort)(SUB161(auVar58 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar58 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar58 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar58 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar58 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar58 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar58 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar58 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar58 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar58 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar58 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar58 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar58 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar58 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar58 >> 0x77,0) & 1) << 0xe |
                             (ushort)(auVar58[0xf] >> 7) << 0xf) == 0xffff;
        cVar43 = (char)*piStack_118;
        if ((char)uStack_110 != '\x01') {
          if ((char)uStack_110 == '\x03') {
            if (cVar43 != '\0') {
              if (*(longlong *)(piStack_118 + 2) == 0) goto LAB_142317ae5;
              *(longlong *)(piStack_118 + 2) = *(longlong *)(piStack_118 + 2) + -1;
            }
            pdb_140dcce90(&cStack_f8,piStack_118 + 4);
LAB_1423173a9:
            piVar48 = piStack_118;
            cVar43 = cStack_f8;
            if (cStack_f8 == '2') {
              piVar8 = (int *)CONCAT17(cStack_e9,
                                       CONCAT16(cStack_ea,
                                                CONCAT15(cStack_eb,
                                                         CONCAT14(cStack_ec,
                                                                  CONCAT13(cStack_ed,
                                                                           CONCAT12(cStack_ee,
                                                                                    CONCAT11(
                                                  cStack_ef,cStack_f0)))))));
              lVar44 = CONCAT44(uStack_e4,CONCAT22(uStack_e6,uStack_e8));
              *(int **)(piVar40 + 0x16) = piVar8;
              *(longlong *)(piVar40 + 0x18) = lVar44;
              param_3 = 1;
              if (lVar44 != 5) {
                cVar1 = (char)*piStack_118;
                goto joined_r0x0001423174ee;
              }
              bVar57 = (char)piVar8[1] != DAT_1434d99a0 || *piVar8 != _DAT_1434d999c;
              cVar1 = (char)*piStack_118;
            }
            else {
              uStack_1e8 = CONCAT13(cStack_f3,CONCAT12(cStack_f4,CONCAT11(cStack_f5,cStack_f6)));
              uStack_1e4 = CONCAT11(cStack_f1,cStack_f2);
              puStack_100 = (undefined *)
                            CONCAT17(cStack_e9,
                                     CONCAT16(cStack_ea,
                                              CONCAT15(cStack_eb,
                                                       CONCAT14(cStack_ec,
                                                                CONCAT13(cStack_ed,
                                                                         CONCAT12(cStack_ee,
                                                                                  CONCAT11(cStack_ef
                                                  ,cStack_f0)))))));
              unaff_XMM8_Da = CONCAT22(uStack_e6,uStack_e8);
              unaff_XMM8_Dc = CONCAT22(uStack_de,uStack_e0);
              uStack_1a8 = (undefined1 (*) [16])CONCAT44(uStack_d4,CONCAT22(uStack_d6,uStack_d8));
              uStack_1a0 = (int *)CONCAT44(uStack_cc,CONCAT22(uStack_ce,uStack_d0));
              uStack_198 = CONCAT62(uStack_c6,uStack_c8);
              uStack_190 = (undefined1 (*) [16])CONCAT62(uStack_be,uStack_c0);
              pauStack_188 = (undefined1 (*) [16])CONCAT62(uStack_b6,uStack_b8);
              cVar1 = (char)*piStack_118;
              unaff_XMM8_Db = uStack_e4;
              unaff_XMM8_Dd = uStack_dc;
              bVar57 = bStack_f7;
            }
            param_3 = (ulonglong)bVar57;
            goto joined_r0x0001423174ee;
          }
          if (cVar43 == '\0') {
LAB_142317398:
            pdb_140dcce90(&cStack_f8,piStack_118 + 4);
            goto LAB_1423173a9;
          }
          if (*(longlong *)(piStack_118 + 2) != 0) {
            *(longlong *)(piStack_118 + 2) = *(longlong *)(piStack_118 + 2) + -1;
            goto LAB_142317398;
          }
LAB_142317ae5:
          cVar43 = '0';
LAB_142317ae8:
          piVar48 = (int *)(param_3 & 0xffffffff);
          puVar55 = puStack_100;
          uVar61 = unaff_XMM8_Db;
          uVar63 = unaff_XMM8_Dd;
          goto joined_r0x000142317b38;
        }
        if (cVar43 != '\0') {
          if (*(longlong *)(piStack_118 + 2) == 0) goto LAB_142317ae5;
          *(longlong *)(piStack_118 + 2) = *(longlong *)(piStack_118 + 2) + -1;
        }
        pdb_1423152f0(&cStack_f8,piStack_118);
        if (cStack_f8 != '2') {
          uStack_1e4 = CONCAT11(cStack_f1,cStack_f2);
          uStack_1e8 = CONCAT13(cStack_f3,CONCAT12(cStack_f4,CONCAT11(cStack_f5,cStack_f6)));
          puStack_100 = (undefined *)
                        CONCAT17(cStack_e9,
                                 CONCAT16(cStack_ea,
                                          CONCAT15(cStack_eb,
                                                   CONCAT14(cStack_ec,
                                                            CONCAT13(cStack_ed,
                                                                     CONCAT12(cStack_ee,
                                                                              CONCAT11(cStack_ef,
                                                                                       cStack_f0))))
                                                  )));
          unaff_XMM8_Da = CONCAT22(uStack_e6,uStack_e8);
          unaff_XMM8_Dc = CONCAT22(uStack_de,uStack_e0);
          uStack_1a8 = (undefined1 (*) [16])CONCAT44(uStack_d4,CONCAT22(uStack_d6,uStack_d8));
          uStack_1a0 = (int *)CONCAT44(uStack_cc,CONCAT22(uStack_ce,uStack_d0));
          uStack_198 = CONCAT62(uStack_c6,uStack_c8);
          uStack_190 = (undefined1 (*) [16])CONCAT62(uStack_be,uStack_c0);
          pauStack_188 = (undefined1 (*) [16])CONCAT62(uStack_b6,uStack_b8);
          unaff_XMM8_Db = uStack_e4;
          unaff_XMM8_Dd = uStack_dc;
        }
        param_3 = (ulonglong)bStack_f7;
        cVar1 = (char)*piStack_118;
        piVar48 = piStack_118;
        cVar43 = cStack_f8;
joined_r0x0001423174ee:
        if (cVar1 != '\0') {
          lVar44 = *(longlong *)((longlong)piVar48 + 8) + 1;
          if (lVar44 == 0) {
            lVar44 = -1;
          }
          *(longlong *)((longlong)piVar48 + 8) = lVar44;
        }
        piStack_118 = piVar48;
        cStack_f8 = cVar43;
        if (cVar43 != '2') goto LAB_142317ae8;
        if ((char)param_3 == '\0') {
          if (pauVar54 != (undefined1 (*) [16])0x0) {
            cVar43 = ',';
            puVar55 = &UNK_1434d8e35;
            pauVar50 = pauStack_220;
            piVar40 = piStack_108;
            puVar41 = puStack_100;
            goto joined_r0x000142317f98;
          }
          piStack_108 = (int *)((longlong)piVar48 + 0x10);
          pdb_140dd4ac0(&cStack_f8);
          if (cStack_f8 != '2') {
LAB_142317df7:
            piVar48 = (int *)(ulonglong)bStack_f7;
            uStack_b0 = CONCAT13(cStack_f3,CONCAT12(cStack_f4,CONCAT11(cStack_f5,cStack_f6)));
            uStack_ac = CONCAT11(cStack_f1,cStack_f2);
            puVar55 = (undefined *)
                      CONCAT17(cStack_e9,
                               CONCAT16(cStack_ea,
                                        CONCAT15(cStack_eb,
                                                 CONCAT14(cStack_ec,
                                                          CONCAT13(cStack_ed,
                                                                   CONCAT12(cStack_ee,
                                                                            CONCAT11(cStack_ef,
                                                                                     cStack_f0))))))
                              );
            unaff_XMM7_Da = CONCAT22(uStack_e6,uStack_e8);
            unaff_XMM7_Dc = CONCAT22(uStack_de,uStack_e0);
            pauStack_1c8 = (undefined1 (*) [16])CONCAT44(uStack_d4,CONCAT22(uStack_d6,uStack_d8));
            piStack_1c0 = (int *)CONCAT44(uStack_cc,CONCAT22(uStack_ce,uStack_d0));
            uStack_1b8 = CONCAT62(uStack_c6,uStack_c8);
            pauStack_208 = (undefined1 (*) [16])CONCAT62(uStack_be,uStack_c0);
            piStack_200 = (int *)CONCAT62(uStack_b6,uStack_b8);
            unaff_XMM7_Db = uStack_e4;
            unaff_XMM7_Dd = uStack_dc;
            cVar43 = cStack_f8;
            goto LAB_142317f27;
          }
          cVar43 = pdb_140dce020((int *)((longlong)piVar48 + 0x10),0x3a);
          puVar55 = (undefined *)0x0;
          if (cVar43 == '\0') {
            cVar43 = '\x12';
            goto LAB_142317f27;
          }
          pdb_140dd4ac0(&cStack_f8,(int *)((longlong)piVar48 + 0x10));
          if (cStack_f8 != '2') goto LAB_142317df7;
          if (cStack_10e == '\0') {
LAB_142317598:
            if (*(char *)piVar48 != '\0') {
              if (*(longlong *)((longlong)piVar48 + 8) == 0) goto LAB_142317f24;
              *(longlong *)((longlong)piVar48 + 8) = *(longlong *)((longlong)piVar48 + 8) + -1;
            }
            pdb_142312d70(&cStack_f8,piVar48);
            if (cStack_f8 == '2') {
              uStack_1a8 = (undefined1 (*) [16])
                           CONCAT17(cStack_e9,
                                    CONCAT16(cStack_ea,
                                             CONCAT15(cStack_eb,
                                                      CONCAT14(cStack_ec,
                                                               CONCAT13(cStack_ed,
                                                                        CONCAT12(cStack_ee,
                                                                                 CONCAT11(cStack_ef,
                                                                                          cStack_f0)
                                                                                ))))));
              uStack_1a0 = (int *)CONCAT44(uStack_e4,CONCAT22(uStack_e6,uStack_e8));
              uStack_198 = CONCAT44(uStack_dc,CONCAT22(uStack_de,uStack_e0));
              piStack_180 = (int *)CONCAT62(uStack_c6,uStack_c8);
              uStack_148 = (undefined1 (*) [16])CONCAT44(uStack_d4,CONCAT22(uStack_d6,uStack_d8));
              uStack_140 = (int *)CONCAT44(uStack_cc,CONCAT22(uStack_ce,uStack_d0));
              if (*piVar48 == 1) {
                lVar44 = *(longlong *)((longlong)piVar48 + 8) + 1;
                if (lVar44 == 0) {
                  lVar44 = -1;
                }
                *(longlong *)((longlong)piVar48 + 8) = lVar44;
              }
              uStack_190 = uStack_148;
              pauStack_188 = (undefined1 (*) [16])uStack_140;
              uStack_138 = piStack_180;
              pdb_140dd3ab0(&cStack_f8,piStack_108);
              unaff_XMM7_Dd = uStack_dc;
              unaff_XMM7_Db = uStack_e4;
              cVar43 = cStack_f8;
              pauVar52 = pauStack_188;
              pauVar50 = uStack_190;
              pauVar54 = uStack_1a8;
              piVar48 = (int *)(ulonglong)bStack_f7;
              if (cStack_f8 == '2') {
                uStack_110 = CONCAT11(bStack_f7,(char)uStack_110);
                piStack_108 = uStack_1a0;
                unaff_XMM7_Da = (undefined4)uStack_1a0;
                uVar4 = (undefined4)uStack_1a0;
                unaff_XMM7_Db = uStack_1a0._4_4_;
                uVar5 = uStack_1a0._4_4_;
                unaff_XMM7_Dc = (undefined4)uStack_198;
                uVar6 = (undefined4)uStack_198;
                unaff_XMM7_Dd = uStack_198._4_4_;
                uVar7 = uStack_198._4_4_;
                if ((pauStack_238 != (undefined1 (*) [16])0x0) &&
                   (lVar44 = CONCAT44(uStack_22c,uStack_230), lVar44 != 0)) {
                  pauStack_1f0 = pauStack_238;
                  lStack_240 = lVar44;
                  pcStack_158 = param_1;
                  lStack_150 = param_4;
                  if (pauStack_220 != (undefined1 (*) [16])0x0) {
                    auVar58 = *pauStack_238;
                    pauVar49 = pauStack_238 + 1;
                    uVar51 = ~(uint)(ushort)((ushort)(SUB161(auVar58 >> 7,0) & 1) |
                                             (ushort)(SUB161(auVar58 >> 0xf,0) & 1) << 1 |
                                             (ushort)(SUB161(auVar58 >> 0x17,0) & 1) << 2 |
                                             (ushort)(SUB161(auVar58 >> 0x1f,0) & 1) << 3 |
                                             (ushort)(SUB161(auVar58 >> 0x27,0) & 1) << 4 |
                                             (ushort)(SUB161(auVar58 >> 0x2f,0) & 1) << 5 |
                                             (ushort)(SUB161(auVar58 >> 0x37,0) & 1) << 6 |
                                             (ushort)(SUB161(auVar58 >> 0x3f,0) & 1) << 7 |
                                             (ushort)(SUB161(auVar58 >> 0x47,0) & 1) << 8 |
                                             (ushort)(SUB161(auVar58 >> 0x4f,0) & 1) << 9 |
                                             (ushort)(SUB161(auVar58 >> 0x57,0) & 1) << 10 |
                                             (ushort)(SUB161(auVar58 >> 0x5f,0) & 1) << 0xb |
                                             (ushort)(SUB161(auVar58 >> 0x67,0) & 1) << 0xc |
                                             (ushort)(SUB161(auVar58 >> 0x6f,0) & 1) << 0xd |
                                             (ushort)(SUB161(auVar58 >> 0x77,0) & 1) << 0xe |
                                            (ushort)(byte)(auVar58[0xf] >> 7) << 0xf);
                    pauVar53 = pauStack_220;
                    pauVar56 = pauStack_238;
                    do {
                      if ((short)uVar51 == 0) {
                        do {
                          auVar58 = *pauVar49;
                          pauVar56 = pauVar56 + -0x28;
                          pauVar49 = pauVar49 + 1;
                          uVar51 = (ushort)((ushort)(SUB161(auVar58 >> 7,0) & 1) |
                                            (ushort)(SUB161(auVar58 >> 0xf,0) & 1) << 1 |
                                            (ushort)(SUB161(auVar58 >> 0x17,0) & 1) << 2 |
                                            (ushort)(SUB161(auVar58 >> 0x1f,0) & 1) << 3 |
                                            (ushort)(SUB161(auVar58 >> 0x27,0) & 1) << 4 |
                                            (ushort)(SUB161(auVar58 >> 0x2f,0) & 1) << 5 |
                                            (ushort)(SUB161(auVar58 >> 0x37,0) & 1) << 6 |
                                            (ushort)(SUB161(auVar58 >> 0x3f,0) & 1) << 7 |
                                            (ushort)(SUB161(auVar58 >> 0x47,0) & 1) << 8 |
                                            (ushort)(SUB161(auVar58 >> 0x4f,0) & 1) << 9 |
                                            (ushort)(SUB161(auVar58 >> 0x57,0) & 1) << 10 |
                                            (ushort)(SUB161(auVar58 >> 0x5f,0) & 1) << 0xb |
                                            (ushort)(SUB161(auVar58 >> 0x67,0) & 1) << 0xc |
                                            (ushort)(SUB161(auVar58 >> 0x6f,0) & 1) << 0xd |
                                            (ushort)(SUB161(auVar58 >> 0x77,0) & 1) << 0xe |
                                           (ushort)(byte)(auVar58[0xf] >> 7) << 0xf) ^ 0xffff;
                        } while (uVar51 == 0);
                      }
                      uVar2 = 0;
                      for (uVar3 = uVar51; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
                        uVar2 = uVar2 + 1;
                      }
                      uVar45 = *(ulonglong *)((longlong)pauVar56 + (ulonglong)uVar2 * -0x28 + -0x20)
                      ;
                      if (uVar45 != 0) {
                        pub_1406abac0(*(byte **)((longlong)pauVar56 +
                                                (ulonglong)uVar2 * -0x28 + -0x18),uVar45,1);
                      }
                      uVar51 = uVar51 - 1 & uVar51;
                      pauVar53 = (undefined1 (*) [16])(pauVar53[-1] + 0xf);
                    } while (pauVar53 != (undefined1 (*) [16])0x0);
                  }
                  param_4 = lStack_150;
                  param_1 = pcStack_158;
                  uVar45 = lStack_240 * 0x28 + 0x37U & 0xfffffffffffffff0;
                  arg1 = lStack_240 + uVar45 + 0x11;
                  if (arg1 != 0) {
                    pub_1406abac0((byte *)((longlong)pauStack_1f0 - uVar45),arg1,0x10);
                  }
                }
                uStack_210 = piStack_180;
                pauStack_220 = pauVar50;
                piStack_218 = (int *)pauVar52;
                pauStack_238 = pauVar54;
                uStack_230 = uVar4;
                uStack_22c = uVar5;
                uStack_228 = uVar6;
                uStack_224 = uVar7;
                goto LAB_142317220;
              }
              uStack_ac = CONCAT11(cStack_f1,cStack_f2);
              uStack_b0 = CONCAT13(cStack_f3,CONCAT12(cStack_f4,CONCAT11(cStack_f5,cStack_f6)));
              puVar55 = (undefined *)
                        CONCAT17(cStack_e9,
                                 CONCAT16(cStack_ea,
                                          CONCAT15(cStack_eb,
                                                   CONCAT14(cStack_ec,
                                                            CONCAT13(cStack_ed,
                                                                     CONCAT12(cStack_ee,
                                                                              CONCAT11(cStack_ef,
                                                                                       cStack_f0))))
                                                  )));
              unaff_XMM7_Da = CONCAT22(uStack_e6,uStack_e8);
              unaff_XMM7_Dc = CONCAT22(uStack_de,uStack_e0);
              pauStack_1c8 = (undefined1 (*) [16])CONCAT44(uStack_d4,CONCAT22(uStack_d6,uStack_d8));
              piStack_1c0 = (int *)CONCAT44(uStack_cc,CONCAT22(uStack_ce,uStack_d0));
              uStack_1b8 = CONCAT62(uStack_c6,uStack_c8);
              pauStack_208 = (undefined1 (*) [16])CONCAT62(uStack_be,uStack_c0);
              piStack_200 = (int *)CONCAT62(uStack_b6,uStack_b8);
              pdb_140976060(&uStack_1a8);
            }
            else {
              piVar48 = (int *)(ulonglong)bStack_f7;
              uStack_b0 = CONCAT13(cStack_f3,CONCAT12(cStack_f4,CONCAT11(cStack_f5,cStack_f6)));
              uStack_ac = CONCAT11(cStack_f1,cStack_f2);
              puVar55 = (undefined *)
                        CONCAT17(cStack_e9,
                                 CONCAT16(cStack_ea,
                                          CONCAT15(cStack_eb,
                                                   CONCAT14(cStack_ec,
                                                            CONCAT13(cStack_ed,
                                                                     CONCAT12(cStack_ee,
                                                                              CONCAT11(cStack_ef,
                                                                                       cStack_f0))))
                                                  )));
              unaff_XMM7_Da = CONCAT22(uStack_e6,uStack_e8);
              unaff_XMM7_Dc = CONCAT22(uStack_de,uStack_e0);
              uStack_1b8 = CONCAT62(uStack_c6,uStack_c8);
              pauStack_1c8 = (undefined1 (*) [16])CONCAT44(uStack_d4,CONCAT22(uStack_d6,uStack_d8));
              piStack_1c0 = (int *)CONCAT44(uStack_cc,CONCAT22(uStack_ce,uStack_d0));
              pauStack_208 = (undefined1 (*) [16])CONCAT62(uStack_be,uStack_c0);
              piStack_200 = (int *)CONCAT62(uStack_b6,uStack_b8);
              unaff_XMM7_Db = uStack_e4;
              unaff_XMM7_Dd = uStack_dc;
              cVar43 = cStack_f8;
            }
          }
          else {
            pdb_140dca950(&cStack_f8);
            auVar59[0] = -(cStack_f8 == cVar24);
            auVar59[1] = -(bStack_f7 == bVar25);
            auVar59[2] = -(cStack_f6 == cVar26);
            auVar59[3] = -(cStack_f5 == cVar27);
            auVar59[4] = -(cStack_f4 == cVar28);
            auVar59[5] = -(cStack_f3 == cVar29);
            auVar59[6] = -(cStack_f2 == cVar30);
            auVar59[7] = -(cStack_f1 == cVar31);
            auVar59[8] = -(cStack_f0 == cVar32);
            auVar59[9] = -(cStack_ef == cVar33);
            auVar59[10] = -(cStack_ee == cVar34);
            auVar59[0xb] = -(cStack_ed == cVar35);
            auVar59[0xc] = -(cStack_ec == cVar36);
            auVar59[0xd] = -(cStack_eb == cVar37);
            auVar59[0xe] = -(cStack_ea == cVar38);
            auVar59[0xf] = -(cStack_e9 == cVar39);
            if ((ushort)((ushort)(SUB161(auVar59 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar59 >> 0xf,0) & 1) << 1 |
                         (ushort)(SUB161(auVar59 >> 0x17,0) & 1) << 2 |
                         (ushort)(SUB161(auVar59 >> 0x1f,0) & 1) << 3 |
                         (ushort)(SUB161(auVar59 >> 0x27,0) & 1) << 4 |
                         (ushort)(SUB161(auVar59 >> 0x2f,0) & 1) << 5 |
                         (ushort)(SUB161(auVar59 >> 0x37,0) & 1) << 6 |
                         (ushort)(SUB161(auVar59 >> 0x3f,0) & 1) << 7 |
                         (ushort)(SUB161(auVar59 >> 0x47,0) & 1) << 8 |
                         (ushort)(SUB161(auVar59 >> 0x4f,0) & 1) << 9 |
                         (ushort)(SUB161(auVar59 >> 0x57,0) & 1) << 10 |
                         (ushort)(SUB161(auVar59 >> 0x5f,0) & 1) << 0xb |
                         (ushort)(SUB161(auVar59 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auVar59 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auVar59 >> 0x77,0) & 1) << 0xe |
                        (ushort)(auVar59[0xf] >> 7) << 0xf) == 0xffff) goto LAB_142317598;
            cVar43 = '\x19';
            if (*piVar48 == 1) {
              if (*(longlong *)((longlong)piVar48 + 8) != 0) {
                *(longlong *)((longlong)piVar48 + 8) = *(longlong *)((longlong)piVar48 + 8) + -1;
                goto LAB_142317f27;
              }
LAB_142317f24:
              cVar43 = '0';
            }
          }
LAB_142317f27:
          uVar47 = SUB81(piVar48,0);
          uVar60 = unaff_XMM7_Da;
          uVar61 = unaff_XMM7_Db;
          uVar62 = unaff_XMM7_Dc;
          uVar63 = unaff_XMM7_Dd;
          uStack_a8 = uStack_b0;
          uStack_a4 = uStack_ac;
          uStack_130 = pauStack_208;
          piStack_128 = piStack_200;
          uStack_148 = pauStack_1c8;
          uStack_140 = piStack_1c0;
          uStack_138 = uStack_1b8;
          pauVar54 = pauStack_238;
          pauVar50 = pauStack_220;
          piVar40 = piStack_108;
          puVar41 = puStack_100;
          goto joined_r0x000142317f79;
        }
        if ((int)param_3 == 2) goto LAB_14231786f;
        pdb_142310000(&cStack_f8,&piStack_118);
      } while (cStack_f8 == '2');
      piVar48 = (int *)(ulonglong)bStack_f7;
      uStack_1e8 = CONCAT13(cStack_f3,CONCAT12(cStack_f4,CONCAT11(cStack_f5,cStack_f6)));
      uStack_1e4 = CONCAT11(cStack_f1,cStack_f2);
      unaff_XMM8_Da = CONCAT22(uStack_e6,uStack_e8);
      unaff_XMM8_Dc = CONCAT22(uStack_de,uStack_e0);
      uStack_1a8 = (undefined1 (*) [16])CONCAT44(uStack_d4,CONCAT22(uStack_d6,uStack_d8));
      uStack_1a0 = (int *)CONCAT44(uStack_cc,CONCAT22(uStack_ce,uStack_d0));
      uStack_198 = CONCAT62(uStack_c6,uStack_c8);
      uStack_190 = (undefined1 (*) [16])CONCAT62(uStack_be,uStack_c0);
      pauStack_188 = (undefined1 (*) [16])CONCAT62(uStack_b6,uStack_b8);
      puVar55 = (undefined *)
                CONCAT17(cStack_e9,
                         CONCAT16(cStack_ea,
                                  CONCAT15(cStack_eb,
                                           CONCAT14(cStack_ec,
                                                    CONCAT13(cStack_ed,
                                                             CONCAT12(cStack_ee,
                                                                      CONCAT11(cStack_ef,cStack_f0))
                                                            )))));
      uVar61 = uStack_e4;
      uVar63 = uStack_dc;
      cVar43 = cStack_f8;
joined_r0x000142317b38:
      uVar47 = SUB81(piVar48,0);
      uVar60 = unaff_XMM8_Da;
      uVar62 = unaff_XMM8_Dc;
      uStack_a8 = uStack_1e8;
      uStack_a4 = uStack_1e4;
      uStack_130 = uStack_190;
      piStack_128 = (int *)pauStack_188;
      uStack_148 = uStack_1a8;
      uStack_140 = uStack_1a0;
      uStack_138 = uStack_198;
      pauVar50 = pauStack_220;
      piVar40 = piStack_108;
      puVar41 = puStack_100;
joined_r0x000142317f79:
      uStack_1a0 = (int *)puVar55;
      if (pauVar54 != (undefined1 (*) [16])0x0) {
        piStack_108 = (int *)CONCAT44(uStack_22c,uStack_230);
joined_r0x000142317f98:
        puStack_100 = puVar55;
        uVar47 = SUB81(piVar48,0);
        uStack_1a0 = (int *)puStack_100;
        if (piStack_108 != (int *)0x0) {
          pcStack_158 = param_1;
          lStack_150 = param_4;
          if (pauVar50 != (undefined1 (*) [16])0x0) {
            auVar58 = *pauVar54;
            pauVar52 = pauVar54 + 1;
            uVar51 = ~(uint)(ushort)((ushort)(SUB161(auVar58 >> 7,0) & 1) |
                                     (ushort)(SUB161(auVar58 >> 0xf,0) & 1) << 1 |
                                     (ushort)(SUB161(auVar58 >> 0x17,0) & 1) << 2 |
                                     (ushort)(SUB161(auVar58 >> 0x1f,0) & 1) << 3 |
                                     (ushort)(SUB161(auVar58 >> 0x27,0) & 1) << 4 |
                                     (ushort)(SUB161(auVar58 >> 0x2f,0) & 1) << 5 |
                                     (ushort)(SUB161(auVar58 >> 0x37,0) & 1) << 6 |
                                     (ushort)(SUB161(auVar58 >> 0x3f,0) & 1) << 7 |
                                     (ushort)(SUB161(auVar58 >> 0x47,0) & 1) << 8 |
                                     (ushort)(SUB161(auVar58 >> 0x4f,0) & 1) << 9 |
                                     (ushort)(SUB161(auVar58 >> 0x57,0) & 1) << 10 |
                                     (ushort)(SUB161(auVar58 >> 0x5f,0) & 1) << 0xb |
                                     (ushort)(SUB161(auVar58 >> 0x67,0) & 1) << 0xc |
                                     (ushort)(SUB161(auVar58 >> 0x6f,0) & 1) << 0xd |
                                     (ushort)(SUB161(auVar58 >> 0x77,0) & 1) << 0xe |
                                    (ushort)(byte)(auVar58[0xf] >> 7) << 0xf);
            pauVar49 = pauVar54;
            do {
              if ((short)uVar51 == 0) {
                do {
                  auVar58 = *pauVar52;
                  pauVar49 = pauVar49 + -0x28;
                  pauVar52 = pauVar52 + 1;
                  uVar51 = (ushort)((ushort)(SUB161(auVar58 >> 7,0) & 1) |
                                    (ushort)(SUB161(auVar58 >> 0xf,0) & 1) << 1 |
                                    (ushort)(SUB161(auVar58 >> 0x17,0) & 1) << 2 |
                                    (ushort)(SUB161(auVar58 >> 0x1f,0) & 1) << 3 |
                                    (ushort)(SUB161(auVar58 >> 0x27,0) & 1) << 4 |
                                    (ushort)(SUB161(auVar58 >> 0x2f,0) & 1) << 5 |
                                    (ushort)(SUB161(auVar58 >> 0x37,0) & 1) << 6 |
                                    (ushort)(SUB161(auVar58 >> 0x3f,0) & 1) << 7 |
                                    (ushort)(SUB161(auVar58 >> 0x47,0) & 1) << 8 |
                                    (ushort)(SUB161(auVar58 >> 0x4f,0) & 1) << 9 |
                                    (ushort)(SUB161(auVar58 >> 0x57,0) & 1) << 10 |
                                    (ushort)(SUB161(auVar58 >> 0x5f,0) & 1) << 0xb |
                                    (ushort)(SUB161(auVar58 >> 0x67,0) & 1) << 0xc |
                                    (ushort)(SUB161(auVar58 >> 0x6f,0) & 1) << 0xd |
                                    (ushort)(SUB161(auVar58 >> 0x77,0) & 1) << 0xe |
                                   (ushort)(byte)(auVar58[0xf] >> 7) << 0xf) ^ 0xffff;
                } while (uVar51 == 0);
              }
              uVar2 = 0;
              for (uVar3 = uVar51; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
                uVar2 = uVar2 + 1;
              }
              uVar45 = *(ulonglong *)((longlong)pauVar49 + (ulonglong)uVar2 * -0x28 + -0x20);
              if (uVar45 != 0) {
                pub_1406abac0(*(byte **)((longlong)pauVar49 + (ulonglong)uVar2 * -0x28 + -0x18),
                              uVar45,1);
              }
              uVar51 = uVar51 - 1 & uVar51;
              pauVar50 = (undefined1 (*) [16])(pauVar50[-1] + 0xf);
            } while (pauVar50 != (undefined1 (*) [16])0x0);
          }
          uVar45 = (longlong)piStack_108 * 0x28 + 0x37U & 0xfffffffffffffff0;
          pcVar46 = (char *)((longlong)piStack_108 + uVar45 + 0x11);
          uStack_1a0 = (int *)puStack_100;
          param_4 = lStack_150;
          param_1 = pcStack_158;
          piVar40 = piStack_108;
          puVar41 = puStack_100;
          if (pcVar46 != (char *)0x0) {
            pub_1406abac0((byte *)((longlong)pauVar54 - uVar45),(ulonglong)pcVar46,0x10);
            uStack_1a0 = (int *)puStack_100;
            param_4 = lStack_150;
            param_1 = pcStack_158;
            piVar40 = piStack_108;
            puVar41 = puStack_100;
          }
        }
      }
LAB_142317c43:
      puStack_100 = puVar41;
      piStack_108 = piVar40;
      uStack_1a8 = (undefined1 (*) [16])
                   CONCAT26(uStack_a4,CONCAT42(uStack_a8,CONCAT11(uVar47,cVar43)));
      uStack_198 = CONCAT44(uVar61,uVar60);
      uStack_190 = (undefined1 (*) [16])CONCAT44(uVar63,uVar62);
      pauStack_188 = uStack_148;
      piStack_180 = uStack_140;
      uStack_178 = (undefined4)uStack_138;
      uStack_174 = uStack_138._4_4_;
      uStack_170 = (undefined4)uStack_130;
      uStack_16c = uStack_130._4_4_;
      uVar45 = uStack_248;
      if (cStack_a1 != '\0') {
        uVar45 = 0;
      }
      piStack_168 = piStack_128;
      if (param_4 == 0) {
        uVar45 = 0;
      }
      pdb_140dca990(&cStack_f8,&uStack_1a8,uVar45,param_4);
      *(ulonglong *)(param_1 + 0x38) = CONCAT62(uStack_be,uStack_c0);
      *(ulonglong *)(param_1 + 0x40) = CONCAT62(uStack_b6,uStack_b8);
      *(ulonglong *)(param_1 + 0x20) = CONCAT44(uStack_d4,CONCAT22(uStack_d6,uStack_d8));
      *(ulonglong *)(param_1 + 0x28) = CONCAT44(uStack_cc,CONCAT22(uStack_ce,uStack_d0));
      *(ulonglong *)(param_1 + 0x30) = CONCAT62(uStack_c6,uStack_c8);
      *(ushort *)param_1 = CONCAT11(bStack_f7,cStack_f8);
      *(ushort *)(param_1 + 6) = CONCAT11(cStack_f1,cStack_f2);
      *(uint *)(param_1 + 2) = CONCAT13(cStack_f3,CONCAT12(cStack_f4,CONCAT11(cStack_f5,cStack_f6)))
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
      *(ulonglong *)(param_1 + 0x10) = CONCAT44(uStack_e4,CONCAT22(uStack_e6,uStack_e8));
      *(ulonglong *)(param_1 + 0x18) = CONCAT44(uStack_dc,CONCAT22(uStack_de,uStack_e0));
    }
    else {
      *(ulonglong *)(param_1 + 0x40) = CONCAT62(uStack_b6,uStack_b8);
      *(ulonglong *)(param_1 + 0x30) = CONCAT62(uStack_c6,uStack_c8);
      *(ulonglong *)(param_1 + 0x38) = CONCAT62(uStack_be,uStack_c0);
      *(ulonglong *)(param_1 + 0x20) = CONCAT44(uStack_d4,CONCAT22(uStack_d6,uStack_d8));
      *(ulonglong *)(param_1 + 0x28) = CONCAT44(uStack_cc,CONCAT22(uStack_ce,uStack_d0));
      *(ulonglong *)(param_1 + 0x10) = CONCAT44(uStack_e4,CONCAT22(uStack_e6,uStack_e8));
      *(ulonglong *)(param_1 + 0x18) = CONCAT44(uStack_dc,CONCAT22(uStack_de,uStack_e0));
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

