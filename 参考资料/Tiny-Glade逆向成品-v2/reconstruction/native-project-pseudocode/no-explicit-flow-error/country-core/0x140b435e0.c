// VA 0x140b435e0, PDB extent 366 bytes
// country_core::systems::mode_manager::WallSelectionGroups::save
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/mode_manager.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::systems::mode_manager::WallSelectionGroups::save
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/mode_manager.rs
   Extent: 366 */

undefined8 pdb_140b435e0(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  ulonglong arg0;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  code *pcVar7;
  byte *pbVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  
  uVar3 = *(ulonglong *)(param_2 + 0x10);
  if (uVar3 < 2) {
    uVar9 = 0;
  }
  else {
    lVar4 = *(longlong *)(param_2 + 8);
    lVar12 = param_1[1];
    lVar5 = param_1[2];
    if (lVar5 != 0) {
      lVar10 = lVar12;
      do {
        if (*(ulonglong *)(lVar10 + 0x10) == uVar3) {
          plVar11 = *(longlong **)(lVar10 + 8);
          plVar1 = plVar11 + uVar3;
          do {
            lVar6 = *plVar11;
            plVar11 = plVar11 + 1;
            lVar13 = 0;
            do {
              if (uVar3 * 8 - lVar13 == 0) goto LAB_140b43640;
              plVar2 = (longlong *)(lVar4 + lVar13);
              lVar13 = lVar13 + 8;
            } while (*plVar2 != lVar6);
            if (plVar11 == plVar1) {
              return 0;
            }
          } while( true );
        }
LAB_140b43640:
        lVar10 = lVar10 + 0x18;
      } while (lVar10 != lVar12 + lVar5 * 0x18);
    }
    arg0 = uVar3 * 8;
    pdb_14007ee60();
    pbVar8 = pub_1406abab0(arg0,8);
    if (pbVar8 == (byte *)0x0) {
      pdb_142dc7e2a(8,arg0);
      pcVar7 = (code *)swi(3);
      uVar9 = (*pcVar7)();
      return uVar9;
    }
    pub_142e32760(pbVar8,lVar4,arg0);
    if (lVar5 == *param_1) {
      pdb_142d7e830(param_1);
      lVar12 = param_1[1];
    }
    *(ulonglong *)(lVar12 + lVar5 * 0x18) = uVar3;
    *(byte **)(lVar12 + 8 + lVar5 * 0x18) = pbVar8;
    *(ulonglong *)(lVar12 + 0x10 + lVar5 * 0x18) = uVar3;
    param_1[2] = lVar5 + 1;
    uVar9 = 1;
  }
  return uVar9;
}

