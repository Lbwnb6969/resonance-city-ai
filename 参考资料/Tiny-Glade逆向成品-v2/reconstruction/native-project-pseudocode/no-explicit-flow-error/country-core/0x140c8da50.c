// VA 0x140c8da50, PDB extent 429 bytes
// country_core::resources::clutter_packs::is_safe_relative_path
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/clutter_packs.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::clutter_packs::is_safe_relative_path
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/clutter_packs.rs
   Extent: 429 */

ulonglong pdb_140c8da50(longlong param_1,ulonglong param_2)

{
  bool bVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong unaff_RBX;
  undefined7 uVar7;
  ulonglong uVar8;
  bool bVar9;
  
  if (param_2 == 0) {
LAB_140c8dab6:
    uVar3 = 0;
  }
  else {
    if (param_2 < 0x10) {
      uVar3 = 0;
      do {
        if (*(char *)(param_1 + uVar3) == '\\') goto LAB_140c8dab6;
        uVar3 = uVar3 + 1;
      } while (param_2 != uVar3);
      uVar3 = 0;
      do {
        if (*(char *)(param_1 + uVar3) == ':') goto LAB_140c8dab6;
        uVar3 = uVar3 + 1;
      } while (param_2 != uVar3);
    }
    else {
      lVar6 = pdb_140f69320(0x5c,param_1,param_2);
      if ((lVar6 == 1) || (lVar6 = pdb_140f69320(0x3a,param_1,param_2), lVar6 == 1))
      goto LAB_140c8dab6;
    }
    uVar3 = 0;
    uVar8 = 0;
LAB_140c8dae5:
    do {
      uVar7 = (undefined7)(unaff_RBX >> 8);
      unaff_RBX = CONCAT71(uVar7,1);
      uVar2 = uVar3;
      do {
        uVar3 = uVar2;
        if (param_2 < uVar2) {
LAB_140c8dbc8:
          bVar1 = true;
          lVar6 = param_2 - uVar8;
          uVar2 = uVar8;
          goto joined_r0x000140c8db95;
        }
        uVar5 = param_1 + uVar2;
        uVar3 = param_2;
        if (param_2 - uVar2 < 0x10) {
          uVar4 = 0;
          if (param_2 == uVar2) goto LAB_140c8dbc8;
          while (*(char *)(uVar5 + uVar4) != '/') {
            uVar4 = uVar4 + 1;
            if (param_2 - uVar2 == uVar4) goto LAB_140c8dbc8;
          }
        }
        else {
          lVar6 = pdb_140f69320();
          uVar4 = uVar5;
          if (lVar6 != 1) goto LAB_140c8dbc8;
        }
        uVar3 = uVar4 + uVar2 + 1;
        uVar4 = uVar4 + uVar2;
        uVar2 = uVar3;
      } while ((param_2 <= uVar4) || (*(char *)(param_1 + uVar4) != '/'));
      bVar1 = false;
      lVar6 = uVar4 - uVar8;
joined_r0x000140c8db95:
      if (lVar6 == 1) {
        bVar9 = *(char *)(param_1 + uVar8) == '.';
        unaff_RBX = CONCAT71(uVar7,bVar9);
        uVar8 = uVar2;
        if (bVar1 || bVar9) break;
        goto LAB_140c8dae5;
      }
      if (lVar6 != 2) {
        if (lVar6 == 0) break;
        uVar8 = uVar2;
        if (bVar1) {
          unaff_RBX = 0;
          break;
        }
        goto LAB_140c8dae5;
      }
      bVar9 = *(short *)(param_1 + uVar8) == 0x2e2e;
      unaff_RBX = CONCAT71(uVar7,bVar9);
      uVar8 = uVar2;
    } while (!bVar1 && !bVar9);
    uVar3 = unaff_RBX ^ 1;
  }
  return uVar3 & 0xffffffff;
}

