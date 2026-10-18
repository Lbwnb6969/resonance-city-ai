// VA 0x140a3da90, PDB extent 40 bytes
// country_core::systems::steam::SteamClientResource::input_show_binding_panel
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/steam/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::steam::SteamClientResource::input_show_binding_panel
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/steam/mod.rs
   Extent: 40 */

void pdb_140a3da90(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  lVar1 = pub_142e320b0();
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000142e320c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    SteamAPI_ISteamInput_ShowBindingPanel(lVar1,*param_2);
    return;
  }
  return;
}

