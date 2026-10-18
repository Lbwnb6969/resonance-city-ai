// VA 0x140a00140, PDB extent 370 bytes
// country_core::resources::terrain_stroke::TerrainStroke::insert_or_morph_last_point
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/terrain_stroke.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::terrain_stroke::TerrainStroke::insert_or_morph_last_point
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/terrain_stroke.rs
   Extent: 370 */

void pdb_140a00140(ulonglong *param_1,float *param_2,float param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  float *pfVar6;
  ulonglong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  uVar4 = param_1[2];
  if (uVar4 == 1) {
    pfVar6 = (float *)param_1[1];
    if (_DAT_142e37870 <
        SQRT((param_2[2] - pfVar6[2]) * (param_2[2] - pfVar6[2]) +
             (param_2[1] - pfVar6[1]) * (param_2[1] - pfVar6[1]) +
             (*param_2 - *pfVar6) * (*param_2 - *pfVar6))) {
      if (*param_1 == 1) {
        pdb_142db7820();
        pfVar6 = (float *)param_1[1];
      }
      pfVar6[5] = param_2[2];
      *(undefined8 *)(pfVar6 + 3) = *(undefined8 *)param_2;
      param_1[2] = 2;
    }
  }
  else if (uVar4 == 0) {
    if (*param_1 == 0) {
      pdb_142db7820();
    }
    puVar5 = (undefined8 *)param_1[1];
    *(float *)(puVar5 + 1) = param_2[2];
    *puVar5 = *(undefined8 *)param_2;
    param_1[2] = 1;
  }
  else {
    uVar7 = param_1[1];
    fVar8 = *(float *)((uVar7 - 0x10) + uVar4 * 0xc) - *(float *)((uVar7 - 4) + uVar4 * 0xc);
    uVar2 = *(undefined8 *)((uVar7 - 0x18) + uVar4 * 0xc);
    uVar3 = *(undefined8 *)((uVar7 - 0xc) + uVar4 * 0xc);
    fVar9 = (float)uVar2 - (float)uVar3;
    fVar10 = (float)((ulonglong)uVar2 >> 0x20) - (float)((ulonglong)uVar3 >> 0x20);
    if (param_3 <= SQRT(fVar8 * fVar8 + fVar10 * fVar10 + fVar9 * fVar9)) {
      if (uVar4 < 0x400) {
        if (uVar4 == *param_1) {
          pdb_142db7820();
          uVar7 = param_1[1];
        }
        *(float *)(uVar7 + 8 + uVar4 * 0xc) = param_2[2];
        *(undefined8 *)(uVar7 + uVar4 * 0xc) = *(undefined8 *)param_2;
        param_1[2] = uVar4 + 1;
      }
    }
    else {
      lVar1 = uVar7 + uVar4 * 0xc;
      *(float *)(lVar1 + -4) = param_2[2];
      *(undefined8 *)(lVar1 + -0xc) = *(undefined8 *)param_2;
    }
  }
  return;
}

