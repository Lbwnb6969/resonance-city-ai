// VA 0x140b788c0, PDB extent 635 bytes
// country_core::startup::mod_hot_reload::event_paths
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/mod_hot_reload.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::startup::mod_hot_reload::event_paths
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/mod_hot_reload.rs
   Extent: 635 */

undefined8 *
pdb_140b788c0(undefined8 *param_1,ulonglong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  
  uVar8 = 0xfffffffffffffffe;
  uVar1 = *param_2;
  uVar7 = 6;
  if ((longlong)uVar1 < 0) {
    uVar7 = uVar1 ^ 0x8000000000000000;
  }
  if ((uVar7 - 2 < 2) || (uVar7 == 5)) {
    uVar1 = param_2[1];
    uVar2 = param_2[2];
    pdb_14007ee60();
    puVar6 = (ulonglong *)pub_1406abab0(0x20,8);
    if (puVar6 == (ulonglong *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,0x20);
    }
    *puVar6 = uVar1;
    puVar6[1] = uVar2;
    uVar4 = *(undefined4 *)((longlong)param_2 + 0x1c);
    uVar1 = param_2[4];
    uVar5 = *(undefined4 *)((longlong)param_2 + 0x24);
    *(int *)(puVar6 + 2) = (int)param_2[3];
    *(undefined4 *)((longlong)puVar6 + 0x14) = uVar4;
    *(int *)(puVar6 + 3) = (int)uVar1;
    *(undefined4 *)((longlong)puVar6 + 0x1c) = uVar5;
    uVar8 = 1;
  }
  else {
    if (uVar7 == 6) {
      uVar7 = param_2[1];
      uVar2 = param_2[4];
      uVar3 = param_2[5];
      pdb_14007ee60();
      puVar6 = (ulonglong *)pub_1406abab0(0x40,8);
      if (puVar6 != (ulonglong *)0x0) {
        *puVar6 = uVar1;
        puVar6[1] = uVar7;
        uVar1 = param_2[3];
        puVar6[2] = param_2[2];
        puVar6[3] = uVar1;
        puVar6[4] = uVar2;
        puVar6[5] = uVar3;
        uVar1 = param_2[7];
        puVar6[6] = param_2[6];
        puVar6[7] = uVar1;
        *param_1 = 2;
        param_1[1] = puVar6;
        param_1[2] = 2;
        return param_1;
      }
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,0x40,param_3,param_4,uVar7,uVar3,6,param_2,uVar1,uVar2,uVar8);
    }
    puVar6 = (ulonglong *)0x8;
    uVar8 = 0;
  }
  *param_1 = uVar8;
  param_1[1] = puVar6;
  param_1[2] = uVar8;
  if ((6 < uVar7) || ((0x6cUL >> (uVar7 & 0x3f) & 1) == 0)) {
    pdb_140987790(param_2);
  }
  return param_1;
}

