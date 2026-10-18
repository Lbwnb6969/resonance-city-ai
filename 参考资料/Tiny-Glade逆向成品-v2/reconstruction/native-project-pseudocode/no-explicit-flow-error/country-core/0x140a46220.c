// VA 0x140a46220, PDB extent 5233 bytes
// country_core::systems::wall::wall_state::wall_roof_hashmap::wall_roof_hashmap
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/wall_state/wall_roof_hashmap.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::wall::wall_state::wall_roof_hashmap::wall_roof_hashmap
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/wall_state/wall_roof_hashmap.rs
   Extent: 5233 */

void pdb_140a46220(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,longlong *param_4,
                  longlong *param_5,longlong *param_6,longlong *param_7)

{
  byte *pbVar1;
  byte *pbVar2;
  longlong *plVar3;
  uint *puVar4;
  undefined1 auVar5 [16];
  byte bVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  code *pcVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  bool bVar18;
  longlong *plVar19;
  char cVar20;
  int iVar21;
  longlong lVar22;
  ulonglong uVar23;
  undefined *puVar24;
  longlong *plVar25;
  ulonglong uVar26;
  uint uVar27;
  longlong lVar28;
  undefined8 *puVar29;
  undefined *puVar30;
  longlong lVar31;
  undefined8 *puVar32;
  uint *puVar33;
  undefined1 (*pauVar34) [16];
  longlong lVar35;
  uint uVar36;
  ushort uVar37;
  longlong lVar38;
  int iVar39;
  undefined1 (*pauVar40) [16];
  bool bVar41;
  byte bVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined4 unaff_XMM6_Da;
  undefined4 unaff_XMM6_Db;
  undefined4 unaff_XMM6_Dc;
  undefined4 unaff_XMM6_Dd;
  undefined4 unaff_XMM7_Da;
  undefined4 unaff_XMM7_Db;
  undefined4 unaff_XMM7_Dc;
  undefined4 unaff_XMM7_Dd;
  undefined1 unaff_XMM8_Ba;
  undefined1 unaff_XMM8_Bb;
  undefined1 unaff_XMM8_Bc;
  undefined1 unaff_XMM8_Bd;
  undefined1 unaff_XMM8_Be;
  undefined1 unaff_XMM8_Bf;
  undefined1 unaff_XMM8_Bg;
  undefined1 unaff_XMM8_Bh;
  undefined1 unaff_XMM8_Bi;
  undefined1 unaff_XMM8_Bj;
  undefined1 unaff_XMM8_Bk;
  undefined1 unaff_XMM8_Bl;
  undefined1 unaff_XMM8_Bm;
  undefined1 unaff_XMM8_Bn;
  undefined1 unaff_XMM8_Bo;
  undefined1 unaff_XMM8_Bp;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  longlong lStack_208;
  undefined8 *puStack_200;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  char *pcStack_1d0;
  undefined4 *puStack_1c8;
  undefined8 *puStack_1c0;
  longlong lStack_1b8;
  undefined8 uStack_1b0;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  longlong lStack_188;
  undefined8 *puStack_180;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  longlong lStack_158;
  undefined8 *puStack_150;
  longlong lStack_140;
  longlong *plStack_138;
  longlong lStack_130;
  longlong lStack_128;
  longlong *plStack_120;
  undefined8 *puStack_118;
  undefined4 uStack_10c;
  longlong *plStack_108;
  code *pcStack_100;
  longlong lStack_f8;
  longlong lStack_f0;
  longlong lStack_e8;
  undefined8 *puStack_e0;
  longlong lStack_d8;
  longlong lStack_d0;
  ulonglong uStack_c8;
  longlong *plStack_c0;
  longlong lStack_b8;
  undefined4 *puStack_b0;
  char cStack_a1;
  longlong *plStack_a0;
  undefined1 uStack_92;
  undefined1 uStack_91;
  undefined8 uStack_90;
  
  uStack_90 = 0xfffffffffffffffe;
  puVar32 = param_2;
  puStack_1c0 = param_3;
  cVar20 = pdb_140e94b40();
  puStack_118 = param_2;
  if (cVar20 == '\0') {
    uStack_1e0 = 0;
  }
  else {
    puVar32 = (undefined8 *)&UNK_14303d0fe;
    lVar31 = 0x4d;
    puVar29 = (undefined8 *)0x4d;
    lVar22 = pdb_140a4ebd0(&UNK_14303d0fe);
    if (lVar22 == 1) {
      if ((undefined8 *)0x4d < puVar29) {
LAB_140a4732c:
        pdb_142dc8070(&UNK_14303d0fe,0x4d,0);
LAB_140a4734c:
        pdb_142dc8070(&UNK_14303d0fe,0x4d);
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      puVar32 = (undefined8 *)&UNK_14303d0fe;
      uVar23 = pdb_140a4ebd0(&UNK_14303d0fe);
      if ((uVar23 & 1) != 0) {
        if ((undefined *)0x4d < (undefined *)((longlong)puVar29 + 2)) goto LAB_140a4734c;
        lVar31 = 0x4b - (longlong)puVar29;
        puVar32 = puVar29 + 0x28607a20;
      }
    }
    puVar24 = &UNK_14303c909;
    puVar30 = &UNK_14303c8c5;
    do {
      pbVar1 = puVar24 + -1;
      uVar27 = (uint)(char)*pbVar1;
      if ((int)uVar27 < 0) {
        bVar42 = puVar24[-2];
        if ((char)bVar42 < -0x40) {
          bVar6 = puVar24[-3];
          if ((char)bVar6 < -0x40) {
            pbVar2 = puVar24 + -4;
            puVar24 = puVar24 + -4;
            uVar27 = bVar6 & 0x3f | (*pbVar2 & 7) << 6;
          }
          else {
            puVar24 = puVar24 + -3;
            uVar27 = bVar6 & 0xf;
          }
          uVar27 = bVar42 & 0x3f | uVar27 << 6;
        }
        else {
          puVar24 = puVar24 + -2;
          uVar27 = bVar42 & 0x1f;
        }
        puVar29 = (undefined8 *)(ulonglong)(uVar27 << 6);
        uVar27 = (uint)(*pbVar1 & 0x3f) | uVar27 << 6;
        if (uVar27 != 0x5c) goto LAB_140a46379;
LAB_140a46396:
        if ((undefined *)0x44 < puVar24 + -0x14303c8c4) {
          pdb_142dc8070(&UNK_14303c8c5,0x44,puVar24 + -0x14303c8c4,0x44,&UNK_14303d1e8);
          goto LAB_140a4732c;
        }
        lVar22 = 0x43 - (longlong)(puVar24 + -0x14303c8c5);
        puVar30 = puVar24 + 1;
        goto LAB_140a463ba;
      }
      puVar24 = puVar24 + -1;
      if (uVar27 == 0x5c) goto LAB_140a46396;
LAB_140a46379:
      if (uVar27 == 0x2f) goto LAB_140a46396;
    } while (puVar24 != &UNK_14303c8c5);
    lVar22 = 0x44;
LAB_140a463ba:
    plVar25 = (longlong *)pdb_140e97000();
    if ((char)plVar25[0xd] != '\x01') {
      puVar29 = (undefined8 *)0x0;
      plVar25 = (longlong *)pdb_142d8ec20(plVar25);
      if (plVar25 == (longlong *)0x0) {
LAB_140a4727d:
        pdb_142dc7890(&UNK_143326860);
LAB_140a47289:
        plStack_108 = plStack_120;
        pcStack_100 = pdb_140a4f2e0;
        uStack_91 = 1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc83d0(&UNK_14303c940,&plStack_108,&UNK_14303c968);
      }
    }
    if (*plVar25 != 0) goto LAB_140a47223;
    *plVar25 = -1;
    plStack_a0 = plVar25;
    uStack_1d8 = pdb_140e94f10(plVar25 + 1,puVar32,lVar31,puVar30,lVar22,1,0);
    *plStack_a0 = *plStack_a0 + 1;
    uStack_1e0 = 1;
    uStack_1b0 = uStack_1d8;
  }
  puVar29 = puStack_118;
  plVar25 = (longlong *)pdb_140f3bda0();
  if ((char)plVar25[2] == '\x01') {
    lStack_158 = *plVar25;
    puVar32 = (undefined8 *)plVar25[1];
  }
  else {
    lStack_158 = pdb_140f4fd10();
    *plVar25 = lStack_158;
    plVar25[1] = (longlong)puVar32;
    *(undefined1 *)(plVar25 + 2) = 1;
  }
  *plVar25 = lStack_158 + 1;
  unaff_XMM6_Dd = _UNK_14303cefc;
  unaff_XMM6_Dc = _UNK_14303cef8;
  unaff_XMM6_Db = _UNK_14303cef4;
  unaff_XMM6_Da = _DAT_14303cef0;
  unaff_XMM7_Dd = _UNK_14303ceec;
  unaff_XMM7_Dc = _UNK_14303cee8;
  unaff_XMM7_Db = _UNK_14303cee4;
  unaff_XMM7_Da = _DAT_14303cee0;
  uStack_168 = _DAT_14303cef0;
  uStack_164 = _UNK_14303cef4;
  uStack_160 = _UNK_14303cef8;
  uStack_15c = _UNK_14303cefc;
  uStack_178 = _DAT_14303cee0;
  uStack_174 = _UNK_14303cee4;
  uStack_170 = _UNK_14303cee8;
  uStack_16c = _UNK_14303ceec;
  uStack_92 = 1;
  puStack_150 = puVar32;
  plVar25 = (longlong *)pdb_140f3bda0();
  cStack_a1 = cVar20;
  if ((char)plVar25[2] == '\x01') {
    lStack_188 = *plVar25;
    puVar32 = (undefined8 *)plVar25[1];
  }
  else {
    uStack_92 = 1;
    lStack_188 = pdb_140f4fd10();
    *plVar25 = lStack_188;
    plVar25[1] = (longlong)puVar32;
    *(undefined1 *)(plVar25 + 2) = 1;
  }
  *plVar25 = lStack_188 + 1;
  uStack_198 = unaff_XMM6_Da;
  uStack_194 = unaff_XMM6_Db;
  uStack_190 = unaff_XMM6_Dc;
  uStack_18c = unaff_XMM6_Dd;
  uStack_1a8 = unaff_XMM7_Da;
  uStack_1a4 = unaff_XMM7_Db;
  uStack_1a0 = unaff_XMM7_Dc;
  uStack_19c = unaff_XMM7_Dd;
  lStack_d8 = *param_4;
  lVar22 = param_4[1];
  puVar33 = *(uint **)(lStack_d8 + 0xf8);
  puVar4 = puVar33 + *(longlong *)(lStack_d8 + 0x100);
  lStack_b8 = CONCAT71(lStack_b8._1_7_,*(undefined1 *)(lStack_d8 + 0x108));
  pcStack_1d0 = (char *)*param_1;
  uStack_10c = *(undefined4 *)((longlong)param_7 + 0x1c);
  lStack_d0 = *param_7;
  puStack_1c8 = (undefined4 *)param_7[2];
  iVar39 = -(uint)(CONCAT13(unaff_XMM8_Bd,
                            CONCAT12(unaff_XMM8_Bc,CONCAT11(unaff_XMM8_Bb,unaff_XMM8_Ba))) ==
                  CONCAT13(unaff_XMM8_Bd,
                           CONCAT12(unaff_XMM8_Bc,CONCAT11(unaff_XMM8_Bb,unaff_XMM8_Ba))));
  iVar13 = -(uint)(CONCAT13(unaff_XMM8_Bh,
                            CONCAT12(unaff_XMM8_Bg,CONCAT11(unaff_XMM8_Bf,unaff_XMM8_Be))) ==
                  CONCAT13(unaff_XMM8_Bh,
                           CONCAT12(unaff_XMM8_Bg,CONCAT11(unaff_XMM8_Bf,unaff_XMM8_Be))));
  iVar14 = -(uint)(CONCAT13(unaff_XMM8_Bl,
                            CONCAT12(unaff_XMM8_Bk,CONCAT11(unaff_XMM8_Bj,unaff_XMM8_Bi))) ==
                  CONCAT13(unaff_XMM8_Bl,
                           CONCAT12(unaff_XMM8_Bk,CONCAT11(unaff_XMM8_Bj,unaff_XMM8_Bi))));
  iVar15 = -(uint)(CONCAT13(unaff_XMM8_Bp,
                            CONCAT12(unaff_XMM8_Bo,CONCAT11(unaff_XMM8_Bn,unaff_XMM8_Bm))) ==
                  CONCAT13(unaff_XMM8_Bp,
                           CONCAT12(unaff_XMM8_Bo,CONCAT11(unaff_XMM8_Bn,unaff_XMM8_Bm))));
  plStack_c0 = (longlong *)*puVar29;
  plStack_138 = plStack_c0 + 4;
  lStack_1b8 = lStack_d0 + 0x20;
  lStack_128 = 8;
  lStack_130 = 8;
  puStack_b0 = (undefined4 *)0x0;
  lVar31 = 0;
  uVar23 = 0;
  puStack_180 = puVar32;
  bVar41 = false;
LAB_140a4658f:
  do {
    if ((char)lStack_b8 == '\0') {
      if ((int)uVar23 == (int)lVar31) {
        do {
          if (puVar33 == puVar4) goto LAB_140a46997;
          uVar27 = *puVar33;
          puVar33 = puVar33 + 1;
          lVar31 = *(longlong *)(*(longlong *)(lVar22 + 0x100) + 0x58 + (ulonglong)uVar27 * 0xa0);
        } while (lVar31 == 0);
        lVar28 = *(longlong *)(lVar22 + 0x100) + (ulonglong)uVar27 * 0xa0;
        if (*(ulonglong *)(lStack_d8 + 0x110) <
            *(ulonglong *)
             (*(longlong *)(lVar22 + 0x1a0) + 0x40 + (ulonglong)*(uint *)(lVar28 + 0x94) * 0x48)) {
          lVar35 = *(longlong *)(lVar22 + 0x1a0) + (ulonglong)*(uint *)(lVar28 + 0x94) * 0x48;
          uVar23 = *(ulonglong *)
                    (*(longlong *)(lVar35 + 0x38) + *(ulonglong *)(lStack_d8 + 0x110) * 8);
          if (uVar23 == 0) goto LAB_140a4670d;
          puStack_b0 = *(undefined4 **)(*(longlong *)(lVar35 + 0x18) + 0x10 + ~uVar23 * 0x30);
        }
        else {
LAB_140a4670d:
          puStack_b0 = (undefined4 *)0x0;
        }
        uVar23 = 0;
        bVar41 = false;
        if (*(ulonglong *)(lStack_d8 + 0x118) < *(ulonglong *)(lVar28 + 0x88)) {
          bVar41 = *(longlong *)
                    (*(longlong *)(lVar28 + 0x80) + *(ulonglong *)(lStack_d8 + 0x118) * 8) != 0;
        }
        lStack_128 = *(longlong *)(lVar28 + 0x50);
      }
      iVar21 = (int)uVar23;
      puVar32 = (undefined8 *)(lStack_128 + uVar23 * 0x10);
      uVar23 = (ulonglong)~*(uint *)(lStack_128 + 8 + uVar23 * 0x10);
    }
    else {
      if ((int)uVar23 == (int)lVar31) {
        do {
          if (puVar33 == puVar4) goto LAB_140a46997;
          uVar27 = *puVar33;
          puVar33 = puVar33 + 1;
          lVar31 = *(longlong *)(*(longlong *)(lVar22 + 0x1a0) + 0x10 + (ulonglong)uVar27 * 0x48);
        } while (lVar31 == 0);
        lVar28 = *(longlong *)(lVar22 + 0x1a0) + (ulonglong)uVar27 * 0x48;
        if ((*(ulonglong *)(lStack_d8 + 0x110) < *(ulonglong *)(lVar28 + 0x40)) &&
           (uVar23 = *(ulonglong *)
                      (*(longlong *)(lVar28 + 0x38) + *(ulonglong *)(lStack_d8 + 0x110) * 8),
           uVar23 != 0)) {
          puStack_b0 = *(undefined4 **)(*(longlong *)(lVar28 + 0x18) + 0x10 + ~uVar23 * 0x30);
        }
        else {
          puStack_b0 = (undefined4 *)0x0;
        }
        uVar23 = 0;
        bVar41 = false;
        if (*(ulonglong *)(lStack_d8 + 0x118) < *(ulonglong *)(lVar28 + 0x40)) {
          bVar41 = *(longlong *)
                    (*(longlong *)(lVar28 + 0x38) + *(ulonglong *)(lStack_d8 + 0x118) * 8) != 0;
        }
        lStack_130 = *(longlong *)(lVar28 + 8);
      }
      iVar21 = (int)uVar23;
      puVar32 = (undefined8 *)(lStack_130 + uVar23 * 8);
    }
    plVar25 = (longlong *)(puStack_b0 + uVar23 * 0x16);
    uVar8 = *puVar32;
    if ((int)uVar8 == 0) {
LAB_140a46997:
      pauVar34 = (undefined1 (*) [16])*plStack_c0;
      plStack_a0 = (longlong *)plStack_c0[3];
      auVar43 = *pauVar34;
      pauVar40 = pauVar34 + 1;
      uVar27 = ~(uint)(ushort)((ushort)(SUB161(auVar43 >> 7,0) & 1) |
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
                              (ushort)(byte)(auVar43[0xf] >> 7) << 0xf);
      lStack_b8 = CONCAT44(lStack_b8._4_4_,*(undefined4 *)((longlong)param_6 + 0x1c));
      lVar22 = *param_6;
      puStack_b0 = (undefined4 *)param_6[2];
      break;
    }
    uVar23 = (ulonglong)(iVar21 + 1U);
    plStack_108 = (longlong *)*plVar25;
    plStack_120 = plVar25;
    plStack_a0 = plStack_108;
    if (plStack_c0[3] != 0) {
      uStack_91 = 1;
      uStack_c8 = CONCAT44(uStack_c8._4_4_,iVar21 + 1U);
      uVar26 = pdb_1400af0a0(plStack_138,&plStack_108);
      uVar23 = uStack_c8 & 0xffffffff;
      lVar28 = *plStack_c0;
      bVar42 = (byte)(uVar26 >> 0x39);
      auVar43 = ZEXT216(CONCAT11(bVar42,bVar42));
      auVar43 = pshuflw(auVar43,auVar43,0);
      lVar35 = 0;
      while( true ) {
        uVar26 = uVar26 & plStack_c0[1];
        auVar5 = *(undefined1 (*) [16])(lVar28 + uVar26);
        auVar48[0] = -(auVar5[0] == auVar43[0]);
        auVar48[1] = -(auVar5[1] == auVar43[1]);
        auVar48[2] = -(auVar5[2] == auVar43[2]);
        auVar48[3] = -(auVar5[3] == auVar43[3]);
        auVar48[4] = -(auVar5[4] == auVar43[4]);
        auVar48[5] = -(auVar5[5] == auVar43[5]);
        auVar48[6] = -(auVar5[6] == auVar43[6]);
        auVar48[7] = -(auVar5[7] == auVar43[7]);
        auVar48[8] = -(auVar5[8] == auVar43[0]);
        auVar48[9] = -(auVar5[9] == auVar43[1]);
        auVar48[10] = -(auVar5[10] == auVar43[2]);
        auVar48[0xb] = -(auVar5[0xb] == auVar43[3]);
        auVar48[0xc] = -(auVar5[0xc] == auVar43[4]);
        auVar48[0xd] = -(auVar5[0xd] == auVar43[5]);
        auVar48[0xe] = -(auVar5[0xe] == auVar43[6]);
        auVar48[0xf] = -(auVar5[0xf] == auVar43[7]);
        uVar37 = (ushort)(SUB161(auVar48 >> 7,0) & 1) | (ushort)(SUB161(auVar48 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar48 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar48 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar48 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar48 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar48 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar48 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar48 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar48 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar48 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar48 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar48 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar48 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar48 >> 0x77,0) & 1) << 0xe | (ushort)(auVar48[0xf] >> 7) << 0xf
        ;
        uVar27 = (uint)uVar37;
        while (uVar37 != 0) {
          uVar36 = 0;
          for (uVar11 = uVar27; (uVar11 & 1) == 0; uVar11 = uVar11 >> 1 | 0x80000000) {
            uVar36 = uVar36 + 1;
          }
          lVar38 = (uVar36 + uVar26 & plStack_c0[1]) * -0x2b0;
          if (plStack_a0 == *(longlong **)(lVar28 + -0x2b0 + lVar38)) {
            lVar28 = lVar28 + lVar38;
            if ((*(ulonglong *)(lVar28 + -0x298) < 2) || (*(float *)(lVar28 + -0x278) <= 0.0)) {
              uStack_91 = 1;
                    /* WARNING: Subroutine does not return */
              pdb_142dc83b0(&UNK_143059e50,0x32,&UNK_14303c928);
            }
            if (1 < *(uint *)(lVar28 + -0x50)) goto LAB_140a468e0;
            if (bVar41) {
              uStack_91 = 1;
              bVar41 = true;
              pdb_141409100(&uStack_1a8,plStack_a0,uVar8);
              uVar23 = uStack_c8 & 0xffffffff;
            }
            else {
              uStack_91 = 1;
              iVar21 = pdb_141409100(&uStack_178,plStack_a0,uVar8);
              uVar23 = uStack_c8 & 0xffffffff;
              bVar41 = false;
              if (iVar21 != 0) {
                uStack_91 = 1;
                    /* WARNING: Subroutine does not return */
                pdb_142dc83d0(&UNK_14303c9c0,99,&UNK_14303c9f8);
              }
            }
            goto LAB_140a4658f;
          }
          uVar37 = (ushort)(uVar27 - 1) & (ushort)uVar27;
          uVar27 = CONCAT22((short)(uVar27 - 1 >> 0x10),uVar37);
        }
        auVar44[0] = -(auVar5[0] == (char)iVar39);
        auVar44[1] = -(auVar5[1] == (char)((uint)iVar39 >> 8));
        auVar44[2] = -(auVar5[2] == (char)((uint)iVar39 >> 0x10));
        auVar44[3] = -(auVar5[3] == (char)((uint)iVar39 >> 0x18));
        auVar44[4] = -(auVar5[4] == (char)iVar13);
        auVar44[5] = -(auVar5[5] == (char)((uint)iVar13 >> 8));
        auVar44[6] = -(auVar5[6] == (char)((uint)iVar13 >> 0x10));
        auVar44[7] = -(auVar5[7] == (char)((uint)iVar13 >> 0x18));
        auVar44[8] = -(auVar5[8] == (char)iVar14);
        auVar44[9] = -(auVar5[9] == (char)((uint)iVar14 >> 8));
        auVar44[10] = -(auVar5[10] == (char)((uint)iVar14 >> 0x10));
        auVar44[0xb] = -(auVar5[0xb] == (char)((uint)iVar14 >> 0x18));
        auVar44[0xc] = -(auVar5[0xc] == (char)iVar15);
        auVar44[0xd] = -(auVar5[0xd] == (char)((uint)iVar15 >> 8));
        auVar44[0xe] = -(auVar5[0xe] == (char)((uint)iVar15 >> 0x10));
        auVar44[0xf] = -(auVar5[0xf] == (char)((uint)iVar15 >> 0x18));
        if ((((((((((((((((SUB161(auVar44 >> 7,0) & 1) != 0 || (SUB161(auVar44 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar44 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar44 >> 0x1f,0) & 1) != 0) || (SUB161(auVar44 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar44 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar44 >> 0x37,0) & 1) != 0) || (SUB161(auVar44 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar44 >> 0x47,0) & 1) != 0) || (SUB161(auVar44 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar44 >> 0x57,0) & 1) != 0) || (SUB161(auVar44 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar44 >> 0x67,0) & 1) != 0) || (SUB161(auVar44 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar44 >> 0x77,0) & 1) != 0) || auVar44[0xf] < '\0') break;
        uVar26 = uVar26 + lVar35 + 0x10;
        lVar35 = lVar35 + 0x10;
      }
    }
LAB_140a468e0:
    bVar18 = !bVar41;
    bVar41 = true;
    if (bVar18) {
      if (*pcStack_1d0 == '\n') {
        plStack_108 = plStack_120;
        pcStack_100 = pdb_140a4f2e0;
        uStack_91 = 1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc83d0(&UNK_14303c980,&plStack_108,&UNK_14303c9a8);
      }
      if (*pcStack_1d0 == '\t') goto LAB_140a47289;
      *puStack_1c8 = uStack_10c;
      lVar28 = *(longlong *)(lStack_d0 + 0x30);
      uVar8 = *(undefined8 *)(lStack_d0 + 0x40);
      if (lVar28 == *(longlong *)(lStack_d0 + 0x20)) {
        uStack_91 = 1;
        pdb_142d7e980(lStack_1b8);
      }
      lVar35 = *(longlong *)(lStack_d0 + 0x28);
      *(undefined8 *)(lVar35 + lVar28 * 0x10) = uVar8;
      *(longlong **)(lVar35 + 8 + lVar28 * 0x10) = plStack_a0;
      *(longlong *)(lStack_d0 + 0x30) = lVar28 + 1;
      *(longlong *)(lStack_d0 + 0x40) = *(longlong *)(lStack_d0 + 0x40) + 1;
      bVar41 = false;
    }
  } while( true );
LAB_140a46a0f:
  plVar25 = plStack_c0;
  if (plStack_a0 != (longlong *)0x0) {
    if ((short)uVar27 == 0) {
      do {
        auVar43 = *pauVar40;
        pauVar34 = pauVar34 + -0x2b0;
        pauVar40 = pauVar40 + 1;
        uVar27 = (ushort)((ushort)(SUB161(auVar43 >> 7,0) & 1) |
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
                         (ushort)(byte)(auVar43[0xf] >> 7) << 0xf) ^ 0xffff;
      } while (uVar27 == 0);
    }
    uVar36 = 0;
    for (uVar11 = uVar27; (uVar11 & 1) == 0; uVar11 = uVar11 >> 1 | 0x80000000) {
      uVar36 = uVar36 + 1;
    }
    lVar31 = *(longlong *)pauVar34[(ulonglong)uVar36 * -0x2b + -0x2b];
    uStack_91 = 1;
    lStack_140 = lVar31;
    cVar20 = pdb_140b55090(plStack_c0,lVar31);
    uVar27 = uVar27 - 1 & uVar27;
    plStack_a0 = (longlong *)((longlong)plStack_a0 + -1);
    if (CONCAT44(uStack_15c,uStack_160) != 0) {
      uStack_91 = 1;
      uVar23 = pdb_1400af0a0(&lStack_158,&lStack_140);
      bVar42 = (byte)(uVar23 >> 0x39);
      auVar43 = ZEXT216(CONCAT11(bVar42,bVar42));
      auVar43 = pshuflw(auVar43,auVar43,0);
      lVar28 = 0;
      while( true ) {
        uVar23 = uVar23 & CONCAT44(uStack_16c,uStack_170);
        auVar5 = *(undefined1 (*) [16])(CONCAT44(uStack_174,uStack_178) + uVar23);
        auVar49[0] = -(auVar5[0] == auVar43[0]);
        auVar49[1] = -(auVar5[1] == auVar43[1]);
        auVar49[2] = -(auVar5[2] == auVar43[2]);
        auVar49[3] = -(auVar5[3] == auVar43[3]);
        auVar49[4] = -(auVar5[4] == auVar43[4]);
        auVar49[5] = -(auVar5[5] == auVar43[5]);
        auVar49[6] = -(auVar5[6] == auVar43[6]);
        auVar49[7] = -(auVar5[7] == auVar43[7]);
        auVar49[8] = -(auVar5[8] == auVar43[0]);
        auVar49[9] = -(auVar5[9] == auVar43[1]);
        auVar49[10] = -(auVar5[10] == auVar43[2]);
        auVar49[0xb] = -(auVar5[0xb] == auVar43[3]);
        auVar49[0xc] = -(auVar5[0xc] == auVar43[4]);
        auVar49[0xd] = -(auVar5[0xd] == auVar43[5]);
        auVar49[0xe] = -(auVar5[0xe] == auVar43[6]);
        auVar49[0xf] = -(auVar5[0xf] == auVar43[7]);
        uVar37 = (ushort)(SUB161(auVar49 >> 7,0) & 1) | (ushort)(SUB161(auVar49 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar49 >> 0x17,0) & 1) << 2 |
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
                 (ushort)(SUB161(auVar49 >> 0x77,0) & 1) << 0xe | (ushort)(auVar49[0xf] >> 7) << 0xf
        ;
        uVar36 = (uint)uVar37;
        while (uVar37 != 0) {
          uVar11 = 0;
          for (uVar12 = uVar36; (uVar12 & 1) == 0; uVar12 = uVar12 >> 1 | 0x80000000) {
            uVar11 = uVar11 + 1;
          }
          if (lVar31 == *(longlong *)
                         (CONCAT44(uStack_174,uStack_178) +
                          (uVar11 + uVar23 & CONCAT44(uStack_16c,uStack_170)) * -0x10 + -0x10))
          goto LAB_140a46c00;
          uVar37 = (ushort)(uVar36 - 1) & (ushort)uVar36;
          uVar36 = CONCAT22((short)(uVar36 - 1 >> 0x10),uVar37);
        }
        auVar45[0] = -(auVar5[0] == -1);
        auVar45[1] = -(auVar5[1] == -1);
        auVar45[2] = -(auVar5[2] == -1);
        auVar45[3] = -(auVar5[3] == -1);
        auVar45[4] = -(auVar5[4] == -1);
        auVar45[5] = -(auVar5[5] == -1);
        auVar45[6] = -(auVar5[6] == -1);
        auVar45[7] = -(auVar5[7] == -1);
        auVar45[8] = -(auVar5[8] == -1);
        auVar45[9] = -(auVar5[9] == -1);
        auVar45[10] = -(auVar5[10] == -1);
        auVar45[0xb] = -(auVar5[0xb] == -1);
        auVar45[0xc] = -(auVar5[0xc] == -1);
        auVar45[0xd] = -(auVar5[0xd] == -1);
        auVar45[0xe] = -(auVar5[0xe] == -1);
        auVar45[0xf] = -(auVar5[0xf] == -1);
        if ((((((((((((((((SUB161(auVar45 >> 7,0) & 1) != 0 || (SUB161(auVar45 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar45 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar45 >> 0x1f,0) & 1) != 0) || (SUB161(auVar45 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar45 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar45 >> 0x37,0) & 1) != 0) || (SUB161(auVar45 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar45 >> 0x47,0) & 1) != 0) || (SUB161(auVar45 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar45 >> 0x57,0) & 1) != 0) || (SUB161(auVar45 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar45 >> 0x67,0) & 1) != 0) || (SUB161(auVar45 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar45 >> 0x77,0) & 1) != 0) || auVar45[0xf] < '\0') break;
        uVar23 = uVar23 + lVar28 + 0x10;
        lVar28 = lVar28 + 0x10;
      }
    }
    if (CONCAT44(uStack_18c,uStack_190) != 0) {
      uStack_91 = 1;
      uVar23 = pdb_1400af0a0(&lStack_188,&lStack_140);
      bVar42 = (byte)(uVar23 >> 0x39);
      auVar43 = ZEXT216(CONCAT11(bVar42,bVar42));
      auVar43 = pshuflw(auVar43,auVar43,0);
      lVar28 = 0;
      while( true ) {
        uVar23 = uVar23 & CONCAT44(uStack_19c,uStack_1a0);
        auVar5 = *(undefined1 (*) [16])(CONCAT44(uStack_1a4,uStack_1a8) + uVar23);
        auVar50[0] = -(auVar5[0] == auVar43[0]);
        auVar50[1] = -(auVar5[1] == auVar43[1]);
        auVar50[2] = -(auVar5[2] == auVar43[2]);
        auVar50[3] = -(auVar5[3] == auVar43[3]);
        auVar50[4] = -(auVar5[4] == auVar43[4]);
        auVar50[5] = -(auVar5[5] == auVar43[5]);
        auVar50[6] = -(auVar5[6] == auVar43[6]);
        auVar50[7] = -(auVar5[7] == auVar43[7]);
        auVar50[8] = -(auVar5[8] == auVar43[0]);
        auVar50[9] = -(auVar5[9] == auVar43[1]);
        auVar50[10] = -(auVar5[10] == auVar43[2]);
        auVar50[0xb] = -(auVar5[0xb] == auVar43[3]);
        auVar50[0xc] = -(auVar5[0xc] == auVar43[4]);
        auVar50[0xd] = -(auVar5[0xd] == auVar43[5]);
        auVar50[0xe] = -(auVar5[0xe] == auVar43[6]);
        auVar50[0xf] = -(auVar5[0xf] == auVar43[7]);
        uVar37 = (ushort)(SUB161(auVar50 >> 7,0) & 1) | (ushort)(SUB161(auVar50 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar50 >> 0x17,0) & 1) << 2 |
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
                 (ushort)(SUB161(auVar50 >> 0x77,0) & 1) << 0xe | (ushort)(auVar50[0xf] >> 7) << 0xf
        ;
        uVar36 = (uint)uVar37;
        while (uVar37 != 0) {
          uVar11 = 0;
          for (uVar12 = uVar36; (uVar12 & 1) == 0; uVar12 = uVar12 >> 1 | 0x80000000) {
            uVar11 = uVar11 + 1;
          }
          if (lVar31 == *(longlong *)
                         (CONCAT44(uStack_1a4,uStack_1a8) +
                          (uVar11 + uVar23 & CONCAT44(uStack_19c,uStack_1a0)) * -0x10 + -0x10))
          goto LAB_140a46c00;
          uVar37 = (ushort)(uVar36 - 1) & (ushort)uVar36;
          uVar36 = CONCAT22((short)(uVar36 - 1 >> 0x10),uVar37);
        }
        auVar46[0] = -(auVar5[0] == -1);
        auVar46[1] = -(auVar5[1] == -1);
        auVar46[2] = -(auVar5[2] == -1);
        auVar46[3] = -(auVar5[3] == -1);
        auVar46[4] = -(auVar5[4] == -1);
        auVar46[5] = -(auVar5[5] == -1);
        auVar46[6] = -(auVar5[6] == -1);
        auVar46[7] = -(auVar5[7] == -1);
        auVar46[8] = -(auVar5[8] == -1);
        auVar46[9] = -(auVar5[9] == -1);
        auVar46[10] = -(auVar5[10] == -1);
        auVar46[0xb] = -(auVar5[0xb] == -1);
        auVar46[0xc] = -(auVar5[0xc] == -1);
        auVar46[0xd] = -(auVar5[0xd] == -1);
        auVar46[0xe] = -(auVar5[0xe] == -1);
        auVar46[0xf] = -(auVar5[0xf] == -1);
        if ((((((((((((((((SUB161(auVar46 >> 7,0) & 1) != 0 || (SUB161(auVar46 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar46 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar46 >> 0x1f,0) & 1) != 0) || (SUB161(auVar46 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar46 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar46 >> 0x37,0) & 1) != 0) || (SUB161(auVar46 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar46 >> 0x47,0) & 1) != 0) || (SUB161(auVar46 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar46 >> 0x57,0) & 1) != 0) || (SUB161(auVar46 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar46 >> 0x67,0) & 1) != 0) || (SUB161(auVar46 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar46 >> 0x77,0) & 1) != 0) || auVar46[0xf] < '\0') break;
        uVar23 = uVar23 + lVar28 + 0x10;
        lVar28 = lVar28 + 0x10;
      }
    }
    if (cVar20 != '\0') goto LAB_140a46c19;
    goto LAB_140a46a0f;
  }
  plStack_108 = (longlong *)CONCAT44(uStack_174,uStack_178);
  pcStack_100 = (code *)CONCAT44(uStack_16c,uStack_170);
  lStack_f8 = CONCAT44(uStack_164,uStack_168);
  lStack_f0 = CONCAT44(uStack_15c,uStack_160);
  lStack_e8 = lStack_158;
  puStack_e0 = puStack_150;
  uVar7 = *(undefined4 *)((longlong)puStack_118 + 0x1c);
  puVar9 = (undefined4 *)puStack_118[2];
  *puVar9 = uVar7;
  plVar3 = plStack_c0 + 6;
  lVar22 = plStack_c0[7];
  if (lVar22 != 0) {
    lVar31 = lVar22 * 0x10 + 0x10;
    uVar23 = lVar22 + lVar31 + 0x11;
    if (uVar23 != 0) {
      pub_1406abac0((byte *)(*plVar3 - lVar31),uVar23,0x10);
    }
  }
  plVar19 = plStack_c0;
  plVar25[10] = lStack_e8;
  plVar25[0xb] = (longlong)puStack_e0;
  plVar25[8] = lStack_f8;
  plVar25[9] = lStack_f0;
  *plVar3 = (longlong)plStack_108;
  plVar25[7] = (longlong)pcStack_100;
  plStack_108 = (longlong *)CONCAT44(uStack_1a4,uStack_1a8);
  pcStack_100 = (code *)CONCAT44(uStack_19c,uStack_1a0);
  lStack_f8 = CONCAT44(uStack_194,uStack_198);
  lStack_f0 = CONCAT44(uStack_18c,uStack_190);
  lStack_e8 = lStack_188;
  puStack_e0 = puStack_180;
  *puVar9 = uVar7;
  plVar25 = plStack_c0 + 0xc;
  lVar22 = plStack_c0[0xd];
  puVar29 = (undefined8 *)0x0;
  if (lVar22 != 0) {
    lVar31 = lVar22 * 0x10 + 0x10;
    puVar29 = (undefined8 *)(lVar22 + lVar31 + 0x11);
    if (puVar29 != (undefined8 *)0x0) {
      pub_1406abac0((byte *)(*plVar25 - lVar31),(ulonglong)puVar29,0x10);
    }
  }
  auVar43._8_8_ = lStack_f0;
  auVar43._0_8_ = lStack_f8;
  auVar5._8_8_ = puStack_e0;
  auVar5._0_8_ = lStack_e8;
  *(undefined1 (*) [16])(plVar19 + 0x10) = auVar5;
  *(undefined1 (*) [16])(plVar19 + 0xe) = auVar43;
  *plVar25 = (longlong)plStack_108;
  plVar19[0xd] = (longlong)pcStack_100;
  uStack_91 = 0;
  plVar25 = (longlong *)pdb_140f3bda0();
  if ((char)plVar25[2] != '\x01') goto LAB_140a4722f;
  lStack_208 = *plVar25;
  puVar29 = (undefined8 *)plVar25[1];
  uStack_218 = unaff_XMM6_Da;
  uStack_214 = unaff_XMM6_Db;
  uStack_210 = unaff_XMM6_Dc;
  uStack_20c = unaff_XMM6_Dd;
LAB_140a46d88:
  *plVar25 = lStack_208 + 1;
  lStack_d0 = *param_5;
  lVar22 = param_5[1];
  puVar33 = *(uint **)(lStack_d0 + 0xf8);
  puVar4 = puVar33 + *(longlong *)(lStack_d0 + 0x100);
  plStack_a0 = (longlong *)CONCAT71(plStack_a0._1_7_,*(undefined1 *)(lStack_d0 + 0x108));
  lVar31 = 0;
  puStack_b0 = (undefined4 *)0x8;
  unaff_XMM6_Dd = 0xffffffff;
  unaff_XMM6_Da = 0xffffffff;
  unaff_XMM6_Db = 0xffffffff;
  unaff_XMM6_Dc = 0xffffffff;
  uStack_c8 = 8;
  lStack_b8 = 0;
  uVar23 = 0;
  uStack_228 = unaff_XMM7_Da;
  uStack_224 = unaff_XMM7_Db;
  uStack_220 = unaff_XMM7_Dc;
  uStack_21c = unaff_XMM7_Dd;
  puStack_200 = puVar29;
LAB_140a46dff:
  do {
    if ((char)plStack_a0 == '\0') {
      if ((int)uVar23 == (int)lVar31) {
        do {
          if (puVar33 == puVar4) goto LAB_140a470a7;
          uVar27 = *puVar33;
          puVar33 = puVar33 + 1;
          lVar31 = *(longlong *)(*(longlong *)(lVar22 + 0x100) + 0x58 + (ulonglong)uVar27 * 0xa0);
        } while (lVar31 == 0);
        lVar28 = *(longlong *)(lVar22 + 0x100) + (ulonglong)uVar27 * 0xa0;
        uVar23 = (ulonglong)*(uint *)(lVar28 + 0x94);
        if (*(ulonglong *)(lStack_d0 + 0x110) <
            *(ulonglong *)(*(longlong *)(lVar22 + 0x1a0) + 0x40 + uVar23 * 0x48)) {
          lVar35 = *(longlong *)(lVar22 + 0x1a0) + uVar23 * 0x48;
          uVar23 = *(ulonglong *)
                    (*(longlong *)(lVar35 + 0x38) + *(ulonglong *)(lStack_d0 + 0x110) * 8);
          if (uVar23 == 0) goto LAB_140a46f59;
          lStack_b8 = *(longlong *)(*(longlong *)(lVar35 + 0x18) + 0x10 + ~uVar23 * 0x30);
        }
        else {
LAB_140a46f59:
          lStack_b8 = 0;
        }
        uStack_c8 = *(ulonglong *)(lVar28 + 0x50);
        uVar23 = 0;
      }
      iVar39 = (int)uVar23;
      puVar32 = (undefined8 *)(uStack_c8 + uVar23 * 0x10);
      uVar23 = (ulonglong)~*(uint *)(uStack_c8 + 8 + uVar23 * 0x10);
    }
    else {
      if ((int)uVar23 == (int)lVar31) {
        do {
          if (puVar33 == puVar4) goto LAB_140a470a7;
          uVar27 = *puVar33;
          puVar33 = puVar33 + 1;
          lVar31 = *(longlong *)(*(longlong *)(lVar22 + 0x1a0) + 0x10 + (ulonglong)uVar27 * 0x48);
        } while (lVar31 == 0);
        lVar28 = *(longlong *)(lVar22 + 0x1a0) + (ulonglong)uVar27 * 0x48;
        if ((*(ulonglong *)(lStack_d0 + 0x110) < *(ulonglong *)(lVar28 + 0x40)) &&
           (uVar23 = *(ulonglong *)
                      (*(longlong *)(lVar28 + 0x38) + *(ulonglong *)(lStack_d0 + 0x110) * 8),
           uVar23 != 0)) {
          lStack_b8 = *(longlong *)(*(longlong *)(lVar28 + 0x18) + 0x10 + ~uVar23 * 0x30);
        }
        else {
          lStack_b8 = 0;
        }
        puStack_b0 = *(undefined4 **)(lVar28 + 8);
        uVar23 = 0;
      }
      iVar39 = (int)uVar23;
      puVar32 = (undefined8 *)(puStack_b0 + uVar23 * 2);
    }
    lVar28 = uVar23 * 0x30;
    uVar8 = *puVar32;
    if ((int)uVar8 == 0) goto LAB_140a470a7;
    uVar23 = (ulonglong)(iVar39 + 1);
    plVar25 = *(longlong **)(lVar28 + lStack_b8);
    if (plStack_c0[3] != 0) {
      plStack_108 = plVar25;
      uVar26 = pdb_1400af0a0(plStack_138,&plStack_108);
      lVar28 = *plStack_c0;
      bVar42 = (byte)(uVar26 >> 0x39);
      auVar43 = ZEXT216(CONCAT11(bVar42,bVar42));
      auVar43 = pshuflw(auVar43,auVar43,0);
      lVar35 = 0;
      while( true ) {
        uVar26 = uVar26 & plStack_c0[1];
        auVar5 = *(undefined1 (*) [16])(lVar28 + uVar26);
        auVar51[0] = -(auVar5[0] == auVar43[0]);
        auVar51[1] = -(auVar5[1] == auVar43[1]);
        auVar51[2] = -(auVar5[2] == auVar43[2]);
        auVar51[3] = -(auVar5[3] == auVar43[3]);
        auVar51[4] = -(auVar5[4] == auVar43[4]);
        auVar51[5] = -(auVar5[5] == auVar43[5]);
        auVar51[6] = -(auVar5[6] == auVar43[6]);
        auVar51[7] = -(auVar5[7] == auVar43[7]);
        auVar51[8] = -(auVar5[8] == auVar43[0]);
        auVar51[9] = -(auVar5[9] == auVar43[1]);
        auVar51[10] = -(auVar5[10] == auVar43[2]);
        auVar51[0xb] = -(auVar5[0xb] == auVar43[3]);
        auVar51[0xc] = -(auVar5[0xc] == auVar43[4]);
        auVar51[0xd] = -(auVar5[0xd] == auVar43[5]);
        auVar51[0xe] = -(auVar5[0xe] == auVar43[6]);
        auVar51[0xf] = -(auVar5[0xf] == auVar43[7]);
        uVar37 = (ushort)(SUB161(auVar51 >> 7,0) & 1) | (ushort)(SUB161(auVar51 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar51 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar51 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar51 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar51 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar51 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar51 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar51 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar51 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar51 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar51 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar51 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar51 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar51 >> 0x77,0) & 1) << 0xe | (ushort)(auVar51[0xf] >> 7) << 0xf
        ;
        uVar27 = (uint)uVar37;
        while (uVar37 != 0) {
          uVar36 = 0;
          for (uVar11 = uVar27; (uVar11 & 1) == 0; uVar11 = uVar11 >> 1 | 0x80000000) {
            uVar36 = uVar36 + 1;
          }
          lVar38 = (uVar36 + uVar26 & plStack_c0[1]) * -0x2b0;
          if (plVar25 == *(longlong **)(lVar28 + -0x2b0 + lVar38)) {
            lVar28 = lVar28 + lVar38;
            if ((*(ulonglong *)(lVar28 + -0x298) < 2) || (*(float *)(lVar28 + -0x278) <= 0.0)) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc83b0(&UNK_143059e50,0x32,&UNK_14303c910);
            }
            pdb_141409100(&uStack_228,plVar25,uVar8);
            goto LAB_140a46dff;
          }
          uVar37 = (ushort)(uVar27 - 1) & (ushort)uVar27;
          uVar27 = CONCAT22((short)(uVar27 - 1 >> 0x10),uVar37);
        }
        auVar47[0] = -(auVar5[0] == -1);
        auVar47[1] = -(auVar5[1] == -1);
        auVar47[2] = -(auVar5[2] == -1);
        auVar47[3] = -(auVar5[3] == -1);
        auVar47[4] = -(auVar5[4] == -1);
        auVar47[5] = -(auVar5[5] == -1);
        auVar47[6] = -(auVar5[6] == -1);
        auVar47[7] = -(auVar5[7] == -1);
        auVar47[8] = -(auVar5[8] == -1);
        auVar47[9] = -(auVar5[9] == -1);
        auVar47[10] = -(auVar5[10] == -1);
        auVar47[0xb] = -(auVar5[0xb] == -1);
        auVar47[0xc] = -(auVar5[0xc] == -1);
        auVar47[0xd] = -(auVar5[0xd] == -1);
        auVar47[0xe] = -(auVar5[0xe] == -1);
        auVar47[0xf] = -(auVar5[0xf] == -1);
        if ((((((((((((((((SUB161(auVar47 >> 7,0) & 1) != 0 || (SUB161(auVar47 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar47 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar47 >> 0x1f,0) & 1) != 0) || (SUB161(auVar47 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar47 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar47 >> 0x37,0) & 1) != 0) || (SUB161(auVar47 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar47 >> 0x47,0) & 1) != 0) || (SUB161(auVar47 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar47 >> 0x57,0) & 1) != 0) || (SUB161(auVar47 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar47 >> 0x67,0) & 1) != 0) || (SUB161(auVar47 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar47 >> 0x77,0) & 1) != 0) || auVar47[0xf] < '\0') break;
        uVar26 = uVar26 + lVar35 + 0x10;
        lVar35 = lVar35 + 0x10;
      }
    }
  } while( true );
LAB_140a46c00:
  if (cVar20 == '\0') {
LAB_140a46c19:
    *puStack_b0 = (undefined4)lStack_b8;
    lVar28 = *(longlong *)(lVar22 + 0x30);
    uVar8 = *(undefined8 *)(lVar22 + 0x40);
    if (lVar28 == *(longlong *)(lVar22 + 0x20)) {
      uStack_91 = 1;
      pdb_142d7e980(lVar22 + 0x20);
    }
    lVar35 = *(longlong *)(lVar22 + 0x28);
    *(undefined8 *)(lVar35 + lVar28 * 0x10) = uVar8;
    *(longlong *)(lVar35 + 8 + lVar28 * 0x10) = lVar31;
    *(longlong *)(lVar22 + 0x30) = lVar28 + 1;
    *(longlong *)(lVar22 + 0x40) = *(longlong *)(lVar22 + 0x40) + 1;
  }
  goto LAB_140a46a0f;
LAB_140a470a7:
  plStack_108 = (longlong *)CONCAT44(uStack_224,uStack_228);
  pcStack_100 = (code *)CONCAT44(uStack_21c,uStack_220);
  lStack_f8 = CONCAT44(uStack_214,uStack_218);
  lStack_f0 = CONCAT44(uStack_20c,uStack_210);
  lStack_e8 = lStack_208;
  puStack_e0 = puStack_200;
  *(undefined4 *)puStack_1c0[2] = *(undefined4 *)((longlong)puStack_1c0 + 0x1c);
  plVar25 = (longlong *)*puStack_1c0;
  lVar22 = plVar25[1];
  puVar29 = (undefined8 *)0x0;
  if (lVar22 != 0) {
    lVar31 = lVar22 * 0x10 + 0x10;
    puVar29 = (undefined8 *)(lVar22 + lVar31 + 0x11);
    if (puVar29 != (undefined8 *)0x0) {
      pub_1406abac0((byte *)(*plVar25 - lVar31),(ulonglong)puVar29,0x10);
    }
  }
  auVar16._8_8_ = lStack_f0;
  auVar16._0_8_ = lStack_f8;
  auVar17._8_8_ = puStack_e0;
  auVar17._0_8_ = lStack_e8;
  *(undefined1 (*) [16])(plVar25 + 4) = auVar17;
  *(undefined1 (*) [16])(plVar25 + 2) = auVar16;
  *plVar25 = (longlong)plStack_108;
  plVar25[1] = (longlong)pcStack_100;
  if (cStack_a1 == '\0') {
    return;
  }
  plVar25 = (longlong *)pdb_140e97000();
  if ((char)plVar25[0xd] != '\x01') {
    puVar29 = (undefined8 *)0x0;
    plVar25 = (longlong *)pdb_142d8ec20(plVar25);
    if (plVar25 == (longlong *)0x0) goto LAB_140a4727d;
  }
  unaff_XMM7_Da = 0;
  unaff_XMM7_Db = 0;
  unaff_XMM7_Dc = 0;
  unaff_XMM7_Dd = 0;
  if (*plVar25 == 0) {
    *plVar25 = -1;
    plStack_a0 = plVar25;
    pdb_140e95370(plVar25 + 1,uStack_1b0);
    *plStack_a0 = *plStack_a0 + 1;
    return;
  }
LAB_140a47223:
  plVar25 = (longlong *)pdb_142dc8090(&UNK_143326a50);
LAB_140a4722f:
  uStack_91 = 0;
  lStack_208 = pdb_140f4fd10();
  *plVar25 = lStack_208;
  plVar25[1] = (longlong)puVar29;
  *(undefined1 *)(plVar25 + 2) = 1;
  uStack_218 = unaff_XMM6_Da;
  uStack_214 = unaff_XMM6_Db;
  uStack_210 = unaff_XMM6_Dc;
  uStack_20c = unaff_XMM6_Dd;
  goto LAB_140a46d88;
}

