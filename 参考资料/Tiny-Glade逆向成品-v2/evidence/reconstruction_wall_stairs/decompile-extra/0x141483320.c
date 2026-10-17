// Matched PDB: system_wall_constructor::construct_wooden_walls::construct_wall_boards::WallSampler::tangent_between
// VA 0x141483320, PDB extent 780 bytes
// Ghidra pseudocode; types and unresolved calls are not original source.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB:
   system_wall_constructor::construct_wooden_walls::construct_wall_boards::WallSampler::tangent_between
   Extent: 780 bytes. No whole-program auto-analysis. */

undefined8 *
pdb_141483320(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  undefined8 *puVar4;
  float fVar5;
  undefined8 uVar6;
  float fVar8;
  undefined1 auVar7 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 uStack_90;
  float fStack_88;
  undefined4 uStack_84;
  float *pfStack_80;
  code *pcStack_78;
  float fStack_64;
  undefined4 uStack_60;
  float afStack_5c [17];
  
  cVar1 = *(char *)(param_2 + 0x1c);
  fVar12 = *(float *)(param_2 + 0x18);
  if (cVar1 == '\0') {
    if (fVar12 < 0.0) {
      uStack_60 = 0;
      uStack_90 = &uStack_60;
      fStack_88 = 7.7194595;
      uStack_84 = 1;
      pfStack_80 = afStack_5c;
      pcStack_78 = pdb_140f705d0;
      afStack_5c[0] = fVar12;
      pdb_142dc83d0(&UNK_14330d000,&uStack_90,&UNK_14330d0a0);
      pcVar2 = (code *)swi(3);
      puVar4 = (undefined8 *)(*pcVar2)();
      return puVar4;
    }
    auVar7._4_4_ = (int)param_3;
    auVar7._0_4_ = (int)param_4;
    auVar7._8_4_ = (int)((ulonglong)param_4 >> 0x20);
    auVar7._12_4_ = (int)((ulonglong)param_3 >> 0x20);
    auVar7 = maxps(ZEXT816(0),auVar7);
    auVar10._4_4_ = fVar12;
    auVar10._0_4_ = fVar12;
    auVar10._8_8_ = 0;
    auVar7 = minps(auVar10,auVar7);
    fVar14 = auVar7._0_4_;
    fVar13 = auVar7._4_4_;
    fVar11 = fVar14;
  }
  else {
    uVar6 = func_0x000142e32a70();
    fVar11 = (float)uVar6;
    fVar13 = (float)((ulonglong)uVar6 >> 0x20);
    uVar6 = func_0x000142e32a70();
    fVar15 = (float)((ulonglong)uVar6 >> 0x20);
    fVar14 = (float)uVar6;
    auVar9._0_4_ = ~-(uint)(fVar14 < 0.0) & (uint)fVar14;
    auVar9._4_4_ = ~-(uint)(fVar11 < 0.0) & (uint)fVar11;
    auVar9._8_4_ = ~-(uint)(fVar15 < 0.0) & (uint)fVar15;
    auVar9._12_4_ = ~-(uint)(fVar13 < 0.0) & (uint)fVar13;
    auVar3._4_4_ = (uint)((float)((uint)fVar12 & _UNK_142e377e4) + fVar11) & -(uint)(fVar11 < 0.0);
    auVar3._0_4_ = (uint)((float)((uint)fVar12 & _DAT_142e377e0) + fVar14) & -(uint)(fVar14 < 0.0);
    auVar3._8_4_ = (uint)(fVar15 + 0.0) & -(uint)(fVar15 < 0.0);
    auVar3._12_4_ = (uint)(fVar13 + 0.0) & -(uint)(fVar13 < 0.0);
    fVar14 = SUB164(auVar9 | auVar3,0);
    fVar13 = SUB164(auVar9 | auVar3,4);
    fVar11 = fVar14;
    if (cVar1 != '\0') {
      fVar11 = fVar12 + fVar14;
    }
  }
  fVar11 = (float)(~-(uint)(fVar14 < fVar13) & (uint)fVar14 |
                  (uint)fVar11 & -(uint)(fVar14 < fVar13));
  pdb_141483090(&uStack_90,param_2,fVar13);
  if ((float)uStack_90 == 1.4013e-45) {
    fVar14 = fStack_64 * SUB84(pcStack_78,0) + (_DAT_142e36f28 - fStack_64) * uStack_90._4_4_;
    fVar15 = fStack_64 * (float)((ulonglong)pcStack_78 >> 0x20) +
             (_DAT_142e36f28 - fStack_64) * fStack_88;
  }
  else {
    fVar14 = 0.0;
    fVar15 = 0.0;
  }
  pdb_141483090(&uStack_90,param_2,fVar11);
  if ((float)uStack_90 == 1.4013e-45) {
    fVar5 = fStack_64 * SUB84(pcStack_78,0) + (_DAT_142e36f28 - fStack_64) * uStack_90._4_4_;
    fVar8 = fStack_64 * (float)((ulonglong)pcStack_78 >> 0x20) +
            (_DAT_142e36f28 - fStack_64) * fStack_88;
  }
  else {
    fVar5 = 0.0;
    fVar8 = 0.0;
  }
  fVar5 = fVar5 - fVar14;
  fVar8 = fVar8 - fVar15;
  fVar14 = fVar8 * fVar8 + fVar5 * fVar5;
  if (fVar14 <= _DAT_143009d64) {
    fVar14 = (fVar13 + fVar11) * _DAT_142e36f50;
    fVar11 = fVar12 * _DAT_142e37870;
    if (fVar12 * _DAT_142e37870 <= _DAT_142e37848) {
      fVar11 = _DAT_142e37848;
    }
    pdb_141483090(&uStack_90,param_2,fVar14 - fVar11);
    if ((float)uStack_90 == 1.4013e-45) {
      fVar12 = fStack_64 * SUB84(pcStack_78,0) + (_DAT_142e36f28 - fStack_64) * uStack_90._4_4_;
      fVar13 = fStack_64 * (float)((ulonglong)pcStack_78 >> 0x20) +
               (_DAT_142e36f28 - fStack_64) * fStack_88;
    }
    else {
      fVar12 = 0.0;
      fVar13 = 0.0;
    }
    pdb_141483090(&uStack_90,param_2,fVar11 + fVar14);
    if ((float)uStack_90 == 1.4013e-45) {
      fVar5 = fStack_64 * SUB84(pcStack_78,0) + (_DAT_142e36f28 - fStack_64) * uStack_90._4_4_;
      fVar8 = fStack_64 * (float)((ulonglong)pcStack_78 >> 0x20) +
              (_DAT_142e36f28 - fStack_64) * fStack_88;
    }
    else {
      fVar5 = 0.0;
      fVar8 = 0.0;
    }
    fVar5 = fVar5 - fVar12;
    fVar8 = fVar8 - fVar13;
    fVar14 = fVar8 * fVar8 + fVar5 * fVar5;
    if (fVar14 <= _DAT_143009d64) {
      *(undefined4 *)(param_1 + 1) = 0;
      *param_1 = 0x3f800000;
      return param_1;
    }
  }
  uStack_90._0_4_ = fVar5 * (_DAT_142e36f28 / SQRT(fVar14));
  uStack_90._4_4_ = fVar8 * (_DAT_142e36f28 / SQRT(fVar14));
  pdb_140df4520(param_1,&uStack_90);
  return param_1;
}

