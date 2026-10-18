// VA 0x140b00540, PDB extent 3482 bytes
// country_core::systems::render_loop::draw_passes::shadow_pass::shadow_pass
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/draw_passes/shadow_pass.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::render_loop::draw_passes::shadow_pass::shadow_pass
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/draw_passes/shadow_pass.rs
   Extent: 3482 */

ulonglong pdb_140b00540(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,
                       undefined8 param_5)

{
  byte *pbVar1;
  byte *pbVar2;
  char *pcVar3;
  byte bVar4;
  byte bVar5;
  code *pcVar6;
  uint uVar7;
  uint uVar8;
  undefined2 uVar9;
  undefined4 uVar10;
  int iVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined *puVar14;
  longlong *plVar15;
  undefined8 uVar16;
  ulonglong uVar17;
  uint uVar18;
  ulonglong uVar19;
  undefined *puVar20;
  ulonglong uVar21;
  longlong lVar22;
  ushort uVar23;
  undefined2 *puVar24;
  undefined1 uVar25;
  undefined *puVar26;
  undefined7 uVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auStack_248 [24];
  longlong lStack_230;
  undefined8 uStack_228;
  undefined8 *puStack_220;
  ulonglong uStack_218;
  ulonglong auStack_1a8 [3];
  longlong lStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  longlong lStack_170;
  undefined2 *puStack_168;
  undefined8 uStack_160;
  undefined8 *puStack_158;
  longlong *plStack_150;
  undefined8 uStack_148;
  ushort uStack_140;
  undefined1 uStack_13e;
  undefined1 uStack_13d;
  undefined2 uStack_13c;
  undefined1 uStack_13a;
  undefined1 uStack_139;
  undefined1 uStack_138;
  undefined1 uStack_137;
  undefined2 uStack_136;
  undefined1 uStack_134;
  undefined1 uStack_133;
  undefined2 uStack_132;
  undefined8 uStack_130;
  int iStack_bc;
  undefined8 uStack_b8;
  uint uStack_b0;
  undefined2 uStack_ac;
  undefined2 uStack_aa;
  undefined6 uStack_a8;
  undefined2 uStack_a2;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  ulonglong uStack_88;
  undefined4 uStack_78;
  uint uStack_74;
  ushort uStack_70;
  undefined2 uStack_6e;
  undefined2 uStack_6c;
  undefined2 uStack_6a;
  undefined6 uStack_68;
  undefined2 uStack_62;
  longlong *plStack_58;
  char cStack_4b;
  ushort auStack_4a [5];
  
  auStack_4a[1] = 0xfffe;
  auStack_4a[2] = 0xffff;
  auStack_4a[3] = 0xffff;
  auStack_4a[4] = 0xffff;
  uStack_178 = param_4;
  cStack_4b = pdb_140e94b40();
  if (cStack_4b == '\0') {
    uStack_188 = 0;
  }
  else {
    puVar20 = &UNK_1430538eb;
    lVar22 = 0x49;
    uVar19 = 0x49;
    lVar12 = pdb_140b05ec0(&UNK_1430538eb);
    if (lVar12 == 1) {
      if (0x49 < uVar19) goto LAB_140b010d8;
      puVar20 = &UNK_1430538eb;
      uVar13 = pdb_140b05ec0(&UNK_1430538eb);
      if ((uVar13 & 1) != 0) {
        if (0x49 < uVar19 + 2) {
          pdb_142dc8070(&UNK_1430538eb,0x49,uVar19 + 2,0x49,&UNK_143053b00);
          pcVar6 = (code *)swi(3);
          uVar19 = (*pcVar6)();
          return uVar19;
        }
        lVar22 = 0x47 - uVar19;
        puVar20 = &UNK_1430538ed + uVar19;
      }
    }
    puVar14 = &UNK_143052cfb;
    puVar26 = &UNK_143052cb5;
    do {
      pbVar1 = puVar14 + -1;
      uVar18 = (uint)(char)*pbVar1;
      if ((int)uVar18 < 0) {
        bVar4 = puVar14[-2];
        if ((char)bVar4 < -0x40) {
          bVar5 = puVar14[-3];
          if ((char)bVar5 < -0x40) {
            pbVar2 = puVar14 + -4;
            puVar14 = puVar14 + -4;
            uVar18 = bVar5 & 0x3f | (*pbVar2 & 7) << 6;
          }
          else {
            puVar14 = puVar14 + -3;
            uVar18 = bVar5 & 0xf;
          }
          uVar18 = bVar4 & 0x3f | uVar18 << 6;
        }
        else {
          puVar14 = puVar14 + -2;
          uVar18 = bVar4 & 0x1f;
        }
        uVar18 = (uint)(*pbVar1 & 0x3f) | uVar18 << 6;
        if (uVar18 != 0x5c) goto LAB_140b00679;
LAB_140b00696:
        if ((undefined *)0x46 < puVar14 + -0x143052cb4) goto LAB_140b010b5;
        lVar12 = 0x45 - (longlong)(puVar14 + -0x143052cb5);
        puVar26 = puVar14 + 1;
        goto LAB_140b006ba;
      }
      puVar14 = puVar14 + -1;
      if (uVar18 == 0x5c) goto LAB_140b00696;
LAB_140b00679:
      if (uVar18 == 0x2f) goto LAB_140b00696;
    } while (puVar14 != &UNK_143052cb5);
    lVar12 = 0x46;
LAB_140b006ba:
    plVar15 = (longlong *)pdb_140e97000();
    if ((char)plVar15[0xd] != '\x01') {
      plVar15 = (longlong *)pdb_142d8ec20(plVar15,0);
      if (plVar15 == (longlong *)0x0) {
LAB_140b010a9:
        pdb_142dc7890(&UNK_143326860);
LAB_140b010b5:
        pdb_142dc8070(&UNK_143052cb5,0x46);
LAB_140b010d8:
        pdb_142dc8070(&UNK_1430538eb,0x49,0);
LAB_140b010f9:
                    /* WARNING: Subroutine does not return */
        pdb_142dc83d0(&UNK_143052ddc,0xcb,&UNK_143052e48);
      }
    }
    if (*plVar15 != 0) {
LAB_140b0103c:
      pdb_142dc8090(&UNK_143326a50);
LAB_140b01048:
      lStack_230 = CONCAT17(uStack_139,
                            CONCAT16(uStack_13a,
                                     CONCAT24(uStack_13c,
                                              CONCAT13(uStack_13d,CONCAT12(uStack_13e,uStack_140))))
                           );
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_1430538c0,0x2b,&lStack_230,&UNK_1430538a0,&UNK_143052d38);
    }
    *plVar15 = -1;
    plStack_58 = plVar15;
    uStack_180 = pdb_140e94f10(plVar15 + 1,puVar20,lVar22,puVar26,lVar12,1,0);
    *plStack_58 = *plStack_58 + 1;
    uStack_188 = 1;
    uStack_160 = uStack_180;
  }
  lStack_190 = param_2;
  if (*(longlong *)(param_2 + 0x88) == 0) {
LAB_140b01018:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143052d00);
  }
  lVar12 = *(longlong *)(param_2 + 0x70);
  uVar19 = 0xbc86f891ccb8bc37;
  lVar22 = 0;
  do {
    uVar19 = uVar19 & *(ulonglong *)(param_2 + 0x78);
    auVar28 = *(undefined1 (*) [16])(lVar12 + uVar19);
    auVar30[0] = -(auVar28[0] == DAT_142e34330);
    auVar30[1] = -(auVar28[1] == DAT_142e34330._1_1_);
    auVar30[2] = -(auVar28[2] == DAT_142e34330._2_1_);
    auVar30[3] = -(auVar28[3] == DAT_142e34330._3_1_);
    auVar30[4] = -(auVar28[4] == DAT_142e34330._4_1_);
    auVar30[5] = -(auVar28[5] == DAT_142e34330._5_1_);
    auVar30[6] = -(auVar28[6] == DAT_142e34330._6_1_);
    auVar30[7] = -(auVar28[7] == DAT_142e34330._7_1_);
    auVar30[8] = -(auVar28[8] == DAT_142e34330._8_1_);
    auVar30[9] = -(auVar28[9] == DAT_142e34330._9_1_);
    auVar30[10] = -(auVar28[10] == DAT_142e34330._10_1_);
    auVar30[0xb] = -(auVar28[0xb] == DAT_142e34330._11_1_);
    auVar30[0xc] = -(auVar28[0xc] == DAT_142e34330._12_1_);
    auVar30[0xd] = -(auVar28[0xd] == DAT_142e34330._13_1_);
    auVar30[0xe] = -(auVar28[0xe] == DAT_142e34330._14_1_);
    auVar30[0xf] = -(auVar28[0xf] == DAT_142e34330._15_1_);
    uVar23 = (ushort)(SUB161(auVar30 >> 7,0) & 1) | (ushort)(SUB161(auVar30 >> 0xf,0) & 1) << 1 |
             (ushort)(SUB161(auVar30 >> 0x17,0) & 1) << 2 |
             (ushort)(SUB161(auVar30 >> 0x1f,0) & 1) << 3 |
             (ushort)(SUB161(auVar30 >> 0x27,0) & 1) << 4 |
             (ushort)(SUB161(auVar30 >> 0x2f,0) & 1) << 5 |
             (ushort)(SUB161(auVar30 >> 0x37,0) & 1) << 6 |
             (ushort)(SUB161(auVar30 >> 0x3f,0) & 1) << 7 |
             (ushort)(SUB161(auVar30 >> 0x47,0) & 1) << 8 |
             (ushort)(SUB161(auVar30 >> 0x4f,0) & 1) << 9 |
             (ushort)(SUB161(auVar30 >> 0x57,0) & 1) << 10 |
             (ushort)(SUB161(auVar30 >> 0x5f,0) & 1) << 0xb |
             (ushort)(SUB161(auVar30 >> 0x67,0) & 1) << 0xc |
             (ushort)(SUB161(auVar30 >> 0x6f,0) & 1) << 0xd |
             (ushort)(SUB161(auVar30 >> 0x77,0) & 1) << 0xe | (ushort)(auVar30[0xf] >> 7) << 0xf;
    uVar18 = (uint)uVar23;
    while (uVar23 != 0) {
      uVar7 = 0;
      for (uVar8 = uVar18; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
        uVar7 = uVar7 + 1;
      }
      uVar13 = uVar7 + uVar19 & *(ulonglong *)(param_2 + 0x78);
      pcVar3 = (char *)(lVar12 + -0x18 + uVar13 * -0x18);
      auVar31[0] = -(*pcVar3 == DAT_142e34340);
      auVar31[1] = -(pcVar3[1] == DAT_142e34340._1_1_);
      auVar31[2] = -(pcVar3[2] == DAT_142e34340._2_1_);
      auVar31[3] = -(pcVar3[3] == DAT_142e34340._3_1_);
      auVar31[4] = -(pcVar3[4] == DAT_142e34340._4_1_);
      auVar31[5] = -(pcVar3[5] == DAT_142e34340._5_1_);
      auVar31[6] = -(pcVar3[6] == DAT_142e34340._6_1_);
      auVar31[7] = -(pcVar3[7] == DAT_142e34340._7_1_);
      auVar31[8] = -(pcVar3[8] == DAT_142e34340._8_1_);
      auVar31[9] = -(pcVar3[9] == DAT_142e34340._9_1_);
      auVar31[10] = -(pcVar3[10] == DAT_142e34340._10_1_);
      auVar31[0xb] = -(pcVar3[0xb] == DAT_142e34340._11_1_);
      auVar31[0xc] = -(pcVar3[0xc] == DAT_142e34340._12_1_);
      auVar31[0xd] = -(pcVar3[0xd] == DAT_142e34340._13_1_);
      auVar31[0xe] = -(pcVar3[0xe] == DAT_142e34340._14_1_);
      auVar31[0xf] = -(pcVar3[0xf] == DAT_142e34340._15_1_);
      if ((ushort)((ushort)(SUB161(auVar31 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar31 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar31 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar31 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar31 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar31 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar31 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar31 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar31 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar31 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar31 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar31 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar31 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar31 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar31 >> 0x77,0) & 1) << 0xe |
                  (ushort)(auVar31[0xf] >> 7) << 0xf) == 0xffff) {
        uVar19 = *(ulonglong *)(lVar12 + uVar13 * -0x18 + -8);
        if ((*(ulonglong *)(param_2 + 0x210) <= uVar19) ||
           (uVar19 = *(ulonglong *)(*(longlong *)(param_2 + 0x208) + uVar19 * 8), uVar19 == 0))
        goto LAB_140b01018;
        lVar12 = ~uVar19 * 0x40;
        if (*(longlong *)(*(longlong *)(param_2 + 0x1d8) + 0x20 + lVar12) == 0) goto LAB_140b01018;
        plStack_58 = *(longlong **)(*(longlong *)(param_2 + 0x1d8) + lVar12 + 0x10);
        uVar23 = *(ushort *)(param_3 + 0x36);
        lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x1e8) + 0x668) + 0x10;
        uVar27 = (undefined7)((ulonglong)param_2 >> 8);
        uVar19 = CONCAT71(uVar27,0x80);
        lStack_170 = param_2;
        auStack_4a[0] = uVar23;
        pdb_140e8d5b0(&uStack_148,lVar12,CONCAT71((int7)((ulonglong)lVar22 >> 8),0x80));
        if ((~uStack_148._4_4_ & 0x1200) != 0) {
          uVar19 = CONCAT71(uVar27,0x81);
          pdb_140e8d5b0(&uStack_148,lVar12,0x81);
          if ((~uStack_148._4_4_ & 0x1200) != 0) {
            uVar19 = CONCAT71(uVar27,0x82);
            pdb_140e8d5b0(&uStack_148,lVar12,0x82);
            if ((~uStack_148._4_4_ & 0x1200) != 0) goto LAB_140b010f9;
          }
        }
        lStack_230 = (ulonglong)CONCAT22(auStack_4a[0],auStack_4a[0]) << 0x20;
        uStack_228 = 0x162011000010001;
        puStack_220 = (undefined8 *)CONCAT71(puStack_220._1_7_,2);
        pdb_141749b70(&uStack_148,param_1,&UNK_143052d18,0x19,&lStack_230);
        if ((int)uStack_148 != 1) {
          uStack_88 = CONCAT44((undefined4)uStack_130,
                               CONCAT22(uStack_132,CONCAT11(uStack_133,uStack_134)));
          uStack_98 = CONCAT17(uStack_13d,CONCAT16(uStack_13e,CONCAT24(uStack_140,uStack_148._4_4_))
                              );
          puStack_90 = (undefined8 *)
                       CONCAT26(uStack_136,
                                CONCAT15(uStack_137,
                                         CONCAT14(uStack_138,
                                                  CONCAT13(uStack_139,
                                                           CONCAT12(uStack_13a,uStack_13c)))));
          if ((uStack_130._4_4_ & 1) == 0) {
            uStack_b8 = 0;
            uStack_b0 = 8;
            uStack_ac = 0;
            uStack_aa = 0;
            uStack_a8 = 0;
            uStack_a2 = 0;
            uVar16 = pdb_14177be60(*(undefined8 *)(param_1 + 0x208),&UNK_1433318c4,0x2b,&uStack_b8);
            pdb_140e291c0(&uStack_148,&UNK_1433318c4,0x2b,uVar16,param_1);
            pdb_1417a1a80(&lStack_230,&uStack_148,&uStack_98,0xffffffff);
            uVar18 = (uint)puStack_90;
            pub_142e32760(&uStack_148,&lStack_230,0x88);
            uStack_b0 = uVar18 >> 0x10;
            uStack_ac = 1;
            uStack_aa = 0;
            uStack_b8 = CONCAT44(uVar18 & 0xffff,1);
            pdb_140e28810(&uStack_148,&uStack_b8);
          }
          uStack_218 = uStack_88;
          uStack_228 = uStack_98;
          puStack_220 = puStack_90;
          lStack_230 = 0;
          uVar18 = *(uint *)(param_3 + 0x28);
          auVar28._8_8_ = 0;
          auVar28._0_8_ = _DAT_143052730 & 0xffffffff0000ffff | (ulonglong)uVar23 << 0x10;
          auVar28 = pshuflw(auVar28,auVar28,0xd4);
          uStack_148._0_4_ = auVar28._0_4_;
          uStack_148._4_4_ = auVar28._4_4_;
          uStack_140 = (ushort)uVar18;
          uStack_13e = 1;
          uVar25 = (undefined1)uVar19;
          uStack_13c = 0x301;
          uStack_13a = 0;
          uStack_138 = 0xa8;
          uStack_137 = 0x36;
          uStack_136 = 0x4305;
          uStack_134 = 1;
          uStack_133 = 0;
          uStack_132 = 0;
          uStack_130._0_4_ = 0x1c;
          uStack_130._4_4_ = 0;
          uStack_13d = uVar25;
          uStack_148._4_4_ = pdb_140e2b4e0(param_1,&uStack_148);
          uStack_13e = (undefined1)uVar23;
          uStack_13d = (undefined1)(uVar23 >> 8);
          uStack_13c = 1;
          uStack_13a = (undefined1)uVar18;
          uStack_139 = (undefined1)(uVar18 >> 8);
          uStack_138 = 1;
          uStack_136 = 0x301;
          uStack_134 = 0;
          uStack_148._0_4_ = 0;
          uStack_140 = uVar23;
          uStack_137 = uVar25;
          if (*(char *)(param_1 + 0x24c) == '\x01') {
            pdb_140e19620(&uStack_148,param_1);
          }
          uStack_68 = CONCAT15(uStack_133,
                               CONCAT14(uStack_134,
                                        CONCAT22(uStack_136,CONCAT11(uStack_137,uStack_138))));
          uStack_62 = uStack_132;
          uStack_78 = (int)uStack_148;
          uStack_74 = uStack_148._4_4_;
          uStack_70 = uStack_140;
          uStack_6e = CONCAT11(uStack_13d,uStack_13e);
          uStack_6c = uStack_13c;
          uStack_6a = CONCAT11(uStack_139,uStack_13a);
          if (uVar18 != 0) {
            puStack_168 = (undefined2 *)(param_3 + (ulonglong)uVar18 * 2 + 0x2c);
            puVar24 = (undefined2 *)(param_3 + 0x2c);
            plStack_58 = plStack_58 + 3;
            uVar21 = 0;
            uVar13 = *(ulonglong *)(param_1 + 0x1c8);
            do {
              uVar9 = *puVar24;
              if (uVar13 == *(ulonglong *)(param_1 + 0x1b8)) {
                pdb_142d7f1b0(param_1 + 0x1b8,uVar13,1,2,2);
              }
              *(undefined2 *)(*(longlong *)(param_1 + 0x1c0) + uVar13 * 2) = uVar9;
              *(ulonglong *)(param_1 + 0x1c8) = uVar13 + 1;
              lVar12 = *(longlong *)(param_1 + 0x130);
              auStack_1a8[0] = uVar21;
              if (lVar12 == *(longlong *)(param_1 + 0x120)) {
                pdb_142d8afd0(param_1 + 0x120);
              }
              lVar22 = *(longlong *)(param_1 + 0x128);
              *(undefined **)(lVar22 + lVar12 * 0x10) = &UNK_143052d50;
              *(undefined8 *)(lVar22 + 8 + lVar12 * 0x10) = 0xe;
              *(longlong *)(param_1 + 0x130) = lVar12 + 1;
              uVar9 = pdb_140e2a740(param_1,plStack_58);
              uVar17 = CONCAT62((int6)((ulonglong)(lVar12 + 1) >> 0x10),uVar9);
              uVar10 = 0;
              uVar16 = pdb_1415cc120(*(undefined8 *)(param_1 + 0x1e8),&UNK_143052d5e,10,
                                     &UNK_143052d68,0x30);
              uStack_148._0_4_ = (int)uVar16;
              uStack_148._4_4_ = (uint)((ulonglong)uVar16 >> 0x20);
              uVar9 = pdb_140e2a740(param_1,&uStack_148);
              uVar19 = CONCAT62((int6)(uVar19 >> 0x10),uVar9);
              pdb_1417638d0(param_1,uVar19 & 0xffffffff,&UNK_143052d68,0x30,
                            CONCAT44(uVar10,(int)uVar21 + 2));
              pdb_140991660(&uStack_148);
              pdb_140e29ad0(param_1,uVar19 & 0xffffffff);
              pdb_140e2bec0(param_1,uVar17 & 0xffffffff);
              pdb_140e29ad0(param_1,uVar17 & 0xffffffff);
              uVar10 = pdb_140e25fd0(0,uVar21 & 0xffffffff);
              uVar18 = uStack_74;
              uStack_b0 = CONCAT22(uStack_6e,uStack_70);
              uStack_a8 = uStack_68;
              uStack_ac = uStack_6c;
              uStack_aa = uStack_6a;
              uStack_b8 = CONCAT44(uStack_74,uVar10);
              uStack_98 = 0;
              puStack_90 = &uStack_b8;
              uStack_88 = 0x3f80000000000001;
              uStack_148._0_4_ = (int)param_5;
              uStack_148._4_4_ = (uint)((ulonglong)param_5 >> 0x20);
              uStack_140 = (ushort)&lStack_190;
              uStack_13e = (undefined1)((ulonglong)&lStack_190 >> 0x10);
              uStack_13d = (undefined1)((ulonglong)&lStack_190 >> 0x18);
              uStack_13c = (undefined2)((ulonglong)&lStack_190 >> 0x20);
              uStack_13a = (undefined1)((ulonglong)&lStack_190 >> 0x30);
              uStack_139 = (undefined1)((ulonglong)&lStack_190 >> 0x38);
              uStack_138 = SUB81(auStack_1a8,0);
              uStack_137 = (undefined1)((ulonglong)auStack_1a8 >> 8);
              uStack_136 = (undefined2)((ulonglong)auStack_1a8 >> 0x10);
              uStack_134 = (undefined1)((ulonglong)auStack_1a8 >> 0x20);
              uStack_133 = (undefined1)((ulonglong)auStack_1a8 >> 0x28);
              uStack_132 = (undefined2)((ulonglong)auStack_1a8 >> 0x30);
              pdb_1417570d0(param_1,&UNK_143052d98,0x18,&uStack_98,&uStack_148);
              if (lStack_230 != 0) {
                pdb_142dc8090(&UNK_143052db0);
                    /* WARNING: Does not return */
                pcVar6 = (code *)invalidInstructionException();
                (*pcVar6)();
              }
              lStack_230 = -1;
              puStack_158 = &uStack_228;
              plStack_150 = &lStack_230;
              pdb_140b232a0(auStack_248,param_1,lStack_170,uVar21,uStack_178,&uStack_78,puStack_158)
              ;
              uVar7 = (uint)(ushort)(((auStack_4a[0] >> 5) + 1) -
                                    (ushort)((auStack_4a[0] & 0x1f) == 0));
              iStack_bc = uVar7 * uVar7;
              uVar10 = pdb_140e25fd0(0,uVar21 & 0xffffffff);
              uStack_b0 = CONCAT22(uStack_6e,uStack_70);
              uStack_a8 = uStack_68;
              uStack_ac = uStack_6c;
              uStack_aa = uStack_6a;
              uStack_b8 = CONCAT44(uVar18,uVar10);
              puStack_90 = &uStack_b8;
              uStack_88 = uStack_88 & 0xffffffff00000000;
              uStack_98 = 0;
              uStack_148 = &puStack_158;
              uStack_140 = (ushort)auStack_248;
              uStack_13e = (undefined1)((ulonglong)auStack_248 >> 0x10);
              uStack_13d = (undefined1)((ulonglong)auStack_248 >> 0x18);
              uStack_13c = (undefined2)((ulonglong)auStack_248 >> 0x20);
              uStack_13a = (undefined1)((ulonglong)auStack_248 >> 0x30);
              uStack_139 = (undefined1)((ulonglong)auStack_248 >> 0x38);
              uStack_138 = SUB81(auStack_4a,0);
              uStack_137 = (undefined1)((ulonglong)auStack_4a >> 8);
              uStack_136 = (undefined2)((ulonglong)auStack_4a >> 0x10);
              uStack_134 = (undefined1)((ulonglong)auStack_4a >> 0x20);
              uStack_133 = (undefined1)((ulonglong)auStack_4a >> 0x28);
              uStack_132 = (undefined2)((ulonglong)auStack_4a >> 0x30);
              uStack_130 = &iStack_bc;
              pdb_14175b5c0(param_1,&UNK_143052dc8,0x14,&uStack_98,&uStack_148);
              *plStack_150 = *plStack_150 + 1;
              lVar12 = *(longlong *)(param_1 + 0x130);
              if (lVar12 == *(longlong *)(param_1 + 0x120)) {
                pdb_142d8afd0(param_1 + 0x120);
              }
              *(undefined8 *)(*(longlong *)(param_1 + 0x128) + lVar12 * 0x10) = 0;
              *(longlong *)(param_1 + 0x130) = lVar12 + 1;
              uVar17 = *(ulonglong *)(param_1 + 0x1c8);
              if (uVar13 <= *(ulonglong *)(param_1 + 0x1c8)) {
                *(ulonglong *)(param_1 + 0x1c8) = uVar13;
                uVar17 = uVar13;
              }
              puVar24 = puVar24 + 1;
              uVar21 = uVar21 + 1;
              uVar13 = uVar17;
            } while (puVar24 != puStack_168);
          }
          iVar11 = pdb_140e26050(0);
          uStack_140 = uStack_70;
          uStack_13e = (undefined1)uStack_6e;
          uStack_13d = (undefined1)((ushort)uStack_6e >> 8);
          uStack_13c = uStack_6c;
          uStack_13a = (undefined1)uStack_6a;
          uStack_139 = (undefined1)((ushort)uStack_6a >> 8);
          uStack_138 = (undefined1)uStack_68;
          uStack_137 = (undefined1)((uint6)uStack_68 >> 8);
          uStack_136 = (undefined2)((uint6)uStack_68 >> 0x10);
          uStack_134 = (undefined1)((uint6)uStack_68 >> 0x20);
          uStack_133 = (undefined1)((uint6)uStack_68 >> 0x28);
          uStack_148._4_4_ = uStack_74;
          uStack_148._0_4_ = iVar11;
          uVar19 = pdb_141768160(param_1,&UNK_1430536c4,0x10,&UNK_1430536d4,0x1a,&uStack_78,
                                 &uStack_148);
          if (cStack_4b == '\0') {
            return uVar19;
          }
          plVar15 = (longlong *)pdb_140e97000();
          if ((char)plVar15[0xd] != '\x01') {
            plVar15 = (longlong *)pdb_142d8ec20(plVar15,0);
            if (plVar15 != (longlong *)0x0) goto LAB_140b00fd3;
            goto LAB_140b010a9;
          }
LAB_140b00fd3:
          if (*plVar15 == 0) {
            *plVar15 = -1;
            plStack_58 = plVar15;
            pdb_140e95370(plVar15 + 1,uStack_160);
            *plStack_58 = *plStack_58 + 1;
            return uVar19 & 0xffffffff;
          }
          goto LAB_140b0103c;
        }
        goto LAB_140b01048;
      }
      uVar23 = (ushort)(uVar18 - 1) & (ushort)uVar18;
      uVar18 = CONCAT22((short)(uVar18 - 1 >> 0x10),uVar23);
    }
    auVar29[0] = -(auVar28[0] == -1);
    auVar29[1] = -(auVar28[1] == -1);
    auVar29[2] = -(auVar28[2] == -1);
    auVar29[3] = -(auVar28[3] == -1);
    auVar29[4] = -(auVar28[4] == -1);
    auVar29[5] = -(auVar28[5] == -1);
    auVar29[6] = -(auVar28[6] == -1);
    auVar29[7] = -(auVar28[7] == -1);
    auVar29[8] = -(auVar28[8] == -1);
    auVar29[9] = -(auVar28[9] == -1);
    auVar29[10] = -(auVar28[10] == -1);
    auVar29[0xb] = -(auVar28[0xb] == -1);
    auVar29[0xc] = -(auVar28[0xc] == -1);
    auVar29[0xd] = -(auVar28[0xd] == -1);
    auVar29[0xe] = -(auVar28[0xe] == -1);
    auVar29[0xf] = -(auVar28[0xf] == -1);
    if ((((((((((((((((SUB161(auVar29 >> 7,0) & 1) != 0 || (SUB161(auVar29 >> 0xf,0) & 1) != 0) ||
                    (SUB161(auVar29 >> 0x17,0) & 1) != 0) || (SUB161(auVar29 >> 0x1f,0) & 1) != 0)
                  || (SUB161(auVar29 >> 0x27,0) & 1) != 0) || (SUB161(auVar29 >> 0x2f,0) & 1) != 0)
                || (SUB161(auVar29 >> 0x37,0) & 1) != 0) || (SUB161(auVar29 >> 0x3f,0) & 1) != 0) ||
              (SUB161(auVar29 >> 0x47,0) & 1) != 0) || (SUB161(auVar29 >> 0x4f,0) & 1) != 0) ||
            (SUB161(auVar29 >> 0x57,0) & 1) != 0) || (SUB161(auVar29 >> 0x5f,0) & 1) != 0) ||
          (SUB161(auVar29 >> 0x67,0) & 1) != 0) || (SUB161(auVar29 >> 0x6f,0) & 1) != 0) ||
        (SUB161(auVar29 >> 0x77,0) & 1) != 0) || auVar29[0xf] < '\0') goto LAB_140b01018;
    uVar19 = uVar19 + lVar22 + 0x10;
    lVar22 = lVar22 + 0x10;
  } while( true );
}

