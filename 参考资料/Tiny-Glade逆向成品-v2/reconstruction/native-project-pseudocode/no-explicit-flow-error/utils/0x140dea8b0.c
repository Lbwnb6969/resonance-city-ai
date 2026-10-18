// VA 0x140dea8b0, PDB extent 648 bytes
// utils::natural_cubic::solve_tridiagonal
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/natural_cubic.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: utils::natural_cubic::solve_tridiagonal
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/natural_cubic.rs
   Extent: 648 */

float * pdb_140dea8b0(ulonglong param_1,longlong param_2,ulonglong param_3,float *param_4,
                     ulonglong param_5,float *param_6,ulonglong param_7,float *param_8,
                     ulonglong param_9)

{
  float fVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  float *pfVar4;
  ulonglong uVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  
  uVar5 = param_9 * 4;
  puVar2 = *(ulonglong **)(param_1 + 0x10);
  uVar3 = puVar2[4] & 0xfffffffffffffffc;
  if ((uVar3 < *puVar2) || (uVar3 - *puVar2 <= uVar5 && uVar5 - (uVar3 - *puVar2) != 0)) {
    uVar3 = param_1;
    pfVar4 = (float *)pdb_142dc60a0(param_1,4);
    if (pfVar4 == (float *)0x0) goto LAB_140deaaf2;
  }
  else {
    pfVar4 = (float *)(uVar3 + param_9 * -4);
    puVar2[4] = (ulonglong)pfVar4;
  }
  if (param_9 != 0) {
    pub_142e32780(pfVar4,0);
  }
  puVar2 = *(ulonglong **)(param_1 + 0x10);
  uVar3 = puVar2[4] & 0xfffffffffffffffc;
  if ((uVar3 < *puVar2) || (uVar3 - *puVar2 < uVar5)) {
    pfVar6 = (float *)pdb_142dc60a0(param_1,4);
    uVar3 = param_1;
    if (pfVar6 == (float *)0x0) {
LAB_140deaaf2:
      param_5 = uVar3;
      fVar7 = (float)pdb_142dc6350();
LAB_140deaaf7:
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(fVar7,param_5,&UNK_1431feff0);
    }
  }
  else {
    pfVar6 = (float *)(uVar3 + param_9 * -4);
    puVar2[4] = (ulonglong)pfVar6;
  }
  if (param_9 == 0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(0,0,&UNK_1431fefd8);
  }
  pub_142e32780(pfVar6,0);
  fVar7 = *param_4;
  *pfVar4 = *param_6 / fVar7;
  *pfVar6 = *param_8 / fVar7;
  if (param_9 != 1) {
    uVar5 = param_9 - 1;
    uVar3 = 1;
    do {
      if (param_5 == uVar3) goto LAB_140deaaf7;
      if (param_3 == uVar3) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(param_3,param_3,&UNK_1431ff008);
      }
      fVar1 = *(float *)(param_2 + uVar3 * 4);
      fVar7 = param_4[uVar3] - pfVar4[uVar3 - 1] * fVar1;
      fVar8 = 0.0;
      if (uVar3 < uVar5) {
        if (param_7 <= uVar3) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar3,param_7,&UNK_1431ff020);
        }
        fVar8 = param_6[uVar3] / fVar7;
      }
      pfVar4[uVar3] = fVar8;
      pfVar6[uVar3] = (param_8[uVar3] - fVar1 * pfVar6[uVar3 - 1]) / fVar7;
      uVar3 = uVar3 + 1;
    } while (param_9 != uVar3);
    fVar7 = pfVar6[param_9 - 1];
    if ((uVar5 & 1) != 0) {
      uVar5 = param_9 - 2;
      fVar7 = pfVar6[param_9 - 2] - fVar7 * pfVar4[param_9 - 2];
      pfVar6[param_9 - 2] = fVar7;
    }
    if (param_9 != 2) {
      do {
        fVar7 = pfVar6[uVar5 - 1] - fVar7 * pfVar4[uVar5 - 1];
        pfVar6[uVar5 - 1] = fVar7;
        uVar3 = uVar5 - 2;
        fVar7 = pfVar6[uVar5 - 2] - fVar7 * pfVar4[uVar5 - 2];
        pfVar6[uVar5 - 2] = fVar7;
        uVar5 = uVar3;
      } while (uVar3 != 0);
    }
  }
  return pfVar6;
}

