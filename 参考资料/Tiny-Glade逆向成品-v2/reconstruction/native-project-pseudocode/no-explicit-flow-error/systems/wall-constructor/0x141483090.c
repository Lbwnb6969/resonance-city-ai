// VA 0x141483090, PDB extent 652 bytes
// system_wall_constructor::construct_wooden_walls::construct_wall_boards::WallSampler::sample_pair_at
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_wooden_walls/construct_wall_boards.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_wall_constructor::construct_wooden_walls::construct_wall_boards::WallSampler::sample_pair_at
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_wooden_walls/construct_wall_boards.rs
   Extent: 652 */

void pdb_141483090(undefined4 *param_1,longlong param_2,float param_3)

{
  float *pfVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  undefined4 *puStack_68;
  code *pcStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  float afStack_3c [5];
  
  uVar2 = *(ulonglong *)(param_2 + 0x10);
  if (uVar2 == 0) {
    *param_1 = 0;
    return;
  }
  puVar3 = *(undefined8 **)(param_2 + 8);
  puVar10 = (undefined8 *)((longlong)puVar3 + uVar2 * 0x14 + -0x14);
  if (puVar10 == (undefined8 *)0x0) {
LAB_141483231:
    uStack_44 = *(undefined4 *)(puVar3 + 2);
    uStack_58._4_4_ = (undefined4)*puVar3;
    uStack_50 = (undefined4)((ulonglong)*puVar3 >> 0x20);
    uStack_4c = (undefined4)puVar3[1];
    uStack_48 = (undefined4)((ulonglong)puVar3[1] >> 0x20);
    uStack_58._0_4_ = *(undefined4 *)(puVar3 + 2);
    uVar12 = *(undefined4 *)puVar3;
    uVar13 = *(undefined4 *)((longlong)puVar3 + 4);
    uVar14 = *(undefined4 *)(puVar3 + 1);
    uVar15 = *(undefined4 *)((longlong)puVar3 + 0xc);
  }
  else {
    afStack_3c[0] = *(float *)(param_2 + 0x18);
    if (*(char *)(param_2 + 0x1c) == '\0') {
      if (afStack_3c[0] < 0.0) {
        uStack_40 = 0;
        puStack_68 = &uStack_40;
        pcStack_60 = pdb_140f705d0;
        uStack_58 = afStack_3c;
        uStack_50 = 0x40f705d0;
        uStack_4c = 1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc83d0(&UNK_14330d000,&puStack_68,&UNK_14330d0a0);
      }
      fVar11 = 0.0;
      if (0.0 <= param_3) {
        fVar11 = param_3;
      }
      fVar16 = afStack_3c[0];
      if (fVar11 <= afStack_3c[0]) {
        fVar16 = fVar11;
      }
      if (fVar16 <= *(float *)(puVar3 + 1)) goto LAB_141483231;
    }
    else {
      fVar11 = (float)pub_142e32a70(param_3);
      fVar16 = (float)(-(uint)(fVar11 < 0.0) &
                       (uint)((float)(_DAT_142e377e0 & (uint)afStack_3c[0]) + fVar11) |
                      ~-(uint)(fVar11 < 0.0) & (uint)fVar11);
      if (fVar16 < *(float *)(puVar3 + 1)) {
        fVar16 = fVar16 + afStack_3c[0];
      }
      if (fVar16 <= *(float *)(puVar3 + 1)) goto LAB_141483231;
    }
    if (fVar16 < *(float *)((longlong)puVar3 + uVar2 * 0x14 + -0xc)) {
      lVar7 = 0;
      lVar6 = lVar7;
      uVar8 = uVar2;
      if (uVar2 != 1) {
        do {
          lVar7 = lVar6 + (uVar8 >> 1);
          pfVar1 = (float *)((longlong)puVar3 + lVar7 * 0x14 + 8);
          if (fVar16 < *pfVar1 || fVar16 == *pfVar1) {
            lVar7 = lVar6;
          }
          uVar8 = uVar8 - (uVar8 >> 1);
          lVar6 = lVar7;
        } while (1 < uVar8);
      }
      pfVar1 = (float *)((longlong)puVar3 + lVar7 * 0x14 + 8);
      uVar8 = (ulonglong)(*pfVar1 <= fVar16 && fVar16 != *pfVar1);
      uVar9 = (lVar7 + uVar8) - 1;
      if (uVar2 <= uVar9) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(uVar9,uVar2,&UNK_14330d110);
      }
      uVar8 = lVar7 + uVar8;
      if (uVar2 <= uVar8) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(uVar8,uVar2,&UNK_14330d128);
      }
      fVar11 = *(float *)((longlong)puVar3 + uVar9 * 0x14 + 8);
      fVar17 = *(float *)((longlong)puVar3 + uVar8 * 0x14 + 8);
      uVar4 = *(undefined8 *)((longlong)puVar3 + uVar8 * 0x14 + 0xc);
      *(undefined8 *)(param_1 + 1) = *(undefined8 *)((longlong)puVar3 + uVar9 * 0x14);
      param_1[3] = fVar11;
      puVar3 = (undefined8 *)((longlong)puVar3 + uVar9 * 0x14 + 0xc);
      uVar5 = puVar3[1];
      *(undefined8 *)(param_1 + 4) = *puVar3;
      *(undefined8 *)(param_1 + 6) = uVar5;
      param_1[8] = fVar17;
      fVar17 = fVar17 - fVar11;
      if (fVar17 <= _DAT_143009d64) {
        fVar17 = _DAT_143009d64;
      }
      fVar17 = (fVar16 - fVar11) / fVar17;
      fVar11 = 0.0;
      if (0.0 <= fVar17) {
        fVar11 = fVar17;
      }
      fVar16 = _DAT_142e36f28;
      if (fVar11 <= _DAT_142e36f28) {
        fVar16 = fVar11;
      }
      *(undefined8 *)(param_1 + 9) = uVar4;
      param_1[0xb] = fVar16;
      goto LAB_14148327a;
    }
    uStack_44 = *(undefined4 *)((longlong)puVar3 + uVar2 * 0x14 + -4);
    uVar4 = *(undefined8 *)((longlong)puVar3 + uVar2 * 0x14 + -0xc);
    uStack_58._4_4_ = (undefined4)*puVar10;
    uStack_50 = (undefined4)((ulonglong)*puVar10 >> 0x20);
    uStack_4c = (undefined4)uVar4;
    uStack_48 = (undefined4)((ulonglong)uVar4 >> 0x20);
    uStack_58._0_4_ = *(undefined4 *)((longlong)puVar3 + uVar2 * 0x14 + -4);
    uVar12 = *(undefined4 *)puVar10;
    uVar13 = *(undefined4 *)((longlong)puVar3 + uVar2 * 0x14 + -0x10);
    uVar14 = *(undefined4 *)((longlong)puVar3 + uVar2 * 0x14 + -0xc);
    uVar15 = *(undefined4 *)((longlong)puVar3 + uVar2 * 0x14 + -8);
  }
  *(ulonglong *)(param_1 + 9) = CONCAT44(uStack_44,uStack_48);
  param_1[1] = uVar12;
  param_1[2] = uVar13;
  param_1[3] = uVar14;
  param_1[4] = uVar15;
  param_1[5] = (undefined4)uStack_58;
  *(ulonglong *)(param_1 + 6) = CONCAT44(uStack_50,uStack_58._4_4_);
  param_1[8] = uStack_4c;
  param_1[0xb] = 0;
LAB_14148327a:
  *param_1 = 1;
  return;
}

