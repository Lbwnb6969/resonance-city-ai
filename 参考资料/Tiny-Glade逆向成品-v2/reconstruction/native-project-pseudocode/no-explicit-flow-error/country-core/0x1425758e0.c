// VA 0x1425758e0, PDB extent 2747 bytes
// country_core::render::nani::systems::nani_update_plant
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/systems.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::render::nani::systems::nani_update_plant
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/systems.rs
   Extent: 2747 */

longlong * pdb_1425758e0(longlong *param_1,longlong *param_2)

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
  uint uVar25;
  longlong lVar26;
  uint *puVar27;
  undefined *puVar28;
  longlong *plVar29;
  undefined *puVar30;
  bool bVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fStack_1b8;
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
  float fStack_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  undefined8 uStack_138;
  float fStack_130;
  undefined8 uStack_128;
  longlong lStack_120;
  undefined8 uStack_118;
  longlong lStack_110;
  longlong *plStack_108;
  longlong lStack_100;
  longlong *plStack_f8;
  longlong lStack_f0;
  longlong lStack_e8;
  undefined8 uStack_e0;
  
  uStack_e0 = 0xfffffffffffffffe;
  plVar29 = param_2;
  cVar16 = pdb_140e94b40();
  if (cVar16 == '\0') {
    lStack_120 = 0;
    goto LAB_142575ae4;
  }
  plVar29 = (longlong *)&UNK_14351c439;
  lVar26 = 0x36;
  uVar23 = 0x36;
  lVar18 = pdb_142585200(&UNK_14351c439);
  if (lVar18 != 1) {
LAB_1425759c2:
    puVar28 = &UNK_14351bdcd;
    puVar30 = &UNK_14351bd9f;
    do {
      bVar5 = puVar28[-1];
      uVar17 = (uint)(char)bVar5;
      if ((char)bVar5 < '\0') {
        bVar6 = puVar28[-2];
        if ((char)bVar6 < -0x40) {
          bVar7 = puVar28[-3];
          if ((char)bVar7 < -0x40) {
            pbVar1 = puVar28 + -4;
            puVar28 = puVar28 + -4;
            uVar17 = bVar7 & 0x3f | (*pbVar1 & 7) << 6;
          }
          else {
            puVar28 = puVar28 + -3;
            uVar17 = bVar7 & 0xf;
          }
          uVar17 = bVar6 & 0x3f | uVar17 << 6;
        }
        else {
          puVar28 = puVar28 + -2;
          uVar17 = bVar6 & 0x1f;
        }
        uVar17 = (uint)(bVar5 & 0x3f) | uVar17 << 6;
        if (uVar17 != 0x5c) goto LAB_142575a44;
LAB_142575a5d:
        if ((undefined *)0x2e < puVar28 + -0x14351bd9e) goto LAB_142576011;
        lVar18 = 0x2e - (longlong)(puVar28 + -0x14351bd9e);
        puVar30 = puVar28 + 1;
        goto LAB_142575a80;
      }
      puVar28 = puVar28 + -1;
      if (uVar17 == 0x5c) goto LAB_142575a5d;
LAB_142575a44:
      if (uVar17 == 0x2f) goto LAB_142575a5d;
    } while (puVar28 != &UNK_14351bd9f);
    lVar18 = 0x2e;
LAB_142575a80:
    plVar20 = (longlong *)pdb_140e97000();
    if (((char)plVar20[0xd] == '\x01') ||
       (plVar20 = (longlong *)pdb_142d8ec20(plVar20,0), plVar20 != (longlong *)0x0)) {
      if (*plVar20 != 0) goto LAB_142575fc0;
      *plVar20 = -1;
      plStack_f8 = plVar20;
      uStack_118 = pdb_140e94f10(plVar20 + 1,plVar29,lVar26,puVar30,lVar18,1,0);
      *plStack_f8 = *plStack_f8 + 1;
      lStack_120 = 1;
LAB_142575ae4:
      uVar24 = CONCAT71((int7)((ulonglong)plVar29 >> 8),8);
      plStack_108 = (longlong *)pdb_1409d2d80(*param_2);
      uVar15 = _UNK_142e377e4;
      uVar17 = _DAT_142e377e0;
      fVar14 = _DAT_142e36f28;
      lStack_100 = *param_1;
      lVar18 = param_1[1];
      puVar27 = *(uint **)(lStack_100 + 0xf8);
      puVar2 = puVar27 + *(longlong *)(lStack_100 + 0x100);
      plStack_f8 = (longlong *)CONCAT71(plStack_f8._1_7_,*(char *)(lStack_100 + 0x108));
      lVar26 = 0;
      lStack_110 = 8;
      lStack_f0 = 0;
      lStack_e8 = 0;
      uVar25 = 0;
      uStack_128 = uVar24;
      if (*(char *)(lStack_100 + 0x108) != '\0') goto LAB_142575c80;
      do {
        if (uVar25 == (uint)lVar26) {
          do {
            if (puVar27 == puVar2) goto LAB_142575ef4;
            uVar25 = *puVar27;
            puVar27 = puVar27 + 1;
            lVar26 = *(longlong *)(*(longlong *)(lVar18 + 0x100) + 0x58 + (ulonglong)uVar25 * 0xa0);
          } while (lVar26 == 0);
          lVar21 = *(longlong *)(lVar18 + 0x100) + (ulonglong)uVar25 * 0xa0;
          uVar23 = (ulonglong)*(uint *)(lVar21 + 0x94);
          lVar3 = *(longlong *)(lVar18 + 0x1a0) + uVar23 * 0x48;
          uVar23 = *(ulonglong *)(*(longlong *)(lVar18 + 0x1a0) + 0x40 + uVar23 * 0x48);
          if ((*(ulonglong *)(lStack_100 + 0x110) < uVar23) &&
             (uVar19 = *(ulonglong *)
                        (*(longlong *)(lVar3 + 0x38) + *(ulonglong *)(lStack_100 + 0x110) * 8),
             uVar19 != 0)) {
            lStack_f0 = *(longlong *)(*(longlong *)(lVar3 + 0x18) + 0x10 + ~uVar19 * 0x30);
            uVar19 = *(ulonglong *)(lStack_100 + 0x118);
            if (uVar23 <= uVar19) goto LAB_142575c54;
LAB_142575c2a:
            uVar23 = *(ulonglong *)(*(longlong *)(lVar3 + 0x38) + uVar19 * 8);
            if (uVar23 == 0) goto LAB_142575c54;
            lStack_e8 = *(longlong *)(*(longlong *)(lVar3 + 0x18) + 0x10 + ~uVar23 * 0x30);
          }
          else {
            lStack_f0 = 0;
            uVar19 = *(ulonglong *)(lStack_100 + 0x118);
            if (uVar19 < uVar23) goto LAB_142575c2a;
LAB_142575c54:
            lStack_e8 = 0;
          }
          lStack_110 = *(longlong *)(lVar21 + 0x50);
          uVar25 = 0;
        }
        uVar9 = ~*(uint *)(lStack_110 + 8 + (ulonglong)uVar25 * 0x10);
        while( true ) {
          lVar3 = lStack_f0 + (ulonglong)uVar9 * 0xc;
          pfVar22 = (float *)((ulonglong)uVar9 * 0x30 + lStack_e8);
          fStack_130 = pfVar22[6];
          uStack_138 = *(undefined8 *)(pfVar22 + 4);
          fVar37 = pfVar22[7];
          fVar38 = pfVar22[8];
          fVar13 = pfVar22[9];
          fStack_16c = (float)*(undefined8 *)(pfVar22 + 8);
          fStack_15c = (float)((ulonglong)*(undefined8 *)(pfVar22 + 8) >> 0x20);
          fVar10 = *pfVar22;
          fVar11 = pfVar22[1];
          fVar12 = pfVar22[3];
          fStack_158 = pfVar22[4];
          fStack_154 = pfVar22[5];
          fStack_150 = pfVar22[6];
          fVar4 = pfVar22[2];
          fVar40 = fVar4 + fVar4;
          fVar32 = fVar11 + fVar11;
          fVar36 = fVar10 * (fVar10 + fVar10);
          fVar33 = (fVar10 + fVar10) * fVar12;
          fVar39 = fVar40 * fVar10 - fVar32 * fVar12;
          fVar34 = fVar33 + fVar40 * fVar11;
          fVar35 = fVar14 - (fVar36 + fVar11 * fVar32);
          fStack_17c = pfVar22[7];
          fStack_188 = fStack_17c * (fVar14 - (fVar11 * fVar32 + fVar4 * fVar40));
          fStack_184 = fStack_17c * (fVar32 * fVar10 + fVar12 * fVar40);
          fStack_180 = fStack_17c * fVar39;
          fStack_17c = fStack_17c * fVar39;
          fStack_178 = fStack_16c * (fVar32 * fVar10 - fVar12 * fVar40);
          fStack_174 = fStack_16c * (fVar14 - (fVar4 * fVar40 + fVar36));
          fStack_170 = fStack_16c * fVar34;
          fStack_16c = fStack_16c * fVar34;
          fStack_168 = fStack_15c * (fVar32 * fVar12 + fVar40 * fVar10);
          fStack_164 = fStack_15c * (fVar40 * fVar11 - fVar33);
          fStack_160 = fStack_15c * fVar35;
          fStack_15c = fStack_15c * fVar35;
          fStack_14c = fStack_150;
          pdb_140e07fe0(&fStack_1b8,&fStack_188);
          fVar37 = (float)((uint)fVar37 & uVar17);
          fVar38 = (float)((uint)fVar38 & uVar17);
          if (fVar38 <= (float)((uint)fVar13 & uVar15)) {
            fVar38 = (float)((uint)fVar13 & uVar15);
          }
          if (fVar37 <= fVar38) {
            fVar37 = fVar38;
          }
          fStack_188 = fStack_1b8;
          fStack_184 = (float)uStack_1b4;
          fStack_180 = (float)uStack_1b0;
          fStack_17c = (float)uStack_1ac;
          fStack_178 = (float)uStack_1a8;
          fStack_174 = (float)uStack_1a4;
          fStack_170 = (float)uStack_1a0;
          fStack_16c = (float)uStack_19c;
          fStack_168 = (float)uStack_198;
          fStack_164 = (float)uStack_194;
          fStack_160 = (float)uStack_190;
          fStack_15c = (float)uStack_18c;
          pdb_1409536b0(uStack_128,lVar3,&uStack_138,fVar37,&fStack_188,&UNK_14351be48);
          uVar25 = uVar25 + 1;
          if ((char)plStack_f8 == '\0') break;
LAB_142575c80:
          uVar9 = uVar25;
          if (uVar25 == (uint)lVar26) {
            do {
              if (puVar27 == puVar2) goto LAB_142575ef4;
              uVar25 = *puVar27;
              puVar27 = puVar27 + 1;
              lVar26 = *(longlong *)
                        (*(longlong *)(lVar18 + 0x1a0) + 0x10 + (ulonglong)uVar25 * 0x48);
            } while (lVar26 == 0);
            lVar3 = *(longlong *)(lVar18 + 0x1a0) + (ulonglong)uVar25 * 0x48;
            uVar23 = *(ulonglong *)(lVar3 + 0x40);
            if ((*(ulonglong *)(lStack_100 + 0x110) < uVar23) &&
               (uVar19 = *(ulonglong *)
                          (*(longlong *)(lVar3 + 0x38) + *(ulonglong *)(lStack_100 + 0x110) * 8),
               uVar19 != 0)) {
              lStack_f0 = *(longlong *)(*(longlong *)(lVar3 + 0x18) + 0x10 + ~uVar19 * 0x30);
              uVar19 = *(ulonglong *)(lStack_100 + 0x118);
              if (uVar23 <= uVar19) goto LAB_142575d4b;
LAB_142575d21:
              uVar23 = *(ulonglong *)(*(longlong *)(lVar3 + 0x38) + uVar19 * 8);
              if (uVar23 == 0) goto LAB_142575d4b;
              lStack_e8 = *(longlong *)(*(longlong *)(lVar3 + 0x18) + 0x10 + ~uVar23 * 0x30);
            }
            else {
              lStack_f0 = 0;
              uVar19 = *(ulonglong *)(lStack_100 + 0x118);
              if (uVar19 < uVar23) goto LAB_142575d21;
LAB_142575d4b:
              lStack_e8 = 0;
            }
            uVar25 = 0;
            uVar9 = uVar25;
          }
        }
      } while( true );
    }
    goto LAB_142576005;
  }
  if (uVar23 < 0x37) {
    plVar29 = (longlong *)&UNK_14351c439;
    uVar19 = pdb_142585200(&UNK_14351c439);
    if ((uVar19 & 1) != 0) {
      if (0x36 < uVar23 + 2) goto LAB_142576054;
      lVar26 = 0x34 - uVar23;
      plVar29 = (longlong *)(&UNK_14351c43b + uVar23);
    }
    goto LAB_1425759c2;
  }
  goto LAB_142576034;
LAB_142575ef4:
  param_2 = plStack_108;
  pdb_140e9a350(plStack_108);
  pdb_140e9a350();
  LOCK();
  plVar29 = (longlong *)*param_2;
  bVar31 = plVar29 == (longlong *)0x8;
  if (bVar31) {
    *param_2 = 0;
    plVar29 = (longlong *)0x8;
  }
  UNLOCK();
  if (!bVar31) goto LAB_142575fcd;
  while( true ) {
    if (lStack_120 == 0) {
      return plVar29;
    }
    plVar29 = (longlong *)pdb_140e97000();
    if (((char)plVar29[0xd] != '\x01') &&
       (plVar29 = (longlong *)pdb_142d8ec20(plVar29,0), plVar29 == (longlong *)0x0)) break;
    if (*plVar29 == 0) {
      *plVar29 = -1;
      plStack_f8 = plVar29;
      pdb_140e95370(plVar29 + 1,uStack_118);
      *plStack_f8 = *plStack_f8 + 1;
      return plStack_f8;
    }
LAB_142575fc0:
    pdb_142dc8090(&UNK_143326a50);
LAB_142575fcd:
    plVar29 = (longlong *)pdb_142dbca40(param_2);
  }
LAB_142576005:
  pdb_142dc7890(&UNK_143326860);
LAB_142576011:
  pdb_142dc8070(&UNK_14351bd9f,0x2e);
LAB_142576034:
  pdb_142dc8070(&UNK_14351c439,0x36,0);
LAB_142576054:
  pdb_142dc8070(&UNK_14351c439,0x36);
  pcVar8 = (code *)swi(3);
  plVar29 = (longlong *)(*pcVar8)();
  return plVar29;
}

