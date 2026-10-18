// VA 0x140dea610, PDB extent 171 bytes
// utils::wall_space::impl$1::project_clamp
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/wall_space.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: utils::wall_space::impl$1::project_clamp
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/wall_space.rs
   Extent: 171 */

float pdb_140dea610(int *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  undefined4 uStack_40;
  float fStack_3c;
  undefined4 *puStack_38;
  code *pcStack_30;
  float *pfStack_28;
  code *pcStack_20;
  
  if (*param_1 == 1) {
    fVar2 = (float)param_1[1];
    fVar1 = (float)pub_142e32a70(param_1,fVar2);
    return (float)(~-(uint)(fVar1 < 0.0) & (uint)fVar1 |
                  (uint)(fVar2 + fVar1) & -(uint)(fVar1 < 0.0));
  }
  fStack_3c = (float)param_1[1];
  if (0.0 <= fStack_3c) {
    fVar2 = 0.0;
    if (0.0 <= param_2) {
      fVar2 = param_2;
    }
    if (fVar2 <= fStack_3c) {
      fStack_3c = fVar2;
    }
    return fStack_3c;
  }
  uStack_40 = 0;
  puStack_38 = &uStack_40;
  pcStack_30 = pdb_140f705d0;
  pfStack_28 = &fStack_3c;
  pcStack_20 = pdb_140f705d0;
                    /* WARNING: Subroutine does not return */
  pdb_142dc83d0(&UNK_1431fed20,&puStack_38,&UNK_1431fedc0);
}

