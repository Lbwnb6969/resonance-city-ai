// VA 0x14140bba0, PDB extent 4703 bytes
// country_core::systems::collision::world::RaycastWorld::upsert_collider<country_core::resources::stairs::stairs_state::StairGraphEdge,tuple$<glam::f32::vec3::Vec3,glam::f32::sse2::quat::Quat> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/collision/world.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::collision::world::RaycastWorld::upsert_collider<country_core::resources::stairs::stairs_state::StairGraphEdge,tuple$<glam::f32::vec3::Vec3,glam::f32::sse2::quat::Quat>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/collision/world.rs
   Extent: 4703 */

ulonglong *
pdb_14140bba0(ulonglong *param_1,longlong param_2,longlong *param_3,int param_4,int param_5,
             undefined8 *param_6,undefined8 *param_7)

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
  undefined1 uVar12;
  char cVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  int iVar16;
  ulonglong uVar17;
  longlong lVar18;
  undefined8 uVar19;
  longlong lVar20;
  uint uVar21;
  longlong lVar22;
  ulonglong uVar23;
  undefined8 *puVar24;
  byte bVar25;
  longlong *plVar26;
  ulonglong *puVar27;
  uint uVar28;
  ulonglong uVar29;
  ushort uVar30;
  longlong *plVar31;
  byte bVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
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
  ulonglong uStack_238;
  byte *pbStack_230;
  longlong *plStack_228;
  longlong *plStack_220;
  ulonglong uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  longlong *plStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  longlong *plStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  longlong *plStack_170;
  undefined8 uStack_168;
  byte *pbStack_160;
  longlong *plStack_158;
  longlong *plStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  longlong *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined4 uStack_cc;
  ulonglong *puStack_c8;
  ulonglong uStack_bc;
  undefined4 uStack_b4;
  longlong lStack_b0;
  undefined1 uStack_a6;
  undefined1 uStack_a5;
  undefined1 uStack_a4;
  undefined1 uStack_a3;
  undefined1 uStack_a2;
  undefined1 uStack_a1;
  undefined8 uStack_a0;
  
  uStack_a0 = 0xfffffffffffffffe;
  uStack_188 = CONCAT44(param_5,param_4);
  uStack_a5 = 1;
  lStack_b0 = param_2;
  uVar17 = pdb_1400af680(param_3 + 4,&uStack_188);
  lVar18 = *param_3;
  bVar32 = (byte)(uVar17 >> 0x39);
  auVar33 = ZEXT216(CONCAT11(bVar32,bVar32));
  auVar33 = pshuflw(auVar33,auVar33,0);
  lVar22 = 0;
  uVar29 = uVar17;
  do {
    uVar29 = uVar29 & param_3[1];
    pcVar2 = (char *)(lVar18 + uVar29);
    auVar35[0] = -(*pcVar2 == auVar33[0]);
    auVar35[1] = -(pcVar2[1] == auVar33[1]);
    auVar35[2] = -(pcVar2[2] == auVar33[2]);
    auVar35[3] = -(pcVar2[3] == auVar33[3]);
    auVar35[4] = -(pcVar2[4] == auVar33[4]);
    auVar35[5] = -(pcVar2[5] == auVar33[5]);
    auVar35[6] = -(pcVar2[6] == auVar33[6]);
    auVar35[7] = -(pcVar2[7] == auVar33[7]);
    auVar35[8] = -(pcVar2[8] == auVar33[0]);
    auVar35[9] = -(pcVar2[9] == auVar33[1]);
    auVar35[10] = -(pcVar2[10] == auVar33[2]);
    auVar35[0xb] = -(pcVar2[0xb] == auVar33[3]);
    auVar35[0xc] = -(pcVar2[0xc] == auVar33[4]);
    auVar35[0xd] = -(pcVar2[0xd] == auVar33[5]);
    auVar35[0xe] = -(pcVar2[0xe] == auVar33[6]);
    auVar35[0xf] = -(pcVar2[0xf] == auVar33[7]);
    uVar30 = (ushort)(SUB161(auVar35 >> 7,0) & 1) | (ushort)(SUB161(auVar35 >> 0xf,0) & 1) << 1 |
             (ushort)(SUB161(auVar35 >> 0x17,0) & 1) << 2 |
             (ushort)(SUB161(auVar35 >> 0x1f,0) & 1) << 3 |
             (ushort)(SUB161(auVar35 >> 0x27,0) & 1) << 4 |
             (ushort)(SUB161(auVar35 >> 0x2f,0) & 1) << 5 |
             (ushort)(SUB161(auVar35 >> 0x37,0) & 1) << 6 |
             (ushort)(SUB161(auVar35 >> 0x3f,0) & 1) << 7 |
             (ushort)(SUB161(auVar35 >> 0x47,0) & 1) << 8 |
             (ushort)(SUB161(auVar35 >> 0x4f,0) & 1) << 9 |
             (ushort)(SUB161(auVar35 >> 0x57,0) & 1) << 10 |
             (ushort)(SUB161(auVar35 >> 0x5f,0) & 1) << 0xb |
             (ushort)(SUB161(auVar35 >> 0x67,0) & 1) << 0xc |
             (ushort)(SUB161(auVar35 >> 0x6f,0) & 1) << 0xd |
             (ushort)(SUB161(auVar35 >> 0x77,0) & 1) << 0xe | (ushort)(auVar35[0xf] >> 7) << 0xf;
    uVar28 = (uint)uVar30;
    while (uVar30 != 0) {
      uVar21 = 0;
      for (uVar4 = uVar28; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
        uVar21 = uVar21 + 1;
      }
      lVar20 = (uVar21 + uVar29 & param_3[1]) * -0x1c;
      if ((*(int *)(lVar18 + -0x1c + lVar20) == param_4) &&
         (*(int *)(lVar18 + -0x18 + lVar20) == param_5)) {
        uVar17 = lVar18 + lVar20;
        plVar31 = (longlong *)0x0;
        plVar26 = param_3;
        goto LAB_14140bcee;
      }
      uVar30 = (ushort)(uVar28 - 1) & (ushort)uVar28;
      uVar28 = CONCAT22((short)(uVar28 - 1 >> 0x10),uVar30);
    }
    auVar34[0] = -(*pcVar2 == -1);
    auVar34[1] = -(pcVar2[1] == -1);
    auVar34[2] = -(pcVar2[2] == -1);
    auVar34[3] = -(pcVar2[3] == -1);
    auVar34[4] = -(pcVar2[4] == -1);
    auVar34[5] = -(pcVar2[5] == -1);
    auVar34[6] = -(pcVar2[6] == -1);
    auVar34[7] = -(pcVar2[7] == -1);
    auVar34[8] = -(pcVar2[8] == -1);
    auVar34[9] = -(pcVar2[9] == -1);
    auVar34[10] = -(pcVar2[10] == -1);
    auVar34[0xb] = -(pcVar2[0xb] == -1);
    auVar34[0xc] = -(pcVar2[0xc] == -1);
    auVar34[0xd] = -(pcVar2[0xd] == -1);
    auVar34[0xe] = -(pcVar2[0xe] == -1);
    auVar34[0xf] = -(pcVar2[0xf] == -1);
    uVar30 = (ushort)(SUB161(auVar34 >> 7,0) & 1) | (ushort)(SUB161(auVar34 >> 0xf,0) & 1) << 1 |
             (ushort)(SUB161(auVar34 >> 0x17,0) & 1) << 2 |
             (ushort)(SUB161(auVar34 >> 0x1f,0) & 1) << 3 |
             (ushort)(SUB161(auVar34 >> 0x27,0) & 1) << 4 |
             (ushort)(SUB161(auVar34 >> 0x2f,0) & 1) << 5 |
             (ushort)(SUB161(auVar34 >> 0x37,0) & 1) << 6 |
             (ushort)(SUB161(auVar34 >> 0x3f,0) & 1) << 7 |
             (ushort)(SUB161(auVar34 >> 0x47,0) & 1) << 8 |
             (ushort)(SUB161(auVar34 >> 0x4f,0) & 1) << 9 |
             (ushort)(SUB161(auVar34 >> 0x57,0) & 1) << 10 |
             (ushort)(SUB161(auVar34 >> 0x5f,0) & 1) << 0xb |
             (ushort)(SUB161(auVar34 >> 0x67,0) & 1) << 0xc |
             (ushort)(SUB161(auVar34 >> 0x6f,0) & 1) << 0xd |
             (ushort)(SUB161(auVar34 >> 0x77,0) & 1) << 0xe | (ushort)(auVar34[0xf] >> 7) << 0xf;
    if (uVar30 != 0) {
      if (param_3[2] == 0) {
        uStack_a5 = 1;
        pdb_142d9b670(param_3,1,param_3 + 4,CONCAT71((uint7)(byte)(uVar30 >> 8),1));
      }
      plVar26 = (longlong *)CONCAT44(param_5,param_4);
      plVar31 = param_3;
LAB_14140bcee:
      uStack_1a8 = *param_6;
      uStack_1a0 = param_6[1];
      uStack_198 = param_6[2];
      plStack_190 = (longlong *)param_6[3];
      uStack_2d8 = *param_7;
      uStack_2d0 = param_7[1];
      uStack_2c8 = param_7[2];
      uStack_2c0 = param_7[3];
      uStack_a6 = 1;
      uVar12 = pdb_1409f1360(&uStack_1a8);
      lVar18 = lStack_b0;
      uStack_a6 = 1;
      pdb_140c614f0(&uStack_188,&uStack_2d8,plStack_190 + 2);
      fVar11 = plStack_170._0_4_;
      fVar5 = (float)uStack_188;
      fVar6 = uStack_188._4_4_;
      fVar7 = (float)uStack_180;
      fVar8 = uStack_180._4_4_;
      fVar9 = (float)uStack_178;
      fVar10 = uStack_178._4_4_;
      uStack_248 = uStack_f8;
      uStack_240 = uStack_f0;
      uStack_258 = uStack_108;
      uStack_250 = uStack_100;
      uStack_268 = uStack_118;
      uStack_260 = uStack_110;
      uStack_278 = uStack_128;
      uStack_270 = uStack_120;
      uStack_288 = uStack_138;
      plStack_280 = plStack_130;
      uStack_298 = uStack_148;
      uStack_290 = uStack_140;
      plStack_2a8 = plStack_158;
      plStack_2a0 = plStack_150;
      uStack_2b8 = uStack_168;
      pbStack_2b0 = pbStack_160;
      puStack_c8 = param_1;
      if (plVar31 == (longlong *)0x0) {
        uVar29 = *(ulonglong *)(uVar17 - 0xc);
        uStack_380 = *(undefined4 *)(uVar17 - 4);
        uStack_388 = *(undefined8 *)(uVar17 - 0xc);
        uStack_a1 = 1;
        uStack_a2 = 1;
        uVar14 = pdb_1409ed9b0(&uStack_188,lVar18,&uStack_388);
        puVar1 = (ulonglong *)(uVar17 - 0xc);
        if ((int)uStack_168 != 0) {
          if (((float)uStack_178 == fVar9) && (!NAN((float)uStack_178) && !NAN(fVar9))) {
            if ((uStack_178._4_4_ == fVar10) && (!NAN(uStack_178._4_4_) && !NAN(fVar10))) {
              if ((plStack_170._0_4_ == fVar11) && (!NAN(plStack_170._0_4_) && !NAN(fVar11))) {
                auVar33._4_4_ = -(uint)(fVar6 == uStack_188._4_4_);
                auVar33._0_4_ = -(uint)(fVar5 == (float)uStack_188);
                auVar33._8_4_ = -(uint)(fVar7 == (float)uStack_180);
                auVar33._12_4_ = -(uint)(fVar8 == uStack_180._4_4_);
                iVar16 = movmskps(uVar14,auVar33);
                if (iVar16 == 0xf) {
                  uStack_a1 = 1;
                  uStack_a2 = 1;
                  uVar19 = pdb_1409ef0f0(lVar18,uStack_168 & 0xffffffff,uStack_168._4_4_);
                  uStack_a1 = 1;
                  uStack_a2 = 1;
                  cVar13 = pdb_1409fb1d0(uVar19,&uStack_1a8);
                  puVar27 = puStack_c8;
                  if (cVar13 != '\0') {
                    *(undefined4 *)(puStack_c8 + 1) = *(undefined4 *)(uVar17 - 4);
                    *puStack_c8 = *puVar1;
                    *(undefined4 *)((longlong)puStack_c8 + 0xc) = 2;
                    puStack_c8[2] = *puVar1;
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
                    *plStack_190 = *plStack_190 + -1;
                    UNLOCK();
                    if (*plStack_190 != 0) {
                      return puVar27;
                    }
                    uStack_a5 = 0;
                    pdb_140c7b7a0(&plStack_190);
                    return puVar27;
                  }
                }
              }
            }
          }
        }
        lVar22 = uVar17 - 0x14;
        uStack_a1 = 1;
        uStack_a2 = 1;
        pdb_1409f8710(&uStack_188,lVar18,lVar22);
        LOCK();
        *plStack_150 = *plStack_150 + -1;
        UNLOCK();
        if (*plStack_150 == 0) {
          uStack_a1 = 1;
          uStack_a2 = 1;
          pdb_140c7b7a0(&plStack_150);
        }
        uStack_178 = (longlong *)uStack_198;
        plStack_170 = plStack_190;
        uStack_188 = uStack_1a8;
        uStack_180 = (byte *)uStack_1a0;
        uStack_a1 = 1;
        uStack_a2 = 0;
        puVar24 = &uStack_188;
        uVar14 = pdb_1424b44f0(lVar18);
        *(undefined4 *)(uVar17 - 0x14) = uVar14;
        *(int *)(uVar17 - 0x10) = (int)puVar24;
        uStack_118 = uStack_248;
        uStack_110 = uStack_240;
        uStack_128 = uStack_258;
        uStack_120 = uStack_250;
        uStack_138 = uStack_268;
        plStack_130 = (longlong *)uStack_260;
        uStack_148 = uStack_278;
        uStack_140 = uStack_270;
        plStack_158 = (longlong *)uStack_288;
        plStack_150 = plStack_280;
        uStack_168 = uStack_298;
        pbStack_160 = (byte *)uStack_290;
        uStack_178 = plStack_2a8;
        plStack_170 = plStack_2a0;
        uStack_188 = uStack_2b8;
        uStack_180 = pbStack_2b0;
        lVar20 = pdb_1409fb190(lVar22);
        uVar23 = CONCAT71((int7)((ulonglong)lVar22 >> 8),uVar12);
        uStack_218 = (ulonglong)puVar24 & 0xffffffff | lVar20 << 0x20;
        pbStack_160 = (byte *)0x0;
        uStack_238 = uStack_188;
        pbStack_230 = uStack_180;
        plStack_228 = uStack_178;
        plStack_220 = plStack_170;
        uStack_208 = plStack_158;
        plStack_200 = plStack_150;
        uStack_1f8 = uStack_148;
        uStack_1f0 = uStack_140;
        uStack_1e8 = uStack_138;
        uStack_1e0 = plStack_130;
        uStack_1d8 = uStack_128;
        uStack_1d0 = uStack_120;
        uStack_1c8 = uStack_118;
        uStack_1c0 = uStack_110;
        uStack_210 = 0;
        uStack_168 = uStack_218;
        pdb_140cd4920(&uStack_388,&uStack_238);
        puVar27 = puStack_c8;
        LOCK();
        *plStack_228 = *plStack_228 + -1;
        UNLOCK();
        if (*plStack_228 == 0) {
          pdb_1406efe00(&plStack_228);
        }
        if (1 < (uint)uStack_238) {
          pub_1406abac0(pbStack_230,0x2c,4);
        }
        uStack_a3 = 1;
        lVar18 = pdb_1409f9a50(lVar18 + 0x20,0x11,uVar23 & 0xffffffff,&UNK_143307c08);
        *(undefined1 *)(lVar18 + 0x388) = 1;
        uStack_a3 = 1;
        pdb_140cd4b60(&uStack_188,&uStack_388);
        uStack_a3 = 1;
        pdb_1409f1340(&uStack_238,&uStack_188);
        uStack_a3 = 1;
        pdb_140a83790(lVar18 + 0x188,&uStack_238);
        puVar24 = &uStack_188;
        pub_142e32760(puVar24,&uStack_388,0xb0);
        uStack_a3 = 0;
        uVar14 = pdb_1424b4760(lVar18,puVar24);
        uStack_a3 = 0;
        pdb_1409f14f0(&uStack_238,uVar23 & 0xffffffff,uVar14,(ulonglong)puVar24 & 0xffffffff);
        *(undefined4 *)(uVar17 - 4) = pbStack_230._0_4_;
        *puVar1 = uStack_238;
        uStack_180 = (byte *)CONCAT44(uStack_180._4_4_,pbStack_230._0_4_);
        uStack_188 = uStack_238;
        uStack_a3 = 0;
        pdb_1409f93c0(lStack_b0,&uStack_188);
        *(undefined4 *)(puVar27 + 1) = pbStack_230._0_4_;
        *puVar27 = uStack_238;
        *(undefined4 *)((longlong)puVar27 + 0xc) = 1;
        puVar27[2] = uVar29;
      }
      else {
        uStack_178 = (longlong *)uStack_198;
        plStack_170 = plStack_190;
        uStack_188 = uStack_1a8;
        uStack_180 = (byte *)uStack_1a0;
        uStack_a1 = 1;
        uStack_a2 = 0;
        puVar24 = &uStack_188;
        uVar14 = pdb_1424b44f0(lVar18);
        uVar15 = SUB84(puVar24,0);
        uStack_118 = uStack_248;
        uStack_110 = uStack_240;
        uStack_128 = uStack_258;
        uStack_120 = uStack_250;
        uStack_138 = uStack_268;
        plStack_130 = (longlong *)uStack_260;
        uStack_148 = uStack_278;
        uStack_140 = uStack_270;
        plStack_158 = (longlong *)uStack_288;
        plStack_150 = plStack_280;
        uStack_168 = uStack_298;
        pbStack_160 = (byte *)uStack_290;
        uStack_178 = plStack_2a8;
        plStack_170 = plStack_2a0;
        uStack_188 = uStack_2b8;
        uStack_180 = pbStack_2b0;
        uStack_1b0 = uVar14;
        uStack_1ac = uVar15;
        lVar22 = pdb_1409fb190(&uStack_1b0);
        uStack_218 = (ulonglong)puVar24 & 0xffffffff | lVar22 << 0x20;
        pbStack_160 = (byte *)0x0;
        uStack_238 = uStack_188;
        pbStack_230 = uStack_180;
        plStack_228 = uStack_178;
        plStack_220 = plStack_170;
        uStack_208 = plStack_158;
        plStack_200 = plStack_150;
        uStack_1f8 = uStack_148;
        uStack_1f0 = uStack_140;
        uStack_1e8 = uStack_138;
        uStack_1e0 = plStack_130;
        uStack_1d8 = uStack_128;
        uStack_1d0 = uStack_120;
        uStack_1c8 = uStack_118;
        uStack_1c0 = uStack_110;
        uStack_210 = 0;
        uStack_168 = uStack_218;
        pdb_140cd4920(&uStack_388,&uStack_238);
        LOCK();
        *plStack_228 = *plStack_228 + -1;
        UNLOCK();
        uStack_cc = uVar15;
        if (*plStack_228 == 0) {
          pdb_1406efe00(&plStack_228);
        }
        if (1 < (uint)uStack_238) {
          pub_1406abac0(pbStack_230,0x2c,4);
        }
        uStack_a4 = 1;
        lVar18 = pdb_1409f9a50(lVar18 + 0x20,0x11,
                               CONCAT71((int7)((ulonglong)param_7 >> 8),uVar12) & 0xffffffff,
                               &UNK_143307c20);
        *(undefined1 *)(lVar18 + 0x388) = 1;
        uStack_a4 = 1;
        pdb_140cd4b60(&uStack_188,&uStack_388);
        uStack_a4 = 1;
        pdb_1409f1340(&uStack_238,&uStack_188);
        uStack_a4 = 1;
        pdb_140a83790(lVar18 + 0x188,&uStack_238);
        puVar24 = &uStack_188;
        pub_142e32760(puVar24,&uStack_388,0xb0);
        uStack_a4 = 0;
        uVar15 = pdb_1424b4760(lVar18,puVar24);
        uStack_a4 = 0;
        pdb_1409f14f0(&uStack_bc,uVar12,uVar15,(ulonglong)puVar24 & 0xffffffff);
        pauVar3 = (undefined1 (*) [16])*plVar31;
        uVar29 = plVar31[1];
        uVar23 = uVar29 & uVar17;
        auVar33 = *(undefined1 (*) [16])(*pauVar3 + uVar23);
        uVar30 = (ushort)(SUB161(auVar33 >> 7,0) & 1) | (ushort)(SUB161(auVar33 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar33 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar33 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar33 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar33 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar33 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar33 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar33 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar33 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar33 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar33 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar33 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar33 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar33 >> 0x77,0) & 1) << 0xe |
                 (ushort)(byte)(auVar33[0xf] >> 7) << 0xf;
        uVar28 = (uint)uVar30;
        if (uVar30 == 0) {
          lVar18 = 0x10;
          do {
            uVar23 = uVar23 + lVar18 & uVar29;
            auVar33 = *(undefined1 (*) [16])(*pauVar3 + uVar23);
            lVar18 = lVar18 + 0x10;
            uVar28 = (uint)(ushort)((ushort)(SUB161(auVar33 >> 7,0) & 1) |
                                    (ushort)(SUB161(auVar33 >> 0xf,0) & 1) << 1 |
                                    (ushort)(SUB161(auVar33 >> 0x17,0) & 1) << 2 |
                                    (ushort)(SUB161(auVar33 >> 0x1f,0) & 1) << 3 |
                                    (ushort)(SUB161(auVar33 >> 0x27,0) & 1) << 4 |
                                    (ushort)(SUB161(auVar33 >> 0x2f,0) & 1) << 5 |
                                    (ushort)(SUB161(auVar33 >> 0x37,0) & 1) << 6 |
                                    (ushort)(SUB161(auVar33 >> 0x3f,0) & 1) << 7 |
                                    (ushort)(SUB161(auVar33 >> 0x47,0) & 1) << 8 |
                                    (ushort)(SUB161(auVar33 >> 0x4f,0) & 1) << 9 |
                                    (ushort)(SUB161(auVar33 >> 0x57,0) & 1) << 10 |
                                    (ushort)(SUB161(auVar33 >> 0x5f,0) & 1) << 0xb |
                                    (ushort)(SUB161(auVar33 >> 0x67,0) & 1) << 0xc |
                                    (ushort)(SUB161(auVar33 >> 0x6f,0) & 1) << 0xd |
                                    (ushort)(SUB161(auVar33 >> 0x77,0) & 1) << 0xe |
                                   (ushort)(byte)(auVar33[0xf] >> 7) << 0xf);
          } while (uVar28 == 0);
        }
        uVar21 = 0;
        for (; (uVar28 & 1) == 0; uVar28 = uVar28 >> 1 | 0x80000000) {
          uVar21 = uVar21 + 1;
        }
        uVar23 = uVar21 + uVar23 & uVar29;
        bVar32 = (*pauVar3)[uVar23];
        if (-1 < (char)bVar32) {
          auVar33 = *pauVar3;
          uVar28 = 0;
          for (uVar21 = (uint)(ushort)((ushort)(SUB161(auVar33 >> 7,0) & 1) |
                                       (ushort)(SUB161(auVar33 >> 0xf,0) & 1) << 1 |
                                       (ushort)(SUB161(auVar33 >> 0x17,0) & 1) << 2 |
                                       (ushort)(SUB161(auVar33 >> 0x1f,0) & 1) << 3 |
                                       (ushort)(SUB161(auVar33 >> 0x27,0) & 1) << 4 |
                                       (ushort)(SUB161(auVar33 >> 0x2f,0) & 1) << 5 |
                                       (ushort)(SUB161(auVar33 >> 0x37,0) & 1) << 6 |
                                       (ushort)(SUB161(auVar33 >> 0x3f,0) & 1) << 7 |
                                       (ushort)(SUB161(auVar33 >> 0x47,0) & 1) << 8 |
                                       (ushort)(SUB161(auVar33 >> 0x4f,0) & 1) << 9 |
                                       (ushort)(SUB161(auVar33 >> 0x57,0) & 1) << 10 |
                                       (ushort)(SUB161(auVar33 >> 0x5f,0) & 1) << 0xb |
                                       (ushort)(SUB161(auVar33 >> 0x67,0) & 1) << 0xc |
                                       (ushort)(SUB161(auVar33 >> 0x6f,0) & 1) << 0xd |
                                       (ushort)(SUB161(auVar33 >> 0x77,0) & 1) << 0xe |
                                      (ushort)(byte)(auVar33[0xf] >> 7) << 0xf); (uVar21 & 1) == 0;
              uVar21 = uVar21 >> 1 | 0x80000000) {
            uVar28 = uVar28 + 1;
          }
          uVar23 = (ulonglong)uVar28;
          bVar32 = (*pauVar3)[uVar23];
        }
        bVar25 = (byte)(uVar17 >> 0x39);
        (*pauVar3)[uVar23] = bVar25;
        pauVar3[1][uVar23 - 0x10 & uVar29] = bVar25;
        lVar18 = uVar23 * -0x1c;
        plVar31[2] = plVar31[2] - (ulonglong)(bVar32 & 1);
        *(longlong **)((longlong)pauVar3 + lVar18 + -0x1c) = plVar26;
        *(undefined4 *)((longlong)pauVar3 + lVar18 + -0x14) = uVar14;
        *(undefined4 *)((longlong)pauVar3 + lVar18 + -0x10) = uStack_cc;
        *(ulonglong *)((longlong)pauVar3 + lVar18 + -0xc) = uStack_bc;
        *(undefined4 *)((longlong)pauVar3 + lVar18 + -4) = uStack_b4;
        plVar31[3] = plVar31[3] + 1;
        uStack_180 = (byte *)CONCAT44(uStack_180._4_4_,uStack_b4);
        uStack_188 = uStack_bc;
        uStack_a4 = 0;
        pdb_1409f93c0(lStack_b0,&uStack_188);
        *(undefined4 *)(puStack_c8 + 1) = uStack_b4;
        *puStack_c8 = uStack_bc;
        *(undefined4 *)((longlong)puStack_c8 + 0xc) = 0;
        puVar27 = puStack_c8;
      }
      return puVar27;
    }
    uVar29 = uVar29 + lVar22 + 0x10;
    lVar22 = lVar22 + 0x10;
  } while( true );
}

