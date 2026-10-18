// VA 0x140df0700, PDB extent 215 bytes
// utils::geometry::rectangle::Rectangle2d::get_point_u
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/rectangle.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: utils::geometry::rectangle::Rectangle2d::get_point_u
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/rectangle.rs
   Extent: 215 */

void pdb_140df0700(longlong param_1,undefined8 param_2)

{
  float fVar1;
  float fVar2;
  float fStack_14;
  float *pfStack_10;
  code *pcStack_8;
  
  fStack_14 = 0.0;
  switch(param_2) {
  case 0:
    goto code_r0x000140df0773;
  case 1:
    fStack_14 = *(float *)(param_1 + 0x14);
    fVar1 = *(float *)(param_1 + 0x10) + fStack_14;
    break;
  case 2:
    fStack_14 = *(float *)(param_1 + 0x14) + *(float *)(param_1 + 0x10);
    fVar1 = fStack_14 + fStack_14;
    goto code_r0x000140df076f;
  case 3:
    fVar2 = (float)*(undefined8 *)(param_1 + 0x10);
    fVar1 = (float)((ulonglong)*(undefined8 *)(param_1 + 0x10) >> 0x20);
    fStack_14 = fVar1 * _UNK_1431ff8a0 + fVar2;
    fVar1 = fVar2 * _UNK_1431ff8a4 + fVar1;
    break;
  case 4:
    fStack_14 = _DAT_142e36f28;
    goto code_r0x000140df0773;
  default:
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_1431ffa70,0x18,&UNK_1431ffa88);
  }
  fVar1 = fVar1 + fVar1;
code_r0x000140df076f:
  fStack_14 = fStack_14 / fVar1;
code_r0x000140df0773:
  if ((0.0 <= fStack_14) && (fStack_14 <= _DAT_142e36f28)) {
    return;
  }
  pfStack_10 = &fStack_14;
  pcStack_8 = pdb_140f70fc0;
                    /* WARNING: Subroutine does not return */
  pdb_142dc83d0(&UNK_1433ecdc8,&pfStack_10,&UNK_1431ffaa0);
}

