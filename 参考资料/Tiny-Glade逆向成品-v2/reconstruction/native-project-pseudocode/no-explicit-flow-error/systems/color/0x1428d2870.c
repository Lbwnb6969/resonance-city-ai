// VA 0x1428d2870, PDB extent 98 bytes
// system_color::radial_menu::IconInfo::new_separator
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/color/src/radial_menu/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: system_color::radial_menu::IconInfo::new_separator
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/color/src/radial_menu/mod.rs
   Extent: 98 */

undefined8 * pdb_1428d2870(undefined8 *param_1)

{
  code *pcVar1;
  byte *pbVar2;
  undefined8 *puVar3;
  
  pdb_14007ee60();
  pbVar2 = pub_1406abab0(5,1);
  if (pbVar2 != (byte *)0x0) {
    pbVar2[4] = 0x65;
    pbVar2[0] = 0x77;
    pbVar2[1] = 0x68;
    pbVar2[2] = 0x69;
    pbVar2[3] = 0x74;
    *param_1 = 5;
    param_1[1] = pbVar2;
    param_1[2] = 5;
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
    *(undefined1 *)(param_1 + 3) = 6;
    return param_1;
  }
  pdb_142dc7e2a(1,5);
  pcVar1 = (code *)swi(3);
  puVar3 = (undefined8 *)(*pcVar1)();
  return puVar3;
}

