// VA 0x140df2970, PDB extent 106 bytes
// utils::geometry::rectangle::Rectangle2d::new_centered_axis_aligned
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/rectangle.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: utils::geometry::rectangle::Rectangle2d::new_centered_axis_aligned
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/rectangle.rs
   Extent: 106 */

undefined1 (*) [16]
pdb_140df2970(undefined1 (*param_1) [16],uint param_2,uint param_3,undefined8 param_4)

{
  if (0x7f7fffff < (param_2 & 0x7fffffff)) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_1431ffba0,0x23,param_4);
  }
  if ((param_3 & 0x7fffffff) < 0x7f800000) {
    *(uint *)param_1[1] = param_2;
    *(uint *)(param_1[1] + 4) = param_3;
    *param_1 = ZEXT416(_DAT_142e36f28);
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc83b0(&UNK_1431ffbc3,0x24,param_4);
}

