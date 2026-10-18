// VA 0x141f26bc0, PDB extent 3187 bytes
// system_roof::ui_edit_roof_ridge_length::create_ui_widget
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/roof/src/ui_edit_roof_ridge_length.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_roof::ui_edit_roof_ridge_length::create_ui_widget
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/roof/src/ui_edit_roof_ridge_length.rs
   Extent: 3187 */

void pdb_141f26bc0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
                  ulonglong *param_5,byte param_6)

{
  float fVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 *puVar10;
  char cVar11;
  undefined1 uVar12;
  byte *pbVar13;
  longlong lVar14;
  undefined8 uVar15;
  longlong lVar16;
  undefined8 **ppuVar17;
  longlong lVar18;
  uint uVar19;
  uint uVar20;
  float fVar21;
  uint uVar22;
  undefined4 uVar23;
  ulonglong uStack_418;
  float fStack_410;
  undefined8 uStack_3b8;
  undefined8 **ppuStack_3b0;
  undefined4 uStack_3a8;
  undefined4 uStack_3a4;
  undefined8 uStack_3a0;
  char acStack_304 [4];
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  undefined8 uStack_2f0;
  undefined4 auStack_2e8 [2];
  undefined8 uStack_2e0;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  longlong lStack_2a8;
  undefined8 uStack_2a0;
  ulonglong uStack_298;
  float fStack_290;
  undefined8 *puStack_28c;
  undefined4 uStack_284;
  undefined8 uStack_280;
  undefined8 uStack_278;
  longlong lStack_270;
  undefined8 *puStack_268;
  undefined8 **ppuStack_260;
  longlong *plStack_258;
  float fStack_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined1 auStack_1b0 [8];
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined8 uStack_1a0;
  undefined8 *puStack_198;
  undefined8 **ppuStack_190;
  undefined8 uStack_188;
  undefined4 uStack_178;
  uint uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 uStack_168;
  longlong lStack_158;
  undefined8 *puStack_150;
  undefined8 *puStack_148;
  undefined8 *puStack_140;
  undefined8 *puStack_138;
  undefined4 uStack_130;
  undefined8 uStack_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  byte *pbStack_f8;
  undefined8 *puStack_f0;
  byte bStack_e4;
  undefined1 uStack_e3;
  undefined1 uStack_e2;
  undefined1 uStack_e1;
  undefined8 uStack_e0;
  
  uStack_e0 = 0xfffffffffffffffe;
  uStack_108 = param_3;
  puStack_268 = (undefined8 *)pdb_140ac6110();
  pdb_140ac5730(acStack_304,&puStack_268,param_1);
  cVar11 = pdb_140b77990(param_1);
  uVar20 = _UNK_142e37824;
  uVar4 = _DAT_142e37820;
  if (cVar11 == '\0') {
    return;
  }
  if (*(char *)(param_1 + 1) == '\0') {
    return;
  }
  uStack_168 = *(undefined8 *)((longlong)param_1 + 0x1c);
  uVar3 = *(undefined4 *)((longlong)param_1 + 0xc);
  uStack_174 = *(uint *)(param_1 + 2);
  uStack_170 = *(undefined4 *)((longlong)param_1 + 0x14);
  uStack_16c = *(undefined4 *)(param_1 + 3);
  uStack_178 = uVar3;
  puStack_150 = param_2;
  if (acStack_304[0] == '\0') {
    uStack_114 = uStack_2f8;
    uStack_11c = uStack_300;
    uStack_118 = uStack_2fc;
    if (*(char *)((longlong)param_1 + 0x3c) == '\0') goto LAB_141f26cc4;
LAB_141f26d44:
    uStack_128 = CONCAT44(uStack_2fc,uStack_300);
    uStack_120 = uStack_2f8;
    uVar22 = uStack_174 ^ _DAT_142e37820;
    uStack_2d0 = CONCAT44(uVar3,uVar22);
    pdb_140df4540(&puStack_268,&uStack_2d0,0);
    uVar19 = (uint)puStack_268 ^ uVar4;
    uVar20 = (uint)((ulonglong)puStack_268 >> 0x20) ^ uVar20;
    fVar21 = (float)((uint)ppuStack_260 ^ uVar4);
    uStack_3b8 = (undefined8 *)CONCAT44(uVar3,uVar22);
    pdb_140df4540(&puStack_268,&uStack_3b8,0);
    uStack_130 = (uint)ppuStack_260;
    puStack_138 = puStack_268;
  }
  else {
    uStack_118 = (undefined4)uStack_2f0;
    uStack_114 = (undefined4)((ulonglong)uStack_2f0 >> 0x20);
    uStack_11c = uStack_2f4;
    if (*(char *)((longlong)param_1 + 0x3c) != '\0') goto LAB_141f26d44;
LAB_141f26cc4:
    uStack_128 = CONCAT44(uStack_2fc,uStack_300);
    uStack_120 = uStack_2f8;
    pdb_140df4540(&puStack_268,&uStack_178,0);
    uVar19 = (uint)puStack_268 ^ _DAT_142e37820;
    uVar20 = (uint)((ulonglong)puStack_268 >> 0x20) ^ _UNK_142e37824;
    fVar21 = (float)((uint)ppuStack_260 ^ _DAT_142e37820);
    pdb_140df4540(&puStack_138,&uStack_178,0);
  }
  puStack_148 = param_4;
  puStack_140 = param_1;
  pdb_14007ee60();
  pbVar13 = pub_1406abab0(0x30,8);
  fVar9 = _UNK_143015124;
  fVar8 = _DAT_143015120;
  fVar7 = _DAT_142f95160;
  uVar6 = _DAT_142e37990;
  uVar5 = _DAT_142e37838;
  uVar3 = _DAT_142e36f28;
  if (pbVar13 != (byte *)0x0) {
    puStack_100 = (undefined8 *)0x2;
    puStack_f0 = (undefined8 *)0x0;
    uStack_2b0 = CONCAT44(uStack_114,uStack_118);
    uStack_2c0 = uStack_128;
    uStack_2b8 = CONCAT44(uStack_11c,uStack_120);
    puStack_28c = puStack_138;
    uStack_284 = uStack_130;
    uStack_280 = 0;
    uStack_278 = 0;
    uStack_2d0 = 0;
    uStack_2c8 = 2;
    uStack_2a0 = 2;
    uStack_298 = CONCAT44(uVar20,uVar19);
    fStack_290 = fVar21;
    lStack_270 = 0;
    bStack_e4 = param_6 ^ 1;
    lVar18 = 0;
    lVar14 = 0;
    lVar16 = 0;
    pbStack_f8 = pbVar13;
    while ((lVar18 != 2 && (lVar16 != 2))) {
      uVar2 = *(ulonglong *)((longlong)&uStack_298 + lVar16 * 0xc);
      fVar21 = (&fStack_290)[lVar16 * 3];
      uVar15 = *(undefined8 *)((longlong)&uStack_2c0 + lVar18 * 0xc);
      fVar1 = *(float *)((longlong)&uStack_2b8 + lVar18 * 0xc);
      uStack_418 = uVar2;
      fStack_410 = fVar21;
      lStack_2a8 = lVar16 + 1;
      lStack_270 = lVar14 + 1;
      lStack_158 = lVar14;
      pdb_140de8fd0(&uStack_3b8);
      fStack_250 = fVar21 * fVar7 + fVar1;
      plStack_258 = (longlong *)
                    CONCAT44((float)(uVar2 >> 0x20) * fVar9 + (float)((ulonglong)uVar15 >> 0x20),
                             (float)uVar2 * fVar8 + (float)uVar15);
      puStack_268 = uStack_3b8;
      ppuStack_260 = ppuStack_3b0;
      uStack_24c = 0x3f800000;
      uStack_248 = 0x3f800000;
      uStack_244 = 0x3f800000;
      pdb_140b3d590(auStack_1b0,uVar3,uVar3,uVar5,&puStack_268);
      puStack_268 = puStack_140;
      ppuStack_260 = (undefined8 **)pdb_141f29b70;
      plStack_258 = &lStack_158;
      fStack_250 = 2.1413307;
      uStack_24c = 1;
      uStack_e1 = 1;
      pdb_140f60760(&uStack_3b8,&UNK_14342a7e0,&puStack_268);
      puStack_198 = uStack_3b8;
      ppuStack_190 = ppuStack_3b0;
      uStack_188 = CONCAT44(uStack_3a4,uStack_3a8);
      uStack_3a0 = uStack_1a0;
      uStack_3a8 = uStack_1a8;
      uStack_3a4 = uStack_1a4;
      uStack_3b8 = (undefined8 *)CONCAT71(uStack_3b8._1_7_,2);
      uStack_418 = uStack_418 & 0xffffffffffffff00;
      uStack_e2 = 1;
      pdb_140c9dcb0(&puStack_268,&uStack_3b8,&uStack_418);
      uStack_e3 = 1;
      pdb_140c9deb0(&uStack_3b8);
      uStack_2e0 = 2;
      auStack_2e8[0] = 1;
      uStack_e3 = 1;
      pdb_140c9de10(&uStack_418,&uStack_3b8,auStack_2e8);
      uStack_e3 = 0;
      pdb_140c9dd20(&uStack_3b8,&puStack_268,&uStack_418);
      uStack_e2 = 1;
      pdb_140c9dbe0(&puStack_268,&uStack_3b8,bStack_e4);
      uStack_e2 = 0;
      ppuVar17 = &puStack_198;
      uStack_3b8 = (undefined8 *)pdb_142807c30(uStack_108,ppuVar17,&puStack_268);
      uStack_e1 = 0;
      ppuStack_3b0 = ppuVar17;
      uVar12 = pdb_1408ffad0(&uStack_3b8);
      puStack_268 = (undefined8 *)CONCAT71(puStack_268._1_7_,uVar12);
      uStack_e1 = 0;
      cVar11 = pdb_1408ff980(&puStack_268);
      if (cVar11 == '\0') {
        uStack_e1 = 0;
        cVar11 = pdb_1408ffab0(&uStack_3b8);
        uVar23 = uVar3;
        if (cVar11 != '\x02') goto LAB_141f27192;
      }
      else {
LAB_141f27192:
        uVar23 = uVar6;
      }
      uStack_e1 = 0;
      uVar15 = pdb_14072cd40(&uStack_3b8);
      puVar10 = puStack_f0;
      if (puStack_f0 == puStack_100) {
        uStack_e1 = 0;
        pdb_142d7e830(&puStack_100);
      }
      lVar18 = lVar18 + 1;
      *(undefined8 *)(pbStack_f8 + (longlong)puVar10 * 0x18) = uVar15;
      *(undefined4 *)(pbStack_f8 + (longlong)puVar10 * 0x18 + 8) = uVar23;
      *(ulonglong *)(pbStack_f8 + (longlong)puVar10 * 0x18 + 0xc) = uVar2;
      *(float *)(pbStack_f8 + (longlong)puVar10 * 0x18 + 0x14) = fVar21;
      puStack_f0 = (undefined8 *)((longlong)puVar10 + 1);
      lVar14 = lVar14 + 1;
      lVar16 = lVar16 + 1;
    }
    if (param_6 == 0) {
      if (puStack_f0 == (undefined8 *)0x0) goto LAB_141f27392;
      uVar15 = *(undefined8 *)pbStack_f8;
      puStack_268 = (undefined8 *)pdb_1406d0830(uStack_108);
      ppuStack_260 = (undefined8 **)uVar15;
      cVar11 = pdb_1408ffaf0(&puStack_268);
      if (cVar11 == '\0') {
        if (puStack_f0 < (undefined8 *)0x2) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(1,puStack_f0,&UNK_14342a7c8);
        }
        uVar15 = *(undefined8 *)(pbStack_f8 + 0x18);
        puStack_268 = (undefined8 *)pdb_1406d0830(uStack_108);
        ppuStack_260 = (undefined8 **)uVar15;
        cVar11 = pdb_1408ffaf0(&puStack_268);
        if (cVar11 == '\0') {
          if (puStack_100 == (undefined8 *)0x0) {
            return;
          }
          pub_1406abac0(pbStack_f8,(longlong)puStack_100 * 0x18,8);
          return;
        }
      }
    }
    uVar15 = *puStack_140;
    *puStack_148 = 1;
    puStack_148[1] = uVar15;
    plStack_258 = puStack_f0;
    puStack_268 = puStack_100;
    ppuStack_260 = (undefined8 **)pbStack_f8;
    if (*param_5 != 0) {
      pub_1406abac0((byte *)param_5[1],*param_5 * 0x18,8);
    }
    param_5[2] = (ulonglong)plStack_258;
    *param_5 = (ulonglong)puStack_268;
    param_5[1] = (ulonglong)ppuStack_260;
    puStack_150[2] = CONCAT44(uStack_114,uStack_118);
    *puStack_150 = uStack_128;
    puStack_150[1] = CONCAT44(uStack_11c,uStack_120);
    return;
  }
  pdb_142dc7e2a(8,0x30);
LAB_141f27392:
                    /* WARNING: Subroutine does not return */
  pdb_142dc81f2(0,0,&UNK_14342a7b0);
}

