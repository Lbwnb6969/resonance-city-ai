// VA 0x140a31af0, PDB extent 106 bytes
// country_core::game_config::is_within_glade_shape
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/game_config.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::game_config::is_within_glade_shape
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/game_config.rs
   Extent: 106 */

uint pdb_140a31af0(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 in_XMM1_Dc;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar10 [16];
  float fVar11;
  undefined1 auVar9 [16];
  
  uVar5 = (undefined4)((ulonglong)param_2 >> 0x20);
  fVar4 = (float)param_2;
  uVar3 = (undefined4)((ulonglong)param_1 >> 0x20);
  fVar2 = (float)param_1;
  if (DAT_143cb2d0c == '\0') {
    auVar9._8_4_ = uVar3;
    auVar9._0_8_ = param_1;
    auVar9._12_4_ = uVar5;
    auVar8._8_8_ = auVar9._8_8_;
    auVar8._4_4_ = fVar4;
    auVar8._0_4_ = fVar2;
    auVar10 = maxps(auVar8,_DAT_14301e9a0);
    auVar7._4_4_ = _UNK_14301e9b4;
    auVar7._0_4_ = _DAT_14301e9b0;
    auVar7._8_8_ = _UNK_14301e9b8;
    auVar7 = minps(auVar10,auVar7);
    auVar10._0_8_ = auVar7._0_8_;
  }
  else {
    fVar11 = fVar4 * fVar4 + fVar2 * fVar2;
    auVar6._8_4_ = uVar3;
    auVar6._0_8_ = param_1;
    auVar6._12_4_ = uVar5;
    auVar10._8_8_ = auVar6._8_8_;
    auVar10._0_8_ = CONCAT44(fVar4,fVar2);
    if (_DAT_14303a8a0 < fVar11) {
      fVar11 = SQRT(fVar11);
      auVar1._4_4_ = fVar11;
      auVar1._0_4_ = fVar11;
      auVar1._8_4_ = in_XMM1_Dc;
      auVar1._12_4_ = in_XMM1_Dc;
      auVar7 = divps(auVar10,auVar1);
      auVar10._0_8_ = CONCAT44(auVar7._4_4_ * _UNK_14301e9b4,auVar7._0_4_ * _DAT_14301e9b0);
    }
  }
  return -(uint)(fVar2 == (float)auVar10._0_8_ && (float)((ulonglong)auVar10._0_8_ >> 0x20) == fVar4
                ) & 0xffffff01;
}

