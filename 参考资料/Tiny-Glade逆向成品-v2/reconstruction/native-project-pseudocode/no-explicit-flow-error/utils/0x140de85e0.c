// VA 0x140de85e0, PDB extent 610 bytes
// utils::pack_2x16f_uint
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: utils::pack_2x16f_uint
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/lib.rs
   Extent: 610 */

uint pdb_140de85e0(uint param_1,uint param_2)

{
  ulonglong *puVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  puVar1 = _DAT_143cad8c0;
  if (*_DAT_143cad8c0 == 0) {
    uVar3 = pdb_142dec140();
    uVar3 = uVar3 >> 0x37 & 1;
  }
  else {
    uVar3 = *_DAT_143cad8c0 & 0x80000000000000;
  }
  if (uVar3 == 0) {
    uVar6 = param_1 & 0x7f800000;
    uVar4 = param_1 & 0x7fffff;
    if (uVar6 == 0x7f800000) {
      uVar5 = uVar4 >> 0xd | (param_1 & 0x80000000) >> 0x10 | (uint)(uVar4 != 0) << 9 | 0x7c00;
    }
    else {
      uVar5 = (param_1 & 0x80000000) >> 0x10;
      if (uVar6 < 0x47000001) {
        if (uVar6 < 0x38800000) {
          if (0x32ffffff < uVar6) {
            uVar4 = uVar4 | 0x800000;
            uVar7 = uVar4 >> (0x7eU - (char)(uVar6 >> 0x17) & 0x1f);
            uVar6 = 0x1d - (uVar6 >> 0x17) & 0x1f;
            if ((uVar4 >> uVar6 & 1) != 0) {
              uVar7 = (uVar7 + 1) - (uint)(((3 << (sbyte)uVar6) - 1U & uVar4) == 0);
            }
            uVar5 = uVar7 | uVar5;
          }
        }
        else {
          uVar5 = (uint)((param_1 & 0x2fff) != 0 & (byte)(param_1 >> 0xc)) +
                  ((uVar4 >> 0xd) + (uVar6 >> 0xd) + 0x4000 | uVar5);
        }
      }
      else {
        uVar5 = uVar5 | 0x7c00;
      }
    }
  }
  else {
    uVar5 = pdb_14094f6a0();
  }
  if (*puVar1 == 0) {
    uVar3 = pdb_142dec140();
    uVar3 = uVar3 >> 0x37 & 1;
  }
  else {
    uVar3 = *puVar1 & 0x80000000000000;
  }
  if (uVar3 == 0) {
    uVar7 = param_2 & 0x7f800000;
    uVar6 = param_2 & 0x7fffff;
    if (uVar7 == 0x7f800000) {
      uVar4 = uVar6 >> 0xd | (param_2 & 0x80000000) >> 0x10 | (uint)(uVar6 != 0) << 9 | 0x7c00;
    }
    else {
      uVar4 = (param_2 & 0x80000000) >> 0x10;
      if (uVar7 < 0x47000001) {
        if (uVar7 < 0x38800000) {
          if (0x32ffffff < uVar7) {
            uVar6 = uVar6 | 0x800000;
            uVar2 = uVar6 >> (0x7eU - (char)(uVar7 >> 0x17) & 0x1f);
            uVar7 = 0x1d - (uVar7 >> 0x17) & 0x1f;
            if ((uVar6 >> uVar7 & 1) != 0) {
              uVar2 = (uVar2 + 1) - (uint)(((3 << (sbyte)uVar7) - 1U & uVar6) == 0);
            }
            uVar4 = uVar2 | uVar4;
          }
        }
        else {
          uVar4 = (uint)((param_2 & 0x2fff) != 0 & (byte)(param_2 >> 0xc)) +
                  ((uVar7 >> 0xd) + (uVar6 >> 0xd) + 0x4000 | uVar4);
        }
      }
      else {
        uVar4 = uVar4 | 0x7c00;
      }
    }
  }
  else {
    uVar4 = pdb_14094f6a0();
  }
  return uVar4 << 0x10 | uVar5 & 0xffff;
}

