// Matched PDB: system_wall_constructor::construct_wooden_walls::construct_wall_boards::shrink_horizontal_gable_top_plank_aabb
// VA 0x14148a930, PDB extent 913 bytes
// Ghidra pseudocode; types and unresolved calls are not original source.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB:
   system_wall_constructor::construct_wooden_walls::construct_wall_boards::shrink_horizontal_gable_top_plank_aabb
   Extent: 913 bytes. No whole-program auto-analysis. */

undefined8 *
pdb_14148a930(undefined8 *param_1,longlong param_2,undefined8 param_3,longlong param_4,byte param_5,
             undefined8 param_6,char param_7,float *param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  code *pcVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  undefined8 *puVar9;
  undefined4 uVar10;
  longlong lVar11;
  uint uVar12;
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar16;
  float fVar17;
  undefined4 uStack_100;
  float fStack_fc;
  undefined8 uStack_f8;
  float fStack_f0;
  undefined4 uStack_ec;
  float *pfStack_e8;
  code *pcStack_e0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  
  if (param_7 == '\0') {
    uVar6 = *(undefined8 *)(param_8 + 2);
    *param_1 = *(undefined8 *)param_8;
    param_1[1] = uVar6;
    uVar10 = 0;
    lVar11 = 0x10;
  }
  else {
    uVar10 = 2;
    lVar11 = 0x10;
    if ((param_2 != 0 & param_5) != 0) {
      fVar1 = *param_8;
      fVar2 = param_8[2];
      fStack_fc = *(float *)(param_4 + 0x18);
      if (*(char *)(param_4 + 0x1c) == '\0') {
        if (fStack_fc < 0.0) {
          uStack_100 = 0;
          uStack_f8 = &uStack_100;
          fStack_f0 = 7.7194595;
          uStack_ec = 1;
          pfStack_e8 = &fStack_fc;
          pcStack_e0 = pdb_140f705d0;
          pdb_142dc83d0(&UNK_14330d000,&uStack_f8,&UNK_14330d0a0);
          pcVar5 = (code *)swi(3);
          puVar9 = (undefined8 *)(*pcVar5)();
          return puVar9;
        }
      }
      else {
        func_0x000142e32a70();
      }
      pdb_141483090(&uStack_f8,param_4);
      if ((int)uStack_f8 == 1) {
        fVar16 = fStack_cc * SUB84(pcStack_e0,0) + (_DAT_142e36f28 - fStack_cc) * uStack_f8._4_4_;
        fVar17 = fStack_cc * (float)((ulonglong)pcStack_e0 >> 0x20) +
                 (_DAT_142e36f28 - fStack_cc) * fStack_f0;
      }
      else {
        fVar16 = 0.0;
        fVar17 = 0.0;
      }
      fVar3 = param_8[1];
      pdb_1414874f0(&uStack_f8,param_2,param_3,param_6,fVar16,fVar17,fVar3);
      fVar8 = fStack_f0;
      fVar7 = uStack_f8._4_4_;
      if ((char)uStack_f8 != '\0') {
        fVar4 = param_8[3];
        pdb_1414874f0(&uStack_f8,param_2,param_3,param_6,fVar16,fVar17,fVar4);
        if ((char)uStack_f8 != '\0') {
          uVar12 = -(uint)(fVar8 - fVar7 < fStack_f0 - uStack_f8._4_4_);
          fVar17 = (float)(~uVar12 & (uint)fVar7 | uVar12 & (uint)uStack_f8._4_4_);
          fVar16 = fStack_f0;
          if (fStack_f0 - uStack_f8._4_4_ <= fVar8 - fVar7) {
            fVar16 = fVar8;
          }
          fVar13 = fVar17;
          if (fVar17 <= fVar1) {
            fVar13 = fVar1;
          }
          fVar17 = (float)(~-(uint)NAN(fVar1) & (uint)fVar13 | -(uint)NAN(fVar1) & (uint)fVar17);
          fVar1 = fVar16;
          if (fVar2 <= fVar16) {
            fVar1 = fVar2;
          }
          fStack_c0 = (float)(~-(uint)NAN(fVar2) & (uint)fVar1 | -(uint)NAN(fVar2) & (uint)fVar16);
          if ((fVar17 < fStack_c0) &&
             (fStack_c8 = fVar17, fStack_c4 = fVar3, fStack_bc = fVar4,
             auVar15._0_4_ = (float)pdb_140deec10(&fStack_c8), 0.0 < auVar15._0_4_)) {
            auVar14._0_4_ = fVar7 - fVar17;
            auVar14._4_4_ = uStack_f8._4_4_ - fVar17;
            auVar14._8_4_ = fVar8 - fVar17;
            auVar14._12_4_ = fStack_f0 - fVar17;
            *param_1 = CONCAT44(fStack_c4,fStack_c8);
            param_1[1] = CONCAT44(fStack_bc,fStack_c0);
            *(undefined4 *)(param_1 + 2) = 1;
            auVar15._4_4_ = auVar15._0_4_;
            auVar15._8_4_ = auVar15._0_4_;
            auVar15._12_4_ = auVar15._0_4_;
            auVar15 = divps(auVar14,auVar15);
            auVar15 = maxps(ZEXT816(0),auVar15);
            auVar15 = minps(_DAT_142e3c640,auVar15);
            *(undefined1 (*) [16])((longlong)param_1 + 0x14) = auVar15;
            uVar10 = 6;
            lVar11 = 0x24;
          }
        }
      }
    }
  }
  *(undefined4 *)((longlong)param_1 + lVar11) = uVar10;
  return param_1;
}

