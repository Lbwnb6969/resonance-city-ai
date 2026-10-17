// Matched PDB: system_wall_constructor::construct_wooden_walls::construct_wall_boards::WallSampler::sample_pair_at
// VA 0x141483090, PDB extent 652 bytes
// Ghidra pseudocode; types and unresolved calls are not original source.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB:
   system_wall_constructor::construct_wooden_walls::construct_wall_boards::WallSampler::sample_pair_at
   Extent: 652 bytes. No whole-program auto-analysis. */

void pdb_141483090(undefined4 *param_1,longlong param_2,float param_3)

{
  float *pfVar1;
  undefined4 **ppuVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 **ppuVar9;
  undefined4 **ppuVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  float fVar19;
  undefined4 *puStack_68;
  code *pcStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  float afStack_3c [5];
  
  ppuVar2 = *(undefined4 ***)(param_2 + 0x10);
  if (ppuVar2 == (undefined4 **)0x0) {
    *param_1 = 0;
    return;
  }
  puVar3 = *(undefined8 **)(param_2 + 8);
  puVar11 = (undefined8 *)((longlong)puVar3 + (longlong)ppuVar2 * 0x14 + -0x14);
  if (puVar11 == (undefined8 *)0x0) {
LAB_141483231:
    uStack_44 = *(undefined4 *)(puVar3 + 2);
    uStack_58._4_4_ = (undefined4)*puVar3;
    uStack_50 = (undefined4)((ulonglong)*puVar3 >> 0x20);
    uStack_4c = (undefined4)puVar3[1];
    uStack_48 = (undefined4)((ulonglong)puVar3[1] >> 0x20);
    uStack_58._0_4_ = *(undefined4 *)(puVar3 + 2);
    uVar15 = *(undefined4 *)puVar3;
    uVar16 = *(undefined4 *)((longlong)puVar3 + 4);
    uVar17 = *(undefined4 *)(puVar3 + 1);
    uVar18 = *(undefined4 *)((longlong)puVar3 + 0xc);
LAB_14148324a:
    *(ulonglong *)(param_1 + 9) = CONCAT44(uStack_44,uStack_48);
    param_1[1] = uVar15;
    param_1[2] = uVar16;
    param_1[3] = uVar17;
    param_1[4] = uVar18;
    param_1[5] = (undefined4)uStack_58;
    *(ulonglong *)(param_1 + 6) = CONCAT44(uStack_50,uStack_58._4_4_);
    param_1[8] = uStack_4c;
    param_1[0xb] = 0;
LAB_14148327a:
    *param_1 = 1;
    return;
  }
  fVar14 = *(float *)(param_2 + 0x18);
  if (*(char *)(param_2 + 0x1c) == '\0') {
    if (0.0 <= fVar14) {
      fVar13 = 0.0;
      if (0.0 <= param_3) {
        fVar13 = param_3;
      }
      fVar19 = fVar14;
      if (fVar13 <= fVar14) {
        fVar19 = fVar13;
      }
      if (fVar19 <= *(float *)(puVar3 + 1)) goto LAB_141483231;
      goto LAB_14148314f;
    }
    uStack_40 = 0;
    puStack_68 = &uStack_40;
    pcStack_60 = pdb_140f705d0;
    uStack_58 = afStack_3c;
    uStack_50 = 0x40f705d0;
    uStack_4c = 1;
    ppuVar10 = &puStack_68;
    afStack_3c[0] = fVar14;
    pdb_142dc83d0(&UNK_14330d000,ppuVar10,&UNK_14330d0a0);
  }
  else {
    fVar13 = (float)func_0x000142e32a70(param_3);
    fVar19 = (float)(-(uint)(fVar13 < 0.0) & (uint)((float)(_DAT_142e377e0 & (uint)fVar14) + fVar13)
                    | ~-(uint)(fVar13 < 0.0) & (uint)fVar13);
    if (fVar19 < *(float *)(puVar3 + 1)) {
      fVar19 = fVar19 + fVar14;
    }
    if (fVar19 <= *(float *)(puVar3 + 1)) goto LAB_141483231;
LAB_14148314f:
    if (*(float *)((longlong)puVar3 + (longlong)ppuVar2 * 0x14 + -0xc) <= fVar19) {
      uStack_44 = *(undefined4 *)((longlong)puVar3 + (longlong)ppuVar2 * 0x14 + -4);
      uVar4 = *(undefined8 *)((longlong)puVar3 + (longlong)ppuVar2 * 0x14 + -0xc);
      uStack_58._4_4_ = (undefined4)*puVar11;
      uStack_50 = (undefined4)((ulonglong)*puVar11 >> 0x20);
      uStack_4c = (undefined4)uVar4;
      uStack_48 = (undefined4)((ulonglong)uVar4 >> 0x20);
      uStack_58._0_4_ = *(undefined4 *)((longlong)puVar3 + (longlong)ppuVar2 * 0x14 + -4);
      uVar15 = *(undefined4 *)puVar11;
      uVar16 = *(undefined4 *)((longlong)puVar3 + (longlong)ppuVar2 * 0x14 + -0x10);
      uVar17 = *(undefined4 *)((longlong)puVar3 + (longlong)ppuVar2 * 0x14 + -0xc);
      uVar18 = *(undefined4 *)((longlong)puVar3 + (longlong)ppuVar2 * 0x14 + -8);
      goto LAB_14148324a;
    }
    lVar8 = 0;
    lVar7 = lVar8;
    ppuVar10 = ppuVar2;
    if (ppuVar2 != (undefined4 **)0x1) {
      do {
        lVar8 = lVar7 + ((ulonglong)ppuVar10 >> 1);
        pfVar1 = (float *)((longlong)puVar3 + lVar8 * 0x14 + 8);
        if (fVar19 < *pfVar1 || fVar19 == *pfVar1) {
          lVar8 = lVar7;
        }
        ppuVar10 = (undefined4 **)((longlong)ppuVar10 - ((ulonglong)ppuVar10 >> 1));
        lVar7 = lVar8;
      } while ((undefined4 **)0x1 < ppuVar10);
    }
    pfVar1 = (float *)((longlong)puVar3 + lVar8 * 0x14 + 8);
    uVar12 = (ulonglong)(*pfVar1 <= fVar19 && fVar19 != *pfVar1);
    ppuVar10 = (undefined4 **)((lVar8 + uVar12) - 1);
    if (ppuVar10 < ppuVar2) {
      ppuVar9 = (undefined4 **)(lVar8 + uVar12);
      if (ppuVar2 <= ppuVar9) goto LAB_141483309;
      fVar14 = *(float *)((longlong)puVar3 + (longlong)ppuVar10 * 0x14 + 8);
      fVar13 = *(float *)((longlong)puVar3 + (longlong)ppuVar9 * 0x14 + 8);
      uVar4 = *(undefined8 *)((longlong)puVar3 + (longlong)ppuVar9 * 0x14 + 0xc);
      *(undefined8 *)(param_1 + 1) = *(undefined8 *)((longlong)puVar3 + (longlong)ppuVar10 * 0x14);
      param_1[3] = fVar14;
      puVar3 = (undefined8 *)((longlong)puVar3 + (longlong)ppuVar10 * 0x14 + 0xc);
      uVar6 = puVar3[1];
      *(undefined8 *)(param_1 + 4) = *puVar3;
      *(undefined8 *)(param_1 + 6) = uVar6;
      param_1[8] = fVar13;
      fVar13 = fVar13 - fVar14;
      if (fVar13 <= _DAT_143009d64) {
        fVar13 = _DAT_143009d64;
      }
      fVar13 = (fVar19 - fVar14) / fVar13;
      fVar14 = 0.0;
      if (0.0 <= fVar13) {
        fVar14 = fVar13;
      }
      fVar13 = _DAT_142e36f28;
      if (fVar14 <= _DAT_142e36f28) {
        fVar13 = fVar14;
      }
      *(undefined8 *)(param_1 + 9) = uVar4;
      param_1[0xb] = fVar13;
      goto LAB_14148327a;
    }
  }
  ppuVar9 = (undefined4 **)pdb_142dc81f2(ppuVar10,ppuVar2,&UNK_14330d110);
LAB_141483309:
  pdb_142dc81f2(ppuVar9,ppuVar2,&UNK_14330d128);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

