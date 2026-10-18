// VA 0x140a36ba0, PDB extent 1841 bytes
// country_core::systems::main_camera::camera_snapshot
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/main_camera.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::systems::main_camera::camera_snapshot
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/main_camera.rs
   Extent: 1841 */

void pdb_140a36ba0(undefined8 param_1,longlong *param_2,undefined8 param_3,longlong *param_4,
                  longlong *param_5)

{
  ulonglong uVar1;
  
  *(undefined4 *)param_4[2] = *(undefined4 *)((longlong)param_4 + 0x1c);
  uVar1 = (ulonglong)*(uint *)(*param_4 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000140a36c1a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_14303b5b8 + *(int *)(&UNK_14303b5b8 + uVar1 * 4)))
            (*(undefined4 *)(*param_4 + 0x1c),
             *(float *)(*param_2 + 0x28) * *(float *)(*param_5 + 0xbc),uVar1,
             &UNK_14303b5b8 + *(int *)(&UNK_14303b5b8 + uVar1 * 4));
  return;
}

