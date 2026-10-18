// VA 0x140c1edd0, PDB extent 422 bytes
// country_core::resources::time_of_day::TodSequence::snapshot_at_tod
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/time_of_day.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::resources::time_of_day::TodSequence::snapshot_at_tod
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/time_of_day.rs
   Extent: 422 */

undefined8 * pdb_140c1edd0(undefined8 *param_1,longlong param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  float *pfVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  float *pfVar11;
  float *pfVar12;
  longlong lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  fVar16 = _DAT_142e36f28;
  lVar1 = *(longlong *)(param_2 + 0x10);
  if (lVar1 == 1) {
    puVar2 = *(undefined8 **)(param_2 + 8);
    uVar4 = puVar2[9];
    param_1[8] = puVar2[8];
    param_1[9] = uVar4;
    uVar4 = *puVar2;
    uVar5 = puVar2[1];
    uVar6 = puVar2[2];
    uVar7 = puVar2[3];
    uVar8 = puVar2[4];
    uVar9 = puVar2[5];
    uVar10 = puVar2[7];
    param_1[6] = puVar2[6];
    param_1[7] = uVar10;
    param_1[4] = uVar8;
    param_1[5] = uVar9;
    param_1[2] = uVar6;
    param_1[3] = uVar7;
    *param_1 = uVar4;
    param_1[1] = uVar5;
    return param_1;
  }
  fVar14 = (float)pub_142e32a70(param_3);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(0,0,&UNK_143069b58);
  }
  fVar14 = (float)(~-(uint)(fVar14 < 0.0) & (uint)fVar14 |
                  (uint)(fVar16 + fVar14) & -(uint)(fVar14 < 0.0));
  pfVar3 = *(float **)(param_2 + 8);
  fVar16 = pfVar3[0x16];
  pfVar11 = pfVar3 + lVar1 * 0x18;
  if (fVar16 <= fVar14) {
    if ((fVar16 <= fVar14) && (fVar17 = pfVar3[0x2e], fVar14 <= fVar17)) {
      pfVar11 = pfVar3 + 0x18;
      pfVar12 = pfVar3;
      goto LAB_140c1eecb;
    }
    if (lVar1 != 2) {
      pfVar12 = pfVar3 + 0x2e;
      lVar13 = 0;
      do {
        if ((*pfVar12 <= fVar14) && (fVar17 = pfVar12[0x18], fVar14 <= fVar17)) {
          pfVar11 = (float *)((longlong)pfVar3 + (0xc0 - lVar13));
          fVar16 = *pfVar12;
          pfVar12 = pfVar12 + -0x16;
          goto LAB_140c1eecb;
        }
        lVar13 = lVar13 + -0x60;
        pfVar12 = pfVar12 + 0x18;
      } while (lVar1 * -0x60 + 0xc0 != lVar13);
    }
    if (pfVar11 == (float *)0x60) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_143069b70);
    }
    fVar15 = pfVar11[-2];
    fVar17 = fVar16 + _DAT_142e36f28;
  }
  else {
    if (pfVar11 == (float *)0x60) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_143069b88);
    }
    fVar15 = pfVar11[-2] + _DAT_142e36f34;
    fVar17 = fVar16;
  }
  fVar16 = fVar15;
  pfVar12 = pfVar11 + -0x18;
  pfVar11 = pfVar3;
LAB_140c1eecb:
  pdb_140c1f040(param_1,fVar14,fVar16,fVar17,pfVar12,pfVar11);
  return param_1;
}

