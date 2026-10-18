// VA 0x1414e4000, PDB extent 1188 bytes
// system_decorator::decorator_visual::playermade_stairs::stairs_graph_and_requests::walk_shape::closure$0
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/playermade_stairs/stairs_graph_and_requests.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_decorator::decorator_visual::playermade_stairs::stairs_graph_and_requests::walk_shape::closure$0
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/playermade_stairs/stairs_graph_and_requests.rs
   Extent: 1188 */

void pdb_1414e4000(undefined8 *param_1,float param_2,float param_3,float param_4,float param_5,
                  undefined4 param_6,byte param_7)

{
  short *psVar1;
  longlong lVar2;
  byte bVar3;
  longlong lVar4;
  char *pcVar5;
  undefined8 *puVar6;
  float *pfVar7;
  longlong lVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  longlong *plVar11;
  ulonglong uVar12;
  ulonglong *puVar13;
  byte *pbVar14;
  bool bVar15;
  float *pfVar16;
  bool bVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  uint uVar22;
  
  fVar18 = (float)pdb_140de9fd0(*(undefined4 *)*param_1,*(undefined4 *)param_1[1],param_6);
  param_2 = param_2 + _DAT_142e36f50 * fVar18 * param_4;
  param_3 = param_3 + _DAT_142e36f50 * fVar18 * param_5;
  plVar11 = (longlong *)param_1[2];
  lVar8 = plVar11[1];
  lVar4 = plVar11[2];
  if ((lVar4 != 0) && (lVar8 + lVar4 * 8 != 8)) {
    lVar2 = lVar8 + lVar4 * 8;
    fVar19 = *(float *)(lVar2 + -8);
    if ((fVar19 == param_2) && (!NAN(fVar19) && !NAN(param_2))) {
      fVar19 = *(float *)(lVar2 + -4);
      if ((fVar19 == param_3) && (!NAN(fVar19) && !NAN(param_3))) {
        return;
      }
    }
  }
  uVar22 = (uint)param_4 ^ _DAT_142e37820;
  if (*(char *)param_1[3] == '\0') {
    if (lVar4 == *plVar11) {
      pdb_142db07d0(plVar11);
      lVar8 = plVar11[1];
    }
    *(ulonglong *)(lVar8 + lVar4 * 8) = CONCAT44(param_3,param_2);
    plVar11[2] = lVar4 + 1;
    plVar11 = (longlong *)param_1[9];
    lVar8 = plVar11[2];
    if (lVar8 == *plVar11) {
      pdb_142db07d0(plVar11);
    }
    lVar4 = plVar11[1];
    *(float *)(lVar4 + lVar8 * 8) = param_5;
    *(uint *)(lVar4 + 4 + lVar8 * 8) = uVar22;
    plVar11[2] = lVar8 + 1;
    plVar11 = (longlong *)param_1[10];
    lVar8 = plVar11[2];
    if (lVar8 == *plVar11) {
      pdb_142d89720(plVar11);
    }
    *(float *)(plVar11[1] + lVar8 * 4) = fVar18;
    goto LAB_1414e4417;
  }
  fVar19 = (float)pdb_140de9fd0(*(undefined4 *)param_1[4],*(undefined4 *)param_1[5],param_6);
  pcVar5 = (char *)param_1[6];
  if (*pcVar5 == '\0') {
    pfVar16 = (float *)param_1[7];
  }
  else {
    pfVar16 = (float *)param_1[7];
    if (param_7 == 6) {
      fVar20 = (float)*(undefined8 *)(pcVar5 + 4) - param_2;
      fVar21 = (float)((ulonglong)*(undefined8 *)(pcVar5 + 4) >> 0x20) - param_3;
      fVar20 = (float)((uint)(*pfVar16 - fVar19) & _DAT_142e377e0) /
               SQRT(fVar21 * fVar21 + fVar20 * fVar20);
      param_7 = 3;
      if (fVar20 <= _DAT_142e37874) {
        param_7 = (_DAT_142e37ae4 < fVar20) + 1;
      }
    }
    puVar6 = (undefined8 *)param_1[8];
    uVar10 = puVar6[2];
    puVar9 = puVar6;
    uVar12 = uVar10;
    if (1 < uVar10) {
      puVar9 = (undefined8 *)*puVar6;
      uVar12 = puVar6[1];
    }
    if ((uVar12 == 0) ||
       (pbVar14 = (byte *)((longlong)puVar9 + uVar12 * 4 + -4), pbVar14 == (byte *)0x0)) {
LAB_1414e4340:
      puVar13 = puVar6 + 2;
      if (1 < uVar10) {
        puVar13 = puVar6 + 1;
      }
      uVar12 = 1;
      if (1 < uVar10) {
        uVar12 = uVar10;
      }
      uVar10 = *puVar13;
      if (uVar10 == uVar12) {
        pdb_142de6980(puVar6);
        puVar9 = (undefined8 *)*puVar6;
        uVar10 = puVar6[1];
        puVar13 = puVar6 + 1;
      }
      *(uint *)((longlong)puVar9 + uVar10 * 4) = param_7 | 0x10100;
      *puVar13 = *puVar13 + 1;
    }
    else {
      bVar3 = *pbVar14;
      bVar17 = bVar3 < 2;
      bVar15 = bVar3 == param_7 && !bVar17;
      if (param_7 < 2) {
        bVar15 = bVar17;
      }
      if ((bVar3 == param_7) && ((bool)(bVar17 & bVar15) != false)) {
        if (*(char *)((longlong)puVar9 + uVar12 * 4 + -3) == '\0') goto LAB_1414e4340;
      }
      else if (bVar15 == (bool)(bVar17 & bVar15)) goto LAB_1414e4340;
      if (param_7 == 3) {
        if ((plVar11[2] == 0) ||
           (puVar6 = (undefined8 *)(plVar11[1] + plVar11[2] * 8 + -8), puVar6 == (undefined8 *)0x0))
        {
                    /* WARNING: Subroutine does not return */
          pdb_142dc8150(&UNK_1433165c0);
        }
        *puVar6 = CONCAT44(param_3,param_2);
        lVar8 = *(longlong *)(param_1[9] + 0x10);
        if ((lVar8 == 0) || (lVar4 = *(longlong *)(param_1[9] + 8), lVar4 + lVar8 * 8 == 8)) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc8150(&UNK_1433165d8);
        }
        lVar4 = lVar4 + lVar8 * 8;
        *(float *)(lVar4 + -8) = param_5;
        *(uint *)(lVar4 + -4) = uVar22;
        lVar8 = *(longlong *)(param_1[10] + 0x10);
        if ((lVar8 == 0) ||
           (pfVar7 = (float *)(*(longlong *)(param_1[10] + 8) + lVar8 * 4 + -4),
           pfVar7 == (float *)0x0)) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc8150(&UNK_1433165f0);
        }
        *pfVar7 = fVar18;
        lVar8 = *(longlong *)(param_1[0xb] + 0x10);
        if ((lVar8 != 0) &&
           (pfVar7 = (float *)(*(longlong *)(param_1[0xb] + 8) + lVar8 * 4 + -4),
           pfVar7 != (float *)0x0)) {
          *pfVar7 = fVar19;
          pcVar5[0] = '\x01';
          pcVar5[1] = '\0';
          pcVar5[2] = '\0';
          pcVar5[3] = '\0';
          *(ulonglong *)(pcVar5 + 4) = CONCAT44(param_3,param_2);
          *pfVar16 = fVar19;
          return;
        }
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_143316608);
      }
      psVar1 = (short *)((longlong)puVar9 + uVar12 * 4 + -2);
      *psVar1 = *psVar1 + 1;
    }
  }
  pcVar5[0] = '\x01';
  pcVar5[1] = '\0';
  pcVar5[2] = '\0';
  pcVar5[3] = '\0';
  *(ulonglong *)(pcVar5 + 4) = CONCAT44(param_3,param_2);
  *pfVar16 = fVar19;
  lVar8 = plVar11[2];
  if (lVar8 == *plVar11) {
    pdb_142db07d0(plVar11);
  }
  *(ulonglong *)(plVar11[1] + lVar8 * 8) = CONCAT44(param_3,param_2);
  plVar11[2] = lVar8 + 1;
  plVar11 = (longlong *)param_1[9];
  lVar8 = plVar11[2];
  if (lVar8 == *plVar11) {
    pdb_142db07d0(plVar11);
  }
  lVar4 = plVar11[1];
  *(float *)(lVar4 + lVar8 * 8) = param_5;
  *(uint *)(lVar4 + 4 + lVar8 * 8) = uVar22;
  plVar11[2] = lVar8 + 1;
  plVar11 = (longlong *)param_1[10];
  lVar8 = plVar11[2];
  if (lVar8 == *plVar11) {
    pdb_142d89720(plVar11);
  }
  *(float *)(plVar11[1] + lVar8 * 4) = fVar18;
  plVar11[2] = lVar8 + 1;
  plVar11 = (longlong *)param_1[0xb];
  lVar8 = plVar11[2];
  if (lVar8 == *plVar11) {
    pdb_142d89720(plVar11);
  }
  *(float *)(plVar11[1] + lVar8 * 4) = fVar19;
LAB_1414e4417:
  plVar11[2] = lVar8 + 1;
  return;
}

