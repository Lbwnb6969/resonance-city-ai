// VA 0x1407271a0, PDB extent 144 bytes
// toolbar::mei::widgets::impl$12::render
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/widgets.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: toolbar::mei::widgets::impl$12::render
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/widgets.rs
   Extent: 144 */

void pdb_1407271a0(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  cVar1 = pdb_140cb90d0();
  if (cVar1 == '\0') {
    fVar2 = _DAT_142e36f50 * *(float *)((longlong)param_2 + 0x14);
    fVar3 = *(float *)(param_2 + 1) - *(float *)(param_2 + 2) * _DAT_142e36f50;
    fVar4 = *(float *)((longlong)param_2 + 0xc) - fVar2;
    pdb_140cb8180(*param_2,CONCAT44(fVar4,fVar3),
                  CONCAT44((fVar2 + *(float *)((longlong)param_2 + 0xc)) - fVar4,
                           (*(float *)(param_2 + 2) * _DAT_142e36f50 + *(float *)(param_2 + 1)) -
                           fVar3),*(undefined4 *)(param_2 + 3),param_1 + 0x18);
  }
  return;
}

