// VA 0x140c45c00, PDB extent 137 bytes
// country_core::resources::walls::cached_decorator_transforms::CachedDecoratorTransforms::swap_buffers_and_clear
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/cached_decorator_transforms.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::walls::cached_decorator_transforms::CachedDecoratorTransforms::swap_buffers_and_clear
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/cached_decorator_transforms.rs
   Extent: 137 */

void pdb_140c45c00(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulonglong uVar16;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar4 = param_2[1];
  uVar13 = param_2[2];
  uVar14 = *param_1;
  uVar15 = param_1[1];
  *param_1 = uVar1;
  *param_2 = uVar14;
  param_2[1] = uVar15;
  uVar5 = *(undefined4 *)(param_2 + 3);
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x1c);
  uVar7 = *(undefined4 *)(param_2 + 4);
  uVar8 = *(undefined4 *)((longlong)param_2 + 0x24);
  lVar3 = param_2[3];
  uVar9 = *(undefined4 *)(param_1 + 2);
  uVar10 = *(undefined4 *)((longlong)param_1 + 0x14);
  uVar11 = *(undefined4 *)(param_1 + 3);
  uVar12 = *(undefined4 *)((longlong)param_1 + 0x1c);
  param_1[1] = uVar4;
  param_1[2] = uVar13;
  *(undefined4 *)(param_2 + 2) = uVar9;
  *(undefined4 *)((longlong)param_2 + 0x14) = uVar10;
  *(undefined4 *)(param_2 + 3) = uVar11;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uVar12;
  uVar4 = param_2[5];
  uVar9 = *(undefined4 *)(param_1 + 4);
  uVar10 = *(undefined4 *)((longlong)param_1 + 0x24);
  uVar11 = *(undefined4 *)(param_1 + 5);
  uVar12 = *(undefined4 *)((longlong)param_1 + 0x2c);
  *(undefined4 *)(param_1 + 3) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar6;
  *(undefined4 *)(param_1 + 4) = uVar7;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar8;
  param_1[5] = uVar4;
  *(undefined4 *)(param_2 + 4) = uVar9;
  *(undefined4 *)((longlong)param_2 + 0x24) = uVar10;
  *(undefined4 *)(param_2 + 5) = uVar11;
  *(undefined4 *)((longlong)param_2 + 0x2c) = uVar12;
  if (lVar3 != 0) {
    if (uVar2 == 0) {
      uVar16 = 0;
    }
    else {
      pub_142e32780(uVar1,0xff,uVar2 + 0x11);
      uVar16 = (uVar2 + 1 & 0xfffffffffffffff8) - (uVar2 + 1 >> 3);
      if (uVar2 < 8) {
        uVar16 = uVar2;
      }
    }
    param_1[3] = 0;
    param_1[2] = uVar16;
  }
  return;
}

