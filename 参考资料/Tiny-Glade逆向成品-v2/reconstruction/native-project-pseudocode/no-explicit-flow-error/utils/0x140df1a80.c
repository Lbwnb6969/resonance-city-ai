// VA 0x140df1a80, PDB extent 262 bytes
// utils::geometry::rectangle::Rectangle2d::get_edge_id_at_u
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/rectangle.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: utils::geometry::rectangle::Rectangle2d::get_edge_id_at_u
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/rectangle.rs
   Extent: 262 */

byte pdb_140df1a80(longlong param_1,float param_2)

{
  float fVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fStack_3c;
  float *pfStack_38;
  code *pcStack_30;
  
  fVar1 = *(float *)(param_1 + 0x14);
  fVar3 = fVar1 + *(float *)(param_1 + 0x10);
  fVar5 = fVar3 + fVar3;
  fVar4 = fVar1 / fVar5;
  fStack_3c = fVar4;
  if ((0.0 <= fVar4) && (fVar4 <= _DAT_142e36f28)) {
    fVar3 = fVar3 / fVar5;
    fStack_3c = fVar3;
    if ((0.0 <= fVar3) && (fVar3 <= _DAT_142e36f28)) {
      fStack_3c = (fVar1 + fVar1 + *(float *)(param_1 + 0x10)) / fVar5;
      if ((0.0 <= fStack_3c) && (fStack_3c <= _DAT_142e36f28)) {
        if ((param_2 < 0.0) || (fVar4 < param_2)) {
          if ((param_2 < fVar4) || (bVar2 = 1, fVar3 < param_2)) {
            return -(param_2 <= fStack_3c && fVar3 <= param_2) & 1U ^ 3;
          }
        }
        else {
          bVar2 = 0;
        }
        return bVar2;
      }
    }
  }
  pfStack_38 = &fStack_3c;
  pcStack_30 = pdb_140f70fc0;
                    /* WARNING: Subroutine does not return */
  pdb_142dc83d0(&UNK_1433ecdc8,&pfStack_38,&UNK_1431ffaa0);
}

