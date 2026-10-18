// VA 0x140df3e10, PDB extent 202 bytes
// utils::geometry::rectangle::Rectangle2d::get_point
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/rectangle.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: utils::geometry::rectangle::Rectangle2d::get_point
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/rectangle.rs
   Extent: 202 */

float pdb_140df3e10(undefined8 *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  float fVar2;
  float fVar3;
  float afStack_20 [4];
  float fStack_10;
  undefined8 uStack_c;
  float fStack_4;
  
  if (4 < param_2) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_1431ffa70,0x18,&UNK_1431ffd10);
  }
  fVar2 = (float)param_1[2];
  fVar3 = (float)((ulonglong)param_1[2] >> 0x20);
  if (0.0 < fVar3 * fVar2) {
    uVar1 = 0;
    if (param_2 != 4) {
      uVar1 = param_2;
    }
    afStack_20[0] = fVar2 * _UNK_143057f34;
    afStack_20[1] = fVar3 * _DAT_143057f30;
    afStack_20[2] = fVar2 * _UNK_143057f34;
    afStack_20[3] = fVar3 * _UNK_143057f38;
    fStack_10 = fVar2 * _UNK_143057f3c;
    uStack_c = CONCAT44(fVar2 * _UNK_143057f3c,fVar3 * _UNK_143057f38);
    fStack_4 = fVar3 * _DAT_143057f30;
    return *(float *)(param_1 + 1) +
           (float)((ulonglong)*(undefined8 *)(afStack_20 + uVar1 * 2) >> 0x20) *
           (float)(_UNK_142e37824 ^ (uint)((ulonglong)*param_1 >> 0x20)) +
           (float)*(undefined8 *)(afStack_20 + uVar1 * 2) * (float)*param_1;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc83b0(&UNK_1431ffa1a,0x23,&UNK_1431ffc38);
}

