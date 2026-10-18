// VA 0x14093a7d0, PDB extent 90 bytes
// country_core::systems::render_loop::vermeer::VermeerState::into_disable_hold
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/vermeer.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::render_loop::vermeer::VermeerState::into_disable_hold
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/vermeer.rs
   Extent: 90 */

undefined8 * pdb_14093a7d0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (*(short *)(param_2 + 3) != 2) {
    *(undefined1 *)((longlong)param_2 + 0x1e) = 0;
    uVar1 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar1;
    param_1[2] = param_2[2];
    *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
    *(undefined2 *)((longlong)param_1 + 0x1c) = *(undefined2 *)((longlong)param_2 + 0x1c);
    *(undefined1 *)((longlong)param_1 + 0x1e) = *(undefined1 *)((longlong)param_2 + 0x1e);
    *(undefined1 *)((longlong)param_1 + 0x1f) = *(undefined1 *)((longlong)param_2 + 0x1f);
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc83d0(&UNK_1430230f8,0x2f,&UNK_143023148);
}

