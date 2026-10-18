// VA 0x1428d70e0, PDB extent 108 bytes
// utils::angle_range::AngleRange::from_min_and_len
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/angle_range.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: utils::angle_range::AngleRange::from_min_and_len
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/angle_range.rs
   Extent: 108 */

uint pdb_1428d70e0(undefined8 param_1,float param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = _DAT_142f57bcc;
  if (param_2 <= _DAT_142f57bcc) {
    fVar2 = (float)pub_142e32a70();
    return ~-(uint)(fVar2 < 0.0) & (uint)fVar2 | (uint)(fVar1 + fVar2) & -(uint)(fVar2 < 0.0);
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc83b0(&UNK_1435b02f0,0x1f,&UNK_1435b0330);
}

