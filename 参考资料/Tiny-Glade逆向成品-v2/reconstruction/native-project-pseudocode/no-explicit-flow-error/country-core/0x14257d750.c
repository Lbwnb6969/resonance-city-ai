// VA 0x14257d750, PDB extent 3788 bytes
// country_core::render::nani::systems::nani_update_lantern_emissive
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/systems.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::render::nani::systems::nani_update_lantern_emissive
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/systems.rs
   Extent: 3788 */

longlong * pdb_14257d750(longlong *param_1,longlong *param_2)

{
  byte *pbVar1;
  float fVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  ulonglong uVar7;
  code *pcVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  uint uVar14;
  char cVar15;
  uint uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  longlong lVar19;
  ulonglong uVar20;
  longlong *plVar21;
  longlong lVar22;
  uint *puVar23;
  ulonglong uVar24;
  undefined8 uVar25;
  longlong lVar26;
  uint *puVar27;
  float *pfVar28;
  undefined *puVar29;
  undefined8 uVar30;
  longlong *plVar31;
  undefined *puVar32;
  bool bVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fStack_208;
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
  float fStack_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  float fStack_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  undefined8 uStack_180;
  float fStack_178;
  undefined8 uStack_170;
  longlong lStack_168;
  uint *puStack_160;
  longlong lStack_158;
  undefined8 uStack_150;
  longlong lStack_148;
  longlong lStack_140;
  longlong *plStack_138;
  undefined8 uStack_130;
  longlong lStack_128;
  longlong lStack_120;
  uint uStack_118;
  int iStack_114;
  longlong *plStack_110;
  longlong lStack_108;
  longlong lStack_100;
  longlong lStack_f8;
  longlong lStack_f0;
  char cStack_e5;
  uint uStack_e4;
  undefined8 uStack_e0;
  
  uStack_e0 = 0xfffffffffffffffe;
  plVar31 = param_2;
  cVar15 = pdb_140e94b40();
  if (cVar15 == '\0') {
    lStack_158 = 0;
    goto LAB_14257d964;
  }
  plVar31 = (longlong *)&UNK_14351c911;
  lVar26 = 0x41;
  uVar24 = 0x41;
  lVar19 = pdb_142585200(&UNK_14351c911);
  if (lVar19 != 1) {
LAB_14257d833:
    puVar29 = &UNK_14351bdcd;
    puVar32 = &UNK_14351bd9f;
    do {
      bVar3 = puVar29[-1];
      uVar16 = (uint)(char)bVar3;
      if ((char)bVar3 < '\0') {
        bVar4 = puVar29[-2];
        if ((char)bVar4 < -0x40) {
          bVar5 = puVar29[-3];
          if ((char)bVar5 < -0x40) {
            pbVar1 = puVar29 + -4;
            puVar29 = puVar29 + -4;
            uVar16 = bVar5 & 0x3f | (*pbVar1 & 7) << 6;
          }
          else {
            puVar29 = puVar29 + -3;
            uVar16 = bVar5 & 0xf;
          }
          uVar16 = bVar4 & 0x3f | uVar16 << 6;
        }
        else {
          puVar29 = puVar29 + -2;
          uVar16 = bVar4 & 0x1f;
        }
        uVar16 = (uint)(bVar3 & 0x3f) | uVar16 << 6;
        if (uVar16 != 0x5c) goto LAB_14257d8c4;
LAB_14257d8dd:
        if ((undefined *)0x2e < puVar29 + -0x14351bd9e) goto LAB_14257e27e;
        lVar19 = 0x2e - (longlong)(puVar29 + -0x14351bd9e);
        puVar32 = puVar29 + 1;
        goto LAB_14257d900;
      }
      puVar29 = puVar29 + -1;
      if (uVar16 == 0x5c) goto LAB_14257d8dd;
LAB_14257d8c4:
      if (uVar16 == 0x2f) goto LAB_14257d8dd;
    } while (puVar29 != &UNK_14351bd9f);
    lVar19 = 0x2e;
LAB_14257d900:
    plVar21 = (longlong *)pdb_140e97000();
    if (((char)plVar21[0xd] == '\x01') ||
       (plVar21 = (longlong *)pdb_142d8ec20(plVar21,0), plVar21 != (longlong *)0x0)) {
      if (*plVar21 != 0) goto LAB_14257e22d;
      *plVar21 = -1;
      plStack_110 = plVar21;
      uStack_150 = pdb_140e94f10(plVar21 + 1,plVar31,lVar26,puVar32,lVar19,1,0);
      *plStack_110 = *plStack_110 + 1;
      lStack_158 = 1;
LAB_14257d964:
      uVar25 = CONCAT71((int7)((ulonglong)plVar31 >> 8),0xf);
      plStack_138 = (longlong *)pdb_1409d2d80(*param_2);
      uVar14 = _UNK_142e377e4;
      uVar16 = _DAT_142e377e0;
      fVar13 = _DAT_142e36f28;
      lStack_f0 = *param_1;
      lStack_168 = param_1[1];
      puVar27 = *(uint **)(lStack_f0 + 0xf8);
      puStack_160 = puVar27 + *(longlong *)(lStack_f0 + 0x100);
      cStack_e5 = *(char *)(lStack_f0 + 0x108);
      cVar15 = '\0';
      lStack_140 = 8;
      lStack_128 = 0;
      uStack_e4 = 0;
      lStack_108 = 0;
      lStack_100 = 0;
      lStack_f8 = 0;
      lStack_120 = 0;
      lVar19 = 0;
      uVar24 = 0;
      uVar30 = 0;
      uStack_170 = uVar25;
      if (cStack_e5 != '\0') goto LAB_14257dce0;
LAB_14257da26:
      cVar15 = (char)uVar30;
      if ((int)uVar24 != (int)lVar19) goto LAB_14257dc5c;
      do {
        if (puVar27 == puStack_160) goto LAB_14257e15e;
        uVar6 = *puVar27;
        puVar27 = puVar27 + 1;
        lVar19 = *(longlong *)(*(longlong *)(lStack_168 + 0x100) + 0x58 + (ulonglong)uVar6 * 0xa0);
      } while (lVar19 == 0);
      lVar22 = *(longlong *)(lStack_168 + 0x100) + (ulonglong)uVar6 * 0xa0;
      lVar26 = *(longlong *)(lStack_168 + 0x1a0) + (ulonglong)*(uint *)(lVar22 + 0x94) * 0x48;
      uVar20 = *(ulonglong *)
                (*(longlong *)(lStack_168 + 0x1a0) + 0x40 +
                (ulonglong)*(uint *)(lVar22 + 0x94) * 0x48);
      if ((*(ulonglong *)(lStack_f0 + 0x110) < uVar20) &&
         (uVar24 = *(ulonglong *)
                    (*(longlong *)(lVar26 + 0x38) + *(ulonglong *)(lStack_f0 + 0x110) * 8),
         uVar24 != 0)) {
        lStack_108 = *(longlong *)(*(longlong *)(lVar26 + 0x18) + 0x10 + ~uVar24 * 0x30);
        uVar24 = *(ulonglong *)(lStack_f0 + 0x118);
        if (uVar20 <= uVar24) goto LAB_14257db20;
LAB_14257dae3:
        uVar24 = *(ulonglong *)(*(longlong *)(lVar26 + 0x38) + uVar24 * 8);
        if (uVar24 == 0) goto LAB_14257db20;
        lStack_100 = *(longlong *)(*(longlong *)(lVar26 + 0x18) + 0x10 + ~uVar24 * 0x30);
        uVar24 = *(ulonglong *)(lStack_f0 + 0x120);
        if (uVar24 < uVar20) goto LAB_14257db3e;
LAB_14257db68:
        lStack_f8 = 0;
      }
      else {
        lStack_108 = 0;
        uVar24 = *(ulonglong *)(lStack_f0 + 0x118);
        if (uVar24 < uVar20) goto LAB_14257dae3;
LAB_14257db20:
        lStack_100 = 0;
        uVar24 = *(ulonglong *)(lStack_f0 + 0x120);
        if (uVar20 <= uVar24) goto LAB_14257db68;
LAB_14257db3e:
        uVar24 = *(ulonglong *)(*(longlong *)(lVar26 + 0x38) + uVar24 * 8);
        if (uVar24 == 0) goto LAB_14257db68;
        lStack_f8 = *(longlong *)(*(longlong *)(lVar26 + 0x18) + 0x10 + ~uVar24 * 0x30);
      }
      uVar24 = *(ulonglong *)(lStack_f0 + 0x128);
      if ((uVar24 < *(ulonglong *)(lVar22 + 0x88)) &&
         (*(longlong *)(*(longlong *)(lVar22 + 0x80) + uVar24 * 8) != 0)) {
        uStack_e4 = (uint)CONCAT71((int7)((ulonglong)*(longlong *)(lVar22 + 0x80) >> 8),1);
        if ((uVar24 < uVar20) &&
           (uVar24 = *(ulonglong *)(*(longlong *)(lVar26 + 0x38) + uVar24 * 8), uVar24 != 0)) {
          lStack_128 = *(longlong *)(*(longlong *)(lVar26 + 0x18) + 0x10 + ~uVar24 * 0x30);
        }
        else {
          lStack_128 = 0;
        }
      }
      else {
        uStack_e4 = 0;
      }
      uVar7 = *(ulonglong *)(lStack_f0 + 0x130);
      uVar24 = 0;
      if ((uVar7 < *(ulonglong *)(lVar22 + 0x88)) &&
         (*(longlong *)(*(longlong *)(lVar22 + 0x80) + uVar7 * 8) != 0)) {
        cVar15 = '\x01';
        if ((uVar7 < uVar20) &&
           (uVar20 = *(ulonglong *)(*(longlong *)(lVar26 + 0x38) + uVar7 * 8), uVar20 != 0)) {
          lStack_120 = *(longlong *)(*(longlong *)(lVar26 + 0x18) + 0x10 + ~uVar20 * 0x30);
        }
        else {
          lStack_120 = 0;
        }
      }
      else {
        cVar15 = '\0';
      }
      lStack_140 = *(longlong *)(lVar22 + 0x50);
LAB_14257dc5c:
      iStack_114 = (int)uVar24;
      uVar20 = (ulonglong)~*(uint *)(lStack_140 + 8 + uVar24 * 0x10);
      plStack_110 = (longlong *)(lStack_108 + uVar20 * 0xc);
      pfVar28 = (float *)(uVar20 * 0x30 + lStack_100);
      lVar26 = lStack_f8 + uVar20 * 0x24;
      lStack_148 = 0;
      if ((uStack_e4 & 1) != 0) {
        lStack_148 = lStack_128;
      }
      if (cVar15 != '\x01') goto LAB_14257df40;
      puVar23 = (uint *)(lStack_120 + uVar20 * 4);
LAB_14257df21:
      iStack_114 = (int)uVar24;
      uStack_118 = *puVar23;
      uStack_130 = CONCAT71((uint7)(uint3)(uStack_118 >> 8),1);
      do {
        uVar18 = *(undefined4 *)(lVar26 + 0x14);
        bVar3 = *(byte *)(lVar26 + 0x22);
        uVar17 = pdb_140de85e0(*(undefined4 *)(lVar26 + 0xc),*(undefined4 *)(lVar26 + 0x10));
        uVar18 = pdb_140de85e0(uVar18,*(undefined4 *)(lVar26 + 0x18));
        fStack_178 = pfVar28[6];
        uStack_180 = *(undefined8 *)(pfVar28 + 4);
        fVar39 = pfVar28[7];
        fVar40 = pfVar28[8];
        fVar12 = pfVar28[9];
        fStack_1bc = (float)*(undefined8 *)(pfVar28 + 8);
        fStack_1ac = (float)((ulonglong)*(undefined8 *)(pfVar28 + 8) >> 0x20);
        fVar9 = *pfVar28;
        fVar10 = pfVar28[1];
        fVar11 = pfVar28[3];
        fStack_1a8 = pfVar28[4];
        fStack_1a4 = pfVar28[5];
        fStack_1a0 = pfVar28[6];
        fVar2 = pfVar28[2];
        fVar42 = fVar2 + fVar2;
        fVar34 = fVar10 + fVar10;
        fVar38 = fVar9 * (fVar9 + fVar9);
        fVar35 = (fVar9 + fVar9) * fVar11;
        fVar41 = fVar42 * fVar9 - fVar34 * fVar11;
        fVar36 = fVar35 + fVar42 * fVar10;
        fVar37 = fVar13 - (fVar38 + fVar10 * fVar34);
        fStack_1cc = pfVar28[7];
        fStack_1d8 = fStack_1cc * (fVar13 - (fVar10 * fVar34 + fVar2 * fVar42));
        fStack_1d4 = fStack_1cc * (fVar34 * fVar9 + fVar11 * fVar42);
        fStack_1d0 = fStack_1cc * fVar41;
        fStack_1cc = fStack_1cc * fVar41;
        fStack_1c8 = fStack_1bc * (fVar34 * fVar9 - fVar11 * fVar42);
        fStack_1c4 = fStack_1bc * (fVar13 - (fVar2 * fVar42 + fVar38));
        fStack_1c0 = fStack_1bc * fVar36;
        fStack_1bc = fStack_1bc * fVar36;
        fStack_1b8 = fStack_1ac * (fVar34 * fVar11 + fVar42 * fVar9);
        fStack_1b4 = fStack_1ac * (fVar42 * fVar10 - fVar35);
        fStack_1b0 = fStack_1ac * fVar37;
        fStack_1ac = fStack_1ac * fVar37;
        fStack_19c = fStack_1a0;
        pdb_140e07fe0(&fStack_208,&fStack_1d8);
        fVar39 = (float)((uint)fVar39 & uVar16);
        fVar40 = (float)((uint)fVar40 & uVar16);
        if (fVar40 <= (float)((uint)fVar12 & uVar14)) {
          fVar40 = (float)((uint)fVar12 & uVar14);
        }
        if (fVar39 <= fVar40) {
          fVar39 = fVar40;
        }
        fStack_1a0 = (float)((uint)bVar3 << 0x1e | uStack_118 | (uint)(lStack_148 != 0) << 0x1f);
        fStack_1b8 = (float)uStack_1e8;
        fStack_1b4 = (float)uStack_1e4;
        fStack_1b0 = (float)uStack_1e0;
        fStack_1ac = (float)uStack_1dc;
        fStack_1c8 = (float)uStack_1f8;
        fStack_1c4 = (float)uStack_1f4;
        fStack_1c0 = (float)uStack_1f0;
        fStack_1bc = (float)uStack_1ec;
        fStack_1d8 = fStack_208;
        fStack_1d4 = (float)uStack_204;
        fStack_1d0 = (float)uStack_200;
        fStack_1cc = (float)uStack_1fc;
        fStack_19c = (float)(uint)*(ushort *)(lVar26 + 0x20);
        fStack_1a8 = (float)uVar17;
        fStack_1a4 = (float)uVar18;
        pdb_140955390(uStack_170,plStack_110,&uStack_180,fVar39,&fStack_1d8,&UNK_14351c0e0);
        uVar24 = (ulonglong)(iStack_114 + 1);
        cVar15 = (char)uStack_130;
        uVar30 = uStack_130;
        if (cStack_e5 == '\0') goto LAB_14257da26;
LAB_14257dce0:
        if ((int)uVar24 == (int)lVar19) {
          do {
            if (puVar27 == puStack_160) goto LAB_14257e15e;
            uVar6 = *puVar27;
            puVar27 = puVar27 + 1;
            lVar19 = *(longlong *)
                      (*(longlong *)(lStack_168 + 0x1a0) + 0x10 + (ulonglong)uVar6 * 0x48);
          } while (lVar19 == 0);
          lVar26 = *(longlong *)(lStack_168 + 0x1a0) + (ulonglong)uVar6 * 0x48;
          uVar20 = *(ulonglong *)(lVar26 + 0x40);
          if ((*(ulonglong *)(lStack_f0 + 0x110) < uVar20) &&
             (uVar24 = *(ulonglong *)
                        (*(longlong *)(lVar26 + 0x38) + *(ulonglong *)(lStack_f0 + 0x110) * 8),
             uVar24 != 0)) {
            lStack_108 = *(longlong *)(*(longlong *)(lVar26 + 0x18) + 0x10 + ~uVar24 * 0x30);
            uVar24 = *(ulonglong *)(lStack_f0 + 0x118);
            if (uVar20 <= uVar24) goto LAB_14257ddc7;
LAB_14257dd8a:
            uVar24 = *(ulonglong *)(*(longlong *)(lVar26 + 0x38) + uVar24 * 8);
            if (uVar24 == 0) goto LAB_14257ddc7;
            lStack_100 = *(longlong *)(*(longlong *)(lVar26 + 0x18) + 0x10 + ~uVar24 * 0x30);
            uVar24 = *(ulonglong *)(lStack_f0 + 0x120);
            if (uVar24 < uVar20) goto LAB_14257dde5;
LAB_14257de22:
            lStack_f8 = 0;
            uVar24 = *(ulonglong *)(lStack_f0 + 0x128);
            if (uVar20 <= uVar24) goto LAB_14257de72;
LAB_14257de40:
            uVar24 = *(ulonglong *)(*(longlong *)(lVar26 + 0x38) + uVar24 * 8);
            if (uVar24 == 0) goto LAB_14257de72;
            lStack_128 = *(longlong *)(*(longlong *)(lVar26 + 0x18) + 0x10 + ~uVar24 * 0x30);
            uStack_e4 = (uint)CONCAT71((int7)((ulonglong)lStack_128 >> 8),1);
          }
          else {
            lStack_108 = 0;
            uVar24 = *(ulonglong *)(lStack_f0 + 0x118);
            if (uVar24 < uVar20) goto LAB_14257dd8a;
LAB_14257ddc7:
            lStack_100 = 0;
            uVar24 = *(ulonglong *)(lStack_f0 + 0x120);
            if (uVar20 <= uVar24) goto LAB_14257de22;
LAB_14257dde5:
            uVar24 = *(ulonglong *)(*(longlong *)(lVar26 + 0x38) + uVar24 * 8);
            if (uVar24 == 0) goto LAB_14257de22;
            lStack_f8 = *(longlong *)(*(longlong *)(lVar26 + 0x18) + 0x10 + ~uVar24 * 0x30);
            uVar24 = *(ulonglong *)(lStack_f0 + 0x128);
            if (uVar24 < uVar20) goto LAB_14257de40;
LAB_14257de72:
            uStack_e4 = 0;
          }
          uVar24 = 0;
          if ((*(ulonglong *)(lStack_f0 + 0x130) < uVar20) &&
             (uVar20 = *(ulonglong *)
                        (*(longlong *)(lVar26 + 0x38) + *(ulonglong *)(lStack_f0 + 0x130) * 8),
             uVar20 != 0)) {
            lStack_120 = *(longlong *)(*(longlong *)(lVar26 + 0x18) + 0x10 + ~uVar20 * 0x30);
            cVar15 = '\x01';
          }
          else {
            cVar15 = '\0';
          }
        }
        iStack_114 = (int)uVar24;
        plStack_110 = (longlong *)(lStack_108 + uVar24 * 0xc);
        pfVar28 = (float *)(uVar24 * 0x30 + lStack_100);
        lVar26 = lStack_f8 + uVar24 * 0x24;
        lStack_148 = 0;
        if ((uStack_e4 & 1) != 0) {
          lStack_148 = lStack_128;
        }
        if (cVar15 == '\x01') goto code_r0x00014257df16;
LAB_14257df40:
        uStack_130 = 0;
        uStack_118 = 0;
      } while( true );
    }
    goto LAB_14257e272;
  }
  if (uVar24 < 0x42) {
    plVar31 = (longlong *)&UNK_14351c911;
    uVar20 = pdb_142585200(&UNK_14351c911);
    if ((uVar20 & 1) != 0) {
      if (0x41 < uVar24 + 2) goto LAB_14257e2c1;
      lVar26 = 0x3f - uVar24;
      plVar31 = (longlong *)(&UNK_14351c913 + uVar24);
    }
    goto LAB_14257d833;
  }
  goto LAB_14257e2a1;
code_r0x00014257df16:
  puVar23 = (uint *)(lStack_120 + uVar24 * 4);
  goto LAB_14257df21;
LAB_14257e15e:
  param_2 = plStack_138;
  pdb_140e9a350(plStack_138);
  pdb_140e9a350();
  LOCK();
  plVar31 = (longlong *)*param_2;
  bVar33 = plVar31 == (longlong *)0x8;
  if (bVar33) {
    *param_2 = 0;
    plVar31 = (longlong *)0x8;
  }
  UNLOCK();
  if (!bVar33) goto LAB_14257e23a;
  while( true ) {
    if (lStack_158 == 0) {
      return plVar31;
    }
    plVar31 = (longlong *)pdb_140e97000();
    if (((char)plVar31[0xd] != '\x01') &&
       (plVar31 = (longlong *)pdb_142d8ec20(plVar31,0), plVar31 == (longlong *)0x0)) break;
    if (*plVar31 == 0) {
      *plVar31 = -1;
      plStack_110 = plVar31;
      pdb_140e95370(plVar31 + 1,uStack_150);
      *plStack_110 = *plStack_110 + 1;
      return plStack_110;
    }
LAB_14257e22d:
    pdb_142dc8090(&UNK_143326a50);
LAB_14257e23a:
    plVar31 = (longlong *)pdb_142dbca40(param_2);
  }
LAB_14257e272:
  pdb_142dc7890(&UNK_143326860);
LAB_14257e27e:
  pdb_142dc8070(&UNK_14351bd9f,0x2e);
LAB_14257e2a1:
  pdb_142dc8070(&UNK_14351c911,0x41,0);
LAB_14257e2c1:
  pdb_142dc8070(&UNK_14351c911,0x41);
  pcVar8 = (code *)swi(3);
  plVar31 = (longlong *)(*pcVar8)();
  return plVar31;
}

