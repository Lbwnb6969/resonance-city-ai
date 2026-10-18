// VA 0x142573d10, PDB extent 3533 bytes
// country_core::render::nani::systems::nani_update_wren
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/systems.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::render::nani::systems::nani_update_wren
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/systems.rs
   Extent: 3533 */

longlong * pdb_142573d10(longlong *param_1,longlong *param_2)

{
  byte *pbVar1;
  uint *puVar2;
  float fVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  code *pcVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  uint uVar14;
  char cVar15;
  uint uVar16;
  longlong lVar17;
  ulonglong uVar18;
  longlong *plVar19;
  longlong lVar20;
  float *pfVar21;
  ulonglong uVar22;
  undefined8 uVar23;
  longlong lVar24;
  longlong lVar25;
  undefined *puVar26;
  float *pfVar27;
  uint uVar28;
  longlong *plVar29;
  uint *puVar30;
  undefined *puVar31;
  bool bVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float fStack_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float fStack_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  undefined8 uStack_150;
  float fStack_148;
  undefined8 uStack_140;
  longlong lStack_138;
  undefined8 uStack_130;
  longlong lStack_128;
  longlong *plStack_120;
  longlong lStack_118;
  longlong *plStack_110;
  longlong lStack_108;
  longlong lStack_100;
  longlong lStack_f8;
  longlong lStack_f0;
  char cStack_e1;
  undefined8 uStack_e0;
  
  uStack_e0 = 0xfffffffffffffffe;
  plVar29 = param_2;
  cVar15 = pdb_140e94b40();
  if (cVar15 == '\0') {
    lStack_138 = 0;
    goto LAB_142573f17;
  }
  plVar29 = (longlong *)&UNK_14351c60c;
  lVar24 = 0x35;
  uVar22 = 0x35;
  lVar17 = pdb_142585200(&UNK_14351c60c);
  if (lVar17 != 1) {
LAB_142573df2:
    puVar26 = &UNK_14351bdcd;
    puVar31 = &UNK_14351bd9f;
    do {
      bVar4 = puVar26[-1];
      uVar16 = (uint)(char)bVar4;
      if ((char)bVar4 < '\0') {
        bVar5 = puVar26[-2];
        if ((char)bVar5 < -0x40) {
          bVar6 = puVar26[-3];
          if ((char)bVar6 < -0x40) {
            pbVar1 = puVar26 + -4;
            puVar26 = puVar26 + -4;
            uVar16 = bVar6 & 0x3f | (*pbVar1 & 7) << 6;
          }
          else {
            puVar26 = puVar26 + -3;
            uVar16 = bVar6 & 0xf;
          }
          uVar16 = bVar5 & 0x3f | uVar16 << 6;
        }
        else {
          puVar26 = puVar26 + -2;
          uVar16 = bVar5 & 0x1f;
        }
        uVar16 = (uint)(bVar4 & 0x3f) | uVar16 << 6;
        if (uVar16 != 0x5c) goto LAB_142573e74;
LAB_142573e8d:
        if ((undefined *)0x2e < puVar26 + -0x14351bd9e) goto LAB_142574736;
        lVar17 = 0x2e - (longlong)(puVar26 + -0x14351bd9e);
        puVar31 = puVar26 + 1;
        goto LAB_142573eb0;
      }
      puVar26 = puVar26 + -1;
      if (uVar16 == 0x5c) goto LAB_142573e8d;
LAB_142573e74:
      if (uVar16 == 0x2f) goto LAB_142573e8d;
    } while (puVar26 != &UNK_14351bd9f);
    lVar17 = 0x2e;
LAB_142573eb0:
    plVar19 = (longlong *)pdb_140e97000();
    if (((char)plVar19[0xd] == '\x01') ||
       (plVar19 = (longlong *)pdb_142d8ec20(plVar19,0), plVar19 != (longlong *)0x0)) {
      if (*plVar19 != 0) goto LAB_1425746e5;
      *plVar19 = -1;
      plStack_110 = plVar19;
      uStack_130 = pdb_140e94f10(plVar19 + 1,plVar29,lVar24,puVar31,lVar17,1,0);
      *plStack_110 = *plStack_110 + 1;
      lStack_138 = 1;
LAB_142573f17:
      uVar23 = CONCAT71((int7)((ulonglong)plVar29 >> 8),0xe);
      plStack_120 = (longlong *)pdb_1409d2d80(*param_2);
      uVar14 = _UNK_142e377e4;
      uVar16 = _DAT_142e377e0;
      fVar13 = _DAT_142e36f28;
      lStack_118 = *param_1;
      lVar17 = param_1[1];
      puVar30 = *(uint **)(lStack_118 + 0xf8);
      puVar2 = puVar30 + *(longlong *)(lStack_118 + 0x100);
      cStack_e1 = *(char *)(lStack_118 + 0x108);
      lVar24 = 0;
      lStack_128 = 8;
      lStack_108 = 0;
      lStack_100 = 0;
      lStack_f8 = 0;
      lStack_f0 = 0;
      uVar28 = 0;
      uStack_140 = uVar23;
      if (cStack_e1 != '\0') goto LAB_142574170;
      do {
        if (uVar28 == (uint)lVar24) {
          do {
            if (puVar30 == puVar2) goto LAB_142574610;
            uVar28 = *puVar30;
            puVar30 = puVar30 + 1;
            lVar24 = *(longlong *)(*(longlong *)(lVar17 + 0x100) + 0x58 + (ulonglong)uVar28 * 0xa0);
          } while (lVar24 == 0);
          lVar20 = *(longlong *)(lVar17 + 0x100) + (ulonglong)uVar28 * 0xa0;
          uVar22 = (ulonglong)*(uint *)(lVar20 + 0x94);
          lVar25 = *(longlong *)(lVar17 + 0x1a0) + uVar22 * 0x48;
          uVar22 = *(ulonglong *)(*(longlong *)(lVar17 + 0x1a0) + 0x40 + uVar22 * 0x48);
          if ((*(ulonglong *)(lStack_118 + 0x110) < uVar22) &&
             (uVar18 = *(ulonglong *)
                        (*(longlong *)(lVar25 + 0x38) + *(ulonglong *)(lStack_118 + 0x110) * 8),
             uVar18 != 0)) {
            lStack_108 = *(longlong *)(*(longlong *)(lVar25 + 0x18) + 0x10 + ~uVar18 * 0x30);
            uVar18 = *(ulonglong *)(lStack_118 + 0x118);
            if (uVar22 <= uVar18) goto LAB_1425740ac;
LAB_142574076:
            uVar18 = *(ulonglong *)(*(longlong *)(lVar25 + 0x38) + uVar18 * 8);
            if (uVar18 == 0) goto LAB_1425740ac;
            lStack_100 = *(longlong *)(*(longlong *)(lVar25 + 0x18) + 0x10 + ~uVar18 * 0x30);
            uVar18 = *(ulonglong *)(lStack_118 + 0x120);
            if (uVar18 < uVar22) goto LAB_1425740c3;
LAB_1425740f9:
            lStack_f8 = 0;
            uVar18 = *(ulonglong *)(lStack_118 + 0x128);
            if (uVar22 <= uVar18) goto LAB_14257413a;
LAB_142574110:
            uVar22 = *(ulonglong *)(*(longlong *)(lVar25 + 0x38) + uVar18 * 8);
            if (uVar22 == 0) goto LAB_14257413a;
            lStack_f0 = *(longlong *)(*(longlong *)(lVar25 + 0x18) + 0x10 + ~uVar22 * 0x30);
          }
          else {
            lStack_108 = 0;
            uVar18 = *(ulonglong *)(lStack_118 + 0x118);
            if (uVar18 < uVar22) goto LAB_142574076;
LAB_1425740ac:
            lStack_100 = 0;
            uVar18 = *(ulonglong *)(lStack_118 + 0x120);
            if (uVar22 <= uVar18) goto LAB_1425740f9;
LAB_1425740c3:
            uVar18 = *(ulonglong *)(*(longlong *)(lVar25 + 0x38) + uVar18 * 8);
            if (uVar18 == 0) goto LAB_1425740f9;
            lStack_f8 = *(longlong *)(*(longlong *)(lVar25 + 0x18) + 0x10 + ~uVar18 * 0x30);
            uVar18 = *(ulonglong *)(lStack_118 + 0x128);
            if (uVar18 < uVar22) goto LAB_142574110;
LAB_14257413a:
            lStack_f0 = 0;
          }
          lStack_128 = *(longlong *)(lVar20 + 0x50);
          uVar28 = 0;
        }
        uVar8 = ~*(uint *)(lStack_128 + 8 + (ulonglong)uVar28 * 0x10);
        while( true ) {
          uVar22 = (ulonglong)uVar8;
          plStack_110 = (longlong *)(lStack_108 + uVar22 * 0xc);
          pfVar21 = (float *)(lStack_100 + uVar22 * 0x30);
          pfVar27 = (float *)(uVar22 * 0x30 + lStack_f8);
          lVar25 = uVar22 * 0x50 + lStack_f0;
          fStack_148 = pfVar21[6];
          uStack_150 = *(undefined8 *)(pfVar21 + 4);
          fVar38 = pfVar21[7];
          fVar39 = pfVar21[8];
          fVar12 = pfVar21[9];
          fStack_18c = (float)*(undefined8 *)(pfVar21 + 8);
          fStack_17c = (float)((ulonglong)*(undefined8 *)(pfVar21 + 8) >> 0x20);
          fVar9 = *pfVar21;
          fVar10 = pfVar21[1];
          fVar11 = pfVar21[3];
          fStack_178 = pfVar21[4];
          fStack_174 = pfVar21[5];
          fStack_170 = pfVar21[6];
          fVar3 = pfVar21[2];
          fVar41 = fVar3 + fVar3;
          fVar33 = fVar10 + fVar10;
          fVar37 = fVar9 * (fVar9 + fVar9);
          fVar34 = (fVar9 + fVar9) * fVar11;
          fVar40 = fVar41 * fVar9 - fVar33 * fVar11;
          fVar35 = fVar34 + fVar41 * fVar10;
          fVar36 = fVar13 - (fVar37 + fVar10 * fVar33);
          fStack_19c = pfVar21[7];
          fStack_1a8 = fStack_19c * (fVar13 - (fVar10 * fVar33 + fVar3 * fVar41));
          fStack_1a4 = fStack_19c * (fVar33 * fVar9 + fVar11 * fVar41);
          fStack_1a0 = fStack_19c * fVar40;
          fStack_19c = fStack_19c * fVar40;
          fStack_198 = fStack_18c * (fVar33 * fVar9 - fVar11 * fVar41);
          fStack_194 = fStack_18c * (fVar13 - (fVar3 * fVar41 + fVar37));
          fStack_190 = fStack_18c * fVar35;
          fStack_18c = fStack_18c * fVar35;
          fStack_188 = fStack_17c * (fVar33 * fVar11 + fVar41 * fVar9);
          fStack_184 = fStack_17c * (fVar41 * fVar10 - fVar34);
          fStack_180 = fStack_17c * fVar36;
          fStack_17c = fStack_17c * fVar36;
          fStack_16c = fStack_170;
          pdb_140e07fe0(&uStack_1d8,&fStack_1a8);
          fStack_18c = (float)*(undefined8 *)(pfVar27 + 8);
          fStack_17c = (float)((ulonglong)*(undefined8 *)(pfVar27 + 8) >> 0x20);
          fVar9 = *pfVar27;
          fVar10 = pfVar27[1];
          fVar11 = pfVar27[3];
          fStack_178 = pfVar27[4];
          fStack_174 = pfVar27[5];
          fStack_170 = pfVar27[6];
          fVar3 = pfVar27[2];
          fVar41 = fVar3 + fVar3;
          fVar33 = fVar10 + fVar10;
          fVar37 = fVar9 * (fVar9 + fVar9);
          fVar34 = (fVar9 + fVar9) * fVar11;
          fVar40 = fVar41 * fVar9 - fVar33 * fVar11;
          fVar35 = fVar34 + fVar41 * fVar10;
          fVar36 = fVar13 - (fVar37 + fVar10 * fVar33);
          fStack_19c = pfVar27[7];
          fStack_1a8 = fStack_19c * (fVar13 - (fVar10 * fVar33 + fVar3 * fVar41));
          fStack_1a4 = fStack_19c * (fVar33 * fVar9 + fVar11 * fVar41);
          fStack_1a0 = fStack_19c * fVar40;
          fStack_19c = fStack_19c * fVar40;
          fStack_198 = fStack_18c * (fVar33 * fVar9 - fVar11 * fVar41);
          fStack_194 = fStack_18c * (fVar13 - (fVar3 * fVar41 + fVar37));
          fStack_190 = fStack_18c * fVar35;
          fStack_18c = fStack_18c * fVar35;
          fStack_188 = fStack_17c * (fVar33 * fVar11 + fVar41 * fVar9);
          fStack_184 = fStack_17c * (fVar41 * fVar10 - fVar34);
          fStack_180 = fStack_17c * fVar36;
          fStack_17c = fStack_17c * fVar36;
          fStack_16c = fStack_170;
          pdb_140e07fe0(&uStack_208,&fStack_1a8);
          fVar38 = (float)((uint)fVar38 & uVar16);
          fVar39 = (float)((uint)fVar39 & uVar16);
          if (fVar39 <= (float)((uint)fVar12 & uVar14)) {
            fVar39 = (float)((uint)fVar12 & uVar14);
          }
          if (fVar38 <= fVar39) {
            fVar38 = fVar39;
          }
          uStack_210 = *(undefined4 *)(lVar25 + 0x4c);
          uStack_258 = uStack_1b8;
          uStack_250 = uStack_1b0;
          uStack_268 = uStack_1c8;
          uStack_260 = uStack_1c0;
          uStack_278 = uStack_1d8;
          uStack_270 = uStack_1d0;
          uStack_218 = *(undefined8 *)(lVar25 + 0x44);
          uStack_238 = uStack_1f8;
          uStack_234 = uStack_1f4;
          uStack_230 = uStack_1f0;
          uStack_22c = uStack_1ec;
          uStack_228 = uStack_1e8;
          uStack_220 = uStack_1e0;
          uStack_248 = uStack_208;
          uStack_244 = uStack_204;
          uStack_240 = uStack_200;
          uStack_23c = uStack_1fc;
          uStack_20c = 0;
          pdb_140953ac0(uStack_140,plStack_110,&uStack_150,fVar38,&uStack_278,&UNK_14351be00);
          uVar28 = uVar28 + 1;
          if (cStack_e1 == '\0') break;
LAB_142574170:
          uVar8 = uVar28;
          if (uVar28 == (uint)lVar24) {
            do {
              if (puVar30 == puVar2) goto LAB_142574610;
              uVar28 = *puVar30;
              puVar30 = puVar30 + 1;
              lVar24 = *(longlong *)
                        (*(longlong *)(lVar17 + 0x1a0) + 0x10 + (ulonglong)uVar28 * 0x48);
            } while (lVar24 == 0);
            lVar25 = *(longlong *)(lVar17 + 0x1a0) + (ulonglong)uVar28 * 0x48;
            uVar22 = *(ulonglong *)(lVar25 + 0x40);
            if ((*(ulonglong *)(lStack_118 + 0x110) < uVar22) &&
               (uVar18 = *(ulonglong *)
                          (*(longlong *)(lVar25 + 0x38) + *(ulonglong *)(lStack_118 + 0x110) * 8),
               uVar18 != 0)) {
              lStack_108 = *(longlong *)(*(longlong *)(lVar25 + 0x18) + 0x10 + ~uVar18 * 0x30);
              uVar18 = *(ulonglong *)(lStack_118 + 0x118);
              if (uVar22 <= uVar18) goto LAB_142574243;
LAB_14257420d:
              uVar18 = *(ulonglong *)(*(longlong *)(lVar25 + 0x38) + uVar18 * 8);
              if (uVar18 == 0) goto LAB_142574243;
              lStack_100 = *(longlong *)(*(longlong *)(lVar25 + 0x18) + 0x10 + ~uVar18 * 0x30);
              uVar18 = *(ulonglong *)(lStack_118 + 0x120);
              if (uVar18 < uVar22) goto LAB_14257425a;
LAB_142574290:
              lStack_f8 = 0;
              uVar18 = *(ulonglong *)(lStack_118 + 0x128);
              if (uVar22 <= uVar18) goto LAB_1425742d1;
LAB_1425742a7:
              uVar22 = *(ulonglong *)(*(longlong *)(lVar25 + 0x38) + uVar18 * 8);
              if (uVar22 == 0) goto LAB_1425742d1;
              lStack_f0 = *(longlong *)(*(longlong *)(lVar25 + 0x18) + 0x10 + ~uVar22 * 0x30);
            }
            else {
              lStack_108 = 0;
              uVar18 = *(ulonglong *)(lStack_118 + 0x118);
              if (uVar18 < uVar22) goto LAB_14257420d;
LAB_142574243:
              lStack_100 = 0;
              uVar18 = *(ulonglong *)(lStack_118 + 0x120);
              if (uVar22 <= uVar18) goto LAB_142574290;
LAB_14257425a:
              uVar18 = *(ulonglong *)(*(longlong *)(lVar25 + 0x38) + uVar18 * 8);
              if (uVar18 == 0) goto LAB_142574290;
              lStack_f8 = *(longlong *)(*(longlong *)(lVar25 + 0x18) + 0x10 + ~uVar18 * 0x30);
              uVar18 = *(ulonglong *)(lStack_118 + 0x128);
              if (uVar18 < uVar22) goto LAB_1425742a7;
LAB_1425742d1:
              lStack_f0 = 0;
            }
            uVar28 = 0;
            uVar8 = uVar28;
          }
        }
      } while( true );
    }
    goto LAB_14257472a;
  }
  if (uVar22 < 0x36) {
    plVar29 = (longlong *)&UNK_14351c60c;
    uVar18 = pdb_142585200(&UNK_14351c60c);
    if ((uVar18 & 1) != 0) {
      if (0x35 < uVar22 + 2) goto LAB_142574779;
      lVar24 = 0x33 - uVar22;
      plVar29 = (longlong *)(&UNK_14351c60e + uVar22);
    }
    goto LAB_142573df2;
  }
  goto LAB_142574759;
LAB_142574610:
  param_2 = plStack_120;
  pdb_140e9a350(plStack_120);
  pdb_140e9a350();
  LOCK();
  plVar29 = (longlong *)*param_2;
  bVar32 = plVar29 == (longlong *)0x8;
  if (bVar32) {
    *param_2 = 0;
    plVar29 = (longlong *)0x8;
  }
  UNLOCK();
  if (!bVar32) goto LAB_1425746f2;
  while( true ) {
    if (lStack_138 == 0) {
      return plVar29;
    }
    plVar29 = (longlong *)pdb_140e97000();
    if (((char)plVar29[0xd] != '\x01') &&
       (plVar29 = (longlong *)pdb_142d8ec20(plVar29,0), plVar29 == (longlong *)0x0)) break;
    if (*plVar29 == 0) {
      *plVar29 = -1;
      plStack_110 = plVar29;
      pdb_140e95370(plVar29 + 1,uStack_130);
      *plStack_110 = *plStack_110 + 1;
      return plStack_110;
    }
LAB_1425746e5:
    pdb_142dc8090(&UNK_143326a50);
LAB_1425746f2:
    plVar29 = (longlong *)pdb_142dbca40(param_2);
  }
LAB_14257472a:
  pdb_142dc7890(&UNK_143326860);
LAB_142574736:
  pdb_142dc8070(&UNK_14351bd9f,0x2e);
LAB_142574759:
  pdb_142dc8070(&UNK_14351c60c,0x35,0);
LAB_142574779:
  pdb_142dc8070(&UNK_14351c60c,0x35);
  pcVar7 = (code *)swi(3);
  plVar29 = (longlong *)(*pcVar7)();
  return plVar29;
}

