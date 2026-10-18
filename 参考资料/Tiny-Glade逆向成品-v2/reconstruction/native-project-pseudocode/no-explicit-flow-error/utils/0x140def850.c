// VA 0x140def850, PDB extent 402 bytes
// utils::geometry::circle::Circle2d::get_closest_u_from_pos
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/circle.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: utils::geometry::circle::Circle2d::get_closest_u_from_pos
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/circle.rs
   Extent: 402 */

void pdb_140def850(undefined8 *param_1,float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fStack_5c;
  float *pfStack_58;
  code *pcStack_50;
  
  fVar1 = _DAT_142e36f28;
  param_2 = param_2 - (float)*param_1;
  param_3 = param_3 - (float)((ulonglong)*param_1 >> 0x20);
  fVar4 = _DAT_142e36f28 / SQRT(param_3 * param_3 + param_2 * param_2);
  if ((int)fVar4 - 1U < 0x7fffff || (int)ABS(fVar4) - 0x800000U < 0x7f000000 && (int)fVar4 >= 0) {
    pub_142e32850((int)fVar4 < 0,param_3 * fVar4);
    fVar2 = (float)pub_142e32980();
    fVar4 = _DAT_142f57bcc;
    fVar3 = (float)pub_142e32a70();
    fVar4 = fVar1 - (fVar2 - (float)(~-(uint)(fVar3 < 0.0) & (uint)fVar3 |
                                    (uint)(fVar3 + fVar4) & -(uint)(fVar3 < 0.0))) / fVar4;
    if (NAN(fVar4)) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc83b0(&UNK_1433ed204,0x1d,&UNK_1433ed250);
    }
    fVar4 = (float)pub_142e32a70(fVar4,fVar1);
    fStack_5c = (float)(~-(uint)(fVar4 < 0.0) & (uint)fVar4 |
                       (uint)(fVar4 + fVar1) & -(uint)(fVar4 < 0.0));
    if ((fStack_5c < 0.0) || (fVar1 < fStack_5c)) {
      pfStack_58 = &fStack_5c;
      pcStack_50 = pdb_140f70fc0;
                    /* WARNING: Subroutine does not return */
      pdb_142dc83d0(&UNK_1433ecdc8,&pfStack_58,&UNK_1431ff840);
    }
  }
  return;
}

