// VA 0x140cea790, PDB extent 103 bytes
// clutter_pack_pipe::preview_grid_shape
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/clutter-pack-pipe/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: clutter_pack_pipe::preview_grid_shape
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/clutter-pack-pipe/src/lib.rs
   Extent: 103 */

uint pdb_140cea790(uint param_1)

{
  uint uVar1;
  ulonglong uVar2;
  double dVar3;
  double dVar4;
  
  dVar3 = (double)pub_142e32a30(SQRT((double)param_1));
  dVar4 = 0.0;
  if (0.0 <= dVar3) {
    dVar4 = dVar3;
  }
  dVar3 = _DAT_142e33020;
  if (dVar4 <= _DAT_142e33020) {
    dVar3 = dVar4;
  }
  uVar2 = 1;
  if (1 < (uint)(longlong)dVar3) {
    uVar2 = (longlong)dVar3 & 0xffffffff;
  }
  uVar1 = ((int)(param_1 / uVar2) + 1) - (uint)((int)((ulonglong)param_1 % uVar2) == 0);
  if (4 < uVar1) {
    uVar1 = 4;
  }
  return uVar1;
}

