// VA 0x140b77620, PDB extent 868 bytes
// country_core::resources::roofs::roof_shape::Roof::roof_shape_at_intersection_y
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/roofs/roof_shape.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::roofs::roof_shape::Roof::roof_shape_at_intersection_y
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/roofs/roof_shape.rs
   Extent: 868 */

undefined8 * pdb_140b77620(undefined8 *param_1,longlong param_2,float param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 uStack_b8;
  float fStack_b4;
  undefined4 *puStack_b0;
  code *pcStack_a8;
  float *pfStack_a0;
  code *pcStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  fVar4 = _DAT_142e36f28;
  fVar10 = *(float *)(param_2 + 0x30);
  fVar12 = *(float *)(param_2 + 0x4c);
  fStack_b4 = 0.0;
  if (_DAT_142e3b1d8 < fVar10) {
    if (*(int *)(param_2 + 8) == 1) {
      fVar9 = *(float *)(param_2 + 0x1c);
      fVar8 = *(float *)(param_2 + 0x20);
      fVar11 = fVar8;
      if (fVar8 <= fVar9) {
        fVar11 = fVar9;
      }
      fVar8 = ((float)(~-(uint)NAN(fVar9) & (uint)fVar11 | -(uint)NAN(fVar9) & (uint)fVar8) +
              _DAT_14303c690) / _DAT_14303c698;
      fVar9 = _DAT_142f895fc;
    }
    else {
      fVar8 = (*(float *)(param_2 + 0x14) + _DAT_14303c670) / _DAT_14303c674;
      fVar9 = _DAT_142f57bc8;
    }
    fVar11 = 0.0;
    if (0.0 <= fVar8 / _DAT_142e3798c) {
      fVar11 = fVar8 / _DAT_142e3798c;
    }
    fVar8 = _DAT_142e36f28;
    if (fVar11 <= _DAT_142e36f28) {
      fVar8 = fVar11;
    }
    fVar8 = (_DAT_142e3788c - (fVar8 + fVar8)) * fVar8 * fVar8;
    fStack_b4 = fVar8 * _DAT_142e37ad8 + (_DAT_142e36f28 - fVar8) * fVar9;
    if (fStack_b4 < 0.0) {
      uStack_b8 = 0;
      puStack_b0 = &uStack_b8;
      pcStack_a8 = pdb_140f705d0;
      pfStack_a0 = &fStack_b4;
      pcStack_98 = pdb_140f705d0;
                    /* WARNING: Subroutine does not return */
      pdb_142dc83d0(&UNK_14305bf5c,&puStack_b0,&UNK_14305bff8);
    }
    fVar9 = fVar10 * _DAT_142e37ad8 + (_DAT_142e36f28 - fVar10) * _DAT_142e3798c;
    fVar10 = 0.0;
    if (0.0 <= fVar9) {
      fVar10 = fVar9;
    }
    if (fVar10 <= fStack_b4) {
      fStack_b4 = fVar10;
    }
  }
  if ((fVar12 != param_3) || (NAN(fVar12) || NAN(param_3))) {
    if ((param_3 < fVar12) || (fStack_b4 + fVar12 <= param_3)) {
      *(undefined4 *)param_1 = 2;
    }
    else {
      fVar10 = (_DAT_142e36f28 - *(float *)(param_2 + 0x2c)) * _DAT_142e36f50;
      fVar12 = *(float *)(param_2 + 0x2c) * _DAT_142e37838;
      uVar7 = pdb_140de8220();
      fVar10 = (float)pub_142e32ad0(uVar7,fVar4 / (fVar12 + fVar10));
      if (*(int *)(param_2 + 8) == 1) {
        fVar12 = *(float *)(param_2 + 0x20);
        if (*(char *)(param_2 + 0x3c) == '\0') {
          fVar12 = *(float *)(param_2 + 0x1c);
        }
        uVar5 = (ulonglong)
                (uint)(fVar12 * *(float *)(param_2 + 0x34) +
                      (fVar4 - *(float *)(param_2 + 0x34)) * _DAT_142e3b1d8);
        uVar6 = uVar5 | 0x3dcccccd00000000;
        if (*(char *)(param_2 + 0x3c) != '\0') {
          uVar6 = uVar5 << 0x20 | 0x3dcccccd;
        }
        fVar10 = fVar4 - (fVar4 - fVar10);
        pdb_140df3380(&uStack_80,
                      (float)uVar6 * fVar10 + *(float *)(param_2 + 0x1c) * (fVar4 - fVar10),
                      fVar10 * (float)(uVar6 >> 0x20) +
                      (fVar4 - fVar10) * *(float *)(param_2 + 0x20),*(undefined4 *)(param_2 + 0xc),
                      *(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x14),
                      *(undefined4 *)(param_2 + 0x18),&UNK_14305c3a0);
        *(undefined4 *)param_1 = 1;
        *(undefined8 *)((longlong)param_1 + 4) = uStack_80;
        *(undefined8 *)((longlong)param_1 + 0xc) = uStack_78;
        *(undefined8 *)((longlong)param_1 + 0x14) = uStack_70;
      }
      else {
        pdb_140def2a0(&uStack_90);
        *(undefined4 *)param_1 = 0;
        *(undefined8 *)((longlong)param_1 + 4) = uStack_90;
        *(undefined8 *)((longlong)param_1 + 0xc) = uStack_88;
      }
    }
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 8);
    uVar2 = *(undefined8 *)(param_2 + 0x10);
    uVar3 = *(undefined8 *)(param_2 + 0x1c);
    *(undefined8 *)((longlong)param_1 + 0xc) = *(undefined8 *)(param_2 + 0x14);
    *(undefined8 *)((longlong)param_1 + 0x14) = uVar3;
    *param_1 = uVar1;
    param_1[1] = uVar2;
  }
  return param_1;
}

