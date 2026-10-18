// VA 0x140a3b030, PDB extent 69 bytes
// country_core::systems::temp_eraser::TempEraser::effective_mode
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/temp_eraser.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::systems::temp_eraser::TempEraser::effective_mode
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/temp_eraser.rs
   Extent: 69 */

void pdb_140a3b030(undefined8 *param_1,char *param_2,char *param_3)

{
  undefined8 uVar1;
  byte bVar2;
  
  bVar2 = *param_3 - 2;
  if (((bVar2 < 0xd) && ((0x1e03U >> (bVar2 & 0x1f) & 1) != 0)) && (*param_2 != '\0')) {
    *(undefined *)((longlong)param_1 + 1) = (&UNK_14303c41e)[bVar2];
    *(undefined1 *)param_1 = 4;
    return;
  }
  param_1[2] = *(undefined8 *)(param_3 + 0x10);
  uVar1 = *(undefined8 *)(param_3 + 8);
  *param_1 = *(undefined8 *)param_3;
  param_1[1] = uVar1;
  return;
}

