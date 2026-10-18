// VA 0x140ac5730, PDB extent 2438 bytes
// country_core::resources::roofs::roof_ridge::RoofRidgeDims::to_world_space
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/roofs/roof_ridge.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::roofs::roof_ridge::RoofRidgeDims::to_world_space
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/roofs/roof_ridge.rs
   Extent: 2438 */

undefined4 * pdb_140ac5730(undefined4 *param_1,float *param_2,longlong param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
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
  
  fVar14 = _DAT_142e3b1d8;
  fVar6 = *param_2;
  fVar13 = param_2[1];
  fVar11 = fVar13;
  if (fVar13 <= fVar6) {
    fVar11 = fVar6;
  }
  if ((float)(~-(uint)NAN(fVar6) & (uint)fVar11 | -(uint)NAN(fVar6) & (uint)fVar13) <=
      _DAT_142e3b1d8) {
    iVar3 = *(int *)(param_3 + 8);
    if (iVar3 == 1) {
      pfStack_128 = *(float **)(param_3 + 0x1c);
      uStack_138._0_4_ = (float)*(undefined8 *)(param_3 + 0xc);
      uStack_138._4_4_ = (float)((ulonglong)*(undefined8 *)(param_3 + 0xc) >> 0x20);
      fStack_130 = (float)*(undefined8 *)(param_3 + 0x14);
      uStack_12c = (undefined4)((ulonglong)*(undefined8 *)(param_3 + 0x14) >> 0x20);
      pdb_140df1c10(&uStack_f8,&uStack_138);
      fVar6 = (float)*(undefined8 *)(param_3 + 0x24) * (float)*(undefined8 *)(param_3 + 0x1c);
      fVar13 = (float)((ulonglong)*(undefined8 *)(param_3 + 0x24) >> 0x20) *
               (float)((ulonglong)*(undefined8 *)(param_3 + 0x1c) >> 0x20);
      uStack_f8 = CONCAT44(fVar13 * _UNK_142e36f4c * uStack_f0._4_4_ +
                           fVar6 * _UNK_142e36f44 * uStack_f8._4_4_,
                           fVar13 * _UNK_142e36f48 * (float)uStack_f0 +
                           fVar6 * _DAT_142e36f40 * (float)uStack_f8);
      lVar4 = 0x10;
      lVar5 = 0xc;
    }
    else {
      fVar6 = *(float *)(param_3 + 0x14) + *(float *)(param_3 + 0x14);
      uStack_f8 = CONCAT44(fVar6 * (float)((ulonglong)*(undefined8 *)(param_3 + 0x24) >> 0x20) *
                           _UNK_142e36f64,
                           fVar6 * (float)*(undefined8 *)(param_3 + 0x24) * _DAT_142e36f60);
      lVar4 = 8;
      lVar5 = 4;
    }
    fVar6 = *(float *)(param_3 + 8 + lVar4);
    fVar13 = *(float *)(param_3 + 8 + lVar5);
    fVar11 = *(float *)(param_3 + 0x4c);
    pdb_140df4520(&uStack_138,&uStack_f8);
    fVar8 = *(float *)(param_3 + 0x30);
    fStack_108 = 0.0;
    if (fVar8 <= fVar14) {
LAB_140ac5f62:
      fVar14 = fStack_108 * _DAT_142e378e0;
      *(ulonglong *)(param_1 + 1) =
           CONCAT44(fVar11 + uStack_138._4_4_ + fStack_108 * _UNK_142e378e4,
                    fVar13 + (float)uStack_138 + fVar14);
      param_1[3] = fVar6 + fStack_130 + fVar14;
      *param_1 = 0;
      return param_1;
    }
    if ((char)iVar3 == '\0') {
      fVar9 = (*(float *)(param_3 + 0x14) + _DAT_14303c670) / _DAT_14303c674;
      fVar14 = _DAT_142f57bc8;
    }
    else {
      fVar14 = *(float *)(param_3 + 0x1c);
      fVar9 = *(float *)(param_3 + 0x20);
      fVar10 = fVar9;
      if (fVar9 <= fVar14) {
        fVar10 = fVar14;
      }
      fVar9 = ((float)(~-(uint)NAN(fVar14) & (uint)fVar10 | -(uint)NAN(fVar14) & (uint)fVar9) +
              _DAT_14303c690) / _DAT_14303c698;
      fVar14 = _DAT_142f895fc;
    }
    fVar10 = 0.0;
    if (0.0 <= fVar9 / _DAT_142e3798c) {
      fVar10 = fVar9 / _DAT_142e3798c;
    }
    fVar9 = _DAT_142e36f28;
    if (fVar10 <= _DAT_142e36f28) {
      fVar9 = fVar10;
    }
    fVar9 = (_DAT_142e3788c - (fVar9 + fVar9)) * fVar9 * fVar9;
    fStack_108 = fVar9 * _DAT_142e37ad8 + (_DAT_142e36f28 - fVar9) * fVar14;
    if (0.0 <= fStack_108) {
      fVar8 = fVar8 * _DAT_142e37ad8 + (_DAT_142e36f28 - fVar8) * _DAT_142e3798c;
      fVar14 = 0.0;
      if (0.0 <= fVar8) {
        fVar14 = fVar8;
      }
      if (fVar14 <= fStack_108) {
        fStack_108 = fVar14;
      }
      goto LAB_140ac5f62;
    }
    uStack_110 = (ulonglong)uStack_110._4_4_ << 0x20;
    uStack_138 = &uStack_110;
    pfStack_128 = &fStack_108;
    goto LAB_140ac6093;
  }
  if (*(char *)(param_3 + 8) == '\0') {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83d0(&UNK_14304c310,0x53,&UNK_14304c370);
  }
  uStack_e8 = *(undefined8 *)(param_3 + 0x1c);
  uStack_f8 = *(undefined8 *)(param_3 + 0xc);
  uStack_f0 = *(undefined8 *)(param_3 + 0x14);
  fVar8 = (float)*(undefined8 *)(param_3 + 0x1c);
  fVar9 = (float)((ulonglong)*(undefined8 *)(param_3 + 0x1c) >> 0x20);
  fVar10 = (float)*(undefined8 *)(param_3 + 0x24) * fVar8 * 0.0;
  fVar11 = (float)((ulonglong)*(undefined8 *)(param_3 + 0x24) >> 0x20) * fVar9 * 0.0;
  if (*(char *)(param_3 + 0x3c) == '\0') {
    pdb_140df1c10(&fStack_108,&uStack_f8);
    fVar6 = fVar6 * _DAT_142e36f50;
    fVar13 = fVar10 - fVar6;
    fVar11 = fVar11 + 0.0;
    uStack_110 = CONCAT44(fStack_fc * fVar11 + fStack_104 * fVar13,
                          fStack_100 * fVar11 + fStack_108 * fVar13);
    pdb_140df4520(&uStack_138,&uStack_110);
    fStack_d8 = (float)uStack_138;
    fStack_d4 = uStack_138._4_4_;
    fVar13 = *(float *)(param_3 + 0x14);
    fVar1 = *(float *)(param_3 + 0x4c);
    fVar12 = fStack_130 + *(float *)(param_3 + 0x18);
    fVar2 = *(float *)(param_3 + 0x30);
    fVar7 = 0.0;
    if (fVar14 < fVar2) {
      fVar14 = fVar9;
      if (fVar9 <= fVar8) {
        fVar14 = fVar8;
      }
      fVar7 = (((float)(~-(uint)NAN(fVar8) & (uint)fVar14 | -(uint)NAN(fVar8) & (uint)fVar9) +
               _DAT_14303c690) / _DAT_14303c698) / _DAT_142e3798c;
      fVar14 = 0.0;
      if (0.0 <= fVar7) {
        fVar14 = fVar7;
      }
      fVar7 = _DAT_142e36f28;
      if (fVar14 <= _DAT_142e36f28) {
        fVar7 = fVar14;
      }
      fVar14 = (_DAT_142e3788c - (fVar7 + fVar7)) * fVar7 * fVar7;
      fStack_13c = fVar14 * _DAT_142e37ad8 + (_DAT_142e36f28 - fVar14) * _DAT_142f895fc;
      if (fStack_13c < 0.0) goto LAB_140ac6078;
      fVar7 = _DAT_142e37ad8 * fVar2 + (_DAT_142e36f28 - fVar2) * _DAT_142e3798c;
      fVar14 = 0.0;
      if (0.0 <= fVar7) {
        fVar14 = fVar7;
      }
      fVar7 = fStack_13c;
      if (fVar14 <= fStack_13c) {
        fVar7 = fVar14;
      }
    }
    uStack_d0 = 0;
    auStack_c8 = ZEXT416((uint)*(float *)(param_3 + 0x18));
    pdb_140df1c10(&fStack_108,&uStack_f8);
    fVar6 = fVar6 + fVar10;
    uStack_110 = CONCAT44(fVar11 * fStack_fc + fVar6 * fStack_104,
                          fVar11 * fStack_100 + fVar6 * fStack_108);
    pdb_140df4520(&uStack_138,&uStack_110);
    fStack_13c = 0.0;
    if (_DAT_142e3b1d8 < fVar2) {
      fVar6 = fVar9;
      if (fVar9 <= fVar8) {
        fVar6 = fVar8;
      }
      fVar11 = (((float)(~-(uint)NAN(fVar8) & (uint)fVar6 | -(uint)NAN(fVar8) & (uint)fVar9) +
                _DAT_14303c690) / _DAT_14303c698) / _DAT_142e3798c;
      fVar6 = 0.0;
      if (0.0 <= fVar11) {
        fVar6 = fVar11;
      }
      fVar11 = _DAT_142e36f28;
      if (fVar6 <= _DAT_142e36f28) {
        fVar11 = fVar6;
      }
      fVar6 = (_DAT_142e3788c - (fVar11 + fVar11)) * fVar11 * fVar11;
      fStack_13c = fVar6 * _DAT_142e37ad8 + (_DAT_142e36f28 - fVar6) * _DAT_142f895fc;
      if (fStack_13c < 0.0) goto LAB_140ac6078;
      fVar11 = fVar2 * _DAT_142e37ad8 + (_DAT_142e36f28 - fVar2) * _DAT_142e3798c;
      fVar6 = 0.0;
      if (0.0 <= fVar11) {
        fVar6 = fVar11;
      }
      if (fVar6 <= fStack_13c) {
        fStack_13c = fVar6;
      }
    }
    fVar6 = fVar13 + fStack_d8 + fVar7 * _DAT_142e378e0;
    fVar11 = fVar1 + fStack_d4 + fVar7 * _UNK_142e378e4;
    fVar12 = fVar7 * _DAT_142e378e0 + fVar12;
    uStack_138._0_4_ = (float)uStack_138 + fVar13;
    uStack_138._4_4_ = uStack_138._4_4_ + fVar1;
    fStack_130 = fStack_130 + (float)auStack_c8._0_4_;
    goto LAB_140ac5e9b;
  }
  pdb_140df1c10(&fStack_108,&uStack_f8);
  fVar13 = fVar13 * _DAT_142e36f50;
  fVar10 = fVar10 + 0.0;
  fVar6 = fVar11 - fVar13;
  uStack_110 = CONCAT44(fVar6 * fStack_fc + fVar10 * fStack_104,
                        fVar6 * fStack_100 + fVar10 * fStack_108);
  pdb_140df4520(&uStack_138,&uStack_110);
  fStack_d8 = (float)uStack_138;
  fStack_d4 = uStack_138._4_4_;
  fVar1 = *(float *)(param_3 + 0x14);
  fVar2 = *(float *)(param_3 + 0x4c);
  fVar12 = fStack_130 + *(float *)(param_3 + 0x18);
  fVar6 = *(float *)(param_3 + 0x30);
  fVar7 = 0.0;
  if (fVar6 <= fVar14) {
LAB_140ac5967:
    uStack_d0 = 0;
    auStack_c8 = ZEXT416((uint)*(float *)(param_3 + 0x18));
    pdb_140df1c10(&fStack_108,&uStack_f8);
    fVar13 = fVar13 + fVar11;
    uStack_110 = CONCAT44(fVar13 * fStack_fc + fVar10 * fStack_104,
                          fVar13 * fStack_100 + fVar10 * fStack_108);
    pdb_140df4520(&uStack_138,&uStack_110);
    fStack_13c = 0.0;
    if (_DAT_142e3b1d8 < fVar6) {
      fVar13 = fVar9;
      if (fVar9 <= fVar8) {
        fVar13 = fVar8;
      }
      fVar11 = (((float)(~-(uint)NAN(fVar8) & (uint)fVar13 | -(uint)NAN(fVar8) & (uint)fVar9) +
                _DAT_14303c690) / _DAT_14303c698) / _DAT_142e3798c;
      fVar13 = 0.0;
      if (0.0 <= fVar11) {
        fVar13 = fVar11;
      }
      fVar11 = _DAT_142e36f28;
      if (fVar13 <= _DAT_142e36f28) {
        fVar11 = fVar13;
      }
      fVar13 = (_DAT_142e3788c - (fVar11 + fVar11)) * fVar11 * fVar11;
      fStack_13c = fVar13 * _DAT_142e37ad8 + (_DAT_142e36f28 - fVar13) * _DAT_142f895fc;
      if (fStack_13c < 0.0) goto LAB_140ac6078;
      fVar13 = fVar6 * _DAT_142e37ad8 + (_DAT_142e36f28 - fVar6) * _DAT_142e3798c;
      fVar6 = 0.0;
      if (0.0 <= fVar13) {
        fVar6 = fVar13;
      }
      if (fVar6 <= fStack_13c) {
        fStack_13c = fVar6;
      }
    }
    fVar6 = fVar1 + fStack_d8 + fVar7 * _DAT_142e378e0;
    fVar11 = fVar2 + fStack_d4 + fVar7 * _UNK_142e378e4;
    fVar12 = fVar7 * _DAT_142e378e0 + fVar12;
    uStack_138._0_4_ = (float)uStack_138 + fVar1;
    uStack_138._4_4_ = uStack_138._4_4_ + fVar2;
    fStack_130 = fStack_130 + (float)auStack_c8._0_4_;
LAB_140ac5e9b:
    fVar13 = _DAT_14300c770 * _DAT_143035ea0;
    fVar14 = fStack_13c * _UNK_143035ea4;
    fVar8 = fStack_13c * _UNK_143035ea8;
    fStack_13c = fStack_13c * _UNK_143035eac;
    *(ulonglong *)(param_1 + 1) = CONCAT44(fVar11,fVar6);
    param_1[3] = fVar13 + fVar12;
    param_1[4] = fVar14 + (float)uStack_138;
    param_1[5] = fVar8 + uStack_138._4_4_;
    param_1[6] = fStack_13c + fStack_130;
    *param_1 = 1;
    return param_1;
  }
  fVar14 = fVar9;
  if (fVar9 <= fVar8) {
    fVar14 = fVar8;
  }
  fVar7 = (((float)(~-(uint)NAN(fVar8) & (uint)fVar14 | -(uint)NAN(fVar8) & (uint)fVar9) +
           _DAT_14303c690) / _DAT_14303c698) / _DAT_142e3798c;
  fVar14 = 0.0;
  if (0.0 <= fVar7) {
    fVar14 = fVar7;
  }
  fVar7 = _DAT_142e36f28;
  if (fVar14 <= _DAT_142e36f28) {
    fVar7 = fVar14;
  }
  fVar14 = (_DAT_142e3788c - (fVar7 + fVar7)) * fVar7 * fVar7;
  fStack_13c = fVar14 * _DAT_142e37ad8 + (_DAT_142e36f28 - fVar14) * _DAT_142f895fc;
  if (0.0 <= fStack_13c) {
    fVar7 = _DAT_142e37ad8 * fVar6 + (_DAT_142e36f28 - fVar6) * _DAT_142e3798c;
    fVar14 = 0.0;
    if (0.0 <= fVar7) {
      fVar14 = fVar7;
    }
    fVar7 = fStack_13c;
    if (fVar14 <= fStack_13c) {
      fVar7 = fVar14;
    }
    goto LAB_140ac5967;
  }
LAB_140ac6078:
  uStack_140 = 0;
  uStack_138 = (undefined8 *)&uStack_140;
  pfStack_128 = &fStack_13c;
LAB_140ac6093:
  uStack_12c = 1;
  fStack_130 = 7.7194595;
  pcStack_120 = pdb_140f705d0;
                    /* WARNING: Subroutine does not return */
  pdb_142dc83d0(&UNK_14305bf5c,&uStack_138,&UNK_14305bff8);
}

