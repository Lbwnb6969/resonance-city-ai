// VA 0x1425763a0, PDB extent 2971 bytes
// country_core::render::nani::systems::nani_update_smoke
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/systems.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::render::nani::systems::nani_update_smoke
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/systems.rs
   Extent: 2971 */

longlong * pdb_1425763a0(longlong *param_1,longlong *param_2)

{
  byte *pbVar1;
  uint *puVar2;
  longlong lVar3;
  float fVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  code *pcVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  uint uVar14;
  char cVar15;
  uint uVar16;
  uint uVar17;
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
  undefined4 *puVar29;
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
  float fStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
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
  undefined8 uStack_188;
  undefined8 uStack_180;
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
  uint uStack_10c;
  longlong *plStack_108;
  longlong lStack_100;
  longlong lStack_f8;
  longlong lStack_f0;
  char cStack_e1;
  undefined8 uStack_e0;
  
  uStack_e0 = 0xfffffffffffffffe;
  plVar30 = param_2;
  cVar15 = pdb_140e94b40();
  if (cVar15 == '\0') {
    lStack_138 = 0;
    goto LAB_1425765a4;
  }
  plVar30 = (longlong *)&UNK_14351c644;
  lVar26 = 0x36;
  uVar24 = 0x36;
  lVar19 = pdb_142585200(&UNK_14351c644);
  if (lVar19 != 1) {
LAB_142576482:
    puVar28 = &UNK_14351bdcd;
    puVar31 = &UNK_14351bd9f;
    do {
      bVar5 = puVar28[-1];
      uVar16 = (uint)(char)bVar5;
      if ((char)bVar5 < '\0') {
        bVar6 = puVar28[-2];
        if ((char)bVar6 < -0x40) {
          bVar7 = puVar28[-3];
          if ((char)bVar7 < -0x40) {
            pbVar1 = puVar28 + -4;
            puVar28 = puVar28 + -4;
            uVar16 = bVar7 & 0x3f | (*pbVar1 & 7) << 6;
          }
          else {
            puVar28 = puVar28 + -3;
            uVar16 = bVar7 & 0xf;
          }
          uVar16 = bVar6 & 0x3f | uVar16 << 6;
        }
        else {
          puVar28 = puVar28 + -2;
          uVar16 = bVar6 & 0x1f;
        }
        uVar16 = (uint)(bVar5 & 0x3f) | uVar16 << 6;
        if (uVar16 != 0x5c) goto LAB_142576504;
LAB_14257651d:
        if ((undefined *)0x2e < puVar28 + -0x14351bd9e) goto LAB_142576bb0;
        lVar19 = 0x2e - (longlong)(puVar28 + -0x14351bd9e);
        puVar31 = puVar28 + 1;
        goto LAB_142576540;
      }
      puVar28 = puVar28 + -1;
      if (uVar16 == 0x5c) goto LAB_14257651d;
LAB_142576504:
      if (uVar16 == 0x2f) goto LAB_14257651d;
    } while (puVar28 != &UNK_14351bd9f);
    lVar19 = 0x2e;
LAB_142576540:
    plVar21 = (longlong *)pdb_140e97000();
    if (((char)plVar21[0xd] == '\x01') ||
       (plVar21 = (longlong *)pdb_142d8ec20(plVar21,0), plVar21 != (longlong *)0x0)) {
      if (*plVar21 != 0) goto LAB_142576b5f;
      *plVar21 = -1;
      plStack_108 = plVar21;
      uStack_130 = pdb_140e94f10(plVar21 + 1,plVar30,lVar26,puVar31,lVar19,1,0);
      *plStack_108 = *plStack_108 + 1;
      lStack_138 = 1;
LAB_1425765a4:
      uVar25 = CONCAT71((int7)((ulonglong)plVar30 >> 8),0x12);
      plStack_120 = (longlong *)pdb_1409d2d80(*param_2);
      uVar14 = _UNK_142e377e4;
      uVar16 = _DAT_142e377e0;
      fVar13 = _DAT_142e36f28;
      lStack_118 = *param_1;
      lVar19 = param_1[1];
      puVar27 = *(uint **)(lStack_118 + 0xf8);
      puVar2 = puVar27 + *(longlong *)(lStack_118 + 0x100);
      cStack_e1 = *(char *)(lStack_118 + 0x108);
      lVar26 = 0;
      lStack_128 = 8;
      lStack_100 = 0;
      lStack_f8 = 0;
      lStack_f0 = 0;
      uVar18 = 0;
      uStack_140 = uVar25;
      if (cStack_e1 != '\0') goto LAB_142576790;
      do {
        if (uVar18 == (uint)lVar26) {
          do {
            if (puVar27 == puVar2) goto LAB_142576a93;
            uVar18 = *puVar27;
            puVar27 = puVar27 + 1;
            lVar26 = *(longlong *)(*(longlong *)(lVar19 + 0x100) + 0x58 + (ulonglong)uVar18 * 0xa0);
          } while (lVar26 == 0);
          lVar22 = *(longlong *)(lVar19 + 0x100) + (ulonglong)uVar18 * 0xa0;
          uVar24 = (ulonglong)*(uint *)(lVar22 + 0x94);
          lVar3 = *(longlong *)(lVar19 + 0x1a0) + uVar24 * 0x48;
          uVar24 = *(ulonglong *)(*(longlong *)(lVar19 + 0x1a0) + 0x40 + uVar24 * 0x48);
          if ((*(ulonglong *)(lStack_118 + 0x110) < uVar24) &&
             (uVar20 = *(ulonglong *)
                        (*(longlong *)(lVar3 + 0x38) + *(ulonglong *)(lStack_118 + 0x110) * 8),
             uVar20 != 0)) {
            lStack_100 = *(longlong *)(*(longlong *)(lVar3 + 0x18) + 0x10 + ~uVar20 * 0x30);
            uVar20 = *(ulonglong *)(lStack_118 + 0x118);
            if (uVar24 <= uVar20) goto LAB_14257671b;
LAB_1425766e5:
            uVar20 = *(ulonglong *)(*(longlong *)(lVar3 + 0x38) + uVar20 * 8);
            if (uVar20 == 0) goto LAB_14257671b;
            lStack_f8 = *(longlong *)(*(longlong *)(lVar3 + 0x18) + 0x10 + ~uVar20 * 0x30);
            uVar20 = *(ulonglong *)(lStack_118 + 0x120);
            if (uVar20 < uVar24) goto LAB_142576732;
LAB_14257675c:
            lStack_f0 = 0;
          }
          else {
            lStack_100 = 0;
            uVar20 = *(ulonglong *)(lStack_118 + 0x118);
            if (uVar20 < uVar24) goto LAB_1425766e5;
LAB_14257671b:
            lStack_f8 = 0;
            uVar20 = *(ulonglong *)(lStack_118 + 0x120);
            if (uVar24 <= uVar20) goto LAB_14257675c;
LAB_142576732:
            uVar24 = *(ulonglong *)(*(longlong *)(lVar3 + 0x38) + uVar20 * 8);
            if (uVar24 == 0) goto LAB_14257675c;
            lStack_f0 = *(longlong *)(*(longlong *)(lVar3 + 0x18) + 0x10 + ~uVar24 * 0x30);
          }
          lStack_128 = *(longlong *)(lVar22 + 0x50);
          uVar18 = 0;
        }
        uVar17 = ~*(uint *)(lStack_128 + 8 + (ulonglong)uVar18 * 0x10);
        while( true ) {
          uStack_10c = uVar18;
          uVar24 = (ulonglong)uVar17;
          plStack_108 = (longlong *)(lStack_100 + uVar24 * 0xc);
          pfVar23 = (float *)(uVar24 * 0x30 + lStack_f8);
          puVar29 = (undefined4 *)(uVar24 * 0x10 + lStack_f0);
          bVar5 = *(byte *)(puVar29 + 3);
          fStack_148 = pfVar23[6];
          uStack_150 = *(undefined8 *)(pfVar23 + 4);
          fVar39 = pfVar23[7];
          fVar40 = pfVar23[8];
          fVar12 = pfVar23[9];
          fStack_18c = (float)*(undefined8 *)(pfVar23 + 8);
          fVar33 = (float)((ulonglong)*(undefined8 *)(pfVar23 + 8) >> 0x20);
          fVar9 = *pfVar23;
          fVar10 = pfVar23[1];
          fVar11 = pfVar23[3];
          fStack_178 = pfVar23[4];
          fStack_174 = pfVar23[5];
          fStack_170 = pfVar23[6];
          fVar4 = pfVar23[2];
          fVar42 = fVar4 + fVar4;
          fVar34 = fVar10 + fVar10;
          fVar38 = fVar9 * (fVar9 + fVar9);
          fVar35 = (fVar9 + fVar9) * fVar11;
          fVar41 = fVar42 * fVar9 - fVar34 * fVar11;
          fVar36 = fVar35 + fVar42 * fVar10;
          fVar37 = fVar13 - (fVar38 + fVar10 * fVar34);
          fStack_19c = pfVar23[7];
          fStack_1a8 = fStack_19c * (fVar13 - (fVar10 * fVar34 + fVar4 * fVar42));
          fStack_1a4 = fStack_19c * (fVar34 * fVar9 + fVar11 * fVar42);
          fStack_1a0 = fStack_19c * fVar41;
          fStack_19c = fStack_19c * fVar41;
          fStack_198 = fStack_18c * (fVar34 * fVar9 - fVar11 * fVar42);
          fStack_194 = fStack_18c * (fVar13 - (fVar4 * fVar42 + fVar38));
          fStack_190 = fStack_18c * fVar36;
          fStack_18c = fStack_18c * fVar36;
          uStack_188 = CONCAT44(fVar33 * (fVar42 * fVar10 - fVar35),
                                fVar33 * (fVar34 * fVar11 + fVar42 * fVar9));
          uStack_180 = CONCAT44(fVar33 * fVar37,fVar33 * fVar37);
          fStack_16c = fStack_170;
          pdb_140e07fe0(&fStack_1d8,&fStack_1a8);
          fVar39 = (float)((uint)fVar39 & uVar16);
          fVar40 = (float)((uint)fVar40 & uVar16);
          if (fVar40 <= (float)((uint)fVar12 & uVar14)) {
            fVar40 = (float)((uint)fVar12 & uVar14);
          }
          if (fVar39 <= fVar40) {
            fVar39 = fVar40;
          }
          fStack_174 = (float)*puVar29;
          fStack_170 = (float)puVar29[2];
          uStack_188 = uStack_1b8;
          uStack_180 = uStack_1b0;
          fStack_198 = (float)uStack_1c8;
          fStack_194 = (float)uStack_1c4;
          fStack_190 = (float)uStack_1c0;
          fStack_18c = (float)uStack_1bc;
          fStack_1a8 = fStack_1d8;
          fStack_1a4 = (float)uStack_1d4;
          fStack_1a0 = (float)uStack_1d0;
          fStack_19c = (float)uStack_1cc;
          fStack_178 = (float)(uint)bVar5;
          fStack_16c = 0.0;
          pdb_140956830(uStack_140,plStack_108,&uStack_150,fVar39,&fStack_1a8,&UNK_14351be60);
          uVar18 = uStack_10c + 1;
          if (cStack_e1 == '\0') break;
LAB_142576790:
          uVar17 = uVar18;
          if (uVar18 == (uint)lVar26) {
            do {
              if (puVar27 == puVar2) goto LAB_142576a93;
              uVar18 = *puVar27;
              puVar27 = puVar27 + 1;
              lVar26 = *(longlong *)
                        (*(longlong *)(lVar19 + 0x1a0) + 0x10 + (ulonglong)uVar18 * 0x48);
            } while (lVar26 == 0);
            lVar3 = *(longlong *)(lVar19 + 0x1a0) + (ulonglong)uVar18 * 0x48;
            uVar24 = *(ulonglong *)(lVar3 + 0x40);
            if ((*(ulonglong *)(lStack_118 + 0x110) < uVar24) &&
               (uVar20 = *(ulonglong *)
                          (*(longlong *)(lVar3 + 0x38) + *(ulonglong *)(lStack_118 + 0x110) * 8),
               uVar20 != 0)) {
              lStack_100 = *(longlong *)(*(longlong *)(lVar3 + 0x18) + 0x10 + ~uVar20 * 0x30);
              uVar20 = *(ulonglong *)(lStack_118 + 0x118);
              if (uVar24 <= uVar20) goto LAB_142576862;
LAB_14257682c:
              uVar20 = *(ulonglong *)(*(longlong *)(lVar3 + 0x38) + uVar20 * 8);
              if (uVar20 == 0) goto LAB_142576862;
              lStack_f8 = *(longlong *)(*(longlong *)(lVar3 + 0x18) + 0x10 + ~uVar20 * 0x30);
              uVar20 = *(ulonglong *)(lStack_118 + 0x120);
              if (uVar20 < uVar24) goto LAB_142576879;
LAB_1425768a3:
              lStack_f0 = 0;
            }
            else {
              lStack_100 = 0;
              uVar20 = *(ulonglong *)(lStack_118 + 0x118);
              if (uVar20 < uVar24) goto LAB_14257682c;
LAB_142576862:
              lStack_f8 = 0;
              uVar20 = *(ulonglong *)(lStack_118 + 0x120);
              if (uVar24 <= uVar20) goto LAB_1425768a3;
LAB_142576879:
              uVar24 = *(ulonglong *)(*(longlong *)(lVar3 + 0x38) + uVar20 * 8);
              if (uVar24 == 0) goto LAB_1425768a3;
              lStack_f0 = *(longlong *)(*(longlong *)(lVar3 + 0x18) + 0x10 + ~uVar24 * 0x30);
            }
            uVar17 = 0;
            uVar18 = uVar17;
          }
        }
      } while( true );
    }
    goto LAB_142576ba4;
  }
  if (uVar24 < 0x37) {
    plVar30 = (longlong *)&UNK_14351c644;
    uVar20 = pdb_142585200(&UNK_14351c644);
    if ((uVar20 & 1) != 0) {
      if (0x36 < uVar24 + 2) goto LAB_142576bf3;
      lVar26 = 0x34 - uVar24;
      plVar30 = (longlong *)(&UNK_14351c646 + uVar24);
    }
    goto LAB_142576482;
  }
  goto LAB_142576bd3;
LAB_142576a93:
  param_2 = plStack_120;
  pdb_140e9a350(plStack_120);
  pdb_140e9a350();
  LOCK();
  plVar30 = (longlong *)*param_2;
  bVar32 = plVar30 == (longlong *)0x8;
  if (bVar32) {
    *param_2 = 0;
    plVar30 = (longlong *)0x8;
  }
  UNLOCK();
  if (!bVar32) goto LAB_142576b6c;
  while( true ) {
    if (lStack_138 == 0) {
      return plVar30;
    }
    plVar30 = (longlong *)pdb_140e97000();
    if (((char)plVar30[0xd] != '\x01') &&
       (plVar30 = (longlong *)pdb_142d8ec20(plVar30,0), plVar30 == (longlong *)0x0)) break;
    if (*plVar30 == 0) {
      *plVar30 = -1;
      plStack_108 = plVar30;
      pdb_140e95370(plVar30 + 1,uStack_130);
      *plStack_108 = *plStack_108 + 1;
      return plStack_108;
    }
LAB_142576b5f:
    pdb_142dc8090(&UNK_143326a50);
LAB_142576b6c:
    plVar30 = (longlong *)pdb_142dbca40(param_2);
  }
LAB_142576ba4:
  pdb_142dc7890(&UNK_143326860);
LAB_142576bb0:
  pdb_142dc8070(&UNK_14351bd9f,0x2e);
LAB_142576bd3:
  pdb_142dc8070(&UNK_14351c644,0x36,0);
LAB_142576bf3:
  pdb_142dc8070(&UNK_14351c644,0x36);
  pcVar8 = (code *)swi(3);
  plVar30 = (longlong *)(*pcVar8)();
  return plVar30;
}

