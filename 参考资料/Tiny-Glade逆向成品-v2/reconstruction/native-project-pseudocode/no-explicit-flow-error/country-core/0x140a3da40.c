// VA 0x140a3da40, PDB extent 70 bytes
// country_core::systems::steam::AppSteamIntegration::user_id
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/steam/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::systems::steam::AppSteamIntegration::user_id
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/steam/mod.rs
   Extent: 70 */

undefined8 pdb_140a3da40(undefined8 *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  undefined8 uVar4;
  longlong *plStack_18;
  undefined8 uStack_10;
  
  uStack_10 = pub_142e32090();
  plVar2 = (longlong *)*param_1;
  LOCK();
  lVar1 = *plVar2;
  *plVar2 = *plVar2 + 1;
  UNLOCK();
  if (*plVar2 != 0 && SCARRY8(lVar1,1) == *plVar2 < 0) {
    plStack_18 = plVar2;
    uVar4 = pub_142e320a0(uStack_10);
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      pdb_140cb1c10(&plStack_18);
    }
    return uVar4;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}

