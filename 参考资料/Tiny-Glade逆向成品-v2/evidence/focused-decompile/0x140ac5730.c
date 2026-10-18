// Matched PDB: country_core::resources::roofs::roof_ridge::RoofRidgeDims::to_world_space
// VA 0x140ac5730, PDB extent 2438 bytes
// Ghidra pseudocode; types and unresolved calls are not original source.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB: country_core::resources::roofs::roof_ridge::RoofRidgeDims::to_world_space
   Extent: 2438 bytes. No whole-program auto-analysis. */

undefined4 * pdb_140ac5730(undefined4 *param_1,float *param_2,longlong param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  code *pcVar4;
  longlong lVar5;
  undefined4 *puVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 uStack_140;
  float fStack_13c;
  undefined8 uStack_138;
  float fStack_130;
  undefined4 uStack_12c;
  float *pfStack_128;
  code *pcStack_120;
  undefined8 uStack_110;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  float fStack_d8;
  float fStack_d4;
  undefined8 uStack_d0;
  undefined1 auStack_c8 [16];
  
  fVar16 = _DAT_142e3b1d8;
  fVar8 = *param_2;
  fVar15 = param_2[1];
  fVar13 = fVar15;
  if (fVar15 <= fVar8) {
    fVar13 = fVar8;
  }
  if ((float)(~-(uint)NAN(fVar8) & (uint)fVar13 | -(uint)NAN(fVar8) & (uint)fVar15) <=
      _DAT_142e3b1d8) {
    iVar3 = *(int *)(param_3 + 8);
    if (iVar3 == 1) {
      pfStack_128 = *(float **)(param_3 + 0x1c);
      uStack_138._0_4_ = (float)*(undefined8 *)(param_3 + 0xc);
      uStack_138._4_4_ = (float)((ulonglong)*(undefined8 *)(param_3 + 0xc) >> 0x20);
      fStack_130 = (float)*(undefined8 *)(param_3 + 0x14);
      uStack_12c = (undefined4)((ulonglong)*(undefined8 *)(param_3 + 0x14) >> 0x20);
      pdb_140df1c10(&uStack_f8,&uStack_138);
      fVar8 = (float)*(undefined8 *)(param_3 + 0x24) * (float)*(undefined8 *)(param_3 + 0x1c);
      fVar15 = (float)((ulonglong)*(undefined8 *)(param_3 + 0x24) >> 0x20) *
               (float)((ulonglong)*(undefined8 *)(param_3 + 0x1c) >> 0x20);
      uStack_f8 = CONCAT44(fVar15 * _UNK_142e36f4c * uStack_f0._4_4_ +
                           fVar8 * _UNK_142e36f44 * uStack_f8._4_4_,
                           fVar15 * _UNK_142e36f48 * (float)uStack_f0 +
                           fVar8 * _DAT_142e36f40 * (float)uStack_f8);
      lVar5 = 0x10;
      lVar7 = 0xc;
    }
    else {
      fVar8 = *(float *)(param_3 + 0x14) + *(float *)(param_3 + 0x14);
      uStack_f8 = CONCAT44(fVar8 * (float)((ulonglong)*(undefined8 *)(param_3 + 0x24) >> 0x20) *
                           _UNK_142e36f64,
                           fVar8 * (float)*(undefined8 *)(param_3 + 0x24) * _DAT_142e36f60);
      lVar5 = 8;
      lVar7 = 4;
    }
    fVar8 = *(float *)(param_3 + 8 + lVar5);
    fVar15 = *(float *)(param_3 + 8 + lVar7);
    fVar11 = *(float *)(param_3 + 0x4c);
    pdb_140df4520(&uStack_138,&uStack_f8);
    fVar10 = *(float *)(param_3 + 0x30);
    fVar13 = 0.0;
    if (fVar10 <= fVar16) {
LAB_140ac5f62:
      fVar16 = fVar13 * _DAT_142e378e0;
      *(ulonglong *)(param_1 + 1) =
           CONCAT44(fVar11 + uStack_138._4_4_ + fVar13 * _UNK_142e378e4,
                    fVar15 + (float)uStack_138 + fVar16);
      param_1[3] = fVar8 + fStack_130 + fVar16;
      *param_1 = 0;
      return param_1;
    }
    if ((char)iVar3 == '\0') {
      fVar16 = (*(float *)(param_3 + 0x14) + _DAT_14303c670) / _DAT_14303c674;
      fVar13 = _DAT_142f57bc8;
    }
    else {
      fVar13 = *(float *)(param_3 + 0x1c);
      fVar16 = *(float *)(param_3 + 0x20);
      fVar12 = fVar16;
      if (fVar16 <= fVar13) {
        fVar12 = fVar13;
      }
      fVar16 = ((float)(~-(uint)NAN(fVar13) & (uint)fVar12 | -(uint)NAN(fVar13) & (uint)fVar16) +
               _DAT_14303c690) / _DAT_14303c698;
      fVar13 = _DAT_142f895fc;
    }
    fVar12 = 0.0;
    if (0.0 <= fVar16 / _DAT_142e3798c) {
      fVar12 = fVar16 / _DAT_142e3798c;
    }
    fVar16 = _DAT_142e36f28;
    if (fVar12 <= _DAT_142e36f28) {
      fVar16 = fVar12;
    }
    fVar16 = (_DAT_142e3788c - (fVar16 + fVar16)) * fVar16 * fVar16;
    fVar13 = fVar16 * _DAT_142e37ad8 + (_DAT_142e36f28 - fVar16) * fVar13;
    if (0.0 <= fVar13) {
      fVar10 = fVar10 * _DAT_142e37ad8 + (_DAT_142e36f28 - fVar10) * _DAT_142e3798c;
      fVar16 = 0.0;
      if (0.0 <= fVar10) {
        fVar16 = fVar10;
      }
      if (fVar16 <= fVar13) {
        fVar13 = fVar16;
      }
      goto LAB_140ac5f62;
    }
  }
  else {
    if (*(char *)(param_3 + 8) != '\0') {
      uStack_e8 = *(undefined8 *)(param_3 + 0x1c);
      uStack_f8 = *(undefined8 *)(param_3 + 0xc);
      uStack_f0 = *(undefined8 *)(param_3 + 0x14);
      fVar11 = (float)*(undefined8 *)(param_3 + 0x1c);
      fVar10 = (float)((ulonglong)*(undefined8 *)(param_3 + 0x1c) >> 0x20);
      fVar12 = (float)*(undefined8 *)(param_3 + 0x24) * fVar11 * 0.0;
      fVar13 = (float)((ulonglong)*(undefined8 *)(param_3 + 0x24) >> 0x20) * fVar10 * 0.0;
      if (*(char *)(param_3 + 0x3c) == '\0') {
        pdb_140df1c10(&fStack_108,&uStack_f8);
        fVar8 = fVar8 * _DAT_142e36f50;
        fVar15 = fVar12 - fVar8;
        fVar13 = fVar13 + 0.0;
        uStack_110 = CONCAT44(fStack_fc * fVar13 + fStack_104 * fVar15,
                              fStack_100 * fVar13 + fStack_108 * fVar15);
        pdb_140df4520(&uStack_138,&uStack_110);
        fStack_d8 = (float)uStack_138;
        fStack_d4 = uStack_138._4_4_;
        fVar15 = *(float *)(param_3 + 0x14);
        fVar1 = *(float *)(param_3 + 0x4c);
        fVar14 = fStack_130 + *(float *)(param_3 + 0x18);
        fVar2 = *(float *)(param_3 + 0x30);
        fVar9 = 0.0;
        if (fVar16 < fVar2) {
          fVar16 = fVar10;
          if (fVar10 <= fVar11) {
            fVar16 = fVar11;
          }
          fVar9 = (((float)(~-(uint)NAN(fVar11) & (uint)fVar16 | -(uint)NAN(fVar11) & (uint)fVar10)
                   + _DAT_14303c690) / _DAT_14303c698) / _DAT_142e3798c;
          fVar16 = 0.0;
          if (0.0 <= fVar9) {
            fVar16 = fVar9;
          }
          fVar9 = _DAT_142e36f28;
          if (fVar16 <= _DAT_142e36f28) {
            fVar9 = fVar16;
          }
          fVar16 = (_DAT_142e3788c - (fVar9 + fVar9)) * fVar9 * fVar9;
          fStack_13c = fVar16 * _DAT_142e37ad8 + (_DAT_142e36f28 - fVar16) * _DAT_142f895fc;
          if (fStack_13c < 0.0) goto LAB_140ac6078;
          fVar9 = _DAT_142e37ad8 * fVar2 + (_DAT_142e36f28 - fVar2) * _DAT_142e3798c;
          fVar16 = 0.0;
          if (0.0 <= fVar9) {
            fVar16 = fVar9;
          }
          fVar9 = fStack_13c;
          if (fVar16 <= fStack_13c) {
            fVar9 = fVar16;
          }
        }
        uStack_d0 = 0;
        auStack_c8 = ZEXT416((uint)*(float *)(param_3 + 0x18));
        pdb_140df1c10(&fStack_108,&uStack_f8);
        fVar8 = fVar8 + fVar12;
        uStack_110 = CONCAT44(fVar13 * fStack_fc + fVar8 * fStack_104,
                              fVar13 * fStack_100 + fVar8 * fStack_108);
        pdb_140df4520(&uStack_138,&uStack_110);
        fStack_13c = 0.0;
        if (_DAT_142e3b1d8 < fVar2) {
          fVar8 = fVar10;
          if (fVar10 <= fVar11) {
            fVar8 = fVar11;
          }
          fVar13 = (((float)(~-(uint)NAN(fVar11) & (uint)fVar8 | -(uint)NAN(fVar11) & (uint)fVar10)
                    + _DAT_14303c690) / _DAT_14303c698) / _DAT_142e3798c;
          fVar8 = 0.0;
          if (0.0 <= fVar13) {
            fVar8 = fVar13;
          }
          fVar13 = _DAT_142e36f28;
          if (fVar8 <= _DAT_142e36f28) {
            fVar13 = fVar8;
          }
          fVar8 = (_DAT_142e3788c - (fVar13 + fVar13)) * fVar13 * fVar13;
          fStack_13c = fVar8 * _DAT_142e37ad8 + (_DAT_142e36f28 - fVar8) * _DAT_142f895fc;
          if (fStack_13c < 0.0) goto LAB_140ac6078;
          fVar13 = fVar2 * _DAT_142e37ad8 + (_DAT_142e36f28 - fVar2) * _DAT_142e3798c;
          fVar8 = 0.0;
          if (0.0 <= fVar13) {
            fVar8 = fVar13;
          }
          if (fVar8 <= fStack_13c) {
            fStack_13c = fVar8;
          }
        }
        fVar8 = fVar15 + fStack_d8 + fVar9 * _DAT_142e378e0;
        fVar13 = fVar1 + fStack_d4 + fVar9 * _UNK_142e378e4;
        fVar14 = fVar9 * _DAT_142e378e0 + fVar14;
        uStack_138._0_4_ = (float)uStack_138 + fVar15;
        uStack_138._4_4_ = uStack_138._4_4_ + fVar1;
        fStack_130 = fStack_130 + (float)auStack_c8._0_4_;
        goto LAB_140ac5e9b;
      }
      pdb_140df1c10(&fStack_108,&uStack_f8);
      fVar15 = fVar15 * _DAT_142e36f50;
      fVar12 = fVar12 + 0.0;
      fVar8 = fVar13 - fVar15;
      uStack_110 = CONCAT44(fVar8 * fStack_fc + fVar12 * fStack_104,
                            fVar8 * fStack_100 + fVar12 * fStack_108);
      pdb_140df4520(&uStack_138,&uStack_110);
      fStack_d8 = (float)uStack_138;
      fStack_d4 = uStack_138._4_4_;
      fVar1 = *(float *)(param_3 + 0x14);
      fVar2 = *(float *)(param_3 + 0x4c);
      fVar14 = fStack_130 + *(float *)(param_3 + 0x18);
      fVar8 = *(float *)(param_3 + 0x30);
      fVar9 = 0.0;
      if (fVar8 <= fVar16) {
LAB_140ac5967:
        uStack_d0 = 0;
        auStack_c8 = ZEXT416((uint)*(float *)(param_3 + 0x18));
        pdb_140df1c10(&fStack_108,&uStack_f8);
        fVar15 = fVar15 + fVar13;
        uStack_110 = CONCAT44(fVar15 * fStack_fc + fVar12 * fStack_104,
                              fVar15 * fStack_100 + fVar12 * fStack_108);
        pdb_140df4520(&uStack_138,&uStack_110);
        fStack_13c = 0.0;
        if (_DAT_142e3b1d8 < fVar8) {
          fVar15 = fVar10;
          if (fVar10 <= fVar11) {
            fVar15 = fVar11;
          }
          fVar13 = (((float)(~-(uint)NAN(fVar11) & (uint)fVar15 | -(uint)NAN(fVar11) & (uint)fVar10)
                    + _DAT_14303c690) / _DAT_14303c698) / _DAT_142e3798c;
          fVar15 = 0.0;
          if (0.0 <= fVar13) {
            fVar15 = fVar13;
          }
          fVar13 = _DAT_142e36f28;
          if (fVar15 <= _DAT_142e36f28) {
            fVar13 = fVar15;
          }
          fVar15 = (_DAT_142e3788c - (fVar13 + fVar13)) * fVar13 * fVar13;
          fStack_13c = fVar15 * _DAT_142e37ad8 + (_DAT_142e36f28 - fVar15) * _DAT_142f895fc;
          if (fStack_13c < 0.0) goto LAB_140ac6078;
          fVar15 = fVar8 * _DAT_142e37ad8 + (_DAT_142e36f28 - fVar8) * _DAT_142e3798c;
          fVar8 = 0.0;
          if (0.0 <= fVar15) {
            fVar8 = fVar15;
          }
          if (fVar8 <= fStack_13c) {
            fStack_13c = fVar8;
          }
        }
        fVar8 = fVar1 + fStack_d8 + fVar9 * _DAT_142e378e0;
        fVar13 = fVar2 + fStack_d4 + fVar9 * _UNK_142e378e4;
        fVar14 = fVar9 * _DAT_142e378e0 + fVar14;
        uStack_138._0_4_ = (float)uStack_138 + fVar1;
        uStack_138._4_4_ = uStack_138._4_4_ + fVar2;
        fStack_130 = fStack_130 + (float)auStack_c8._0_4_;
LAB_140ac5e9b:
        fVar15 = _DAT_14300c770 * _DAT_143035ea0;
        fVar16 = fStack_13c * _UNK_143035ea4;
        fVar11 = fStack_13c * _UNK_143035ea8;
        fStack_13c = fStack_13c * _UNK_143035eac;
        *(ulonglong *)(param_1 + 1) = CONCAT44(fVar13,fVar8);
        param_1[3] = fVar15 + fVar14;
        param_1[4] = fVar16 + (float)uStack_138;
        param_1[5] = fVar11 + uStack_138._4_4_;
        param_1[6] = fStack_13c + fStack_130;
        *param_1 = 1;
        return param_1;
      }
      fVar16 = fVar10;
      if (fVar10 <= fVar11) {
        fVar16 = fVar11;
      }
      fVar9 = (((float)(~-(uint)NAN(fVar11) & (uint)fVar16 | -(uint)NAN(fVar11) & (uint)fVar10) +
               _DAT_14303c690) / _DAT_14303c698) / _DAT_142e3798c;
      fVar16 = 0.0;
      if (0.0 <= fVar9) {
        fVar16 = fVar9;
      }
      fVar9 = _DAT_142e36f28;
      if (fVar16 <= _DAT_142e36f28) {
        fVar9 = fVar16;
      }
      fVar16 = (_DAT_142e3788c - (fVar9 + fVar9)) * fVar9 * fVar9;
      fStack_13c = fVar16 * _DAT_142e37ad8 + (_DAT_142e36f28 - fVar16) * _DAT_142f895fc;
      if (0.0 <= fStack_13c) {
        fVar9 = _DAT_142e37ad8 * fVar8 + (_DAT_142e36f28 - fVar8) * _DAT_142e3798c;
        fVar16 = 0.0;
        if (0.0 <= fVar9) {
          fVar16 = fVar9;
        }
        fVar9 = fStack_13c;
        if (fVar16 <= fStack_13c) {
          fVar9 = fVar16;
        }
        goto LAB_140ac5967;
      }
LAB_140ac6078:
      uStack_140 = 0;
      uStack_138 = (undefined8 *)&uStack_140;
      pfStack_128 = &fStack_13c;
      goto LAB_140ac6093;
    }
    pdb_142dc83d0(&UNK_14304c310,0x53,&UNK_14304c370);
  }
  uStack_110 = (ulonglong)uStack_110._4_4_ << 0x20;
  uStack_138 = &uStack_110;
  pfStack_128 = &fStack_108;
  fStack_108 = fVar13;
LAB_140ac6093:
  uStack_12c = 1;
  fStack_130 = 7.7194595;
  pcStack_120 = pdb_140f705d0;
  pdb_142dc83d0(&UNK_14305bf5c,&uStack_138,&UNK_14305bff8);
  pcVar4 = (code *)swi(3);
  puVar6 = (undefined4 *)(*pcVar4)();
  return puVar6;
}

