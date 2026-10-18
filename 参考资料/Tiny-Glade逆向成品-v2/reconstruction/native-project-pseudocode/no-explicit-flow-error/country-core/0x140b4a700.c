// VA 0x140b4a700, PDB extent 234 bytes
// country_core::systems::ui_move_freehand_walls::FreehandWallTransformCache::shape_moved
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui_move_freehand_walls.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::ui_move_freehand_walls::FreehandWallTransformCache::shape_moved
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui_move_freehand_walls.rs
   Extent: 234 */

void pdb_140b4a700(longlong *param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  byte *pbVar5;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  lVar2 = *(longlong *)(param_2 + 0x50);
  if (lVar2 == 0) {
    fVar8 = *(float *)(param_2 + 0x10);
    fVar9 = *(float *)(param_2 + 0x14);
    fVar10 = *(float *)(param_2 + 0x18);
    fVar11 = *(float *)(param_2 + 0x1c);
    pbVar5 = (byte *)0x4;
  }
  else {
    lVar3 = *(longlong *)(param_2 + 0x48);
    pdb_14007ee60();
    lVar7 = 4;
    pbVar5 = pub_1406abab0(lVar2 * 0xc,4);
    if (pbVar5 == (byte *)0x0) {
      pdb_142dc7e2a(4,lVar2 * 0xc);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    fVar8 = *(float *)(param_2 + 0x10);
    fVar9 = *(float *)(param_2 + 0x14);
    fVar10 = *(float *)(param_2 + 0x18);
    fVar11 = *(float *)(param_2 + 0x1c);
    lVar6 = lVar2;
    do {
      uVar1 = *(undefined8 *)(lVar3 + lVar7);
      fVar13 = (float)((ulonglong)uVar1 >> 0x20);
      fVar12 = (float)uVar1;
      *(undefined4 *)(pbVar5 + lVar7 + -4) = *(undefined4 *)(lVar3 + -4 + lVar7);
      *(ulonglong *)(pbVar5 + lVar7) =
           CONCAT44(fVar13 * fVar11 + fVar12 * fVar9,fVar13 * fVar10 + fVar12 * fVar8);
      lVar7 = lVar7 + 0xc;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  fVar13 = (float)((ulonglong)*(undefined8 *)(param_2 + 0xa0) >> 0x20);
  fVar12 = (float)*(undefined8 *)(param_2 + 0xa0);
  param_1[3] = param_3;
  *param_1 = lVar2;
  param_1[1] = (longlong)pbVar5;
  param_1[2] = lVar2;
  param_1[4] = CONCAT44(fVar13 * fVar11 + fVar12 * fVar9 +
                        (float)((ulonglong)*(undefined8 *)(param_2 + 0x20) >> 0x20),
                        fVar13 * fVar10 + fVar12 * fVar8 + (float)*(undefined8 *)(param_2 + 0x20));
  return;
}

