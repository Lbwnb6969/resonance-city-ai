// Matched PDB: country_core::resources::roofs::roof_shape::Roof::roof_shape_at_intersection_y
// VA 0x140b77620, PDB extent 868 bytes
// Ghidra pseudocode; types and unresolved calls are not original source.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB: country_core::resources::roofs::roof_shape::Roof::roof_shape_at_intersection_y
   Extent: 868 bytes. No whole-program auto-analysis. */

undefined8 * pdb_140b77620(undefined8 *param_1,longlong param_2,float param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  float fVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
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
  
  fVar5 = _DAT_142e36f28;
  fVar12 = *(float *)(param_2 + 0x30);
  fVar14 = *(float *)(param_2 + 0x4c);
  fStack_b4 = 0.0;
  if (_DAT_142e3b1d8 < fVar12) {
    if (*(int *)(param_2 + 8) == 1) {
      fVar11 = *(float *)(param_2 + 0x1c);
      fVar10 = *(float *)(param_2 + 0x20);
      fVar13 = fVar10;
      if (fVar10 <= fVar11) {
        fVar13 = fVar11;
      }
      fVar10 = ((float)(~-(uint)NAN(fVar11) & (uint)fVar13 | -(uint)NAN(fVar11) & (uint)fVar10) +
               _DAT_14303c690) / _DAT_14303c698;
      fVar11 = _DAT_142f895fc;
    }
    else {
      fVar10 = (*(float *)(param_2 + 0x14) + _DAT_14303c670) / _DAT_14303c674;
      fVar11 = _DAT_142f57bc8;
    }
    fVar13 = 0.0;
    if (0.0 <= fVar10 / _DAT_142e3798c) {
      fVar13 = fVar10 / _DAT_142e3798c;
    }
    fVar10 = _DAT_142e36f28;
    if (fVar13 <= _DAT_142e36f28) {
      fVar10 = fVar13;
    }
    fVar10 = (_DAT_142e3788c - (fVar10 + fVar10)) * fVar10 * fVar10;
    fStack_b4 = fVar10 * _DAT_142e37ad8 + (_DAT_142e36f28 - fVar10) * fVar11;
    if (fStack_b4 < 0.0) {
      uStack_b8 = 0;
      puStack_b0 = &uStack_b8;
      pcStack_a8 = pdb_140f705d0;
      pfStack_a0 = &fStack_b4;
      pcStack_98 = pdb_140f705d0;
      pdb_142dc83d0(&UNK_14305bf5c,&puStack_b0,&UNK_14305bff8);
      pcVar1 = (code *)swi(3);
      puVar6 = (undefined8 *)(*pcVar1)();
      return puVar6;
    }
    fVar11 = fVar12 * _DAT_142e37ad8 + (_DAT_142e36f28 - fVar12) * _DAT_142e3798c;
    fVar12 = 0.0;
    if (0.0 <= fVar11) {
      fVar12 = fVar11;
    }
    if (fVar12 <= fStack_b4) {
      fStack_b4 = fVar12;
    }
  }
  if ((fVar14 != param_3) || (NAN(fVar14) || NAN(param_3))) {
    if ((param_3 < fVar14) || (fStack_b4 + fVar14 <= param_3)) {
      *(undefined4 *)param_1 = 2;
    }
    else {
      fVar12 = (_DAT_142e36f28 - *(float *)(param_2 + 0x2c)) * _DAT_142e36f50;
      fVar14 = *(float *)(param_2 + 0x2c) * _DAT_142e37838;
      uVar9 = pdb_140de8220();
      fVar12 = (float)func_0x000142e32ad0(uVar9,fVar5 / (fVar14 + fVar12));
      if (*(int *)(param_2 + 8) == 1) {
        fVar14 = *(float *)(param_2 + 0x20);
        if (*(char *)(param_2 + 0x3c) == '\0') {
          fVar14 = *(float *)(param_2 + 0x1c);
        }
        uVar7 = (ulonglong)
                (uint)(fVar14 * *(float *)(param_2 + 0x34) +
                      (fVar5 - *(float *)(param_2 + 0x34)) * _DAT_142e3b1d8);
        uVar8 = uVar7 | 0x3dcccccd00000000;
        if (*(char *)(param_2 + 0x3c) != '\0') {
          uVar8 = uVar7 << 0x20 | 0x3dcccccd;
        }
        fVar12 = fVar5 - (fVar5 - fVar12);
        pdb_140df3380(&uStack_80,
                      (float)uVar8 * fVar12 + *(float *)(param_2 + 0x1c) * (fVar5 - fVar12),
                      fVar12 * (float)(uVar8 >> 0x20) +
                      (fVar5 - fVar12) * *(float *)(param_2 + 0x20),*(undefined4 *)(param_2 + 0xc),
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
    uVar2 = *(undefined8 *)(param_2 + 8);
    uVar3 = *(undefined8 *)(param_2 + 0x10);
    uVar4 = *(undefined8 *)(param_2 + 0x1c);
    *(undefined8 *)((longlong)param_1 + 0xc) = *(undefined8 *)(param_2 + 0x14);
    *(undefined8 *)((longlong)param_1 + 0x14) = uVar4;
    *param_1 = uVar2;
    param_1[1] = uVar3;
  }
  return param_1;
}

