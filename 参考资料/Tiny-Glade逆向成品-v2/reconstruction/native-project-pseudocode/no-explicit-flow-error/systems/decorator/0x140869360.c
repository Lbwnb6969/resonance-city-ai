// VA 0x140869360, PDB extent 1098 bytes
// system_decorator::ui_systems::ui_move_decorator::find_stair_placement_candidate
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/ui_systems/ui_move_decorator.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_decorator::ui_systems::ui_move_decorator::find_stair_placement_candidate
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/ui_systems/ui_move_decorator.rs
   Extent: 1098 */

undefined8 *
pdb_140869360(undefined8 *param_1,longlong param_2,undefined8 param_3,longlong param_4,float param_5
             ,undefined8 *param_6,char param_7,undefined8 param_8,float param_9,float *param_10)

{
  undefined1 uVar1;
  int iVar2;
  longlong lVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  undefined8 in_stack_fffffffffffffea8;
  undefined4 uStack_13c;
  undefined2 uStack_138;
  int iStack_134;
  undefined4 uStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  char cStack_120;
  byte bStack_11f;
  undefined2 uStack_11e;
  float fStack_11c;
  undefined8 uStack_118;
  undefined8 uStack_110;
  float fStack_104;
  int iStack_ec;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  float fStack_dc;
  undefined4 uStack_d8;
  undefined8 uStack_d4;
  undefined4 uStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  undefined8 uStack_b8;
  
  uVar8 = (undefined4)((ulonglong)in_stack_fffffffffffffea8 >> 0x20);
  if ((param_6 != (undefined8 *)0x0 && param_7 == '\0') && (*(char *)(param_6 + 2) == '\x01')) {
    lVar3 = pdb_140b54f80(param_3,param_6[3],&UNK_14300d610);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_14300d628);
    }
    fVar6 = (float)pdb_14092f880(lVar3);
    fVar6 = fVar6 + param_5;
    fVar7 = fVar6;
    if (fVar6 <= param_9) {
      fVar7 = param_9;
    }
    param_9 = (float)(~-(uint)NAN(param_9) & (uint)fVar7 | -(uint)NAN(param_9) & (uint)fVar6);
  }
  uStack_e0 = 0;
  uStack_d8 = 0;
  uStack_d4 = 0x3f80000000000000;
  uStack_cc = 0;
  fStack_dc = param_9;
  pdb_1414ce0c0(&iStack_134,&uStack_e0,param_8,0);
  if (iStack_134 != 1) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 2;
    return param_1;
  }
  uVar10 = *(undefined8 *)(param_2 + 0x60);
  pdb_1414c46d0(&cStack_120,uVar10,param_8,uStack_130);
  uVar5 = (undefined1)uVar10;
  fVar7 = fStack_12c;
  fVar6 = fStack_124;
  if (cStack_120 != '\0') {
    fVar7 = (float)uStack_118;
    fVar6 = (float)uStack_110;
    fStack_128 = uStack_118._4_4_;
  }
  uVar10 = *(undefined8 *)(param_4 + 8);
  uStack_118 = *(longlong *)(param_4 + 0x10) * 2;
  cStack_120 = (char)uVar10;
  bStack_11f = (byte)((ulonglong)uVar10 >> 8);
  uStack_11e = (undefined2)((ulonglong)uVar10 >> 0x10);
  fStack_11c = (float)((ulonglong)uVar10 >> 0x20);
  uStack_110 = *(undefined8 *)(param_4 + 0x50);
  uVar10 = pdb_1402202d0(&cStack_120);
  fVar13 = (float)uVar10;
  fVar9 = fVar13;
  if (fVar13 <= fStack_128) {
    fVar9 = fStack_128;
  }
  uVar11 = CONCAT44((int)((ulonglong)uVar10 >> 0x20),fVar9);
  fVar14 = (float)(~-(uint)NAN(fStack_128) & (uint)fVar9 | -(uint)NAN(fStack_128) & (uint)fVar13);
  *param_10 = fVar7;
  param_10[1] = fVar14;
  param_10[2] = fVar6;
  param_9 = param_9 - param_5;
  if (param_7 == '\0') {
    if (param_6 == (undefined8 *)0x0) {
      param_9 = param_9 - fVar13;
      uVar4 = 2;
      iVar2 = 0;
      uVar10 = _DAT_142e4e650;
      uVar12 = _UNK_142e4e658;
      goto LAB_1408696f9;
    }
    if (*(char *)(param_6 + 2) == '\x01') {
      param_4 = param_6[3];
      lVar3 = pdb_140b54f80(param_3,param_4,&UNK_14300d640);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_14300d658);
      }
      uVar8 = pdb_14092f880(lVar3);
      lVar3 = param_4;
      uVar11 = pdb_140b76b60(&cStack_120,param_4,fVar7,fVar6,*(undefined8 *)(param_2 + 0x40),param_3
                            );
      uVar10 = CONCAT44((float)uStack_118,uVar8);
      uVar5 = (undefined1)lVar3;
      if (cStack_120 == '\0') {
        uVar5 = *(undefined1 *)((longlong)param_6 + 0x11);
        uStack_13c = *(undefined4 *)((longlong)param_6 + 0x12);
        uStack_138 = *(undefined2 *)((longlong)param_6 + 0x16);
        iVar2 = 1;
        uVar4 = 1;
        fVar9 = fStack_11c;
      }
      else {
        iVar2 = 0;
        uVar4 = 2;
        fVar9 = (float)uVar11;
        uVar10 = CONCAT44((int)((ulonglong)uVar11 >> 0x20),fVar13);
      }
    }
    else {
      iVar2 = 0;
      uVar4 = 2;
    }
    uVar11 = CONCAT44((int)((ulonglong)uVar10 >> 0x20),fVar9);
    param_9 = param_9 - (float)uVar10;
    uVar1 = uVar5;
  }
  else {
    param_5 = _DAT_142e37848 - param_5;
    fStack_c8 = fVar7 + param_5 * _DAT_14300d250;
    fStack_c4 = fVar14 + param_5 * _UNK_14300d254;
    fStack_c0 = fVar6 + param_5 * _UNK_14300d258;
    fStack_bc = _DAT_142e377f0 + _UNK_142e378e4 * _UNK_14300d25c;
    uStack_b8 = _DAT_142fa5c30;
    uVar11 = pdb_1409ed340(&cStack_120,(undefined8 *)(param_2 + 0x40),&fStack_c8,_DAT_142e36f3c,
                           CONCAT44(uVar8,0x22));
    iVar2 = 0;
    uVar4 = 2;
    if (((iStack_ec != 2) && (cStack_120 == '\x02')) && (iVar2 = 0, (bStack_11f & 1) != 0)) {
      uVar4 = 1;
      param_4 = uStack_118;
      fVar13 = fStack_104;
      iVar2 = iStack_ec;
      uVar11 = uStack_e8;
    }
    uVar5 = 0;
    param_9 = param_9 - fVar13;
    uVar1 = 0;
    uVar10 = _DAT_142e4e650;
    uVar12 = _UNK_142e4e658;
    if (param_6 == (undefined8 *)0x0) goto LAB_1408696f9;
  }
  uVar5 = uVar1;
  uVar10 = *param_6;
  uVar12 = param_6[1];
LAB_1408696f9:
  fVar9 = 0.0;
  if (0.0 <= param_9) {
    fVar9 = param_9;
  }
  fVar13 = _DAT_142e3a74c;
  if (fVar9 <= _DAT_142e3a74c) {
    fVar13 = fVar9;
  }
  *param_1 = uVar10;
  param_1[1] = uVar12;
  *(undefined1 *)(param_1 + 2) = uVar4;
  *(undefined1 *)((longlong)param_1 + 0x11) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x12) = uStack_13c;
  *(undefined2 *)((longlong)param_1 + 0x16) = uStack_138;
  param_1[3] = param_4;
  *(float *)(param_1 + 4) = fVar7;
  *(float *)((longlong)param_1 + 0x24) = fVar14;
  *(float *)(param_1 + 5) = fVar6;
  *(int *)((longlong)param_1 + 0x2c) = iVar2;
  param_1[6] = uVar11;
  *(float *)(param_1 + 8) = fVar13;
  return param_1;
}

