// VA 0x140927e10, PDB extent 167 bytes
// country_core::resources::history::terrain_edit::impl$0::fmt
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/terrain_edit.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::history::terrain_edit::impl$0::fmt
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/terrain_edit.rs
   Extent: 167 */

void pdb_140927e10(ulonglong *param_1,undefined8 param_2)

{
  ulonglong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_20 [16];
  
  uVar1 = 2;
  if ((longlong)*param_1 < 0) {
    uVar1 = *param_1 ^ 0x8000000000000000;
  }
  if (uVar1 == 0) {
    param_1 = param_1 + 4;
    puVar2 = &UNK_1430217e7;
    uVar3 = 0x10;
  }
  else {
    if (uVar1 == 1) {
      param_1 = param_1 + 1;
      puVar2 = &UNK_14302181a;
    }
    else {
      param_1 = param_1 + 4;
      puVar2 = &UNK_14302182b;
    }
    uVar3 = 0x11;
  }
  pdb_140f656a0(auStack_20,param_2,puVar2,uVar3);
  uVar3 = pdb_140f63f50(auStack_20,&UNK_143021818,2,param_1,&UNK_1430217f8);
  pdb_140f640e0(uVar3);
  return;
}

