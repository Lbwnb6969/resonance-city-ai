// VA 0x141b4a940, PDB extent 305 bytes
// tg_mods::identity::sidecar_zip_stem
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-mods/src/identity.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: tg_mods::identity::sidecar_zip_stem
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tg-mods/src/identity.rs
   Extent: 305 */

longlong pdb_141b4a940(longlong param_1,ulonglong param_2)

{
  byte bVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  
  lVar4 = param_2 - 0xc;
  if (param_2 < 0xc) {
    if (param_2 < 8) {
      return 0;
    }
    goto LAB_141b4a99f;
  }
  uVar6 = 0x2e6d6f642d69642e;
  uVar3 = *(ulonglong *)(param_1 + lVar4);
  uVar3 = uVar3 >> 0x38 | (uVar3 & 0xff000000000000) >> 0x28 | (uVar3 & 0xff0000000000) >> 0x18 |
          (uVar3 & 0xff00000000) >> 8 | (uVar3 & 0xff000000) << 8 | (uVar3 & 0xff0000) << 0x18 |
          (uVar3 & 0xff00) << 0x28 | uVar3 << 0x38;
  if (uVar3 == 0x2e6d6f642d69642e) {
    uVar2 = *(uint *)(param_1 + 8 + lVar4);
    uVar2 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
    uVar3 = (ulonglong)uVar2;
    iVar5 = 0;
    if (uVar2 != 0x6a736f6e) {
      uVar6 = 0x6a736f6e;
      goto LAB_141b4a984;
    }
  }
  else {
LAB_141b4a984:
    iVar5 = (uint)(uVar3 <= uVar6) * 2 + -1;
  }
  if (iVar5 == 0) {
    if (lVar4 == 0) {
      param_1 = 0;
    }
    return param_1;
  }
LAB_141b4a99f:
  uVar3 = *(ulonglong *)(param_1 + -8 + param_2);
  uVar3 = uVar3 >> 0x38 | (uVar3 & 0xff000000000000) >> 0x28 | (uVar3 & 0xff0000000000) >> 0x18 |
          (uVar3 & 0xff00000000) >> 8 | (uVar3 & 0xff000000) << 8 | (uVar3 & 0xff0000) << 0x18 |
          (uVar3 & 0xff00) << 0x28 | uVar3 << 0x38;
  if (uVar3 < 0x2e69642e6a736f6e != 0x2e69642e6a736f6e < uVar3 || param_2 - 8 < 4) {
    return 0;
  }
  if (lVar4 != 0) {
    bVar1 = *(byte *)(param_1 + lVar4);
    if ((char)bVar1 < -0x40) {
      return 0;
    }
    if ((((byte)(((byte)(bVar1 + 0xbf) < 0x1a) << 5 | bVar1) == 0x2e) &&
        (bVar1 = *(byte *)(param_1 + 1 + lVar4),
        (byte)(((byte)(bVar1 + 0xbf) < 0x1a) << 5 | bVar1) == 0x7a)) &&
       (bVar1 = *(byte *)(param_1 + 2 + lVar4),
       (byte)(((byte)(bVar1 + 0xbf) < 0x1a) << 5 | bVar1) == 0x69)) {
      bVar1 = *(byte *)(param_1 + 3 + lVar4);
      if ((byte)(((byte)(bVar1 + 0xbf) < 0x1a) << 5 | bVar1) != 0x70) {
        param_1 = 0;
      }
      return param_1;
    }
  }
  return 0;
}

