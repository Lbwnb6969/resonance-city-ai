// VA 0x141807350, PDB extent 718 bytes
// turbosloth::store::impl$1::hash<std::hash::random::DefaultHasher>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/store.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: turbosloth::store::impl$1::hash<std::hash::random::DefaultHasher>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/store.rs
   Extent: 718 */

void pdb_141807350(ulonglong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  bool bVar12;
  ulonglong auStack_28 [3];
  
  auStack_28[0] = *param_1;
  auStack_28[1] = param_1[1];
  param_2[6] = param_2[6] + 0x10;
  uVar5 = param_2[8];
  if (uVar5 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = 8 - uVar5;
    uVar9 = 0x10;
    if (uVar7 < 0x10) {
      uVar9 = uVar7;
    }
    bVar12 = 3 < uVar7;
    uVar8 = 0;
    if (bVar12) {
      uVar8 = auStack_28[0] & 0xffffffff;
    }
    uVar1 = (ulonglong)((uint)bVar12 * 4);
    if ((uint)bVar12 * 4 + 1 < (uint)uVar9) {
      uVar8 = uVar8 | (ulonglong)*(ushort *)((longlong)auStack_28 + (ulonglong)(3 < uVar7) * 4) <<
                      (char)((uint)bVar12 * 4) * '\b';
      uVar1 = uVar1 | 2;
    }
    if (uVar1 < uVar9) {
      uVar8 = uVar8 | (ulonglong)*(byte *)((longlong)auStack_28 + uVar1) << (sbyte)((int)uVar1 << 3)
      ;
    }
    uVar9 = uVar8 << ((char)uVar5 * '\b' & 0x3fU) | param_2[7];
    param_2[7] = uVar9;
    if (0x10 < uVar7) {
      uVar5 = uVar5 + 0x10;
      goto LAB_141807613;
    }
    uVar8 = param_2[3] ^ uVar9;
    uVar5 = param_2[2];
    uVar1 = *param_2 + uVar5;
    uVar10 = (uVar5 << 0xd | uVar5 >> 0x33) ^ uVar1;
    uVar5 = (uVar8 << 0x10 | uVar8 >> 0x30) ^ param_2[1] + uVar8;
    uVar6 = param_2[1] + uVar8 + uVar10;
    uVar8 = (uVar1 << 0x20 | uVar1 >> 0x20) + uVar5;
    param_2[2] = (uVar10 << 0x11 | uVar10 >> 0x2f) ^ uVar6;
    param_2[3] = (uVar5 << 0x15 | uVar5 >> 0x2b) ^ uVar8;
    param_2[1] = uVar6 << 0x20 | uVar6 >> 0x20;
    *param_2 = uVar8 ^ uVar9;
  }
  uVar3 = 0x10 - (int)uVar7;
  uVar4 = uVar3 & 7;
  uVar5 = (ulonglong)uVar4;
  uVar8 = (ulonglong)(uVar3 & 0xfffffff8);
  uVar9 = uVar7;
  if (uVar7 < uVar8) {
    uVar9 = param_2[2];
    uVar1 = param_2[3] ^ *(ulonglong *)((longlong)auStack_28 + uVar7);
    uVar10 = *param_2 + uVar9;
    uVar9 = (uVar9 << 0xd | uVar9 >> 0x33) ^ uVar10;
    uVar6 = (uVar1 << 0x10 | uVar1 >> 0x30) ^ param_2[1] + uVar1;
    uVar11 = param_2[1] + uVar1 + uVar9;
    uVar10 = (uVar10 << 0x20 | uVar10 >> 0x20) + uVar6;
    uVar1 = (uVar9 << 0x11 | uVar9 >> 0x2f) ^ uVar11;
    uVar11 = uVar11 << 0x20 | uVar11 >> 0x20;
    uVar6 = (uVar6 << 0x15 | uVar6 >> 0x2b) ^ uVar10;
    uVar10 = uVar10 ^ *(ulonglong *)((longlong)auStack_28 + uVar7);
    uVar9 = uVar7 + 8;
    if (uVar9 < uVar8) {
      uVar9 = *(ulonglong *)((longlong)auStack_28 + uVar7 + 8);
      uVar6 = uVar6 ^ uVar9;
      uVar10 = uVar10 + uVar1;
      uVar1 = (uVar1 << 0xd | uVar1 >> 0x33) ^ uVar10;
      uVar2 = (uVar6 << 0x10 | uVar6 >> 0x30) ^ uVar11 + uVar6;
      uVar6 = uVar11 + uVar6 + uVar1;
      uVar10 = (uVar10 << 0x20 | uVar10 >> 0x20) + uVar2;
      uVar1 = (uVar1 << 0x11 | uVar1 >> 0x2f) ^ uVar6;
      uVar11 = uVar6 << 0x20 | uVar6 >> 0x20;
      uVar6 = (uVar2 << 0x15 | uVar2 >> 0x2b) ^ uVar10;
      uVar10 = uVar10 ^ uVar9;
      uVar9 = uVar7 + 0x10;
      if (uVar9 < uVar8) {
        uVar9 = *(ulonglong *)((longlong)auStack_28 + uVar7 + 0x10);
        uVar6 = uVar6 ^ uVar9;
        uVar10 = uVar10 + uVar1;
        uVar1 = (uVar1 << 0xd | uVar1 >> 0x33) ^ uVar10;
        uVar2 = (uVar6 << 0x10 | uVar6 >> 0x30) ^ uVar11 + uVar6;
        uVar6 = uVar11 + uVar6 + uVar1;
        uVar10 = (uVar10 << 0x20 | uVar10 >> 0x20) + uVar2;
        uVar1 = (uVar1 << 0x11 | uVar1 >> 0x2f) ^ uVar6;
        uVar11 = uVar6 << 0x20 | uVar6 >> 0x20;
        uVar6 = (uVar2 << 0x15 | uVar2 >> 0x2b) ^ uVar10;
        uVar10 = uVar10 ^ uVar9;
        uVar9 = uVar7 + 0x18;
        if (uVar9 < uVar8) {
          uVar6 = uVar6 ^ *(ulonglong *)(&stack0xfffffffffffffff0 + uVar7);
          uVar10 = uVar10 + uVar1;
          uVar9 = (uVar1 << 0xd | uVar1 >> 0x33) ^ uVar10;
          uVar8 = (uVar6 << 0x10 | uVar6 >> 0x30) ^ uVar11 + uVar6;
          uVar6 = uVar11 + uVar6 + uVar9;
          uVar10 = (uVar10 << 0x20 | uVar10 >> 0x20) + uVar8;
          uVar1 = (uVar9 << 0x11 | uVar9 >> 0x2f) ^ uVar6;
          uVar11 = uVar6 << 0x20 | uVar6 >> 0x20;
          uVar6 = (uVar8 << 0x15 | uVar8 >> 0x2b) ^ uVar10;
          uVar10 = uVar10 ^ *(ulonglong *)(&stack0xfffffffffffffff0 + uVar7);
          uVar9 = uVar7 | 0x20;
        }
      }
    }
    param_2[3] = uVar6;
    param_2[2] = uVar1;
    param_2[1] = uVar11;
    *param_2 = uVar10;
  }
  if (uVar4 < 4) {
    uVar7 = 0;
    uVar8 = 0;
    if (1 < uVar4) goto LAB_1418075dd;
  }
  else {
    uVar8 = (ulonglong)*(uint *)((longlong)auStack_28 + uVar9);
    uVar7 = 4;
    if (5 < uVar4) {
LAB_1418075dd:
      uVar8 = uVar8 | (ulonglong)*(ushort *)((longlong)auStack_28 + uVar7 + uVar9) <<
                      (char)uVar7 * '\b';
      uVar7 = uVar7 | 2;
    }
  }
  if ((uint)uVar7 < uVar4) {
    uVar8 = uVar8 | (ulonglong)*(byte *)((longlong)auStack_28 + uVar9 + uVar7) <<
                    (sbyte)((uint)uVar7 << 3);
  }
  param_2[7] = uVar8;
LAB_141807613:
  param_2[8] = uVar5;
  return;
}

