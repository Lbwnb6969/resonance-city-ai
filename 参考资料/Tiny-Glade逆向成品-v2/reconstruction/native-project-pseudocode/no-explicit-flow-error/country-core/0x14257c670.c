// VA 0x14257c670, PDB extent 3309 bytes
// country_core::render::nani::systems::nani_update_velocity_only
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/systems.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::render::nani::systems::nani_update_velocity_only
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/systems.rs
   Extent: 3309 */

longlong * pdb_14257c670(longlong *param_1,longlong *param_2)

{
  byte *pbVar1;
  uint *puVar2;
  longlong lVar3;
  float fVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  code *pcVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  uint uVar15;
  char cVar16;
  uint uVar17;
  longlong lVar18;
  ulonglong uVar19;
  longlong *plVar20;
  longlong lVar21;
  float *pfVar22;
  ulonglong uVar23;
  undefined8 uVar24;
  longlong lVar25;
  float *pfVar26;
  undefined *puVar27;
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
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
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
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
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
  float fStack_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  undefined8 uStack_140;
  float fStack_138;
  undefined8 uStack_130;
  longlong lStack_128;
  undefined8 uStack_120;
  longlong lStack_118;
  longlong *plStack_110;
  longlong lStack_108;
  longlong *plStack_100;
  longlong lStack_f8;
  longlong lStack_f0;
  longlong lStack_e8;
  undefined8 uStack_e0;
  
  uStack_e0 = 0xfffffffffffffffe;
  plVar29 = param_2;
  cVar16 = pdb_140e94b40();
  if (cVar16 == '\0') {
    lStack_128 = 0;
    goto LAB_14257c877;
  }
  plVar29 = (longlong *)&UNK_14351c4b7;
  lVar25 = 0x3e;
  uVar23 = 0x3e;
  lVar18 = pdb_142585200(&UNK_14351c4b7);
  if (lVar18 != 1) {
LAB_14257c752:
    puVar27 = &UNK_14351bdcd;
    puVar31 = &UNK_14351bd9f;
    do {
      bVar5 = puVar27[-1];
      uVar17 = (uint)(char)bVar5;
      if ((char)bVar5 < '\0') {
        bVar6 = puVar27[-2];
        if ((char)bVar6 < -0x40) {
          bVar7 = puVar27[-3];
          if ((char)bVar7 < -0x40) {
            pbVar1 = puVar27 + -4;
            puVar27 = puVar27 + -4;
            uVar17 = bVar7 & 0x3f | (*pbVar1 & 7) << 6;
          }
          else {
            puVar27 = puVar27 + -3;
            uVar17 = bVar7 & 0xf;
          }
          uVar17 = bVar6 & 0x3f | uVar17 << 6;
        }
        else {
          puVar27 = puVar27 + -2;
          uVar17 = bVar6 & 0x1f;
        }
        uVar17 = (uint)(bVar5 & 0x3f) | uVar17 << 6;
        if (uVar17 != 0x5c) goto LAB_14257c7d4;
LAB_14257c7ed:
        if ((undefined *)0x2e < puVar27 + -0x14351bd9e) goto LAB_14257cfac;
        lVar18 = 0x2e - (longlong)(puVar27 + -0x14351bd9e);
        puVar31 = puVar27 + 1;
        goto LAB_14257c810;
      }
      puVar27 = puVar27 + -1;
      if (uVar17 == 0x5c) goto LAB_14257c7ed;
LAB_14257c7d4:
      if (uVar17 == 0x2f) goto LAB_14257c7ed;
    } while (puVar27 != &UNK_14351bd9f);
    lVar18 = 0x2e;
LAB_14257c810:
    plVar20 = (longlong *)pdb_140e97000();
    if (((char)plVar20[0xd] == '\x01') ||
       (plVar20 = (longlong *)pdb_142d8ec20(plVar20,0), plVar20 != (longlong *)0x0)) {
      if (*plVar20 != 0) goto LAB_14257cf5b;
      *plVar20 = -1;
      plStack_100 = plVar20;
      uStack_120 = pdb_140e94f10(plVar20 + 1,plVar29,lVar25,puVar31,lVar18,1,0);
      *plStack_100 = *plStack_100 + 1;
      lStack_128 = 1;
LAB_14257c877:
      uVar24 = CONCAT71((int7)((ulonglong)plVar29 >> 8),0x17);
      plStack_110 = (longlong *)pdb_1409d2d80(*param_2);
      uVar15 = _UNK_142e377e4;
      uVar17 = _DAT_142e377e0;
      fVar14 = _DAT_142e36f28;
      lStack_108 = *param_1;
      lVar18 = param_1[1];
      puVar30 = *(uint **)(lStack_108 + 0xf8);
      puVar2 = puVar30 + *(longlong *)(lStack_108 + 0x100);
      plStack_100 = (longlong *)CONCAT71(plStack_100._1_7_,*(char *)(lStack_108 + 0x108));
      lVar25 = 0;
      lStack_118 = 8;
      lStack_f8 = 0;
      lStack_f0 = 0;
      lStack_e8 = 0;
      uVar28 = 0;
      uStack_130 = uVar24;
      if (*(char *)(lStack_108 + 0x108) != '\0') goto LAB_14257ca70;
      do {
        if (uVar28 == (uint)lVar25) {
          do {
            if (puVar30 == puVar2) goto LAB_14257ce86;
            uVar28 = *puVar30;
            puVar30 = puVar30 + 1;
            lVar25 = *(longlong *)(*(longlong *)(lVar18 + 0x100) + 0x58 + (ulonglong)uVar28 * 0xa0);
          } while (lVar25 == 0);
          lVar21 = *(longlong *)(lVar18 + 0x100) + (ulonglong)uVar28 * 0xa0;
          uVar23 = (ulonglong)*(uint *)(lVar21 + 0x94);
          lVar3 = *(longlong *)(lVar18 + 0x1a0) + uVar23 * 0x48;
          uVar23 = *(ulonglong *)(*(longlong *)(lVar18 + 0x1a0) + 0x40 + uVar23 * 0x48);
          if ((*(ulonglong *)(lStack_108 + 0x110) < uVar23) &&
             (uVar19 = *(ulonglong *)
                        (*(longlong *)(lVar3 + 0x38) + *(ulonglong *)(lStack_108 + 0x110) * 8),
             uVar19 != 0)) {
            lStack_f8 = *(longlong *)(*(longlong *)(lVar3 + 0x18) + 0x10 + ~uVar19 * 0x30);
            uVar19 = *(ulonglong *)(lStack_108 + 0x118);
            if (uVar23 <= uVar19) goto LAB_14257c9fc;
LAB_14257c9c6:
            uVar19 = *(ulonglong *)(*(longlong *)(lVar3 + 0x38) + uVar19 * 8);
            if (uVar19 == 0) goto LAB_14257c9fc;
            lStack_f0 = *(longlong *)(*(longlong *)(lVar3 + 0x18) + 0x10 + ~uVar19 * 0x30);
            uVar19 = *(ulonglong *)(lStack_108 + 0x120);
            if (uVar19 < uVar23) goto LAB_14257ca13;
LAB_14257ca3d:
            lStack_e8 = 0;
          }
          else {
            lStack_f8 = 0;
            uVar19 = *(ulonglong *)(lStack_108 + 0x118);
            if (uVar19 < uVar23) goto LAB_14257c9c6;
LAB_14257c9fc:
            lStack_f0 = 0;
            uVar19 = *(ulonglong *)(lStack_108 + 0x120);
            if (uVar23 <= uVar19) goto LAB_14257ca3d;
LAB_14257ca13:
            uVar23 = *(ulonglong *)(*(longlong *)(lVar3 + 0x38) + uVar19 * 8);
            if (uVar23 == 0) goto LAB_14257ca3d;
            lStack_e8 = *(longlong *)(*(longlong *)(lVar3 + 0x18) + 0x10 + ~uVar23 * 0x30);
          }
          lStack_118 = *(longlong *)(lVar21 + 0x50);
          uVar28 = 0;
        }
        uVar9 = ~*(uint *)(lStack_118 + 8 + (ulonglong)uVar28 * 0x10);
        while( true ) {
          lVar3 = lStack_f8 + (ulonglong)uVar9 * 0xc;
          lVar21 = (ulonglong)uVar9 * 0x30;
          pfVar22 = (float *)(lStack_f0 + lVar21);
          pfVar26 = (float *)(lVar21 + lStack_e8);
          fStack_138 = pfVar22[6];
          uStack_140 = *(undefined8 *)(pfVar22 + 4);
          fVar38 = pfVar22[7];
          fVar39 = pfVar22[8];
          fVar13 = pfVar22[9];
          fStack_17c = (float)*(undefined8 *)(pfVar22 + 8);
          fStack_16c = (float)((ulonglong)*(undefined8 *)(pfVar22 + 8) >> 0x20);
          fVar10 = *pfVar22;
          fVar11 = pfVar22[1];
          fVar12 = pfVar22[3];
          fStack_168 = pfVar22[4];
          fStack_164 = pfVar22[5];
          fStack_160 = pfVar22[6];
          fVar4 = pfVar22[2];
          fVar41 = fVar4 + fVar4;
          fVar33 = fVar11 + fVar11;
          fVar37 = fVar10 * (fVar10 + fVar10);
          fVar34 = (fVar10 + fVar10) * fVar12;
          fVar40 = fVar41 * fVar10 - fVar33 * fVar12;
          fVar35 = fVar34 + fVar41 * fVar11;
          fVar36 = fVar14 - (fVar37 + fVar11 * fVar33);
          fStack_18c = pfVar22[7];
          fStack_198 = fStack_18c * (fVar14 - (fVar11 * fVar33 + fVar4 * fVar41));
          fStack_194 = fStack_18c * (fVar33 * fVar10 + fVar12 * fVar41);
          fStack_190 = fStack_18c * fVar40;
          fStack_18c = fStack_18c * fVar40;
          fStack_188 = fStack_17c * (fVar33 * fVar10 - fVar12 * fVar41);
          fStack_184 = fStack_17c * (fVar14 - (fVar4 * fVar41 + fVar37));
          fStack_180 = fStack_17c * fVar35;
          fStack_17c = fStack_17c * fVar35;
          fStack_178 = fStack_16c * (fVar33 * fVar12 + fVar41 * fVar10);
          fStack_174 = fStack_16c * (fVar41 * fVar11 - fVar34);
          fStack_170 = fStack_16c * fVar36;
          fStack_16c = fStack_16c * fVar36;
          fStack_15c = fStack_160;
          pdb_140e07fe0(&uStack_1c8,&fStack_198);
          fStack_17c = (float)*(undefined8 *)(pfVar26 + 8);
          fStack_16c = (float)((ulonglong)*(undefined8 *)(pfVar26 + 8) >> 0x20);
          fVar10 = *pfVar26;
          fVar11 = pfVar26[1];
          fVar12 = pfVar26[3];
          fStack_168 = pfVar26[4];
          fStack_164 = pfVar26[5];
          fStack_160 = pfVar26[6];
          fVar4 = pfVar26[2];
          fVar41 = fVar4 + fVar4;
          fVar33 = fVar11 + fVar11;
          fVar37 = fVar10 * (fVar10 + fVar10);
          fVar34 = (fVar10 + fVar10) * fVar12;
          fVar40 = fVar41 * fVar10 - fVar33 * fVar12;
          fVar35 = fVar34 + fVar41 * fVar11;
          fVar36 = fVar14 - (fVar37 + fVar11 * fVar33);
          fStack_18c = pfVar26[7];
          fStack_198 = fStack_18c * (fVar14 - (fVar11 * fVar33 + fVar4 * fVar41));
          fStack_194 = fStack_18c * (fVar33 * fVar10 + fVar12 * fVar41);
          fStack_190 = fStack_18c * fVar40;
          fStack_18c = fStack_18c * fVar40;
          fStack_188 = fStack_17c * (fVar33 * fVar10 - fVar12 * fVar41);
          fStack_184 = fStack_17c * (fVar14 - (fVar4 * fVar41 + fVar37));
          fStack_180 = fStack_17c * fVar35;
          fStack_17c = fStack_17c * fVar35;
          fStack_178 = fStack_16c * (fVar33 * fVar12 + fVar41 * fVar10);
          fStack_174 = fStack_16c * (fVar41 * fVar11 - fVar34);
          fStack_170 = fStack_16c * fVar36;
          fStack_16c = fStack_16c * fVar36;
          fStack_15c = fStack_160;
          pdb_140e07fe0(&uStack_1f8,&fStack_198);
          fVar38 = (float)((uint)fVar38 & uVar17);
          fVar39 = (float)((uint)fVar39 & uVar17);
          if (fVar39 <= (float)((uint)fVar13 & uVar15)) {
            fVar39 = (float)((uint)fVar13 & uVar15);
          }
          if (fVar38 <= fVar39) {
            fVar38 = fVar39;
          }
          uStack_258 = uStack_1c8;
          uStack_250 = uStack_1c0;
          uStack_248 = uStack_1b8;
          uStack_240 = uStack_1b0;
          uStack_238 = uStack_1a8;
          uStack_230 = uStack_1a0;
          uStack_208 = uStack_1d8;
          uStack_204 = uStack_1d4;
          uStack_200 = uStack_1d0;
          uStack_1fc = uStack_1cc;
          uStack_218 = uStack_1e8;
          uStack_214 = uStack_1e4;
          uStack_210 = uStack_1e0;
          uStack_20c = uStack_1dc;
          uStack_228 = uStack_1f8;
          uStack_224 = uStack_1f4;
          uStack_220 = uStack_1f0;
          uStack_21c = uStack_1ec;
          pdb_140956400(uStack_130,lVar3,&uStack_140,fVar38,&uStack_258,&UNK_14351c0c8);
          uVar28 = uVar28 + 1;
          if ((char)plStack_100 == '\0') break;
LAB_14257ca70:
          uVar9 = uVar28;
          if (uVar28 == (uint)lVar25) {
            do {
              if (puVar30 == puVar2) goto LAB_14257ce86;
              uVar28 = *puVar30;
              puVar30 = puVar30 + 1;
              lVar25 = *(longlong *)
                        (*(longlong *)(lVar18 + 0x1a0) + 0x10 + (ulonglong)uVar28 * 0x48);
            } while (lVar25 == 0);
            lVar3 = *(longlong *)(lVar18 + 0x1a0) + (ulonglong)uVar28 * 0x48;
            uVar23 = *(ulonglong *)(lVar3 + 0x40);
            if ((*(ulonglong *)(lStack_108 + 0x110) < uVar23) &&
               (uVar19 = *(ulonglong *)
                          (*(longlong *)(lVar3 + 0x38) + *(ulonglong *)(lStack_108 + 0x110) * 8),
               uVar19 != 0)) {
              lStack_f8 = *(longlong *)(*(longlong *)(lVar3 + 0x18) + 0x10 + ~uVar19 * 0x30);
              uVar19 = *(ulonglong *)(lStack_108 + 0x118);
              if (uVar23 <= uVar19) goto LAB_14257cb43;
LAB_14257cb0d:
              uVar19 = *(ulonglong *)(*(longlong *)(lVar3 + 0x38) + uVar19 * 8);
              if (uVar19 == 0) goto LAB_14257cb43;
              lStack_f0 = *(longlong *)(*(longlong *)(lVar3 + 0x18) + 0x10 + ~uVar19 * 0x30);
              uVar19 = *(ulonglong *)(lStack_108 + 0x120);
              if (uVar19 < uVar23) goto LAB_14257cb5a;
LAB_14257cb84:
              lStack_e8 = 0;
            }
            else {
              lStack_f8 = 0;
              uVar19 = *(ulonglong *)(lStack_108 + 0x118);
              if (uVar19 < uVar23) goto LAB_14257cb0d;
LAB_14257cb43:
              lStack_f0 = 0;
              uVar19 = *(ulonglong *)(lStack_108 + 0x120);
              if (uVar23 <= uVar19) goto LAB_14257cb84;
LAB_14257cb5a:
              uVar23 = *(ulonglong *)(*(longlong *)(lVar3 + 0x38) + uVar19 * 8);
              if (uVar23 == 0) goto LAB_14257cb84;
              lStack_e8 = *(longlong *)(*(longlong *)(lVar3 + 0x18) + 0x10 + ~uVar23 * 0x30);
            }
            uVar28 = 0;
            uVar9 = uVar28;
          }
        }
      } while( true );
    }
    goto LAB_14257cfa0;
  }
  if (uVar23 < 0x3f) {
    plVar29 = (longlong *)&UNK_14351c4b7;
    uVar19 = pdb_142585200(&UNK_14351c4b7);
    if ((uVar19 & 1) != 0) {
      if (0x3e < uVar23 + 2) goto LAB_14257cfef;
      lVar25 = 0x3c - uVar23;
      plVar29 = (longlong *)(&UNK_14351c4b9 + uVar23);
    }
    goto LAB_14257c752;
  }
  goto LAB_14257cfcf;
LAB_14257ce86:
  param_2 = plStack_110;
  pdb_140e9a350(plStack_110);
  pdb_140e9a350();
  LOCK();
  plVar29 = (longlong *)*param_2;
  bVar32 = plVar29 == (longlong *)0x8;
  if (bVar32) {
    *param_2 = 0;
    plVar29 = (longlong *)0x8;
  }
  UNLOCK();
  if (!bVar32) goto LAB_14257cf68;
  while( true ) {
    if (lStack_128 == 0) {
      return plVar29;
    }
    plVar29 = (longlong *)pdb_140e97000();
    if (((char)plVar29[0xd] != '\x01') &&
       (plVar29 = (longlong *)pdb_142d8ec20(plVar29,0), plVar29 == (longlong *)0x0)) break;
    if (*plVar29 == 0) {
      *plVar29 = -1;
      plStack_100 = plVar29;
      pdb_140e95370(plVar29 + 1,uStack_120);
      *plStack_100 = *plStack_100 + 1;
      return plStack_100;
    }
LAB_14257cf5b:
    pdb_142dc8090(&UNK_143326a50);
LAB_14257cf68:
    plVar29 = (longlong *)pdb_142dbca40(param_2);
  }
LAB_14257cfa0:
  pdb_142dc7890(&UNK_143326860);
LAB_14257cfac:
  pdb_142dc8070(&UNK_14351bd9f,0x2e);
LAB_14257cfcf:
  pdb_142dc8070(&UNK_14351c4b7,0x3e,0);
LAB_14257cfef:
  pdb_142dc8070(&UNK_14351c4b7,0x3e);
  pcVar8 = (code *)swi(3);
  plVar29 = (longlong *)(*pcVar8)();
  return plVar29;
}

