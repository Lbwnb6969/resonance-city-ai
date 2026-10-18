// VA 0x1415e7d90, PDB extent 585 bytes
// utils::impl$4::assign_auto_resize<enum2$<core::option::Option<country_core::asset_libraries::texture_library::DescriptorIndex> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   utils::impl$4::assign_auto_resize<enum2$<core::option::Option<country_core::asset_libraries::texture_library::DescriptorIndex>
   > >
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/lib.rs
   Extent: 585 */

void pdb_1415e7d90(ulonglong *param_1,ulonglong param_2,undefined4 param_3,undefined4 param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  
  uVar3 = param_1[2];
  if (param_2 < uVar3 == uVar3 < param_2) {
    if (uVar3 == *param_1) {
      pdb_142d8d7f0();
    }
    uVar2 = param_1[1];
    *(undefined4 *)(uVar2 + uVar3 * 8) = param_3;
    *(undefined4 *)(uVar2 + 4 + uVar3 * 8) = param_4;
    param_1[2] = uVar3 + 1;
    return;
  }
  if ((char)((param_2 < uVar3) - (uVar3 < param_2)) == '\x01') {
    if (param_2 < uVar3) {
      uVar3 = param_1[1];
      *(undefined4 *)(uVar3 + param_2 * 8) = param_3;
      *(undefined4 *)(uVar3 + 4 + param_2 * 8) = param_4;
      return;
    }
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(param_2,uVar3,&UNK_143320240);
  }
  uVar1 = (param_2 - uVar3) + 1;
  uVar2 = *param_1;
  if (uVar2 - uVar3 < uVar1) {
    pdb_142d7f1b0(param_1,uVar3,uVar1,4,8);
    uVar2 = *param_1;
    uVar3 = param_1[2];
    uVar1 = param_2 - uVar3;
    if (uVar3 <= param_2 && uVar1 != 0) goto LAB_1415e7eae;
LAB_1415e7e22:
    param_1[2] = param_2;
    if (param_2 != uVar2) goto LAB_1415e7e48;
  }
  else {
    uVar1 = param_2 - uVar3;
    if (param_2 < uVar3 || uVar1 == 0) goto LAB_1415e7e22;
LAB_1415e7eae:
    if (uVar2 - uVar3 < uVar1) {
      pdb_142d7f1b0(param_1,uVar3,uVar1,4,8);
      puVar4 = (undefined4 *)(param_1[2] * 8 + param_1[1]);
      uVar2 = param_1[2];
    }
    else {
      puVar4 = (undefined4 *)(uVar3 * 8 + param_1[1]);
      uVar2 = uVar3;
    }
    if (1 < uVar1) {
      uVar5 = (ulonglong)((uint)(param_2 + ~uVar3) & 7);
      if (uVar1 - 2 < 7) goto LAB_1415e7f40;
      uVar3 = param_2 + ~uVar3 & 0xfffffffffffffff8;
      do {
        *puVar4 = 0;
        puVar4[2] = 0;
        puVar4[4] = 0;
        puVar4[6] = 0;
        puVar4[8] = 0;
        puVar4[10] = 0;
        puVar4[0xc] = 0;
        puVar4[0xe] = 0;
        puVar4 = puVar4 + 0x10;
        uVar3 = uVar3 - 8;
      } while (uVar3 != 0);
      for (; uVar5 != 0; uVar5 = uVar5 - 1) {
LAB_1415e7f40:
        *puVar4 = 0;
        puVar4 = puVar4 + 2;
      }
      uVar2 = (uVar2 + uVar1) - 1;
    }
    *puVar4 = 0;
    param_2 = uVar2 + 1;
    param_1[2] = param_2;
    if (param_2 != *param_1) goto LAB_1415e7e48;
  }
  pdb_142d8d7f0();
LAB_1415e7e48:
  uVar3 = param_1[1];
  *(undefined4 *)(uVar3 + param_2 * 8) = param_3;
  *(undefined4 *)(uVar3 + 4 + param_2 * 8) = param_4;
  param_1[2] = param_2 + 1;
  return;
}

