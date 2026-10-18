// VA 0x1409b16b0, PDB extent 8410 bytes
// country_core::systems::render_loop::compute_passes::rasterize_terrain_stroke::rasterize_terrain_stroke
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/compute_passes/rasterize_terrain_stroke.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::render_loop::compute_passes::rasterize_terrain_stroke::rasterize_terrain_stroke
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/compute_passes/rasterize_terrain_stroke.rs
   Extent: 8410 */

longlong pdb_1409b16b0(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  undefined1 (*pauVar2) [16];
  char *pcVar3;
  byte bVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int *piVar11;
  code *pcVar12;
  uint uVar13;
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
  char cVar28;
  char cVar29;
  float fVar30;
  longlong *plVar31;
  char cVar32;
  undefined4 uVar33;
  longlong lVar34;
  undefined *puVar35;
  undefined1 (*pauVar36) [16];
  byte *pbVar37;
  undefined8 uVar38;
  undefined8 *puVar39;
  ulonglong uVar40;
  undefined8 uVar41;
  uint uVar42;
  ulonglong uVar43;
  undefined4 *puVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  uint uVar48;
  ulonglong *puVar49;
  longlong lVar50;
  longlong lVar51;
  ulonglong uVar52;
  ulonglong uVar53;
  ushort uVar54;
  ulonglong uVar55;
  undefined *puVar56;
  undefined1 (*pauVar57) [16];
  bool bVar58;
  byte bVar59;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auStack_2c0 [24];
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  undefined8 uStack_2a0;
  undefined *puStack_298;
  longlong lStack_288;
  longlong lStack_280;
  undefined *puStack_278;
  undefined8 uStack_270;
  undefined *puStack_268;
  undefined8 uStack_260;
  undefined1 auStack_200 [24];
  longlong *plStack_1e8;
  int iStack_1dc;
  longlong lStack_1d8;
  undefined8 uStack_1d0;
  ushort uStack_1c8;
  undefined2 uStack_1c6;
  undefined4 uStack_1c4;
  ushort uStack_1c0;
  undefined4 uStack_1be;
  undefined1 uStack_1ba;
  undefined1 uStack_1b9;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined *puStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  undefined4 *puStack_140;
  undefined4 *puStack_138;
  undefined8 uStack_130;
  undefined2 uStack_128;
  undefined6 uStack_126;
  undefined4 *puStack_120;
  undefined8 uStack_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  ulonglong uStack_d8;
  byte *pbStack_d0;
  ulonglong uStack_c8;
  longlong *plStack_c0;
  longlong lStack_b8;
  undefined1 uStack_a9;
  ulonglong *puStack_a8;
  longlong lStack_a0;
  longlong *plStack_98;
  longlong lStack_90;
  undefined1 (*pauStack_88) [16];
  undefined8 uStack_80;
  
  cVar29 = UNK_142e33c9f;
  cVar28 = UNK_142e33c9e;
  cVar27 = UNK_142e33c9d;
  cVar26 = UNK_142e33c9c;
  cVar25 = UNK_142e33c9b;
  cVar24 = UNK_142e33c9a;
  cVar23 = UNK_142e33c99;
  cVar22 = UNK_142e33c98;
  cVar21 = UNK_142e33c97;
  cVar20 = UNK_142e33c96;
  cVar19 = UNK_142e33c95;
  cVar18 = UNK_142e33c94;
  cVar17 = UNK_142e33c93;
  cVar16 = UNK_142e33c92;
  cVar15 = UNK_142e33c91;
  cVar14 = DAT_142e33c90;
  uStack_80 = 0xfffffffffffffffe;
  lStack_90 = param_1;
  if (*(longlong *)(param_2 + 0x88) != 0) {
    lVar34 = *(longlong *)(param_2 + 0x70);
    uVar43 = 0xd94d84a85033821;
    lVar50 = 0;
    while( true ) {
      uVar43 = uVar43 & *(ulonglong *)(param_2 + 0x78);
      auVar60 = *(undefined1 (*) [16])(lVar34 + uVar43);
      auVar65[0] = -(auVar60[0] == DAT_142e33c90);
      auVar65[1] = -(auVar60[1] == UNK_142e33c91);
      auVar65[2] = -(auVar60[2] == UNK_142e33c92);
      auVar65[3] = -(auVar60[3] == UNK_142e33c93);
      auVar65[4] = -(auVar60[4] == UNK_142e33c94);
      auVar65[5] = -(auVar60[5] == UNK_142e33c95);
      auVar65[6] = -(auVar60[6] == UNK_142e33c96);
      auVar65[7] = -(auVar60[7] == UNK_142e33c97);
      auVar65[8] = -(auVar60[8] == UNK_142e33c98);
      auVar65[9] = -(auVar60[9] == UNK_142e33c99);
      auVar65[10] = -(auVar60[10] == UNK_142e33c9a);
      auVar65[0xb] = -(auVar60[0xb] == UNK_142e33c9b);
      auVar65[0xc] = -(auVar60[0xc] == UNK_142e33c9c);
      auVar65[0xd] = -(auVar60[0xd] == UNK_142e33c9d);
      auVar65[0xe] = -(auVar60[0xe] == UNK_142e33c9e);
      auVar65[0xf] = -(auVar60[0xf] == UNK_142e33c9f);
      uVar54 = (ushort)(SUB161(auVar65 >> 7,0) & 1) | (ushort)(SUB161(auVar65 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar65 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar65 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar65 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar65 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar65 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar65 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar65 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar65 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar65 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar65 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar65 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar65 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar65 >> 0x77,0) & 1) << 0xe | (ushort)(auVar65[0xf] >> 7) << 0xf;
      uVar42 = (uint)uVar54;
      while (lStack_b8 = param_2, uVar54 != 0) {
        uVar48 = 0;
        for (uVar13 = uVar42; (uVar13 & 1) == 0; uVar13 = uVar13 >> 1 | 0x80000000) {
          uVar48 = uVar48 + 1;
        }
        uVar55 = uVar48 + uVar43 & *(ulonglong *)(param_2 + 0x78);
        pcVar3 = (char *)(lVar34 + -0x18 + uVar55 * -0x18);
        auVar66[0] = -(*pcVar3 == DAT_143028df0);
        auVar66[1] = -(pcVar3[1] == UNK_143028df1);
        auVar66[2] = -(pcVar3[2] == UNK_143028df2);
        auVar66[3] = -(pcVar3[3] == UNK_143028df3);
        auVar66[4] = -(pcVar3[4] == UNK_143028df4);
        auVar66[5] = -(pcVar3[5] == UNK_143028df5);
        auVar66[6] = -(pcVar3[6] == UNK_143028df6);
        auVar66[7] = -(pcVar3[7] == UNK_143028df7);
        auVar66[8] = -(pcVar3[8] == UNK_143028df8);
        auVar66[9] = -(pcVar3[9] == UNK_143028df9);
        auVar66[10] = -(pcVar3[10] == UNK_143028dfa);
        auVar66[0xb] = -(pcVar3[0xb] == UNK_143028dfb);
        auVar66[0xc] = -(pcVar3[0xc] == UNK_143028dfc);
        auVar66[0xd] = -(pcVar3[0xd] == UNK_143028dfd);
        auVar66[0xe] = -(pcVar3[0xe] == UNK_143028dfe);
        auVar66[0xf] = -(pcVar3[0xf] == UNK_143028dff);
        if ((ushort)((ushort)(SUB161(auVar66 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar66 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar66 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar66 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar66 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar66 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar66 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar66 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar66 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar66 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar66 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar66 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar66 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar66 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar66 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar66[0xf] >> 7) << 0xf) == 0xffff) {
          uVar43 = *(ulonglong *)(lVar34 + uVar55 * -0x18 + -8);
          if ((*(ulonglong *)(param_2 + 0x210) <= uVar43) ||
             (uVar43 = *(ulonglong *)(*(longlong *)(param_2 + 0x208) + uVar43 * 8), uVar43 == 0))
          goto LAB_1409b19fc;
          lVar34 = ~uVar43 * 0x40;
          if (*(longlong *)(*(longlong *)(param_2 + 0x1d8) + 0x20 + lVar34) == 0)
          goto LAB_1409b19fc;
          lVar34 = *(longlong *)(param_2 + 0x1d8) + lVar34;
          lStack_1d8 = *(longlong *)(lVar34 + 0x10);
          *(undefined4 *)(lVar34 + 0x3c) = *(undefined4 *)(param_2 + 0x5a8);
          if (*(longlong *)(param_2 + 0x88) == 0) goto LAB_1409b1a85;
          lVar34 = *(longlong *)(param_2 + 0x70);
          uVar43 = 0x7057b4358e925fdb;
          lVar50 = 0;
          goto LAB_1409b1847;
        }
        uVar54 = (ushort)(uVar42 - 1) & (ushort)uVar42;
        uVar42 = CONCAT22((short)(uVar42 - 1 >> 0x10),uVar54);
      }
      auVar63[0] = -(auVar60[0] == -1);
      auVar63[1] = -(auVar60[1] == -1);
      auVar63[2] = -(auVar60[2] == -1);
      auVar63[3] = -(auVar60[3] == -1);
      auVar63[4] = -(auVar60[4] == -1);
      auVar63[5] = -(auVar60[5] == -1);
      auVar63[6] = -(auVar60[6] == -1);
      auVar63[7] = -(auVar60[7] == -1);
      auVar63[8] = -(auVar60[8] == -1);
      auVar63[9] = -(auVar60[9] == -1);
      auVar63[10] = -(auVar60[10] == -1);
      auVar63[0xb] = -(auVar60[0xb] == -1);
      auVar63[0xc] = -(auVar60[0xc] == -1);
      auVar63[0xd] = -(auVar60[0xd] == -1);
      auVar63[0xe] = -(auVar60[0xe] == -1);
      auVar63[0xf] = -(auVar60[0xf] == -1);
      if ((((((((((((((((SUB161(auVar63 >> 7,0) & 1) != 0 || (SUB161(auVar63 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar63 >> 0x17,0) & 1) != 0) || (SUB161(auVar63 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar63 >> 0x27,0) & 1) != 0) || (SUB161(auVar63 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar63 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar63 >> 0x3f,0) & 1) != 0) || (SUB161(auVar63 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar63 >> 0x4f,0) & 1) != 0) || (SUB161(auVar63 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar63 >> 0x5f,0) & 1) != 0) || (SUB161(auVar63 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar63 >> 0x6f,0) & 1) != 0) || (SUB161(auVar63 >> 0x77,0) & 1) != 0) ||
          auVar63[0xf] < '\0') break;
      uVar43 = uVar43 + lVar50 + 0x10;
      lVar50 = lVar50 + 0x10;
    }
  }
LAB_1409b19fc:
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_143029b90);
LAB_1409b1847:
  uVar43 = uVar43 & *(ulonglong *)(param_2 + 0x78);
  auVar60 = *(undefined1 (*) [16])(lVar34 + uVar43);
  auVar71[0] = -(auVar60[0] == DAT_142e33d90);
  auVar71[1] = -(auVar60[1] == DAT_142e33d90._1_1_);
  auVar71[2] = -(auVar60[2] == DAT_142e33d90._2_1_);
  auVar71[3] = -(auVar60[3] == DAT_142e33d90._3_1_);
  auVar71[4] = -(auVar60[4] == DAT_142e33d90._4_1_);
  auVar71[5] = -(auVar60[5] == DAT_142e33d90._5_1_);
  auVar71[6] = -(auVar60[6] == DAT_142e33d90._6_1_);
  auVar71[7] = -(auVar60[7] == DAT_142e33d90._7_1_);
  auVar71[8] = -(auVar60[8] == DAT_142e33d90._8_1_);
  auVar71[9] = -(auVar60[9] == DAT_142e33d90._9_1_);
  auVar71[10] = -(auVar60[10] == DAT_142e33d90._10_1_);
  auVar71[0xb] = -(auVar60[0xb] == DAT_142e33d90._11_1_);
  auVar71[0xc] = -(auVar60[0xc] == DAT_142e33d90._12_1_);
  auVar71[0xd] = -(auVar60[0xd] == DAT_142e33d90._13_1_);
  auVar71[0xe] = -(auVar60[0xe] == DAT_142e33d90._14_1_);
  auVar71[0xf] = -(auVar60[0xf] == DAT_142e33d90._15_1_);
  uVar54 = (ushort)(SUB161(auVar71 >> 7,0) & 1) | (ushort)(SUB161(auVar71 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar71 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar71 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar71 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar71 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar71 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar71 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar71 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar71 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar71 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar71 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar71 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar71 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar71 >> 0x77,0) & 1) << 0xe | (ushort)(auVar71[0xf] >> 7) << 0xf;
  uVar42 = (uint)uVar54;
  while (uVar54 != 0) {
    uVar48 = 0;
    for (uVar13 = uVar42; (uVar13 & 1) == 0; uVar13 = uVar13 >> 1 | 0x80000000) {
      uVar48 = uVar48 + 1;
    }
    uVar55 = uVar48 + uVar43 & *(ulonglong *)(param_2 + 0x78);
    pcVar3 = (char *)(lVar34 + -0x18 + uVar55 * -0x18);
    auVar72[0] = -(*pcVar3 == DAT_142e34350);
    auVar72[1] = -(pcVar3[1] == DAT_142e34350._1_1_);
    auVar72[2] = -(pcVar3[2] == DAT_142e34350._2_1_);
    auVar72[3] = -(pcVar3[3] == DAT_142e34350._3_1_);
    auVar72[4] = -(pcVar3[4] == DAT_142e34350._4_1_);
    auVar72[5] = -(pcVar3[5] == DAT_142e34350._5_1_);
    auVar72[6] = -(pcVar3[6] == DAT_142e34350._6_1_);
    auVar72[7] = -(pcVar3[7] == DAT_142e34350._7_1_);
    auVar72[8] = -(pcVar3[8] == DAT_142e34350._8_1_);
    auVar72[9] = -(pcVar3[9] == DAT_142e34350._9_1_);
    auVar72[10] = -(pcVar3[10] == DAT_142e34350._10_1_);
    auVar72[0xb] = -(pcVar3[0xb] == DAT_142e34350._11_1_);
    auVar72[0xc] = -(pcVar3[0xc] == DAT_142e34350._12_1_);
    auVar72[0xd] = -(pcVar3[0xd] == DAT_142e34350._13_1_);
    auVar72[0xe] = -(pcVar3[0xe] == DAT_142e34350._14_1_);
    auVar72[0xf] = -(pcVar3[0xf] == DAT_142e34350._15_1_);
    if ((ushort)((ushort)(SUB161(auVar72 >> 7,0) & 1) | (ushort)(SUB161(auVar72 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar72 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar72 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar72 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar72 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar72 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar72 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar72 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar72 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar72 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar72 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar72 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar72 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar72 >> 0x77,0) & 1) << 0xe | (ushort)(auVar72[0xf] >> 7) << 0xf
                ) == 0xffff) {
      uVar55 = *(ulonglong *)(lVar34 + uVar55 * -0x18 + -8);
      if ((*(ulonglong *)(param_2 + 0x210) <= uVar55) ||
         (uVar55 = *(ulonglong *)(*(longlong *)(param_2 + 0x208) + uVar55 * 8), uVar55 == 0))
      goto LAB_1409b1a85;
      lVar34 = ~uVar55 * 0x40;
      if (*(longlong *)(*(longlong *)(param_2 + 0x1d8) + 0x20 + lVar34) == 0) goto LAB_1409b1a85;
      lVar34 = *(longlong *)(*(longlong *)(param_2 + 0x1d8) + lVar34 + 0x10);
      uVar41 = CONCAT71((int7)(uVar43 >> 8),0xf);
      plStack_1e8 = (longlong *)pdb_140a2e6e0(lVar34,uVar41,&UNK_143029bc0);
      puVar44 = (undefined4 *)CONCAT71((int7)((ulonglong)uVar41 >> 8),10);
      uStack_1d0 = uVar41;
      plStack_c0 = (longlong *)pdb_140a2e6e0(lVar34);
      puStack_120 = puVar44;
      if (*(longlong *)(param_2 + 0x88) == 0) goto LAB_1409b1b5e;
      lVar50 = *(longlong *)(param_2 + 0x70);
      uVar43 = 0xd1d45189b47d6e84;
      lVar51 = 0;
      goto LAB_1409b198b;
    }
    uVar54 = (ushort)(uVar42 - 1) & (ushort)uVar42;
    uVar42 = CONCAT22((short)(uVar42 - 1 >> 0x10),uVar54);
  }
  goto LAB_1409b18a0;
LAB_1409b198b:
  uVar43 = uVar43 & *(ulonglong *)(param_2 + 0x78);
  auVar60 = *(undefined1 (*) [16])(lVar50 + uVar43);
  auVar73[0] = -(auVar60[0] == DAT_143022d00);
  auVar73[1] = -(auVar60[1] == DAT_143022d00._1_1_);
  auVar73[2] = -(auVar60[2] == DAT_143022d00._2_1_);
  auVar73[3] = -(auVar60[3] == DAT_143022d00._3_1_);
  auVar73[4] = -(auVar60[4] == DAT_143022d00._4_1_);
  auVar73[5] = -(auVar60[5] == DAT_143022d00._5_1_);
  auVar73[6] = -(auVar60[6] == DAT_143022d00._6_1_);
  auVar73[7] = -(auVar60[7] == DAT_143022d00._7_1_);
  auVar73[8] = -(auVar60[8] == DAT_143022d00._8_1_);
  auVar73[9] = -(auVar60[9] == DAT_143022d00._9_1_);
  auVar73[10] = -(auVar60[10] == DAT_143022d00._10_1_);
  auVar73[0xb] = -(auVar60[0xb] == DAT_143022d00._11_1_);
  auVar73[0xc] = -(auVar60[0xc] == DAT_143022d00._12_1_);
  auVar73[0xd] = -(auVar60[0xd] == DAT_143022d00._13_1_);
  auVar73[0xe] = -(auVar60[0xe] == DAT_143022d00._14_1_);
  auVar73[0xf] = -(auVar60[0xf] == DAT_143022d00._15_1_);
  uVar54 = (ushort)(SUB161(auVar73 >> 7,0) & 1) | (ushort)(SUB161(auVar73 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar73 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar73 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar73 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar73 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar73 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar73 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar73 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar73 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar73 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar73 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar73 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar73 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar73 >> 0x77,0) & 1) << 0xe | (ushort)(auVar73[0xf] >> 7) << 0xf;
  uVar42 = (uint)uVar54;
  while (uVar54 != 0) {
    uVar48 = 0;
    for (uVar13 = uVar42; (uVar13 & 1) == 0; uVar13 = uVar13 >> 1 | 0x80000000) {
      uVar48 = uVar48 + 1;
    }
    uVar55 = uVar48 + uVar43 & *(ulonglong *)(param_2 + 0x78);
    pcVar3 = (char *)(lVar50 + -0x18 + uVar55 * -0x18);
    auVar74[0] = -(*pcVar3 == DAT_143022d10);
    auVar74[1] = -(pcVar3[1] == DAT_143022d10._1_1_);
    auVar74[2] = -(pcVar3[2] == DAT_143022d10._2_1_);
    auVar74[3] = -(pcVar3[3] == DAT_143022d10._3_1_);
    auVar74[4] = -(pcVar3[4] == DAT_143022d10._4_1_);
    auVar74[5] = -(pcVar3[5] == DAT_143022d10._5_1_);
    auVar74[6] = -(pcVar3[6] == DAT_143022d10._6_1_);
    auVar74[7] = -(pcVar3[7] == DAT_143022d10._7_1_);
    auVar74[8] = -(pcVar3[8] == DAT_143022d10._8_1_);
    auVar74[9] = -(pcVar3[9] == DAT_143022d10._9_1_);
    auVar74[10] = -(pcVar3[10] == DAT_143022d10._10_1_);
    auVar74[0xb] = -(pcVar3[0xb] == DAT_143022d10._11_1_);
    auVar74[0xc] = -(pcVar3[0xc] == DAT_143022d10._12_1_);
    auVar74[0xd] = -(pcVar3[0xd] == DAT_143022d10._13_1_);
    auVar74[0xe] = -(pcVar3[0xe] == DAT_143022d10._14_1_);
    auVar74[0xf] = -(pcVar3[0xf] == DAT_143022d10._15_1_);
    if ((ushort)((ushort)(SUB161(auVar74 >> 7,0) & 1) | (ushort)(SUB161(auVar74 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar74 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar74 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar74 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar74 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar74 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar74 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar74 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar74 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar74 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar74 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar74 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar74 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar74 >> 0x77,0) & 1) << 0xe | (ushort)(auVar74[0xf] >> 7) << 0xf
                ) == 0xffff) {
      uVar43 = *(ulonglong *)(lVar50 + uVar55 * -0x18 + -8);
      if ((*(ulonglong *)(lStack_b8 + 0x210) <= uVar43) ||
         (uVar43 = *(ulonglong *)(*(longlong *)(lStack_b8 + 0x208) + uVar43 * 8), uVar43 == 0))
      goto LAB_1409b1b5e;
      lVar50 = ~uVar43 * 0x40;
      if (*(longlong *)(*(longlong *)(lStack_b8 + 0x1d8) + 0x20 + lVar50) == 0) goto LAB_1409b1b5e;
      lVar50 = *(longlong *)(*(longlong *)(lStack_b8 + 0x1d8) + lVar50 + 0x10);
      lStack_a0 = lVar34;
      if ((*(longlong *)(lVar50 + 0x30) == 0 && *(longlong *)(lVar50 + 0x10) == 0) &&
         (*(char *)(lStack_1d8 + 0x40) != '\0')) {
        uVar33 = 0;
        goto LAB_1409b28df;
      }
      uStack_d8 = 0;
      pbStack_d0 = (byte *)0x8;
      uStack_c8 = 0;
      cVar32 = pdb_140e94b40();
      if (cVar32 == '\0') {
        uStack_118._0_4_ = 0;
        goto LAB_1409b1c09;
      }
      puVar35 = &UNK_143029c5e;
      puVar56 = &UNK_143029c08;
      goto LAB_1409b1ad0;
    }
    uVar54 = (ushort)(uVar42 - 1) & (ushort)uVar42;
    uVar42 = CONCAT22((short)(uVar42 - 1 >> 0x10),uVar54);
  }
  auVar68[0] = -(auVar60[0] == -1);
  auVar68[1] = -(auVar60[1] == -1);
  auVar68[2] = -(auVar60[2] == -1);
  auVar68[3] = -(auVar60[3] == -1);
  auVar68[4] = -(auVar60[4] == -1);
  auVar68[5] = -(auVar60[5] == -1);
  auVar68[6] = -(auVar60[6] == -1);
  auVar68[7] = -(auVar60[7] == -1);
  auVar68[8] = -(auVar60[8] == -1);
  auVar68[9] = -(auVar60[9] == -1);
  auVar68[10] = -(auVar60[10] == -1);
  auVar68[0xb] = -(auVar60[0xb] == -1);
  auVar68[0xc] = -(auVar60[0xc] == -1);
  auVar68[0xd] = -(auVar60[0xd] == -1);
  auVar68[0xe] = -(auVar60[0xe] == -1);
  auVar68[0xf] = -(auVar60[0xf] == -1);
  if ((((((((((((((((SUB161(auVar68 >> 7,0) & 1) != 0 || (SUB161(auVar68 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar68 >> 0x17,0) & 1) != 0) || (SUB161(auVar68 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar68 >> 0x27,0) & 1) != 0) || (SUB161(auVar68 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar68 >> 0x37,0) & 1) != 0) || (SUB161(auVar68 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar68 >> 0x47,0) & 1) != 0) || (SUB161(auVar68 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar68 >> 0x57,0) & 1) != 0) || (SUB161(auVar68 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar68 >> 0x67,0) & 1) != 0) || (SUB161(auVar68 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar68 >> 0x77,0) & 1) != 0) || auVar68[0xf] < '\0') {
LAB_1409b1b5e:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143029bf0);
  }
  uVar43 = uVar43 + lVar51 + 0x10;
  lVar51 = lVar51 + 0x10;
  goto LAB_1409b198b;
LAB_1409b18a0:
  auVar67[0] = -(auVar60[0] == -1);
  auVar67[1] = -(auVar60[1] == -1);
  auVar67[2] = -(auVar60[2] == -1);
  auVar67[3] = -(auVar60[3] == -1);
  auVar67[4] = -(auVar60[4] == -1);
  auVar67[5] = -(auVar60[5] == -1);
  auVar67[6] = -(auVar60[6] == -1);
  auVar67[7] = -(auVar60[7] == -1);
  auVar67[8] = -(auVar60[8] == -1);
  auVar67[9] = -(auVar60[9] == -1);
  auVar67[10] = -(auVar60[10] == -1);
  auVar67[0xb] = -(auVar60[0xb] == -1);
  auVar67[0xc] = -(auVar60[0xc] == -1);
  auVar67[0xd] = -(auVar60[0xd] == -1);
  auVar67[0xe] = -(auVar60[0xe] == -1);
  auVar67[0xf] = -(auVar60[0xf] == -1);
  if ((((((((((((((((SUB161(auVar67 >> 7,0) & 1) != 0 || (SUB161(auVar67 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar67 >> 0x17,0) & 1) != 0) || (SUB161(auVar67 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar67 >> 0x27,0) & 1) != 0) || (SUB161(auVar67 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar67 >> 0x37,0) & 1) != 0) || (SUB161(auVar67 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar67 >> 0x47,0) & 1) != 0) || (SUB161(auVar67 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar67 >> 0x57,0) & 1) != 0) || (SUB161(auVar67 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar67 >> 0x67,0) & 1) != 0) || (SUB161(auVar67 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar67 >> 0x77,0) & 1) != 0) || auVar67[0xf] < '\0') {
LAB_1409b1a85:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143029ba8);
  }
  uVar43 = uVar43 + lVar50 + 0x10;
  lVar50 = lVar50 + 0x10;
  goto LAB_1409b1847;
LAB_1409b1ad0:
  do {
    pbVar37 = puVar35 + -1;
    uVar42 = (uint)(char)*pbVar37;
    if ((int)uVar42 < 0) {
      bVar59 = puVar35[-2];
      if ((char)bVar59 < -0x40) {
        bVar4 = puVar35[-3];
        if ((char)bVar4 < -0x40) {
          pbVar1 = puVar35 + -4;
          puVar35 = puVar35 + -4;
          uVar42 = bVar4 & 0x3f | (*pbVar1 & 7) << 6;
        }
        else {
          puVar35 = puVar35 + -3;
          uVar42 = bVar4 & 0xf;
        }
        uVar42 = bVar59 & 0x3f | uVar42 << 6;
      }
      else {
        puVar35 = puVar35 + -2;
        uVar42 = bVar59 & 0x1f;
      }
      uVar42 = (uint)(*pbVar37 & 0x3f) | uVar42 << 6;
      if (uVar42 != 0x5c) goto LAB_1409b1b49;
LAB_1409b1b77:
      if ((undefined *)0x56 < puVar35 + -0x143029c07) {
        pdb_142dc8070(&UNK_143029c08,0x56,puVar35 + -0x143029c07,0x56,&UNK_14302a628);
        goto LAB_1409b304d;
      }
      lVar34 = 0x55 - (longlong)(puVar35 + -0x143029c08);
      puVar56 = puVar35 + 1;
      goto LAB_1409b1b9a;
    }
    puVar35 = puVar35 + -1;
    if (uVar42 == 0x5c) goto LAB_1409b1b77;
LAB_1409b1b49:
    if (uVar42 == 0x2f) goto LAB_1409b1b77;
  } while (puVar35 != &UNK_143029c08);
  lVar34 = 0x56;
LAB_1409b1b9a:
  pauVar36 = (undefined1 (*) [16])pdb_140e97000();
  if ((pauVar36[6][8] == '\x01') ||
     (pauVar36 = (undefined1 (*) [16])pdb_142d8ec20(pauVar36,0),
     pauVar36 != (undefined1 (*) [16])0x0)) {
    if (*(longlong *)*pauVar36 == 0) {
      *(undefined8 *)*pauVar36 = 0xffffffffffffffff;
      pauStack_88 = pauVar36;
      uVar41 = pdb_140e94f10(*pauVar36 + 8,&UNK_143029c5e,0x16,puVar56,lVar34,1,0);
      *(longlong *)*pauStack_88 = *(longlong *)*pauStack_88 + 1;
      uStack_110 = (undefined4)uVar41;
      uStack_10c = (undefined4)((ulonglong)uVar41 >> 0x20);
      uStack_118._0_4_ = 1;
LAB_1409b1c09:
      fVar30 = _DAT_142e37848;
      uStack_118._4_4_ = 0;
      pauVar57 = *(undefined1 (**) [16])(lStack_1d8 + 8);
      auVar60 = *pauVar57;
      pauVar36 = pauVar57 + 1;
      uVar42 = ~(uint)(ushort)((ushort)(SUB161(auVar60 >> 7,0) & 1) |
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
                              (ushort)(byte)(auVar60[0xf] >> 7) << 0xf);
      puVar49 = *(ulonglong **)(lStack_1d8 + 0x20);
LAB_1409b1c89:
      if (puVar49 != (ulonglong *)0x0) {
        if ((short)uVar42 == 0) {
          do {
            auVar60 = *pauVar36;
            pauVar57 = pauVar57 + -0x30;
            pauVar36 = pauVar36 + 1;
            uVar42 = (ushort)((ushort)(SUB161(auVar60 >> 7,0) & 1) |
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
                             (ushort)(byte)(auVar60[0xf] >> 7) << 0xf) ^ 0xffff;
          } while (uVar42 == 0);
        }
        uVar48 = 0;
        for (uVar13 = uVar42; (uVar13 & 1) == 0; uVar13 = uVar13 >> 1 | 0x80000000) {
          uVar48 = uVar48 + 1;
        }
        uVar43 = (ulonglong)uVar48;
        uVar42 = uVar42 - 1 & uVar42;
        puVar49 = (ulonglong *)((longlong)puVar49 + -1);
        if ((fVar30 < *(float *)(pauVar57[uVar43 * -3 + -1] + 8)) &&
           (pauVar2 = pauVar57 + uVar43 * -3, *(longlong *)(pauVar2[-2] + 8) != 0)) {
          if (0xffff < uStack_c8) {
            if (_DAT_143ca4278 != 0) {
              lStack_288 = CONCAT71(lStack_288._1_7_,1);
              uStack_1c8 = (ushort)&lStack_288;
              uStack_1c6 = (undefined2)((ulonglong)&lStack_288 >> 0x10);
              uStack_1c4 = (undefined4)((ulonglong)&lStack_288 >> 0x20);
              pdb_142dc7060(&DAT_143ca4278,0,&uStack_1c8,&UNK_14302a2c8,&UNK_143029cb8);
            }
            pdb_1400f0d40(&uStack_1c8,_DAT_143cb2c78);
            if (CONCAT22(uStack_1c6,uStack_1c8) == 1) {
              lStack_280 = CONCAT71(lStack_280._1_7_,puStack_1b8._0_1_);
                    /* WARNING: Subroutine does not return */
              pdb_142dc8170(&UNK_143029cd0,0x13,&lStack_288,&UNK_14302a3d8,&UNK_143029cb8);
            }
            pauStack_88 = (undefined1 (*) [16])
                          CONCAT17(uStack_1b9,CONCAT16(uStack_1ba,CONCAT42(uStack_1be,uStack_1c0)));
            plStack_98 = (longlong *)CONCAT71(plStack_98._1_7_,puStack_1b8._0_1_);
            pdb_14007ee60();
            pbVar37 = pub_1406abab0(0xf,1);
            if (pbVar37 == (byte *)0x0) {
              pdb_142dc7e2a(1,0xf);
              goto LAB_1409b304d;
            }
            pbVar37[7] = 0x70;
            pbVar37[8] = 0x61;
            pbVar37[9] = 0x74;
            pbVar37[10] = 0x68;
            pbVar37[0xb] = 0x21;
            pbVar37[0xc] = 0x20;
            pbVar37[0xd] = 0x28;
            pbVar37[0xe] = 0x29;
            pbVar37[0] = 0x6d;
            pbVar37[1] = 0x6f;
            pbVar37[2] = 100;
            pbVar37[3] = 0x75;
            pbVar37[4] = 0x6c;
            pbVar37[5] = 0x65;
            pbVar37[6] = 0x5f;
            pbVar37[7] = 0x70;
            uStack_1c8 = 0xf;
            uStack_1c6 = 0;
            uStack_1c4 = 0;
            uStack_1c0 = (ushort)pbVar37;
            uStack_1be = (undefined4)((ulonglong)pbVar37 >> 0x10);
            uStack_1ba = (undefined1)((ulonglong)pbVar37 >> 0x30);
            uStack_1b9 = (undefined1)((ulonglong)pbVar37 >> 0x38);
            puStack_1b8 = (undefined *)0xf;
            pdb_142d7f1b0(&uStack_1c8,0xf,0x18,1,1);
            uVar41 = _UNK_143029ceb;
            lVar34 = CONCAT17(uStack_1b9,CONCAT16(uStack_1ba,CONCAT42(uStack_1be,uStack_1c0)));
            *(undefined8 *)(puStack_1b8 + lVar34) = _DAT_143029ce3;
            *(undefined8 *)((longlong)(puStack_1b8 + lVar34) + 8) = uVar41;
            *(undefined8 *)(puStack_1b8 + lVar34 + 0x10) = 0x726f727245203a3a;
            puStack_278 = puStack_1b8 + 0x18;
            lStack_288 = CONCAT44(uStack_1c4,CONCAT22(uStack_1c6,uStack_1c8));
            lStack_280 = CONCAT17(uStack_1b9,CONCAT16(uStack_1ba,CONCAT42(uStack_1be,uStack_1c0)));
            if ((ulonglong)(lStack_288 - (longlong)puStack_278) < 0x1f) {
              pdb_142d7f1b0(&lStack_288,puStack_278,0x1f,1,1);
            }
            uVar41 = _UNK_143029d12;
            *(ulonglong *)(puStack_278 + lStack_280 + 0xf) = CONCAT71(_UNK_143029d0b,DAT_143029d0a);
            *(undefined8 *)((longlong)(puStack_278 + lStack_280 + 0xf) + 8) = uVar41;
            uVar41 = CONCAT17(DAT_143029d0a,_UNK_143029d03);
            *(undefined8 *)(puStack_278 + lStack_280) = _DAT_143029cfb;
            *(undefined8 *)((longlong)(puStack_278 + lStack_280) + 8) = uVar41;
            puStack_278 = puStack_278 + 0x1f;
            uStack_1c8 = (ushort)lStack_288;
            uStack_1c6 = (undefined2)((ulonglong)lStack_288 >> 0x10);
            uStack_1c4 = (undefined4)((ulonglong)lStack_288 >> 0x20);
            uStack_1c0 = (ushort)lStack_280;
            uStack_1be = (undefined4)((ulonglong)lStack_280 >> 0x10);
            uStack_1ba = (undefined1)((ulonglong)lStack_280 >> 0x30);
            uStack_1b9 = (undefined1)((ulonglong)lStack_280 >> 0x38);
            puStack_1b8 = puStack_278;
            cVar32 = pdb_14192b470(*pauStack_88 + 8,&uStack_1c8);
            if ((cVar32 == '\0') && (*_DAT_143ca8e90 != 0)) {
              uStack_1c8 = 0;
              uStack_1c6 = 0;
              uStack_1c4 = 0;
              uStack_1c0 = 0x9d1a;
              uStack_1be = 0x14302;
              uStack_1ba = 0;
              uStack_1b9 = 0;
              puStack_1b8 = (undefined *)0x4c;
              uStack_1b0 = 0;
              puStack_1a8 = &UNK_143029b39;
              uStack_1a0 = 0x56;
              uStack_198 = 1;
              puStack_190 = &UNK_143029d1a;
              uStack_188 = 0x4c;
              uStack_180 = 0x4700000001;
              puStack_178 = &DAT_143029cfb;
              uStack_170 = 0x3f;
              pdb_140f332f0(&uStack_a9,&uStack_1c8);
            }
            if ((((char)plStack_98 == '\0') && ((*_DAT_143ca8f38 & 0x7fffffffffffffff) != 0)) &&
               (cVar32 = pdb_142dc79e0(), cVar32 == '\0')) {
              (*pauStack_88)[1] = 1;
            }
            LOCK();
            cVar32 = (*pauStack_88)[0];
            (*pauStack_88)[0] = 0;
            UNLOCK();
            if (cVar32 == '\x02') {
              pdb_142dc6ca0();
            }
            goto LAB_1409b222f;
          }
          piVar11 = *(int **)(lStack_90 + 0x1e8);
          if (*piVar11 != 1) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc8150(&UNK_14302a758);
          }
          iVar5 = *(int *)pauVar57[uVar43 * -3 + -3];
          LOCK();
          bVar58 = (char)piVar11[2] == '\0';
          if (bVar58) {
            *(char *)(piVar11 + 2) = '\x01';
          }
          UNLOCK();
          pauStack_88 = pauVar2;
          if (!bVar58) {
            pdb_142dbd1a0(piVar11 + 2);
          }
          pdb_140e9a150(piVar11 + 2);
          pauVar2 = pauStack_88;
          uVar43 = *(ulonglong *)(pauStack_88[-2] + 8);
          uVar55 = (uVar43 & 0xffffffffffffffe) + 2;
          if ((uVar43 & 1) == 0) {
            uVar55 = uVar43;
          }
          if (0x3ff < uVar55) {
            uVar55 = 0x400;
          }
          iStack_1dc = iVar5;
          puStack_a8 = puVar49;
          plStack_98 = (longlong *)(piVar11 + 2);
          pdb_140e26410(&uStack_1c8,piVar11 + 4,*(undefined8 *)(lStack_90 + 0x1e8),(int)uVar55 << 3,
                        1,0x10);
          plVar31 = plStack_98;
          pdb_140e9a350();
          LOCK();
          bVar58 = (char)*plVar31 == '\x01';
          if (bVar58) {
            *(char *)plVar31 = '\0';
          }
          UNLOCK();
          if (!bVar58) {
            pdb_142dbcef0(plVar31,0);
          }
          uVar41 = uStack_1b0;
          uVar43 = CONCAT44(uStack_1c4,CONCAT22(uStack_1c6,uStack_1c8));
          if ((uStack_1c8 & 3) == 0) {
            if ((uStack_1c0 & 7) == 0) {
              uVar55 = *(ulonglong *)(pauVar2[-2] + 8);
              uVar40 = CONCAT17(uStack_1b9,CONCAT16(uStack_1ba,CONCAT42(uStack_1be,uStack_1c0))) >>
                       3;
              if (uVar55 < uVar40) {
                uVar40 = uVar55;
              }
              if (uVar40 != 0) {
                uVar55 = *(ulonglong *)pauVar2[-2];
                if ((uVar40 < 6) ||
                   ((uVar43 < uVar55 + uVar40 * 0xc && (uVar55 < uVar43 + uVar40 * 8)))) {
                  uVar53 = 0;
LAB_1409b1e45:
                  uVar52 = uVar53;
                  if ((uVar40 & 1) != 0) {
                    uVar33 = *(undefined4 *)(uVar55 + 8 + uVar53 * 0xc);
                    *(undefined4 *)(uVar43 + uVar53 * 8) = *(undefined4 *)(uVar55 + uVar53 * 0xc);
                    *(undefined4 *)(uVar43 + 4 + uVar53 * 8) = uVar33;
                    uVar52 = uVar53 | 1;
                  }
                  if (uVar40 != (uVar53 | 1)) {
                    puVar44 = (undefined4 *)(uVar55 + uVar52 * 0xc + 0x14);
                    do {
                      uVar33 = puVar44[-3];
                      *(undefined4 *)(uVar43 + uVar52 * 8) = puVar44[-5];
                      *(undefined4 *)(uVar43 + 4 + uVar52 * 8) = uVar33;
                      uVar33 = *puVar44;
                      *(undefined4 *)(uVar43 + 8 + uVar52 * 8) = puVar44[-2];
                      *(undefined4 *)(uVar43 + 0xc + uVar52 * 8) = uVar33;
                      uVar52 = uVar52 + 2;
                      puVar44 = puVar44 + 6;
                    } while (uVar40 != uVar52);
                  }
                }
                else {
                  uVar53 = uVar40 & 0x1ffffffffffffffc;
                  puVar44 = (undefined4 *)(uVar55 + 0x2c);
                  uVar52 = 0;
                  do {
                    uVar33 = puVar44[-8];
                    uVar6 = puVar44[-6];
                    uVar7 = puVar44[-3];
                    uVar8 = puVar44[-5];
                    uVar9 = *puVar44;
                    uVar10 = puVar44[-2];
                    puVar39 = (undefined8 *)(uVar43 + uVar52 * 8);
                    *puVar39 = CONCAT44(puVar44[-9],puVar44[-0xb]);
                    puVar39[1] = CONCAT44(uVar6,uVar33);
                    puVar39 = (undefined8 *)(uVar43 + 0x10 + uVar52 * 8);
                    *puVar39 = CONCAT44(uVar7,uVar8);
                    puVar39[1] = CONCAT44(uVar9,uVar10);
                    uVar52 = uVar52 + 4;
                    puVar44 = puVar44 + 0xc;
                  } while (uVar53 != uVar52);
                  if (uVar40 != uVar53) goto LAB_1409b1e45;
                }
                uVar55 = *(ulonglong *)(pauVar2[-2] + 8);
              }
              uVar48 = 0;
              if (uVar55 < 0x400) {
                uVar48 = (uint)uVar55;
              }
              if (uVar55 == 0) {
                    /* WARNING: Subroutine does not return */
                pdb_142dc83b0(&UNK_143029c74,0x29,&UNK_143029ca0);
              }
              uVar33 = pdb_140de85e0(*(undefined4 *)pauVar2[-1]);
              uVar43 = uStack_c8;
              if (uStack_c8 == uStack_d8) {
                pdb_142d7e980(&uStack_d8);
              }
              lVar34 = uVar43 * 0x10;
              *(undefined8 *)(pbStack_d0 + lVar34) = uVar41;
              *(uint *)(pbStack_d0 + lVar34 + 8) = iStack_1dc << 10 | uVar48 & 0x3ff;
              *(undefined4 *)(pbStack_d0 + lVar34 + 0xc) = uVar33;
              uStack_c8 = uVar43 + 1;
              pdb_140989660(&puStack_1b8);
              puVar49 = puStack_a8;
              goto LAB_1409b1c89;
            }
            uVar41 = 1;
          }
          else {
            uVar41 = 0;
          }
          pdb_142ded1a0(&UNK_14338959c,0xe,uVar41);
          goto LAB_1409b304d;
        }
        goto LAB_1409b1c89;
      }
LAB_1409b222f:
      piVar11 = *(int **)(lStack_90 + 0x1e8);
      if (*piVar11 != 1) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_14302a758);
      }
      pauVar36 = (undefined1 (*) [16])(piVar11 + 2);
      LOCK();
      bVar58 = (char)piVar11[2] == '\0';
      if (bVar58) {
        *(char *)(piVar11 + 2) = '\x01';
      }
      UNLOCK();
      if (!bVar58) {
        pdb_142dbd1a0(pauVar36);
      }
      pdb_140e9a150(pauVar36);
      pbVar37 = pbStack_d0;
      lVar50 = uStack_c8 << 4;
      pauStack_88 = pauVar36;
      pdb_140e26410(&uStack_1c8,piVar11 + 4,*(undefined8 *)(lStack_90 + 0x1e8),lVar50,0);
      lVar34 = CONCAT17(uStack_1b9,CONCAT16(uStack_1ba,CONCAT42(uStack_1be,uStack_1c0)));
      if (lVar34 == lVar50) {
        pub_142e32760(CONCAT44(uStack_1c4,CONCAT22(uStack_1c6,uStack_1c8)),pbVar37,lVar50);
        pauVar36 = pauStack_88;
        lStack_288 = CONCAT44(uStack_1c4,CONCAT22(uStack_1c6,uStack_1c8));
        lStack_280 = CONCAT17(uStack_1b9,CONCAT16(uStack_1ba,CONCAT42(uStack_1be,uStack_1c0)));
        puStack_278 = puStack_1b8;
        uStack_270 = uStack_1b0;
        puStack_268 = puStack_1a8;
        uStack_260 = uStack_1a0;
        pdb_140e9a350();
        LOCK();
        bVar58 = (*pauVar36)[0] == '\x01';
        if (bVar58) {
          (*pauVar36)[0] = 0;
        }
        UNLOCK();
        if (!bVar58) {
          pdb_142dbcef0(pauVar36,0);
        }
        uVar41 = uStack_270;
        pdb_140989660(&puStack_278);
        if (CONCAT44(uStack_118._4_4_,(undefined4)uStack_118) == 0) {
LAB_1409b236b:
          uVar38 = pdb_140df4400(&UNK_143029d66,0xe);
          puVar39 = (undefined8 *)pdb_140a2e580(lStack_a0,uVar38);
          uVar38 = *puVar39;
          pdb_140e1ea30(auStack_2c0,uVar38,lStack_90,0x23,&UNK_143330ab0);
          uVar33 = (undefined4)uStack_c8;
          uVar45 = CONCAT71((int7)((ulonglong)uVar38 >> 8),0xc);
          pauStack_88 = (undefined1 (*) [16])pdb_140a2e6e0(lStack_a0,uVar45,&UNK_143029d78);
          uVar46 = CONCAT71((int7)((ulonglong)uVar45 >> 8),0xe);
          plStack_98 = (longlong *)pdb_140a2e6e0(lStack_a0,uVar46,&UNK_143029d90);
          uVar47 = CONCAT71((int7)((ulonglong)uVar46 >> 8),0x12);
          puStack_a8 = (ulonglong *)pdb_140a2db30(lStack_a0);
          puStack_140 = (undefined4 *)0x0;
          puStack_138 = (undefined4 *)0x8;
          uStack_130 = 0;
          uVar38 = pdb_14177be60(*(undefined8 *)(lStack_90 + 0x208),&UNK_143330aee,0x3a,&puStack_140
                                );
          pdb_140e291c0(&uStack_1c8,&UNK_143330aee,0x3a,uVar38,lStack_90);
          uStack_110 = SUB84(puStack_120,0);
          uStack_10c = (undefined4)((ulonglong)puStack_120 >> 0x20);
          uStack_f0 = uStack_1d0;
          uStack_e8 = uVar41;
          uStack_e0 = 0x3fc00000;
          uStack_dc = uVar33;
          uStack_108 = uVar47;
          uStack_100 = uVar45;
          uStack_f8 = uVar46;
          uStack_118 = auStack_2c0;
          pdb_14179c5e0(&lStack_288,&uStack_1c8,&uStack_118);
          pub_142e32760(&uStack_1c8,&lStack_288,0x88);
          uStack_118._4_4_ = 0x200;
          uStack_110 = 0x200;
          uStack_10c = 1;
          uStack_118._0_4_ = 1;
          pdb_140e28810(&uStack_1c8,&uStack_118);
          puVar49 = puStack_a8;
          pdb_140e9a350(puStack_a8);
          pdb_140e9a350((ulonglong)puVar49 | 1);
          LOCK();
          uVar43 = *puVar49;
          *puVar49 = *puVar49 - 0x10;
          UNLOCK();
          if ((uVar43 & 0xfffffffffffffff2) == 0x12) {
            pdb_142dbbf50(puVar49);
          }
          plVar31 = plStack_98;
          pdb_140e9a350(plStack_98);
          pdb_140e9a350();
          LOCK();
          lVar34 = *plVar31;
          if (lVar34 == 8) {
            *plVar31 = 0;
          }
          UNLOCK();
          if (lVar34 != 8) {
            pdb_142dbca40(plVar31,0);
          }
          pauVar36 = pauStack_88;
          pdb_140e9a350(pauStack_88);
          pdb_140e9a350();
          LOCK();
          bVar58 = *(longlong *)*pauVar36 == 8;
          if (bVar58) {
            *(undefined8 *)*pauVar36 = 0;
          }
          UNLOCK();
          if (!bVar58) {
            pdb_142dbca40(pauVar36,0);
          }
          uStack_1c8 = 0;
          uStack_1c6 = 0x200;
          uStack_1c4 = 0x10200;
          uStack_1c0 = 1;
          uStack_1be = 0x2016401;
          uStack_1ba = 0;
          puStack_1b8 = &UNK_143029da8;
          uStack_1b0 = 9;
          uStack_1c4 = pdb_140e2b4e0(lStack_90,&uStack_1c8);
          uStack_1c0 = 0x200;
          uStack_1be = 0x10200;
          uStack_1ba = 1;
          uStack_1b9 = 0;
          puStack_1b8 = (undefined *)CONCAT35(puStack_1b8._5_3_,0x2016401);
          uStack_1c8 = 0;
          uStack_1c6 = 0;
          if (*(char *)(lStack_90 + 0x24c) == '\x01') {
            pdb_140e19620(&uStack_1c8,lStack_90);
          }
          puStack_298 = puStack_1b8;
          uStack_2a8 = CONCAT22(uStack_1c6,uStack_1c8);
          uStack_2a4 = uStack_1c4;
          uStack_2a0 = CONCAT17(uStack_1b9,CONCAT16(uStack_1ba,CONCAT42(uStack_1be,uStack_1c0)));
          uStack_130 = 0x4000000000000001;
          uStack_128 = 0x103;
          puStack_140 = puStack_120;
          puStack_138 = &uStack_2a8;
          pdb_140b6e900(auStack_200,&puStack_140);
          uVar41 = pdb_14177be60(*(undefined8 *)(lStack_90 + 0x208),&UNK_143332046,0x1c,auStack_200)
          ;
          pdb_140e291c0(&uStack_1c8,&UNK_143332046,0x1c,uVar41,lStack_90);
          uStack_100 = CONCAT62(uStack_126,uStack_128);
          uStack_108 = uStack_130;
          uStack_118._0_4_ = SUB84(puStack_140,0);
          uStack_118._4_4_ = (undefined4)((ulonglong)puStack_140 >> 0x20);
          uStack_110 = SUB84(puStack_138,0);
          uStack_10c = (undefined4)((ulonglong)puStack_138 >> 0x20);
          pdb_14179fc20(&lStack_288,&uStack_1c8,&uStack_118);
          pub_142e32760(&uStack_1c8,&lStack_288,0x88);
          uStack_118._4_4_ = 0x200;
          uStack_110 = 0x200;
          uStack_10c = 1;
          uStack_118._0_4_ = 1;
          pdb_140e28810(&uStack_1c8,&uStack_118);
          uStack_130 = 0x4000000000000001;
          uStack_128 = 0xe;
          puStack_138 = puStack_120;
          puStack_140 = &uStack_2a8;
          pdb_140b6e900(auStack_200,&puStack_140);
          uVar41 = pdb_14177be60(*(undefined8 *)(lStack_90 + 0x208),&UNK_143332046,0x1c,auStack_200)
          ;
          pdb_140e291c0(&uStack_1c8,&UNK_143332046,0x1c,uVar41,lStack_90);
          uStack_100 = CONCAT62(uStack_126,uStack_128);
          uStack_108 = uStack_130;
          uStack_118._0_4_ = SUB84(puStack_140,0);
          uStack_118._4_4_ = (undefined4)((ulonglong)puStack_140 >> 0x20);
          uStack_110 = SUB84(puStack_138,0);
          uStack_10c = (undefined4)((ulonglong)puStack_138 >> 0x20);
          pdb_14179fc20(&lStack_288,&uStack_1c8,&uStack_118);
          pub_142e32760(&uStack_1c8,&lStack_288);
          uStack_118._4_4_ = 0x200;
          uStack_110 = 0x200;
          uStack_10c = 1;
          uStack_118._0_4_ = 1;
          pdb_140e28810(&uStack_1c8,&uStack_118);
          *(undefined1 *)(lStack_1d8 + 0x40) = 1;
          if (uStack_d8 != 0) {
            pub_1406abac0(pbStack_d0,uStack_d8 << 4,8);
          }
          uVar33 = 1;
          if (*(longlong *)(lStack_b8 + 0x88) != 0) {
LAB_1409b28df:
            lVar34 = *(longlong *)(lStack_b8 + 0x70);
            uVar43 = 0xd02e7030a637dd7;
            lVar50 = 0;
            while( true ) {
              uVar43 = uVar43 & *(ulonglong *)(lStack_b8 + 0x78);
              auVar60 = *(undefined1 (*) [16])(lVar34 + uVar43);
              auVar69[0] = -(auVar60[0] == cVar14);
              auVar69[1] = -(auVar60[1] == cVar15);
              auVar69[2] = -(auVar60[2] == cVar16);
              auVar69[3] = -(auVar60[3] == cVar17);
              auVar69[4] = -(auVar60[4] == cVar18);
              auVar69[5] = -(auVar60[5] == cVar19);
              auVar69[6] = -(auVar60[6] == cVar20);
              auVar69[7] = -(auVar60[7] == cVar21);
              auVar69[8] = -(auVar60[8] == cVar22);
              auVar69[9] = -(auVar60[9] == cVar23);
              auVar69[10] = -(auVar60[10] == cVar24);
              auVar69[0xb] = -(auVar60[0xb] == cVar25);
              auVar69[0xc] = -(auVar60[0xc] == cVar26);
              auVar69[0xd] = -(auVar60[0xd] == cVar27);
              auVar69[0xe] = -(auVar60[0xe] == cVar28);
              auVar69[0xf] = -(auVar60[0xf] == cVar29);
              uVar54 = (ushort)(SUB161(auVar69 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar69 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar69 >> 0x17,0) & 1) << 2 |
                       (ushort)(SUB161(auVar69 >> 0x1f,0) & 1) << 3 |
                       (ushort)(SUB161(auVar69 >> 0x27,0) & 1) << 4 |
                       (ushort)(SUB161(auVar69 >> 0x2f,0) & 1) << 5 |
                       (ushort)(SUB161(auVar69 >> 0x37,0) & 1) << 6 |
                       (ushort)(SUB161(auVar69 >> 0x3f,0) & 1) << 7 |
                       (ushort)(SUB161(auVar69 >> 0x47,0) & 1) << 8 |
                       (ushort)(SUB161(auVar69 >> 0x4f,0) & 1) << 9 |
                       (ushort)(SUB161(auVar69 >> 0x57,0) & 1) << 10 |
                       (ushort)(SUB161(auVar69 >> 0x5f,0) & 1) << 0xb |
                       (ushort)(SUB161(auVar69 >> 0x67,0) & 1) << 0xc |
                       (ushort)(SUB161(auVar69 >> 0x6f,0) & 1) << 0xd |
                       (ushort)(SUB161(auVar69 >> 0x77,0) & 1) << 0xe |
                       (ushort)(auVar69[0xf] >> 7) << 0xf;
              uVar42 = (uint)uVar54;
              while (uVar54 != 0) {
                uVar48 = 0;
                for (uVar13 = uVar42; (uVar13 & 1) == 0; uVar13 = uVar13 >> 1 | 0x80000000) {
                  uVar48 = uVar48 + 1;
                }
                uVar55 = uVar48 + uVar43 & *(ulonglong *)(lStack_b8 + 0x78);
                pcVar3 = (char *)(lVar34 + -0x18 + uVar55 * -0x18);
                auVar70[0] = -(*pcVar3 == DAT_143028e00);
                auVar70[1] = -(pcVar3[1] == DAT_143028e00._1_1_);
                auVar70[2] = -(pcVar3[2] == DAT_143028e00._2_1_);
                auVar70[3] = -(pcVar3[3] == DAT_143028e00._3_1_);
                auVar70[4] = -(pcVar3[4] == DAT_143028e00._4_1_);
                auVar70[5] = -(pcVar3[5] == DAT_143028e00._5_1_);
                auVar70[6] = -(pcVar3[6] == DAT_143028e00._6_1_);
                auVar70[7] = -(pcVar3[7] == DAT_143028e00._7_1_);
                auVar70[8] = -(pcVar3[8] == DAT_143028e00._8_1_);
                auVar70[9] = -(pcVar3[9] == DAT_143028e00._9_1_);
                auVar70[10] = -(pcVar3[10] == DAT_143028e00._10_1_);
                auVar70[0xb] = -(pcVar3[0xb] == DAT_143028e00._11_1_);
                auVar70[0xc] = -(pcVar3[0xc] == DAT_143028e00._12_1_);
                auVar70[0xd] = -(pcVar3[0xd] == DAT_143028e00._13_1_);
                auVar70[0xe] = -(pcVar3[0xe] == DAT_143028e00._14_1_);
                auVar70[0xf] = -(pcVar3[0xf] == DAT_143028e00._15_1_);
                if ((ushort)((ushort)(SUB161(auVar70 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar70 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar70 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar70 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar70 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar70 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar70 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar70 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar70 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar70 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar70 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar70 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar70 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar70 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar70 >> 0x77,0) & 1) << 0xe |
                            (ushort)(auVar70[0xf] >> 7) << 0xf) == 0xffff) {
                  uVar43 = *(ulonglong *)(lVar34 + uVar55 * -0x18 + -8);
                  if ((uVar43 < *(ulonglong *)(lStack_b8 + 0x210)) &&
                     (uVar43 = *(ulonglong *)(*(longlong *)(lStack_b8 + 0x208) + uVar43 * 8),
                     uVar43 != 0)) {
                    lVar34 = ~uVar43 * 0x40;
                    if (*(longlong *)(*(longlong *)(lStack_b8 + 0x1d8) + 0x20 + lVar34) != 0) {
                      plStack_98 = (longlong *)CONCAT44(plStack_98._4_4_,uVar33);
                      pauStack_88 = *(undefined1 (**) [16])
                                     (*(longlong *)(lStack_b8 + 0x1d8) + lVar34 + 0x10);
                      uVar43 = pdb_140df4400(&UNK_143029d66,0xe);
                      uStack_1c8 = (ushort)uVar43;
                      uStack_1c6 = (undefined2)(uVar43 >> 0x10);
                      uStack_1c4 = (undefined4)(uVar43 >> 0x20);
                      if (*(longlong *)(lStack_a0 + 0x60) != 0) {
                        lVar34 = *(longlong *)(lStack_a0 + 0x48);
                        uVar55 = *(ulonglong *)(lStack_a0 + 0x50);
                        bVar59 = (byte)(uVar43 >> 0x39);
                        auVar60 = ZEXT216(CONCAT11(bVar59,bVar59));
                        auVar60 = pshuflw(auVar60,auVar60,0);
                        lVar50 = 0;
                        while( true ) {
                          uVar43 = uVar43 & uVar55;
                          pcVar3 = (char *)(lVar34 + uVar43);
                          cVar14 = *pcVar3;
                          cVar15 = pcVar3[1];
                          cVar16 = pcVar3[2];
                          cVar17 = pcVar3[3];
                          cVar18 = pcVar3[4];
                          cVar19 = pcVar3[5];
                          cVar20 = pcVar3[6];
                          cVar21 = pcVar3[7];
                          cVar22 = pcVar3[8];
                          cVar23 = pcVar3[9];
                          cVar24 = pcVar3[10];
                          cVar25 = pcVar3[0xb];
                          cVar26 = pcVar3[0xc];
                          cVar27 = pcVar3[0xd];
                          cVar28 = pcVar3[0xe];
                          cVar29 = pcVar3[0xf];
                          auVar61[0] = -(cVar14 == auVar60[0]);
                          auVar61[1] = -(cVar15 == auVar60[1]);
                          auVar61[2] = -(cVar16 == auVar60[2]);
                          auVar61[3] = -(cVar17 == auVar60[3]);
                          auVar61[4] = -(cVar18 == auVar60[4]);
                          auVar61[5] = -(cVar19 == auVar60[5]);
                          auVar61[6] = -(cVar20 == auVar60[6]);
                          auVar61[7] = -(cVar21 == auVar60[7]);
                          auVar61[8] = -(cVar22 == auVar60[0]);
                          auVar61[9] = -(cVar23 == auVar60[1]);
                          auVar61[10] = -(cVar24 == auVar60[2]);
                          auVar61[0xb] = -(cVar25 == auVar60[3]);
                          auVar61[0xc] = -(cVar26 == auVar60[4]);
                          auVar61[0xd] = -(cVar27 == auVar60[5]);
                          auVar61[0xe] = -(cVar28 == auVar60[6]);
                          auVar61[0xf] = -(cVar29 == auVar60[7]);
                          uVar54 = (ushort)(SUB161(auVar61 >> 7,0) & 1) |
                                   (ushort)(SUB161(auVar61 >> 0xf,0) & 1) << 1 |
                                   (ushort)(SUB161(auVar61 >> 0x17,0) & 1) << 2 |
                                   (ushort)(SUB161(auVar61 >> 0x1f,0) & 1) << 3 |
                                   (ushort)(SUB161(auVar61 >> 0x27,0) & 1) << 4 |
                                   (ushort)(SUB161(auVar61 >> 0x2f,0) & 1) << 5 |
                                   (ushort)(SUB161(auVar61 >> 0x37,0) & 1) << 6 |
                                   (ushort)(SUB161(auVar61 >> 0x3f,0) & 1) << 7 |
                                   (ushort)(SUB161(auVar61 >> 0x47,0) & 1) << 8 |
                                   (ushort)(SUB161(auVar61 >> 0x4f,0) & 1) << 9 |
                                   (ushort)(SUB161(auVar61 >> 0x57,0) & 1) << 10 |
                                   (ushort)(SUB161(auVar61 >> 0x5f,0) & 1) << 0xb |
                                   (ushort)(SUB161(auVar61 >> 0x67,0) & 1) << 0xc |
                                   (ushort)(SUB161(auVar61 >> 0x6f,0) & 1) << 0xd |
                                   (ushort)(SUB161(auVar61 >> 0x77,0) & 1) << 0xe |
                                   (ushort)(auVar61[0xf] >> 7) << 0xf;
                          uVar42 = (uint)uVar54;
                          while (uVar54 != 0) {
                            uVar48 = 0;
                            for (uVar13 = uVar42; (uVar13 & 1) == 0;
                                uVar13 = uVar13 >> 1 | 0x80000000) {
                              uVar48 = uVar48 + 1;
                            }
                            uVar40 = uVar48 + uVar43 & uVar55;
                            cVar32 = pdb_140df4430(&uStack_1c8,lVar34 + uVar40 * -0x18 + -0x18);
                            if (cVar32 != '\0') {
                              uVar33 = pdb_140a2ec70(lStack_a0,
                                                     *(undefined8 *)
                                                      (lVar34 + uVar40 * -0x18 + -0x10));
                              puStack_a8 = (ulonglong *)CONCAT44(puStack_a8._4_4_,uVar33);
                              uVar43 = pdb_140df4400(&UNK_143029de8,0x12);
                              uStack_1c8 = (ushort)uVar43;
                              uStack_1c6 = (undefined2)(uVar43 >> 0x10);
                              uStack_1c4 = (undefined4)(uVar43 >> 0x20);
                              if (*(longlong *)(lStack_a0 + 0x60) != 0) {
                                lVar34 = *(longlong *)(lStack_a0 + 0x48);
                                uVar55 = *(ulonglong *)(lStack_a0 + 0x50);
                                bVar59 = (byte)(uVar43 >> 0x39);
                                auVar60 = ZEXT216(CONCAT11(bVar59,bVar59));
                                auVar60 = pshuflw(auVar60,auVar60,0);
                                lVar50 = 0;
                                while( true ) {
                                  uVar43 = uVar43 & uVar55;
                                  pcVar3 = (char *)(lVar34 + uVar43);
                                  cVar14 = *pcVar3;
                                  cVar15 = pcVar3[1];
                                  cVar16 = pcVar3[2];
                                  cVar17 = pcVar3[3];
                                  cVar18 = pcVar3[4];
                                  cVar19 = pcVar3[5];
                                  cVar20 = pcVar3[6];
                                  cVar21 = pcVar3[7];
                                  cVar22 = pcVar3[8];
                                  cVar23 = pcVar3[9];
                                  cVar24 = pcVar3[10];
                                  cVar25 = pcVar3[0xb];
                                  cVar26 = pcVar3[0xc];
                                  cVar27 = pcVar3[0xd];
                                  cVar28 = pcVar3[0xe];
                                  cVar29 = pcVar3[0xf];
                                  auVar62[0] = -(cVar14 == auVar60[0]);
                                  auVar62[1] = -(cVar15 == auVar60[1]);
                                  auVar62[2] = -(cVar16 == auVar60[2]);
                                  auVar62[3] = -(cVar17 == auVar60[3]);
                                  auVar62[4] = -(cVar18 == auVar60[4]);
                                  auVar62[5] = -(cVar19 == auVar60[5]);
                                  auVar62[6] = -(cVar20 == auVar60[6]);
                                  auVar62[7] = -(cVar21 == auVar60[7]);
                                  auVar62[8] = -(cVar22 == auVar60[0]);
                                  auVar62[9] = -(cVar23 == auVar60[1]);
                                  auVar62[10] = -(cVar24 == auVar60[2]);
                                  auVar62[0xb] = -(cVar25 == auVar60[3]);
                                  auVar62[0xc] = -(cVar26 == auVar60[4]);
                                  auVar62[0xd] = -(cVar27 == auVar60[5]);
                                  auVar62[0xe] = -(cVar28 == auVar60[6]);
                                  auVar62[0xf] = -(cVar29 == auVar60[7]);
                                  uVar54 = (ushort)(SUB161(auVar62 >> 7,0) & 1) |
                                           (ushort)(SUB161(auVar62 >> 0xf,0) & 1) << 1 |
                                           (ushort)(SUB161(auVar62 >> 0x17,0) & 1) << 2 |
                                           (ushort)(SUB161(auVar62 >> 0x1f,0) & 1) << 3 |
                                           (ushort)(SUB161(auVar62 >> 0x27,0) & 1) << 4 |
                                           (ushort)(SUB161(auVar62 >> 0x2f,0) & 1) << 5 |
                                           (ushort)(SUB161(auVar62 >> 0x37,0) & 1) << 6 |
                                           (ushort)(SUB161(auVar62 >> 0x3f,0) & 1) << 7 |
                                           (ushort)(SUB161(auVar62 >> 0x47,0) & 1) << 8 |
                                           (ushort)(SUB161(auVar62 >> 0x4f,0) & 1) << 9 |
                                           (ushort)(SUB161(auVar62 >> 0x57,0) & 1) << 10 |
                                           (ushort)(SUB161(auVar62 >> 0x5f,0) & 1) << 0xb |
                                           (ushort)(SUB161(auVar62 >> 0x67,0) & 1) << 0xc |
                                           (ushort)(SUB161(auVar62 >> 0x6f,0) & 1) << 0xd |
                                           (ushort)(SUB161(auVar62 >> 0x77,0) & 1) << 0xe |
                                           (ushort)(auVar62[0xf] >> 7) << 0xf;
                                  uVar42 = (uint)uVar54;
                                  while (uVar54 != 0) {
                                    uVar48 = 0;
                                    for (uVar13 = uVar42; (uVar13 & 1) == 0;
                                        uVar13 = uVar13 >> 1 | 0x80000000) {
                                      uVar48 = uVar48 + 1;
                                    }
                                    uVar40 = uVar48 + uVar43 & uVar55;
                                    cVar32 = pdb_140df4430(&uStack_1c8,
                                                           lVar34 + uVar40 * -0x18 + -0x18);
                                    if (cVar32 != '\0') {
                                      uVar33 = pdb_140a2ec70(lStack_a0,
                                                             *(undefined8 *)
                                                              (lVar34 + uVar40 * -0x18 + -0x10));
                                      puStack_1b8 = _DAT_142e377c0;
                                      uStack_1b0 = _UNK_142e377c8;
                                      if (*(char *)((longlong)pauStack_88 + 0x18) != '\0') {
                                        puStack_1b8 = *(undefined **)((longlong)pauStack_88 + 0x1c);
                                        uStack_1b0 = *(undefined8 *)((longlong)pauStack_88 + 0x24);
                                      }
                                      uStack_1c8 = (ushort)puStack_120;
                                      uStack_1c6 = (undefined2)((ulonglong)puStack_120 >> 0x10);
                                      uStack_1c4 = (undefined4)((ulonglong)puStack_120 >> 0x20);
                                      puStack_1a8 = (undefined *)CONCAT44(uVar33,(int)puStack_a8);
                                      uStack_1a0 = *(undefined8 *)((longlong)pauStack_88 + 0x2c);
                                      pdb_141766340(lStack_90,&UNK_143029e18,0x11,&UNK_143029e29,
                                                    0x31,&uStack_1c8);
                                      if ((char)plStack_98 != '\0') {
                                        uStack_118._0_4_ = 0;
                                        uStack_118._4_4_ = 0;
                                        uStack_110 = 8;
                                        uStack_10c = 0;
                                        uStack_108 = 0;
                                        uVar41 = pdb_14177be60(*(undefined8 *)(lStack_90 + 0x208),
                                                               &UNK_14333108a,0x24,&uStack_118);
                                        pdb_140e291c0(&uStack_1c8,&UNK_14333108a,0x24,uVar41,
                                                      lStack_90);
                                        pdb_141783cb0(&lStack_288,&uStack_1c8,uStack_1d0);
                                        pub_142e32760(&uStack_1c8,&lStack_288,0x88);
                                        uStack_118._4_4_ = 0x200;
                                        uStack_110 = 0x200;
                                        uStack_10c = 1;
                                        uStack_118._0_4_ = 1;
                                        pdb_140e28810(&uStack_1c8,&uStack_118);
                                      }
                                      pdb_141764a70(lStack_90,&UNK_143029e5a,0xd,&UNK_143029e67,0x24
                                                    ,uStack_1d0);
                                      pdb_140e9a350(plStack_c0);
                                      pdb_140e9a350();
                                      LOCK();
                                      lVar34 = *plStack_c0;
                                      if (lVar34 == 8) {
                                        *plStack_c0 = 0;
                                      }
                                      UNLOCK();
                                      if (lVar34 != 8) {
                                        pdb_142dbca40(plStack_c0,0);
                                      }
                                      plVar31 = plStack_1e8;
                                      pdb_140e9a350(plStack_1e8);
                                      pdb_140e9a350();
                                      LOCK();
                                      lVar34 = *plVar31;
                                      bVar58 = lVar34 == 8;
                                      if (bVar58) {
                                        *plVar31 = 0;
                                        lVar34 = 8;
                                      }
                                      UNLOCK();
                                      if (!bVar58) {
                                        lVar34 = pdb_142dbca40(plVar31,0);
                                      }
                                      return lVar34;
                                    }
                                    uVar54 = (ushort)(uVar42 - 1) & (ushort)uVar42;
                                    uVar42 = CONCAT22((short)(uVar42 - 1 >> 0x10),uVar54);
                                  }
                                  auVar76[0] = -(cVar14 == -1);
                                  auVar76[1] = -(cVar15 == -1);
                                  auVar76[2] = -(cVar16 == -1);
                                  auVar76[3] = -(cVar17 == -1);
                                  auVar76[4] = -(cVar18 == -1);
                                  auVar76[5] = -(cVar19 == -1);
                                  auVar76[6] = -(cVar20 == -1);
                                  auVar76[7] = -(cVar21 == -1);
                                  auVar76[8] = -(cVar22 == -1);
                                  auVar76[9] = -(cVar23 == -1);
                                  auVar76[10] = -(cVar24 == -1);
                                  auVar76[0xb] = -(cVar25 == -1);
                                  auVar76[0xc] = -(cVar26 == -1);
                                  auVar76[0xd] = -(cVar27 == -1);
                                  auVar76[0xe] = -(cVar28 == -1);
                                  auVar76[0xf] = -(cVar29 == -1);
                                  if ((((((((((((((((SUB161(auVar76 >> 7,0) & 1) != 0 ||
                                                   (SUB161(auVar76 >> 0xf,0) & 1) != 0) ||
                                                  (SUB161(auVar76 >> 0x17,0) & 1) != 0) ||
                                                 (SUB161(auVar76 >> 0x1f,0) & 1) != 0) ||
                                                (SUB161(auVar76 >> 0x27,0) & 1) != 0) ||
                                               (SUB161(auVar76 >> 0x2f,0) & 1) != 0) ||
                                              (SUB161(auVar76 >> 0x37,0) & 1) != 0) ||
                                             (SUB161(auVar76 >> 0x3f,0) & 1) != 0) ||
                                            (SUB161(auVar76 >> 0x47,0) & 1) != 0) ||
                                           (SUB161(auVar76 >> 0x4f,0) & 1) != 0) ||
                                          (SUB161(auVar76 >> 0x57,0) & 1) != 0) ||
                                         (SUB161(auVar76 >> 0x5f,0) & 1) != 0) ||
                                        (SUB161(auVar76 >> 0x67,0) & 1) != 0) ||
                                       (SUB161(auVar76 >> 0x6f,0) & 1) != 0) ||
                                      (SUB161(auVar76 >> 0x77,0) & 1) != 0) || auVar76[0xf] < '\0')
                                  break;
                                  uVar43 = uVar43 + lVar50 + 0x10;
                                  lVar50 = lVar50 + 0x10;
                                }
                              }
                    /* WARNING: Subroutine does not return */
                              pdb_142dc8150(&UNK_143029e00);
                            }
                            uVar54 = (ushort)(uVar42 - 1) & (ushort)uVar42;
                            uVar42 = CONCAT22((short)(uVar42 - 1 >> 0x10),uVar54);
                          }
                          auVar75[0] = -(cVar14 == -1);
                          auVar75[1] = -(cVar15 == -1);
                          auVar75[2] = -(cVar16 == -1);
                          auVar75[3] = -(cVar17 == -1);
                          auVar75[4] = -(cVar18 == -1);
                          auVar75[5] = -(cVar19 == -1);
                          auVar75[6] = -(cVar20 == -1);
                          auVar75[7] = -(cVar21 == -1);
                          auVar75[8] = -(cVar22 == -1);
                          auVar75[9] = -(cVar23 == -1);
                          auVar75[10] = -(cVar24 == -1);
                          auVar75[0xb] = -(cVar25 == -1);
                          auVar75[0xc] = -(cVar26 == -1);
                          auVar75[0xd] = -(cVar27 == -1);
                          auVar75[0xe] = -(cVar28 == -1);
                          auVar75[0xf] = -(cVar29 == -1);
                          if ((((((((((((((((SUB161(auVar75 >> 7,0) & 1) != 0 ||
                                           (SUB161(auVar75 >> 0xf,0) & 1) != 0) ||
                                          (SUB161(auVar75 >> 0x17,0) & 1) != 0) ||
                                         (SUB161(auVar75 >> 0x1f,0) & 1) != 0) ||
                                        (SUB161(auVar75 >> 0x27,0) & 1) != 0) ||
                                       (SUB161(auVar75 >> 0x2f,0) & 1) != 0) ||
                                      (SUB161(auVar75 >> 0x37,0) & 1) != 0) ||
                                     (SUB161(auVar75 >> 0x3f,0) & 1) != 0) ||
                                    (SUB161(auVar75 >> 0x47,0) & 1) != 0) ||
                                   (SUB161(auVar75 >> 0x4f,0) & 1) != 0) ||
                                  (SUB161(auVar75 >> 0x57,0) & 1) != 0) ||
                                 (SUB161(auVar75 >> 0x5f,0) & 1) != 0) ||
                                (SUB161(auVar75 >> 0x67,0) & 1) != 0) ||
                               (SUB161(auVar75 >> 0x6f,0) & 1) != 0) ||
                              (SUB161(auVar75 >> 0x77,0) & 1) != 0) || auVar75[0xf] < '\0') break;
                          uVar43 = uVar43 + lVar50 + 0x10;
                          lVar50 = lVar50 + 0x10;
                        }
                      }
                    /* WARNING: Subroutine does not return */
                      pdb_142dc8150(&UNK_143029dd0);
                    }
                  }
                  goto LAB_1409b2b7b;
                }
                uVar54 = (ushort)(uVar42 - 1) & (ushort)uVar42;
                uVar42 = CONCAT22((short)(uVar42 - 1 >> 0x10),uVar54);
              }
              auVar64[0] = -(auVar60[0] == -1);
              auVar64[1] = -(auVar60[1] == -1);
              auVar64[2] = -(auVar60[2] == -1);
              auVar64[3] = -(auVar60[3] == -1);
              auVar64[4] = -(auVar60[4] == -1);
              auVar64[5] = -(auVar60[5] == -1);
              auVar64[6] = -(auVar60[6] == -1);
              auVar64[7] = -(auVar60[7] == -1);
              auVar64[8] = -(auVar60[8] == -1);
              auVar64[9] = -(auVar60[9] == -1);
              auVar64[10] = -(auVar60[10] == -1);
              auVar64[0xb] = -(auVar60[0xb] == -1);
              auVar64[0xc] = -(auVar60[0xc] == -1);
              auVar64[0xd] = -(auVar60[0xd] == -1);
              auVar64[0xe] = -(auVar60[0xe] == -1);
              auVar64[0xf] = -(auVar60[0xf] == -1);
              if ((((((((((((((((SUB161(auVar64 >> 7,0) & 1) != 0 ||
                               (SUB161(auVar64 >> 0xf,0) & 1) != 0) ||
                              (SUB161(auVar64 >> 0x17,0) & 1) != 0) ||
                             (SUB161(auVar64 >> 0x1f,0) & 1) != 0) ||
                            (SUB161(auVar64 >> 0x27,0) & 1) != 0) ||
                           (SUB161(auVar64 >> 0x2f,0) & 1) != 0) ||
                          (SUB161(auVar64 >> 0x37,0) & 1) != 0) ||
                         (SUB161(auVar64 >> 0x3f,0) & 1) != 0) ||
                        (SUB161(auVar64 >> 0x47,0) & 1) != 0) ||
                       (SUB161(auVar64 >> 0x4f,0) & 1) != 0) || (SUB161(auVar64 >> 0x57,0) & 1) != 0
                      ) || (SUB161(auVar64 >> 0x5f,0) & 1) != 0) ||
                    (SUB161(auVar64 >> 0x67,0) & 1) != 0) || (SUB161(auVar64 >> 0x6f,0) & 1) != 0)
                  || (SUB161(auVar64 >> 0x77,0) & 1) != 0) || auVar64[0xf] < '\0') break;
              uVar43 = uVar43 + lVar50 + 0x10;
              lVar50 = lVar50 + 0x10;
            }
          }
LAB_1409b2b7b:
                    /* WARNING: Subroutine does not return */
          pdb_142dc8150(&UNK_143029db8);
        }
        pauVar36 = (undefined1 (*) [16])pdb_140e97000();
        if ((pauVar36[6][8] == '\x01') ||
           (pauVar36 = (undefined1 (*) [16])pdb_142d8ec20(pauVar36,0),
           pauVar36 != (undefined1 (*) [16])0x0)) {
          if (*(longlong *)*pauVar36 == 0) {
            *(undefined8 *)*pauVar36 = 0xffffffffffffffff;
            pauStack_88 = pauVar36;
            pdb_140e95370(*pauVar36 + 8,CONCAT44(uStack_10c,uStack_110));
            *(longlong *)*pauStack_88 = *(longlong *)*pauStack_88 + 1;
            goto LAB_1409b236b;
          }
          pdb_142dc8090(&UNK_143326a50);
        }
        else {
          pdb_142dc7890(&UNK_143326860);
        }
      }
      else {
        pdb_142dc85e0(lVar34,lVar50,&UNK_143389710);
      }
    }
    else {
      pdb_142dc8090(&UNK_143326a50);
    }
  }
  else {
    pdb_142dc7890(&UNK_143326860);
  }
LAB_1409b304d:
                    /* WARNING: Does not return */
  pcVar12 = (code *)invalidInstructionException();
  (*pcVar12)();
}

