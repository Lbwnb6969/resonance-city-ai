// VA 0x140b43550, PDB extent 130 bytes
// country_core::systems::mode_manager::WallSelectionGroups::find
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/mode_manager.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::systems::mode_manager::WallSelectionGroups::find
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/mode_manager.rs
   Extent: 130 */

undefined8 pdb_140b43550(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    lVar5 = *(longlong *)(param_1 + 8);
    lVar1 = lVar5 + *(longlong *)(param_1 + 0x10) * 0x18;
    do {
      if (*(longlong *)(lVar5 + 0x10) == param_3) {
        if (param_3 == 0) {
          return 1;
        }
        plVar6 = *(longlong **)(lVar5 + 8);
        plVar2 = plVar6 + param_3;
        do {
          lVar4 = *plVar6;
          plVar6 = plVar6 + 1;
          lVar7 = 0;
          do {
            if (param_3 * 8 - lVar7 == 0) goto LAB_140b43580;
            plVar3 = (longlong *)(param_2 + lVar7);
            lVar7 = lVar7 + 8;
          } while (*plVar3 != lVar4);
          if (plVar6 == plVar2) {
            return 1;
          }
        } while( true );
      }
LAB_140b43580:
      lVar5 = lVar5 + 0x18;
    } while (lVar5 != lVar1);
  }
  return 0;
}

