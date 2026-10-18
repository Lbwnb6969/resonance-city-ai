// VA 0x1406d07b0, PDB extent 118 bytes
// usdl::sdl::EventPump::wait_event_timeout
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/usdl/src/sdl.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: usdl::sdl::EventPump::wait_event_timeout
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/usdl/src/sdl.rs
   Extent: 118 */

undefined1 * pdb_1406d07b0(undefined1 *param_1,undefined8 param_2,undefined4 param_3)

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
  undefined4 uStack_50;
  undefined4 uStack_4c;
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
  undefined8 uStack_20;
  
  pdb_140951990(&uStack_50);
  iVar1 = pdb_14100a8a0(&uStack_50,param_3);
  if (iVar1 == 0) {
    *param_1 = 0xb;
  }
  else {
    uStack_58 = uStack_20;
    uStack_68 = uStack_30;
    uStack_64 = uStack_2c;
    uStack_60 = uStack_28;
    uStack_5c = uStack_24;
    uStack_78 = uStack_40;
    uStack_74 = uStack_3c;
    uStack_70 = uStack_38;
    uStack_6c = uStack_34;
    uStack_88 = uStack_50;
    uStack_84 = uStack_4c;
    uStack_80 = uStack_48;
    uStack_7c = uStack_44;
    pdb_1406d09e0(param_1,&uStack_88);
  }
  return param_1;
}

