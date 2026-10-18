// VA 0x140dea810, PDB extent 67 bytes
// utils::natural_cubic::SplineSegment2D::tangent_at_local_t
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/natural_cubic.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: utils::natural_cubic::SplineSegment2D::tangent_at_local_t
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/natural_cubic.rs
   Extent: 67 */

undefined8 pdb_140dea810(longlong param_1,float param_2)

{
  float fVar1;
  
  fVar1 = (float)((ulonglong)*(undefined8 *)(param_1 + 0xc) >> 0x20) *
          (float)((ulonglong)_DAT_1431fee90 >> 0x20);
  return CONCAT44(fVar1,(fVar1 * param_2 +
                        (float)*(undefined8 *)(param_1 + 0xc) * (float)_DAT_1431fee90) * param_2 +
                        *(float *)(param_1 + 8));
}

