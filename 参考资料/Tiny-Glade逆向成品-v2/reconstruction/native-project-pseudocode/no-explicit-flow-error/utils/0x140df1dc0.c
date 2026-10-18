// VA 0x140df1dc0, PDB extent 193 bytes
// utils::geometry::rectangle::Rectangle2d::get_corner_normal
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/rectangle.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: utils::geometry::rectangle::Rectangle2d::get_corner_normal
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/rectangle.rs
   Extent: 193 */

undefined8 pdb_140df1dc0(undefined8 *param_1,undefined8 param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar2 = _DAT_142e36f28;
  fVar3 = _DAT_142e36f34;
  switch(param_2) {
  case 0:
    fVar2 = _DAT_142e36f34;
    break;
  case 1:
    fVar2 = _DAT_142e36f34;
    fVar3 = _DAT_142e36f28;
    break;
  case 2:
    fVar3 = _DAT_142e36f28;
    break;
  case 3:
    break;
  default:
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_1431ffbe7,0x1f,&UNK_1431ffc08);
  }
  fVar4 = (float)*param_1;
  fVar5 = (float)((ulonglong)*param_1 >> 0x20);
  fVar1 = (float)(_UNK_142e37824 ^ (uint)fVar5) * fVar3 + fVar4 * fVar2;
  fVar2 = fVar4 * fVar3 + fVar5 * fVar2;
  return CONCAT44(fVar2,fVar1 * (_DAT_142e36f28 / SQRT(fVar2 * fVar2 + fVar1 * fVar1)));
}

