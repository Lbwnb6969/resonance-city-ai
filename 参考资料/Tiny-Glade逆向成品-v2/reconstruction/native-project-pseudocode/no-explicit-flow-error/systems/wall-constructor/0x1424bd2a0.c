// VA 0x1424bd2a0, PDB extent 845 bytes
// system_wall_constructor::construct_wooden_walls::stone_foundation_window_frames::clip_wallspace_polyline_to_max_y
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_wooden_walls/stone_foundation_window_frames.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_wall_constructor::construct_wooden_walls::stone_foundation_window_frames::clip_wallspace_polyline_to_max_y
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_wooden_walls/stone_foundation_window_frames.rs
   Extent: 845 */

ulonglong * pdb_1424bd2a0(ulonglong *param_1,float *param_2,ulonglong param_3,float param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  ulonglong uStack_c8;
  byte *pbStack_c0;
  ulonglong uStack_b8;
  undefined8 uStack_b0;
  
  uStack_b0 = 0xfffffffffffffffe;
  if (param_3 < 2) {
    *param_1 = 0;
    param_1[1] = 4;
    param_1[2] = 0;
  }
  else {
    pdb_14007ee60();
    pbStack_c0 = pub_1406abab0(param_3 * 8,4);
    fVar5 = _DAT_143009d64;
    fVar4 = _DAT_142e36f28;
    if (pbStack_c0 == (byte *)0x0) {
      pdb_142dc7e2a(4,param_3 * 8);
      pcVar3 = (code *)swi(3);
      puVar6 = (ulonglong *)(*pcVar3)();
      return puVar6;
    }
    uStack_b8 = 0;
    uVar7 = param_3 + 1;
    uVar8 = 0;
    fVar13 = *param_2;
    uStack_c8 = param_3;
    do {
      fVar14 = param_2[1];
      uVar1 = *(undefined8 *)(param_2 + 2);
      fVar12 = (float)uVar1;
      fVar11 = (float)((ulonglong)uVar1 >> 0x20);
      if (fVar14 <= param_4) {
        if (((uVar8 == 0) || (pbStack_c0 + uVar8 * 8 + -8 == (byte *)0x0)) ||
           (uVar2 = *(undefined8 *)(pbStack_c0 + uVar8 * 8 + -8), fVar10 = (float)uVar2 - fVar13,
           fVar9 = (float)((ulonglong)uVar2 >> 0x20) - fVar14,
           fVar5 < fVar9 * fVar9 + fVar10 * fVar10)) {
          if (uVar8 == uStack_c8) {
            pdb_142db07d0(&uStack_c8);
          }
          *(float *)(pbStack_c0 + uVar8 * 8) = fVar13;
          *(float *)(pbStack_c0 + uVar8 * 8 + 4) = fVar14;
          uVar8 = uVar8 + 1;
          uStack_b8 = uVar8;
        }
        if (param_4 < fVar11) goto LAB_1424bd417;
LAB_1424bd4a6:
        if (((uVar8 == 0) || (pbStack_c0 + uVar8 * 8 + -8 == (byte *)0x0)) ||
           (uVar2 = *(undefined8 *)(pbStack_c0 + uVar8 * 8 + -8), fVar13 = (float)uVar2 - fVar12,
           fVar11 = (float)((ulonglong)uVar2 >> 0x20) - fVar11,
           fVar5 < fVar11 * fVar11 + fVar13 * fVar13)) {
          if (uVar8 == uStack_c8) {
            pdb_142db07d0(&uStack_c8);
          }
          *(undefined8 *)(pbStack_c0 + uVar8 * 8) = uVar1;
          uVar8 = uVar8 + 1;
          uStack_b8 = uVar8;
        }
      }
      else if (fVar11 <= param_4) {
LAB_1424bd417:
        fVar9 = (param_4 - fVar14) / (fVar11 - fVar14);
        fVar10 = 0.0;
        if (0.0 <= fVar9) {
          fVar10 = fVar9;
        }
        fVar9 = fVar4;
        if (fVar10 <= fVar4) {
          fVar9 = fVar10;
        }
        fVar13 = fVar9 * (fVar12 - fVar13) + fVar13;
        fVar14 = fVar9 * (fVar11 - fVar14) + fVar14;
        if (((uVar8 == 0) || (pbStack_c0 + uVar8 * 8 + -8 == (byte *)0x0)) ||
           (uVar2 = *(undefined8 *)(pbStack_c0 + uVar8 * 8 + -8), fVar10 = (float)uVar2 - fVar13,
           fVar9 = (float)((ulonglong)uVar2 >> 0x20) - fVar14,
           fVar5 < fVar9 * fVar9 + fVar10 * fVar10)) {
          if (uVar8 == uStack_c8) {
            pdb_142db07d0(&uStack_c8);
          }
          *(ulonglong *)(pbStack_c0 + uVar8 * 8) = CONCAT44(fVar14,fVar13);
          uVar8 = uVar8 + 1;
          uStack_b8 = uVar8;
        }
        if (fVar11 <= param_4) goto LAB_1424bd4a6;
      }
      uVar7 = uVar7 - 1;
      fVar13 = fVar12;
      param_2 = param_2 + 2;
    } while (2 < uVar7);
    param_1[2] = uStack_b8;
    *param_1 = uStack_c8;
    param_1[1] = (ulonglong)pbStack_c0;
  }
  return param_1;
}

