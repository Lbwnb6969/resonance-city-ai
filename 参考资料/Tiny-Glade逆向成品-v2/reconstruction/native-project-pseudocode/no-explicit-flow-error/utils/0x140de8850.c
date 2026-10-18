// VA 0x140de8850, PDB extent 154 bytes
// utils::radical_inverse
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: utils::radical_inverse
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/lib.rs
   Extent: 154 */

float pdb_140de8850(uint param_1,uint param_2)

{
  ulonglong uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (param_1 == 0) {
    return 0.0;
  }
  if (param_2 != 0) {
    fVar3 = _DAT_142e36f28 / (float)param_2;
    fVar2 = 0.0;
    fVar4 = fVar3;
    do {
      uVar1 = (ulonglong)param_1;
      fVar5 = (float)param_1 * fVar3;
      param_1 = (uint)(longlong)fVar5;
      if (fVar5 < 0.0) {
        param_1 = 0;
      }
      if (_DAT_142e46a48 < fVar5) {
        param_1 = 0xffffffff;
      }
      fVar2 = fVar2 + (float)(uVar1 % (ulonglong)param_2) * fVar4;
      fVar4 = fVar4 * fVar3;
    } while (param_1 != 0);
    return fVar2;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8510(&UNK_1431fecc8);
}

