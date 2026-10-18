// VA 0x140dea770, PDB extent 71 bytes
// utils::wall_space::impl$1::distance
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/wall_space.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: utils::wall_space::impl$1::distance
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/wall_space.rs
   Extent: 71 */

ulonglong pdb_140dea770(int *param_1,undefined8 param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if (*param_1 == 1) {
    fVar1 = (float)((uint)((float)param_2 - param_3) & _DAT_142e377e0);
    fVar2 = (float)((uint)((float)param_1[1] - fVar1) & _DAT_142e377e0);
    fVar3 = fVar2;
    if (fVar1 <= fVar2) {
      fVar3 = fVar1;
    }
    return (ulonglong)(~-(uint)NAN(fVar1) & (uint)fVar3 | -(uint)NAN(fVar1) & (uint)fVar2);
  }
  return CONCAT44((uint)((ulonglong)param_2 >> 0x20) & _UNK_142e377e4,
                  (uint)((float)param_2 - param_3) & _DAT_142e377e0);
}

