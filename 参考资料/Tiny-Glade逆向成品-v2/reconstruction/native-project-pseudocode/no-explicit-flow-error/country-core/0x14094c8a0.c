// VA 0x14094c8a0, PDB extent 593 bytes
// country_core::geometry::instanced_wall::pack_half_pair
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/geometry/instanced_wall.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::geometry::instanced_wall::pack_half_pair
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/geometry/instanced_wall.rs
   Extent: 593 */

uint pdb_14094c8a0(ulonglong param_1)

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
    uVar5 = (uint)param_1;
    uVar6 = uVar5 & 0x7f800000;
    uVar4 = uVar5 & 0x7fffff;
    if (uVar6 == 0x7f800000) {
      uVar5 = uVar4 >> 0xd | (uVar5 & 0x80000000) >> 0x10 | (uint)((param_1 & 0x7fffff) != 0) << 9 |
              0x7c00;
    }
    else {
      uVar5 = (uVar5 & 0x80000000) >> 0x10;
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
    uVar5 = pdb_14094f6a0(param_1 & 0xffffffff);
  }
  uVar4 = (uint)(param_1 >> 0x20);
  if (*puVar1 == 0) {
    uVar3 = pdb_142dec140();
    uVar3 = uVar3 >> 0x37 & 1;
  }
  else {
    uVar3 = *puVar1 & 0x80000000000000;
  }
  if (uVar3 == 0) {
    uVar7 = uVar4 & 0x7f800000;
    uVar6 = uVar4 & 0x7fffff;
    if (uVar7 == 0x7f800000) {
      uVar4 = uVar6 >> 0xd | (uVar4 & 0x80000000) >> 0x10 |
              (uint)((param_1 & 0x7fffff00000000) != 0) << 9 | 0x7c00;
    }
    else {
      uVar4 = (uVar4 & 0x80000000) >> 0x10;
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
          uVar4 = (uint)((param_1 >> 0x20 & 0x2fff) != 0 & (byte)(param_1 >> 0x2c)) +
                  ((uVar6 >> 0xd) + (uVar7 >> 0xd) + 0x4000 | uVar4);
        }
      }
      else {
        uVar4 = uVar4 | 0x7c00;
      }
    }
  }
  else {
    uVar4 = pdb_14094f6a0(param_1 >> 0x20);
  }
  return uVar4 << 0x10 | uVar5 & 0xffff;
}

