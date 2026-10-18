// VA 0x140b1e840, PDB extent 4109 bytes
// country_core::startup::load_mesh_atlases::reload_nani_meshes_after_mod_swap
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/load_mesh_atlases.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::startup::load_mesh_atlases::reload_nani_meshes_after_mod_swap
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/load_mesh_atlases.rs
   Extent: 4109 */

undefined8 *
pdb_140b1e840(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  char cVar8;
  longlong lVar9;
  byte *pbVar10;
  longlong *plVar11;
  undefined *puVar12;
  ulonglong uVar13;
  uint uVar14;
  undefined1 (*pauVar15) [16];
  ulonglong uVar16;
  byte *pbVar17;
  longlong lVar18;
  ulonglong arg2;
  undefined1 (*pauVar19) [16];
  byte *pbStack_2e8;
  ulonglong *puStack_2e0;
  ulonglong uStack_2d8;
  ulonglong uStack_2d0;
  ulonglong uStack_2c8;
  ulonglong uStack_2c0;
  byte *pbStack_2b8;
  ulonglong uStack_2b0;
  ulonglong uStack_2a8;
  undefined1 (*pauStack_298) [16];
  longlong lStack_290;
  undefined8 uStack_288;
  longlong lStack_280;
  longlong lStack_278;
  undefined *puStack_270;
  undefined1 (*pauStack_268) [16];
  longlong lStack_260;
  undefined8 uStack_258;
  longlong lStack_250;
  longlong lStack_248;
  undefined *puStack_240;
  byte *pbStack_230;
  byte *pbStack_228;
  byte *pbStack_220;
  undefined8 *puStack_218;
  undefined8 uStack_210;
  byte *pbStack_208;
  ulonglong *puStack_200;
  ulonglong uStack_1f8;
  ulonglong *puStack_1e8;
  ulonglong *puStack_1e0;
  byte *pbStack_1d8;
  ulonglong *puStack_1d0;
  ulonglong uStack_1c8;
  byte *pbStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  ulonglong uStack_1a0;
  ulonglong uStack_198;
  byte *pbStack_190;
  ulonglong uStack_188;
  ulonglong uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  byte *pbStack_160;
  undefined8 uStack_158;
  undefined8 *puStack_150;
  undefined8 uStack_148;
  byte *pbStack_140;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  uint uStack_128;
  undefined4 uStack_124;
  byte *pbStack_120;
  undefined8 uStack_118;
  undefined1 (*pauStack_110) [16];
  ulonglong uStack_108;
  ulonglong uStack_100;
  undefined *puStack_f8;
  byte **ppbStack_f0;
  undefined8 uStack_e8;
  byte *pbStack_c8;
  code *pcStack_c0;
  uint uStack_b8;
  undefined4 uStack_b4;
  byte *pbStack_a8;
  byte *pbStack_a0;
  undefined8 *puStack_98;
  undefined1 uStack_89;
  byte *pbStack_88;
  byte *pbStack_80;
  char cStack_73;
  undefined1 uStack_72;
  undefined1 uStack_71;
  undefined8 uStack_70;
  
  uStack_70 = 0xfffffffffffffffe;
  uStack_210 = param_4;
  uStack_158 = param_2;
  puStack_150 = param_1;
  puStack_98 = param_3;
  pdb_140d929f0(&uStack_1c8,&UNK_143055a2d,0x16);
  uStack_148 = (byte *)((ulonglong)uStack_148._4_4_ << 0x20);
  pbStack_140 = (byte *)0x0;
  uStack_138 = 7;
  uStack_134 = 0;
  uStack_12c = 0;
  uStack_128 = uStack_128 & 0xffffff00;
  uStack_130 = 1;
  pbStack_88 = pbStack_1c0;
  pbVar17 = pbStack_1c0;
  lVar9 = pdb_140f4a2a0(&uStack_148,pbStack_1c0,uStack_1b8);
  if (uStack_1c8 != 0) {
    pub_1406abac0(pbStack_88,uStack_1c8,1);
  }
  if (lVar9 == 1) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_143055a43,0x14,&uStack_148,&UNK_1430561c0,&UNK_143055a58);
  }
  pdb_14007ee60();
  pbVar10 = pub_1406abab0(0x2000,1);
  if (pbVar10 == (byte *)0x0) {
    pdb_142dc7e2a(1,0x2000);
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  pbStack_140 = (byte *)0x2000;
  uStack_138 = 0;
  uStack_134 = 0;
  uStack_130 = 0;
  uStack_12c = 0;
  uStack_128 = 0;
  uStack_124 = 0;
  uStack_2d8 = 0;
  pbStack_2e8 = (byte *)0x1;
  puStack_2e0 = (ulonglong *)0x80;
  uStack_148 = pbVar10;
  pbStack_120 = pbVar17;
  pdb_141741830(&uStack_1c8,&pbStack_2e8,&uStack_148);
  if ((char)uStack_1c8 != '2') {
    uStack_e8 = uStack_168;
    puStack_f8 = (undefined *)uStack_178;
    ppbStack_f0 = (byte **)uStack_170;
    uStack_108 = uStack_188;
    uStack_100 = uStack_180;
    uStack_128 = (undefined4)uStack_1a8;
    uStack_124 = uStack_1a8._4_4_;
    uStack_138 = (undefined4)uStack_1b8;
    uStack_134 = uStack_1b8._4_4_;
    uStack_130 = (undefined4)uStack_1b0;
    uStack_12c = uStack_1b0._4_4_;
    uStack_148 = (byte *)uStack_1c8;
    pbStack_140 = pbStack_1c0;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_143055a70,0x1b,&uStack_148,&UNK_1430561e0,&UNK_143055a90);
  }
  uStack_1f8 = uStack_1b0;
  pbStack_208 = pbStack_1c0;
  puStack_200 = uStack_1b8;
  uStack_71 = 1;
  puVar12 = &UNK_143055a2d;
  cStack_73 = pdb_140d8b400(uStack_158,&UNK_143055a2d,0x16);
  uStack_71 = 1;
  plVar11 = (longlong *)pdb_140f3bda0();
  if ((char)plVar11[2] == '\x01') {
    lStack_248 = *plVar11;
    puVar12 = (undefined *)plVar11[1];
  }
  else {
    uStack_71 = 1;
    lStack_248 = pdb_140f4fd10();
    *plVar11 = lStack_248;
    plVar11[1] = (longlong)puVar12;
    *(undefined1 *)(plVar11 + 2) = 1;
  }
  *plVar11 = lStack_248 + 1;
  lVar18 = _UNK_1430561b8;
  uVar7 = _DAT_1430561b0;
  lVar9 = _UNK_1430561a8;
  pauVar19 = _DAT_1430561a0;
  uStack_258 = _DAT_1430561b0;
  lStack_250 = _UNK_1430561b8;
  pauStack_268 = _DAT_1430561a0;
  lStack_260 = _UNK_1430561a8;
  uStack_72 = 1;
  puStack_240 = puVar12;
  plVar11 = (longlong *)pdb_140f3bda0();
  if ((char)plVar11[2] == '\x01') {
    lStack_278 = *plVar11;
    puVar12 = (undefined *)plVar11[1];
  }
  else {
    uStack_72 = 1;
    lStack_278 = pdb_140f4fd10();
    *plVar11 = lStack_278;
    plVar11[1] = (longlong)puVar12;
    *(undefined1 *)(plVar11 + 2) = 1;
  }
  *plVar11 = lStack_278 + 1;
  uStack_288 = uVar7;
  lStack_280 = lVar18;
  pauStack_298 = pauVar19;
  lStack_290 = lVar9;
  puStack_1d0 = puStack_200 + uStack_1f8 * 10;
  puStack_1e8 = puStack_200;
  puStack_1e0 = puStack_200;
  pbStack_1d8 = pbStack_208;
  puStack_218 = puStack_98 + 6;
  puStack_270 = puVar12;
  while (puStack_1e0 != puStack_1d0) {
    puVar1 = puStack_1e0 + 10;
    uVar16 = *puStack_1e0;
    uStack_2a8 = puStack_1e0[9];
    pbStack_2b8 = (byte *)puStack_1e0[7];
    uStack_2b0 = puStack_1e0[8];
    uStack_2c8 = puStack_1e0[5];
    uStack_2c0 = puStack_1e0[6];
    uStack_2d8 = puStack_1e0[3];
    uStack_2d0 = puStack_1e0[4];
    pbStack_2e8 = (byte *)puStack_1e0[1];
    puStack_2e0 = (ulonglong *)puStack_1e0[2];
    puStack_1e0 = puVar1;
    if (SBORROW8(0,uVar16)) break;
    pbStack_220 = pbStack_2b8 + uStack_2b0 * 0x20;
    uStack_1c8 = uVar16;
    pbStack_1c0 = pbStack_2e8;
    uStack_1b8 = puStack_2e0;
    uStack_1b0 = uStack_2d8;
    uStack_1a8 = uStack_2d0;
    uStack_1a0 = uStack_2c8;
    uStack_198 = uStack_2c0;
    pbStack_190 = pbStack_2b8;
    uStack_188 = uStack_2b0;
    uStack_180 = uStack_2a8;
    pbVar17 = pbStack_2b8;
    while (pbStack_160 = pbVar17, pbStack_160 != pbStack_220) {
      pbStack_80 = pbStack_160;
      if ((DAT_143cb2d0c == '\0') || (pbVar17 = pbStack_160 + 0x20, pbStack_160[0x18] == 0)) {
        pbStack_c8 = pbStack_160;
        pcStack_c0 = pdb_140001020;
        pbStack_160 = pbStack_160 + 0x20;
        pdb_140f60760(&uStack_148,&UNK_1430558c1,&pbStack_c8);
        pbStack_a0 = uStack_148;
        pbStack_a8 = pbStack_140;
        if ((cStack_73 != '\0') ||
           (cVar8 = pdb_140d8b400(uStack_158,pbStack_140,CONCAT44(uStack_134,uStack_138)),
           pbVar10 = pbStack_a0, cVar8 != '\0')) {
          if (2 < *_DAT_143ca8e90) {
            pbStack_c8 = pbStack_80;
            pcStack_c0 = pdb_140094770;
            uStack_148 = (byte *)0x0;
            pbStack_140 = &UNK_143055731;
            uStack_138 = 0x28;
            uStack_134 = 0;
            uStack_130 = 0;
            uStack_12c = 0;
            uStack_128 = 0x430556c6;
            uStack_124 = 1;
            pbStack_120 = (byte *)0x34;
            uStack_118 = 3;
            pauStack_110 = (undefined1 (*) [16])&UNK_143055731;
            uStack_108 = 0x28;
            uStack_100 = 0xfb00000001;
            puStack_f8 = &UNK_143055aa8;
            ppbStack_f0 = &pbStack_c8;
            pdb_140f332f0(&uStack_89,&uStack_148);
          }
          pdb_140b1dec0(&uStack_148,*(undefined8 *)(pbStack_80 + 8),
                        *(undefined8 *)(pbStack_80 + 0x10),&uStack_1c8);
          pdb_140f60be0(&pbStack_c8,pbStack_80);
          cVar8 = pdb_1403b0b40(&pauStack_298,&pbStack_c8);
          if (cVar8 == '\0') {
            pbStack_228 = (byte *)pdb_140df4400(*(undefined8 *)(pbStack_80 + 8),
                                                *(undefined8 *)(pbStack_80 + 0x10));
            pbStack_88 = pbStack_228;
            pdb_140ca8e90(&pbStack_c8,puStack_218,pbStack_228,&pbStack_228);
            if ((!SBORROW8(0,(longlong)pcStack_c0)) && (pcStack_c0 != (code *)0x0)) {
              pub_1406abac0((byte *)CONCAT44(uStack_b4,uStack_b8),(longlong)pcStack_c0 << 3,4);
            }
            lVar9 = puStack_98[3];
            if (lVar9 != 0) {
              pauVar15 = (undefined1 (*) [16])*puStack_98;
              auVar3 = *pauVar15;
              uVar14 = ~(uint)(ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) |
                                       (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
                                       (ushort)(SUB161(auVar3 >> 0x17,0) & 1) << 2 |
                                       (ushort)(SUB161(auVar3 >> 0x1f,0) & 1) << 3 |
                                       (ushort)(SUB161(auVar3 >> 0x27,0) & 1) << 4 |
                                       (ushort)(SUB161(auVar3 >> 0x2f,0) & 1) << 5 |
                                       (ushort)(SUB161(auVar3 >> 0x37,0) & 1) << 6 |
                                       (ushort)(SUB161(auVar3 >> 0x3f,0) & 1) << 7 |
                                       (ushort)(SUB161(auVar3 >> 0x47,0) & 1) << 8 |
                                       (ushort)(SUB161(auVar3 >> 0x4f,0) & 1) << 9 |
                                       (ushort)(SUB161(auVar3 >> 0x57,0) & 1) << 10 |
                                       (ushort)(SUB161(auVar3 >> 0x5f,0) & 1) << 0xb |
                                       (ushort)(SUB161(auVar3 >> 0x67,0) & 1) << 0xc |
                                       (ushort)(SUB161(auVar3 >> 0x6f,0) & 1) << 0xd |
                                       (ushort)(SUB161(auVar3 >> 0x77,0) & 1) << 0xe |
                                      (ushort)(byte)(auVar3[0xf] >> 7) << 0xf);
              pauVar19 = pauVar15 + 1;
              do {
                if ((short)uVar14 == 0) {
                  do {
                    auVar3 = *pauVar19;
                    pauVar15 = pauVar15 + -0xf0;
                    pauVar19 = pauVar19 + 1;
                    uVar14 = (ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) |
                                      (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
                                      (ushort)(SUB161(auVar3 >> 0x17,0) & 1) << 2 |
                                      (ushort)(SUB161(auVar3 >> 0x1f,0) & 1) << 3 |
                                      (ushort)(SUB161(auVar3 >> 0x27,0) & 1) << 4 |
                                      (ushort)(SUB161(auVar3 >> 0x2f,0) & 1) << 5 |
                                      (ushort)(SUB161(auVar3 >> 0x37,0) & 1) << 6 |
                                      (ushort)(SUB161(auVar3 >> 0x3f,0) & 1) << 7 |
                                      (ushort)(SUB161(auVar3 >> 0x47,0) & 1) << 8 |
                                      (ushort)(SUB161(auVar3 >> 0x4f,0) & 1) << 9 |
                                      (ushort)(SUB161(auVar3 >> 0x57,0) & 1) << 10 |
                                      (ushort)(SUB161(auVar3 >> 0x5f,0) & 1) << 0xb |
                                      (ushort)(SUB161(auVar3 >> 0x67,0) & 1) << 0xc |
                                      (ushort)(SUB161(auVar3 >> 0x6f,0) & 1) << 0xd |
                                      (ushort)(SUB161(auVar3 >> 0x77,0) & 1) << 0xe |
                                     (ushort)(byte)(auVar3[0xf] >> 7) << 0xf) ^ 0xffff;
                  } while (uVar14 == 0);
                }
                uVar5 = 0;
                for (uVar6 = uVar14; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
                  uVar5 = uVar5 + 1;
                }
                uVar16 = (ulonglong)uVar5;
                pbStack_230 = pbStack_88;
                pdb_140cab130(&pbStack_c8,pauVar15[uVar16 * -0xf + -3] + 8,pbStack_88,&pbStack_230);
                uVar5 = uStack_b8;
                if ((int)pbStack_c8 == 1) {
                  uVar13 = (ulonglong)uStack_b8;
                  if (*(ulonglong *)(pauVar15[uVar16 * -0xf + -5] + 8) <= uVar13) {
                    /* WARNING: Subroutine does not return */
                    pdb_142dc81f2(uVar13,*(ulonglong *)(pauVar15[uVar16 * -0xf + -5] + 8),
                                  &UNK_14306e6f0);
                  }
                  puVar2 = (undefined8 *)(*(longlong *)pauVar15[uVar16 * -0xf + -5] + uVar13 * 0x10)
                  ;
                  *puVar2 = 0;
                  puVar2[1] = 0;
                  lVar18 = *(longlong *)pauVar15[uVar16 * -0xf + -3];
                  if (lVar18 == *(longlong *)pauVar15[uVar16 * -0xf + -4]) {
                    pdb_142db0990(pauVar15 + uVar16 * -0xf + -4);
                  }
                  *(uint *)(*(longlong *)(pauVar15[uVar16 * -0xf + -4] + 8) + lVar18 * 4) = uVar5;
                  *(longlong *)pauVar15[uVar16 * -0xf + -3] = lVar18 + 1;
                }
                uVar14 = uVar14 - 1 & uVar14;
                lVar9 = lVar9 + -1;
              } while (lVar9 != 0);
            }
          }
          pdb_140a58820(puStack_98,uStack_180 & 0xff,*(undefined8 *)(pbStack_80 + 8),
                        *(undefined8 *)(pbStack_80 + 0x10),&uStack_148);
          pdb_1417b2a00(&pauStack_268,uStack_180 & 0xff);
          uVar16 = uStack_108;
          if (uStack_108 != 0) {
            if (puStack_f8 != (undefined *)0x0) {
              auVar3 = *pauStack_110;
              pauVar19 = pauStack_110 + 1;
              uVar14 = ~(uint)(ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) |
                                       (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
                                       (ushort)(SUB161(auVar3 >> 0x17,0) & 1) << 2 |
                                       (ushort)(SUB161(auVar3 >> 0x1f,0) & 1) << 3 |
                                       (ushort)(SUB161(auVar3 >> 0x27,0) & 1) << 4 |
                                       (ushort)(SUB161(auVar3 >> 0x2f,0) & 1) << 5 |
                                       (ushort)(SUB161(auVar3 >> 0x37,0) & 1) << 6 |
                                       (ushort)(SUB161(auVar3 >> 0x3f,0) & 1) << 7 |
                                       (ushort)(SUB161(auVar3 >> 0x47,0) & 1) << 8 |
                                       (ushort)(SUB161(auVar3 >> 0x4f,0) & 1) << 9 |
                                       (ushort)(SUB161(auVar3 >> 0x57,0) & 1) << 10 |
                                       (ushort)(SUB161(auVar3 >> 0x5f,0) & 1) << 0xb |
                                       (ushort)(SUB161(auVar3 >> 0x67,0) & 1) << 0xc |
                                       (ushort)(SUB161(auVar3 >> 0x6f,0) & 1) << 0xd |
                                       (ushort)(SUB161(auVar3 >> 0x77,0) & 1) << 0xe |
                                      (ushort)(byte)(auVar3[0xf] >> 7) << 0xf);
              puVar12 = puStack_f8;
              pauVar15 = pauStack_110;
              do {
                if ((short)uVar14 == 0) {
                  do {
                    auVar3 = *pauVar19;
                    pauVar15 = pauVar15 + -0x38;
                    pauVar19 = pauVar19 + 1;
                    uVar14 = (ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) |
                                      (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
                                      (ushort)(SUB161(auVar3 >> 0x17,0) & 1) << 2 |
                                      (ushort)(SUB161(auVar3 >> 0x1f,0) & 1) << 3 |
                                      (ushort)(SUB161(auVar3 >> 0x27,0) & 1) << 4 |
                                      (ushort)(SUB161(auVar3 >> 0x2f,0) & 1) << 5 |
                                      (ushort)(SUB161(auVar3 >> 0x37,0) & 1) << 6 |
                                      (ushort)(SUB161(auVar3 >> 0x3f,0) & 1) << 7 |
                                      (ushort)(SUB161(auVar3 >> 0x47,0) & 1) << 8 |
                                      (ushort)(SUB161(auVar3 >> 0x4f,0) & 1) << 9 |
                                      (ushort)(SUB161(auVar3 >> 0x57,0) & 1) << 10 |
                                      (ushort)(SUB161(auVar3 >> 0x5f,0) & 1) << 0xb |
                                      (ushort)(SUB161(auVar3 >> 0x67,0) & 1) << 0xc |
                                      (ushort)(SUB161(auVar3 >> 0x6f,0) & 1) << 0xd |
                                      (ushort)(SUB161(auVar3 >> 0x77,0) & 1) << 0xe |
                                     (ushort)(byte)(auVar3[0xf] >> 7) << 0xf) ^ 0xffff;
                  } while (uVar14 == 0);
                }
                uVar5 = 0;
                for (uVar6 = uVar14; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
                  uVar5 = uVar5 + 1;
                }
                lVar9 = (ulonglong)uVar5 * -0x38;
                uVar13 = *(ulonglong *)((longlong)pauVar15 + lVar9 + -0x38);
                if (uVar13 != 0) {
                  pub_1406abac0(*(byte **)((longlong)pauVar15 + lVar9 + -0x30),uVar13,1);
                }
                switch(*(undefined8 *)((longlong)pauVar15 + lVar9 + -0x20)) {
                case 0:
                case 2:
                  lVar18 = *(longlong *)((longlong)pauVar15 + lVar9 + -0x18);
                  if (lVar18 != 0) {
                    pbVar17 = *(byte **)((longlong)pauVar15 + lVar9 + -0x10);
                    uVar13 = lVar18 << 2;
LAB_140b1ef50:
                    arg2 = 4;
code_r0x000140b1ef56:
                    pub_1406abac0(pbVar17,uVar13,arg2);
                  }
                  break;
                case 1:
                  lVar18 = *(longlong *)((longlong)pauVar15 + lVar9 + -0x18);
                  if (lVar18 != 0) {
                    pbVar17 = *(byte **)((longlong)pauVar15 + lVar9 + -0x10);
                    uVar13 = lVar18 << 3;
                    arg2 = 2;
                    goto code_r0x000140b1ef56;
                  }
                  break;
                case 3:
                  lVar18 = *(longlong *)((longlong)pauVar15 + lVar9 + -0x18);
                  if (lVar18 != 0) {
                    pbVar17 = *(byte **)((longlong)pauVar15 + lVar9 + -0x10);
                    uVar13 = lVar18 << 3;
                    goto LAB_140b1ef50;
                  }
                  break;
                case 4:
                  lVar18 = *(longlong *)((longlong)pauVar15 + lVar9 + -0x18);
                  if (lVar18 != 0) {
                    pbVar17 = *(byte **)((longlong)pauVar15 + lVar9 + -0x10);
                    uVar13 = lVar18 * 0xc;
                    goto LAB_140b1ef50;
                  }
                  break;
                default:
                  lVar18 = *(longlong *)((longlong)pauVar15 + lVar9 + -0x18);
                  if (lVar18 != 0) {
                    pbVar17 = *(byte **)((longlong)pauVar15 + lVar9 + -0x10);
                    uVar13 = lVar18 << 4;
                    goto LAB_140b1ef50;
                  }
                }
                uVar14 = uVar14 - 1 & uVar14;
                puVar12 = puVar12 + -1;
              } while (puVar12 != (undefined *)0x0);
            }
            uVar13 = uVar16 * 0x38 + 0x47 & 0xfffffffffffffff0;
            uVar16 = uVar16 + uVar13 + 0x11;
            if (uVar16 != 0) {
              pub_1406abac0((byte *)((longlong)pauStack_110 - uVar13),uVar16,0x10);
            }
          }
          if (uStack_148 != (byte *)0x0) {
            pub_1406abac0(pbStack_140,(longlong)uStack_148 << 2,4);
          }
          pbVar10 = pbStack_a0;
          uVar16 = CONCAT44(uStack_12c,uStack_130);
          if ((!SBORROW8(0,uVar16)) && (uVar16 != 0)) {
            pub_1406abac0((byte *)CONCAT44(uStack_124,uStack_128),uVar16,1);
          }
        }
        pbVar17 = pbStack_160;
        if (pbVar10 != (byte *)0x0) {
          pub_1406abac0(pbStack_a8,(ulonglong)pbVar10,1);
          pbVar17 = pbStack_160;
        }
      }
    }
    pdb_140999dd0(&uStack_1c8);
    if (uStack_188 != 0) {
      pbVar17 = pbStack_190 + 8;
      uVar16 = uStack_188;
      do {
        if (*(ulonglong *)(pbVar17 + -8) != 0) {
          pub_1406abac0(*(byte **)pbVar17,*(ulonglong *)(pbVar17 + -8),1);
        }
        pbVar17 = pbVar17 + 0x20;
        uVar16 = uVar16 - 1;
      } while (uVar16 != 0);
    }
    if (uStack_198 != 0) {
      pub_1406abac0(pbStack_190,uStack_198 << 5,8);
    }
  }
  pdb_140971f40(&puStack_1e8);
  if (lStack_250 != 0) {
    pdb_140a57030(puStack_98,uStack_210);
  }
  lVar9 = lStack_290;
  puStack_150[4] = lStack_248;
  puStack_150[5] = puStack_240;
  puStack_150[2] = uStack_258;
  puStack_150[3] = lStack_250;
  *puStack_150 = pauStack_268;
  puStack_150[1] = lStack_260;
  if (lStack_290 != 0) {
    if (lStack_280 != 0) {
      auVar3 = *pauStack_298;
      pauVar19 = pauStack_298 + 1;
      uVar14 = ~(uint)(ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar3 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar3 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar3 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar3 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar3 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar3 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar3 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar3 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar3 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar3 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar3 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar3 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar3 >> 0x77,0) & 1) << 0xe |
                              (ushort)(byte)(auVar3[0xf] >> 7) << 0xf);
      pauVar15 = pauStack_298;
      lVar18 = lStack_280;
      do {
        if ((short)uVar14 == 0) {
          do {
            auVar3 = *pauVar19;
            pauVar15 = pauVar15 + -0x18;
            pauVar19 = pauVar19 + 1;
            uVar14 = (ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar3 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar3 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar3 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar3 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar3 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar3 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar3 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar3 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar3 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar3 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar3 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar3 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar3 >> 0x77,0) & 1) << 0xe |
                             (ushort)(byte)(auVar3[0xf] >> 7) << 0xf) ^ 0xffff;
          } while (uVar14 == 0);
        }
        uVar5 = 0;
        for (uVar6 = uVar14; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          uVar5 = uVar5 + 1;
        }
        uVar16 = *(ulonglong *)((longlong)pauVar15 + (ulonglong)uVar5 * -0x18 + -0x18);
        if (uVar16 != 0) {
          pub_1406abac0(*(byte **)((longlong)pauVar15 + (ulonglong)uVar5 * -0x18 + -0x10),uVar16,1);
        }
        uVar14 = uVar14 - 1 & uVar14;
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
    }
    uVar16 = lVar9 * 0x18 + 0x27U & 0xfffffffffffffff0;
    uVar13 = lVar9 + uVar16 + 0x11;
    if (uVar13 != 0) {
      pub_1406abac0((byte *)((longlong)pauStack_298 - uVar16),uVar13,0x10);
    }
  }
  return puStack_150;
}

