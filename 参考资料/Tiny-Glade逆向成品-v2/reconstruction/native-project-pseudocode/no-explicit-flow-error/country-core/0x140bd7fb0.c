// VA 0x140bd7fb0, PDB extent 242 bytes
// country_core::systems::steam::workshop_clutter::steam_download_state
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/steam/workshop_clutter.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::steam::workshop_clutter::steam_download_state
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/steam/workshop_clutter.rs
   Extent: 242 */

undefined8 * pdb_140bd7fb0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  uint uVar6;
  undefined8 uVar7;
  longlong *plStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar7 = pub_142e32030();
  plVar2 = (longlong *)*param_2;
  LOCK();
  lVar1 = *plVar2;
  *plVar2 = *plVar2 + 1;
  UNLOCK();
  if (*plVar2 != 0 && SCARRY8(lVar1,1) == *plVar2 < 0) {
    plStack_40 = plVar2;
    uStack_38 = uVar7;
    uVar6 = pub_142e32070(uVar7,param_3);
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      pdb_140cb1c10(&plStack_40);
    }
    if ((uVar6 & 0x10) == 0) {
      if ((uVar6 & 0x20) == 0) {
        *param_1 = 2;
      }
      else {
        *param_1 = 0;
      }
    }
    else {
      uVar7 = pub_142e32030();
      LOCK();
      lVar1 = *plVar2;
      *plVar2 = *plVar2 + 1;
      UNLOCK();
      if (*plVar2 == 0 || SCARRY8(lVar1,1) != *plVar2 < 0) goto LAB_140bd80a0;
      uStack_30 = 0;
      uStack_28 = 0;
      plStack_40 = plVar2;
      uStack_38 = uVar7;
      cVar5 = pub_142e321d0(uVar7,param_3,&uStack_30,&uStack_28);
      if (cVar5 == '\0') {
        LOCK();
        *plVar2 = *plVar2 + -1;
        lVar1 = *plVar2;
        UNLOCK();
        uVar7 = 0;
        uVar4 = 0;
      }
      else {
        LOCK();
        *plVar2 = *plVar2 + -1;
        lVar1 = *plVar2;
        UNLOCK();
        uVar7 = uStack_30;
        uVar4 = uStack_28;
      }
      if (lVar1 == 0) {
        pdb_140cb1c10(&plStack_40);
      }
      *param_1 = 1;
      param_1[1] = uVar7;
      param_1[2] = uVar4;
    }
    return param_1;
  }
LAB_140bd80a0:
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}

