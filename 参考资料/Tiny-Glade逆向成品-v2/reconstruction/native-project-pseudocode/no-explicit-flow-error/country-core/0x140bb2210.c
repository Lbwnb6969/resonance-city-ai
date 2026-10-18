// VA 0x140bb2210, PDB extent 223 bytes
// country_core::systems::collision::world::impl$41::into_transformed_shape
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/collision/world.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::collision::world::impl$41::into_transformed_shape
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/collision/world.rs
   Extent: 223 */

undefined8 * pdb_140bb2210(undefined8 *param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  undefined4 uStack_6c;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined1 auStack_54 [60];
  
  pdb_140df4150(&fStack_78);
  fVar5 = fStack_74;
  fVar4 = fStack_78;
  fVar1 = _DAT_142e36f50;
  *(float *)((longlong)param_1 + 0x24) = fStack_70 * _DAT_142e36f50;
  pdb_140df4540(&fStack_78,param_2 + 8,
                (*(float *)(param_2 + 0x18) + *(float *)(param_2 + 0x1c)) * fVar1);
  fVar1 = fStack_78;
  fVar2 = fStack_74 * _DAT_143061340;
  fVar3 = fStack_70 * _UNK_143061344;
  fVar4 = fVar4 * _UNK_143061348;
  fVar5 = fVar5 * _UNK_14306134c;
  pdb_140df4520(auStack_54,param_2);
  uStack_58 = 0;
  uStack_60 = 0x3f800000;
  pdb_140f335d0(&fStack_78,&uStack_60,auStack_54);
  *param_1 = CONCAT44(fStack_74,fStack_78);
  param_1[1] = CONCAT44(uStack_6c,fStack_70);
  *(float *)(param_1 + 2) = fVar1;
  *(float *)((longlong)param_1 + 0x14) = fVar2;
  *(float *)(param_1 + 3) = fVar3;
  *(float *)((longlong)param_1 + 0x1c) = fVar4;
  *(float *)(param_1 + 4) = fVar5;
  return param_1;
}

