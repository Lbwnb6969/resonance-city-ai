// VA 0x1428eda10, PDB extent 4478 bytes
// system_clutter::autoclutter::add_autoclutter_around_windows::add_autoclutter_around_windows
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/clutter/src/autoclutter/add_autoclutter_around_windows.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_clutter::autoclutter::add_autoclutter_around_windows::add_autoclutter_around_windows
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/clutter/src/autoclutter/add_autoclutter_around_windows.rs
   Extent: 4478 */

void pdb_1428eda10(undefined1 (*param_1) [16],undefined1 (*param_2) [16],undefined8 *param_3,
                  longlong *param_4,undefined8 param_5)

{
  byte *pbVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  byte bVar5;
  byte bVar6;
  byte bVar7;
  undefined1 uVar8;
  ulonglong uVar9;
  code *pcVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  char cVar15;
  uint uVar16;
  longlong lVar17;
  ulonglong uVar18;
  longlong *plVar19;
  ulonglong uVar20;
  undefined1 (*pauVar21) [16];
  undefined1 (*pauVar22) [16];
  longlong lVar23;
  undefined8 *unaff_RDI;
  undefined *puVar24;
  undefined *puVar25;
  longlong lVar26;
  uint uVar27;
  undefined8 *puVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar44;
  undefined1 auVar43 [16];
  undefined8 uStack_250;
  undefined1 (*pauStack_248) [16];
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  float fStack_228;
  float fStack_224;
  float fStack_220;
  float fStack_21c;
  float fStack_218;
  float fStack_214;
  float fStack_210;
  longlong lStack_1f8;
  undefined1 (*pauStack_1f0) [16];
  longlong lStack_1e8;
  undefined1 (*pauStack_1e0) [16];
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  float afStack_1c0 [4];
  undefined8 uStack_1b0;
  float fStack_1a4;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined4 *puStack_190;
  undefined8 uStack_188;
  longlong lStack_180;
  longlong lStack_178;
  undefined4 uStack_16c;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  code *pcStack_148;
  undefined1 auStack_140 [16];
  undefined8 uStack_130;
  float fStack_128;
  float fStack_124;
  undefined1 uStack_120;
  undefined1 uStack_11f;
  undefined2 uStack_11e;
  undefined1 uStack_11c;
  undefined4 uStack_114;
  undefined8 uStack_110;
  longlong *plStack_108;
  longlong *plStack_100;
  char cStack_f1;
  undefined8 uStack_f0;
  
  uStack_f0 = 0xfffffffffffffffe;
  pauVar21 = param_2;
  cStack_f1 = pdb_140e94b40();
  if (cStack_f1 == '\0') goto LAB_1428edc1c;
  unaff_RDI = (undefined8 *)0x5b;
  lVar17 = pdb_1428eeb90(0x5b);
  pauVar22 = (undefined1 (*) [16])&UNK_1435b2d90;
  if (lVar17 == 1) {
    if ((undefined1 (*) [16])0x5b < pauVar21) {
LAB_1428ee783:
      pdb_142dc8070(&UNK_1435b2d90,0x5b,0);
LAB_1428ee7a3:
      pdb_142dc8070(&UNK_1435b2d90,0x5b);
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    uVar18 = pdb_1428eeb90(pauVar21);
    if ((uVar18 & 1) != 0) {
      if ((undefined *)0x5b < *pauVar21 + 2) goto LAB_1428ee7a3;
      unaff_RDI = (undefined8 *)(0x59 - (longlong)pauVar21);
      pauVar22 = (undefined1 (*) [16])(pauVar21[0x1435b2d9] + 2);
    }
  }
  puVar24 = &UNK_1435b2c89;
  puVar28 = (undefined8 *)&UNK_1435b2c41;
  do {
    bVar5 = puVar24[-1];
    uVar16 = (uint)(char)bVar5;
    plStack_100 = param_4;
    if ((char)bVar5 < '\0') {
      bVar6 = puVar24[-2];
      if ((char)bVar6 < -0x40) {
        bVar7 = puVar24[-3];
        if ((char)bVar7 < -0x40) {
          pbVar1 = puVar24 + -4;
          puVar24 = puVar24 + -4;
          uVar16 = bVar7 & 0x3f | (*pbVar1 & 7) << 6;
        }
        else {
          puVar24 = puVar24 + -3;
          uVar16 = bVar7 & 0xf;
        }
        uVar16 = bVar6 & 0x3f | uVar16 << 6;
      }
      else {
        puVar24 = puVar24 + -2;
        uVar16 = bVar6 & 0x1f;
      }
      uVar16 = (uint)(bVar5 & 0x3f) | uVar16 << 6;
      if (uVar16 != 0x5c) goto LAB_1428edb84;
LAB_1428edb95:
      puVar25 = puVar24 + -0x1435b2c40;
      if ((undefined *)0x48 < puVar25) {
        pdb_142dc8070(&UNK_1435b2c41,0x48,puVar25,0x48,&UNK_1435b2e48);
        goto LAB_1428ee783;
      }
      uVar18 = 0x48 - (longlong)puVar25;
      puVar28 = (undefined8 *)(puVar24 + 1);
      goto LAB_1428edbb7;
    }
    puVar24 = puVar24 + -1;
    if (uVar16 == 0x5c) goto LAB_1428edb95;
LAB_1428edb84:
    if (uVar16 == 0x2f) goto LAB_1428edb95;
  } while (puVar24 != &UNK_1435b2c41);
  uVar18 = 0x48;
LAB_1428edbb7:
  plVar19 = (longlong *)pdb_140e97000();
  pauVar21 = pauVar22;
  if ((char)plVar19[0xd] != '\x01') goto LAB_1428ee70b;
  do {
    if (*plVar19 != 0) goto LAB_1428ee6ff;
    *plVar19 = -1;
    plStack_108 = plVar19;
    pauStack_1e0 = (undefined1 (*) [16])
                   pdb_140e94f10(plVar19 + 1,pauVar21,unaff_RDI,puVar28,uVar18,1,0);
    *plStack_108 = *plStack_108 + 1;
    param_4 = plStack_100;
LAB_1428edc1c:
    uStack_250 = pdb_140c47770(param_5);
    pauStack_248 = pauVar21;
    pdb_140a2fb40(&fStack_158,*(undefined8 *)*param_1);
    fVar13 = _DAT_1435b2b10;
    fVar12 = _DAT_142e37838;
    uVar18 = (ulonglong)(ushort)auStack_140._0_2_;
    uStack_240 = *(undefined8 *)*param_2;
    uStack_238 = *param_4;
    uStack_114 = *(undefined4 *)((longlong)param_3 + 0x1c);
    uStack_188 = *param_3;
    puStack_190 = (undefined4 *)param_3[2];
    lVar17 = CONCAT44(fStack_154,fStack_158);
    pauVar22 = (undefined1 (*) [16])CONCAT44(fStack_14c,fStack_150);
    lVar26 = auStack_140._8_8_;
    while (pauVar21 = pauStack_1e0, lVar26 != 0) {
      if ((short)uVar18 == 0) {
        do {
          auVar4 = *pauVar22;
          lVar17 = lVar17 + -0x980;
          pauVar22 = pauVar22 + 1;
          uVar16 = (ushort)((ushort)(SUB161(auVar4 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar4 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar4 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar4 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar4 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar4 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar4 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar4 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar4 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar4 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar4 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar4 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar4 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar4 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar4 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar4[0xf] >> 7) << 0xf) ^ 0xffff;
          uVar18 = (ulonglong)uVar16;
        } while (uVar16 == 0);
      }
      uVar27 = (uint)uVar18;
      uVar16 = 0;
      for (uVar11 = uVar27; (uVar11 & 1) == 0; uVar11 = uVar11 >> 1 | 0x80000000) {
        uVar16 = uVar16 + 1;
      }
      uVar18 = (ulonglong)(uVar27 - 1 & uVar27);
      lVar23 = (ulonglong)uVar16 * -0x98;
      lVar26 = lVar26 + -1;
      if (*(longlong *)(lVar17 + -0x48 + lVar23) != 0) {
        uStack_198 = *(undefined8 *)(lVar17 + -0x98 + lVar23);
        lStack_1f8 = lVar17;
        pauStack_1f0 = pauVar22;
        lStack_1e8 = lVar26;
        lStack_180 = pdb_140b54f80(uStack_240,uStack_198,&UNK_1435b2c90);
        lVar17 = lStack_1f8;
        pauVar22 = pauStack_1f0;
        lVar26 = lStack_1e8;
        if ((lStack_180 != 0) && (*(uint *)(lStack_180 + 600) < 2)) {
          param_2 = *(undefined1 (**) [16])(lVar23 + lStack_1f8 + -0x60);
          auVar4 = *param_2;
          param_1 = param_2 + 1;
          param_3 = (undefined8 *)
                    (ulonglong)
                    ~(uint)(ushort)((ushort)(SUB161(auVar4 >> 7,0) & 1) |
                                    (ushort)(SUB161(auVar4 >> 0xf,0) & 1) << 1 |
                                    (ushort)(SUB161(auVar4 >> 0x17,0) & 1) << 2 |
                                    (ushort)(SUB161(auVar4 >> 0x1f,0) & 1) << 3 |
                                    (ushort)(SUB161(auVar4 >> 0x27,0) & 1) << 4 |
                                    (ushort)(SUB161(auVar4 >> 0x2f,0) & 1) << 5 |
                                    (ushort)(SUB161(auVar4 >> 0x37,0) & 1) << 6 |
                                    (ushort)(SUB161(auVar4 >> 0x3f,0) & 1) << 7 |
                                    (ushort)(SUB161(auVar4 >> 0x47,0) & 1) << 8 |
                                    (ushort)(SUB161(auVar4 >> 0x4f,0) & 1) << 9 |
                                    (ushort)(SUB161(auVar4 >> 0x57,0) & 1) << 10 |
                                    (ushort)(SUB161(auVar4 >> 0x5f,0) & 1) << 0xb |
                                    (ushort)(SUB161(auVar4 >> 0x67,0) & 1) << 0xc |
                                    (ushort)(SUB161(auVar4 >> 0x6f,0) & 1) << 0xd |
                                    (ushort)(SUB161(auVar4 >> 0x77,0) & 1) << 0xe |
                                   (ushort)(byte)(auVar4[0xf] >> 7) << 0xf);
          lVar23 = *(longlong *)(lVar23 + lStack_1f8 + -0x48);
          while (lVar17 = lStack_1f8, pauVar22 = pauStack_1f0, lVar26 = lStack_1e8, lVar23 != 0) {
            if ((short)param_3 == 0) {
              do {
                auVar4 = *param_1;
                param_2 = param_2 + -0x68;
                param_1 = param_1 + 1;
                uVar16 = (ushort)((ushort)(SUB161(auVar4 >> 7,0) & 1) |
                                  (ushort)(SUB161(auVar4 >> 0xf,0) & 1) << 1 |
                                  (ushort)(SUB161(auVar4 >> 0x17,0) & 1) << 2 |
                                  (ushort)(SUB161(auVar4 >> 0x1f,0) & 1) << 3 |
                                  (ushort)(SUB161(auVar4 >> 0x27,0) & 1) << 4 |
                                  (ushort)(SUB161(auVar4 >> 0x2f,0) & 1) << 5 |
                                  (ushort)(SUB161(auVar4 >> 0x37,0) & 1) << 6 |
                                  (ushort)(SUB161(auVar4 >> 0x3f,0) & 1) << 7 |
                                  (ushort)(SUB161(auVar4 >> 0x47,0) & 1) << 8 |
                                  (ushort)(SUB161(auVar4 >> 0x4f,0) & 1) << 9 |
                                  (ushort)(SUB161(auVar4 >> 0x57,0) & 1) << 10 |
                                  (ushort)(SUB161(auVar4 >> 0x5f,0) & 1) << 0xb |
                                  (ushort)(SUB161(auVar4 >> 0x67,0) & 1) << 0xc |
                                  (ushort)(SUB161(auVar4 >> 0x6f,0) & 1) << 0xd |
                                  (ushort)(SUB161(auVar4 >> 0x77,0) & 1) << 0xe |
                                 (ushort)(byte)(auVar4[0xf] >> 7) << 0xf) ^ 0xffff;
                param_3 = (undefined8 *)(ulonglong)uVar16;
              } while (uVar16 == 0);
            }
            uVar16 = 0;
            uVar27 = (uint)param_3;
            for (uVar11 = uVar27; (uVar11 & 1) == 0; uVar11 = uVar11 >> 1 | 0x80000000) {
              uVar16 = uVar16 + 1;
            }
            unaff_RDI = (undefined8 *)((ulonglong)uVar16 * -0x68);
            cVar15 = pdb_1409012d0(*(undefined8 *)((longlong)(param_2 + -6) + (longlong)unaff_RDI),
                                   *(undefined8 *)(param_2[-6] + 8 + (longlong)unaff_RDI));
            param_3 = (undefined8 *)(ulonglong)(uVar27 - 1 & uVar27);
            lVar23 = lVar23 + -1;
            if (cVar15 != '\0') {
              unaff_RDI = (undefined8 *)((longlong)unaff_RDI + (longlong)param_2);
              lVar17 = (ulonglong)*(byte *)((longlong)unaff_RDI + -0x2e) - 1;
              if ((ulonglong)*(byte *)((longlong)unaff_RDI + -0x2e) < 2) {
                lVar17 = 0;
              }
              plStack_100 = unaff_RDI;
              if (lVar17 == 0) {
                lVar17 = *(longlong *)(lStack_180 + 0x48);
                if (lVar17 == 1) {
                    /* WARNING: Subroutine does not return */
                  pdb_142dc8150(&UNK_1435b3998);
                }
                if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                  pdb_142dc83b0(&UNK_1435b3950,0x2d,&UNK_1435b3980);
                }
                fVar29 = *(float *)(unaff_RDI + -10);
                if (*(float *)(unaff_RDI + -10) <= 0.0) {
                  fVar29 = 0.0;
                }
                uStack_16c = *(undefined4 *)((longlong)unaff_RDI + -0x4c);
                fStack_158 = (float)*(undefined8 *)(lStack_180 + 0x40);
                fStack_154 = (float)((ulonglong)*(undefined8 *)(lStack_180 + 0x40) >> 0x20);
                fStack_150 = (float)lVar17;
                fStack_14c = (float)((ulonglong)lVar17 >> 0x20);
                pcStack_148 = pdb_140ade410;
                auStack_140 = (undefined1  [16])0x0;
                lStack_178 = lVar23;
                pdb_1428f4740(&fStack_158,fVar29);
                uVar20 = (ulonglong)(uint)auStack_140._8_4_;
                uVar9 = *(ulonglong *)(lStack_180 + 0x48);
                if (uVar9 <= uVar20) {
                    /* WARNING: Subroutine does not return */
                  pdb_142dc81f2(uVar20,uVar9,&UNK_14346bb80);
                }
                uVar2 = uVar20 + 1;
                if (uVar9 <= uVar2) {
                    /* WARNING: Subroutine does not return */
                  pdb_142dc81f2(uVar2,uVar9,&UNK_14346bb98);
                }
                uVar14 = auStack_140._12_4_;
                lVar17 = *(longlong *)(lStack_180 + 0x40);
                lVar26 = (uVar20 - 1) + (ulonglong)(uVar20 == 0);
                uVar3 = *(undefined8 *)(lVar17 + 8 + uVar20 * 0xc);
                fVar44 = (float)((ulonglong)uVar3 >> 0x20);
                fVar29 = *(float *)(lVar17 + 8 + uVar2 * 0xc);
                fVar31 = *(float *)(lVar17 + uVar20 * 0xc);
                fVar32 = fVar44 - *(float *)(lVar17 + lVar26 * 0xc);
                fVar42 = fVar29 - *(float *)(lVar17 + 8 + lVar26 * 0xc);
                fVar30 = _DAT_142e36f28 / SQRT(fVar42 * fVar42 + fVar32 * fVar32);
                *puStack_190 = uStack_114;
                uStack_1c8 = (longlong *)(ulonglong)*(uint *)(plStack_100 + -0xd);
                fStack_1a4 = *(float *)((longlong)plStack_100 + -0xc);
                puStack_1d8 = &UNK_1435b2ca8;
                uStack_1d0 = 0xf;
                plStack_108 = uStack_1c8;
                afStack_1c0[0] = fStack_1a4;
                uStack_230 = pdb_1428f9900(&puStack_1d8);
                fVar37 = (float)uVar14 * fVar29 + (float)uVar3 * (_DAT_142e36f28 - (float)uVar14);
                fVar38 = (_DAT_142e36f28 - (float)uVar14) * fVar31 + fVar44 * (float)uVar14;
                uVar16 = (uint)((int)fVar30 - 1U < 0x7fffff ||
                               (int)ABS(fVar30) - 0x800000U < 0x7f000000 && -1 < (int)fVar30);
                auVar43._0_4_ = (int)(uVar16 << 0x1f) >> 0x1f;
                auVar43._4_4_ = (int)(uVar16 << 0x1f) >> 0x1f;
                auVar43._8_4_ = (int)(uVar16 << 0x1f) >> 0x1f;
                auVar43._12_4_ = (int)(uVar16 << 0x1f) >> 0x1f;
                auVar4._4_4_ = fVar42 * fVar30;
                auVar4._0_4_ = fVar32 * fVar30;
                auVar4._8_8_ = 0;
                auVar43 = auVar43 & auVar4;
                fVar42 = auVar43._0_4_;
                fVar44 = auVar43._4_4_;
                fVar40 = fVar44 * _DAT_1435b2b20;
                fVar41 = fVar42 * _UNK_1435b2b24;
                fVar34 = fVar42 * _DAT_1435b2b30;
                fVar35 = fVar44 * _UNK_1435b2b34;
                fVar30 = fVar42 * _DAT_1435b2b40;
                fVar33 = fVar44 * _UNK_1435b2b44;
                uStack_1a0 = CONCAT44((fVar40 + fVar34) * _DAT_142e36f60 + fVar37 + fVar30,
                                      (fVar41 + fVar35) * _UNK_142e36f64 + fVar38 + fVar33);
                pdb_140df4540(&fStack_168,&uStack_1a0,uStack_16c);
                plStack_100 = (longlong *)
                              CONCAT71(plStack_100._1_7_,*(undefined *)((longlong)plStack_100 + -6))
                ;
                fStack_228 = 0.0;
                fStack_224 = 0.0;
                fStack_220 = (float)uStack_198;
                fVar29 = fStack_220;
                fStack_21c = (float)((ulonglong)uStack_198 >> 0x20);
                fVar31 = fStack_21c;
                fVar32 = SUB84(plStack_108,0);
                fVar39 = fVar42 * _DAT_142e37adc - (fVar44 + fVar44);
                fVar36 = fVar44 * _DAT_142e37adc + fVar34;
                uStack_110 = CONCAT44(fVar36,fVar39);
                fStack_218 = fVar32;
                pdb_140df4520(&fStack_158,&uStack_110);
                fVar42 = fStack_158 * _DAT_142e61230;
                fVar44 = fStack_154 * _UNK_142e61234;
                fStack_128 = fStack_150 * _DAT_142e36f38 + fStack_160;
                fStack_158 = 0.0;
                fStack_154 = 0.0;
                uStack_130 = CONCAT44(fStack_164 + fVar44,fStack_168 + fVar42);
                auStack_140._8_8_ = _DAT_1435b2b50;
                auStack_140._0_8_ = auVar43._0_8_;
                uStack_120 = 0;
                uVar8 = plStack_100._0_1_;
                unaff_RDI = (undefined8 *)((ulonglong)plStack_100 & 0xff);
                uStack_11f = plStack_100._0_1_;
                uStack_11e = 0xffff;
                uStack_11c = 0;
                fStack_150 = fVar29;
                fStack_14c = fVar31;
                fStack_124 = fVar32;
                pcStack_148._0_4_ = fVar32;
                pdb_1410cff30(uStack_188,uStack_230,&fStack_158);
                *puStack_190 = uStack_114;
                puStack_1d8 = &UNK_1435b2cb7;
                uStack_1d0 = 0xe;
                uStack_1c8 = plStack_108;
                afStack_1c0[0] = fStack_1a4;
                param_4 = (longlong *)pdb_1428f9900(&puStack_1d8);
                uStack_110 = CONCAT44(fVar30 + fVar37 + (fVar34 - fVar40) * _DAT_142e36f60,
                                      fVar33 + fVar38 + (fVar35 - fVar41) * _UNK_142e36f64);
                pdb_140df4540(&fStack_228,&uStack_110,uStack_16c);
                fStack_168 = fVar39;
                fStack_164 = fVar36;
                pdb_140df4520(&fStack_158,&fStack_168);
                fVar29 = fStack_158 * _UNK_14328a9a4;
                fVar31 = fStack_154 * _UNK_14328a9a8;
                fStack_128 = fStack_220 + fStack_150 * _UNK_14328a9ac;
                fStack_158 = 0.0;
                fStack_154 = 0.0;
                fStack_150 = (float)uStack_198;
                fStack_14c = (float)((ulonglong)uStack_198 >> 0x20);
                fStack_124 = SUB84(plStack_108,0);
                pcStack_148 = (code *)CONCAT44(pcStack_148._4_4_,fStack_124);
                auStack_140._8_4_ = 0x40800000;
                auStack_140._12_4_ = _DAT_1435b2b60 + _DAT_14300c770 * _DAT_14328a9a0;
                uStack_130 = CONCAT44(fStack_224 + fVar31,fStack_228 + fVar29);
                uStack_120 = 0;
                uStack_11f = uVar8;
                uStack_11e = 0xffff;
                uStack_11c = 0;
                pdb_1410cff30(uStack_188,param_4,&fStack_158);
                lVar23 = lStack_178;
              }
              else {
                if ((int)lVar17 != 1) {
                    /* WARNING: Subroutine does not return */
                  pdb_142dc83b0(&UNK_1435b2ce9,0x28,&UNK_1435b2d18);
                }
                plStack_108 = (longlong *)(ulonglong)*(uint *)(unaff_RDI + -0xd);
                lStack_178 = lVar23;
                cVar15 = pdb_140c45920(&uStack_250);
                if ((cVar15 == '\n') || (lVar23 = lStack_178, cVar15 == '\x05')) {
                  pdb_140c45ec0(&fStack_228,uStack_238,plStack_108,&UNK_1435b2cc8);
                  fVar32 = fStack_214 + _DAT_142e36f50;
                  fVar42 = fStack_218 + 0.0;
                  fVar44 = fStack_210 + 0.0;
                  fVar31 = fStack_224 * fStack_224 + fStack_228 * fStack_228;
                  fVar29 = fStack_220 * 0.0 + fStack_224 * 0.0 + fStack_228 * _DAT_142e36f28;
                  fVar29 = fVar29 + fVar29;
                  afStack_1c0[2] =
                       (fStack_21c + fStack_21c) * (fStack_224 * 0.0 - fStack_220 * _DAT_14300d230)
                       + fVar29 * fStack_228 +
                         (fStack_21c * fStack_21c - (fVar31 + fStack_220 * fStack_220)) *
                         _DAT_142e36f28;
                  afStack_1c0[3] =
                       (fStack_21c + fStack_21c) * (fStack_228 * 0.0 - fStack_224 * _UNK_14300d238)
                       + fVar29 * fStack_220 +
                         (fStack_21c * fStack_21c - (fVar31 + fStack_220 * fStack_220)) * 0.0;
                  uStack_1d0 = 2;
                  uStack_1c8 = (longlong *)CONCAT44(afStack_1c0[3],afStack_1c0[2]);
                  afStack_1c0[0] = 1.0;
                  afStack_1c0[1] = 0.0;
                  uStack_1b0 = 0x1bf800000;
                  puVar24 = (undefined *)0x0;
                  do {
                    puVar25 = puVar24 + 1;
                    uVar3 = (&uStack_1c8)[(longlong)puVar24 * 2];
                    fVar31 = (float)((ulonglong)uVar3 >> 0x20);
                    fVar29 = afStack_1c0[(longlong)puVar24 * 4];
                    fStack_158 = 219.1753;
                    fStack_154 = 1.4013e-45;
                    fStack_150 = 1.26117e-44;
                    fStack_14c = 0.0;
                    pcStack_148 = (code *)plStack_108;
                    auStack_140._4_4_ = *(undefined4 *)((longlong)plStack_100 + -0xc);
                    auStack_140._0_4_ = afStack_1c0[(longlong)puVar24 * 4 + 1];
                    puStack_1d8 = puVar25;
                    param_4 = (longlong *)pdb_1428f8cf0(&fStack_158);
                    uStack_1a0 = CONCAT44(fVar29 * fVar31 * _UNK_1435b2b04 * _UNK_142e36f64 + fVar44
                                          ,fVar29 * (float)uVar3 * _DAT_1435b2b00 * _DAT_142e36f60 +
                                           fVar42);
                    pdb_140df4540(&fStack_168,&uStack_1a0,fVar32);
                    uVar8 = *(undefined *)((longlong)plStack_100 + -6);
                    fVar29 = (float)uVar3 * fVar12;
                    fVar31 = fVar31 * fVar12;
                    uStack_110 = CONCAT44(fVar31 + fVar29,fVar29 - fVar31);
                    pdb_140df4520(&fStack_158,&uStack_110);
                    fVar29 = _DAT_14300c770 * _DAT_14328a9a0;
                    fVar31 = fStack_158 * _UNK_14328a9a4;
                    fVar30 = fStack_154 * _UNK_14328a9a8;
                    fStack_128 = fStack_160 + fStack_150 * _UNK_14328a9ac;
                    *puStack_190 = uStack_114;
                    fStack_158 = 0.0;
                    fStack_154 = 0.0;
                    fStack_150 = (float)uStack_198;
                    fStack_14c = (float)((ulonglong)uStack_198 >> 0x20);
                    fStack_124 = SUB84(plStack_108,0);
                    pcStack_148 = (code *)CONCAT44(pcStack_148._4_4_,fStack_124);
                    auStack_140._8_4_ = 0x3fc00000;
                    auStack_140._0_8_ = uVar3;
                    auStack_140._12_4_ = fVar13 + fVar29;
                    uStack_130 = CONCAT44(fStack_164 + fVar30,fStack_168 + fVar31);
                    uStack_120 = 1;
                    uStack_11e = 0xffff;
                    uStack_11c = 0;
                    uStack_11f = uVar8;
                    pdb_1410cff30(uStack_188,param_4,&fStack_158);
                    puVar24 = puVar25;
                  } while (puVar25 != (undefined *)0x2);
                  unaff_RDI = (undefined8 *)0x2;
                  lVar23 = lStack_178;
                }
              }
            }
          }
        }
      }
    }
    if (cStack_f1 == '\0') {
      return;
    }
    plVar19 = (longlong *)pdb_140e97000();
    if ((char)plVar19[0xd] != '\x01') goto LAB_1428ee72a;
    while( true ) {
      puVar28 = param_4;
      if (*plVar19 == 0) {
        *plVar19 = -1;
        plStack_100 = plVar19;
        pdb_140e95370(plVar19 + 1,pauVar21);
        *plStack_100 = *plStack_100 + 1;
        return;
      }
LAB_1428ee6ff:
      plVar19 = (longlong *)pdb_142dc8090(&UNK_14328b468);
LAB_1428ee70b:
      plVar19 = (longlong *)pdb_142e16b00(plVar19,0);
      param_4 = puVar28;
      if (plVar19 != (longlong *)0x0) break;
      do {
        plVar19 = (longlong *)pdb_142dc7890(&UNK_14328b3f8);
LAB_1428ee72a:
        plVar19 = (longlong *)pdb_142e16b00(plVar19,0);
      } while (plVar19 == (longlong *)0x0);
    }
  } while( true );
}

