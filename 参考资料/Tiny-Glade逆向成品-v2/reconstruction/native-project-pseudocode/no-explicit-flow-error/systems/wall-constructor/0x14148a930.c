// VA 0x14148a930, PDB extent 913 bytes
// system_wall_constructor::construct_wooden_walls::construct_wall_boards::shrink_horizontal_gable_top_plank_aabb
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_wooden_walls/construct_wall_boards.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_wall_constructor::construct_wooden_walls::construct_wall_boards::shrink_horizontal_gable_top_plank_aabb
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_wooden_walls/construct_wall_boards.rs
   Extent: 913 */

undefined8 *
pdb_14148a930(undefined8 *param_1,longlong param_2,undefined8 param_3,longlong param_4,byte param_5,
             undefined8 param_6,char param_7,float *param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  longlong lVar9;
  uint uVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
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
    uVar5 = *(undefined8 *)(param_8 + 2);
    *param_1 = *(undefined8 *)param_8;
    param_1[1] = uVar5;
    uVar8 = 0;
    lVar9 = 0x10;
  }
  else {
    uVar8 = 2;
    lVar9 = 0x10;
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
                    /* WARNING: Subroutine does not return */
          pdb_142dc83d0(&UNK_14330d000,&uStack_f8,&UNK_14330d0a0);
        }
      }
      else {
        pub_142e32a70();
      }
      pdb_141483090(&uStack_f8,param_4);
      if ((int)uStack_f8 == 1) {
        fVar14 = fStack_cc * SUB84(pcStack_e0,0) + (_DAT_142e36f28 - fStack_cc) * uStack_f8._4_4_;
        fVar15 = fStack_cc * (float)((ulonglong)pcStack_e0 >> 0x20) +
                 (_DAT_142e36f28 - fStack_cc) * fStack_f0;
      }
      else {
        fVar14 = 0.0;
        fVar15 = 0.0;
      }
      fVar3 = param_8[1];
      pdb_1414874f0(&uStack_f8,param_2,param_3,param_6,fVar14,fVar15,fVar3);
      fVar7 = fStack_f0;
      fVar6 = uStack_f8._4_4_;
      if ((char)uStack_f8 != '\0') {
        fVar4 = param_8[3];
        pdb_1414874f0(&uStack_f8,param_2,param_3,param_6,fVar14,fVar15,fVar4);
        if ((char)uStack_f8 != '\0') {
          uVar10 = -(uint)(fVar7 - fVar6 < fStack_f0 - uStack_f8._4_4_);
          fVar15 = (float)(~uVar10 & (uint)fVar6 | uVar10 & (uint)uStack_f8._4_4_);
          fVar14 = fStack_f0;
          if (fStack_f0 - uStack_f8._4_4_ <= fVar7 - fVar6) {
            fVar14 = fVar7;
          }
          fVar11 = fVar15;
          if (fVar15 <= fVar1) {
            fVar11 = fVar1;
          }
          fVar15 = (float)(~-(uint)NAN(fVar1) & (uint)fVar11 | -(uint)NAN(fVar1) & (uint)fVar15);
          fVar1 = fVar14;
          if (fVar2 <= fVar14) {
            fVar1 = fVar2;
          }
          fStack_c0 = (float)(~-(uint)NAN(fVar2) & (uint)fVar1 | -(uint)NAN(fVar2) & (uint)fVar14);
          if ((fVar15 < fStack_c0) &&
             (fStack_c8 = fVar15, fStack_c4 = fVar3, fStack_bc = fVar4,
             auVar13._0_4_ = (float)pdb_140deec10(&fStack_c8), 0.0 < auVar13._0_4_)) {
            auVar12._0_4_ = fVar6 - fVar15;
            auVar12._4_4_ = uStack_f8._4_4_ - fVar15;
            auVar12._8_4_ = fVar7 - fVar15;
            auVar12._12_4_ = fStack_f0 - fVar15;
            *param_1 = CONCAT44(fStack_c4,fStack_c8);
            param_1[1] = CONCAT44(fStack_bc,fStack_c0);
            *(undefined4 *)(param_1 + 2) = 1;
            auVar13._4_4_ = auVar13._0_4_;
            auVar13._8_4_ = auVar13._0_4_;
            auVar13._12_4_ = auVar13._0_4_;
            auVar13 = divps(auVar12,auVar13);
            auVar13 = maxps(ZEXT816(0),auVar13);
            auVar13 = minps(_DAT_142e3c640,auVar13);
            *(undefined1 (*) [16])((longlong)param_1 + 0x14) = auVar13;
            uVar8 = 6;
            lVar9 = 0x24;
          }
        }
      }
    }
  }
  *(undefined4 *)((longlong)param_1 + lVar9) = uVar8;
  return param_1;
}

