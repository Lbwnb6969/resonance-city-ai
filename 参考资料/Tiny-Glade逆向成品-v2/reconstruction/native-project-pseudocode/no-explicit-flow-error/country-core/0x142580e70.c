// VA 0x142580e70, PDB extent 3758 bytes
// country_core::render::nani::systems::nani_update_gothic_window_bricks
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/systems.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::render::nani::systems::nani_update_gothic_window_bricks
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/systems.rs
   Extent: 3758 */

longlong * pdb_142580e70(longlong *param_1,longlong *param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  float fVar5;
  code *pcVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  char cVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  longlong lVar15;
  ulonglong uVar16;
  uint *puVar17;
  longlong lVar18;
  float *pfVar19;
  ulonglong uVar20;
  undefined8 uVar21;
  longlong lVar22;
  undefined *puVar23;
  longlong *plVar24;
  undefined8 *puVar25;
  undefined *puVar26;
  bool bVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fStack_2b8;
  float fStack_2b4;
  float fStack_2b0;
  float fStack_2ac;
  float fStack_2a8;
  float fStack_2a4;
  float fStack_2a0;
  float fStack_29c;
  float fStack_298;
  float fStack_294;
  float fStack_290;
  float fStack_28c;
  float fStack_288;
  float fStack_284;
  float fStack_280;
  float fStack_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
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
  int iStack_20c;
  undefined8 uStack_208;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined8 uStack_1f8;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined8 uStack_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined8 uStack_1d4;
  undefined4 uStack_1cc;
  undefined8 uStack_1b0;
  float fStack_1a8;
  ulonglong uStack_1a0;
  ulonglong uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined4 uStack_180;
  undefined8 uStack_178;
  undefined4 uStack_170;
  undefined8 uStack_168;
  undefined4 uStack_160;
  longlong lStack_158;
  undefined8 uStack_150;
  longlong lStack_148;
  longlong lStack_140;
  longlong *plStack_138;
  longlong lStack_130;
  uint *puStack_128;
  longlong lStack_120;
  longlong lStack_118;
  longlong lStack_110;
  longlong lStack_108;
  longlong lStack_100;
  uint uStack_f8;
  char cStack_f1;
  undefined8 uStack_f0;
  
  uStack_f0 = 0xfffffffffffffffe;
  plVar24 = param_2;
  cVar10 = pdb_140e94b40();
  if (cVar10 == '\0') {
    lStack_158 = 0;
    goto LAB_142581087;
  }
  plVar24 = (longlong *)&UNK_14351c3ac;
  lVar22 = 0x45;
  uVar20 = 0x45;
  lVar15 = pdb_142585200(&UNK_14351c3ac);
  if (lVar15 != 1) {
LAB_142580f59:
    puVar23 = &UNK_14351bdcd;
    puVar26 = &UNK_14351bd9f;
    do {
      bVar2 = puVar23[-1];
      uVar11 = (uint)(char)bVar2;
      if ((char)bVar2 < '\0') {
        bVar3 = puVar23[-2];
        if ((char)bVar3 < -0x40) {
          bVar4 = puVar23[-3];
          if ((char)bVar4 < -0x40) {
            pbVar1 = puVar23 + -4;
            puVar23 = puVar23 + -4;
            uVar11 = bVar4 & 0x3f | (*pbVar1 & 7) << 6;
          }
          else {
            puVar23 = puVar23 + -3;
            uVar11 = bVar4 & 0xf;
          }
          uVar11 = bVar3 & 0x3f | uVar11 << 6;
        }
        else {
          puVar23 = puVar23 + -2;
          uVar11 = bVar3 & 0x1f;
        }
        uVar11 = (uint)(bVar2 & 0x3f) | uVar11 << 6;
        if (uVar11 != 0x5c) goto LAB_142580fe4;
LAB_142580ffd:
        if ((undefined *)0x2e < puVar23 + -0x14351bd9e) goto LAB_14258192d;
        lVar15 = 0x2e - (longlong)(puVar23 + -0x14351bd9e);
        puVar26 = puVar23 + 1;
        goto LAB_142581020;
      }
      puVar23 = puVar23 + -1;
      if (uVar11 == 0x5c) goto LAB_142580ffd;
LAB_142580fe4:
      if (uVar11 == 0x2f) goto LAB_142580ffd;
    } while (puVar23 != &UNK_14351bd9f);
    lVar15 = 0x2e;
LAB_142581020:
    puVar17 = (uint *)pdb_140e97000();
    if (((char)puVar17[0x1a] == '\x01') ||
       (puVar17 = (uint *)pdb_142d8ec20(puVar17,0), puVar17 != (uint *)0x0)) {
      if (*(longlong *)puVar17 != 0) goto LAB_1425818dc;
      puVar17[0] = 0xffffffff;
      puVar17[1] = 0xffffffff;
      puStack_128 = puVar17;
      uStack_150 = pdb_140e94f10(puVar17 + 2,plVar24,lVar22,puVar26,lVar15,1,0);
      *(longlong *)puStack_128 = *(longlong *)puStack_128 + 1;
      lStack_158 = 1;
LAB_142581087:
      uVar21 = CONCAT71((int7)((ulonglong)plVar24 >> 8),5);
      plStack_138 = (longlong *)pdb_1409d2d80(*param_2);
      fVar9 = _DAT_142e36f28;
      lStack_100 = *param_1;
      lStack_130 = param_1[1];
      puVar17 = *(uint **)(lStack_100 + 0xf8);
      puStack_128 = puVar17 + *(longlong *)(lStack_100 + 0x100);
      cStack_f1 = *(char *)(lStack_100 + 0x108);
      lVar15 = 0;
      lStack_140 = 8;
      lStack_120 = 0;
      lStack_118 = 0;
      lStack_110 = 0;
      lStack_108 = 0;
      uStack_f8 = 0;
      uStack_190 = uVar21;
      if (cStack_f1 != '\0') goto LAB_142581330;
      do {
        if (uStack_f8 == (uint)lVar15) {
          do {
            if (puVar17 == puStack_128) goto LAB_1425817ff;
            uVar11 = *puVar17;
            puVar17 = puVar17 + 1;
            lVar15 = *(longlong *)
                      (*(longlong *)(lStack_130 + 0x100) + 0x58 + (ulonglong)uVar11 * 0xa0);
          } while (lVar15 == 0);
          lVar18 = *(longlong *)(lStack_130 + 0x100) + (ulonglong)uVar11 * 0xa0;
          uVar20 = (ulonglong)*(uint *)(lVar18 + 0x94);
          lVar22 = *(longlong *)(lStack_130 + 0x1a0) + uVar20 * 0x48;
          uVar20 = *(ulonglong *)(*(longlong *)(lStack_130 + 0x1a0) + 0x40 + uVar20 * 0x48);
          if ((*(ulonglong *)(lStack_100 + 0x110) < uVar20) &&
             (uVar16 = *(ulonglong *)
                        (*(longlong *)(lVar22 + 0x38) + *(ulonglong *)(lStack_100 + 0x110) * 8),
             uVar16 != 0)) {
            lStack_120 = *(longlong *)(*(longlong *)(lVar22 + 0x18) + 0x10 + ~uVar16 * 0x30);
            uVar16 = *(ulonglong *)(lStack_100 + 0x118);
            if (uVar20 <= uVar16) goto LAB_142581252;
LAB_142581215:
            uVar16 = *(ulonglong *)(*(longlong *)(lVar22 + 0x38) + uVar16 * 8);
            if (uVar16 == 0) goto LAB_142581252;
            lStack_118 = *(longlong *)(*(longlong *)(lVar22 + 0x18) + 0x10 + ~uVar16 * 0x30);
            uVar16 = *(ulonglong *)(lStack_100 + 0x120);
            if (uVar16 < uVar20) goto LAB_142581270;
LAB_1425812ad:
            lStack_110 = 0;
            uVar16 = *(ulonglong *)(lStack_100 + 0x128);
            if (uVar20 <= uVar16) goto LAB_1425812f5;
LAB_1425812cb:
            uVar20 = *(ulonglong *)(*(longlong *)(lVar22 + 0x38) + uVar16 * 8);
            if (uVar20 == 0) goto LAB_1425812f5;
            lStack_108 = *(longlong *)(*(longlong *)(lVar22 + 0x18) + 0x10 + ~uVar20 * 0x30);
          }
          else {
            lStack_120 = 0;
            uVar16 = *(ulonglong *)(lStack_100 + 0x118);
            if (uVar16 < uVar20) goto LAB_142581215;
LAB_142581252:
            lStack_118 = 0;
            uVar16 = *(ulonglong *)(lStack_100 + 0x120);
            if (uVar20 <= uVar16) goto LAB_1425812ad;
LAB_142581270:
            uVar16 = *(ulonglong *)(*(longlong *)(lVar22 + 0x38) + uVar16 * 8);
            if (uVar16 == 0) goto LAB_1425812ad;
            lStack_110 = *(longlong *)(*(longlong *)(lVar22 + 0x18) + 0x10 + ~uVar16 * 0x30);
            uVar16 = *(ulonglong *)(lStack_100 + 0x128);
            if (uVar16 < uVar20) goto LAB_1425812cb;
LAB_1425812f5:
            lStack_108 = 0;
          }
          lStack_140 = *(longlong *)(lVar18 + 0x50);
          uStack_f8 = 0;
        }
        uVar11 = ~*(uint *)(lStack_140 + 8 + (ulonglong)uStack_f8 * 0x10);
        while( true ) {
          uVar20 = (ulonglong)uVar11;
          lStack_148 = lStack_120 + uVar20 * 0xc;
          lVar22 = lStack_110 + uVar20 * 0x18;
          pfVar19 = (float *)(uVar20 * 0x30 + lStack_118);
          puVar25 = (undefined8 *)(uVar20 * 0x44 + lStack_108);
          uStack_160 = *(undefined4 *)(puVar25 + 1);
          uStack_168 = *puVar25;
          uStack_170 = *(undefined4 *)((longlong)puVar25 + 0x1c);
          uStack_178 = *(undefined8 *)((longlong)puVar25 + 0x14);
          uStack_188 = puVar25[5];
          uStack_180 = *(undefined4 *)(puVar25 + 6);
          uStack_198 = (ulonglong)*(byte *)(lVar22 + 0x14);
          bVar2 = *(byte *)(lVar22 + 0x15);
          uStack_1a0 = (ulonglong)*(byte *)(puVar25 + 8);
          fStack_1a8 = pfVar19[6];
          uStack_1b0 = *(undefined8 *)(pfVar19 + 4);
          fVar36 = *pfVar19;
          fVar7 = pfVar19[1];
          fVar8 = pfVar19[3];
          fVar35 = pfVar19[2];
          fVar34 = fVar35 + fVar35;
          fVar28 = fVar7 + fVar7;
          fVar32 = fVar36 * (fVar36 + fVar36);
          fVar29 = (fVar36 + fVar36) * fVar8;
          fVar31 = fVar34 * fVar36 - fVar28 * fVar8;
          fVar30 = fVar29 + fVar34 * fVar7;
          fVar33 = fVar9 - (fVar32 + fVar7 * fVar28);
          fVar5 = pfVar19[7];
          fStack_29c = (float)*(undefined8 *)(pfVar19 + 8);
          fStack_28c = (float)((ulonglong)*(undefined8 *)(pfVar19 + 8) >> 0x20);
          fStack_2ac = pfVar19[7];
          fStack_2b8 = fStack_2ac * (fVar9 - (fVar7 * fVar28 + fVar35 * fVar34));
          fStack_2b4 = fStack_2ac * (fVar28 * fVar36 + fVar8 * fVar34);
          fStack_2b0 = fStack_2ac * fVar31;
          fStack_2ac = fStack_2ac * fVar31;
          fStack_2a8 = fStack_29c * (fVar28 * fVar36 - fVar8 * fVar34);
          fStack_2a4 = fStack_29c * (fVar9 - (fVar35 * fVar34 + fVar32));
          fStack_2a0 = fStack_29c * fVar30;
          fStack_29c = fStack_29c * fVar30;
          fVar35 = pfVar19[8];
          fVar30 = pfVar19[9];
          fStack_298 = fStack_28c * (fVar28 * fVar8 + fVar34 * fVar36);
          fStack_294 = fStack_28c * (fVar34 * fVar7 - fVar29);
          fStack_290 = fStack_28c * fVar33;
          fStack_28c = fStack_28c * fVar33;
          fStack_288 = pfVar19[4];
          fStack_284 = pfVar19[5];
          fStack_280 = pfVar19[6];
          fStack_27c = fStack_280;
          pdb_140e07fe0(&uStack_278,&fStack_2b8);
          uVar21 = *(undefined8 *)(lVar22 + 8);
          uVar12 = pdb_140de85e0();
          uVar13 = pdb_140de85e0();
          uVar14 = pdb_140de85e0();
          uStack_1dc = pdb_140de85e0();
          iStack_20c = (int)uStack_198 + (uint)bVar2 * 2 + (int)uStack_1a0 * 4;
          fVar36 = (float)((uint)fVar35 & _DAT_142e377e0);
          if ((float)((uint)fVar35 & _DAT_142e377e0) <= (float)((uint)fVar30 & _UNK_142e377e4)) {
            fVar36 = (float)((uint)fVar30 & _UNK_142e377e4);
          }
          fVar35 = (float)((uint)fVar5 & _DAT_142e377e0);
          if ((float)((uint)fVar5 & _DAT_142e377e0) <= fVar36) {
            fVar35 = fVar36;
          }
          uStack_1d8 = *(undefined4 *)((longlong)puVar25 + 0x3c);
          uStack_228 = uStack_258;
          uStack_220 = uStack_250;
          uStack_238 = uStack_268;
          uStack_234 = uStack_264;
          uStack_230 = uStack_260;
          uStack_22c = uStack_25c;
          uStack_248 = uStack_278;
          uStack_244 = uStack_274;
          uStack_240 = uStack_270;
          uStack_23c = uStack_26c;
          uStack_200 = uStack_160;
          uStack_208 = uStack_168;
          uStack_1f0 = uStack_170;
          uStack_1f8 = uStack_178;
          uStack_1e0 = uStack_180;
          uStack_1e8 = uStack_188;
          uStack_1d4 = 0;
          uStack_1cc = 0;
          uStack_218 = uVar21;
          uStack_210 = uVar12;
          uStack_1fc = uVar13;
          uStack_1ec = uVar14;
          pdb_140952200(uStack_190,lStack_148,&uStack_1b0,fVar35,&uStack_248,&UNK_14351c170);
          uStack_f8 = uStack_f8 + 1;
          if (cStack_f1 == '\0') break;
LAB_142581330:
          uVar11 = uStack_f8;
          if (uStack_f8 == (uint)lVar15) {
            do {
              if (puVar17 == puStack_128) goto LAB_1425817ff;
              uVar11 = *puVar17;
              puVar17 = puVar17 + 1;
              lVar15 = *(longlong *)
                        (*(longlong *)(lStack_130 + 0x1a0) + 0x10 + (ulonglong)uVar11 * 0x48);
            } while (lVar15 == 0);
            lVar22 = *(longlong *)(lStack_130 + 0x1a0) + (ulonglong)uVar11 * 0x48;
            uVar20 = *(ulonglong *)(lVar22 + 0x40);
            if ((*(ulonglong *)(lStack_100 + 0x110) < uVar20) &&
               (uVar16 = *(ulonglong *)
                          (*(longlong *)(lVar22 + 0x38) + *(ulonglong *)(lStack_100 + 0x110) * 8),
               uVar16 != 0)) {
              lStack_120 = *(longlong *)(*(longlong *)(lVar22 + 0x18) + 0x10 + ~uVar16 * 0x30);
              uVar16 = *(ulonglong *)(lStack_100 + 0x118);
              if (uVar20 <= uVar16) goto LAB_142581422;
LAB_1425813e5:
              uVar16 = *(ulonglong *)(*(longlong *)(lVar22 + 0x38) + uVar16 * 8);
              if (uVar16 == 0) goto LAB_142581422;
              lStack_118 = *(longlong *)(*(longlong *)(lVar22 + 0x18) + 0x10 + ~uVar16 * 0x30);
              uVar16 = *(ulonglong *)(lStack_100 + 0x120);
              if (uVar16 < uVar20) goto LAB_142581440;
LAB_14258147d:
              lStack_110 = 0;
              uVar16 = *(ulonglong *)(lStack_100 + 0x128);
              if (uVar20 <= uVar16) goto LAB_1425814c5;
LAB_14258149b:
              uVar20 = *(ulonglong *)(*(longlong *)(lVar22 + 0x38) + uVar16 * 8);
              if (uVar20 == 0) goto LAB_1425814c5;
              lStack_108 = *(longlong *)(*(longlong *)(lVar22 + 0x18) + 0x10 + ~uVar20 * 0x30);
            }
            else {
              lStack_120 = 0;
              uVar16 = *(ulonglong *)(lStack_100 + 0x118);
              if (uVar16 < uVar20) goto LAB_1425813e5;
LAB_142581422:
              lStack_118 = 0;
              uVar16 = *(ulonglong *)(lStack_100 + 0x120);
              if (uVar20 <= uVar16) goto LAB_14258147d;
LAB_142581440:
              uVar16 = *(ulonglong *)(*(longlong *)(lVar22 + 0x38) + uVar16 * 8);
              if (uVar16 == 0) goto LAB_14258147d;
              lStack_110 = *(longlong *)(*(longlong *)(lVar22 + 0x18) + 0x10 + ~uVar16 * 0x30);
              uVar16 = *(ulonglong *)(lStack_100 + 0x128);
              if (uVar16 < uVar20) goto LAB_14258149b;
LAB_1425814c5:
              lStack_108 = 0;
            }
            uVar11 = 0;
            uStack_f8 = uVar11;
          }
        }
      } while( true );
    }
    goto LAB_142581921;
  }
  if (uVar20 < 0x46) {
    plVar24 = (longlong *)&UNK_14351c3ac;
    uVar16 = pdb_142585200(&UNK_14351c3ac);
    if ((uVar16 & 1) != 0) {
      if (0x45 < uVar20 + 2) goto LAB_142581970;
      lVar22 = 0x43 - uVar20;
      plVar24 = (longlong *)(&UNK_14351c3ae + uVar20);
    }
    goto LAB_142580f59;
  }
  goto LAB_142581950;
LAB_1425817ff:
  param_2 = plStack_138;
  pdb_140e9a350(plStack_138);
  pdb_140e9a350();
  LOCK();
  plVar24 = (longlong *)*param_2;
  bVar27 = plVar24 == (longlong *)0x8;
  if (bVar27) {
    *param_2 = 0;
    plVar24 = (longlong *)0x8;
  }
  UNLOCK();
  if (!bVar27) goto LAB_1425818e9;
  while( true ) {
    if (lStack_158 == 0) {
      return plVar24;
    }
    plVar24 = (longlong *)pdb_140e97000();
    if (((char)plVar24[0xd] != '\x01') &&
       (plVar24 = (longlong *)pdb_142d8ec20(plVar24,0), plVar24 == (longlong *)0x0)) break;
    if (*plVar24 == 0) {
      *plVar24 = -1;
      puStack_128 = (uint *)plVar24;
      pdb_140e95370(plVar24 + 1,uStack_150);
      *(longlong *)puStack_128 = *(longlong *)puStack_128 + 1;
      return (longlong *)puStack_128;
    }
LAB_1425818dc:
    pdb_142dc8090(&UNK_143326a50);
LAB_1425818e9:
    plVar24 = (longlong *)pdb_142dbca40(param_2);
  }
LAB_142581921:
  pdb_142dc7890(&UNK_143326860);
LAB_14258192d:
  pdb_142dc8070(&UNK_14351bd9f,0x2e);
LAB_142581950:
  pdb_142dc8070(&UNK_14351c3ac,0x45,0);
LAB_142581970:
  pdb_142dc8070(&UNK_14351c3ac,0x45);
  pcVar6 = (code *)swi(3);
  plVar24 = (longlong *)(*pcVar6)();
  return plVar24;
}

