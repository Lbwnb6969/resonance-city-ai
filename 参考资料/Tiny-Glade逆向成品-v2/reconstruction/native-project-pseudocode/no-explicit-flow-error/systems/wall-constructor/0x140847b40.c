// VA 0x140847b40, PDB extent 203 bytes
// system_wall_constructor::utils::sine_wave::sine_wave_deform
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/utils/sine_wave.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_wall_constructor::utils::sine_wave::sine_wave_deform
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/utils/sine_wave.rs
   Extent: 203 */

undefined8 pdb_140847b40(float *param_1,float param_2,char param_3)

{
  float fVar1;
  undefined4 uVar3;
  undefined8 uVar2;
  float fVar4;
  
  param_2 = param_2 * param_1[4];
  fVar1 = (float)pub_142e32b30(_DAT_142e3787c * param_2);
  fVar4 = fVar1 * _DAT_142e36f50 + _DAT_142e36f50;
  fVar1 = 0.0;
  uVar3 = 0;
  if (*(char *)(param_1 + 5) != '\0') {
    uVar2 = pub_142e32b30((*param_1 * fVar4 + _DAT_142e36f28) * param_2 + param_1[2]);
    uVar3 = (undefined4)((ulonglong)uVar2 >> 0x20);
    fVar1 = (float)uVar2 * _DAT_143007994;
  }
  if (param_3 == '\0') {
    pub_142e32b30(param_2 * (fVar4 * param_1[1] + _DAT_142e36f28) + param_1[3]);
  }
  return CONCAT44(uVar3,fVar1);
}

