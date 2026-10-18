// VA 0x1429832a0, PDB extent 358 bytes
// toolbar::toolbar_systems::undo_redo_alignment
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/toolbar_systems.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x000142983779) overlaps instruction at (ram,0x000142983773)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: toolbar::toolbar_systems::undo_redo_alignment
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/toolbar_systems.rs
   Extent: 358 */

void pdb_1429832a0(float param_1,undefined8 *param_2,undefined8 *param_3,ulonglong param_4)

{
  char *pcVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  float fVar6;
  char cVar7;
  undefined4 uVar8;
  undefined *puVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong *in_RCX;
  longlong lVar13;
  longlong lVar14;
  undefined4 *puVar15;
  undefined8 *puVar16;
  longlong *plVar17;
  uint uVar18;
  undefined8 *unaff_R13;
  longlong unaff_R14;
  longlong *unaff_R15;
  float fVar19;
  int iVar21;
  undefined1 auVar20 [16];
  float fVar22;
  float unaff_XMM9_Da;
  float fVar23;
  undefined8 *in_stack_000000b0;
  longlong *in_stack_000000c8;
  int iStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  int iStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined1 auStack_178 [272];
  undefined4 uStack_68;
  undefined8 uStack_60;
  
  puVar15 = (undefined4 *)*param_3;
  uVar8 = *puVar15;
  uVar18 = puVar15[1];
  puVar16 = (undefined8 *)(ulonglong)uVar18;
  uVar2 = puVar15[2];
  uVar3 = puVar15[3];
  plVar17 = (longlong *)(ulonglong)uVar3;
  puVar9 = &UNK_143607f88 + *(int *)(&UNK_143607f88 + (ulonglong)*(byte *)(*in_RCX + 0xf0) * 4);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(byte *)(*in_RCX + 0xf0)) {
  case 0:
    uVar4 = *(undefined4 *)((longlong)param_2 + 0x1c);
    puVar15 = (undefined4 *)param_2[2];
    *puVar15 = uVar4;
    uVar12 = *param_2;
    uStack_60 = 0x1429832f2;
    pdb_142390ba0(uVar12,uVar8,uVar18);
    *puVar15 = uVar4;
    uStack_60 = 0x142983303;
    pdb_142390c70(uVar12,uVar8,uVar18);
    *puVar15 = uVar4;
    goto pdb_1423905a0;
  case 1:
    uVar4 = *(undefined4 *)((longlong)param_2 + 0x1c);
    puVar15 = (undefined4 *)param_2[2];
    *puVar15 = uVar4;
    uVar12 = *param_2;
    uStack_60 = 0x1429833d6;
    pdb_142390820(uVar12,uVar8,puVar16);
    *puVar15 = uVar4;
    uStack_60 = 0x1429833e7;
    pdb_142390e40(uVar12,uVar8,puVar16);
    *puVar15 = uVar4;
    goto pdb_142390ad0;
  case 2:
    uVar4 = *(undefined4 *)((longlong)param_2 + 0x1c);
    puVar15 = (undefined4 *)param_2[2];
    *puVar15 = uVar4;
    uVar12 = *param_2;
    uStack_60 = 0x14298333e;
    pdb_1423908f0(uVar12,uVar8,puVar16);
    *puVar15 = uVar4;
    uStack_60 = 0x14298334f;
    pdb_142390e40(uVar12,uVar8,puVar16);
    *puVar15 = uVar4;
pdb_142390ad0:
    pdb_1411bdcb0(&iStack_1b8,uVar12,uVar2,uVar3);
    if (iStack_1b8 == 4) {
      pdb_14238fa10(auStack_178,CONCAT44(uStack_1ac,uStack_1b0));
      pdb_1411be200(&iStack_1b8,uVar12,uVar2,uVar3,auStack_178);
      if (iStack_1b8 == 4) {
        return;
      }
      uStack_188 = uStack_1a8;
      uStack_180 = uStack_1a0;
      iStack_198 = iStack_1b8;
      uStack_194 = uStack_1b4;
      uStack_190 = uStack_1b0;
      uStack_18c = uStack_1ac;
      puVar9 = &UNK_1434e0000;
    }
    else {
      uStack_188 = uStack_1a8;
      uStack_180 = uStack_1a0;
      iStack_198 = iStack_1b8;
      uStack_194 = uStack_1b4;
      uStack_190 = uStack_1b0;
      uStack_18c = uStack_1ac;
      puVar9 = &UNK_1434dffe8;
    }
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_1434dfe58,0x2b,&iStack_198,&UNK_1434dfe38,puVar9);
  case 3:
    uVar4 = *(undefined4 *)((longlong)param_2 + 0x1c);
    puVar15 = (undefined4 *)param_2[2];
    *puVar15 = uVar4;
    uVar12 = *param_2;
    uStack_60 = 0x14298338a;
    pdb_142390ba0(uVar12,uVar8,puVar16);
    *puVar15 = uVar4;
    uStack_60 = 0x14298339b;
    pdb_142390670(uVar12,uVar8,puVar16);
    *puVar15 = uVar4;
pdb_1423905a0:
    pdb_1411bdcb0(&iStack_1b8,uVar12,uVar2,uVar3);
    if (iStack_1b8 == 4) {
      pdb_14238fa10(auStack_178,CONCAT44(uStack_1ac,uStack_1b0));
      pdb_1411be200(&iStack_1b8,uVar12,uVar2,uVar3,auStack_178);
      if (iStack_1b8 == 4) {
        return;
      }
      uStack_188 = uStack_1a8;
      uStack_180 = uStack_1a0;
      iStack_198 = iStack_1b8;
      uStack_194 = uStack_1b4;
      uStack_190 = uStack_1b0;
      uStack_18c = uStack_1ac;
      puVar9 = &UNK_1434e0000;
    }
    else {
      uStack_188 = uStack_1a8;
      uStack_180 = uStack_1a0;
      iStack_198 = iStack_1b8;
      uStack_194 = uStack_1b4;
      uStack_190 = uStack_1b0;
      uStack_18c = uStack_1ac;
      puVar9 = &UNK_1434dffe8;
    }
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_1434dfe58,0x2b,&iStack_198,&UNK_1434dfe38,puVar9);
  case 4:
                    /* WARNING: Could not emulate address calculation at 0x000142983507 */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_143607f98 + *(int *)(&UNK_143607f98 + (longlong)puVar9 * 4)))();
    return;
  case 5:
    break;
  case 6:
    DAT_142e36f50 =
         DAT_142e36f50 + (char)puVar9 +
         (0xfffffffebc9f8077U <
         (ulonglong)(longlong)*(int *)(&UNK_143607f88 + (ulonglong)*(byte *)(*in_RCX + 0xf0) * 4));
    break;
  case 7:
    break;
  case 8:
    goto code_r0x000142983767;
  case 9:
    UNK_143607feb = UNK_143607feb + -0x78;
    goto code_r0x000142983773;
  case 0xb:
    LOCK();
    *(char *)plVar17 = (char)*plVar17 + (char)uVar3;
    UNLOCK();
    pcVar1 = (char *)(((ulonglong)puVar9 & 0xffffffff) + 0xf);
    *pcVar1 = *pcVar1 + (char)(uVar3 >> 8);
    out((short)param_2,uVar3);
  case 10:
    goto code_r0x000142983773;
  default:
    uStack_60 = *param_2;
    uStack_68 = 0x43607f95;
    lVar11 = (*(code *)((longlong)param_2 + -0x1900c84d))();
    *(int *)(lVar11 + -0x4b) = *(int *)(lVar11 + -0x4b) + 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  puVar5 = (undefined8 *)*unaff_R13;
  fVar23 = *(float *)(puVar5 + 2);
  uStack_60 = 0x142983577;
  cVar7 = pdb_140a00370(*puVar16);
  if (cVar7 == '\0') {
code_r0x0001429835ff:
    fVar19 = *(float *)(*plVar17 + 0x58) / _DAT_142e37988;
code_r0x00014298360f:
    uVar8 = *(undefined4 *)((longlong)unaff_R13 + 0x1c);
    puVar15 = (undefined4 *)unaff_R13[2];
    *puVar15 = uVar8;
    fVar19 = fVar19 + *(float *)(puVar5 + 2);
  }
  else {
    uStack_60 = 0x1429835b7;
    pdb_140deead0(&stack0xffffffffffffffd8);
    uStack_60 = 0x1429835cb;
    cVar7 = pdb_140deec60(&stack0xffffffffffffffd8);
    if (cVar7 == '\0') goto code_r0x0001429835ff;
    uStack_60 = 0x1429835e6;
    cVar7 = pdb_140938ba0(*(undefined4 *)*in_stack_000000b0);
    if (cVar7 == '\0') {
      fVar19 = *(float *)(*plVar17 + 0x58) / _DAT_142e37ae0;
      goto code_r0x00014298360f;
    }
    fVar19 = *(float *)(puVar5 + 2);
    uVar8 = *(undefined4 *)((longlong)unaff_R13 + 0x1c);
    puVar15 = (undefined4 *)unaff_R13[2];
  }
  fVar6 = _DAT_142e36f28;
  fVar22 = 0.0;
  if (0.0 <= fVar19) {
    fVar22 = fVar19;
  }
  fVar19 = _DAT_142e36f28;
  if (fVar22 <= _DAT_142e36f28) {
    fVar19 = fVar22;
  }
  *puVar15 = uVar8;
  *(float *)(puVar5 + 2) = fVar19;
  if ((fVar23 != 0.0) || (fVar19 <= 0.0)) {
    if ((fVar23 == _DAT_142e36f28) && ((!NAN(fVar23) && !NAN(_DAT_142e36f28) && (fVar19 < fVar6))))
    {
      *(undefined4 *)in_stack_000000c8[2] = *(undefined4 *)((longlong)in_stack_000000c8 + 0x1c);
      lVar11 = *in_stack_000000c8;
      lVar14 = *(longlong *)(lVar11 + 0x30);
      uVar12 = *(undefined8 *)(lVar11 + 0x40);
      if (lVar14 == *(longlong *)(lVar11 + 0x20)) {
        uStack_60 = 0x1429836c2;
        pdb_142d7e6e0(lVar11 + 0x20);
      }
      lVar10 = *(longlong *)(lVar11 + 0x28);
      lVar13 = lVar14 * 0x20;
      *(undefined4 *)(lVar10 + lVar13) = 0x15;
      goto code_r0x0001429836d4;
    }
  }
  else {
    *(undefined4 *)in_stack_000000c8[2] = *(undefined4 *)((longlong)in_stack_000000c8 + 0x1c);
    lVar11 = *in_stack_000000c8;
    lVar14 = *(longlong *)(lVar11 + 0x30);
    uVar12 = *(undefined8 *)(lVar11 + 0x40);
    if (lVar14 == *(longlong *)(lVar11 + 0x20)) {
      uStack_60 = 0x14298367a;
      pdb_142d7e6e0(lVar11 + 0x20);
    }
    lVar10 = *(longlong *)(lVar11 + 0x28);
    lVar13 = lVar14 * 0x20;
    *(undefined4 *)(lVar10 + lVar13) = 0x14;
code_r0x0001429836d4:
    *(undefined8 *)(lVar10 + 0x18 + lVar13) = uVar12;
    *(longlong *)(lVar11 + 0x30) = lVar14 + 1;
    *(longlong *)(lVar11 + 0x40) = *(longlong *)(lVar11 + 0x40) + 1;
  }
  fVar23 = unaff_XMM9_Da * _DAT_142e3a74c;
  uStack_60 = 0x142983700;
  param_1 = (float)pdb_140dedcd0(&UNK_143607eb8);
  param_1 = param_1 * fVar23;
  *(undefined4 *)unaff_R15[2] = *(undefined4 *)((longlong)unaff_R15 + 0x1c);
  lVar11 = *(longlong *)(*unaff_R15 + 0xa0);
  lVar14 = 0;
  do {
    if (*(longlong *)(*unaff_R15 + 0xa8) * 0x28 == lVar14) {
      return;
    }
    puVar16 = (undefined8 *)(lVar11 + 0x10);
    lVar11 = lVar11 + 0x28;
    auVar20._0_4_ = -(uint)((int)*puVar16 == (int)*puVar5);
    iVar21 = -(uint)((int)((ulonglong)*puVar16 >> 0x20) == (int)((ulonglong)*puVar5 >> 0x20));
    auVar20._4_4_ = auVar20._0_4_;
    auVar20._8_4_ = iVar21;
    auVar20._12_4_ = iVar21;
    uVar18 = movmskpd((int)param_4,auVar20);
    param_4 = (ulonglong)uVar18;
    lVar14 = lVar14 + 0x28;
  } while (uVar18 != 3);
code_r0x000142983767:
  param_2 = (undefined8 *)(ulonglong)*(byte *)(unaff_R14 + 0xf0);
code_r0x000142983773:
                    /* WARNING: Could not recover jumptable at 0x000142983781. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_143607fa8 + *(int *)(&UNK_143607fa8 + (longlong)param_2 * 4)))
            (param_1,&UNK_143607fa8 + *(int *)(&UNK_143607fa8 + (longlong)param_2 * 4));
  return;
}

