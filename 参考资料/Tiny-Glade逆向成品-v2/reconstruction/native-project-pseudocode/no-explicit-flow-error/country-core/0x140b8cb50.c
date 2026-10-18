// VA 0x140b8cb50, PDB extent 3357 bytes
// country_core::systems::wall::shapes::circle::ui_create_circle::ui_create_circle
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/shapes/circle/ui_create_circle.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::wall::shapes::circle::ui_create_circle::ui_create_circle
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/shapes/circle/ui_create_circle.rs
   Extent: 3357 */

void pdb_140b8cb50(undefined8 *param_1,longlong *param_2,undefined8 *param_3,undefined8 *param_4,
                  longlong *param_5,longlong *param_6,undefined8 *param_7,longlong *param_8,
                  undefined8 *param_9,longlong *param_10,undefined8 *param_11,longlong *param_12)

{
  uint *puVar1;
  undefined8 *puVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  float *pfVar8;
  longlong lVar9;
  char cVar10;
  char cVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 uVar14;
  undefined *puVar15;
  longlong lVar16;
  longlong lVar17;
  byte bVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  undefined4 *puVar23;
  byte *pbVar24;
  bool bVar25;
  bool bVar26;
  bool bVar27;
  bool bVar28;
  float fVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  float fVar32;
  float fVar33;
  undefined8 uVar34;
  uint uVar35;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 *puStack_218;
  longlong lStack_210;
  undefined8 uStack_208;
  longlong lStack_200;
  byte *pbStack_1f8;
  undefined4 *puStack_1f0;
  longlong lStack_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  longlong lStack_1c8;
  longlong lStack_1c0;
  undefined4 *puStack_1b8;
  undefined8 uStack_1b0;
  undefined *puStack_1a8;
  longlong *plStack_1a0;
  longlong lStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  uint uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_140;
  undefined4 uStack_128;
  undefined1 uStack_110;
  undefined1 uStack_100;
  undefined4 uStack_fc;
  undefined2 uStack_e0;
  undefined8 *puStack_d8;
  undefined4 *puStack_d0;
  longlong lStack_c8;
  undefined4 *puStack_c0;
  longlong lStack_b8;
  longlong lStack_b0;
  longlong lStack_a8;
  longlong lStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  
  lVar17 = *param_6;
  pbVar24 = (byte *)param_6[4];
  puStack_218 = (undefined4 *)param_6[6];
  uVar30 = *(undefined4 *)((longlong)param_6 + 0x3c);
  uStack_190 = param_7[4];
  lStack_1c8 = param_10[8];
  lStack_1c0 = param_10[9];
  puStack_1b8 = (undefined4 *)param_10[10];
  uStack_1b0 = param_10[0xb];
  lStack_b8 = param_10[0xc];
  lStack_b0 = param_10[0xd];
  lStack_a8 = param_10[0xe];
  lStack_a0 = param_10[0xf];
  uStack_208 = *param_11;
  lStack_1e8 = param_11[4];
  puStack_c0 = (undefined4 *)param_11[6];
  uStack_98 = *(undefined4 *)(param_11 + 8);
  uStack_94 = *(undefined4 *)((longlong)param_11 + 0x44);
  uStack_90 = *(undefined4 *)(param_11 + 9);
  uStack_8c = *(undefined4 *)((longlong)param_11 + 0x4c);
  uStack_88 = *(undefined4 *)(param_11 + 10);
  uStack_84 = *(undefined4 *)((longlong)param_11 + 0x54);
  uStack_80 = *(undefined4 *)(param_11 + 0xb);
  uStack_7c = *(undefined4 *)((longlong)param_11 + 0x5c);
  uStack_1dc = *(undefined4 *)((longlong)param_11 + 0x3c);
  lStack_210 = param_10[4];
  puStack_1f0 = (undefined4 *)param_10[6];
  uStack_1d8 = *(undefined4 *)((longlong)param_10 + 0x3c);
  lStack_c8 = param_10[0x10];
  puStack_d0 = (undefined4 *)param_10[0x12];
  uStack_1e0 = *(undefined4 *)((longlong)param_10 + 0x9c);
  lVar16 = param_10[0x14];
  puVar23 = (undefined4 *)param_10[0x16];
  uVar31 = *(undefined4 *)((longlong)param_10 + 0xbc);
  if ((*(char *)*param_1 != '\x01') || (((char *)*param_1)[1] != '\x01')) {
    *puStack_218 = uVar30;
    pbVar24[0] = 0;
    pbVar24[1] = 0;
    pbVar24[2] = 0;
    pbVar24[3] = 0;
    return;
  }
  uStack_188._0_4_ = 0;
  uStack_188._4_4_ = 0;
  uStack_180 = 8;
  uStack_178 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_110 = 0;
  uStack_100 = 5;
  uStack_fc = 0x7f7fffff;
  uStack_e0 = 0x100;
  puVar15 = &UNK_14305de57;
  plStack_1a0 = param_2;
  puStack_d8 = param_4;
  lStack_198 = pdb_140900b80(*param_7,&UNK_14305de57,0x12,&uStack_188);
  puStack_1a8 = puVar15;
  if (_DAT_142f3e554 <= *(float *)(lVar17 + 0x44)) {
    uStack_188._0_4_ = *(undefined4 *)(pbVar24 + 0x10);
    uStack_188._4_4_ = *(undefined4 *)(pbVar24 + 0x14);
    uStack_180 = *(undefined8 *)(pbVar24 + 0x18);
    *(undefined4 *)param_12[2] = *(undefined4 *)((longlong)param_12 + 0x1c);
    lVar12 = *param_12;
    lVar13 = *(longlong *)(lVar12 + 0x30);
    uVar34 = *(undefined8 *)(lVar12 + 0x40);
    lStack_200 = lVar17;
    pbStack_1f8 = pbVar24;
    if (lVar13 == *(longlong *)(lVar12 + 0x20)) {
      pdb_142d7ede0(lVar12 + 0x20);
    }
    lVar17 = *(longlong *)(lVar12 + 0x28);
    *(undefined8 *)(lVar17 + lVar13 * 0x28) = uVar34;
    *(undefined4 *)(lVar17 + (lVar13 * 10 + 2) * 4) = 0;
    puVar6 = (undefined4 *)(lVar17 + (lVar13 * 10 + 3) * 4);
    *puVar6 = (undefined4)uStack_188;
    puVar6[1] = uStack_188._4_4_;
    puVar6[2] = (undefined4)uStack_180;
    puVar6[3] = uStack_180._4_4_;
    *(longlong *)(lVar12 + 0x30) = lVar13 + 1;
    *(longlong *)(lVar12 + 0x40) = *(longlong *)(lVar12 + 0x40) + 1;
    lVar17 = lStack_200;
    pbVar24 = pbStack_1f8;
  }
  lVar12 = lStack_198;
  puVar15 = puStack_1a8;
  if (*(char *)(lStack_198 + 0x18) == '\x02') {
    if ((*(undefined **)(lStack_198 + 0x38) == puStack_1a8) &&
       (*(char *)(lStack_198 + 0x19) == '\x03')) {
      uVar5 = *(undefined4 *)((longlong)param_8 + 0x1c);
      puVar6 = (undefined4 *)param_8[2];
      *puVar6 = uVar5;
      puVar7 = (undefined4 *)*param_8;
      *(undefined1 *)(puVar7 + 3) = 0;
      *(undefined8 *)(puVar7 + 1) = *(undefined8 *)*param_3;
      *puVar6 = uVar5;
      *puVar7 = 0;
      *puVar23 = uVar31;
      lVar13 = *(longlong *)(lVar16 + 0x30);
      uVar34 = *(undefined8 *)(lVar16 + 0x40);
      lStack_200 = lVar17;
      pbStack_1f8 = pbVar24;
      if (lVar13 == *(longlong *)(lVar16 + 0x20)) {
        pdb_142d7e8a0(lVar16 + 0x20);
      }
      *(undefined8 *)(*(longlong *)(lVar16 + 0x28) + lVar13 * 8) = uVar34;
      *(longlong *)(lVar16 + 0x30) = lVar13 + 1;
      *(longlong *)(lVar16 + 0x40) = *(longlong *)(lVar16 + 0x40) + 1;
      lVar17 = lStack_200;
      pbVar24 = pbStack_1f8;
      if (*(char *)(lVar12 + 0x18) != '\x02') goto LAB_140b8d13e;
    }
    if ((*(undefined **)(lVar12 + 0x38) == puVar15) && (*(char *)(lVar12 + 0x19) == '\x04')) {
      fVar29 = (float)*(undefined8 *)(*plStack_1a0 + 0x150);
      fVar32 = (float)((ulonglong)*(undefined8 *)(*plStack_1a0 + 0x150) >> 0x20);
      uVar5 = *(undefined4 *)((longlong)param_8 + 0x1c);
      puVar6 = (undefined4 *)param_8[2];
      *puVar6 = uVar5;
      pfVar8 = (float *)*param_8;
      fVar29 = SQRT(fVar32 * fVar32 + fVar29 * fVar29) + *pfVar8;
      *pfVar8 = fVar29;
      if (_DAT_142e37adc < fVar29) {
        *puVar6 = uVar5;
        *(undefined1 *)(pfVar8 + 3) = 1;
      }
      *puVar23 = uVar31;
      lVar13 = *(longlong *)(lVar16 + 0x30);
      uVar34 = *(undefined8 *)(lVar16 + 0x40);
      if (lVar13 == *(longlong *)(lVar16 + 0x20)) {
        pdb_142d7e8a0(lVar16 + 0x20);
      }
      *(undefined8 *)(*(longlong *)(lVar16 + 0x28) + lVar13 * 8) = uVar34;
      *(longlong *)(lVar16 + 0x30) = lVar13 + 1;
      *(longlong *)(lVar16 + 0x40) = *(longlong *)(lVar16 + 0x40) + 1;
      if (*(char *)(lVar12 + 0x18) != '\x02') goto LAB_140b8d13e;
    }
    lVar16 = lStack_c8;
    if ((*(undefined **)(lVar12 + 0x38) == puVar15) && (*(byte *)(lVar12 + 0x19) < 2)) {
      uVar34 = *(undefined8 *)(*param_8 + 4);
      *puStack_d0 = uStack_1e0;
      lVar13 = *(longlong *)(lStack_c8 + 0x30);
      uVar14 = *(undefined8 *)(lStack_c8 + 0x40);
      if (lVar13 == *(longlong *)(lStack_c8 + 0x20)) {
        pdb_142d7e830(lStack_c8 + 0x20);
      }
      lVar9 = *(longlong *)(lVar16 + 0x28);
      *(undefined8 *)(lVar9 + lVar13 * 0x18) = uVar14;
      *(undefined4 *)(lVar9 + (lVar13 * 6 + 2) * 4) = 2;
      *(undefined8 *)(lVar9 + (lVar13 * 6 + 3) * 4) = uVar34;
      *(longlong *)(lVar16 + 0x30) = lVar13 + 1;
      *(longlong *)(lVar16 + 0x40) = *(longlong *)(lVar16 + 0x40) + 1;
      if (*(char *)(lVar12 + 0x18) != '\x02') goto LAB_140b8d13e;
    }
    uVar34 = uStack_208;
    puVar23 = puStack_218;
    if (*(undefined **)(lVar12 + 0x38) != puVar15) goto LAB_140b8d13e;
    if (*(byte *)(lVar12 + 0x19) < 2) {
      uVar35 = 0;
      bVar25 = true;
      if (*(char *)(*param_8 + 0xc) != '\x01') {
        uStack_180 = *(undefined8 *)(pbVar24 + 0x14);
        uStack_178 = CONCAT44(uStack_178._4_4_,*(undefined4 *)(pbVar24 + 0x1c));
        uStack_188 = (ulonglong)*(uint *)(pbVar24 + 0x10) << 0x20;
        uVar14 = uStack_208;
        cVar10 = pdb_140b404c0(uStack_208,&uStack_188);
        puVar23 = puStack_218;
        if (cVar10 == '\0') {
          pdb_140314c70(&uStack_98,&UNK_14305de70);
          bVar25 = false;
        }
        else {
          uStack_160 = *(undefined4 *)(lVar17 + 0x48);
          bVar27 = *(char *)(lVar17 + 0x34) != '\x02';
          if (bVar27) {
            uVar14 = *(undefined8 *)(lVar17 + 0x28);
          }
          uStack_188 = (ulonglong)bVar27;
          uStack_15c = *(undefined4 *)(lVar17 + 0x44);
          uStack_178._0_4_ = *(undefined4 *)(lVar17 + 8);
          uStack_178._4_4_ = *(undefined4 *)(lVar17 + 0xc);
          uStack_170 = *(uint *)(pbVar24 + 0x10);
          uStack_16c = *(undefined4 *)(pbVar24 + 0x14);
          uStack_168 = *(undefined4 *)(pbVar24 + 0x18);
          uStack_164 = *(undefined4 *)(pbVar24 + 0x1c);
          uStack_180 = uVar14;
          pdb_141b753a0(&lStack_b8,&uStack_188,&UNK_14305de88);
          uStack_228 = *(undefined4 *)(lVar17 + 0x40);
          uStack_230 = (undefined4)*(undefined8 *)(lVar17 + 0x38);
          uStack_22c = (undefined4)((ulonglong)*(undefined8 *)(lVar17 + 0x38) >> 0x20);
          uStack_180 = *(undefined8 *)(pbVar24 + 0x14);
          uStack_178 = CONCAT44(uStack_178._4_4_,*(undefined4 *)(pbVar24 + 0x1c));
          uStack_188 = (ulonglong)*(uint *)(pbVar24 + 0x10) << 0x20;
          uStack_224 = pdb_140abde60(&uStack_188);
          uStack_238 = CONCAT31(uStack_238._1_3_,7);
          pdb_1414af090(&lStack_1c8,&uStack_238,&UNK_14305dea0);
        }
        goto LAB_140b8d1bd;
      }
    }
    else {
      if (*(byte *)(lVar12 + 0x19) != 4) goto LAB_140b8d13e;
      lVar16 = *param_8;
      uVar35 = 0;
      bVar18 = 1;
      if (*(char *)(lVar16 + 0xc) != '\0') {
        pfVar8 = (float *)*puStack_d8;
        fVar29 = (*(float *)(lVar17 + 0x3c) - pfVar8[1]) / pfVar8[4];
        fVar32 = (float)*(undefined8 *)(pbVar24 + 0x10) -
                 (*pfVar8 + fVar29 * (float)((ulonglong)*(undefined8 *)(pfVar8 + 2) >> 0x20));
        fVar29 = (float)((ulonglong)*(undefined8 *)(pbVar24 + 0x10) >> 0x20) -
                 ((float)*(undefined8 *)(pfVar8 + 2) + fVar29 * pfVar8[5]);
        fVar32 = SQRT(fVar29 * fVar29 + fVar32 * fVar32);
        fVar29 = _DAT_14300798c;
        if (_DAT_14300798c <= fVar32) {
          fVar29 = fVar32;
        }
        fVar32 = _DAT_142f57bc8;
        if (fVar29 <= _DAT_142f57bc8) {
          fVar32 = fVar29;
        }
        fVar29 = *(float *)(pbVar24 + 0x18);
        *puStack_218 = uVar30;
        *(float *)(pbVar24 + 0x18) = fVar32;
        uVar35 = (uint)(fVar32 - fVar29) & _DAT_142e377e0;
        bVar18 = *(byte *)(lVar16 + 0xc) ^ 1;
      }
      uStack_238 = *(undefined4 *)(pbVar24 + 0x10);
      uStack_234 = *(undefined4 *)(pbVar24 + 0x14);
      uStack_230 = *(undefined4 *)(pbVar24 + 0x18);
      uStack_22c = *(undefined4 *)(pbVar24 + 0x1c);
      pdb_140b8c620(&uStack_178,&uStack_238,bVar18);
      uStack_180 = CONCAT71(uStack_180._1_7_,2);
      pdb_141a88350(uStack_190,&uStack_188);
    }
  }
  else {
LAB_140b8d13e:
    puVar23 = puStack_218;
    uVar31 = *(undefined4 *)(lVar17 + 0x38);
    uVar5 = *(undefined4 *)(lVar17 + 0x40);
    *puStack_218 = uVar30;
    *(undefined4 *)(pbVar24 + 0x10) = uVar31;
    *(undefined4 *)(pbVar24 + 0x14) = uVar5;
    uVar31 = *(undefined4 *)(lVar17 + 0x3c);
    *puStack_218 = uVar30;
    *(undefined4 *)(pbVar24 + 0x20) = uVar31;
    uStack_238 = *(undefined4 *)(pbVar24 + 0x10);
    uStack_234 = *(undefined4 *)(pbVar24 + 0x14);
    uStack_230 = *(undefined4 *)(pbVar24 + 0x18);
    uStack_22c = *(undefined4 *)(pbVar24 + 0x1c);
    pdb_140b8c620(&uStack_178,&uStack_238,1);
    uStack_180 = CONCAT71(uStack_180._1_7_,2);
    pdb_141a88350(uStack_190,&uStack_188);
    uVar35 = 0;
  }
  bVar25 = true;
  uVar34 = uStack_208;
LAB_140b8d1bd:
  uStack_180 = *(undefined8 *)(pbVar24 + 0x14);
  uStack_178 = CONCAT44(uStack_178._4_4_,*(undefined4 *)(pbVar24 + 0x1c));
  uStack_188 = (ulonglong)*(uint *)(pbVar24 + 0x10) << 0x20;
  cVar10 = pdb_140b404c0(uVar34,&uStack_188);
  if (cVar10 == '\0') {
    *puStack_c0 = uStack_1dc;
    lVar16 = *(longlong *)(lStack_1e8 + 0x30);
    uVar34 = *(undefined8 *)(lStack_1e8 + 0x40);
    if (lVar16 == *(longlong *)(lStack_1e8 + 0x20)) {
      pdb_142d7e8a0(lStack_1e8 + 0x20);
    }
    *(undefined8 *)(*(longlong *)(lStack_1e8 + 0x28) + lVar16 * 8) = uVar34;
    *(longlong *)(lStack_1e8 + 0x30) = lVar16 + 1;
    *(longlong *)(lStack_1e8 + 0x40) = *(longlong *)(lStack_1e8 + 0x40) + 1;
  }
  if (bVar25) {
    uVar34 = *(undefined8 *)(pbVar24 + 0x10);
    uVar31 = *(undefined4 *)(pbVar24 + 0x1c);
    fVar29 = *(float *)(pbVar24 + 0x18) + _DAT_14300b140;
    cVar11 = (char)*(undefined4 *)(lVar17 + 0x34);
    cVar10 = '\0';
    if (cVar11 != '\x02') {
      cVar10 = cVar11;
    }
    *(undefined4 *)param_10[2] = *(undefined4 *)((longlong)param_10 + 0x1c);
    lVar16 = *param_10;
    lVar12 = *(longlong *)(lVar16 + 0x30);
    uVar14 = *(undefined8 *)(lVar16 + 0x40);
    if (lVar12 == *(longlong *)(lVar16 + 0x20)) {
      pdb_142d7ede0(lVar16 + 0x20);
    }
    lVar13 = *(longlong *)(lVar16 + 0x28);
    *(undefined4 *)(lVar13 + lVar12 * 0x28) = 0;
    *(undefined8 *)(lVar13 + 4 + lVar12 * 0x28) = uVar34;
    *(float *)(lVar13 + 0xc + lVar12 * 0x28) = fVar29;
    *(undefined4 *)(lVar13 + 0x10 + lVar12 * 0x28) = uVar31;
    *(char *)(lVar13 + 0x1c + lVar12 * 0x28) = cVar10;
    *(undefined8 *)(lVar13 + 0x20 + lVar12 * 0x28) = uVar14;
    *(longlong *)(lVar16 + 0x30) = lVar12 + 1;
    *(longlong *)(lVar16 + 0x40) = *(longlong *)(lVar16 + 0x40) + 1;
    uVar5 = *(undefined4 *)(lVar17 + 0x44);
    *puStack_1f0 = uStack_1d8;
    lVar16 = *(longlong *)(lStack_210 + 0x30);
    uVar14 = *(undefined8 *)(lStack_210 + 0x40);
    if (lVar16 == *(longlong *)(lStack_210 + 0x20)) {
      pdb_142d7e7c0(lStack_210 + 0x20);
    }
    lVar12 = *(longlong *)(lStack_210 + 0x28);
    lVar13 = lVar16 * 0x30;
    *(undefined4 *)(lVar12 + lVar13) = 0;
    *(undefined8 *)(lVar12 + 4 + lVar13) = uVar34;
    *(float *)(lVar12 + 0xc + lVar13) = fVar29;
    *(undefined4 *)(lVar12 + 0x10 + lVar13) = uVar31;
    *(ulonglong *)(lVar12 + 0x1c + lVar13) = CONCAT44(_UNK_142f69444,uVar5);
    *(undefined1 *)(lVar12 + 0x24 + lVar13) = 0;
    *(undefined8 *)(lVar12 + 0x28 + lVar13) = uVar14;
    *(longlong *)(lStack_210 + 0x30) = lVar16 + 1;
    *(longlong *)(lStack_210 + 0x40) = *(longlong *)(lStack_210 + 0x40) + 1;
    puVar23 = puStack_218;
  }
  lVar16 = param_9[1];
  uVar22 = *(ulonglong *)*param_9;
  uVar19 = 0;
  uVar21 = uVar22 - *(ulonglong *)(lVar16 + 0x18);
  if (uVar22 < *(ulonglong *)(lVar16 + 0x18)) {
    uVar21 = uVar19;
  }
  uVar20 = uVar22 - *(ulonglong *)(lVar16 + 0x38);
  if (uVar22 < *(ulonglong *)(lVar16 + 0x38)) {
    uVar20 = uVar19;
  }
  bVar25 = *(ulonglong *)(lVar16 + 0x30) < uVar20;
  uVar20 = *(ulonglong *)(lVar16 + 0x30) - uVar20;
  bVar27 = uVar20 == 0;
  if (bVar25) {
    uVar20 = uVar19;
  }
  bVar26 = *(ulonglong *)(lVar16 + 0x10) < uVar21;
  uVar21 = *(ulonglong *)(lVar16 + 0x10) - uVar21;
  bVar28 = uVar21 == 0;
  if (bVar26) {
    uVar21 = uVar19;
  }
  puVar1 = (uint *)(pbVar24 + 0x10);
  uVar22 = uVar21 + uVar20;
  if (!bVar26 && !bVar28 || !bVar25 && !bVar27) {
    uVar22 = uVar19;
  }
  *(ulonglong *)*param_9 = *(longlong *)(lVar16 + 0x40) - uVar22;
  if ((*(char *)(lStack_198 + 0x18) == '\x02') &&
     (*(undefined **)(lStack_198 + 0x38) == puStack_1a8)) {
    bVar18 = *(byte *)(lStack_198 + 0x19);
    if (bVar18 < 2) {
      return;
    }
    if (bVar18 != 2) {
      if (bVar18 == 3) {
        uStack_228._0_3_ = (undefined3)((uint)*(undefined4 *)(lVar17 + 0x40) >> 8);
        uVar34 = *(undefined8 *)(lVar17 + 0x38);
        uStack_234._3_1_ = (undefined1)uVar34;
        uStack_230 = (undefined4)((ulonglong)uVar34 >> 8);
        uStack_22c._0_3_ = (undefined3)((ulonglong)uVar34 >> 0x28);
        uStack_22c = CONCAT13((char)*(undefined4 *)(lVar17 + 0x40),(undefined3)uStack_22c);
        uStack_180 = *(undefined8 *)(pbVar24 + 0x14);
        uStack_178 = CONCAT44(uStack_178._4_4_,*(undefined4 *)(pbVar24 + 0x1c));
        uStack_188 = (ulonglong)*puVar1 << 0x20;
        uVar34 = pdb_140defad0((longlong)&uStack_188 + 4);
        uVar30 = pdb_140de8220(_DAT_14304ab20,_DAT_14304ab24,uVar34);
        lVar16 = lStack_1c8;
        *puStack_1b8 = uStack_1b0._4_4_;
        lVar17 = *(longlong *)(lStack_1c8 + 0x30);
        uVar34 = *(undefined8 *)(lStack_1c8 + 0x40);
        if (lVar17 == *(longlong *)(lStack_1c8 + 0x20)) {
          pdb_142d7e6e0(lStack_1c8 + 0x20);
        }
        lVar12 = *(longlong *)(lVar16 + 0x28);
        lVar13 = lVar17 * 0x20;
        *(undefined1 *)(lVar12 + lVar13) = 2;
        puVar2 = (undefined8 *)(lVar12 + 1 + lVar13);
        *puVar2 = CONCAT44(uStack_234,uStack_238);
        puVar2[1] = CONCAT44(uStack_22c,uStack_230);
        uStack_230 = CONCAT31((undefined3)uStack_228,uStack_22c._3_1_);
      }
      else {
        if ((bVar26 || bVar28) && (bVar25 || bVar27)) {
          return;
        }
        uStack_230 = *(undefined4 *)(lVar17 + 0x40);
        uStack_238 = (undefined4)*(undefined8 *)(lVar17 + 0x38);
        uStack_234 = (undefined4)((ulonglong)*(undefined8 *)(lVar17 + 0x38) >> 0x20);
        uStack_180 = *(undefined8 *)(pbVar24 + 0x14);
        uStack_178 = CONCAT44(uStack_178._4_4_,*(undefined4 *)(pbVar24 + 0x1c));
        uStack_188 = (ulonglong)*puVar1 << 0x20;
        uVar34 = pdb_140defad0((longlong)&uStack_188 + 4);
        uVar30 = pdb_140de8220(_DAT_14304ab20,_DAT_14304ab24,uVar34);
        lVar16 = lStack_1c8;
        *puStack_1b8 = uStack_1b0._4_4_;
        lVar17 = *(longlong *)(lStack_1c8 + 0x30);
        uVar34 = *(undefined8 *)(lStack_1c8 + 0x40);
        if (lVar17 == *(longlong *)(lStack_1c8 + 0x20)) {
          pdb_142d7e6e0(lStack_1c8 + 0x20);
        }
        lVar12 = *(longlong *)(lVar16 + 0x28);
        lVar13 = lVar17 * 0x20;
        *(undefined1 *)(lVar12 + lVar13) = 0;
        *(uint *)(lVar12 + 4 + lVar13) = uVar35;
        *(ulonglong *)(lVar12 + 8 + lVar13) = CONCAT44(uStack_234,uStack_238);
      }
      *(undefined4 *)(lVar12 + 0x10 + lVar13) = uStack_230;
      *(undefined4 *)(lVar12 + 0x14 + lVar13) = uVar30;
      *(undefined8 *)(lVar12 + 0x18 + lVar13) = uVar34;
      *(longlong *)(lVar16 + 0x30) = lVar17 + 1;
      *(longlong *)(lVar16 + 0x40) = *(longlong *)(lVar16 + 0x40) + 1;
      return;
    }
  }
  if (!bVar26 && !bVar28 || !bVar25 && !bVar27) {
    pdb_140df4540(&fStack_1d4,puVar1,*(undefined4 *)(lVar17 + 0x44));
    fVar29 = fStack_1d4;
    fVar32 = fStack_1d0;
    fVar33 = fStack_1cc;
    if ((*pbVar24 & 1) != 0) {
      fVar29 = *(float *)(pbVar24 + 4);
      fVar32 = *(float *)(pbVar24 + 8);
      fVar33 = *(float *)(pbVar24 + 0xc);
    }
    fVar29 = fStack_1d4 - fVar29;
    fVar32 = fStack_1d0 - fVar32;
    fVar33 = fStack_1cc - fVar33;
    fVar3 = *(float *)(*param_5 + 0x28);
    fVar4 = *(float *)(lVar17 + 0x44);
    uStack_238 = (undefined4)*(undefined8 *)(lVar17 + 0x38);
    uStack_234 = (undefined4)((ulonglong)*(undefined8 *)(lVar17 + 0x38) >> 0x20);
    uStack_230 = *(undefined4 *)(lVar17 + 0x40);
    uStack_180 = *(undefined8 *)(pbVar24 + 0x14);
    uStack_178 = CONCAT44(uStack_178._4_4_,*(undefined4 *)(pbVar24 + 0x1c));
    uStack_188 = (ulonglong)*puVar1 << 0x20;
    uVar34 = pdb_140defad0((longlong)&uStack_188 + 4);
    uVar31 = pdb_140de8220(_DAT_14304ab20,_DAT_14304ab24,uVar34);
    lVar16 = lStack_1c8;
    *puStack_1b8 = uStack_1b0._4_4_;
    lVar17 = *(longlong *)(lStack_1c8 + 0x30);
    uVar34 = *(undefined8 *)(lStack_1c8 + 0x40);
    if (lVar17 == *(longlong *)(lStack_1c8 + 0x20)) {
      pdb_142d7e6e0(lStack_1c8 + 0x20);
    }
    lVar12 = *(longlong *)(lVar16 + 0x28);
    lVar13 = lVar17 * 0x20;
    *(undefined1 *)(lVar12 + lVar13) = 3;
    *(byte *)(lVar12 + 1 + lVar13) = -(fVar4 == 0.0) & 1;
    *(float *)(lVar12 + 4 + lVar13) =
         SQRT(fVar33 * fVar33 + fVar32 * fVar32 + fVar29 * fVar29) / fVar3;
    *(ulonglong *)(lVar12 + 8 + lVar13) = CONCAT44(uStack_234,uStack_238);
    *(undefined4 *)(lVar12 + 0x10 + lVar13) = uStack_230;
    *(undefined4 *)(lVar12 + 0x14 + lVar13) = uVar31;
    *(undefined8 *)(lVar12 + 0x18 + lVar13) = uVar34;
    *(longlong *)(lVar16 + 0x30) = lVar17 + 1;
    *(longlong *)(lVar16 + 0x40) = *(longlong *)(lVar16 + 0x40) + 1;
    *puVar23 = uVar30;
    pbVar24[0] = 1;
    pbVar24[1] = 0;
    pbVar24[2] = 0;
    pbVar24[3] = 0;
    *(float *)(pbVar24 + 0xc) = fStack_1cc;
    *(ulonglong *)(pbVar24 + 4) = CONCAT44(fStack_1d0,fStack_1d4);
  }
  return;
}

