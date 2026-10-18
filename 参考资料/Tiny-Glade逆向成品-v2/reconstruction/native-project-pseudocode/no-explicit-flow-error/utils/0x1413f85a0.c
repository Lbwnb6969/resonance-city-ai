// VA 0x1413f85a0, PDB extent 179 bytes
// utils::loop_range::LoopRange::new_loop
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/loop_range.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: utils::loop_range::LoopRange::new_loop
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/loop_range.rs
   Extent: 179 */

int * pdb_1413f85a0(int *param_1,int param_2,int param_3,int param_4)

{
  if (param_2 <= -param_4) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_143306158,0x30,&UNK_1433062b8);
  }
  if (param_4 < param_2) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_1433062d0,0x2e,&UNK_143306300);
  }
  if (param_3 < 0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_1433061e8,0x1a,&UNK_143306318);
  }
  if (param_3 <= (int)(param_4 + 1U)) {
    *param_1 = param_2;
    param_1[1] = param_3;
    param_1[2] = param_4;
    if ((uint)(param_3 - param_2) <= param_4 + 1U) {
      return param_1;
    }
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_143306348,0x36,&UNK_143306380);
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc83b0(&UNK_143306220,0x30,&UNK_143306330);
}

