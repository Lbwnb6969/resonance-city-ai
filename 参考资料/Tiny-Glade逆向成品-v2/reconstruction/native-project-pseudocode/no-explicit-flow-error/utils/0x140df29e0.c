// VA 0x140df29e0, PDB extent 49 bytes
// utils::geometry::rectangle::Rectangle2d::as_transformation_and_size
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/rectangle.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   utils::geometry::rectangle::Rectangle2d::as_transformation_and_size
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/rectangle.rs
   Extent: 49 */

undefined4 * pdb_140df29e0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = _UNK_142e37824 ^ uVar2;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar1;
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 4);
  return param_1;
}

