// VA 0x140df43c0, PDB extent 46 bytes
// utils::geometry::rectangle::Rectangle3d::translate
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/rectangle.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: utils::geometry::rectangle::Rectangle3d::translate
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/rectangle.rs
   Extent: 46 */

void pdb_140df43c0(longlong param_1,float *param_2)

{
  *(ulonglong *)(param_1 + 8) =
       CONCAT44((float)((ulonglong)*(undefined8 *)(param_1 + 8) >> 0x20) + param_2[2],
                (float)*(undefined8 *)(param_1 + 8) + *param_2);
  *(ulonglong *)(param_1 + 0x18) =
       CONCAT44(param_2[1] + (float)((ulonglong)*(undefined8 *)(param_1 + 0x18) >> 0x20),
                param_2[1] + (float)*(undefined8 *)(param_1 + 0x18));
  return;
}

