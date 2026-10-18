// VA 0x140a85b60, PDB extent 4151 bytes
// country_core::resources::plant_sample_raster::PlantSampleRaster::accumulate_stroke
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/plant_sample_raster.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::plant_sample_raster::PlantSampleRaster::accumulate_stroke
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/plant_sample_raster.rs
   Extent: 4151 */

void pdb_140a85b60(longlong param_1,ulonglong *param_2,ulonglong param_3,float param_4,byte param_5,
                  byte param_6)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  short sVar3;
  longlong lVar4;
  code *pcVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  byte bVar13;
  undefined2 uVar14;
  uint uVar15;
  uint uVar16;
  longlong lVar17;
  ulonglong uVar18;
  longlong *plVar19;
  byte *pbVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  int iVar24;
  ulonglong uVar25;
  ushort uVar26;
  ulonglong uVar27;
  int iVar28;
  undefined *puVar29;
  undefined *puVar30;
  byte *pbVar32;
  byte *pbVar33;
  ulonglong uVar34;
  undefined *puVar35;
  uint uVar36;
  undefined *unaff_R15;
  bool bVar37;
  undefined8 uVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  float fVar41;
  float fVar42;
  undefined4 uStack_2e0;
  undefined8 uStack_2dc;
  undefined4 uStack_2c4;
  undefined8 uStack_2c0;
  ulonglong auStack_2a8 [2];
  float fStack_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined8 uStack_288;
  longlong *plStack_280;
  undefined4 *puStack_278;
  undefined8 uStack_270;
  undefined4 uStack_268;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined4 uStack_238;
  undefined2 uStack_21c;
  undefined1 uStack_21a;
  longlong lStack_218;
  byte *pbStack_210;
  undefined8 uStack_208;
  longlong lStack_200;
  byte *pbStack_1f8;
  undefined8 uStack_1f0;
  longlong lStack_1e8;
  byte *pbStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  ulonglong uStack_1b0;
  byte *pbStack_1a8;
  ulonglong uStack_1a0;
  uint uStack_198;
  uint uStack_194;
  uint uStack_190;
  int iStack_18c;
  ulonglong uStack_178;
  longlong lStack_170;
  longlong lStack_168;
  longlong lStack_160;
  ulonglong uStack_158;
  ulonglong uStack_150;
  ulonglong *puStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  ulonglong uStack_128;
  ulonglong uStack_120;
  int iStack_114;
  uint uStack_110;
  uint uStack_10c;
  uint uStack_108;
  int iStack_104;
  ulonglong uStack_100;
  ulonglong uStack_f8;
  longlong lStack_f0;
  ulonglong uStack_e8;
  byte *pbStack_e0;
  byte *pbStack_d8;
  longlong *plStack_d0;
  bool bStack_c5;
  bool bStack_c4;
  char cStack_c3;
  byte bStack_c2;
  byte bStack_c1;
  undefined8 uStack_c0;
  ulonglong uVar31;
  
  uStack_c0 = 0xfffffffffffffffe;
  uStack_120 = param_3;
  cStack_c3 = pdb_140e94b40();
  if (cStack_c3 == '\0') {
    uStack_1c0 = 0;
    uVar26 = *(ushort *)(param_1 + 0x280);
    if (uVar26 != 0) goto LAB_140a85de8;
    goto LAB_140a85d9a;
  }
  puVar35 = &UNK_143043790;
  uVar27 = 0x52;
  uVar25 = 0x52;
  lVar17 = pdb_140a87770(&UNK_143043790);
  if (lVar17 == 1) {
    if (0x52 < uVar25) {
LAB_140a867f5:
      pdb_142dc8070(&UNK_143043790,0x52,0);
LAB_140a86815:
      pdb_142dc8070(&UNK_143043790,0x52);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    puVar35 = &UNK_143043790;
    uVar18 = pdb_140a87770(&UNK_143043790);
    if ((uVar18 & 1) != 0) {
      if (0x52 < uVar25 + 2) goto LAB_140a86815;
      uVar27 = 0x50 - uVar25;
      puVar35 = &UNK_143043792 + uVar25;
    }
  }
  puVar29 = &UNK_143043490;
  unaff_R15 = &UNK_143043458;
  do {
    bVar22 = puVar29[-1];
    uVar15 = (uint)(char)bVar22;
    if ((char)bVar22 < '\0') {
      bVar23 = puVar29[-2];
      if ((char)bVar23 < -0x40) {
        bVar13 = puVar29[-3];
        if ((char)bVar13 < -0x40) {
          pbVar32 = puVar29 + -4;
          puVar29 = puVar29 + -4;
          uVar15 = bVar13 & 0x3f | (*pbVar32 & 7) << 6;
        }
        else {
          puVar29 = puVar29 + -3;
          uVar15 = bVar13 & 0xf;
        }
        uVar15 = bVar23 & 0x3f | uVar15 << 6;
      }
      else {
        puVar29 = puVar29 + -2;
        uVar15 = bVar23 & 0x1f;
      }
      uVar15 = (uint)(bVar22 & 0x3f) | uVar15 << 6;
      if (uVar15 != 0x5c) goto LAB_140a85cc4;
LAB_140a85cf5:
      puVar30 = puVar29 + -0x143043457;
      if ((undefined *)0x38 < puVar30) {
        pdb_142dc8070(&UNK_143043458,0x38,puVar30,0x38,&UNK_143043898);
        goto LAB_140a867f5;
      }
      uVar25 = 0x38 - (longlong)puVar30;
      unaff_R15 = puVar29 + 1;
      goto LAB_140a85d17;
    }
    puVar29 = puVar29 + -1;
    if (uVar15 == 0x5c) goto LAB_140a85cf5;
LAB_140a85cc4:
    if (uVar15 == 0x2f) goto LAB_140a85cf5;
  } while (puVar29 != &UNK_143043458);
  uVar25 = 0x38;
LAB_140a85d17:
  plVar19 = (longlong *)pdb_140e97000();
  if ((char)plVar19[0xd] != '\x01') goto LAB_140a8672e;
LAB_140a85d26:
  if (*plVar19 == 0) {
    *plVar19 = -1;
    plStack_d0 = plVar19;
    uStack_1b8 = pdb_140e94f10(plVar19 + 1,puVar35,uVar27,unaff_R15,uVar25,1,0);
    *plStack_d0 = *plStack_d0 + 1;
    uStack_1c0 = 1;
    uVar26 = *(ushort *)(param_1 + 0x280);
    uStack_140 = uStack_1b8;
    if (uVar26 == 0) {
LAB_140a85d9a:
      *(undefined8 *)(param_1 + 0x40) = 0;
      if (*(ulonglong *)(param_1 + 0x30) < 0x40000) {
        pdb_142d7f1b0(param_1 + 0x30,0,0x40000,2,2);
        lVar17 = *(longlong *)(param_1 + 0x40);
        uVar26 = *(ushort *)(param_1 + 0x280);
      }
      else {
        uVar26 = 0;
        lVar17 = 0;
      }
      lVar4 = *(longlong *)(param_1 + 0x38);
      pub_142e32780(lVar4 + lVar17 * 2,0xff);
      *(undefined2 *)(lVar4 + 0x7fffe + lVar17 * 2) = 0xffff;
      *(longlong *)(param_1 + 0x40) = lVar17 + 0x40000;
    }
LAB_140a85de8:
    fVar12 = _DAT_143035f20;
    fVar11 = _UNK_142e61224;
    fVar10 = _DAT_142e61220;
    auVar9 = _DAT_142e61200;
    uVar8 = _DAT_142e37adc;
    fVar7 = _UNK_142e36f64;
    fVar6 = _DAT_142e36f60;
    param_4 = (param_4 / _DAT_143006a28) * _DAT_142e61210;
    param_4 = param_4 + param_4;
    lStack_218 = 0;
    pbStack_210 = (byte *)0x4;
    uStack_208 = 0;
    lStack_200 = 0;
    pbStack_1f8 = (byte *)0x4;
    uStack_1f0 = 0;
    lStack_1e8 = 0;
    pbStack_1e0 = (byte *)0x4;
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    uStack_1c8 = 0;
    uVar18 = (ulonglong)uVar26;
    uStack_e8 = 0;
    uVar25 = uStack_120;
    lStack_f0 = param_1;
    do {
      puVar35 = (undefined *)(ulonglong)param_5;
      uVar27 = (ulonglong)param_6;
      if (uVar18 == 0) {
        if (uVar25 < 2) goto LAB_140a865ae;
      }
      else {
        bVar37 = uVar25 < uVar18;
        uVar25 = uVar25 - uVar18;
        if ((bVar37) || (uVar25 < 2)) goto LAB_140a865ae;
        param_2 = param_2 + uVar18;
        uStack_e8 = uStack_e8 + uVar18;
      }
      uVar18 = *param_2;
      auVar40._8_8_ = 0;
      auVar40._0_8_ = uVar18;
      uVar2 = param_2[1];
      auVar39._8_8_ = 0;
      auVar39._0_8_ = uVar2;
      param_2 = param_2 + 1;
      uVar25 = uVar25 - 1;
      uVar27 = uStack_e8 + 1;
      uVar34 = uStack_e8;
      if (0xfffd < uStack_e8) {
        uVar34 = 0xfffe;
      }
      fVar41 = (float)uVar18 - (float)uVar2;
      fVar42 = (float)(uVar18 >> 0x20) - (float)(uVar2 >> 0x20);
      uVar18 = 0;
      uStack_e8 = uVar27;
      if (fVar12 <= fVar42 * fVar42 + fVar41 * fVar41) {
        auVar40 = divps(auVar40,auVar9);
        auVar39 = divps(auVar39,auVar9);
        uStack_2e0 = 0;
        uStack_2dc = CONCAT44((auVar40._4_4_ + fVar7) * fVar11,(auVar40._0_4_ + fVar6) * fVar10);
        uStack_2c4 = 1;
        uStack_2c0 = CONCAT44((auVar39._4_4_ + fVar7) * fVar11,(auVar39._0_4_ + fVar6) * fVar10);
        puStack_278 = &uStack_2e0;
        uStack_270 = 2;
        uStack_21c = 0;
        uStack_21a = 0;
        uStack_288 = 0;
        uStack_248 = 0;
        uStack_240 = 0;
        uStack_258 = 0;
        uStack_250 = 0;
        uStack_238 = 0;
        plStack_280 = &lStack_218;
        uStack_268 = 0;
        auStack_2a8[0] = 4;
        auStack_2a8[1] = 0;
        uStack_294 = uVar8;
        uStack_290 = 0;
        uStack_28c = 0x1020202;
        fStack_298 = param_4;
        puStack_148 = param_2;
        pdb_141165570(&uStack_1b0,auStack_2a8);
        uStack_128 = uStack_1b0;
        uStack_178 = (ulonglong)uStack_198;
        uStack_150 = (ulonglong)uStack_194;
        plStack_d0 = (longlong *)(ulonglong)uStack_190;
        uStack_10c = (int)uVar34 + 0x85ebca6b;
        puStack_138 = *(undefined **)(param_1 + 0x40);
        lStack_168 = *(longlong *)(param_1 + 0x38);
        lStack_160 = *(longlong *)(param_1 + 0x20);
        puStack_130 = *(undefined **)(param_1 + 0x28);
        pbStack_e0 = pbStack_1a8;
        uStack_f8 = uStack_1a0;
        iStack_104 = iStack_18c;
        uVar27 = uStack_150;
        uVar18 = uStack_1a0;
        uVar2 = 0;
        pbVar32 = pbStack_1a8;
        uStack_158 = uVar25;
        uStack_100 = uVar34;
        iVar24 = iStack_18c;
        while (uVar31 = uVar2, iVar28 = (int)uVar31, iVar28 < iVar24) {
          uVar15 = iVar28 + (int)uVar27;
          uVar2 = (ulonglong)(iVar28 + 1U);
          if (uVar15 < 0x200) {
            lStack_170 = uVar31 * (longlong)plStack_d0;
            uStack_110 = uVar15 * 0x200;
            uVar15 = 0;
            uStack_108 = iVar28 + 1U;
LAB_140a860e0:
            uVar16 = uVar15;
            if ((int)uVar16 < (int)plStack_d0) {
              uVar15 = uVar16 + 1;
              uVar36 = uVar16 + (int)uStack_178;
              unaff_R15 = (undefined *)(ulonglong)uVar36;
              if (uVar36 < 0x200) {
                uVar25 = (ulonglong)uVar16 + lStack_170;
                if (uVar18 <= uVar25) {
                    /* WARNING: Subroutine does not return */
                  pdb_142dc81f2(uVar25,uVar18,&UNK_1430434c0);
                }
                if ((char)pbVar32[uVar25] < '\0') {
                  uVar36 = uVar36 | uStack_110;
                  unaff_R15 = (undefined *)(ulonglong)uVar36;
                  if (puStack_138 <= unaff_R15) {
                    /* WARNING: Subroutine does not return */
                    pdb_142dc81f2(unaff_R15,puStack_138,&UNK_1430434d8);
                  }
                  sVar3 = *(short *)(lStack_168 + (longlong)unaff_R15 * 2);
                  uVar26 = (ushort)uVar34;
                  if (sVar3 == -1) {
                    *(ushort *)(lStack_168 + (longlong)unaff_R15 * 2) = uVar26;
                  }
                  else {
                    *(ushort *)(lStack_168 + (longlong)unaff_R15 * 2) = uVar26;
                    if (uVar26 <= (ushort)(sVar3 + 1U)) goto LAB_140a860e0;
                  }
                  if (puStack_130 <= unaff_R15) {
                    /* WARNING: Subroutine does not return */
                    pdb_142dc81f2(unaff_R15,puStack_130,&UNK_1430434f0);
                  }
                  pbVar33 = (byte *)(lStack_160 + (longlong)unaff_R15 * 4);
                  iStack_114 = *(int *)(lStack_160 + (longlong)unaff_R15 * 4);
                  if (param_5 == 0) {
                    uVar38 = pdb_140a86ea0(pbVar33);
                    bStack_c5 = true;
                    if (((*pbVar33 != param_6) && (pbVar33[1] != param_6)) &&
                       (pbVar33[2] != param_6)) {
                      bStack_c5 = pbVar33[3] == param_6;
                    }
                    uVar16 = uVar36 * -0x61c8864f ^ uStack_10c;
                    uVar16 = (uVar16 >> 0x10 ^ uVar16) * 0x7feb352d;
                    uVar16 = (uVar16 >> 0xf ^ uVar16) * -0x7b935975;
                    uVar16 = uVar16 >> 0x10 ^ uVar16;
                    bStack_c2 = *pbVar33;
                    bStack_c4 = bStack_c2 != 0;
                    bVar22 = pbVar33[1];
                    bVar23 = bStack_c2;
                    if (bVar22 != 0) {
                      bVar23 = bVar22;
                    }
                    bVar13 = pbVar33[2];
                    bVar21 = bVar23;
                    if (bVar13 != 0) {
                      bVar21 = bVar13;
                    }
                    pbStack_d8 = pbVar33;
                    bStack_c1 = pbVar33[3];
                    uVar18 = uStack_f8;
                    pbVar32 = pbStack_e0;
                    param_1 = lStack_f0;
                    uVar34 = uStack_100;
                    if (((param_6 == 0) || (bStack_c5 != false)) ||
                       (uVar25 = (ulonglong)bStack_c4,
                       (char)((bStack_c1 != 0 && bStack_c1 != bVar21) +
                             (bVar13 != 0 && bVar13 != bVar23) +
                             (bVar22 != 0 && bVar22 != bStack_c2) + bStack_c4) != '\x02')) {
                      fStack_298 = 0.0;
                      uStack_294 = 0;
                      uStack_290 = 0;
                      uStack_28c = 0;
                      auStack_2a8[0] = 0;
                      auStack_2a8[1] = 0;
                      if (bVar22 == param_6) {
                        uVar25 = (ulonglong)(bStack_c2 != param_6);
                      }
                      else {
                        auStack_2a8[bStack_c2 != param_6] = 1;
                        uVar25 = (ulonglong)(bStack_c2 != param_6) + 1;
                      }
                      if (bVar13 != param_6) {
                        auStack_2a8[uVar25] = 2;
                        uVar25 = uVar25 + 1;
                      }
                      if (bStack_c1 == param_6) {
                        pbVar33 = pbStack_d8;
                        if (uVar25 == 0) goto LAB_140a86182;
                      }
                      else {
                        auStack_2a8[uVar25] = 3;
                        uVar25 = uVar25 + 1;
                      }
                      uVar25 = auStack_2a8[(ulonglong)uVar16 % uVar25];
                      if (3 < uVar25) {
                    /* WARNING: Subroutine does not return */
                        pdb_142dc81f2(uVar25,4,&UNK_1430433e0);
                      }
                      pbVar33[uVar25] = param_6;
                      bVar22 = *pbVar33;
                      bVar23 = pbVar33[1];
                      if (bVar23 < bVar22) {
                        pbVar33[1] = bVar22;
                        *pbVar33 = bVar23;
                        bVar13 = pbVar33[2];
                        bVar37 = bVar13 < bVar22;
                        bVar21 = bVar22;
                        bVar22 = bVar23;
                        if (bVar37) {
LAB_140a86424:
                          pbVar33[2] = bVar21;
                          pbVar20 = pbVar33 + 1;
                          if (bVar13 < bVar22) {
                            pbVar33[1] = bVar22;
                            pbVar20 = pbVar33;
                          }
                          *pbVar20 = bVar13;
                          bVar13 = pbVar33[2];
                        }
                      }
                      else {
                        bVar13 = pbVar33[2];
                        bVar21 = bVar23;
                        if (bVar13 < bVar23) goto LAB_140a86424;
                      }
                      bVar22 = pbVar33[3];
                      if (bVar22 < bVar13) {
                        pbVar33[3] = bVar13;
                        bVar23 = pbVar33[1];
                        if (bVar23 <= bVar22) goto LAB_140a8645c;
LAB_140a86547:
                        pbVar33[2] = bVar23;
                        pbVar20 = pbVar33 + 1;
                        if (bVar22 < *pbVar33) {
                          pbVar33[1] = *pbVar33;
                          pbVar20 = pbVar33;
                        }
                        *pbVar20 = bVar22;
                      }
                    }
                    else {
                      fStack_298 = 0.0;
                      uStack_294 = 0;
                      uStack_290 = 0;
                      uStack_28c = 0;
                      auStack_2a8[0] = 0;
                      auStack_2a8[1] = 0;
                      if (bVar22 != 0) {
                        auStack_2a8[bStack_c2 != 0] = 1;
                        uVar25 = (ulonglong)(bStack_c2 != 0) + 1;
                      }
                      if (bVar13 != 0) {
                        auStack_2a8[uVar25] = 2;
                        uVar25 = uVar25 + 1;
                      }
                      if (bStack_c1 == 0) {
                        if (uVar25 == 0) {
                    /* WARNING: Subroutine does not return */
                          pdb_142dc8510(&UNK_1430433b0);
                        }
                      }
                      else {
                        auStack_2a8[uVar25] = 3;
                        uVar25 = uVar25 + 1;
                      }
                      uVar25 = auStack_2a8[(ulonglong)uVar16 % uVar25];
                      if (3 < uVar25) goto LAB_140a86763;
                      bVar23 = pbVar33[uVar25];
                      if (bStack_c2 == bVar23) {
                        *pbVar33 = 0;
                      }
                      if (bVar22 == bVar23) {
                        pbVar33[1] = 0;
                      }
                      if (bVar13 == bVar23) {
                        pbVar33[2] = 0;
                      }
                      if (bStack_c1 == bVar23) {
                        pbVar33[3] = 0;
                      }
                      pbVar33[uVar25] = param_6;
                      bVar22 = *pbVar33;
                      bVar23 = pbVar33[1];
                      if (bVar23 < bVar22) {
                        pbVar33[1] = bVar22;
                        *pbVar33 = bVar23;
                        bVar13 = pbVar33[2];
                        bVar37 = bVar13 < bVar22;
                        bVar21 = bVar22;
                        bVar22 = bVar23;
                        if (bVar37) {
LAB_140a8650f:
                          pbVar33[2] = bVar21;
                          pbVar20 = pbVar33 + 1;
                          if (bVar13 < bVar22) {
                            pbVar33[1] = bVar22;
                            pbVar20 = pbVar33;
                          }
                          *pbVar20 = bVar13;
                          bVar13 = pbVar33[2];
                        }
                      }
                      else {
                        bVar13 = pbVar33[2];
                        bVar21 = bVar23;
                        if (bVar13 < bVar23) goto LAB_140a8650f;
                      }
                      bVar22 = pbVar33[3];
                      if (bVar22 < bVar13) {
                        pbVar33[3] = bVar13;
                        bVar23 = pbVar33[1];
                        if (bVar22 < bVar23) goto LAB_140a86547;
LAB_140a8645c:
                        pbVar33[2] = bVar22;
                      }
                    }
                  }
                  else {
                    pbVar33[0] = 0;
                    pbVar33[1] = 0;
                    pbVar33[2] = 0;
                    pbVar33[3] = 0;
                  }
LAB_140a86182:
                  if (*(int *)pbVar33 != iStack_114) {
                    unaff_R15 = (undefined *)(ulonglong)(uVar36 >> 0xc);
                    puVar1 = (ulonglong *)(param_1 + 0x80 + (longlong)unaff_R15 * 8);
                    *puVar1 = *puVar1 | 1L << ((byte)(uVar36 >> 3) & 0x3f);
                    *(undefined1 *)(param_1 + 0x283) = 1;
                  }
                }
              }
              goto LAB_140a860e0;
            }
            uVar27 = uStack_150;
            uVar25 = uStack_158;
            uVar2 = (ulonglong)uStack_108;
            iVar24 = iStack_104;
          }
        }
        if (uStack_128 != 0) {
          pub_1406abac0(pbVar32,uStack_128,1);
        }
        uVar18 = 0;
        param_2 = puStack_148;
      }
    } while( true );
  }
  goto LAB_140a86722;
LAB_140a865ae:
  uVar18 = (uStack_120 - 1) + (ulonglong)(uStack_120 == 0);
  uVar14 = 0xfffe;
  if (uVar18 < 0xfffe) {
    uVar14 = (undefined2)uVar18;
  }
  *(undefined2 *)(param_1 + 0x280) = uVar14;
  if (lStack_218 != 0) {
    pub_1406abac0(pbStack_210,lStack_218 * 0x24,4);
  }
  if (lStack_200 != 0) {
    pub_1406abac0(pbStack_1f8,lStack_200 << 4,4);
  }
  if (lStack_1e8 != 0) {
    pub_1406abac0(pbStack_1e0,lStack_1e8 << 2,4);
  }
  if (cStack_c3 != '\0') {
    plVar19 = (longlong *)pdb_140e97000();
    if (((char)plVar19[0xd] != '\x01') &&
       (plVar19 = (longlong *)pdb_142d8ec20(plVar19,0), plVar19 == (longlong *)0x0))
    goto LAB_140a86756;
    if (*plVar19 != 0) {
LAB_140a86722:
      plVar19 = (longlong *)pdb_142dc8090(&UNK_143326a50);
LAB_140a8672e:
      plVar19 = (longlong *)pdb_142d8ec20(plVar19,0);
      if (plVar19 == (longlong *)0x0) {
LAB_140a86756:
        uVar38 = pdb_142dc7890(&UNK_143326860);
LAB_140a86763:
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(uVar38,4,&UNK_1430433c8);
      }
      goto LAB_140a85d26;
    }
    *plVar19 = -1;
    plStack_d0 = plVar19;
    pdb_140e95370(plVar19 + 1);
    *plStack_d0 = *plStack_d0 + 1;
  }
  return;
}

