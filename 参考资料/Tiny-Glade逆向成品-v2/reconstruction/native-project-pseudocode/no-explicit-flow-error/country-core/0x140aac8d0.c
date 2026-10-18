// VA 0x140aac8d0, PDB extent 6644 bytes
// country_core::systems::render_loop::compute_passes::apply_volumetrics::apply_volumetrics
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/compute_passes/apply_volumetrics.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::render_loop::compute_passes::apply_volumetrics::apply_volumetrics
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/compute_passes/apply_volumetrics.rs
   Extent: 6644 */

void pdb_140aac8d0(undefined8 *param_1,longlong param_2,longlong param_3,longlong param_4,
                  undefined8 param_5,undefined8 param_6,uint *param_7,longlong param_8,
                  undefined8 param_9)

{
  char *pcVar1;
  char *pcVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  char cVar6;
  bool bVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  uint *puVar13;
  undefined4 uVar14;
  undefined2 uVar15;
  undefined2 uVar16;
  undefined2 uVar17;
  undefined2 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  uint uVar21;
  uint uVar22;
  longlong lVar23;
  undefined8 *puVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined1 uVar27;
  ulonglong uVar28;
  longlong lVar29;
  uint uVar30;
  longlong lVar31;
  longlong lVar32;
  ushort uVar33;
  ulonglong uVar34;
  ulonglong uVar35;
  byte bVar36;
  undefined4 uVar37;
  bool bVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  float fVar48;
  float fVar49;
  undefined2 uVar50;
  ushort uVar51;
  undefined2 uVar52;
  short sVar53;
  float fVar54;
  float fVar55;
  uint uVar56;
  uint uVar57;
  uint uVar58;
  uint uVar59;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined1 auStack_408 [32];
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 *puStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined4 uStack_378;
  uint uStack_374;
  uint uStack_370;
  undefined8 uStack_36c;
  undefined4 uStack_364;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  uint *puStack_340;
  undefined8 *puStack_338;
  uint *puStack_330;
  undefined8 *puStack_328;
  undefined8 uStack_320;
  undefined8 *puStack_318;
  undefined8 *puStack_310;
  longlong lStack_308;
  longlong lStack_300;
  undefined4 *puStack_2f8;
  undefined8 uStack_2f0;
  undefined4 uStack_2e8;
  undefined8 uStack_2b8;
  longlong lStack_2b0;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  uint uStack_28c;
  undefined4 uStack_288;
  undefined8 uStack_284;
  undefined4 uStack_27c;
  undefined8 uStack_278;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  uint uStack_268;
  uint uStack_264;
  undefined4 uStack_260;
  uint uStack_258;
  undefined4 uStack_254;
  undefined2 uStack_250;
  undefined2 uStack_24e;
  undefined4 uStack_24c;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  uint uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  longlong lStack_190;
  undefined2 uStack_188;
  undefined2 uStack_186;
  uint uStack_184;
  undefined2 uStack_180;
  undefined2 uStack_17e;
  undefined2 uStack_17c;
  undefined1 uStack_17a;
  undefined1 uStack_179;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 *puStack_160;
  undefined8 uStack_158;
  undefined8 *puStack_150;
  longlong lStack_148;
  longlong lStack_140;
  undefined4 *puStack_138;
  undefined4 uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  uint *puStack_118;
  undefined8 *puStack_110;
  uint *puStack_108;
  undefined8 uStack_100;
  uint uStack_f8;
  byte bStack_f4;
  undefined8 uStack_f0;
  
  uStack_f0 = 0xfffffffffffffffe;
  if (*(longlong *)(param_3 + 0x88) != 0) {
    lVar23 = *(longlong *)(param_3 + 0x70);
    uVar28 = 0x1d6a82b468dfb8a2;
    lVar32 = 0;
    while( true ) {
      uVar28 = uVar28 & *(ulonglong *)(param_3 + 0x78);
      auVar44 = *(undefined1 (*) [16])(lVar23 + uVar28);
      auVar42[0] = -(auVar44[0] == DAT_142e34ec0);
      auVar42[1] = -(auVar44[1] == DAT_142e34ec0._1_1_);
      auVar42[2] = -(auVar44[2] == DAT_142e34ec0._2_1_);
      auVar42[3] = -(auVar44[3] == DAT_142e34ec0._3_1_);
      auVar42[4] = -(auVar44[4] == DAT_142e34ec0._4_1_);
      auVar42[5] = -(auVar44[5] == DAT_142e34ec0._5_1_);
      auVar42[6] = -(auVar44[6] == DAT_142e34ec0._6_1_);
      auVar42[7] = -(auVar44[7] == DAT_142e34ec0._7_1_);
      auVar42[8] = -(auVar44[8] == DAT_142e34ec0._8_1_);
      auVar42[9] = -(auVar44[9] == DAT_142e34ec0._9_1_);
      auVar42[10] = -(auVar44[10] == DAT_142e34ec0._10_1_);
      auVar42[0xb] = -(auVar44[0xb] == DAT_142e34ec0._11_1_);
      auVar42[0xc] = -(auVar44[0xc] == DAT_142e34ec0._12_1_);
      auVar42[0xd] = -(auVar44[0xd] == DAT_142e34ec0._13_1_);
      auVar42[0xe] = -(auVar44[0xe] == DAT_142e34ec0._14_1_);
      auVar42[0xf] = -(auVar44[0xf] == DAT_142e34ec0._15_1_);
      uVar33 = (ushort)(SUB161(auVar42 >> 7,0) & 1) | (ushort)(SUB161(auVar42 >> 0xf,0) & 1) << 1 |
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
      uVar30 = (uint)uVar33;
      while (uVar33 != 0) {
        uVar22 = 0;
        for (uVar8 = uVar30; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
          uVar22 = uVar22 + 1;
        }
        uVar34 = uVar22 + uVar28 & *(ulonglong *)(param_3 + 0x78);
        pcVar1 = (char *)(lVar23 + -0x18 + uVar34 * -0x18);
        auVar43[0] = -(*pcVar1 == DAT_142e60e60);
        auVar43[1] = -(pcVar1[1] == DAT_142e60e60._1_1_);
        auVar43[2] = -(pcVar1[2] == DAT_142e60e60._2_1_);
        auVar43[3] = -(pcVar1[3] == DAT_142e60e60._3_1_);
        auVar43[4] = -(pcVar1[4] == DAT_142e60e60._4_1_);
        auVar43[5] = -(pcVar1[5] == DAT_142e60e60._5_1_);
        auVar43[6] = -(pcVar1[6] == DAT_142e60e60._6_1_);
        auVar43[7] = -(pcVar1[7] == DAT_142e60e60._7_1_);
        auVar43[8] = -(pcVar1[8] == DAT_142e60e60._8_1_);
        auVar43[9] = -(pcVar1[9] == DAT_142e60e60._9_1_);
        auVar43[10] = -(pcVar1[10] == DAT_142e60e60._10_1_);
        auVar43[0xb] = -(pcVar1[0xb] == DAT_142e60e60._11_1_);
        auVar43[0xc] = -(pcVar1[0xc] == DAT_142e60e60._12_1_);
        auVar43[0xd] = -(pcVar1[0xd] == DAT_142e60e60._13_1_);
        auVar43[0xe] = -(pcVar1[0xe] == DAT_142e60e60._14_1_);
        auVar43[0xf] = -(pcVar1[0xf] == DAT_142e60e60._15_1_);
        if ((ushort)((ushort)(SUB161(auVar43 >> 7,0) & 1) |
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
                    (ushort)(auVar43[0xf] >> 7) << 0xf) == 0xffff) {
          uVar28 = *(ulonglong *)(lVar23 + uVar34 * -0x18 + -8);
          if ((*(ulonglong *)(param_3 + 0x210) <= uVar28) ||
             (uVar28 = *(ulonglong *)(*(longlong *)(param_3 + 0x208) + uVar28 * 8), uVar28 == 0))
          goto LAB_140aacc15;
          lVar23 = ~uVar28 * 0x40;
          if (*(longlong *)(*(longlong *)(param_3 + 0x1d8) + 0x20 + lVar23) == 0)
          goto LAB_140aacc15;
          uVar25 = *(undefined8 *)(*(longlong *)(param_3 + 0x1d8) + lVar23 + 0x10);
          puVar24 = (undefined8 *)pdb_140bf45b0(uVar25,&UNK_14331c960);
          if ((puVar24 == (undefined8 *)0x0) ||
             (lVar23 = (**(code **)(puVar24[1] + 0x18))(*puVar24), lVar23 == 0)) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc8150(&UNK_143049740);
          }
          uStack_3d8 = *(undefined8 *)(lVar23 + 8);
          if (*(longlong *)(param_3 + 0x88) == 0) goto LAB_140aacd23;
          lVar23 = *(longlong *)(param_3 + 0x70);
          uVar28 = *(ulonglong *)(param_3 + 0x78);
          uVar34 = 0xade7b9c51f765c3a;
          lVar32 = 0;
          goto LAB_140aacaaf;
        }
        uVar33 = (ushort)(uVar30 - 1) & (ushort)uVar30;
        uVar30 = CONCAT22((short)(uVar30 - 1 >> 0x10),uVar33);
      }
      auVar39[0] = -(auVar44[0] == -1);
      auVar39[1] = -(auVar44[1] == -1);
      auVar39[2] = -(auVar44[2] == -1);
      auVar39[3] = -(auVar44[3] == -1);
      auVar39[4] = -(auVar44[4] == -1);
      auVar39[5] = -(auVar44[5] == -1);
      auVar39[6] = -(auVar44[6] == -1);
      auVar39[7] = -(auVar44[7] == -1);
      auVar39[8] = -(auVar44[8] == -1);
      auVar39[9] = -(auVar44[9] == -1);
      auVar39[10] = -(auVar44[10] == -1);
      auVar39[0xb] = -(auVar44[0xb] == -1);
      auVar39[0xc] = -(auVar44[0xc] == -1);
      auVar39[0xd] = -(auVar44[0xd] == -1);
      auVar39[0xe] = -(auVar44[0xe] == -1);
      auVar39[0xf] = -(auVar44[0xf] == -1);
      if ((((((((((((((((SUB161(auVar39 >> 7,0) & 1) != 0 || (SUB161(auVar39 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar39 >> 0x17,0) & 1) != 0) || (SUB161(auVar39 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar39 >> 0x27,0) & 1) != 0) || (SUB161(auVar39 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar39 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar39 >> 0x3f,0) & 1) != 0) || (SUB161(auVar39 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar39 >> 0x4f,0) & 1) != 0) || (SUB161(auVar39 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar39 >> 0x5f,0) & 1) != 0) || (SUB161(auVar39 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar39 >> 0x6f,0) & 1) != 0) || (SUB161(auVar39 >> 0x77,0) & 1) != 0) ||
          auVar39[0xf] < '\0') break;
      uVar28 = uVar28 + lVar32 + 0x10;
      lVar32 = lVar32 + 0x10;
    }
  }
LAB_140aacc15:
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_143049728);
LAB_140aacaaf:
  uVar34 = uVar34 & uVar28;
  pcVar1 = (char *)(lVar23 + uVar34);
  auVar44[0] = -(*pcVar1 == DAT_142e33f50);
  auVar44[1] = -(pcVar1[1] == DAT_142e33f50._1_1_);
  auVar44[2] = -(pcVar1[2] == DAT_142e33f50._2_1_);
  auVar44[3] = -(pcVar1[3] == DAT_142e33f50._3_1_);
  auVar44[4] = -(pcVar1[4] == DAT_142e33f50._4_1_);
  auVar44[5] = -(pcVar1[5] == DAT_142e33f50._5_1_);
  auVar44[6] = -(pcVar1[6] == DAT_142e33f50._6_1_);
  auVar44[7] = -(pcVar1[7] == DAT_142e33f50._7_1_);
  auVar44[8] = -(pcVar1[8] == DAT_142e33f50._8_1_);
  auVar44[9] = -(pcVar1[9] == DAT_142e33f50._9_1_);
  auVar44[10] = -(pcVar1[10] == DAT_142e33f50._10_1_);
  auVar44[0xb] = -(pcVar1[0xb] == DAT_142e33f50._11_1_);
  auVar44[0xc] = -(pcVar1[0xc] == DAT_142e33f50._12_1_);
  auVar44[0xd] = -(pcVar1[0xd] == DAT_142e33f50._13_1_);
  auVar44[0xe] = -(pcVar1[0xe] == DAT_142e33f50._14_1_);
  auVar44[0xf] = -(pcVar1[0xf] == DAT_142e33f50._15_1_);
  uVar33 = (ushort)(SUB161(auVar44 >> 7,0) & 1) | (ushort)(SUB161(auVar44 >> 0xf,0) & 1) << 1 |
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
           (ushort)(SUB161(auVar44 >> 0x77,0) & 1) << 0xe | (ushort)(auVar44[0xf] >> 7) << 0xf;
  uVar30 = (uint)uVar33;
  while (uVar33 != 0) {
    uVar22 = 0;
    for (uVar8 = uVar30; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
      uVar22 = uVar22 + 1;
    }
    uVar35 = uVar22 + uVar34 & uVar28;
    pcVar2 = (char *)(lVar23 + -0x18 + uVar35 * -0x18);
    auVar45[0] = -(*pcVar2 == DAT_142e646f0);
    auVar45[1] = -(pcVar2[1] == UNK_142e646f1);
    auVar45[2] = -(pcVar2[2] == UNK_142e646f2);
    auVar45[3] = -(pcVar2[3] == UNK_142e646f3);
    auVar45[4] = -(pcVar2[4] == UNK_142e646f4);
    auVar45[5] = -(pcVar2[5] == UNK_142e646f5);
    auVar45[6] = -(pcVar2[6] == UNK_142e646f6);
    auVar45[7] = -(pcVar2[7] == UNK_142e646f7);
    auVar45[8] = -(pcVar2[8] == UNK_142e646f8);
    auVar45[9] = -(pcVar2[9] == UNK_142e646f9);
    auVar45[10] = -(pcVar2[10] == UNK_142e646fa);
    auVar45[0xb] = -(pcVar2[0xb] == UNK_142e646fb);
    auVar45[0xc] = -(pcVar2[0xc] == UNK_142e646fc);
    auVar45[0xd] = -(pcVar2[0xd] == UNK_142e646fd);
    auVar45[0xe] = -(pcVar2[0xe] == UNK_142e646fe);
    auVar45[0xf] = -(pcVar2[0xf] == UNK_142e646ff);
    if ((ushort)((ushort)(SUB161(auVar45 >> 7,0) & 1) | (ushort)(SUB161(auVar45 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar45 >> 0x17,0) & 1) << 2 |
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
                 (ushort)(SUB161(auVar45 >> 0x77,0) & 1) << 0xe | (ushort)(auVar45[0xf] >> 7) << 0xf
                ) == 0xffff) {
      uVar34 = *(ulonglong *)(lVar23 + uVar35 * -0x18 + -8);
      if (*(ulonglong *)(param_3 + 0x210) <= uVar34) goto LAB_140aacd23;
      uVar34 = *(ulonglong *)(*(longlong *)(param_3 + 0x208) + uVar34 * 8);
      if (uVar34 == 0) goto LAB_140aacd23;
      lVar32 = *(longlong *)(param_3 + 0x1d8);
      lVar29 = ~uVar34 * 0x40;
      if (*(longlong *)(lVar32 + 0x20 + lVar29) == 0) goto LAB_140aacd23;
      uVar34 = 0x9307f98c576a403d;
      lVar31 = 0;
      goto LAB_140aacba7;
    }
    uVar33 = (ushort)(uVar30 - 1) & (ushort)uVar30;
    uVar30 = CONCAT22((short)(uVar30 - 1 >> 0x10),uVar33);
  }
  goto LAB_140aacb10;
LAB_140aacba7:
  uVar34 = uVar34 & uVar28;
  auVar44 = *(undefined1 (*) [16])(lVar23 + uVar34);
  auVar46[0] = -(auVar44[0] == DAT_142e34260);
  auVar46[1] = -(auVar44[1] == DAT_142e34260._1_1_);
  auVar46[2] = -(auVar44[2] == DAT_142e34260._2_1_);
  auVar46[3] = -(auVar44[3] == DAT_142e34260._3_1_);
  auVar46[4] = -(auVar44[4] == DAT_142e34260._4_1_);
  auVar46[5] = -(auVar44[5] == DAT_142e34260._5_1_);
  auVar46[6] = -(auVar44[6] == DAT_142e34260._6_1_);
  auVar46[7] = -(auVar44[7] == DAT_142e34260._7_1_);
  auVar46[8] = -(auVar44[8] == DAT_142e34260._8_1_);
  auVar46[9] = -(auVar44[9] == DAT_142e34260._9_1_);
  auVar46[10] = -(auVar44[10] == DAT_142e34260._10_1_);
  auVar46[0xb] = -(auVar44[0xb] == DAT_142e34260._11_1_);
  auVar46[0xc] = -(auVar44[0xc] == DAT_142e34260._12_1_);
  auVar46[0xd] = -(auVar44[0xd] == DAT_142e34260._13_1_);
  auVar46[0xe] = -(auVar44[0xe] == DAT_142e34260._14_1_);
  auVar46[0xf] = -(auVar44[0xf] == DAT_142e34260._15_1_);
  uVar33 = (ushort)(SUB161(auVar46 >> 7,0) & 1) | (ushort)(SUB161(auVar46 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar46 >> 0x17,0) & 1) << 2 |
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
           (ushort)(SUB161(auVar46 >> 0x77,0) & 1) << 0xe | (ushort)(auVar46[0xf] >> 7) << 0xf;
  uVar30 = (uint)uVar33;
  while (uStack_2b8 = uVar25, uVar33 != 0) {
    uVar22 = 0;
    for (uVar8 = uVar30; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
      uVar22 = uVar22 + 1;
    }
    uVar35 = uVar22 + uVar34 & uVar28;
    pcVar1 = (char *)(lVar23 + -0x18 + uVar35 * -0x18);
    auVar47[0] = -(*pcVar1 == DAT_142e34af0);
    auVar47[1] = -(pcVar1[1] == DAT_142e34af0._1_1_);
    auVar47[2] = -(pcVar1[2] == DAT_142e34af0._2_1_);
    auVar47[3] = -(pcVar1[3] == DAT_142e34af0._3_1_);
    auVar47[4] = -(pcVar1[4] == DAT_142e34af0._4_1_);
    auVar47[5] = -(pcVar1[5] == DAT_142e34af0._5_1_);
    auVar47[6] = -(pcVar1[6] == DAT_142e34af0._6_1_);
    auVar47[7] = -(pcVar1[7] == DAT_142e34af0._7_1_);
    auVar47[8] = -(pcVar1[8] == DAT_142e34af0._8_1_);
    auVar47[9] = -(pcVar1[9] == DAT_142e34af0._9_1_);
    auVar47[10] = -(pcVar1[10] == DAT_142e34af0._10_1_);
    auVar47[0xb] = -(pcVar1[0xb] == DAT_142e34af0._11_1_);
    auVar47[0xc] = -(pcVar1[0xc] == DAT_142e34af0._12_1_);
    auVar47[0xd] = -(pcVar1[0xd] == DAT_142e34af0._13_1_);
    auVar47[0xe] = -(pcVar1[0xe] == DAT_142e34af0._14_1_);
    auVar47[0xf] = -(pcVar1[0xf] == DAT_142e34af0._15_1_);
    if ((ushort)((ushort)(SUB161(auVar47 >> 7,0) & 1) | (ushort)(SUB161(auVar47 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar47 >> 0x17,0) & 1) << 2 |
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
                 (ushort)(SUB161(auVar47 >> 0x77,0) & 1) << 0xe | (ushort)(auVar47[0xf] >> 7) << 0xf
                ) == 0xffff) {
      uVar28 = *(ulonglong *)(lVar23 + uVar35 * -0x18 + -8);
      if (((uVar28 < *(ulonglong *)(param_3 + 0x210)) &&
          (uVar28 = *(ulonglong *)(*(longlong *)(param_3 + 0x208) + uVar28 * 8), uVar28 != 0)) &&
         (lVar23 = ~uVar28 * 0x40, *(longlong *)(lVar32 + 0x20 + lVar23) != 0)) {
        lVar23 = *(longlong *)(lVar32 + lVar23 + 0x10);
        fVar54 = (float)*(undefined8 *)(lVar23 + 0xd0);
        fVar55 = (float)((ulonglong)*(undefined8 *)(lVar23 + 0xd0) >> 0x20);
        fVar4 = *(float *)(lVar23 + 0xd8);
        fVar9 = *(float *)(lVar23 + 0x50);
        fVar10 = *(float *)(lVar23 + 0x54);
        fVar5 = *(float *)(lVar23 + 0x58);
        fVar48 = fVar4 * fVar5 + fVar55 * fVar10 + fVar54 * fVar9;
        fVar11 = *(float *)(lVar23 + 0x70);
        fVar12 = *(float *)(lVar23 + 0x74);
        fVar49 = *(float *)(lVar23 + 0x78);
        uVar50 = SUB42(fVar49,0);
        uVar52 = (undefined2)((uint)fVar49 >> 0x10);
        fVar49 = fVar4 * fVar49 + fVar55 * fVar12 + fVar54 * fVar11;
        bVar38 = fVar49 <= fVar48;
        if (!bVar38) {
          uVar50 = SUB42(fVar5,0);
          uVar52 = (undefined2)((uint)fVar5 >> 0x10);
        }
        pfVar3 = (float *)(lVar23 + 0x40 + (ulonglong)bVar38 * 0x20);
        bVar7 = true;
        if (((*pfVar3 == 0.0) && (pfVar3[1] == 0.0)) && (!NAN(pfVar3[1]))) {
          bVar7 = pfVar3[2] != 0.0;
        }
        cVar6 = *(char *)(*(longlong *)(lVar29 + lVar32 + 0x10) + 0x4d0);
        if ((cVar6 == '\x04') ||
           (uStack_3e8 = _DAT_142e37950, uStack_3e0 = _UNK_142e37958, cVar6 == '\x01')) {
          uStack_3e8 = _DAT_143049370;
          uStack_3e0 = 0;
        }
        uVar30 = *(uint *)(param_4 + 8);
        uStack_258 = 0;
        uStack_254 = 0x200020;
        uStack_250 = 0x20;
        uStack_24e = 1;
        uStack_24c = 0x1090118;
        uStack_248 = CONCAT71(uStack_248._1_7_,4);
        lStack_2b0 = param_4;
        pdb_141749b70(&uStack_188,param_2,&UNK_143049788,0xd,&uStack_258);
        uVar8 = _UNK_142e37824;
        uVar22 = _DAT_142e37820;
        if (CONCAT22(uStack_186,uStack_188) == 1) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc8170(&UNK_143049a88,0x2b,&uStack_258,&UNK_143049a68,&UNK_143049798);
        }
        uVar57 = (uint)fVar4 ^ _DAT_142e37820;
        if ((uStack_170._4_4_ & 1) == 0) {
          puStack_340 = (uint *)0x0;
          puStack_338 = (undefined8 *)0x8;
          puStack_330 = (uint *)0x0;
          uVar25 = pdb_14177be60(*(undefined8 *)(param_2 + 0x208),&UNK_143331bc0,0x20,&puStack_340);
          pdb_140e291c0(&uStack_258,&UNK_143331bc0,0x20,uVar25,param_2);
          pdb_141789d60(&uStack_188,&uStack_258,auStack_408);
          uStack_258 = (uint)_DAT_143049380;
          uStack_254 = (undefined4)((ulonglong)_DAT_143049380 >> 0x20);
          uStack_250 = (undefined2)_UNK_143049388;
          uStack_24e = (undefined2)((ulonglong)_UNK_143049388 >> 0x10);
          uStack_24c = (undefined4)((ulonglong)_UNK_143049388 >> 0x20);
          pdb_140e28810(&uStack_188,&uStack_258);
        }
        uVar56 = (uint)fVar55 ^ uVar8;
        puStack_3d0 = param_1;
        pdb_141764a70(param_2,&UNK_1430497b0,9,&UNK_1430497b9,0x2c,auStack_408);
        uStack_188 = 0;
        uStack_186 = 0x60;
        uStack_184 = 0x10060;
        uStack_180._0_1_ = 4;
        uStack_180._1_1_ = 0;
        uStack_17e = 0x4601;
        uStack_17c = 0x301;
        uStack_17a = 0;
        uStack_178._0_4_ = 0x430497e5;
        uStack_178._4_4_ = 1;
        uStack_170._0_4_ = 0x15;
        uStack_170._4_4_ = 0;
        uVar27 = SUB81(&uStack_188,0);
        uStack_184 = pdb_140e2b4e0(param_2);
        uStack_180._0_1_ = 0x60;
        uStack_180._1_1_ = 0;
        uStack_17e = 0x60;
        uStack_17c = 1;
        uStack_17a = 4;
        uStack_179 = 0;
        uStack_178._0_4_ = 0x3014601;
        uStack_178._4_4_ = uStack_178._4_4_ & 0xffffff00;
        uStack_188 = 0;
        uStack_186 = 0;
        if (*(char *)(param_2 + 0x24c) == '\x01') {
          lVar23 = param_2;
          pdb_140e19620(&uStack_188);
          uVar27 = (undefined1)lVar23;
        }
        uStack_298 = CONCAT44(uStack_178._4_4_,(undefined4)uStack_178);
        uStack_2a8 = CONCAT22(uStack_186,uStack_188);
        uStack_2a4 = uStack_184;
        uStack_2a0 = CONCAT17(uStack_179,
                              CONCAT16(uStack_17a,
                                       CONCAT24(uStack_17c,
                                                CONCAT22(uStack_17e,
                                                         CONCAT11(uStack_180._1_1_,
                                                                  (undefined1)uStack_180)))));
        uVar21 = pdb_140e25e40(0x210);
        uStack_188 = 1;
        uStack_178._0_4_ = 0x430497fa;
        uStack_178._4_4_ = 1;
        uStack_170._0_4_ = 0x16;
        uStack_170._4_4_ = 0;
        uStack_184 = uVar21;
        uStack_180._0_1_ = uVar27;
        uStack_27c = pdb_140e2b4e0(param_2,&uStack_188);
        uStack_288 = CONCAT31(uStack_288._1_3_,uVar27);
        uStack_284 = 0xffffffff00000000;
        uStack_1c8 = 0;
        uStack_1c0 = 8;
        uStack_1b8 = 0;
        uStack_28c = uVar21;
        uVar25 = pdb_14177be60(*(undefined8 *)(param_2 + 0x208),&UNK_14333172e,0x29,&uStack_1c8);
        pdb_140e291c0(&uStack_258,&UNK_14333172e,0x29,uVar25,param_2);
        puStack_338 = (undefined8 *)0x6000000004;
        puStack_330 = (uint *)CONCAT44(uVar56,(uint)fVar54 ^ uVar22);
        puStack_328 = (undefined8 *)CONCAT44(puStack_328._4_4_,uVar57);
        puStack_340 = &uStack_28c;
        pdb_14179f630(&uStack_188,&uStack_258,&puStack_340);
        uStack_258 = (uint)_DAT_142f684d0;
        uVar21 = uStack_258;
        uStack_254 = (undefined4)((ulonglong)_DAT_142f684d0 >> 0x20);
        uVar37 = uStack_254;
        uStack_250 = (undefined2)_UNK_142f684d8;
        uVar15 = uStack_250;
        uStack_24e = (undefined2)((ulonglong)_UNK_142f684d8 >> 0x10);
        uVar17 = uStack_24e;
        uStack_24c = (undefined4)((ulonglong)_UNK_142f684d8 >> 0x20);
        uVar19 = uStack_24c;
        pdb_140e28810(&uStack_188,&uStack_258);
        uStack_1c8 = 0;
        uStack_1c0 = 8;
        uStack_1b8 = 0;
        uVar25 = pdb_14177be60(*(undefined8 *)(param_2 + 0x208),&UNK_1433316b3,0x27,&uStack_1c8);
        pdb_140e291c0(&uStack_258,&UNK_1433316b3,0x27,uVar25,param_2);
        puStack_340 = param_7;
        puStack_338 = (undefined8 *)&uStack_2a8;
        puStack_328 = (undefined8 *)CONCAT44(uVar56,(uint)fVar54 ^ uVar22);
        uStack_320 = (uint *)CONCAT44(1,uVar57);
        puStack_330 = &uStack_28c;
        pdb_14178afa0(&uStack_188,&uStack_258,&puStack_340);
        uStack_258 = (uint)_DAT_143049390;
        uVar57 = uStack_258;
        uStack_254 = (undefined4)((ulonglong)_DAT_143049390 >> 0x20);
        uVar14 = uStack_254;
        uStack_250 = (undefined2)_UNK_143049398;
        uVar16 = uStack_250;
        uStack_24e = (undefined2)((ulonglong)_UNK_143049398 >> 0x10);
        uVar18 = uStack_24e;
        uStack_24c = (undefined4)((ulonglong)_UNK_143049398 >> 0x20);
        uVar20 = uStack_24c;
        pdb_140e28810(&uStack_188,&uStack_258);
        if (bVar7) {
          uVar58 = (int)((uint)bVar38 << 0x1f) >> 0x1f;
          uVar59 = (int)((uint)bVar38 << 0x1f) >> 0x1f;
          uVar56 = CONCAT22(uVar52,uVar50) ^ uVar22;
          uVar25 = CONCAT44((~uVar59 & (uint)fVar10 | (uint)fVar12 & uVar59) ^ uVar8,
                            (~uVar58 & (uint)fVar9 | (uint)fVar11 & uVar58) ^ uVar22);
          uStack_188 = 0;
          uStack_186 = 0x60;
          uStack_184 = 0x10060;
          uStack_180._0_1_ = 4;
          uStack_180._1_1_ = 0;
          uStack_17e = 0x4601;
          uStack_17c = 0x301;
          uStack_17a = 0;
          uStack_178._0_4_ = 0x430498d8;
          uStack_178._4_4_ = 1;
          uStack_170._0_4_ = 0x1f;
          uStack_170._4_4_ = 0;
          uVar27 = SUB81(&uStack_188,0);
          uStack_184 = pdb_140e2b4e0(param_2);
          uStack_180._0_1_ = 0x60;
          uStack_180._1_1_ = 0;
          uStack_17e = 0x60;
          uStack_17c = 1;
          uStack_17a = 4;
          uStack_179 = 0;
          uStack_178._0_4_ = 0x3014601;
          uStack_178._4_4_ = uStack_178._4_4_ & 0xffffff00;
          uStack_188 = 0;
          uStack_186 = 0;
          if (*(char *)(param_2 + 0x24c) == '\x01') {
            lVar23 = param_2;
            pdb_140e19620(&uStack_188);
            uVar27 = (undefined1)lVar23;
          }
          uStack_378 = (undefined4)uStack_178;
          uStack_374 = uStack_178._4_4_;
          uStack_388._0_4_ = CONCAT22(uStack_186,uStack_188);
          uStack_388._4_4_ = uStack_184;
          uStack_380 = CONCAT17(uStack_179,
                                CONCAT16(uStack_17a,
                                         CONCAT24(uStack_17c,
                                                  CONCAT22(uStack_17e,
                                                           CONCAT11(uStack_180._1_1_,
                                                                    (undefined1)uStack_180)))));
          uVar22 = pdb_140e25e40(0x210);
          uStack_188 = 1;
          uStack_178._0_4_ = 0x430498f7;
          uStack_178._4_4_ = 1;
          uStack_170._0_4_ = 0x21;
          uStack_170._4_4_ = 0;
          uStack_184 = uVar22;
          uStack_180._0_1_ = uVar27;
          uStack_268 = pdb_140e2b4e0(param_2,&uStack_188);
          uStack_278._0_5_ = CONCAT14(uVar27,uVar22);
          uStack_270 = 0;
          uStack_26c = 0xffffffff;
          uStack_1c8 = 0;
          uStack_1c0 = 8;
          uStack_1b8 = 0;
          uVar26 = pdb_14177be60(*(undefined8 *)(param_2 + 0x208),&UNK_14333172e,0x29,&uStack_1c8);
          pdb_140e291c0(&uStack_258,&UNK_14333172e,0x29,uVar26,param_2);
          puStack_338 = (undefined8 *)0x6000000004;
          puStack_328 = (undefined8 *)CONCAT44(puStack_328._4_4_,uVar56);
          puStack_340 = (uint *)&uStack_278;
          puStack_330 = (uint *)uVar25;
          pdb_14179f630(&uStack_188,&uStack_258,&puStack_340);
          uStack_258 = uVar21;
          uStack_254 = uVar37;
          uStack_250 = uVar15;
          uStack_24e = uVar17;
          uStack_24c = uVar19;
          pdb_140e28810(&uStack_188,&uStack_258);
          uStack_1c8 = 0;
          uStack_1c0 = 8;
          uStack_1b8 = 0;
          uVar26 = pdb_14177be60(*(undefined8 *)(param_2 + 0x208),&UNK_1433316b3,0x27,&uStack_1c8);
          pdb_140e291c0(&uStack_258,&UNK_1433316b3,0x27,uVar26,param_2);
          puStack_340 = param_7;
          puStack_338 = &uStack_388;
          uStack_320 = (uint *)(ulonglong)uVar56;
          puStack_330 = (uint *)&uStack_278;
          puStack_328 = (undefined8 *)uVar25;
          pdb_14178afa0(&uStack_188,&uStack_258,&puStack_340);
          uStack_258 = uVar57;
          uStack_254 = uVar14;
          uStack_250 = uVar16;
          uStack_24e = uVar18;
          uStack_24c = uVar20;
          pdb_140e28810(&uStack_188,&uStack_258);
          uStack_178._0_4_ = uStack_378;
          uStack_178._4_4_ = uStack_374;
          uStack_1c8 = CONCAT44(uStack_388._4_4_,(undefined4)uStack_388);
          puStack_160._0_4_ = uStack_268;
          uStack_170._0_4_ = (uint)uStack_278;
          uStack_170._4_4_ = (uint)((ulonglong)uStack_278 >> 0x20);
          uStack_168._0_4_ = uStack_270;
          uStack_168._4_4_ = uStack_26c;
          uStack_1c0 = uStack_380;
          uStack_1ac = uStack_170._4_4_;
          uStack_1a8 = uStack_270;
          uStack_1a4 = uStack_26c;
          uStack_1a0 = uStack_268;
          uStack_1b8._4_1_ = (char)uStack_374;
          bVar38 = uStack_1b8._4_1_ == '\x02';
          uStack_1b8 = CONCAT44(uStack_374,uStack_378);
          uStack_1b0 = (uint)uStack_170;
        }
        else {
          uStack_1b8._0_5_ = CONCAT14(2,(undefined4)uStack_1b8);
          bVar38 = true;
        }
        uVar33 = (ushort)(uVar30 >> 0x10);
        uVar51 = (((ushort)uVar30 >> 3) - (ushort)(SUB162(_DAT_1430493a0 & ZEXT416(uVar30),0) == 0))
                 + 1;
        sVar53 = ((uVar33 >> 3) - (ushort)(SUB162(_DAT_1430493a0 & ZEXT416(uVar30),2) == 0)) + 1;
        uStack_258 = 0;
        uStack_250 = 0x40;
        uStack_24e = 1;
        uStack_24c = 0x17a011c;
        uStack_254 = CONCAT22(sVar53,uVar51);
        uStack_248 = CONCAT71(uStack_248._1_7_,4);
        pdb_14174a370(&uStack_188,param_2,&UNK_143049810,0x11,&uStack_258);
        if (CONCAT22(uStack_186,uStack_188) == 1) {
          uStack_258 = CONCAT22(uStack_17e,CONCAT11(uStack_180._1_1_,(undefined1)uStack_180));
          uStack_254 = (undefined4)
                       (CONCAT17(uStack_179,CONCAT16(uStack_17a,CONCAT24(uStack_17c,uStack_258))) >>
                       0x20);
                    /* WARNING: Subroutine does not return */
          pdb_142dc8170(&UNK_143049a88,0x2b,&uStack_258,&UNK_143049a68,&UNK_143049828);
        }
        uStack_3a8 = CONCAT26(uStack_17e,
                              CONCAT15(uStack_180._1_1_,CONCAT14((undefined1)uStack_180,uStack_184))
                             );
        uVar37 = CONCAT13(uStack_179,CONCAT12(uStack_17a,uStack_17c));
        uStack_3a0 = CONCAT44((undefined4)uStack_178,uVar37);
        uStack_398 = CONCAT44((uint)uStack_170,uStack_178._4_4_);
        uStack_428 = CONCAT44((undefined4)uStack_168,uStack_170._4_4_);
        uStack_420 = CONCAT44(puStack_160._0_4_,uStack_168._4_4_);
        uStack_258 = uStack_184;
        uStack_254 = (undefined4)((ulonglong)uStack_3a8 >> 0x20);
        uStack_250 = uStack_17c;
        uStack_24e = (undefined2)((uint)uVar37 >> 0x10);
        uStack_24c = (undefined4)uStack_178;
        uVar27 = uStack_158._4_1_;
        uStack_248 = uStack_398;
        uStack_240 = uStack_428;
        uStack_238 = uStack_420;
        if ((uStack_158._4_4_ & 1) == 0) {
          pdb_140e2b390(param_2,&uStack_428);
          pdb_140e2b390(param_2,&uStack_3a8);
        }
        uStack_258 = 0;
        uStack_250 = 0x40;
        uStack_24e = 1;
        uStack_24c = 0x14c011c;
        uStack_248 = CONCAT71(uStack_248._1_7_,4);
        uStack_254 = CONCAT22(sVar53,uVar51);
        pdb_14174a370(&uStack_188,param_2,&UNK_143049840,0x11,&uStack_258);
        bVar36 = uStack_158._4_1_;
        if (CONCAT22(uStack_186,uStack_188) == 1) {
          uStack_258 = CONCAT22(uStack_17e,CONCAT11(uStack_180._1_1_,(undefined1)uStack_180));
          uStack_254 = (undefined4)
                       (CONCAT17(uStack_179,CONCAT16(uStack_17a,CONCAT24(uStack_17c,uStack_258))) >>
                       0x20);
                    /* WARNING: Subroutine does not return */
          pdb_142dc8170(&UNK_143049a88,0x2b,&uStack_258,&UNK_143049a68,&UNK_143049858);
        }
        uStack_3c8 = CONCAT26(uStack_17e,
                              CONCAT15(uStack_180._1_1_,CONCAT14((undefined1)uStack_180,uStack_184))
                             );
        uVar37 = CONCAT13(uStack_179,CONCAT12(uStack_17a,uStack_17c));
        uStack_3c0 = CONCAT44((undefined4)uStack_178,uVar37);
        uStack_3b8 = CONCAT44((uint)uStack_170,uStack_178._4_4_);
        uStack_448 = CONCAT44((undefined4)uStack_168,uStack_170._4_4_);
        uStack_440 = CONCAT44(puStack_160._0_4_,uStack_168._4_4_);
        uStack_258 = uStack_184;
        uStack_254 = (undefined4)((ulonglong)uStack_3c8 >> 0x20);
        uStack_250 = uStack_17c;
        uStack_24e = (undefined2)((uint)uVar37 >> 0x10);
        uStack_24c = (undefined4)uStack_178;
        uStack_248 = uStack_3b8;
        uStack_240 = uStack_448;
        uStack_238 = uStack_440;
        if ((uStack_158._4_4_ & 1) == 0) {
          pdb_140e2b390(param_2,&uStack_448);
          pdb_140e2b390(param_2,&uStack_3c8);
        }
        lStack_190 = CONCAT71(lStack_190._1_7_,uVar27);
        uStack_258 = 0;
        uStack_254 = 0x200040;
        uStack_250 = 0x40;
        uStack_24e = 1;
        uStack_24c = 0x14c0118;
        uStack_248._0_1_ = 4;
        pdb_141749b70(&uStack_188,param_2,&UNK_143049870,0x19,&uStack_258);
        if (CONCAT22(uStack_186,uStack_188) != 1) {
          uStack_278 = CONCAT26(uStack_17e,
                                CONCAT15(uStack_180._1_1_,
                                         CONCAT14((undefined1)uStack_180,uStack_184)));
          uStack_270 = CONCAT13(uStack_179,CONCAT12(uStack_17a,uStack_17c));
          uStack_268 = uStack_178._4_4_;
          uStack_264 = (uint)uStack_170;
          uStack_260 = uStack_170._4_4_;
          uVar37 = uStack_260;
          uStack_26c = (undefined4)uStack_178;
          uStack_260._0_1_ = (undefined1)uStack_170._4_4_;
          uVar27 = (undefined1)uStack_260;
          puStack_340 = (uint *)0x0;
          puStack_338 = (undefined8 *)0x8;
          puStack_330 = (uint *)0x0;
          uStack_260 = uVar37;
          uVar25 = pdb_14177be60(*(undefined8 *)(param_2 + 0x208),&UNK_1433317db,0x2f,&puStack_340);
          pdb_140e291c0(&uStack_258,&UNK_1433317db,0x2f,uVar25,param_2);
          pdb_14178a190(&uStack_188,&uStack_258,&uStack_278,uVar27);
          uStack_258 = (uint)_DAT_1430493b0;
          uStack_254 = (undefined4)((ulonglong)_DAT_1430493b0 >> 0x20);
          uStack_250 = (undefined2)_UNK_1430493b8;
          uStack_24e = (undefined2)((ulonglong)_UNK_1430493b8 >> 0x10);
          uStack_24c = (undefined4)((ulonglong)_UNK_1430493b8 >> 0x20);
          pdb_140e28810(&uStack_188,&uStack_258);
          uStack_258 = 0;
          uStack_254 = CONCAT22(sVar53,uVar51);
          uStack_250 = 1;
          uStack_24e = 1;
          uStack_24c = 0x1090118;
          uStack_248 = CONCAT71(uStack_248._1_7_,2);
          pdb_14174a370(&uStack_188,param_2,&UNK_1430498a8,0x18,&uStack_258);
          uVar25 = uStack_2b8;
          if (CONCAT22(uStack_186,uStack_188) != 1) {
            puVar24 = &uStack_1c8;
            puVar13 = &uStack_1b0;
            if (bVar38) {
              puVar24 = (undefined8 *)&uStack_2a8;
              puVar13 = &uStack_28c;
            }
            uStack_468 = CONCAT26(uStack_17e,
                                  CONCAT15(uStack_180._1_1_,
                                           CONCAT14((undefined1)uStack_180,uStack_184)));
            uVar37 = CONCAT13(uStack_179,CONCAT12(uStack_17a,uStack_17c));
            uStack_460 = CONCAT44((undefined4)uStack_178,uVar37);
            uStack_458 = CONCAT44((uint)uStack_170,uStack_178._4_4_);
            uStack_488 = CONCAT44((undefined4)uStack_168,uStack_170._4_4_);
            uStack_480 = CONCAT44(puStack_160._0_4_,uStack_168._4_4_);
            uStack_258 = uStack_184;
            uStack_254 = (undefined4)((ulonglong)uStack_468 >> 0x20);
            uStack_250 = uStack_17c;
            uStack_24e = (undefined2)((uint)uVar37 >> 0x10);
            uStack_24c = (undefined4)uStack_178;
            if ((uStack_158._4_1_ & (byte)lStack_190) == 0) {
              bVar36 = 0;
            }
            uStack_248 = uStack_458;
            uStack_240 = uStack_488;
            uStack_238 = uStack_480;
            pdb_141526380(&uStack_388,uStack_2b8,param_2);
            pdb_141526cc0(&uStack_188,uVar25,param_2);
            uStack_364 = (undefined4)uStack_178;
            uStack_374 = CONCAT22(uStack_186,uStack_188);
            uStack_36c = CONCAT17(uStack_179,
                                  CONCAT16(uStack_17a,
                                           CONCAT24(uStack_17c,
                                                    CONCAT22(uStack_17e,
                                                             CONCAT11(uStack_180._1_1_,
                                                                      (undefined1)uStack_180)))));
            uStack_370 = uStack_184;
            lStack_190 = param_8 + 0x14;
            uStack_358 = 0;
            uStack_350 = 8;
            uStack_348 = 0;
            uVar25 = pdb_14177be60(*(undefined8 *)(param_2 + 0x208),&UNK_143331df2,0x29,&uStack_358)
            ;
            pdb_140e291c0(&puStack_340,&UNK_143331df2,0x29,uVar25,param_2);
            uVar25 = uStack_3e8;
            uStack_188 = SUB82(&uStack_488,0);
            uStack_186 = (undefined2)((ulonglong)&uStack_488 >> 0x10);
            uStack_184 = (uint)((ulonglong)&uStack_488 >> 0x20);
            uStack_180._0_1_ = (undefined1)param_6;
            uStack_180._1_1_ = (undefined1)((ulonglong)param_6 >> 8);
            uStack_17e = (undefined2)((ulonglong)param_6 >> 0x10);
            uStack_17c = (undefined2)((ulonglong)param_6 >> 0x20);
            uStack_17a = (undefined1)((ulonglong)param_6 >> 0x30);
            uStack_179 = (undefined1)((ulonglong)param_6 >> 0x38);
            uStack_178 = &uStack_3a8;
            uStack_170 = &uStack_468;
            uStack_168 = &uStack_428;
            puStack_160 = &uStack_3c8;
            uStack_158 = &uStack_448;
            puStack_150 = &uStack_278;
            lStack_148 = param_8;
            lStack_140 = lStack_190;
            puStack_138 = (undefined4 *)&uStack_388;
            uVar37 = (undefined4)uStack_3d8;
            uStack_128 = param_9;
            puStack_120 = (undefined8 *)&uStack_2a8;
            puStack_118 = &uStack_28c;
            uStack_100 = uStack_3e8;
            uStack_130 = uVar37;
            puStack_110 = puVar24;
            puStack_108 = puVar13;
            uStack_f8 = (uint)(fVar49 <= fVar48);
            bStack_f4 = bVar36;
            pdb_14179e3c0(&uStack_258,&puStack_340,&uStack_188);
            uStack_184 = (uint)uVar51;
            uStack_17e = 0;
            uStack_17c = 1;
            uStack_17a = 0;
            uStack_179 = 0;
            uStack_188 = 1;
            uStack_186 = 0;
            uStack_180 = sVar53;
            pdb_140e28810(&uStack_258,&uStack_188);
            uStack_358 = 0;
            uStack_350 = 8;
            uStack_348 = 0;
            uVar26 = pdb_14177be60(*(undefined8 *)(param_2 + 0x208),&UNK_143330bb6,0x23,&uStack_358)
            ;
            pdb_140e291c0(&uStack_258,&UNK_143330bb6,0x23,uVar26,param_2);
            puStack_340 = &uStack_374;
            puStack_338 = (undefined8 *)param_5;
            puStack_330 = (uint *)lStack_2b0;
            puStack_328 = (undefined8 *)&uStack_2a8;
            uStack_320 = &uStack_28c;
            puStack_318 = &uStack_3a8;
            puStack_310 = &uStack_3c8;
            lStack_308 = param_8;
            lStack_300 = lStack_190;
            puStack_2f8 = (undefined4 *)&uStack_388;
            uStack_2f0 = uVar25;
            uStack_2e8 = uVar37;
            pdb_141785d80(&uStack_188,&uStack_258,&puStack_340);
            uVar28 = (ulonglong)CONCAT24(uVar33,uVar30) & 0xffffffff0000ffff;
            uStack_254 = (undefined4)uVar28;
            uStack_250 = (undefined2)(uVar28 >> 0x20);
            uStack_24e = 0;
            uStack_24c = 1;
            uStack_258 = 1;
            pdb_140e28810(&uStack_188,&uStack_258);
            uVar26 = uStack_2b8;
            pdb_141535000(uStack_2b8,param_2);
            pdb_141534c10(uVar26,param_2);
            *(undefined8 *)((longlong)puStack_3d0 + 0x2c) = uStack_398;
            *(undefined8 *)((longlong)puStack_3d0 + 0x1c) = uStack_3a8;
            *(undefined8 *)((longlong)puStack_3d0 + 0x24) = uStack_3a0;
            *(undefined8 *)((longlong)puStack_3d0 + 0x44) = uStack_3b8;
            *(undefined8 *)((longlong)puStack_3d0 + 0x34) = uStack_3c8;
            *(undefined8 *)((longlong)puStack_3d0 + 0x3c) = uStack_3c0;
            *(undefined8 *)((longlong)puStack_3d0 + 0x5c) = uStack_298;
            *(ulonglong *)((longlong)puStack_3d0 + 0x4c) = CONCAT44(uStack_2a4,uStack_2a8);
            *(undefined8 *)((longlong)puStack_3d0 + 0x54) = uStack_2a0;
            *puStack_3d0 = CONCAT44(uStack_288,uStack_28c);
            puStack_3d0[1] = uStack_284;
            *(undefined4 *)(puStack_3d0 + 2) = uStack_27c;
            *(ulonglong *)((longlong)puStack_3d0 + 0x74) = CONCAT44(uStack_264,uStack_268);
            *(undefined8 *)((longlong)puStack_3d0 + 100) = uStack_278;
            *(ulonglong *)((longlong)puStack_3d0 + 0x6c) = CONCAT44(uStack_26c,uStack_270);
            *(undefined8 *)((longlong)puStack_3d0 + 0x14) = uVar25;
            return;
          }
          uStack_258 = CONCAT22(uStack_17e,CONCAT11(uStack_180._1_1_,(undefined1)uStack_180));
          uStack_254 = (undefined4)
                       (CONCAT17(uStack_179,CONCAT16(uStack_17a,CONCAT24(uStack_17c,uStack_258))) >>
                       0x20);
                    /* WARNING: Subroutine does not return */
          pdb_142dc8170(&UNK_143049a88,0x2b,&uStack_258,&UNK_143049a68,&UNK_1430498c0);
        }
        uStack_258 = CONCAT22(uStack_17e,CONCAT11(uStack_180._1_1_,(undefined1)uStack_180));
        uStack_254 = (undefined4)
                     (CONCAT17(uStack_179,CONCAT16(uStack_17a,CONCAT24(uStack_17c,uStack_258))) >>
                     0x20);
                    /* WARNING: Subroutine does not return */
        pdb_142dc8170(&UNK_143049a88,0x2b,&uStack_258,&UNK_143049a68,&UNK_143049890);
      }
      goto LAB_140aacd2f;
    }
    uVar33 = (ushort)(uVar30 - 1) & (ushort)uVar30;
    uVar30 = CONCAT22((short)(uVar30 - 1 >> 0x10),uVar33);
  }
  auVar41[0] = -(auVar44[0] == -1);
  auVar41[1] = -(auVar44[1] == -1);
  auVar41[2] = -(auVar44[2] == -1);
  auVar41[3] = -(auVar44[3] == -1);
  auVar41[4] = -(auVar44[4] == -1);
  auVar41[5] = -(auVar44[5] == -1);
  auVar41[6] = -(auVar44[6] == -1);
  auVar41[7] = -(auVar44[7] == -1);
  auVar41[8] = -(auVar44[8] == -1);
  auVar41[9] = -(auVar44[9] == -1);
  auVar41[10] = -(auVar44[10] == -1);
  auVar41[0xb] = -(auVar44[0xb] == -1);
  auVar41[0xc] = -(auVar44[0xc] == -1);
  auVar41[0xd] = -(auVar44[0xd] == -1);
  auVar41[0xe] = -(auVar44[0xe] == -1);
  auVar41[0xf] = -(auVar44[0xf] == -1);
  if ((((((((((((((((SUB161(auVar41 >> 7,0) & 1) != 0 || (SUB161(auVar41 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar41 >> 0x17,0) & 1) != 0) || (SUB161(auVar41 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar41 >> 0x27,0) & 1) != 0) || (SUB161(auVar41 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar41 >> 0x37,0) & 1) != 0) || (SUB161(auVar41 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar41 >> 0x47,0) & 1) != 0) || (SUB161(auVar41 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar41 >> 0x57,0) & 1) != 0) || (SUB161(auVar41 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar41 >> 0x67,0) & 1) != 0) || (SUB161(auVar41 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar41 >> 0x77,0) & 1) != 0) || auVar41[0xf] < '\0') {
LAB_140aacd2f:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143049770);
  }
  uVar34 = uVar34 + lVar31 + 0x10;
  lVar31 = lVar31 + 0x10;
  goto LAB_140aacba7;
LAB_140aacb10:
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
  if ((((((((((((((((SUB161(auVar40 >> 7,0) & 1) != 0 || (SUB161(auVar40 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar40 >> 0x17,0) & 1) != 0) || (SUB161(auVar40 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar40 >> 0x27,0) & 1) != 0) || (SUB161(auVar40 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar40 >> 0x37,0) & 1) != 0) || (SUB161(auVar40 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar40 >> 0x47,0) & 1) != 0) || (SUB161(auVar40 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar40 >> 0x57,0) & 1) != 0) || (SUB161(auVar40 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar40 >> 0x67,0) & 1) != 0) || (SUB161(auVar40 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar40 >> 0x77,0) & 1) != 0) || auVar40[0xf] < '\0') {
LAB_140aacd23:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143049758);
  }
  uVar34 = uVar34 + lVar32 + 0x10;
  lVar32 = lVar32 + 0x10;
  goto LAB_140aacaaf;
}

