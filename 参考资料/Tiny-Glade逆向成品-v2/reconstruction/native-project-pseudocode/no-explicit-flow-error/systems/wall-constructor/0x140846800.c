// VA 0x140846800, PDB extent 418 bytes
// system_wall_constructor::utils::perturb_row_ends
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/utils/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_wall_constructor::utils::perturb_row_ends
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/utils/mod.rs
   Extent: 418 */

void pdb_140846800(float *param_1,longlong param_2,float *param_3,ulonglong param_4,
                  ulonglong param_5,float param_6,float param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = (float)pdb_140deec20();
  if (param_2 == 0) {
    if (param_4 <= param_5) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(param_5,param_4,&UNK_14300b570);
    }
    if (param_4 <= param_5 - 1) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(param_5 - 1,param_4,&UNK_14300b588);
    }
    fVar3 = (param_3[param_5] + param_3[param_5 - 1]) * _DAT_142e36f38 + _DAT_142e36f28;
    fVar2 = fVar1;
    if (fVar3 <= fVar1) {
      fVar2 = fVar3;
    }
    fVar2 = (float)(-(uint)NAN(fVar3) & (uint)fVar1 | ~-(uint)NAN(fVar3) & (uint)fVar2) *
            _DAT_14300b534;
    fVar1 = param_6;
    if (fVar2 <= param_6) {
      fVar1 = fVar2;
    }
    *param_1 = param_7 * (float)(-(uint)NAN(fVar2) & (uint)param_6 |
                                ~-(uint)NAN(fVar2) & (uint)fVar1) + *param_1;
  }
  else if (param_2 == param_5 - 1) {
    if (param_4 == 1) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(1,1,&UNK_14300b5b8);
    }
    if (param_4 == 0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(0,0,&UNK_14300b5a0);
    }
    fVar3 = (*param_3 + param_3[1]) * _DAT_142e36f50;
    fVar1 = _DAT_142e36f28 - fVar1;
    fVar2 = fVar3;
    if (fVar1 <= fVar3) {
      fVar2 = fVar1;
    }
    fVar2 = (float)(~-(uint)NAN(fVar1) & (uint)fVar2 | -(uint)NAN(fVar1) & (uint)fVar3) *
            _DAT_14300b534;
    fVar1 = param_6;
    if (fVar2 <= param_6) {
      fVar1 = fVar2;
    }
    param_1[2] = param_7 * (float)(-(uint)NAN(fVar2) & (uint)param_6 |
                                  ~-(uint)NAN(fVar2) & (uint)fVar1) + param_1[2];
  }
  return;
}

