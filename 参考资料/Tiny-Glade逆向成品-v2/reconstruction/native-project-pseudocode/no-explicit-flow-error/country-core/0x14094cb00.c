// VA 0x14094cb00, PDB extent 1941 bytes
// country_core::resources::rt::GpuRtTriangle::new
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/rt/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::resources::rt::GpuRtTriangle::new
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/rt/mod.rs
   Extent: 1941 */

undefined8 * pdb_14094cb00(undefined8 *param_1,undefined8 *param_2)

{
  float fVar1;
  undefined8 uVar2;
  undefined1 auVar3 [12];
  ulonglong *puVar4;
  ushort uVar5;
  ushort uVar6;
  ulonglong uVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  
  puVar4 = _DAT_143cad8c0;
  uVar2 = *param_2;
  fVar22 = (float)((ulonglong)uVar2 >> 0x20);
  fVar1 = *(float *)(param_2 + 1);
  fVar20 = *(float *)(param_2 + 2);
  fVar18 = *(float *)((longlong)param_2 + 0x14);
  fVar21 = *(float *)(param_2 + 3);
  fVar19 = *(float *)((longlong)param_2 + 0x1c);
  fVar17 = *(float *)(param_2 + 4);
  fVar16 = *(float *)((longlong)param_2 + 0xc) - (float)uVar2;
  if (*_DAT_143cad8c0 == 0) {
    uVar7 = pdb_142dec140();
    uVar7 = uVar7 >> 0x37 & 1;
  }
  else {
    uVar7 = *_DAT_143cad8c0 & 0x80000000000000;
  }
  if (uVar7 == 0) {
    uVar8 = (ushort)((uint)fVar16 >> 0x10) & 0x8000;
    uVar13 = (uint)fVar16 & 0x7f800000;
    uVar11 = (uint)fVar16 & 0x7fffff;
    if (uVar13 == 0x7f800000) {
      uVar8 = (ushort)(uVar11 >> 0xd) | uVar8 | (ushort)(uVar11 != 0) << 9 | 0x7c00;
    }
    else if (uVar13 < 0x47000001) {
      if (uVar13 < 0x38800000) {
        if (0x32ffffff < uVar13) {
          uVar11 = uVar11 | 0x800000;
          uVar9 = (ushort)(uVar11 >> (0x7eU - (char)(uVar13 >> 0x17) & 0x1f));
          uVar13 = 0x1d - (uVar13 >> 0x17) & 0x1f;
          if ((uVar11 >> uVar13 & 1) != 0) {
            uVar9 = (uVar9 + 1) - (ushort)(((3 << (sbyte)uVar13) - 1U & uVar11) == 0);
          }
          uVar8 = uVar9 | uVar8;
        }
      }
      else {
        uVar8 = (ushort)(((uint)fVar16 & 0x2fff) != 0 & (byte)((uint)fVar16 >> 0xc)) +
                ((short)(uVar11 >> 0xd) + (short)(uVar13 >> 0xd) + 0x4000U | uVar8);
      }
    }
    else {
      uVar8 = uVar8 | 0x7c00;
    }
  }
  else {
    uVar8 = pdb_14094f6a0();
  }
  fVar21 = fVar21 - (float)uVar2;
  if (*puVar4 == 0) {
    uVar7 = pdb_142dec140();
    uVar7 = uVar7 >> 0x37 & 1;
  }
  else {
    uVar7 = *puVar4 & 0x80000000000000;
  }
  if (uVar7 == 0) {
    uVar13 = (uint)fVar21 & 0x7f800000;
    uVar11 = (uint)fVar21 & 0x7fffff;
    if (uVar13 == 0x7f800000) {
      uVar12 = uVar11 >> 0xd | ((uint)fVar21 & 0x80000000) >> 0x10 | (uint)(uVar11 != 0) << 9 |
               0x7c00;
    }
    else {
      uVar12 = ((uint)fVar21 & 0x80000000) >> 0x10;
      if (uVar13 < 0x47000001) {
        if (uVar13 < 0x38800000) {
          if (0x32ffffff < uVar13) {
            uVar11 = uVar11 | 0x800000;
            uVar14 = uVar11 >> (0x7eU - (char)(uVar13 >> 0x17) & 0x1f);
            uVar13 = 0x1d - (uVar13 >> 0x17) & 0x1f;
            if ((uVar11 >> uVar13 & 1) != 0) {
              uVar14 = (uVar14 + 1) - (uint)(((3 << (sbyte)uVar13) - 1U & uVar11) == 0);
            }
            uVar12 = uVar14 | uVar12;
          }
        }
        else {
          uVar12 = (uint)(((uint)fVar21 & 0x2fff) != 0 & (byte)((uint)fVar21 >> 0xc)) +
                   ((uVar11 >> 0xd) + (uVar13 >> 0xd) + 0x4000 | uVar12);
        }
      }
      else {
        uVar12 = uVar12 | 0x7c00;
      }
    }
  }
  else {
    uVar12 = pdb_14094f6a0();
  }
  fVar20 = fVar20 - fVar22;
  if (*puVar4 == 0) {
    uVar7 = pdb_142dec140();
    uVar7 = uVar7 >> 0x37 & 1;
  }
  else {
    uVar7 = *puVar4 & 0x80000000000000;
  }
  if (uVar7 == 0) {
    uVar9 = (ushort)((uint)fVar20 >> 0x10) & 0x8000;
    uVar13 = (uint)fVar20 & 0x7f800000;
    uVar11 = (uint)fVar20 & 0x7fffff;
    if (uVar13 == 0x7f800000) {
      uVar9 = (ushort)(uVar11 >> 0xd) | uVar9 | (ushort)(uVar11 != 0) << 9 | 0x7c00;
    }
    else if (uVar13 < 0x47000001) {
      if (uVar13 < 0x38800000) {
        if (0x32ffffff < uVar13) {
          uVar11 = uVar11 | 0x800000;
          uVar10 = (ushort)(uVar11 >> (0x7eU - (char)(uVar13 >> 0x17) & 0x1f));
          uVar13 = 0x1d - (uVar13 >> 0x17) & 0x1f;
          if ((uVar11 >> uVar13 & 1) != 0) {
            uVar10 = (uVar10 + 1) - (ushort)(((3 << (sbyte)uVar13) - 1U & uVar11) == 0);
          }
          uVar9 = uVar10 | uVar9;
        }
      }
      else {
        uVar9 = (ushort)(((uint)fVar20 & 0x2fff) != 0 & (byte)((uint)fVar20 >> 0xc)) +
                ((short)(uVar11 >> 0xd) + (short)(uVar13 >> 0xd) + 0x4000U | uVar9);
      }
    }
    else {
      uVar9 = uVar9 | 0x7c00;
    }
  }
  else {
    uVar9 = pdb_14094f6a0();
  }
  fVar19 = fVar19 - fVar22;
  if (*puVar4 == 0) {
    uVar7 = pdb_142dec140();
    uVar7 = uVar7 >> 0x37 & 1;
  }
  else {
    uVar7 = *puVar4 & 0x80000000000000;
  }
  if (uVar7 == 0) {
    uVar10 = (ushort)((uint)fVar19 >> 0x10) & 0x8000;
    uVar13 = (uint)fVar19 & 0x7f800000;
    uVar11 = (uint)fVar19 & 0x7fffff;
    if (uVar13 == 0x7f800000) {
      uVar10 = (ushort)(uVar11 >> 0xd) | uVar10 | (ushort)(uVar11 != 0) << 9 | 0x7c00;
    }
    else if (uVar13 < 0x47000001) {
      if (uVar13 < 0x38800000) {
        if (0x32ffffff < uVar13) {
          uVar11 = uVar11 | 0x800000;
          uVar5 = (ushort)(uVar11 >> (0x7eU - (char)(uVar13 >> 0x17) & 0x1f));
          uVar13 = 0x1d - (uVar13 >> 0x17) & 0x1f;
          if ((uVar11 >> uVar13 & 1) != 0) {
            uVar5 = (uVar5 + 1) - (ushort)(((3 << (sbyte)uVar13) - 1U & uVar11) == 0);
          }
          uVar10 = uVar5 | uVar10;
        }
      }
      else {
        uVar10 = (ushort)(((uint)fVar19 & 0x2fff) != 0 & (byte)((uint)fVar19 >> 0xc)) +
                 ((short)(uVar11 >> 0xd) + (short)(uVar13 >> 0xd) + 0x4000U | uVar10);
      }
    }
    else {
      uVar10 = uVar10 | 0x7c00;
    }
  }
  else {
    uVar10 = pdb_14094f6a0();
  }
  fVar18 = fVar18 - fVar1;
  if (*puVar4 == 0) {
    uVar7 = pdb_142dec140();
    uVar7 = uVar7 >> 0x37 & 1;
  }
  else {
    uVar7 = *puVar4 & 0x80000000000000;
  }
  if (uVar7 == 0) {
    uVar14 = (uint)fVar18 & 0x7f800000;
    uVar13 = (uint)fVar18 & 0x7fffff;
    if (uVar14 == 0x7f800000) {
      uVar11 = uVar13 >> 0xd | ((uint)fVar18 & 0x80000000) >> 0x10 | (uint)(uVar13 != 0) << 9 |
               0x7c00;
    }
    else {
      uVar11 = ((uint)fVar18 & 0x80000000) >> 0x10;
      if (uVar14 < 0x47000001) {
        if (uVar14 < 0x38800000) {
          if (0x32ffffff < uVar14) {
            uVar13 = uVar13 | 0x800000;
            uVar15 = uVar13 >> (0x7eU - (char)(uVar14 >> 0x17) & 0x1f);
            uVar14 = 0x1d - (uVar14 >> 0x17) & 0x1f;
            if ((uVar13 >> uVar14 & 1) != 0) {
              uVar15 = (uVar15 + 1) - (uint)(((3 << (sbyte)uVar14) - 1U & uVar13) == 0);
            }
            uVar11 = uVar15 | uVar11;
          }
        }
        else {
          uVar11 = (uint)(((uint)fVar18 & 0x2fff) != 0 & (byte)((uint)fVar18 >> 0xc)) +
                   ((uVar13 >> 0xd) + (uVar14 >> 0xd) + 0x4000 | uVar11);
        }
      }
      else {
        uVar11 = uVar11 | 0x7c00;
      }
    }
  }
  else {
    uVar11 = pdb_14094f6a0();
  }
  fVar17 = fVar17 - fVar1;
  if (*puVar4 == 0) {
    uVar7 = pdb_142dec140();
    uVar7 = uVar7 >> 0x37 & 1;
  }
  else {
    uVar7 = *puVar4 & 0x80000000000000;
  }
  if (uVar7 == 0) {
    uVar5 = (ushort)((uint)fVar17 >> 0x10) & 0x8000;
    uVar14 = (uint)fVar17 & 0x7f800000;
    uVar13 = (uint)fVar17 & 0x7fffff;
    if (uVar14 == 0x7f800000) {
      uVar5 = (ushort)(uVar13 >> 0xd) | uVar5 | (ushort)(uVar13 != 0) << 9 | 0x7c00;
    }
    else if (uVar14 < 0x47000001) {
      if (uVar14 < 0x38800000) {
        if (0x32ffffff < uVar14) {
          uVar13 = uVar13 | 0x800000;
          uVar6 = (ushort)(uVar13 >> (0x7eU - (char)(uVar14 >> 0x17) & 0x1f));
          uVar14 = 0x1d - (uVar14 >> 0x17) & 0x1f;
          if ((uVar13 >> uVar14 & 1) != 0) {
            uVar6 = (uVar6 + 1) - (ushort)(((3 << (sbyte)uVar14) - 1U & uVar13) == 0);
          }
          uVar5 = uVar6 | uVar5;
        }
      }
      else {
        uVar5 = (ushort)(((uint)fVar17 & 0x2fff) != 0 & (byte)((uint)fVar17 >> 0xc)) +
                ((short)(uVar14 >> 0xd) + (short)(uVar13 >> 0xd) + 0x4000U | uVar5);
      }
    }
    else {
      uVar5 = uVar5 | 0x7c00;
    }
  }
  else {
    uVar5 = pdb_14094f6a0();
  }
  *param_1 = uVar2;
  *(float *)(param_1 + 1) = fVar1;
  auVar3._2_10_ = (unkuint10)uVar9 << 0x10;
  auVar3._0_2_ = uVar8;
  *(ulonglong *)((longlong)param_1 + 0xc) =
       auVar3._0_8_ << 0x10 | (ulonglong)(CONCAT24(uVar10,uVar12) & 0xffff0000ffff);
  *(uint *)((longlong)param_1 + 0x14) = (uint)uVar5 | uVar11 << 0x10;
  return param_1;
}

