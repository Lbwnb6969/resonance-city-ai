// VA 0x141f3f3e0, PDB extent 5169 bytes
// system_roof::ui_focused::ui_edit_roof_height_focused::ui_edit_roof_ridge_and_height_focused
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/roof/src/ui_focused/ui_edit_roof_height_focused.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_roof::ui_focused::ui_edit_roof_height_focused::ui_edit_roof_ridge_and_height_focused
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/roof/src/ui_focused/ui_edit_roof_height_focused.rs
   Extent: 5169 */

void pdb_141f3f3e0(float *param_1,longlong *param_2,ulonglong *param_3,longlong *param_4,
                  undefined8 param_5,undefined8 *param_6,longlong *param_7,longlong *param_8,
                  undefined8 *param_9,longlong *param_10,undefined8 *param_11,undefined8 *param_12,
                  undefined8 *param_13,longlong *param_14,undefined8 *param_15,float *param_16)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  code *pcVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  char cVar9;
  undefined1 uVar10;
  byte bVar11;
  uint uVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong *plVar15;
  undefined8 uVar16;
  byte *pbVar17;
  char *pcVar18;
  undefined8 uVar19;
  longlong lVar20;
  byte bVar21;
  longlong lVar22;
  longlong *plVar23;
  undefined8 *unaff_RDI;
  int iVar24;
  undefined *puVar25;
  undefined *puVar26;
  ulonglong uVar27;
  int *piVar28;
  float *unaff_R13;
  longlong *plVar29;
  undefined8 *puVar30;
  undefined4 uVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined4 uVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined1 auStack_368 [96];
  longlong *plStack_308;
  code *pcStack_300;
  undefined8 *puStack_2f8;
  undefined8 uStack_2f0;
  longlong **pplStack_2e8;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  byte *pbStack_238;
  undefined8 *puStack_230;
  undefined8 uStack_228;
  int iStack_21c;
  undefined8 uStack_218;
  float fStack_210;
  undefined8 uStack_20c;
  float fStack_204;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1c8;
  float fStack_1c0;
  int iStack_1bc;
  undefined8 uStack_1b8;
  float fStack_1b0;
  undefined4 uStack_1ac;
  undefined8 uStack_1a8;
  code *pcStack_1a0;
  float *pfStack_198;
  code *pcStack_190;
  ulonglong uStack_118;
  undefined1 uStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 uStack_f8;
  float *pfStack_f0;
  byte *pbStack_e8;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  longlong *plStack_c8;
  float fStack_c0;
  undefined8 *puStack_b8;
  longlong *plStack_b0;
  longlong *plStack_a8;
  longlong *plStack_a0;
  undefined1 uStack_92;
  undefined1 uStack_91;
  undefined8 uStack_90;
  
  uStack_90 = 0xfffffffffffffffe;
  puVar2 = (undefined8 *)*param_9;
  plStack_a0 = (longlong *)param_9[4];
  uStack_f8 = param_9[8];
  plVar23 = param_2;
  pfStack_f0 = param_1;
  uVar12 = pdb_140e94b40();
  plVar29 = (longlong *)(ulonglong)uVar12;
  if ((char)uVar12 == '\0') {
    uStack_258 = 0;
    pcVar18 = (char *)*param_2;
    cVar9 = *pcVar18;
    plVar23 = plVar29;
    plVar29 = param_4;
    param_4 = param_2;
    goto joined_r0x000141f3f57a;
  }
  unaff_RDI = (undefined8 *)0x5b;
  lVar13 = pdb_141f40a10(0x5b);
  unaff_R13 = (float *)&UNK_14342eaa3;
  if (lVar13 == 1) {
    if ((longlong *)0x5b < plVar23) {
LAB_141f403e2:
      pdb_142dc8070(&UNK_14342eaa3,0x5b,0);
LAB_141f40402:
      pdb_142dc8070(&UNK_14342eaa3,0x5b);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar14 = pdb_141f40a10(plVar23);
    if ((uVar14 & 1) != 0) {
      if (0x5b < (longlong)plVar23 + 2U) goto LAB_141f40402;
      unaff_RDI = (undefined8 *)(0x59 - (longlong)plVar23);
      unaff_R13 = (float *)((longlong)plVar23 + 0x14342eaa5);
    }
  }
  puVar25 = &UNK_14342e90b;
  puVar30 = (undefined8 *)&UNK_14342e8ca;
  do {
    bVar21 = puVar25[-1];
    uVar12 = (uint)(char)bVar21;
    puStack_b8 = puVar2;
    plStack_b0 = param_2;
    if ((char)bVar21 < '\0') {
      bVar11 = puVar25[-2];
      if ((char)bVar11 < -0x40) {
        bVar1 = puVar25[-3];
        if ((char)bVar1 < -0x40) {
          pbVar17 = puVar25 + -4;
          puVar25 = puVar25 + -4;
          uVar12 = bVar1 & 0x3f | (*pbVar17 & 7) << 6;
        }
        else {
          puVar25 = puVar25 + -3;
          uVar12 = bVar1 & 0xf;
        }
        uVar12 = bVar11 & 0x3f | uVar12 << 6;
      }
      else {
        puVar25 = puVar25 + -2;
        uVar12 = bVar11 & 0x1f;
      }
      uVar12 = (uint)(bVar21 & 0x3f) | uVar12 << 6;
      if (uVar12 != 0x5c) goto LAB_141f3f554;
LAB_141f3f585:
      puVar26 = puVar25 + -0x14342e8c9;
      if ((undefined *)0x41 < puVar26) {
        pdb_142dc8070(&UNK_14342e8ca,0x41,puVar26,0x41,&UNK_14342eb68);
        goto LAB_141f403e2;
      }
      plVar23 = (longlong *)(0x41 - (longlong)puVar26);
      puVar30 = (undefined8 *)(puVar25 + 1);
      goto LAB_141f3f5ad;
    }
    puVar25 = puVar25 + -1;
    if (uVar12 == 0x5c) goto LAB_141f3f585;
LAB_141f3f554:
    if (uVar12 == 0x2f) goto LAB_141f3f585;
  } while (puVar25 != &UNK_14342e8ca);
  plVar23 = (longlong *)0x41;
LAB_141f3f5ad:
  plVar15 = (longlong *)pdb_140e97000();
  if ((char)plVar15[0xd] != '\x01') goto LAB_141f402e0;
  do {
    if (*plVar15 == 0) {
      *plVar15 = -1;
      plStack_a8 = plVar15;
      uStack_250 = pdb_140e94f10(plVar15 + 1,unaff_R13,unaff_RDI,puVar30,plVar23,1,0);
      *plStack_a8 = *plStack_a8 + 1;
      plStack_a8 = (longlong *)uStack_250;
      plVar23 = (longlong *)((ulonglong)plVar29 & 0xffffffff);
      uStack_258 = 1;
      pcVar18 = (char *)*plStack_b0;
      cVar9 = *pcVar18;
      puVar2 = puStack_b8;
      plVar29 = param_4;
      param_4 = plStack_b0;
joined_r0x000141f3f57a:
      puVar30 = puVar2;
      if ((cVar9 == '\0') && (*(int *)(pcVar18 + 8) - 1U < 2)) {
        uVar14 = (ulonglong)puStack_b8 >> 8;
        puStack_b8 = (undefined8 *)CONCAT71((int7)uVar14,(char)plVar23);
        uStack_1f0 = *(undefined8 *)(pcVar18 + 0x10);
        uVar14 = pdb_140b54b40(*param_3);
        if ((uVar14 & 0xffffffff) == 0) {
          if ((char)puStack_b8 == '\0') {
            return;
          }
          plVar15 = (longlong *)pdb_140e97000();
          if ((char)plVar15[0xd] != '\x01') {
            plVar15 = (longlong *)pdb_142e293d0(plVar15,0);
            if (plVar15 == (longlong *)0x0) break;
          }
          if (*plVar15 == 0) {
            *plVar15 = -1;
            plStack_a0 = plVar15;
            pdb_140e95370(plVar15 + 1,plStack_a8);
            goto LAB_141f40298;
          }
          goto LAB_141f402d4;
        }
        lVar13 = plVar29[1];
        uVar27 = uVar14 & 0xffffffff ^ 0xffffffff;
        uVar34 = 1;
        iVar24 = (int)(uVar14 >> 0x20);
        if (*(ulonglong *)(lVar13 + 0x10) <= uVar27) {
LAB_141f4037d:
          uStack_1c8 = (longlong *)CONCAT44((int)uVar27,uVar34);
          fStack_1c0 = (float)uVar14;
          iStack_1bc = iVar24;
                    /* WARNING: Subroutine does not return */
          pdb_142dc8170(&UNK_14342ea78,0x2b,&uStack_1c8,&UNK_14342ea58,&UNK_14342e910);
        }
        piVar28 = (int *)(uVar27 * 0x18 + *(longlong *)(lVar13 + 8));
        uVar27 = uVar14 >> 0x20;
        if ((piVar28[4] != iVar24) || (*piVar28 == 0)) goto LAB_141f4037d;
        lVar20 = *plVar29;
        uVar27 = *(ulonglong *)(piVar28 + 2);
        uVar34 = 0;
        if ((*(ulonglong *)(lVar20 + 0x38) <= (uVar27 & 0xffffffff)) ||
           ((*(ulonglong *)(*(longlong *)(lVar20 + 0x28) + (uVar27 >> 6 & 0x3ffffff) * 8) >>
             (uVar27 & 0x3f) & 1) == 0)) goto LAB_141f4037d;
        if (*(ulonglong *)(lVar20 + 0x110) <
            *(ulonglong *)(*(longlong *)(lVar13 + 0x1a0) + 0x40 + (uVar27 >> 0x20) * 0x48)) {
          lVar13 = *(longlong *)(lVar13 + 0x1a0) + (uVar27 >> 0x20) * 0x48;
          uVar14 = *(ulonglong *)(*(longlong *)(lVar13 + 0x38) + *(ulonglong *)(lVar20 + 0x110) * 8)
          ;
          if (uVar14 == 0) goto LAB_141f3f72d;
          lVar13 = *(longlong *)(*(longlong *)(lVar13 + 0x18) + 0x10 + ~uVar14 * 0x30);
        }
        else {
LAB_141f3f72d:
          lVar13 = 0;
        }
        plVar29 = (longlong *)((ulonglong)(uint)~piVar28[1] * 0x58 + lVar13);
        uStack_1c8 = (longlong *)pdb_140ac6110(plVar29);
        pdb_140ac5730(&iStack_21c,&uStack_1c8,plVar29);
        fVar36 = (float)uStack_218;
        fVar37 = (float)((ulonglong)uStack_218 >> 0x20);
        fVar38 = 0.0;
        fVar39 = fStack_210;
        if (iStack_21c == 1) {
          fVar36 = (fVar36 + (float)uStack_20c) * _DAT_142e36f60;
          fVar37 = (fVar37 + (float)((ulonglong)uStack_20c >> 0x20)) * _UNK_142e36f64;
          fVar38 = _UNK_142e36f68 * 0.0;
          fVar39 = (fStack_210 + fStack_204) * _DAT_142e36f50;
        }
        plStack_c8 = (longlong *)
                     CONCAT44((float)((ulonglong)_DAT_14300cc80 >> 0x20) + fVar37,
                              (float)_DAT_14300cc80 + fVar36);
        fStack_c0 = fVar39 + 0.0;
        pdb_140e09030(&uStack_1c8,puVar2);
        fVar35 = _DAT_142e36f28 /
                 SQRT((float)uStack_1c8 * (float)uStack_1c8 + fStack_1c0 * fStack_1c0);
        pdb_140de88f0(&uStack_248,(float)(_DAT_142e37820 ^ (uint)fStack_1c0) * fVar35,
                      fVar35 * (float)uStack_1c8);
        fVar35 = _DAT_142e36f28;
        fStack_1b0 = fStack_c0 + 0.0;
        uStack_1b8._0_4_ = SUB84(plStack_c8,0) + _DAT_142f89640;
        uStack_1b8._4_4_ = (float)((ulonglong)plStack_c8 >> 0x20) + _UNK_142f89644;
        uStack_1c8 = (longlong *)uStack_248;
        fStack_1c0 = (float)uStack_240;
        iStack_1bc = (int)((ulonglong)uStack_240 >> 0x20);
        uStack_1ac = 0x3f800000;
        uStack_1a8._0_4_ = 0x3f800000;
        uStack_1a8._4_4_ = 0x3f800000;
        pdb_140b3d590(&pbStack_238,_DAT_142f95160,_DAT_142e36f28,_DAT_142e36f50,&uStack_1c8);
        uStack_91 = 1;
        cVar9 = pdb_140938ba0(*(undefined4 *)(*param_10 + 0x10),*(undefined4 *)(*param_10 + 0x14));
        if (cVar9 == '\0') {
          uStack_91 = 1;
          pdb_140c9deb0(&uStack_1c8);
          pcStack_300 = (code *)0x2;
          plStack_308 = (longlong *)CONCAT44(plStack_308._4_4_,1);
          uStack_91 = 1;
          pdb_140c9de10(auStack_368,&uStack_1c8,&plStack_308);
        }
        else {
          uStack_91 = 1;
          pdb_140c9dee0(auStack_368);
        }
        uVar3 = *param_6;
        pcStack_300 = pdb_141f40e30;
        uStack_91 = 1;
        plStack_308 = plVar29;
        pdb_140f60760(&uStack_1c8,&UNK_14342e928,&plStack_308);
        uStack_1e0 = CONCAT44(iStack_1bc,fStack_1c0);
        uStack_1e8 = uStack_1c8;
        uStack_1d8 = CONCAT44(uStack_1b8._4_4_,(float)uStack_1b8);
        uStack_2f0 = uStack_228;
        pcStack_300 = (code *)pbStack_238;
        puStack_2f8 = puStack_230;
        plStack_308 = (longlong *)CONCAT71(plStack_308._1_7_,2);
        uStack_118 = uStack_118 & 0xffffffffffffff00;
        uStack_92 = 1;
        param_3 = &uStack_118;
        pdb_140c9dcb0(&uStack_1c8,&plStack_308,param_3);
        uStack_92 = 1;
        pdb_140c9dd20(&plStack_308,&uStack_1c8,auStack_368);
        uStack_92 = 1;
        pdb_140c9dbe0(&uStack_1c8,&plStack_308,0);
        uStack_92 = 0;
        puVar30 = &uStack_1e8;
        uStack_108 = pdb_142807c30(uVar3,puVar30,&uStack_1c8);
        uStack_91 = 0;
        puStack_100 = puVar30;
        uVar10 = pdb_1408ffad0(&uStack_108);
        uStack_1c8 = (longlong *)CONCAT71(uStack_1c8._1_7_,uVar10);
        uStack_91 = 0;
        cVar9 = pdb_1408ff980(&uStack_1c8);
        if (cVar9 == '\0') {
          uStack_91 = 0;
          cVar9 = pdb_1408ffab0(&uStack_108);
          if (cVar9 != '\x02') goto LAB_141f3faab;
        }
        else {
LAB_141f3faab:
          fVar35 = _DAT_142e37990;
        }
        uVar3 = *param_11;
        uStack_91 = 0;
        fStack_dc = fVar35;
        uVar16 = pdb_14072cd40(&uStack_108);
        uStack_91 = 0;
        pdb_140b133e0(&uStack_1e8,uVar3,uVar16);
        uStack_1c8 = &uStack_1f0;
        fStack_1c0 = 30.506927;
        iStack_1bc = 1;
        fStack_1b0 = 7.6004868;
        uStack_1ac = 1;
        uStack_1a8 = &plStack_c8;
        pcStack_1a0 = pdb_140f33d80;
        pfStack_198 = &fStack_dc;
        pcStack_190 = pdb_140f70fc0;
        uStack_91 = 0;
        uStack_1b8 = &uStack_248;
        pdb_140f60760(&plStack_308,&UNK_14342e935,&uStack_1c8);
        uVar16 = uStack_240;
        uVar3 = uStack_248;
        puVar30 = puStack_2f8;
        pcVar5 = pcStack_300;
        plStack_b0 = plStack_308;
        uStack_1c8 = plStack_c8;
        fStack_1c0 = fStack_c0;
        pdb_14007ee60();
        pbVar17 = pub_1406abab0(0x30,0x10);
        pbStack_e8 = (byte *)pcVar5;
        if (pbVar17 == (byte *)0x0) goto LAB_141f40315;
        pbVar17[0] = 1;
        pbVar17[1] = 0;
        pbVar17[2] = 0;
        pbVar17[3] = 0;
        pbVar17[4] = 0;
        pbVar17[5] = 0;
        pbVar17[6] = 0;
        pbVar17[7] = 0;
        pbVar17[8] = 1;
        pbVar17[9] = 0;
        pbVar17[10] = 0;
        pbVar17[0xb] = 0;
        pbVar17[0xc] = 0;
        pbVar17[0xd] = 0;
        pbVar17[0xe] = 0;
        pbVar17[0xf] = 0;
        *(undefined8 *)(pbVar17 + 0x10) = uVar3;
        *(undefined8 *)(pbVar17 + 0x18) = uVar16;
        *(float *)(pbVar17 + 0x20) = fVar35;
        *(longlong **)(pbVar17 + 0x24) = uStack_1c8;
        *(float *)(pbVar17 + 0x2c) = fStack_1c0;
        unaff_RDI = &uStack_1c8;
        pdb_1409baea0(unaff_RDI,pcVar5,puVar30,pbVar17,&UNK_14342e950);
        pplStack_2e8 = uStack_1a8;
        pcStack_300 = (code *)CONCAT44(iStack_1bc,fStack_1c0);
        puStack_2f8 = uStack_1b8;
        uStack_2f0 = CONCAT44(uStack_1ac,fStack_1b0);
        plStack_308 = uStack_1c8;
        pdb_140b133f0(&uStack_1e8,&plStack_308);
        if (plStack_b0 != (longlong *)0x0) {
          pub_1406abac0(pbStack_e8,(ulonglong)plStack_b0,1);
        }
        fVar35 = *(float *)((longlong)plVar29 + 0x4c);
        uStack_91 = 0;
        bVar11 = pdb_1408ffab0(&uStack_108);
        bVar21 = 3;
        if (1 < bVar11) {
          bVar21 = bVar11 - 2;
        }
        pcVar18 = &UNK_14342eca4 + *(int *)(&UNK_14342eca4 + (ulonglong)bVar21 * 4);
        unaff_R13 = param_16;
        puVar30 = param_15;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(bVar21) {
        case 0:
          break;
        case 1:
          uStack_91 = 0;
          uVar16 = uStack_f8;
          pdb_140bce520(&plStack_308,uStack_f8);
          uVar34 = (undefined4)*plStack_a0;
          uStack_91 = 0;
          uVar31 = pdb_140bce550(&plStack_308,uVar34,*(undefined4 *)((longlong)plStack_a0 + 4));
          uStack_1c8 = (longlong *)CONCAT44(fVar35,fVar36);
          iStack_1bc = 0;
          uStack_1b8._0_4_ = 1.0;
          uStack_1b8._4_4_ = 0.0;
          uStack_118 = _DAT_14305d860;
          uStack_110 = 0;
          uStack_91 = 0;
          fStack_1c0 = fVar39;
          pdb_140bce5a0(&fStack_d8,uVar31,uVar34,&plStack_308,puVar2,unaff_RDI,param_3);
          auVar32._4_4_ = fVar39;
          auVar32._0_4_ = fVar39;
          auVar32._8_8_ = 0;
          auVar33._4_4_ =
               (fVar39 - fVar39) * (fVar39 - fVar39) +
               (fVar37 - fVar35) * (fVar37 - fVar35) + (fVar36 - fVar36) * (fVar36 - fVar36);
          auVar33._0_4_ =
               (fStack_d0 - fVar39) * (fStack_d0 - fVar39) +
               (fStack_d4 - fVar35) * (fStack_d4 - fVar35) +
               (fStack_d8 - fVar36) * (fStack_d8 - fVar36);
          auVar33._8_4_ = (fStack_d4 - fVar38) * (fStack_d4 - fVar38) + 0.0 + 0.0;
          auVar33._12_4_ = (fVar37 - fVar38) * (fVar37 - fVar38) + 0.0 + 0.0;
          auVar33 = sqrtps(auVar32,auVar33);
          *pfStack_f0 = auVar33._0_4_ - auVar33._4_4_;
          fVar39 = *(float *)((longlong)param_12 + 0x1c);
          param_3 = (ulonglong *)(ulonglong)(uint)fVar39;
          unaff_R13 = (float *)param_12[2];
          *unaff_R13 = fVar39;
          uVar3 = *param_12;
          unaff_RDI = (undefined8 *)*plVar29;
          uStack_91 = 0;
          uVar19 = pdb_140947f90(unaff_RDI);
          puVar30 = (undefined8 *)*param_13;
          uStack_91 = 0;
          pdb_142810770(uVar3,uVar19,uVar16,puVar30,param_5,&UNK_14342e980,9);
          *unaff_R13 = fVar39;
          uStack_91 = 0;
          pdb_140c419b0(uVar3,unaff_RDI,puVar30);
          uStack_91 = 0;
          lVar13 = pdb_140b0e4b0(*param_15,unaff_RDI);
          if (lVar13 == 0) {
            uStack_91 = 0;
                    /* WARNING: Subroutine does not return */
            pdb_142dc8150(&UNK_14342e990);
          }
          *param_16 = *(float *)(lVar13 + 0x54);
          lVar13 = *plVar29;
          lVar20 = plVar29[7];
          uStack_1b8._0_4_ = (float)((ulonglong)plVar29[6] >> 0x20);
          uStack_1b8._4_4_ = (float)lVar20;
          fStack_1b0 = (float)((ulonglong)lVar20 >> 0x20);
          uStack_1c8 = *(longlong **)((longlong)plVar29 + 0x24);
          uVar3 = *(undefined8 *)((longlong)plVar29 + 0x2c);
          fStack_1c0 = (float)uVar3;
          iStack_1bc = (int)((ulonglong)uVar3 >> 0x20);
          *(undefined4 *)param_8[2] = *(undefined4 *)((longlong)param_8 + 0x1c);
          puVar4 = (undefined4 *)*param_8;
          *puVar4 = 0;
          *(longlong *)(puVar4 + 4) = lVar13;
          *(longlong **)(puVar4 + 6) = uStack_1c8;
          *(undefined8 *)(puVar4 + 8) = uVar3;
          *(ulonglong *)(puVar4 + 9) = CONCAT44((float)uStack_1b8,iStack_1bc);
          *(longlong *)(puVar4 + 0xb) = lVar20;
          break;
        case 2:
          uStack_91 = 0;
          pdb_140bce520(&plStack_308,uStack_f8);
          uVar34 = (undefined4)*plStack_a0;
          uStack_91 = 0;
          uVar31 = pdb_140bce550(&plStack_308,uVar34,*(undefined4 *)((longlong)plStack_a0 + 4));
          uStack_1c8 = (longlong *)CONCAT44(fVar35,fVar36);
          iStack_1bc = 0;
          uStack_1b8._0_4_ = 1.0;
          uStack_1b8._4_4_ = 0.0;
          uStack_118 = _DAT_14305d860;
          uStack_110 = 0;
          uStack_91 = 0;
          fStack_1c0 = fVar39;
          pdb_140bce5a0(&fStack_d8,uVar31,uVar34,&plStack_308,puVar2,unaff_RDI,param_3);
          uStack_91 = 0;
          fVar36 = (float)pdb_140de8220();
          fVar39 = 0.0;
          if (0.0 <= fVar36) {
            fVar39 = fVar36;
          }
          fVar36 = _DAT_142e36f28;
          if (fVar39 <= _DAT_142e36f28) {
            fVar36 = fVar39;
          }
          *(undefined4 *)param_15[2] = *(undefined4 *)((longlong)param_15 + 0x1c);
          fVar39 = *param_16;
          if (fVar39 < _DAT_14300a33c) {
            fVar37 = *(float *)(plVar29 + 6);
            fVar38 = (fVar36 - fVar37) + fVar37;
            if (((_DAT_142e3b1d8 < fVar37) && (fVar35 = _DAT_14300a33c, fVar38 <= _DAT_142e3b1d8))
               || ((fVar37 <= _DAT_142e3b1d8 && (fVar35 = _DAT_142e3783c, _DAT_142e3b1d8 < fVar38)))
               ) {
              if (fVar35 <= fVar39) {
                fVar35 = fVar39;
              }
              fVar39 = _DAT_143008730;
              if (fVar35 <= _DAT_143008730) {
                fVar39 = fVar35;
              }
              uStack_91 = 0;
              pdb_140b0e460(*param_15,*plVar29,fVar39);
            }
          }
          plVar29 = (longlong *)*plVar29;
          *(undefined4 *)param_14[2] = *(undefined4 *)((longlong)param_14 + 0x1c);
          unaff_RDI = (undefined8 *)*param_14;
          lVar13 = unaff_RDI[6];
          puVar30 = (undefined8 *)unaff_RDI[8];
          if (lVar13 == unaff_RDI[4]) {
            pdb_142d7ee50(unaff_RDI + 4);
          }
          lVar20 = unaff_RDI[5];
          lVar22 = lVar13 * 0x40;
          *(undefined4 *)(lVar20 + lVar22) = 0;
          *(undefined4 *)(lVar20 + 8 + lVar22) = 1;
          *(float *)(lVar20 + 0xc + lVar22) = fVar36;
          *(undefined4 *)(lVar20 + 0x10 + lVar22) = 0;
          *(undefined4 *)(lVar20 + 0x18 + lVar22) = 0;
          *(longlong **)(lVar20 + 0x20 + lVar22) = plVar29;
          *(undefined4 *)(lVar20 + 0x28 + lVar22) = 0;
          *(undefined1 *)(lVar20 + 0x34 + lVar22) = 0;
          *(undefined8 **)(lVar20 + 0x38 + lVar22) = puVar30;
          unaff_RDI[6] = lVar13 + 1;
          unaff_RDI[8] = unaff_RDI[8] + 1;
          break;
        case 3:
          piVar28 = (int *)*param_8;
          if ((*piVar28 != 2) &&
             ((((((((float)piVar28[8] != *(float *)((longlong)plVar29 + 0x2c) ||
                   (NAN((float)piVar28[8]) || NAN(*(float *)((longlong)plVar29 + 0x2c)))) ||
                  ((float)piVar28[9] != *(float *)(plVar29 + 6))) ||
                 ((NAN((float)piVar28[9]) || NAN(*(float *)(plVar29 + 6)) ||
                  ((float)piVar28[10] != *(float *)((longlong)plVar29 + 0x34))))) ||
                ((NAN((float)piVar28[10]) || NAN(*(float *)((longlong)plVar29 + 0x34)) ||
                 (((float)piVar28[0xb] != *(float *)(plVar29 + 7) ||
                  (NAN((float)piVar28[0xb]) || NAN(*(float *)(plVar29 + 7)))))))) ||
               ((float)piVar28[6] != *(float *)((longlong)plVar29 + 0x24))) ||
              ((((NAN((float)piVar28[6]) || NAN(*(float *)((longlong)plVar29 + 0x24)) ||
                 ((float)piVar28[7] != *(float *)(plVar29 + 5))) ||
                (NAN((float)piVar28[7]) || NAN(*(float *)(plVar29 + 5)))) ||
               (((char)piVar28[0xc] != *(char *)((longlong)plVar29 + 0x3c) ||
                (*(char *)((longlong)piVar28 + 0x31) != *(char *)((longlong)plVar29 + 0x3d)))))))))
          {
            uVar12 = *(uint *)((longlong)param_7 + 0x1c);
            puVar30 = (undefined8 *)(ulonglong)uVar12;
            param_3 = (ulonglong *)param_7[2];
            *(uint *)param_3 = uVar12;
            unaff_RDI = (undefined8 *)*param_7;
            uVar16 = *(undefined8 *)(piVar28 + 4);
            uVar19 = *(undefined8 *)(piVar28 + 6);
            iVar24 = piVar28[8];
            iVar6 = piVar28[9];
            iVar7 = piVar28[10];
            iVar8 = piVar28[0xb];
            uVar3 = *(undefined8 *)((longlong)plVar29 + 0x24);
            uVar34 = *(undefined4 *)((longlong)plVar29 + 0x2c);
            lVar13 = plVar29[6];
            uVar31 = *(undefined4 *)((longlong)plVar29 + 0x34);
            lVar20 = plVar29[7];
            pdb_14007ee60();
            pbVar17 = pub_1406abab0(0x50,8);
            if (pbVar17 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc7e11(8,0x50);
            }
            pbVar17[0] = 1;
            pbVar17[1] = 0;
            pbVar17[2] = 0;
            pbVar17[3] = 0;
            pbVar17[4] = 0;
            pbVar17[5] = 0;
            pbVar17[6] = 0;
            pbVar17[7] = 0;
            pbVar17[8] = 1;
            pbVar17[9] = 0;
            pbVar17[10] = 0;
            pbVar17[0xb] = 0;
            pbVar17[0xc] = 0;
            pbVar17[0xd] = 0;
            pbVar17[0xe] = 0;
            pbVar17[0xf] = 0;
            pbVar17[0x10] = 2;
            *(int *)(pbVar17 + 0x14) = iVar6;
            *(int *)(pbVar17 + 0x18) = iVar24;
            *(int *)(pbVar17 + 0x1c) = iVar7;
            *(int *)(pbVar17 + 0x20) = iVar8;
            *(int *)(pbVar17 + 0x24) = (int)lVar13;
            *(undefined4 *)(pbVar17 + 0x28) = uVar34;
            *(undefined4 *)(pbVar17 + 0x2c) = uVar31;
            *(int *)(pbVar17 + 0x30) = (int)lVar20;
            *(undefined8 *)(pbVar17 + 0x38) = uVar16;
            *(undefined8 *)(pbVar17 + 0x40) = uVar19;
            *(undefined8 *)(pbVar17 + 0x48) = uVar3;
            fStack_1c0 = SUB84(pbVar17,0);
            iStack_1bc = (int)((ulonglong)pbVar17 >> 0x20);
            uStack_1c8 = (longlong *)0x8;
            pdb_140ae5180(unaff_RDI,&uStack_1c8,&UNK_14342e9a8);
            lVar13 = *plVar29;
            lVar20 = pdb_140b0e4b0(*param_15,lVar13);
            if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc8150(&UNK_14342e9c0);
            }
            if ((*param_16 != *(float *)(lVar20 + 0x54)) ||
               (NAN(*param_16) || NAN(*(float *)(lVar20 + 0x54)))) {
              *(uint *)param_3 = uVar12;
              pdb_140adfe50(unaff_RDI,lVar13);
            }
          }
          break;
        default:
          *pcVar18 = *pcVar18 + '\x01';
          cVar9 = (char)pcVar18;
          *pcVar18 = *pcVar18 + cVar9;
          *pcVar18 = *pcVar18 + cVar9;
          *pcVar18 = *pcVar18 + cVar9;
          *pcVar18 = *pcVar18 + cVar9;
          *pcVar18 = *pcVar18 + cVar9;
          *pcVar18 = *pcVar18 + cVar9;
          *pcVar18 = *pcVar18 + cVar9;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        plVar23 = (longlong *)((ulonglong)puStack_b8 & 0xff);
        param_4 = param_8;
      }
      if ((char)plVar23 == '\0') {
        return;
      }
      plVar15 = (longlong *)pdb_140e97000();
      if ((char)plVar15[0xd] != '\x01') {
        plVar15 = (longlong *)pdb_142e293d0(plVar15,0);
        if (plVar15 == (longlong *)0x0) break;
      }
      if (*plVar15 == 0) {
        *plVar15 = -1;
        plStack_a0 = plVar15;
        pdb_140e95370(plVar15 + 1);
LAB_141f40298:
        *plStack_a0 = *plStack_a0 + 1;
        return;
      }
    }
LAB_141f402d4:
    plVar15 = (longlong *)pdb_142dc8090(&UNK_14359bf70);
LAB_141f402e0:
    plVar15 = (longlong *)pdb_142e293d0(plVar15,0);
  } while (plVar15 != (longlong *)0x0);
  pdb_142dc7890(&UNK_14359bf00);
LAB_141f40315:
                    /* WARNING: Subroutine does not return */
  pdb_142dc7e11(0x10,0x30);
}

