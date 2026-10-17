// Matched PDB: country_core::resources::roofs::roof_shape::Roof::get_roof_shape_from_pos_ws_clamped
// VA 0x140b77d90, PDB extent 532 bytes
// Ghidra pseudocode; types and unresolved calls are not original source.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB: country_core::resources::roofs::roof_shape::Roof::get_roof_shape_from_pos_ws_clamped
   Extent: 532 bytes. No whole-program auto-analysis. */

undefined8 pdb_140b77d90(undefined8 param_1,longlong param_2,float *param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 uStack_90;
  float fStack_8c;
  undefined4 *puStack_88;
  code *pcStack_80;
  float *pfStack_78;
  code *pcStack_70;
  
  fVar9 = param_3[1];
  fVar3 = (float)pdb_1417ddc70(*param_3 * _DAT_142e36f50,_DAT_142e36f50 * param_3[2]);
  fVar4 = *(float *)(param_2 + 0x30);
  auVar6 = ZEXT816(0);
  if (_DAT_142e3b1d8 < fVar4) {
    if (*(int *)(param_2 + 8) == 1) {
      fVar7 = *(float *)(param_2 + 0x1c);
      fVar5 = *(float *)(param_2 + 0x20);
      fVar8 = fVar5;
      if (fVar5 <= fVar7) {
        fVar8 = fVar7;
      }
      fVar5 = ((float)(~-(uint)NAN(fVar7) & (uint)fVar8 | -(uint)NAN(fVar7) & (uint)fVar5) +
              _DAT_14303c690) / _DAT_14303c698;
      fVar7 = _DAT_142f895fc;
    }
    else {
      fVar5 = (*(float *)(param_2 + 0x14) + _DAT_14303c670) / _DAT_14303c674;
      fVar7 = _DAT_142f57bc8;
    }
    fVar8 = 0.0;
    if (0.0 <= fVar5 / _DAT_142e3798c) {
      fVar8 = fVar5 / _DAT_142e3798c;
    }
    fVar5 = _DAT_142e36f28;
    if (fVar8 <= _DAT_142e36f28) {
      fVar5 = fVar8;
    }
    fVar5 = (_DAT_142e3788c - (fVar5 + fVar5)) * fVar5 * fVar5;
    fStack_8c = fVar5 * _DAT_142e37ad8 + (_DAT_142e36f28 - fVar5) * fVar7;
    auVar6 = ZEXT416((uint)fStack_8c);
    if (fStack_8c < 0.0) {
      uStack_90 = 0;
      puStack_88 = &uStack_90;
      pcStack_80 = pdb_140f705d0;
      pfStack_78 = &fStack_8c;
      pcStack_70 = pdb_140f705d0;
      pdb_142dc83d0(&UNK_14305bf5c,&puStack_88,&UNK_14305bff8);
      pcVar1 = (code *)swi(3);
      uVar2 = (*pcVar1)();
      return uVar2;
    }
    fVar7 = fVar4 * _DAT_142e37ad8 + (_DAT_142e36f28 - fVar4) * _DAT_142e3798c;
    fVar4 = 0.0;
    if (0.0 <= fVar7) {
      fVar4 = fVar7;
    }
    if (fVar4 <= fStack_8c) {
      auVar6 = ZEXT416((uint)fVar4);
    }
  }
  auVar6._0_4_ = auVar6._0_4_ + *(float *)(param_2 + 0x4c);
  fVar4 = (float)pdb_140de8220(*(float *)(param_2 + 0x4c),auVar6._0_8_,
                               fVar9 + fVar3 * _DAT_142e37ae0);
  fVar9 = 0.0;
  if (0.0 <= fVar4) {
    fVar9 = fVar4;
  }
  fVar4 = _DAT_142e36f28;
  if (fVar9 <= _DAT_142e36f28) {
    fVar4 = fVar9;
  }
  pdb_140b77bc0(param_1,param_2,fVar4);
  return param_1;
}

