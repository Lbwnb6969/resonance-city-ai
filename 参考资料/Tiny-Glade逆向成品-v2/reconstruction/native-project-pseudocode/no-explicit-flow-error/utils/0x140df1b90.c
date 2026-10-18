// VA 0x140df1b90, PDB extent 121 bytes
// utils::geometry::rectangle::Rectangle2d::new_axis_aligned
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/rectangle.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: utils::geometry::rectangle::Rectangle2d::new_axis_aligned
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/rectangle.rs
   Extent: 121 */

ulonglong *
pdb_140df1b90(ulonglong *param_1,uint param_2,uint param_3,undefined4 param_4,undefined4 param_5,
             undefined8 param_6)

{
  if (0x7f7fffff < (param_2 & 0x7fffffff)) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_1431ffba0,0x23,param_6);
  }
  if ((param_3 & 0x7fffffff) < 0x7f800000) {
    *param_1 = (ulonglong)_DAT_142e36f28;
    *(uint *)(param_1 + 2) = param_2;
    *(uint *)((longlong)param_1 + 0x14) = param_3;
    *(undefined4 *)(param_1 + 1) = param_4;
    *(undefined4 *)((longlong)param_1 + 0xc) = param_5;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc83b0(&UNK_1431ffbc3,0x24,param_6);
}

