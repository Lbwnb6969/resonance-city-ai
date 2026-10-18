// VA 0x14298c9d0, PDB extent 3015 bytes
// toolbar::demo_stuff::demo_show_max_elevation::demo_show_max_elevation
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/demo_stuff/demo_show_max_elevation.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   toolbar::demo_stuff::demo_show_max_elevation::demo_show_max_elevation
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/demo_stuff/demo_show_max_elevation.rs
   Extent: 3015 */

void pdb_14298c9d0(byte *param_1,float param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6,undefined8 *param_7)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  ulonglong *puVar4;
  byte *pbVar5;
  undefined8 uVar6;
  code *pcVar7;
  float fVar8;
  char cVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined8 *in_RDX;
  undefined8 *puVar15;
  longlong lVar16;
  byte *pbVar17;
  byte *pbVar18;
  byte *pbVar19;
  byte *pbVar20;
  undefined *puVar21;
  undefined *puVar22;
  byte *pbVar23;
  byte *pbVar24;
  undefined8 *puVar25;
  byte *pbVar26;
  byte *pbVar27;
  bool bVar28;
  bool bVar29;
  float fVar30;
  float fVar31;
  undefined4 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined4 extraout_XMM0_Dc;
  float fVar35;
  undefined4 uVar36;
  float fVar37;
  undefined1 auVar38 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  float fVar42;
  float fVar43;
  longlong lStack_1d8;
  byte *pbStack_1d0;
  longlong lStack_1c8;
  longlong lStack_1c0;
  byte *pbStack_1b8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined8 *puStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  byte *pbStack_120;
  byte *pbStack_118;
  undefined8 uStack_110;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  longlong *plStack_d0;
  longlong *plStack_c8;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  undefined8 uStack_b0;
  undefined1 auVar39 [16];
  
  uStack_b0 = 0xfffffffffffffffe;
  puVar15 = in_RDX;
  cVar9 = pdb_140a00340(*param_7);
  if (cVar9 != '\0') {
    return;
  }
  cVar9 = pdb_140e94b40();
  plStack_c8 = (longlong *)CONCAT71(plStack_c8._1_7_,cVar9);
  puStack_180 = param_3;
  puStack_178 = param_4;
  puStack_170 = in_RDX;
  if (cVar9 == '\0') {
    uStack_1a0 = 0;
    goto LAB_14298cbe9;
  }
  pbVar20 = (byte *)0x45;
  lVar11 = pdb_14298c5b0(0x45);
  puVar25 = (undefined8 *)&UNK_143608f78;
  if (lVar11 == 1) {
    if ((undefined8 *)0x45 < puVar15) {
LAB_14298d2f0:
      pdb_142dc8070(&UNK_143608f78,0x45,0);
LAB_14298d310:
      pdb_142dc8070(&UNK_143608f78,0x45);
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uVar12 = pdb_14298c5b0(puVar15);
    if ((uVar12 & 1) != 0) {
      if (0x45 < (longlong)puVar15 + 2U) goto LAB_14298d310;
      pbVar20 = (byte *)(0x43 - (longlong)puVar15);
      puVar25 = (undefined8 *)((longlong)puVar15 + 0x143608f7a);
    }
  }
  puVar21 = &UNK_1436090f1;
  pbVar26 = &UNK_1436090b1;
  do {
    bVar1 = puVar21[-1];
    uVar10 = (uint)(char)bVar1;
    if ((char)bVar1 < '\0') {
      bVar2 = puVar21[-2];
      if ((char)bVar2 < -0x40) {
        bVar3 = puVar21[-3];
        if ((char)bVar3 < -0x40) {
          pbVar18 = puVar21 + -4;
          puVar21 = puVar21 + -4;
          uVar10 = bVar3 & 0x3f | (*pbVar18 & 7) << 6;
        }
        else {
          puVar21 = puVar21 + -3;
          uVar10 = bVar3 & 0xf;
        }
        uVar10 = bVar2 & 0x3f | uVar10 << 6;
      }
      else {
        puVar21 = puVar21 + -2;
        uVar10 = bVar2 & 0x1f;
      }
      uVar10 = (uint)(bVar1 & 0x3f) | uVar10 << 6;
      if (uVar10 != 0x5c) goto LAB_14298cb44;
LAB_14298cb5c:
      puVar22 = puVar21 + -0x1436090b0;
      if (puVar22 < (undefined *)0x41) {
        pbVar18 = (byte *)(0x40 - (longlong)puVar22);
        pbVar26 = puVar21 + 1;
        goto LAB_14298cb7e;
      }
      pdb_142dc8070(&UNK_1436090b1,0x40,puVar22,0x40,&UNK_143609020);
      goto LAB_14298d2f0;
    }
    puVar21 = puVar21 + -1;
    if (uVar10 == 0x5c) goto LAB_14298cb5c;
LAB_14298cb44:
    if (uVar10 == 0x2f) goto LAB_14298cb5c;
  } while (puVar21 != &UNK_1436090b1);
  pbVar18 = (byte *)0x40;
LAB_14298cb7e:
  plVar13 = (longlong *)pdb_140e97000();
  if ((char)plVar13[0xd] != '\x01') goto LAB_14298d24f;
  do {
    if (*plVar13 == 0) {
      *plVar13 = -1;
      plStack_d0 = plVar13;
      uStack_198 = pdb_140e94f10(plVar13 + 1,puVar25,pbVar20,pbVar26,pbVar18,1,0);
      *plStack_d0 = *plStack_d0 + 1;
      uStack_1a0 = 1;
      plStack_d0 = (longlong *)uStack_198;
LAB_14298cbe9:
      puVar4 = *(ulonglong **)param_1;
      lVar11 = *(longlong *)(param_1 + 8);
      uVar12 = *puVar4;
      pbVar20 = (byte *)0x0;
      pbVar17 = (byte *)(uVar12 - *(ulonglong *)(lVar11 + 0x18));
      if (uVar12 < *(ulonglong *)(lVar11 + 0x18)) {
        pbVar17 = pbVar20;
      }
      pbVar27 = (byte *)(uVar12 - *(ulonglong *)(lVar11 + 0x38));
      if (uVar12 < *(ulonglong *)(lVar11 + 0x38)) {
        pbVar27 = pbVar20;
      }
      lVar16 = *(longlong *)(lVar11 + 8);
      pbVar5 = *(byte **)(lVar11 + 0x30);
      bVar28 = pbVar5 < pbVar27;
      pbVar23 = pbVar5 + -(longlong)pbVar27;
      pbVar24 = pbVar23;
      if (bVar28) {
        pbVar24 = pbVar20;
      }
      param_1 = *(byte **)(lVar11 + 0x10);
      puVar25 = (undefined8 *)(ulonglong)(bVar28 || pbVar23 == (byte *)0x0);
      bVar29 = param_1 < pbVar17;
      pbVar19 = param_1 + -(longlong)pbVar17;
      pbVar18 = pbVar19;
      if (bVar29) {
        pbVar18 = pbVar20;
      }
      pbVar20 = *(byte **)(lVar11 + 0x28);
      uVar12 = *(ulonglong *)(lVar11 + 0x40);
      pbVar26 = (byte *)(ulonglong)(bVar29 || pbVar19 == (byte *)0x0);
      *puVar4 = (uVar12 - (longlong)pbVar24) - (longlong)pbVar18;
      if (!bVar29 && pbVar19 != (byte *)0x0 || !bVar28 && pbVar23 != (byte *)0x0) {
        lVar16 = lVar16 + (longlong)pbVar17 * 0x28;
        if (param_1 < pbVar17) {
          lVar16 = 8;
        }
        pbVar23 = (byte *)0x0;
        if (pbVar17 < param_1) {
          pbVar23 = (byte *)(lVar16 + -0x28 + (longlong)pbVar18 * 0x28);
        }
        pbVar20 = pbVar20 + (longlong)pbVar27 * 0x28;
        if (pbVar5 < pbVar27) {
          pbVar20 = (byte *)0x8;
        }
        pbVar20 = pbVar20 + (longlong)pbVar24 * 0x28 + -0x28;
        if (pbVar5 <= pbVar27) {
          pbVar20 = pbVar23;
        }
        *puVar4 = uVar12;
        pdb_140a85190(&lStack_1d8,pbVar20 + 8);
        param_1 = pbStack_1d0;
        if (lStack_1c8 == 0) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(0,0,&UNK_1436090f8);
        }
        uVar36 = *(undefined4 *)pbStack_1d0;
        uVar32 = *(undefined4 *)(pbStack_1d0 + 4);
        pbVar20 = pbStack_1d0 + lStack_1c8 * 8;
        uVar6 = *puStack_180;
        uVar34 = *puStack_178;
        puVar25 = &uStack_168;
        pbVar18 = pbStack_1d0;
        fVar37 = 0.0;
        uStack_d8 = uVar36;
        uStack_d4 = uVar32;
        while (pbVar17 = pbVar18, pbVar17 != pbVar20) {
          pdb_140df4540(puVar25,pbVar17,0);
          fVar30 = (float)pdb_140a6ad50(uVar6);
          fVar31 = (float)pdb_140c151e0(puVar25,fVar30,param_2,uVar34);
          pbVar18 = pbVar17 + 8;
          pbVar26 = pbVar17;
          param_2 = fVar30;
          if (fVar37 < fVar31) {
            uVar32 = *(undefined4 *)(pbVar17 + 4);
            uVar36 = *(undefined4 *)pbVar17;
            uStack_d4 = *(undefined4 *)(pbVar17 + 4);
            fVar37 = fVar31;
            uStack_d8 = uVar36;
          }
        }
        pdb_140e09030(&uStack_168,uVar34);
        pbStack_120 = (byte *)CONCAT44((float)uStack_160,(int)uStack_168);
        pdb_140df4540(&uStack_168,&pbStack_120,0);
        fVar37 = (float)uStack_160;
        fVar31 = SUB84(uStack_168,0);
        fVar42 = (float)((ulonglong)uStack_168 >> 0x20);
        uVar32 = pdb_14140ce00(*puStack_170,uVar36,uVar32);
        pdb_140df4540(&uStack_168,&uStack_d8,uVar32);
        fVar30 = _DAT_142e36f28 / SQRT(fVar42 * fVar42 + fVar31 * fVar31 + fVar37 * fVar37);
        fVar31 = fVar30 * fVar31 * _DAT_142e36f60;
        fVar42 = fVar30 * fVar42 * _UNK_142e36f64;
        fVar37 = fVar30 * fVar37 * _DAT_142e36f50;
        uVar12 = (ulonglong)uStack_168 >> 0x20;
        fVar30 = SUB84(uStack_168,0) + fVar31;
        fVar43 = (float)uStack_160 + fVar37;
        uStack_168 = (undefined *)CONCAT44(fVar43,fVar30);
        pdb_140df4540(&fStack_bc,&uStack_168,_DAT_142f3e554);
        pdb_14007ee60();
        pbVar18 = pub_1406abab0(0x18,4);
        if (pbVar18 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc7e11(4,0x18);
        }
        *(ulonglong *)pbVar18 = CONCAT44((float)uVar12 + fVar42,fVar30);
        *(float *)(pbVar18 + 8) = fVar43;
        *(ulonglong *)(pbVar18 + 0xc) = CONCAT44(fStack_b8,fStack_bc);
        *(float *)(pbVar18 + 0x14) = fStack_b4;
        pbStack_120 = (byte *)0x2;
        uStack_110 = 2;
        pbStack_118 = pbVar18;
        pdb_140a89130(&uStack_168,&pbStack_120);
        pdb_140a89100(&pbStack_120,&uStack_168,_DAT_142e37adc);
        uVar33 = *param_5;
        pdb_140a89170(&pbStack_120,uVar33);
        pdb_14007ee60();
        pbVar18 = pub_1406abab0(0x18,4);
        fVar8 = fStack_b4;
        fVar43 = fStack_b8;
        fVar30 = fStack_bc;
        if (pbVar18 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc7e11(4,0x18);
        }
        fVar31 = fVar31 * _DAT_142e3783c;
        fVar42 = fVar42 * _DAT_142e3783c;
        fVar37 = fVar37 * _DAT_142e3783c;
        fVar35 = fVar42 + fStack_b8 + _DAT_143009d0c;
        *(float *)(pbVar18 + 8) = fStack_b4;
        *(ulonglong *)pbVar18 = CONCAT44(fStack_b8,fStack_bc);
        *(float *)(pbVar18 + 0xc) = fVar31 + fStack_bc;
        *(float *)(pbVar18 + 0x10) = fVar35;
        *(float *)(pbVar18 + 0x14) = fVar37 + fStack_b4;
        pbStack_120 = (byte *)0x2;
        uStack_110 = 2;
        pbStack_118 = pbVar18;
        pdb_140a89130(&uStack_168,&pbStack_120);
        pdb_140a89100(&pbStack_120,&uStack_168,_DAT_142e37adc);
        pdb_140a89170(&pbStack_120,uVar33);
        pdb_14007ee60();
        pbVar18 = pub_1406abab0(0x18,4);
        if (pbVar18 == (byte *)0x0) goto LAB_14298d2a8;
        fVar42 = (fVar43 - fVar42) + _DAT_143009d0c;
        *(float *)(pbVar18 + 8) = fStack_b4;
        *(ulonglong *)pbVar18 = CONCAT44(fStack_b8,fStack_bc);
        *(float *)(pbVar18 + 0xc) = fVar30 - fVar31;
        *(float *)(pbVar18 + 0x10) = fVar42;
        *(float *)(pbVar18 + 0x14) = fVar8 - fVar37;
        pbStack_120 = (byte *)0x2;
        uStack_110 = 2;
        pbStack_118 = pbVar18;
        pdb_140a89130(&uStack_168,&pbStack_120);
        pdb_140a89100(&pbStack_120,&uStack_168,_DAT_142e37adc);
        pdb_140a89170(&pbStack_120,uVar33);
        uVar33 = pdb_140a6ad50(uVar6);
        uVar32 = extraout_XMM0_Dc;
        uVar34 = pdb_140c151e0(&fStack_bc,(int)uVar33,fVar35,uVar34);
        fVar37 = (float)uVar33;
        pdb_140a6ad50(uVar6);
        *(undefined4 *)param_6[2] = *(undefined4 *)((longlong)param_6 + 0x1c);
        pbVar18 = (byte *)*param_6;
        uStack_168 = &UNK_143609110;
        uStack_160 = 0x1f;
        param_2 = fVar37;
        uVar12 = pdb_140bbbcb0(&uStack_168);
        pbVar27 = (byte *)(uVar12 ^ 0xb1695320004fb443);
        pbVar17 = pbVar27;
        lVar11 = pdb_14072c2d0(pbVar18);
        *(undefined1 *)(lVar11 + 0x5e) = 0;
        if (((ulonglong)pbVar17 & 1) == 0) {
          lVar11 = *(longlong *)(pbVar18 + 0x10);
          if (lVar11 == *(longlong *)pbVar18) {
            pdb_142d7f080(pbVar18);
          }
          auVar39._8_4_ = (int)((ulonglong)uVar34 >> 0x20);
          auVar39._0_8_ = uVar34;
          auVar39._12_4_ = (int)((ulonglong)uVar33 >> 0x20);
          auVar38._8_8_ = auVar39._8_8_;
          auVar38._4_4_ = (float)uVar33;
          auVar38._0_4_ = (int)uVar34;
          auVar40._4_4_ = fVar37 / _DAT_142e4bfe4;
          auVar40._0_4_ = fVar37 / _DAT_142e4bfe4;
          auVar40._8_4_ = uVar32;
          auVar40._12_4_ = uVar32;
          auVar40 = divps(auVar38,auVar40);
          auVar41._0_4_ = auVar40._0_4_ + _DAT_143608e70;
          auVar41._4_4_ = auVar40._4_4_ + _UNK_143608e74;
          auVar41._8_4_ = (float)_UNK_143608e68 + _UNK_143608e78;
          auVar41._12_4_ = (float)((ulonglong)_UNK_143608e68 >> 0x20) + _UNK_143608e7c;
          lVar16 = *(longlong *)(pbVar18 + 8);
          lVar14 = lVar11 * 0x38;
          *(undefined4 *)(lVar16 + lVar14) = 4;
          *(undefined1 (*) [16])(lVar16 + 4 + lVar14) = auVar41;
          *(undefined4 *)(lVar16 + 0x14 + lVar14) = 1;
          *(undefined8 *)(lVar16 + 0x18 + lVar14) = _DAT_143608e80;
          *(byte **)(lVar16 + 0x30 + lVar14) = pbVar27;
          pbVar20 = (byte *)(lVar11 + 1);
          *(byte **)(pbVar18 + 0x10) = pbVar20;
        }
        uStack_110 = 0;
        pbStack_120 = pbVar18;
        pbStack_118 = pbVar27;
        pdb_141174160(&uStack_168,&pbStack_120,&UNK_14360912f,0xf,0);
        pdb_14118c090(&uStack_168,&UNK_14360913e,4);
        if (lStack_1d8 != 0) {
          pub_1406abac0(param_1,lStack_1d8 << 3,4);
        }
        if (lStack_1c0 != 0) {
          pub_1406abac0(pbStack_1b8,lStack_1c0 << 2,4);
        }
      }
      if ((char)plStack_c8 == '\0') {
        return;
      }
      plVar13 = (longlong *)pdb_140e97000();
      if (((char)plVar13[0xd] != '\x01') &&
         (plVar13 = (longlong *)pdb_142dcf3a0(plVar13,0), plVar13 == (longlong *)0x0)) break;
      if (*plVar13 == 0) {
        *plVar13 = -1;
        plStack_c8 = plVar13;
        pdb_140e95370(plVar13 + 1,plStack_d0);
        *plStack_c8 = *plStack_c8 + 1;
        return;
      }
    }
    plVar13 = (longlong *)pdb_142dc8090(&UNK_1432a7f58);
LAB_14298d24f:
    plVar13 = (longlong *)pdb_142dcf3a0(plVar13,0);
  } while (plVar13 != (longlong *)0x0);
  pdb_142dc7890(&UNK_1432a7ee8);
LAB_14298d2a8:
                    /* WARNING: Subroutine does not return */
  pdb_142dc7e11(4,0x18);
}

