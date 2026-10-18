// VA 0x1408d4170, PDB extent 543 bytes
// system_decorator::stone_foundation_cutouts::extend_stone_foundation_cutouts<core::iter::adapters::copied::Copied<core::slice::iter::Iter<country_core::resources::walls::stone_foundation_cutouts::StoneFoundationCutout> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/stone_foundation_cutouts.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_decorator::stone_foundation_cutouts::extend_stone_foundation_cutouts<core::iter::adapters::copied::Copied<core::slice::iter::Iter<country_core::resources::walls::stone_foundation_cutouts::StoneFoundationCutout>
   > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/stone_foundation_cutouts.rs
   Extent: 543 */

void pdb_1408d4170(longlong *param_1,float *param_2,float *param_3,float param_4,char param_5)

{
  undefined8 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  float fVar13;
  
  fVar3 = _DAT_142e36f50;
  if (param_5 == '\0') {
    if (param_2 != param_3) {
      lVar11 = param_1[2];
      lVar12 = lVar11 << 5;
      do {
        fVar3 = *param_2;
        fVar2 = param_2[1];
        fVar13 = param_2[2];
        fVar4 = param_2[7];
        uVar6 = *(undefined8 *)(param_2 + 3);
        uVar7 = *(undefined8 *)(param_2 + 5);
        if (lVar11 == *param_1) {
          pdb_142d8a7a0(param_1);
        }
        lVar10 = param_1[1];
        *(float *)(lVar10 + lVar12) = fVar3;
        *(float *)(lVar10 + 4 + lVar12) = fVar2;
        *(float *)(lVar10 + 8 + lVar12) = fVar13;
        puVar1 = (undefined8 *)(lVar10 + 0xc + lVar12);
        *puVar1 = uVar6;
        puVar1[1] = uVar7;
        *(float *)(lVar10 + 0x1c + lVar12) = fVar4;
        lVar11 = lVar11 + 1;
        param_1[2] = lVar11;
        lVar12 = lVar12 + 0x20;
        param_2 = param_2 + 8;
      } while (param_2 != param_3);
    }
  }
  else if (param_2 != param_3) {
    lVar11 = param_1[2];
    do {
      while( true ) {
        fVar13 = *param_2;
        fVar4 = param_2[1];
        fVar2 = param_2[2];
        fVar5 = param_2[7];
        uVar8 = *(undefined8 *)(param_2 + 3);
        uVar6 = *(undefined8 *)(param_2 + 3);
        uVar9 = *(undefined8 *)(param_2 + 5);
        uVar7 = *(undefined8 *)(param_2 + 5);
        if (lVar11 == *param_1) {
          pdb_142d8a7a0(param_1);
        }
        lVar12 = param_1[1];
        lVar10 = lVar11 * 0x20;
        *(float *)(lVar12 + lVar10) = fVar13;
        *(float *)(lVar12 + 4 + lVar10) = fVar4;
        *(float *)(lVar12 + 8 + lVar10) = fVar2;
        puVar1 = (undefined8 *)(lVar12 + 0xc + lVar10);
        *puVar1 = uVar6;
        puVar1[1] = uVar7;
        *(float *)(lVar12 + 0x1c + lVar10) = fVar5;
        lVar12 = lVar11 + 1;
        param_1[2] = lVar12;
        if (fVar2 * fVar3 <= fVar13) break;
        fVar13 = fVar13 + param_4;
        lVar10 = *param_1;
joined_r0x0001408d42b2:
        if (lVar12 == lVar10) {
          pdb_142d8a7a0(param_1);
        }
        lVar10 = param_1[1];
        lVar12 = lVar12 * 0x20;
        *(float *)(lVar10 + lVar12) = fVar13;
        *(float *)(lVar10 + 4 + lVar12) = fVar4;
        *(float *)(lVar10 + 8 + lVar12) = fVar2;
        puVar1 = (undefined8 *)(lVar10 + 0xc + lVar12);
        *puVar1 = uVar8;
        puVar1[1] = uVar9;
        *(float *)(lVar10 + 0x1c + lVar12) = fVar5;
        param_1[2] = lVar11 + 2;
        param_2 = param_2 + 8;
        lVar11 = lVar11 + 2;
        if (param_2 == param_3) {
          return;
        }
      }
      if (param_4 < fVar2 * fVar3 + fVar13) {
        fVar13 = fVar13 - param_4;
        lVar10 = *param_1;
        goto joined_r0x0001408d42b2;
      }
      param_2 = param_2 + 8;
      lVar11 = lVar12;
    } while (param_2 != param_3);
  }
  return;
}

