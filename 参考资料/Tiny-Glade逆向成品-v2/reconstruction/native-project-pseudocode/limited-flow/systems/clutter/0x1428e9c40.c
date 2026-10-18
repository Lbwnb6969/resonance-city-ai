// VA 0x1428e9c40, PDB extent 934 bytes
// system_clutter::autoclutter::add_autoclutter_on_windows::add_autoclutter_on_windows
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/clutter/src/autoclutter/add_autoclutter_on_windows.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x0001428e9df5 */
/* WARNING: Exceeded maximum restarts with more pending */
/* Matched PDB project procedure:
   system_clutter::autoclutter::add_autoclutter_on_windows::add_autoclutter_on_windows
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/clutter/src/autoclutter/add_autoclutter_on_windows.rs
   Extent: 934 */

void pdb_1428e9c40(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  *(undefined4 *)param_4[2] = *(undefined4 *)((longlong)param_4 + 0x1c);
  lVar1 = *param_4;
  lVar2 = *(longlong *)(lVar1 + 0x10);
  *(undefined8 *)(lVar1 + 0x10) = 0;
  if (lVar2 != 0) {
    if (**(char **)(lVar1 + 8) != '\x06') {
      **(undefined4 **)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0x1c);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
    }
  }
  return;
}

