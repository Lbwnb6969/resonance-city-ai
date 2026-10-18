// VA 0x140a430e0, PDB extent 78 bytes
// country_core::systems::steam::SteamOverlayOpenResources::can_use_overlay
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/steam/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::steam::SteamOverlayOpenResources::can_use_overlay
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/steam/mod.rs
   Extent: 78 */

bool pdb_140a430e0(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  code *pcVar4;
  longlong *plStack_20;
  undefined8 uStack_18;
  
  puVar2 = *(undefined8 **)(param_1 + 0x20);
  if (puVar2 != (undefined8 *)0x0) {
    uStack_18 = pub_142e31f10();
    plVar3 = (longlong *)*puVar2;
    LOCK();
    lVar1 = *plVar3;
    *plVar3 = *plVar3 + 1;
    UNLOCK();
    if (*plVar3 == 0 || SCARRY8(lVar1,1) != *plVar3 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    plStack_20 = plVar3;
    pub_142e31e90(uStack_18);
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      pdb_140cb1c10(&plStack_20);
    }
  }
  return puVar2 != (undefined8 *)0x0;
}

