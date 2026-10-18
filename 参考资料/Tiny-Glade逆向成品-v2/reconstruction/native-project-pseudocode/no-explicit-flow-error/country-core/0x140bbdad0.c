// VA 0x140bbdad0, PDB extent 2182 bytes
// country_core::resources::history::decorator_edit::send_state_diff_events<country_core::systems::history::replay_pop_bucket::replay_pop_bucket::closure_env$0>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/decorator_edit.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::history::decorator_edit::send_state_diff_events<country_core::systems::history::replay_pop_bucket::replay_pop_bucket::closure_env$0>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/decorator_edit.rs
   Extent: 2182 */

void pdb_140bbdad0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined1 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  longlong lVar12;
  undefined8 uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  undefined8 uVar17;
  uint uVar18;
  uint uVar19;
  undefined8 *puVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  ulonglong uVar26;
  uint uVar27;
  longlong lVar28;
  undefined1 (*pauVar29) [16];
  undefined1 (*pauVar30) [16];
  bool bVar31;
  longlong lStack_350;
  longlong lStack_348;
  longlong lStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  undefined8 uStack_2e0;
  longlong lStack_2d8;
  longlong lStack_2d0;
  longlong lStack_2c8;
  undefined8 uStack_2c0;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined8 uStack_278;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined1 uStack_268;
  undefined1 uStack_267;
  undefined1 uStack_266;
  undefined1 uStack_265;
  undefined1 uStack_264;
  undefined1 uStack_263;
  undefined1 uStack_262;
  undefined1 uStack_261;
  longlong lStack_260;
  longlong lStack_258;
  longlong lStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined8 uStack_228;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined4 uStack_1e8;
  longlong lStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined4 uStack_1c8;
  undefined1 uStack_1c4;
  undefined1 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  longlong lStack_160;
  undefined8 uStack_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 uStack_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined8 uStack_110;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined1 uStack_100;
  undefined1 uStack_ff;
  undefined1 uStack_fe;
  undefined1 uStack_fd;
  undefined1 uStack_fc;
  undefined1 uStack_fb;
  undefined1 uStack_fa;
  undefined1 uStack_f9;
  longlong lStack_f8;
  longlong lStack_f0;
  ulonglong uStack_e8;
  byte *pbStack_e0;
  undefined4 uStack_d4;
  longlong lStack_d0;
  longlong lStack_c8;
  undefined8 uStack_c0;
  longlong lStack_b8;
  undefined8 uStack_b0;
  ulonglong uStack_a8;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 uStack_88;
  undefined1 uStack_87;
  undefined1 uStack_86;
  undefined1 uStack_85;
  undefined1 uStack_84;
  undefined1 uStack_83;
  undefined1 uStack_82;
  undefined1 uStack_81;
  undefined8 uStack_80;
  
  uStack_80 = 0xfffffffffffffffe;
  pauVar30 = (undefined1 (*) [16])*param_1;
  lStack_f0 = param_1[1];
  auVar7 = *pauVar30;
  if (lStack_f0 == 0) {
    uStack_a8 = 0;
  }
  else {
    uVar26 = lStack_f0 * 0xf8 + 0x107U & 0xfffffffffffffff0;
    uStack_e8 = lStack_f0 + uVar26 + 0x11;
    pbStack_e0 = (byte *)((longlong)pauVar30 - uVar26);
    uStack_a8 = 0x10;
  }
  lStack_c8 = param_1[3];
  pauVar29 = pauVar30 + 1;
  uVar27 = ~(uint)(ushort)((ushort)(SUB161(auVar7 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar7 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar7 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar7 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar7 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar7 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar7 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auVar7 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auVar7 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(auVar7 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auVar7 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auVar7 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(auVar7 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar7 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar7 >> 0x77,0) & 1) << 0xe |
                          (ushort)(byte)(auVar7[0xf] >> 7) << 0xf);
  uStack_b0 = *param_2;
  while (bVar31 = lStack_c8 != 0, lStack_c8 = lStack_c8 + -1, bVar31) {
    if ((short)uVar27 == 0) {
      do {
        auVar7 = *pauVar29;
        pauVar30 = pauVar30 + -0xf8;
        pauVar29 = pauVar29 + 1;
        uVar27 = (ushort)((ushort)(SUB161(auVar7 >> 7,0) & 1) |
                          (ushort)(SUB161(auVar7 >> 0xf,0) & 1) << 1 |
                          (ushort)(SUB161(auVar7 >> 0x17,0) & 1) << 2 |
                          (ushort)(SUB161(auVar7 >> 0x1f,0) & 1) << 3 |
                          (ushort)(SUB161(auVar7 >> 0x27,0) & 1) << 4 |
                          (ushort)(SUB161(auVar7 >> 0x2f,0) & 1) << 5 |
                          (ushort)(SUB161(auVar7 >> 0x37,0) & 1) << 6 |
                          (ushort)(SUB161(auVar7 >> 0x3f,0) & 1) << 7 |
                          (ushort)(SUB161(auVar7 >> 0x47,0) & 1) << 8 |
                          (ushort)(SUB161(auVar7 >> 0x4f,0) & 1) << 9 |
                          (ushort)(SUB161(auVar7 >> 0x57,0) & 1) << 10 |
                          (ushort)(SUB161(auVar7 >> 0x5f,0) & 1) << 0xb |
                          (ushort)(SUB161(auVar7 >> 0x67,0) & 1) << 0xc |
                          (ushort)(SUB161(auVar7 >> 0x6f,0) & 1) << 0xd |
                          (ushort)(SUB161(auVar7 >> 0x77,0) & 1) << 0xe |
                         (ushort)(byte)(auVar7[0xf] >> 7) << 0xf) ^ 0xffff;
      } while (uVar27 == 0);
    }
    uVar18 = 0;
    for (uVar19 = uVar27; (uVar19 & 1) == 0; uVar19 = uVar19 >> 1 | 0x80000000) {
      uVar18 = uVar18 + 1;
    }
    lVar28 = (ulonglong)uVar18 * -0xf8;
    uStack_8c = *(undefined4 *)((longlong)pauVar30 + lVar28 + -0xf8);
    lStack_d0 = *(longlong *)((longlong)pauVar30 + lVar28 + -0xf0);
    lStack_b8 = *(longlong *)((longlong)pauVar30 + lVar28 + -0xe8);
    lVar12 = *(longlong *)((longlong)pauVar30 + lVar28 + -0xe0);
    uVar13 = *(undefined8 *)((longlong)pauVar30 + lVar28 + -0xd8);
    uStack_98 = *(undefined4 *)((longlong)pauVar30 + lVar28 + -0xd0);
    uStack_9c = *(undefined4 *)((longlong)pauVar30 + lVar28 + -0xcc);
    uStack_198 = *(undefined8 *)((longlong)pauVar30 + lVar28 + -0xa8);
    puVar3 = (undefined8 *)((longlong)pauVar30 + lVar28 + -0xb8);
    uVar21 = *puVar3;
    uVar22 = puVar3[1];
    puVar3 = (undefined8 *)((longlong)pauVar30 + lVar28 + -200);
    uVar23 = *puVar3;
    uVar24 = puVar3[1];
    uStack_94 = *(undefined4 *)((longlong)pauVar30 + lVar28 + -0xa0);
    uVar4 = *(undefined4 *)((longlong)pauVar30 + lVar28 + -0x98);
    uVar5 = *(undefined8 *)((longlong)pauVar30 + lVar28 + -0x90);
    uStack_84 = *(undefined1 *)((longlong)pauVar30 + lVar28 + -0x80);
    uStack_85 = *(undefined1 *)((longlong)pauVar30 + lVar28 + -0x7f);
    uStack_87 = *(undefined1 *)((longlong)pauVar30 + lVar28 + -0x7e);
    uStack_88 = *(undefined1 *)((longlong)pauVar30 + lVar28 + -0x7d);
    uVar8 = *(undefined1 *)((longlong)pauVar30 + lVar28 + -0x7c);
    uStack_86 = *(undefined1 *)((longlong)pauVar30 + lVar28 + -0x7b);
    uStack_82 = *(undefined1 *)((longlong)pauVar30 + lVar28 + -0x7a);
    uStack_83 = *(undefined1 *)((longlong)pauVar30 + lVar28 + -0x79);
    uVar9 = *(undefined4 *)((longlong)pauVar30 + lVar28 + -0x9c);
    uVar10 = *(undefined4 *)((longlong)pauVar30 + lVar28 + -0x94);
    uVar11 = *(undefined4 *)((longlong)pauVar30 + lVar28 + -0x88);
    uStack_90 = *(undefined4 *)((longlong)pauVar30 + lVar28 + -0x84);
    lVar14 = *(longlong *)((longlong)pauVar30 + lVar28 + -0x78);
    lVar15 = *(longlong *)((longlong)pauVar30 + lVar28 + -0x70);
    lVar16 = *(longlong *)((longlong)pauVar30 + lVar28 + -0x68);
    uVar17 = *(undefined8 *)((longlong)pauVar30 + lVar28 + -0x60);
    uStack_168 = *(undefined8 *)((longlong)pauVar30 + lVar28 + -0x30);
    puVar3 = (undefined8 *)((longlong)pauVar30 + lVar28 + -0x50);
    uStack_188 = *(undefined4 *)puVar3;
    uStack_184 = *(undefined4 *)((longlong)puVar3 + 4);
    puVar20 = puVar3 + 1;
    uStack_180 = *(undefined4 *)puVar20;
    uStack_17c = *(undefined4 *)((longlong)puVar3 + 0xc);
    puVar1 = (undefined8 *)((longlong)pauVar30 + lVar28 + -0x40);
    uVar6 = *puVar1;
    uVar25 = puVar1[1];
    uStack_1b8 = uVar23;
    uStack_1b0 = uVar24;
    uStack_1a8 = uVar21;
    uStack_1a0 = uVar22;
    uStack_178 = uVar6;
    uStack_170 = uVar25;
    uStack_c0 = uVar13;
    if (lStack_d0 == 4) break;
    uVar27 = uVar27 - 1 & uVar27;
    uStack_178._0_4_ = (undefined4)uVar6;
    uStack_178._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
    uStack_170._0_4_ = (undefined4)uVar25;
    uStack_170._4_4_ = (undefined4)((ulonglong)uVar25 >> 0x20);
    uStack_81 = uVar8;
    if (lStack_d0 == 3) {
      if (lVar14 == 3) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc83b0(&UNK_143062d60,0x28,&UNK_143062d88);
      }
      uStack_238 = (undefined4)uStack_178;
      uStack_234 = uStack_178._4_4_;
      uStack_230 = (undefined4)uStack_170;
      uStack_22c = uStack_170._4_4_;
      lStack_260 = 3;
      uStack_21c._0_2_ = CONCAT11(*(undefined1 *)((longlong)pauVar30 + lVar28 + -2),1);
      uStack_1c8 = 0;
      uStack_1d0 = 0;
      uStack_1c4 = 1;
      uStack_1c0 = 0;
      lStack_258 = lVar14;
      lStack_250 = lVar15;
      uStack_248 = *puVar3;
      uStack_240 = *puVar20;
      uStack_228 = uStack_168;
      uStack_220 = uStack_8c;
      lStack_1e0 = lVar16;
      uStack_1d8 = uVar17;
      pdb_140901740(uStack_b0,&lStack_260);
    }
    else {
      lStack_f8 = lVar12;
      if (lVar14 == 3) {
        uStack_1b8._0_4_ = (undefined4)uVar23;
        uStack_1b8._4_4_ = (undefined4)((ulonglong)uVar23 >> 0x20);
        uStack_1b0._0_4_ = (undefined4)uVar24;
        uStack_1b0._4_4_ = (undefined4)((ulonglong)uVar24 >> 0x20);
        uStack_1a8._0_4_ = (undefined4)uVar21;
        uStack_1a8._4_4_ = (undefined4)((ulonglong)uVar21 >> 0x20);
        uStack_1a0._0_4_ = (undefined4)uVar22;
        uStack_1a0._4_4_ = (undefined4)((ulonglong)uVar22 >> 0x20);
        uStack_138 = (undefined4)uStack_1a8;
        uStack_134 = uStack_1a8._4_4_;
        uStack_130 = (undefined4)uStack_1a0;
        uStack_12c = uStack_1a0._4_4_;
        uStack_148 = (undefined4)uStack_1b8;
        uStack_144 = uStack_1b8._4_4_;
        uStack_140 = (undefined4)uStack_1b0;
        uStack_13c = uStack_1b0._4_4_;
        lStack_160 = lVar12;
        uStack_158 = uVar13;
        uStack_150 = uStack_98;
        uStack_14c = uStack_9c;
        uStack_128 = uStack_198;
        uStack_120 = uStack_94;
        uStack_11c = uVar9;
        uStack_118 = uVar4;
        uStack_114 = uVar10;
        uStack_110 = uVar5;
        uStack_108 = uVar11;
        uStack_104 = uStack_90;
        uStack_100 = uStack_84;
        uStack_ff = uStack_85;
        uStack_fe = uStack_87;
        uStack_fd = uStack_88;
        uStack_fc = uVar8;
        uStack_fb = uStack_86;
        uStack_fa = uStack_82;
        uStack_f9 = uStack_83;
        pdb_140901a00(&uStack_248,&lStack_160);
        lStack_260 = 4;
        lStack_258 = lStack_d0;
        lStack_250 = lStack_b8;
        uStack_1e8 = uStack_8c;
        lStack_1e0 = lStack_f8;
        uStack_1c8 = 0;
        uStack_1d0 = 0;
        uStack_1c4 = 1;
        uStack_1c0 = 0;
        uStack_1d8 = uVar13;
        pdb_140901740(uStack_b0,&lStack_260);
      }
      else {
        uStack_300 = *(undefined8 *)((longlong)pauVar30 + lVar28 + -0x28);
        uStack_2f8 = *(undefined4 *)((longlong)pauVar30 + lVar28 + -0x20);
        puVar2 = (undefined4 *)((longlong)pauVar30 + lVar28 + -0x18);
        uStack_2f0 = *puVar2;
        uStack_2ec = puVar2[1];
        uVar6 = *(undefined8 *)((longlong)pauVar30 + lVar28 + -0x10);
        uStack_2e8 = (undefined4)uVar6;
        uStack_2e4 = (undefined4)((ulonglong)uVar6 >> 0x20);
        uStack_2e0 = *(undefined8 *)((longlong)pauVar30 + lVar28 + -8);
        uStack_2f4 = *(undefined4 *)((longlong)pauVar30 + lVar28 + -0x1c);
        uStack_318 = (undefined4)uStack_178;
        uStack_314 = uStack_178._4_4_;
        uStack_310 = (undefined4)uStack_170;
        uStack_30c = uStack_170._4_4_;
        lStack_350 = lVar14;
        lStack_348 = lVar15;
        lStack_340 = lVar16;
        uStack_338 = uVar17;
        uStack_330 = *(undefined8 *)((longlong)pauVar30 + lVar28 + -0x58);
        uStack_328 = *puVar3;
        uStack_320 = *puVar20;
        uStack_308 = uStack_168;
        lStack_2d8 = lStack_d0;
        lStack_2d0 = lStack_b8;
        lStack_2c8 = lVar12;
        uStack_2c0 = uVar13;
        uStack_2b8 = uStack_98;
        uStack_2b4 = uStack_9c;
        uStack_2b0 = uVar23;
        uStack_2a8 = uVar24;
        uStack_2a0 = uVar21;
        uStack_298 = uVar22;
        uStack_290 = uStack_198;
        uStack_288 = uStack_94;
        uStack_284 = uVar9;
        uStack_280 = uVar4;
        uStack_27c = uVar10;
        uStack_278 = uVar5;
        uStack_270 = uVar11;
        uStack_26c = uStack_90;
        uStack_268 = uStack_84;
        uStack_267 = uStack_85;
        uStack_266 = uStack_87;
        uStack_265 = uStack_88;
        uStack_264 = uVar8;
        uStack_263 = uStack_86;
        uStack_262 = uStack_82;
        uStack_261 = uStack_83;
        uStack_d4 = uStack_2f4;
        pdb_140c47270(&lStack_160,&lStack_2d8,&lStack_350);
        uStack_1f0 = CONCAT17(uStack_f9,
                              CONCAT16(uStack_fa,
                                       CONCAT15(uStack_fb,
                                                CONCAT14(uStack_fc,
                                                         CONCAT13(uStack_fd,
                                                                  CONCAT12(uStack_fe,
                                                                           CONCAT11(uStack_ff,
                                                                                    uStack_100))))))
                             );
        uStack_1f8 = CONCAT44(uStack_104,uStack_108);
        uStack_200 = uStack_110;
        uStack_210 = CONCAT44(uStack_11c,uStack_120);
        uStack_208 = CONCAT44(uStack_114,uStack_118);
        uStack_220 = uStack_130;
        uStack_21c = uStack_12c;
        uStack_218 = (undefined4)uStack_128;
        uStack_214 = uStack_128._4_4_;
        uStack_230 = uStack_140;
        uStack_22c = uStack_13c;
        uStack_228 = CONCAT44(uStack_134,uStack_138);
        uStack_240 = CONCAT44(uStack_14c,uStack_150);
        uStack_238 = uStack_148;
        uStack_234 = uStack_144;
        lStack_250 = lStack_160;
        uStack_248 = uStack_158;
        lStack_260 = lStack_d0;
        lStack_258 = lStack_b8;
        uStack_1e8 = uStack_8c;
        lStack_1e0 = lStack_f8;
        uStack_1d8 = uStack_c0;
        uStack_1c8 = 0;
        uStack_1d0 = 0;
        uStack_1c4 = 1;
        uStack_1c0 = 0;
        pdb_140901740(uStack_b0,&lStack_260);
      }
    }
  }
  if ((lStack_f0 != 0) && (uStack_e8 != 0)) {
    pub_1406abac0(pbStack_e0,uStack_e8,uStack_a8);
  }
  return;
}

