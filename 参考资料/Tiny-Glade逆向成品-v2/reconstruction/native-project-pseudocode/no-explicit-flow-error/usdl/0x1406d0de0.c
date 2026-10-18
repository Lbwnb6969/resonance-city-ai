// VA 0x1406d0de0, PDB extent 114 bytes
// usdl::event::impl$1::next
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/usdl/src/event.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: usdl::event::impl$1::next
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/usdl/src/event.rs
   Extent: 114 */

undefined1 * pdb_1406d0de0(undefined1 *param_1)

{
  int iVar1;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 uStack_18;
  
  pdb_140951990(&uStack_48);
  iVar1 = pdb_14100a7d0(&uStack_48);
  if (iVar1 == 0) {
    *param_1 = 0xb;
  }
  else {
    uStack_58 = uStack_18;
    uStack_68 = uStack_28;
    uStack_64 = uStack_24;
    uStack_60 = uStack_20;
    uStack_5c = uStack_1c;
    uStack_78 = uStack_38;
    uStack_74 = uStack_34;
    uStack_70 = uStack_30;
    uStack_6c = uStack_2c;
    uStack_88 = uStack_48;
    uStack_84 = uStack_44;
    uStack_80 = uStack_40;
    uStack_7c = uStack_3c;
    pdb_1406d09e0(param_1,&uStack_88);
  }
  return param_1;
}

