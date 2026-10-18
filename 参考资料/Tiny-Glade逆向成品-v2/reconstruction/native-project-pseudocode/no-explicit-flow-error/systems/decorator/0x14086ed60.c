// VA 0x14086ed60, PDB extent 211 bytes
// system_decorator::ui_systems::ui_place_decorator::show_decorator_icon::closure$0
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/ui_systems/ui_place_decorator.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   system_decorator::ui_systems::ui_place_decorator::show_decorator_icon::closure$0
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/ui_systems/ui_place_decorator.rs
   Extent: 211 */

undefined8 * pdb_14086ed60(undefined8 *param_1,undefined8 *param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  
  pdb_14007ee60();
  pbVar1 = pub_1406abab0(8,8);
  if (pbVar1 != (byte *)0x0) {
    uVar2 = pdb_14086ee40(*(undefined4 *)(param_2 + 2),*(undefined4 *)((longlong)param_2 + 0x14),
                          *param_2);
    *(undefined8 *)pbVar1 = uVar2;
    *param_1 = 1;
    param_1[1] = pbVar1;
    param_1[2] = 1;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc7e11(8,8);
}

