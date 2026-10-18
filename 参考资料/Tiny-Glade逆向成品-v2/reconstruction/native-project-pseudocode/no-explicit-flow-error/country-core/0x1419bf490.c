// VA 0x1419bf490, PDB extent 2430 bytes
// country_core::systems::audio::water_ambience_audio::water_ambience_audio_system
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/audio/water_ambience_audio.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::audio::water_ambience_audio::water_ambience_audio_system
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/audio/water_ambience_audio.rs
   Extent: 2430 */

void pdb_1419bf490(float *param_1,longlong *param_2,undefined8 *param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  undefined8 uVar3;
  byte bVar4;
  byte bVar5;
  code *pcVar6;
  undefined1 auVar7 [12];
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  longlong lVar15;
  ulonglong uVar16;
  undefined *puVar17;
  longlong *plVar18;
  uint uVar19;
  ulonglong uVar20;
  longlong lVar21;
  undefined *puVar22;
  longlong *plVar23;
  undefined *unaff_R15;
  float fVar24;
  undefined1 auVar25 [16];
  float fVar29;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_120;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  undefined4 uStack_10c;
  float fStack_108;
  float fStack_104;
  longlong *plStack_100;
  char cStack_f1;
  undefined8 uStack_f0;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined2 uVar28;
  
  uStack_f0 = 0xfffffffffffffffe;
  if (DAT_143cb2d0c != '\0') {
    return;
  }
  cStack_f1 = pdb_140e94b40();
  if (cStack_f1 == '\0') {
    uStack_140 = 0;
    goto LAB_1419bf6bc;
  }
  unaff_R15 = &UNK_143360ffe;
  lVar21 = 0x4f;
  uVar20 = 0x4f;
  lVar15 = pdb_1419c1f70(&UNK_143360ffe);
  if (lVar15 == 1) {
    if (0x4f < uVar20) {
LAB_1419bfa61:
      pdb_142dc8070(&UNK_143360ffe,0x4f,0);
LAB_1419bfa81:
      pdb_142dc8070(&UNK_143360ffe,0x4f);
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    unaff_R15 = &UNK_143360ffe;
    uVar16 = pdb_1419c1f70(&UNK_143360ffe);
    if ((uVar16 & 1) != 0) {
      if (0x4f < uVar20 + 2) goto LAB_1419bfa81;
      lVar21 = 0x4d - uVar20;
      unaff_R15 = &UNK_143361000 + uVar20;
    }
  }
  puVar17 = &UNK_143360d9d;
  puVar22 = &UNK_143360d60;
  do {
    pbVar1 = puVar17 + -1;
    uVar19 = (uint)(char)*pbVar1;
    if ((int)uVar19 < 0) {
      bVar4 = puVar17[-2];
      if ((char)bVar4 < -0x40) {
        bVar5 = puVar17[-3];
        if ((char)bVar5 < -0x40) {
          pbVar2 = puVar17 + -4;
          puVar17 = puVar17 + -4;
          uVar19 = bVar5 & 0x3f | (*pbVar2 & 7) << 6;
        }
        else {
          puVar17 = puVar17 + -3;
          uVar19 = bVar5 & 0xf;
        }
        uVar19 = bVar4 & 0x3f | uVar19 << 6;
      }
      else {
        puVar17 = puVar17 + -2;
        uVar19 = bVar4 & 0x1f;
      }
      uVar19 = (uint)(*pbVar1 & 0x3f) | uVar19 << 6;
      if (uVar19 != 0x5c) goto LAB_1419bf619;
LAB_1419bf636:
      if (puVar17 + -0x143360d5f < (undefined *)0x3e) {
        plVar23 = (longlong *)(0x3c - (longlong)(puVar17 + -0x143360d60));
        puVar22 = puVar17 + 1;
        goto LAB_1419bf65a;
      }
      pdb_142dc8070(&UNK_143360d60,0x3d,puVar17 + -0x143360d5f,0x3d,&UNK_1433610b0);
      goto LAB_1419bfa61;
    }
    puVar17 = puVar17 + -1;
    if (uVar19 == 0x5c) goto LAB_1419bf636;
LAB_1419bf619:
    if (uVar19 == 0x2f) goto LAB_1419bf636;
  } while (puVar17 != &UNK_143360d60);
  plVar23 = (longlong *)0x3d;
LAB_1419bf65a:
  plVar18 = (longlong *)pdb_140e97000();
  if ((char)plVar18[0xd] != '\x01') goto LAB_1419bf9eb;
  do {
    if (*plVar18 == 0) {
      *plVar18 = -1;
      plStack_100 = plVar18;
      uStack_138 = pdb_140e94f10(plVar18 + 1,unaff_R15,lVar21,puVar22,plVar23,1,0);
      *plStack_100 = *plStack_100 + 1;
      uStack_140 = 1;
      uStack_120 = uStack_138;
LAB_1419bf6bc:
      pdb_140e08f50(&uStack_10c,*param_3);
      fVar14 = fStack_104;
      fVar13 = fStack_108;
      puVar22 = *(undefined **)(*param_2 + 8);
      plVar23 = *(longlong **)(*param_2 + 0x10);
      **(float **)(param_1 + 4) = param_1[7];
      fVar10 = _DAT_14335fde0;
      fVar9 = _DAT_143043134;
      fVar8 = _DAT_142e36f28;
      lVar21 = *(longlong *)(*(longlong *)param_1 + 8);
      plVar18 = *(longlong **)(*(longlong *)param_1 + 0x10);
      if (plVar18 < plVar23) {
        plVar23 = plVar18;
      }
      plStack_100 = (longlong *)CONCAT44(plStack_100._4_4_,uStack_10c);
      param_3 = (undefined8 *)0x3333333333333333;
      param_1 = &fStack_118;
      plVar18 = (longlong *)0x0;
      while (plVar18 < plVar23) {
        param_2 = (longlong *)((longlong)plVar18 + 1);
        unaff_R15 = (undefined *)((longlong)plVar18 * 0x38 + lVar21);
        uVar20 = *(ulonglong *)(puVar22 + (longlong)plVar18 * 0x18 + 8);
        if (uVar20 == 0) {
          pdb_140a87f70(unaff_R15);
          plVar18 = param_2;
        }
        else {
          uVar20 = uVar20 - (uVar20 >> 1 & 0x5555555555555555);
          uVar20 = (uVar20 >> 2 & 0x3333333333333333) + (uVar20 & 0x3333333333333333);
          fVar29 = (float)(byte)(((uVar20 >> 4) + uVar20 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                                0x38);
          fVar24 = fVar8 / fVar29;
          uVar20 = *(ulonglong *)((longlong)(puVar22 + (longlong)plVar18 * 0x18) + 0x10);
          uVar28 = (undefined2)(uVar20 >> 0x30);
          auVar27._8_4_ = 0;
          auVar27._0_8_ = uVar20;
          auVar27._12_2_ = uVar28;
          auVar27._14_2_ = uVar28;
          uVar28 = (undefined2)(uVar20 >> 0x20);
          auVar26._12_4_ = auVar27._12_4_;
          auVar26._8_2_ = 0;
          auVar26._0_8_ = uVar20;
          auVar26._10_2_ = uVar28;
          auVar25._10_6_ = auVar26._10_6_;
          auVar25._8_2_ = uVar28;
          auVar25._0_8_ = uVar20;
          uVar28 = (undefined2)(uVar20 >> 0x10);
          auVar7._4_8_ = auVar25._8_8_;
          auVar7._2_2_ = uVar28;
          auVar7._0_2_ = uVar28;
          uVar3 = *(undefined8 *)(puVar22 + (longlong)plVar18 * 0x18);
          uStack_178 = CONCAT44((float)((ulonglong)uVar3 >> 0x20) +
                                fVar24 * (float)(auVar7._0_4_ >> 0x10) * _UNK_14335fdd4,
                                (float)uVar3 + fVar24 * (float)(int)(short)uVar20 * _DAT_14335fdd0);
          pdb_140df4520(param_1,&uStack_178);
          fVar12 = fStack_110;
          fVar11 = fStack_114;
          fVar24 = fStack_118;
          fVar29 = fVar29 * fVar9;
          pdb_140a87e10(unaff_R15);
          if (*(ulonglong *)(unaff_R15 + 0x10) <= *(ulonglong *)(unaff_R15 + 0x28))
          goto LAB_1419bfa20;
          pdb_140a8e190(*(ulonglong *)(unaff_R15 + 0x28) * 0x30 + *(longlong *)(unaff_R15 + 8),
                        param_1);
          uVar20 = *(ulonglong *)(unaff_R15 + 0x28);
          if (*(ulonglong *)(unaff_R15 + 0x10) <= uVar20) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2(uVar20,*(ulonglong *)(unaff_R15 + 0x10),&UNK_143043a80);
          }
          plVar18 = param_2;
          if (*(int *)(*(longlong *)(unaff_R15 + 8) + uVar20 * 0x30) == 1) {
            pdb_141807fa0(&uStack_1b0,*(longlong *)(unaff_R15 + 8) + uVar20 * 0x30 + 8,
                          SQRT(fVar29 * (fVar8 / (((fVar12 - fVar14) * (fVar12 - fVar14) +
                                                  (fVar11 - fVar13) * (fVar11 - fVar13) +
                                                  (fVar24 - plStack_100._0_4_) *
                                                  (fVar24 - plStack_100._0_4_)) / (fVar29 * fVar10)
                                                 + fVar8))));
            if (CONCAT44(uStack_1ac,uStack_1b0) != -0x7ffffffffffffffc) {
              uStack_148 = uStack_180;
              uStack_158 = uStack_190;
              uStack_154 = uStack_18c;
              uStack_150 = uStack_188;
              uStack_14c = uStack_184;
              uStack_168 = uStack_1a0;
              uStack_160 = uStack_198;
              uStack_170 = uStack_1a8;
              uStack_16c = uStack_1a4;
                    /* WARNING: Subroutine does not return */
              pdb_142dc8170(&UNK_143044570,0x2b,&uStack_178,&UNK_143044530,&UNK_143044350);
            }
          }
        }
      }
      if (cStack_f1 == '\0') {
        return;
      }
      plVar18 = (longlong *)pdb_140e97000();
      if (((char)plVar18[0xd] != '\x01') &&
         (plVar18 = (longlong *)pdb_142d8ec20(plVar18,0), plVar18 == (longlong *)0x0)) break;
      if (*plVar18 == 0) {
        *plVar18 = -1;
        plStack_100 = plVar18;
        pdb_140e95370(plVar18 + 1,uStack_120);
        *plStack_100 = *plStack_100 + 1;
        return;
      }
    }
    plVar18 = (longlong *)pdb_142dc8090(&UNK_143326a50);
LAB_1419bf9eb:
    plVar18 = (longlong *)pdb_142d8ec20(plVar18,0);
  } while (plVar18 != (longlong *)0x0);
  pdb_142dc7890(&UNK_143326860);
LAB_1419bfa20:
                    /* WARNING: Subroutine does not return */
  pdb_142dc81f2();
}

