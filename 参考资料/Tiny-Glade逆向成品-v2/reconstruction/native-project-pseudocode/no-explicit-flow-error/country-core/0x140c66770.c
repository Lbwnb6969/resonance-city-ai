// VA 0x140c66770, PDB extent 786 bytes
// country_core::systems::ui_focus_mode_shape_height::focused_shape_height_ruler_target
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui_focus_mode_shape_height.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::ui_focus_mode_shape_height::focused_shape_height_ruler_target
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui_focus_mode_shape_height.rs
   Extent: 786 */

undefined8 * pdb_140c66770(undefined8 *param_1,longlong param_2,uint *param_3,float *param_4)

{
  float *pfVar1;
  code *pcVar2;
  float *pfVar3;
  undefined8 *puVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  
  if (*(longlong *)(param_2 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(0,0,&UNK_143070b70);
  }
  pfVar3 = *(float **)(param_2 + 0x40);
  pfVar1 = pfVar3 + *(longlong *)(param_2 + 0x48) * 3;
  fVar6 = *pfVar3;
  fVar5 = pfVar3[2];
  fStack_bc = (float)*param_3;
  fVar11 = _DAT_14300c7a0;
  fVar8 = 0.0;
  do {
    fVar9 = *pfVar3;
    fVar7 = pfVar3[1];
    fVar10 = pfVar3[2];
    fVar12 = fVar10 * param_4[0x28] + fVar7 * param_4[0x24] + fVar9 * param_4[0x20] + param_4[0x2c];
    fVar13 = fVar10 * param_4[0x29] + fVar7 * param_4[0x25] + fVar9 * param_4[0x21] + param_4[0x2d];
    fVar14 = fVar10 * param_4[0x2a] + fVar7 * param_4[0x26] + fVar9 * param_4[0x22] + param_4[0x2e];
    fVar13 = (((fVar14 * param_4[8] + fVar13 * param_4[4] + fVar12 * *param_4 + param_4[0xc]) /
              (fVar14 * param_4[0xb] + fVar13 * param_4[7] + fVar12 * param_4[3] + param_4[0xf])) *
              _DAT_142e36f50 + _DAT_142e36f50) * fStack_bc;
    fVar12 = fVar13;
    if (fVar13 <= fVar8) {
      fVar12 = fVar8;
    }
    fVar14 = fVar7;
    if (fVar11 <= fVar7) {
      fVar14 = fVar11;
    }
    if (fVar8 < fVar13) {
      fVar5 = fVar10;
    }
    if (fVar8 < fVar13) {
      fVar6 = fVar9;
    }
    fVar11 = (float)(~-(uint)NAN(fVar11) & (uint)fVar14 | -(uint)NAN(fVar11) & (uint)fVar7);
    pfVar3 = pfVar3 + 3;
    fVar8 = fVar12;
  } while (pfVar3 != pfVar1);
  if (*(char *)(param_2 + 0x108) != '\0') {
    fVar7 = *(float *)(param_2 + 0x10c) + _DAT_143061400;
    fVar8 = fVar7;
    if (fVar11 <= fVar7) {
      fVar8 = fVar11;
    }
    pdb_140e09030(&fStack_d0,param_4);
    fStack_c4 = fStack_d0;
    fStack_c0 = fStack_c8;
    pdb_140df4540(&fStack_d0,&fStack_c4,0);
    fVar9 = _DAT_142e36f28 /
            SQRT(fStack_cc * fStack_cc + fStack_d0 * fStack_d0 + fStack_c8 * fStack_c8);
    fVar10 = fVar9 * fStack_d0 * _DAT_143065e90;
    fVar12 = fVar9 * fStack_cc * _UNK_143065e94;
    fVar9 = fVar9 * fStack_c8 * _DAT_142e37838;
    fStack_c4 = fVar6;
    fStack_c0 = fVar5;
    pdb_140df4540(&fStack_d0,&fStack_c4,
                  ~-(uint)NAN(fVar11) & (uint)fVar8 | -(uint)NAN(fVar11) & (uint)fVar7);
    *param_1 = CONCAT44(fStack_cc + fVar12,fStack_d0 + fVar10);
    *(float *)(param_1 + 1) = fVar9 + fStack_c8;
    return param_1;
  }
  pdb_142d8e040();
  pcVar2 = (code *)swi(3);
  puVar4 = (undefined8 *)(*pcVar2)();
  return puVar4;
}

