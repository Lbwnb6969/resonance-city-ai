// VA 0x1413f8660, PDB extent 118 bytes
// utils::loop_range::LoopRange::subslice
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/loop_range.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: utils::loop_range::LoopRange::subslice
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/loop_range.rs
   Extent: 118 */

undefined8 * pdb_1413f8660(undefined8 *param_1,int *param_2,ulonglong param_3,ulonglong param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *param_2;
  iVar2 = param_2[1];
  if ((ulonglong)(longlong)(iVar2 - iVar1) <= param_3) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_143306398,0x21,&UNK_1433063c0);
  }
  if (param_4 <= (ulonglong)(longlong)(iVar2 - iVar1)) {
    iVar3 = (int)param_4 + iVar1;
    if (iVar2 <= iVar3) {
      iVar3 = iVar2;
    }
    param_2[1] = iVar3;
    *param_2 = (int)param_3 + iVar1;
    *(int *)(param_1 + 1) = param_2[2];
    *param_1 = *(undefined8 *)param_2;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc83b0(&UNK_1433063d8,0x20,&UNK_1433063f8);
}

