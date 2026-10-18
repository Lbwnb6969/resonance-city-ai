// VA 0x1408f7f00, PDB extent 91 bytes
// system_decorator::blueprint::impl$1::eq
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/blueprint.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: system_decorator::blueprint::impl$1::eq
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/blueprint.rs
   Extent: 91 */

undefined4 pdb_1408f7f00(int *param_1,int *param_2)

{
  undefined1 auVar1 [16];
  int iVar2;
  
  iVar2 = *param_1;
  if (iVar2 != 0 || *param_2 != 0) {
    return CONCAT31((int3)((uint)iVar2 >> 8),iVar2 == *param_2);
  }
  if ((((*(longlong *)(param_1 + 4) == *(longlong *)(param_2 + 4)) &&
       ((float)param_1[1] == (float)param_2[1])) &&
      (!NAN((float)param_1[1]) && !NAN((float)param_2[1]))) &&
     ((((float)param_1[2] == (float)param_2[2] &&
       (!NAN((float)param_1[2]) && !NAN((float)param_2[2]))) &&
      (((float)param_1[3] == (float)param_2[3] &&
       (!NAN((float)param_1[3]) && !NAN((float)param_2[3]))))))) {
    auVar1._4_4_ = -(uint)((float)param_2[9] == (float)param_1[9]);
    auVar1._0_4_ = -(uint)((float)param_2[8] == (float)param_1[8]);
    auVar1._8_4_ = -(uint)((float)param_2[10] == (float)param_1[10]);
    auVar1._12_4_ = -(uint)((float)param_2[0xb] == (float)param_1[0xb]);
    iVar2 = movmskps((int)*(longlong *)(param_1 + 4),auVar1);
    return CONCAT31((int3)((uint)iVar2 >> 8),iVar2 == 0xf);
  }
  return 0;
}

