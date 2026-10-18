// VA 0x14072a510, PDB extent 203 bytes
// toolbar::mei::widgets::impl$19::on_input
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/widgets.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: toolbar::mei::widgets::impl$19::on_input
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/widgets.rs
   Extent: 203 */

void pdb_14072a510(longlong param_1,longlong param_2)

{
  float fVar1;
  float fStack_28;
  float fStack_24;
  float *pfStack_20;
  code *pcStack_18;
  float *pfStack_10;
  code *pcStack_8;
  
  if (*(int *)(param_2 + 0x58) == 0xc3) {
    fVar1 = *(float *)(param_1 + 0x28) + _DAT_142e37878;
    fStack_24 = (float)*(ulonglong *)(param_1 + 0x18) * fVar1 + _DAT_142fa5b20;
    fStack_28 = (float)(_DAT_142e37820 ^ (uint)fStack_24);
    if (fStack_24 < fStack_28) {
      pfStack_20 = &fStack_28;
      pcStack_18 = pdb_140f705d0;
      pfStack_10 = &fStack_24;
      pcStack_8 = pdb_140f705d0;
                    /* WARNING: Subroutine does not return */
      pdb_142dc83d0(&UNK_142fa5c78,&pfStack_20,&UNK_142fa5d18);
    }
    fVar1 = fVar1 * (float)(*(uint *)(param_2 + 4) ^ _DAT_142e37820);
    if (fStack_28 <= fVar1) {
      fStack_28 = fVar1;
    }
    if (fStack_28 <= fStack_24) {
      fStack_24 = fStack_28;
    }
    *(float *)(param_1 + 0x30) = fStack_24 + *(float *)(param_1 + 0x30);
  }
  return;
}

