// VA 0x140a3dac0, PDB extent 236 bytes
// country_core::systems::steam::SteamClientResource::show_floating_gamepad_text_input
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/steam/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::steam::SteamClientResource::show_floating_gamepad_text_input
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/steam/mod.rs
   Extent: 236 */

void pdb_140a3dac0(undefined8 *param_1)

{
  byte *pbVar1;
  longlong lVar2;
  code *pcVar3;
  char cVar4;
  byte *arg0;
  longlong *plVar5;
  longlong *plStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uStack_20 = 0xfffffffffffffffe;
  cVar4 = DAT_143cb2cc5;
  if (DAT_143cb2cc5 == '\0') {
    uStack_28 = pub_142e31f10();
    plVar5 = (longlong *)*param_1;
    LOCK();
    lVar2 = *plVar5;
    *plVar5 = *plVar5 + 1;
    UNLOCK();
    if (*plVar5 == 0 || SCARRY8(lVar2,1) != *plVar5 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    plStack_30 = plVar5;
    arg0 = (byte *)pdb_140a62c80(&plStack_30);
    if (arg0 != (byte *)0xffffffffffffffff) {
      LOCK();
      pbVar1 = arg0 + 8;
      *(longlong *)pbVar1 = *(longlong *)pbVar1 + -1;
      UNLOCK();
      if (*(longlong *)pbVar1 == 0) {
        pub_1406abac0(arg0,0xe8,8);
      }
    }
    cVar4 = pub_142e32010(uStack_28,1,0,0,0x500,400,plVar5);
    LOCK();
    *plStack_30 = *plStack_30 + -1;
    UNLOCK();
    if (*plStack_30 == 0) {
      pdb_140cb1c10(&plStack_30);
    }
  }
  DAT_143cb2cc5 = cVar4;
  return;
}

