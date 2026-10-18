// VA 0x140846c00, PDB extent 2401 bytes
// system_wall_constructor::utils::split_into_random_rows::split_into_random_rows
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/utils/split_into_random_rows.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_wall_constructor::utils::split_into_random_rows::split_into_random_rows
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/utils/split_into_random_rows.rs
   Extent: 2401 */

float * pdb_140846c00(float *param_1,float *param_2,float *param_3,float param_4,undefined8 param_5)

{
  byte *pbVar1;
  float *pfVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  code *pcVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  char cVar10;
  bool bVar11;
  uint uVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong *plVar15;
  undefined8 uVar16;
  float *pfVar17;
  float *pfVar18;
  float *pfVar19;
  float *pfVar20;
  undefined *puVar21;
  undefined *unaff_R12;
  float *unaff_R15;
  float fVar22;
  float fVar23;
  undefined4 in_XMM3_Dc;
  float fVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar27;
  float fVar28;
  longlong lStack_140;
  float *pfStack_138;
  longlong lStack_130;
  undefined8 uStack_128;
  float *pfStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  longlong *plStack_100;
  longlong *plStack_f8;
  undefined8 uStack_f0;
  
  uStack_f0 = 0xfffffffffffffffe;
  pfVar17 = param_2;
  cVar10 = pdb_140e94b40();
  plStack_f8 = (longlong *)CONCAT71(plStack_f8._1_7_,cVar10);
  pfStack_120 = param_1;
  if (cVar10 == '\0') goto LAB_140846e00;
  pfVar18 = (float *)0x4e;
  lVar13 = pdb_140847570(0x4e);
  unaff_R15 = (float *)&UNK_14300b760;
  if (lVar13 == 1) {
    if (pfVar17 < (float *)0x4f) {
      uVar14 = pdb_140847570(pfVar17);
      if ((uVar14 & 1) != 0) {
        if (0x4e < (longlong)pfVar17 + 2U) goto LAB_1408471ab;
        pfVar18 = (float *)(0x4c - (longlong)pfVar17);
        unaff_R15 = (float *)((longlong)pfVar17 + 0x14300b762);
      }
      goto LAB_140846cd7;
    }
  }
  else {
LAB_140846cd7:
    puVar21 = &UNK_14300b6e7;
    unaff_R12 = &UNK_14300b6a4;
    do {
      bVar3 = puVar21[-1];
      uVar12 = (uint)(char)bVar3;
      if ((char)bVar3 < '\0') {
        bVar4 = puVar21[-2];
        if ((char)bVar4 < -0x40) {
          bVar5 = puVar21[-3];
          if ((char)bVar5 < -0x40) {
            pbVar1 = puVar21 + -4;
            puVar21 = puVar21 + -4;
            uVar12 = bVar5 & 0x3f | (*pbVar1 & 7) << 6;
          }
          else {
            puVar21 = puVar21 + -3;
            uVar12 = bVar5 & 0xf;
          }
          uVar12 = bVar4 & 0x3f | uVar12 << 6;
        }
        else {
          puVar21 = puVar21 + -2;
          uVar12 = bVar4 & 0x1f;
        }
        uVar12 = (uint)(bVar3 & 0x3f) | uVar12 << 6;
        if (uVar12 != 0x5c) goto LAB_140846d64;
LAB_140846d7c:
        if ((undefined *)0x43 < puVar21 + -0x14300b6a3) goto LAB_140847168;
        param_1 = (float *)(0x43 - (longlong)(puVar21 + -0x14300b6a3));
        unaff_R12 = puVar21 + 1;
        goto LAB_140846d9e;
      }
      puVar21 = puVar21 + -1;
      if (uVar12 == 0x5c) goto LAB_140846d7c;
LAB_140846d64:
      if (uVar12 == 0x2f) goto LAB_140846d7c;
    } while (puVar21 != &UNK_14300b6a4);
    param_1 = (float *)0x43;
LAB_140846d9e:
    plVar15 = (longlong *)pdb_140e97000();
    if ((char)plVar15[0xd] != '\x01') goto LAB_140847134;
    do {
      if (*plVar15 == 0) {
        *plVar15 = -1;
        plStack_100 = plVar15;
        uVar16 = pdb_140e94f10(plVar15 + 1,unaff_R15,pfVar18,unaff_R12,param_1,1,0);
        *plStack_100 = *plStack_100 + 1;
        plStack_100 = (longlong *)uVar16;
LAB_140846e00:
        fVar9 = _DAT_14300b5d0;
        fVar8 = _DAT_142e3c654;
        uVar12 = _DAT_142e377e0;
        fVar7 = _DAT_142e36f28;
        uStack_128 = param_5;
        uStack_118 = (undefined *)0x0;
        uStack_110 = 4;
        puStack_108 = (undefined *)0x0;
        pfVar18 = param_2 + (longlong)param_3;
        fVar24 = _DAT_143007984 / param_4;
        bVar11 = true;
        pfVar17 = param_2;
LAB_140846e72:
        param_2 = pfStack_120;
        if (pfVar17 != pfVar18) {
          pfVar2 = pfVar17 + 1;
          pfVar19 = pfVar2;
          pfVar20 = pfVar17;
          if (bVar11) {
            if (pfVar2 == pfVar18) goto LAB_140847084;
            param_1 = pfVar17;
            pfVar19 = pfVar17 + 2;
            pfVar20 = pfVar2;
          }
          fVar23 = *pfVar20;
          fVar27 = *param_1;
          fVar28 = fVar23 - fVar27;
          fVar22 = (float)pub_142e32a40(fVar28 / _DAT_142e3c620);
          uVar14 = (longlong)(fVar22 - _DAT_142e36f2c) & (longlong)fVar22 >> 0x3f | (longlong)fVar22
          ;
          if (fVar22 < 0.0) {
            uVar14 = 0;
          }
          if (_DAT_142e36f30 < fVar22) {
            uVar14 = 0xffffffffffffffff;
          }
          if (uVar14 < 3) {
            uVar14 = 2;
          }
          uVar14 = uVar14 + 1;
          pdb_140de8290(&lStack_140,uVar14,fVar9 / fVar28,&uStack_128,&UNK_14300b6e8);
          if ((ulonglong)((longlong)uStack_118 - (longlong)puStack_108) < uVar14) {
            pdb_142d7f1b0(&uStack_118,puStack_108,uVar14,4,4);
          }
          unaff_R15 = pfStack_138;
          auVar25._4_4_ = fVar27;
          auVar25._0_4_ = fVar23;
          auVar25._8_8_ = 0;
          auVar26._4_4_ = param_4;
          auVar26._0_4_ = param_4;
          auVar26._8_4_ = in_XMM3_Dc;
          auVar26._12_4_ = in_XMM3_Dc;
          auVar26 = divps(auVar25,auVar26);
          param_3 = pfStack_138 + lStack_130;
          pfVar17 = pfStack_138;
          fVar23 = fVar8;
          do {
            puVar21 = puStack_108;
            if (fVar23 <= 0.0) {
              if (pfVar17 == param_3) goto LAB_140847040;
              fVar23 = *pfVar17;
              pfVar17 = pfVar17 + 1;
              fVar27 = (fVar7 - fVar23) * auVar26._4_4_ + fVar23 * auVar26._0_4_;
            }
            else {
              do {
                if (pfVar17 == param_3) goto LAB_140847040;
                fVar27 = *pfVar17;
                pfVar17 = pfVar17 + 1;
                fVar27 = (fVar7 - fVar27) * auVar26._4_4_ + fVar27 * auVar26._0_4_;
              } while ((float)((uint)(fVar23 - fVar27) & uVar12) < fVar24);
            }
            fVar23 = fVar27;
            if (puStack_108 == uStack_118) {
              pdb_142d89720(&uStack_118);
            }
            *(float *)(uStack_110 + (longlong)puVar21 * 4) = fVar23;
            unaff_R12 = puVar21 + 1;
            puStack_108 = unaff_R12;
          } while( true );
        }
LAB_140847084:
        *(undefined **)(pfStack_120 + 4) = puStack_108;
        *pfStack_120 = (float)uStack_118;
        pfStack_120[1] = uStack_118._4_4_;
        pfStack_120[2] = (float)uStack_110;
        pfStack_120[3] = uStack_110._4_4_;
        if ((char)plStack_f8 == '\0') {
          return pfStack_120;
        }
        plVar15 = (longlong *)pdb_140e97000();
        if (((char)plVar15[0xd] != '\x01') &&
           (plVar15 = (longlong *)pdb_142dd9610(plVar15,0), plVar15 == (longlong *)0x0)) break;
        if (*plVar15 == 0) {
          *plVar15 = -1;
          plStack_f8 = plVar15;
          pdb_140e95370(plVar15 + 1,plStack_100);
          *plStack_f8 = *plStack_f8 + 1;
          return param_2;
        }
      }
      plVar15 = (longlong *)pdb_142dc8090(&UNK_1433079b0);
LAB_140847134:
      plVar15 = (longlong *)pdb_142dd9610(plVar15,0);
    } while (plVar15 != (longlong *)0x0);
    pdb_142dc7890(&UNK_143307940);
LAB_140847168:
    pdb_142dc8070(&UNK_14300b6a4,0x43);
  }
  pdb_142dc8070(&UNK_14300b760,0x4e,0);
LAB_1408471ab:
  pdb_142dc8070(&UNK_14300b760,0x4e);
  pcVar6 = (code *)swi(3);
  pfVar17 = (float *)(*pcVar6)();
  return pfVar17;
LAB_140847040:
  if (lStack_140 != 0) {
    pub_1406abac0((byte *)unaff_R15,lStack_140 << 2,4);
  }
  bVar11 = false;
  pfVar17 = pfVar19;
  param_1 = pfVar20;
  goto LAB_140846e72;
}

