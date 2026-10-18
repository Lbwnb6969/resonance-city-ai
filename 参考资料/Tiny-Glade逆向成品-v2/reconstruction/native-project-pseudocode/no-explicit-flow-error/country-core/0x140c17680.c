// VA 0x140c17680, PDB extent 134 bytes
// country_core::resources::grading_lut::ColorGradingState::flattened
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/grading_lut.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::resources::grading_lut::ColorGradingState::flattened
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/grading_lut.rs
   Extent: 134 */

undefined8 * pdb_140c17680(undefined8 *param_1,longlong param_2)

{
  code *pcVar1;
  byte *pbVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (*(char *)(param_2 + 0x28) == '\0') {
    pdb_140f60be0(param_1);
    uVar4 = *(undefined4 *)(param_2 + 0x18);
    uVar5 = *(undefined4 *)(param_2 + 0x1c);
    uVar6 = *(undefined4 *)(param_2 + 0x20);
    uVar7 = *(undefined4 *)(param_2 + 0x24);
    *(undefined1 *)(param_1 + 5) = 0;
  }
  else {
    pdb_14007ee60();
    pbVar2 = pub_1406abab0(7,1);
    if (pbVar2 == (byte *)0x0) {
      pdb_142dc7e2a(1,7);
      pcVar1 = (code *)swi(3);
      puVar3 = (undefined8 *)(*pcVar1)();
      return puVar3;
    }
    pbVar2[3] = 0x61;
    pbVar2[4] = 0x75;
    pbVar2[5] = 0x6c;
    pbVar2[6] = 0x74;
    pbVar2[0] = 100;
    pbVar2[1] = 0x65;
    pbVar2[2] = 0x66;
    pbVar2[3] = 0x61;
    *(undefined1 *)(param_1 + 5) = 0;
    *param_1 = 7;
    param_1[1] = pbVar2;
    param_1[2] = 7;
    uVar4 = _DAT_143020ea0;
    uVar5 = _UNK_143020ea4;
    uVar6 = _UNK_143020ea8;
    uVar7 = _UNK_143020eac;
  }
  *(undefined4 *)(param_1 + 3) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar5;
  *(undefined4 *)(param_1 + 4) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar7;
  return param_1;
}

