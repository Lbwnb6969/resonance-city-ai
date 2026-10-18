// VA 0x140b51610, PDB extent 1717 bytes
// country_core::systems::wall::shapes::shape_placement::snap_to_roof_ridge
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/shapes/shape_placement.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::wall::shapes::shape_placement::snap_to_roof_ridge
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/shapes/shape_placement.rs
   Extent: 1717 */

undefined4 * pdb_140b51610(undefined4 *param_1,longlong param_2,float *param_3,float param_4)

{
  undefined4 uVar1;
  ulonglong uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fStack_110;
  uint uStack_10c;
  float afStack_108 [3];
  undefined4 uStack_fc;
  uint uStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float *pfStack_e8;
  code *pcStack_e0;
  float *pfStack_d8;
  code *pcStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  float fStack_b8;
  float fStack_b4;
  ulonglong uVar6;
  
  fVar12 = _DAT_142e36f28;
  if (*(int *)(param_2 + 8) == 1) {
    uStack_c8 = *(undefined8 *)(param_2 + 0xc);
    uStack_c0 = *(undefined8 *)(param_2 + 0x14);
    fVar11 = *(float *)(param_2 + 0x1c);
    fVar10 = *(float *)(param_2 + 0x20);
    fVar7 = fVar10;
    if (*(char *)(param_2 + 0x3c) == '\0') {
      fVar7 = fVar11;
    }
    uVar2 = (ulonglong)
            (uint)(fVar7 * *(float *)(param_2 + 0x34) +
                  (_DAT_142e36f28 - *(float *)(param_2 + 0x34)) * _DAT_142e3b1d8);
    uVar6 = uVar2 | 0x3dcccccd00000000;
    if (*(char *)(param_2 + 0x3c) != '\0') {
      uVar6 = uVar2 << 0x20 | 0x3dcccccd;
    }
    fVar3 = (float)uVar6;
    fVar4 = (float)(uVar6 >> 0x20);
    fVar7 = *(float *)(param_2 + 0x30);
    fVar5 = fVar4;
    if (fVar7 <= _DAT_142e3b1d8) {
      if (fVar4 < fVar3) {
        fVar5 = 0.01;
      }
      fVar10 = (float)(~-(uint)(fVar4 < fVar3) & _DAT_142e37848 |
                      (uint)fVar3 & -(uint)(fVar4 < fVar3));
      uVar8 = _DAT_142e37848;
      fStack_b8 = fVar10;
      fStack_b4 = fVar5;
      uStack_fc = pdb_140df3e10(&uStack_c8,0);
      fVar11 = param_3[1];
      uStack_f8 = uVar8;
      pdb_140df4540(afStack_108,&uStack_fc,fVar11);
      fStack_110 = (float)pdb_140df3e10(&uStack_c8,2);
      uStack_10c = uVar8;
      pdb_140df4540(&pfStack_e8,&fStack_110,fVar11);
      fVar7 = (float)afStack_108._4_8_;
      fVar3 = SUB84(afStack_108._4_8_,4);
      fVar4 = SUB84(pfStack_e8,0);
      fVar9 = (float)((ulonglong)pfStack_e8 >> 0x20);
    }
    else {
      fVar9 = fVar10;
      if (fVar10 <= fVar11) {
        fVar9 = fVar11;
      }
      fVar10 = (((float)(~-(uint)NAN(fVar11) & (uint)fVar9 | -(uint)NAN(fVar11) & (uint)fVar10) +
                _DAT_14303c690) / _DAT_14303c698) / _DAT_142e3798c;
      fVar11 = 0.0;
      if (0.0 <= fVar10) {
        fVar11 = fVar10;
      }
      fVar10 = _DAT_142e36f28;
      if (fVar11 <= _DAT_142e36f28) {
        fVar10 = fVar11;
      }
      fVar11 = (_DAT_142e3788c - (fVar10 + fVar10)) * fVar10 * fVar10;
      fVar11 = fVar11 * _DAT_142e37ad8 + (_DAT_142e36f28 - fVar11) * _DAT_142f895fc;
      if (fVar11 < 0.0) {
        fStack_110 = 0.0;
        pfStack_e8 = &fStack_110;
        pfStack_d8 = afStack_108;
        afStack_108[0] = fVar11;
LAB_140b51ca2:
        pcStack_e0 = pdb_140f705d0;
        pcStack_d0 = pdb_140f705d0;
                    /* WARNING: Subroutine does not return */
        pdb_142dc83d0(&UNK_14305bf5c,&pfStack_e8,&UNK_14305bff8);
      }
      fVar7 = fVar7 * _DAT_142e37ad8 + (_DAT_142e36f28 - fVar7) * _DAT_142e3798c;
      fVar10 = 0.0;
      if (0.0 <= fVar7) {
        fVar10 = fVar7;
      }
      if (fVar10 <= fVar11) {
        fVar11 = fVar10;
      }
      if (fVar4 < fVar3) {
        fVar5 = 0.01;
      }
      fVar11 = fVar11 + *(float *)(param_2 + 0x4c);
      fVar10 = (float)(~-(uint)(fVar4 < fVar3) & _DAT_142e37848 |
                      (uint)fVar3 & -(uint)(fVar4 < fVar3));
      uVar8 = _DAT_142e37848;
      fStack_b8 = fVar10;
      fStack_b4 = fVar5;
      uStack_fc = pdb_140df3e10(&uStack_c8,0);
      uStack_f8 = uVar8;
      pdb_140df4540(afStack_108,&uStack_fc,fVar11);
      fStack_110 = (float)pdb_140df3e10(&uStack_c8,2);
      uStack_10c = uVar8;
      pdb_140df4540(&pfStack_e8,&fStack_110,fVar11);
      fVar7 = (float)afStack_108._4_8_;
      fVar3 = SUB84(afStack_108._4_8_,4);
      fVar4 = SUB84(pfStack_e8,0);
      fVar9 = (float)((ulonglong)pfStack_e8 >> 0x20);
      fVar11 = param_3[1];
    }
    fVar13 = fVar9 - fVar7;
    fVar14 = fVar4 - afStack_108[0];
    fVar16 = pcStack_e0._0_4_ - fVar3;
    fVar15 = fVar16 * fVar16 + fVar13 * fVar13 + fVar14 * fVar14;
    fVar17 = fVar15;
    if (fVar15 <= _DAT_143006dc0) {
      fVar17 = _DAT_143006dc0;
    }
    fVar17 = (fVar16 * (param_3[2] - fVar3) +
             (fVar11 - fVar7) * fVar13 + (*param_3 - afStack_108[0]) * fVar14) / fVar17;
    fVar13 = 0.0;
    if (0.0 <= fVar17) {
      fVar13 = fVar17;
    }
    fVar17 = fVar12;
    if (fVar13 <= fVar12) {
      fVar17 = fVar13;
    }
    fVar14 = fVar12 - fVar17;
    fVar11 = fVar11 - (fVar9 * fVar17 + fVar7 * fVar14);
    fVar13 = param_3[2] - (fVar17 * pcStack_e0._0_4_ + fVar3 * fVar14);
    fVar14 = *param_3 - (fVar14 * afStack_108[0] + fVar4 * fVar17);
    uVar1 = 0;
    if (SQRT(fVar14 * fVar14 + fVar11 * fVar11 + fVar13 * fVar13) < param_4) {
      fVar11 = fVar5;
      if (fVar5 <= fVar10) {
        fVar11 = fVar10;
      }
      fVar13 = _DAT_142e36f50;
      if (_DAT_142e36f50 <=
          (float)(~-(uint)NAN(fVar10) & (uint)fVar11 | -(uint)NAN(fVar10) & (uint)fVar5)) {
        fVar13 = 0.0;
        if ((_DAT_142e37988 / SQRT(fVar15) <= fVar17) &&
           (fVar13 = fVar17, fVar12 - _DAT_142e37988 / SQRT(fVar15) < fVar17)) {
          fVar13 = fVar12;
        }
      }
      param_1[2] = afStack_108[0];
      param_1[3] = fVar7;
      param_1[4] = fVar3;
      param_1[5] = fVar4;
      param_1[6] = fVar9;
      param_1[7] = pcStack_e0._0_4_;
      param_1[1] = fVar13;
      uVar1 = 2;
    }
    *param_1 = uVar1;
  }
  else {
    fVar12 = *(float *)(param_2 + 0x30);
    if (fVar12 <= _DAT_142e3b1d8) {
      pfStack_e8 = *(float **)(param_2 + 0xc);
      fVar12 = param_3[1];
      pdb_140df4540(&fStack_f4,&pfStack_e8,fVar12);
    }
    else {
      fVar10 = ((*(float *)(param_2 + 0x14) + _DAT_14303c670) / _DAT_14303c674) / _DAT_142e3798c;
      fVar11 = 0.0;
      if (0.0 <= fVar10) {
        fVar11 = fVar10;
      }
      fVar10 = _DAT_142e36f28;
      if (fVar11 <= _DAT_142e36f28) {
        fVar10 = fVar11;
      }
      fVar11 = (_DAT_142e3788c - (fVar10 + fVar10)) * fVar10 * fVar10;
      fVar11 = fVar11 * _DAT_142e37ad8 + (_DAT_142e36f28 - fVar11) * _DAT_142f57bc8;
      if (fVar11 < 0.0) {
        afStack_108[0] = 0.0;
        uStack_c8 = CONCAT44(uStack_c8._4_4_,fVar11);
        pfStack_e8 = afStack_108;
        pfStack_d8 = (float *)&uStack_c8;
        goto LAB_140b51ca2;
      }
      fVar10 = fVar12 * _DAT_142e37ad8 + (_DAT_142e36f28 - fVar12) * _DAT_142e3798c;
      fVar12 = 0.0;
      if (0.0 <= fVar10) {
        fVar12 = fVar10;
      }
      if (fVar12 <= fVar11) {
        fVar11 = fVar12;
      }
      fStack_f4 = fVar11 * 0.0 + *(float *)(param_2 + 0xc);
      fStack_f0 = _DAT_142e36f28 * fVar11 + *(float *)(param_2 + 0x4c);
      fStack_ec = fVar11 * 0.0 + *(float *)(param_2 + 0x10);
      fVar12 = param_3[1];
    }
    if (param_4 <=
        SQRT((param_3[2] - fStack_ec) * (param_3[2] - fStack_ec) +
             (*param_3 - fStack_f4) * (*param_3 - fStack_f4) +
             (fVar12 - fStack_f0) * (fVar12 - fStack_f0))) {
      *param_1 = 0;
    }
    else {
      param_1[3] = fStack_ec;
      *(ulonglong *)(param_1 + 1) = CONCAT44(fStack_f0,fStack_f4);
      *param_1 = 1;
    }
  }
  return param_1;
}

