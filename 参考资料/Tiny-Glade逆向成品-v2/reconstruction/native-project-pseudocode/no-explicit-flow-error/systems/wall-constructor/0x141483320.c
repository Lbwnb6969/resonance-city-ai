// VA 0x141483320, PDB extent 780 bytes
// system_wall_constructor::construct_wooden_walls::construct_wall_boards::WallSampler::tangent_between
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_wooden_walls/construct_wall_boards.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_wall_constructor::construct_wooden_walls::construct_wall_boards::WallSampler::tangent_between
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_wooden_walls/construct_wall_boards.rs
   Extent: 780 */

undefined8 *
pdb_141483320(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined1 auVar2 [16];
  float fVar3;
  undefined8 uVar4;
  float fVar6;
  undefined1 auVar5 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 uStack_90;
  float fStack_88;
  undefined4 uStack_84;
  float *pfStack_80;
  code *pcStack_78;
  float fStack_64;
  undefined4 uStack_60;
  float afStack_5c [17];
  
  cVar1 = *(char *)(param_2 + 0x1c);
  fVar10 = *(float *)(param_2 + 0x18);
  if (cVar1 == '\0') {
    if (fVar10 < 0.0) {
      uStack_60 = 0;
      uStack_90 = &uStack_60;
      fStack_88 = 7.7194595;
      uStack_84 = 1;
      pfStack_80 = afStack_5c;
      pcStack_78 = pdb_140f705d0;
      afStack_5c[0] = fVar10;
                    /* WARNING: Subroutine does not return */
      pdb_142dc83d0(&UNK_14330d000,&uStack_90,&UNK_14330d0a0);
    }
    auVar5._4_4_ = (int)param_3;
    auVar5._0_4_ = (int)param_4;
    auVar5._8_4_ = (int)((ulonglong)param_4 >> 0x20);
    auVar5._12_4_ = (int)((ulonglong)param_3 >> 0x20);
    auVar5 = maxps(ZEXT816(0),auVar5);
    auVar8._4_4_ = fVar10;
    auVar8._0_4_ = fVar10;
    auVar8._8_8_ = 0;
    auVar5 = minps(auVar8,auVar5);
    fVar12 = auVar5._0_4_;
    fVar11 = auVar5._4_4_;
    fVar9 = fVar12;
  }
  else {
    uVar4 = pub_142e32a70();
    fVar9 = (float)uVar4;
    fVar11 = (float)((ulonglong)uVar4 >> 0x20);
    uVar4 = pub_142e32a70();
    fVar13 = (float)((ulonglong)uVar4 >> 0x20);
    fVar12 = (float)uVar4;
    auVar7._0_4_ = ~-(uint)(fVar12 < 0.0) & (uint)fVar12;
    auVar7._4_4_ = ~-(uint)(fVar9 < 0.0) & (uint)fVar9;
    auVar7._8_4_ = ~-(uint)(fVar13 < 0.0) & (uint)fVar13;
    auVar7._12_4_ = ~-(uint)(fVar11 < 0.0) & (uint)fVar11;
    auVar2._4_4_ = (uint)((float)((uint)fVar10 & _UNK_142e377e4) + fVar9) & -(uint)(fVar9 < 0.0);
    auVar2._0_4_ = (uint)((float)((uint)fVar10 & _DAT_142e377e0) + fVar12) & -(uint)(fVar12 < 0.0);
    auVar2._8_4_ = (uint)(fVar13 + 0.0) & -(uint)(fVar13 < 0.0);
    auVar2._12_4_ = (uint)(fVar11 + 0.0) & -(uint)(fVar11 < 0.0);
    fVar12 = SUB164(auVar7 | auVar2,0);
    fVar11 = SUB164(auVar7 | auVar2,4);
    fVar9 = fVar12;
    if (cVar1 != '\0') {
      fVar9 = fVar10 + fVar12;
    }
  }
  fVar9 = (float)(~-(uint)(fVar12 < fVar11) & (uint)fVar12 | (uint)fVar9 & -(uint)(fVar12 < fVar11))
  ;
  pdb_141483090(&uStack_90,param_2,fVar11);
  if ((float)uStack_90 == 1.4013e-45) {
    fVar12 = fStack_64 * SUB84(pcStack_78,0) + (_DAT_142e36f28 - fStack_64) * uStack_90._4_4_;
    fVar13 = fStack_64 * (float)((ulonglong)pcStack_78 >> 0x20) +
             (_DAT_142e36f28 - fStack_64) * fStack_88;
  }
  else {
    fVar12 = 0.0;
    fVar13 = 0.0;
  }
  pdb_141483090(&uStack_90,param_2,fVar9);
  if ((float)uStack_90 == 1.4013e-45) {
    fVar3 = fStack_64 * SUB84(pcStack_78,0) + (_DAT_142e36f28 - fStack_64) * uStack_90._4_4_;
    fVar6 = fStack_64 * (float)((ulonglong)pcStack_78 >> 0x20) +
            (_DAT_142e36f28 - fStack_64) * fStack_88;
  }
  else {
    fVar3 = 0.0;
    fVar6 = 0.0;
  }
  fVar3 = fVar3 - fVar12;
  fVar6 = fVar6 - fVar13;
  fVar12 = fVar6 * fVar6 + fVar3 * fVar3;
  if (fVar12 <= _DAT_143009d64) {
    fVar12 = (fVar11 + fVar9) * _DAT_142e36f50;
    fVar9 = fVar10 * _DAT_142e37870;
    if (fVar10 * _DAT_142e37870 <= _DAT_142e37848) {
      fVar9 = _DAT_142e37848;
    }
    pdb_141483090(&uStack_90,param_2,fVar12 - fVar9);
    if ((float)uStack_90 == 1.4013e-45) {
      fVar10 = fStack_64 * SUB84(pcStack_78,0) + (_DAT_142e36f28 - fStack_64) * uStack_90._4_4_;
      fVar11 = fStack_64 * (float)((ulonglong)pcStack_78 >> 0x20) +
               (_DAT_142e36f28 - fStack_64) * fStack_88;
    }
    else {
      fVar10 = 0.0;
      fVar11 = 0.0;
    }
    pdb_141483090(&uStack_90,param_2,fVar9 + fVar12);
    if ((float)uStack_90 == 1.4013e-45) {
      fVar3 = fStack_64 * SUB84(pcStack_78,0) + (_DAT_142e36f28 - fStack_64) * uStack_90._4_4_;
      fVar6 = fStack_64 * (float)((ulonglong)pcStack_78 >> 0x20) +
              (_DAT_142e36f28 - fStack_64) * fStack_88;
    }
    else {
      fVar3 = 0.0;
      fVar6 = 0.0;
    }
    fVar3 = fVar3 - fVar10;
    fVar6 = fVar6 - fVar11;
    fVar12 = fVar6 * fVar6 + fVar3 * fVar3;
    if (fVar12 <= _DAT_143009d64) {
      *(undefined4 *)(param_1 + 1) = 0;
      *param_1 = 0x3f800000;
      return param_1;
    }
  }
  uStack_90._0_4_ = fVar3 * (_DAT_142e36f28 / SQRT(fVar12));
  uStack_90._4_4_ = fVar6 * (_DAT_142e36f28 / SQRT(fVar12));
  pdb_140df4520(param_1,&uStack_90);
  return param_1;
}

