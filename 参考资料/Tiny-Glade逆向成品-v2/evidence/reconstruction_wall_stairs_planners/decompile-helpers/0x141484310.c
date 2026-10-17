// Matched PDB: system_wall_constructor::construct_wooden_walls::construct_wall_boards::remapped_wall_cutouts
// VA 0x141484310, PDB extent 1013 bytes
// Ghidra pseudocode; types and unresolved calls are not original source.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB:
   system_wall_constructor::construct_wooden_walls::construct_wall_boards::remapped_wall_cutouts
   Extent: 1013 bytes. No whole-program auto-analysis. */

void pdb_141484310(longlong *param_1,undefined8 param_2,longlong param_3,longlong param_4,
                  undefined8 param_5,undefined8 param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  float *pfVar10;
  float *pfVar11;
  longlong lVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  ulonglong uStack_f0;
  undefined8 uStack_e8;
  longlong lStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  ulonglong uStack_c8;
  undefined8 uStack_c0;
  ulonglong uVar9;
  
  uStack_c0 = 0xfffffffffffffffe;
  if (param_4 == 0) {
LAB_141484395:
    uStack_d8 = 0;
    uStack_d0 = (float *)0x4;
    uStack_c8 = 0;
  }
  else {
    uVar7 = param_2;
    uVar6 = pdb_140c2b5c0(param_4);
    pdb_1413ebce0(&uStack_100,uVar6,uVar7);
    if (SBORROW8(0,CONCAT44(uStack_fc,uStack_100))) goto LAB_141484395;
    uStack_c8 = uStack_f0;
    uStack_d8 = CONCAT44(uStack_fc,uStack_100);
    uStack_d0 = (float *)CONCAT44(uStack_f4,uStack_f8);
  }
  pdb_1414853f0(&uStack_100,param_2,param_5,param_6);
  lVar12 = CONCAT44(uStack_fc,uStack_100);
  uVar7 = CONCAT44(uStack_f4,uStack_f8);
  if (uStack_d8 - uStack_c8 < uStack_f0) {
    uStack_e8 = uVar7;
    lStack_e0 = lVar12;
    pdb_142d7f1b0(&uStack_d8,uStack_c8,uStack_f0,4,0x10);
    uVar7 = uStack_e8;
    lVar12 = lStack_e0;
  }
  else {
    uVar9 = uStack_c8;
    if (uStack_f0 == 0) goto LAB_14148440e;
  }
  uVar9 = uStack_c8;
  func_0x000142e32760(uStack_d0 + uStack_c8 * 4,uVar7,uStack_f0 << 4);
LAB_14148440e:
  lVar8 = uVar9 + uStack_f0;
  uStack_c8 = lVar8;
  if (lVar12 != 0) {
    func_0x0001406abac0(uVar7,lVar12 << 4,4);
  }
  fVar5 = _DAT_143009d64;
  pfVar10 = uStack_d0 + lVar8 * 4;
  fVar1 = *(float *)(param_3 + 0x3c);
  fVar18 = *(float *)(param_3 + 0x38) + _DAT_14300b120;
  for (pfVar11 = uStack_d0; pfVar11 != pfVar10; pfVar11 = pfVar11 + 4) {
    fVar17 = *pfVar11;
    fVar2 = pfVar11[1];
    fVar3 = pfVar11[2];
    fVar4 = pfVar11[3];
    fVar14 = (float)pdb_141483e90(param_3);
    fVar15 = (float)pdb_141483e90(param_3);
    fVar16 = 0.0;
    uVar13 = -(uint)NAN(fVar14);
    if (fVar5 < fVar17) {
      fVar17 = fVar15;
      if (fVar14 <= fVar15) {
        fVar17 = fVar14;
      }
      fVar16 = (float)(~uVar13 & (uint)fVar17 | uVar13 & (uint)fVar15);
    }
    fVar17 = fVar1;
    if (fVar3 < fVar18) {
      fVar17 = fVar15;
      if (fVar15 <= fVar14) {
        fVar17 = fVar14;
      }
      fVar17 = (float)(~uVar13 & (uint)fVar17 | uVar13 & (uint)fVar15);
    }
    *pfVar11 = fVar16;
    pfVar11[1] = fVar2;
    pfVar11[2] = fVar17;
    pfVar11[3] = fVar4;
  }
  param_1[2] = uStack_c8;
  *param_1 = uStack_d8;
  param_1[1] = (longlong)uStack_d0;
  return;
}

