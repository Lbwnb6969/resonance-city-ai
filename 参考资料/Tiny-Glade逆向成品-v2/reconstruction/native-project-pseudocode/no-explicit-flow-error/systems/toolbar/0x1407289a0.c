// VA 0x1407289a0, PDB extent 183 bytes
// toolbar::mei::widgets::impl$9::render
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/widgets.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: toolbar::mei::widgets::impl$9::render
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/widgets.rs
   Extent: 183 */

void pdb_1407289a0(longlong param_1,undefined8 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = *(float *)(param_1 + 0x38);
  fVar1 = *(float *)(param_1 + 0x3c);
  if (*(char *)(param_1 + 0x1c) == '\x01') {
    fVar3 = fVar1;
    if (fVar1 <= _DAT_142e36f28) {
      fVar3 = _DAT_142e36f28;
    }
    fVar3 = *(float *)((longlong)param_2 + 0x14) / fVar3;
    fVar2 = fVar2 * fVar3;
    fVar1 = fVar1 * fVar3;
  }
  if (*(char *)(param_1 + 0x44) != '\0') {
    fVar2 = *(float *)(param_2 + 2);
  }
  fVar3 = *(float *)(param_2 + 1) - fVar2 * _DAT_142e36f50;
  fVar4 = *(float *)((longlong)param_2 + 0xc) - fVar1 * _DAT_142e36f50;
  pdb_140cb8180(*param_2,CONCAT44(fVar4,fVar3),
                CONCAT44((fVar1 * _DAT_142e36f50 + *(float *)((longlong)param_2 + 0xc)) - fVar4,
                         (fVar2 * _DAT_142e36f50 + *(float *)(param_2 + 1)) - fVar3),
                *(undefined4 *)(param_2 + 3),param_1 + 0x20);
  return;
}

