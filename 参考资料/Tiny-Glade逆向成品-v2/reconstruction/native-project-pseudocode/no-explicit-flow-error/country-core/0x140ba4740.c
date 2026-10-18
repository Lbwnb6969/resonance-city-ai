// VA 0x140ba4740, PDB extent 3772 bytes
// country_core::systems::audio::trigger_audio::trigger_audio_system
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/audio/trigger_audio.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::audio::trigger_audio::trigger_audio_system
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/audio/trigger_audio.rs
   Extent: 3772 */

void pdb_140ba4740(float *param_1,undefined8 *param_2,int *param_3,uint *param_4,undefined8 param_5,
                  float *param_6)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  longlong lVar6;
  code *pcVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 *puVar17;
  char cVar18;
  longlong lVar19;
  ulonglong uVar20;
  undefined *puVar21;
  longlong *plVar22;
  uint uVar23;
  uint *puVar24;
  ulonglong uVar25;
  int *piVar26;
  undefined8 *unaff_R12;
  float *pfVar27;
  longlong *plVar28;
  longlong lVar29;
  undefined8 *puVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  uint uVar34;
  float fVar35;
  float fVar36;
  uint uVar37;
  float fVar38;
  float fVar39;
  undefined1 auStack_1d8 [8];
  float fStack_1d0;
  float fStack_1c8;
  float fStack_1c4;
  float fStack_1c0;
  undefined8 uStack_1a8;
  int *piStack_1a0;
  int iStack_198;
  undefined4 uStack_194;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 uStack_168;
  int *piStack_160;
  float fStack_158;
  float fStack_154;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 uStack_128;
  float *pfStack_118;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  longlong *plStack_100;
  uint *puStack_f8;
  uint uStack_ec;
  longlong *plStack_e8;
  undefined8 uStack_e0;
  
  uStack_e0 = 0xfffffffffffffffe;
  cVar18 = pdb_140e94b40();
  if (cVar18 == '\0') {
    uStack_1a8 = 0;
    param_6 = *(float **)param_6;
    if ((param_6[0x16] == 0.0) && (!NAN(param_6[0x16]))) {
      return;
    }
    plStack_e8 = (longlong *)((ulonglong)plStack_e8 & 0xffffffffffffff00);
    pfVar27 = param_1;
    piVar26 = piStack_160;
    pfStack_118 = param_1;
    goto LAB_140ba4a0c;
  }
  unaff_R12 = (undefined8 *)&UNK_1430604bb;
  piVar26 = (int *)0x41;
  uVar25 = 0x41;
  puStack_f8 = param_4;
  lVar19 = pdb_140ba63b0(&UNK_1430604bb);
  if (lVar19 == 1) {
    if (0x41 < uVar25) {
LAB_140ba504d:
      pdb_142dc8070(&UNK_1430604bb,0x41,0);
LAB_140ba506d:
      pdb_142dc8070(&UNK_1430604bb,0x41);
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    unaff_R12 = (undefined8 *)&UNK_1430604bb;
    uVar20 = pdb_140ba63b0(&UNK_1430604bb);
    if ((uVar20 & 1) != 0) {
      if (0x41 < uVar25 + 2) goto LAB_140ba506d;
      piVar26 = (int *)(0x3f - uVar25);
      unaff_R12 = (undefined8 *)(&UNK_1430604bd + uVar25);
    }
  }
  puVar21 = &UNK_1430601e5;
  pfVar27 = (float *)&UNK_1430601af;
  plStack_e8 = (longlong *)CONCAT71(plStack_e8._1_7_,cVar18);
  do {
    pbVar1 = puVar21 + -1;
    uVar23 = (uint)(char)*pbVar1;
    if ((int)uVar23 < 0) {
      bVar3 = puVar21[-2];
      if ((char)bVar3 < -0x40) {
        bVar4 = puVar21[-3];
        if ((char)bVar4 < -0x40) {
          pbVar2 = puVar21 + -4;
          puVar21 = puVar21 + -4;
          uVar23 = bVar4 & 0x3f | (*pbVar2 & 7) << 6;
        }
        else {
          puVar21 = puVar21 + -3;
          uVar23 = bVar4 & 0xf;
        }
        uVar23 = bVar3 & 0x3f | uVar23 << 6;
      }
      else {
        puVar21 = puVar21 + -2;
        uVar23 = bVar3 & 0x1f;
      }
      uVar23 = (uint)(*pbVar1 & 0x3f) | uVar23 << 6;
      if (uVar23 != 0x5c) goto LAB_140ba48d9;
LAB_140ba4924:
      if ((undefined *)0x36 < puVar21 + -0x1430601ae) {
        pfStack_118 = param_1;
        pdb_142dc8070(&UNK_1430601af,0x36,puVar21 + -0x1430601ae,0x36,&UNK_1430605c0);
        goto LAB_140ba504d;
      }
      plVar28 = (longlong *)(0x35 - (longlong)(puVar21 + -0x1430601af));
      pfVar27 = (float *)(puVar21 + 1);
      goto LAB_140ba4948;
    }
    puVar21 = puVar21 + -1;
    if (uVar23 == 0x5c) goto LAB_140ba4924;
LAB_140ba48d9:
    if (uVar23 == 0x2f) goto LAB_140ba4924;
  } while (puVar21 != &UNK_1430601af);
  plVar28 = (longlong *)0x36;
LAB_140ba4948:
  pfStack_118 = param_1;
  plVar22 = (longlong *)pdb_140e97000();
  if ((char)plVar22[0xd] != '\x01') goto LAB_140ba4ef9;
  do {
    if (*plVar22 == 0) {
      *plVar22 = -1;
      plStack_100 = plVar22;
      piVar26 = (int *)pdb_140e94f10(plVar22 + 1,unaff_R12,piVar26,pfVar27,plVar28,1,0);
      *plStack_100 = *plStack_100 + 1;
      uStack_1a8 = 1;
      param_6 = *(float **)param_6;
      param_4 = puStack_f8;
      piStack_1a0 = piVar26;
      if ((param_6[0x16] != 0.0) || (NAN(param_6[0x16]))) {
LAB_140ba4a0c:
        piStack_160 = piVar26;
        param_6 = param_6 + 0x16;
        plStack_100 = *(longlong **)param_3;
        pdb_140e08f50(&fStack_110);
        fVar36 = fStack_108;
        fVar16 = fStack_10c;
        fVar38 = fStack_110;
        param_3 = (int *)*param_2;
        puVar24 = (uint *)param_2[2];
        uVar23 = param_3[0x30];
        uVar34 = (int)(uVar23 << 0x1f) >> 0x1f;
        uVar37 = (int)(uVar23 << 0x1f) >> 0x1f;
        fVar35 = (float)(~uVar34 & (uint)fStack_110 | param_3[0x31] & uVar34);
        fVar33 = (float)(~uVar37 & (uint)fStack_10c | param_3[0x32] & uVar37);
        fVar39 = fStack_108;
        if ((uVar23 & 1) != 0) {
          fVar39 = (float)param_3[0x33];
        }
        uVar23 = *(uint *)((longlong)param_2 + 0x1c);
        *puVar24 = uVar23;
        param_3[0x30] = 1;
        param_3[0x33] = (int)fStack_108;
        *(ulonglong *)(param_3 + 0x31) = CONCAT44(fStack_10c,fStack_110);
        fVar15 = _UNK_14305f1a4;
        fVar14 = _DAT_14305f1a0;
        fVar13 = _UNK_14305f19c;
        fVar12 = _UNK_14305f198;
        fVar11 = _UNK_14305f194;
        fVar10 = _DAT_14305f190;
        fVar9 = _DAT_142e42360;
        fVar8 = _DAT_142e36f50;
        fVar31 = fStack_110 - fVar35;
        fVar32 = fStack_10c - fVar33;
        fVar32 = SQRT((fStack_108 - fVar39) * (fStack_108 - fVar39) +
                      fVar32 * fVar32 + fVar31 * fVar31);
        fVar31 = fVar9;
        if (_DAT_142e36f28 < fVar32 / *param_6) {
          lVar19 = *(longlong *)(*(longlong *)param_4 + 8);
          lVar6 = *(longlong *)(*(longlong *)param_4 + 0x10);
          unaff_R12 = (undefined8 *)(lVar6 * 0x1c + lVar19);
          lVar29 = 0x1c;
          if (lVar6 == 0) {
            lVar29 = 0;
          }
          pfVar27 = &fStack_1c8;
          puVar17 = (undefined8 *)(lVar29 + lVar19);
          puStack_f8 = puVar24;
          uStack_ec = uVar23;
          do {
            do {
              puVar30 = puVar17;
              puVar24 = puStack_f8;
              fVar31 = fVar9;
              uVar23 = uStack_ec;
              if (puVar30 == unaff_R12) goto LAB_140ba4bdc;
              puVar17 = (undefined8 *)((longlong)puVar30 + 0x1c);
            } while ((*(uint *)(puVar30 + 3) & 1) == 0);
            if (*(uint *)(puVar30 + 3) == 0) break;
            fStack_158 = (float)*puVar30;
            fStack_154 = (float)((ulonglong)*puVar30 >> 0x20);
            uStack_150._0_4_ = (float)puVar30[1];
            uStack_150._4_4_ = (float)((ulonglong)puVar30[1] >> 0x20);
            _fStack_158 = CONCAT44(fStack_154 + fVar11,fStack_158 + fVar10);
            uStack_150 = CONCAT44(uStack_150._4_4_ + fVar13,(float)uStack_150 + fVar12);
            uStack_148 = CONCAT44((float)((ulonglong)puVar30[2] >> 0x20) + fVar15,
                                  (float)puVar30[2] + fVar14);
            fStack_1d0 = fStack_108;
            fStack_1c8 = fVar35;
            fStack_1c4 = fVar33;
            fStack_1c0 = fVar39;
            pdb_140deed20(&iStack_198,&fStack_158,pfVar27,auStack_1d8);
            puVar24 = puStack_f8;
            fVar31 = fVar8;
            uVar23 = uStack_ec;
          } while (iStack_198 == 0);
        }
LAB_140ba4bdc:
        param_2 = (undefined8 *)(ulonglong)uVar23;
        *puVar24 = uVar23;
        fVar35 = _DAT_142e36f28;
        fVar39 = 0.0;
        if (0.0 <= fVar31 + (float)param_3[0x34]) {
          fVar39 = fVar31 + (float)param_3[0x34];
        }
        fVar33 = _DAT_142e36f28;
        if (fVar39 <= _DAT_142e36f28) {
          fVar33 = fVar39;
        }
        param_3[0x34] = (int)fVar33;
        if (fVar33 <= 0.0) {
          if ((*param_3 == 1) &&
             (pdb_141808d70(&iStack_198,param_3 + 2,0),
             CONCAT44(uStack_194,iStack_198) != -0x7ffffffffffffffc)) goto LAB_140ba4f94;
        }
        else {
          pdb_140a8a6f0(param_3);
        }
        if (*(char *)((longlong)plStack_100 +
                     *(longlong *)(&UNK_143060858 + (ulonglong)*(byte *)(plStack_100 + 0x9a) * 8) +
                     0x128) != '\0') {
          fVar35 = _DAT_142e3b1d8;
        }
        fVar38 = SQRT(fVar36 * fVar36 + fVar16 * fVar16 + fVar38 * fVar38);
        plVar28 = *(longlong **)pfStack_118;
        if (*plVar28 != 0) {
          pdb_140a8aa00(*plVar28 + 0x10,&UNK_1430601e5,0xd,fVar38 * fVar35);
        }
        fVar35 = fVar35 * (fVar32 / *param_6) * _DAT_143018200;
        if ((char)param_3[0x36] != '\0') {
          fVar35 = fVar35 * _DAT_142e37878;
        }
        fVar36 = (float)param_3[0x35];
        fVar36 = (fVar35 - fVar36) * *(float *)(&UNK_14305f1b0 + (ulonglong)(fVar35 < fVar36) * 4) +
                 fVar36;
        if (_DAT_142e37830 <= fVar36) {
          fVar36 = _DAT_142e37830;
        }
        *puVar24 = uVar23;
        param_3[0x35] = (int)fVar36;
        if (*plVar28 != 0) {
          pdb_140a8aa00(*plVar28 + 0x10,&UNK_1430601f2,0xc,fVar36);
        }
        pdb_140a8a6f0(param_3 + 0xc);
        piVar26 = param_3 + 0x18;
        pdb_140a8a6f0(piVar26);
        if ((char)param_3[0x36] == '\0') {
          iVar5 = *piVar26;
          fVar36 = _DAT_142e36f28;
        }
        else {
          fVar36 = (float)param_3[0x35] * _DAT_142e36f50 + _DAT_142e36f28;
          iVar5 = *piVar26;
        }
        if ((iVar5 == 1) &&
           (pdb_141807fa0(&iStack_198,param_3 + 0x1a,fVar36),
           CONCAT44(uStack_194,iStack_198) != -0x7ffffffffffffffc)) {
          uStack_128 = uStack_168;
          uStack_138 = uStack_178;
          uStack_134 = uStack_174;
          uStack_130 = uStack_170;
          uStack_12c = uStack_16c;
          uStack_148 = uStack_188;
          uStack_140 = uStack_180;
          uStack_150 = uStack_190;
                    /* WARNING: Subroutine does not return */
          pdb_142dc8170(&UNK_143044570,0x2b,&fStack_158,&UNK_143044530,&UNK_143044350);
        }
        if ((_DAT_1430241b4 <= fVar16) || (fVar38 <= _DAT_142f9515c)) {
          if (param_3[0x24] == 1) {
            param_3 = param_3 + 0x26;
            pdb_141808d70(&iStack_198,param_3,0);
            if (CONCAT44(uStack_194,iStack_198) != -0x7ffffffffffffffc) {
              uStack_128 = uStack_168;
              uStack_138 = uStack_178;
              uStack_134 = uStack_174;
              uStack_130 = uStack_170;
              uStack_12c = uStack_16c;
              uStack_148 = uStack_188;
              uStack_140 = uStack_180;
              uStack_150 = uStack_190;
                    /* WARNING: Subroutine does not return */
              pdb_142dc8170(&UNK_143044570,0x2b,&fStack_158,&UNK_143044530,&UNK_143043d90);
            }
          }
          if (*plVar28 != 0) {
            pdb_140a8aa00(*plVar28 + 0x10,&UNK_1430601fe,8,0);
          }
        }
        else {
          pdb_140a8a6f0();
          if (*plVar28 != 0) {
            pdb_140a8aa00(*plVar28 + 0x10,&UNK_1430601fe,8,_DAT_142e36f28);
          }
        }
        if ((char)plStack_e8 == '\0') {
          return;
        }
        plVar22 = (longlong *)pdb_140e97000();
        if (((char)plVar22[0xd] != '\x01') &&
           (plVar22 = (longlong *)pdb_142d8ec20(plVar22,0), plVar22 == (longlong *)0x0)) break;
        if (*plVar22 == 0) {
          *plVar22 = -1;
          plStack_e8 = plVar22;
          pdb_140e95370(plVar22 + 1,piStack_160);
          goto LAB_140ba4e89;
        }
      }
      else {
        plVar22 = (longlong *)pdb_140e97000();
        if (((char)plVar22[0xd] != '\x01') &&
           (plVar22 = (longlong *)pdb_142d8ec20(plVar22,0), plVar22 == (longlong *)0x0)) break;
        if (*plVar22 == 0) {
          *plVar22 = -1;
          plStack_e8 = plVar22;
          pdb_140e95370(plVar22 + 1,piVar26);
LAB_140ba4e89:
          *plStack_e8 = *plStack_e8 + 1;
          return;
        }
      }
    }
    plVar22 = (longlong *)pdb_142dc8090(&UNK_143326a50);
LAB_140ba4ef9:
    plVar22 = (longlong *)pdb_142d8ec20(plVar22,0);
  } while (plVar22 != (longlong *)0x0);
  pdb_142dc7890(&UNK_143326860);
LAB_140ba4f94:
  uStack_128 = uStack_168;
  uStack_138 = uStack_178;
  uStack_134 = uStack_174;
  uStack_130 = uStack_170;
  uStack_12c = uStack_16c;
  uStack_148 = uStack_188;
  uStack_140 = uStack_180;
  uStack_150 = uStack_190;
                    /* WARNING: Subroutine does not return */
  pdb_142dc8170(&UNK_143044570,0x2b,&fStack_158,&UNK_143044530,&UNK_143043d90);
}

