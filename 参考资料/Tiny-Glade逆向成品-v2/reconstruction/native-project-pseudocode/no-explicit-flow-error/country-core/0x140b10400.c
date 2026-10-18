// VA 0x140b10400, PDB extent 4017 bytes
// country_core::systems::render_loop::draw_passes::object_grass_push::object_grass_push_pass
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/draw_passes/object_grass_push.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::render_loop::draw_passes::object_grass_push::object_grass_push_pass
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/draw_passes/object_grass_push.rs
   Extent: 4017 */

longlong * pdb_140b10400(longlong *param_1,undefined4 *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  char *pcVar3;
  undefined8 uVar4;
  byte bVar5;
  byte bVar6;
  float *pfVar7;
  undefined1 *puVar8;
  code *pcVar9;
  uint uVar10;
  uint uVar11;
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
  uint uVar28;
  longlong lVar29;
  ulonglong uVar30;
  undefined *puVar31;
  longlong *plVar32;
  ulonglong uVar33;
  char *pcVar34;
  longlong lVar35;
  undefined4 *puVar36;
  longlong lVar37;
  ushort uVar38;
  longlong lVar39;
  longlong lVar40;
  undefined1 uVar41;
  ulonglong uVar42;
  undefined *puVar43;
  ulonglong uVar44;
  undefined4 *puVar45;
  bool bVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  float fVar49;
  undefined4 uVar50;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
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
  undefined4 uVar72;
  float fVar73;
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined8 uStack_27c;
  undefined *puStack_270;
  ulonglong uStack_190;
  longlong lStack_188;
  byte bStack_180;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 uStack_158;
  undefined4 uStack_150;
  float fStack_14c;
  undefined4 uStack_148;
  undefined4 *puStack_138;
  undefined4 *puStack_130;
  undefined4 *puStack_128;
  undefined4 *puStack_120;
  ulonglong uStack_118;
  longlong lStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [16];
  byte bStack_d0;
  undefined1 auStack_c0 [16];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  longlong lStack_a0;
  longlong *plStack_98;
  longlong *plStack_90;
  undefined1 uStack_81;
  undefined8 uStack_80;
  
  uStack_80 = 0xfffffffffffffffe;
  uVar28 = pdb_140e94b40();
  uVar42 = (ulonglong)uVar28;
  uVar41 = 0;
  puVar36 = param_2;
  if ((char)uVar28 == '\0') goto LAB_140b105e4;
  puVar43 = &UNK_14305534b;
  lVar35 = 0x5a;
  uVar33 = 0x5a;
  lVar29 = pdb_140b15a20(&UNK_14305534b);
  if (lVar29 == 1) {
    if (uVar33 < 0x5b) {
      puVar43 = &UNK_14305534b;
      uVar30 = pdb_140b15a20(&UNK_14305534b);
      if ((uVar30 & 1) != 0) {
        if (0x5a < uVar33 + 2) goto LAB_140b110ba;
        lVar35 = 0x58 - uVar33;
        puVar43 = &UNK_14305534d + uVar33;
      }
      goto LAB_140b104b7;
    }
  }
  else {
LAB_140b104b7:
    puVar31 = &UNK_143054db1;
    puVar45 = (undefined4 *)&UNK_143054d65;
    while( true ) {
      pbVar1 = puVar31 + -1;
      uVar28 = (uint)(char)*pbVar1;
      if ((int)uVar28 < 0) break;
      puVar31 = puVar31 + -1;
      if (uVar28 == 0x5c) goto LAB_140b1055f;
LAB_140b10549:
      if (uVar28 == 0x2f) goto LAB_140b1055f;
      if (puVar31 == &UNK_143054d65) {
        uVar33 = 0x4c;
LAB_140b10583:
        plVar32 = (longlong *)pdb_140e97000();
        if ((char)plVar32[0xd] != '\x01') goto LAB_140b11023;
        do {
          uVar41 = (undefined1)uVar42;
          if (*plVar32 == 0) {
            *plVar32 = -1;
            plStack_90 = plVar32;
            uStack_a8 = pdb_140e94f10(plVar32 + 1,puVar43,lVar35,puVar45,uVar33,1,0);
            *plStack_90 = *plStack_90 + 1;
            puVar36 = param_2;
LAB_140b105e4:
            cVar27 = UNK_142e341ef;
            cVar26 = UNK_142e341ee;
            cVar25 = UNK_142e341ed;
            cVar24 = UNK_142e341ec;
            cVar23 = UNK_142e341eb;
            cVar22 = UNK_142e341ea;
            cVar21 = UNK_142e341e9;
            cVar20 = UNK_142e341e8;
            cVar19 = UNK_142e341e7;
            cVar18 = UNK_142e341e6;
            cVar17 = UNK_142e341e5;
            cVar16 = UNK_142e341e4;
            cVar15 = UNK_142e341e3;
            cVar14 = UNK_142e341e2;
            cVar13 = UNK_142e341e1;
            cVar12 = DAT_142e341e0;
            plStack_98 = (longlong *)CONCAT71(plStack_98._1_7_,uVar41);
            if (*(longlong *)(puVar36 + 0x22) != 0) {
              lVar35 = *(longlong *)(puVar36 + 0x1c);
              uVar42 = *(ulonglong *)(puVar36 + 0x1e);
              uVar33 = 0xa95c7fbc1a5aebc6;
              lVar29 = 0;
              while( true ) {
                uVar33 = uVar33 & uVar42;
                pcVar3 = (char *)(lVar35 + uVar33);
                auVar52[0] = -(*pcVar3 == DAT_142e341e0);
                auVar52[1] = -(pcVar3[1] == UNK_142e341e1);
                auVar52[2] = -(pcVar3[2] == UNK_142e341e2);
                auVar52[3] = -(pcVar3[3] == UNK_142e341e3);
                auVar52[4] = -(pcVar3[4] == UNK_142e341e4);
                auVar52[5] = -(pcVar3[5] == UNK_142e341e5);
                auVar52[6] = -(pcVar3[6] == UNK_142e341e6);
                auVar52[7] = -(pcVar3[7] == UNK_142e341e7);
                auVar52[8] = -(pcVar3[8] == UNK_142e341e8);
                auVar52[9] = -(pcVar3[9] == UNK_142e341e9);
                auVar52[10] = -(pcVar3[10] == UNK_142e341ea);
                auVar52[0xb] = -(pcVar3[0xb] == UNK_142e341eb);
                auVar52[0xc] = -(pcVar3[0xc] == UNK_142e341ec);
                auVar52[0xd] = -(pcVar3[0xd] == UNK_142e341ed);
                auVar52[0xe] = -(pcVar3[0xe] == UNK_142e341ee);
                auVar52[0xf] = -(pcVar3[0xf] == UNK_142e341ef);
                uVar38 = (ushort)(SUB161(auVar52 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar52 >> 0xf,0) & 1) << 1 |
                         (ushort)(SUB161(auVar52 >> 0x17,0) & 1) << 2 |
                         (ushort)(SUB161(auVar52 >> 0x1f,0) & 1) << 3 |
                         (ushort)(SUB161(auVar52 >> 0x27,0) & 1) << 4 |
                         (ushort)(SUB161(auVar52 >> 0x2f,0) & 1) << 5 |
                         (ushort)(SUB161(auVar52 >> 0x37,0) & 1) << 6 |
                         (ushort)(SUB161(auVar52 >> 0x3f,0) & 1) << 7 |
                         (ushort)(SUB161(auVar52 >> 0x47,0) & 1) << 8 |
                         (ushort)(SUB161(auVar52 >> 0x4f,0) & 1) << 9 |
                         (ushort)(SUB161(auVar52 >> 0x57,0) & 1) << 10 |
                         (ushort)(SUB161(auVar52 >> 0x5f,0) & 1) << 0xb |
                         (ushort)(SUB161(auVar52 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auVar52 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auVar52 >> 0x77,0) & 1) << 0xe |
                         (ushort)(auVar52[0xf] >> 7) << 0xf;
                uVar28 = (uint)uVar38;
                while (uVar38 != 0) {
                  uVar10 = 0;
                  for (uVar11 = uVar28; (uVar11 & 1) == 0; uVar11 = uVar11 >> 1 | 0x80000000) {
                    uVar10 = uVar10 + 1;
                  }
                  uVar30 = uVar10 + uVar33 & uVar42;
                  pcVar34 = (char *)(lVar35 + -0x18 + uVar30 * -0x18);
                  auVar53[0] = -(*pcVar34 == DAT_142e34480);
                  auVar53[1] = -(pcVar34[1] == UNK_142e34481);
                  auVar53[2] = -(pcVar34[2] == UNK_142e34482);
                  auVar53[3] = -(pcVar34[3] == UNK_142e34483);
                  auVar53[4] = -(pcVar34[4] == UNK_142e34484);
                  auVar53[5] = -(pcVar34[5] == UNK_142e34485);
                  auVar53[6] = -(pcVar34[6] == UNK_142e34486);
                  auVar53[7] = -(pcVar34[7] == UNK_142e34487);
                  auVar53[8] = -(pcVar34[8] == UNK_142e34488);
                  auVar53[9] = -(pcVar34[9] == UNK_142e34489);
                  auVar53[10] = -(pcVar34[10] == UNK_142e3448a);
                  auVar53[0xb] = -(pcVar34[0xb] == UNK_142e3448b);
                  auVar53[0xc] = -(pcVar34[0xc] == UNK_142e3448c);
                  auVar53[0xd] = -(pcVar34[0xd] == UNK_142e3448d);
                  auVar53[0xe] = -(pcVar34[0xe] == UNK_142e3448e);
                  auVar53[0xf] = -(pcVar34[0xf] == UNK_142e3448f);
                  if ((ushort)((ushort)(SUB161(auVar53 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar53 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar53 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar53 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar53 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar53 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar53 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar53 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar53 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar53 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar53 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar53 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar53 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar53 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar53 >> 0x77,0) & 1) << 0xe |
                              (ushort)(auVar53[0xf] >> 7) << 0xf) == 0xffff) {
                    uVar33 = *(ulonglong *)(lVar35 + uVar30 * -0x18 + -8);
                    uVar30 = *(ulonglong *)(puVar36 + 0x84);
                    if (uVar30 <= uVar33) goto LAB_140b10844;
                    lVar29 = *(longlong *)(puVar36 + 0x82);
                    uVar33 = *(ulonglong *)(lVar29 + uVar33 * 8);
                    if (uVar33 == 0) goto LAB_140b10844;
                    lVar37 = *(longlong *)(puVar36 + 0x76);
                    lVar39 = ~uVar33 * 0x40;
                    if (*(longlong *)(lVar37 + 0x20 + lVar39) == 0) goto LAB_140b10844;
                    pfVar7 = *(float **)(lVar39 + lVar37 + 0x10);
                    uVar33 = 0xade7b9c51f765c3a;
                    lVar39 = 0;
                    goto LAB_140b1070d;
                  }
                  uVar38 = (ushort)(uVar28 - 1) & (ushort)uVar28;
                  uVar28 = CONCAT22((short)(uVar28 - 1 >> 0x10),uVar38);
                }
                auVar51[0] = -(*pcVar3 == -1);
                auVar51[1] = -(pcVar3[1] == -1);
                auVar51[2] = -(pcVar3[2] == -1);
                auVar51[3] = -(pcVar3[3] == -1);
                auVar51[4] = -(pcVar3[4] == -1);
                auVar51[5] = -(pcVar3[5] == -1);
                auVar51[6] = -(pcVar3[6] == -1);
                auVar51[7] = -(pcVar3[7] == -1);
                auVar51[8] = -(pcVar3[8] == -1);
                auVar51[9] = -(pcVar3[9] == -1);
                auVar51[10] = -(pcVar3[10] == -1);
                auVar51[0xb] = -(pcVar3[0xb] == -1);
                auVar51[0xc] = -(pcVar3[0xc] == -1);
                auVar51[0xd] = -(pcVar3[0xd] == -1);
                auVar51[0xe] = -(pcVar3[0xe] == -1);
                auVar51[0xf] = -(pcVar3[0xf] == -1);
                if ((((((((((((((((SUB161(auVar51 >> 7,0) & 1) != 0 ||
                                 (SUB161(auVar51 >> 0xf,0) & 1) != 0) ||
                                (SUB161(auVar51 >> 0x17,0) & 1) != 0) ||
                               (SUB161(auVar51 >> 0x1f,0) & 1) != 0) ||
                              (SUB161(auVar51 >> 0x27,0) & 1) != 0) ||
                             (SUB161(auVar51 >> 0x2f,0) & 1) != 0) ||
                            (SUB161(auVar51 >> 0x37,0) & 1) != 0) ||
                           (SUB161(auVar51 >> 0x3f,0) & 1) != 0) ||
                          (SUB161(auVar51 >> 0x47,0) & 1) != 0) ||
                         (SUB161(auVar51 >> 0x4f,0) & 1) != 0) ||
                        (SUB161(auVar51 >> 0x57,0) & 1) != 0) ||
                       (SUB161(auVar51 >> 0x5f,0) & 1) != 0) || (SUB161(auVar51 >> 0x67,0) & 1) != 0
                      ) || (SUB161(auVar51 >> 0x6f,0) & 1) != 0) ||
                    (SUB161(auVar51 >> 0x77,0) & 1) != 0) || auVar51[0xf] < '\0') break;
                uVar33 = uVar33 + lVar29 + 0x10;
                lVar29 = lVar29 + 0x10;
              }
            }
LAB_140b10844:
                    /* WARNING: Subroutine does not return */
            pdb_142dc8150(&UNK_143054db8);
          }
LAB_140b11017:
          plVar32 = (longlong *)pdb_142dc8090(&UNK_143326a50);
LAB_140b11023:
          plVar32 = (longlong *)pdb_142d8ec20(plVar32,0);
        } while (plVar32 != (longlong *)0x0);
LAB_140b11036:
        pdb_142dc7890(&UNK_143326860);
LAB_140b11043:
        pdb_142dbe080();
                    /* WARNING: Does not return */
        pcVar9 = (code *)invalidInstructionException();
        (*pcVar9)();
      }
    }
    bVar5 = puVar31[-2];
    if ((char)bVar5 < -0x40) {
      bVar6 = puVar31[-3];
      if ((char)bVar6 < -0x40) {
        pbVar2 = puVar31 + -4;
        puVar31 = puVar31 + -4;
        uVar28 = bVar6 & 0x3f | (*pbVar2 & 7) << 6;
      }
      else {
        puVar31 = puVar31 + -3;
        uVar28 = bVar6 & 0xf;
      }
      uVar28 = bVar5 & 0x3f | uVar28 << 6;
    }
    else {
      puVar31 = puVar31 + -2;
      uVar28 = bVar5 & 0x1f;
    }
    uVar28 = (uint)(*pbVar1 & 0x3f) | uVar28 << 6;
    if (uVar28 != 0x5c) goto LAB_140b10549;
LAB_140b1055f:
    if (puVar31 + -0x143054d64 < (undefined *)0x4d) {
      uVar33 = 0x4b - (longlong)(puVar31 + -0x143054d65);
      puVar45 = (undefined4 *)(puVar31 + 1);
      goto LAB_140b10583;
    }
    pdb_142dc8070(&UNK_143054d65,0x4c,puVar31 + -0x143054d64,0x4c,&UNK_1430554a0);
  }
  pdb_142dc8070(&UNK_14305534b,0x5a,0);
LAB_140b110ba:
  pdb_142dc8070(&UNK_14305534b,0x5a);
  pcVar9 = (code *)swi(3);
  plVar32 = (longlong *)(*pcVar9)();
  return plVar32;
LAB_140b1070d:
  uVar33 = uVar33 & uVar42;
  pcVar3 = (char *)(lVar35 + uVar33);
  auVar60[0] = -(*pcVar3 == DAT_142e33f50);
  auVar60[1] = -(pcVar3[1] == DAT_142e33f50._1_1_);
  auVar60[2] = -(pcVar3[2] == DAT_142e33f50._2_1_);
  auVar60[3] = -(pcVar3[3] == DAT_142e33f50._3_1_);
  auVar60[4] = -(pcVar3[4] == DAT_142e33f50._4_1_);
  auVar60[5] = -(pcVar3[5] == DAT_142e33f50._5_1_);
  auVar60[6] = -(pcVar3[6] == DAT_142e33f50._6_1_);
  auVar60[7] = -(pcVar3[7] == DAT_142e33f50._7_1_);
  auVar60[8] = -(pcVar3[8] == DAT_142e33f50._8_1_);
  auVar60[9] = -(pcVar3[9] == DAT_142e33f50._9_1_);
  auVar60[10] = -(pcVar3[10] == DAT_142e33f50._10_1_);
  auVar60[0xb] = -(pcVar3[0xb] == DAT_142e33f50._11_1_);
  auVar60[0xc] = -(pcVar3[0xc] == DAT_142e33f50._12_1_);
  auVar60[0xd] = -(pcVar3[0xd] == DAT_142e33f50._13_1_);
  auVar60[0xe] = -(pcVar3[0xe] == DAT_142e33f50._14_1_);
  auVar60[0xf] = -(pcVar3[0xf] == DAT_142e33f50._15_1_);
  uVar38 = (ushort)(SUB161(auVar60 >> 7,0) & 1) | (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1 |
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
  uVar28 = (uint)uVar38;
  while (uVar38 != 0) {
    uVar10 = 0;
    for (uVar11 = uVar28; (uVar11 & 1) == 0; uVar11 = uVar11 >> 1 | 0x80000000) {
      uVar10 = uVar10 + 1;
    }
    uVar44 = uVar10 + uVar33 & uVar42;
    pcVar34 = (char *)(lVar35 + -0x18 + uVar44 * -0x18);
    auVar61[0] = -(*pcVar34 == DAT_142e646f0);
    auVar61[1] = -(pcVar34[1] == DAT_142e646f0._1_1_);
    auVar61[2] = -(pcVar34[2] == DAT_142e646f0._2_1_);
    auVar61[3] = -(pcVar34[3] == DAT_142e646f0._3_1_);
    auVar61[4] = -(pcVar34[4] == DAT_142e646f0._4_1_);
    auVar61[5] = -(pcVar34[5] == DAT_142e646f0._5_1_);
    auVar61[6] = -(pcVar34[6] == DAT_142e646f0._6_1_);
    auVar61[7] = -(pcVar34[7] == DAT_142e646f0._7_1_);
    auVar61[8] = -(pcVar34[8] == DAT_142e646f0._8_1_);
    auVar61[9] = -(pcVar34[9] == DAT_142e646f0._9_1_);
    auVar61[10] = -(pcVar34[10] == DAT_142e646f0._10_1_);
    auVar61[0xb] = -(pcVar34[0xb] == DAT_142e646f0._11_1_);
    auVar61[0xc] = -(pcVar34[0xc] == DAT_142e646f0._12_1_);
    auVar61[0xd] = -(pcVar34[0xd] == DAT_142e646f0._13_1_);
    auVar61[0xe] = -(pcVar34[0xe] == DAT_142e646f0._14_1_);
    auVar61[0xf] = -(pcVar34[0xf] == DAT_142e646f0._15_1_);
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
                ) == 0xffff) {
      uVar33 = *(ulonglong *)(lVar35 + uVar44 * -0x18 + -8);
      if (((uVar30 <= uVar33) || (uVar33 = *(ulonglong *)(lVar29 + uVar33 * 8), uVar33 == 0)) ||
         (lVar39 = ~uVar33 * 0x40, *(longlong *)(lVar37 + 0x20 + lVar39) == 0)) goto LAB_140b1095f;
      uVar33 = 0x7057b4358e925fdb;
      lVar40 = 0;
      goto LAB_140b107d6;
    }
    uVar38 = (ushort)(uVar28 - 1) & (ushort)uVar28;
    uVar28 = CONCAT22((short)(uVar28 - 1 >> 0x10),uVar38);
  }
  auVar54[0] = -(*pcVar3 == -1);
  auVar54[1] = -(pcVar3[1] == -1);
  auVar54[2] = -(pcVar3[2] == -1);
  auVar54[3] = -(pcVar3[3] == -1);
  auVar54[4] = -(pcVar3[4] == -1);
  auVar54[5] = -(pcVar3[5] == -1);
  auVar54[6] = -(pcVar3[6] == -1);
  auVar54[7] = -(pcVar3[7] == -1);
  auVar54[8] = -(pcVar3[8] == -1);
  auVar54[9] = -(pcVar3[9] == -1);
  auVar54[10] = -(pcVar3[10] == -1);
  auVar54[0xb] = -(pcVar3[0xb] == -1);
  auVar54[0xc] = -(pcVar3[0xc] == -1);
  auVar54[0xd] = -(pcVar3[0xd] == -1);
  auVar54[0xe] = -(pcVar3[0xe] == -1);
  auVar54[0xf] = -(pcVar3[0xf] == -1);
  if ((((((((((((((((SUB161(auVar54 >> 7,0) & 1) != 0 || (SUB161(auVar54 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar54 >> 0x17,0) & 1) != 0) || (SUB161(auVar54 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar54 >> 0x27,0) & 1) != 0) || (SUB161(auVar54 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar54 >> 0x37,0) & 1) != 0) || (SUB161(auVar54 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar54 >> 0x47,0) & 1) != 0) || (SUB161(auVar54 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar54 >> 0x57,0) & 1) != 0) || (SUB161(auVar54 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar54 >> 0x67,0) & 1) != 0) || (SUB161(auVar54 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar54 >> 0x77,0) & 1) != 0) || auVar54[0xf] < '\0') {
LAB_140b1095f:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143054dd0);
  }
  uVar33 = uVar33 + lVar39 + 0x10;
  lVar39 = lVar39 + 0x10;
  goto LAB_140b1070d;
LAB_140b107d6:
  uVar33 = uVar33 & uVar42;
  auVar52 = *(undefined1 (*) [16])(lVar35 + uVar33);
  auVar62[0] = -(auVar52[0] == DAT_142e33d90);
  auVar62[1] = -(auVar52[1] == DAT_142e33d90._1_1_);
  auVar62[2] = -(auVar52[2] == DAT_142e33d90._2_1_);
  auVar62[3] = -(auVar52[3] == DAT_142e33d90._3_1_);
  auVar62[4] = -(auVar52[4] == DAT_142e33d90._4_1_);
  auVar62[5] = -(auVar52[5] == DAT_142e33d90._5_1_);
  auVar62[6] = -(auVar52[6] == DAT_142e33d90._6_1_);
  auVar62[7] = -(auVar52[7] == DAT_142e33d90._7_1_);
  auVar62[8] = -(auVar52[8] == DAT_142e33d90._8_1_);
  auVar62[9] = -(auVar52[9] == DAT_142e33d90._9_1_);
  auVar62[10] = -(auVar52[10] == DAT_142e33d90._10_1_);
  auVar62[0xb] = -(auVar52[0xb] == DAT_142e33d90._11_1_);
  auVar62[0xc] = -(auVar52[0xc] == DAT_142e33d90._12_1_);
  auVar62[0xd] = -(auVar52[0xd] == DAT_142e33d90._13_1_);
  auVar62[0xe] = -(auVar52[0xe] == DAT_142e33d90._14_1_);
  auVar62[0xf] = -(auVar52[0xf] == DAT_142e33d90._15_1_);
  uVar38 = (ushort)(SUB161(auVar62 >> 7,0) & 1) | (ushort)(SUB161(auVar62 >> 0xf,0) & 1) << 1 |
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
           (ushort)(SUB161(auVar62 >> 0x77,0) & 1) << 0xe | (ushort)(auVar62[0xf] >> 7) << 0xf;
  uVar28 = (uint)uVar38;
  while (uVar38 != 0) {
    uVar10 = 0;
    for (uVar11 = uVar28; (uVar11 & 1) == 0; uVar11 = uVar11 >> 1 | 0x80000000) {
      uVar10 = uVar10 + 1;
    }
    uVar44 = uVar10 + uVar33 & uVar42;
    pcVar3 = (char *)(lVar35 + -0x18 + uVar44 * -0x18);
    auVar63[0] = -(*pcVar3 == DAT_142e34350);
    auVar63[1] = -(pcVar3[1] == DAT_142e34350._1_1_);
    auVar63[2] = -(pcVar3[2] == DAT_142e34350._2_1_);
    auVar63[3] = -(pcVar3[3] == DAT_142e34350._3_1_);
    auVar63[4] = -(pcVar3[4] == DAT_142e34350._4_1_);
    auVar63[5] = -(pcVar3[5] == DAT_142e34350._5_1_);
    auVar63[6] = -(pcVar3[6] == DAT_142e34350._6_1_);
    auVar63[7] = -(pcVar3[7] == DAT_142e34350._7_1_);
    auVar63[8] = -(pcVar3[8] == DAT_142e34350._8_1_);
    auVar63[9] = -(pcVar3[9] == DAT_142e34350._9_1_);
    auVar63[10] = -(pcVar3[10] == DAT_142e34350._10_1_);
    auVar63[0xb] = -(pcVar3[0xb] == DAT_142e34350._11_1_);
    auVar63[0xc] = -(pcVar3[0xc] == DAT_142e34350._12_1_);
    auVar63[0xd] = -(pcVar3[0xd] == DAT_142e34350._13_1_);
    auVar63[0xe] = -(pcVar3[0xe] == DAT_142e34350._14_1_);
    auVar63[0xf] = -(pcVar3[0xf] == DAT_142e34350._15_1_);
    if ((ushort)((ushort)(SUB161(auVar63 >> 7,0) & 1) | (ushort)(SUB161(auVar63 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar63 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar63 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar63 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar63 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar63 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar63 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar63 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar63 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar63 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar63 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar63 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar63 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar63 >> 0x77,0) & 1) << 0xe | (ushort)(auVar63[0xf] >> 7) << 0xf
                ) == 0xffff) {
      uVar42 = *(ulonglong *)(lVar35 + uVar44 * -0x18 + -8);
      if (((uVar30 <= uVar42) || (uVar42 = *(ulonglong *)(lVar29 + uVar42 * 8), uVar42 == 0)) ||
         (lVar35 = ~uVar42 * 0x40, *(longlong *)(lVar37 + 0x20 + lVar35) == 0)) goto LAB_140b109ea;
      lVar35 = lVar37 + lVar35;
      puVar43 = (undefined *)CONCAT71((int7)((ulonglong)lVar35 >> 8),0x10);
      lStack_a0 = *(longlong *)(lVar39 + lVar37 + 0x10);
      plStack_90 = (longlong *)pdb_140a2e6e0(*(undefined8 *)(lVar35 + 0x10));
      if (*(longlong *)(puVar36 + 0x22) == 0) goto LAB_140b109fc;
      lVar35 = *(longlong *)(puVar36 + 0x1c);
      uVar42 = *(ulonglong *)(puVar36 + 0x1e);
      uVar33 = 0x17b2b0983155443e;
      lVar29 = 0;
      goto LAB_140b108e8;
    }
    uVar38 = (ushort)(uVar28 - 1) & (ushort)uVar28;
    uVar28 = CONCAT22((short)(uVar28 - 1 >> 0x10),uVar38);
  }
  auVar55[0] = -(auVar52[0] == -1);
  auVar55[1] = -(auVar52[1] == -1);
  auVar55[2] = -(auVar52[2] == -1);
  auVar55[3] = -(auVar52[3] == -1);
  auVar55[4] = -(auVar52[4] == -1);
  auVar55[5] = -(auVar52[5] == -1);
  auVar55[6] = -(auVar52[6] == -1);
  auVar55[7] = -(auVar52[7] == -1);
  auVar55[8] = -(auVar52[8] == -1);
  auVar55[9] = -(auVar52[9] == -1);
  auVar55[10] = -(auVar52[10] == -1);
  auVar55[0xb] = -(auVar52[0xb] == -1);
  auVar55[0xc] = -(auVar52[0xc] == -1);
  auVar55[0xd] = -(auVar52[0xd] == -1);
  auVar55[0xe] = -(auVar52[0xe] == -1);
  auVar55[0xf] = -(auVar52[0xf] == -1);
  if ((((((((((((((((SUB161(auVar55 >> 7,0) & 1) != 0 || (SUB161(auVar55 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar55 >> 0x17,0) & 1) != 0) || (SUB161(auVar55 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar55 >> 0x27,0) & 1) != 0) || (SUB161(auVar55 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar55 >> 0x37,0) & 1) != 0) || (SUB161(auVar55 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar55 >> 0x47,0) & 1) != 0) || (SUB161(auVar55 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar55 >> 0x57,0) & 1) != 0) || (SUB161(auVar55 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar55 >> 0x67,0) & 1) != 0) || (SUB161(auVar55 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar55 >> 0x77,0) & 1) != 0) || auVar55[0xf] < '\0') {
LAB_140b109ea:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143054de8);
  }
  uVar33 = uVar33 + lVar40 + 0x10;
  lVar40 = lVar40 + 0x10;
  goto LAB_140b107d6;
LAB_140b108e8:
  uVar33 = uVar33 & uVar42;
  pcVar3 = (char *)(lVar35 + uVar33);
  auVar64[0] = -(*pcVar3 == DAT_142e42310);
  auVar64[1] = -(pcVar3[1] == DAT_142e42310._1_1_);
  auVar64[2] = -(pcVar3[2] == DAT_142e42310._2_1_);
  auVar64[3] = -(pcVar3[3] == DAT_142e42310._3_1_);
  auVar64[4] = -(pcVar3[4] == DAT_142e42310._4_1_);
  auVar64[5] = -(pcVar3[5] == DAT_142e42310._5_1_);
  auVar64[6] = -(pcVar3[6] == DAT_142e42310._6_1_);
  auVar64[7] = -(pcVar3[7] == DAT_142e42310._7_1_);
  auVar64[8] = -(pcVar3[8] == DAT_142e42310._8_1_);
  auVar64[9] = -(pcVar3[9] == DAT_142e42310._9_1_);
  auVar64[10] = -(pcVar3[10] == DAT_142e42310._10_1_);
  auVar64[0xb] = -(pcVar3[0xb] == DAT_142e42310._11_1_);
  auVar64[0xc] = -(pcVar3[0xc] == DAT_142e42310._12_1_);
  auVar64[0xd] = -(pcVar3[0xd] == DAT_142e42310._13_1_);
  auVar64[0xe] = -(pcVar3[0xe] == DAT_142e42310._14_1_);
  auVar64[0xf] = -(pcVar3[0xf] == DAT_142e42310._15_1_);
  uVar38 = (ushort)(SUB161(auVar64 >> 7,0) & 1) | (ushort)(SUB161(auVar64 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar64 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar64 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar64 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar64 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar64 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar64 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar64 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar64 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar64 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar64 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar64 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar64 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar64 >> 0x77,0) & 1) << 0xe | (ushort)(auVar64[0xf] >> 7) << 0xf;
  uVar28 = (uint)uVar38;
  if (uVar38 != 0) {
LAB_140b10902:
    uVar10 = 0;
    for (uVar11 = uVar28; (uVar11 & 1) == 0; uVar11 = uVar11 >> 1 | 0x80000000) {
      uVar10 = uVar10 + 1;
    }
    uVar30 = uVar10 + uVar33 & uVar42;
    pcVar34 = (char *)(lVar35 + -0x18 + uVar30 * -0x18);
    auVar65[0] = -(*pcVar34 == DAT_142e42320);
    auVar65[1] = -(pcVar34[1] == UNK_142e42321);
    auVar65[2] = -(pcVar34[2] == UNK_142e42322);
    auVar65[3] = -(pcVar34[3] == UNK_142e42323);
    auVar65[4] = -(pcVar34[4] == UNK_142e42324);
    auVar65[5] = -(pcVar34[5] == UNK_142e42325);
    auVar65[6] = -(pcVar34[6] == UNK_142e42326);
    auVar65[7] = -(pcVar34[7] == UNK_142e42327);
    auVar65[8] = -(pcVar34[8] == UNK_142e42328);
    auVar65[9] = -(pcVar34[9] == UNK_142e42329);
    auVar65[10] = -(pcVar34[10] == UNK_142e4232a);
    auVar65[0xb] = -(pcVar34[0xb] == UNK_142e4232b);
    auVar65[0xc] = -(pcVar34[0xc] == UNK_142e4232c);
    auVar65[0xd] = -(pcVar34[0xd] == UNK_142e4232d);
    auVar65[0xe] = -(pcVar34[0xe] == UNK_142e4232e);
    auVar65[0xf] = -(pcVar34[0xf] == UNK_142e4232f);
    if ((ushort)((ushort)(SUB161(auVar65 >> 7,0) & 1) | (ushort)(SUB161(auVar65 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar65 >> 0x17,0) & 1) << 2 |
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
                 (ushort)(SUB161(auVar65 >> 0x77,0) & 1) << 0xe | (ushort)(auVar65[0xf] >> 7) << 0xf
                ) != 0xffff) goto code_r0x000140b10930;
    uVar33 = *(ulonglong *)(lVar35 + uVar30 * -0x18 + -8);
    uVar30 = *(ulonglong *)(puVar36 + 0x84);
    if (uVar30 <= uVar33) goto LAB_140b109fc;
    lVar29 = *(longlong *)(puVar36 + 0x82);
    uVar33 = *(ulonglong *)(lVar29 + uVar33 * 8);
    if (uVar33 == 0) goto LAB_140b109fc;
    lVar37 = *(longlong *)(puVar36 + 0x76);
    lVar39 = ~uVar33 * 0x40;
    if (*(longlong *)(lVar37 + 0x20 + lVar39) == 0) goto LAB_140b109fc;
    puVar8 = *(undefined1 **)(lVar39 + lVar37 + 0x10);
    fVar73 = 0.0;
    uVar72 = _DAT_142e36f28;
    switch(*puVar8) {
    case 1:
      if (puVar8[1] != '\0') break;
    case 0xf:
      fVar73 = _DAT_142e37838;
      break;
    case 2:
    case 3:
      fVar73 = *pfVar7;
      goto code_r0x000140b10c40;
    case 4:
      if (puVar8[1] != '\x03') goto code_r0x000140b10aef;
      break;
    case 5:
code_r0x000140b10aef:
      fVar73 = _DAT_142f89668;
      break;
    default:
      break;
    case 0xd:
      goto code_r0x000140b10c31;
    case 0xe:
      uVar33 = 0x62743ee50af3224d;
      lVar39 = 0;
      goto code_r0x000140b10a2f;
    case 0x10:
      if (*(char *)(lStack_a0 + 0x4d0) == '\x03') {
        fVar73 = _DAT_142e3788c;
        uVar72 = _DAT_142e3798c;
      }
    }
    goto LAB_140b10c49;
  }
LAB_140b10940:
  auVar56[0] = -(*pcVar3 == -1);
  auVar56[1] = -(pcVar3[1] == -1);
  auVar56[2] = -(pcVar3[2] == -1);
  auVar56[3] = -(pcVar3[3] == -1);
  auVar56[4] = -(pcVar3[4] == -1);
  auVar56[5] = -(pcVar3[5] == -1);
  auVar56[6] = -(pcVar3[6] == -1);
  auVar56[7] = -(pcVar3[7] == -1);
  auVar56[8] = -(pcVar3[8] == -1);
  auVar56[9] = -(pcVar3[9] == -1);
  auVar56[10] = -(pcVar3[10] == -1);
  auVar56[0xb] = -(pcVar3[0xb] == -1);
  auVar56[0xc] = -(pcVar3[0xc] == -1);
  auVar56[0xd] = -(pcVar3[0xd] == -1);
  auVar56[0xe] = -(pcVar3[0xe] == -1);
  auVar56[0xf] = -(pcVar3[0xf] == -1);
  if ((((((((((((((((SUB161(auVar56 >> 7,0) & 1) != 0 || (SUB161(auVar56 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar56 >> 0x17,0) & 1) != 0) || (SUB161(auVar56 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar56 >> 0x27,0) & 1) != 0) || (SUB161(auVar56 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar56 >> 0x37,0) & 1) != 0) || (SUB161(auVar56 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar56 >> 0x47,0) & 1) != 0) || (SUB161(auVar56 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar56 >> 0x57,0) & 1) != 0) || (SUB161(auVar56 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar56 >> 0x67,0) & 1) != 0) || (SUB161(auVar56 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar56 >> 0x77,0) & 1) != 0) || auVar56[0xf] < '\0') {
LAB_140b109fc:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143054e18);
  }
  uVar33 = uVar33 + lVar29 + 0x10;
  lVar29 = lVar29 + 0x10;
  goto LAB_140b108e8;
code_r0x000140b10930:
  uVar38 = (ushort)(uVar28 - 1) & (ushort)uVar28;
  uVar28 = CONCAT22((short)(uVar28 - 1 >> 0x10),uVar38);
  if (uVar38 == 0) goto LAB_140b10940;
  goto LAB_140b10902;
code_r0x000140b10a2f:
  uVar33 = uVar33 & uVar42;
  pcVar3 = (char *)(lVar35 + uVar33);
  auVar66[0] = -(*pcVar3 == DAT_142e34770);
  auVar66[1] = -(pcVar3[1] == DAT_142e34770._1_1_);
  auVar66[2] = -(pcVar3[2] == DAT_142e34770._2_1_);
  auVar66[3] = -(pcVar3[3] == DAT_142e34770._3_1_);
  auVar66[4] = -(pcVar3[4] == DAT_142e34770._4_1_);
  auVar66[5] = -(pcVar3[5] == DAT_142e34770._5_1_);
  auVar66[6] = -(pcVar3[6] == DAT_142e34770._6_1_);
  auVar66[7] = -(pcVar3[7] == DAT_142e34770._7_1_);
  auVar66[8] = -(pcVar3[8] == DAT_142e34770._8_1_);
  auVar66[9] = -(pcVar3[9] == DAT_142e34770._9_1_);
  auVar66[10] = -(pcVar3[10] == DAT_142e34770._10_1_);
  auVar66[0xb] = -(pcVar3[0xb] == DAT_142e34770._11_1_);
  auVar66[0xc] = -(pcVar3[0xc] == DAT_142e34770._12_1_);
  auVar66[0xd] = -(pcVar3[0xd] == DAT_142e34770._13_1_);
  auVar66[0xe] = -(pcVar3[0xe] == DAT_142e34770._14_1_);
  auVar66[0xf] = -(pcVar3[0xf] == DAT_142e34770._15_1_);
  uVar38 = (ushort)(SUB161(auVar66 >> 7,0) & 1) | (ushort)(SUB161(auVar66 >> 0xf,0) & 1) << 1 |
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
           (ushort)(SUB161(auVar66 >> 0x77,0) & 1) << 0xe | (ushort)(auVar66[0xf] >> 7) << 0xf;
  uVar28 = (uint)uVar38;
  while (uVar38 != 0) {
    uVar10 = 0;
    for (uVar11 = uVar28; (uVar11 & 1) == 0; uVar11 = uVar11 >> 1 | 0x80000000) {
      uVar10 = uVar10 + 1;
    }
    uVar44 = uVar10 + uVar33 & uVar42;
    pcVar34 = (char *)(lVar35 + -0x18 + uVar44 * -0x18);
    auVar67[0] = -(*pcVar34 == DAT_143031170);
    auVar67[1] = -(pcVar34[1] == UNK_143031171);
    auVar67[2] = -(pcVar34[2] == UNK_143031172);
    auVar67[3] = -(pcVar34[3] == UNK_143031173);
    auVar67[4] = -(pcVar34[4] == UNK_143031174);
    auVar67[5] = -(pcVar34[5] == UNK_143031175);
    auVar67[6] = -(pcVar34[6] == UNK_143031176);
    auVar67[7] = -(pcVar34[7] == UNK_143031177);
    auVar67[8] = -(pcVar34[8] == UNK_143031178);
    auVar67[9] = -(pcVar34[9] == UNK_143031179);
    auVar67[10] = -(pcVar34[10] == UNK_14303117a);
    auVar67[0xb] = -(pcVar34[0xb] == UNK_14303117b);
    auVar67[0xc] = -(pcVar34[0xc] == UNK_14303117c);
    auVar67[0xd] = -(pcVar34[0xd] == UNK_14303117d);
    auVar67[0xe] = -(pcVar34[0xe] == UNK_14303117e);
    auVar67[0xf] = -(pcVar34[0xf] == UNK_14303117f);
    if ((ushort)((ushort)(SUB161(auVar67 >> 7,0) & 1) | (ushort)(SUB161(auVar67 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar67 >> 0x17,0) & 1) << 2 |
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
                 (ushort)(SUB161(auVar67 >> 0x77,0) & 1) << 0xe | (ushort)(auVar67[0xf] >> 7) << 0xf
                ) == 0xffff) {
      uVar33 = *(ulonglong *)(lVar35 + uVar44 * -0x18 + -8);
      if (((uVar30 <= uVar33) || (uVar33 = *(ulonglong *)(lVar29 + uVar33 * 8), uVar33 == 0)) ||
         (*(longlong *)(lVar37 + 0x20 + ~uVar33 * 0x40) == 0)) goto code_r0x000140b10ff9;
      uVar33 = 0xa930ba0e23af5254;
      lVar39 = 0;
      goto code_r0x000140b10b54;
    }
    uVar38 = (ushort)(uVar28 - 1) & (ushort)uVar28;
    uVar28 = CONCAT22((short)(uVar28 - 1 >> 0x10),uVar38);
  }
  auVar57[0] = -(*pcVar3 == -1);
  auVar57[1] = -(pcVar3[1] == -1);
  auVar57[2] = -(pcVar3[2] == -1);
  auVar57[3] = -(pcVar3[3] == -1);
  auVar57[4] = -(pcVar3[4] == -1);
  auVar57[5] = -(pcVar3[5] == -1);
  auVar57[6] = -(pcVar3[6] == -1);
  auVar57[7] = -(pcVar3[7] == -1);
  auVar57[8] = -(pcVar3[8] == -1);
  auVar57[9] = -(pcVar3[9] == -1);
  auVar57[10] = -(pcVar3[10] == -1);
  auVar57[0xb] = -(pcVar3[0xb] == -1);
  auVar57[0xc] = -(pcVar3[0xc] == -1);
  auVar57[0xd] = -(pcVar3[0xd] == -1);
  auVar57[0xe] = -(pcVar3[0xe] == -1);
  auVar57[0xf] = -(pcVar3[0xf] == -1);
  if ((((((((((((((((SUB161(auVar57 >> 7,0) & 1) != 0 || (SUB161(auVar57 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar57 >> 0x17,0) & 1) != 0) || (SUB161(auVar57 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar57 >> 0x27,0) & 1) != 0) || (SUB161(auVar57 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar57 >> 0x37,0) & 1) != 0) || (SUB161(auVar57 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar57 >> 0x47,0) & 1) != 0) || (SUB161(auVar57 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar57 >> 0x57,0) & 1) != 0) || (SUB161(auVar57 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar57 >> 0x67,0) & 1) != 0) || (SUB161(auVar57 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar57 >> 0x77,0) & 1) != 0) || auVar57[0xf] < '\0') {
code_r0x000140b10ff9:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143054e30);
  }
  uVar33 = uVar33 + lVar39 + 0x10;
  lVar39 = lVar39 + 0x10;
  goto code_r0x000140b10a2f;
code_r0x000140b10b54:
  uVar33 = uVar33 & uVar42;
  pcVar3 = (char *)(lVar35 + uVar33);
  auVar68[0] = -(*pcVar3 == cVar12);
  auVar68[1] = -(pcVar3[1] == cVar13);
  auVar68[2] = -(pcVar3[2] == cVar14);
  auVar68[3] = -(pcVar3[3] == cVar15);
  auVar68[4] = -(pcVar3[4] == cVar16);
  auVar68[5] = -(pcVar3[5] == cVar17);
  auVar68[6] = -(pcVar3[6] == cVar18);
  auVar68[7] = -(pcVar3[7] == cVar19);
  auVar68[8] = -(pcVar3[8] == cVar20);
  auVar68[9] = -(pcVar3[9] == cVar21);
  auVar68[10] = -(pcVar3[10] == cVar22);
  auVar68[0xb] = -(pcVar3[0xb] == cVar23);
  auVar68[0xc] = -(pcVar3[0xc] == cVar24);
  auVar68[0xd] = -(pcVar3[0xd] == cVar25);
  auVar68[0xe] = -(pcVar3[0xe] == cVar26);
  auVar68[0xf] = -(pcVar3[0xf] == cVar27);
  uVar38 = (ushort)(SUB161(auVar68 >> 7,0) & 1) | (ushort)(SUB161(auVar68 >> 0xf,0) & 1) << 1 |
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
           (ushort)(SUB161(auVar68 >> 0x77,0) & 1) << 0xe | (ushort)(auVar68[0xf] >> 7) << 0xf;
  uVar28 = (uint)uVar38;
  if (uVar38 != 0) {
code_r0x000140b10b6d:
    uVar10 = 0;
    for (uVar11 = uVar28; (uVar11 & 1) == 0; uVar11 = uVar11 >> 1 | 0x80000000) {
      uVar10 = uVar10 + 1;
    }
    uVar44 = uVar10 + uVar33 & uVar42;
    pcVar34 = (char *)(lVar35 + -0x18 + uVar44 * -0x18);
    auVar69[0] = -(*pcVar34 == UNK_142e64520);
    auVar69[1] = -(pcVar34[1] == UNK_142e64520._1_1_);
    auVar69[2] = -(pcVar34[2] == UNK_142e64520._2_1_);
    auVar69[3] = -(pcVar34[3] == UNK_142e64520._3_1_);
    auVar69[4] = -(pcVar34[4] == UNK_142e64520._4_1_);
    auVar69[5] = -(pcVar34[5] == UNK_142e64520._5_1_);
    auVar69[6] = -(pcVar34[6] == UNK_142e64520._6_1_);
    auVar69[7] = -(pcVar34[7] == UNK_142e64520._7_1_);
    auVar69[8] = -(pcVar34[8] == UNK_142e64520._8_1_);
    auVar69[9] = -(pcVar34[9] == UNK_142e64520._9_1_);
    auVar69[10] = -(pcVar34[10] == UNK_142e64520._10_1_);
    auVar69[0xb] = -(pcVar34[0xb] == UNK_142e64520._11_1_);
    auVar69[0xc] = -(pcVar34[0xc] == UNK_142e64520._12_1_);
    auVar69[0xd] = -(pcVar34[0xd] == UNK_142e64520._13_1_);
    auVar69[0xe] = -(pcVar34[0xe] == UNK_142e64520._14_1_);
    auVar69[0xf] = -(pcVar34[0xf] == UNK_142e64520._15_1_);
    if ((ushort)((ushort)(SUB161(auVar69 >> 7,0) & 1) | (ushort)(SUB161(auVar69 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar69 >> 0x17,0) & 1) << 2 |
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
                 (ushort)(SUB161(auVar69 >> 0x77,0) & 1) << 0xe | (ushort)(auVar69[0xf] >> 7) << 0xf
                ) != 0xffff) goto code_r0x000140b10b98;
    uVar42 = *(ulonglong *)(lVar35 + uVar44 * -0x18 + -8);
    if (((uVar30 <= uVar42) || (uVar42 = *(ulonglong *)(lVar29 + uVar42 * 8), uVar42 == 0)) ||
       (lVar35 = ~uVar42 * 0x40, *(longlong *)(lVar37 + 0x20 + lVar35) == 0))
    goto code_r0x000140b11008;
    lVar37 = lVar37 + lVar35;
    uRam0000000143cb2cf0 =
         pdb_140de93b0(uRam0000000143cb2cf0,lVar37,
                       *(undefined4 *)(*(longlong *)(lVar37 + 0x10) + 0x28),_DAT_142e382c8);
    uVar72 = uRam0000000143cb2cf0;
code_r0x000140b10c31:
    fVar73 = pfVar7[2] * _DAT_142f95160;
code_r0x000140b10c40:
    fVar73 = fVar73 + _DAT_142e37900;
LAB_140b10c49:
    pdb_141942650(&uStack_288,puVar36);
    puVar45 = &uStack_288;
    pdb_141932fd0(puVar45,puVar36);
    bVar5 = bStack_180;
    lVar35 = lStack_188;
    uVar42 = uStack_190;
    if (CONCAT44(uStack_284,uStack_288) != *(longlong *)(puVar36 + 0x166)) goto LAB_140b11043;
    uVar33 = (ulonglong)bStack_180;
    uVar47 = 0;
    uVar48 = 0;
    uVar50 = 0;
    fVar49 = 0.0;
    if (fVar73 <= 0.0) {
      uStack_168 = 0;
    }
    else {
      if (*(char *)(lStack_a0 + 0x4d0) != '\x03') {
        if (*(longlong *)(puVar36 + 0x22) == 0) {
LAB_140b10fea:
                    /* WARNING: Subroutine does not return */
          pdb_142dc8150(&UNK_143054ea8);
        }
        lVar29 = *(longlong *)(puVar36 + 0x1c);
        uVar30 = 0x62743ee50af3224d;
        lVar37 = 0;
        do {
          uVar30 = uVar30 & *(ulonglong *)(puVar36 + 0x1e);
          pcVar3 = (char *)(lVar29 + uVar30);
          auVar70[0] = -(*pcVar3 == DAT_142e34770);
          auVar70[1] = -(pcVar3[1] == DAT_142e34770._1_1_);
          auVar70[2] = -(pcVar3[2] == DAT_142e34770._2_1_);
          auVar70[3] = -(pcVar3[3] == DAT_142e34770._3_1_);
          auVar70[4] = -(pcVar3[4] == DAT_142e34770._4_1_);
          auVar70[5] = -(pcVar3[5] == DAT_142e34770._5_1_);
          auVar70[6] = -(pcVar3[6] == DAT_142e34770._6_1_);
          auVar70[7] = -(pcVar3[7] == DAT_142e34770._7_1_);
          auVar70[8] = -(pcVar3[8] == DAT_142e34770._8_1_);
          auVar70[9] = -(pcVar3[9] == DAT_142e34770._9_1_);
          auVar70[10] = -(pcVar3[10] == DAT_142e34770._10_1_);
          auVar70[0xb] = -(pcVar3[0xb] == DAT_142e34770._11_1_);
          auVar70[0xc] = -(pcVar3[0xc] == DAT_142e34770._12_1_);
          auVar70[0xd] = -(pcVar3[0xd] == DAT_142e34770._13_1_);
          auVar70[0xe] = -(pcVar3[0xe] == DAT_142e34770._14_1_);
          auVar70[0xf] = -(pcVar3[0xf] == DAT_142e34770._15_1_);
          uVar38 = (ushort)(SUB161(auVar70 >> 7,0) & 1) |
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
                   (ushort)(auVar70[0xf] >> 7) << 0xf;
          uVar28 = (uint)uVar38;
          while (uVar38 != 0) {
            uVar10 = 0;
            for (uVar11 = uVar28; (uVar11 & 1) == 0; uVar11 = uVar11 >> 1 | 0x80000000) {
              uVar10 = uVar10 + 1;
            }
            uVar44 = uVar10 + uVar30 & *(ulonglong *)(puVar36 + 0x1e);
            pcVar34 = (char *)(lVar29 + -0x18 + uVar44 * -0x18);
            auVar71[0] = -(*pcVar34 == DAT_143031170);
            auVar71[1] = -(pcVar34[1] == UNK_143031171);
            auVar71[2] = -(pcVar34[2] == UNK_143031172);
            auVar71[3] = -(pcVar34[3] == UNK_143031173);
            auVar71[4] = -(pcVar34[4] == UNK_143031174);
            auVar71[5] = -(pcVar34[5] == UNK_143031175);
            auVar71[6] = -(pcVar34[6] == UNK_143031176);
            auVar71[7] = -(pcVar34[7] == UNK_143031177);
            auVar71[8] = -(pcVar34[8] == UNK_143031178);
            auVar71[9] = -(pcVar34[9] == UNK_143031179);
            auVar71[10] = -(pcVar34[10] == UNK_14303117a);
            auVar71[0xb] = -(pcVar34[0xb] == UNK_14303117b);
            auVar71[0xc] = -(pcVar34[0xc] == UNK_14303117c);
            auVar71[0xd] = -(pcVar34[0xd] == UNK_14303117d);
            auVar71[0xe] = -(pcVar34[0xe] == UNK_14303117e);
            auVar71[0xf] = -(pcVar34[0xf] == UNK_14303117f);
            if ((ushort)((ushort)(SUB161(auVar71 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar71 >> 0xf,0) & 1) << 1 |
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
                         (ushort)(SUB161(auVar71 >> 0x77,0) & 1) << 0xe |
                        (ushort)(auVar71[0xf] >> 7) << 0xf) == 0xffff) {
              uVar30 = *(ulonglong *)(lVar29 + uVar44 * -0x18 + -8);
              if ((*(ulonglong *)(puVar36 + 0x84) <= uVar30) ||
                 (uVar30 = *(ulonglong *)(*(longlong *)(puVar36 + 0x82) + uVar30 * 8), uVar30 == 0))
              goto LAB_140b10fea;
              lVar29 = ~uVar30 * 0x40;
              if (*(longlong *)(*(longlong *)(puVar36 + 0x76) + 0x20 + lVar29) == 0)
              goto LAB_140b10fea;
              pcVar3 = *(char **)(*(longlong *)(puVar36 + 0x76) + lVar29 + 0x10);
              pcVar34 = "";
              if (*pcVar3 != '\0') {
                pcVar34 = pcVar3 + 4;
              }
              uVar4 = *(undefined8 *)(pcVar34 + 4);
              uStack_168 = *(undefined4 *)pcVar34;
              goto LAB_140b10de6;
            }
            uVar38 = (ushort)(uVar28 - 1) & (ushort)uVar28;
            uVar28 = CONCAT22((short)(uVar28 - 1 >> 0x10),uVar38);
          }
          auVar59[0] = -(*pcVar3 == -1);
          auVar59[1] = -(pcVar3[1] == -1);
          auVar59[2] = -(pcVar3[2] == -1);
          auVar59[3] = -(pcVar3[3] == -1);
          auVar59[4] = -(pcVar3[4] == -1);
          auVar59[5] = -(pcVar3[5] == -1);
          auVar59[6] = -(pcVar3[6] == -1);
          auVar59[7] = -(pcVar3[7] == -1);
          auVar59[8] = -(pcVar3[8] == -1);
          auVar59[9] = -(pcVar3[9] == -1);
          auVar59[10] = -(pcVar3[10] == -1);
          auVar59[0xb] = -(pcVar3[0xb] == -1);
          auVar59[0xc] = -(pcVar3[0xc] == -1);
          auVar59[0xd] = -(pcVar3[0xd] == -1);
          auVar59[0xe] = -(pcVar3[0xe] == -1);
          auVar59[0xf] = -(pcVar3[0xf] == -1);
          if ((((((((((((((((SUB161(auVar59 >> 7,0) & 1) != 0 || (SUB161(auVar59 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar59 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar59 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar59 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar59 >> 0x2f,0) & 1) != 0) || (SUB161(auVar59 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar59 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar59 >> 0x47,0) & 1) != 0) || (SUB161(auVar59 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar59 >> 0x57,0) & 1) != 0) || (SUB161(auVar59 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar59 >> 0x67,0) & 1) != 0) || (SUB161(auVar59 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar59 >> 0x77,0) & 1) != 0) || auVar59[0xf] < '\0') goto LAB_140b10fea;
          uVar30 = uVar30 + lVar37 + 0x10;
          lVar37 = lVar37 + 0x10;
        } while( true );
      }
      pdb_140e08f50(&uStack_168);
      uVar4 = CONCAT44(uStack_160,uStack_164);
LAB_140b10de6:
      uVar50 = (undefined4)((ulonglong)uVar4 >> 0x20);
      uVar48 = (undefined4)uVar4;
      uVar47 = uStack_168;
      fVar49 = fVar73;
      uStack_168 = 1;
    }
    lStack_110 = lVar35 * 4 + uVar42;
    puStack_128 = puVar36 + 0x3e;
    puStack_130 = puVar36 + 0x66;
    uStack_118 = uVar42;
    uStack_108 = 8;
    uStack_100 = 0;
    uStack_f8 = 8;
    auStack_f0 = (undefined1  [16])0x0;
    auStack_e0 = (undefined1  [16])0x0;
    bStack_d0 = bVar5;
    uStack_164 = 0;
    uStack_160 = 0;
    uStack_15c = 0;
    uStack_158 = CONCAT44(uVar48,uVar47);
    param_2 = &uStack_168;
    uStack_150 = uVar50;
    fStack_14c = fVar49;
    uStack_148 = uVar72;
    puStack_138 = puVar36;
    puStack_120 = puVar45;
    pdb_1415fc550(auStack_c0,param_2);
    uStack_81 = 1;
    pdb_140499e40(&uStack_288);
    uStack_284 = 0;
    uStack_280 = 0;
    uStack_27c = 0;
    uStack_288 = 1;
    uStack_158 = uStack_b0;
    uStack_168 = (undefined4)auStack_c0._0_8_;
    uStack_164 = SUB84(auStack_c0._0_8_,4);
    uStack_160 = (undefined4)auStack_c0._8_8_;
    uStack_15c = SUB84(auStack_c0._8_8_,4);
    uStack_81 = 0;
    puStack_270 = puVar43;
    pdb_141752b80(param_1,&UNK_143054e60,0x16,&uStack_288,param_2);
    uStack_81 = 0;
    pdb_141766da0(param_1,&UNK_143054e76,0xb,&UNK_143054e81,0x22,puVar43);
    param_1 = plStack_90;
    pdb_140e9a350(plStack_90);
    pdb_140e9a350();
    LOCK();
    plVar32 = (longlong *)*param_1;
    bVar46 = plVar32 == (longlong *)0x8;
    if (bVar46) {
      *param_1 = 0;
      plVar32 = (longlong *)0x8;
    }
    UNLOCK();
    if (!bVar46) {
      plVar32 = (longlong *)pdb_142dbca40(param_1,0);
    }
    if ((char)plStack_98 == '\0') {
      return plVar32;
    }
    plVar32 = (longlong *)pdb_140e97000();
    if (((char)plVar32[0xd] == '\x01') ||
       (plVar32 = (longlong *)pdb_142d8ec20(plVar32,0), plVar32 != (longlong *)0x0)) {
      if (*plVar32 == 0) {
        *plVar32 = -1;
        plStack_98 = plVar32;
        pdb_140e95370(plVar32 + 1,uStack_a8);
        *plStack_98 = *plStack_98 + 1;
        return plStack_98;
      }
      goto LAB_140b11017;
    }
    goto LAB_140b11036;
  }
code_r0x000140b10ba5:
  auVar58[0] = -(*pcVar3 == -1);
  auVar58[1] = -(pcVar3[1] == -1);
  auVar58[2] = -(pcVar3[2] == -1);
  auVar58[3] = -(pcVar3[3] == -1);
  auVar58[4] = -(pcVar3[4] == -1);
  auVar58[5] = -(pcVar3[5] == -1);
  auVar58[6] = -(pcVar3[6] == -1);
  auVar58[7] = -(pcVar3[7] == -1);
  auVar58[8] = -(pcVar3[8] == -1);
  auVar58[9] = -(pcVar3[9] == -1);
  auVar58[10] = -(pcVar3[10] == -1);
  auVar58[0xb] = -(pcVar3[0xb] == -1);
  auVar58[0xc] = -(pcVar3[0xc] == -1);
  auVar58[0xd] = -(pcVar3[0xd] == -1);
  auVar58[0xe] = -(pcVar3[0xe] == -1);
  auVar58[0xf] = -(pcVar3[0xf] == -1);
  if ((((((((((((((((SUB161(auVar58 >> 7,0) & 1) != 0 || (SUB161(auVar58 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar58 >> 0x17,0) & 1) != 0) || (SUB161(auVar58 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar58 >> 0x27,0) & 1) != 0) || (SUB161(auVar58 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar58 >> 0x37,0) & 1) != 0) || (SUB161(auVar58 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar58 >> 0x47,0) & 1) != 0) || (SUB161(auVar58 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar58 >> 0x57,0) & 1) != 0) || (SUB161(auVar58 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar58 >> 0x67,0) & 1) != 0) || (SUB161(auVar58 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar58 >> 0x77,0) & 1) != 0) || auVar58[0xf] < '\0') {
code_r0x000140b11008:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143054e48);
  }
  uVar33 = uVar33 + lVar39 + 0x10;
  lVar39 = lVar39 + 0x10;
  goto code_r0x000140b10b54;
code_r0x000140b10b98:
  uVar38 = (ushort)(uVar28 - 1) & (ushort)uVar28;
  uVar28 = CONCAT22((short)(uVar28 - 1 >> 0x10),uVar38);
  if (uVar38 == 0) goto code_r0x000140b10ba5;
  goto code_r0x000140b10b6d;
}

