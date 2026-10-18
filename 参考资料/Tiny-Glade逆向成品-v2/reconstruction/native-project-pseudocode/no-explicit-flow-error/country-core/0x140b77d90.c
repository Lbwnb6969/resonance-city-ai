// VA 0x140b77d90, PDB extent 532 bytes
// country_core::resources::roofs::roof_shape::Roof::get_roof_shape_from_pos_ws_clamped
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/roofs/roof_visual_shape.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::roofs::roof_shape::Roof::get_roof_shape_from_pos_ws_clamped
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/roofs/roof_visual_shape.rs
   Extent: 532 */

undefined8 pdb_140b77d90(undefined8 param_1,longlong param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uStack_90;
  float fStack_8c;
  undefined4 *puStack_88;
  code *pcStack_80;
  float *pfStack_78;
  code *pcStack_70;
  
  fVar7 = param_3[1];
  fVar1 = (float)pdb_1417ddc70(*param_3 * _DAT_142e36f50,_DAT_142e36f50 * param_3[2]);
  fVar2 = *(float *)(param_2 + 0x30);
  auVar4 = ZEXT816(0);
  if (_DAT_142e3b1d8 < fVar2) {
    if (*(int *)(param_2 + 8) == 1) {
      fVar5 = *(float *)(param_2 + 0x1c);
      fVar3 = *(float *)(param_2 + 0x20);
      fVar6 = fVar3;
      if (fVar3 <= fVar5) {
        fVar6 = fVar5;
      }
      fVar3 = ((float)(~-(uint)NAN(fVar5) & (uint)fVar6 | -(uint)NAN(fVar5) & (uint)fVar3) +
              _DAT_14303c690) / _DAT_14303c698;
      fVar5 = _DAT_142f895fc;
    }
    else {
      fVar3 = (*(float *)(param_2 + 0x14) + _DAT_14303c670) / _DAT_14303c674;
      fVar5 = _DAT_142f57bc8;
    }
    fVar6 = 0.0;
    if (0.0 <= fVar3 / _DAT_142e3798c) {
      fVar6 = fVar3 / _DAT_142e3798c;
    }
    fVar3 = _DAT_142e36f28;
    if (fVar6 <= _DAT_142e36f28) {
      fVar3 = fVar6;
    }
    fVar3 = (_DAT_142e3788c - (fVar3 + fVar3)) * fVar3 * fVar3;
    fStack_8c = fVar3 * _DAT_142e37ad8 + (_DAT_142e36f28 - fVar3) * fVar5;
    auVar4 = ZEXT416((uint)fStack_8c);
    if (fStack_8c < 0.0) {
      uStack_90 = 0;
      puStack_88 = &uStack_90;
      pcStack_80 = pdb_140f705d0;
      pfStack_78 = &fStack_8c;
      pcStack_70 = pdb_140f705d0;
                    /* WARNING: Subroutine does not return */
      pdb_142dc83d0(&UNK_14305bf5c,&puStack_88,&UNK_14305bff8);
    }
    fVar5 = fVar2 * _DAT_142e37ad8 + (_DAT_142e36f28 - fVar2) * _DAT_142e3798c;
    fVar2 = 0.0;
    if (0.0 <= fVar5) {
      fVar2 = fVar5;
    }
    if (fVar2 <= fStack_8c) {
      auVar4 = ZEXT416((uint)fVar2);
    }
  }
  auVar4._0_4_ = auVar4._0_4_ + *(float *)(param_2 + 0x4c);
  fVar2 = (float)pdb_140de8220(*(float *)(param_2 + 0x4c),auVar4._0_8_,
                               fVar7 + fVar1 * _DAT_142e37ae0);
  fVar7 = 0.0;
  if (0.0 <= fVar2) {
    fVar7 = fVar2;
  }
  fVar2 = _DAT_142e36f28;
  if (fVar7 <= _DAT_142e36f28) {
    fVar2 = fVar7;
  }
  pdb_140b77bc0(param_1,param_2,fVar2);
  return param_1;
}

