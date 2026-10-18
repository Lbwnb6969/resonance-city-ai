// VA 0x1408de710, PDB extent 1695 bytes
// system_decorator::derive_decorator_subtype::derive_decorator_subtype
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/derive_decorator_subtype.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   system_decorator::derive_decorator_subtype::derive_decorator_subtype
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/derive_decorator_subtype.rs
   Extent: 1695 */

void pdb_1408de710(undefined8 *param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001408de748. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_14301b068 + *(int *)(&UNK_14301b068 + *(longlong *)*param_1 * 4)))
            (&UNK_14301b068,param_2,
             &UNK_14301b068 + *(int *)(&UNK_14301b068 + *(longlong *)*param_1 * 4));
  return;
}

