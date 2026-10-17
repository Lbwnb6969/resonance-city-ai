// Matched PDB: utils::random_splits_into
// VA 0x140de8bb0, PDB extent 737 bytes
// Ghidra pseudocode; types and unresolved calls are not original source.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB: utils::random_splits_into
   Extent: 737 bytes. No whole-program auto-analysis. */

void pdb_140de8bb0(ulonglong param_1,float param_2,undefined8 param_3,longlong *param_4)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar2 = _DAT_142e36f28;
  if (param_1 < 3) {
    lVar5 = param_4[2];
    if ((ulonglong)(*param_4 - lVar5) < 2) {
      pdb_142d7f1b0(param_4,lVar5,2,4,4);
      lVar5 = param_4[2];
    }
    *(undefined8 *)(param_4[1] + lVar5 * 4) = 0x3f80000000000000;
    param_4[2] = lVar5 + 2;
  }
  else {
    fVar8 = (_DAT_142e36f28 / (float)(param_1 - 1)) * _DAT_1431fec80;
    fVar9 = fVar8;
    if (param_2 <= fVar8) {
      fVar9 = param_2;
    }
    lVar5 = param_4[2];
    if (lVar5 == *param_4) {
      pdb_142d8d710(param_4);
    }
    *(undefined4 *)(param_4[1] + lVar5 * 4) = 0;
    lVar5 = lVar5 + 1;
    param_4[2] = lVar5;
    fVar10 = (float)param_1 + _DAT_142e36f34;
    param_1 = param_1 - 2;
    if ((ulonglong)(*param_4 - lVar5) < param_1) {
      pdb_142d7f1b0(param_4,lVar5,param_1,4,4);
      lVar5 = param_4[2];
    }
    fVar3 = _DAT_142e36f38;
    lVar1 = param_4[1];
    uVar4 = 0;
    do {
      fVar7 = (float)pdb_140e02880(param_3);
      uVar6 = uVar4 + 1;
      *(float *)(lVar1 + lVar5 * 4 + uVar4 * 4) =
           (fVar7 + fVar3) *
           (float)(~-(uint)NAN(param_2) & (uint)fVar9 | (uint)fVar8 & -(uint)NAN(param_2)) +
           (float)uVar6 * (fVar2 / fVar10);
      uVar4 = uVar6;
    } while (param_1 != uVar6);
    param_4[2] = lVar5 + uVar6;
    if (lVar5 + uVar6 == *param_4) {
      pdb_142d8d710(param_4);
    }
    *(undefined4 *)(lVar5 * 4 + param_4[1] + uVar6 * 4) = 0x3f800000;
    param_4[2] = lVar5 + uVar6 + 1;
  }
  return;
}

