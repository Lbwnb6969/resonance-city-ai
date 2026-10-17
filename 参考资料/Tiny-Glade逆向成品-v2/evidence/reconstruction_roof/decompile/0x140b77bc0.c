// Matched PDB: country_core::resources::roofs::roof_shape::Roof::get_roof_shape
// VA 0x140b77bc0, PDB extent 458 bytes
// Ghidra pseudocode; types and unresolved calls are not original source.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB: country_core::resources::roofs::roof_shape::Roof::get_roof_shape
   Extent: 458 bytes. No whole-program auto-analysis. */

undefined4 * pdb_140b77bc0(undefined4 *param_1,longlong param_2,undefined4 param_3)

{
  char cVar1;
  undefined8 uVar2;
  float fVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  fVar3 = _DAT_142e36f28;
  fVar12 = *(float *)(param_2 + 0x2c);
  fVar7 = (float)func_0x000142e32ad0(param_3,_DAT_142e36f28 /
                                             (_DAT_142e37838 * fVar12 +
                                             (_DAT_142e36f28 - fVar12) * _DAT_142e36f50));
  if (*(int *)(param_2 + 8) == 1) {
    fVar13 = *(float *)(param_2 + 0x38);
    fVar11 = *(float *)(param_2 + 0x34);
    fVar10 = (fVar3 - fVar11) * _DAT_142e3b1d8;
    uVar2 = *(undefined8 *)(param_2 + 0x14);
    cVar1 = *(char *)(param_2 + 0x3c);
    *(undefined8 *)(param_1 + 1) = *(undefined8 *)(param_2 + 0xc);
    *(undefined8 *)(param_1 + 3) = uVar2;
    fVar8 = (float)*(undefined8 *)(param_2 + 0x1c);
    fVar9 = (float)((ulonglong)*(undefined8 *)(param_2 + 0x1c) >> 0x20);
    fVar14 = fVar9;
    if (cVar1 == '\0') {
      fVar14 = fVar8;
    }
    uVar6 = (ulonglong)(uint)(fVar10 + fVar11 * fVar14);
    fVar12 = SQRT(fVar12) + _DAT_142e36f50 * (_DAT_142e37950 - SQRT(fVar12));
    fVar13 = _DAT_142e37838 * fVar13 + (_UNK_142e37954 - fVar13) * 0.0;
    uVar5 = uVar6 | 0x3dcccccd00000000;
    if (cVar1 != '\0') {
      uVar5 = uVar6 << 0x20 | 0x3dcccccd;
    }
    *(ulonglong *)(param_1 + 5) =
         CONCAT44(fVar7 * (float)(uVar5 >> 0x20) +
                  (fVar3 - fVar7) * (fVar13 * fVar12 + fVar9 + _UNK_14300b134),
                  fVar7 * (float)uVar5 +
                  (fVar3 - fVar7) * (fVar13 * fVar12 + fVar8 + _DAT_14300b130));
    uVar4 = 1;
  }
  else {
    fVar11 = (((fVar3 - SQRT(fVar12)) * _DAT_142e36f50 + SQRT(fVar12)) *
              (*(float *)(param_2 + 0x38) * _DAT_142e37838 +
              (fVar3 - *(float *)(param_2 + 0x38)) * 0.0) * _DAT_142e37990 + _DAT_14300b140) *
             _DAT_142e36f50;
    fVar12 = *(float *)(param_2 + 0x14);
    uVar4 = *(undefined4 *)(param_2 + 0x18);
    fVar13 = fVar7 * _DAT_142e3787c;
    *(undefined8 *)(param_1 + 1) = *(undefined8 *)(param_2 + 0xc);
    param_1[3] = fVar13 + (fVar3 - fVar7) * (fVar11 + fVar12);
    param_1[4] = uVar4;
    uVar4 = 0;
  }
  *param_1 = uVar4;
  return param_1;
}

