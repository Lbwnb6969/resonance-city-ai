// VA 0x1414784f0, PDB extent 4480 bytes
// system_wall_constructor::construct_elevation_supports::rectangle_bottom_layer::construct_rect_bottom_layer
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_elevation_supports/rectangle_bottom_layer.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_wall_constructor::construct_elevation_supports::rectangle_bottom_layer::construct_rect_bottom_layer
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_elevation_supports/rectangle_bottom_layer.rs
   Extent: 4480 */

undefined8 pdb_1414784f0(undefined8 param_1,longlong param_2,longlong *param_3,undefined8 param_4)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  int *piVar9;
  ulonglong uVar10;
  longlong lVar11;
  float *pfVar12;
  ulonglong uVar13;
  float *pfVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  float *pfVar17;
  bool bVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined *puVar41;
  undefined8 *puStack_2b0;
  float *pfStack_2a8;
  float fStack_2a0;
  undefined4 uStack_29c;
  undefined4 uStack_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  float *pfStack_280;
  ulonglong uStack_278;
  ulonglong uStack_270;
  undefined8 uStack_268;
  longlong lStack_260;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  longlong lStack_248;
  float fStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  longlong lStack_230;
  longlong lStack_228;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  int iStack_210;
  undefined8 *puStack_208;
  float *pfStack_200;
  float fStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  int iStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  float fStack_1a0;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  float *pfStack_158;
  longlong lStack_150;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  longlong lStack_138;
  float *pfStack_130;
  longlong lStack_128;
  float fStack_11c;
  undefined8 uStack_118;
  longlong lStack_110;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  ulonglong uStack_f8;
  undefined8 uStack_f0;
  
  uStack_f0 = 0xfffffffffffffffe;
  fStack_fc = *(float *)(param_2 + 0x284);
  lStack_138 = *param_3;
  pfStack_130 = (float *)param_3[1];
  lStack_128 = CONCAT44((float)((ulonglong)param_3[2] >> 0x20) + _UNK_142f61064,
                        (float)param_3[2] + _DAT_142f61060);
  uStack_118 = param_1;
  cVar1 = pdb_1408ff990(param_2 + 0x2a3);
  lStack_110 = param_2;
  if (cVar1 == '\0') {
    lStack_150 = param_2 + 0x29f;
    cVar1 = pdb_1408ff980();
    if ((cVar1 == '\0') ||
       (((cVar1 = pdb_1408ff980(param_2 + 0x29f), cVar1 != '\0' && (*(uint *)(param_2 + 600) < 2))
        && (0.0 < *(float *)(param_2 + 0x294))))) {
      puVar6 = (undefined8 *)pdb_1413e4400(param_4,&UNK_1433056c0);
      if ((puVar6 == (undefined8 *)0x0) ||
         (uVar10 = (**(code **)(puVar6[1] + 0x18))(*puVar6), uVar10 == 0)) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_14330c370);
      }
      fStack_148 = (float)((uint)fStack_148 & 0xffffff00);
      lVar7 = *(longlong *)(param_2 + 0x150);
      if (lVar7 == 0) goto LAB_141478710;
      lVar11 = lVar7 + 0x18;
      LOCK();
      bVar18 = *(char *)(lVar7 + 0x18) == '\0';
      if (bVar18) {
        *(char *)(lVar7 + 0x18) = '\x01';
      }
      UNLOCK();
      if (bVar18) {
        pdb_140e9a150(lVar11);
        lVar11 = *(longlong *)(lVar7 + 0x10);
        if (lVar11 == 0) goto LAB_141478e10;
LAB_1414786f0:
        piVar9 = (int *)(*(longlong *)(lVar7 + 8) + lVar11 * 4 + -4);
        if (piVar9 == (int *)0x0) goto LAB_141478e10;
        iStack_210 = *piVar9;
        lStack_260 = *(longlong *)(uVar10 + 0x10);
      }
      else {
        pdb_142dbd1a0(lVar11,1,1000000000);
        param_2 = lStack_110;
        pdb_140e9a150(lVar11);
        lVar11 = *(longlong *)(lVar7 + 0x10);
        if (lVar11 != 0) goto LAB_1414786f0;
LAB_141478e10:
        lStack_260 = *(longlong *)(uVar10 + 0x10);
        if (lStack_260 == 0) goto LAB_141479381;
        iStack_210 = (int)lStack_260 + -1;
      }
      uStack_268 = *(undefined8 *)(uVar10 + 8);
      uStack_258 = *(undefined4 *)(uVar10 + 0x18);
      uStack_254 = *(undefined4 *)(uVar10 + 0x1c);
      uStack_250 = *(undefined4 *)(uVar10 + 0x20);
      uStack_24c = *(undefined4 *)(uVar10 + 0x24);
      fVar26 = *(float *)(uVar10 + 0x28);
      uStack_23c = *(undefined4 *)(uVar10 + 0x2c);
      uStack_238 = *(undefined4 *)(uVar10 + 0x30);
      uStack_234 = *(undefined4 *)(uVar10 + 0x34);
      lStack_230 = uVar10 + 0x78;
      lStack_228 = uVar10 + 0x58;
      uStack_220 = *(undefined4 *)(uVar10 + 0x38);
      uStack_21c = *(undefined4 *)(uVar10 + 0x3c);
      uStack_218 = *(undefined4 *)(uVar10 + 0x40);
      uStack_214 = *(undefined4 *)(uVar10 + 0x44);
      puStack_208 = &uStack_268;
      pfStack_200 = &fStack_148;
      lStack_248 = lVar7;
      fStack_240 = fVar26;
      cVar1 = pdb_1408ff980(lStack_150);
      if (((cVar1 != '\0') && (*(uint *)(param_2 + 600) < 2)) &&
         (fVar26 = 0.0, 0.0 < *(float *)(param_2 + 0x294))) {
        pdb_140df2190(&uStack_1b8);
        lStack_128 = uStack_1a8;
        lStack_138 = uStack_1b8;
        pfStack_130 = uStack_1b0;
      }
      bVar18 = false;
      uVar13 = 0;
      while (uVar13 < 5) {
        uVar15 = uVar13 + 1;
        if (!bVar18) {
          if (uVar13 == 4) break;
          uVar15 = uVar13 + 2;
          uVar10 = uVar13;
          uVar13 = uVar13 + 1;
        }
        uStack_f8 = uVar13;
        uStack_270 = uVar15;
        fVar36 = (float)pdb_140df3e10(&lStack_138,uVar10);
        fVar23 = fVar26;
        fVar40 = (float)pdb_140df3e10(&lStack_138,uStack_f8);
        uStack_278 = uVar10 % 5;
        fVar27 = fVar23;
        fStack_11c = (float)pdb_140df3e10(&lStack_138);
        fVar21 = fVar27;
        fVar22 = (float)pdb_140df3e10(&lStack_138,uStack_f8);
        fVar26 = SQRT((fVar26 - fVar23) * (fVar26 - fVar23) + (fVar36 - fVar40) * (fVar36 - fVar40))
        ;
        fVar23 = (float)pub_142e329c0(fVar26 / _DAT_142e3c634);
        uVar13 = (longlong)fVar23 >> 0x3f & (longlong)(fVar23 - _DAT_142e36f2c) | (longlong)fVar23;
        if (fVar23 < 0.0) {
          uVar13 = 0;
        }
        if (_DAT_142e36f30 < fVar23) {
          uVar13 = 0xffffffffffffffff;
        }
        fVar23 = fVar26 * _DAT_142e4bfe4;
        uVar15 = (ulonglong)fVar23;
        uVar16 = (longlong)uVar15 >> 0x3f & (longlong)(fVar23 - _DAT_142e36f2c) | uVar15;
        if (fVar23 < 0.0) {
          uVar16 = 0;
        }
        if (_DAT_142e36f30 < fVar23) {
          uVar16 = 0xffffffffffffffff;
        }
        puStack_2b0 = (undefined8 *)(uVar10 + uStack_f8 + uVar16);
        uStack_1b8 = 0;
        uStack_1b0 = (float *)0x4;
        uStack_1a8 = 0;
        fVar26 = _DAT_142e3c630 / fVar26;
        puVar41 = &UNK_14330c388;
        pdb_140de8bb0(uVar13 + 1,uVar15,&puStack_2b0,&uStack_1b8,&UNK_14330c388);
        pfStack_158 = uStack_1b0 + uStack_1a8;
        bVar18 = true;
        pfVar17 = uStack_1b0;
        iVar3 = 0;
        while (uVar4 = (undefined4)((ulonglong)puVar41 >> 0x20), pfVar17 != pfStack_158) {
          pfVar14 = pfVar17 + 1;
          pfVar12 = pfVar17;
          if (bVar18) {
            if (pfVar14 == pfStack_158) break;
            pfVar12 = pfVar14;
            pfVar14 = pfVar17 + 2;
            pfStack_280 = pfVar17;
          }
          fVar23 = *pfStack_280;
          fVar36 = *pfVar12;
          pfStack_280 = pfVar12;
          uVar24 = pdb_140df0700(&lStack_138,uStack_278);
          uVar25 = pdb_140df0700(&lStack_138,uStack_f8);
          if ((fVar23 < 0.0) || (_DAT_142e36f28 < fVar23)) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc83b0(&UNK_143307af8,0x2a,&UNK_143307b48);
          }
          fVar40 = (float)pdb_140de9fd0(uVar24,uVar25,fVar23);
          fVar35 = (float)pdb_140df3ee0(&lStack_138);
          if ((fVar36 < 0.0) || (_DAT_142e36f28 < fVar36)) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc83b0(&UNK_143307af8,0x2a,&UNK_143307b48);
          }
          fVar19 = (float)pdb_140de9fd0(uVar24,uVar25,fVar36);
          fVar20 = (float)pdb_140df3ee0(&lStack_138);
          uVar25 = *(undefined4 *)(param_2 + 0x274);
          uVar24 = *(undefined4 *)(param_2 + 0x288);
          iVar5 = pdb_140315970(&uStack_118);
          cVar1 = pdb_1408ff980(lStack_150);
          if ((cVar1 == '\0') || (1 < *(uint *)(param_2 + 600))) {
            bVar2 = false;
          }
          else {
            bVar2 = 0.0 < *(float *)(param_2 + 0x294);
          }
          fVar26 = fVar22 * fVar23 + fStack_11c * (_DAT_142e36f28 - fVar23);
          bVar18 = false;
          puVar41 = (undefined *)
                    CONCAT44(uVar4,fVar36 * fVar21 + (_DAT_142e36f28 - fVar36) * fVar27);
          pdb_1424c5e90(&puStack_2b0,(ulonglong)(uint)(fVar19 * fVar20) << 0x20,
                        fVar23 * fVar21 + (_DAT_142e36f28 - fVar23) * fVar27,
                        fVar22 * fVar36 + fStack_11c * (_DAT_142e36f28 - fVar36),puVar41,fStack_fc,
                        &puStack_208,uVar25,uVar24,iVar5 + iVar3,
                        CONCAT44(fVar19 * fVar20,fVar40 * fVar35),bVar2);
          param_2 = lStack_110;
          pfVar17 = pfVar14;
          iVar3 = iVar3 + 1;
        }
        if (uStack_1b8 != 0) {
          pub_1406abac0((byte *)uStack_1b0,uStack_1b8 << 2,4);
        }
        bVar18 = true;
        uVar13 = uStack_270;
        uVar10 = uStack_f8;
      }
      goto LAB_141478d5b;
    }
  }
  puVar6 = (undefined8 *)pdb_1413e4400(param_4,&UNK_1433056b0);
  if ((puVar6 == (undefined8 *)0x0) ||
     (lVar7 = (**(code **)(puVar6[1] + 0x18))(*puVar6), lVar7 == 0)) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_14330c3a0);
  }
  lVar11 = *(longlong *)(param_2 + 0x140);
  if (lVar11 == 0) {
LAB_141478710:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143305b70);
  }
  lVar8 = lVar11 + 0x18;
  LOCK();
  bVar18 = *(char *)(lVar11 + 0x18) == '\0';
  if (bVar18) {
    *(char *)(lVar11 + 0x18) = '\x01';
  }
  UNLOCK();
  if (bVar18) {
    pdb_140e9a150(lVar8);
    lVar8 = *(longlong *)(lVar11 + 0x10);
    if (lVar8 == 0) goto LAB_14147873f;
LAB_14147861e:
    piVar9 = (int *)(*(longlong *)(lVar11 + 8) + lVar8 * 4 + -4);
    if (piVar9 == (int *)0x0) goto LAB_14147873f;
    iStack_210 = *piVar9;
    lStack_260 = *(longlong *)(lVar7 + 0x10);
  }
  else {
    pdb_142dbd1a0(lVar8,1,1000000000);
    pdb_140e9a150(lVar8);
    lVar8 = *(longlong *)(lVar11 + 0x10);
    if (lVar8 != 0) goto LAB_14147861e;
LAB_14147873f:
    lStack_260 = *(longlong *)(lVar7 + 0x10);
    if (lStack_260 == 0) {
LAB_141479381:
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_143305b88);
    }
    iStack_210 = (int)lStack_260 + -1;
  }
  uStack_268 = *(undefined8 *)(lVar7 + 8);
  uStack_258 = *(undefined4 *)(lVar7 + 0x18);
  uStack_254 = *(undefined4 *)(lVar7 + 0x1c);
  uStack_250 = *(undefined4 *)(lVar7 + 0x20);
  uStack_24c = *(undefined4 *)(lVar7 + 0x24);
  fVar26 = *(float *)(lVar7 + 0x28);
  uStack_23c = *(undefined4 *)(lVar7 + 0x2c);
  uStack_238 = *(undefined4 *)(lVar7 + 0x30);
  uStack_234 = *(undefined4 *)(lVar7 + 0x34);
  lStack_230 = lVar7 + 0x78;
  lStack_228 = lVar7 + 0x58;
  uStack_220 = *(undefined4 *)(lVar7 + 0x38);
  uStack_21c = *(undefined4 *)(lVar7 + 0x3c);
  uStack_218 = *(undefined4 *)(lVar7 + 0x40);
  uStack_214 = *(undefined4 *)(lVar7 + 0x44);
  lStack_248 = lVar11;
  fStack_240 = fVar26;
  fVar19 = (float)pdb_140df3e10(&lStack_138,0);
  fVar35 = fVar26;
  fVar20 = (float)pdb_140df3e10(&lStack_138,1);
  fVar27 = _DAT_142e3b1d8;
  fVar23 = _DAT_142e36f28;
  fVar28 = fStack_fc + _DAT_142e3787c;
  fVar36 = fVar19 - fVar20;
  fVar21 = fVar26 - fVar35;
  fVar40 = _DAT_142e36f28 / SQRT(fVar21 * fVar21 + fVar36 * fVar36);
  fVar36 = fVar36 * fVar40;
  fVar40 = fVar40 * fVar21;
  fStack_104 = fVar19 - fVar40 * _DAT_142e3b1d8;
  fStack_100 = fVar36 * _DAT_142e3b1d8 + fVar26;
  pdb_140df4540(&uStack_168,&fStack_104,fVar28);
  pdb_140de88f0(&fStack_148,fVar36,fVar40);
  fVar22 = _UNK_14330982c;
  fVar40 = _UNK_143309828;
  fVar36 = _UNK_143309824;
  fVar21 = _DAT_143309820;
  fVar29 = fStack_140 * _DAT_14300cc70 * _DAT_142e377d0 +
           fStack_144 * _DAT_14300cc60 * _DAT_142e377c0 +
           fStack_148 * _DAT_14300cc50 * _DAT_142e377b0 + fStack_13c * _DAT_14300cc40;
  fVar30 = fStack_140 * _UNK_14300cc74 * _UNK_142e377d4 +
           fStack_144 * _UNK_14300cc64 * _UNK_142e377c4 +
           fStack_148 * _UNK_14300cc54 * _UNK_142e377b4 + fStack_13c * _UNK_14300cc44;
  fVar31 = fStack_140 * _UNK_14300cc78 * _UNK_142e377d8 +
           fStack_144 * _UNK_14300cc68 * _UNK_142e377c8 +
           fStack_148 * _UNK_14300cc58 * _UNK_142e377b8 + fStack_13c * _UNK_14300cc48;
  fVar32 = fStack_140 * _UNK_14300cc7c * _UNK_142e377dc +
           fStack_144 * _UNK_14300cc6c * _UNK_142e377cc +
           fStack_148 * _UNK_14300cc5c * _UNK_142e377bc + fStack_13c * _UNK_14300cc4c;
  fVar26 = SQRT((fVar35 - fVar26) * (fVar35 - fVar26) + (fVar20 - fVar19) * (fVar20 - fVar19));
  fVar38 = fVar31 + fVar31;
  fVar35 = fVar30 + fVar30;
  fVar20 = fVar29 * (fVar29 + fVar29);
  fVar19 = (fVar29 + fVar29) * fVar32;
  fVar39 = fVar38 * fVar29 - fVar35 * fVar32;
  fStack_19c = fVar19 + fVar38 * fVar30;
  fStack_18c = fVar23 - (fVar20 + fVar30 * fVar35);
  fStack_1a0 = fVar26 * fStack_19c;
  fStack_19c = fVar26 * fStack_19c;
  fStack_198 = (fVar35 * fVar32 + fVar38 * fVar29) * _DAT_143309820;
  fStack_194 = (fVar38 * fVar30 - fVar19) * _UNK_143309824;
  fStack_190 = fStack_18c * _UNK_143309828;
  fStack_18c = fStack_18c * _UNK_14330982c;
  uStack_1b8 = CONCAT44((fVar35 * fVar29 + fVar32 * fVar38) * _UNK_143309824,
                        (fVar23 - (fVar30 * fVar35 + fVar31 * fVar38)) * _DAT_143309820);
  uStack_1b0 = (float *)CONCAT44(fVar39 * _UNK_14330982c,fVar39 * _UNK_143309828);
  uStack_1a8 = CONCAT44(fVar26 * (fVar23 - (fVar31 * fVar38 + fVar20)),
                        fVar26 * (fVar35 * fVar29 - fVar32 * fVar38));
  uStack_188 = uStack_168;
  uStack_184 = uStack_164;
  uStack_180 = uStack_160;
  uStack_17c = uStack_160;
  pdb_140e07fe0(&puStack_2b0,&uStack_1b8);
  iVar3 = pdb_140315970(&uStack_118);
  uVar4 = pdb_1409012c0(*(undefined4 *)(lStack_110 + 0x274));
  pdb_140a77410(&uStack_1b8);
  uStack_1e8 = uStack_290;
  uStack_1e4 = uStack_28c;
  uStack_1e0 = uStack_288;
  uStack_1dc = uStack_284;
  fStack_1f8 = fStack_2a0;
  uStack_1f4 = uStack_29c;
  uStack_1f0 = uStack_298;
  uStack_1ec = uStack_294;
  puStack_208 = puStack_2b0;
  pfStack_200 = pfStack_2a8;
  uStack_1d8 = 0;
  uStack_1cc = 0;
  uStack_1c8 = uStack_178;
  uStack_1c4 = uStack_174;
  uStack_1c0 = uStack_170;
  uStack_1bc = uStack_16c;
  fVar26 = fStack_2a0;
  iStack_1d4 = iVar3;
  uStack_1d0 = uVar4;
  pdb_1413f6d90(&uStack_268,&puStack_208);
  uVar10 = 2;
  uVar13 = 1;
  do {
    uVar15 = uVar10;
    fVar19 = (float)pdb_140df3e10(&lStack_138,uVar13);
    fVar35 = fVar26;
    fVar20 = (float)pdb_140df3e10(&lStack_138,uVar15);
    fVar30 = fVar19 - fVar20;
    fVar29 = fVar26 - fVar35;
    fVar31 = fVar23 / SQRT(fVar29 * fVar29 + fVar30 * fVar30);
    fVar30 = fVar30 * fVar31;
    fVar31 = fVar31 * fVar29;
    fStack_104 = fVar19 - fVar31 * fVar27;
    fStack_100 = fVar30 * fVar27 + fVar26;
    pdb_140df4540(&uStack_168,&fStack_104,fVar28);
    pdb_140de88f0(&fStack_148,fVar30,fVar31);
    fVar29 = fStack_140 * _DAT_14300cc70 * _DAT_142e377d0 +
             fStack_144 * _DAT_14300cc60 * _DAT_142e377c0 +
             fStack_148 * _DAT_14300cc50 * _DAT_142e377b0 + fStack_13c * _DAT_14300cc40;
    fVar30 = fStack_140 * _UNK_14300cc74 * _UNK_142e377d4 +
             fStack_144 * _UNK_14300cc64 * _UNK_142e377c4 +
             fStack_148 * _UNK_14300cc54 * _UNK_142e377b4 + fStack_13c * _UNK_14300cc44;
    fVar31 = fStack_140 * _UNK_14300cc78 * _UNK_142e377d8 +
             fStack_144 * _UNK_14300cc68 * _UNK_142e377c8 +
             fStack_148 * _UNK_14300cc58 * _UNK_142e377b8 + fStack_13c * _UNK_14300cc48;
    fVar32 = fStack_140 * _UNK_14300cc7c * _UNK_142e377dc +
             fStack_144 * _UNK_14300cc6c * _UNK_142e377cc +
             fStack_148 * _UNK_14300cc5c * _UNK_142e377bc + fStack_13c * _UNK_14300cc4c;
    fVar37 = fVar31 + fVar31;
    fVar38 = fVar30 + fVar30;
    fVar34 = fVar29 * (fVar29 + fVar29);
    fVar39 = (fVar29 + fVar29) * fVar32;
    fVar33 = fVar37 * fVar29 - fVar38 * fVar32;
    fStack_19c = fVar39 + fVar37 * fVar30;
    fStack_18c = fVar23 - (fVar34 + fVar30 * fVar38);
    fVar26 = SQRT((fVar35 - fVar26) * (fVar35 - fVar26) + (fVar20 - fVar19) * (fVar20 - fVar19));
    fStack_1a0 = fVar26 * fStack_19c;
    fStack_19c = fVar26 * fStack_19c;
    uStack_1b8 = CONCAT44((fVar38 * fVar29 + fVar32 * fVar37) * fVar36,
                          (fVar23 - (fVar30 * fVar38 + fVar31 * fVar37)) * fVar21);
    uStack_1b0 = (float *)CONCAT44(fVar33 * fVar22,fVar33 * fVar40);
    uStack_1a8 = CONCAT44(fVar26 * (fVar23 - (fVar31 * fVar37 + fVar34)),
                          fVar26 * (fVar38 * fVar29 - fVar32 * fVar37));
    fStack_198 = (fVar38 * fVar32 + fVar37 * fVar29) * fVar21;
    fStack_194 = (fVar37 * fVar30 - fVar39) * fVar36;
    fStack_190 = fStack_18c * fVar40;
    fStack_18c = fStack_18c * fVar22;
    uStack_188 = uStack_168;
    uStack_184 = uStack_164;
    uStack_180 = uStack_160;
    uStack_17c = uStack_160;
    pdb_140e07fe0(&puStack_2b0,&uStack_1b8);
    iVar3 = pdb_140315970(&uStack_118);
    uVar4 = pdb_1409012c0(*(undefined4 *)(lStack_110 + 0x274));
    pdb_140a77410(&uStack_1b8);
    iStack_1d4 = (int)uVar13 + iVar3;
    uStack_1e8 = uStack_290;
    uStack_1e4 = uStack_28c;
    uStack_1e0 = uStack_288;
    uStack_1dc = uStack_284;
    fStack_1f8 = fStack_2a0;
    uStack_1f4 = uStack_29c;
    uStack_1f0 = uStack_298;
    uStack_1ec = uStack_294;
    puStack_208 = puStack_2b0;
    pfStack_200 = pfStack_2a8;
    uStack_1d8 = 0;
    uStack_1cc = 0;
    uStack_1c8 = uStack_178;
    uStack_1c4 = uStack_174;
    uStack_1c0 = uStack_170;
    uStack_1bc = uStack_16c;
    fVar26 = fStack_2a0;
    uStack_1d0 = uVar4;
    pdb_1413f6d90(&uStack_268,&puStack_208);
    uVar10 = uVar15 + 1;
    uVar13 = uVar15;
  } while (uVar15 < 4);
LAB_141478d5b:
  lVar11 = lStack_248;
  lVar7 = lStack_248 + 0x18;
  pdb_140e9a350();
  LOCK();
  bVar18 = *(char *)(lVar11 + 0x18) == '\x01';
  if (bVar18) {
    *(char *)(lVar11 + 0x18) = '\0';
  }
  UNLOCK();
  if (!bVar18) {
    pdb_142dbcef0(lVar7,0);
  }
  return 0;
}

