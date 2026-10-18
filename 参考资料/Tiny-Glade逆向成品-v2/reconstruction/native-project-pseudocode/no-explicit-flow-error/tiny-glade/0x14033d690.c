// VA 0x14033d690, PDB extent 110 bytes
// tiny_glade::gui::wall_selection_tags::impl$1::render
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/wall_selection_tags.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tiny_glade::gui::wall_selection_tags::impl$1::render
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/wall_selection_tags.rs
   Extent: 110 */

void pdb_14033d690(longlong param_1,longlong param_2)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  
  lVar1 = 0x18;
  if ((*(byte *)(param_2 + 0x2c) & 1) == 0) {
    lVar1 = 0;
  }
  if (*(char *)(param_1 + 0x34) != '\0') {
    lVar1 = 0;
  }
  fVar2 = *(float *)(param_2 + 0x10) * _DAT_142e36f50;
  fVar3 = _DAT_142e36f50 * *(float *)(param_2 + 0x14);
  pdb_14072d170(param_2,*(float *)(param_2 + 8) - fVar2,*(float *)(param_2 + 0xc) - fVar3,
                fVar2 + *(float *)(param_2 + 8),fVar3 + *(float *)(param_2 + 0xc),lVar1 + param_1);
  return;
}

