// VA 0x1417c3140, PDB extent 381 bytes
// country_core::resources::walls::decorator::impl$30::hash<std::hash::random::DefaultHasher>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::walls::decorator::impl$30::hash<std::hash::random::DefaultHasher>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator.rs
   Extent: 381 */

void pdb_1417c3140(uint param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  bool bVar9;
  ushort auStack_14 [2];
  
  param_2[6] = param_2[6] + 4;
  uVar1 = param_2[8];
  if (uVar1 == 0) {
LAB_1417c3246:
    uVar2 = (ulonglong)param_1;
    uVar8 = 4;
    uVar6 = 0;
    uVar7 = 4;
  }
  else {
    uVar6 = -uVar1 + 8;
    bVar9 = 3 < uVar6;
    uVar8 = 4;
    if (!bVar9) {
      uVar8 = uVar6;
    }
    uVar7 = 0;
    if (bVar9) {
      uVar7 = (ulonglong)param_1;
    }
    uVar2 = (ulonglong)((uint)bVar9 * 4);
    if ((uint)bVar9 * 4 + 1 < (uint)uVar8) {
      uVar7 = uVar7 | (ulonglong)auStack_14[(ulonglong)(3 < uVar6) * 2] <<
                      (char)((uint)bVar9 * 4) * '\b';
      uVar2 = uVar2 | 2;
    }
    if (uVar2 < uVar8) {
      uVar7 = uVar7 | (ulonglong)*(byte *)((longlong)auStack_14 + uVar2) << (sbyte)((int)uVar2 << 3)
      ;
    }
    uVar8 = uVar7 << ((char)uVar1 * '\b' & 0x3fU) | param_2[7];
    param_2[7] = uVar8;
    if (4 < uVar6) {
      uVar8 = uVar1 + 4;
      goto LAB_1417c329b;
    }
    uVar3 = param_2[3] ^ uVar8;
    uVar7 = param_2[2];
    uVar2 = *param_2 + uVar7;
    uVar5 = (uVar7 << 0xd | uVar7 >> 0x33) ^ uVar2;
    uVar4 = (uVar3 << 0x10 | uVar3 >> 0x30) ^ param_2[1] + uVar3;
    uVar3 = param_2[1] + uVar3 + uVar5;
    uVar7 = (uVar2 << 0x20 | uVar2 >> 0x20) + uVar4;
    param_2[2] = (uVar5 << 0x11 | uVar5 >> 0x2f) ^ uVar3;
    param_2[3] = (uVar4 << 0x15 | uVar4 >> 0x2b) ^ uVar7;
    param_2[1] = uVar3 << 0x20 | uVar3 >> 0x20;
    *param_2 = uVar7 ^ uVar8;
    if (uVar1 == 8) goto LAB_1417c3246;
    uVar8 = uVar1 - 4;
    uVar7 = 0;
    uVar2 = 0;
    if (1 < uVar8) {
      uVar2 = (ulonglong)*(ushort *)(&stack0xfffffffffffffff4 + -uVar1);
      uVar7 = 2;
    }
  }
  if (uVar7 < uVar8) {
    uVar2 = uVar2 | (ulonglong)*(byte *)((longlong)auStack_14 + uVar6 + uVar7) <<
                    (sbyte)((int)uVar7 << 3);
  }
  param_2[7] = uVar2;
LAB_1417c329b:
  param_2[8] = uVar8;
  return;
}

