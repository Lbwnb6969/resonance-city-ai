// VA 0x140a27c50, PDB extent 316 bytes
// country_core::systems::steam::missing_mods::MissingModRef::display
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/steam/missing_mods.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::systems::steam::missing_mods::MissingModRef::display
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/steam/missing_mods.rs
   Extent: 316 */

undefined8 * pdb_140a27c50(undefined8 *param_1,int *param_2)

{
  char cVar1;
  undefined8 *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  ulonglong uStack_58;
  byte *pbStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 uStack_21;
  undefined8 uStack_20;
  
  uStack_20 = 0xfffffffffffffffe;
  if (*param_2 == 1) {
    pdb_140f60be0(param_1);
  }
  else {
    pdb_141b4ac50(&uStack_58,param_2 + 2);
    uStack_40 = 0;
    uStack_38 = 1;
    uStack_30 = 0;
    uStack_60 = 0x60000020;
    puStack_70 = &uStack_40;
    puStack_68 = &UNK_143039408;
    cVar1 = pdb_141351190(&uStack_58,&puStack_70);
    if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_143039438,0x37,&uStack_21,&UNK_1430394f8,&UNK_1430394e0);
    }
    param_1[2] = uStack_30;
    *param_1 = uStack_40;
    param_1[1] = uStack_38;
    if (uStack_58 != 0) {
      pub_1406abac0(pbStack_50,uStack_58,1);
    }
  }
  return param_1;
}

