// VA 0x140937260, PDB extent 114 bytes
// country_core::systems::render_loop::vermeer::impl$1::build
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/vermeer.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::systems::render_loop::vermeer::impl$1::build
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/vermeer.rs
   Extent: 114 */

void pdb_140937260(char *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 uStack_28;
  undefined2 uStack_20;
  undefined1 uStack_1a;
  undefined1 uStack_19;
  undefined8 uStack_18;
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  if (*param_1 == '\0') {
    uStack_20 = 2;
  }
  else {
    param_1 = (char *)(ulonglong)(byte)param_1[1];
    uStack_18 = 0;
    uStack_10 = 0;
    uStack_8 = 0;
    uStack_20 = 0;
  }
  uStack_28 = uStack_8;
  uStack_38 = (undefined4)uStack_18;
  uStack_34 = uStack_18._4_4_;
  uStack_30 = (undefined4)uStack_10;
  uStack_2c = uStack_10._4_4_;
  uStack_1a = SUB81(param_1,0);
  uStack_19 = 1;
  uVar1 = pdb_141908210(param_2,&uStack_38);
  uVar1 = pdb_14190bf40(uVar1,0);
  pdb_140c97db0(uVar1,1);
  return;
}

