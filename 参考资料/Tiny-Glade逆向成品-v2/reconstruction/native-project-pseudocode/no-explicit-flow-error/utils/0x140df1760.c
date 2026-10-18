// VA 0x140df1760, PDB extent 123 bytes
// utils::geometry::rectangle::Rectangle2d::get_edge_normal
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/rectangle.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: utils::geometry::rectangle::Rectangle2d::get_edge_normal
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/rectangle.rs
   Extent: 123 */

undefined8 pdb_140df1760(undefined8 *param_1,ulonglong param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (3 < param_2) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_1431ffb58,0x2b,&UNK_1431ffb88);
  }
  fVar1 = _DAT_1431ff8d0;
  fVar2 = _UNK_1431ff8d4;
  fVar3 = _UNK_1431ff8d8;
  fVar4 = _UNK_1431ff8dc;
  if (param_2 != 3) {
    fVar1 = *(float *)(&UNK_1431ffd34 + param_2 * 4);
    fVar2 = *(float *)(&UNK_1431ffd34 + param_2 * 4);
    fVar3 = *(float *)(&UNK_1431ffd28 + param_2 * 4);
    fVar4 = *(float *)(&UNK_1431ffd28 + param_2 * 4);
  }
  fVar5 = (float)*param_1;
  fVar6 = (float)((ulonglong)*param_1 >> 0x20);
  return CONCAT44(fVar5 * fVar4 + fVar6 * fVar2,
                  (float)(_UNK_142e37824 ^ (uint)fVar6) * fVar3 + fVar5 * fVar1);
}

