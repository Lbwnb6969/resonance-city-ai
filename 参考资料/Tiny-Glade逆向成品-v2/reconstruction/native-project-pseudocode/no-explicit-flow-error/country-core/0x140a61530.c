// VA 0x140a61530, PDB extent 316 bytes
// country_core::resources::stairs::stairs_state::StairsSnapshot::new
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/stairs/stairs_state.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::stairs::stairs_state::StairsSnapshot::new
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/stairs/stairs_state.rs
   Extent: 316 */

undefined8 * pdb_140a61530(undefined8 *param_1,undefined4 *param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 auStack_58 [2];
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  undefined4 *puStack_30;
  undefined8 uStack_28;
  undefined1 uStack_1a;
  undefined1 uStack_19;
  undefined8 uStack_18;
  
  uStack_18 = 0xfffffffffffffffe;
  uStack_28 = *(undefined8 *)(param_2 + 2);
  uVar1 = *(ulonglong *)(param_2 + 4);
  puStack_30 = param_2;
  if (1 < uVar1) {
    if (uVar1 < 0x15) {
      uStack_19 = 1;
      pdb_14145ff80(uStack_28,uVar1,1,&uStack_1a);
    }
    else {
      uStack_19 = 1;
      pdb_140a90e70(uStack_28,uVar1,&uStack_1a);
    }
  }
  uStack_38 = *(undefined8 *)(puStack_30 + 4);
  uStack_48 = *puStack_30;
  uStack_44 = puStack_30[1];
  uStack_40 = puStack_30[2];
  uStack_3c = puStack_30[3];
  auStack_58[0] = 0;
  uVar2 = pdb_140bb9c30(auStack_58);
  param_1[4] = uStack_38;
  param_1[2] = CONCAT44(uStack_44,uStack_48);
  param_1[3] = CONCAT44(uStack_3c,uStack_40);
  *param_1 = 1;
  param_1[1] = uVar2;
  return param_1;
}

