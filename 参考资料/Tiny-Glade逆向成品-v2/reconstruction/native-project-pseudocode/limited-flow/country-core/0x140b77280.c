// VA 0x140b77280, PDB extent 75 bytes
// country_core::resources::roofs::roof_shape::Roof::rotation_yaw_radians
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/roofs/roof_shape.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::roofs::roof_shape::Roof::rotation_yaw_radians
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/roofs/roof_shape.rs
   Extent: 75 */

ulonglong pdb_140b77280(longlong param_1)

{
  float fVar1;
  ulonglong uVar2;
  undefined4 auStack_c [3];
  
  if (*(int *)(param_1 + 8) == 1) {
                    /* WARNING: Could not recover jumptable at 0x000142e32980. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = atan2f(*(uint *)(param_1 + 0x10) ^ _DAT_142e37820,*(undefined4 *)(param_1 + 0xc));
    return uVar2;
  }
  auStack_c[0] = *(undefined4 *)(param_1 + 0x18);
  fVar1 = (float)pdb_141c40430(auStack_c);
  return (ulonglong)(uint)(_DAT_142f9f600 - fVar1);
}

