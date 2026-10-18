// VA 0x1414871b0, PDB extent 827 bytes
// system_wall_constructor::construct_wooden_walls::construct_wall_boards::classify_region_orientation
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_wooden_walls/construct_wall_boards.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_wall_constructor::construct_wooden_walls::construct_wall_boards::classify_region_orientation
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_wooden_walls/construct_wall_boards.rs
   Extent: 827 */

bool pdb_1414871b0(undefined8 param_1,float *param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  float fVar5;
  float extraout_XMM0_Da;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  undefined1 auStack_84 [4];
  undefined4 uStack_80;
  undefined4 uStack_7c;
  
  fVar5 = *param_2;
  fVar7 = param_2[1];
  fVar1 = param_2[2];
  fVar2 = param_2[3];
  pdb_141483090(&uStack_b8,param_1,fVar5);
  fVar3 = _DAT_142e36f28;
  fVar6 = _DAT_142e37ad4;
  if ((char)uStack_b8 != '\0') {
    fVar3 = fStack_8c * fStack_90 + (_DAT_142e36f28 - fStack_8c) * uStack_a8._4_4_;
    fVar6 = fStack_94 * fStack_8c + (float)uStack_a8 * (_DAT_142e36f28 - fStack_8c) + _DAT_142e37ad4
    ;
  }
  if (fVar6 < fVar7) {
    fVar6 = param_3;
    if (fVar3 <= param_3) {
      fVar6 = fVar3;
    }
    if (fVar2 < (float)(~-(uint)NAN(fVar3) & (uint)fVar6 | -(uint)NAN(fVar3) & (uint)param_3) +
                _DAT_142f684a8) {
      fVar8 = (fVar5 + fVar1) * _DAT_142e36f50;
      pdb_141483090(&uStack_b8,param_1,fVar8);
      fVar3 = _DAT_142e36f28;
      fVar6 = _DAT_142e37ad4;
      if ((char)uStack_b8 != '\0') {
        fVar3 = fStack_8c * fStack_90 + (_DAT_142e36f28 - fStack_8c) * uStack_a8._4_4_;
        fVar6 = fStack_94 * fStack_8c + (float)uStack_a8 * (_DAT_142e36f28 - fStack_8c) +
                _DAT_142e37ad4;
      }
      if (fVar6 < fVar7) {
        fVar6 = param_3;
        if (fVar3 <= param_3) {
          fVar6 = fVar3;
        }
        if (fVar2 < (float)(~-(uint)NAN(fVar3) & (uint)fVar6 | -(uint)NAN(fVar3) & (uint)param_3) +
                    _DAT_142f684a8) {
          pdb_141483090(&uStack_b8,param_1,fVar1);
          fVar3 = _DAT_142e36f28;
          fVar6 = _DAT_142e37ad4;
          if ((char)uStack_b8 != '\0') {
            fVar3 = fStack_8c * fStack_90 + (_DAT_142e36f28 - fStack_8c) * uStack_a8._4_4_;
            fVar6 = fStack_94 * fStack_8c + (float)uStack_a8 * (_DAT_142e36f28 - fStack_8c) +
                    _DAT_142e37ad4;
          }
          if (fVar6 < fVar7) {
            fVar7 = param_3;
            if (fVar3 <= param_3) {
              fVar7 = fVar3;
            }
            if (fVar2 < (float)(~-(uint)NAN(fVar3) & (uint)fVar7 | -(uint)NAN(fVar3) & (uint)param_3
                               ) + _DAT_142f684a8) {
              uStack_a8 = 3;
              uStack_b0 = 1;
              uStack_b8 = param_1;
              fStack_a0 = fVar5;
              fStack_9c = fVar8;
              fStack_98 = fVar1;
              pdb_141483320(auStack_84,param_1,_DAT_14300d240 + fVar5,fVar5 + _DAT_142e37848);
              uStack_80 = uStack_7c;
              cVar4 = pdb_141421a50(&uStack_b8,auStack_84);
              if (cVar4 == '\0') {
                fVar5 = (float)pdb_140deec10(param_2);
                pdb_140deec50(param_2);
                return _DAT_142e36f50 < fVar5 / extraout_XMM0_Da;
              }
            }
          }
        }
      }
    }
  }
  return false;
}

