// VA 0x140847dd0, PDB extent 3011 bytes
// system_wall_constructor::utils::trim_rows::trim_rows
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/utils/trim_rows.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_wall_constructor::utils::trim_rows::trim_rows
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/utils/trim_rows.rs
   Extent: 3011 */

float * pdb_140847dd0(float *param_1,float *param_2,longlong param_3,float *param_4,
                     undefined8 param_5,undefined8 param_6,float param_7,float param_8,char param_9)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  code *pcVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  bool bVar12;
  uint uVar13;
  longlong lVar14;
  ulonglong uVar15;
  float *pfVar16;
  byte *pbVar17;
  longlong *plVar18;
  float *pfVar19;
  float *pfVar20;
  float *pfVar21;
  float *pfVar22;
  float *unaff_RDI;
  undefined *puVar23;
  longlong lVar24;
  undefined *puVar25;
  float *pfVar26;
  undefined *puVar27;
  bool bVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined8 uStack_128;
  float *pfStack_118;
  byte *pbStack_110;
  float *pfStack_108;
  float fStack_100;
  float fStack_fc;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  float *pfStack_e8;
  float *pfStack_e0;
  char cStack_d1;
  undefined8 uStack_d0;
  
  uStack_d0 = 0xfffffffffffffffe;
  pfVar16 = param_1;
  pfVar22 = param_2;
  pfStack_e0 = param_4;
  cStack_d1 = pdb_140e94b40();
  if (cStack_d1 == '\0') {
    bVar12 = false;
LAB_140847fbc:
    fVar4 = _DAT_142e36f50;
    uStack_f8 = 0;
    uStack_f0 = (float *)0x8;
    pfStack_e8 = (float *)0x0;
    if (param_7 <= _DAT_142e3b1d8) {
      param_7 = _DAT_142e3b1d8;
    }
    bVar28 = true;
    pfVar22 = param_2;
    pfVar19 = uStack_f0;
    pfVar26 = pfStack_e8;
    fVar5 = _DAT_142e36f28;
    pfVar2 = pfStack_118;
    pfStack_118 = pfStack_e0;
    while (_DAT_142e36f28 = fVar5, uStack_f0 = pfVar19, pfStack_e8 = pfVar26,
          pfStack_e0 = pfStack_118, pfVar22 != param_2 + param_3) {
      pfVar1 = pfVar22 + 1;
      pfVar21 = pfVar1;
      pfVar20 = pfVar22;
      if (bVar28) {
        if (pfVar1 == param_2 + param_3) break;
        pfVar21 = pfVar22 + 2;
        pfVar20 = pfVar1;
        pfVar16 = pfVar22;
      }
      fStack_100 = *pfVar16;
      fStack_fc = *pfVar20;
      pbStack_110 = (byte *)&uStack_f8;
      pfStack_108 = pfVar26;
      pdb_14148acd0(param_5,param_6,(fStack_100 + fStack_fc) * fVar4 * param_7,&pfStack_118);
      bVar28 = false;
      pfVar16 = pfVar20;
      unaff_RDI = pfVar20;
      pfVar22 = pfVar21;
      pfVar19 = uStack_f0;
      pfVar26 = pfStack_e8;
      fVar5 = _DAT_142e36f28;
      pfVar2 = pfStack_118;
      pfStack_118 = pfStack_e0;
    }
    fVar31 = _DAT_142e3c620 / param_8;
    fVar32 = _DAT_142e36f50 * fVar31;
    if (param_9 == '\0') {
      fVar33 = fVar32;
      if (pfVar26 == (float *)0x0) goto LAB_1408484b9;
LAB_1408480ee:
      lVar14 = 0;
      do {
        pfStack_118 = pfVar2;
        fVar30 = *(float *)((longlong)pfVar19 + lVar14 + 0x18);
        if ((fVar30 != 0.0) || (NAN(fVar30))) {
          fVar29 = (float)pub_142e32b00(fVar30 / fVar33);
          fVar30 = 0.0;
          if (0.0 <= fVar29 * fVar33) {
            fVar30 = fVar29 * fVar33;
          }
          fVar29 = fVar5;
          if (fVar30 <= fVar5) {
            fVar29 = fVar30;
          }
          *(float *)((longlong)pfVar19 + lVar14 + 0x18) = fVar29;
        }
        fVar30 = *(float *)((longlong)pfVar19 + lVar14 + 0x1c);
        if ((fVar30 != fVar5) || (NAN(fVar30) || NAN(fVar5))) {
          fVar29 = (float)pub_142e32b00(fVar30 * (fVar5 / fVar33));
          fVar30 = 0.0;
          if (0.0 <= fVar29 * fVar33) {
            fVar30 = fVar29 * fVar33;
          }
          fVar29 = fVar5;
          if (fVar30 <= fVar5) {
            fVar29 = fVar30;
          }
          *(float *)((longlong)pfVar19 + lVar14 + 0x1c) = fVar29;
        }
        lVar14 = lVar14 + 0x20;
        pfVar2 = pfStack_118;
      } while ((longlong)pfVar26 << 5 != lVar14);
      pfVar16 = pfVar26;
      if (param_9 == '\0') {
        if (param_8 <= _DAT_143005d30) goto LAB_140848293;
        pfVar22 = pfVar19 + 0xf;
        pfVar16 = (float *)0x0;
        do {
          if (pfVar22[-8] - pfVar22[-9] <= fVar31) {
            pfStack_e8 = pfVar16;
            if ((float *)((longlong)pfVar16 + 1) < pfVar26) {
              lVar14 = ~(ulonglong)pfVar16 + (longlong)pfVar26;
              do {
                if (fVar31 < *pfVar22 - pfVar22[-1]) {
                  fVar4 = pfVar22[-7];
                  fVar5 = pfVar22[-6];
                  fVar32 = pfVar22[-5];
                  fVar33 = pfVar22[-4];
                  uVar10 = *(undefined8 *)(pfVar22 + -1);
                  *(undefined8 *)(pfVar19 + (longlong)pfVar16 * 8 + 4) =
                       *(undefined8 *)(pfVar22 + -3);
                  *(undefined8 *)(pfVar19 + (longlong)pfVar16 * 8 + 4 + 2) = uVar10;
                  pfVar26 = pfVar19 + (longlong)pfVar16 * 8;
                  *pfVar26 = fVar4;
                  pfVar26[1] = fVar5;
                  pfVar26[2] = fVar32;
                  pfVar26[3] = fVar33;
                  pfVar16 = (float *)((longlong)pfVar16 + 1);
                }
                pfVar22 = pfVar22 + 8;
                lVar14 = lVar14 + -1;
                pfStack_e8 = pfVar16;
              } while (lVar14 != 0);
            }
            goto LAB_140848293;
          }
          pfVar16 = (float *)((longlong)pfVar16 + 1);
          pfVar22 = pfVar22 + 8;
        } while (pfVar26 != pfVar16);
      }
      else {
        lVar14 = 0;
        do {
          fVar33 = *(float *)((longlong)pfVar19 + lVar14 + 0x18);
          fVar30 = *(float *)((longlong)pfVar19 + lVar14 + 0x1c);
          if (fVar30 - fVar33 <= fVar31) {
            fVar29 = (fVar33 + fVar30) * fVar4 - fVar32;
            fVar33 = 0.0;
            if (0.0 <= fVar29) {
              fVar33 = fVar29;
            }
            fVar29 = fVar5;
            if (fVar33 <= fVar5) {
              fVar29 = fVar33;
            }
            *(float *)((longlong)pfVar19 + lVar14 + 0x18) = fVar29;
            fVar30 = (fVar29 + fVar30) * fVar4 + fVar32;
            fVar33 = 0.0;
            if (0.0 <= fVar30) {
              fVar33 = fVar30;
            }
            fVar30 = fVar5;
            if (fVar33 <= fVar5) {
              fVar30 = fVar33;
            }
            *(float *)((longlong)pfVar19 + lVar14 + 0x1c) = fVar30;
          }
          lVar14 = lVar14 + 0x20;
        } while ((longlong)pfVar26 << 5 != lVar14);
LAB_140848293:
        pfVar26 = pfVar16;
        unaff_RDI = pfVar19;
        if (pfVar16 == (float *)0x0) goto LAB_1408484b9;
      }
      unaff_RDI = (float *)((longlong)pfVar26 << 4);
      pdb_14007ee60();
      pbVar17 = pub_1406abab0((ulonglong)unaff_RDI,8);
      if (pbVar17 == (byte *)0x0) goto LAB_140848618;
      pfStack_108 = (float *)0x0;
      pfStack_118 = pfVar26;
      pbStack_110 = pbVar17;
      if (pfStack_e8 != (float *)0x0) {
        pfVar19 = uStack_f0 + (longlong)pfStack_e8 * 8;
        pfVar16 = (float *)0x10;
        pfVar26 = (float *)0x3;
        lVar14 = 0;
        pfVar22 = uStack_f0;
        do {
          pfVar1 = pfStack_108;
          pfVar2 = (float *)((longlong)pfStack_108 + 1);
          if (pfVar2 < pfStack_e8) {
            fVar4 = pfVar22[5];
            if ((fVar4 != uStack_f0[(longlong)pfVar2 * 8 + 4]) ||
               (NAN(fVar4) || NAN(uStack_f0[(longlong)pfVar2 * 8 + 4]))) {
LAB_1408483e8:
              unaff_RDI = (float *)0x0;
              pfVar21 = (float *)0x0;
              if ((longlong)pfVar2 * 0x20 + 0x20 != (longlong)pfStack_e8 << 5) goto LAB_140848420;
            }
            else {
              fVar5 = uStack_f0[(longlong)pfVar2 * 8 + 6];
              fVar31 = uStack_f0[(longlong)pfVar2 * 8 + 7];
              fVar32 = pfVar22[6];
              if ((fVar32 < fVar5) || (fVar31 < fVar32)) {
                fVar33 = pfVar22[7];
                if ((fVar33 < fVar31 || fVar31 < fVar32) &&
                   (fVar33 < fVar5 || fVar5 < fVar32 && fVar31 < fVar33)) goto LAB_1408483e8;
              }
              pfVar21 = (float *)((longlong)pfStack_108 + 2);
              unaff_RDI = pfVar2;
              if ((longlong)pfVar2 * 0x20 + 0x20 != (longlong)pfStack_e8 << 5) {
LAB_140848420:
                pfVar20 = pfVar26;
                lVar24 = lVar14;
                do {
                  pfVar3 = (float *)((longlong)uStack_f0 + lVar24 + 0x50);
                  if ((fVar4 == *pfVar3) && (!NAN(fVar4) && !NAN(*pfVar3))) {
                    fVar5 = *(float *)((longlong)uStack_f0 + lVar24 + 0x58);
                    fVar31 = *(float *)((longlong)uStack_f0 + lVar24 + 0x5c);
                    fVar32 = pfVar22[6];
                    if ((fVar32 < fVar5) || (fVar31 < fVar32)) {
                      fVar33 = pfVar22[7];
                      if ((fVar33 < fVar31 || fVar31 < fVar32) &&
                         (fVar33 < fVar5 || fVar5 < fVar32 && fVar31 < fVar33)) goto LAB_14084843e;
                    }
                    bVar28 = unaff_RDI == pfVar21;
                    pfVar21 = pfVar20;
                    if (bVar28) {
                      unaff_RDI = (float *)((longlong)pfVar20 + -1);
                    }
                  }
LAB_14084843e:
                  lVar24 = lVar24 + 0x20;
                  pfVar20 = (float *)((longlong)pfVar20 + 1);
                } while ((longlong)pfStack_e8 * 0x20 + -0x40 != lVar24);
              }
            }
          }
          else {
            unaff_RDI = (float *)0x0;
            pfVar21 = (float *)0x0;
          }
          pfStack_e0 = pfVar16;
          if (pfStack_108 == pfStack_118) {
            pdb_142d8afd0(&pfStack_118);
          }
          pfVar22 = pfVar22 + 8;
          *(float **)(pbStack_110 + (longlong)pfVar1 * 0x10) = unaff_RDI;
          *(float **)(pbStack_110 + (longlong)pfVar1 * 0x10 + 8) = pfVar21;
          pfVar16 = pfStack_e0 + 4;
          lVar14 = lVar14 + 0x20;
          pfVar26 = (float *)((longlong)pfVar26 + 1);
          pfStack_108 = pfVar2;
        } while (pfVar22 != pfVar19);
        if (pfStack_e8 != (float *)0x0) {
          lVar14 = 0;
          pbVar17 = pbStack_110;
          pfVar16 = pfStack_e0;
          do {
            if (pfVar16 == (float *)0x0) break;
            uVar10 = *(undefined8 *)pbVar17;
            uVar11 = *(undefined8 *)(pbVar17 + 8);
            pbVar17 = pbVar17 + 0x10;
            *(undefined8 *)((longlong)uStack_f0 + lVar14) = uVar10;
            ((undefined8 *)((longlong)uStack_f0 + lVar14))[1] = uVar11;
            pfVar16 = pfVar16 + -4;
            lVar14 = lVar14 + 0x20;
          } while ((longlong)pfStack_e8 << 5 != lVar14);
        }
      }
    }
    else {
      fVar33 = _DAT_142e3787c * fVar31;
      if (pfVar26 != (float *)0x0) goto LAB_1408480ee;
LAB_1408484b9:
      pfStack_118 = (float *)0x0;
      pbStack_110 = (byte *)0x8;
    }
    pfStack_108 = (float *)0x0;
    *(float **)(param_1 + 4) = pfStack_e8;
    *param_1 = (float)uStack_f8;
    param_1[1] = uStack_f8._4_4_;
    param_1[2] = (float)uStack_f0;
    param_1[3] = uStack_f0._4_4_;
    if (pfStack_118 != (float *)0x0) {
      pub_1406abac0(pbStack_110,(longlong)pfStack_118 << 4,8);
    }
    if (!bVar12) {
      return param_1;
    }
    plVar18 = (longlong *)pdb_140e97000();
    pfVar22 = param_1;
    if ((char)plVar18[0xd] != '\x01') goto LAB_1408485e3;
    do {
      if (*plVar18 == 0) {
        *plVar18 = -1;
        pfStack_e0 = (float *)plVar18;
        pdb_140e95370(plVar18 + 1,uStack_128);
        *(longlong *)pfStack_e0 = *(longlong *)pfStack_e0 + 1;
        return pfVar22;
      }
LAB_1408485d7:
      plVar18 = (longlong *)pdb_142dc8090(&UNK_1433079b0);
LAB_1408485e3:
      plVar18 = (longlong *)pdb_142dd9610(plVar18,0);
    } while (plVar18 != (longlong *)0x0);
  }
  else {
    unaff_RDI = (float *)0x34;
    lVar14 = pdb_1408489a0(0x34);
    puVar25 = &UNK_14300ba30;
    if (lVar14 == 1) {
      if ((float *)0x34 < pfVar22) {
LAB_14084864b:
        pdb_142dc8070(&UNK_14300ba30,0x34,0);
LAB_14084866b:
        pdb_142dc8070(&UNK_14300ba30,0x34);
        pcVar9 = (code *)swi(3);
        pfVar16 = (float *)(*pcVar9)();
        return pfVar16;
      }
      uVar15 = pdb_1408489a0(pfVar22);
      if ((uVar15 & 1) != 0) {
        if (0x34 < (longlong)pfVar22 + 2U) goto LAB_14084866b;
        unaff_RDI = (float *)(0x32 - (longlong)pfVar22);
        puVar25 = &UNK_14300ba32 + (longlong)pfVar22;
      }
    }
    puVar23 = &UNK_14300b9ce;
    puVar27 = &UNK_14300b998;
    do {
      bVar6 = puVar23[-1];
      uVar13 = (uint)(char)bVar6;
      if ((char)bVar6 < '\0') {
        bVar7 = puVar23[-2];
        if ((char)bVar7 < -0x40) {
          bVar8 = puVar23[-3];
          if ((char)bVar8 < -0x40) {
            pbVar17 = puVar23 + -4;
            puVar23 = puVar23 + -4;
            uVar13 = bVar8 & 0x3f | (*pbVar17 & 7) << 6;
          }
          else {
            puVar23 = puVar23 + -3;
            uVar13 = bVar8 & 0xf;
          }
          uVar13 = bVar7 & 0x3f | uVar13 << 6;
        }
        else {
          puVar23 = puVar23 + -2;
          uVar13 = bVar7 & 0x1f;
        }
        uVar13 = (uint)(bVar6 & 0x3f) | uVar13 << 6;
        if (uVar13 != 0x5c) goto LAB_140847f24;
LAB_140847f3c:
        puVar27 = puVar23 + -0x14300b997;
        if ((undefined *)0x36 < puVar27) {
          pdb_142dc8070(&UNK_14300b998,0x36,puVar27,0x36,&UNK_14300bac8);
          goto LAB_14084864b;
        }
        pfVar22 = (float *)(0x36 - (longlong)puVar27);
        puVar27 = puVar23 + 1;
        goto LAB_140847f5e;
      }
      puVar23 = puVar23 + -1;
      if (uVar13 == 0x5c) goto LAB_140847f3c;
LAB_140847f24:
      if (uVar13 == 0x2f) goto LAB_140847f3c;
    } while (puVar23 != &UNK_14300b998);
    pfVar22 = (float *)0x36;
LAB_140847f5e:
    pfVar16 = (float *)pdb_140e97000();
    if ((*(char *)(pfVar16 + 0x1a) == '\x01') ||
       (pfVar16 = (float *)pdb_142dd9610(pfVar16,0), pfVar16 != (float *)0x0)) {
      if (*(longlong *)pfVar16 != 0) goto LAB_1408485d7;
      pfVar16[0] = -NAN;
      pfVar16[1] = -NAN;
      uStack_128 = pdb_140e94f10(pfVar16 + 2,puVar25,unaff_RDI,puVar27,pfVar22,1,0);
      *(longlong *)pfVar16 = *(longlong *)pfVar16 + 1;
      bVar12 = true;
      goto LAB_140847fbc;
    }
  }
  pdb_142dc7890(&UNK_143307940);
LAB_140848618:
  pdb_142dc7e2a(8,unaff_RDI);
                    /* WARNING: Does not return */
  pcVar9 = (code *)invalidInstructionException();
  (*pcVar9)();
}

