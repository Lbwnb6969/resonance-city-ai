// VA 0x1414e7710, PDB extent 4671 bytes
// country_core::systems::collision::world::RaycastWorld::upsert_collider<country_core::resources::walls::decorator::DecoratorId,country_core::systems::collision::world::OffsetColliderTransform>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/collision/world.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::collision::world::RaycastWorld::upsert_collider<country_core::resources::walls::decorator::DecoratorId,country_core::systems::collision::world::OffsetColliderTransform>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/collision/world.rs
   Extent: 4671 */

ulonglong *
pdb_1414e7710(ulonglong *param_1,longlong param_2,longlong *param_3,int param_4,undefined8 *param_5,
             undefined8 *param_6)

{
  ulonglong *puVar1;
  char *pcVar2;
  undefined1 (*pauVar3) [16];
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  char cVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int iVar15;
  ulonglong uVar16;
  longlong lVar17;
  undefined8 uVar18;
  undefined4 uVar19;
  uint uVar20;
  longlong lVar21;
  undefined8 *puVar22;
  byte bVar23;
  uint uVar24;
  ulonglong uVar25;
  ushort uVar26;
  ulonglong uVar27;
  byte bVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined8 uStack_388;
  undefined4 uStack_380;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  ulonglong uStack_2b8;
  byte *pbStack_2b0;
  longlong *plStack_2a8;
  longlong *plStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  longlong *plStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  ulonglong *puStack_230;
  ulonglong uStack_228;
  byte *pbStack_220;
  longlong *plStack_218;
  longlong *plStack_210;
  ulonglong uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  longlong *plStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  longlong *plStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  longlong *plStack_160;
  undefined8 uStack_158;
  byte *pbStack_150;
  longlong *plStack_148;
  longlong *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  longlong *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  ulonglong uStack_bc;
  undefined4 uStack_b4;
  longlong lStack_b0;
  undefined1 uStack_a7;
  undefined1 uStack_a6;
  undefined1 uStack_a5;
  undefined1 uStack_a4;
  undefined1 uStack_a3;
  undefined1 uStack_a2;
  undefined1 uStack_a1;
  undefined8 uStack_a0;
  
  uStack_a0 = 0xfffffffffffffffe;
  uStack_178 = CONCAT44(uStack_178._4_4_,param_4);
  lStack_b0 = param_2;
  uVar16 = pdb_1400aede0(param_3 + 4,&uStack_178);
  lVar17 = *param_3;
  bVar28 = (byte)(uVar16 >> 0x39);
  auVar29 = ZEXT216(CONCAT11(bVar28,bVar28));
  auVar29 = pshuflw(auVar29,auVar29,0);
  lVar21 = 0;
  uVar25 = uVar16;
  do {
    uVar25 = uVar25 & param_3[1];
    pcVar2 = (char *)(lVar17 + uVar25);
    auVar31[0] = -(*pcVar2 == auVar29[0]);
    auVar31[1] = -(pcVar2[1] == auVar29[1]);
    auVar31[2] = -(pcVar2[2] == auVar29[2]);
    auVar31[3] = -(pcVar2[3] == auVar29[3]);
    auVar31[4] = -(pcVar2[4] == auVar29[4]);
    auVar31[5] = -(pcVar2[5] == auVar29[5]);
    auVar31[6] = -(pcVar2[6] == auVar29[6]);
    auVar31[7] = -(pcVar2[7] == auVar29[7]);
    auVar31[8] = -(pcVar2[8] == auVar29[0]);
    auVar31[9] = -(pcVar2[9] == auVar29[1]);
    auVar31[10] = -(pcVar2[10] == auVar29[2]);
    auVar31[0xb] = -(pcVar2[0xb] == auVar29[3]);
    auVar31[0xc] = -(pcVar2[0xc] == auVar29[4]);
    auVar31[0xd] = -(pcVar2[0xd] == auVar29[5]);
    auVar31[0xe] = -(pcVar2[0xe] == auVar29[6]);
    auVar31[0xf] = -(pcVar2[0xf] == auVar29[7]);
    uVar26 = (ushort)(SUB161(auVar31 >> 7,0) & 1) | (ushort)(SUB161(auVar31 >> 0xf,0) & 1) << 1 |
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
             (ushort)(SUB161(auVar31 >> 0x77,0) & 1) << 0xe | (ushort)(auVar31[0xf] >> 7) << 0xf;
    uVar24 = (uint)uVar26;
    while (uVar26 != 0) {
      uVar20 = 0;
      for (uVar4 = uVar24; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
        uVar20 = uVar20 + 1;
      }
      uVar27 = uVar20 + uVar25 & param_3[1];
      if (*(int *)(lVar17 + -0x18 + uVar27 * -0x18) == param_4) {
        uVar16 = lVar17 + uVar27 * -0x18;
        param_4 = (int)param_3;
        param_3 = (longlong *)0x0;
        goto LAB_1414e7832;
      }
      uVar26 = (ushort)(uVar24 - 1) & (ushort)uVar24;
      uVar24 = CONCAT22((short)(uVar24 - 1 >> 0x10),uVar26);
    }
    auVar30[0] = -(*pcVar2 == -1);
    auVar30[1] = -(pcVar2[1] == -1);
    auVar30[2] = -(pcVar2[2] == -1);
    auVar30[3] = -(pcVar2[3] == -1);
    auVar30[4] = -(pcVar2[4] == -1);
    auVar30[5] = -(pcVar2[5] == -1);
    auVar30[6] = -(pcVar2[6] == -1);
    auVar30[7] = -(pcVar2[7] == -1);
    auVar30[8] = -(pcVar2[8] == -1);
    auVar30[9] = -(pcVar2[9] == -1);
    auVar30[10] = -(pcVar2[10] == -1);
    auVar30[0xb] = -(pcVar2[0xb] == -1);
    auVar30[0xc] = -(pcVar2[0xc] == -1);
    auVar30[0xd] = -(pcVar2[0xd] == -1);
    auVar30[0xe] = -(pcVar2[0xe] == -1);
    auVar30[0xf] = -(pcVar2[0xf] == -1);
    uVar26 = (ushort)(SUB161(auVar30 >> 7,0) & 1) | (ushort)(SUB161(auVar30 >> 0xf,0) & 1) << 1 |
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
    if (uVar26 != 0) {
      if (param_3[2] == 0) {
        uStack_a5 = 1;
        pdb_142d92b40(param_3,1,param_3 + 4,CONCAT71((uint7)(byte)(uVar26 >> 8),1));
      }
LAB_1414e7832:
      uStack_198 = *param_5;
      uStack_190 = param_5[1];
      uStack_188 = param_5[2];
      plStack_180 = (longlong *)param_5[3];
      uStack_2d8 = *param_6;
      uStack_2d0 = param_6[1];
      uStack_2c8 = param_6[2];
      uStack_2c0 = param_6[3];
      uStack_a6 = 1;
      uStack_a7 = pdb_1409f1360(&uStack_198);
      uStack_a6 = 1;
      pdb_1409f9910(&uStack_178,&uStack_2d8,plStack_180 + 2);
      fVar11 = plStack_160._0_4_;
      fVar5 = (float)uStack_178;
      fVar6 = uStack_178._4_4_;
      fVar7 = (float)uStack_170;
      fVar8 = uStack_170._4_4_;
      fVar9 = (float)uStack_168;
      fVar10 = uStack_168._4_4_;
      uStack_248 = uStack_e8;
      uStack_240 = uStack_e0;
      uStack_258 = uStack_f8;
      uStack_250 = uStack_f0;
      uStack_268 = uStack_108;
      uStack_260 = uStack_100;
      uStack_278 = uStack_118;
      uStack_270 = uStack_110;
      uStack_288 = uStack_128;
      plStack_280 = plStack_120;
      uStack_298 = uStack_138;
      uStack_290 = uStack_130;
      plStack_2a8 = plStack_148;
      plStack_2a0 = plStack_140;
      uStack_2b8 = uStack_158;
      pbStack_2b0 = pbStack_150;
      puStack_230 = param_1;
      if (param_3 == (longlong *)0x0) {
        uVar25 = *(ulonglong *)(uVar16 - 0xc);
        uStack_380 = *(undefined4 *)(uVar16 - 4);
        uStack_388 = *(undefined8 *)(uVar16 - 0xc);
        uStack_a1 = 1;
        uStack_a2 = 1;
        uVar13 = pdb_1409ed9b0(&uStack_178,lStack_b0,&uStack_388);
        puVar1 = (ulonglong *)(uVar16 - 0xc);
        if ((int)uStack_158 != 0) {
          if (((float)uStack_168 == fVar9) && (!NAN((float)uStack_168) && !NAN(fVar9))) {
            if ((uStack_168._4_4_ == fVar10) && (!NAN(uStack_168._4_4_) && !NAN(fVar10))) {
              if ((plStack_160._0_4_ == fVar11) && (!NAN(plStack_160._0_4_) && !NAN(fVar11))) {
                auVar29._4_4_ = -(uint)(fVar6 == uStack_178._4_4_);
                auVar29._0_4_ = -(uint)(fVar5 == (float)uStack_178);
                auVar29._8_4_ = -(uint)(fVar7 == (float)uStack_170);
                auVar29._12_4_ = -(uint)(fVar8 == uStack_170._4_4_);
                iVar15 = movmskps(uVar13,auVar29);
                if (iVar15 == 0xf) {
                  uStack_a1 = 1;
                  uStack_a2 = 1;
                  uVar18 = pdb_1409ef0f0(lStack_b0,uStack_158 & 0xffffffff,uStack_158._4_4_);
                  uStack_a1 = 1;
                  uStack_a2 = 1;
                  cVar12 = pdb_1409fb1d0(uVar18,&uStack_198);
                  if (cVar12 != '\0') {
                    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(uVar16 - 4);
                    *param_1 = *puVar1;
                    *(undefined4 *)((longlong)param_1 + 0xc) = 2;
                    param_1[2] = *puVar1;
                    LOCK();
                    *plStack_2a8 = *plStack_2a8 + -1;
                    UNLOCK();
                    if (*plStack_2a8 == 0) {
                      pdb_1406efe00(&plStack_2a8);
                    }
                    if (1 < (uint)uStack_2b8) {
                      pub_1406abac0(pbStack_2b0,0x2c,4);
                    }
                    LOCK();
                    *plStack_180 = *plStack_180 + -1;
                    UNLOCK();
                    if (*plStack_180 != 0) {
                      return param_1;
                    }
                    uStack_a5 = 0;
                    pdb_140c7b7a0(&plStack_180);
                    return param_1;
                  }
                }
              }
            }
          }
        }
        uStack_a1 = 1;
        uStack_a2 = 1;
        pdb_1409f8710(&uStack_178,lStack_b0,uVar16 - 0x14);
        LOCK();
        *plStack_140 = *plStack_140 + -1;
        UNLOCK();
        if (*plStack_140 == 0) {
          uStack_a1 = 1;
          uStack_a2 = 1;
          pdb_140c7b7a0(&plStack_140);
        }
        uStack_168 = (longlong *)uStack_188;
        plStack_160 = plStack_180;
        uStack_178 = uStack_198;
        uStack_170 = (byte *)uStack_190;
        uStack_a1 = 1;
        uStack_a2 = 0;
        puVar22 = &uStack_178;
        uVar13 = pdb_1424ee750(lStack_b0);
        *(undefined4 *)(uVar16 - 0x14) = uVar13;
        *(int *)(uVar16 - 0x10) = (int)puVar22;
        uStack_108 = uStack_248;
        uStack_100 = uStack_240;
        uStack_118 = uStack_258;
        uStack_110 = uStack_250;
        uStack_128 = uStack_268;
        plStack_120 = (longlong *)uStack_260;
        uStack_138 = uStack_278;
        uStack_130 = uStack_270;
        plStack_148 = (longlong *)uStack_288;
        plStack_140 = plStack_280;
        uStack_158 = uStack_298;
        pbStack_150 = (byte *)uStack_290;
        uStack_168 = plStack_2a8;
        plStack_160 = plStack_2a0;
        uStack_178 = uStack_2b8;
        uStack_170 = pbStack_2b0;
        lVar17 = pdb_1409fb190(uVar16 - 0x14);
        uStack_208 = (ulonglong)puVar22 & 0xffffffff | lVar17 << 0x20;
        pbStack_150 = (byte *)0x0;
        uStack_228 = uStack_178;
        pbStack_220 = uStack_170;
        plStack_218 = uStack_168;
        plStack_210 = plStack_160;
        uStack_1f8 = plStack_148;
        plStack_1f0 = plStack_140;
        uStack_1e8 = uStack_138;
        uStack_1e0 = uStack_130;
        uStack_1d8 = uStack_128;
        uStack_1d0 = plStack_120;
        uStack_1c8 = uStack_118;
        uStack_1c0 = uStack_110;
        uStack_1b8 = uStack_108;
        uStack_1b0 = uStack_100;
        uStack_200 = 0;
        uStack_158 = uStack_208;
        pdb_140cd4920(&uStack_388,&uStack_228);
        LOCK();
        *plStack_218 = *plStack_218 + -1;
        UNLOCK();
        if (*plStack_218 == 0) {
          pdb_1406efe00(&plStack_218);
        }
        if (1 < (uint)uStack_228) {
          pub_1406abac0(pbStack_220,0x2c,4);
        }
        uStack_a3 = 1;
        lVar17 = pdb_1409f9a50(lStack_b0 + 0x20,0x11,uStack_a7,&UNK_1433166b8);
        *(undefined1 *)(lVar17 + 0x388) = 1;
        uStack_a3 = 1;
        pdb_140cd4b60(&uStack_178,&uStack_388);
        uStack_a3 = 1;
        pdb_1409f1340(&uStack_228,&uStack_178);
        uStack_a3 = 1;
        pdb_140a83790(lVar17 + 0x188,&uStack_228);
        puVar22 = &uStack_178;
        pub_142e32760(puVar22,&uStack_388,0xb0);
        uStack_a3 = 0;
        uVar13 = pdb_1424ee9c0(lVar17,puVar22);
        uStack_a3 = 0;
        pdb_1409f14f0(&uStack_228,uStack_a7,uVar13,(ulonglong)puVar22 & 0xffffffff);
        *(undefined4 *)(uVar16 - 4) = pbStack_220._0_4_;
        *puVar1 = uStack_228;
        uStack_170 = (byte *)CONCAT44(uStack_170._4_4_,pbStack_220._0_4_);
        uStack_178 = uStack_228;
        uStack_a3 = 0;
        pdb_1409f93c0(lStack_b0,&uStack_178);
        *(undefined4 *)(param_1 + 1) = pbStack_220._0_4_;
        *param_1 = uStack_228;
        *(undefined4 *)((longlong)param_1 + 0xc) = 1;
        param_1[2] = uVar25;
      }
      else {
        uStack_168 = (longlong *)uStack_188;
        plStack_160 = plStack_180;
        uStack_178 = uStack_198;
        uStack_170 = (byte *)uStack_190;
        uStack_a1 = 1;
        uStack_a2 = 0;
        puVar22 = &uStack_178;
        uVar13 = pdb_1424ee750(lStack_b0);
        uVar19 = SUB84(puVar22,0);
        uStack_108 = uStack_248;
        uStack_100 = uStack_240;
        uStack_118 = uStack_258;
        uStack_110 = uStack_250;
        uStack_128 = uStack_268;
        plStack_120 = (longlong *)uStack_260;
        uStack_138 = uStack_278;
        uStack_130 = uStack_270;
        plStack_148 = (longlong *)uStack_288;
        plStack_140 = plStack_280;
        uStack_158 = uStack_298;
        pbStack_150 = (byte *)uStack_290;
        uStack_168 = plStack_2a8;
        plStack_160 = plStack_2a0;
        uStack_178 = uStack_2b8;
        uStack_170 = pbStack_2b0;
        uStack_1a0 = uVar13;
        uStack_19c = uVar19;
        lVar17 = pdb_1409fb190(&uStack_1a0);
        uStack_208 = (ulonglong)puVar22 & 0xffffffff | lVar17 << 0x20;
        pbStack_150 = (byte *)0x0;
        uStack_228 = uStack_178;
        pbStack_220 = uStack_170;
        plStack_218 = uStack_168;
        plStack_210 = plStack_160;
        uStack_1f8 = plStack_148;
        plStack_1f0 = plStack_140;
        uStack_1e8 = uStack_138;
        uStack_1e0 = uStack_130;
        uStack_1d8 = uStack_128;
        uStack_1d0 = plStack_120;
        uStack_1c8 = uStack_118;
        uStack_1c0 = uStack_110;
        uStack_1b8 = uStack_108;
        uStack_1b0 = uStack_100;
        uStack_200 = 0;
        uStack_158 = uStack_208;
        pdb_140cd4920(&uStack_388,&uStack_228);
        LOCK();
        *plStack_218 = *plStack_218 + -1;
        UNLOCK();
        if (*plStack_218 == 0) {
          pdb_1406efe00(&plStack_218);
        }
        if (1 < (uint)uStack_228) {
          pub_1406abac0(pbStack_220,0x2c,4);
        }
        uStack_a4 = 1;
        lVar17 = pdb_1409f9a50(lStack_b0 + 0x20,0x11,uStack_a7,&UNK_1433166d0);
        *(undefined1 *)(lVar17 + 0x388) = 1;
        uStack_a4 = 1;
        pdb_140cd4b60(&uStack_178,&uStack_388);
        uStack_a4 = 1;
        pdb_1409f1340(&uStack_228,&uStack_178);
        uStack_a4 = 1;
        pdb_140a83790(lVar17 + 0x188,&uStack_228);
        puVar22 = &uStack_178;
        pub_142e32760(puVar22,&uStack_388,0xb0);
        uStack_a4 = 0;
        uVar14 = pdb_1424ee9c0(lVar17,puVar22);
        uStack_a4 = 0;
        pdb_1409f14f0(&uStack_bc,uStack_a7,uVar14,(ulonglong)puVar22 & 0xffffffff);
        pauVar3 = (undefined1 (*) [16])*param_3;
        uVar25 = param_3[1];
        uVar27 = uVar25 & uVar16;
        auVar29 = *(undefined1 (*) [16])(*pauVar3 + uVar27);
        uVar26 = (ushort)(SUB161(auVar29 >> 7,0) & 1) | (ushort)(SUB161(auVar29 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar29 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar29 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar29 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar29 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar29 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar29 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar29 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar29 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar29 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar29 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar29 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar29 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar29 >> 0x77,0) & 1) << 0xe |
                 (ushort)(byte)(auVar29[0xf] >> 7) << 0xf;
        uVar24 = (uint)uVar26;
        if (uVar26 == 0) {
          lVar17 = 0x10;
          do {
            uVar27 = uVar27 + lVar17 & uVar25;
            auVar29 = *(undefined1 (*) [16])(*pauVar3 + uVar27);
            lVar17 = lVar17 + 0x10;
            uVar24 = (uint)(ushort)((ushort)(SUB161(auVar29 >> 7,0) & 1) |
                                    (ushort)(SUB161(auVar29 >> 0xf,0) & 1) << 1 |
                                    (ushort)(SUB161(auVar29 >> 0x17,0) & 1) << 2 |
                                    (ushort)(SUB161(auVar29 >> 0x1f,0) & 1) << 3 |
                                    (ushort)(SUB161(auVar29 >> 0x27,0) & 1) << 4 |
                                    (ushort)(SUB161(auVar29 >> 0x2f,0) & 1) << 5 |
                                    (ushort)(SUB161(auVar29 >> 0x37,0) & 1) << 6 |
                                    (ushort)(SUB161(auVar29 >> 0x3f,0) & 1) << 7 |
                                    (ushort)(SUB161(auVar29 >> 0x47,0) & 1) << 8 |
                                    (ushort)(SUB161(auVar29 >> 0x4f,0) & 1) << 9 |
                                    (ushort)(SUB161(auVar29 >> 0x57,0) & 1) << 10 |
                                    (ushort)(SUB161(auVar29 >> 0x5f,0) & 1) << 0xb |
                                    (ushort)(SUB161(auVar29 >> 0x67,0) & 1) << 0xc |
                                    (ushort)(SUB161(auVar29 >> 0x6f,0) & 1) << 0xd |
                                    (ushort)(SUB161(auVar29 >> 0x77,0) & 1) << 0xe |
                                   (ushort)(byte)(auVar29[0xf] >> 7) << 0xf);
          } while (uVar24 == 0);
        }
        uVar20 = 0;
        for (; (uVar24 & 1) == 0; uVar24 = uVar24 >> 1 | 0x80000000) {
          uVar20 = uVar20 + 1;
        }
        uVar27 = uVar20 + uVar27 & uVar25;
        bVar28 = (*pauVar3)[uVar27];
        if (-1 < (char)bVar28) {
          auVar29 = *pauVar3;
          uVar24 = 0;
          for (uVar20 = (uint)(ushort)((ushort)(SUB161(auVar29 >> 7,0) & 1) |
                                       (ushort)(SUB161(auVar29 >> 0xf,0) & 1) << 1 |
                                       (ushort)(SUB161(auVar29 >> 0x17,0) & 1) << 2 |
                                       (ushort)(SUB161(auVar29 >> 0x1f,0) & 1) << 3 |
                                       (ushort)(SUB161(auVar29 >> 0x27,0) & 1) << 4 |
                                       (ushort)(SUB161(auVar29 >> 0x2f,0) & 1) << 5 |
                                       (ushort)(SUB161(auVar29 >> 0x37,0) & 1) << 6 |
                                       (ushort)(SUB161(auVar29 >> 0x3f,0) & 1) << 7 |
                                       (ushort)(SUB161(auVar29 >> 0x47,0) & 1) << 8 |
                                       (ushort)(SUB161(auVar29 >> 0x4f,0) & 1) << 9 |
                                       (ushort)(SUB161(auVar29 >> 0x57,0) & 1) << 10 |
                                       (ushort)(SUB161(auVar29 >> 0x5f,0) & 1) << 0xb |
                                       (ushort)(SUB161(auVar29 >> 0x67,0) & 1) << 0xc |
                                       (ushort)(SUB161(auVar29 >> 0x6f,0) & 1) << 0xd |
                                       (ushort)(SUB161(auVar29 >> 0x77,0) & 1) << 0xe |
                                      (ushort)(byte)(auVar29[0xf] >> 7) << 0xf); (uVar20 & 1) == 0;
              uVar20 = uVar20 >> 1 | 0x80000000) {
            uVar24 = uVar24 + 1;
          }
          uVar27 = (ulonglong)uVar24;
          bVar28 = (*pauVar3)[uVar27];
        }
        bVar23 = (byte)(uVar16 >> 0x39);
        (*pauVar3)[uVar27] = bVar23;
        pauVar3[1][uVar27 - 0x10 & uVar25] = bVar23;
        param_3[2] = param_3[2] - (ulonglong)(bVar28 & 1);
        *(int *)((longlong)pauVar3 + uVar27 * -0x18 + -0x18) = param_4;
        *(undefined4 *)((longlong)pauVar3 + uVar27 * -0x18 + -0x14) = uVar13;
        *(undefined4 *)((longlong)pauVar3 + uVar27 * -0x18 + -0x10) = uVar19;
        *(ulonglong *)((longlong)pauVar3 + uVar27 * -0x18 + -0xc) = uStack_bc;
        *(undefined4 *)((longlong)pauVar3 + uVar27 * -0x18 + -4) = uStack_b4;
        param_3[3] = param_3[3] + 1;
        uStack_170 = (byte *)CONCAT44(uStack_170._4_4_,uStack_b4);
        uStack_178 = uStack_bc;
        uStack_a4 = 0;
        pdb_1409f93c0(lStack_b0,&uStack_178);
        *(undefined4 *)(puStack_230 + 1) = uStack_b4;
        *puStack_230 = uStack_bc;
        *(undefined4 *)((longlong)puStack_230 + 0xc) = 0;
      }
      return puStack_230;
    }
    uVar25 = uVar25 + lVar21 + 0x10;
    lVar21 = lVar21 + 0x10;
  } while( true );
}

