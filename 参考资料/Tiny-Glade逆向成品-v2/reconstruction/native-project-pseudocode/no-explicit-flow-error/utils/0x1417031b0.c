// VA 0x1417031b0, PDB extent 399 bytes
// utils::timer::FilteredWallTime::delta_secs
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/timer.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: utils::timer::FilteredWallTime::delta_secs
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/timer.rs
   Extent: 399 */

void pdb_1417031b0(longlong *param_1)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  longlong lStack_38;
  longlong lStack_30;
  ulonglong uStack_28;
  longlong lStack_20;
  
  fVar6 = *(float *)(*param_1 + 0x58);
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  if (_DAT_143326e48 <= fVar6) {
    puVar1 = (ulonglong *)param_1[4];
    fVar7 = *(float *)((longlong)puVar1 + 0x24) * _DAT_142e37990;
    fVar8 = fVar7;
    if (fVar6 <= fVar7) {
      fVar8 = fVar6;
    }
    fVar6 = (float)(~-(uint)NAN(fVar6) & (uint)fVar8 | -(uint)NAN(fVar6) & (uint)fVar7);
    if ((int)puVar1[4] < 0) {
      uVar4 = *puVar1;
      uVar3 = puVar1[3];
      if (3 < uVar3) {
        uVar2 = 0;
        if (uVar4 <= puVar1[2] + 1) {
          uVar2 = uVar4;
        }
        puVar1[2] = (puVar1[2] - uVar2) + 1;
        uVar3 = uVar3 - 1;
        puVar1[3] = uVar3;
      }
      if (uVar3 == uVar4) {
        pdb_140181b30(puVar1);
        uVar4 = *puVar1;
        uVar3 = puVar1[3];
      }
      puVar1[3] = uVar3 + 1;
      uVar2 = 0;
      if (uVar3 + puVar1[2] < uVar4) {
        uVar4 = uVar2;
      }
      *(float *)(puVar1[1] + ((uVar3 + puVar1[2]) - uVar4) * 4) = fVar6;
      uVar4 = puVar1[3];
      uVar3 = 0;
      lVar5 = 0;
      if (uVar4 != 0) {
        uVar3 = *puVar1;
        uVar2 = 0;
        if (uVar3 <= puVar1[2]) {
          uVar2 = uVar3;
        }
        uVar2 = puVar1[2] - uVar2;
        lVar5 = uVar4 - (uVar3 - uVar2);
        if (uVar4 < uVar3 - uVar2 || lVar5 == 0) {
          uVar3 = uVar4 + uVar2;
          lVar5 = 0;
        }
      }
      uStack_28 = puVar1[1];
      lStack_38 = uStack_28 + uVar2 * 4;
      lStack_30 = uStack_28 + uVar3 * 4;
      lStack_20 = uStack_28 + lVar5 * 4;
      fVar6 = (float)pdb_142565580(&lStack_38,_DAT_142e377f0);
      fVar6 = fVar6 / (float)puVar1[3];
    }
    else {
      *(int *)(puVar1 + 4) = (int)puVar1[4] + -1;
      if (_DAT_143038a20 <= fVar6) {
        fVar6 = _DAT_143038a20;
      }
    }
    *(float *)((longlong)puVar1 + 0x24) = fVar6;
  }
  return;
}

