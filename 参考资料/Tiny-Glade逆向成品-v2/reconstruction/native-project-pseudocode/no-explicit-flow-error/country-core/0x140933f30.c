// VA 0x140933f30, PDB extent 3463 bytes
// country_core::systems::collision::world::upsert_collider_entry<bevy_ecs::entity::Entity,tuple$<glam::f32::vec3::Vec3,glam::f32::sse2::quat::Quat> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/collision/world.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::collision::world::upsert_collider_entry<bevy_ecs::entity::Entity,tuple$<glam::f32::vec3::Vec3,glam::f32::sse2::quat::Quat>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/collision/world.rs
   Extent: 3463 */

uint * pdb_140933f30(uint *param_1,int *param_2,longlong param_3,byte *param_4,undefined8 *param_5)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 (*pauVar3) [16];
  code *pcVar4;
  ushort uVar5;
  undefined8 uVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  ulonglong *puVar10;
  int iVar11;
  longlong lVar12;
  ulonglong uVar13;
  byte bVar14;
  uint uVar15;
  longlong *plVar16;
  longlong *plVar17;
  byte bVar18;
  ulonglong uVar19;
  uint uVar20;
  longlong lVar21;
  undefined1 auVar22 [16];
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined4 uStack_298;
  undefined8 uStack_284;
  undefined8 uStack_27c;
  undefined8 uStack_1f8;
  undefined4 uStack_1f0;
  float fStack_1e8;
  float fStack_1e4;
  float fStack_1e0;
  undefined4 uStack_1dc;
  float fStack_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  longlong lStack_1c8;
  byte *pbStack_1c0;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  float fStack_180;
  float fStack_17c;
  float fStack_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  undefined2 uStack_154;
  undefined1 uStack_152;
  undefined1 uStack_149;
  byte *pbStack_140;
  longlong lStack_138;
  undefined8 uStack_130;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  ulonglong uStack_118;
  undefined8 uStack_110;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  float fStack_f0;
  float fStack_ec;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  float fStack_d8;
  undefined2 uStack_c4;
  undefined1 uStack_c2;
  undefined1 uStack_b9;
  byte bStack_86;
  undefined1 uStack_85;
  undefined1 uStack_84;
  undefined1 uStack_83;
  undefined1 uStack_82;
  undefined1 uStack_81;
  undefined8 uStack_80;
  
  uStack_80 = 0xfffffffffffffffe;
  bVar18 = (&UNK_143022b40)[*param_4];
  pbStack_140 = param_4 + 0x18;
  lVar21 = *(longlong *)(param_4 + 0x18);
  uStack_1f0 = *(undefined4 *)(param_5 + 1);
  uStack_1f8 = *param_5;
  uStack_2a8 = (undefined4)param_5[2];
  uStack_2a4 = (undefined4)((ulonglong)param_5[2] >> 0x20);
  uStack_2a0 = (undefined4)param_5[3];
  uStack_29c = (undefined4)((ulonglong)param_5[3] >> 0x20);
  uStack_83 = 1;
  pdb_140de8100(&lStack_138,&uStack_1f8,&uStack_2a8);
  uStack_83 = 1;
  pdb_140de8120(&fStack_1e8,lVar21 + 0x60,&lStack_138);
  plVar17 = *(longlong **)(lVar21 + 0x30);
  uVar1 = *(undefined8 *)(lVar21 + 0x38);
  LOCK();
  lVar21 = *plVar17;
  *plVar17 = *plVar17 + 1;
  UNLOCK();
  if (*plVar17 == 0 || SCARRY8(lVar21,1) != *plVar17 < 0) {
LAB_140934804:
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  uStack_83 = 1;
  pdb_140cd48c0(&lStack_138,plVar17,uVar1);
  uStack_c2 = 1;
  uStack_2a4 = (undefined4)lStack_138;
  uStack_2a0 = (undefined4)((ulonglong)lStack_138 >> 0x20);
  uStack_29c = SUB84(uStack_130,0);
  uStack_298 = (undefined4)((ulonglong)uStack_130 >> 0x20);
  uStack_284 = uStack_118;
  uVar1 = uStack_284;
  uStack_27c = uStack_110;
  uVar6 = uStack_27c;
  uStack_188 = uStack_f8;
  uStack_184 = uStack_f4;
  uStack_154 = uStack_c4;
  uStack_152 = 1;
  uStack_149 = uStack_b9;
  lStack_1c8 = lStack_138;
  pbStack_1c0 = uStack_130;
  uStack_284._0_4_ = (undefined4)uStack_118;
  uStack_284._4_4_ = (undefined4)(uStack_118 >> 0x20);
  uStack_27c._0_4_ = (undefined4)uStack_110;
  uStack_27c._4_4_ = (undefined4)((ulonglong)uStack_110 >> 0x20);
  uStack_1b8 = uStack_128;
  uStack_1b4 = uStack_124;
  uStack_1b0 = uStack_120;
  uStack_1ac = uStack_11c;
  uStack_1a8 = (undefined4)uStack_284;
  uStack_1a4 = uStack_284._4_4_;
  uStack_1a0 = (undefined4)uStack_27c;
  uStack_19c = uStack_27c._4_4_;
  uStack_198 = uStack_108;
  uStack_194 = uStack_104;
  uStack_190 = uStack_100;
  uStack_18c = uStack_fc;
  fStack_180 = fStack_1d8;
  fStack_17c = fStack_1d4;
  fStack_178 = fStack_1d0;
  fStack_174 = fStack_1cc;
  fStack_170 = fStack_1e8;
  fStack_16c = fStack_1e4;
  fStack_168 = fStack_1e0;
  uStack_284 = uVar1;
  uStack_27c = uVar6;
  bStack_86 = bVar18;
  if (*param_2 == 0) {
    lVar21 = *(longlong *)(param_2 + 2);
    uVar8 = *(uint *)(lVar21 + -0x10);
    uVar20 = *(uint *)(lVar21 + -0xc);
    lVar12 = param_3 + (ulonglong)*(byte *)(lVar21 + -8) * 0x390 + 0x20;
    uStack_81 = 1;
    uStack_82 = 1;
    puVar10 = (ulonglong *)pdb_140cd4bd0(lVar12,uVar8,uVar20);
    if (puVar10 == (ulonglong *)0x0) {
      uStack_81 = 1;
      uStack_82 = 1;
      pdb_142dc8110(&UNK_143033b50,0x42,&UNK_143033b98);
      goto LAB_140934804;
    }
    if ((*(float *)((longlong)puVar10 + 0x44) == fStack_1e8) &&
       (!NAN(*(float *)((longlong)puVar10 + 0x44)) && !NAN(fStack_1e8))) {
      if ((*(float *)(puVar10 + 9) == fStack_1e4) &&
         (!NAN(*(float *)(puVar10 + 9)) && !NAN(fStack_1e4))) {
        if (((*(float *)((longlong)puVar10 + 0x4c) == fStack_1e0) &&
            (!NAN(*(float *)((longlong)puVar10 + 0x4c)) && !NAN(fStack_1e0))) &&
           (auVar22._4_4_ = -(uint)(*(float *)(puVar10 + 7) == fStack_1d4),
           auVar22._0_4_ = -(uint)(*(float *)((longlong)puVar10 + 0x34) == fStack_1d8),
           auVar22._8_4_ = -(uint)(*(float *)((longlong)puVar10 + 0x3c) == fStack_1d0),
           auVar22._12_4_ = -(uint)(*(float *)(puVar10 + 8) == fStack_1cc),
           iVar11 = movmskps((int)lVar12,auVar22), iVar11 == 0xf)) {
          uVar13 = *puVar10 & 0xffffffff;
          if (((*(ulonglong *)(param_3 + 0x10) <= uVar13) ||
              (lVar12 = *(longlong *)(param_3 + 8), lVar12 == 0)) ||
             (*(uint *)(lVar12 + 0x20 + uVar13 * 0x28) != (*(uint *)((longlong)puVar10 + 4) | 1))) {
            uStack_81 = 1;
            uStack_82 = 1;
            pdb_142dc664f(&UNK_143076e28,0x18,&UNK_143033c40);
            goto LAB_140934804;
          }
          uStack_81 = 1;
          uStack_82 = 1;
          cVar7 = pdb_1409fb1d0(lVar12 + uVar13 * 0x28,param_4);
          if (cVar7 != '\0') {
            param_1[2] = *(uint *)(lVar21 + -8);
            *(undefined8 *)param_1 = *(undefined8 *)(lVar21 + -0x10);
            param_1[3] = 2;
            *(undefined8 *)(param_1 + 4) = *(undefined8 *)(lVar21 + -0x10);
            plVar17 = (longlong *)CONCAT44(uStack_1b4,uStack_1b8);
            LOCK();
            *plVar17 = *plVar17 + -1;
            UNLOCK();
            if (*plVar17 == 0) {
              pdb_1406efe00(&uStack_1b8);
            }
            if (1 < (uint)lStack_1c8) {
              pub_1406abac0(pbStack_1c0,0x2c,4);
            }
            plVar17 = *(longlong **)pbStack_140;
            LOCK();
            *plVar17 = *plVar17 + -1;
            UNLOCK();
            if (*plVar17 != 0) {
              return param_1;
            }
            pdb_140c7b7a0();
            return param_1;
          }
        }
      }
    }
    uStack_81 = 1;
    uStack_82 = 1;
    pdb_1409f8710(&lStack_138,param_3,lVar21 + -0x18);
    plVar17 = (longlong *)CONCAT44(uStack_fc,uStack_100);
    LOCK();
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (*plVar17 == 0) {
      uStack_81 = 1;
      uStack_82 = 1;
      pdb_140c7b7a0(&uStack_100);
    }
    lStack_138 = *(longlong *)param_4;
    uStack_130 = *(byte **)(param_4 + 8);
    uStack_128 = *(undefined4 *)(param_4 + 0x10);
    uStack_124 = *(undefined4 *)(param_4 + 0x14);
    uStack_120 = *(undefined4 *)(param_4 + 0x18);
    uStack_11c = *(undefined4 *)(param_4 + 0x1c);
    uStack_81 = 1;
    uStack_82 = 0;
    plVar17 = &lStack_138;
    uVar9 = pdb_140c94d10(param_3);
    *(uint *)(lVar21 + -0x18) = uVar9;
    *(int *)(lVar21 + -0x14) = (int)plVar17;
    uStack_128 = uStack_1b8;
    uStack_124 = uStack_1b4;
    uStack_120 = uStack_1b0;
    uStack_11c = uStack_1ac;
    lStack_138 = lStack_1c8;
    uStack_130 = pbStack_1c0;
    uStack_108 = uStack_198;
    uStack_104 = uStack_194;
    uStack_100 = uStack_190;
    uStack_fc = uStack_18c;
    uStack_f8 = uStack_188;
    uStack_f4 = uStack_184;
    fStack_f0 = fStack_180;
    fStack_ec = fStack_17c;
    uStack_e8 = CONCAT44(fStack_174,fStack_178);
    uStack_e0 = CONCAT44(fStack_16c,fStack_170);
    fStack_d8 = fStack_168;
    uStack_c4 = uStack_154;
    uStack_c2 = uStack_152;
    uStack_b9 = uStack_149;
    uStack_118 = (ulonglong)plVar17 & 0xffffffff | (ulonglong)uVar9 << 0x20;
    uStack_110 = 0;
    pdb_140cd4920(&uStack_2a8,&lStack_138);
    plVar17 = (longlong *)CONCAT44(uStack_124,uStack_128);
    LOCK();
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (*plVar17 == 0) {
      pdb_1406efe00(&uStack_128);
    }
    if (1 < (uint)(float)lStack_138) {
      pub_1406abac0(uStack_130,0x2c,4);
    }
    lVar12 = (ulonglong)bVar18 * 0x390;
    *(undefined1 *)(param_3 + 0x3a8 + lVar12) = 1;
    uStack_84 = 1;
    pdb_140cd4b60(&lStack_138,&uStack_2a8);
    lVar12 = param_3 + 0x20 + lVar12;
    fStack_1e8 = (float)lStack_138;
    fStack_1e4 = (float)(undefined4)uStack_130;
    fStack_1e0 = (float)uStack_130._4_4_;
    uStack_1dc = uStack_124;
    uStack_84 = 1;
    pdb_140a83790(lVar12 + 0x188,&fStack_1e8);
    plVar17 = &lStack_138;
    pub_142e32760(plVar17,&uStack_2a8,0xb0);
    uStack_84 = 0;
    uVar9 = pdb_140a942e0(lVar12);
    uVar15 = (uint)plVar17;
    *(uint *)(lVar21 + -0x10) = uVar9;
    *(uint *)(lVar21 + -0xc) = uVar15;
    *(byte *)(lVar21 + -8) = bStack_86;
    uStack_130._0_5_ = CONCAT14(bStack_86,uVar15);
    lStack_138 = (ulonglong)uVar9 << 0x20;
    uStack_84 = 0;
    pdb_1409c4dd0(param_3 + 0x3cb0,&lStack_138);
    *param_1 = uVar9;
    param_1[1] = uVar15;
    *(byte *)(param_1 + 2) = bStack_86;
    param_1[3] = 1;
    param_1[4] = uVar8;
    param_1[5] = uVar20;
  }
  else {
    lStack_138 = *(longlong *)param_4;
    uStack_130 = *(byte **)(param_4 + 8);
    uStack_128 = *(undefined4 *)(param_4 + 0x10);
    uStack_124 = *(undefined4 *)(param_4 + 0x14);
    uStack_120 = *(undefined4 *)(param_4 + 0x18);
    uStack_11c = *(undefined4 *)(param_4 + 0x1c);
    uStack_81 = 1;
    uStack_82 = 0;
    plVar17 = &lStack_138;
    uVar8 = pdb_140c94d10(param_3);
    uStack_128 = uStack_1b8;
    uStack_124 = uStack_1b4;
    uStack_120 = uStack_1b0;
    uStack_11c = uStack_1ac;
    lStack_138 = lStack_1c8;
    uStack_130 = pbStack_1c0;
    uStack_108 = uStack_198;
    uStack_104 = uStack_194;
    uStack_100 = uStack_190;
    uStack_fc = uStack_18c;
    uStack_f8 = uStack_188;
    uStack_f4 = uStack_184;
    fStack_f0 = fStack_180;
    fStack_ec = fStack_17c;
    uStack_e8 = CONCAT44(fStack_174,fStack_178);
    uStack_e0 = CONCAT44(fStack_16c,fStack_170);
    fStack_d8 = fStack_168;
    uStack_c4 = uStack_154;
    uStack_c2 = uStack_152;
    uStack_b9 = uStack_149;
    uStack_118 = (ulonglong)plVar17 & 0xffffffff | (ulonglong)uVar8 << 0x20;
    uStack_110 = 0;
    pdb_140cd4920(&uStack_2a8,&lStack_138);
    plVar16 = (longlong *)CONCAT44(uStack_124,uStack_128);
    LOCK();
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (*plVar16 == 0) {
      pdb_1406efe00(&uStack_128);
    }
    if (1 < (uint)(float)lStack_138) {
      pub_1406abac0(uStack_130,0x2c,4);
    }
    lVar21 = (ulonglong)bVar18 * 0x390;
    *(undefined1 *)(param_3 + 0x3a8 + lVar21) = 1;
    uStack_85 = 1;
    pdb_140cd4b60(&lStack_138,&uStack_2a8);
    lVar21 = lVar21 + param_3;
    fStack_1e8 = (float)lStack_138;
    fStack_1e4 = (float)(undefined4)uStack_130;
    fStack_1e0 = (float)uStack_130._4_4_;
    uStack_1dc = uStack_124;
    uStack_85 = 1;
    pdb_140a83790(lVar21 + 0x1a8,&fStack_1e8);
    plVar16 = &lStack_138;
    pub_142e32760(plVar16,&uStack_2a8,0xb0);
    uStack_85 = 0;
    uVar9 = pdb_140a942e0(lVar21 + 0x20);
    puVar2 = *(undefined8 **)(param_2 + 2);
    pauVar3 = (undefined1 (*) [16])*puVar2;
    uVar13 = puVar2[1];
    uVar19 = uVar13 & *(ulonglong *)(param_2 + 4);
    auVar22 = *(undefined1 (*) [16])(*pauVar3 + uVar19);
    uVar5 = (ushort)(SUB161(auVar22 >> 7,0) & 1) | (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
            (ushort)(SUB161(auVar22 >> 0x17,0) & 1) << 2 |
            (ushort)(SUB161(auVar22 >> 0x1f,0) & 1) << 3 |
            (ushort)(SUB161(auVar22 >> 0x27,0) & 1) << 4 |
            (ushort)(SUB161(auVar22 >> 0x2f,0) & 1) << 5 |
            (ushort)(SUB161(auVar22 >> 0x37,0) & 1) << 6 |
            (ushort)(SUB161(auVar22 >> 0x3f,0) & 1) << 7 |
            (ushort)(SUB161(auVar22 >> 0x47,0) & 1) << 8 |
            (ushort)(SUB161(auVar22 >> 0x4f,0) & 1) << 9 |
            (ushort)(SUB161(auVar22 >> 0x57,0) & 1) << 10 |
            (ushort)(SUB161(auVar22 >> 0x5f,0) & 1) << 0xb |
            (ushort)(SUB161(auVar22 >> 0x67,0) & 1) << 0xc |
            (ushort)(SUB161(auVar22 >> 0x6f,0) & 1) << 0xd |
            (ushort)(SUB161(auVar22 >> 0x77,0) & 1) << 0xe |
            (ushort)(byte)(auVar22[0xf] >> 7) << 0xf;
    uVar20 = (uint)uVar5;
    if (uVar5 == 0) {
      lVar21 = 0x10;
      do {
        uVar19 = uVar19 + lVar21 & uVar13;
        auVar22 = *(undefined1 (*) [16])(*pauVar3 + uVar19);
        lVar21 = lVar21 + 0x10;
        uVar20 = (uint)(ushort)((ushort)(SUB161(auVar22 >> 7,0) & 1) |
                                (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
                                (ushort)(SUB161(auVar22 >> 0x17,0) & 1) << 2 |
                                (ushort)(SUB161(auVar22 >> 0x1f,0) & 1) << 3 |
                                (ushort)(SUB161(auVar22 >> 0x27,0) & 1) << 4 |
                                (ushort)(SUB161(auVar22 >> 0x2f,0) & 1) << 5 |
                                (ushort)(SUB161(auVar22 >> 0x37,0) & 1) << 6 |
                                (ushort)(SUB161(auVar22 >> 0x3f,0) & 1) << 7 |
                                (ushort)(SUB161(auVar22 >> 0x47,0) & 1) << 8 |
                                (ushort)(SUB161(auVar22 >> 0x4f,0) & 1) << 9 |
                                (ushort)(SUB161(auVar22 >> 0x57,0) & 1) << 10 |
                                (ushort)(SUB161(auVar22 >> 0x5f,0) & 1) << 0xb |
                                (ushort)(SUB161(auVar22 >> 0x67,0) & 1) << 0xc |
                                (ushort)(SUB161(auVar22 >> 0x6f,0) & 1) << 0xd |
                                (ushort)(SUB161(auVar22 >> 0x77,0) & 1) << 0xe |
                               (ushort)(byte)(auVar22[0xf] >> 7) << 0xf);
      } while (uVar20 == 0);
    }
    uVar1 = *(undefined8 *)param_2;
    uVar15 = 0;
    for (; (uVar20 & 1) == 0; uVar20 = uVar20 >> 1 | 0x80000000) {
      uVar15 = uVar15 + 1;
    }
    uVar19 = uVar15 + uVar19 & uVar13;
    bVar18 = (*pauVar3)[uVar19];
    if (-1 < (char)bVar18) {
      auVar22 = *pauVar3;
      uVar20 = 0;
      for (uVar15 = (uint)(ushort)((ushort)(SUB161(auVar22 >> 7,0) & 1) |
                                   (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
                                   (ushort)(SUB161(auVar22 >> 0x17,0) & 1) << 2 |
                                   (ushort)(SUB161(auVar22 >> 0x1f,0) & 1) << 3 |
                                   (ushort)(SUB161(auVar22 >> 0x27,0) & 1) << 4 |
                                   (ushort)(SUB161(auVar22 >> 0x2f,0) & 1) << 5 |
                                   (ushort)(SUB161(auVar22 >> 0x37,0) & 1) << 6 |
                                   (ushort)(SUB161(auVar22 >> 0x3f,0) & 1) << 7 |
                                   (ushort)(SUB161(auVar22 >> 0x47,0) & 1) << 8 |
                                   (ushort)(SUB161(auVar22 >> 0x4f,0) & 1) << 9 |
                                   (ushort)(SUB161(auVar22 >> 0x57,0) & 1) << 10 |
                                   (ushort)(SUB161(auVar22 >> 0x5f,0) & 1) << 0xb |
                                   (ushort)(SUB161(auVar22 >> 0x67,0) & 1) << 0xc |
                                   (ushort)(SUB161(auVar22 >> 0x6f,0) & 1) << 0xd |
                                   (ushort)(SUB161(auVar22 >> 0x77,0) & 1) << 0xe |
                                  (ushort)(byte)(auVar22[0xf] >> 7) << 0xf); (uVar15 & 1) == 0;
          uVar15 = uVar15 >> 1 | 0x80000000) {
        uVar20 = uVar20 + 1;
      }
      uVar19 = (ulonglong)uVar20;
      bVar18 = (*pauVar3)[uVar19];
    }
    bVar14 = (byte)(*(ulonglong *)(param_2 + 4) >> 0x39);
    (*pauVar3)[uVar19] = bVar14;
    pauVar3[1][uVar19 - 0x10 & uVar13] = bVar14;
    puVar2[2] = puVar2[2] - (ulonglong)(bVar18 & 1);
    *(undefined8 *)pauVar3[uVar19 * -2 + -2] = uVar1;
    *(uint *)(pauVar3[uVar19 * -2 + -2] + 8) = uVar8;
    *(int *)(pauVar3[uVar19 * -2 + -2] + 0xc) = (int)plVar17;
    *(uint *)pauVar3[uVar19 * -2 + -1] = uVar9;
    uVar8 = (uint)plVar16;
    *(uint *)(pauVar3[uVar19 * -2 + -1] + 4) = uVar8;
    pauVar3[uVar19 * -2 + -1][8] = bStack_86;
    puVar2[3] = puVar2[3] + 1;
    uStack_130._0_5_ = CONCAT14(bStack_86,uVar8);
    lStack_138 = (ulonglong)uVar9 << 0x20;
    uStack_85 = 0;
    pdb_1409c4dd0(param_3 + 0x3cb0,&lStack_138);
    *param_1 = uVar9;
    param_1[1] = uVar8;
    *(byte *)(param_1 + 2) = bStack_86;
    param_1[3] = 0;
  }
  return param_1;
}

