// VA 0x1414858e0, PDB extent 657 bytes
// system_wall_constructor::construct_wooden_walls::construct_wall_boards::remapped_top_rim_holes
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_wooden_walls/construct_wall_boards.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_wall_constructor::construct_wooden_walls::construct_wall_boards::remapped_top_rim_holes
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_wooden_walls/construct_wall_boards.rs
   Extent: 657 */

longlong * pdb_1414858e0(longlong *param_1,longlong param_2,longlong param_3,undefined4 param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  longlong lVar6;
  float *pfVar7;
  float *pfVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uStack_108;
  longlong lStack_100;
  undefined4 *puStack_f8;
  longlong lStack_f0;
  float *pfStack_e8;
  longlong lStack_e0;
  float *pfStack_d8;
  undefined4 uStack_cc;
  longlong lStack_c8;
  undefined8 uStack_c0;
  
  uStack_c0 = 0xfffffffffffffffe;
  if (param_3 != 0) {
    lVar6 = param_2;
    uStack_cc = param_4;
    uStack_108 = pdb_140c2b5c0(param_3);
    puStack_f8 = &uStack_cc;
    lStack_100 = lVar6;
    pdb_1413e8880(&lStack_f0,&uStack_108);
    fVar5 = _DAT_143009d64;
    if (!SBORROW8(0,lStack_f0)) {
      if (lStack_e0 == 0) {
        lStack_e0 = 0;
      }
      else {
        lStack_c8 = lStack_f0;
        pfVar7 = pfStack_e8 + lStack_e0 * 4;
        fVar1 = *(float *)(param_2 + 0x3c);
        fVar14 = *(float *)(param_2 + 0x38) + _DAT_14300b120;
        pfStack_d8 = pfStack_e8;
        pfVar8 = pfStack_e8;
        do {
          fVar12 = *pfVar8;
          fVar2 = pfVar8[1];
          fVar3 = pfVar8[2];
          fVar4 = pfVar8[3];
          fVar10 = (float)pdb_141483e90(param_2);
          fVar11 = (float)pdb_141483e90(param_2);
          fVar13 = 0.0;
          uVar9 = -(uint)NAN(fVar10);
          if (fVar5 < fVar12) {
            fVar12 = fVar11;
            if (fVar10 <= fVar11) {
              fVar12 = fVar10;
            }
            fVar13 = (float)(~uVar9 & (uint)fVar12 | uVar9 & (uint)fVar11);
          }
          fVar12 = fVar1;
          if (fVar3 < fVar14) {
            fVar12 = fVar11;
            if (fVar11 <= fVar10) {
              fVar12 = fVar10;
            }
            fVar12 = (float)(~uVar9 & (uint)fVar12 | uVar9 & (uint)fVar11);
          }
          *pfVar8 = fVar13;
          pfVar8[1] = fVar2;
          pfVar8[2] = fVar12;
          pfVar8[3] = fVar4;
          pfVar8 = pfVar8 + 4;
          lStack_f0 = lStack_c8;
          pfStack_e8 = pfStack_d8;
        } while (pfVar8 != pfVar7);
      }
      goto LAB_141485a70;
    }
  }
  pfStack_e8 = (float *)0x4;
  lStack_e0 = 0;
  lStack_f0 = 0;
LAB_141485a70:
  *param_1 = lStack_f0;
  param_1[1] = (longlong)pfStack_e8;
  param_1[2] = lStack_e0;
  return param_1;
}

