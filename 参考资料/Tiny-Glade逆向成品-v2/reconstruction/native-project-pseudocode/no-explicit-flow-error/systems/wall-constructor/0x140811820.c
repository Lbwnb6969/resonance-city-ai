// VA 0x140811820, PDB extent 248 bytes
// system_wall_constructor::construct_arches::profile::ArchFunction::remap_t
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_arches/profile.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_wall_constructor::construct_arches::profile::ArchFunction::remap_t
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_arches/profile.rs
   Extent: 248 */

undefined8 pdb_140811820(char *param_1,float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar2 = _DAT_142e36f28;
  if (*param_1 == '\x01') {
    if (param_1[1] == '\0') {
      fVar5 = param_2 * param_2;
    }
    else {
      fVar5 = (_DAT_142e36f28 - param_2) * (_DAT_142e36f28 - param_2);
    }
    param_3 = _DAT_142e36f28 - param_3;
    fVar3 = (float)((uint)(param_2 + _DAT_142e36f38) & _DAT_142e377e0);
    fVar3 = fVar3 + fVar3;
    fVar1 = (float)pdb_140de8220(_DAT_142e37830,_DAT_142e36f28,*(undefined4 *)(param_1 + 4));
    fVar4 = 0.0;
    if (0.0 <= fVar1) {
      fVar4 = fVar1;
    }
    fVar1 = fVar2;
    if (fVar4 <= fVar2) {
      fVar1 = fVar4;
    }
    fVar4 = (fVar2 - fVar1) * (_UNK_142e37954 - param_3 * fVar3 * fVar3 * fVar3);
    fVar2 = fVar4 + fVar1 * (_DAT_142e37950 - param_3 * fVar5);
  }
  else {
    fVar2 = (float)((uint)(param_2 + _DAT_142e36f38) & _DAT_142e377e0);
    fVar2 = fVar2 + fVar2;
    fVar4 = 0.0;
    fVar2 = _DAT_142e36f28 - (_DAT_142e36f28 - param_3) * fVar2 * fVar2 * fVar2;
  }
  return CONCAT44(fVar4,fVar2);
}

