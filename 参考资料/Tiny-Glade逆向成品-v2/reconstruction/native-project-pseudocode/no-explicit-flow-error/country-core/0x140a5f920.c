// VA 0x140a5f920, PDB extent 344 bytes
// country_core::resources::stairs::stairs_state::StairsState::compute_checksum
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/stairs/stairs_state.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::stairs::stairs_state::StairsState::compute_checksum
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/stairs/stairs_state.rs
   Extent: 344 */

undefined8 pdb_140a5f920(int *param_1)

{
  undefined8 uVar1;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  undefined8 uStack_68;
  undefined8 uStack_60;
  longlong lStack_58;
  byte *pbStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 uStack_21;
  undefined8 uStack_20;
  
  uStack_20 = 0xfffffffffffffffe;
  if (*param_1 == 1) {
    uVar1 = *(undefined8 *)(param_1 + 2);
  }
  else {
    uStack_40 = 0;
    uStack_38 = 4;
    uStack_30 = 0;
    uStack_21 = 1;
    pdb_1417cc1a0(param_1 + 10,&uStack_40);
    uStack_78 = uStack_30;
    uStack_88 = (undefined4)uStack_40;
    uStack_84 = uStack_40._4_4_;
    uStack_80 = (undefined4)uStack_38;
    uStack_7c = uStack_38._4_4_;
    uStack_21 = 0;
    pdb_140a61530(&uStack_68,&uStack_88);
    uVar1 = uStack_60;
    if ((int)uStack_68 != 1) {
      uVar1 = pdb_140bb9c30(&uStack_68);
      uStack_68 = 1;
    }
    if (lStack_58 != 0) {
      uStack_60 = uVar1;
      pub_1406abac0(pbStack_50,lStack_58 << 3,4);
    }
    param_1[0] = 1;
    param_1[1] = 0;
    *(undefined8 *)(param_1 + 2) = uVar1;
  }
  return uVar1;
}

