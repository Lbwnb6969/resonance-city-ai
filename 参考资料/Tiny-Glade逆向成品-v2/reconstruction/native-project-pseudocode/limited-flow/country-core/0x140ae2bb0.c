// VA 0x140ae2bb0, PDB extent 350 bytes
// country_core::systems::mod_key::update_mod_key_state
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/mod_key.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::systems::mod_key::update_mod_key_state
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/mod_key.rs
   Extent: 350 */

void pdb_140ae2bb0(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  longlong lVar2;
  
  lVar2 = *param_1;
  uVar1 = *(uint *)(lVar2 + 0x80);
  *(undefined4 *)param_2[2] = *(undefined4 *)((longlong)param_2 + 0x1c);
  *(bool *)*param_2 = uVar1 < 3;
                    /* WARNING: Could not recover jumptable at 0x000140ae2bf9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_14304fae8 + *(int *)(&UNK_14304fae8 + (ulonglong)*(uint *)(lVar2 + 0x80) * 4)))
            (lVar2,&UNK_14304fae8 +
                   *(int *)(&UNK_14304fae8 + (ulonglong)*(uint *)(lVar2 + 0x80) * 4));
  return;
}

