// VA 0x141c25680, PDB extent 479 bytes
// country_core::systems::history::replay_wall::rigid_transform_curve
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/history/replay_wall.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::history::replay_wall::rigid_transform_curve
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/history/replay_wall.rs
   Extent: 479 */

void pdb_141c25680(undefined8 param_1,undefined8 param_2,undefined8 param_3,float param_4,
                  float param_5,float *param_6,float param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  float fStack_d8;
  float fStack_d4;
  undefined1 auStack_c0 [168];
  
  if (param_7 <= 0.0) {
    uStack_f8 = _DAT_14306e1c0;
    uStack_f0 = _UNK_14306e1c8;
    uStack_e8 = CONCAT44(_UNK_14306e1d4,_DAT_14306e1d0);
    uStack_e0 = CONCAT44(_UNK_14306e1dc,_UNK_14306e1d8);
  }
  else {
    fVar1 = *param_6;
    fVar2 = param_6[1];
    uStack_f8 = *(undefined8 *)param_6;
    fVar3 = param_6[2];
    fVar4 = param_6[3];
    uStack_f0 = *(undefined8 *)(param_6 + 2);
    uStack_e8 = *(undefined8 *)(param_6 + 4);
    if (_DAT_142e36f28 <= param_7) {
      uStack_e0 = *(undefined8 *)(param_6 + 6);
    }
    else {
      fVar5 = (float)pub_142e32980(fVar2,fVar1);
      fVar6 = (float)pub_142e32b30(fVar5 * param_7);
      fVar5 = (float)pub_142e329e0(fVar5 * param_7);
      uStack_f8 = CONCAT44(fVar6,fVar5);
      uStack_f0 = CONCAT44(fVar5,(uint)fVar6 ^ _DAT_142e37820);
      uStack_e8 = CONCAT44((param_7 * (((float)((ulonglong)uStack_e8 >> 0x20) +
                                       fVar4 * param_5 + fVar2 * param_4) - param_5) + param_5) -
                           (param_5 * fVar5 + param_4 * fVar6),
                           (param_7 * (((float)uStack_e8 + fVar3 * param_5 + fVar1 * param_4) -
                                      param_4) + param_4) -
                           (param_5 * (float)((uint)fVar6 ^ _DAT_142e37820) + param_4 * fVar5));
    }
  }
  fStack_d4 = param_5;
  fStack_d8 = param_4;
  pdb_140c49bc0(auStack_c0,&uStack_f8,param_3);
  pdb_14092e8e0(param_2,param_1,auStack_c0);
  return;
}

