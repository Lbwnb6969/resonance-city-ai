// VA 0x140a86ea0, PDB extent 1163 bytes
// country_core::resources::plant_sample_raster::constrain_non_grass_species
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/plant_sample_raster.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::plant_sample_raster::constrain_non_grass_species
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/plant_sample_raster.rs
   Extent: 1163 */

void pdb_140a86ea0(byte *param_1)

{
  bool bVar1;
  ulonglong uVar2;
  byte bVar3;
  byte bVar4;
  ulonglong *puVar5;
  byte *pbVar6;
  byte bVar7;
  longlong lVar8;
  byte bVar9;
  ulonglong uVar10;
  byte bVar11;
  ulonglong *puVar12;
  bool bVar13;
  ulonglong uStack_58;
  ulonglong uStack_50;
  ulonglong uStack_48;
  ulonglong uStack_40;
  ulonglong uStack_38;
  ulonglong uStack_30;
  ulonglong uStack_28;
  ulonglong uStack_20;
  
  uStack_38 = uStack_38 & 0xffffffffffffff00;
  uStack_30 = 0;
  uStack_28 = uStack_28 & 0xffffffffffffff00;
  uStack_20 = 0;
  lVar8 = 0;
  do {
    if (lVar8 == 4) goto LAB_140a86f8f;
    bVar9 = param_1[lVar8];
    lVar8 = lVar8 + 1;
  } while (bVar9 == 0);
  uStack_50 = 1;
  uVar10 = 1;
  while (lVar8 != 4) {
    bVar11 = param_1[lVar8];
    lVar8 = lVar8 + 1;
    if (bVar11 != 0) {
      if (bVar9 != bVar11) {
        uStack_48 = CONCAT71((int7)(uStack_48 >> 8),bVar11);
        uStack_40 = 1;
        goto LAB_140a86f60;
      }
      uVar10 = uVar10 + 1;
      uStack_50 = uVar10;
    }
  }
  goto LAB_140a86f8f;
LAB_140a87039:
  uStack_58._0_1_ = bVar9;
  if (lVar8 != 4) {
    bVar11 = param_1[lVar8];
    lVar8 = lVar8 + 1;
    if (bVar11 != 0) {
      puVar5 = &uStack_58;
      if (((bVar9 != bVar11) && (puVar5 = &uStack_48, (byte)uStack_48 != bVar11)) &&
         (puVar5 = &uStack_38, (byte)uStack_38 != bVar11)) {
        uStack_28 = CONCAT71(uStack_28._1_7_,bVar11);
        uStack_20 = 1;
        while (lVar8 != 4) {
          bVar11 = param_1[lVar8];
          lVar8 = lVar8 + 1;
          if (bVar11 != 0) {
            puVar5 = &uStack_58;
            if (((bVar9 != bVar11) && (puVar5 = &uStack_48, (byte)uStack_48 != bVar11)) &&
               ((puVar5 = &uStack_38, (byte)uStack_38 != bVar11 &&
                (puVar5 = &uStack_28, (byte)uStack_28 != bVar11)))) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc81f2(4,4,&UNK_143043550);
            }
            puVar5[1] = puVar5[1] + 1;
          }
        }
        bVar13 = false;
        goto LAB_140a87070;
      }
      puVar5[1] = puVar5[1] + 1;
    }
    goto LAB_140a87039;
  }
  bVar13 = true;
LAB_140a87070:
  uVar2 = uStack_30;
  uVar10 = uStack_40;
  bVar1 = (byte)uStack_48 < bVar9;
  if (uStack_50 != uStack_40) {
    bVar1 = uStack_50 < uStack_40;
  }
  if (bVar1) {
    uStack_40 = uStack_50;
    uStack_58._0_1_ = (byte)uStack_48;
    uStack_50 = uVar10;
    uStack_48._0_1_ = bVar9;
  }
  puVar5 = &uStack_38;
  bVar9 = (byte)uStack_48;
  bVar1 = (byte)uStack_38 < (byte)uStack_48;
  if (uStack_40 != uStack_30) {
    bVar1 = uStack_40 < uStack_30;
  }
  if (bVar1) {
    puVar12 = &uStack_48;
    uStack_30 = uStack_40;
    bVar1 = (byte)uStack_38 < (byte)uStack_58;
    if (uStack_50 != uVar2) {
      bVar1 = uStack_50 < uVar2;
    }
    if (bVar1) {
      uStack_48._0_1_ = (byte)uStack_58;
      uStack_40 = uStack_50;
      puVar12 = &uStack_58;
    }
    *(byte *)puVar12 = (byte)uStack_38;
    uStack_38._0_1_ = bVar9;
    puVar12[1] = uVar2;
  }
  if (!bVar13) {
    bVar13 = (byte)uStack_28 < (byte)uStack_38;
    if (uStack_30 != uStack_20) {
      bVar13 = uStack_30 < uStack_20;
    }
    if (bVar13) {
      bVar13 = (byte)uStack_28 < (byte)uStack_48;
      if (uStack_40 != uStack_20) {
        bVar13 = uStack_40 < uStack_20;
      }
      if (bVar13) {
        puVar5 = &uStack_48;
        bVar13 = (byte)uStack_28 < (byte)uStack_58;
        if (uStack_50 != uStack_20) {
          bVar13 = uStack_50 < uStack_20;
        }
        if (bVar13) {
          uStack_48._0_1_ = (byte)uStack_58;
          puVar5 = &uStack_58;
        }
      }
      *(byte *)puVar5 = (byte)uStack_28;
      puVar5[1] = uStack_20;
    }
  }
  bVar9 = *param_1;
  if (bVar9 == 0) {
LAB_140a871e3:
    bVar9 = 0;
  }
  else if (((byte)uStack_58 != bVar9) && ((byte)uStack_48 != bVar9)) {
    *param_1 = 0;
    goto LAB_140a871e3;
  }
  bVar11 = param_1[1];
  if (bVar11 == 0) {
LAB_140a871fd:
    bVar11 = 0;
  }
  else if (((byte)uStack_58 != bVar11) && ((byte)uStack_48 != bVar11)) {
    param_1[1] = 0;
    goto LAB_140a871fd;
  }
  bVar7 = param_1[2];
  if (bVar7 == 0) {
LAB_140a87218:
    bVar7 = 0;
  }
  else if (((byte)uStack_58 != bVar7) && ((byte)uStack_48 != bVar7)) {
    param_1[2] = 0;
    goto LAB_140a87218;
  }
  bVar3 = param_1[3];
  if (bVar3 != 0) {
    if (((byte)uStack_58 == bVar3) || ((byte)uStack_48 == bVar3)) goto LAB_140a87236;
    param_1[3] = 0;
  }
  bVar3 = 0;
LAB_140a87236:
  bVar4 = bVar11;
  if (bVar11 < bVar9) {
    param_1[1] = bVar9;
    *param_1 = bVar11;
    bVar4 = bVar9;
    bVar9 = bVar11;
  }
  if (bVar7 < bVar4) {
    param_1[2] = bVar4;
    pbVar6 = param_1 + 1;
    if (bVar7 < bVar9) {
      param_1[1] = bVar9;
      pbVar6 = param_1;
    }
    *pbVar6 = bVar7;
    bVar7 = bVar4;
  }
  if (bVar7 <= bVar3) {
    return;
  }
  param_1[3] = bVar7;
  if (param_1[1] <= bVar3) {
    param_1[2] = bVar3;
    return;
  }
  param_1[2] = param_1[1];
  if (bVar3 < *param_1) {
    param_1[1] = *param_1;
    *param_1 = bVar3;
    return;
  }
  param_1[1] = bVar3;
  return;
LAB_140a86f60:
  if (lVar8 != 4) {
    bVar11 = param_1[lVar8];
    lVar8 = lVar8 + 1;
    if (bVar11 != 0) {
      puVar5 = &uStack_58;
      if ((bVar9 != bVar11) && (puVar5 = &uStack_48, (byte)uStack_48 != bVar11)) {
        uStack_38 = CONCAT71(uStack_38._1_7_,bVar11);
        uStack_30 = 1;
        goto LAB_140a87039;
      }
      puVar5[1] = puVar5[1] + 1;
    }
    goto LAB_140a86f60;
  }
LAB_140a86f8f:
  bVar9 = *param_1;
  bVar11 = param_1[1];
  if (bVar11 < bVar9) {
    param_1[1] = bVar9;
    *param_1 = bVar11;
    bVar7 = param_1[2];
    bVar13 = bVar7 < bVar9;
    bVar3 = bVar9;
    bVar9 = bVar11;
    if (bVar13) {
LAB_140a86fc3:
      param_1[2] = bVar3;
      pbVar6 = param_1 + 1;
      if (bVar7 < bVar9) {
        param_1[1] = bVar9;
        pbVar6 = param_1;
      }
      *pbVar6 = bVar7;
      bVar9 = param_1[3];
      if (bVar3 <= bVar9) {
        return;
      }
      goto LAB_140a86fe0;
    }
  }
  else {
    bVar7 = param_1[2];
    bVar3 = bVar11;
    if (bVar7 < bVar11) goto LAB_140a86fc3;
  }
  bVar3 = bVar7;
  bVar9 = param_1[3];
  if (bVar3 <= bVar9) {
    return;
  }
LAB_140a86fe0:
  param_1[3] = bVar3;
  if (bVar9 < param_1[1]) {
    pbVar6 = param_1 + 1;
    param_1[2] = param_1[1];
    if (bVar9 < *param_1) {
      *pbVar6 = *param_1;
      pbVar6 = param_1;
    }
  }
  else {
    pbVar6 = param_1 + 2;
  }
  *pbVar6 = bVar9;
  return;
}

