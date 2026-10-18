// VA 0x140bfe6f0, PDB extent 4833 bytes
// country_core::systems::debug::sheep_controls::sheep_controls
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/debug/sheep_controls.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::debug::sheep_controls::sheep_controls
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/debug/sheep_controls.rs
   Extent: 4833 */

void pdb_140bfe6f0(undefined8 param_1,longlong *param_2,longlong *param_3,undefined8 *param_4,
                  undefined8 *param_5,longlong *param_6,longlong *param_7,longlong param_8,
                  longlong *param_9,undefined8 *param_10)

{
  uint *puVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  byte bVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  char cVar14;
  int *piVar15;
  char *pcVar16;
  longlong lVar17;
  uint *puVar18;
  ulonglong uVar19;
  byte **ppbVar20;
  ulonglong uVar21;
  undefined *puVar22;
  byte *pbVar23;
  longlong *plVar24;
  byte *pbVar25;
  uint uVar26;
  longlong lVar27;
  ulonglong uVar28;
  undefined4 uVar29;
  code **ppcVar30;
  ulonglong uVar31;
  longlong lVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  longlong lVar35;
  longlong lVar36;
  longlong lVar37;
  longlong lVar38;
  undefined4 *puVar39;
  bool bVar40;
  float fVar41;
  float fVar42;
  byte *pbStack_448;
  code *pcStack_440;
  byte *pbStack_438;
  longlong alStack_430 [5];
  int iStack_408;
  longlong lStack_320;
  float *pfStack_2c0;
  code *pcStack_2b8;
  byte *pbStack_2b0;
  byte *pbStack_2a8;
  code *pcStack_2a0;
  byte *pbStack_298;
  longlong lStack_290;
  undefined *puStack_288;
  undefined *puStack_280;
  undefined8 uStack_278;
  undefined *puStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined *puStack_258;
  byte **ppbStack_250;
  undefined4 uStack_248;
  uint uStack_240;
  float fStack_23c;
  undefined8 uStack_238;
  undefined2 uStack_230;
  uint uStack_220;
  float fStack_21c;
  undefined8 uStack_218;
  float fStack_210;
  uint uStack_200;
  float fStack_1fc;
  undefined8 uStack_1f8;
  undefined1 uStack_1f0;
  undefined8 uStack_120;
  longlong lStack_118;
  longlong lStack_110;
  undefined8 uStack_108;
  uint uStack_fc;
  longlong lStack_f8;
  longlong *plStack_f0;
  longlong lStack_e8;
  char *pcStack_e0;
  char *pcStack_d8;
  longlong lStack_d0;
  longlong lStack_c8;
  undefined1 uStack_b9;
  byte *pbStack_b8;
  longlong lStack_b0;
  float fStack_a4;
  byte *pbStack_a0;
  byte abStack_91 [81];
  
  abStack_91[1] = 0xfe;
  abStack_91[2] = 0xff;
  abStack_91[3] = 0xff;
  abStack_91[4] = 0xff;
  abStack_91[5] = 0xff;
  abStack_91[6] = 0xff;
  abStack_91[7] = 0xff;
  abStack_91[8] = 0xff;
  lVar36 = *param_3;
  lVar37 = param_3[1];
  lVar17 = param_3[2];
  puVar18 = *(uint **)(lVar36 + 0xf8);
  lVar38 = *(longlong *)(lVar36 + 0x100);
  puVar1 = puVar18 + lVar38;
  cVar14 = *(char *)(lVar36 + 0x108);
  plStack_f0 = param_2;
  if (cVar14 == '\0') {
    ppcVar30 = &pcStack_2a0;
    ppbVar20 = &pbStack_298;
    plVar24 = &lStack_290;
    lVar38 = lVar38 << 2;
    do {
      if (lVar38 == 0) {
        pbVar25 = (byte *)0x0;
        puVar18 = puVar1;
        goto LAB_140bfe930;
      }
      uVar26 = *puVar18;
      puVar18 = puVar18 + 1;
      lVar32 = *(longlong *)(*(longlong *)(lVar37 + 0x100) + 0x58 + (ulonglong)uVar26 * 0xa0);
      lVar38 = lVar38 + -4;
    } while (lVar32 == 0);
    lVar27 = *(longlong *)(lVar37 + 0x100) + (ulonglong)uVar26 * 0xa0;
    uVar19 = (ulonglong)*(uint *)(lVar27 + 0x94);
    lVar38 = *(longlong *)(*(longlong *)(lVar37 + 0x1a0) + 0x18 + uVar19 * 0x48);
    lVar35 = ~*(ulonglong *)
               (*(longlong *)(*(longlong *)(lVar37 + 0x1a0) + 0x38 + uVar19 * 0x48) +
               *(longlong *)(lVar36 + 0x110) * 8) * 0x30;
    uVar19 = (ulonglong)~*(uint *)(*(longlong *)(lVar27 + 0x50) + 8);
    pbVar25 = (byte *)(uVar19 * 0x50 + *(longlong *)(lVar38 + 0x10 + lVar35));
    lVar36 = uVar19 * 4;
    pbVar23 = (byte *)(lVar36 + *(longlong *)(lVar38 + 0x28 + lVar35));
    pbStack_2a8 = pbVar25;
    pcStack_2a0 = (code *)(*(longlong *)(lVar38 + 0x20 + lVar35) + lVar36);
  }
  else {
    ppcVar30 = &pcStack_440;
    ppbVar20 = &pbStack_438;
    plVar24 = alStack_430;
    lVar38 = lVar38 << 2;
    do {
      if (lVar38 == 0) {
        pbVar25 = (byte *)0x0;
        puVar18 = puVar1;
        goto LAB_140bfe8f0;
      }
      uVar26 = *puVar18;
      puVar18 = puVar18 + 1;
      lVar32 = *(longlong *)(*(longlong *)(lVar37 + 0x1a0) + 0x10 + (ulonglong)uVar26 * 0x48);
      lVar38 = lVar38 + -4;
    } while (lVar32 == 0);
    lVar38 = *(longlong *)(lVar37 + 0x1a0) + (ulonglong)uVar26 * 0x48;
    lVar27 = *(longlong *)(lVar38 + 0x18);
    lVar36 = ~*(ulonglong *)(*(longlong *)(lVar38 + 0x38) + *(longlong *)(lVar36 + 0x110) * 8) *
             0x30;
    pbVar23 = *(byte **)(lVar27 + 0x28 + lVar36);
    pbVar25 = *(byte **)(lVar27 + 0x10 + lVar36);
    pcStack_440 = *(code **)(lVar27 + 0x20 + lVar36);
    pbStack_448 = pbVar25;
  }
  *ppbVar20 = pbVar23;
  *plVar24 = lVar17;
  ppbVar20 = (byte **)ppcVar30[1];
  ppcVar30 = (code **)(ulonglong)*(uint *)((longlong)ppcVar30 + 0x14);
  if (cVar14 == '\0') {
    if ((int)lVar32 != 1) goto LAB_140bff957;
LAB_140bfe930:
    do {
      uVar29 = SUB84(ppcVar30,0);
      if (puVar18 == puVar1) goto LAB_140bfe985;
      uVar26 = *puVar18;
      puVar18 = puVar18 + 1;
    } while (*(longlong *)(*(longlong *)(lVar37 + 0x100) + 0x58 + (ulonglong)uVar26 * 0xa0) == 0);
  }
  else {
    if ((int)lVar32 != 1) {
LAB_140bff957:
      bVar40 = true;
      goto LAB_140bfe954;
    }
LAB_140bfe8f0:
    do {
      uVar29 = SUB84(ppcVar30,0);
      if (puVar18 == puVar1) goto LAB_140bfe985;
      uVar26 = *puVar18;
      puVar18 = puVar18 + 1;
    } while (*(longlong *)(*(longlong *)(lVar37 + 0x1a0) + 0x10 + (ulonglong)uVar26 * 0x48) == 0);
  }
  bVar40 = pbVar25 != (byte *)0x0;
LAB_140bfe954:
  pbStack_2a8 = (byte *)CONCAT71(pbStack_2a8._1_7_,bVar40);
                    /* WARNING: Subroutine does not return */
  pdb_142dc8170(&UNK_1430680b8,0x2b,&pbStack_2a8,&UNK_143068108,&UNK_143067b90);
LAB_140bfe985:
  if (pbVar25 == (byte *)0x0) {
    bVar40 = false;
    goto LAB_140bfe954;
  }
  *(undefined4 *)ppbVar20 = uVar29;
  abStack_91[0] = false;
  if (!SBORROW8(0,*(longlong *)pbVar25)) {
    pdb_140bff9e0(plStack_f0,pbVar25);
    abStack_91[0] = !SBORROW8(0,*(longlong *)pbVar25);
  }
  if (DAT_143cb2cc0 != '\0') {
    pbStack_2a8 = (byte *)CONCAT44(pbStack_2a8._4_4_,0x28);
    cVar14 = pdb_1417b1a90(*param_9 + 0x20,&pbStack_2a8);
    if ((cVar14 != '\0') && (abStack_91[0] = abStack_91[0] ^ 1, 2 < *_DAT_143ca8e90)) {
      pbStack_448 = abStack_91;
      pcStack_440 = pdb_140f72cf0;
      pbStack_2a8 = (byte *)0x0;
      pcStack_2a0 = (code *)&UNK_143067bb8;
      pbStack_298 = (byte *)0x2c;
      lStack_290 = 0;
      puStack_288 = &UNK_143067af3;
      puStack_280 = (undefined *)0x37;
      uStack_278 = 3;
      puStack_270 = &UNK_143067bb8;
      uStack_268 = 0x2c;
      uStack_260 = 0x7c00000001;
      puStack_258 = &UNK_143067ba8;
      ppbStack_250 = &pbStack_448;
      pdb_140f332f0(&uStack_b9,&pbStack_2a8);
    }
  }
  lVar17 = *param_7;
  if ((*(char *)(lVar17 + 0xc5) == '\0') || (*(char *)(lVar17 + 0xc0) == '\0')) {
    plVar24 = *(longlong **)(param_8 + 8);
    if (plVar24 == (longlong *)0x0) {
      plVar24 = *(longlong **)(param_8 + 0x10);
    }
    lVar17 = *(longlong *)(pbVar25 + 0x30);
    lVar36 = plVar24[2];
    if ((ulonglong)(*plVar24 - lVar36) < 0x18) {
      pdb_142d7f1b0(plVar24,lVar36,0x18,1,1);
    }
    lVar37 = plVar24[1];
    *(code **)(lVar37 + lVar36) = pdb_14160bfd0;
    *(longlong *)(lVar37 + 8 + lVar36) = lVar17;
    *(code **)(lVar37 + 0x10 + lVar36) = pdb_14160dde0;
    plVar24[2] = lVar36 + 0x18;
    plVar24 = *(longlong **)(param_8 + 8);
    if (plVar24 == (longlong *)0x0) {
      plVar24 = *(longlong **)(param_8 + 0x10);
    }
    lVar17 = *(longlong *)(pbVar25 + 0x38);
    lVar36 = plVar24[2];
    if ((ulonglong)(*plVar24 - lVar36) < 0x18) {
      pdb_142d7f1b0(plVar24,lVar36,0x18,1,1);
    }
    lVar37 = plVar24[1];
    *(code **)(lVar37 + lVar36) = pdb_14160bfd0;
    *(longlong *)(lVar37 + 8 + lVar36) = lVar17;
    *(code **)(lVar37 + 0x10 + lVar36) = pdb_14160dde0;
    plVar24[2] = lVar36 + 0x18;
  }
  else {
    lVar36 = *param_6;
    if (lVar36 != 0) {
      pdb_140a7ae00(&pbStack_448,&UNK_143067be4,0xd);
      *(undefined4 *)param_7[2] = *(undefined4 *)((longlong)param_7 + 0x1c);
      lStack_320 = lVar17 + 0xc5;
      pub_142e32760(&pbStack_2a8,&pbStack_448,0x188);
      pdb_14007ee60();
      pbStack_a0 = pub_1406abab0(0x48,8);
      if (pbStack_a0 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc7e11(8,0x48);
      }
      *(byte **)pbStack_a0 = abStack_91;
      *(byte **)(pbStack_a0 + 8) = pbVar25 + 0x40;
      *(byte **)(pbStack_a0 + 0x10) = pbVar25 + 0x48;
      *(byte **)(pbStack_a0 + 0x18) = pbVar25 + 0x30;
      *(byte **)(pbStack_a0 + 0x20) = pbVar25 + 0x38;
      *(byte **)(pbStack_a0 + 0x28) = pbVar25;
      *(byte **)(pbStack_a0 + 0x30) = pbVar25 + 0x18;
      *(longlong **)(pbStack_a0 + 0x38) = plStack_f0;
      *(longlong *)(pbStack_a0 + 0x40) = param_8;
      pdb_140a7b150(&pbStack_448,&pbStack_2a8,lVar36,pbStack_a0,&UNK_143068128);
      pbStack_b8 = pbVar25;
      if (iStack_408 != 2) {
        LOCK();
        *(longlong *)pbStack_438 = *(longlong *)pbStack_438 + -1;
        UNLOCK();
        if (*(longlong *)pbStack_438 == 0) {
          pdb_140d71bf0(&pbStack_438);
        }
      }
      fVar13 = _UNK_14306799c;
      fVar12 = _UNK_143067998;
      fVar11 = _UNK_143067994;
      fVar10 = _DAT_143067990;
      fVar9 = _DAT_14300c320;
      fVar8 = _DAT_142e37848;
      uStack_120 = *param_5;
      pcStack_e0 = (char *)*param_4;
      lStack_c8 = *plStack_f0;
      pbStack_a0 = (byte *)plStack_f0[1];
      uStack_fc = *(uint *)(plStack_f0 + 2);
      fStack_a4 = *(float *)((longlong)plStack_f0 + 0x14);
      pcStack_2b8 = (code *)(pbStack_a0 + 0x198);
      pbStack_2b0 = pbStack_a0 + 0xf8;
      puVar18 = *(uint **)(lStack_c8 + 0xf8);
      puVar1 = puVar18 + *(longlong *)(lStack_c8 + 0x100);
      lStack_d0 = CONCAT71(lStack_d0._1_7_,*(undefined1 *)(lStack_c8 + 0x108));
      fVar4 = *(float *)(pcStack_e0 + 0x10);
      fVar41 = (float)*(undefined8 *)(pcStack_e0 + 0x14);
      fVar42 = (float)((ulonglong)*(undefined8 *)(pcStack_e0 + 0x14) >> 0x20);
      pcStack_d8 = pcStack_e0 + 4;
      lStack_110 = 8;
      lStack_e8 = 0;
      lVar17 = 0;
      uVar26 = 0;
      lStack_b0 = 0;
      lStack_118 = 8;
      uStack_108 = 0;
LAB_140bfed0a:
      do {
        pbVar25 = pbStack_b8;
        if ((char)lStack_d0 == '\0') {
          if (uVar26 == (uint)lVar17) {
            do {
              if (puVar18 == puVar1) goto LAB_140bff328;
              uVar26 = *puVar18;
              puVar18 = puVar18 + 1;
              lVar17 = *(longlong *)
                        (*(longlong *)(pbStack_a0 + 0x100) + 0x58 + (ulonglong)uVar26 * 0xa0);
            } while (lVar17 == 0);
            lVar38 = *(longlong *)(pbStack_a0 + 0x100) + (ulonglong)uVar26 * 0xa0;
            uVar19 = (ulonglong)*(uint *)(lVar38 + 0x94);
            lVar36 = *(longlong *)(*(longlong *)(pbStack_a0 + 0x1a0) + 0x18 + uVar19 * 0x48);
            lVar37 = *(longlong *)(*(longlong *)(pbStack_a0 + 0x1a0) + 0x38 + uVar19 * 0x48);
            lVar32 = ~*(ulonglong *)(lVar37 + *(longlong *)(lStack_c8 + 0x110) * 8) * 0x30;
            lStack_b0 = *(longlong *)(lVar36 + 0x10 + lVar32);
            lStack_f8 = *(longlong *)(lVar36 + 0x28 + lVar32);
            lStack_e8 = *(longlong *)
                         (lVar36 + 0x10 +
                         ~*(ulonglong *)(lVar37 + *(longlong *)(lStack_c8 + 0x118) * 8) * 0x30);
            lStack_110 = *(longlong *)(lVar38 + 0x50);
            uVar26 = 0;
            uVar19 = 0;
          }
          else {
            uVar19 = (ulonglong)uVar26;
          }
          piVar15 = (int *)(lStack_110 + uVar19 * 0x10);
          uVar19 = (ulonglong)~*(uint *)(lStack_110 + 8 + uVar19 * 0x10);
        }
        else {
          if (uVar26 == (uint)lVar17) {
            do {
              if (puVar18 == puVar1) goto LAB_140bff328;
              uVar26 = *puVar18;
              puVar18 = puVar18 + 1;
              lVar17 = *(longlong *)
                        (*(longlong *)(pbStack_a0 + 0x1a0) + 0x10 + (ulonglong)uVar26 * 0x48);
            } while (lVar17 == 0);
            lVar36 = *(longlong *)(pbStack_a0 + 0x1a0) + (ulonglong)uVar26 * 0x48;
            lStack_118 = *(longlong *)(lVar36 + 8);
            lVar37 = *(longlong *)(lVar36 + 0x18);
            lVar38 = ~*(ulonglong *)
                       (*(longlong *)(lVar36 + 0x38) + *(longlong *)(lStack_c8 + 0x110) * 8) * 0x30;
            lStack_b0 = *(longlong *)(lVar37 + 0x10 + lVar38);
            lStack_f8 = *(longlong *)(lVar37 + 0x28 + lVar38);
            lStack_e8 = *(longlong *)
                         (lVar37 + 0x10 +
                         ~*(ulonglong *)
                           (*(longlong *)(lVar36 + 0x38) + *(longlong *)(lStack_c8 + 0x118) * 8) *
                         0x30);
            uVar26 = 0;
          }
          uVar19 = (ulonglong)uVar26;
          piVar15 = (int *)(lStack_118 + uVar19 * 8);
        }
        lVar37 = uVar19 * 0x30 + lStack_b0;
        lVar36 = uVar19 * 0x68 + lStack_e8;
        if (*piVar15 == 0) goto LAB_140bff328;
        uVar26 = uVar26 + 1;
        pbStack_448 = (byte *)(lVar36 + 0x20);
        pcStack_440 = pdb_140f72a40;
        ppbVar20 = &pbStack_448;
        pfStack_2c0 = (float *)(lStack_f8 + uVar19 * 4);
        pdb_140f60760(&pbStack_2a8,&UNK_143067ce8,ppbVar20);
        pbStack_448 = pbStack_2a8;
        pcStack_440 = pcStack_2a0;
        pbStack_438 = pbStack_298;
        fStack_21c = fVar9 + fVar10;
        fStack_210 = (float)((ulonglong)*(undefined8 *)(lVar37 + 0x14) >> 0x20) + fVar13;
        uStack_220 = uStack_220 & 0xffffff00;
        uStack_218 = CONCAT44((float)*(undefined8 *)(lVar37 + 0x14) + fVar12,
                              *(float *)(lVar37 + 0x10) + fVar11);
        uStack_230 = 0xe01;
        lStack_290 = CONCAT44(lStack_290._4_4_,1);
        puStack_288 = (undefined *)0x0;
        uStack_278 = CONCAT44(uStack_278._4_4_,2);
        uStack_260 = CONCAT44(uStack_260._4_4_,3);
        uStack_248 = 3;
        pbStack_2a8 = (byte *)0x0;
        pcStack_2a0 = (code *)0x8;
        pbStack_298 = (byte *)0x0;
        uStack_200 = CONCAT22(uStack_200._2_2_,0x101);
        lVar38 = pdb_1409008d0(uStack_120);
      } while (*(char *)(lVar38 + 0x18) != '\x02');
      if (((*(byte ***)(lVar38 + 0x38) == ppbVar20) && (*(char *)(lVar38 + 0x19) == '\x04')) &&
         (fVar8 < SQRT(fVar42 * fVar42 + fVar4 * fVar4 + fVar41 * fVar41))) {
        pcVar16 = "";
        if (*pcStack_e0 != '\0') {
          pcVar16 = pcStack_d8;
        }
        uVar29 = *(undefined4 *)(pcVar16 + 8);
        *(undefined4 *)(lVar37 + 0x10) = *(undefined4 *)pcVar16;
        *pfStack_2c0 = fStack_a4;
        *(undefined4 *)(lVar37 + 0x18) = uVar29;
        uStack_108 = CONCAT71((uint7)(uint3)((uint)fStack_a4 >> 8),1);
        if (*(char *)(lVar38 + 0x18) != '\x02') goto LAB_140bfed0a;
      }
      if ((*(char *)(lVar38 + 0x19) == '\x01') && (*(byte ***)(lVar38 + 0x38) == ppbVar20)) {
        *(longlong *)(pbStack_b8 + 0x40) = *(longlong *)(lVar36 + 0x20);
      }
      goto LAB_140bfed0a;
    }
  }
  goto LAB_140bff111;
LAB_140bff328:
  bVar5 = pbStack_b8[0x48];
  if (bVar5 == 0) goto LAB_140bff758;
  pcVar16 = "";
  if (*pcStack_e0 != '\0') {
    pcVar16 = pcStack_d8;
  }
  fStack_210 = *(float *)(pcVar16 + 8);
  uStack_218 = *(undefined8 *)pcVar16;
  pbStack_2a8 = (byte *)0x0;
  pcStack_2a0 = (code *)0x8;
  pbStack_298 = (byte *)0x0;
  lStack_290 = CONCAT44(lStack_290._4_4_,1);
  puStack_288 = (undefined *)0x0;
  uStack_278 = CONCAT44(uStack_278._4_4_,2);
  uStack_260 = CONCAT44(uStack_260._4_4_,3);
  uStack_248 = 3;
  uStack_230 = 0x101;
  uStack_220 = uStack_220 & 0xffffff00;
  fStack_21c = 0.25;
  uStack_200 = CONCAT22(uStack_200._2_2_,0x100);
  puVar22 = &UNK_143067cd8;
  lVar17 = pdb_140900b80(uStack_120,&UNK_143067cd8,0x10,&pbStack_2a8);
  if (((*(char *)(lVar17 + 0x18) != '\x02') || (*(char *)(lVar17 + 0x19) != '\x01')) ||
     (*(undefined **)(lVar17 + 0x38) != puVar22)) goto LAB_140bff758;
  puVar18 = *(uint **)(lStack_c8 + 0xf8);
  puVar1 = puVar18 + *(longlong *)(lStack_c8 + 0x100);
  if (*(char *)(lStack_c8 + 0x108) == '\0') {
    lVar32 = 8;
    lVar37 = 0;
    uVar26 = 0;
    lVar36 = 0;
    lVar17 = 0;
    lVar38 = 0;
    do {
      if (uVar26 == (uint)lVar38) {
        do {
          if (puVar18 == puVar1) goto LAB_140bff751;
          uVar26 = *puVar18;
          puVar18 = puVar18 + 1;
          lVar38 = *(longlong *)
                    (*(longlong *)(pbStack_a0 + 0x100) + 0x58 + (ulonglong)uVar26 * 0xa0);
        } while (lVar38 == 0);
        lVar27 = *(longlong *)(pbStack_a0 + 0x100) + (ulonglong)uVar26 * 0xa0;
        uVar19 = (ulonglong)*(uint *)(lVar27 + 0x94);
        lVar32 = *(longlong *)(*(longlong *)(pbStack_a0 + 0x1a0) + 0x18 + uVar19 * 0x48);
        lVar37 = *(longlong *)(*(longlong *)(pbStack_a0 + 0x1a0) + 0x38 + uVar19 * 0x48);
        lVar36 = ~*(ulonglong *)(lVar37 + *(longlong *)(lStack_c8 + 0x110) * 8) * 0x30;
        lVar17 = *(longlong *)(lVar32 + 0x10 + lVar36);
        pbStack_b8 = *(byte **)(lVar32 + 0x28 + lVar36);
        lVar35 = ~*(ulonglong *)(lVar37 + *(longlong *)(lStack_c8 + 0x118) * 8) * 0x30;
        lVar36 = *(longlong *)(lVar32 + 0x10 + lVar35);
        lStack_d0 = *(longlong *)(lVar32 + 0x28 + lVar35);
        lVar35 = ~*(ulonglong *)(lVar37 + *(longlong *)(lStack_c8 + 0x120) * 8) * 0x30;
        lVar37 = *(longlong *)(lVar32 + 0x10 + lVar35);
        lStack_b0 = *(longlong *)(lVar32 + 0x28 + lVar35);
        lVar32 = *(longlong *)(lVar27 + 0x50);
        uVar26 = 1;
        uVar19 = 0;
      }
      else {
        uVar19 = (ulonglong)uVar26;
        uVar26 = uVar26 + 1;
      }
      if (*(int *)(lVar32 + uVar19 * 0x10) == 0) goto LAB_140bff751;
      uVar19 = (ulonglong)~*(uint *)(uVar19 * 0x10 + lVar32 + 8);
    } while (*(longlong *)(lVar36 + 0x20 + uVar19 * 0x68) != *(longlong *)(pbVar25 + 0x40));
    lVar36 = lVar36 + uVar19 * 0x68;
  }
  else {
    lVar37 = 0;
    lVar32 = 8;
    uVar26 = 0;
    lVar36 = 0;
    lVar17 = 0;
    lVar38 = 0;
    do {
      if (uVar26 == (uint)lVar38) {
        do {
          if (puVar18 == puVar1) goto LAB_140bff751;
          uVar26 = *puVar18;
          puVar18 = puVar18 + 1;
          lVar38 = *(longlong *)
                    (*(longlong *)(pbStack_a0 + 0x1a0) + 0x10 + (ulonglong)uVar26 * 0x48);
        } while (lVar38 == 0);
        lVar17 = *(longlong *)(pbStack_a0 + 0x1a0) + (ulonglong)uVar26 * 0x48;
        lVar37 = *(longlong *)(lVar17 + 0x38);
        lVar32 = *(longlong *)(lVar17 + 8);
        lVar27 = *(longlong *)(lVar17 + 0x18);
        lVar36 = ~*(ulonglong *)(lVar37 + *(longlong *)(lStack_c8 + 0x110) * 8) * 0x30;
        lVar17 = *(longlong *)(lVar27 + 0x10 + lVar36);
        pbStack_b8 = *(byte **)(lVar27 + 0x28 + lVar36);
        lVar35 = ~*(ulonglong *)(lVar37 + *(longlong *)(lStack_c8 + 0x118) * 8) * 0x30;
        lVar36 = *(longlong *)(lVar27 + 0x10 + lVar35);
        lStack_d0 = *(longlong *)(lVar27 + 0x28 + lVar35);
        lVar35 = ~*(ulonglong *)(lVar37 + *(longlong *)(lStack_c8 + 0x120) * 8) * 0x30;
        lVar37 = *(longlong *)(lVar27 + 0x10 + lVar35);
        lStack_b0 = *(longlong *)(lVar27 + 0x28 + lVar35);
        uVar26 = 0;
      }
      uVar19 = (ulonglong)uVar26;
      if (*(int *)(lVar32 + uVar19 * 8) == 0) goto LAB_140bff751;
      uVar26 = uVar26 + 1;
    } while (*(longlong *)(lVar36 + 0x20 + uVar19 * 0x68) != *(longlong *)(pbVar25 + 0x40));
    lVar36 = lVar36 + uVar19 * 0x68;
  }
  lVar17 = lVar17 + uVar19 * 0x30;
  pfVar2 = (float *)(lStack_d0 + uVar19 * 4);
  pfVar3 = (float *)(lStack_b0 + uVar19 * 4);
  puVar39 = (undefined4 *)(lVar37 + uVar19 * 0x10);
  if (bVar5 == 2) {
    pcVar16 = "";
    if (*pcStack_e0 != '\0') {
      pcVar16 = pcStack_d8;
    }
    uVar29 = *(undefined4 *)(pcVar16 + 8);
    *(undefined4 *)(lVar17 + 0x10) = *(undefined4 *)pcVar16;
    *(float *)(pbStack_b8 + uVar19 * 4) = fStack_a4;
    *(undefined4 *)(lVar17 + 0x18) = uVar29;
  }
  else {
    pcVar16 = "";
    if (*pcStack_e0 != '\0') {
      pcVar16 = pcStack_d8;
    }
    pcStack_2a0 = (code *)CONCAT44(pcStack_2a0._4_4_,*(undefined4 *)(pcVar16 + 8));
    pbStack_2a8 = *(byte **)pcVar16;
    pdb_140df45c0(&pbStack_448,&pbStack_2a8);
    *pfVar3 = fStack_a4;
    *puVar39 = 1;
    *(byte **)(puVar39 + 1) = pbStack_448;
    puVar39[3] = pcStack_440._0_4_;
    *pfVar2 = fStack_a4;
    *(undefined2 *)(lVar36 + 0x30) = 0x101;
    *(undefined8 *)(lVar36 + 0x34) = _DAT_14305d860;
  }
  pbVar25[0x48] = 0;
  lVar17 = -0x8000000000000000;
  if (SBORROW8(0,*(longlong *)pbVar25)) goto LAB_140bff114;
  goto LAB_140bff77a;
LAB_140bff751:
  pbVar25[0x48] = 0;
LAB_140bff758:
  lVar17 = *(longlong *)pbVar25;
  if (((byte)uStack_108 & !SBORROW8(0,lVar17)) == 0) goto LAB_140bff114;
LAB_140bff77a:
  puStack_288 = *(undefined **)(lStack_c8 + 0xf8);
  puStack_280 = puStack_288 + *(longlong *)(lStack_c8 + 0x100) * 4;
  uStack_1f0 = *(undefined1 *)(lStack_c8 + 0x108);
  uStack_260 = 0;
  puStack_258 = (undefined *)0x0;
  pcStack_2a0 = pcStack_2b8;
  pbStack_298 = pbStack_2b0;
  lStack_290 = lStack_c8;
  uStack_278 = 8;
  puStack_270 = (undefined *)0x0;
  uStack_268 = 8;
  uStack_240 = uStack_fc;
  fStack_23c = fStack_a4;
  uStack_238 = 0;
  uStack_220 = uStack_fc;
  fStack_21c = fStack_a4;
  uStack_218 = 0;
  uStack_200 = uStack_fc;
  fStack_1fc = fStack_a4;
  uStack_1f8 = 0;
  pbStack_2a8 = pbStack_a0;
  pdb_1415f2420(&pbStack_448,&pbStack_2a8);
  if (*(longlong *)pbVar25 != 0) {
    pub_1406abac0(*(byte **)(pbVar25 + 8),*(longlong *)pbVar25 * 0x28,4);
  }
  *(byte **)(pbVar25 + 0x10) = pbStack_438;
  *(byte **)pbVar25 = pbStack_448;
  *(code **)(pbVar25 + 8) = pcStack_440;
LAB_140bff111:
  lVar17 = *(longlong *)pbVar25;
LAB_140bff114:
  if (abStack_91[0] == 0) {
    if ((!SBORROW8(0,lVar17)) && (lVar17 != 0)) {
      pub_1406abac0(*(byte **)(pbVar25 + 8),lVar17 * 0x28,4);
    }
    pbVar25[0] = 0;
    pbVar25[1] = 0;
    pbVar25[2] = 0;
    pbVar25[3] = 0;
    pbVar25[4] = 0;
    pbVar25[5] = 0;
    pbVar25[6] = 0;
    pbVar25[7] = 0x80;
  }
  else if (SBORROW8(0,lVar17)) {
    lStack_290 = *plStack_f0;
    pbStack_2a8 = (byte *)plStack_f0[1];
    uStack_240 = *(uint *)(plStack_f0 + 2);
    fStack_23c = *(float *)((longlong)plStack_f0 + 0x14);
    pcStack_2a0 = (code *)(pbStack_2a8 + 0x198);
    puStack_288 = *(undefined **)(lStack_290 + 0xf8);
    puStack_280 = puStack_288 + *(longlong *)(lStack_290 + 0x100) * 4;
    uStack_1f0 = *(undefined1 *)(lStack_290 + 0x108);
    uStack_260 = 0;
    puStack_258 = (undefined *)0x0;
    pbStack_298 = pbStack_2a8 + 0xf8;
    uStack_278 = 8;
    puStack_270 = (undefined *)0x0;
    uStack_268 = 8;
    uStack_238 = 0;
    uStack_218 = 0;
    uStack_1f8 = 0;
    uStack_220 = uStack_240;
    fStack_21c = fStack_23c;
    uStack_200 = uStack_240;
    fStack_1fc = fStack_23c;
    pdb_1415f2420(&pbStack_448,&pbStack_2a8);
    lVar17 = *(longlong *)pbVar25;
    if ((!SBORROW8(0,lVar17)) && (lVar17 != 0)) {
      pub_1406abac0(*(byte **)(pbVar25 + 8),lVar17 * 0x28,4);
    }
    *(byte **)(pbVar25 + 0x10) = pbStack_438;
    *(byte **)pbVar25 = pbStack_448;
    *(code **)(pbVar25 + 8) = pcStack_440;
  }
  puVar6 = (ulonglong *)*param_10;
  lVar17 = param_10[1];
  uVar19 = *puVar6;
  uVar28 = 0;
  uVar31 = uVar19 - *(ulonglong *)(lVar17 + 0x18);
  if (uVar19 < *(ulonglong *)(lVar17 + 0x18)) {
    uVar31 = uVar28;
  }
  uVar21 = uVar19 - *(ulonglong *)(lVar17 + 0x38);
  if (uVar19 < *(ulonglong *)(lVar17 + 0x38)) {
    uVar21 = uVar28;
  }
  uVar19 = *(ulonglong *)(lVar17 + 0x30);
  uVar33 = uVar19 - uVar21;
  if (uVar19 < uVar21) {
    uVar33 = uVar28;
  }
  uVar7 = *(ulonglong *)(lVar17 + 0x10);
  uVar34 = uVar7 - uVar31;
  if (uVar7 < uVar31) {
    uVar34 = uVar28;
  }
  uVar28 = *(ulonglong *)(lVar17 + 0x40);
  *puVar6 = uVar28 - (uVar34 + uVar33);
  if (uVar7 >= uVar31 && uVar7 - uVar31 != 0 || uVar19 >= uVar21 && uVar19 - uVar21 != 0) {
    *puVar6 = uVar28;
    lVar17 = *(longlong *)pbVar25;
    if ((!SBORROW8(0,lVar17)) && (lVar17 != 0)) {
      pub_1406abac0(*(byte **)(pbVar25 + 8),lVar17 * 0x28,4);
    }
    pbVar25[0] = 0;
    pbVar25[1] = 0;
    pbVar25[2] = 0;
    pbVar25[3] = 0;
    pbVar25[4] = 0;
    pbVar25[5] = 0;
    pbVar25[6] = 0;
    pbVar25[7] = 0x80;
  }
  return;
}

