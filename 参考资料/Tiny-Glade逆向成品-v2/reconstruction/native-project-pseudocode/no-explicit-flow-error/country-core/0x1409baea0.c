// VA 0x1409baea0, PDB extent 238 bytes
// country_core::systems::ui::signifiers::SignifierFactory::new
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui/signifiers/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::systems::ui::signifiers::SignifierFactory::new
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui/signifiers/mod.rs
   Extent: 238 */

ulonglong *
pdb_1409baea0(ulonglong *param_1,undefined8 param_2,ulonglong param_3,ulonglong param_4,
             ulonglong param_5)

{
  code *pcVar1;
  byte *pbVar2;
  undefined8 uVar3;
  
  if ((longlong)param_3 < 0) {
    uVar3 = 0;
LAB_1409baed7:
    pdb_142dc7e2a(uVar3,param_3);
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (param_3 == 0) {
    pbVar2 = (byte *)0x1;
  }
  else {
    pdb_14007ee60();
    uVar3 = 1;
    pbVar2 = pub_1406abab0(param_3,1);
    if (pbVar2 == (byte *)0x0) goto LAB_1409baed7;
    pub_142e32760(pbVar2,param_2,param_3);
  }
  *param_1 = param_3;
  param_1[1] = (ulonglong)pbVar2;
  param_1[2] = param_3;
  param_1[3] = param_4;
  param_1[4] = param_5;
  return param_1;
}

