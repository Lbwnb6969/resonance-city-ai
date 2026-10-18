// VA 0x142300a00, PDB extent 130 bytes
// toolbar::menu::report_bug::impl$8::render
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/menu/report_bug.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: toolbar::menu::report_bug::impl$8::render
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/menu/report_bug.rs
   Extent: 130 */

void pdb_142300a00(undefined8 param_1,undefined8 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = _DAT_142e36f50 * *(float *)((longlong)param_2 + 0x14);
  fVar2 = *(float *)(param_2 + 1) - *(float *)(param_2 + 2) * _DAT_142e36f50;
  fVar3 = *(float *)((longlong)param_2 + 0xc) - fVar1;
  pdb_140cb8180(*param_2,CONCAT44(fVar3,fVar2),
                CONCAT44((fVar1 + *(float *)((longlong)param_2 + 0xc)) - fVar3,
                         (*(float *)(param_2 + 2) * _DAT_142e36f50 + *(float *)(param_2 + 1)) -
                         fVar2),*(undefined4 *)(param_2 + 3),param_1);
  return;
}

