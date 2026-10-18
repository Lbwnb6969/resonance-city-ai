// VA 0x141703340, PDB extent 107 bytes
// utils::timer::_::impl$0::init_state
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/timer.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: utils::timer::_::impl$0::init_state
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/timer.rs
   Extent: 107 */

undefined8 * pdb_141703340(undefined8 *param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  byte *pbVar3;
  undefined8 *puVar4;
  
  uVar2 = pdb_1425656b0(param_2);
  pdb_14007ee60();
  pbVar3 = pub_1406abab0(0x10,4);
  if (pbVar3 != (byte *)0x0) {
    param_1[3] = 0;
    param_1[4] = 0;
    *param_1 = uVar2;
    param_1[1] = 4;
    param_1[2] = pbVar3;
    param_1[5] = 0x3c88888900000001;
    return param_1;
  }
  pdb_142dc7e2a(4,0x10);
  pcVar1 = (code *)swi(3);
  puVar4 = (undefined8 *)(*pcVar1)();
  return puVar4;
}

