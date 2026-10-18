// VA 0x1413f84e0, PDB extent 179 bytes
// utils::loop_range::LoopRange::new_line
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/loop_range.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: utils::loop_range::LoopRange::new_line
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/loop_range.rs
   Extent: 179 */

int * pdb_1413f84e0(int *param_1,int param_2,int param_3,uint param_4)

{
  if (param_2 <= (int)-param_4) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_143306158,0x30,&UNK_143306188);
  }
  if ((int)param_4 <= param_2) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_1433061a0,0x2d,&UNK_1433061d0);
  }
  if (param_3 < 0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_1433061e8,0x1a,&UNK_143306208);
  }
  if (param_3 <= (int)(param_4 + 1)) {
    *param_1 = param_2;
    param_1[1] = param_3;
    param_1[2] = param_4;
    if ((uint)(param_3 - param_2) <= param_4) {
      return param_1;
    }
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_143306268,0x32,&UNK_1433062a0);
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc83b0(&UNK_143306220,0x30,&UNK_143306250);
}

