// VA 0x140df1c30, PDB extent 70 bytes
// utils::geometry::rectangle::Rectangle2d::orientation_mat3
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/rectangle.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: utils::geometry::rectangle::Rectangle2d::orientation_mat3
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/rectangle.rs
   Extent: 70 */

void pdb_140df1c30(ulonglong *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = param_2[1];
  *param_1 = (ulonglong)*param_2;
  *(uint *)(param_1 + 1) = uVar2;
  uVar2 = uVar2 ^ _DAT_142e37820;
  uVar1 = *param_2;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0x3f80000000000000;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  *(uint *)(param_1 + 3) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  *(uint *)(param_1 + 4) = uVar1;
  return;
}

