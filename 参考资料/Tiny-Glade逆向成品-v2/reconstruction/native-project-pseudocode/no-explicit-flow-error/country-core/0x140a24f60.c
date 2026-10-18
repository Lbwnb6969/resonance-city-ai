// VA 0x140a24f60, PDB extent 9315 bytes
// country_core::systems::render_loop::session_selection::render_session_selection_previews
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/session_selection/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::render_loop::session_selection::render_session_selection_previews
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/session_selection/mod.rs
   Extent: 9315 */

void pdb_140a24f60(longlong param_1,longlong param_2,longlong param_3)

{
  byte *pbVar1;
  char *pcVar2;
  ulonglong *puVar3;
  byte bVar4;
  uint *puVar5;
  undefined1 auVar6 [16];
  code *pcVar7;
  uint uVar8;
  uint uVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  byte *******pppppppbVar15;
  byte *******pppppppbVar16;
  char cVar17;
  int iVar18;
  longlong lVar19;
  longlong *plVar20;
  byte *******pppppppbVar21;
  undefined8 uVar22;
  undefined8 *puVar23;
  uint uVar24;
  ulonglong uVar25;
  undefined8 uVar26;
  longlong *plVar27;
  longlong *plVar28;
  longlong lVar29;
  ulonglong uVar30;
  ushort uVar31;
  ulonglong uVar32;
  byte *******pppppppbVar33;
  byte ******ppppppbVar34;
  longlong lVar35;
  bool bVar36;
  float fVar37;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  byte *****pppppbStack_3b8;
  byte *****pppppbStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  uint uStack_388;
  ulonglong uStack_378;
  byte *******pppppppbStack_370;
  byte *******pppppppbStack_368;
  byte *****pppppbStack_358;
  byte *****pppppbStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  uint uStack_328;
  byte *******pppppppbStack_320;
  byte *******pppppppbStack_318;
  byte *******pppppppbStack_310;
  byte *******pppppppbStack_308;
  byte *******pppppppbStack_300;
  longlong *plStack_2f8;
  ulonglong uStack_2f0;
  ulonglong uStack_2e8;
  longlong lStack_2e0;
  longlong lStack_2d8;
  uint *puStack_2d0;
  byte *******pppppppbStack_2c8;
  undefined8 uStack_2c0;
  byte *******apppppppbStack_2b8 [4];
  byte *******pppppppbStack_298;
  byte *******pppppppbStack_290;
  longlong lStack_288;
  byte *******pppppppbStack_280;
  longlong lStack_278;
  longlong lStack_270;
  byte *******pppppppbStack_268;
  byte *******pppppppbStack_260;
  byte *******pppppppbStack_258;
  byte *******pppppppbStack_250;
  byte *******pppppppbStack_248;
  byte *******pppppppbStack_240;
  undefined *puStack_238;
  char cStack_230;
  char cStack_22f;
  undefined6 uStack_22e;
  undefined8 uStack_220;
  undefined8 uStack_218;
  byte ******ppppppbStack_210;
  byte *******pppppppbStack_208;
  byte *******pppppppbStack_200;
  byte bStack_1f8;
  undefined7 uStack_1f7;
  byte *******pppppppbStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  char cStack_1d0;
  char cStack_1cf;
  undefined6 uStack_1ce;
  ulonglong uStack_1c0;
  ulonglong uStack_1b8;
  ulonglong uStack_1b0;
  byte *******pppppppbStack_1a8;
  ulonglong uStack_1a0;
  byte *******pppppppbStack_198;
  byte *******pppppppbStack_190;
  byte *******pppppppbStack_188;
  byte *******pppppppbStack_180;
  byte *******pppppppbStack_178;
  byte *******pppppppbStack_170;
  undefined *puStack_168;
  byte *******pppppppbStack_160;
  undefined *puStack_158;
  byte *******pppppppbStack_150;
  byte *******pppppppbStack_148;
  byte *******pppppppbStack_140;
  undefined1 auStack_138 [16];
  undefined1 auStack_128 [16];
  undefined1 auStack_118 [16];
  undefined *puStack_108;
  byte *******pppppppbStack_100;
  undefined *puStack_f8;
  byte *******pppppppbStack_e8;
  longlong lStack_e0;
  undefined8 uStack_d8;
  byte *******pppppppbStack_d0;
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [16];
  byte *******pppppppbStack_a8;
  byte *******pppppppbStack_a0;
  undefined *puStack_98;
  byte *******pppppppbStack_90;
  byte *******pppppppbStack_88;
  byte *******pppppppbStack_80;
  undefined1 uStack_74;
  undefined1 uStack_73;
  undefined1 uStack_72;
  undefined1 uStack_71;
  undefined8 uStack_70;
  
  uStack_70 = 0xfffffffffffffffe;
  if (*(longlong *)(param_2 + 0x88) != 0) {
    lVar19 = *(longlong *)(param_2 + 0x70);
    uVar25 = 0xf1335775cdf5bf9c;
    lVar29 = 0;
    while( true ) {
      uVar25 = uVar25 & *(ulonglong *)(param_2 + 0x78);
      auVar38 = *(undefined1 (*) [16])(lVar19 + uVar25);
      auVar43[0] = -(auVar38[0] == DAT_142e34070);
      auVar43[1] = -(auVar38[1] == DAT_142e34070._1_1_);
      auVar43[2] = -(auVar38[2] == DAT_142e34070._2_1_);
      auVar43[3] = -(auVar38[3] == DAT_142e34070._3_1_);
      auVar43[4] = -(auVar38[4] == DAT_142e34070._4_1_);
      auVar43[5] = -(auVar38[5] == DAT_142e34070._5_1_);
      auVar43[6] = -(auVar38[6] == DAT_142e34070._6_1_);
      auVar43[7] = -(auVar38[7] == DAT_142e34070._7_1_);
      auVar43[8] = -(auVar38[8] == DAT_142e34070._8_1_);
      auVar43[9] = -(auVar38[9] == DAT_142e34070._9_1_);
      auVar43[10] = -(auVar38[10] == DAT_142e34070._10_1_);
      auVar43[0xb] = -(auVar38[0xb] == DAT_142e34070._11_1_);
      auVar43[0xc] = -(auVar38[0xc] == DAT_142e34070._12_1_);
      auVar43[0xd] = -(auVar38[0xd] == DAT_142e34070._13_1_);
      auVar43[0xe] = -(auVar38[0xe] == DAT_142e34070._14_1_);
      auVar43[0xf] = -(auVar38[0xf] == DAT_142e34070._15_1_);
      uVar31 = (ushort)(SUB161(auVar43 >> 7,0) & 1) | (ushort)(SUB161(auVar43 >> 0xf,0) & 1) << 1 |
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
               (ushort)(SUB161(auVar43 >> 0x77,0) & 1) << 0xe | (ushort)(auVar43[0xf] >> 7) << 0xf;
      uVar24 = (uint)uVar31;
      while (uVar31 != 0) {
        uVar8 = 0;
        for (uVar9 = uVar24; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
          uVar8 = uVar8 + 1;
        }
        uVar32 = uVar8 + uVar25 & *(ulonglong *)(param_2 + 0x78);
        pcVar2 = (char *)(lVar19 + -0x18 + uVar32 * -0x18);
        auVar44[0] = -(*pcVar2 == DAT_142e34080);
        auVar44[1] = -(pcVar2[1] == DAT_142e34080._1_1_);
        auVar44[2] = -(pcVar2[2] == DAT_142e34080._2_1_);
        auVar44[3] = -(pcVar2[3] == DAT_142e34080._3_1_);
        auVar44[4] = -(pcVar2[4] == DAT_142e34080._4_1_);
        auVar44[5] = -(pcVar2[5] == DAT_142e34080._5_1_);
        auVar44[6] = -(pcVar2[6] == DAT_142e34080._6_1_);
        auVar44[7] = -(pcVar2[7] == DAT_142e34080._7_1_);
        auVar44[8] = -(pcVar2[8] == DAT_142e34080._8_1_);
        auVar44[9] = -(pcVar2[9] == DAT_142e34080._9_1_);
        auVar44[10] = -(pcVar2[10] == DAT_142e34080._10_1_);
        auVar44[0xb] = -(pcVar2[0xb] == DAT_142e34080._11_1_);
        auVar44[0xc] = -(pcVar2[0xc] == DAT_142e34080._12_1_);
        auVar44[0xd] = -(pcVar2[0xd] == DAT_142e34080._13_1_);
        auVar44[0xe] = -(pcVar2[0xe] == DAT_142e34080._14_1_);
        auVar44[0xf] = -(pcVar2[0xf] == DAT_142e34080._15_1_);
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
                    (ushort)(auVar44[0xf] >> 7) << 0xf) == 0xffff) {
          uVar25 = *(ulonglong *)(lVar19 + uVar32 * -0x18 + -8);
          if ((*(ulonglong *)(param_2 + 0x210) <= uVar25) ||
             (uVar25 = *(ulonglong *)(*(longlong *)(param_2 + 0x208) + uVar25 * 8), uVar25 == 0))
          goto LAB_140a251ac;
          lVar19 = ~uVar25 * 0x40;
          if (*(longlong *)(*(longlong *)(param_2 + 0x1d8) + 0x20 + lVar19) == 0)
          goto LAB_140a251ac;
          puVar5 = *(uint **)(*(longlong *)(param_2 + 0x1d8) + lVar19 + 0x10);
          if (1 < *puVar5) {
            return;
          }
          lVar29 = *(longlong *)(puVar5 + 0x18);
          lVar19 = lVar29 + 0x10;
          LOCK();
          bVar36 = *(char *)(lVar29 + 0x10) == '\0';
          if (bVar36) {
            *(char *)(lVar29 + 0x10) = '\x01';
          }
          UNLOCK();
          lStack_278 = param_3;
          if (!bVar36) {
            pdb_142dbd1a0(lVar19);
          }
          pdb_140e9a150(lVar19);
          uStack_328 = *(uint *)(lVar29 + 0x44);
          pppppbStack_358 = *(byte ******)(lVar29 + 0x14);
          pppppbStack_350 = *(byte ******)(lVar29 + 0x1c);
          uStack_348 = *(undefined8 *)(lVar29 + 0x24);
          uStack_340 = *(undefined8 *)(lVar29 + 0x2c);
          uStack_338 = *(undefined8 *)(lVar29 + 0x34);
          uStack_330 = *(undefined8 *)(lVar29 + 0x3c);
          pdb_140e9a350();
          LOCK();
          bVar36 = *(char *)(lVar29 + 0x10) == '\x01';
          if (bVar36) {
            *(char *)(lVar29 + 0x10) = '\0';
          }
          UNLOCK();
          if (bVar36) {
            lVar19 = *(longlong *)(param_2 + 0x88);
          }
          else {
            pdb_142dbcef0(lVar19,0);
            lVar19 = *(longlong *)(param_2 + 0x88);
          }
          if (lVar19 == 0) goto LAB_140a26aaf;
          lVar19 = *(longlong *)(param_2 + 0x70);
          uVar25 = 0x77116106398ffa6a;
          lVar29 = 0;
          goto LAB_140a2513b;
        }
        uVar31 = (ushort)(uVar24 - 1) & (ushort)uVar24;
        uVar24 = CONCAT22((short)(uVar24 - 1 >> 0x10),uVar31);
      }
      auVar39[0] = -(auVar38[0] == -1);
      auVar39[1] = -(auVar38[1] == -1);
      auVar39[2] = -(auVar38[2] == -1);
      auVar39[3] = -(auVar38[3] == -1);
      auVar39[4] = -(auVar38[4] == -1);
      auVar39[5] = -(auVar38[5] == -1);
      auVar39[6] = -(auVar38[6] == -1);
      auVar39[7] = -(auVar38[7] == -1);
      auVar39[8] = -(auVar38[8] == -1);
      auVar39[9] = -(auVar38[9] == -1);
      auVar39[10] = -(auVar38[10] == -1);
      auVar39[0xb] = -(auVar38[0xb] == -1);
      auVar39[0xc] = -(auVar38[0xc] == -1);
      auVar39[0xd] = -(auVar38[0xd] == -1);
      auVar39[0xe] = -(auVar38[0xe] == -1);
      auVar39[0xf] = -(auVar38[0xf] == -1);
      if ((((((((((((((((SUB161(auVar39 >> 7,0) & 1) != 0 || (SUB161(auVar39 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar39 >> 0x17,0) & 1) != 0) || (SUB161(auVar39 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar39 >> 0x27,0) & 1) != 0) || (SUB161(auVar39 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar39 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar39 >> 0x3f,0) & 1) != 0) || (SUB161(auVar39 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar39 >> 0x4f,0) & 1) != 0) || (SUB161(auVar39 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar39 >> 0x5f,0) & 1) != 0) || (SUB161(auVar39 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar39 >> 0x6f,0) & 1) != 0) || (SUB161(auVar39 >> 0x77,0) & 1) != 0) ||
          auVar39[0xf] < '\0') break;
      uVar25 = uVar25 + lVar29 + 0x10;
      lVar29 = lVar29 + 0x10;
    }
  }
LAB_140a251ac:
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_1430391a8);
LAB_140a2513b:
  uVar25 = uVar25 & *(ulonglong *)(param_2 + 0x78);
  auVar38 = *(undefined1 (*) [16])(lVar19 + uVar25);
  auVar45[0] = -(auVar38[0] == DAT_142e34220);
  auVar45[1] = -(auVar38[1] == DAT_142e34220._1_1_);
  auVar45[2] = -(auVar38[2] == DAT_142e34220._2_1_);
  auVar45[3] = -(auVar38[3] == DAT_142e34220._3_1_);
  auVar45[4] = -(auVar38[4] == DAT_142e34220._4_1_);
  auVar45[5] = -(auVar38[5] == DAT_142e34220._5_1_);
  auVar45[6] = -(auVar38[6] == DAT_142e34220._6_1_);
  auVar45[7] = -(auVar38[7] == DAT_142e34220._7_1_);
  auVar45[8] = -(auVar38[8] == DAT_142e34220._8_1_);
  auVar45[9] = -(auVar38[9] == DAT_142e34220._9_1_);
  auVar45[10] = -(auVar38[10] == DAT_142e34220._10_1_);
  auVar45[0xb] = -(auVar38[0xb] == DAT_142e34220._11_1_);
  auVar45[0xc] = -(auVar38[0xc] == DAT_142e34220._12_1_);
  auVar45[0xd] = -(auVar38[0xd] == DAT_142e34220._13_1_);
  auVar45[0xe] = -(auVar38[0xe] == DAT_142e34220._14_1_);
  auVar45[0xf] = -(auVar38[0xf] == DAT_142e34220._15_1_);
  uVar31 = (ushort)(SUB161(auVar45 >> 7,0) & 1) | (ushort)(SUB161(auVar45 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar45 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar45 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar45 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar45 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar45 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar45 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar45 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar45 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar45 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar45 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar45 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar45 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar45 >> 0x77,0) & 1) << 0xe | (ushort)(auVar45[0xf] >> 7) << 0xf;
  uVar24 = (uint)uVar31;
  while (uVar31 != 0) {
    uVar8 = 0;
    for (uVar9 = uVar24; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
      uVar8 = uVar8 + 1;
    }
    uVar32 = uVar8 + uVar25 & *(ulonglong *)(param_2 + 0x78);
    pcVar2 = (char *)(lVar19 + -0x18 + uVar32 * -0x18);
    auVar46[0] = -(*pcVar2 == DAT_142e646e0);
    auVar46[1] = -(pcVar2[1] == DAT_142e646e0._1_1_);
    auVar46[2] = -(pcVar2[2] == DAT_142e646e0._2_1_);
    auVar46[3] = -(pcVar2[3] == DAT_142e646e0._3_1_);
    auVar46[4] = -(pcVar2[4] == DAT_142e646e0._4_1_);
    auVar46[5] = -(pcVar2[5] == DAT_142e646e0._5_1_);
    auVar46[6] = -(pcVar2[6] == DAT_142e646e0._6_1_);
    auVar46[7] = -(pcVar2[7] == DAT_142e646e0._7_1_);
    auVar46[8] = -(pcVar2[8] == DAT_142e646e0._8_1_);
    auVar46[9] = -(pcVar2[9] == DAT_142e646e0._9_1_);
    auVar46[10] = -(pcVar2[10] == DAT_142e646e0._10_1_);
    auVar46[0xb] = -(pcVar2[0xb] == DAT_142e646e0._11_1_);
    auVar46[0xc] = -(pcVar2[0xc] == DAT_142e646e0._12_1_);
    auVar46[0xd] = -(pcVar2[0xd] == DAT_142e646e0._13_1_);
    auVar46[0xe] = -(pcVar2[0xe] == DAT_142e646e0._14_1_);
    auVar46[0xf] = -(pcVar2[0xf] == DAT_142e646e0._15_1_);
    if ((ushort)((ushort)(SUB161(auVar46 >> 7,0) & 1) | (ushort)(SUB161(auVar46 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar46 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar46 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar46 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar46 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar46 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar46 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar46 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar46 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar46 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar46 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar46 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar46 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar46 >> 0x77,0) & 1) << 0xe | (ushort)(auVar46[0xf] >> 7) << 0xf
                ) == 0xffff) {
      uVar25 = *(ulonglong *)(lVar19 + uVar32 * -0x18 + -8);
      if ((*(ulonglong *)(param_2 + 0x210) <= uVar25) ||
         (uVar25 = *(ulonglong *)(*(longlong *)(param_2 + 0x208) + uVar25 * 8), uVar25 == 0))
      goto LAB_140a26aaf;
      lVar19 = ~uVar25 * 0x40;
      if (*(longlong *)(*(longlong *)(param_2 + 0x1d8) + 0x20 + lVar19) == 0) goto LAB_140a26aaf;
      uVar26 = 0;
      if (SBORROW8(0,*(longlong *)(puVar5 + 0xc))) {
        lVar19 = *(longlong *)(*(longlong *)(param_2 + 0x1d8) + lVar19 + 0x10);
        ppppppbStack_210 = *(byte *******)(lVar19 + 8);
        uVar25 = *(ulonglong *)(lVar19 + 0x10);
        uStack_220 = pdb_140dc74f0();
      }
      else {
        ppppppbStack_210 = *(byte *******)(puVar5 + 0xe);
        uVar25 = *(ulonglong *)(puVar5 + 0x10);
        uStack_220 = pdb_140dc6750();
      }
      uStack_218 = uVar26;
      if (*(longlong *)(param_2 + 0x88) == 0) goto LAB_140a25b4b;
      lVar19 = *(longlong *)(param_2 + 0x70);
      uVar32 = 0xbe68f1aa4bc54abf;
      lVar29 = 0;
      goto LAB_140a25279;
    }
    uVar31 = (ushort)(uVar24 - 1) & (ushort)uVar24;
    uVar24 = CONCAT22((short)(uVar24 - 1 >> 0x10),uVar31);
  }
  goto LAB_140a2518d;
LAB_140a25279:
  uVar32 = uVar32 & *(ulonglong *)(param_2 + 0x78);
  auVar38 = *(undefined1 (*) [16])(lVar19 + uVar32);
  auVar47[0] = -(auVar38[0] == DAT_142e34e50);
  auVar47[1] = -(auVar38[1] == DAT_142e34e50._1_1_);
  auVar47[2] = -(auVar38[2] == DAT_142e34e50._2_1_);
  auVar47[3] = -(auVar38[3] == DAT_142e34e50._3_1_);
  auVar47[4] = -(auVar38[4] == DAT_142e34e50._4_1_);
  auVar47[5] = -(auVar38[5] == DAT_142e34e50._5_1_);
  auVar47[6] = -(auVar38[6] == DAT_142e34e50._6_1_);
  auVar47[7] = -(auVar38[7] == DAT_142e34e50._7_1_);
  auVar47[8] = -(auVar38[8] == DAT_142e34e50._8_1_);
  auVar47[9] = -(auVar38[9] == DAT_142e34e50._9_1_);
  auVar47[10] = -(auVar38[10] == DAT_142e34e50._10_1_);
  auVar47[0xb] = -(auVar38[0xb] == DAT_142e34e50._11_1_);
  auVar47[0xc] = -(auVar38[0xc] == DAT_142e34e50._12_1_);
  auVar47[0xd] = -(auVar38[0xd] == DAT_142e34e50._13_1_);
  auVar47[0xe] = -(auVar38[0xe] == DAT_142e34e50._14_1_);
  auVar47[0xf] = -(auVar38[0xf] == DAT_142e34e50._15_1_);
  uVar31 = (ushort)(SUB161(auVar47 >> 7,0) & 1) | (ushort)(SUB161(auVar47 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar47 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar47 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar47 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar47 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar47 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar47 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar47 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar47 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar47 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar47 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar47 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar47 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar47 >> 0x77,0) & 1) << 0xe | (ushort)(auVar47[0xf] >> 7) << 0xf;
  uVar24 = (uint)uVar31;
  while( true ) {
    if (uVar31 == 0) goto LAB_140a252cb;
    uVar8 = 0;
    for (uVar9 = uVar24; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
      uVar8 = uVar8 + 1;
    }
    uVar30 = uVar8 + uVar32 & *(ulonglong *)(param_2 + 0x78);
    pcVar2 = (char *)(lVar19 + -0x18 + uVar30 * -0x18);
    auVar48[0] = -(*pcVar2 == DAT_143031160);
    auVar48[1] = -(pcVar2[1] == UNK_143031161);
    auVar48[2] = -(pcVar2[2] == UNK_143031162);
    auVar48[3] = -(pcVar2[3] == UNK_143031163);
    auVar48[4] = -(pcVar2[4] == UNK_143031164);
    auVar48[5] = -(pcVar2[5] == UNK_143031165);
    auVar48[6] = -(pcVar2[6] == UNK_143031166);
    auVar48[7] = -(pcVar2[7] == UNK_143031167);
    auVar48[8] = -(pcVar2[8] == UNK_143031168);
    auVar48[9] = -(pcVar2[9] == UNK_143031169);
    auVar48[10] = -(pcVar2[10] == UNK_14303116a);
    auVar48[0xb] = -(pcVar2[0xb] == UNK_14303116b);
    auVar48[0xc] = -(pcVar2[0xc] == UNK_14303116c);
    auVar48[0xd] = -(pcVar2[0xd] == UNK_14303116d);
    auVar48[0xe] = -(pcVar2[0xe] == UNK_14303116e);
    auVar48[0xf] = -(pcVar2[0xf] == UNK_14303116f);
    if ((ushort)((ushort)(SUB161(auVar48 >> 7,0) & 1) | (ushort)(SUB161(auVar48 >> 0xf,0) & 1) << 1
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
                ) == 0xffff) break;
    uVar31 = (ushort)(uVar24 - 1) & (ushort)uVar24;
    uVar24 = CONCAT22((short)(uVar24 - 1 >> 0x10),uVar31);
  }
  uVar32 = *(ulonglong *)(lVar19 + uVar30 * -0x18 + -8);
  if ((*(ulonglong *)(param_2 + 0x210) <= uVar32) ||
     (uVar32 = *(ulonglong *)(*(longlong *)(param_2 + 0x208) + uVar32 * 8), uVar32 == 0))
  goto LAB_140a25b4b;
  lVar19 = ~uVar32 * 0x40;
  if (*(longlong *)(*(longlong *)(param_2 + 0x1d8) + 0x20 + lVar19) == 0) goto LAB_140a25b4b;
  lVar19 = *(longlong *)(param_2 + 0x1d8) + lVar19;
  lVar29 = *(longlong *)(lVar19 + 0x10);
  *(undefined4 *)(lVar19 + 0x3c) = *(undefined4 *)(param_2 + 0x5a8);
  uStack_2c0 = *(undefined8 *)(param_1 + 0x1e8);
  uStack_388 = uStack_328;
  uStack_398 = uStack_338;
  uVar26 = uStack_398;
  uStack_390 = uStack_330;
  uVar22 = uStack_390;
  uStack_3a8 = uStack_348;
  uStack_3a0 = uStack_340;
  pppppbStack_3b8 = pppppbStack_358;
  pppppbStack_3b0 = pppppbStack_350;
  uStack_390._4_4_ = (int)((ulonglong)uStack_330 >> 0x20);
  bVar36 = uStack_390._4_4_ != 1;
  uStack_390 = uVar22;
  lStack_270 = lVar29;
  if (bVar36) goto LAB_140a26ad5;
  if ((uStack_328 & 1) == 0) goto LAB_140a26b03;
  uVar32 = *(ulonglong *)(lVar29 + 0x10);
  uStack_398._0_4_ = (float)uStack_338;
  fVar37 = 0.0;
  if (0.0 <= (float)uStack_398) {
    fVar37 = (float)uStack_398;
  }
  fVar10 = (float)(longlong)uVar25;
  if (fVar37 <= (float)(longlong)uVar25) {
    fVar10 = fVar37;
  }
  uStack_398 = uVar26;
  lStack_2e0 = param_2;
  auVar38._0_8_ =
       pub_142e32b00((fVar10 - (float)(longlong)uVar32 * _DAT_142e36f50) + _DAT_142e36f50);
  auVar38._8_8_ = extraout_XMM0_Qb;
  if ((float)auVar38._0_8_ <= 0.0) {
    auVar11._12_4_ = 0;
    auVar11._0_12_ = auVar38._4_12_;
    auVar38 = auVar11 << 0x20;
  }
  fVar37 = auVar38._0_4_;
  uVar30 = (longlong)(fVar37 - _DAT_142e36f2c) & (longlong)fVar37 >> 0x3f | (longlong)fVar37;
  if (fVar37 < 0.0) {
    uVar30 = 0;
  }
  uStack_1b8 = 0xffffffffffffffff;
  if (fVar37 <= _DAT_142e36f30) {
    uStack_1b8 = uVar30;
  }
  uStack_2f0 = uStack_1b8 + uVar32;
  uStack_1a0 = uStack_2f0;
  if (uVar25 < uStack_2f0) {
    uStack_1a0 = uVar25;
  }
  uStack_2e8 = uStack_1a0 - uStack_1b8;
  if (uStack_1a0 < uStack_1b8) {
    uStack_2e8 = 0;
  }
  uStack_1b0 = uVar25;
  uVar30 = 6;
  if (uVar25 < 6) {
    uVar30 = uVar25;
  }
  if (uVar30 < uStack_2e8) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_143038fe0,0x50,&UNK_143039030);
  }
  plVar28 = *(longlong **)(lVar29 + 8);
  pppppppbStack_e8 = (byte *******)0x0;
  uStack_d8._0_4_ = 0;
  uStack_d8._4_4_ = 0;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = auStack_c8._8_8_;
  auStack_c8 = auVar13 << 0x40;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = auStack_b8._8_8_;
  auStack_b8 = auVar14 << 0x40;
  pppppppbStack_a8 = (byte *******)0x0;
  puStack_98 = (undefined *)0x0;
  lVar19 = uVar32 * 0x38;
  plStack_2f8 = plVar28 + uVar32 * 7;
  if (uVar32 != 0) {
    auVar6._8_8_ = 0;
    auVar6._0_8_ = lVar19 - 0x38U >> 3;
    uVar24 = SUB164(auVar6 * ZEXT816(0x2492492492492493),8);
    plVar20 = plVar28;
    if ((~uVar24 & 7) != 0) {
      lVar29 = -(ulonglong)(uVar24 + 1 & 7);
      do {
        *(undefined1 *)(plVar20 + 6) = 0;
        plVar20 = plVar20 + 7;
        lVar29 = lVar29 + 1;
      } while (lVar29 != 0);
    }
    if (0x187 < lVar19 - 0x38U) {
      do {
        *(undefined1 *)(plVar20 + 6) = 0;
        *(undefined1 *)(plVar20 + 0xd) = 0;
        *(undefined1 *)(plVar20 + 0x14) = 0;
        *(undefined1 *)(plVar20 + 0x1b) = 0;
        *(undefined1 *)(plVar20 + 0x22) = 0;
        *(undefined1 *)(plVar20 + 0x29) = 0;
        *(undefined1 *)(plVar20 + 0x30) = 0;
        *(undefined1 *)(plVar20 + 0x37) = 0;
        plVar20 = plVar20 + 0x38;
      } while (plVar20 != plStack_2f8);
    }
  }
  pppppppbStack_2c8 = (byte *******)(uStack_1a0 - uStack_1b8);
  lStack_2d8 = param_1;
  puStack_2d0 = puVar5;
  if (uStack_1a0 < uStack_1b8) {
    pdb_142dc8420(uStack_1b8,uStack_1a0,uVar25,&UNK_143038f40);
LAB_140a26ad5:
    pdb_142deebf1(0,(longlong)&uStack_390 + 4,&UNK_143038fa8,&UNK_143038fac,9,&UNK_143038fc8);
LAB_140a26b03:
                    /* WARNING: Subroutine does not return */
    pdb_142dc83d0(&UNK_143038fac,9,&UNK_143038fb0);
  }
  lStack_288 = (longlong)ppppppbStack_210 + uStack_1b8 * 0x1c;
  pppppppbStack_1a8 = (byte *******)0x6;
  if (pppppppbStack_2c8 < (byte *******)0x6) {
    pppppppbStack_1a8 = pppppppbStack_2c8;
  }
  uStack_1c0 = uVar32;
  for (pppppppbVar33 = (byte *******)0x0; uVar25 = uStack_1c0, pppppppbVar33 < pppppppbStack_1a8;
      pppppppbVar33 = (byte *******)((longlong)pppppppbVar33 + 1)) {
    pppppppbStack_198 = (byte *******)0x0;
    pppppppbStack_190 = (byte *******)0x1;
    pppppppbStack_188 = (byte *******)0x0;
    auStack_138._0_8_ = 0x60000020;
    pppppppbStack_148 = (byte *******)&pppppppbStack_198;
    pppppppbStack_140 = (byte *******)&UNK_143039408;
    cVar17 = pdb_140eaccb0(lStack_288 + (longlong)pppppppbVar33 * 0x1c,&pppppppbStack_148);
    if (cVar17 != '\0') {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_143039438,0x37,&uStack_71,&UNK_1430394f8,&UNK_1430394e0);
    }
    pppppppbStack_80 = pppppppbStack_198;
    pppppppbStack_88 = pppppppbStack_190;
    pdb_140f3e9e0(&pppppppbStack_148,uStack_220,uStack_218,pppppppbStack_190,pppppppbStack_188);
    if (pppppppbStack_80 != (byte *******)0x0) {
      pub_1406abac0((byte *)pppppppbStack_88,(ulonglong)pppppppbStack_80,1);
    }
    pppppppbStack_80 = pppppppbStack_140;
    pdb_140f3e9e0(apppppppbStack_2b8,pppppppbStack_140,auStack_138._0_8_,&UNK_143038f98,0xe);
    if (pppppppbStack_148 != (byte *******)0x0) {
      pub_1406abac0((byte *)pppppppbStack_80,(ulonglong)pppppppbStack_148,1);
    }
    pppppppbVar15 = apppppppbStack_2b8[2];
    if (uVar25 != 0) {
      pppppppbStack_88 = (byte *******)(&pppppppbStack_e8 + (longlong)pppppppbVar33 * 2);
      pppppppbStack_80 = apppppppbStack_2b8[1];
      lVar29 = 0;
      ppppppbVar34 = (byte ******)0x0;
      do {
        if (!SBORROW8(0,*(longlong *)((longlong)plVar28 + lVar29))) {
          pdb_140f3ddd0(&pppppppbStack_268,*(undefined8 *)((longlong)plVar28 + lVar29 + 8),
                        *(undefined8 *)((longlong)plVar28 + lVar29 + 0x10));
          pdb_140f3ddd0(&pppppppbStack_208,pppppppbStack_80,pppppppbVar15);
          if (((((pppppppbStack_260 != pppppppbStack_200) || (cStack_230 != cStack_1d0)) ||
               (cStack_22f != '\x02')) ||
              ((cStack_1cf != '\x02' || (bStack_1f8 < 3 != (byte)pppppppbStack_258 < 3)))) ||
             (iVar18 = pub_142e32750(pppppppbStack_268,pppppppbStack_208), iVar18 != 0)) {
            pppppppbStack_160 = (byte *******)CONCAT62(uStack_22e,CONCAT11(cStack_22f,cStack_230));
            puStack_168 = puStack_238;
            pppppppbStack_178 = pppppppbStack_248;
            pppppppbStack_170 = pppppppbStack_240;
            pppppppbStack_188 = pppppppbStack_258;
            pppppppbStack_180 = pppppppbStack_250;
            pppppppbStack_198 = pppppppbStack_268;
            pppppppbStack_190 = pppppppbStack_260;
            auStack_138._1_7_ = uStack_1f7;
            auStack_138[0] = bStack_1f8;
            auStack_138._8_8_ = pppppppbStack_1f0;
            auStack_128._8_8_ = uStack_1e0;
            auStack_128._0_8_ = uStack_1e8;
            auStack_118[8] = cStack_1d0;
            auStack_118._0_8_ = uStack_1d8;
            auStack_118[9] = cStack_1cf;
            auStack_118._10_6_ = uStack_1ce;
            pppppppbStack_148 = pppppppbStack_208;
            pppppppbStack_140 = pppppppbStack_200;
            cVar17 = pdb_141b03d50(&pppppppbStack_198,&pppppppbStack_148);
            if (cVar17 == '\0') goto LAB_140a25740;
          }
          pppppppbVar15 = pppppppbStack_88;
          *(undefined1 *)((longlong)plVar28 + lVar29 + 0x30) = 1;
          *pppppppbStack_88 = (byte ******)0x1;
          pppppppbVar15[1] = ppppppbVar34;
          break;
        }
LAB_140a25740:
        ppppppbVar34 = (byte ******)((longlong)ppppppbVar34 + 1);
        lVar29 = lVar29 + 0x38;
      } while (lVar19 - lVar29 != 0);
    }
    if (apppppppbStack_2b8[0] != (byte *******)0x0) {
      pub_1406abac0((byte *)apppppppbStack_2b8[1],(ulonglong)apppppppbStack_2b8[0],1);
    }
  }
  pppppppbVar33 = (byte *******)0x0;
  while( true ) {
    pppppppbVar21 = pppppppbVar33;
    pppppppbVar16 = _DAT_143038a10;
    pppppppbVar15 = _UNK_143038a08;
    pppppppbVar33 = _DAT_143038a00;
    plVar20 = plVar28 + uVar32 * 7;
    if (pppppppbStack_1a8 <= pppppppbVar21) break;
    pppppppbVar33 = (byte *******)((longlong)pppppppbVar21 + 1);
    if ((&pppppppbStack_e8)[(longlong)pppppppbVar21 * 2] == (byte *******)0x0) {
      pppppppbStack_80 = pppppppbVar33;
      if (uStack_1c0 == 0) {
LAB_140a26b3f:
        pdb_142dc8110(&UNK_143038f70,0x10,&UNK_143038f80);
        goto LAB_140a26b58;
      }
      lVar35 = 0;
      lVar29 = 0;
      while (*(char *)((longlong)plVar28 + lVar35 + 0x30) != '\0') {
        lVar29 = lVar29 + 1;
        lVar35 = lVar35 + 0x38;
        if (lVar19 - lVar35 == 0) goto LAB_140a26b3f;
      }
      *(undefined1 *)((longlong)plVar28 + lVar35 + 0x30) = 1;
      pppppppbStack_198 = (byte *******)0x0;
      pppppppbStack_190 = (byte *******)0x1;
      pppppppbStack_188 = (byte *******)0x0;
      auStack_138._0_8_ = 0x60000020;
      pppppppbStack_148 = (byte *******)&pppppppbStack_198;
      pppppppbStack_140 = (byte *******)&UNK_143039408;
      cVar17 = pdb_140eaccb0(lStack_288 + (longlong)pppppppbVar21 * 0x1c,&pppppppbStack_148);
      if (cVar17 != '\0') goto LAB_140a26a07;
      pppppppbStack_88 = pppppppbStack_198;
      pppppppbStack_280 = pppppppbStack_190;
      pdb_140f3e9e0(&pppppppbStack_148,uStack_220,uStack_218,pppppppbStack_190,pppppppbStack_188);
      if (pppppppbStack_88 != (byte *******)0x0) {
        pub_1406abac0((byte *)pppppppbStack_280,(ulonglong)pppppppbStack_88,1);
      }
      pppppppbStack_88 = pppppppbStack_140;
      pdb_140f3e9e0(&pppppppbStack_198,pppppppbStack_140,auStack_138._0_8_,&UNK_143038f98,0xe);
      bStack_1f8 = (byte)pppppppbStack_188;
      uStack_1f7 = (undefined7)((ulonglong)pppppppbStack_188 >> 8);
      pppppppbStack_1f0 = pppppppbStack_180;
      pppppppbStack_208 = pppppppbStack_198;
      pppppppbStack_200 = pppppppbStack_190;
      uVar25 = *(ulonglong *)((longlong)plVar28 + lVar35);
      if ((!SBORROW8(0,uVar25)) && (uVar25 != 0)) {
        pub_1406abac0(*(byte **)((longlong)plVar28 + lVar35 + 8),uVar25,1);
      }
      auVar12._1_7_ = uStack_1f7;
      auVar12[0] = bStack_1f8;
      auVar12._8_8_ = pppppppbStack_1f0;
      *(undefined1 (*) [16])((longlong)plVar28 + lVar35 + 0x10) = auVar12;
      *(ulonglong *)((longlong)plVar28 + lVar35) = (ulonglong)pppppppbStack_208;
      *(byte ********)((longlong)plVar28 + lVar35 + 8) = pppppppbStack_200;
      *(undefined8 *)((longlong)plVar28 + lVar35 + 0x20) = 0x19db1ded53e8000;
      if (pppppppbStack_148 != (byte *******)0x0) {
        pub_1406abac0((byte *)pppppppbStack_88,(ulonglong)pppppppbStack_148,1);
      }
      (&pppppppbStack_e8)[(longlong)pppppppbVar21 * 2] = (byte *******)0x1;
      (&lStack_e0)[(longlong)pppppppbVar21 * 2] = lVar29;
      pppppppbVar33 = pppppppbStack_80;
    }
  }
  pppppppbStack_290 = (byte *******)0xffffffffffffffff;
  if (uStack_1b8 < uStack_1a0) {
    if ((char)pppppppbStack_e8 == '\0') {
LAB_140a26b33:
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_143038f58);
    }
    apppppppbStack_2b8[0] = (byte *******)lStack_e0;
    if (pppppppbStack_2c8 == (byte *******)0x1) {
      apppppppbStack_2b8[1] = (byte *******)0xffffffffffffffff;
      apppppppbStack_2b8[2] = (byte *******)0xffffffffffffffff;
LAB_140a25bcb:
      apppppppbStack_2b8[3] = (byte *******)0xffffffffffffffff;
    }
    else {
      if ((int)uStack_d8 != 1) goto LAB_140a26b33;
      apppppppbStack_2b8[1] = pppppppbStack_d0;
      if (pppppppbStack_2c8 == (byte *******)0x2) {
        apppppppbStack_2b8[2] = (byte *******)0xffffffffffffffff;
        goto LAB_140a25bcb;
      }
      if (auStack_c8._0_4_ != 1) goto LAB_140a26b33;
      apppppppbStack_2b8[2] = (byte *******)auStack_c8._8_8_;
      if (pppppppbStack_2c8 == (byte *******)0x3) goto LAB_140a25bcb;
      if (auStack_b8._0_4_ != 1) goto LAB_140a26b33;
      apppppppbStack_2b8[3] = (byte *******)auStack_b8._8_8_;
      if (pppppppbStack_2c8 != (byte *******)0x4) {
        if (((int)pppppppbStack_a8 != 1) ||
           ((pppppppbStack_298 = pppppppbStack_a0, pppppppbStack_2c8 != (byte *******)0x5 &&
            (pppppppbStack_290 = pppppppbStack_90, (int)puStack_98 != 1)))) goto LAB_140a26b33;
        goto LAB_140a25bd9;
      }
    }
    pppppppbStack_298 = (byte *******)0xffffffffffffffff;
  }
  else {
    apppppppbStack_2b8[0] = (byte *******)0xffffffffffffffff;
    apppppppbStack_2b8[1] = (byte *******)0xffffffffffffffff;
    apppppppbStack_2b8[2] = (byte *******)0xffffffffffffffff;
    apppppppbStack_2b8[3] = (byte *******)0xffffffffffffffff;
    pppppppbStack_298 = (byte *******)0xffffffffffffffff;
  }
LAB_140a25bd9:
  uVar25 = uStack_1b0;
  if (uStack_1b8 < uStack_1b0) {
    uVar25 = uStack_1b8;
  }
  if (uStack_2f0 <= uVar25) {
    uVar25 = uStack_2f0;
  }
  lVar19 = 0;
  while (uStack_1a0 * 8 + uVar25 * -8 != lVar19) {
    puVar3 = (ulonglong *)((longlong)apppppppbStack_2b8 + lVar19);
    lVar19 = lVar19 + 8;
    if (uStack_1c0 <= *puVar3) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc83b0(&UNK_143039110,0x2f,&UNK_143039140);
    }
  }
  pppppppbStack_88 = (byte *******)(apppppppbStack_2b8 + uStack_2e8);
LAB_140a25cc1:
  do {
    plVar27 = plVar28;
    if (plVar27 == plVar20) {
      pppppppbStack_e8 = (byte *******)apppppppbStack_2b8;
      lStack_e0 = (longlong)pppppppbStack_88;
      uStack_d8._0_4_ = (int)lStack_270;
      uStack_d8._4_4_ = (undefined4)((ulonglong)lStack_270 >> 0x20);
      pdb_1415fdc70(&pppppppbStack_148,&pppppppbStack_e8);
      lVar19 = lStack_2d8;
      auStack_138._8_8_ = uStack_1b8;
      auStack_128._0_8_ = uStack_1a0;
      pppppppbStack_320 =
           (byte *******)
           (ulonglong)
           (CONCAT24((short)((uint)*(undefined4 *)(lStack_278 + 8) >> 0x10),
                     *(undefined4 *)(lStack_278 + 8)) & 0xffff0000ffff);
      if (*(longlong *)(lStack_2e0 + 0x88) != 0) {
        lVar29 = *(longlong *)(lStack_2e0 + 0x70);
        uVar25 = 0x7057b4358e925fdb;
        lVar35 = 0;
        while( true ) {
          uVar25 = uVar25 & *(ulonglong *)(lStack_2e0 + 0x78);
          auVar38 = *(undefined1 (*) [16])(lVar29 + uVar25);
          auVar49[0] = -(auVar38[0] == DAT_142e33d90);
          auVar49[1] = -(auVar38[1] == DAT_142e33d90._1_1_);
          auVar49[2] = -(auVar38[2] == DAT_142e33d90._2_1_);
          auVar49[3] = -(auVar38[3] == DAT_142e33d90._3_1_);
          auVar49[4] = -(auVar38[4] == DAT_142e33d90._4_1_);
          auVar49[5] = -(auVar38[5] == DAT_142e33d90._5_1_);
          auVar49[6] = -(auVar38[6] == DAT_142e33d90._6_1_);
          auVar49[7] = -(auVar38[7] == DAT_142e33d90._7_1_);
          auVar49[8] = -(auVar38[8] == DAT_142e33d90._8_1_);
          auVar49[9] = -(auVar38[9] == DAT_142e33d90._9_1_);
          auVar49[10] = -(auVar38[10] == DAT_142e33d90._10_1_);
          auVar49[0xb] = -(auVar38[0xb] == DAT_142e33d90._11_1_);
          auVar49[0xc] = -(auVar38[0xc] == DAT_142e33d90._12_1_);
          auVar49[0xd] = -(auVar38[0xd] == DAT_142e33d90._13_1_);
          auVar49[0xe] = -(auVar38[0xe] == DAT_142e33d90._14_1_);
          auVar49[0xf] = -(auVar38[0xf] == DAT_142e33d90._15_1_);
          uVar31 = (ushort)(SUB161(auVar49 >> 7,0) & 1) |
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
                   (ushort)(auVar49[0xf] >> 7) << 0xf;
          uVar24 = (uint)uVar31;
          while (uVar31 != 0) {
            uVar8 = 0;
            for (uVar9 = uVar24; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
              uVar8 = uVar8 + 1;
            }
            uVar32 = uVar8 + uVar25 & *(ulonglong *)(lStack_2e0 + 0x78);
            pcVar2 = (char *)(lVar29 + -0x18 + uVar32 * -0x18);
            auVar50[0] = -(*pcVar2 == DAT_142e34350);
            auVar50[1] = -(pcVar2[1] == DAT_142e34350._1_1_);
            auVar50[2] = -(pcVar2[2] == DAT_142e34350._2_1_);
            auVar50[3] = -(pcVar2[3] == DAT_142e34350._3_1_);
            auVar50[4] = -(pcVar2[4] == DAT_142e34350._4_1_);
            auVar50[5] = -(pcVar2[5] == DAT_142e34350._5_1_);
            auVar50[6] = -(pcVar2[6] == DAT_142e34350._6_1_);
            auVar50[7] = -(pcVar2[7] == DAT_142e34350._7_1_);
            auVar50[8] = -(pcVar2[8] == DAT_142e34350._8_1_);
            auVar50[9] = -(pcVar2[9] == DAT_142e34350._9_1_);
            auVar50[10] = -(pcVar2[10] == DAT_142e34350._10_1_);
            auVar50[0xb] = -(pcVar2[0xb] == DAT_142e34350._11_1_);
            auVar50[0xc] = -(pcVar2[0xc] == DAT_142e34350._12_1_);
            auVar50[0xd] = -(pcVar2[0xd] == DAT_142e34350._13_1_);
            auVar50[0xe] = -(pcVar2[0xe] == DAT_142e34350._14_1_);
            auVar50[0xf] = -(pcVar2[0xf] == DAT_142e34350._15_1_);
            if ((ushort)((ushort)(SUB161(auVar50 >> 7,0) & 1) |
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
                        (ushort)(auVar50[0xf] >> 7) << 0xf) == 0xffff) {
              uVar25 = *(ulonglong *)(lVar29 + uVar32 * -0x18 + -8);
              if ((uVar25 < *(ulonglong *)(lStack_2e0 + 0x210)) &&
                 (uVar25 = *(ulonglong *)(*(longlong *)(lStack_2e0 + 0x208) + uVar25 * 8),
                 uVar25 != 0)) {
                lVar29 = ~uVar25 * 0x40;
                if (*(longlong *)(*(longlong *)(lStack_2e0 + 0x1d8) + 0x20 + lVar29) != 0) {
                  uVar26 = *(undefined8 *)(*(longlong *)(lStack_2e0 + 0x1d8) + lVar29 + 0x10);
                  uVar22 = pdb_140df4400(&UNK_143039208,0xc);
                  puVar23 = (undefined8 *)pdb_140a2e580(uVar26,uVar22);
                  pdb_140e1ea30(&pppppbStack_3b8,*puVar23,lVar19,0x23,&UNK_143330ab0);
                  lStack_e0 = (longlong)ppppppbStack_210 + uStack_1b0 * 0x1c;
                  pppppppbStack_e8 = (byte *******)ppppppbStack_210;
                  uStack_d8._0_4_ = 0;
                  uStack_d8._4_4_ = 0;
                  apppppppbStack_2b8[0] = (byte *******)&pppppbStack_3b8;
                  pppppppbStack_d0 = (byte *******)(auStack_138 + 8);
                  auStack_c8._0_8_ = &pppppppbStack_148;
                  pdb_1415f6880(&pppppppbStack_268,&pppppppbStack_e8);
                  lStack_e0 = (longlong)(pppppppbStack_260 + (longlong)pppppppbStack_258 * 2);
                  pppppppbStack_e8 = pppppppbStack_260;
                  uStack_d8._0_4_ = (int)lVar19;
                  uStack_d8._4_4_ = (undefined4)((ulonglong)lVar19 >> 0x20);
                  pdb_141602070(&pppppppbStack_208,&pppppppbStack_e8);
                  pppppppbStack_198 =
                       (byte *******)((ulonglong)pppppppbStack_198 & 0xffffffff00000000);
                  pppppppbStack_190 = (byte *******)lStack_278;
                  pppppppbStack_e8 = (byte *******)&pppppbStack_350;
                  lStack_e0 = (longlong)&uStack_348;
                  uStack_d8 = (byte *******)&uStack_340;
                  auStack_c8._8_8_ = puStack_2d0;
                  auStack_c8._0_8_ = &pppppppbStack_320;
                  auStack_b8._8_8_ = &pppppppbStack_208;
                  auStack_b8._0_8_ = &pppppppbStack_268;
                  pppppppbStack_a8 = (byte *******)apppppppbStack_2b8;
                  pppppppbStack_d0 = (byte *******)uVar26;
                  pdb_1417560e0(lVar19,&UNK_143039214,0x1b,&pppppppbStack_198,&pppppppbStack_e8);
                  if (pppppppbStack_208 != (byte *******)0x0) {
                    pub_1406abac0((byte *)pppppppbStack_200,(longlong)pppppppbStack_208 * 0x18,4);
                  }
                  if (pppppppbStack_268 != (byte *******)0x0) {
                    pub_1406abac0((byte *)pppppppbStack_260,(longlong)pppppppbStack_268 << 4,8);
                  }
                  if (pppppppbStack_148 != (byte *******)0x0) {
                    pub_1406abac0((byte *)pppppppbStack_140,(longlong)pppppppbStack_148 << 3,8);
                  }
                  return;
                }
              }
              goto LAB_140a26956;
            }
            uVar31 = (ushort)(uVar24 - 1) & (ushort)uVar24;
            uVar24 = CONCAT22((short)(uVar24 - 1 >> 0x10),uVar31);
          }
          auVar42[0] = -(auVar38[0] == -1);
          auVar42[1] = -(auVar38[1] == -1);
          auVar42[2] = -(auVar38[2] == -1);
          auVar42[3] = -(auVar38[3] == -1);
          auVar42[4] = -(auVar38[4] == -1);
          auVar42[5] = -(auVar38[5] == -1);
          auVar42[6] = -(auVar38[6] == -1);
          auVar42[7] = -(auVar38[7] == -1);
          auVar42[8] = -(auVar38[8] == -1);
          auVar42[9] = -(auVar38[9] == -1);
          auVar42[10] = -(auVar38[10] == -1);
          auVar42[0xb] = -(auVar38[0xb] == -1);
          auVar42[0xc] = -(auVar38[0xc] == -1);
          auVar42[0xd] = -(auVar38[0xd] == -1);
          auVar42[0xe] = -(auVar38[0xe] == -1);
          auVar42[0xf] = -(auVar38[0xf] == -1);
          if ((((((((((((((((SUB161(auVar42 >> 7,0) & 1) != 0 || (SUB161(auVar42 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar42 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar42 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar42 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar42 >> 0x2f,0) & 1) != 0) || (SUB161(auVar42 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar42 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar42 >> 0x47,0) & 1) != 0) || (SUB161(auVar42 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar42 >> 0x57,0) & 1) != 0) || (SUB161(auVar42 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar42 >> 0x67,0) & 1) != 0) || (SUB161(auVar42 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar42 >> 0x77,0) & 1) != 0) || auVar42[0xf] < '\0') break;
          uVar25 = uVar25 + lVar35 + 0x10;
          lVar35 = lVar35 + 0x10;
        }
      }
LAB_140a26956:
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_1430391f0);
    }
    plVar28 = plVar27 + 7;
  } while ((char)plVar27[6] != '\x01');
  if (SBORROW8(0,*plVar27)) {
    pdb_142dc8110(&UNK_143039048,0xf,&UNK_143039058);
LAB_140a26a07:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_143039438,0x37,&uStack_71,&UNK_1430394f8,&UNK_1430394e0);
  }
  pdb_140f4f620(&pppppppbStack_e8,plVar27[1]);
  lVar19 = lStack_e0;
  if ((int)pppppppbStack_e8 != 2) goto LAB_140a25d90;
  pppppppbStack_198 = (byte *******)lStack_e0;
  uStack_72 = 1;
  pdb_140f3f5b0(&pppppppbStack_e8);
  auStack_138._8_8_ = pppppppbStack_d0;
  auStack_138._0_8_ = uStack_d8;
  auStack_128 = auStack_c8;
  pppppppbStack_148 = pppppppbStack_e8;
  pppppppbStack_140 = (byte *******)lStack_e0;
  pppppppbStack_e8 = (byte *******)&UNK_143039158;
  lStack_e0 = 0x10;
  uStack_d8._0_4_ = (int)lVar19;
  uStack_d8._4_4_ = (undefined4)((ulonglong)lVar19 >> 0x20);
  uStack_72 = 0;
  pppppppbVar21 = (byte *******)pdb_142dea990(&pppppppbStack_e8,&pppppppbStack_148);
  goto LAB_140a25f6c;
LAB_140a252cb:
  auVar41[0] = -(auVar38[0] == -1);
  auVar41[1] = -(auVar38[1] == -1);
  auVar41[2] = -(auVar38[2] == -1);
  auVar41[3] = -(auVar38[3] == -1);
  auVar41[4] = -(auVar38[4] == -1);
  auVar41[5] = -(auVar38[5] == -1);
  auVar41[6] = -(auVar38[6] == -1);
  auVar41[7] = -(auVar38[7] == -1);
  auVar41[8] = -(auVar38[8] == -1);
  auVar41[9] = -(auVar38[9] == -1);
  auVar41[10] = -(auVar38[10] == -1);
  auVar41[0xb] = -(auVar38[0xb] == -1);
  auVar41[0xc] = -(auVar38[0xc] == -1);
  auVar41[0xd] = -(auVar38[0xd] == -1);
  auVar41[0xe] = -(auVar38[0xe] == -1);
  auVar41[0xf] = -(auVar38[0xf] == -1);
  if ((((((((((((((((SUB161(auVar41 >> 7,0) & 1) != 0 || (SUB161(auVar41 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar41 >> 0x17,0) & 1) != 0) || (SUB161(auVar41 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar41 >> 0x27,0) & 1) != 0) || (SUB161(auVar41 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar41 >> 0x37,0) & 1) != 0) || (SUB161(auVar41 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar41 >> 0x47,0) & 1) != 0) || (SUB161(auVar41 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar41 >> 0x57,0) & 1) != 0) || (SUB161(auVar41 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar41 >> 0x67,0) & 1) != 0) || (SUB161(auVar41 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar41 >> 0x77,0) & 1) != 0) || auVar41[0xf] < '\0') {
LAB_140a25b4b:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_1430391d8);
  }
  uVar32 = uVar32 + lVar29 + 0x10;
  lVar29 = lVar29 + 0x10;
  goto LAB_140a25279;
LAB_140a25d90:
  uVar26 = auStack_b8._0_8_;
  if (plVar27[4] < (longlong)auStack_b8._0_8_) {
    pdb_140da3220(&pppppppbStack_148,plVar27[1],plVar27[2]);
    if (pppppppbStack_148 == (byte *******)0x2) {
      pppppppbStack_198 = (byte *******)0x8000000000000009;
      pppppppbStack_190 = pppppppbStack_140;
    }
    else {
      puStack_98 = puStack_f8;
      pppppppbStack_a8 = (byte *******)puStack_108;
      pppppppbStack_a0 = pppppppbStack_100;
      auStack_b8 = auStack_118;
      auStack_c8 = auStack_128;
      uStack_d8._0_4_ = auStack_138._0_4_;
      uStack_d8._4_4_ = auStack_138._4_4_;
      pppppppbStack_d0 = (byte *******)auStack_138._8_8_;
      pppppppbStack_e8 = pppppppbStack_148;
      lStack_e0 = (longlong)pppppppbStack_140;
      pdb_1417d6090(&pppppppbStack_198,&pppppppbStack_e8);
      if (pppppppbStack_198 == (byte *******)0x800000000000000a) {
        pppppppbStack_268 = pppppppbStack_180;
        pppppppbStack_260 = pppppppbStack_178;
        pppppppbStack_258 = pppppppbStack_170;
        if (pppppppbStack_190 == (byte *******)0xa) {
          pppppppbVar21 = pppppppbStack_188;
          if (pppppppbStack_188 != (byte *******)0x0) goto LAB_140a25f6c;
        }
        else {
          pppppppbStack_300 = pppppppbStack_170;
          pppppppbStack_310 = pppppppbStack_180;
          pppppppbStack_308 = pppppppbStack_178;
          pppppppbStack_320 = pppppppbStack_190;
          pppppppbStack_318 = pppppppbStack_188;
          pdb_140daccf0(&uStack_378,&pppppppbStack_320);
          pppppppbStack_80 = pppppppbStack_370;
          pppppppbStack_268 = pppppppbStack_370;
          pppppppbStack_260 = pppppppbStack_368;
          pppppppbStack_258 = pppppppbVar33;
          pppppppbStack_250 = pppppppbVar15;
          pppppppbStack_248 = pppppppbVar16;
          pppppppbStack_240 = (byte *******)0x0;
          pdb_140e660d0(&pppppppbStack_198,uStack_2c0,plVar27 + 5,&pppppppbStack_268,1,0x23);
          if ((int)pppppppbStack_198 != 0xb) {
            puStack_108 = puStack_158;
            pppppppbStack_100 = pppppppbStack_150;
            auStack_118._8_8_ = pppppppbStack_160;
            auStack_118._0_8_ = puStack_168;
            auStack_128._8_8_ = pppppppbStack_170;
            auStack_128._0_8_ = pppppppbStack_178;
            auStack_138._8_8_ = pppppppbStack_180;
            auStack_138._0_8_ = pppppppbStack_188;
            pppppppbStack_148 = pppppppbStack_198;
            pppppppbStack_140 = pppppppbStack_190;
            uStack_74 = 1;
            pdb_140f3f5b0(&pppppppbStack_e8);
            uStack_1e8 = auStack_c8._0_8_;
            uStack_1e0 = auStack_c8._8_8_;
            bStack_1f8 = (byte)(int)uStack_d8;
            uStack_1f7 = (undefined7)(CONCAT44(uStack_d8._4_4_,(int)uStack_d8) >> 8);
            pppppppbStack_1f0 = pppppppbStack_d0;
            pppppppbStack_208 = pppppppbStack_e8;
            pppppppbStack_200 = (byte *******)lStack_e0;
            puStack_98 = puStack_158;
            pppppppbStack_90 = pppppppbStack_150;
            auStack_c8._8_8_ = pppppppbStack_180;
            auStack_c8._0_8_ = pppppppbStack_188;
            auStack_b8._8_8_ = pppppppbStack_170;
            auStack_b8._0_8_ = pppppppbStack_178;
            pppppppbStack_a8 = (byte *******)puStack_168;
            pppppppbStack_a0 = pppppppbStack_160;
            uStack_d8._0_4_ = (int)pppppppbStack_198;
            uStack_d8._4_4_ = (undefined4)((ulonglong)pppppppbStack_198 >> 0x20);
            pppppppbStack_d0 = pppppppbStack_190;
            pppppppbStack_e8 = (byte *******)&UNK_143039179;
            lStack_e0 = 0x10;
            uStack_74 = 0;
            pppppppbVar21 = (byte *******)pdb_142de9c00(&pppppppbStack_e8,&pppppppbStack_208);
            if (uStack_378 != 0) {
              pub_1406abac0((byte *)pppppppbStack_80,uStack_378,1);
            }
            pdb_140a29940(&pppppppbStack_320);
            goto LAB_140a25f6c;
          }
          if (3 < *_DAT_143ca8e90) {
            pppppppbStack_e8 = (byte *******)0x0;
            lStack_e0 = (longlong)&UNK_1430390db;
            uStack_d8._0_4_ = 0x35;
            uStack_d8._4_4_ = 0;
            pppppppbStack_d0 = (byte *******)0x0;
            auStack_c8._8_8_ = 0x44;
            auStack_c8._0_8_ = &UNK_143038ef8;
            auStack_b8._8_8_ = &UNK_1430390db;
            auStack_b8._0_8_ = 4;
            pppppppbStack_a8 = (byte *******)0x35;
            pppppppbStack_a0 = (byte *******)0x10d00000001;
            puStack_98 = &UNK_143039189;
            pppppppbStack_90 = (byte *******)0x3d;
            pdb_140f332f0(&uStack_71,&pppppppbStack_e8);
          }
          plVar27[4] = uVar26;
          if (uStack_378 != 0) {
            pub_1406abac0((byte *)pppppppbStack_80,uStack_378,1);
          }
          pdb_140a29940(&pppppppbStack_320);
        }
        goto LAB_140a25cc1;
      }
    }
    auStack_118._8_8_ = pppppppbStack_160;
    auStack_118._0_8_ = puStack_168;
    auStack_128._8_8_ = pppppppbStack_170;
    auStack_128._0_8_ = pppppppbStack_178;
    auStack_138._8_8_ = pppppppbStack_180;
    auStack_138._0_8_ = pppppppbStack_188;
    pppppppbStack_148 = pppppppbStack_198;
    pppppppbStack_140 = pppppppbStack_190;
    uStack_73 = 1;
    pdb_140f3f5b0(&pppppppbStack_e8);
    uStack_1e8 = auStack_c8._0_8_;
    uStack_1e0 = auStack_c8._8_8_;
    bStack_1f8 = (byte)uStack_d8;
    uStack_1f7 = (undefined7)((ulonglong)uStack_d8 >> 8);
    pppppppbStack_1f0 = pppppppbStack_d0;
    pppppppbStack_208 = pppppppbStack_e8;
    pppppppbStack_200 = (byte *******)lStack_e0;
    auStack_c8._8_8_ = pppppppbStack_180;
    auStack_c8._0_8_ = pppppppbStack_188;
    auStack_b8._8_8_ = pppppppbStack_170;
    auStack_b8._0_8_ = pppppppbStack_178;
    pppppppbStack_a8 = (byte *******)puStack_168;
    pppppppbStack_a0 = pppppppbStack_160;
    uStack_d8._0_4_ = (int)pppppppbStack_198;
    uStack_d8._4_4_ = (undefined4)((ulonglong)pppppppbStack_198 >> 0x20);
    pppppppbStack_d0 = pppppppbStack_190;
    pppppppbStack_e8 = (byte *******)&UNK_143039168;
    lStack_e0 = 0x11;
    uStack_73 = 0;
    pppppppbVar21 = (byte *******)pdb_142dea520(&pppppppbStack_e8,&pppppppbStack_208);
LAB_140a25f6c:
    pppppppbStack_268 = pppppppbVar21;
    pdb_141b1e240(&pppppppbStack_148,plVar27[1],plVar27[2],3);
    lStack_e0 = (longlong)pdb_140f58250;
    uStack_d8 = (byte *******)&pppppppbStack_268;
    pppppppbStack_d0 = (byte *******)pdb_140f36c30;
    pppppppbStack_e8 = (byte *******)&pppppppbStack_148;
    pdb_140f60760(&pppppppbStack_198,&UNK_143039070,&pppppppbStack_e8);
    if (pppppppbStack_148 != (byte *******)0x0) {
      pub_1406abac0((byte *)pppppppbStack_140,(ulonglong)pppppppbStack_148,1);
    }
    pppppppbStack_208 = pppppppbStack_198;
    pppppppbStack_200 = pppppppbStack_190;
    bStack_1f8 = (byte)pppppppbStack_188;
    uStack_1f7 = (undefined7)((ulonglong)pppppppbStack_188 >> 8);
    if (_DAT_143ca42c0 != 0) {
      pppppppbStack_148 = (byte *******)CONCAT71(pppppppbStack_148._1_7_,1);
      pppppppbStack_e8 = (byte *******)&pppppppbStack_148;
      pdb_142dc7060(&DAT_143ca42c0,0,&pppppppbStack_e8,&UNK_143039358,&UNK_143039098);
    }
    pdb_1400f0d40(&pppppppbStack_e8,_DAT_143cb2cb8);
    if ((int)pppppppbStack_e8 == 1) {
      pppppppbStack_148 = (byte *******)lStack_e0;
      pppppppbStack_140 = (byte *******)CONCAT71(pppppppbStack_140._1_7_,(undefined1)uStack_d8);
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_1430390b0,0x13,&pppppppbStack_148,&UNK_143039558,&UNK_143039098);
    }
    pppppppbStack_80 = (byte *******)lStack_e0;
    pppppppbStack_1a8 = (byte *******)CONCAT71(pppppppbStack_1a8._1_7_,(undefined1)uStack_d8);
    pdb_14007ee60();
    pppppppbVar21 = (byte *******)pub_1406abab0(0xf,1);
    if (pppppppbVar21 == (byte *******)0x0) {
LAB_140a26b58:
      pdb_142dc7e2a(1,0xf);
                    /* WARNING: Does not return */
      pcVar7 = (code *)invalidInstructionException();
      (*pcVar7)();
    }
    pbVar1 = (byte *)((longlong)pppppppbVar21 + 7);
    pbVar1[0] = 0x70;
    pbVar1[1] = 0x61;
    pbVar1[2] = 0x74;
    pbVar1[3] = 0x68;
    pbVar1[4] = 0x21;
    pbVar1[5] = 0x20;
    pbVar1[6] = 0x28;
    pbVar1[7] = 0x29;
    *pppppppbVar21 = (byte ******)0x705f656c75646f6d;
    pppppppbStack_e8 = (byte *******)0xf;
    uStack_d8._0_4_ = 0xf;
    uStack_d8._4_4_ = 0;
    lStack_e0 = (longlong)pppppppbVar21;
    pdb_142d7f1b0(&pppppppbStack_e8,0xf,0x18,1,1);
    pppppppbVar21 = pppppppbStack_200;
    uVar26 = _UNK_1430390cb;
    lVar19 = CONCAT44(uStack_d8._4_4_,(int)uStack_d8);
    *(undefined8 *)(lStack_e0 + lVar19) = _DAT_1430390c3;
    *(undefined8 *)((byte *)(lStack_e0 + lVar19) + 8) = uVar26;
    pbVar1 = (byte *)(lStack_e0 + lVar19 + 0x10);
    pbVar1[0] = 0x3a;
    pbVar1[1] = 0x3a;
    pbVar1[2] = 0x20;
    pbVar1[3] = 0x45;
    pbVar1[4] = 0x72;
    pbVar1[5] = 0x72;
    pbVar1[6] = 0x6f;
    pbVar1[7] = 0x72;
    lVar19 = lVar19 + 0x18;
    pppppppbStack_148 = pppppppbStack_e8;
    pppppppbStack_140 = (byte *******)lStack_e0;
    uVar25 = CONCAT71(uStack_1f7,bStack_1f8);
    auStack_138._0_8_ = lVar19;
    if ((ulonglong)((longlong)pppppppbStack_e8 - lVar19) < uVar25) {
      pdb_142d7f1b0(&pppppppbStack_148,lVar19,uVar25,1,1);
LAB_140a26134:
      lVar19 = auStack_138._0_8_;
      pub_142e32760((byte *)((longlong)pppppppbStack_140 + auStack_138._0_8_),pppppppbVar21);
    }
    else if (uVar25 != 0) goto LAB_140a26134;
    uStack_d8 = (byte *******)(lVar19 + uVar25);
    auStack_138._0_8_ = uStack_d8;
    pppppppbStack_e8 = pppppppbStack_148;
    lStack_e0 = (longlong)pppppppbStack_140;
    cVar17 = pdb_14192b470(pppppppbStack_80 + 1,&pppppppbStack_e8);
    plVar20 = plStack_2f8;
    if ((cVar17 == '\0') && (*_DAT_143ca8e90 != 0)) {
      pppppppbStack_148 = (byte *******)&pppppppbStack_208;
      pppppppbStack_140 = (byte *******)pdb_140001020;
      pppppppbStack_e8 = (byte *******)0x0;
      lStack_e0 = (longlong)&UNK_1430390db;
      uStack_d8._0_4_ = 0x35;
      uStack_d8._4_4_ = 0;
      pppppppbStack_d0 = (byte *******)0x0;
      auStack_c8._8_8_ = 0x44;
      auStack_c8._0_8_ = &UNK_143038ef8;
      auStack_b8._8_8_ = &UNK_1430390db;
      auStack_b8._0_8_ = 1;
      pppppppbStack_a8 = (byte *******)0x35;
      pppppppbStack_a0 = (byte *******)0x6300000001;
      puStack_98 = &UNK_143038a24;
      pppppppbStack_90 = (byte *******)&pppppppbStack_148;
      pdb_140f332f0(&uStack_71,&pppppppbStack_e8);
    }
    pppppppbVar21 = pppppppbStack_80;
    if (((char)pppppppbStack_1a8 == '\0') && ((*_DAT_143ca8f38 & 0x7fffffffffffffff) != 0)) {
      cVar17 = pdb_142dc79e0();
      if (cVar17 == '\0') {
        *(byte *)((longlong)pppppppbVar21 + 1) = 1;
      }
    }
    LOCK();
    bVar4 = *(byte *)pppppppbVar21;
    *(byte *)pppppppbVar21 = 0;
    UNLOCK();
    if (bVar4 == 2) {
      pdb_142dc6ca0(pppppppbVar21);
    }
    if (pppppppbStack_208 != (byte *******)0x0) {
      pub_1406abac0((byte *)pppppppbStack_200,(ulonglong)pppppppbStack_208,1);
    }
    *(undefined1 *)(plVar27 + 6) = 0;
    pdb_140f36c40(&pppppppbStack_268);
  }
  goto LAB_140a25cc1;
LAB_140a2518d:
  auVar40[0] = -(auVar38[0] == -1);
  auVar40[1] = -(auVar38[1] == -1);
  auVar40[2] = -(auVar38[2] == -1);
  auVar40[3] = -(auVar38[3] == -1);
  auVar40[4] = -(auVar38[4] == -1);
  auVar40[5] = -(auVar38[5] == -1);
  auVar40[6] = -(auVar38[6] == -1);
  auVar40[7] = -(auVar38[7] == -1);
  auVar40[8] = -(auVar38[8] == -1);
  auVar40[9] = -(auVar38[9] == -1);
  auVar40[10] = -(auVar38[10] == -1);
  auVar40[0xb] = -(auVar38[0xb] == -1);
  auVar40[0xc] = -(auVar38[0xc] == -1);
  auVar40[0xd] = -(auVar38[0xd] == -1);
  auVar40[0xe] = -(auVar38[0xe] == -1);
  auVar40[0xf] = -(auVar38[0xf] == -1);
  if ((((((((((((((((SUB161(auVar40 >> 7,0) & 1) != 0 || (SUB161(auVar40 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar40 >> 0x17,0) & 1) != 0) || (SUB161(auVar40 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar40 >> 0x27,0) & 1) != 0) || (SUB161(auVar40 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar40 >> 0x37,0) & 1) != 0) || (SUB161(auVar40 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar40 >> 0x47,0) & 1) != 0) || (SUB161(auVar40 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar40 >> 0x57,0) & 1) != 0) || (SUB161(auVar40 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar40 >> 0x67,0) & 1) != 0) || (SUB161(auVar40 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar40 >> 0x77,0) & 1) != 0) || auVar40[0xf] < '\0') {
LAB_140a26aaf:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_1430391c0);
  }
  uVar25 = uVar25 + lVar29 + 0x10;
  lVar29 = lVar29 + 0x10;
  goto LAB_140a2513b;
}

