// VA 0x1414e5340, PDB extent 4463 bytes
// country_core::systems::collision::world::RaycastWorld::upsert_collider<tuple$<country_core::resources::stairs::stairs_state::StairGraphEdge,u32>,utils::IsoTransform>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/collision/world.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::collision::world::RaycastWorld::upsert_collider<tuple$<country_core::resources::stairs::stairs_state::StairGraphEdge,u32>,utils::IsoTransform>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/collision/world.rs
   Extent: 4463 */

ulonglong *
pdb_1414e5340(ulonglong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5,undefined8 *param_6)

{
  ulonglong *puVar1;
  undefined1 auVar2 [16];
  undefined1 (*pauVar3) [16];
  ushort uVar4;
  longlong *plVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  ulonglong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 uVar15;
  char cVar16;
  undefined4 uVar17;
  int iVar18;
  longlong lVar19;
  undefined8 uVar20;
  byte bVar21;
  uint uVar22;
  undefined8 *puVar23;
  ulonglong uVar24;
  undefined8 *puVar25;
  byte bVar26;
  uint uVar27;
  undefined8 unaff_R13;
  ulonglong uVar28;
  undefined8 uStack_388;
  undefined4 uStack_380;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  ulonglong uStack_2b8;
  byte *pbStack_2b0;
  undefined8 uStack_2a8;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined8 uStack_298;
  undefined8 uStack_290;
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
  ulonglong *puStack_230;
  ulonglong uStack_228;
  byte *pbStack_220;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  ulonglong uStack_208;
  undefined8 uStack_200;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  longlong lStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  undefined4 uStack_15c;
  undefined8 uStack_158;
  byte *pbStack_150;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
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
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined1 uStack_a6;
  undefined1 uStack_a5;
  undefined1 uStack_a4;
  undefined1 uStack_a3;
  undefined1 uStack_a2;
  undefined1 uStack_a1;
  undefined8 uStack_a0;
  
  uStack_a0 = 0xfffffffffffffffe;
  uStack_a5 = 1;
  pdb_1414b04a0(&uStack_178,param_3,param_4);
  fVar13 = fStack_160;
  uVar9 = (ulonglong)uStack_170;
  puVar25 = uStack_178;
  uVar20 = CONCAT44(fStack_164,fStack_168);
  uStack_198 = *param_5;
  uStack_190 = param_5[1];
  uStack_188 = param_5[2];
  uStack_180 = (longlong *)param_5[3];
  uStack_2d8 = *param_6;
  uStack_2d0 = param_6[1];
  uStack_2c8 = *(undefined4 *)(param_6 + 2);
  uStack_2c4 = *(undefined4 *)((longlong)param_6 + 0x14);
  uStack_2c0 = *(undefined4 *)(param_6 + 3);
  uStack_2bc = *(undefined4 *)((longlong)param_6 + 0x1c);
  uStack_a6 = 1;
  uVar15 = pdb_1409f1360(&uStack_198);
  uVar28 = CONCAT71((int7)((ulonglong)unaff_R13 >> 8),uVar15);
  uStack_a6 = 1;
  pdb_140c62ff0(&uStack_178,&uStack_2d8,uStack_180 + 2);
  fVar14 = fStack_160;
  fVar12 = fStack_164;
  fVar11 = fStack_168;
  fVar6 = (float)uStack_178;
  fVar7 = uStack_178._4_4_;
  fVar8 = (float)uStack_170;
  fVar10 = uStack_170._4_4_;
  uStack_248 = uStack_e8;
  uStack_240 = uStack_e0;
  uStack_258 = uStack_f8;
  uStack_250 = uStack_f0;
  uStack_268 = uStack_108;
  uStack_260 = uStack_100;
  uStack_278 = uStack_118;
  uStack_270 = uStack_110;
  uStack_288 = uStack_128;
  uStack_280 = uStack_120;
  uStack_298 = uStack_138;
  uStack_290 = uStack_130;
  uStack_2a8 = (longlong *)CONCAT44(uStack_144,uStack_148);
  uStack_2a0 = uStack_140;
  uStack_29c = uStack_13c;
  uStack_2b8 = uStack_158;
  pbStack_2b0 = pbStack_150;
  puStack_230 = param_1;
  if (puVar25 == (undefined8 *)0x0) {
    uVar24 = *(ulonglong *)(uVar9 - 0xc);
    uStack_380 = *(undefined4 *)(uVar9 - 4);
    uStack_388 = *(undefined8 *)(uVar9 - 0xc);
    uStack_a1 = 1;
    uStack_a2 = 1;
    uVar17 = pdb_1409ed9b0(&uStack_178,param_2,&uStack_388);
    puVar1 = (ulonglong *)(uVar9 - 0xc);
    if ((int)uStack_158 != 0) {
      if ((fStack_168 == fVar11) && (!NAN(fStack_168) && !NAN(fVar11))) {
        if ((fStack_164 == fVar12) && (!NAN(fStack_164) && !NAN(fVar12))) {
          if ((fStack_160 == fVar14) && (!NAN(fStack_160) && !NAN(fVar14))) {
            auVar2._4_4_ = -(uint)(fVar7 == uStack_178._4_4_);
            auVar2._0_4_ = -(uint)(fVar6 == (float)uStack_178);
            auVar2._8_4_ = -(uint)(fVar8 == (float)uStack_170);
            auVar2._12_4_ = -(uint)(fVar10 == uStack_170._4_4_);
            iVar18 = movmskps(uVar17,auVar2);
            if (iVar18 == 0xf) {
              uStack_a1 = 1;
              uStack_a2 = 1;
              uVar20 = pdb_1409ef0f0(param_2,uStack_158 & 0xffffffff,uStack_158._4_4_);
              uStack_a1 = 1;
              uStack_a2 = 1;
              cVar16 = pdb_1409fb1d0(uVar20,&uStack_198);
              if (cVar16 != '\0') {
                *(undefined4 *)(param_1 + 1) = *(undefined4 *)(uVar9 - 4);
                *param_1 = *puVar1;
                *(undefined4 *)((longlong)param_1 + 0xc) = 2;
                param_1[2] = *puVar1;
                LOCK();
                *uStack_2a8 = *uStack_2a8 + -1;
                UNLOCK();
                if (*uStack_2a8 == 0) {
                  pdb_1406efe00(&uStack_2a8);
                }
                if (1 < (uint)uStack_2b8) {
                  pub_1406abac0(pbStack_2b0,0x2c,4);
                }
                LOCK();
                *uStack_180 = *uStack_180 + -1;
                UNLOCK();
                if (*uStack_180 != 0) {
                  return param_1;
                }
                uStack_a5 = 0;
                pdb_140c7b7a0(&uStack_180);
                return param_1;
              }
            }
          }
        }
      }
    }
    uStack_a1 = 1;
    uStack_a2 = 1;
    pdb_1409f8710(&uStack_178,param_2,uVar9 - 0x14);
    plVar5 = (longlong *)CONCAT44(uStack_13c,uStack_140);
    LOCK();
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      uStack_a1 = 1;
      uStack_a2 = 1;
      pdb_140c7b7a0(&uStack_140);
    }
    fStack_168 = (float)(undefined4)uStack_188;
    fStack_164 = (float)uStack_188._4_4_;
    fStack_160 = (float)(undefined4)uStack_180;
    uStack_15c = uStack_180._4_4_;
    uStack_178 = (undefined8 *)uStack_198;
    uStack_170 = (byte *)uStack_190;
    uStack_a1 = 1;
    uStack_a2 = 0;
    puVar25 = &uStack_178;
    uVar17 = pdb_1424ee750(param_2);
    *(undefined4 *)(uVar9 - 0x14) = uVar17;
    *(int *)(uVar9 - 0x10) = (int)puVar25;
    uStack_108 = uStack_248;
    uStack_100 = uStack_240;
    uStack_118 = uStack_258;
    uStack_110 = uStack_250;
    uStack_128 = uStack_268;
    uStack_120 = uStack_260;
    uStack_138 = uStack_278;
    uStack_130 = uStack_270;
    uStack_148 = (undefined4)uStack_288;
    uStack_144 = uStack_288._4_4_;
    uStack_140 = (undefined4)uStack_280;
    uStack_13c = uStack_280._4_4_;
    uStack_158 = uStack_298;
    pbStack_150 = (byte *)uStack_290;
    fStack_168 = (float)(undefined4)uStack_2a8;
    fStack_164 = (float)uStack_2a8._4_4_;
    fStack_160 = (float)uStack_2a0;
    uStack_15c = uStack_29c;
    uStack_178 = (undefined8 *)uStack_2b8;
    uStack_170 = pbStack_2b0;
    lVar19 = pdb_1409fb190(uVar9 - 0x14);
    uStack_208 = (ulonglong)puVar25 & 0xffffffff | lVar19 << 0x20;
    pbStack_150 = (byte *)0x0;
    uStack_228 = (ulonglong)uStack_178;
    pbStack_220 = uStack_170;
    uStack_218 = fStack_168;
    uStack_214 = fStack_164;
    uStack_210 = fStack_160;
    uStack_20c = uStack_15c;
    uStack_1f8 = uStack_148;
    uStack_1f4 = uStack_144;
    uStack_1f0 = uStack_140;
    uStack_1ec = uStack_13c;
    uStack_1e8 = (undefined4)uStack_138;
    uStack_1e4 = uStack_138._4_4_;
    uStack_1e0 = (undefined4)uStack_130;
    uStack_1dc = uStack_130._4_4_;
    uStack_1d8 = uStack_128;
    uStack_1d0 = uStack_120;
    uStack_1c8 = uStack_118;
    uStack_1c0 = uStack_110;
    uStack_1b8 = uStack_108;
    uStack_1b0 = uStack_100;
    uStack_200 = 0;
    uStack_158 = uStack_208;
    pdb_140cd4920(&uStack_388,&uStack_228);
    plVar5 = (longlong *)CONCAT44(uStack_214,uStack_218);
    LOCK();
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      pdb_1406efe00(&uStack_218);
    }
    if (1 < (uint)uStack_228) {
      pub_1406abac0(pbStack_220,0x2c,4);
    }
    uStack_a3 = 1;
    lVar19 = pdb_1409f9a50(param_2 + 0x20,0x11,uVar28 & 0xffffffff,&UNK_1433166b8);
    *(undefined1 *)(lVar19 + 0x388) = 1;
    uStack_a3 = 1;
    pdb_140cd4b60(&uStack_178,&uStack_388);
    uStack_a3 = 1;
    pdb_1409f1340(&uStack_228,&uStack_178);
    uStack_a3 = 1;
    pdb_140a83790(lVar19 + 0x188,&uStack_228);
    puVar25 = &uStack_178;
    pub_142e32760(puVar25,&uStack_388,0xb0);
    uStack_a3 = 0;
    uVar17 = pdb_1424ee9c0(lVar19,puVar25);
    uStack_a3 = 0;
    pdb_1409f14f0(&uStack_228,uVar28 & 0xffffffff,uVar17,(ulonglong)puVar25 & 0xffffffff);
    *(undefined4 *)(uVar9 - 4) = pbStack_220._0_4_;
    *puVar1 = uStack_228;
    uStack_170 = (byte *)CONCAT44(uStack_170._4_4_,pbStack_220._0_4_);
    uStack_178 = (undefined8 *)uStack_228;
    uStack_a3 = 0;
    pdb_1409f93c0(param_2,&uStack_178);
    *(undefined4 *)(param_1 + 1) = pbStack_220._0_4_;
    *param_1 = uStack_228;
    *(undefined4 *)((longlong)param_1 + 0xc) = 1;
    param_1[2] = uVar24;
  }
  else {
    fStack_168 = (float)(undefined4)uStack_188;
    fStack_164 = (float)uStack_188._4_4_;
    fStack_160 = (float)(undefined4)uStack_180;
    uStack_15c = uStack_180._4_4_;
    uStack_178 = (undefined8 *)uStack_198;
    uStack_170 = (byte *)uStack_190;
    uStack_a1 = 1;
    uStack_a2 = 0;
    puVar23 = &uStack_178;
    uStack_1a8 = pdb_1424ee750(param_2);
    uStack_1a4 = SUB84(puVar23,0);
    uStack_108 = uStack_248;
    uStack_100 = uStack_240;
    uStack_118 = uStack_258;
    uStack_110 = uStack_250;
    uStack_128 = uStack_268;
    uStack_120 = uStack_260;
    uStack_138 = uStack_278;
    uStack_130 = uStack_270;
    uStack_148 = (undefined4)uStack_288;
    uStack_144 = uStack_288._4_4_;
    uStack_140 = (undefined4)uStack_280;
    uStack_13c = uStack_280._4_4_;
    uStack_158 = uStack_298;
    pbStack_150 = (byte *)uStack_290;
    fStack_168 = (float)(undefined4)uStack_2a8;
    fStack_164 = (float)uStack_2a8._4_4_;
    fStack_160 = (float)uStack_2a0;
    uStack_15c = uStack_29c;
    uStack_178 = (undefined8 *)uStack_2b8;
    uStack_170 = pbStack_2b0;
    uStack_b0 = uStack_1a8;
    uStack_ac = uStack_1a4;
    lVar19 = pdb_1409fb190(&uStack_1a8);
    uStack_208 = (ulonglong)puVar23 & 0xffffffff | lVar19 << 0x20;
    pbStack_150 = (byte *)0x0;
    uStack_228 = (ulonglong)uStack_178;
    pbStack_220 = uStack_170;
    uStack_218 = fStack_168;
    uStack_214 = fStack_164;
    uStack_210 = fStack_160;
    uStack_20c = uStack_15c;
    uStack_1f8 = uStack_148;
    uStack_1f4 = uStack_144;
    uStack_1f0 = uStack_140;
    uStack_1ec = uStack_13c;
    uStack_1e8 = (undefined4)uStack_138;
    uStack_1e4 = uStack_138._4_4_;
    uStack_1e0 = (undefined4)uStack_130;
    uStack_1dc = uStack_130._4_4_;
    uStack_1d8 = uStack_128;
    uStack_1d0 = uStack_120;
    uStack_1c8 = uStack_118;
    uStack_1c0 = uStack_110;
    uStack_1b8 = uStack_108;
    uStack_1b0 = uStack_100;
    uStack_200 = 0;
    uStack_158 = uStack_208;
    pdb_140cd4920(&uStack_388,&uStack_228);
    plVar5 = (longlong *)CONCAT44(uStack_214,uStack_218);
    LOCK();
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    lStack_1a0 = param_2;
    if (*plVar5 == 0) {
      pdb_1406efe00(&uStack_218);
    }
    if (1 < (uint)uStack_228) {
      pub_1406abac0(pbStack_220,0x2c,4);
    }
    uStack_a4 = 1;
    lVar19 = pdb_1409f9a50(lStack_1a0 + 0x20,0x11,uVar28 & 0xffffffff,&UNK_1433166d0);
    *(undefined1 *)(lVar19 + 0x388) = 1;
    uStack_a4 = 1;
    pdb_140cd4b60(&uStack_178,&uStack_388);
    uStack_a4 = 1;
    pdb_1409f1340(&uStack_228,&uStack_178);
    uStack_a4 = 1;
    pdb_140a83790(lVar19 + 0x188,&uStack_228);
    puVar23 = &uStack_178;
    pub_142e32760(puVar23,&uStack_388,0xb0);
    uStack_a4 = 0;
    uVar17 = pdb_1424ee9c0(lVar19,puVar23);
    uStack_a4 = 0;
    pdb_1409f14f0(&uStack_bc,CONCAT71((int7)((ulonglong)uVar20 >> 8),uVar15) & 0xffffffff,uVar17,
                  (ulonglong)puVar23 & 0xffffffff);
    pauVar3 = (undefined1 (*) [16])*puVar25;
    uVar28 = puVar25[1];
    uVar24 = uVar28 & uVar9;
    auVar2 = *(undefined1 (*) [16])(*pauVar3 + uVar24);
    uVar4 = (ushort)(SUB161(auVar2 >> 7,0) & 1) | (ushort)(SUB161(auVar2 >> 0xf,0) & 1) << 1 |
            (ushort)(SUB161(auVar2 >> 0x17,0) & 1) << 2 |
            (ushort)(SUB161(auVar2 >> 0x1f,0) & 1) << 3 |
            (ushort)(SUB161(auVar2 >> 0x27,0) & 1) << 4 |
            (ushort)(SUB161(auVar2 >> 0x2f,0) & 1) << 5 |
            (ushort)(SUB161(auVar2 >> 0x37,0) & 1) << 6 |
            (ushort)(SUB161(auVar2 >> 0x3f,0) & 1) << 7 |
            (ushort)(SUB161(auVar2 >> 0x47,0) & 1) << 8 |
            (ushort)(SUB161(auVar2 >> 0x4f,0) & 1) << 9 |
            (ushort)(SUB161(auVar2 >> 0x57,0) & 1) << 10 |
            (ushort)(SUB161(auVar2 >> 0x5f,0) & 1) << 0xb |
            (ushort)(SUB161(auVar2 >> 0x67,0) & 1) << 0xc |
            (ushort)(SUB161(auVar2 >> 0x6f,0) & 1) << 0xd |
            (ushort)(SUB161(auVar2 >> 0x77,0) & 1) << 0xe | (ushort)(byte)(auVar2[0xf] >> 7) << 0xf;
    uVar27 = (uint)uVar4;
    if (uVar4 == 0) {
      lVar19 = 0x10;
      do {
        uVar24 = uVar24 + lVar19 & uVar28;
        auVar2 = *(undefined1 (*) [16])(*pauVar3 + uVar24);
        lVar19 = lVar19 + 0x10;
        uVar27 = (uint)(ushort)((ushort)(SUB161(auVar2 >> 7,0) & 1) |
                                (ushort)(SUB161(auVar2 >> 0xf,0) & 1) << 1 |
                                (ushort)(SUB161(auVar2 >> 0x17,0) & 1) << 2 |
                                (ushort)(SUB161(auVar2 >> 0x1f,0) & 1) << 3 |
                                (ushort)(SUB161(auVar2 >> 0x27,0) & 1) << 4 |
                                (ushort)(SUB161(auVar2 >> 0x2f,0) & 1) << 5 |
                                (ushort)(SUB161(auVar2 >> 0x37,0) & 1) << 6 |
                                (ushort)(SUB161(auVar2 >> 0x3f,0) & 1) << 7 |
                                (ushort)(SUB161(auVar2 >> 0x47,0) & 1) << 8 |
                                (ushort)(SUB161(auVar2 >> 0x4f,0) & 1) << 9 |
                                (ushort)(SUB161(auVar2 >> 0x57,0) & 1) << 10 |
                                (ushort)(SUB161(auVar2 >> 0x5f,0) & 1) << 0xb |
                                (ushort)(SUB161(auVar2 >> 0x67,0) & 1) << 0xc |
                                (ushort)(SUB161(auVar2 >> 0x6f,0) & 1) << 0xd |
                                (ushort)(SUB161(auVar2 >> 0x77,0) & 1) << 0xe |
                               (ushort)(byte)(auVar2[0xf] >> 7) << 0xf);
      } while (uVar27 == 0);
    }
    uVar22 = 0;
    for (; (uVar27 & 1) == 0; uVar27 = uVar27 >> 1 | 0x80000000) {
      uVar22 = uVar22 + 1;
    }
    uVar24 = uVar22 + uVar24 & uVar28;
    bVar21 = (*pauVar3)[uVar24];
    if (-1 < (char)bVar21) {
      auVar2 = *pauVar3;
      uVar27 = 0;
      for (uVar22 = (uint)(ushort)((ushort)(SUB161(auVar2 >> 7,0) & 1) |
                                   (ushort)(SUB161(auVar2 >> 0xf,0) & 1) << 1 |
                                   (ushort)(SUB161(auVar2 >> 0x17,0) & 1) << 2 |
                                   (ushort)(SUB161(auVar2 >> 0x1f,0) & 1) << 3 |
                                   (ushort)(SUB161(auVar2 >> 0x27,0) & 1) << 4 |
                                   (ushort)(SUB161(auVar2 >> 0x2f,0) & 1) << 5 |
                                   (ushort)(SUB161(auVar2 >> 0x37,0) & 1) << 6 |
                                   (ushort)(SUB161(auVar2 >> 0x3f,0) & 1) << 7 |
                                   (ushort)(SUB161(auVar2 >> 0x47,0) & 1) << 8 |
                                   (ushort)(SUB161(auVar2 >> 0x4f,0) & 1) << 9 |
                                   (ushort)(SUB161(auVar2 >> 0x57,0) & 1) << 10 |
                                   (ushort)(SUB161(auVar2 >> 0x5f,0) & 1) << 0xb |
                                   (ushort)(SUB161(auVar2 >> 0x67,0) & 1) << 0xc |
                                   (ushort)(SUB161(auVar2 >> 0x6f,0) & 1) << 0xd |
                                   (ushort)(SUB161(auVar2 >> 0x77,0) & 1) << 0xe |
                                  (ushort)(byte)(auVar2[0xf] >> 7) << 0xf); (uVar22 & 1) == 0;
          uVar22 = uVar22 >> 1 | 0x80000000) {
        uVar27 = uVar27 + 1;
      }
      uVar24 = (ulonglong)uVar27;
      bVar21 = (*pauVar3)[uVar24];
    }
    bVar26 = (byte)(uVar9 >> 0x39);
    (*pauVar3)[uVar24] = bVar26;
    pauVar3[1][uVar24 - 0x10 & uVar28] = bVar26;
    puVar25[2] = puVar25[2] - (ulonglong)(bVar21 & 1);
    *(undefined8 *)pauVar3[uVar24 * -2 + -2] = uVar20;
    *(float *)(pauVar3[uVar24 * -2 + -2] + 8) = fVar13;
    *(undefined4 *)(pauVar3[uVar24 * -2 + -2] + 0xc) = uStack_b0;
    *(undefined4 *)pauVar3[uVar24 * -2 + -1] = uStack_ac;
    *(undefined4 *)(pauVar3[uVar24 * -2 + -1] + 0xc) = uStack_b4;
    *(ulonglong *)(pauVar3[uVar24 * -2 + -1] + 4) = uStack_bc;
    puVar25[3] = puVar25[3] + 1;
    uStack_170 = (byte *)CONCAT44(uStack_170._4_4_,uStack_b4);
    uStack_178 = (undefined8 *)uStack_bc;
    uStack_a4 = 0;
    pdb_1409f93c0(lStack_1a0,&uStack_178);
    *(undefined4 *)(puStack_230 + 1) = uStack_b4;
    *puStack_230 = uStack_bc;
    *(undefined4 *)((longlong)puStack_230 + 0xc) = 0;
  }
  return puStack_230;
}

