// VA 0x1408c2be0, PDB extent 1148 bytes
// system_decorator::decorator_visual::gothic_wall_window::get_gothic_hat_bones
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/gothic_wall_window.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_decorator::decorator_visual::gothic_wall_window::get_gothic_hat_bones
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/gothic_wall_window.rs
   Extent: 1148 */

float * pdb_1408c2be0(float *param_1,longlong param_2,longlong param_3,float param_4,
                     undefined4 param_5,float param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  float fStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  float fStack_b4;
  float fStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  float fStack_94;
  undefined4 uStack_90;
  float fStack_8c;
  
  uStack_ac = param_5;
  fStack_b0 = param_4;
  if (*(int *)(param_2 + 600) == 0) {
    fVar14 = (float)pdb_140de8220(_DAT_142e3c678,_DAT_14300a33c);
    cVar5 = *(char *)(param_3 + 0x59);
    if (cVar5 != '\x01') {
      fVar17 = 0.0;
      if (0.0 <= fVar14) {
        fVar17 = fVar14;
      }
      fVar14 = _DAT_142e36f28;
      if (fVar17 <= _DAT_142e36f28) {
        fVar14 = fVar17;
      }
      if (cVar5 == '\x02') {
        fVar14 = fVar14 * 0.0 + (_DAT_142e36f28 - fVar14) * _DAT_14300b5d0 + _DAT_142e3b1d8;
      }
      else {
        if (cVar5 != '\x03') {
                    /* WARNING: Subroutine does not return */
          pdb_142dc83b0(&UNK_143016508,0x28,&UNK_143016590);
        }
        fVar14 = fVar14 * 0.0 + (_DAT_142e36f28 - fVar14) * _DAT_143016248 + _DAT_142e3c608;
      }
      param_6 = param_6 - fVar14;
      goto LAB_1408c2d1c;
    }
  }
  else {
    cVar5 = *(char *)(param_3 + 0x59);
    if (cVar5 == '\x01') goto LAB_1408c2d1c;
    if (cVar5 != '\x02') {
      if (cVar5 != '\x03') {
                    /* WARNING: Subroutine does not return */
        pdb_142dc83b0(&UNK_143016508,0x28,&UNK_1430165f0);
      }
      param_6 = param_6 + _DAT_142e42360;
      goto LAB_1408c2d1c;
    }
  }
  param_6 = param_6 + _DAT_142f684a8;
LAB_1408c2d1c:
  uStack_a4 = param_5;
  param_6 = param_6 * _DAT_142e36f50;
  uStack_c8 = pdb_14092f860(param_2);
  uStack_c4 = extraout_XMM0_Da;
  uStack_a8 = pdb_140dea610(&uStack_c8,param_4 - param_6);
  uStack_9c = param_5;
  uStack_c8 = pdb_14092f860(param_2);
  uStack_c4 = extraout_XMM0_Da_00;
  uStack_a0 = pdb_140dea610(&uStack_c8,param_6 + param_4);
  pdb_140dea260(&uStack_c8,&uStack_a8,param_2);
  fVar14 = fStack_c0;
  uVar6 = uStack_c8;
  uStack_98 = uStack_c8;
  fStack_94 = fStack_c0;
  pdb_140dea260(&uStack_c8,&uStack_a0,param_2);
  fVar13 = fStack_c0;
  uVar7 = uStack_c8;
  uStack_90 = uStack_c8;
  fStack_8c = fStack_c0;
  fVar12 = (float)pdb_14148ca40(param_2,uVar6,fVar14,&UNK_1430165a8);
  fVar17 = _DAT_142e36f28;
  fVar14 = 0.0;
  if (0.0 <= fVar12) {
    fVar14 = fVar12;
  }
  fVar12 = _DAT_142e36f28;
  if (fVar14 <= _DAT_142e36f28) {
    fVar12 = fVar14;
  }
  uVar8 = pdb_14148c300(param_2,fVar12);
  uVar9 = (ulonglong)uVar8;
  uVar10 = uVar9 + 1;
  uVar11 = *(ulonglong *)(param_2 + 0x10);
  if (uVar10 < uVar11) {
    uVar1 = *(undefined8 *)(*(longlong *)(param_2 + 8) + uVar9 * 8);
    uVar2 = *(undefined8 *)(*(longlong *)(param_2 + 8) + 8 + uVar9 * 8);
    fVar13 = (float)pdb_14148ca40(param_2,uVar7,fVar13,&UNK_1430165c0);
    fVar14 = 0.0;
    if (0.0 <= fVar13) {
      fVar14 = fVar13;
    }
    fVar13 = fVar17;
    if (fVar14 <= fVar17) {
      fVar13 = fVar14;
    }
    uVar8 = pdb_14148c300(param_2,fVar13);
    uVar9 = (ulonglong)uVar8;
    uVar10 = uVar9 + 1;
    uVar11 = *(ulonglong *)(param_2 + 0x10);
    if (uVar10 < uVar11) {
      uVar3 = *(undefined8 *)(*(longlong *)(param_2 + 8) + uVar9 * 8);
      uVar4 = *(undefined8 *)(*(longlong *)(param_2 + 8) + 8 + uVar9 * 8);
      pdb_140dea260(&uStack_bc,&fStack_b0,param_2);
      fVar13 = (float)pdb_14148ca40(param_2,uStack_bc,fStack_b4,&UNK_1430165d8);
      fVar14 = 0.0;
      if (0.0 <= fVar13) {
        fVar14 = fVar13;
      }
      fVar13 = fVar17;
      if (fVar14 <= fVar17) {
        fVar13 = fVar14;
      }
      uVar8 = pdb_14148c300(param_2,fVar13);
      uVar9 = (ulonglong)uVar8;
      uVar10 = uVar9 + 1;
      uVar11 = *(ulonglong *)(param_2 + 0x10);
      if (uVar10 < uVar11) {
        fVar12 = (float)uVar4 - (float)uVar3;
        fVar15 = (float)((ulonglong)uVar4 >> 0x20) - (float)((ulonglong)uVar3 >> 0x20);
        fVar23 = fVar17 / SQRT(fVar15 * fVar15 + fVar12 * fVar12);
        fVar16 = (float)((uint)fVar23 ^ _DAT_142e37820);
        uVar3 = *(undefined8 *)(*(longlong *)(param_2 + 8) + uVar9 * 8);
        uVar4 = *(undefined8 *)(*(longlong *)(param_2 + 8) + 8 + uVar9 * 8);
        fVar18 = (float)((ulonglong)uVar2 >> 0x20) - (float)((ulonglong)uVar1 >> 0x20);
        fVar19 = (float)uVar2 - (float)uVar1;
        fVar20 = (float)((ulonglong)uVar4 >> 0x20) - (float)((ulonglong)uVar3 >> 0x20);
        fVar21 = (float)uVar4 - (float)uVar3;
        fVar13 = fVar17 / SQRT(fVar19 * fVar19 + fVar18 * fVar18);
        fVar22 = (float)((uint)fVar13 ^ _DAT_142e37820);
        fVar17 = fVar17 / SQRT(fVar21 * fVar21 + fVar20 * fVar20);
        fVar14 = (float)(_DAT_142e37820 ^ (uint)fVar17);
        pdb_140df4540(param_1 + 4,&uStack_98,param_5);
        pdb_140df4540(&uStack_c8,&uStack_90,param_5);
        param_1[9] = fStack_b4;
        *(ulonglong *)(param_1 + 7) = CONCAT44(uStack_b8,uStack_bc);
        *param_1 = fVar22 * fVar18;
        param_1[1] = fVar13 * fVar19;
        param_1[2] = fVar14 * fVar20;
        param_1[3] = fVar17 * fVar21;
        *(ulonglong *)(param_1 + 10) = CONCAT44(uStack_c4,uStack_c8);
        param_1[0xc] = fStack_c0;
        *(ulonglong *)(param_1 + 0xd) = CONCAT44(fVar12 * fVar23,fVar15 * fVar16);
        return param_1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc81f2(uVar10,uVar11,&UNK_14330d748);
}

