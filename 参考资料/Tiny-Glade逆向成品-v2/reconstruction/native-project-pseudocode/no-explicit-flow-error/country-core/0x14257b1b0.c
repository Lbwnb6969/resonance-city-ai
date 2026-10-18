// VA 0x14257b1b0, PDB extent 3051 bytes
// country_core::render::nani::systems::nani_update_balcony_door
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/systems.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::render::nani::systems::nani_update_balcony_door
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/systems.rs
   Extent: 3051 */

longlong * pdb_14257b1b0(longlong *param_1,longlong *param_2)

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
  longlong lVar26;
  uint *puVar27;
  undefined *puVar28;
  uint uVar29;
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
  float fStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
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
  undefined8 uStack_160;
  undefined8 uStack_148;
  float fStack_140;
  undefined8 uStack_138;
  longlong lStack_130;
  undefined8 uStack_128;
  longlong lStack_120;
  longlong *plStack_118;
  longlong lStack_110;
  longlong *plStack_108;
  longlong lStack_100;
  longlong lStack_f8;
  longlong lStack_f0;
  uint uStack_e8;
  char cStack_e1;
  undefined8 uStack_e0;
  
  uStack_e0 = 0xfffffffffffffffe;
  plVar30 = param_2;
  cVar17 = pdb_140e94b40();
  if (cVar17 == '\0') {
    lStack_130 = 0;
    goto LAB_14257b3b4;
  }
  plVar30 = (longlong *)&UNK_14351c845;
  lVar26 = 0x3d;
  uVar24 = 0x3d;
  lVar19 = pdb_142585200(&UNK_14351c845);
  if (lVar19 != 1) {
LAB_14257b292:
    puVar28 = &UNK_14351bdcd;
    puVar31 = &UNK_14351bd9f;
    do {
      bVar6 = puVar28[-1];
      uVar18 = (uint)(char)bVar6;
      if ((char)bVar6 < '\0') {
        bVar7 = puVar28[-2];
        if ((char)bVar7 < -0x40) {
          bVar8 = puVar28[-3];
          if ((char)bVar8 < -0x40) {
            pbVar1 = puVar28 + -4;
            puVar28 = puVar28 + -4;
            uVar18 = bVar8 & 0x3f | (*pbVar1 & 7) << 6;
          }
          else {
            puVar28 = puVar28 + -3;
            uVar18 = bVar8 & 0xf;
          }
          uVar18 = bVar7 & 0x3f | uVar18 << 6;
        }
        else {
          puVar28 = puVar28 + -2;
          uVar18 = bVar7 & 0x1f;
        }
        uVar18 = (uint)(bVar6 & 0x3f) | uVar18 << 6;
        if (uVar18 != 0x5c) goto LAB_14257b314;
LAB_14257b32d:
        if ((undefined *)0x2e < puVar28 + -0x14351bd9e) goto LAB_14257ba18;
        lVar19 = 0x2e - (longlong)(puVar28 + -0x14351bd9e);
        puVar31 = puVar28 + 1;
        goto LAB_14257b350;
      }
      puVar28 = puVar28 + -1;
      if (uVar18 == 0x5c) goto LAB_14257b32d;
LAB_14257b314:
      if (uVar18 == 0x2f) goto LAB_14257b32d;
    } while (puVar28 != &UNK_14351bd9f);
    lVar19 = 0x2e;
LAB_14257b350:
    plVar21 = (longlong *)pdb_140e97000();
    if (((char)plVar21[0xd] == '\x01') ||
       (plVar21 = (longlong *)pdb_142d8ec20(plVar21,0), plVar21 != (longlong *)0x0)) {
      if (*plVar21 != 0) goto LAB_14257b9c7;
      *plVar21 = -1;
      plStack_108 = plVar21;
      uStack_128 = pdb_140e94f10(plVar21 + 1,plVar30,lVar26,puVar31,lVar19,1,0);
      *plStack_108 = *plStack_108 + 1;
      lStack_130 = 1;
LAB_14257b3b4:
      uVar25 = CONCAT71((int7)((ulonglong)plVar30 >> 8),0x13);
      plStack_118 = (longlong *)pdb_1409d2d80(*param_2);
      uVar16 = _UNK_142e377e4;
      uVar18 = _DAT_142e377e0;
      fVar15 = _DAT_142e36f28;
      lStack_110 = *param_1;
      lVar19 = param_1[1];
      puVar27 = *(uint **)(lStack_110 + 0xf8);
      puVar2 = puVar27 + *(longlong *)(lStack_110 + 0x100);
      cStack_e1 = *(char *)(lStack_110 + 0x108);
      lVar26 = 0;
      lStack_120 = 8;
      lStack_100 = 0;
      lStack_f8 = 0;
      lStack_f0 = 0;
      uStack_e8 = 0;
      uVar29 = 0;
      uStack_138 = uVar25;
      if (cStack_e1 != '\0') goto LAB_14257b5e0;
      do {
        if (uVar29 == (uint)lVar26) {
          do {
            if (puVar27 == puVar2) goto LAB_14257b8fb;
            uVar29 = *puVar27;
            puVar27 = puVar27 + 1;
            lVar26 = *(longlong *)(*(longlong *)(lVar19 + 0x100) + 0x58 + (ulonglong)uVar29 * 0xa0);
          } while (lVar26 == 0);
          lVar22 = *(longlong *)(lVar19 + 0x100) + (ulonglong)uVar29 * 0xa0;
          lVar3 = *(longlong *)(lVar19 + 0x1a0) + (ulonglong)*(uint *)(lVar22 + 0x94) * 0x48;
          uVar24 = *(ulonglong *)
                    (*(longlong *)(lVar19 + 0x1a0) + 0x40 +
                    (ulonglong)*(uint *)(lVar22 + 0x94) * 0x48);
          if ((*(ulonglong *)(lStack_110 + 0x110) < uVar24) &&
             (uVar20 = *(ulonglong *)
                        (*(longlong *)(lVar3 + 0x38) + *(ulonglong *)(lStack_110 + 0x110) * 8),
             uVar20 != 0)) {
            lStack_100 = *(longlong *)(*(longlong *)(lVar3 + 0x18) + 0x10 + ~uVar20 * 0x30);
            uVar20 = *(ulonglong *)(lStack_110 + 0x118);
            if (uVar24 <= uVar20) goto LAB_14257b538;
LAB_14257b502:
            uVar20 = *(ulonglong *)(*(longlong *)(lVar3 + 0x38) + uVar20 * 8);
            if (uVar20 == 0) goto LAB_14257b538;
            lStack_f8 = *(longlong *)(*(longlong *)(lVar3 + 0x18) + 0x10 + ~uVar20 * 0x30);
            uVar20 = *(ulonglong *)(lStack_110 + 0x120);
            if (uVar20 < uVar24) goto LAB_14257b54f;
LAB_14257b579:
            lStack_f0 = 0;
          }
          else {
            lStack_100 = 0;
            uVar20 = *(ulonglong *)(lStack_110 + 0x118);
            if (uVar20 < uVar24) goto LAB_14257b502;
LAB_14257b538:
            lStack_f8 = 0;
            uVar20 = *(ulonglong *)(lStack_110 + 0x120);
            if (uVar24 <= uVar20) goto LAB_14257b579;
LAB_14257b54f:
            uVar24 = *(ulonglong *)(*(longlong *)(lVar3 + 0x38) + uVar20 * 8);
            if (uVar24 == 0) goto LAB_14257b579;
            lStack_f0 = *(longlong *)(*(longlong *)(lVar3 + 0x18) + 0x10 + ~uVar24 * 0x30);
          }
          uVar24 = *(ulonglong *)(lStack_110 + 0x128);
          uVar29 = 0;
          uStack_e8 = 0;
          if (uVar24 < *(ulonglong *)(lVar22 + 0x88)) {
            uStack_e8 = (uint)CONCAT71((int7)(uVar24 >> 8),
                                       *(longlong *)(*(longlong *)(lVar22 + 0x80) + uVar24 * 8) != 0
                                      );
          }
          lStack_120 = *(longlong *)(lVar22 + 0x50);
        }
        uVar10 = ~*(uint *)(lStack_120 + 8 + (ulonglong)uVar29 * 0x10);
        while( true ) {
          uVar24 = (ulonglong)uVar10;
          plStack_108 = (longlong *)(lStack_100 + uVar24 * 0xc);
          pfVar23 = (float *)(uVar24 * 0x30 + lStack_f8);
          puVar4 = (undefined4 *)(lStack_f0 + uVar24 * 4);
          fStack_140 = pfVar23[6];
          uStack_148 = *(undefined8 *)(pfVar23 + 4);
          fVar38 = pfVar23[7];
          fVar39 = pfVar23[8];
          fVar14 = pfVar23[9];
          fStack_17c = (float)*(undefined8 *)(pfVar23 + 8);
          fStack_16c = (float)((ulonglong)*(undefined8 *)(pfVar23 + 8) >> 0x20);
          fVar11 = *pfVar23;
          fVar12 = pfVar23[1];
          fVar13 = pfVar23[3];
          fStack_168 = pfVar23[4];
          fStack_164 = pfVar23[5];
          fVar5 = pfVar23[2];
          fVar41 = fVar5 + fVar5;
          fVar33 = fVar12 + fVar12;
          fVar37 = fVar11 * (fVar11 + fVar11);
          fVar34 = (fVar11 + fVar11) * fVar13;
          fVar40 = fVar41 * fVar11 - fVar33 * fVar13;
          fVar35 = fVar34 + fVar41 * fVar12;
          fVar36 = fVar15 - (fVar37 + fVar12 * fVar33);
          fStack_18c = pfVar23[7];
          fStack_198 = fStack_18c * (fVar15 - (fVar12 * fVar33 + fVar5 * fVar41));
          fStack_194 = fStack_18c * (fVar33 * fVar11 + fVar13 * fVar41);
          fStack_190 = fStack_18c * fVar40;
          fStack_18c = fStack_18c * fVar40;
          fStack_188 = fStack_17c * (fVar33 * fVar11 - fVar13 * fVar41);
          fStack_184 = fStack_17c * (fVar15 - (fVar5 * fVar41 + fVar37));
          fStack_180 = fStack_17c * fVar35;
          fStack_17c = fStack_17c * fVar35;
          fStack_178 = fStack_16c * (fVar33 * fVar13 + fVar41 * fVar11);
          fStack_174 = fStack_16c * (fVar41 * fVar12 - fVar34);
          fStack_170 = fStack_16c * fVar36;
          fStack_16c = fStack_16c * fVar36;
          uStack_160 = CONCAT44(pfVar23[6],pfVar23[6]);
          pdb_140e07fe0(&fStack_1c8,&fStack_198);
          fVar38 = (float)((uint)fVar38 & uVar18);
          fVar39 = (float)((uint)fVar39 & uVar18);
          if (fVar39 <= (float)((uint)fVar14 & uVar16)) {
            fVar39 = (float)((uint)fVar14 & uVar16);
          }
          if (fVar38 <= fVar39) {
            fVar38 = fVar39;
          }
          fStack_164 = (float)*puVar4;
          fStack_178 = (float)uStack_1a8;
          fStack_174 = (float)uStack_1a4;
          fStack_170 = (float)uStack_1a0;
          fStack_16c = (float)uStack_19c;
          fStack_188 = (float)uStack_1b8;
          fStack_184 = (float)uStack_1b4;
          fStack_180 = (float)uStack_1b0;
          fStack_17c = (float)uStack_1ac;
          fStack_198 = fStack_1c8;
          fStack_194 = (float)uStack_1c4;
          fStack_190 = (float)uStack_1c0;
          fStack_18c = (float)uStack_1bc;
          fStack_168 = (float)(uStack_e8 & 0xff);
          uStack_160 = 0;
          pdb_1409557b0(uStack_138,plStack_108,&uStack_148,fVar38,&fStack_198,&UNK_14351c098);
          uVar29 = uVar29 + 1;
          if (cStack_e1 == '\0') break;
LAB_14257b5e0:
          uVar10 = uVar29;
          if (uVar29 == (uint)lVar26) {
            do {
              if (puVar27 == puVar2) goto LAB_14257b8fb;
              uVar29 = *puVar27;
              puVar27 = puVar27 + 1;
              lVar26 = *(longlong *)
                        (*(longlong *)(lVar19 + 0x1a0) + 0x10 + (ulonglong)uVar29 * 0x48);
            } while (lVar26 == 0);
            lVar3 = *(longlong *)(lVar19 + 0x1a0) + (ulonglong)uVar29 * 0x48;
            uVar24 = *(ulonglong *)(lVar3 + 0x40);
            if ((*(ulonglong *)(lStack_110 + 0x110) < uVar24) &&
               (uVar20 = *(ulonglong *)
                          (*(longlong *)(lVar3 + 0x38) + *(ulonglong *)(lStack_110 + 0x110) * 8),
               uVar20 != 0)) {
              lStack_100 = *(longlong *)(*(longlong *)(lVar3 + 0x18) + 0x10 + ~uVar20 * 0x30);
              uVar20 = *(ulonglong *)(lStack_110 + 0x118);
              if (uVar24 <= uVar20) goto LAB_14257b6af;
LAB_14257b679:
              uVar20 = *(ulonglong *)(*(longlong *)(lVar3 + 0x38) + uVar20 * 8);
              if (uVar20 == 0) goto LAB_14257b6af;
              lStack_f8 = *(longlong *)(*(longlong *)(lVar3 + 0x18) + 0x10 + ~uVar20 * 0x30);
              uVar20 = *(ulonglong *)(lStack_110 + 0x120);
              if (uVar20 < uVar24) goto LAB_14257b6c6;
LAB_14257b6f0:
              lStack_f0 = 0;
            }
            else {
              lStack_100 = 0;
              uVar20 = *(ulonglong *)(lStack_110 + 0x118);
              if (uVar20 < uVar24) goto LAB_14257b679;
LAB_14257b6af:
              lStack_f8 = 0;
              uVar20 = *(ulonglong *)(lStack_110 + 0x120);
              if (uVar24 <= uVar20) goto LAB_14257b6f0;
LAB_14257b6c6:
              uVar20 = *(ulonglong *)(*(longlong *)(lVar3 + 0x38) + uVar20 * 8);
              if (uVar20 == 0) goto LAB_14257b6f0;
              lStack_f0 = *(longlong *)(*(longlong *)(lVar3 + 0x18) + 0x10 + ~uVar20 * 0x30);
            }
            uVar29 = 0;
            uStack_e8 = 0;
            uVar10 = uVar29;
            if (*(ulonglong *)(lStack_110 + 0x128) < uVar24) {
              uStack_e8 = (uint)CONCAT71((int7)((ulonglong)*(longlong *)(lVar3 + 0x38) >> 8),
                                         *(longlong *)
                                          (*(longlong *)(lVar3 + 0x38) +
                                          *(ulonglong *)(lStack_110 + 0x128) * 8) != 0);
            }
          }
        }
      } while( true );
    }
    goto LAB_14257ba0c;
  }
  if (uVar24 < 0x3e) {
    plVar30 = (longlong *)&UNK_14351c845;
    uVar20 = pdb_142585200(&UNK_14351c845);
    if ((uVar20 & 1) != 0) {
      if (0x3d < uVar24 + 2) goto LAB_14257ba5b;
      lVar26 = 0x3b - uVar24;
      plVar30 = (longlong *)(&UNK_14351c847 + uVar24);
    }
    goto LAB_14257b292;
  }
  goto LAB_14257ba3b;
LAB_14257b8fb:
  param_2 = plStack_118;
  pdb_140e9a350(plStack_118);
  pdb_140e9a350();
  LOCK();
  plVar30 = (longlong *)*param_2;
  bVar32 = plVar30 == (longlong *)0x8;
  if (bVar32) {
    *param_2 = 0;
    plVar30 = (longlong *)0x8;
  }
  UNLOCK();
  if (!bVar32) goto LAB_14257b9d4;
  while( true ) {
    if (lStack_130 == 0) {
      return plVar30;
    }
    plVar30 = (longlong *)pdb_140e97000();
    if (((char)plVar30[0xd] != '\x01') &&
       (plVar30 = (longlong *)pdb_142d8ec20(plVar30,0), plVar30 == (longlong *)0x0)) break;
    if (*plVar30 == 0) {
      *plVar30 = -1;
      plStack_108 = plVar30;
      pdb_140e95370(plVar30 + 1,uStack_128);
      *plStack_108 = *plStack_108 + 1;
      return plStack_108;
    }
LAB_14257b9c7:
    pdb_142dc8090(&UNK_143326a50);
LAB_14257b9d4:
    plVar30 = (longlong *)pdb_142dbca40(param_2);
  }
LAB_14257ba0c:
  pdb_142dc7890(&UNK_143326860);
LAB_14257ba18:
  pdb_142dc8070(&UNK_14351bd9f,0x2e);
LAB_14257ba3b:
  pdb_142dc8070(&UNK_14351c845,0x3d,0);
LAB_14257ba5b:
  pdb_142dc8070(&UNK_14351c845,0x3d);
  pcVar9 = (code *)swi(3);
  plVar30 = (longlong *)(*pcVar9)();
  return plVar30;
}

