// VA 0x1425827c0, PDB extent 2971 bytes
// country_core::render::nani::systems::nani_update_solid_vertex_color_bricks
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/systems.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::render::nani::systems::nani_update_solid_vertex_color_bricks
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/systems.rs
   Extent: 2971 */

longlong * pdb_1425827c0(longlong *param_1,longlong *param_2)

{
  byte *pbVar1;
  uint *puVar2;
  longlong lVar3;
  undefined4 *puVar4;
  float fVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  code *pcVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  uint uVar16;
  char cVar17;
  uint uVar18;
  longlong lVar19;
  ulonglong uVar20;
  longlong *plVar21;
  longlong lVar22;
  float *pfVar23;
  ulonglong uVar24;
  undefined8 uVar25;
  uint uVar26;
  longlong lVar27;
  uint *puVar28;
  undefined *puVar29;
  longlong *plVar30;
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
  float fVar42;
  float fStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
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
  undefined8 uStack_178;
  undefined8 uStack_170;
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
  plVar30 = param_2;
  cVar17 = pdb_140e94b40();
  if (cVar17 == '\0') {
    lStack_128 = 0;
    goto LAB_1425829c4;
  }
  plVar30 = (longlong *)&UNK_14351c743;
  lVar27 = 0x4a;
  uVar24 = 0x4a;
  lVar19 = pdb_142585200(&UNK_14351c743);
  if (lVar19 != 1) {
LAB_1425828a2:
    puVar29 = &UNK_14351bdcd;
    puVar31 = &UNK_14351bd9f;
    do {
      bVar6 = puVar29[-1];
      uVar18 = (uint)(char)bVar6;
      if ((char)bVar6 < '\0') {
        bVar7 = puVar29[-2];
        if ((char)bVar7 < -0x40) {
          bVar8 = puVar29[-3];
          if ((char)bVar8 < -0x40) {
            pbVar1 = puVar29 + -4;
            puVar29 = puVar29 + -4;
            uVar18 = bVar8 & 0x3f | (*pbVar1 & 7) << 6;
          }
          else {
            puVar29 = puVar29 + -3;
            uVar18 = bVar8 & 0xf;
          }
          uVar18 = bVar7 & 0x3f | uVar18 << 6;
        }
        else {
          puVar29 = puVar29 + -2;
          uVar18 = bVar7 & 0x1f;
        }
        uVar18 = (uint)(bVar6 & 0x3f) | uVar18 << 6;
        if (uVar18 != 0x5c) goto LAB_142582924;
LAB_14258293d:
        if ((undefined *)0x2e < puVar29 + -0x14351bd9e) goto LAB_142582fd3;
        lVar19 = 0x2e - (longlong)(puVar29 + -0x14351bd9e);
        puVar31 = puVar29 + 1;
        goto LAB_142582960;
      }
      puVar29 = puVar29 + -1;
      if (uVar18 == 0x5c) goto LAB_14258293d;
LAB_142582924:
      if (uVar18 == 0x2f) goto LAB_14258293d;
    } while (puVar29 != &UNK_14351bd9f);
    lVar19 = 0x2e;
LAB_142582960:
    plVar21 = (longlong *)pdb_140e97000();
    if (((char)plVar21[0xd] == '\x01') ||
       (plVar21 = (longlong *)pdb_142d8ec20(plVar21,0), plVar21 != (longlong *)0x0)) {
      if (*plVar21 != 0) goto LAB_142582f82;
      *plVar21 = -1;
      plStack_100 = plVar21;
      uStack_120 = pdb_140e94f10(plVar21 + 1,plVar30,lVar27,puVar31,lVar19,1,0);
      *plStack_100 = *plStack_100 + 1;
      lStack_128 = 1;
LAB_1425829c4:
      uVar25 = CONCAT71((int7)((ulonglong)plVar30 >> 8),4);
      plStack_110 = (longlong *)pdb_1409d2d80(*param_2);
      uVar16 = _UNK_142e377e4;
      uVar18 = _DAT_142e377e0;
      fVar15 = _DAT_142e36f28;
      lStack_108 = *param_1;
      lVar19 = param_1[1];
      puVar28 = *(uint **)(lStack_108 + 0xf8);
      puVar2 = puVar28 + *(longlong *)(lStack_108 + 0x100);
      plStack_100 = (longlong *)CONCAT71(plStack_100._1_7_,*(char *)(lStack_108 + 0x108));
      lVar27 = 0;
      lStack_118 = 8;
      lStack_f8 = 0;
      lStack_f0 = 0;
      lStack_e8 = 0;
      uVar26 = 0;
      uStack_130 = uVar25;
      if (*(char *)(lStack_108 + 0x108) != '\0') goto LAB_142582bb0;
      do {
        if (uVar26 == (uint)lVar27) {
          do {
            if (puVar28 == puVar2) goto LAB_142582eb6;
            uVar26 = *puVar28;
            puVar28 = puVar28 + 1;
            lVar27 = *(longlong *)(*(longlong *)(lVar19 + 0x100) + 0x58 + (ulonglong)uVar26 * 0xa0);
          } while (lVar27 == 0);
          lVar22 = *(longlong *)(lVar19 + 0x100) + (ulonglong)uVar26 * 0xa0;
          uVar24 = (ulonglong)*(uint *)(lVar22 + 0x94);
          lVar3 = *(longlong *)(lVar19 + 0x1a0) + uVar24 * 0x48;
          uVar24 = *(ulonglong *)(*(longlong *)(lVar19 + 0x1a0) + 0x40 + uVar24 * 0x48);
          if ((*(ulonglong *)(lStack_108 + 0x110) < uVar24) &&
             (uVar20 = *(ulonglong *)
                        (*(longlong *)(lVar3 + 0x38) + *(ulonglong *)(lStack_108 + 0x110) * 8),
             uVar20 != 0)) {
            lStack_f8 = *(longlong *)(*(longlong *)(lVar3 + 0x18) + 0x10 + ~uVar20 * 0x30);
            uVar20 = *(ulonglong *)(lStack_108 + 0x118);
            if (uVar24 <= uVar20) goto LAB_142582b3b;
LAB_142582b05:
            uVar20 = *(ulonglong *)(*(longlong *)(lVar3 + 0x38) + uVar20 * 8);
            if (uVar20 == 0) goto LAB_142582b3b;
            lStack_f0 = *(longlong *)(*(longlong *)(lVar3 + 0x18) + 0x10 + ~uVar20 * 0x30);
            uVar20 = *(ulonglong *)(lStack_108 + 0x120);
            if (uVar20 < uVar24) goto LAB_142582b52;
LAB_142582b7c:
            lStack_e8 = 0;
          }
          else {
            lStack_f8 = 0;
            uVar20 = *(ulonglong *)(lStack_108 + 0x118);
            if (uVar20 < uVar24) goto LAB_142582b05;
LAB_142582b3b:
            lStack_f0 = 0;
            uVar20 = *(ulonglong *)(lStack_108 + 0x120);
            if (uVar24 <= uVar20) goto LAB_142582b7c;
LAB_142582b52:
            uVar24 = *(ulonglong *)(*(longlong *)(lVar3 + 0x38) + uVar20 * 8);
            if (uVar24 == 0) goto LAB_142582b7c;
            lStack_e8 = *(longlong *)(*(longlong *)(lVar3 + 0x18) + 0x10 + ~uVar24 * 0x30);
          }
          lStack_118 = *(longlong *)(lVar22 + 0x50);
          uVar26 = 0;
        }
        uVar10 = ~*(uint *)(lStack_118 + 8 + (ulonglong)uVar26 * 0x10);
        while( true ) {
          uVar24 = (ulonglong)uVar10;
          lVar3 = lStack_f8 + uVar24 * 0xc;
          puVar4 = (undefined4 *)(lStack_e8 + uVar24 * 0x18);
          pfVar23 = (float *)(uVar24 * 0x30 + lStack_f0);
          fStack_138 = pfVar23[6];
          uStack_140 = *(undefined8 *)(pfVar23 + 4);
          fVar39 = pfVar23[7];
          fVar40 = pfVar23[8];
          fVar14 = pfVar23[9];
          fStack_17c = (float)*(undefined8 *)(pfVar23 + 8);
          fVar33 = (float)((ulonglong)*(undefined8 *)(pfVar23 + 8) >> 0x20);
          fVar11 = *pfVar23;
          fVar12 = pfVar23[1];
          fVar13 = pfVar23[3];
          fStack_168 = pfVar23[4];
          fStack_164 = pfVar23[5];
          fStack_160 = pfVar23[6];
          fVar5 = pfVar23[2];
          fVar42 = fVar5 + fVar5;
          fVar34 = fVar12 + fVar12;
          fVar38 = fVar11 * (fVar11 + fVar11);
          fVar35 = (fVar11 + fVar11) * fVar13;
          fVar41 = fVar42 * fVar11 - fVar34 * fVar13;
          fVar36 = fVar35 + fVar42 * fVar12;
          fVar37 = fVar15 - (fVar38 + fVar12 * fVar34);
          fStack_18c = pfVar23[7];
          fStack_198 = fStack_18c * (fVar15 - (fVar12 * fVar34 + fVar5 * fVar42));
          fStack_194 = fStack_18c * (fVar34 * fVar11 + fVar13 * fVar42);
          fStack_190 = fStack_18c * fVar41;
          fStack_18c = fStack_18c * fVar41;
          fStack_188 = fStack_17c * (fVar34 * fVar11 - fVar13 * fVar42);
          fStack_184 = fStack_17c * (fVar15 - (fVar5 * fVar42 + fVar38));
          fStack_180 = fStack_17c * fVar36;
          fStack_17c = fStack_17c * fVar36;
          uStack_178 = CONCAT44(fVar33 * (fVar42 * fVar12 - fVar35),
                                fVar33 * (fVar34 * fVar13 + fVar42 * fVar11));
          uStack_170 = CONCAT44(fVar33 * fVar37,fVar33 * fVar37);
          fStack_15c = fStack_160;
          pdb_140e07fe0(&fStack_1c8,&fStack_198);
          fStack_168 = (float)pdb_140de85e0(*puVar4,puVar4[1]);
          fVar39 = (float)((uint)fVar39 & uVar18);
          fVar40 = (float)((uint)fVar40 & uVar18);
          if (fVar40 <= (float)((uint)fVar14 & uVar16)) {
            fVar40 = (float)((uint)fVar14 & uVar16);
          }
          if (fVar39 <= fVar40) {
            fVar39 = fVar40;
          }
          fStack_160 = (float)(puVar4[5] << 0x1f | puVar4[3]);
          fStack_164 = (float)puVar4[2];
          fStack_15c = (float)puVar4[4];
          uStack_178 = uStack_1a8;
          uStack_170 = uStack_1a0;
          fStack_188 = (float)uStack_1b8;
          fStack_184 = (float)uStack_1b4;
          fStack_180 = (float)uStack_1b0;
          fStack_17c = (float)uStack_1ac;
          fStack_198 = fStack_1c8;
          fStack_194 = (float)uStack_1c4;
          fStack_190 = (float)uStack_1c0;
          fStack_18c = (float)uStack_1bc;
          pdb_140954320(uStack_130,lVar3,&uStack_140,fVar39,&fStack_198,&UNK_14351c1d0);
          uVar26 = uVar26 + 1;
          if ((char)plStack_100 == '\0') break;
LAB_142582bb0:
          uVar10 = uVar26;
          if (uVar26 == (uint)lVar27) {
            do {
              if (puVar28 == puVar2) goto LAB_142582eb6;
              uVar26 = *puVar28;
              puVar28 = puVar28 + 1;
              lVar27 = *(longlong *)
                        (*(longlong *)(lVar19 + 0x1a0) + 0x10 + (ulonglong)uVar26 * 0x48);
            } while (lVar27 == 0);
            lVar3 = *(longlong *)(lVar19 + 0x1a0) + (ulonglong)uVar26 * 0x48;
            uVar24 = *(ulonglong *)(lVar3 + 0x40);
            if ((*(ulonglong *)(lStack_108 + 0x110) < uVar24) &&
               (uVar20 = *(ulonglong *)
                          (*(longlong *)(lVar3 + 0x38) + *(ulonglong *)(lStack_108 + 0x110) * 8),
               uVar20 != 0)) {
              lStack_f8 = *(longlong *)(*(longlong *)(lVar3 + 0x18) + 0x10 + ~uVar20 * 0x30);
              uVar20 = *(ulonglong *)(lStack_108 + 0x118);
              if (uVar24 <= uVar20) goto LAB_142582c82;
LAB_142582c4c:
              uVar20 = *(ulonglong *)(*(longlong *)(lVar3 + 0x38) + uVar20 * 8);
              if (uVar20 == 0) goto LAB_142582c82;
              lStack_f0 = *(longlong *)(*(longlong *)(lVar3 + 0x18) + 0x10 + ~uVar20 * 0x30);
              uVar20 = *(ulonglong *)(lStack_108 + 0x120);
              if (uVar20 < uVar24) goto LAB_142582c99;
LAB_142582cc3:
              lStack_e8 = 0;
            }
            else {
              lStack_f8 = 0;
              uVar20 = *(ulonglong *)(lStack_108 + 0x118);
              if (uVar20 < uVar24) goto LAB_142582c4c;
LAB_142582c82:
              lStack_f0 = 0;
              uVar20 = *(ulonglong *)(lStack_108 + 0x120);
              if (uVar24 <= uVar20) goto LAB_142582cc3;
LAB_142582c99:
              uVar24 = *(ulonglong *)(*(longlong *)(lVar3 + 0x38) + uVar20 * 8);
              if (uVar24 == 0) goto LAB_142582cc3;
              lStack_e8 = *(longlong *)(*(longlong *)(lVar3 + 0x18) + 0x10 + ~uVar24 * 0x30);
            }
            uVar26 = 0;
            uVar10 = uVar26;
          }
        }
      } while( true );
    }
    goto LAB_142582fc7;
  }
  if (uVar24 < 0x4b) {
    plVar30 = (longlong *)&UNK_14351c743;
    uVar20 = pdb_142585200(&UNK_14351c743);
    if ((uVar20 & 1) != 0) {
      if (0x4a < uVar24 + 2) goto LAB_142583016;
      lVar27 = 0x48 - uVar24;
      plVar30 = (longlong *)(&UNK_14351c745 + uVar24);
    }
    goto LAB_1425828a2;
  }
  goto LAB_142582ff6;
LAB_142582eb6:
  param_2 = plStack_110;
  pdb_140e9a350(plStack_110);
  pdb_140e9a350();
  LOCK();
  plVar30 = (longlong *)*param_2;
  bVar32 = plVar30 == (longlong *)0x8;
  if (bVar32) {
    *param_2 = 0;
    plVar30 = (longlong *)0x8;
  }
  UNLOCK();
  if (!bVar32) goto LAB_142582f8f;
  while( true ) {
    if (lStack_128 == 0) {
      return plVar30;
    }
    plVar30 = (longlong *)pdb_140e97000();
    if (((char)plVar30[0xd] != '\x01') &&
       (plVar30 = (longlong *)pdb_142d8ec20(plVar30,0), plVar30 == (longlong *)0x0)) break;
    if (*plVar30 == 0) {
      *plVar30 = -1;
      plStack_100 = plVar30;
      pdb_140e95370(plVar30 + 1,uStack_120);
      *plStack_100 = *plStack_100 + 1;
      return plStack_100;
    }
LAB_142582f82:
    pdb_142dc8090(&UNK_143326a50);
LAB_142582f8f:
    plVar30 = (longlong *)pdb_142dbca40(param_2);
  }
LAB_142582fc7:
  pdb_142dc7890(&UNK_143326860);
LAB_142582fd3:
  pdb_142dc8070(&UNK_14351bd9f,0x2e);
LAB_142582ff6:
  pdb_142dc8070(&UNK_14351c743,0x4a,0);
LAB_142583016:
  pdb_142dc8070(&UNK_14351c743,0x4a);
  pcVar9 = (code *)swi(3);
  plVar30 = (longlong *)(*pcVar9)();
  return plVar30;
}

