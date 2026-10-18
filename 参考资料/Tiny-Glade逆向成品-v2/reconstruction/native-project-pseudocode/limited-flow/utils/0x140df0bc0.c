// VA 0x140df0bc0, PDB extent 606 bytes
// utils::geometry::rectangle::impl$1::get_pos_at_u::closure$0
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/rectangle.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: utils::geometry::rectangle::impl$1::get_pos_at_u::closure$0
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/rectangle.rs
   Extent: 606 */

void pdb_140df0bc0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000140df0beb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_1431ffd74 + *(int *)(&UNK_1431ffd74 + param_3 * 4)))
            (0,&UNK_1431ffd74 + *(int *)(&UNK_1431ffd74 + param_3 * 4),0);
  return;
}

