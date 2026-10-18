// VA 0x140872b10, PDB extent 65 bytes
// system_decorator::ui_systems::ui_decorator_affordance_dispatch::ui_dispatch_decorator_affordance::closure$5
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/ui_systems/ui_decorator_affordance_dispatch.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_decorator::ui_systems::ui_decorator_affordance_dispatch::ui_dispatch_decorator_affordance::closure$5
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/ui_systems/ui_decorator_affordance_dispatch.rs
   Extent: 65 */

undefined8 pdb_140872b10(undefined8 *param_1)

{
  byte abStack_18 [8];
  float fStack_10;
  
  pdb_140c45a20(abStack_18,*(undefined8 *)*param_1,*(undefined4 *)param_1[1]);
  return CONCAT71((int7)((ulonglong)param_1[2] >> 8),
                  fStack_10 < *(float *)param_1[2] + _DAT_142e36f28 & abStack_18[0]);
}

