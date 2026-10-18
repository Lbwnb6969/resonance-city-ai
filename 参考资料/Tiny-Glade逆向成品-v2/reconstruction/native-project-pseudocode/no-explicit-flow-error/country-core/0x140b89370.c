// VA 0x140b89370, PDB extent 11319 bytes
// country_core::systems::wall::shapes::circle::ui_edit_circle::ui_edit_circle
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/shapes/circle/ui_edit_circle.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::wall::shapes::circle::ui_edit_circle::ui_edit_circle
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/shapes/circle/ui_edit_circle.rs
   Extent: 11319 */

void pdb_140b89370(byte *param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4,
                  undefined8 *param_5,ulonglong *param_6,undefined8 *param_7,undefined8 *param_8,
                  longlong *param_9,longlong *param_10,undefined8 *param_11,longlong param_12,
                  undefined8 *param_13)

{
  byte bVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  bool bVar5;
  undefined1 auVar6 [12];
  byte *pbVar7;
  byte *pbVar8;
  undefined1 uVar9;
  char cVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  ulonglong uVar14;
  byte *pbVar15;
  longlong *plVar16;
  ulonglong uVar17;
  code *pcVar18;
  undefined8 uVar19;
  longlong lVar20;
  undefined4 uVar21;
  ulonglong uVar22;
  byte *pbVar23;
  undefined1 (*pauVar24) [16];
  undefined8 uVar25;
  undefined1 (*pauVar26) [16];
  byte *pbVar27;
  undefined *puVar28;
  int *piVar29;
  ushort uVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  uint uVar33;
  byte *unaff_R12;
  longlong lVar34;
  undefined *puVar35;
  bool bVar36;
  bool bVar37;
  byte bVar38;
  byte bVar39;
  float fVar40;
  undefined4 uVar41;
  float fVar42;
  undefined1 auVar43 [16];
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined4 uVar46;
  float fVar47;
  float fVar50;
  float fVar51;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  float fVar52;
  float fVar53;
  float fVar54;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  float unaff_XMM6_Da;
  float unaff_XMM9_Da;
  float unaff_XMM10_Da;
  float unaff_XMM10_Db;
  longlong in_stack_fffffffffffffb98;
  undefined4 uVar61;
  undefined8 *in_stack_fffffffffffffba0;
  undefined8 *puVar62;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  float fStack_380;
  float fStack_37c;
  byte *pbStack_370;
  byte *pbStack_368;
  longlong lStack_360;
  undefined4 *puStack_358;
  longlong lStack_350;
  byte *pbStack_348;
  byte *pbStack_340;
  undefined8 *puStack_338;
  undefined4 *puStack_330;
  undefined4 *puStack_328;
  undefined4 *puStack_320;
  longlong lStack_318;
  undefined8 uStack_310;
  uint *puStack_308;
  undefined8 *puStack_300;
  longlong lStack_2f8;
  longlong lStack_2f0;
  float fStack_2e4;
  float fStack_2e0;
  float fStack_2dc;
  float fStack_2d8;
  float fStack_2d4;
  float fStack_2d0;
  undefined4 uStack_2cc;
  longlong lStack_2c8;
  undefined8 uStack_2c0;
  ulonglong uStack_2b8;
  undefined4 *puStack_2b0;
  undefined8 uStack_2a8;
  float fStack_2a0;
  float fStack_29c;
  float fStack_298;
  undefined2 uStack_294;
  undefined2 uStack_292;
  undefined1 uStack_290;
  undefined1 uStack_28f;
  undefined2 uStack_28e;
  undefined2 uStack_28c;
  undefined2 uStack_28a;
  byte *pbStack_288;
  code *pcStack_280;
  undefined *puStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  int iStack_260;
  int iStack_248;
  undefined1 uStack_230;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined2 uStack_200;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  ulonglong uStack_198;
  longlong lStack_190;
  longlong lStack_188;
  longlong lStack_180;
  float fStack_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  undefined4 uStack_15c;
  byte *pbStack_158;
  code *pcStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  float fStack_138;
  byte *pbStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined4 uStack_10c;
  byte *pbStack_108;
  code *pcStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 *puStack_d8;
  byte *pbStack_d0;
  byte *pbStack_c8;
  byte *pbStack_c0;
  undefined1 uStack_b4;
  undefined1 uStack_b3;
  undefined1 uStack_b2;
  byte bStack_b1;
  undefined8 uStack_b0;
  
  uStack_b0 = 0xfffffffffffffffe;
  pbStack_c8 = (byte *)*param_3;
  pbVar27 = (byte *)param_3[4];
  pcStack_100 = (code *)param_3[8];
  pbStack_d0 = (byte *)param_3[9];
  uVar17 = *param_6;
  uStack_2b8 = param_6[4];
  pbStack_108 = (byte *)*param_7;
  puStack_d8 = (undefined8 *)param_7[1];
  puStack_338 = (undefined8 *)param_7[2];
  puStack_330 = (undefined4 *)param_7[4];
  uStack_1a4 = *(undefined4 *)((longlong)param_7 + 0x2c);
  uStack_310 = *param_8;
  puStack_308 = (uint *)param_8[4];
  lStack_318 = param_8[8];
  lStack_180 = *param_9;
  puStack_2b0 = (undefined4 *)param_9[2];
  uStack_10c = *(undefined4 *)((longlong)param_9 + 0x1c);
  lStack_190 = param_9[4];
  puStack_320 = (undefined4 *)param_9[6];
  uStack_19c = *(undefined4 *)((longlong)param_9 + 0x3c);
  lStack_2f8 = *param_10;
  lStack_350 = param_10[4];
  uStack_3a8 = *(undefined8 *)(param_12 + 0x20);
  uStack_3a0 = *(undefined8 *)(param_12 + 0x28);
  uStack_398 = *(undefined8 *)(param_12 + 0x30);
  uStack_390 = *(undefined8 *)(param_12 + 0x38);
  uStack_3c8 = *(undefined8 *)(param_12 + 0x40);
  uStack_3c0 = *(undefined8 *)(param_12 + 0x48);
  uStack_3b8 = *(undefined8 *)(param_12 + 0x50);
  uStack_3b0 = *(undefined8 *)(param_12 + 0x58);
  uStack_3e8 = *(undefined8 *)(param_12 + 0x60);
  uStack_3e0 = *(undefined8 *)(param_12 + 0x68);
  uStack_3d8 = *(undefined8 *)(param_12 + 0x70);
  uStack_3d0 = *(undefined8 *)(param_12 + 0x78);
  uStack_408 = *(undefined8 *)(param_12 + 0x80);
  uStack_400 = *(undefined8 *)(param_12 + 0x88);
  uStack_3f8 = *(undefined8 *)(param_12 + 0x90);
  uStack_3f0 = *(undefined8 *)(param_12 + 0x98);
  uStack_428 = *(undefined8 *)(param_12 + 0xa0);
  uStack_420 = *(undefined8 *)(param_12 + 0xa8);
  uStack_418 = *(undefined8 *)(param_12 + 0xb0);
  uStack_410 = *(undefined8 *)(param_12 + 0xb8);
  uStack_448 = *(undefined8 *)(param_12 + 0xc0);
  uStack_440 = *(undefined8 *)(param_12 + 200);
  uStack_438 = *(undefined8 *)(param_12 + 0xd0);
  uStack_430 = *(undefined8 *)(param_12 + 0xd8);
  lStack_188 = *(longlong *)(param_12 + 0xe0);
  puStack_328 = *(undefined4 **)(param_12 + 0xf0);
  uStack_1a0 = *(undefined4 *)(param_12 + 0xfc);
  lStack_2c8 = *(longlong *)(param_12 + 0x100);
  puStack_358 = *(undefined4 **)(param_12 + 0x110);
  uStack_2cc = *(undefined4 *)(param_12 + 0x11c);
  lStack_360 = param_4;
  puStack_300 = param_2;
  uStack_198 = uVar17;
  uVar11 = pdb_140e94b40();
  pbVar23 = (byte *)(ulonglong)uVar11;
  if ((byte)uVar11 != 0) {
    lVar34 = 0x4b;
    pbStack_c0 = pbVar27;
    lVar13 = pdb_140b8de70(0x4b);
    unaff_R12 = &UNK_14305df63;
    lVar20 = in_stack_fffffffffffffb98;
    if (lVar13 == 1) {
      if (0x4b < uVar17) {
LAB_140b8b8ac:
        pdb_142dc8070(&UNK_14305df63,0x4b,0);
LAB_140b8b8cd:
                    /* WARNING: Subroutine does not return */
        pdb_142dc83d0(&UNK_143043340,0x23,&UNK_143043358);
      }
      uVar14 = pdb_140b8de70(uVar17);
      lVar20 = in_stack_fffffffffffffb98;
      if ((uVar14 & 1) != 0) {
        if (0x4b < uVar17 + 2) {
          uVar21 = 0x4305df63;
          uVar14 = 0x4b;
          uVar17 = pdb_142dc8070();
LAB_140b8b90e:
          uStack_2a8._4_4_ = (float)uVar14;
          fStack_2a0 = (float)uVar17;
          fStack_29c = (float)(uVar17 >> 0x20);
          uStack_2a8._0_4_ = (float)uVar21;
                    /* WARNING: Subroutine does not return */
          pdb_142dc8170(&UNK_14305df38,0x2b,&uStack_2a8,&UNK_14305df18,&UNK_14305db70);
        }
        lVar34 = 0x49 - uVar17;
        unaff_R12 = &UNK_14305df65 + uVar17;
      }
    }
    puVar28 = &UNK_14305d9f9;
    puVar35 = &UNK_14305d9b5;
    do {
      bVar39 = puVar28[-1];
      uVar12 = (uint)(char)bVar39;
      if ((char)bVar39 < '\0') {
        bVar38 = puVar28[-2];
        if ((char)bVar38 < -0x40) {
          bVar1 = puVar28[-3];
          if ((char)bVar1 < -0x40) {
            pbVar27 = puVar28 + -4;
            puVar28 = puVar28 + -4;
            uVar12 = bVar1 & 0x3f | (*pbVar27 & 7) << 6;
          }
          else {
            puVar28 = puVar28 + -3;
            uVar12 = bVar1 & 0xf;
          }
          uVar12 = bVar38 & 0x3f | uVar12 << 6;
        }
        else {
          puVar28 = puVar28 + -2;
          uVar12 = bVar38 & 0x1f;
        }
        uVar12 = (uint)(bVar39 & 0x3f) | uVar12 << 6;
        if (uVar12 != 0x5c) goto LAB_140b896b4;
LAB_140b896c5:
        puVar35 = puVar28 + -0x14305d9b4;
        if (puVar35 < (undefined *)0x45) {
          in_stack_fffffffffffffb98 = 0x44 - (longlong)puVar35;
          puVar35 = puVar28 + 1;
          goto LAB_140b896e7;
        }
        pdb_142dc8070(&UNK_14305d9b5,0x44,puVar35,0x44,&UNK_14305e008);
        goto LAB_140b8b8ac;
      }
      puVar28 = puVar28 + -1;
      if (uVar12 == 0x5c) goto LAB_140b896c5;
LAB_140b896b4:
      if (uVar12 == 0x2f) goto LAB_140b896c5;
    } while (puVar28 != &UNK_14305d9b5);
    in_stack_fffffffffffffb98 = 0x44;
LAB_140b896e7:
    pbVar15 = (byte *)pdb_140e97000();
    if ((pbVar15[0x68] != 1) && (pbVar15 = (byte *)pdb_142d8ec20(pbVar15,0), pbVar15 == (byte *)0x0)
       ) goto LAB_140b8b737;
    pbVar27 = pbVar23;
    if (*(longlong *)pbVar15 != 0) goto LAB_140b8b468;
    pbVar15[0] = 0xff;
    pbVar15[1] = 0xff;
    pbVar15[2] = 0xff;
    pbVar15[3] = 0xff;
    pbVar15[4] = 0xff;
    pbVar15[5] = 0xff;
    pbVar15[6] = 0xff;
    pbVar15[7] = 0xff;
    in_stack_fffffffffffffba0 = (undefined8 *)0x0;
    pbStack_130 = pbVar15;
    uStack_2c0 = pdb_140e94f10(pbVar15 + 8,unaff_R12,lVar34,puVar35,in_stack_fffffffffffffb98,1,0);
    *(longlong *)pbStack_130 = *(longlong *)pbStack_130 + 1;
    pbVar27 = pbStack_c0;
  }
  lVar20 = param_11[1];
  uVar17 = *(ulonglong *)*param_11;
  uVar22 = 0;
  uVar14 = uVar17 - *(ulonglong *)(lVar20 + 0x18);
  if (uVar17 < *(ulonglong *)(lVar20 + 0x18)) {
    uVar14 = uVar22;
  }
  uVar31 = uVar17 - *(ulonglong *)(lVar20 + 0x38);
  if (uVar17 < *(ulonglong *)(lVar20 + 0x38)) {
    uVar31 = uVar22;
  }
  bVar36 = *(ulonglong *)(lVar20 + 0x30) < uVar31;
  uVar31 = *(ulonglong *)(lVar20 + 0x30) - uVar31;
  uVar17 = uVar31;
  if (bVar36) {
    uVar17 = uVar22;
  }
  bVar37 = *(ulonglong *)(lVar20 + 0x10) < uVar14;
  uVar14 = *(ulonglong *)(lVar20 + 0x10) - uVar14;
  uVar32 = uVar14;
  if (bVar37) {
    uVar32 = uVar22;
  }
  bVar5 = (bVar37 || uVar14 == 0) && (bVar36 || uVar31 == 0);
  uVar17 = uVar32 + uVar17;
  if (!bVar37 && uVar14 != 0 || !bVar36 && uVar31 != 0) {
    uVar17 = uVar22;
  }
  pbVar15 = (byte *)(*(longlong *)(lVar20 + 0x40) - uVar17);
  *(ulonglong *)*param_11 = (ulonglong)pbVar15;
  fVar47 = _DAT_14302c608;
  param_1 = *(byte **)param_1;
  if (*param_1 == 0) {
    iVar2 = *(int *)(param_1 + 8);
    if (iVar2 == 0) {
      pauVar26 = *(undefined1 (**) [16])pbStack_c8;
      auVar43 = *pauVar26;
      pauVar24 = pauVar26 + 1;
      unaff_R12 = (byte *)(ulonglong)
                          ~(uint)(ushort)((ushort)(SUB161(auVar43 >> 7,0) & 1) |
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
      pbStack_340 = pbVar27 + 0x20;
      pbStack_348 = pbStack_c8 + 0x20;
      unaff_XMM6_Da = -NAN;
      pbVar23 = pbStack_c8;
      lVar20 = *(longlong *)(pbStack_c8 + 0x18);
      pbStack_c0 = pbVar27;
      bStack_b1 = (byte)uVar11;
LAB_140b89983:
      pbVar15 = (byte *)&uStack_2a8;
      if (lVar20 != 0) {
        if ((short)unaff_R12 == 0) {
          do {
            auVar43 = *pauVar24;
            pauVar26 = pauVar26 + -0x2b0;
            pauVar24 = pauVar24 + 1;
            uVar11 = (ushort)((ushort)(SUB161(auVar43 >> 7,0) & 1) |
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
            unaff_R12 = (byte *)(ulonglong)uVar11;
          } while (uVar11 == 0);
        }
        uVar11 = 0;
        uVar33 = (uint)unaff_R12;
        for (uVar12 = uVar33; (uVar12 & 1) == 0; uVar12 = uVar12 >> 1 | 0x80000000) {
          uVar11 = uVar11 + 1;
        }
        pbStack_368 = *(byte **)pauVar26[(ulonglong)uVar11 * -0x2b + -0x2b];
        uStack_2a8._0_4_ = SUB84(pbStack_368,0);
        uStack_2a8._4_4_ = (float)((ulonglong)pbStack_368 >> 0x20);
        pbStack_130 = pbStack_368;
        if (*(longlong *)(pbVar23 + 0x18) != 0) {
          unaff_R12 = (byte *)(ulonglong)(uVar33 - 1 & uVar33);
          lStack_2f0 = lVar20 + -1;
          uVar17 = pdb_1400af0a0(pbStack_348);
          pbVar27 = pbStack_c0;
          lVar13 = *(longlong *)pbVar23;
          bVar39 = (byte)(uVar17 >> 0x39);
          auVar43 = ZEXT216(CONCAT11(bVar39,bVar39));
          auVar43 = pshuflw(auVar43,auVar43,0);
          lVar20 = 0;
          while( true ) {
            uVar17 = uVar17 & *(ulonglong *)(pbVar23 + 8);
            auVar44 = *(undefined1 (*) [16])(lVar13 + uVar17);
            auVar56[0] = -(auVar44[0] == auVar43[0]);
            auVar56[1] = -(auVar44[1] == auVar43[1]);
            auVar56[2] = -(auVar44[2] == auVar43[2]);
            auVar56[3] = -(auVar44[3] == auVar43[3]);
            auVar56[4] = -(auVar44[4] == auVar43[4]);
            auVar56[5] = -(auVar44[5] == auVar43[5]);
            auVar56[6] = -(auVar44[6] == auVar43[6]);
            auVar56[7] = -(auVar44[7] == auVar43[7]);
            auVar56[8] = -(auVar44[8] == auVar43[0]);
            auVar56[9] = -(auVar44[9] == auVar43[1]);
            auVar56[10] = -(auVar44[10] == auVar43[2]);
            auVar56[0xb] = -(auVar44[0xb] == auVar43[3]);
            auVar56[0xc] = -(auVar44[0xc] == auVar43[4]);
            auVar56[0xd] = -(auVar44[0xd] == auVar43[5]);
            auVar56[0xe] = -(auVar44[0xe] == auVar43[6]);
            auVar56[0xf] = -(auVar44[0xf] == auVar43[7]);
            uVar30 = (ushort)(SUB161(auVar56 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar56 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar56 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar56 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar56 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar56 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar56 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar56 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar56 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar56 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar56 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar56 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar56 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar56 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar56 >> 0x77,0) & 1) << 0xe |
                     (ushort)(auVar56[0xf] >> 7) << 0xf;
            uVar11 = (uint)uVar30;
            while (uVar30 != 0) {
              uVar12 = 0;
              for (uVar33 = uVar11; (uVar33 & 1) == 0; uVar33 = uVar33 >> 1 | 0x80000000) {
                uVar12 = uVar12 + 1;
              }
              lVar34 = (uVar12 + uVar17 & *(ulonglong *)(pbVar23 + 8)) * -0x2b0;
              if (pbStack_130 == *(byte **)(lVar13 + -0x2b0 + lVar34)) {
                lVar13 = lVar13 + lVar34;
                if ((*(ulonglong *)(lVar13 + -0x298) < 2) || (*(float *)(lVar13 + -0x278) <= 0.0))
                goto LAB_140b8b744;
                lVar20 = lStack_2f0;
                if (*(int *)(lVar13 + -0x50) != 0) goto LAB_140b89983;
                unaff_XMM10_Da = (float)*(undefined8 *)(lVar13 + -0x4c);
                unaff_XMM10_Db = (float)((ulonglong)*(undefined8 *)(lVar13 + -0x4c) >> 0x20);
                uStack_f8 = (byte **)pbStack_130;
                if (*(longlong *)(pbStack_c0 + 0x18) == 0) goto LAB_140b8a87c;
                uVar14 = pdb_1400af0a0(pbStack_340,&uStack_f8);
                lVar20 = *(longlong *)pbVar27;
                uVar17 = *(ulonglong *)(pbVar27 + 8);
                bVar39 = (byte)(uVar14 >> 0x39);
                auVar43 = ZEXT216(CONCAT11(bVar39,bVar39));
                auVar43 = pshuflw(auVar43,auVar43,0);
                lVar13 = 0;
                goto LAB_140b89b3f;
              }
              uVar30 = (ushort)(uVar11 - 1) & (ushort)uVar11;
              uVar11 = CONCAT22((short)(uVar11 - 1 >> 0x10),uVar30);
            }
            auVar48[0] = -(auVar44[0] == -1);
            auVar48[1] = -(auVar44[1] == -1);
            auVar48[2] = -(auVar44[2] == -1);
            auVar48[3] = -(auVar44[3] == -1);
            auVar48[4] = -(auVar44[4] == -1);
            auVar48[5] = -(auVar44[5] == -1);
            auVar48[6] = -(auVar44[6] == -1);
            auVar48[7] = -(auVar44[7] == -1);
            auVar48[8] = -(auVar44[8] == -1);
            auVar48[9] = -(auVar44[9] == -1);
            auVar48[10] = -(auVar44[10] == -1);
            auVar48[0xb] = -(auVar44[0xb] == -1);
            auVar48[0xc] = -(auVar44[0xc] == -1);
            auVar48[0xd] = -(auVar44[0xd] == -1);
            auVar48[0xe] = -(auVar44[0xe] == -1);
            auVar48[0xf] = -(auVar44[0xf] == -1);
            if ((((((((((((((((SUB161(auVar48 >> 7,0) & 1) != 0 ||
                             (SUB161(auVar48 >> 0xf,0) & 1) != 0) ||
                            (SUB161(auVar48 >> 0x17,0) & 1) != 0) ||
                           (SUB161(auVar48 >> 0x1f,0) & 1) != 0) ||
                          (SUB161(auVar48 >> 0x27,0) & 1) != 0) ||
                         (SUB161(auVar48 >> 0x2f,0) & 1) != 0) ||
                        (SUB161(auVar48 >> 0x37,0) & 1) != 0) ||
                       (SUB161(auVar48 >> 0x3f,0) & 1) != 0) || (SUB161(auVar48 >> 0x47,0) & 1) != 0
                      ) || (SUB161(auVar48 >> 0x4f,0) & 1) != 0) ||
                    (SUB161(auVar48 >> 0x57,0) & 1) != 0) || (SUB161(auVar48 >> 0x5f,0) & 1) != 0)
                  || (SUB161(auVar48 >> 0x67,0) & 1) != 0) || (SUB161(auVar48 >> 0x6f,0) & 1) != 0)
                || (SUB161(auVar48 >> 0x77,0) & 1) != 0) || auVar48[0xf] < '\0') break;
            uVar17 = uVar17 + lVar20 + 0x10;
            lVar20 = lVar20 + 0x10;
          }
        }
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_14305da18);
      }
      pbVar27 = (byte *)CONCAT71((int7)((ulonglong)pbVar23 >> 8),2);
      pbVar23 = (byte *)(ulonglong)bStack_b1;
      pbVar8 = pbStack_d0;
      if (*param_1 != 0) goto LAB_140b8a09f;
LAB_140b8a920:
      iVar2 = *(int *)(param_1 + 8);
      pbVar8 = pbStack_d0;
      pbVar7 = pbStack_c8;
    }
    else {
      pbVar27 = (byte *)CONCAT71((int7)((ulonglong)pbVar27 >> 8),2);
      pbVar8 = pbStack_d0;
      pbVar7 = pbStack_c8;
    }
    pbStack_d0 = pbVar15;
    pbVar15 = pbStack_d0;
    pbStack_c8 = pbVar7;
    if (iVar2 - 1U < 2) {
      param_1 = *(byte **)(param_1 + 0x10);
      uStack_2a8._0_4_ = SUB84(param_1,0);
      uStack_2a8._4_4_ = (float)((ulonglong)param_1 >> 0x20);
      bVar39 = (byte)pbVar23;
      uStack_140 = param_1;
      if (*(longlong *)(pbVar7 + 0x18) != 0) {
        uVar17 = pdb_1400af0a0(pbVar7 + 0x20,&uStack_2a8);
        lVar20 = *(longlong *)pbVar7;
        bVar38 = (byte)(uVar17 >> 0x39);
        auVar43 = ZEXT216(CONCAT11(bVar38,bVar38));
        auVar43 = pshuflw(auVar43,auVar43,0);
        lVar13 = 0;
        while( true ) {
          uVar17 = uVar17 & *(ulonglong *)(pbVar7 + 8);
          auVar44 = *(undefined1 (*) [16])(lVar20 + uVar17);
          auVar59[0] = -(auVar44[0] == auVar43[0]);
          auVar59[1] = -(auVar44[1] == auVar43[1]);
          auVar59[2] = -(auVar44[2] == auVar43[2]);
          auVar59[3] = -(auVar44[3] == auVar43[3]);
          auVar59[4] = -(auVar44[4] == auVar43[4]);
          auVar59[5] = -(auVar44[5] == auVar43[5]);
          auVar59[6] = -(auVar44[6] == auVar43[6]);
          auVar59[7] = -(auVar44[7] == auVar43[7]);
          auVar59[8] = -(auVar44[8] == auVar43[0]);
          auVar59[9] = -(auVar44[9] == auVar43[1]);
          auVar59[10] = -(auVar44[10] == auVar43[2]);
          auVar59[0xb] = -(auVar44[0xb] == auVar43[3]);
          auVar59[0xc] = -(auVar44[0xc] == auVar43[4]);
          auVar59[0xd] = -(auVar44[0xd] == auVar43[5]);
          auVar59[0xe] = -(auVar44[0xe] == auVar43[6]);
          auVar59[0xf] = -(auVar44[0xf] == auVar43[7]);
          uVar30 = (ushort)(SUB161(auVar59 >> 7,0) & 1) |
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
                   (ushort)(auVar59[0xf] >> 7) << 0xf;
          uVar11 = (uint)uVar30;
          while (uVar30 != 0) {
            uVar12 = 0;
            for (uVar33 = uVar11; (uVar33 & 1) == 0; uVar33 = uVar33 >> 1 | 0x80000000) {
              uVar12 = uVar12 + 1;
            }
            lVar34 = (uVar12 + uVar17 & *(ulonglong *)(pbVar7 + 8)) * -0x2b0;
            if (param_1 == *(byte **)(lVar20 + -0x2b0 + lVar34)) {
              lVar20 = lVar20 + lVar34;
              if ((*(ulonglong *)(lVar20 + -0x298) < 2) || (*(float *)(lVar20 + -0x278) <= 0.0)) {
                bStack_b1 = bVar39;
                    /* WARNING: Subroutine does not return */
                pdb_142dc83b0(&UNK_143059e50,0x32,&UNK_14305da60);
              }
              pbVar15 = pbStack_d0;
              unaff_R12 = pbVar7;
              pbVar8 = pbStack_d0;
              if (*(int *)(lVar20 + -0x50) != 0) goto LAB_140b8a09f;
              unaff_XMM6_Da = *(float *)(lVar20 + -0x4c);
              fVar47 = *(float *)(lVar20 + -0x48);
              in_stack_fffffffffffffb98 =
                   CONCAT44((int)((ulonglong)in_stack_fffffffffffffb98 >> 0x20),
                            *(undefined4 *)(lVar20 + -0x40));
              bStack_b1 = bVar39;
              pdb_140def2a0(&puStack_128,pbStack_d0,uVar11,lVar34,in_stack_fffffffffffffb98);
              if (*(char *)(lVar20 + -0x1a0) == '\0') {
                pdb_142d8e040();
                goto LAB_140b8b97b;
              }
              pdb_140defdf0(&uStack_2a8,&puStack_128);
              fStack_160 = fStack_298;
              uStack_15c = (undefined4)
                           (CONCAT26(uStack_292,CONCAT24(uStack_294,fStack_298)) >> 0x20);
              fStack_170 = (float)uStack_2a8;
              fStack_16c = uStack_2a8._4_4_;
              fStack_168 = fStack_2a0;
              fStack_164 = fStack_29c;
              fStack_174 = 0.5;
              fStack_178 = (float)CONCAT31(fStack_178._1_3_,1);
              lVar13 = CONCAT26(uStack_28a,
                                CONCAT24(uStack_28c,
                                         CONCAT22(uStack_28e,CONCAT11(uStack_28f,uStack_290))));
              if (lVar13 != 0) {
                pub_1406abac0(pbStack_288,lVar13 << 2,4);
              }
              uStack_f8 = (byte **)&uStack_140;
              uStack_f0 = pdb_140c04ef0;
              uStack_b2 = 1;
              pdb_140f60760(&uStack_2a8,&UNK_14305da90,&uStack_f8);
              iStack_260 = (uint)bVar5 + (uint)bVar5 * 2;
              uStack_f8 = (byte **)CONCAT44(uStack_2a8._4_4_,(float)uStack_2a8);
              uStack_f0 = (code *)CONCAT44(fStack_29c,fStack_2a0);
              uStack_e8 = CONCAT26(uStack_292,CONCAT24(uStack_294,fStack_298));
              uStack_220 = CONCAT44(fStack_174,fStack_178);
              uStack_218 = CONCAT44(fStack_16c,fStack_170);
              uStack_210 = CONCAT44(fStack_164,fStack_168);
              uStack_208 = CONCAT44(uStack_15c,fStack_160);
              uStack_2a8._0_4_ = 0.0;
              uStack_2a8._4_4_ = 0.0;
              fStack_2a0 = 1.12104e-44;
              fStack_29c = 0.0;
              fStack_298 = 0.0;
              uStack_294 = 0;
              uStack_292 = 0;
              uStack_28f = 0;
              uStack_28e = 0;
              pbStack_288 = (byte *)0x0;
              puStack_278 = (undefined *)CONCAT44(puStack_278._4_4_,(uint)bVar5 + (uint)bVar5);
              uStack_230 = 0;
              uStack_200 = 0x100;
              uStack_b2 = 0;
              pbVar23 = (byte *)&uStack_f8;
              uStack_290 = bVar5;
              iStack_248 = iStack_260;
              lVar13 = pdb_1409008d0(uStack_198,pbVar23,&uStack_2a8);
              uVar21 = (undefined4)((ulonglong)in_stack_fffffffffffffba0 >> 0x20);
              pbStack_c0 = pbVar23;
              if (((*(char *)(lVar13 + 0x18) == '\0') || (*(byte **)(lVar13 + 0x38) != pbVar23)) ||
                 (*(int *)(lVar13 + 0x28) == 2)) {
                uStack_b2 = 0;
                uVar61 = (undefined4)((ulonglong)in_stack_fffffffffffffb98 >> 0x20);
                pdb_140def2a0(&uStack_2a8);
                if (*(char *)(lVar20 + -0x1a0) != '\0') {
                  uStack_b2 = 0;
                  in_stack_fffffffffffffb98 =
                       CONCAT44(uVar61,*(float *)(lVar20 + -0x20) * _DAT_142e36f38 +
                                       *(float *)(lVar20 + -0x19c));
                  in_stack_fffffffffffffba0 = (undefined8 *)CONCAT44(uVar21,0x40400000);
                  pdb_140b8c170(uStack_2b8,pbStack_c0,param_1,&uStack_2a8,in_stack_fffffffffffffb98,
                                in_stack_fffffffffffffba0);
                  pbVar23 = (byte *)(ulonglong)bStack_b1;
                  pbVar15 = pbStack_d0;
                  pbVar8 = pbStack_d0;
                  goto LAB_140b8a09f;
                }
                uStack_b2 = 0;
                pdb_142d8e040();
                goto LAB_140b8b97b;
              }
              if (*(char *)(lVar20 + -0x1a0) != '\0') {
                fVar50 = *(float *)(lVar13 + 0x4c) - unaff_XMM6_Da;
                fVar47 = *(float *)(lVar13 + 0x54) - fVar47;
                fVar54 = _DAT_142e36f28 / SQRT(fVar47 * fVar47 + fVar50 * fVar50);
                unaff_XMM10_Da = fVar54 * fVar50;
                unaff_XMM10_Db = fVar54 * fVar47;
                unaff_XMM9_Da =
                     *(float *)(lVar20 + -0x20) * _DAT_142e36f38 + *(float *)(lVar20 + -0x19c);
                pbVar27 = (byte *)CONCAT71((int7)((ulonglong)pbVar27 >> 8),1);
                bVar39 = bStack_b1;
                goto LAB_140b8a0b7;
              }
              uStack_b2 = 0;
              pdb_142d8e040();
              goto LAB_140b8b97b;
            }
            uVar30 = (ushort)(uVar11 - 1) & (ushort)uVar11;
            uVar11 = CONCAT22((short)(uVar11 - 1 >> 0x10),uVar30);
          }
          auVar55[0] = -(auVar44[0] == -1);
          auVar55[1] = -(auVar44[1] == -1);
          auVar55[2] = -(auVar44[2] == -1);
          auVar55[3] = -(auVar44[3] == -1);
          auVar55[4] = -(auVar44[4] == -1);
          auVar55[5] = -(auVar44[5] == -1);
          auVar55[6] = -(auVar44[6] == -1);
          auVar55[7] = -(auVar44[7] == -1);
          auVar55[8] = -(auVar44[8] == -1);
          auVar55[9] = -(auVar44[9] == -1);
          auVar55[10] = -(auVar44[10] == -1);
          auVar55[0xb] = -(auVar44[0xb] == -1);
          auVar55[0xc] = -(auVar44[0xc] == -1);
          auVar55[0xd] = -(auVar44[0xd] == -1);
          auVar55[0xe] = -(auVar44[0xe] == -1);
          auVar55[0xf] = -(auVar44[0xf] == -1);
          if ((((((((((((((((SUB161(auVar55 >> 7,0) & 1) != 0 || (SUB161(auVar55 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar55 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar55 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar55 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar55 >> 0x2f,0) & 1) != 0) || (SUB161(auVar55 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar55 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar55 >> 0x47,0) & 1) != 0) || (SUB161(auVar55 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar55 >> 0x57,0) & 1) != 0) || (SUB161(auVar55 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar55 >> 0x67,0) & 1) != 0) || (SUB161(auVar55 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar55 >> 0x77,0) & 1) != 0) || auVar55[0xf] < '\0') break;
          uVar17 = uVar17 + lVar13 + 0x10;
          lVar13 = lVar13 + 0x10;
        }
      }
      bStack_b1 = bVar39;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_14305da78);
    }
LAB_140b8a09f:
    pbStack_d0 = pbVar8;
    param_1 = pbStack_130;
    bVar39 = (byte)pbVar23;
    pbStack_c0 = pbVar15;
    if ((char)pbVar27 != '\x02') {
LAB_140b8a0b7:
      pbVar23 = pbStack_c8;
      uVar11 = (uint)pbVar27;
      uStack_2a8._0_4_ = SUB84(param_1,0);
      uVar21 = (float)uStack_2a8;
      uStack_2a8._4_4_ = (float)((ulonglong)param_1 >> 0x20);
      uVar61 = uStack_2a8._4_4_;
      bStack_b1 = bVar39;
      if (*(longlong *)(pbStack_c8 + 0x18) != 0) {
        puVar62 = &uStack_2a8;
        uVar14 = pdb_1400af0a0(pbStack_c8 + 0x20,puVar62);
        lVar20 = *(longlong *)pbVar23;
        uVar17 = *(ulonglong *)(pbVar23 + 8);
        bVar39 = (byte)(uVar14 >> 0x39);
        auVar43 = ZEXT216(CONCAT11(bVar39,bVar39));
        auVar43 = pshuflw(auVar43,auVar43,0);
        lVar13 = 0;
        while( true ) {
          uVar14 = uVar14 & uVar17;
          auVar44 = *(undefined1 (*) [16])(lVar20 + uVar14);
          auVar60[0] = -(auVar44[0] == auVar43[0]);
          auVar60[1] = -(auVar44[1] == auVar43[1]);
          auVar60[2] = -(auVar44[2] == auVar43[2]);
          auVar60[3] = -(auVar44[3] == auVar43[3]);
          auVar60[4] = -(auVar44[4] == auVar43[4]);
          auVar60[5] = -(auVar44[5] == auVar43[5]);
          auVar60[6] = -(auVar44[6] == auVar43[6]);
          auVar60[7] = -(auVar44[7] == auVar43[7]);
          auVar60[8] = -(auVar44[8] == auVar43[0]);
          auVar60[9] = -(auVar44[9] == auVar43[1]);
          auVar60[10] = -(auVar44[10] == auVar43[2]);
          auVar60[0xb] = -(auVar44[0xb] == auVar43[3]);
          auVar60[0xc] = -(auVar44[0xc] == auVar43[4]);
          auVar60[0xd] = -(auVar44[0xd] == auVar43[5]);
          auVar60[0xe] = -(auVar44[0xe] == auVar43[6]);
          auVar60[0xf] = -(auVar44[0xf] == auVar43[7]);
          uVar30 = (ushort)(SUB161(auVar60 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar60 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar60 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar60 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar60 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar60 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar60 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar60 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar60 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar60 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar60 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar60 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar60 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar60 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar60[0xf] >> 7) << 0xf;
          uVar12 = (uint)uVar30;
          while (uVar30 != 0) {
            uVar33 = 0;
            for (uVar4 = uVar12; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
              uVar33 = uVar33 + 1;
            }
            lVar34 = (uVar33 + uVar14 & uVar17) * -0x2b0;
            if (param_1 == *(byte **)(lVar20 + -0x2b0 + lVar34)) {
              unaff_R12 = (byte *)(lVar20 + lVar34);
              if ((*(ulonglong *)(unaff_R12 + -0x298) < 2) ||
                 (*(float *)(unaff_R12 + -0x278) <= 0.0)) {
                    /* WARNING: Subroutine does not return */
                pdb_142dc83b0(&UNK_143059e50,0x32,&UNK_14305dab0);
              }
              if (1 < *(uint *)(unaff_R12 + -0x50)) {
                    /* WARNING: Subroutine does not return */
                pdb_142dc8150(&UNK_143021f00);
              }
              if (*(uint *)(unaff_R12 + -0x50) == 1) {
                    /* WARNING: Subroutine does not return */
                pdb_142dc83d0(&UNK_143043340,0x23,&UNK_143043358);
              }
              pbStack_c8 = unaff_R12 + -0x4c;
              pbStack_370 = param_1;
              if ((*(char *)(uStack_198 + 0x18) == '\x02') &&
                 (*(byte **)(uStack_198 + 0x38) == pbStack_c0)) {
                bVar39 = *(byte *)(uStack_198 + 0x19);
                if (bVar39 < 2) {
                  if ((*pbStack_108 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
                    pdb_142dc8150(&UNK_14305db88);
                  }
                  pcStack_100 = (code *)CONCAT44(pcStack_100._4_4_,uVar11);
                  fVar47 = *(float *)(pbStack_108 + 0xc);
                  if ((float)((uint)(fVar47 - *(float *)(unaff_R12 + -0x44)) & _DAT_142e377e0) <=
                      _DAT_142e37848) {
                    *puStack_2b0 = uStack_10c;
                    *puStack_320 = uStack_19c;
                    pdb_140c421c0(lStack_180,lStack_190);
                    goto LAB_140b8ae47;
                  }
                  lStack_180 = *(longlong *)(pbStack_108 + 4);
                  pbStack_108 = (byte *)CONCAT44(pbStack_108._4_4_,
                                                 *(undefined4 *)(pbStack_108 + 0x10));
                  lVar20 = pdb_140b0e1e0(*puStack_300,param_1,&UNK_14305dba0);
                  fVar50 = *(float *)(lVar20 + 0x38);
                  if (1 < (uint)fVar50) {
                    /* WARNING: Subroutine does not return */
                    pdb_142dc83d0(&UNK_14305dc58,0x69,&UNK_14305dc90);
                  }
                  uStack_118 = *(undefined8 *)(lVar20 + 0x4c);
                  puStack_128 = *(undefined **)(lVar20 + 0x3c);
                  uStack_120 = *(undefined8 *)(lVar20 + 0x44);
                  fStack_174 = (float)*(undefined8 *)(lVar20 + 0x3c);
                  fStack_170 = (float)((ulonglong)*(undefined8 *)(lVar20 + 0x3c) >> 0x20);
                  fStack_16c = (float)*(undefined8 *)(lVar20 + 0x44);
                  fStack_168 = (float)((ulonglong)*(undefined8 *)(lVar20 + 0x44) >> 0x20);
                  fStack_164 = (float)*(undefined8 *)(lVar20 + 0x4c);
                  fStack_160 = (float)((ulonglong)*(undefined8 *)(lVar20 + 0x4c) >> 0x20);
                  fStack_178 = fVar50;
                  if (((uint)fVar50 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
                    pdb_142dc83b0(&UNK_14305dbb8,0x28,&UNK_14305dc40);
                  }
                  *puStack_320 = uStack_19c;
                  lVar20 = pdb_140c3f000(lStack_190);
                  if (lVar20 == 0) goto LAB_140b8acf5;
                  pauVar26 = *(undefined1 (**) [16])(lVar20 + 0x30);
                  lVar13 = *(longlong *)(lVar20 + 0x48);
                  auVar43 = *pauVar26;
                  pauVar24 = pauVar26 + 1;
                  pbStack_d0 = (byte *)(lVar20 + 0x60);
                  uVar11 = ~(uint)(ushort)((ushort)(SUB161(auVar43 >> 7,0) & 1) |
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
                  goto LAB_140b8aa2e;
                }
                if (bVar39 != 2) {
                  pcStack_100 = (code *)CONCAT44(pcStack_100._4_4_,uVar11);
                  if (bVar39 == 3) {
                    *puStack_d8 = CONCAT44(unaff_XMM10_Db,unaff_XMM10_Da);
                    *(float *)(puStack_d8 + 1) = unaff_XMM9_Da;
                    lVar20 = *(longlong *)pbStack_c8;
                    uVar25 = *(undefined8 *)(unaff_R12 + -0x44);
                    uStack_2a8._0_4_ = (float)lVar20;
                    uStack_2a8._4_4_ = (float)((ulonglong)lVar20 >> 0x20);
                    fStack_2a0 = (float)uVar25;
                    fStack_29c = (float)((ulonglong)uVar25 >> 0x20);
                    pbStack_108[0] = 1;
                    pbStack_108[1] = 0;
                    pbStack_108[2] = 0;
                    pbStack_108[3] = 0;
                    *(longlong *)(pbStack_108 + 4) = lVar20;
                    *(undefined8 *)(pbStack_108 + 0xc) = uVar25;
                    pdb_140df4540(&fStack_2d8);
                    pdb_140df4520(&puStack_128,puStack_d8);
                    fStack_178 = (float)*puStack_308;
                    fStack_174 = (float)puStack_308[1];
                    fStack_170 = fStack_178 / fStack_174;
                    fStack_16c = 1.0;
                    pdb_140de83c0();
                    fStack_2a0 = fStack_2d0;
                    fStack_29c = SUB84(puStack_128,0);
                    fStack_298 = (float)((ulonglong)puStack_128 >> 0x20);
                    uStack_294 = (undefined2)uStack_120;
                    uStack_292 = (undefined2)((ulonglong)uStack_120 >> 0x10);
                    uStack_f8 = (byte **)_DAT_14305d860;
                    uStack_f0 = (code *)((ulonglong)uStack_f0 & 0xffffffffffffff00);
                    pdb_140bce5a0(&uStack_140);
                    *(float *)(pbStack_108 + 0x14) =
                         SQRT((fStack_138 - fStack_2d0) * (fStack_138 - fStack_2d0) +
                              (uStack_140._4_4_ - fStack_2d4) * (uStack_140._4_4_ - fStack_2d4) +
                              ((float)uStack_140 - fStack_2d8) * ((float)uStack_140 - fStack_2d8)) -
                         *(float *)(unaff_R12 + -0x44);
                    *puStack_2b0 = uStack_10c;
                    uStack_2a8._0_4_ = 0.0;
                    uStack_2a8._4_4_ = 0.0;
                    fStack_298 = 1.4013e-45;
                    uStack_294 = 0;
                    uStack_292 = 0;
                    in_stack_fffffffffffffba0 = (undefined8 *)&UNK_14305dae0;
                    in_stack_fffffffffffffb98 = lStack_360;
                    fStack_2a0 = (float)uVar21;
                    fStack_29c = (float)uVar61;
                    pdb_140aa3450(lStack_180,&uStack_2a8,2,lStack_190,lStack_360,&UNK_14305dae0,0xb)
                    ;
                    *puStack_2b0 = uStack_10c;
                    pdb_140c419b0(lStack_180,param_1,lStack_190);
                    *puStack_2b0 = uStack_10c;
                    lVar20 = lStack_190 + 0x90;
                    if (*(longlong *)(lStack_190 + 0x90) == 0) {
                      lVar20 = 0;
                    }
                    uStack_2a8._0_4_ = 1.4013e-45;
                    uStack_2a8._4_4_ = 0.0;
                    fStack_2a0 = (float)lVar20;
                    fStack_29c = (float)((ulonglong)lVar20 >> 0x20);
                    fStack_298 = 0.0;
                    uStack_294 = 0;
                    uStack_292 = 0;
                    uStack_270 = 0;
                    pdb_1414e0e70(&uStack_2a8,lStack_180 + 0x30);
                    goto LAB_140b8b682;
                  }
                  pdb_140df4540(&fStack_2e4);
                  pdb_140df4520(&puStack_128,puStack_d8);
                  fStack_178 = (float)*puStack_308;
                  fStack_174 = (float)puStack_308[1];
                  fStack_170 = fStack_178 / fStack_174;
                  fStack_16c = 1.0;
                  pdb_140de83c0();
                  fStack_2a0 = fStack_2dc;
                  uStack_2a8._0_4_ = fStack_2e4;
                  uStack_2a8._4_4_ = fStack_2e0;
                  fStack_29c = SUB84(puStack_128,0);
                  fStack_298 = (float)((ulonglong)puStack_128 >> 0x20);
                  uStack_294 = (undefined2)uStack_120;
                  uStack_292 = (undefined2)((ulonglong)uStack_120 >> 0x10);
                  uStack_f8 = (byte **)_DAT_14305d860;
                  uStack_f0 = (code *)((ulonglong)uStack_f0 & 0xffffffffffffff00);
                  in_stack_fffffffffffffb98 = lStack_318;
                  pdb_140bce5a0(&uStack_140);
                  fVar47 = (uStack_140._4_4_ - fStack_2e0) * (uStack_140._4_4_ - fStack_2e0) +
                           ((float)uStack_140 - fStack_2e4) * ((float)uStack_140 - fStack_2e4);
                  auVar43 = ZEXT416((uint)fVar47);
                  fVar50 = SQRT((fStack_138 - fStack_2dc) * (fStack_138 - fStack_2dc) + fVar47) -
                           *(float *)(pbStack_108 + 0x14);
                  pbStack_d0 = *(byte **)(unaff_R12 + -0x4c);
                  fVar47 = *(float *)(unaff_R12 + -0x44);
                  uVar61 = *(undefined4 *)(unaff_R12 + -0x40);
                  uVar21 = *(undefined4 *)(unaff_R12 + -0x24);
                  *puStack_328 = uStack_1a0;
                  lVar20 = *(longlong *)(lStack_188 + 0x30);
                  uVar25 = *(undefined8 *)(lStack_188 + 0x40);
                  in_stack_fffffffffffffba0 = puVar62;
                  if (lVar20 == *(longlong *)(lStack_188 + 0x20)) {
                    auVar43._0_8_ = pdb_142d7e7c0(lStack_188 + 0x20);
                    auVar43._8_8_ = extraout_XMM0_Qb;
                    in_stack_fffffffffffffba0 = puVar62;
                  }
                  lVar13 = *(longlong *)(lStack_188 + 0x28);
                  lVar34 = lVar20 * 0x30;
                  *(undefined4 *)(lVar13 + lVar34) = 0;
                  *(byte **)(lVar13 + 4 + lVar34) = pbStack_d0;
                  *(float *)(lVar13 + 0xc + lVar34) = fVar47;
                  *(undefined4 *)(lVar13 + 0x10 + lVar34) = uVar61;
                  auVar6._4_8_ = auVar43._8_8_;
                  auVar6._0_4_ = _UNK_14303a934;
                  auVar44._0_8_ = auVar6._0_8_ << 0x20;
                  auVar44._8_4_ = _UNK_14303a938;
                  auVar44._12_4_ = _UNK_14303a93c;
                  auVar45._4_12_ = auVar44._4_12_;
                  auVar45._0_4_ = uVar21;
                  *(longlong *)(lVar13 + 0x1c + lVar34) = auVar45._0_8_;
                  *(undefined1 *)(lVar13 + 0x24 + lVar34) = 0;
                  *(undefined8 *)(lVar13 + 0x28 + lVar34) = uVar25;
                  *(longlong *)(lStack_188 + 0x30) = lVar20 + 1;
                  *(longlong *)(lStack_188 + 0x40) = *(longlong *)(lStack_188 + 0x40) + 1;
                  if (unaff_R12[-0x1a0] == 0) {
                    pdb_142d8e040();
                    goto LAB_140b8b97b;
                  }
                  uVar21 = *(undefined4 *)(unaff_R12 + -0x24);
                  uVar46 = *(undefined4 *)(unaff_R12 + -0x19c);
                  *puStack_358 = uStack_2cc;
                  lVar20 = *(longlong *)(lStack_2c8 + 0x30);
                  uVar25 = *(undefined8 *)(lStack_2c8 + 0x40);
                  if (lVar20 == *(longlong *)(lStack_2c8 + 0x20)) {
                    pdb_142d7ee50(lStack_2c8 + 0x20);
                  }
                  uVar41 = (undefined4)((ulonglong)in_stack_fffffffffffffb98 >> 0x20);
                  fVar54 = _DAT_14300798c;
                  if (_DAT_14300798c <= fVar50) {
                    fVar54 = fVar50;
                  }
                  lVar13 = *(longlong *)(lStack_2c8 + 0x28);
                  lVar34 = lVar20 * 0x40;
                  *(undefined2 *)(lVar13 + lVar34) = 0;
                  *(byte **)(lVar13 + 4 + lVar34) = pbStack_d0;
                  *(float *)(lVar13 + 0xc + lVar34) = fVar47;
                  *(undefined4 *)(lVar13 + 0x10 + lVar34) = uVar61;
                  *(undefined4 *)(lVar13 + 0x14 + lVar34) = uVar21;
                  *(undefined4 *)(lVar13 + 0x18 + lVar34) = uVar46;
                  *(undefined8 *)(lVar13 + 0x20 + lVar34) = 1;
                  *(byte **)(lVar13 + 0x28 + lVar34) = param_1;
                  *(undefined8 *)(lVar13 + 0x38 + lVar34) = uVar25;
                  *(longlong *)(lStack_2c8 + 0x30) = lVar20 + 1;
                  *(longlong *)(lStack_2c8 + 0x40) = *(longlong *)(lStack_2c8 + 0x40) + 1;
                  fVar50 = _DAT_142f57bc8;
                  if (fVar54 <= _DAT_142f57bc8) {
                    fVar50 = fVar54;
                  }
                  if ((fVar50 == fVar47) &&
                     (uVar11 = (uint)pcStack_100, !NAN(fVar50) && !NAN(fVar47))) goto LAB_140b8a4eb;
                  pbVar27 = (byte *)*param_5;
                  unaff_XMM6_Da = *(float *)(unaff_R12 + -0x44);
                  pdb_140de93b0();
                  fVar47 = *(float *)(unaff_R12 + -0x40);
                  in_stack_fffffffffffffb98 = CONCAT44(uVar41,fVar47);
                  pdb_140def2a0(&puStack_128);
                  uStack_120 = CONCAT44(fVar47,(float)uStack_120);
                  uStack_2a8._4_4_ = SUB84(puStack_128,0);
                  fStack_2a0 = (float)((ulonglong)puStack_128 >> 0x20);
                  fStack_29c = (float)uStack_120;
                  uStack_2a8._0_4_ = 0.0;
                  fStack_298 = fVar47;
                  cVar10 = pdb_140b404c0(pbVar27,&uStack_2a8);
                  if (cVar10 != '\0') {
                    fVar47 = (float)uStack_120;
                    goto LAB_140b8b4a7;
                  }
                  pdb_140314c70(param_12,&UNK_14305dca8);
                  pdb_140314c70(&uStack_3a8,&UNK_14305dcc0);
                  if (*pbVar27 == 0) goto LAB_140b8b474;
                  fStack_174 = (float)*(undefined8 *)(unaff_R12 + -0x4c);
                  fStack_170 = (float)((ulonglong)*(undefined8 *)(unaff_R12 + -0x4c) >> 0x20);
                  fStack_16c = (float)*(undefined8 *)(unaff_R12 + -0x44);
                  fStack_168 = (float)((ulonglong)*(undefined8 *)(unaff_R12 + -0x44) >> 0x20);
                  fStack_178 = 0.0;
                  uStack_2a8._4_4_ = SUB84(puStack_128,0);
                  fStack_2a0 = (float)((ulonglong)puStack_128 >> 0x20);
                  fStack_29c = (float)uStack_120;
                  fStack_298 = (float)((ulonglong)uStack_120 >> 0x20);
                  uStack_2a8._0_4_ = 0.0;
                  pdb_140b40890(&uStack_f8,pbVar27,&fStack_178,&uStack_2a8);
                  if ((int)uStack_f8 != 1) {
                    fVar47 = uStack_f0._4_4_;
                    goto LAB_140b8b49f;
                  }
                  goto LAB_140b8b8cd;
                }
              }
              *puStack_d8 = CONCAT44(unaff_XMM10_Db,unaff_XMM10_Da);
              *(float *)(puStack_d8 + 1) = unaff_XMM9_Da;
              lVar20 = *(longlong *)pbStack_c8;
              uVar25 = *(undefined8 *)(unaff_R12 + -0x44);
              uStack_2a8._0_4_ = (float)lVar20;
              uStack_2a8._4_4_ = (float)((ulonglong)lVar20 >> 0x20);
              fStack_2a0 = (float)uVar25;
              fStack_29c = (float)((ulonglong)uVar25 >> 0x20);
              pbStack_108[0] = 1;
              pbStack_108[1] = 0;
              pbStack_108[2] = 0;
              pbStack_108[3] = 0;
              *(longlong *)(pbStack_108 + 4) = lVar20;
              *(undefined8 *)(pbStack_108 + 0xc) = uVar25;
              goto LAB_140b8a4eb;
            }
            uVar30 = (ushort)(uVar12 - 1) & (ushort)uVar12;
            uVar12 = CONCAT22((short)(uVar12 - 1 >> 0x10),uVar30);
          }
          auVar58[0] = -(auVar44[0] == -1);
          auVar58[1] = -(auVar44[1] == -1);
          auVar58[2] = -(auVar44[2] == -1);
          auVar58[3] = -(auVar44[3] == -1);
          auVar58[4] = -(auVar44[4] == -1);
          auVar58[5] = -(auVar44[5] == -1);
          auVar58[6] = -(auVar44[6] == -1);
          auVar58[7] = -(auVar44[7] == -1);
          auVar58[8] = -(auVar44[8] == -1);
          auVar58[9] = -(auVar44[9] == -1);
          auVar58[10] = -(auVar44[10] == -1);
          auVar58[0xb] = -(auVar44[0xb] == -1);
          auVar58[0xc] = -(auVar44[0xc] == -1);
          auVar58[0xd] = -(auVar44[0xd] == -1);
          auVar58[0xe] = -(auVar44[0xe] == -1);
          auVar58[0xf] = -(auVar44[0xf] == -1);
          if ((((((((((((((((SUB161(auVar58 >> 7,0) & 1) != 0 || (SUB161(auVar58 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar58 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar58 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar58 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar58 >> 0x2f,0) & 1) != 0) || (SUB161(auVar58 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar58 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar58 >> 0x47,0) & 1) != 0) || (SUB161(auVar58 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar58 >> 0x57,0) & 1) != 0) || (SUB161(auVar58 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar58 >> 0x67,0) & 1) != 0) || (SUB161(auVar58 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar58 >> 0x77,0) & 1) != 0) || auVar58[0xf] < '\0') break;
          uVar14 = uVar14 + lVar13 + 0x10;
          lVar13 = lVar13 + 0x10;
        }
      }
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_14305dac8);
    }
  }
  while( true ) {
    if ((char)pbVar23 == '\0') {
      return;
    }
    plVar16 = (longlong *)pdb_140e97000();
    if (((char)plVar16[0xd] != '\x01') &&
       (plVar16 = (longlong *)pdb_142d8ec20(plVar16,0), plVar16 == (longlong *)0x0)) break;
    lVar20 = in_stack_fffffffffffffb98;
    if (*plVar16 == 0) {
      *plVar16 = -1;
      pbStack_c8 = (byte *)plVar16;
      pdb_140e95370(plVar16 + 1,uStack_2c0);
      *(longlong *)pbStack_c8 = *(longlong *)pbStack_c8 + 1;
      return;
    }
LAB_140b8b468:
    in_stack_fffffffffffffb98 = lVar20;
    pdb_142dc8090(&UNK_143326a50);
LAB_140b8b474:
    fVar47 = (float)*(undefined8 *)(pbVar27 + 4) - SUB84(puStack_128,0);
    fVar50 = (float)((ulonglong)*(undefined8 *)(pbVar27 + 4) >> 0x20) -
             (float)((ulonglong)puStack_128 >> 0x20);
    fVar47 = *(float *)(pbVar27 + 0xc) - SQRT(fVar50 * fVar50 + fVar47 * fVar47);
LAB_140b8b49f:
    uStack_120 = CONCAT44(uStack_120._4_4_,fVar47);
LAB_140b8b4a7:
    if (*(float *)(lStack_2f8 + 0x28) * _DAT_142e36f50 <
        (float)((uint)(fVar47 - unaff_XMM6_Da) & _DAT_142e377e0)) {
      uVar21 = *(undefined4 *)((longlong)puStack_300 + 0x1c);
      puVar3 = (undefined4 *)puStack_300[2];
      *puVar3 = uVar21;
      uVar25 = *puStack_300;
      pdb_140defcd0(&fStack_178,&puStack_128);
      puStack_278 = puStack_148;
      pbStack_288 = pbStack_158;
      pcStack_280 = pcStack_150;
      fStack_298 = fStack_168;
      uStack_294 = SUB42(fStack_164,0);
      uStack_292 = (undefined2)((uint)fStack_164 >> 0x10);
      uStack_290 = SUB41(fStack_160,0);
      uStack_28f = (undefined1)((uint)fStack_160 >> 8);
      uStack_28e = (undefined2)((uint)fStack_160 >> 0x10);
      uStack_28c = (undefined2)uStack_15c;
      uStack_28a = (undefined2)((uint)uStack_15c >> 0x10);
      uStack_2a8._0_4_ = fStack_178;
      uStack_2a8._4_4_ = fStack_174;
      fStack_2a0 = fStack_170;
      fStack_29c = fStack_16c;
      pdb_14092e8e0(uVar25,param_1,&uStack_2a8);
      *puVar3 = uVar21;
      uStack_2a8._4_4_ = SUB84(puStack_128,0);
      fStack_2a0 = (float)((ulonglong)puStack_128 >> 0x20);
      fStack_29c = (float)uStack_120;
      fStack_298 = (float)((ulonglong)uStack_120 >> 0x20);
      uStack_2a8._0_4_ = 0.0;
      pdb_140b0e480(uVar25,param_1,&uStack_2a8);
      pdb_140df4540(&fStack_178,unaff_R12 + -0x4c);
      uStack_2a8._0_4_ = SUB84(param_1,0);
      fVar47 = (float)uStack_2a8;
      uStack_2a8._4_4_ = (float)((ulonglong)param_1 >> 0x20);
      fVar50 = uStack_2a8._4_4_;
      uStack_294 = 4;
      fStack_2a0 = fStack_178;
      fStack_29c = fStack_174;
      fStack_298 = fStack_170;
      pdb_141b75330(&uStack_448,&uStack_2a8,&UNK_14305dcd8);
      lVar20 = pdb_140b0e1e0(uVar25,param_1,&UNK_14305dcf0);
      uVar9 = *(undefined1 *)(lVar20 + 0x69);
      fVar42 = (float)pdb_140de8220();
      fVar54 = 0.0;
      if (0.0 <= fVar42) {
        fVar54 = fVar42;
      }
      fVar42 = _DAT_142e36f28;
      if (fVar54 <= _DAT_142e36f28) {
        fVar42 = fVar54;
      }
      uStack_290 = 0;
      fStack_2a0 = fStack_178;
      fStack_29c = fStack_174;
      fStack_298 = fStack_170;
      uStack_294 = SUB42(fVar42,0);
      uStack_292 = (undefined2)((uint)fVar42 >> 0x10);
      uStack_2a8._0_4_ = fVar47;
      uStack_2a8._4_4_ = fVar50;
      uStack_28f = uVar9;
      pdb_141b75070(&uStack_428,&uStack_2a8,&UNK_14305dd08);
    }
LAB_140b8b682:
    uVar11 = (uint)pcStack_100;
LAB_140b8a4eb:
    uVar21 = (undefined4)((ulonglong)in_stack_fffffffffffffba0 >> 0x20);
    if ((uVar11 & 1) == 0) {
      unaff_XMM6_Da = *(float *)(unaff_R12 + -0x4c);
      fVar50 = *(float *)(unaff_R12 + -0x48);
      fVar47 = *(float *)(unaff_R12 + -0x44);
      uVar12 = *(uint *)(unaff_R12 + -0x40);
      pbVar27 = (byte *)(ulonglong)uVar12;
      uStack_140 = (byte *)CONCAT44(fVar47 * (float)((ulonglong)*puStack_d8 >> 0x20) + fVar50,
                                    fVar47 * (float)*puStack_d8 + unaff_XMM6_Da);
      pdb_140df4540(&fStack_178,&uStack_140);
      pdb_140df4520(&uStack_2a8,puStack_d8);
      if (*(char *)(uStack_198 + 0x18) == '\x02') {
        if (*(byte **)(uStack_198 + 0x38) == pbStack_c0) {
          bVar36 = *(char *)(uStack_198 + 0x19) != '\x02';
        }
        else {
          bVar36 = false;
        }
      }
      else {
        bVar36 = false;
      }
      uStack_f0 = (code *)CONCAT44(uStack_f0._4_4_,fStack_170);
      uStack_f8 = (byte **)CONCAT44(fStack_174,fStack_178);
      puStack_128 = (undefined *)CONCAT44(uStack_2a8._4_4_,(float)uStack_2a8);
      uStack_120 = CONCAT44(uStack_120._4_4_,fStack_2a0);
      *puStack_330 = uStack_1a4;
      *puStack_338 = pbStack_c0;
      puStack_338[1] = param_1;
      *(float *)(puStack_338 + 2) = unaff_XMM6_Da;
      *(float *)((longlong)puStack_338 + 0x14) = fVar50;
      *(float *)(puStack_338 + 3) = fVar47;
      *(uint *)((longlong)puStack_338 + 0x1c) = uVar12;
      puStack_338[4] = uStack_f8;
      *(float *)(puStack_338 + 5) = fStack_170;
      *(undefined **)((longlong)puStack_338 + 0x2c) = puStack_128;
      *(float *)((longlong)puStack_338 + 0x34) = fStack_2a0;
      *(bool *)(puStack_338 + 7) = bVar36;
      cVar10 = *(char *)(uStack_198 + 0x18);
      uVar17 = uStack_198;
    }
    else {
      uVar25 = *(undefined8 *)(unaff_R12 + -0x4c);
      uVar61 = (undefined4)((ulonglong)in_stack_fffffffffffffb98 >> 0x20);
      pdb_140def2a0(&uStack_388);
      uStack_2a8._0_4_ = (float)uStack_388;
      uStack_2a8._4_4_ = (float)((ulonglong)uStack_388 >> 0x20);
      fStack_2a0 = fStack_380;
      fStack_29c = fStack_37c;
      in_stack_fffffffffffffb98 = CONCAT44(uVar61,*(undefined4 *)(puStack_d8 + 1));
      in_stack_fffffffffffffba0 = (undefined8 *)CONCAT44(uVar21,0x40a00000);
      pdb_140b8c170(uStack_2b8,pbStack_c0,param_1,&uStack_2a8,in_stack_fffffffffffffb98,
                    in_stack_fffffffffffffba0);
      pdb_140de88f0(&uStack_2a8);
      fVar42 = fStack_29c;
      fVar54 = fStack_2a0;
      fVar50 = uStack_2a8._4_4_;
      fVar47 = (float)uStack_2a8;
      unaff_XMM6_Da = (float)uVar25 + fStack_380 * (float)*puStack_d8;
      fStack_174 = (float)((ulonglong)uVar25 >> 0x20) +
                   fStack_380 * (float)((ulonglong)*puStack_d8 >> 0x20);
      fStack_178 = unaff_XMM6_Da;
      pdb_140df4540(&uStack_2a8,&fStack_178);
      fVar51 = fVar54 * fVar54;
      fVar52 = fStack_29c * fStack_29c;
      fVar53 = fVar50 * fVar50 + fVar47 * fVar47;
      fVar40 = _UNK_143015ec8 * fVar54 + _UNK_143015ec4 * fVar50 + _DAT_143015ec0 * fVar47;
      fVar40 = fVar40 + fVar40;
      fStack_29c = fStack_29c + fStack_29c;
      uStack_f8 = (byte **)CONCAT44(uStack_2a8._4_4_ +
                                    fStack_29c * (fVar54 * 0.0 - fVar47 * _DAT_142e3787c) +
                                    fVar40 * fVar50 + (fVar52 - (fVar53 + fVar51)) * _UNK_143015ec4,
                                    (float)uStack_2a8 +
                                    fStack_29c * (fVar50 * _DAT_142e3787c - fVar54 * 0.0) +
                                    fVar40 * fVar47 + (fVar52 - (fVar53 + fVar51)) * _DAT_143015ec0)
      ;
      uStack_f0 = (code *)CONCAT44(uStack_f0._4_4_,
                                   fStack_29c * (fVar47 * 0.0 - fVar50 * 0.0) +
                                   fVar40 * fVar54 + (fVar52 - (fVar53 + fVar51)) * _UNK_143015ec8 +
                                   fStack_2a0);
      uStack_2a8 = &pbStack_370;
      fStack_2a0 = 5.779007;
      fStack_29c = 1.4013e-45;
      fStack_298 = SUB84(&uStack_388,0);
      uStack_294 = (undefined2)((ulonglong)&uStack_388 >> 0x20);
      uStack_292 = (undefined2)((ulonglong)&uStack_388 >> 0x30);
      uStack_290 = 0xf0;
      uStack_28f = 0xec;
      uStack_28e = 0x40b8;
      uStack_28c = 1;
      uStack_28a = 0;
      pbStack_288 = (byte *)&uStack_f8;
      pcStack_280 = pdb_140f33d80;
      pdb_140f60760(&fStack_178,&UNK_14305daeb,&uStack_2a8);
      fVar51 = fStack_164;
      fVar40 = fStack_168;
      unaff_R12 = (byte *)CONCAT44(fStack_174,fStack_178);
      pbStack_108 = (byte *)CONCAT44(fStack_16c,fStack_170);
      pbVar27 = (byte *)CONCAT44(fStack_164,fStack_168);
      fStack_2a0 = (float)(undefined4)uStack_f0;
      uStack_2a8._0_4_ = SUB84(uStack_f8,0);
      uStack_2a8._4_4_ = (float)((ulonglong)uStack_f8 >> 0x20);
      pdb_14007ee60();
      pcVar18 = (code *)pub_1406abab0(0x30,0x10);
      uVar17 = uStack_198;
      pbStack_d0 = unaff_R12;
      if (pcVar18 == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc7e11(0x10,0x30);
      }
      *(undefined8 *)pcVar18 = 1;
      *(undefined8 *)(pcVar18 + 8) = 1;
      *(float *)(pcVar18 + 0x10) = fVar47;
      *(float *)(pcVar18 + 0x14) = fVar50;
      *(float *)(pcVar18 + 0x18) = fVar54;
      *(float *)(pcVar18 + 0x1c) = fVar42;
      *(ulonglong *)(pcVar18 + 0x20) = CONCAT44(uStack_2a8._4_4_,(float)uStack_2a8);
      *(float *)(pcVar18 + 0x28) = fStack_2a0;
      uStack_2a8._0_4_ = SUB84(pcVar18,0);
      uStack_2a8._4_4_ = (float)((ulonglong)pcVar18 >> 0x20);
      fStack_2a0 = 133.85559;
      fStack_29c = 1.4013e-45;
      if ((int)fVar51 < 0) {
        uVar25 = 0;
        pcStack_100 = pcVar18;
LAB_140b8a79b:
        pdb_142dc7e2a(uVar25,pbVar27);
LAB_140b8b97b:
                    /* WARNING: Does not return */
        pcVar18 = (code *)invalidInstructionException();
        (*pcVar18)();
      }
      if (pbVar27 == (byte *)0x0) {
        param_1 = (byte *)0x1;
      }
      else {
        pcStack_100 = pcVar18;
        pdb_14007ee60();
        uVar25 = 1;
        param_1 = pub_1406abab0((ulonglong)pbVar27,1);
        if (param_1 == (byte *)0x0) goto LAB_140b8a79b;
        pub_142e32760(param_1,pbStack_108,pbVar27);
        pcVar18 = pcStack_100;
      }
      uStack_2a8._0_4_ = SUB84(pbStack_c0,0);
      uStack_2a8._4_4_ = (float)((ulonglong)pbStack_c0 >> 0x20);
      fStack_2a0 = (float)((uint)fStack_2a0 & 0xffffff00);
      fStack_298 = fVar40;
      uStack_294 = SUB42(fVar51,0);
      uStack_292 = (undefined2)((uint)fVar51 >> 0x10);
      uStack_290 = SUB81(param_1,0);
      uStack_28f = (undefined1)((ulonglong)param_1 >> 8);
      uStack_28e = (undefined2)((ulonglong)param_1 >> 0x10);
      uStack_28c = (undefined2)((ulonglong)param_1 >> 0x20);
      uStack_28a = (undefined2)((ulonglong)param_1 >> 0x30);
      puStack_278 = &UNK_14305db08;
      pbStack_288 = pbVar27;
      pcStack_280 = pcVar18;
      pdb_141a88350(uStack_2b8,&uStack_2a8);
      if (pbStack_d0 != (byte *)0x0) {
        pub_1406abac0(pbStack_108,(ulonglong)pbStack_d0,1);
      }
      cVar10 = *(char *)(uVar17 + 0x18);
    }
    pbVar23 = (byte *)(ulonglong)bStack_b1;
    if (((cVar10 == '\x02') && (*(byte **)(uVar17 + 0x38) == pbStack_c0)) &&
       (2 < *(byte *)(uVar17 + 0x19))) {
      fVar47 = _DAT_142e36f50;
      if ((uVar11 & 1) == 0) {
        fVar47 = 0.0;
      }
      unaff_XMM6_Da = *(float *)(puStack_d8 + 1);
      fVar50 = (float)*puStack_d8;
      fVar54 = (float)((ulonglong)*puStack_d8 >> 0x20);
      fVar42 = (float)*(longlong *)pbStack_c8;
      fVar40 = (float)((ulonglong)*(longlong *)pbStack_c8 >> 0x20);
      puStack_128 = (undefined *)
                    CONCAT44((_DAT_14300798c + fVar47) * fVar54 + fVar40,
                             (_DAT_14300798c + fVar47) * fVar50 + fVar42);
      uStack_f8 = (byte **)CONCAT44((fVar47 + _DAT_142f57bc8) * fVar54 + fVar40,
                                    (fVar47 + _DAT_142f57bc8) * fVar50 + fVar42);
      pdb_14007ee60();
      pbStack_c8 = pub_1406abab0(0x18,4);
      if (pbStack_c8 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc7e11(4,0x18);
      }
      pdb_140df4540(&fStack_178,&puStack_128,unaff_XMM6_Da);
      pdb_140df4540(&uStack_2a8,&uStack_f8,unaff_XMM6_Da);
      *(float *)(pbStack_c8 + 8) = fStack_170;
      *(longlong *)pbStack_c8 = CONCAT44(fStack_174,fStack_178);
      *(float *)(pbStack_c8 + 0x14) = fStack_2a0;
      *(ulonglong *)(pbStack_c8 + 0xc) = CONCAT44(uStack_2a8._4_4_,(float)uStack_2a8);
      uStack_2a8._0_4_ = 2.8026e-45;
      uStack_2a8._4_4_ = 0.0;
      fStack_2a0 = SUB84(pbStack_c8,0);
      fStack_29c = (float)((ulonglong)pbStack_c8 >> 0x20);
      fStack_298 = 2.8026e-45;
      uStack_294 = 0;
      uStack_292 = 0;
      uStack_290 = 0;
      uStack_28f = 0;
      uStack_28e = 0;
      uStack_28c = 0;
      uStack_28a = 0x8000;
      puStack_278 = (undefined *)((ulonglong)puStack_278 & 0xffffffff00000000);
      uStack_268 = CONCAT26(uStack_268._6_2_,0x140000000);
      fStack_178 = (float)uStack_2b8;
      fStack_174 = (float)(uStack_2b8 >> 0x20);
      fStack_170 = SUB84(pbStack_c0,0);
      fStack_16c = (float)((ulonglong)pbStack_c0 >> 0x20);
      fStack_168 = (float)((uint)fStack_168 & 0xffffff00);
      pdb_140ab32d0(&uStack_2a8);
      pbVar23 = (byte *)(ulonglong)bStack_b1;
    }
  }
LAB_140b8b737:
  pdb_142dc7890(&UNK_143326860);
LAB_140b8b744:
                    /* WARNING: Subroutine does not return */
  pdb_142dc83b0(&UNK_143059e50,0x32,&UNK_14305da00);
LAB_140b89b3f:
  uVar14 = uVar14 & uVar17;
  auVar44 = *(undefined1 (*) [16])(lVar20 + uVar14);
  auVar57[0] = -(auVar44[0] == auVar43[0]);
  auVar57[1] = -(auVar44[1] == auVar43[1]);
  auVar57[2] = -(auVar44[2] == auVar43[2]);
  auVar57[3] = -(auVar44[3] == auVar43[3]);
  auVar57[4] = -(auVar44[4] == auVar43[4]);
  auVar57[5] = -(auVar44[5] == auVar43[5]);
  auVar57[6] = -(auVar44[6] == auVar43[6]);
  auVar57[7] = -(auVar44[7] == auVar43[7]);
  auVar57[8] = -(auVar44[8] == auVar43[0]);
  auVar57[9] = -(auVar44[9] == auVar43[1]);
  auVar57[10] = -(auVar44[10] == auVar43[2]);
  auVar57[0xb] = -(auVar44[0xb] == auVar43[3]);
  auVar57[0xc] = -(auVar44[0xc] == auVar43[4]);
  auVar57[0xd] = -(auVar44[0xd] == auVar43[5]);
  auVar57[0xe] = -(auVar44[0xe] == auVar43[6]);
  auVar57[0xf] = -(auVar44[0xf] == auVar43[7]);
  uVar30 = (ushort)(SUB161(auVar57 >> 7,0) & 1) | (ushort)(SUB161(auVar57 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar57 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar57 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar57 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar57 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar57 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar57 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar57 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar57 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar57 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar57 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar57 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar57 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar57 >> 0x77,0) & 1) << 0xe | (ushort)(auVar57[0xf] >> 7) << 0xf;
  uVar11 = (uint)uVar30;
  while (uVar30 != 0) {
    uVar12 = 0;
    for (uVar33 = uVar11; (uVar33 & 1) == 0; uVar33 = uVar33 >> 1 | 0x80000000) {
      uVar12 = uVar12 + 1;
    }
    lVar34 = lVar20 + (uVar12 + uVar14 & uVar17) * -0x10;
    if (pbStack_130 == *(byte **)(lVar34 + -0x10)) {
      uVar17 = *(ulonglong *)(lVar34 + -8);
      uVar14 = (ulonglong)~(uint)uVar17;
      uVar21 = 1;
      if (*(ulonglong *)(pbStack_d0 + 0x10) <= uVar14) goto LAB_140b8b90e;
      piVar29 = (int *)(uVar14 * 0x18 + *(longlong *)(pbStack_d0 + 8));
      uVar14 = uVar17 >> 0x20;
      if ((piVar29[4] != (int)(uVar17 >> 0x20)) || (*piVar29 == 0)) goto LAB_140b8b90e;
      uVar14 = *(ulonglong *)(piVar29 + 2);
      uVar21 = 0;
      if ((*(ulonglong *)(pcStack_100 + 0x38) <= (uVar14 & 0xffffffff)) ||
         ((*(ulonglong *)(*(longlong *)(pcStack_100 + 0x28) + (uVar14 >> 6 & 0x3ffffff) * 8) >>
           (uVar14 & 0x3f) & 1) == 0)) goto LAB_140b8b90e;
      lVar20 = *(longlong *)
                (*(longlong *)(*(longlong *)(pbStack_d0 + 0x1a0) + 0x18 + (uVar14 >> 0x20) * 0x48) +
                 0x10 + ~*(ulonglong *)
                          (*(longlong *)
                            (*(longlong *)(pbStack_d0 + 0x1a0) + 0x38 + (uVar14 >> 0x20) * 0x48) +
                          *(longlong *)(pcStack_100 + 0x110) * 8) * 0x30);
      if (*(longlong *)(lVar20 + 0x10 + (ulonglong)(uint)~piVar29[1] * 0x68) == 0) {
        uVar9 = 7;
      }
      else {
        uStack_290 = 0;
        uStack_28f = 0;
        uStack_28e = 0xbf00;
        uStack_2a8._0_4_ = 0.0;
        fStack_29c = 1.4013e-45;
        fStack_298 = fVar47;
        uStack_294 = 0;
        uStack_292 = 0;
        uStack_28c = 1;
        pdb_140a0dec0(&fStack_170,lVar20 + (ulonglong)(uint)~piVar29[1] * 0x68,&uStack_2a8);
        uVar9 = 2;
      }
      fStack_178 = (float)CONCAT31(fStack_178._1_3_,uVar9);
      uStack_f8 = &pbStack_368;
      uStack_f0 = pdb_140c04ef0;
      uStack_b4 = 1;
      pdb_140f60760(&uStack_2a8,&UNK_14305da30,&uStack_f8);
      pbVar23 = pbStack_c8;
      uStack_f8 = (byte **)CONCAT44(uStack_2a8._4_4_,(float)uStack_2a8);
      uStack_f0 = (code *)CONCAT44(fStack_29c,fStack_2a0);
      uStack_e8 = CONCAT26(uStack_292,CONCAT24(uStack_294,fStack_298));
      uStack_220 = CONCAT44(fStack_174,fStack_178);
      uStack_218 = CONCAT44(fStack_16c,fStack_170);
      uStack_210 = CONCAT44(fStack_164,fStack_168);
      uStack_208 = CONCAT44(uStack_15c,fStack_160);
      uStack_2a8._0_4_ = 0.0;
      uStack_2a8._4_4_ = 0.0;
      fStack_2a0 = 1.12104e-44;
      fStack_29c = 0.0;
      fStack_298 = 0.0;
      uStack_294 = 0;
      uStack_292 = 0;
      uStack_290 = 1;
      uStack_28f = 0;
      uStack_28e = 0;
      pbStack_288 = (byte *)0x0;
      puStack_278 = (undefined *)CONCAT44(puStack_278._4_4_,2);
      iStack_260 = 3;
      iStack_248 = 3;
      uStack_230 = 0;
      uStack_200 = 0x101;
      uStack_b4 = 0;
      pbVar15 = (byte *)&uStack_f8;
      lVar13 = pdb_1409008d0(uStack_198,pbVar15,&uStack_2a8);
      lVar20 = lStack_2f0;
      if (((*(char *)(lVar13 + 0x18) == '\0') || (*(byte **)(lVar13 + 0x38) != pbVar15)) ||
         (*(int *)(lVar13 + 0x28) == 2)) goto LAB_140b89983;
      unaff_XMM9_Da = *(float *)(lVar13 + 0x50);
      fVar50 = *(float *)(lVar13 + 0x4c);
      fVar47 = *(float *)(lVar13 + 0x54);
      uStack_b4 = 0;
      pdb_141b74e20(&uStack_3c8,pbStack_130,2,&UNK_14305da48);
      unaff_XMM6_Da = fVar50 - unaff_XMM10_Da;
      fVar47 = fVar47 - unaff_XMM10_Db;
      fVar50 = _DAT_142e36f28 / SQRT(fVar47 * fVar47 + unaff_XMM6_Da * unaff_XMM6_Da);
      unaff_XMM10_Da = fVar50 * unaff_XMM6_Da;
      unaff_XMM10_Db = fVar50 * fVar47;
      pbVar27 = (byte *)0x0;
      pbVar23 = (byte *)(ulonglong)bStack_b1;
      pbVar8 = pbStack_d0;
      if (*param_1 == 0) goto LAB_140b8a920;
      goto LAB_140b8a09f;
    }
    uVar30 = (ushort)(uVar11 - 1) & (ushort)uVar11;
    uVar11 = CONCAT22((short)(uVar11 - 1 >> 0x10),uVar30);
  }
  auVar49[0] = -(auVar44[0] == -1);
  auVar49[1] = -(auVar44[1] == -1);
  auVar49[2] = -(auVar44[2] == -1);
  auVar49[3] = -(auVar44[3] == -1);
  auVar49[4] = -(auVar44[4] == -1);
  auVar49[5] = -(auVar44[5] == -1);
  auVar49[6] = -(auVar44[6] == -1);
  auVar49[7] = -(auVar44[7] == -1);
  auVar49[8] = -(auVar44[8] == -1);
  auVar49[9] = -(auVar44[9] == -1);
  auVar49[10] = -(auVar44[10] == -1);
  auVar49[0xb] = -(auVar44[0xb] == -1);
  auVar49[0xc] = -(auVar44[0xc] == -1);
  auVar49[0xd] = -(auVar44[0xd] == -1);
  auVar49[0xe] = -(auVar44[0xe] == -1);
  auVar49[0xf] = -(auVar44[0xf] == -1);
  if ((((((((((((((((SUB161(auVar49 >> 7,0) & 1) != 0 || (SUB161(auVar49 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar49 >> 0x17,0) & 1) != 0) || (SUB161(auVar49 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar49 >> 0x27,0) & 1) != 0) || (SUB161(auVar49 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar49 >> 0x37,0) & 1) != 0) || (SUB161(auVar49 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar49 >> 0x47,0) & 1) != 0) || (SUB161(auVar49 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar49 >> 0x57,0) & 1) != 0) || (SUB161(auVar49 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar49 >> 0x67,0) & 1) != 0) || (SUB161(auVar49 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar49 >> 0x77,0) & 1) != 0) || auVar49[0xf] < '\0') goto LAB_140b8a87c;
  uVar14 = uVar14 + lVar13 + 0x10;
  lVar13 = lVar13 + 0x10;
  goto LAB_140b89b3f;
LAB_140b8a87c:
  pdb_142dc8110(&UNK_14305d8f8,0x16,&UNK_14305db58);
  goto LAB_140b8b97b;
LAB_140b8aa2e:
  do {
    if (lVar13 == 0) {
LAB_140b8acf5:
      uStack_f8 = (byte **)0x0;
      uStack_f0 = (code *)0x8;
      uStack_e8 = 0;
      fStack_298 = 0.0;
      uStack_294 = (undefined2)lStack_180;
      uStack_292 = (undefined2)((ulonglong)lStack_180 >> 0x10);
      uStack_290 = (undefined1)((ulonglong)lStack_180 >> 0x20);
      uStack_28f = (undefined1)((ulonglong)lStack_180 >> 0x28);
      uStack_28e = (undefined2)((ulonglong)lStack_180 >> 0x30);
      uStack_28c = SUB42(fVar47,0);
      uStack_28a = (undefined2)((uint)fVar47 >> 0x10);
      pbStack_288 = (byte *)CONCAT44(pbStack_288._4_4_,pbStack_108._0_4_);
      pcStack_280 = (code *)(ulonglong)(uint)pcStack_280;
      puStack_278 = puStack_128;
      uStack_270 = uStack_120;
      uStack_268 = uStack_118;
      uStack_2a8._0_4_ = 5.60519e-45;
      uStack_2a8._4_4_ = -0.0;
      uStack_b3 = 1;
      fStack_2a0 = (float)uVar21;
      fStack_29c = (float)uVar61;
      pdb_140a1aa80(&uStack_f8,&uStack_2a8);
      *(undefined4 *)param_13[2] = *(undefined4 *)((longlong)param_13 + 0x1c);
      uVar25 = *param_13;
      fStack_298 = (float)uStack_e8;
      uStack_294 = (undefined2)((ulonglong)uStack_e8 >> 0x20);
      uStack_292 = (undefined2)((ulonglong)uStack_e8 >> 0x30);
      uStack_2a8._0_4_ = SUB84(uStack_f8,0);
      uStack_2a8._4_4_ = (float)((ulonglong)uStack_f8 >> 0x20);
      fStack_2a0 = SUB84(uStack_f0,0);
      fStack_29c = (float)((ulonglong)uStack_f0 >> 0x20);
      uStack_b3 = 0;
      uVar19 = pdb_140a1ac80(&uStack_2a8);
      fStack_2a0 = (float)uVar19;
      fStack_29c = (float)((ulonglong)uVar19 >> 0x20);
      fStack_298 = SUB84(param_13,0);
      uStack_294 = (undefined2)((ulonglong)param_13 >> 0x20);
      uStack_292 = (undefined2)((ulonglong)param_13 >> 0x30);
      uStack_2a8._0_4_ = 9.80909e-45;
      uStack_2a8._4_4_ = 0.0;
      uStack_b3 = 0;
      pdb_140ae5180(uVar25,&uStack_2a8,&UNK_14305dbf8);
      uStack_b3 = 0;
      pdb_140314c70(&uStack_3e8,&UNK_14305dc10);
      uStack_b3 = 0;
      pdb_141b74dc0(&uStack_408,param_1,&UNK_14305dc28);
LAB_140b8ae47:
      uStack_2a8._0_4_ = (float)*(undefined8 *)(unaff_R12 + -0x4c);
      uStack_2a8._4_4_ = (float)((ulonglong)*(undefined8 *)(unaff_R12 + -0x4c) >> 0x20);
      fStack_2a0 = (float)*(undefined8 *)(unaff_R12 + -0x44);
      fStack_29c = (float)((ulonglong)*(undefined8 *)(unaff_R12 + -0x44) >> 0x20);
      uVar21 = *(undefined4 *)(unaff_R12 + -0x24);
      *puStack_328 = uStack_1a0;
      lVar20 = *(longlong *)(lStack_188 + 0x30);
      uVar25 = *(undefined8 *)(lStack_188 + 0x40);
      if (lVar20 == *(longlong *)(lStack_188 + 0x20)) {
        pdb_142d7e7c0(lStack_188 + 0x20);
      }
      lVar13 = *(longlong *)(lStack_188 + 0x28);
      lVar34 = lVar20 * 0x30;
      *(undefined4 *)(lVar13 + lVar34) = 0;
      puVar62 = (undefined8 *)(lVar13 + 4 + lVar34);
      *puVar62 = CONCAT44(uStack_2a8._4_4_,(float)uStack_2a8);
      *(float *)(puVar62 + 1) = fStack_2a0;
      *(float *)((longlong)puVar62 + 0xc) = fStack_29c;
      uVar61 = _UNK_14303a934;
      puVar3 = (undefined4 *)(lVar13 + 0x1c + lVar34);
      *puVar3 = uVar21;
      puVar3[1] = uVar61;
      *(undefined1 *)(lVar13 + 0x24 + lVar34) = 1;
      *(undefined8 *)(lVar13 + 0x28 + lVar34) = uVar25;
      *(longlong *)(lStack_188 + 0x30) = lVar20 + 1;
      *(longlong *)(lStack_188 + 0x40) = *(longlong *)(lStack_188 + 0x40) + 1;
      uVar11 = (uint)pcStack_100;
      goto LAB_140b8a4eb;
    }
    if ((short)uVar11 == 0) {
      do {
        auVar43 = *pauVar24;
        pauVar26 = pauVar26 + -0x68;
        pauVar24 = pauVar24 + 1;
        uVar11 = (ushort)((ushort)(SUB161(auVar43 >> 7,0) & 1) |
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
      } while (uVar11 == 0);
    }
    uVar12 = 0;
    for (uVar33 = uVar11; (uVar33 & 1) == 0; uVar33 = uVar33 >> 1 | 0x80000000) {
      uVar12 = uVar12 + 1;
    }
    uVar11 = uVar11 - 1 & uVar11;
    lVar34 = (ulonglong)uVar12 * -0x68;
    lVar13 = lVar13 + -1;
    uVar17 = (ulonglong)*(byte *)((longlong)pauVar26 + lVar34 + -0x2e);
    lVar20 = uVar17 - 1;
    if (uVar17 < 2) {
      lVar20 = 0;
    }
    if (lVar20 == 0) break;
    if ((int)lVar20 != 1) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc83b0(&UNK_14305dbb8,0x28,&UNK_14305dbe0);
    }
  } while( true );
  pdb_1403b0de0(pbStack_d0,*(undefined4 *)((longlong)pauVar26 + lVar34 + -0x68));
  if (1 < *(byte *)((longlong)pauVar26 + lVar34 + -0x2e)) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_14301e2b3,0x28,&UNK_14301e2e0);
  }
  uVar46 = *(undefined4 *)((longlong)pauVar26 + lVar34 + -0x3c);
  uVar41 = pdb_140defa20(&fStack_174);
  uStack_f8 = (byte **)CONCAT44(uVar46,uVar41);
  pdb_140df4540(&uStack_2a8,&uStack_f8,*(undefined4 *)((longlong)pauVar26 + lVar34 + -0x38));
  *(float *)((longlong)pauVar26 + lVar34 + -0x34) = fStack_2a0;
  *(ulonglong *)((longlong)pauVar26 + lVar34 + -0x3c) = CONCAT44(uStack_2a8._4_4_,(float)uStack_2a8)
  ;
  goto LAB_140b8aa2e;
}

