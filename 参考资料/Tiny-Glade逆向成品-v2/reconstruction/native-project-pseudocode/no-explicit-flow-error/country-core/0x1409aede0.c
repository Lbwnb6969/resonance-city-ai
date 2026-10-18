// VA 0x1409aede0, PDB extent 3803 bytes
// country_core::systems::render_loop::compute_passes::read_terrain_data::raster_visual_terrain_and_read_terrain_data
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/compute_passes/read_terrain_data.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::render_loop::compute_passes::read_terrain_data::raster_visual_terrain_and_read_terrain_data
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/compute_passes/read_terrain_data.rs
   Extent: 3803 */

void pdb_1409aede0(longlong param_1,longlong param_2)

{
  ulonglong *puVar1;
  char *pcVar2;
  char *pcVar3;
  undefined8 uVar4;
  longlong *plVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auVar8 [16];
  char cVar9;
  char cVar10;
  char cVar11;
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
  char cVar28;
  char cVar29;
  char cVar30;
  char cVar31;
  char cVar32;
  char cVar33;
  char cVar34;
  char cVar35;
  char cVar36;
  char cVar37;
  char cVar38;
  char cVar39;
  char cVar40;
  undefined8 uVar41;
  undefined4 uVar42;
  uint uVar43;
  longlong lVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  ulonglong uVar47;
  ulonglong uVar48;
  longlong lVar49;
  ushort uVar50;
  ulonglong uVar51;
  longlong lVar52;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
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
  undefined8 *puVar77;
  undefined8 uStack_718;
  longlong *plStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined1 auStack_318 [16];
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined1 auStack_298 [16];
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined1 auStack_218 [256];
  undefined8 uStack_118;
  undefined1 auStack_110 [16];
  undefined4 uStack_100;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  longlong *plStack_c4;
  undefined4 uStack_bc;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  longlong *plStack_90;
  longlong lStack_88;
  undefined8 uStack_80;
  
  uStack_80 = 0xfffffffffffffffe;
  lStack_88 = param_2;
  if (*(longlong *)(param_2 + 0x88) != 0) {
    lVar44 = *(longlong *)(param_2 + 0x70);
    uVar48 = *(ulonglong *)(param_2 + 0x78);
    uVar47 = 0x46e35f3a8fb828b;
    lVar49 = 0;
    while( true ) {
      uVar47 = uVar47 & uVar48;
      pcVar2 = (char *)(lVar44 + uVar47);
      auVar67[0] = -(*pcVar2 == DAT_142e64500);
      auVar67[1] = -(pcVar2[1] == UNK_142e64501);
      auVar67[2] = -(pcVar2[2] == UNK_142e64502);
      auVar67[3] = -(pcVar2[3] == UNK_142e64503);
      auVar67[4] = -(pcVar2[4] == UNK_142e64504);
      auVar67[5] = -(pcVar2[5] == UNK_142e64505);
      auVar67[6] = -(pcVar2[6] == UNK_142e64506);
      auVar67[7] = -(pcVar2[7] == UNK_142e64507);
      auVar67[8] = -(pcVar2[8] == UNK_142e64508);
      auVar67[9] = -(pcVar2[9] == UNK_142e64509);
      auVar67[10] = -(pcVar2[10] == UNK_142e6450a);
      auVar67[0xb] = -(pcVar2[0xb] == UNK_142e6450b);
      auVar67[0xc] = -(pcVar2[0xc] == UNK_142e6450c);
      auVar67[0xd] = -(pcVar2[0xd] == UNK_142e6450d);
      auVar67[0xe] = -(pcVar2[0xe] == UNK_142e6450e);
      auVar67[0xf] = -(pcVar2[0xf] == UNK_142e6450f);
      uVar50 = (ushort)(SUB161(auVar67 >> 7,0) & 1) | (ushort)(SUB161(auVar67 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar67 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar67 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar67 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar67 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar67 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar67 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar67 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar67 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar67 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar67 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar67 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar67 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar67 >> 0x77,0) & 1) << 0xe | (ushort)(auVar67[0xf] >> 7) << 0xf;
      uVar43 = (uint)uVar50;
      while (uVar50 != 0) {
        uVar6 = 0;
        for (uVar7 = uVar43; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
          uVar6 = uVar6 + 1;
        }
        uVar51 = uVar6 + uVar47 & uVar48;
        pcVar3 = (char *)(lVar44 + -0x18 + uVar51 * -0x18);
        auVar68[0] = -(*pcVar3 == DAT_143028d50);
        auVar68[1] = -(pcVar3[1] == UNK_143028d51);
        auVar68[2] = -(pcVar3[2] == UNK_143028d52);
        auVar68[3] = -(pcVar3[3] == UNK_143028d53);
        auVar68[4] = -(pcVar3[4] == UNK_143028d54);
        auVar68[5] = -(pcVar3[5] == UNK_143028d55);
        auVar68[6] = -(pcVar3[6] == UNK_143028d56);
        auVar68[7] = -(pcVar3[7] == UNK_143028d57);
        auVar68[8] = -(pcVar3[8] == UNK_143028d58);
        auVar68[9] = -(pcVar3[9] == UNK_143028d59);
        auVar68[10] = -(pcVar3[10] == UNK_143028d5a);
        auVar68[0xb] = -(pcVar3[0xb] == UNK_143028d5b);
        auVar68[0xc] = -(pcVar3[0xc] == UNK_143028d5c);
        auVar68[0xd] = -(pcVar3[0xd] == UNK_143028d5d);
        auVar68[0xe] = -(pcVar3[0xe] == UNK_143028d5e);
        auVar68[0xf] = -(pcVar3[0xf] == UNK_143028d5f);
        if ((ushort)((ushort)(SUB161(auVar68 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar68 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar68 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar68 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar68 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar68 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar68 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar68 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar68 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar68 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar68 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar68 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar68 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar68 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar68 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar68[0xf] >> 7) << 0xf) == 0xffff) {
          uVar47 = *(ulonglong *)(lVar44 + uVar51 * -0x18 + -8);
          if (*(ulonglong *)(param_2 + 0x210) <= uVar47) goto LAB_1409af092;
          uVar47 = *(ulonglong *)(*(longlong *)(param_2 + 0x208) + uVar47 * 8);
          if (uVar47 == 0) goto LAB_1409af092;
          lVar49 = *(longlong *)(param_2 + 0x1d8);
          lVar52 = ~uVar47 * 0x40;
          if (*(longlong *)(lVar49 + 0x20 + lVar52) == 0) goto LAB_1409af092;
          uStack_e8 = *(undefined8 *)(lVar52 + lVar49 + 0x10);
          uVar47 = 0x7057b4358e925fdb;
          lVar52 = 0;
          goto LAB_1409aef3c;
        }
        uVar50 = (ushort)(uVar43 - 1) & (ushort)uVar43;
        uVar43 = CONCAT22((short)(uVar43 - 1 >> 0x10),uVar50);
      }
      auVar62[0] = -(*pcVar2 == -1);
      auVar62[1] = -(pcVar2[1] == -1);
      auVar62[2] = -(pcVar2[2] == -1);
      auVar62[3] = -(pcVar2[3] == -1);
      auVar62[4] = -(pcVar2[4] == -1);
      auVar62[5] = -(pcVar2[5] == -1);
      auVar62[6] = -(pcVar2[6] == -1);
      auVar62[7] = -(pcVar2[7] == -1);
      auVar62[8] = -(pcVar2[8] == -1);
      auVar62[9] = -(pcVar2[9] == -1);
      auVar62[10] = -(pcVar2[10] == -1);
      auVar62[0xb] = -(pcVar2[0xb] == -1);
      auVar62[0xc] = -(pcVar2[0xc] == -1);
      auVar62[0xd] = -(pcVar2[0xd] == -1);
      auVar62[0xe] = -(pcVar2[0xe] == -1);
      auVar62[0xf] = -(pcVar2[0xf] == -1);
      if ((((((((((((((((SUB161(auVar62 >> 7,0) & 1) != 0 || (SUB161(auVar62 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar62 >> 0x17,0) & 1) != 0) || (SUB161(auVar62 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar62 >> 0x27,0) & 1) != 0) || (SUB161(auVar62 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar62 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar62 >> 0x3f,0) & 1) != 0) || (SUB161(auVar62 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar62 >> 0x4f,0) & 1) != 0) || (SUB161(auVar62 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar62 >> 0x5f,0) & 1) != 0) || (SUB161(auVar62 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar62 >> 0x6f,0) & 1) != 0) || (SUB161(auVar62 >> 0x77,0) & 1) != 0) ||
          auVar62[0xf] < '\0') break;
      uVar47 = uVar47 + lVar49 + 0x10;
      lVar49 = lVar49 + 0x10;
    }
  }
LAB_1409af092:
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_1430297d0);
LAB_1409aef3c:
  uVar47 = uVar47 & uVar48;
  pcVar2 = (char *)(lVar44 + uVar47);
  auVar69[0] = -(*pcVar2 == DAT_142e33d90);
  auVar69[1] = -(pcVar2[1] == DAT_142e33d90._1_1_);
  auVar69[2] = -(pcVar2[2] == DAT_142e33d90._2_1_);
  auVar69[3] = -(pcVar2[3] == DAT_142e33d90._3_1_);
  auVar69[4] = -(pcVar2[4] == DAT_142e33d90._4_1_);
  auVar69[5] = -(pcVar2[5] == DAT_142e33d90._5_1_);
  auVar69[6] = -(pcVar2[6] == DAT_142e33d90._6_1_);
  auVar69[7] = -(pcVar2[7] == DAT_142e33d90._7_1_);
  auVar69[8] = -(pcVar2[8] == DAT_142e33d90._8_1_);
  auVar69[9] = -(pcVar2[9] == DAT_142e33d90._9_1_);
  auVar69[10] = -(pcVar2[10] == DAT_142e33d90._10_1_);
  auVar69[0xb] = -(pcVar2[0xb] == DAT_142e33d90._11_1_);
  auVar69[0xc] = -(pcVar2[0xc] == DAT_142e33d90._12_1_);
  auVar69[0xd] = -(pcVar2[0xd] == DAT_142e33d90._13_1_);
  auVar69[0xe] = -(pcVar2[0xe] == DAT_142e33d90._14_1_);
  auVar69[0xf] = -(pcVar2[0xf] == DAT_142e33d90._15_1_);
  uVar50 = (ushort)(SUB161(auVar69 >> 7,0) & 1) | (ushort)(SUB161(auVar69 >> 0xf,0) & 1) << 1 |
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
           (ushort)(SUB161(auVar69 >> 0x77,0) & 1) << 0xe | (ushort)(auVar69[0xf] >> 7) << 0xf;
  uVar43 = (uint)uVar50;
  while (uVar50 != 0) {
    uVar6 = 0;
    for (uVar7 = uVar43; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
      uVar6 = uVar6 + 1;
    }
    uVar51 = uVar6 + uVar47 & uVar48;
    pcVar3 = (char *)(lVar44 + -0x18 + uVar51 * -0x18);
    auVar70[0] = -(*pcVar3 == DAT_142e34350);
    auVar70[1] = -(pcVar3[1] == DAT_142e34350._1_1_);
    auVar70[2] = -(pcVar3[2] == DAT_142e34350._2_1_);
    auVar70[3] = -(pcVar3[3] == DAT_142e34350._3_1_);
    auVar70[4] = -(pcVar3[4] == DAT_142e34350._4_1_);
    auVar70[5] = -(pcVar3[5] == DAT_142e34350._5_1_);
    auVar70[6] = -(pcVar3[6] == DAT_142e34350._6_1_);
    auVar70[7] = -(pcVar3[7] == DAT_142e34350._7_1_);
    auVar70[8] = -(pcVar3[8] == DAT_142e34350._8_1_);
    auVar70[9] = -(pcVar3[9] == DAT_142e34350._9_1_);
    auVar70[10] = -(pcVar3[10] == DAT_142e34350._10_1_);
    auVar70[0xb] = -(pcVar3[0xb] == DAT_142e34350._11_1_);
    auVar70[0xc] = -(pcVar3[0xc] == DAT_142e34350._12_1_);
    auVar70[0xd] = -(pcVar3[0xd] == DAT_142e34350._13_1_);
    auVar70[0xe] = -(pcVar3[0xe] == DAT_142e34350._14_1_);
    auVar70[0xf] = -(pcVar3[0xf] == DAT_142e34350._15_1_);
    if ((ushort)((ushort)(SUB161(auVar70 >> 7,0) & 1) | (ushort)(SUB161(auVar70 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar70 >> 0x17,0) & 1) << 2 |
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
                 (ushort)(SUB161(auVar70 >> 0x77,0) & 1) << 0xe | (ushort)(auVar70[0xf] >> 7) << 0xf
                ) == 0xffff) {
      uVar48 = *(ulonglong *)(lVar44 + uVar51 * -0x18 + -8);
      if (((*(ulonglong *)(param_2 + 0x210) <= uVar48) ||
          (uVar48 = *(ulonglong *)(*(longlong *)(param_2 + 0x208) + uVar48 * 8), uVar48 == 0)) ||
         (lVar44 = ~uVar48 * 0x40, *(longlong *)(lVar49 + 0x20 + lVar44) == 0)) goto LAB_1409af181;
      uVar4 = *(undefined8 *)(lVar49 + lVar44 + 0x10);
      if (*(longlong *)(param_2 + 0x88) == 0) goto LAB_1409af5e7;
      lVar44 = *(longlong *)(param_2 + 0x70);
      uVar48 = *(ulonglong *)(param_2 + 0x78);
      uVar47 = 0x59a9ebec036a11fe;
      lVar49 = 0;
      goto LAB_1409af022;
    }
    uVar50 = (ushort)(uVar43 - 1) & (ushort)uVar43;
    uVar43 = CONCAT22((short)(uVar43 - 1 >> 0x10),uVar50);
  }
  goto LAB_1409aef90;
LAB_1409af022:
  uVar47 = uVar47 & uVar48;
  pcVar2 = (char *)(lVar44 + uVar47);
  auVar71[0] = -(*pcVar2 == DAT_142e33bd0);
  auVar71[1] = -(pcVar2[1] == DAT_142e33bd0._1_1_);
  auVar71[2] = -(pcVar2[2] == DAT_142e33bd0._2_1_);
  auVar71[3] = -(pcVar2[3] == DAT_142e33bd0._3_1_);
  auVar71[4] = -(pcVar2[4] == DAT_142e33bd0._4_1_);
  auVar71[5] = -(pcVar2[5] == DAT_142e33bd0._5_1_);
  auVar71[6] = -(pcVar2[6] == DAT_142e33bd0._6_1_);
  auVar71[7] = -(pcVar2[7] == DAT_142e33bd0._7_1_);
  auVar71[8] = -(pcVar2[8] == DAT_142e33bd0._8_1_);
  auVar71[9] = -(pcVar2[9] == DAT_142e33bd0._9_1_);
  auVar71[10] = -(pcVar2[10] == DAT_142e33bd0._10_1_);
  auVar71[0xb] = -(pcVar2[0xb] == DAT_142e33bd0._11_1_);
  auVar71[0xc] = -(pcVar2[0xc] == DAT_142e33bd0._12_1_);
  auVar71[0xd] = -(pcVar2[0xd] == DAT_142e33bd0._13_1_);
  auVar71[0xe] = -(pcVar2[0xe] == DAT_142e33bd0._14_1_);
  auVar71[0xf] = -(pcVar2[0xf] == DAT_142e33bd0._15_1_);
  uVar50 = (ushort)(SUB161(auVar71 >> 7,0) & 1) | (ushort)(SUB161(auVar71 >> 0xf,0) & 1) << 1 |
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
  uVar43 = (uint)uVar50;
  while (uVar50 != 0) {
    uVar6 = 0;
    for (uVar7 = uVar43; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
      uVar6 = uVar6 + 1;
    }
    uVar51 = uVar6 + uVar47 & uVar48;
    pcVar3 = (char *)(lVar44 + -0x18 + uVar51 * -0x18);
    auVar72[0] = -(*pcVar3 == DAT_142e34980);
    auVar72[1] = -(pcVar3[1] == DAT_142e34980._1_1_);
    auVar72[2] = -(pcVar3[2] == DAT_142e34980._2_1_);
    auVar72[3] = -(pcVar3[3] == DAT_142e34980._3_1_);
    auVar72[4] = -(pcVar3[4] == DAT_142e34980._4_1_);
    auVar72[5] = -(pcVar3[5] == DAT_142e34980._5_1_);
    auVar72[6] = -(pcVar3[6] == DAT_142e34980._6_1_);
    auVar72[7] = -(pcVar3[7] == DAT_142e34980._7_1_);
    auVar72[8] = -(pcVar3[8] == DAT_142e34980._8_1_);
    auVar72[9] = -(pcVar3[9] == DAT_142e34980._9_1_);
    auVar72[10] = -(pcVar3[10] == DAT_142e34980._10_1_);
    auVar72[0xb] = -(pcVar3[0xb] == DAT_142e34980._11_1_);
    auVar72[0xc] = -(pcVar3[0xc] == DAT_142e34980._12_1_);
    auVar72[0xd] = -(pcVar3[0xd] == DAT_142e34980._13_1_);
    auVar72[0xe] = -(pcVar3[0xe] == DAT_142e34980._14_1_);
    auVar72[0xf] = -(pcVar3[0xf] == DAT_142e34980._15_1_);
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
      uVar47 = *(ulonglong *)(lVar44 + uVar51 * -0x18 + -8);
      if (*(ulonglong *)(param_2 + 0x210) <= uVar47) goto LAB_1409af5e7;
      uVar47 = *(ulonglong *)(*(longlong *)(param_2 + 0x208) + uVar47 * 8);
      if (uVar47 == 0) goto LAB_1409af5e7;
      lVar49 = *(longlong *)(param_2 + 0x1d8);
      lVar52 = ~uVar47 * 0x40;
      if (*(longlong *)(lVar49 + 0x20 + lVar52) == 0) goto LAB_1409af5e7;
      uStack_f0 = *(undefined8 *)(lVar52 + lVar49 + 0x10);
      uVar47 = 0xbc86f891ccb8bc37;
      lVar52 = 0;
      goto LAB_1409af113;
    }
    uVar50 = (ushort)(uVar43 - 1) & (ushort)uVar43;
    uVar43 = CONCAT22((short)(uVar43 - 1 >> 0x10),uVar50);
  }
  goto LAB_1409af073;
LAB_1409af113:
  uVar47 = uVar47 & uVar48;
  auVar67 = *(undefined1 (*) [16])(lVar44 + uVar47);
  auVar73[0] = -(auVar67[0] == DAT_142e34330);
  auVar73[1] = -(auVar67[1] == DAT_142e34330._1_1_);
  auVar73[2] = -(auVar67[2] == DAT_142e34330._2_1_);
  auVar73[3] = -(auVar67[3] == DAT_142e34330._3_1_);
  auVar73[4] = -(auVar67[4] == DAT_142e34330._4_1_);
  auVar73[5] = -(auVar67[5] == DAT_142e34330._5_1_);
  auVar73[6] = -(auVar67[6] == DAT_142e34330._6_1_);
  auVar73[7] = -(auVar67[7] == DAT_142e34330._7_1_);
  auVar73[8] = -(auVar67[8] == DAT_142e34330._8_1_);
  auVar73[9] = -(auVar67[9] == DAT_142e34330._9_1_);
  auVar73[10] = -(auVar67[10] == DAT_142e34330._10_1_);
  auVar73[0xb] = -(auVar67[0xb] == DAT_142e34330._11_1_);
  auVar73[0xc] = -(auVar67[0xc] == DAT_142e34330._12_1_);
  auVar73[0xd] = -(auVar67[0xd] == DAT_142e34330._13_1_);
  auVar73[0xe] = -(auVar67[0xe] == DAT_142e34330._14_1_);
  auVar73[0xf] = -(auVar67[0xf] == DAT_142e34330._15_1_);
  uVar50 = (ushort)(SUB161(auVar73 >> 7,0) & 1) | (ushort)(SUB161(auVar73 >> 0xf,0) & 1) << 1 |
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
  uVar43 = (uint)uVar50;
  while (uVar50 != 0) {
    uVar6 = 0;
    for (uVar7 = uVar43; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
      uVar6 = uVar6 + 1;
    }
    uVar51 = uVar6 + uVar47 & uVar48;
    pcVar2 = (char *)(lVar44 + -0x18 + uVar51 * -0x18);
    auVar74[0] = -(*pcVar2 == DAT_142e34340);
    auVar74[1] = -(pcVar2[1] == DAT_142e34340._1_1_);
    auVar74[2] = -(pcVar2[2] == DAT_142e34340._2_1_);
    auVar74[3] = -(pcVar2[3] == DAT_142e34340._3_1_);
    auVar74[4] = -(pcVar2[4] == DAT_142e34340._4_1_);
    auVar74[5] = -(pcVar2[5] == DAT_142e34340._5_1_);
    auVar74[6] = -(pcVar2[6] == DAT_142e34340._6_1_);
    auVar74[7] = -(pcVar2[7] == DAT_142e34340._7_1_);
    auVar74[8] = -(pcVar2[8] == DAT_142e34340._8_1_);
    auVar74[9] = -(pcVar2[9] == DAT_142e34340._9_1_);
    auVar74[10] = -(pcVar2[10] == DAT_142e34340._10_1_);
    auVar74[0xb] = -(pcVar2[0xb] == DAT_142e34340._11_1_);
    auVar74[0xc] = -(pcVar2[0xc] == DAT_142e34340._12_1_);
    auVar74[0xd] = -(pcVar2[0xd] == DAT_142e34340._13_1_);
    auVar74[0xe] = -(pcVar2[0xe] == DAT_142e34340._14_1_);
    auVar74[0xf] = -(pcVar2[0xf] == DAT_142e34340._15_1_);
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
      uVar48 = *(ulonglong *)(lVar44 + uVar51 * -0x18 + -8);
      if (((*(ulonglong *)(param_2 + 0x210) <= uVar48) ||
          (uVar48 = *(ulonglong *)(*(longlong *)(param_2 + 0x208) + uVar48 * 8), uVar48 == 0)) ||
         (lVar44 = ~uVar48 * 0x40, *(longlong *)(lVar49 + 0x20 + lVar44) == 0)) goto LAB_1409af7e3;
      lVar44 = *(longlong *)(lVar49 + lVar44 + 0x10);
      uVar42 = pdb_140e2a740(param_1,lVar44 + 0x10);
      pdb_140e2bec0(param_1,uVar42);
      pdb_140e2d0b0(param_1,uVar42);
      uVar43 = pdb_140e2a740(param_1,lVar44 + 0x18);
      pdb_140e2bec0(param_1,uVar43);
      uStack_6e8 = _DAT_14302a6b0;
      uStack_6e0 = _UNK_14302a6b8;
      uStack_6f8 = _DAT_14302a6a0;
      uStack_6f0 = _UNK_14302a6a8;
      uStack_708 = _DAT_14302a690;
      uStack_700 = _UNK_14302a698;
      uStack_718 = _DAT_14302a680;
      plStack_710 = (longlong *)_UNK_14302a688;
      uStack_6d8 = _DAT_14302a680;
      uStack_6d0 = _UNK_14302a688;
      uStack_6c8 = _DAT_14302a690;
      uStack_6c0 = _UNK_14302a698;
      uStack_6b8 = _DAT_14302a6a0;
      uStack_6b0 = _UNK_14302a6a8;
      uStack_6a8 = _DAT_14302a6b0;
      uStack_6a0 = _UNK_14302a6b8;
      uStack_698 = _DAT_14302a680;
      uStack_690 = _UNK_14302a688;
      uStack_688 = _DAT_14302a690;
      uStack_680 = _UNK_14302a698;
      uStack_678 = _DAT_14302a6a0;
      uStack_670 = _UNK_14302a6a8;
      uStack_668 = _DAT_14302a6b0;
      uStack_660 = _UNK_14302a6b8;
      uStack_628 = _DAT_14302a6b0;
      uStack_620 = _UNK_14302a6b8;
      uStack_638 = _DAT_14302a6a0;
      uStack_630 = _UNK_14302a6a8;
      uStack_648 = _DAT_14302a690;
      uStack_640 = _UNK_14302a698;
      uStack_658 = _DAT_14302a680;
      uStack_650 = _UNK_14302a688;
      uStack_118 = 0x100000001;
      auStack_318 = ZEXT416(_DAT_143028d60);
      uStack_308 = _DAT_143028d70;
      uStack_300 = 0;
      uStack_2f8 = _DAT_143028d80;
      uStack_2f0 = _UNK_143028d88;
      uStack_2e8 = _DAT_143028d90;
      uStack_2e0 = _UNK_143028d98;
      uStack_2a8 = _DAT_14302a6b0;
      uStack_2a0 = _UNK_14302a6b8;
      uStack_2b8 = _DAT_14302a6a0;
      uStack_2b0 = _UNK_14302a6a8;
      uStack_2c8 = _DAT_14302a690;
      uStack_2c0 = _UNK_14302a698;
      uStack_2d8 = _DAT_14302a680;
      uStack_2d0 = _UNK_14302a688;
      auStack_298 = ZEXT416(_DAT_142e36f28);
      uStack_288 = _DAT_143028da0;
      uStack_280 = _UNK_143028da8;
      uStack_278 = _DAT_143028db0;
      uStack_270 = _UNK_143028db8;
      uStack_268 = _DAT_142e4e650;
      uStack_260 = _UNK_142e4e658;
      uStack_228 = _DAT_14302a6b0;
      uStack_220 = _UNK_14302a6b8;
      uStack_238 = _DAT_14302a6a0;
      uStack_230 = _UNK_14302a6a8;
      uStack_248 = _DAT_14302a690;
      uStack_240 = _UNK_14302a698;
      uStack_258 = _DAT_14302a680;
      uStack_250 = _UNK_14302a688;
      pub_142e32760(auStack_218,&uStack_718,0x100);
      auStack_110 = (undefined1  [16])0x0;
      uStack_100 = 0;
      pdb_140e0bb90(&uStack_718,auStack_318);
      puVar77 = &uStack_718;
      pdb_1417633f0(param_1,uVar43,&UNK_143029830,0x1f,&uStack_718);
      uVar48 = (ulonglong)uVar43;
      pdb_1417638d0(param_1,uVar48,&UNK_14302984f,0x30,(ulonglong)puVar77 & 0xffffffff00000000);
      uVar51 = CONCAT71((int7)(uVar48 >> 8),0xb);
      plStack_90 = (longlong *)pdb_140a2e6e0(uVar4,uVar51,&UNK_143029880);
      puVar1 = (ulonglong *)(param_1 + 0x1b8);
      uVar48 = *(ulonglong *)(param_1 + 0x1b8);
      uVar47 = *(ulonglong *)(param_1 + 0x1c8);
      if (uVar47 == uVar48) {
        pdb_142d7f1b0(puVar1,uVar47,2,2,2);
        uVar48 = *puVar1;
      }
      lVar44 = *(longlong *)(param_1 + 0x1c0);
      *(short *)(lVar44 + uVar47 * 2) = (short)uVar42;
      *(ulonglong *)(param_1 + 0x1c8) = uVar47 + 1;
      if (uVar47 + 1 == uVar48) {
        pdb_142d7f1b0(puVar1,uVar48,1,2,2);
        lVar44 = *(longlong *)(param_1 + 0x1c0);
      }
      *(short *)(lVar44 + 2 + uVar47 * 2) = (short)uVar43;
      *(ulonglong *)(param_1 + 0x1c8) = uVar47 + 2;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = uVar51;
      auStack_318 = auVar8 << 0x40;
      uStack_308 = 1;
      uStack_718 = uStack_e8;
      plStack_710 = &lStack_88;
      uStack_708 = uStack_f0;
      pdb_14175f8f0(param_1,&UNK_143029900,0x15,auStack_318,&uStack_718);
      if (uVar47 <= *(ulonglong *)(param_1 + 0x1c8)) {
        *(ulonglong *)(param_1 + 0x1c8) = uVar47;
      }
      pdb_141765920(param_1,&UNK_143029898,0x15,&UNK_1430298ad,0x38,uVar51);
      plVar5 = plStack_90;
      pdb_140e9a350(plStack_90);
      pdb_140e9a350();
      LOCK();
      lVar44 = *plVar5;
      if (lVar44 == 8) {
        *plVar5 = 0;
      }
      UNLOCK();
      if (lVar44 == 8) {
        lVar44 = *(longlong *)(lStack_88 + 0x88);
        cVar9 = DAT_142e34ec0;
        cVar10 = UNK_142e34ec1;
        cVar11 = UNK_142e34ec2;
        cVar12 = UNK_142e34ec3;
        cVar13 = UNK_142e34ec4;
        cVar14 = UNK_142e34ec5;
        cVar15 = UNK_142e34ec6;
        cVar16 = UNK_142e34ec7;
        cVar17 = UNK_142e34ec8;
        cVar18 = UNK_142e34ec9;
        cVar19 = UNK_142e34eca;
        cVar20 = UNK_142e34ecb;
        cVar21 = UNK_142e34ecc;
        cVar22 = UNK_142e34ecd;
        cVar23 = UNK_142e34ece;
        cVar24 = UNK_142e34ecf;
        cVar25 = DAT_142e60e60;
        cVar26 = UNK_142e60e61;
        cVar27 = UNK_142e60e62;
        cVar28 = UNK_142e60e63;
        cVar29 = UNK_142e60e64;
        cVar30 = UNK_142e60e65;
        cVar31 = UNK_142e60e66;
        cVar32 = UNK_142e60e67;
        cVar33 = UNK_142e60e68;
        cVar34 = UNK_142e60e69;
        cVar35 = UNK_142e60e6a;
        cVar36 = UNK_142e60e6b;
        cVar37 = UNK_142e60e6c;
        cVar38 = UNK_142e60e6d;
        cVar39 = UNK_142e60e6e;
        cVar40 = UNK_142e60e6f;
      }
      else {
        pdb_142dbca40(plVar5,0);
        lVar44 = *(longlong *)(lStack_88 + 0x88);
        cVar9 = DAT_142e34ec0;
        cVar10 = UNK_142e34ec1;
        cVar11 = UNK_142e34ec2;
        cVar12 = UNK_142e34ec3;
        cVar13 = UNK_142e34ec4;
        cVar14 = UNK_142e34ec5;
        cVar15 = UNK_142e34ec6;
        cVar16 = UNK_142e34ec7;
        cVar17 = UNK_142e34ec8;
        cVar18 = UNK_142e34ec9;
        cVar19 = UNK_142e34eca;
        cVar20 = UNK_142e34ecb;
        cVar21 = UNK_142e34ecc;
        cVar22 = UNK_142e34ecd;
        cVar23 = UNK_142e34ece;
        cVar24 = UNK_142e34ecf;
        cVar25 = DAT_142e60e60;
        cVar26 = UNK_142e60e61;
        cVar27 = UNK_142e60e62;
        cVar28 = UNK_142e60e63;
        cVar29 = UNK_142e60e64;
        cVar30 = UNK_142e60e65;
        cVar31 = UNK_142e60e66;
        cVar32 = UNK_142e60e67;
        cVar33 = UNK_142e60e68;
        cVar34 = UNK_142e60e69;
        cVar35 = UNK_142e60e6a;
        cVar36 = UNK_142e60e6b;
        cVar37 = UNK_142e60e6c;
        cVar38 = UNK_142e60e6d;
        cVar39 = UNK_142e60e6e;
        cVar40 = UNK_142e60e6f;
      }
      DAT_142e34ec0 = cVar9;
      UNK_142e34ec1 = cVar10;
      UNK_142e34ec2 = cVar11;
      UNK_142e34ec3 = cVar12;
      UNK_142e34ec4 = cVar13;
      UNK_142e34ec5 = cVar14;
      UNK_142e34ec6 = cVar15;
      UNK_142e34ec7 = cVar16;
      UNK_142e34ec8 = cVar17;
      UNK_142e34ec9 = cVar18;
      UNK_142e34eca = cVar19;
      UNK_142e34ecb = cVar20;
      UNK_142e34ecc = cVar21;
      UNK_142e34ecd = cVar22;
      UNK_142e34ece = cVar23;
      UNK_142e34ecf = cVar24;
      DAT_142e60e60 = cVar25;
      UNK_142e60e61 = cVar26;
      UNK_142e60e62 = cVar27;
      UNK_142e60e63 = cVar28;
      UNK_142e60e64 = cVar29;
      UNK_142e60e65 = cVar30;
      UNK_142e60e66 = cVar31;
      UNK_142e60e67 = cVar32;
      UNK_142e60e68 = cVar33;
      UNK_142e60e69 = cVar34;
      UNK_142e60e6a = cVar35;
      UNK_142e60e6b = cVar36;
      UNK_142e60e6c = cVar37;
      UNK_142e60e6d = cVar38;
      UNK_142e60e6e = cVar39;
      UNK_142e60e6f = cVar40;
      if (lVar44 == 0) goto LAB_1409afc4f;
      lVar44 = *(longlong *)(lStack_88 + 0x70);
      uVar48 = 0x1d6a82b468dfb8a2;
      lVar49 = 0;
      goto LAB_1409af577;
    }
    uVar50 = (ushort)(uVar43 - 1) & (ushort)uVar43;
    uVar43 = CONCAT22((short)(uVar43 - 1 >> 0x10),uVar50);
  }
  goto LAB_1409af164;
LAB_1409af577:
  uVar48 = uVar48 & *(ulonglong *)(lStack_88 + 0x78);
  auVar67 = *(undefined1 (*) [16])(lVar44 + uVar48);
  auVar56[0] = -(auVar67[0] == cVar9);
  auVar56[1] = -(auVar67[1] == cVar10);
  auVar56[2] = -(auVar67[2] == cVar11);
  auVar56[3] = -(auVar67[3] == cVar12);
  auVar56[4] = -(auVar67[4] == cVar13);
  auVar56[5] = -(auVar67[5] == cVar14);
  auVar56[6] = -(auVar67[6] == cVar15);
  auVar56[7] = -(auVar67[7] == cVar16);
  auVar56[8] = -(auVar67[8] == cVar17);
  auVar56[9] = -(auVar67[9] == cVar18);
  auVar56[10] = -(auVar67[10] == cVar19);
  auVar56[0xb] = -(auVar67[0xb] == cVar20);
  auVar56[0xc] = -(auVar67[0xc] == cVar21);
  auVar56[0xd] = -(auVar67[0xd] == cVar22);
  auVar56[0xe] = -(auVar67[0xe] == cVar23);
  auVar56[0xf] = -(auVar67[0xf] == cVar24);
  uVar50 = (ushort)(SUB161(auVar56 >> 7,0) & 1) | (ushort)(SUB161(auVar56 >> 0xf,0) & 1) << 1 |
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
           (ushort)(SUB161(auVar56 >> 0x77,0) & 1) << 0xe | (ushort)(auVar56[0xf] >> 7) << 0xf;
  uVar43 = (uint)uVar50;
  while (uVar50 != 0) {
    uVar6 = 0;
    for (uVar7 = uVar43; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
      uVar6 = uVar6 + 1;
    }
    uVar47 = uVar6 + uVar48 & *(ulonglong *)(lStack_88 + 0x78);
    pcVar2 = (char *)(lVar44 + -0x18 + uVar47 * -0x18);
    auVar57[0] = -(*pcVar2 == cVar25);
    auVar57[1] = -(pcVar2[1] == cVar26);
    auVar57[2] = -(pcVar2[2] == cVar27);
    auVar57[3] = -(pcVar2[3] == cVar28);
    auVar57[4] = -(pcVar2[4] == cVar29);
    auVar57[5] = -(pcVar2[5] == cVar30);
    auVar57[6] = -(pcVar2[6] == cVar31);
    auVar57[7] = -(pcVar2[7] == cVar32);
    auVar57[8] = -(pcVar2[8] == cVar33);
    auVar57[9] = -(pcVar2[9] == cVar34);
    auVar57[10] = -(pcVar2[10] == cVar35);
    auVar57[0xb] = -(pcVar2[0xb] == cVar36);
    auVar57[0xc] = -(pcVar2[0xc] == cVar37);
    auVar57[0xd] = -(pcVar2[0xd] == cVar38);
    auVar57[0xe] = -(pcVar2[0xe] == cVar39);
    auVar57[0xf] = -(pcVar2[0xf] == cVar40);
    if ((ushort)((ushort)(SUB161(auVar57 >> 7,0) & 1) | (ushort)(SUB161(auVar57 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar57 >> 0x17,0) & 1) << 2 |
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
                 (ushort)(SUB161(auVar57 >> 0x77,0) & 1) << 0xe | (ushort)(auVar57[0xf] >> 7) << 0xf
                ) == 0xffff) {
      uVar48 = *(ulonglong *)(lVar44 + uVar47 * -0x18 + -8);
      if ((*(ulonglong *)(lStack_88 + 0x210) <= uVar48) ||
         (uVar48 = *(ulonglong *)(*(longlong *)(lStack_88 + 0x208) + uVar48 * 8), uVar48 == 0))
      goto LAB_1409afc4f;
      lVar44 = ~uVar48 * 0x40;
      if (*(longlong *)(*(longlong *)(lStack_88 + 0x1d8) + 0x20 + lVar44) == 0) goto LAB_1409afc4f;
      uVar4 = *(undefined8 *)(*(longlong *)(lStack_88 + 0x1d8) + lVar44 + 0x10);
      pdb_14152c4a0(&uStack_e0,uVar4,param_1);
      pdb_14152c6f0(&uStack_718,uVar4,param_1);
      uStack_bc = (undefined4)uStack_708;
      uStack_cc = (undefined4)uStack_718;
      uStack_c8 = (undefined4)((ulonglong)uStack_718 >> 0x20);
      plStack_c4 = plStack_710;
      uStack_b8 = 0;
      uStack_b0 = 8;
      uStack_a8 = 0;
      uVar45 = pdb_14177be60(*(undefined8 *)(param_1 + 0x208),&UNK_143330c0d,0x35,&uStack_b8);
      pdb_140e291c0(&uStack_718,&UNK_143330c0d,0x35,uVar45,param_1);
      pdb_1417859f0(auStack_318,&uStack_718,&uStack_e0);
      pub_142e32760(&uStack_718,auStack_318,0x88);
      uStack_b8 = _DAT_143028dc0;
      uStack_b0 = _UNK_143028dc8;
      pdb_140e28810(&uStack_718,&uStack_b8);
      pdb_141537980(uVar4,param_1);
      pdb_141539280(uVar4,param_1);
      if (*(longlong *)(lStack_88 + 0x88) == 0) goto LAB_1409af99f;
      lVar44 = *(longlong *)(lStack_88 + 0x70);
      uVar48 = 0x1d6a82b468dfb8a2;
      lVar49 = 0;
      goto LAB_1409af773;
    }
    uVar50 = (ushort)(uVar43 - 1) & (ushort)uVar43;
    uVar43 = CONCAT22((short)(uVar43 - 1 >> 0x10),uVar50);
  }
  goto LAB_1409af5c8;
LAB_1409af773:
  uVar48 = uVar48 & *(ulonglong *)(lStack_88 + 0x78);
  auVar67 = *(undefined1 (*) [16])(lVar44 + uVar48);
  auVar58[0] = -(auVar67[0] == cVar9);
  auVar58[1] = -(auVar67[1] == cVar10);
  auVar58[2] = -(auVar67[2] == cVar11);
  auVar58[3] = -(auVar67[3] == cVar12);
  auVar58[4] = -(auVar67[4] == cVar13);
  auVar58[5] = -(auVar67[5] == cVar14);
  auVar58[6] = -(auVar67[6] == cVar15);
  auVar58[7] = -(auVar67[7] == cVar16);
  auVar58[8] = -(auVar67[8] == cVar17);
  auVar58[9] = -(auVar67[9] == cVar18);
  auVar58[10] = -(auVar67[10] == cVar19);
  auVar58[0xb] = -(auVar67[0xb] == cVar20);
  auVar58[0xc] = -(auVar67[0xc] == cVar21);
  auVar58[0xd] = -(auVar67[0xd] == cVar22);
  auVar58[0xe] = -(auVar67[0xe] == cVar23);
  auVar58[0xf] = -(auVar67[0xf] == cVar24);
  uVar50 = (ushort)(SUB161(auVar58 >> 7,0) & 1) | (ushort)(SUB161(auVar58 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar58 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar58 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar58 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar58 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar58 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar58 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar58 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar58 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar58 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar58 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar58 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar58 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar58 >> 0x77,0) & 1) << 0xe | (ushort)(auVar58[0xf] >> 7) << 0xf;
  uVar43 = (uint)uVar50;
  while (uVar50 != 0) {
    uVar6 = 0;
    for (uVar7 = uVar43; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
      uVar6 = uVar6 + 1;
    }
    uVar47 = uVar6 + uVar48 & *(ulonglong *)(lStack_88 + 0x78);
    pcVar2 = (char *)(lVar44 + -0x18 + uVar47 * -0x18);
    auVar59[0] = -(*pcVar2 == cVar25);
    auVar59[1] = -(pcVar2[1] == cVar26);
    auVar59[2] = -(pcVar2[2] == cVar27);
    auVar59[3] = -(pcVar2[3] == cVar28);
    auVar59[4] = -(pcVar2[4] == cVar29);
    auVar59[5] = -(pcVar2[5] == cVar30);
    auVar59[6] = -(pcVar2[6] == cVar31);
    auVar59[7] = -(pcVar2[7] == cVar32);
    auVar59[8] = -(pcVar2[8] == cVar33);
    auVar59[9] = -(pcVar2[9] == cVar34);
    auVar59[10] = -(pcVar2[10] == cVar35);
    auVar59[0xb] = -(pcVar2[0xb] == cVar36);
    auVar59[0xc] = -(pcVar2[0xc] == cVar37);
    auVar59[0xd] = -(pcVar2[0xd] == cVar38);
    auVar59[0xe] = -(pcVar2[0xe] == cVar39);
    auVar59[0xf] = -(pcVar2[0xf] == cVar40);
    if ((ushort)((ushort)(SUB161(auVar59 >> 7,0) & 1) | (ushort)(SUB161(auVar59 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar59 >> 0x17,0) & 1) << 2 |
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
                 (ushort)(SUB161(auVar59 >> 0x77,0) & 1) << 0xe | (ushort)(auVar59[0xf] >> 7) << 0xf
                ) == 0xffff) {
      uVar48 = *(ulonglong *)(lVar44 + uVar47 * -0x18 + -8);
      if ((*(ulonglong *)(lStack_88 + 0x210) <= uVar48) ||
         (uVar48 = *(ulonglong *)(*(longlong *)(lStack_88 + 0x208) + uVar48 * 8), uVar48 == 0))
      goto LAB_1409af99f;
      lVar44 = ~uVar48 * 0x40;
      if (*(longlong *)(*(longlong *)(lStack_88 + 0x1d8) + 0x20 + lVar44) == 0) goto LAB_1409af99f;
      uVar4 = *(undefined8 *)(*(longlong *)(lStack_88 + 0x1d8) + lVar44 + 0x10);
      pdb_141529410(&uStack_b8,uVar4,param_1);
      uStack_e0 = 0;
      uStack_d8 = 8;
      uStack_d0 = 0;
      uStack_cc = 0;
      uVar45 = pdb_14177be60(*(undefined8 *)(param_1 + 0x208),&UNK_143330b50,0x38,&uStack_e0);
      pdb_140e291c0(auStack_318,&UNK_143330b50,0x38,uVar45,param_1);
      pdb_141787bc0(&uStack_718,auStack_318,&uStack_b8);
      uVar41 = _UNK_143028dd8;
      uVar45 = _DAT_143028dd0;
      auStack_318._0_8_ = _DAT_143028dd0;
      auStack_318._8_8_ = _UNK_143028dd8;
      pdb_140e28810(&uStack_718,auStack_318);
      pdb_141539a00(uVar4,param_1);
      if (DAT_143cb2d0c != '\0') goto LAB_1409afae2;
      if (*(longlong *)(lStack_88 + 0x88) == 0) goto LAB_1409afc24;
      lVar44 = *(longlong *)(lStack_88 + 0x70);
      uVar48 = 0x1d6a82b468dfb8a2;
      lVar49 = 0;
      goto LAB_1409af92f;
    }
    uVar50 = (ushort)(uVar43 - 1) & (ushort)uVar43;
    uVar43 = CONCAT22((short)(uVar43 - 1 >> 0x10),uVar50);
  }
  goto LAB_1409af7c4;
LAB_1409af980:
  auVar55[0] = -(auVar67[0] == -1);
  auVar55[1] = -(auVar67[1] == -1);
  auVar55[2] = -(auVar67[2] == -1);
  auVar55[3] = -(auVar67[3] == -1);
  auVar55[4] = -(auVar67[4] == -1);
  auVar55[5] = -(auVar67[5] == -1);
  auVar55[6] = -(auVar67[6] == -1);
  auVar55[7] = -(auVar67[7] == -1);
  auVar55[8] = -(auVar67[8] == -1);
  auVar55[9] = -(auVar67[9] == -1);
  auVar55[10] = -(auVar67[10] == -1);
  auVar55[0xb] = -(auVar67[0xb] == -1);
  auVar55[0xc] = -(auVar67[0xc] == -1);
  auVar55[0xd] = -(auVar67[0xd] == -1);
  auVar55[0xe] = -(auVar67[0xe] == -1);
  auVar55[0xf] = -(auVar67[0xf] == -1);
  if ((((((((((((((((SUB161(auVar55 >> 7,0) & 1) != 0 || (SUB161(auVar55 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar55 >> 0x17,0) & 1) != 0) || (SUB161(auVar55 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar55 >> 0x27,0) & 1) != 0) || (SUB161(auVar55 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar55 >> 0x37,0) & 1) != 0) || (SUB161(auVar55 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar55 >> 0x47,0) & 1) != 0) || (SUB161(auVar55 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar55 >> 0x57,0) & 1) != 0) || (SUB161(auVar55 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar55 >> 0x67,0) & 1) != 0) || (SUB161(auVar55 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar55 >> 0x77,0) & 1) != 0) || auVar55[0xf] < '\0') {
LAB_1409afc24:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143029788);
  }
  uVar48 = uVar48 + lVar49 + 0x10;
  lVar49 = lVar49 + 0x10;
  goto LAB_1409af92f;
LAB_1409af7c4:
  auVar54[0] = -(auVar67[0] == -1);
  auVar54[1] = -(auVar67[1] == -1);
  auVar54[2] = -(auVar67[2] == -1);
  auVar54[3] = -(auVar67[3] == -1);
  auVar54[4] = -(auVar67[4] == -1);
  auVar54[5] = -(auVar67[5] == -1);
  auVar54[6] = -(auVar67[6] == -1);
  auVar54[7] = -(auVar67[7] == -1);
  auVar54[8] = -(auVar67[8] == -1);
  auVar54[9] = -(auVar67[9] == -1);
  auVar54[10] = -(auVar67[10] == -1);
  auVar54[0xb] = -(auVar67[0xb] == -1);
  auVar54[0xc] = -(auVar67[0xc] == -1);
  auVar54[0xd] = -(auVar67[0xd] == -1);
  auVar54[0xe] = -(auVar67[0xe] == -1);
  auVar54[0xf] = -(auVar67[0xf] == -1);
  if ((((((((((((((((SUB161(auVar54 >> 7,0) & 1) != 0 || (SUB161(auVar54 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar54 >> 0x17,0) & 1) != 0) || (SUB161(auVar54 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar54 >> 0x27,0) & 1) != 0) || (SUB161(auVar54 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar54 >> 0x37,0) & 1) != 0) || (SUB161(auVar54 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar54 >> 0x47,0) & 1) != 0) || (SUB161(auVar54 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar54 >> 0x57,0) & 1) != 0) || (SUB161(auVar54 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar54 >> 0x67,0) & 1) != 0) || (SUB161(auVar54 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar54 >> 0x77,0) & 1) != 0) || auVar54[0xf] < '\0') {
LAB_1409af99f:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_1430297b8);
  }
  uVar48 = uVar48 + lVar49 + 0x10;
  lVar49 = lVar49 + 0x10;
  goto LAB_1409af773;
LAB_1409af5c8:
  auVar53[0] = -(auVar67[0] == -1);
  auVar53[1] = -(auVar67[1] == -1);
  auVar53[2] = -(auVar67[2] == -1);
  auVar53[3] = -(auVar67[3] == -1);
  auVar53[4] = -(auVar67[4] == -1);
  auVar53[5] = -(auVar67[5] == -1);
  auVar53[6] = -(auVar67[6] == -1);
  auVar53[7] = -(auVar67[7] == -1);
  auVar53[8] = -(auVar67[8] == -1);
  auVar53[9] = -(auVar67[9] == -1);
  auVar53[10] = -(auVar67[10] == -1);
  auVar53[0xb] = -(auVar67[0xb] == -1);
  auVar53[0xc] = -(auVar67[0xc] == -1);
  auVar53[0xd] = -(auVar67[0xd] == -1);
  auVar53[0xe] = -(auVar67[0xe] == -1);
  auVar53[0xf] = -(auVar67[0xf] == -1);
  if ((((((((((((((((SUB161(auVar53 >> 7,0) & 1) != 0 || (SUB161(auVar53 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar53 >> 0x17,0) & 1) != 0) || (SUB161(auVar53 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar53 >> 0x27,0) & 1) != 0) || (SUB161(auVar53 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar53 >> 0x37,0) & 1) != 0) || (SUB161(auVar53 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar53 >> 0x47,0) & 1) != 0) || (SUB161(auVar53 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar53 >> 0x57,0) & 1) != 0) || (SUB161(auVar53 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar53 >> 0x67,0) & 1) != 0) || (SUB161(auVar53 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar53 >> 0x77,0) & 1) != 0) || auVar53[0xf] < '\0') {
LAB_1409afc4f:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_1430297a0);
  }
  uVar48 = uVar48 + lVar49 + 0x10;
  lVar49 = lVar49 + 0x10;
  goto LAB_1409af577;
LAB_1409af164:
  auVar65[0] = -(auVar67[0] == -1);
  auVar65[1] = -(auVar67[1] == -1);
  auVar65[2] = -(auVar67[2] == -1);
  auVar65[3] = -(auVar67[3] == -1);
  auVar65[4] = -(auVar67[4] == -1);
  auVar65[5] = -(auVar67[5] == -1);
  auVar65[6] = -(auVar67[6] == -1);
  auVar65[7] = -(auVar67[7] == -1);
  auVar65[8] = -(auVar67[8] == -1);
  auVar65[9] = -(auVar67[9] == -1);
  auVar65[10] = -(auVar67[10] == -1);
  auVar65[0xb] = -(auVar67[0xb] == -1);
  auVar65[0xc] = -(auVar67[0xc] == -1);
  auVar65[0xd] = -(auVar67[0xd] == -1);
  auVar65[0xe] = -(auVar67[0xe] == -1);
  auVar65[0xf] = -(auVar67[0xf] == -1);
  if ((((((((((((((((SUB161(auVar65 >> 7,0) & 1) != 0 || (SUB161(auVar65 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar65 >> 0x17,0) & 1) != 0) || (SUB161(auVar65 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar65 >> 0x27,0) & 1) != 0) || (SUB161(auVar65 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar65 >> 0x37,0) & 1) != 0) || (SUB161(auVar65 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar65 >> 0x47,0) & 1) != 0) || (SUB161(auVar65 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar65 >> 0x57,0) & 1) != 0) || (SUB161(auVar65 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar65 >> 0x67,0) & 1) != 0) || (SUB161(auVar65 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar65 >> 0x77,0) & 1) != 0) || auVar65[0xf] < '\0') {
LAB_1409af7e3:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143029818);
  }
  uVar47 = uVar47 + lVar52 + 0x10;
  lVar52 = lVar52 + 0x10;
  goto LAB_1409af113;
LAB_1409af073:
  auVar64[0] = -(*pcVar2 == -1);
  auVar64[1] = -(pcVar2[1] == -1);
  auVar64[2] = -(pcVar2[2] == -1);
  auVar64[3] = -(pcVar2[3] == -1);
  auVar64[4] = -(pcVar2[4] == -1);
  auVar64[5] = -(pcVar2[5] == -1);
  auVar64[6] = -(pcVar2[6] == -1);
  auVar64[7] = -(pcVar2[7] == -1);
  auVar64[8] = -(pcVar2[8] == -1);
  auVar64[9] = -(pcVar2[9] == -1);
  auVar64[10] = -(pcVar2[10] == -1);
  auVar64[0xb] = -(pcVar2[0xb] == -1);
  auVar64[0xc] = -(pcVar2[0xc] == -1);
  auVar64[0xd] = -(pcVar2[0xd] == -1);
  auVar64[0xe] = -(pcVar2[0xe] == -1);
  auVar64[0xf] = -(pcVar2[0xf] == -1);
  if ((((((((((((((((SUB161(auVar64 >> 7,0) & 1) != 0 || (SUB161(auVar64 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar64 >> 0x17,0) & 1) != 0) || (SUB161(auVar64 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar64 >> 0x27,0) & 1) != 0) || (SUB161(auVar64 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar64 >> 0x37,0) & 1) != 0) || (SUB161(auVar64 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar64 >> 0x47,0) & 1) != 0) || (SUB161(auVar64 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar64 >> 0x57,0) & 1) != 0) || (SUB161(auVar64 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar64 >> 0x67,0) & 1) != 0) || (SUB161(auVar64 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar64 >> 0x77,0) & 1) != 0) || auVar64[0xf] < '\0') {
LAB_1409af5e7:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143029800);
  }
  uVar47 = uVar47 + lVar49 + 0x10;
  lVar49 = lVar49 + 0x10;
  goto LAB_1409af022;
LAB_1409aef90:
  auVar63[0] = -(*pcVar2 == -1);
  auVar63[1] = -(pcVar2[1] == -1);
  auVar63[2] = -(pcVar2[2] == -1);
  auVar63[3] = -(pcVar2[3] == -1);
  auVar63[4] = -(pcVar2[4] == -1);
  auVar63[5] = -(pcVar2[5] == -1);
  auVar63[6] = -(pcVar2[6] == -1);
  auVar63[7] = -(pcVar2[7] == -1);
  auVar63[8] = -(pcVar2[8] == -1);
  auVar63[9] = -(pcVar2[9] == -1);
  auVar63[10] = -(pcVar2[10] == -1);
  auVar63[0xb] = -(pcVar2[0xb] == -1);
  auVar63[0xc] = -(pcVar2[0xc] == -1);
  auVar63[0xd] = -(pcVar2[0xd] == -1);
  auVar63[0xe] = -(pcVar2[0xe] == -1);
  auVar63[0xf] = -(pcVar2[0xf] == -1);
  if ((((((((((((((((SUB161(auVar63 >> 7,0) & 1) != 0 || (SUB161(auVar63 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar63 >> 0x17,0) & 1) != 0) || (SUB161(auVar63 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar63 >> 0x27,0) & 1) != 0) || (SUB161(auVar63 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar63 >> 0x37,0) & 1) != 0) || (SUB161(auVar63 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar63 >> 0x47,0) & 1) != 0) || (SUB161(auVar63 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar63 >> 0x57,0) & 1) != 0) || (SUB161(auVar63 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar63 >> 0x67,0) & 1) != 0) || (SUB161(auVar63 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar63 >> 0x77,0) & 1) != 0) || auVar63[0xf] < '\0') {
LAB_1409af181:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_1430297e8);
  }
  uVar47 = uVar47 + lVar52 + 0x10;
  lVar52 = lVar52 + 0x10;
  goto LAB_1409aef3c;
LAB_1409af92f:
  uVar48 = uVar48 & *(ulonglong *)(lStack_88 + 0x78);
  auVar67 = *(undefined1 (*) [16])(lVar44 + uVar48);
  auVar60[0] = -(auVar67[0] == cVar9);
  auVar60[1] = -(auVar67[1] == cVar10);
  auVar60[2] = -(auVar67[2] == cVar11);
  auVar60[3] = -(auVar67[3] == cVar12);
  auVar60[4] = -(auVar67[4] == cVar13);
  auVar60[5] = -(auVar67[5] == cVar14);
  auVar60[6] = -(auVar67[6] == cVar15);
  auVar60[7] = -(auVar67[7] == cVar16);
  auVar60[8] = -(auVar67[8] == cVar17);
  auVar60[9] = -(auVar67[9] == cVar18);
  auVar60[10] = -(auVar67[10] == cVar19);
  auVar60[0xb] = -(auVar67[0xb] == cVar20);
  auVar60[0xc] = -(auVar67[0xc] == cVar21);
  auVar60[0xd] = -(auVar67[0xd] == cVar22);
  auVar60[0xe] = -(auVar67[0xe] == cVar23);
  auVar60[0xf] = -(auVar67[0xf] == cVar24);
  uVar50 = (ushort)(SUB161(auVar60 >> 7,0) & 1) | (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1 |
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
           (ushort)(SUB161(auVar60 >> 0x77,0) & 1) << 0xe | (ushort)(auVar60[0xf] >> 7) << 0xf;
  uVar43 = (uint)uVar50;
  while( true ) {
    if (uVar50 == 0) goto LAB_1409af980;
    uVar6 = 0;
    for (uVar7 = uVar43; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
      uVar6 = uVar6 + 1;
    }
    uVar47 = uVar6 + uVar48 & *(ulonglong *)(lStack_88 + 0x78);
    pcVar2 = (char *)(lVar44 + -0x18 + uVar47 * -0x18);
    auVar61[0] = -(*pcVar2 == cVar25);
    auVar61[1] = -(pcVar2[1] == cVar26);
    auVar61[2] = -(pcVar2[2] == cVar27);
    auVar61[3] = -(pcVar2[3] == cVar28);
    auVar61[4] = -(pcVar2[4] == cVar29);
    auVar61[5] = -(pcVar2[5] == cVar30);
    auVar61[6] = -(pcVar2[6] == cVar31);
    auVar61[7] = -(pcVar2[7] == cVar32);
    auVar61[8] = -(pcVar2[8] == cVar33);
    auVar61[9] = -(pcVar2[9] == cVar34);
    auVar61[10] = -(pcVar2[10] == cVar35);
    auVar61[0xb] = -(pcVar2[0xb] == cVar36);
    auVar61[0xc] = -(pcVar2[0xc] == cVar37);
    auVar61[0xd] = -(pcVar2[0xd] == cVar38);
    auVar61[0xe] = -(pcVar2[0xe] == cVar39);
    auVar61[0xf] = -(pcVar2[0xf] == cVar40);
    if ((ushort)((ushort)(SUB161(auVar61 >> 7,0) & 1) | (ushort)(SUB161(auVar61 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar61 >> 0x17,0) & 1) << 2 |
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
                 (ushort)(SUB161(auVar61 >> 0x77,0) & 1) << 0xe | (ushort)(auVar61[0xf] >> 7) << 0xf
                ) == 0xffff) break;
    uVar50 = (ushort)(uVar43 - 1) & (ushort)uVar43;
    uVar43 = CONCAT22((short)(uVar43 - 1 >> 0x10),uVar50);
  }
  uVar48 = *(ulonglong *)(lVar44 + uVar47 * -0x18 + -8);
  if ((*(ulonglong *)(lStack_88 + 0x210) <= uVar48) ||
     (uVar48 = *(ulonglong *)(*(longlong *)(lStack_88 + 0x208) + uVar48 * 8), uVar48 == 0))
  goto LAB_1409afc24;
  lVar44 = ~uVar48 * 0x40;
  if (*(longlong *)(*(longlong *)(lStack_88 + 0x1d8) + 0x20 + lVar44) == 0) goto LAB_1409afc24;
  uVar4 = *(undefined8 *)(*(longlong *)(lStack_88 + 0x1d8) + lVar44 + 0x10);
  pdb_14152de10(&uStack_e0,uVar4,param_1);
  pdb_14152e2b0(&uStack_718,uVar4,param_1);
  uStack_bc = (undefined4)uStack_708;
  uStack_cc = (undefined4)uStack_718;
  uStack_c8 = (undefined4)((ulonglong)uStack_718 >> 0x20);
  plStack_c4 = plStack_710;
  uStack_b8 = 0;
  uStack_b0 = 8;
  uStack_a8 = 0;
  uVar46 = pdb_14177be60(*(undefined8 *)(param_1 + 0x208),&UNK_143331c78,0x27,&uStack_b8);
  pdb_140e291c0(auStack_318,&UNK_143331c78,0x27,uVar46,param_1);
  pdb_1417859f0(&uStack_718,auStack_318,&uStack_e0);
  auStack_318._0_8_ = uVar45;
  auStack_318._8_8_ = uVar41;
  pdb_140e28810(&uStack_718,auStack_318);
  pdb_141539140(uVar4,param_1);
  pdb_141537d40(uVar4,param_1);
LAB_1409afae2:
  if (*(longlong *)(lStack_88 + 0x88) != 0) {
    lVar44 = *(longlong *)(lStack_88 + 0x70);
    uVar48 = 0xaa6e2288906f5f57;
    lVar49 = 0;
    while( true ) {
      uVar48 = uVar48 & *(ulonglong *)(lStack_88 + 0x78);
      pcVar2 = (char *)(lVar44 + uVar48);
      auVar75[0] = -(*pcVar2 == DAT_142e33bf0);
      auVar75[1] = -(pcVar2[1] == DAT_142e33bf0._1_1_);
      auVar75[2] = -(pcVar2[2] == DAT_142e33bf0._2_1_);
      auVar75[3] = -(pcVar2[3] == DAT_142e33bf0._3_1_);
      auVar75[4] = -(pcVar2[4] == DAT_142e33bf0._4_1_);
      auVar75[5] = -(pcVar2[5] == DAT_142e33bf0._5_1_);
      auVar75[6] = -(pcVar2[6] == DAT_142e33bf0._6_1_);
      auVar75[7] = -(pcVar2[7] == DAT_142e33bf0._7_1_);
      auVar75[8] = -(pcVar2[8] == DAT_142e33bf0._8_1_);
      auVar75[9] = -(pcVar2[9] == DAT_142e33bf0._9_1_);
      auVar75[10] = -(pcVar2[10] == DAT_142e33bf0._10_1_);
      auVar75[0xb] = -(pcVar2[0xb] == DAT_142e33bf0._11_1_);
      auVar75[0xc] = -(pcVar2[0xc] == DAT_142e33bf0._12_1_);
      auVar75[0xd] = -(pcVar2[0xd] == DAT_142e33bf0._13_1_);
      auVar75[0xe] = -(pcVar2[0xe] == DAT_142e33bf0._14_1_);
      auVar75[0xf] = -(pcVar2[0xf] == DAT_142e33bf0._15_1_);
      uVar50 = (ushort)(SUB161(auVar75 >> 7,0) & 1) | (ushort)(SUB161(auVar75 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar75 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar75 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar75 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar75 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar75 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar75 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar75 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar75 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar75 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar75 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar75 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar75 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar75 >> 0x77,0) & 1) << 0xe | (ushort)(auVar75[0xf] >> 7) << 0xf;
      uVar43 = (uint)uVar50;
      while (uVar50 != 0) {
        uVar6 = 0;
        for (uVar7 = uVar43; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
          uVar6 = uVar6 + 1;
        }
        uVar47 = uVar6 + uVar48 & *(ulonglong *)(lStack_88 + 0x78);
        pcVar3 = (char *)(lVar44 + -0x18 + uVar47 * -0x18);
        auVar76[0] = -(*pcVar3 == DAT_143028de0);
        auVar76[1] = -(pcVar3[1] == UNK_143028de1);
        auVar76[2] = -(pcVar3[2] == UNK_143028de2);
        auVar76[3] = -(pcVar3[3] == UNK_143028de3);
        auVar76[4] = -(pcVar3[4] == UNK_143028de4);
        auVar76[5] = -(pcVar3[5] == UNK_143028de5);
        auVar76[6] = -(pcVar3[6] == UNK_143028de6);
        auVar76[7] = -(pcVar3[7] == UNK_143028de7);
        auVar76[8] = -(pcVar3[8] == UNK_143028de8);
        auVar76[9] = -(pcVar3[9] == UNK_143028de9);
        auVar76[10] = -(pcVar3[10] == UNK_143028dea);
        auVar76[0xb] = -(pcVar3[0xb] == UNK_143028deb);
        auVar76[0xc] = -(pcVar3[0xc] == UNK_143028dec);
        auVar76[0xd] = -(pcVar3[0xd] == UNK_143028ded);
        auVar76[0xe] = -(pcVar3[0xe] == UNK_143028dee);
        auVar76[0xf] = -(pcVar3[0xf] == UNK_143028def);
        if ((ushort)((ushort)(SUB161(auVar76 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar76 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar76 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar76 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar76 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar76 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar76 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar76 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar76 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar76 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar76 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar76 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar76 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar76 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar76 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar76[0xf] >> 7) << 0xf) == 0xffff) {
          uVar48 = *(ulonglong *)(lVar44 + uVar47 * -0x18 + -8);
          if ((uVar48 < *(ulonglong *)(lStack_88 + 0x210)) &&
             (uVar48 = *(ulonglong *)(*(longlong *)(lStack_88 + 0x208) + uVar48 * 8), uVar48 != 0))
          {
            lVar44 = ~uVar48 * 0x40;
            if (*(longlong *)(*(longlong *)(lStack_88 + 0x1d8) + 0x20 + lVar44) != 0) {
              lVar44 = *(longlong *)(lStack_88 + 0x1d8) + lVar44;
              plVar5 = *(longlong **)(lVar44 + 0x10);
              *(undefined4 *)(lVar44 + 0x3c) = *(undefined4 *)(lStack_88 + 0x5a8);
              lVar44 = *plVar5;
              LOCK();
              if (lVar44 == *plVar5) {
                *plVar5 = 0;
              }
              UNLOCK();
              *(byte *)(plVar5 + 1) = *(byte *)(plVar5 + 1) | lVar44 != 0;
              return;
            }
          }
          goto LAB_1409afc18;
        }
        uVar50 = (ushort)(uVar43 - 1) & (ushort)uVar43;
        uVar43 = CONCAT22((short)(uVar43 - 1 >> 0x10),uVar50);
      }
      auVar66[0] = -(*pcVar2 == -1);
      auVar66[1] = -(pcVar2[1] == -1);
      auVar66[2] = -(pcVar2[2] == -1);
      auVar66[3] = -(pcVar2[3] == -1);
      auVar66[4] = -(pcVar2[4] == -1);
      auVar66[5] = -(pcVar2[5] == -1);
      auVar66[6] = -(pcVar2[6] == -1);
      auVar66[7] = -(pcVar2[7] == -1);
      auVar66[8] = -(pcVar2[8] == -1);
      auVar66[9] = -(pcVar2[9] == -1);
      auVar66[10] = -(pcVar2[10] == -1);
      auVar66[0xb] = -(pcVar2[0xb] == -1);
      auVar66[0xc] = -(pcVar2[0xc] == -1);
      auVar66[0xd] = -(pcVar2[0xd] == -1);
      auVar66[0xe] = -(pcVar2[0xe] == -1);
      auVar66[0xf] = -(pcVar2[0xf] == -1);
      if ((((((((((((((((SUB161(auVar66 >> 7,0) & 1) != 0 || (SUB161(auVar66 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar66 >> 0x17,0) & 1) != 0) || (SUB161(auVar66 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar66 >> 0x27,0) & 1) != 0) || (SUB161(auVar66 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar66 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar66 >> 0x3f,0) & 1) != 0) || (SUB161(auVar66 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar66 >> 0x4f,0) & 1) != 0) || (SUB161(auVar66 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar66 >> 0x5f,0) & 1) != 0) || (SUB161(auVar66 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar66 >> 0x6f,0) & 1) != 0) || (SUB161(auVar66 >> 0x77,0) & 1) != 0) ||
          auVar66[0xf] < '\0') break;
      uVar48 = uVar48 + lVar49 + 0x10;
      lVar49 = lVar49 + 0x10;
    }
  }
LAB_1409afc18:
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_1430298e8);
}

