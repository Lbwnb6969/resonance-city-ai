// VA 0x140c429d0, PDB extent 6087 bytes
// country_core::resources::stairs::invalidate::invalidate_dirty_stair_artifacts
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/stairs/invalidate.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::stairs::invalidate::invalidate_dirty_stair_artifacts
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/stairs/invalidate.rs
   Extent: 6087 */

void pdb_140c429d0(byte *param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                  undefined8 *param_5,longlong *param_6,longlong *param_7,undefined8 param_8)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  longlong *plVar7;
  byte *pbVar8;
  undefined1 (**ppauVar9) [16];
  byte *pbVar10;
  undefined8 uVar11;
  longlong *plVar12;
  ulonglong *puVar13;
  byte *pbVar14;
  undefined8 uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  byte *pbVar18;
  undefined4 *puVar19;
  undefined1 (*pauVar20) [16];
  undefined1 (*pauVar21) [16];
  longlong lVar22;
  uint *puVar23;
  undefined1 (*pauVar24) [16];
  uint *puVar25;
  longlong lVar26;
  uint uVar27;
  uint uVar28;
  ushort uVar29;
  longlong lVar30;
  ulonglong uVar31;
  uint uVar32;
  uint uVar33;
  undefined1 (*pauVar34) [16];
  byte bVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  byte *pbStack_2c0;
  undefined1 uStack_2b8;
  longlong lStack_2b0;
  undefined4 *puStack_2a8;
  longlong lStack_2a0;
  longlong lStack_298;
  undefined4 *puStack_290;
  longlong lStack_288;
  longlong lStack_280;
  longlong lStack_278;
  longlong lStack_270;
  undefined1 (*pauStack_268) [16];
  undefined1 (**ppauStack_260) [16];
  byte *pbStack_258;
  byte *pbStack_250;
  ulonglong uStack_248;
  undefined4 *puStack_240;
  undefined1 (*pauStack_238) [16];
  undefined1 (**ppauStack_230) [16];
  byte *pbStack_228;
  byte *pbStack_220;
  longlong lStack_218;
  longlong lStack_210;
  undefined1 (*pauStack_208) [16];
  undefined1 (**ppauStack_200) [16];
  byte *pbStack_1f8;
  byte *pbStack_1f0;
  ulonglong uStack_1e8;
  undefined4 *puStack_1e0;
  uint uStack_1d8;
  uint uStack_1d4;
  undefined4 *puStack_1d0;
  longlong lStack_1c8;
  longlong lStack_1c0;
  undefined1 (**ppauStack_1b8) [16];
  ulonglong uStack_1b0;
  byte *pbStack_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined1 (*pauStack_198) [16];
  ulonglong uStack_190;
  undefined1 (*pauStack_188) [16];
  undefined1 (*pauStack_180) [16];
  undefined1 (*pauStack_178) [16];
  byte *pbStack_170;
  ulonglong uStack_168;
  byte *pbStack_160;
  undefined1 (*pauStack_158) [16];
  undefined1 (*pauStack_150) [16];
  undefined4 *puStack_148;
  byte *pbStack_140;
  longlong lStack_138;
  undefined4 uStack_12c;
  longlong lStack_128;
  undefined4 *puStack_120;
  undefined1 (*pauStack_118) [16];
  longlong *plStack_110;
  byte *pbStack_108;
  byte *pbStack_100;
  undefined8 uStack_f8;
  undefined1 (*pauStack_f0) [16];
  byte *pbStack_e8;
  byte *pbStack_e0;
  ulonglong uStack_d8;
  undefined1 (*pauStack_d0) [16];
  undefined8 uStack_c8;
  longlong *plStack_c0;
  ulonglong uStack_b8;
  longlong lStack_b0;
  undefined1 (*pauStack_a0) [16];
  longlong lStack_98;
  longlong *plStack_90;
  undefined1 uStack_85;
  undefined1 uStack_84;
  undefined1 uStack_83;
  undefined1 uStack_82;
  undefined1 uStack_81;
  undefined8 uStack_80;
  
  uStack_80 = 0xfffffffffffffffe;
  *(undefined4 *)param_3[2] = *(undefined4 *)((longlong)param_3 + 0x1c);
  uVar11 = _UNK_143077fd8;
  lStack_98 = *param_3;
  pauStack_a0 = *(undefined1 (**) [16])(lStack_98 + 0x148);
  lVar22 = *(longlong *)(lStack_98 + 0x150);
  auVar36 = *pauStack_a0;
  uVar17 = *(ulonglong *)(lStack_98 + 0x160);
  uVar15 = *(undefined8 *)(lStack_98 + 0x150);
  plVar7 = *(longlong **)(lStack_98 + 0x158);
  *(undefined8 *)(lStack_98 + 0x158) = _DAT_143077fd0;
  *(undefined8 *)(lStack_98 + 0x160) = uVar11;
  uVar11 = _UNK_143077fc8;
  *(undefined8 *)(lStack_98 + 0x148) = _DAT_143077fc0;
  *(undefined8 *)(lStack_98 + 0x150) = uVar11;
  uStack_85 = 1;
  pbStack_140 = param_1;
  plStack_110 = param_2;
  plStack_90 = (longlong *)lVar22;
  plVar12 = (longlong *)pdb_140f3bda0();
  if ((char)plVar12[2] == '\x01') {
    uStack_168 = *plVar12;
    lVar22 = plVar12[1];
  }
  else {
    uStack_85 = 1;
    uStack_168 = pdb_140f4fd10();
    *plVar12 = uStack_168;
    plVar12[1] = lVar22;
    *(undefined1 *)(plVar12 + 2) = 1;
  }
  lStack_b0 = lStack_98 + 0x148;
  pauStack_f0 = pauStack_a0 + 1;
  pbStack_e8 = *pauStack_a0 + (longlong)plStack_90 + 1;
  *plVar12 = uStack_168 + 1;
  pbVar10 = _UNK_14306c4f8;
  pbVar8 = _DAT_14306c4f0;
  ppauVar9 = _UNK_14306c4e8;
  pauVar21 = _DAT_14306c4e0;
  pauStack_178 = (undefined1 (*) [16])_DAT_14306c4f0;
  pbStack_170 = _UNK_14306c4f8;
  pauStack_188 = _DAT_14306c4e0;
  pauStack_180 = (undefined1 (*) [16])_UNK_14306c4e8;
  uStack_f8 = pauStack_a0;
  pbStack_e0 = (byte *)CONCAT62(pbStack_e0._2_6_,
                                ~((ushort)(SUB161(auVar36 >> 7,0) & 1) |
                                  (ushort)(SUB161(auVar36 >> 0xf,0) & 1) << 1 |
                                  (ushort)(SUB161(auVar36 >> 0x17,0) & 1) << 2 |
                                  (ushort)(SUB161(auVar36 >> 0x1f,0) & 1) << 3 |
                                  (ushort)(SUB161(auVar36 >> 0x27,0) & 1) << 4 |
                                  (ushort)(SUB161(auVar36 >> 0x2f,0) & 1) << 5 |
                                  (ushort)(SUB161(auVar36 >> 0x37,0) & 1) << 6 |
                                  (ushort)(SUB161(auVar36 >> 0x3f,0) & 1) << 7 |
                                  (ushort)(SUB161(auVar36 >> 0x47,0) & 1) << 8 |
                                  (ushort)(SUB161(auVar36 >> 0x4f,0) & 1) << 9 |
                                  (ushort)(SUB161(auVar36 >> 0x57,0) & 1) << 10 |
                                  (ushort)(SUB161(auVar36 >> 0x5f,0) & 1) << 0xb |
                                  (ushort)(SUB161(auVar36 >> 0x67,0) & 1) << 0xc |
                                  (ushort)(SUB161(auVar36 >> 0x6f,0) & 1) << 0xd |
                                  (ushort)(SUB161(auVar36 >> 0x77,0) & 1) << 0xe |
                                 (ushort)(byte)(auVar36[0xf] >> 7) << 0xf));
  pauStack_d0 = pauStack_a0;
  pbStack_160 = (byte *)lVar22;
  uStack_d8 = uVar17;
  uStack_c8 = uVar15;
  plStack_c0 = plVar7;
  uStack_b8 = uVar17;
  pdb_1417a8170(&pauStack_188,&uStack_f8);
  pauStack_238 = pauStack_188;
  ppauStack_230 = (undefined1 (**) [16])pauStack_180;
  pbStack_228 = (byte *)pauStack_178;
  pbStack_220 = pbStack_170;
  lStack_218 = uStack_168;
  lStack_210 = (longlong)pbStack_160;
  puVar19 = (undefined4 *)param_5[2];
  pauStack_a0 = (undefined1 (*) [16])
                CONCAT44(pauStack_a0._4_4_,*(undefined4 *)((longlong)param_5 + 0x1c));
  *puVar19 = *(undefined4 *)((longlong)param_5 + 0x1c);
  plStack_90 = (longlong *)*param_5;
  *(undefined1 *)(plStack_90 + 6) = 0;
  lStack_138 = *param_7;
  lVar22 = *(longlong *)(lStack_138 + 8);
  lVar26 = *(longlong *)(lStack_138 + 0x10);
  uStack_82 = 1;
  puStack_148 = puVar19;
  puVar13 = (ulonglong *)pdb_140f3bda0();
  if ((char)puVar13[2] == '\x01') {
    uStack_d8 = *puVar13;
    puVar19 = (undefined4 *)puVar13[1];
  }
  else {
    uStack_82 = 1;
    uStack_d8 = pdb_140f4fd10();
    *puVar13 = uStack_d8;
    puVar13[1] = (ulonglong)puVar19;
    *(undefined1 *)(puVar13 + 2) = 1;
  }
  *puVar13 = uStack_d8 + 1;
  pbStack_e8 = pbVar8;
  pbStack_e0 = pbVar10;
  uStack_f8 = pauVar21;
  pauStack_f0 = (undefined1 (*) [16])ppauVar9;
  pauStack_d0 = (undefined1 (*) [16])puVar19;
  if (lVar26 != 0) {
    pdb_142d99bd0(&uStack_f8,lVar26,&uStack_d8,1);
    lVar30 = 0;
    do {
      puVar19 = (undefined4 *)(ulonglong)*(uint *)(lVar22 + 0x128 + lVar30 * 0x150);
      pdb_1403afce0(&uStack_f8,puVar19,*(undefined4 *)(lVar22 + 300 + lVar30 * 0x150));
      lVar30 = lVar30 + 1;
    } while (lVar30 != lVar26);
  }
  uStack_248 = uStack_d8;
  puStack_240 = (undefined4 *)pauStack_d0;
  pbStack_258 = pbStack_e8;
  pbStack_250 = pbStack_e0;
  pauStack_268 = uStack_f8;
  ppauStack_260 = (undefined1 (**) [16])pauStack_f0;
  pauVar20 = (undefined1 (*) [16])*plStack_90;
  lVar22 = plStack_90[1];
  auVar36 = *pauVar20;
  lVar26 = plStack_90[3];
  uStack_83 = 1;
  puVar13 = (ulonglong *)pdb_140f3bda0();
  if ((char)puVar13[2] == '\x01') {
    uStack_d8 = *puVar13;
    puVar19 = (undefined4 *)puVar13[1];
  }
  else {
    uStack_83 = 1;
    uStack_d8 = pdb_140f4fd10();
    *puVar13 = uStack_d8;
    puVar13[1] = (ulonglong)puVar19;
    *(undefined1 *)(puVar13 + 2) = 1;
  }
  pauStack_178 = (undefined1 (*) [16])(*pauVar20 + lVar22 + 1);
  pauStack_180 = pauVar20 + 1;
  *puVar13 = uStack_d8 + 1;
  pbStack_e8 = pbVar8;
  pbStack_e0 = pbVar10;
  uStack_f8 = pauVar21;
  pauStack_f0 = (undefined1 (*) [16])ppauVar9;
  pauStack_158 = (undefined1 (*) [16])&pauStack_208;
  pbStack_170 = (byte *)CONCAT62(pbStack_170._2_6_,
                                 ~((ushort)(SUB161(auVar36 >> 7,0) & 1) |
                                   (ushort)(SUB161(auVar36 >> 0xf,0) & 1) << 1 |
                                   (ushort)(SUB161(auVar36 >> 0x17,0) & 1) << 2 |
                                   (ushort)(SUB161(auVar36 >> 0x1f,0) & 1) << 3 |
                                   (ushort)(SUB161(auVar36 >> 0x27,0) & 1) << 4 |
                                   (ushort)(SUB161(auVar36 >> 0x2f,0) & 1) << 5 |
                                   (ushort)(SUB161(auVar36 >> 0x37,0) & 1) << 6 |
                                   (ushort)(SUB161(auVar36 >> 0x3f,0) & 1) << 7 |
                                   (ushort)(SUB161(auVar36 >> 0x47,0) & 1) << 8 |
                                   (ushort)(SUB161(auVar36 >> 0x4f,0) & 1) << 9 |
                                   (ushort)(SUB161(auVar36 >> 0x57,0) & 1) << 10 |
                                   (ushort)(SUB161(auVar36 >> 0x5f,0) & 1) << 0xb |
                                   (ushort)(SUB161(auVar36 >> 0x67,0) & 1) << 0xc |
                                   (ushort)(SUB161(auVar36 >> 0x6f,0) & 1) << 0xd |
                                   (ushort)(SUB161(auVar36 >> 0x77,0) & 1) << 0xe |
                                  (ushort)(byte)(auVar36[0xf] >> 7) << 0xf));
  pauStack_208 = (undefined1 (*) [16])&pauStack_268;
  ppauStack_200 = (undefined1 (**) [16])&uStack_f8;
  pauStack_188 = pauVar20;
  pauStack_d0 = (undefined1 (*) [16])puVar19;
  pdb_140ca8350(&pauStack_188,lVar26,(undefined1 (*) [16])&pauStack_158);
  pbVar18 = pbStack_e0;
  pauVar24 = pauStack_f0;
  pauVar20 = uStack_f8;
  pbStack_1f8 = pbStack_e8;
  pbStack_1f0 = pbStack_e0;
  pauStack_208 = uStack_f8;
  ppauStack_200 = (undefined1 (**) [16])pauStack_f0;
  uStack_1e8 = uStack_d8;
  puStack_1e0 = (undefined4 *)pauStack_d0;
  auVar36 = *uStack_f8;
  pbVar14 = (byte *)((ulonglong)(pbStack_e0 + 1) >> 1);
  if (pbStack_220 == (byte *)0x0) {
    pbVar14 = pbStack_e0;
  }
  if (pbStack_228 < pbVar14) {
    uStack_81 = 1;
    pdb_142d99bd0(&pauStack_238,pbVar14,&lStack_218,1);
  }
  pbStack_e8 = (byte *)((longlong)pauVar24 + (longlong)(*pauVar20 + 1));
  pauStack_f0 = pauVar20 + 1;
  pbStack_e0 = (byte *)CONCAT62(pbStack_e0._2_6_,
                                ~((ushort)(SUB161(auVar36 >> 7,0) & 1) |
                                  (ushort)(SUB161(auVar36 >> 0xf,0) & 1) << 1 |
                                  (ushort)(SUB161(auVar36 >> 0x17,0) & 1) << 2 |
                                  (ushort)(SUB161(auVar36 >> 0x1f,0) & 1) << 3 |
                                  (ushort)(SUB161(auVar36 >> 0x27,0) & 1) << 4 |
                                  (ushort)(SUB161(auVar36 >> 0x2f,0) & 1) << 5 |
                                  (ushort)(SUB161(auVar36 >> 0x37,0) & 1) << 6 |
                                  (ushort)(SUB161(auVar36 >> 0x3f,0) & 1) << 7 |
                                  (ushort)(SUB161(auVar36 >> 0x47,0) & 1) << 8 |
                                  (ushort)(SUB161(auVar36 >> 0x4f,0) & 1) << 9 |
                                  (ushort)(SUB161(auVar36 >> 0x57,0) & 1) << 10 |
                                  (ushort)(SUB161(auVar36 >> 0x5f,0) & 1) << 0xb |
                                  (ushort)(SUB161(auVar36 >> 0x67,0) & 1) << 0xc |
                                  (ushort)(SUB161(auVar36 >> 0x6f,0) & 1) << 0xd |
                                  (ushort)(SUB161(auVar36 >> 0x77,0) & 1) << 0xe |
                                 (ushort)(byte)(auVar36[0xf] >> 7) << 0xf));
  uStack_81 = 1;
  pauStack_188 = (undefined1 (*) [16])&pauStack_158;
  pauStack_158 = (undefined1 (*) [16])&pauStack_238;
  uStack_f8 = pauVar20;
  pdb_140ca8730(&uStack_f8,pbVar18,&pauStack_188);
  uStack_12c = *(undefined4 *)((longlong)param_7 + 0x1c);
  puStack_1d0 = (undefined4 *)param_7[2];
  *puStack_1d0 = uStack_12c;
  pauVar20 = *(undefined1 (**) [16])(lStack_138 + 8);
  lVar22 = *(longlong *)(lStack_138 + 0x10);
  uStack_81 = 1;
  puVar13 = (ulonglong *)pdb_140f3bda0();
  if ((char)puVar13[2] == '\x01') {
    uStack_d8 = *puVar13;
    pbVar18 = (byte *)puVar13[1];
  }
  else {
    uStack_81 = 1;
    uStack_d8 = pdb_140f4fd10();
    *puVar13 = uStack_d8;
    puVar13[1] = (ulonglong)pbVar18;
    *(undefined1 *)(puVar13 + 2) = 1;
  }
  *puVar13 = uStack_d8 + 1;
  pauStack_180 = pauVar20 + lVar22 * 0x15;
  pbStack_e8 = pbVar8;
  pbStack_e0 = pbVar10;
  uStack_f8 = pauVar21;
  pauStack_f0 = (undefined1 (*) [16])ppauVar9;
  pauStack_188 = pauVar20;
  pauStack_178 = (undefined1 (*) [16])&pauStack_238;
  pauStack_d0 = (undefined1 (*) [16])pbVar18;
  pdb_1419b1880(&pauStack_188,&uStack_f8);
  pauStack_178 = (undefined1 (*) [16])pbStack_e8;
  pbStack_170 = pbStack_e0;
  pauStack_188 = uStack_f8;
  pauStack_180 = pauStack_f0;
  uStack_168 = uStack_d8;
  pbStack_160 = (byte *)pauStack_d0;
  pbStack_100 = pbStack_e0;
  if (pbStack_e0 != (byte *)0x0 || pbStack_1f0 != (byte *)0x0) {
    pbStack_108 = pbStack_1f0;
    auVar36 = *uStack_f8;
    pauVar21 = uStack_f8 + 1;
    auVar42 = *pauStack_208;
    pauVar20 = pauStack_208 + 1;
    uVar33 = ~(uint)(ushort)((ushort)(SUB161(auVar36 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar36 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar36 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar36 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar36 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar36 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar36 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar36 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar36 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar36 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar36 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar36 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar36 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar36 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar36 >> 0x77,0) & 1) << 0xe |
                            (ushort)(byte)(auVar36[0xf] >> 7) << 0xf);
    uVar32 = ~(uint)(ushort)((ushort)(SUB161(auVar42 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar42 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar42 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar42 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar42 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar42 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar42 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar42 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar42 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar42 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar42 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar42 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar42 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar42 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar42 >> 0x77,0) & 1) << 0xe |
                            (ushort)(byte)(auVar42[0xf] >> 7) << 0xf);
    lStack_128 = CONCAT44(lStack_128._4_4_,*(undefined4 *)((longlong)param_4 + 0x1c));
    pauStack_118 = (undefined1 (*) [16])param_4[2];
    pauStack_198 = (undefined1 (*) [16])(*param_4 + 0x180);
    puStack_120 = (undefined4 *)(*param_4 + 0x1a0);
    pauVar24 = uStack_f8;
    pauVar34 = pauStack_208;
    do {
      if (pauVar24 == (undefined1 (*) [16])0x0) {
LAB_140c42f6b:
        if (pbStack_108 == (byte *)0x0) goto LAB_140c4301f;
        if ((short)uVar32 == 0) {
          do {
            auVar36 = *pauVar20;
            pauVar34 = pauVar34 + -8;
            pauVar20 = pauVar20 + 1;
            uVar32 = (ushort)((ushort)(SUB161(auVar36 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar36 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar36 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar36 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar36 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar36 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar36 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar36 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar36 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar36 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar36 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar36 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar36 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar36 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar36 >> 0x77,0) & 1) << 0xe |
                             (ushort)(byte)(auVar36[0xf] >> 7) << 0xf) ^ 0xffff;
          } while (uVar32 == 0);
        }
        iVar2 = 0;
        for (uVar5 = uVar32; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          iVar2 = iVar2 + 1;
        }
        uVar32 = uVar32 - 1 & uVar32;
        lVar22 = (longlong)pauVar34 - (ulonglong)(uint)(iVar2 << 3);
        pbStack_108 = pbStack_108 + -1;
        pauVar24 = (undefined1 (*) [16])0x0;
      }
      else {
        if (pbStack_100 == (byte *)0x0) {
          pbStack_100 = (byte *)0x0;
          goto LAB_140c42f6b;
        }
        if ((short)uVar33 == 0) {
          do {
            auVar36 = *pauVar21;
            pauVar24 = pauVar24 + -8;
            pauVar21 = pauVar21 + 1;
            uVar33 = (ushort)((ushort)(SUB161(auVar36 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar36 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar36 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar36 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar36 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar36 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar36 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar36 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar36 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar36 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar36 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar36 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar36 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar36 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar36 >> 0x77,0) & 1) << 0xe |
                             (ushort)(byte)(auVar36[0xf] >> 7) << 0xf) ^ 0xffff;
          } while (uVar33 == 0);
        }
        iVar2 = 0;
        for (uVar5 = uVar33; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          iVar2 = iVar2 + 1;
        }
        uVar33 = uVar33 - 1 & uVar33;
        lVar22 = (longlong)pauVar24 - (ulonglong)(uint)(iVar2 << 3);
        pbStack_100 = pbStack_100 + -1;
      }
      *(undefined4 *)pauStack_118 = (undefined4)lStack_128;
      uStack_84 = 1;
      uVar15 = pdb_1400af680(puStack_120,lVar22 + -8);
      uStack_84 = 1;
      pdb_140caae80(&uStack_f8,pauStack_198,uVar15,lVar22 + -8);
    } while( true );
  }
LAB_140c43077:
  auVar36 = *pauStack_238;
  if (ppauStack_230 == (undefined1 (**) [16])0x0) {
    uStack_190 = 0;
  }
  else {
    uVar17 = (longlong)ppauStack_230 * 8 + 0x17U & 0xfffffffffffffff0;
    uStack_1b0 = (longlong)ppauStack_230 + uVar17 + 0x11;
    pbStack_1a8 = (byte *)((longlong)pauStack_238 - uVar17);
    uStack_190 = 0x10;
  }
  uVar33 = ~(uint)(ushort)((ushort)(SUB161(auVar36 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar36 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar36 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar36 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar36 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar36 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar36 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auVar36 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auVar36 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(auVar36 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auVar36 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auVar36 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(auVar36 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar36 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar36 >> 0x77,0) & 1) << 0xe |
                          (ushort)(byte)(auVar36[0xf] >> 7) << 0xf);
  uStack_1a0 = *(undefined4 *)((longlong)plStack_110 + 0x1c);
  lStack_2b0 = *plStack_110;
  puStack_2a8 = (undefined4 *)plStack_110[2];
  pbStack_108 = (byte *)CONCAT44(pbStack_108._4_4_,*(undefined4 *)(pbStack_140 + 0x1c));
  lStack_128 = *(longlong *)pbStack_140;
  puStack_120 = *(undefined4 **)(pbStack_140 + 0x10);
  uStack_19c = *(undefined4 *)((longlong)param_6 + 0x1c);
  plStack_110 = (longlong *)*param_6;
  puStack_290 = (undefined4 *)param_6[2];
  lStack_278 = lStack_138 + 0x198;
  lStack_270 = lStack_138 + 0x168;
  lStack_280 = lStack_138 + 0x1b8;
  lStack_138 = lStack_138 + 0x188;
  pauStack_118 = pauStack_238 + 1;
  lStack_2a0 = lStack_2b0 + 0x30;
  lStack_298 = lStack_2b0 + 0x60;
  pbStack_100 = (byte *)(plStack_90 + 4);
  lStack_1c8 = lStack_98 + 0x28;
  lStack_1c0 = lStack_98 + 0x60;
  lStack_288 = (longlong)plStack_110 + 0x20;
  ppauStack_1b8 = ppauStack_230;
  pauVar20 = pauStack_238;
  pbVar8 = pbStack_220;
  pauVar21 = pauStack_198;
  do {
    pauStack_198 = pauVar20;
    if (pbVar8 == (byte *)0x0) {
      pauStack_198 = pauVar21;
      if ((ppauStack_1b8 != (undefined1 (**) [16])0x0) && (uStack_1b0 != 0)) {
        pub_1406abac0(pbStack_1a8,uStack_1b0,uStack_190);
      }
      if (pauStack_180 != (undefined1 (*) [16])0x0) {
        uVar17 = (longlong)pauStack_180 * 8 + 0x17U & 0xfffffffffffffff0;
        uVar31 = (longlong)pauStack_180 + uVar17 + 0x11;
        if (uVar31 != 0) {
          pub_1406abac0((byte *)((longlong)pauStack_188 - uVar17),uVar31,0x10);
        }
      }
      if (ppauStack_200 != (undefined1 (**) [16])0x0) {
        uVar17 = (longlong)ppauStack_200 * 8 + 0x17U & 0xfffffffffffffff0;
        uVar31 = (longlong)ppauStack_200 + uVar17 + 0x11;
        if (uVar31 != 0) {
          pub_1406abac0((byte *)((longlong)pauStack_208 - uVar17),uVar31,0x10);
        }
      }
      if (ppauStack_260 != (undefined1 (**) [16])0x0) {
        uVar17 = (longlong)ppauStack_260 * 8 + 0x17U & 0xfffffffffffffff0;
        uVar31 = (longlong)ppauStack_260 + uVar17 + 0x11;
        if (uVar31 != 0) {
          pub_1406abac0((byte *)((longlong)pauStack_268 - uVar17),uVar31,0x10);
        }
      }
      return;
    }
    pbStack_140 = pbVar8 + -1;
    if ((short)uVar33 == 0) {
      do {
        auVar36 = *pauStack_118;
        pauStack_198 = pauStack_198 + -8;
        pauStack_118 = pauStack_118 + 1;
        uVar33 = (ushort)((ushort)(SUB161(auVar36 >> 7,0) & 1) |
                          (ushort)(SUB161(auVar36 >> 0xf,0) & 1) << 1 |
                          (ushort)(SUB161(auVar36 >> 0x17,0) & 1) << 2 |
                          (ushort)(SUB161(auVar36 >> 0x1f,0) & 1) << 3 |
                          (ushort)(SUB161(auVar36 >> 0x27,0) & 1) << 4 |
                          (ushort)(SUB161(auVar36 >> 0x2f,0) & 1) << 5 |
                          (ushort)(SUB161(auVar36 >> 0x37,0) & 1) << 6 |
                          (ushort)(SUB161(auVar36 >> 0x3f,0) & 1) << 7 |
                          (ushort)(SUB161(auVar36 >> 0x47,0) & 1) << 8 |
                          (ushort)(SUB161(auVar36 >> 0x4f,0) & 1) << 9 |
                          (ushort)(SUB161(auVar36 >> 0x57,0) & 1) << 10 |
                          (ushort)(SUB161(auVar36 >> 0x5f,0) & 1) << 0xb |
                          (ushort)(SUB161(auVar36 >> 0x67,0) & 1) << 0xc |
                          (ushort)(SUB161(auVar36 >> 0x6f,0) & 1) << 0xd |
                          (ushort)(SUB161(auVar36 >> 0x77,0) & 1) << 0xe |
                         (ushort)(byte)(auVar36[0xf] >> 7) << 0xf) ^ 0xffff;
      } while (uVar33 == 0);
    }
    iVar2 = 0;
    for (uVar32 = uVar33; (uVar32 & 1) == 0; uVar32 = uVar32 >> 1 | 0x80000000) {
      iVar2 = iVar2 + 1;
    }
    puVar25 = (uint *)((longlong)pauStack_198 + (-8 - (ulonglong)(uint)(iVar2 << 3)));
    uVar32 = *puVar25;
    uVar5 = *(uint *)((longlong)pauStack_198 + (-4 - (ulonglong)(uint)(iVar2 << 3)));
    lVar22 = *(longlong *)puVar25;
    *puStack_2a8 = uStack_1a0;
    *puStack_120 = pbStack_108._0_4_;
    uStack_1d8 = uVar32;
    uStack_1d4 = uVar5;
    pdb_1405de690(&uStack_f8,lStack_128,lStack_2b0,uVar32,uVar5);
    if ((char)uStack_d8 != '\x11') {
      LOCK();
      *plStack_c0 = *plStack_c0 + -1;
      UNLOCK();
      if (*plStack_c0 == 0) {
        pdb_140c7b7a0(&plStack_c0);
      }
    }
    *puStack_120 = pbStack_108._0_4_;
    pdb_1405de690(&uStack_f8,lStack_128,lStack_2a0,uVar32,uVar5);
    if ((char)uStack_d8 != '\x11') {
      LOCK();
      *plStack_c0 = *plStack_c0 + -1;
      UNLOCK();
      if (*plStack_c0 == 0) {
        pdb_140c7b7a0(&plStack_c0);
      }
    }
    *puStack_120 = pbStack_108._0_4_;
    pdb_1405de690(&uStack_f8,lStack_128,lStack_298,uVar32,uVar5);
    if ((char)uStack_d8 != '\x11') {
      LOCK();
      *plStack_c0 = *plStack_c0 + -1;
      UNLOCK();
      if (*plStack_c0 == 0) {
        pdb_140c7b7a0(&plStack_c0);
      }
    }
    if (pbStack_250 != (byte *)0x0) {
      uVar17 = pdb_1400af680(&uStack_248,&uStack_1d8);
      bVar35 = (byte)(uVar17 >> 0x39);
      auVar36 = ZEXT216(CONCAT11(bVar35,bVar35));
      auVar36 = pshuflw(auVar36,auVar36,0);
      lVar26 = 0;
      while( true ) {
        uVar17 = uVar17 & (ulonglong)ppauStack_260;
        auVar42 = *(undefined1 (*) [16])(*pauStack_268 + uVar17);
        auVar41[0] = -(auVar42[0] == auVar36[0]);
        auVar41[1] = -(auVar42[1] == auVar36[1]);
        auVar41[2] = -(auVar42[2] == auVar36[2]);
        auVar41[3] = -(auVar42[3] == auVar36[3]);
        auVar41[4] = -(auVar42[4] == auVar36[4]);
        auVar41[5] = -(auVar42[5] == auVar36[5]);
        auVar41[6] = -(auVar42[6] == auVar36[6]);
        auVar41[7] = -(auVar42[7] == auVar36[7]);
        auVar41[8] = -(auVar42[8] == auVar36[0]);
        auVar41[9] = -(auVar42[9] == auVar36[1]);
        auVar41[10] = -(auVar42[10] == auVar36[2]);
        auVar41[0xb] = -(auVar42[0xb] == auVar36[3]);
        auVar41[0xc] = -(auVar42[0xc] == auVar36[4]);
        auVar41[0xd] = -(auVar42[0xd] == auVar36[5]);
        auVar41[0xe] = -(auVar42[0xe] == auVar36[6]);
        auVar41[0xf] = -(auVar42[0xf] == auVar36[7]);
        uVar29 = (ushort)(SUB161(auVar41 >> 7,0) & 1) | (ushort)(SUB161(auVar41 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar41 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar41 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar41 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar41 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar41 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar41 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar41 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar41 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar41 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar41 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar41 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar41 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar41 >> 0x77,0) & 1) << 0xe | (ushort)(auVar41[0xf] >> 7) << 0xf
        ;
        uVar27 = (uint)uVar29;
        while (uVar29 != 0) {
          uVar3 = 0;
          for (uVar28 = uVar27; (uVar28 & 1) == 0; uVar28 = uVar28 >> 1 | 0x80000000) {
            uVar3 = uVar3 + 1;
          }
          uVar31 = uVar3 + uVar17 & (ulonglong)ppauStack_260;
          if ((uVar32 == *(uint *)((longlong)pauStack_268 + uVar31 * -8 + -8)) &&
             (uVar5 == *(uint *)((longlong)pauStack_268 + uVar31 * -8 + -4))) {
            *puStack_148 = pauStack_a0._0_4_;
            uStack_f8 = (undefined1 (*) [16])lVar22;
            if (plStack_90[3] == 0) goto LAB_140c43610;
            uVar17 = pdb_1400af680(pbStack_100,&uStack_f8);
            lVar22 = *plStack_90;
            bVar35 = (byte)(uVar17 >> 0x39);
            auVar36 = ZEXT216(CONCAT11(bVar35,bVar35));
            auVar36 = pshuflw(auVar36,auVar36,0);
            lVar26 = 0;
            goto LAB_140c434ed;
          }
          uVar29 = (ushort)(uVar27 - 1) & (ushort)uVar27;
          uVar27 = CONCAT22((short)(uVar27 - 1 >> 0x10),uVar29);
        }
        auVar37[0] = -(auVar42[0] == -1);
        auVar37[1] = -(auVar42[1] == -1);
        auVar37[2] = -(auVar42[2] == -1);
        auVar37[3] = -(auVar42[3] == -1);
        auVar37[4] = -(auVar42[4] == -1);
        auVar37[5] = -(auVar42[5] == -1);
        auVar37[6] = -(auVar42[6] == -1);
        auVar37[7] = -(auVar42[7] == -1);
        auVar37[8] = -(auVar42[8] == -1);
        auVar37[9] = -(auVar42[9] == -1);
        auVar37[10] = -(auVar42[10] == -1);
        auVar37[0xb] = -(auVar42[0xb] == -1);
        auVar37[0xc] = -(auVar42[0xc] == -1);
        auVar37[0xd] = -(auVar42[0xd] == -1);
        auVar37[0xe] = -(auVar42[0xe] == -1);
        auVar37[0xf] = -(auVar42[0xf] == -1);
        if ((((((((((((((((SUB161(auVar37 >> 7,0) & 1) != 0 || (SUB161(auVar37 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar37 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar37 >> 0x1f,0) & 1) != 0) || (SUB161(auVar37 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar37 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar37 >> 0x37,0) & 1) != 0) || (SUB161(auVar37 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar37 >> 0x47,0) & 1) != 0) || (SUB161(auVar37 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar37 >> 0x57,0) & 1) != 0) || (SUB161(auVar37 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar37 >> 0x67,0) & 1) != 0) || (SUB161(auVar37 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar37 >> 0x77,0) & 1) != 0) || auVar37[0xf] < '\0') break;
        uVar17 = uVar17 + lVar26 + 0x10;
        lVar26 = lVar26 + 0x10;
      }
    }
    *puStack_148 = pauStack_a0._0_4_;
    pdb_140b15430(plStack_90,uVar32,uVar5,param_8);
    uVar17 = *(ulonglong *)(lStack_98 + 0x38);
    puVar25 = (uint *)0x4;
    if (uVar17 == 0) {
      puVar23 = (uint *)0x4;
    }
    else if (uVar17 == 1) {
      lVar22 = *(longlong *)(lStack_98 + 0x30);
      puVar23 = (uint *)0x4;
      if (uVar32 == *(uint *)(lVar22 + 0x20)) {
        uVar31 = 0;
LAB_140c435e4:
        puVar23 = *(uint **)(lVar22 + 8 + uVar31 * 0x28);
        puVar25 = puVar23 + *(longlong *)(lVar22 + 0x10 + uVar31 * 0x28) * 2;
      }
    }
    else {
      uStack_f8._0_4_ = uVar32;
      uVar31 = pdb_1400aede0(lStack_1c0,&uStack_f8);
      uVar16 = pdb_1417c7820(lStack_1c8,uVar31,&uStack_f8);
      if ((uVar16 & 1) == 0) {
        puVar23 = (uint *)0x4;
      }
      else {
        if (uVar17 <= uVar31) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar31,uVar17,&UNK_143022aa0);
        }
        lVar22 = *(longlong *)(lStack_98 + 0x30);
        puVar23 = (uint *)0x4;
        if (lVar22 != 0) goto LAB_140c435e4;
      }
    }
    for (; puVar23 != puVar25; puVar23 = puVar23 + 2) {
      uVar27 = *puVar23;
      uVar3 = uVar27;
      if (uVar32 >= uVar27 && uVar32 != uVar27) {
        uVar3 = uVar32;
      }
      *puStack_148 = pauStack_a0._0_4_;
      if (uVar32 < uVar27) {
        uVar27 = uVar32;
      }
      uStack_f8._4_4_ = uVar3;
      if (plStack_90[3] != 0) {
        uStack_f8._0_4_ = uVar27;
        uVar17 = pdb_1400af680(pbStack_100,&uStack_f8);
        lVar22 = *plStack_90;
        bVar35 = (byte)(uVar17 >> 0x39);
        auVar36 = ZEXT216(CONCAT11(bVar35,bVar35));
        auVar36 = pshuflw(auVar36,auVar36,0);
        lVar26 = 0;
        while( true ) {
          uVar17 = uVar17 & plStack_90[1];
          pcVar1 = (char *)(lVar22 + uVar17);
          auVar43[0] = -(*pcVar1 == auVar36[0]);
          auVar43[1] = -(pcVar1[1] == auVar36[1]);
          auVar43[2] = -(pcVar1[2] == auVar36[2]);
          auVar43[3] = -(pcVar1[3] == auVar36[3]);
          auVar43[4] = -(pcVar1[4] == auVar36[4]);
          auVar43[5] = -(pcVar1[5] == auVar36[5]);
          auVar43[6] = -(pcVar1[6] == auVar36[6]);
          auVar43[7] = -(pcVar1[7] == auVar36[7]);
          auVar43[8] = -(pcVar1[8] == auVar36[0]);
          auVar43[9] = -(pcVar1[9] == auVar36[1]);
          auVar43[10] = -(pcVar1[10] == auVar36[2]);
          auVar43[0xb] = -(pcVar1[0xb] == auVar36[3]);
          auVar43[0xc] = -(pcVar1[0xc] == auVar36[4]);
          auVar43[0xd] = -(pcVar1[0xd] == auVar36[5]);
          auVar43[0xe] = -(pcVar1[0xe] == auVar36[6]);
          auVar43[0xf] = -(pcVar1[0xf] == auVar36[7]);
          uVar29 = (ushort)(SUB161(auVar43 >> 7,0) & 1) |
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
                   (ushort)(auVar43[0xf] >> 7) << 0xf;
          uVar28 = (uint)uVar29;
          while (uVar29 != 0) {
            uVar4 = 0;
            for (uVar6 = uVar28; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
              uVar4 = uVar4 + 1;
            }
            lVar30 = (uVar4 + uVar17 & plStack_90[1]) * -0x140;
            if ((uVar27 == *(uint *)(lVar22 + -0x140 + lVar30)) &&
               (uVar3 == *(uint *)(lVar22 + -0x13c + lVar30))) {
              *(undefined1 *)(lVar22 + lVar30 + -7) = 1;
              goto LAB_140c43817;
            }
            uVar29 = (ushort)(uVar28 - 1) & (ushort)uVar28;
            uVar28 = CONCAT22((short)(uVar28 - 1 >> 0x10),uVar29);
          }
          auVar39[0] = -(*pcVar1 == -1);
          auVar39[1] = -(pcVar1[1] == -1);
          auVar39[2] = -(pcVar1[2] == -1);
          auVar39[3] = -(pcVar1[3] == -1);
          auVar39[4] = -(pcVar1[4] == -1);
          auVar39[5] = -(pcVar1[5] == -1);
          auVar39[6] = -(pcVar1[6] == -1);
          auVar39[7] = -(pcVar1[7] == -1);
          auVar39[8] = -(pcVar1[8] == -1);
          auVar39[9] = -(pcVar1[9] == -1);
          auVar39[10] = -(pcVar1[10] == -1);
          auVar39[0xb] = -(pcVar1[0xb] == -1);
          auVar39[0xc] = -(pcVar1[0xc] == -1);
          auVar39[0xd] = -(pcVar1[0xd] == -1);
          auVar39[0xe] = -(pcVar1[0xe] == -1);
          auVar39[0xf] = -(pcVar1[0xf] == -1);
          if ((((((((((((((((SUB161(auVar39 >> 7,0) & 1) != 0 || (SUB161(auVar39 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar39 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar39 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar39 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar39 >> 0x2f,0) & 1) != 0) || (SUB161(auVar39 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar39 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar39 >> 0x47,0) & 1) != 0) || (SUB161(auVar39 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar39 >> 0x57,0) & 1) != 0) || (SUB161(auVar39 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar39 >> 0x67,0) & 1) != 0) || (SUB161(auVar39 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar39 >> 0x77,0) & 1) != 0) || auVar39[0xf] < '\0') break;
          uVar17 = uVar17 + lVar26 + 0x10;
          lVar26 = lVar26 + 0x10;
        }
      }
LAB_140c43817:
    }
    uStack_f8 = (undefined1 (*) [16])CONCAT44(uStack_f8._4_4_,uVar5);
    uVar17 = *(ulonglong *)(lStack_98 + 0x38);
    puVar25 = (uint *)0x4;
    if (uVar17 == 0) {
      puVar23 = (uint *)0x4;
    }
    else if (uVar17 == 1) {
      lVar22 = *(longlong *)(lStack_98 + 0x30);
      puVar23 = (uint *)0x4;
      if (uVar5 == *(uint *)(lVar22 + 0x20)) {
        uVar31 = 0;
LAB_140c43950:
        puVar23 = *(uint **)(lVar22 + 8 + uVar31 * 0x28);
        puVar25 = puVar23 + *(longlong *)(lVar22 + 0x10 + uVar31 * 0x28) * 2;
      }
    }
    else {
      uVar31 = pdb_1400aede0(lStack_1c0,&uStack_f8);
      uVar16 = pdb_1417c7820(lStack_1c8,uVar31,&uStack_f8);
      if ((uVar16 & 1) == 0) {
        puVar23 = (uint *)0x4;
      }
      else {
        if (uVar17 <= uVar31) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar31,uVar17,&UNK_143022aa0);
        }
        lVar22 = *(longlong *)(lStack_98 + 0x30);
        puVar23 = (uint *)0x4;
        if (lVar22 != 0) goto LAB_140c43950;
      }
    }
    for (; puVar23 != puVar25; puVar23 = puVar23 + 2) {
      uVar27 = *puVar23;
      uVar3 = uVar27;
      if (uVar5 >= uVar27 && uVar5 != uVar27) {
        uVar3 = uVar5;
      }
      *puStack_148 = pauStack_a0._0_4_;
      if (uVar5 < uVar27) {
        uVar27 = uVar5;
      }
      uStack_f8 = (undefined1 (*) [16])CONCAT44(uVar3,uVar27);
      if (plStack_90[3] != 0) {
        uVar17 = pdb_1400af680(pbStack_100,&uStack_f8);
        lVar22 = *plStack_90;
        bVar35 = (byte)(uVar17 >> 0x39);
        auVar36 = ZEXT216(CONCAT11(bVar35,bVar35));
        auVar36 = pshuflw(auVar36,auVar36,0);
        lVar26 = 0;
        while( true ) {
          uVar17 = uVar17 & plStack_90[1];
          pcVar1 = (char *)(lVar22 + uVar17);
          auVar44[0] = -(*pcVar1 == auVar36[0]);
          auVar44[1] = -(pcVar1[1] == auVar36[1]);
          auVar44[2] = -(pcVar1[2] == auVar36[2]);
          auVar44[3] = -(pcVar1[3] == auVar36[3]);
          auVar44[4] = -(pcVar1[4] == auVar36[4]);
          auVar44[5] = -(pcVar1[5] == auVar36[5]);
          auVar44[6] = -(pcVar1[6] == auVar36[6]);
          auVar44[7] = -(pcVar1[7] == auVar36[7]);
          auVar44[8] = -(pcVar1[8] == auVar36[0]);
          auVar44[9] = -(pcVar1[9] == auVar36[1]);
          auVar44[10] = -(pcVar1[10] == auVar36[2]);
          auVar44[0xb] = -(pcVar1[0xb] == auVar36[3]);
          auVar44[0xc] = -(pcVar1[0xc] == auVar36[4]);
          auVar44[0xd] = -(pcVar1[0xd] == auVar36[5]);
          auVar44[0xe] = -(pcVar1[0xe] == auVar36[6]);
          auVar44[0xf] = -(pcVar1[0xf] == auVar36[7]);
          uVar29 = (ushort)(SUB161(auVar44 >> 7,0) & 1) |
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
                   (ushort)(auVar44[0xf] >> 7) << 0xf;
          uVar28 = (uint)uVar29;
          while (uVar29 != 0) {
            uVar4 = 0;
            for (uVar6 = uVar28; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
              uVar4 = uVar4 + 1;
            }
            lVar30 = (uVar4 + uVar17 & plStack_90[1]) * -0x140;
            if ((uVar27 == *(uint *)(lVar22 + -0x140 + lVar30)) &&
               (uVar3 == *(uint *)(lVar22 + -0x13c + lVar30))) {
              *(undefined1 *)(lVar22 + lVar30 + -7) = 1;
              goto LAB_140c43a07;
            }
            uVar29 = (ushort)(uVar28 - 1) & (ushort)uVar28;
            uVar28 = CONCAT22((short)(uVar28 - 1 >> 0x10),uVar29);
          }
          auVar40[0] = -(*pcVar1 == -1);
          auVar40[1] = -(pcVar1[1] == -1);
          auVar40[2] = -(pcVar1[2] == -1);
          auVar40[3] = -(pcVar1[3] == -1);
          auVar40[4] = -(pcVar1[4] == -1);
          auVar40[5] = -(pcVar1[5] == -1);
          auVar40[6] = -(pcVar1[6] == -1);
          auVar40[7] = -(pcVar1[7] == -1);
          auVar40[8] = -(pcVar1[8] == -1);
          auVar40[9] = -(pcVar1[9] == -1);
          auVar40[10] = -(pcVar1[10] == -1);
          auVar40[0xb] = -(pcVar1[0xb] == -1);
          auVar40[0xc] = -(pcVar1[0xc] == -1);
          auVar40[0xd] = -(pcVar1[0xd] == -1);
          auVar40[0xe] = -(pcVar1[0xe] == -1);
          auVar40[0xf] = -(pcVar1[0xf] == -1);
          if ((((((((((((((((SUB161(auVar40 >> 7,0) & 1) != 0 || (SUB161(auVar40 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar40 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar40 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar40 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar40 >> 0x2f,0) & 1) != 0) || (SUB161(auVar40 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar40 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar40 >> 0x47,0) & 1) != 0) || (SUB161(auVar40 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar40 >> 0x57,0) & 1) != 0) || (SUB161(auVar40 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar40 >> 0x67,0) & 1) != 0) || (SUB161(auVar40 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar40 >> 0x77,0) & 1) != 0) || auVar40[0xf] < '\0') break;
          uVar17 = uVar17 + lVar26 + 0x10;
          lVar26 = lVar26 + 0x10;
        }
      }
LAB_140c43a07:
    }
LAB_140c43610:
    *puStack_290 = uStack_19c;
    pauVar21 = (undefined1 (*) [16])CONCAT44(uVar32,uVar5);
    pauStack_158 = (undefined1 (*) [16])0x2;
    pauStack_150 = pauVar21;
    uVar15 = pdb_1417c44b0(lStack_288,&pauStack_158);
    pdb_140caac10(&uStack_f8,plStack_110,uVar15,&pauStack_158);
    uVar33 = uVar33 - 1 & uVar33;
    uStack_2b8 = 2;
    if (uStack_f8 != (undefined1 (*) [16])0x4) {
      uStack_2b8 = pbStack_e0._0_1_;
    }
    pbStack_2c0 = pbStack_e8;
    if (uStack_f8 != (undefined1 (*) [16])0x4) {
      LOCK();
      *(longlong *)pbStack_e8 = *(longlong *)pbStack_e8 + -1;
      UNLOCK();
      if (*(longlong *)pbStack_e8 == 0) {
        pdb_140c7b740(&pbStack_2c0);
      }
      *(undefined1 *)((longlong)plStack_110 + 0x38) = 1;
    }
    *puStack_1d0 = uStack_12c;
    pauStack_158 = pauVar21;
    uVar15 = pdb_1400af0a0(lStack_280,&pauStack_158);
    pdb_140caa900(&uStack_f8,lStack_278,uVar15,&pauStack_158);
    if (((char)uStack_f8 != '\0') && (1 < uStack_d8)) {
      pub_1406abac0(pbStack_e8,uStack_d8 << 2,2);
    }
    *puStack_1d0 = uStack_12c;
    uStack_f8 = pauVar21;
    uVar15 = pdb_1400af0a0(lStack_138,&uStack_f8);
    pdb_140ca9870(lStack_270,uVar15,&uStack_f8);
    pauVar20 = pauStack_198;
    pbVar8 = pbStack_140;
    pauVar21 = pauStack_198;
  } while( true );
LAB_140c4301f:
  **(undefined4 **)(pbStack_140 + 0x10) = *(undefined4 *)(pbStack_140 + 0x1c);
  lVar22 = *(longlong *)pbStack_140;
  *(undefined4 *)plStack_110[2] = *(undefined4 *)((longlong)plStack_110 + 0x1c);
  uStack_f8 = (undefined1 (*) [16])&pauStack_188;
  pauStack_f0 = (undefined1 (*) [16])&pauStack_208;
  uStack_84 = 1;
  pdb_1417bc950(*plStack_110 + 0x90,&uStack_f8,lVar22);
  goto LAB_140c43077;
LAB_140c434ed:
  uVar17 = uVar17 & plStack_90[1];
  pcVar1 = (char *)(lVar22 + uVar17);
  auVar42[0] = -(*pcVar1 == auVar36[0]);
  auVar42[1] = -(pcVar1[1] == auVar36[1]);
  auVar42[2] = -(pcVar1[2] == auVar36[2]);
  auVar42[3] = -(pcVar1[3] == auVar36[3]);
  auVar42[4] = -(pcVar1[4] == auVar36[4]);
  auVar42[5] = -(pcVar1[5] == auVar36[5]);
  auVar42[6] = -(pcVar1[6] == auVar36[6]);
  auVar42[7] = -(pcVar1[7] == auVar36[7]);
  auVar42[8] = -(pcVar1[8] == auVar36[0]);
  auVar42[9] = -(pcVar1[9] == auVar36[1]);
  auVar42[10] = -(pcVar1[10] == auVar36[2]);
  auVar42[0xb] = -(pcVar1[0xb] == auVar36[3]);
  auVar42[0xc] = -(pcVar1[0xc] == auVar36[4]);
  auVar42[0xd] = -(pcVar1[0xd] == auVar36[5]);
  auVar42[0xe] = -(pcVar1[0xe] == auVar36[6]);
  auVar42[0xf] = -(pcVar1[0xf] == auVar36[7]);
  uVar29 = (ushort)(SUB161(auVar42 >> 7,0) & 1) | (ushort)(SUB161(auVar42 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar42 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar42 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar42 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar42 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar42 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar42 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar42 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar42 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar42 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar42 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar42 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar42 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar42 >> 0x77,0) & 1) << 0xe | (ushort)(auVar42[0xf] >> 7) << 0xf;
  uVar27 = (uint)uVar29;
  while (uVar29 != 0) {
    uVar3 = 0;
    for (uVar28 = uVar27; (uVar28 & 1) == 0; uVar28 = uVar28 >> 1 | 0x80000000) {
      uVar3 = uVar3 + 1;
    }
    lVar30 = (uVar3 + uVar17 & plStack_90[1]) * -0x140;
    if ((uVar32 == *(uint *)(lVar22 + -0x140 + lVar30)) &&
       (uVar5 == *(uint *)(lVar22 + -0x13c + lVar30))) {
      *(undefined1 *)(lVar22 + lVar30 + -7) = 1;
      goto LAB_140c43610;
    }
    uVar29 = (ushort)(uVar27 - 1) & (ushort)uVar27;
    uVar27 = CONCAT22((short)(uVar27 - 1 >> 0x10),uVar29);
  }
  auVar38[0] = -(*pcVar1 == -1);
  auVar38[1] = -(pcVar1[1] == -1);
  auVar38[2] = -(pcVar1[2] == -1);
  auVar38[3] = -(pcVar1[3] == -1);
  auVar38[4] = -(pcVar1[4] == -1);
  auVar38[5] = -(pcVar1[5] == -1);
  auVar38[6] = -(pcVar1[6] == -1);
  auVar38[7] = -(pcVar1[7] == -1);
  auVar38[8] = -(pcVar1[8] == -1);
  auVar38[9] = -(pcVar1[9] == -1);
  auVar38[10] = -(pcVar1[10] == -1);
  auVar38[0xb] = -(pcVar1[0xb] == -1);
  auVar38[0xc] = -(pcVar1[0xc] == -1);
  auVar38[0xd] = -(pcVar1[0xd] == -1);
  auVar38[0xe] = -(pcVar1[0xe] == -1);
  auVar38[0xf] = -(pcVar1[0xf] == -1);
  if ((((((((((((((((SUB161(auVar38 >> 7,0) & 1) != 0 || (SUB161(auVar38 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar38 >> 0x17,0) & 1) != 0) || (SUB161(auVar38 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar38 >> 0x27,0) & 1) != 0) || (SUB161(auVar38 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar38 >> 0x37,0) & 1) != 0) || (SUB161(auVar38 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar38 >> 0x47,0) & 1) != 0) || (SUB161(auVar38 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar38 >> 0x57,0) & 1) != 0) || (SUB161(auVar38 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar38 >> 0x67,0) & 1) != 0) || (SUB161(auVar38 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar38 >> 0x77,0) & 1) != 0) || auVar38[0xf] < '\0') goto LAB_140c43610;
  uVar17 = uVar17 + lVar26 + 0x10;
  lVar26 = lVar26 + 0x10;
  goto LAB_140c434ed;
}

