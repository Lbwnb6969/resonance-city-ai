// VA 0x140a289f0, PDB extent 3229 bytes
// country_core::systems::steam::missing_mods::refresh_missing_mods_on_pack_change
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/steam/missing_mods.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::steam::missing_mods::refresh_missing_mods_on_pack_change
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/steam/missing_mods.rs
   Extent: 3229 */

void pdb_140a289f0(undefined8 *param_1,undefined8 *param_2,longlong *param_3,undefined8 *param_4,
                  longlong *param_5,undefined8 *param_6)

{
  ulonglong *puVar1;
  char *pcVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
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
  char cVar25;
  char cVar26;
  char cVar27;
  byte *pbVar28;
  byte *pbVar29;
  ushort uVar30;
  int iVar31;
  longlong *plVar32;
  ulonglong uVar33;
  longlong lVar34;
  longlong lVar35;
  ulonglong *puVar36;
  longlong *plVar37;
  longlong lVar38;
  ulonglong uVar39;
  ulonglong uVar40;
  uint uVar41;
  ulonglong uVar42;
  ulonglong *puVar43;
  ulonglong uVar44;
  ulonglong uVar45;
  ulonglong *puVar46;
  byte *pbVar47;
  byte bVar48;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 unaff_XMM6_Ba;
  undefined1 unaff_XMM6_Bb;
  undefined1 unaff_XMM6_Bc;
  undefined1 unaff_XMM6_Bd;
  undefined1 unaff_XMM6_Be;
  undefined1 unaff_XMM6_Bf;
  undefined1 unaff_XMM6_Bg;
  undefined1 unaff_XMM6_Bh;
  undefined1 unaff_XMM6_Bi;
  undefined1 unaff_XMM6_Bj;
  undefined1 unaff_XMM6_Bk;
  undefined1 unaff_XMM6_Bl;
  undefined1 unaff_XMM6_Bm;
  undefined1 unaff_XMM6_Bn;
  undefined1 unaff_XMM6_Bo;
  undefined1 unaff_XMM6_Bp;
  undefined1 auVar51 [16];
  ulonglong *puVar52;
  ulonglong *puVar53;
  longlong lVar54;
  ulonglong *puVar55;
  byte *pbStack_280;
  byte *pbStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  ulonglong uStack_248;
  ulonglong uStack_240;
  byte *pbStack_238;
  byte *pbStack_230;
  undefined8 uStack_228;
  longlong lStack_220;
  ulonglong *puStack_218;
  longlong lStack_210;
  undefined4 *puStack_208;
  ulonglong uStack_200;
  longlong lStack_1f8;
  undefined8 uStack_1f0;
  ulonglong uStack_1e8;
  byte *pbStack_1e0;
  byte *pbStack_1d8;
  byte *pbStack_1d0;
  longlong lStack_1c8;
  longlong *plStack_1c0;
  ulonglong uStack_1b8;
  byte *pbStack_1b0;
  byte *pbStack_1a8;
  byte *pbStack_1a0;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  int iStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  ulonglong uStack_170;
  ulonglong uStack_168;
  ulonglong uStack_158;
  byte *pbStack_150;
  byte *pbStack_148;
  byte *pbStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  ulonglong uStack_110;
  ulonglong uStack_108;
  undefined8 uStack_e8;
  undefined8 uStack_c0;
  ulonglong *puStack_b0;
  longlong lStack_a8;
  longlong lStack_a0;
  ulonglong *puStack_98;
  ulonglong *puStack_90;
  undefined1 uStack_82;
  undefined1 uStack_81;
  undefined8 uStack_80;
  
  uStack_80 = 0xfffffffffffffffe;
  puVar52 = (ulonglong *)*param_6;
  lVar54 = param_6[1];
  uVar40 = *puVar52;
  uVar44 = 0;
  uVar45 = uVar40 - *(ulonglong *)(lVar54 + 0x18);
  if (uVar40 < *(ulonglong *)(lVar54 + 0x18)) {
    uVar45 = uVar44;
  }
  uVar33 = uVar40 - *(ulonglong *)(lVar54 + 0x38);
  if (uVar40 < *(ulonglong *)(lVar54 + 0x38)) {
    uVar33 = uVar44;
  }
  uVar40 = *(ulonglong *)(lVar54 + 0x30);
  uVar42 = uVar40 - uVar33;
  if (uVar40 < uVar33) {
    uVar42 = uVar44;
  }
  uVar4 = *(ulonglong *)(lVar54 + 0x10);
  uVar39 = uVar4 - uVar45;
  if (uVar4 < uVar45) {
    uVar39 = uVar44;
  }
  uVar44 = *(ulonglong *)(lVar54 + 0x40);
  *puVar52 = uVar44 - (uVar39 + uVar42);
  if (uVar4 >= uVar45 && uVar4 - uVar45 != 0 || uVar40 >= uVar33 && uVar40 - uVar33 != 0) {
    *puVar52 = uVar44;
    param_1 = (undefined8 *)*param_1;
    uStack_c0 = *param_2;
    uStack_138 = (undefined1 (*) [16])*param_1;
    uStack_128 = *uStack_138 + param_1[1] + 1;
    auVar49 = *uStack_138;
    uStack_130 = uStack_138 + 1;
    uStack_118 = param_1[3];
    pbStack_140 = (byte *)(param_1 + 0x12);
    if (param_1[0x12] == 0) {
      pbStack_140 = (byte *)0x0;
    }
    pbStack_150 = (byte *)(param_1 + 0x24);
    if (param_1[0x24] == 0) {
      pbStack_150 = (byte *)0x0;
    }
    uStack_158 = 1;
    pbStack_148 = (byte *)0x1;
    uStack_120 = (byte *)CONCAT62(uStack_120._2_6_,
                                  ~((ushort)(SUB161(auVar49 >> 7,0) & 1) |
                                    (ushort)(SUB161(auVar49 >> 0xf,0) & 1) << 1 |
                                    (ushort)(SUB161(auVar49 >> 0x17,0) & 1) << 2 |
                                    (ushort)(SUB161(auVar49 >> 0x1f,0) & 1) << 3 |
                                    (ushort)(SUB161(auVar49 >> 0x27,0) & 1) << 4 |
                                    (ushort)(SUB161(auVar49 >> 0x2f,0) & 1) << 5 |
                                    (ushort)(SUB161(auVar49 >> 0x37,0) & 1) << 6 |
                                    (ushort)(SUB161(auVar49 >> 0x3f,0) & 1) << 7 |
                                    (ushort)(SUB161(auVar49 >> 0x47,0) & 1) << 8 |
                                    (ushort)(SUB161(auVar49 >> 0x4f,0) & 1) << 9 |
                                    (ushort)(SUB161(auVar49 >> 0x57,0) & 1) << 10 |
                                    (ushort)(SUB161(auVar49 >> 0x5f,0) & 1) << 0xb |
                                    (ushort)(SUB161(auVar49 >> 0x67,0) & 1) << 0xc |
                                    (ushort)(SUB161(auVar49 >> 0x6f,0) & 1) << 0xd |
                                    (ushort)(SUB161(auVar49 >> 0x77,0) & 1) << 0xe |
                                   (ushort)(byte)(auVar49[0xf] >> 7) << 0xf));
    uStack_110 = 0;
    uStack_e8 = 0;
    pdb_14091be00(&pbStack_238,&uStack_158);
    pdb_140a27d90(&lStack_220,&pbStack_238,*(undefined8 *)(*param_3 + 0x20),
                  *(undefined8 *)(*param_3 + 0x28));
    puStack_208 = (undefined4 *)param_5[2];
    lStack_a0 = CONCAT44(lStack_a0._4_4_,*(undefined4 *)((longlong)param_5 + 0x1c));
    *puStack_208 = *(undefined4 *)((longlong)param_5 + 0x1c);
    param_5 = (longlong *)*param_5;
    uStack_81 = 1;
    plVar37 = &lStack_220;
    pdb_1415df560(param_5);
    lVar54 = param_5[1];
    lVar34 = param_5[2];
    uStack_81 = 1;
    plVar32 = (longlong *)pdb_140f3bda0();
    if ((char)plVar32[2] == '\x01') {
      uStack_138 = (undefined1 (*) [16])*plVar32;
      plVar37 = (longlong *)plVar32[1];
    }
    else {
      uStack_81 = 1;
      uStack_138 = (undefined1 (*) [16])pdb_140f4fd10();
      *plVar32 = (longlong)uStack_138;
      plVar32[1] = (longlong)plVar37;
      *(undefined1 *)(plVar32 + 2) = 1;
    }
    *plVar32 = (longlong)uStack_138 + 1;
    pbStack_148 = _DAT_143038b10;
    pbStack_140 = _UNK_143038b18;
    uStack_158 = _DAT_143038b00;
    pbStack_150 = _UNK_143038b08;
    uStack_130 = (undefined1 (*) [16])plVar37;
    if (lVar34 != 0) {
      pdb_142dafcb0(&uStack_158,lVar34,&uStack_138,1);
      lVar38 = 0;
      do {
        uVar40 = *(ulonglong *)(lVar54 + lVar38 * 0x58);
        pdb_140f60be0(&pbStack_280,lVar54 + lVar38 * 0x58 + 8);
        pbStack_1a8 = pbStack_278;
        pbStack_1a0 = uStack_270;
        pbStack_1b0 = pbStack_280;
        uStack_1b8 = uVar40;
        pdb_1417b40f0(&uStack_158,&uStack_1b8);
        lVar38 = lVar38 + 1;
      } while (lVar38 != lVar34);
    }
    lStack_1c8 = (longlong)uStack_138;
    plStack_1c0 = (longlong *)uStack_130;
    pbStack_1d8 = pbStack_148;
    pbStack_1d0 = pbStack_140;
    uStack_1e8 = uStack_158;
    pbStack_1e0 = pbStack_150;
    puVar46 = puStack_218 + lStack_210 * 0xb;
    lStack_a8 = lStack_220;
    uStack_1f0 = *param_4;
    iVar8 = -(uint)(CONCAT13(unaff_XMM6_Bd,
                             CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))) ==
                   CONCAT13(unaff_XMM6_Bd,
                            CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))));
    iVar9 = -(uint)(CONCAT13(unaff_XMM6_Bh,
                             CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be))) ==
                   CONCAT13(unaff_XMM6_Bh,
                            CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be))));
    iVar10 = -(uint)(CONCAT13(unaff_XMM6_Bl,
                              CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi))) ==
                    CONCAT13(unaff_XMM6_Bl,
                             CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi))));
    iVar11 = -(uint)(CONCAT13(unaff_XMM6_Bp,
                              CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm))) ==
                    CONCAT13(unaff_XMM6_Bp,
                             CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm))));
    puStack_b0 = puStack_218;
    puVar43 = puStack_218;
    puVar52 = puStack_218;
    puVar53 = puStack_218;
    lVar54 = lStack_220;
    puVar55 = puVar46;
    puStack_90 = puVar46;
LAB_140a28ce8:
    puVar36 = puVar46;
    if (puVar43 != puVar46) {
      puVar53 = puVar43 + 0xb;
      uVar40 = *puVar43;
      uStack_248 = puVar43[9];
      uStack_240 = puVar43[10];
      uStack_258 = puVar43[7];
      uStack_250 = puVar43[8];
      uStack_268 = puVar43[5];
      uStack_260 = puVar43[6];
      pbStack_278 = (byte *)puVar43[3];
      uStack_270 = (byte *)puVar43[4];
      puVar1 = puVar43 + 1;
      pbStack_280 = (byte *)puVar43[2];
      puVar36 = puVar53;
      if (uVar40 == 2) goto LAB_140a29028;
      uStack_270._4_4_ = (undefined4)((ulonglong)uStack_270 >> 0x20);
      uStack_268._4_4_ = (undefined4)(uStack_268 >> 0x20);
      uStack_260._4_4_ = (undefined4)(uStack_260 >> 0x20);
      uStack_258._4_4_ = (int)(uStack_258 >> 0x20);
      uStack_250._4_4_ = (undefined4)(uStack_250 >> 0x20);
      uStack_180 = (undefined4)uStack_258;
      iStack_17c = uStack_258._4_4_;
      uStack_178 = (undefined4)uStack_250;
      uStack_174 = uStack_250._4_4_;
      uStack_190 = (undefined4)uStack_268;
      uStack_18c = uStack_268._4_4_;
      uStack_188 = (undefined4)uStack_260;
      uStack_184 = uStack_260._4_4_;
      uStack_198 = (undefined4)uStack_270;
      uStack_194 = uStack_270._4_4_;
      puVar43 = puVar53;
      uVar45 = uStack_200;
      lVar34 = lStack_1f8;
      uStack_1b8 = uVar40;
      pbStack_1b0 = (byte *)*puVar1;
      pbStack_1a8 = pbStack_280;
      pbStack_1a0 = pbStack_278;
      uStack_170 = uStack_248;
      uStack_168 = uStack_240;
      if (pbStack_1d0 != (byte *)0x0) {
        uStack_82 = 1;
        uVar33 = pdb_1417c53b0(&lStack_1c8);
        pbVar29 = pbStack_1a0;
        pbVar47 = pbStack_1a8;
        uVar40 = uStack_1b8;
        pbVar28 = pbStack_1e0;
        uVar44 = uStack_1e8;
        bVar48 = (byte)(uVar33 >> 0x39);
        auVar49 = ZEXT216(CONCAT11(bVar48,bVar48));
        auVar49 = pshuflw(auVar49,auVar49,0);
        lVar38 = 0;
        puStack_98 = puVar53;
        while( true ) {
          uVar33 = uVar33 & (ulonglong)pbVar28;
          pcVar2 = (char *)(uVar44 + uVar33);
          cVar12 = *pcVar2;
          cVar13 = pcVar2[1];
          cVar14 = pcVar2[2];
          cVar15 = pcVar2[3];
          cVar16 = pcVar2[4];
          cVar17 = pcVar2[5];
          cVar18 = pcVar2[6];
          cVar19 = pcVar2[7];
          cVar20 = pcVar2[8];
          cVar21 = pcVar2[9];
          cVar22 = pcVar2[10];
          cVar23 = pcVar2[0xb];
          cVar24 = pcVar2[0xc];
          cVar25 = pcVar2[0xd];
          cVar26 = pcVar2[0xe];
          cVar27 = pcVar2[0xf];
          auVar50[0] = -(cVar12 == auVar49[0]);
          auVar50[1] = -(cVar13 == auVar49[1]);
          auVar50[2] = -(cVar14 == auVar49[2]);
          auVar50[3] = -(cVar15 == auVar49[3]);
          auVar50[4] = -(cVar16 == auVar49[4]);
          auVar50[5] = -(cVar17 == auVar49[5]);
          auVar50[6] = -(cVar18 == auVar49[6]);
          auVar50[7] = -(cVar19 == auVar49[7]);
          auVar50[8] = -(cVar20 == auVar49[0]);
          auVar50[9] = -(cVar21 == auVar49[1]);
          auVar50[10] = -(cVar22 == auVar49[2]);
          auVar50[0xb] = -(cVar23 == auVar49[3]);
          auVar50[0xc] = -(cVar24 == auVar49[4]);
          auVar50[0xd] = -(cVar25 == auVar49[5]);
          auVar50[0xe] = -(cVar26 == auVar49[6]);
          auVar50[0xf] = -(cVar27 == auVar49[7]);
          uVar30 = (ushort)(SUB161(auVar50 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar50 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar50 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar50 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar50 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar50 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar50 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar50 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar50 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar50 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar50 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar50 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar50 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar50 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar50 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar50[0xf] >> 7) << 0xf;
          uVar41 = (uint)uVar30;
          puVar53 = puVar43;
          uVar45 = uStack_200;
          lVar34 = lStack_1f8;
          puVar43 = puStack_98;
          puVar46 = puStack_90;
          while (lStack_1f8 = lVar38, uStack_200 = uVar33, puStack_98 = puVar43,
                puStack_90 = puVar46, uVar30 != 0) {
            uVar6 = 0;
            for (uVar7 = uVar41; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
              uVar6 = uVar6 + 1;
            }
            lVar34 = uVar44 + (uVar6 + uStack_200 & (ulonglong)pbVar28) * -0x20;
            if ((((int)uVar40 == *(int *)(lVar34 + -0x20)) && (pbVar29 == *(byte **)(lVar34 + -8)))
               && (iVar31 = pub_142e32750(pbVar47,*(undefined8 *)(lVar34 + -0x10),pbVar29),
                  iVar31 == 0)) {
              if (pbStack_1b0 != (byte *)0x0) {
                pub_1406abac0(pbVar47,(ulonglong)pbStack_1b0,1);
              }
              puVar46 = puStack_90;
              if (CONCAT44(uStack_194,uStack_198) != 0) {
                pub_1406abac0((byte *)CONCAT44(uStack_18c,uStack_190),
                              CONCAT44(uStack_194,uStack_198) << 3,8);
              }
              puVar43 = puStack_98;
              lVar34 = CONCAT44(iStack_17c,uStack_180);
              if (-1 < iStack_17c) {
                pbVar28 = (byte *)CONCAT44(uStack_174,uStack_178);
                if (uStack_170 != 0) {
                  pbVar47 = pbVar28 + 8;
                  uVar40 = uStack_170;
                  do {
                    if (*(ulonglong *)(pbVar47 + -8) != 0) {
                      pub_1406abac0(*(byte **)pbVar47,*(ulonglong *)(pbVar47 + -8),1);
                    }
                    pbVar47 = pbVar47 + 0x28;
                    uVar40 = uVar40 - 1;
                  } while (uVar40 != 0);
                }
                if (lVar34 != 0) {
                  pub_1406abac0(pbVar28,lVar34 * 0x28,8);
                }
              }
              goto LAB_140a28ce8;
            }
            uVar30 = (ushort)(uVar41 - 1) & (ushort)uVar41;
            uVar41 = CONCAT22((short)(uVar41 - 1 >> 0x10),uVar30);
            uVar33 = uStack_200;
            lVar38 = lStack_1f8;
            uVar45 = uStack_200;
            lVar34 = lStack_1f8;
            puVar43 = puStack_98;
            puVar46 = puStack_90;
          }
          auVar51[0] = -(cVar12 == (char)iVar8);
          auVar51[1] = -(cVar13 == (char)((uint)iVar8 >> 8));
          auVar51[2] = -(cVar14 == (char)((uint)iVar8 >> 0x10));
          auVar51[3] = -(cVar15 == (char)((uint)iVar8 >> 0x18));
          auVar51[4] = -(cVar16 == (char)iVar9);
          auVar51[5] = -(cVar17 == (char)((uint)iVar9 >> 8));
          auVar51[6] = -(cVar18 == (char)((uint)iVar9 >> 0x10));
          auVar51[7] = -(cVar19 == (char)((uint)iVar9 >> 0x18));
          auVar51[8] = -(cVar20 == (char)iVar10);
          auVar51[9] = -(cVar21 == (char)((uint)iVar10 >> 8));
          auVar51[10] = -(cVar22 == (char)((uint)iVar10 >> 0x10));
          auVar51[0xb] = -(cVar23 == (char)((uint)iVar10 >> 0x18));
          auVar51[0xc] = -(cVar24 == (char)iVar11);
          auVar51[0xd] = -(cVar25 == (char)((uint)iVar11 >> 8));
          auVar51[0xe] = -(cVar26 == (char)((uint)iVar11 >> 0x10));
          auVar51[0xf] = -(cVar27 == (char)((uint)iVar11 >> 0x18));
          if ((((((((((((((((SUB161(auVar51 >> 7,0) & 1) != 0 || (SUB161(auVar51 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar51 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar51 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar51 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar51 >> 0x2f,0) & 1) != 0) || (SUB161(auVar51 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar51 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar51 >> 0x47,0) & 1) != 0) || (SUB161(auVar51 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar51 >> 0x57,0) & 1) != 0) || (SUB161(auVar51 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar51 >> 0x67,0) & 1) != 0) || (SUB161(auVar51 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar51 >> 0x77,0) & 1) != 0) || auVar51[0xf] < '\0') break;
          uVar33 = uStack_200 + lStack_1f8 + 0x10;
          lVar38 = lStack_1f8 + 0x10;
          puVar43 = puVar53;
          uStack_200 = uVar45;
          lStack_1f8 = lVar34;
        }
      }
      lStack_1f8 = lVar34;
      uStack_200 = uVar45;
      if ((uVar40 & 1) == 0) {
        uStack_82 = 1;
        pdb_140f60be0(&uStack_158,&pbStack_1b0);
        plVar37 = (longlong *)param_5[0xf];
        LOCK();
        lVar34 = *plVar37;
        *plVar37 = *plVar37 + 1;
        UNLOCK();
        if (*plVar37 == 0 || SCARRY8(lVar34,1) != *plVar37 < 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)invalidInstructionException();
          (*pcVar5)();
        }
        uStack_82 = 1;
        pdb_140a662e0(uStack_1f0,&uStack_158);
      }
      *puStack_208 = (undefined4)lStack_a0;
      uStack_108 = uStack_168;
      uStack_118 = CONCAT44(uStack_174,uStack_178);
      uStack_110 = uStack_170;
      uStack_158 = uStack_1b8;
      pbStack_150 = pbStack_1b0;
      uStack_128 = (byte *)CONCAT44(uStack_184,uStack_188);
      uStack_120 = (byte *)CONCAT44(iStack_17c,uStack_180);
      uStack_138 = (undefined1 (*) [16])CONCAT44(uStack_194,uStack_198);
      uStack_130 = (undefined1 (*) [16])CONCAT44(uStack_18c,uStack_190);
      pbStack_148 = pbStack_1a8;
      pbStack_140 = pbStack_1a0;
      lVar34 = param_5[2];
      if (lVar34 == *param_5) {
        pdb_142d7ebb0(param_5);
      }
      lVar38 = param_5[1];
      lVar35 = lVar34 * 0x58;
      *(ulonglong *)(lVar38 + 0x50 + lVar35) = uStack_108;
      puVar3 = (undefined8 *)(lVar38 + 0x40 + lVar35);
      *puVar3 = uStack_118;
      puVar3[1] = uStack_110;
      plVar37 = (longlong *)(lVar38 + 0x30 + lVar35);
      *plVar37 = (longlong)uStack_128;
      plVar37[1] = (longlong)uStack_120;
      plVar37 = (longlong *)(lVar38 + 0x20 + lVar35);
      *plVar37 = (longlong)uStack_138;
      plVar37[1] = (longlong)uStack_130;
      plVar37 = (longlong *)(lVar38 + 0x10 + lVar35);
      *plVar37 = (longlong)pbStack_148;
      plVar37[1] = (longlong)pbStack_140;
      *(ulonglong *)(lVar38 + lVar35) = uStack_158;
      ((ulonglong *)(lVar38 + lVar35))[1] = (ulonglong)pbStack_150;
      param_5[2] = lVar34 + 1;
      goto LAB_140a28ce8;
    }
LAB_140a29028:
    lStack_a0 = ((ulonglong)((longlong)puVar46 - (longlong)puVar36) >> 3) * 0x2e8ba2e8ba2e8ba3;
    puStack_90 = (ulonglong *)0x0;
    puStack_98 = puVar36;
    while ((ulonglong *)lStack_a0 != puStack_90) {
      puStack_90 = (ulonglong *)((longlong)puStack_90 + 1);
      pdb_1404d1e90(puVar36);
      puVar36 = puVar36 + 0xb;
    }
    if (lStack_a8 != 0) {
      pub_1406abac0((byte *)puStack_b0,lStack_a8 * 0x58,8);
    }
    uStack_81 = 0;
    pdb_140ca5360(&uStack_1e8,&lStack_1c8,0x20,0x10,puVar52,puVar53,lVar54,puVar55);
    if (pbStack_238 == (byte *)0x0) {
      uStack_228 = 0;
    }
    else {
      pbStack_150 = (byte *)0x0;
      pbStack_148 = pbStack_238;
      pbStack_140 = pbStack_230;
      uStack_130 = (undefined1 (*) [16])0x0;
      uStack_128 = pbStack_238;
      uStack_120 = pbStack_230;
    }
    uStack_158 = (ulonglong)(pbStack_238 != (byte *)0x0);
    uStack_138 = (undefined1 (*) [16])uStack_158;
    uStack_118 = uStack_228;
    do {
      pdb_14192c130(&uStack_1b8,&uStack_158);
    } while (uStack_1b8 != 0);
  }
  return;
}

