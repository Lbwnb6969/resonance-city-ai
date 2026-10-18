// VA 0x140de9d00, PDB extent 86 bytes
// utils::scale_u32_packed_srgba_color
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: utils::scale_u32_packed_srgba_color
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/lib.rs
   Extent: 86 */

uint pdb_140de9d00(uint param_1,float param_2)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = ((float)(param_1 & 0xff) / _DAT_142e4fba0) * param_2 * _DAT_142e4fba0 + _DAT_142e36f50;
  fVar4 = 0.0;
  if (0.0 <= fVar3) {
    fVar4 = fVar3;
  }
  fVar3 = _DAT_142e4fba0;
  if (fVar4 <= _DAT_142e4fba0) {
    fVar3 = fVar4;
  }
  uVar2 = 0;
  if (0.0 <= fVar3) {
    uVar2 = (uint)(longlong)fVar3;
  }
  uVar1 = 0xffffffff;
  if (fVar3 <= _DAT_142e46a48) {
    uVar1 = uVar2;
  }
  return uVar1 | param_1 & 0xffffff00;
}

