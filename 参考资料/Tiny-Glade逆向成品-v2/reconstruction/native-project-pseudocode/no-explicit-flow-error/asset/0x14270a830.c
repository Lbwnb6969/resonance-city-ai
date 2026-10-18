// VA 0x14270a830, PDB extent 434 bytes
// asset::prefab::config::impl$5::inherit_from
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/asset/src/prefab/config.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: asset::prefab::config::impl$5::inherit_from
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/asset/src/prefab/config.rs
   Extent: 434 */

void pdb_14270a830(longlong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lStack_50;
  longlong lStack_48;
  longlong lStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  if (SBORROW8(0,*param_1)) {
    uVar1 = 2;
    if ((longlong)*param_2 < 0) {
      uVar1 = *param_2 ^ 0x8000000000000000;
    }
    lVar3 = -0x8000000000000000;
    if (uVar1 != 0) {
      if (uVar1 == 1) {
        lVar3 = -0x7fffffffffffffff;
      }
      else {
        pdb_140f60be0(&lStack_50);
        lVar3 = lStack_50;
      }
    }
    lStack_50 = lVar3;
    param_1[2] = lStack_40;
    *param_1 = lStack_50;
    param_1[1] = lStack_48;
    lVar3 = param_1[6];
  }
  else {
    lVar3 = param_1[6];
  }
  if (lVar3 == -0x7fffffffffffffff) {
    uVar1 = param_2[6];
    lVar3 = 2;
    if (0x8000000000000000 < uVar1) {
      lVar3 = uVar1 + 0x7fffffffffffffff;
    }
    lVar2 = -0x7fffffffffffffff;
    if (lVar3 != 0) {
      if (lVar3 == 1) {
        lVar2 = -0x7ffffffffffffffe;
      }
      else {
        lVar2 = -0x8000000000000000;
        if (!SBORROW8(0,uVar1)) {
          pdb_140f60be0(&lStack_50,param_2 + 6);
          lVar2 = lStack_50;
        }
        uStack_38 = lStack_48;
        uStack_30 = lStack_40;
      }
    }
    param_1[6] = lVar2;
    *(undefined4 *)(param_1 + 7) = (undefined4)uStack_38;
    *(undefined4 *)((longlong)param_1 + 0x3c) = uStack_38._4_4_;
    *(undefined4 *)(param_1 + 8) = (undefined4)uStack_30;
    *(undefined4 *)((longlong)param_1 + 0x44) = uStack_30._4_4_;
    lVar3 = param_1[3];
  }
  else {
    lVar3 = param_1[3];
  }
  if (SBORROW8(0,lVar3)) {
    uVar1 = 2;
    if ((longlong)param_2[3] < 0) {
      uVar1 = param_2[3] ^ 0x8000000000000000;
    }
    if (uVar1 == 0) {
      lStack_50 = -0x8000000000000000;
    }
    else if (uVar1 == 1) {
      lStack_50 = -0x7fffffffffffffff;
    }
    else {
      pdb_140f60be0(&lStack_50);
    }
    param_1[5] = lStack_40;
    param_1[3] = lStack_50;
    param_1[4] = lStack_48;
  }
  return;
}

