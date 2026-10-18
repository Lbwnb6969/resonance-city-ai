// VA 0x141c60ca0, PDB extent 38520 bytes
// country_core::systems::save::save_thread::execute_save_cmd
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/save/save_thread.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::systems::save::save_thread::execute_save_cmd
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/save/save_thread.rs
   Extent: 38520 */

void pdb_141c60ca0(ulonglong *param_1)

{
  longlong lVar1;
  undefined8 unaff_XMM6_Qa;
  undefined8 unaff_XMM6_Qb;
  undefined8 unaff_XMM7_Qa;
  undefined8 unaff_XMM7_Qb;
  
  lVar1 = pdb_142d7c6d0();
  lVar1 = -lVar1;
  *(undefined8 *)(&stack0x000015e0 + lVar1) = unaff_XMM7_Qa;
  *(undefined8 *)(&stack0x000015e8 + lVar1) = unaff_XMM7_Qb;
  *(undefined8 *)(&stack0x000015d0 + lVar1) = unaff_XMM6_Qa;
  *(undefined8 *)(&stack0x000015d8 + lVar1) = unaff_XMM6_Qb;
  *(undefined1 **)(((ulonglong)(&stack0xffffffffffffffc0 + lVar1) & 0xffffffffffffff80) + 0x1600) =
       &stack0x00000040 + lVar1;
  *(undefined8 *)(&stack0x000015c8 + lVar1) = 0xfffffffffffffffe;
  lVar1 = 5;
  if (2 < *param_1) {
    lVar1 = *param_1 - 3;
  }
                    /* WARNING: Could not recover jumptable at 0x000141c60d11. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_1433a2a8c + *(int *)(&UNK_1433a2a8c + lVar1 * 4)))();
  return;
}

