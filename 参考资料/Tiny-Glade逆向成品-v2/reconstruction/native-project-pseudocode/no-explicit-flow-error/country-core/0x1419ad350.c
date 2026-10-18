// VA 0x1419ad350, PDB extent 1145 bytes
// country_core::systems::audio::wall_audio_orchestrator::wall_audio_details
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/audio/wall_audio_orchestrator.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::audio::wall_audio_orchestrator::wall_audio_details
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/audio/wall_audio_orchestrator.rs
   Extent: 1145 */

void pdb_1419ad350(ulonglong *param_1,longlong param_2,byte param_3,float param_4)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  byte bVar5;
  byte bVar6;
  ulonglong uVar7;
  char cVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  lVar3 = 0;
  if (1 < param_3) {
    lVar3 = (ulonglong)param_3 - 1;
  }
  bVar1 = *(byte *)(param_2 + 0x29f);
  bVar5 = (bVar1 ^ 1) << 2 | 8;
  fVar13 = *(float *)(param_2 + 0x1bc);
  fVar11 = *(float *)(param_2 + 0x1b8);
  fVar12 = fVar11;
  if (fVar11 <= fVar13) {
    fVar12 = fVar13;
  }
  fVar11 = (float)(~-(uint)NAN(fVar13) & (uint)fVar12 | -(uint)NAN(fVar13) & (uint)fVar11);
  fVar13 = *(float *)(param_2 + 0x1b4);
  fVar12 = fVar13;
  if (fVar13 <= fVar11) {
    fVar12 = fVar11;
  }
  fVar13 = (float)(-(uint)NAN(fVar11) & (uint)fVar13 | ~-(uint)NAN(fVar11) & (uint)fVar12);
  if ((fVar13 != 0.0) || (NAN(fVar13))) {
    if (((*(uint *)(param_2 + 0x1bc) & 0x7fffffff) != 0) ||
       (uVar10 = 3, *(float *)(param_2 + 0x224) <= 0.0)) {
      if (((*(uint *)(param_2 + 0x1b4) & 0x7fffffff) != 0) || (*(float *)(param_2 + 0x21c) <= 0.0))
      {
        if ((*(uint *)(param_2 + 0x1b8) & 0x7fffffff) != 0) goto LAB_1419ad451;
        uVar10 = 0x1f;
        if (0.0 < *(float *)(param_2 + 0x220)) {
          uVar10 = (ulonglong)bVar5;
        }
      }
      else {
        uVar10 = 8;
      }
    }
  }
  else {
LAB_1419ad451:
    uVar10 = 0x1f;
  }
  bVar6 = 0x1f;
  if ((int)lVar3 == 2) {
LAB_1419ad532:
    uVar7 = 0;
  }
  else {
    if (*(int *)(param_2 + 0x234) - *(int *)(param_2 + 0x1cc) < 1) {
      if (*(int *)(param_2 + 0x234) - *(int *)(param_2 + 0x1cc) < 0) {
        fVar13 = *(float *)(param_2 + 0x224) - *(float *)(param_2 + 0x1bc);
        if ((fVar13 != 0.0) || (NAN(fVar13))) {
          bVar6 = 4;
        }
        else {
          fVar13 = *(float *)(param_2 + 0x228) - *(float *)(param_2 + 0x1c0);
          if ((fVar13 != 0.0) || (NAN(fVar13))) goto LAB_1419ad50f;
          fVar13 = *(float *)(param_2 + 0x230) - *(float *)(param_2 + 0x1c8);
          if ((fVar13 != 0.0) || (NAN(fVar13))) goto LAB_1419ad52f;
          fVar13 = *(float *)(param_2 + 0x22c) - *(float *)(param_2 + 0x1c4);
          if ((fVar13 != 0.0) || (NAN(fVar13))) goto LAB_1419ad765;
          fVar13 = *(float *)(param_2 + 0x21c) - *(float *)(param_2 + 0x1b4);
          if ((fVar13 == 0.0) && (!NAN(fVar13))) {
            bVar5 = 0xc - bVar1;
            goto LAB_1419ad7a3;
          }
          bVar6 = 0xb;
        }
      }
      goto LAB_1419ad532;
    }
    fVar13 = *(float *)(param_2 + 0x224) - *(float *)(param_2 + 0x1bc);
    if ((fVar13 != 0.0) || (NAN(fVar13))) {
      bVar6 = 3;
      goto LAB_1419ad532;
    }
    fVar13 = *(float *)(param_2 + 0x228) - *(float *)(param_2 + 0x1c0);
    if ((fVar13 != 0.0) || (NAN(fVar13))) {
LAB_1419ad50f:
      bVar6 = 0x16;
      goto LAB_1419ad532;
    }
    fVar13 = *(float *)(param_2 + 0x230) - *(float *)(param_2 + 0x1c8);
    if ((fVar13 != 0.0) || (NAN(fVar13))) {
LAB_1419ad52f:
      bVar6 = 0x1c;
      goto LAB_1419ad532;
    }
    fVar13 = *(float *)(param_2 + 0x22c) - *(float *)(param_2 + 0x1c4);
    if ((fVar13 == 0.0) && (!NAN(fVar13))) {
      fVar13 = *(float *)(param_2 + 0x21c) - *(float *)(param_2 + 0x1b4);
      if ((fVar13 != 0.0) || (NAN(fVar13))) {
        bVar6 = 8;
      }
      else {
LAB_1419ad7a3:
        fVar13 = *(float *)(param_2 + 0x220) - *(float *)(param_2 + 0x1b8);
        bVar6 = 0x1f;
        if (fVar13 != 0.0) {
          bVar6 = bVar5;
        }
        if (NAN(fVar13)) {
          bVar6 = bVar5;
        }
      }
      goto LAB_1419ad532;
    }
LAB_1419ad765:
    if (bVar1 == 0) {
      bVar6 = 0x18;
      goto LAB_1419ad532;
    }
    uVar7 = 0x100;
    bVar6 = 0x18;
  }
  fVar13 = *(float *)(&UNK_14335ea90 + (ulonglong)(lVar3 == 3) * 4);
  uVar9 = (ulonglong)bVar6;
  if (uVar10 != 0x1f) {
    uVar9 = uVar10;
  }
  if (uVar9 != 0x1f) {
    uVar4 = 0;
    if ((int)uVar10 == 0x1f) {
      uVar4 = uVar7;
    }
    *param_1 = uVar4 | uVar9;
    *(float *)(param_1 + 1) = fVar13;
    *(undefined1 *)((longlong)param_1 + 0xc) = 0x1f;
    return;
  }
  if (*(int *)(param_2 + 0x23c) - *(int *)(param_2 + 0x1d4) < 1) {
LAB_1419ad57f:
    if ((*(int *)(param_2 + 0x244) - *(int *)(param_2 + 0x1dc) < 1) ||
       (*(float *)(param_2 + 0x290) <= _DAT_142e37830)) {
      cVar8 = '\x1f';
      if ((*(int *)(param_2 + 0x23c) == *(int *)(param_2 + 0x1d4)) &&
         (_DAT_142e37830 < *(float *)(param_2 + 0x290))) {
        uVar2 = *(uint *)(param_2 + 0x244);
        if (*(uint *)(param_2 + 0x244) < *(uint *)(param_2 + 0x23c)) {
          uVar2 = *(uint *)(param_2 + 0x23c);
        }
        if (2 < uVar2) {
          fVar11 = (float)pdb_140b2e4f0(param_2 + 0x188);
          if (_DAT_142e37840 < fVar11 * param_4) {
            fVar12 = (fVar11 * param_4 + _DAT_14335ea98) / (param_4 * _DAT_142e3787c);
            fVar11 = 0.0;
            if (0.0 <= fVar12) {
              fVar11 = fVar12;
            }
            fVar12 = _DAT_142e36f28;
            if (fVar11 <= _DAT_142e36f28) {
              fVar12 = fVar11;
            }
            fVar12 = (_DAT_142e3788c - (fVar12 + fVar12)) * fVar12 * fVar12;
            fVar11 = 0.0;
            if (0.0 <= fVar12) {
              fVar11 = fVar12;
            }
            if (fVar11 <= fVar13) {
              fVar13 = fVar11;
            }
            cVar8 = '\x13';
          }
        }
      }
      goto LAB_1419ad6bc;
    }
    cVar8 = bVar1 + 0x11;
  }
  else {
    uVar2 = *(uint *)(param_2 + 0x244);
    if (*(uint *)(param_2 + 0x244) < *(uint *)(param_2 + 0x23c)) {
      uVar2 = *(uint *)(param_2 + 0x23c);
    }
    cVar8 = '\x12';
    if (uVar2 < 3) goto LAB_1419ad57f;
  }
  fVar13 = _DAT_142e36f28;
  if ((1 < (int)lVar3 - 1U) && (fVar13 = _DAT_142e3c658, lVar3 == 0)) {
    fVar13 = _DAT_142e36f50;
  }
LAB_1419ad6bc:
  *(undefined1 *)param_1 = 0x1f;
  *(char *)((longlong)param_1 + 0xc) = cVar8;
  *(float *)((longlong)param_1 + 0x14) = fVar13;
  return;
}

