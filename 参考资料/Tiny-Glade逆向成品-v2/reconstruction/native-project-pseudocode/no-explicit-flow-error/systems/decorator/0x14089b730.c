// VA 0x14089b730, PDB extent 1182 bytes
// system_decorator::decorator_visual::playermade_stairs::stairs_graph_and_requests::find_alignment_preferences
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/playermade_stairs/stairs_graph_and_requests.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_decorator::decorator_visual::playermade_stairs::stairs_graph_and_requests::find_alignment_preferences
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/playermade_stairs/stairs_graph_and_requests.rs
   Extent: 1182 */

undefined8 *
pdb_14089b730(undefined8 *param_1,longlong *param_2,longlong *param_3,float param_4,float param_5,
             undefined8 param_6,undefined8 param_7)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  longlong lVar9;
  longlong lVar10;
  byte *pbVar11;
  undefined8 uVar12;
  longlong lVar13;
  undefined4 extraout_XMM0_Da;
  float fVar14;
  uint uVar15;
  uint uVar17;
  ulonglong uVar16;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined8 uStack_a8;
  code *pcStack_a0;
  
  if ((int)param_2[2] == 1) {
    *param_1 = 0;
    param_1[1] = 4;
    param_1[2] = 0;
    return param_1;
  }
  fVar4 = *(float *)((longlong)param_2 + 0x14);
  fVar5 = *(float *)(param_2 + 3);
  lVar13 = *param_2;
  lVar2 = param_2[1];
  lVar9 = pdb_140c3d060(param_6,lVar13,lVar2,(int)param_2[5]);
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_1430137b0);
  }
  bVar1 = *(byte *)(lVar9 + 0x32);
  if (1 < bVar1) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_143013770,0x28,&UNK_143013830);
  }
  lVar9 = *param_3;
  lVar3 = param_3[1];
  lVar10 = pdb_140c3d060(param_6,lVar9,lVar3,(int)param_3[5]);
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_1430137c8);
  }
  if (lVar13 != 0) {
    pcStack_a0 = pdb_140897d90;
    uStack_a8 = param_2;
                    /* WARNING: Subroutine does not return */
    pdb_142dc83d0(&UNK_143013810,&uStack_a8,&UNK_143013818);
  }
  if ((lVar9 != 0 || lVar2 != lVar3) || (1 < *(byte *)(lVar10 + 0x32))) {
    pdb_14007ee60();
    pbVar11 = pub_1406abab0(0x48,4);
    uVar7 = _UNK_142e37824;
    uVar6 = _DAT_142e37820;
    if (pbVar11 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(4,0x48);
    }
    fVar14 = _DAT_142e36f28 / SQRT(param_5 * param_5 + param_4 * param_4);
    if ((int)fVar14 - 1U < 0x7fffff || (int)ABS(fVar14) - 0x800000U < 0x7f000000 && -1 < (int)fVar14
       ) {
      param_4 = param_4 * fVar14;
      param_5 = param_5 * fVar14;
    }
    else {
      param_4 = 0.0;
      param_5 = 0.0;
    }
    fVar14 = param_5 * fVar4 - param_4 * fVar5;
    uVar15 = -(uint)NAN(fVar14);
    fVar20 = (float)(_DAT_143009de0 & uVar15 |
                    ~uVar15 & ((uint)fVar14 & _DAT_142e37820 | (uint)DAT_142e3c640));
    fVar19 = (float)((uint)fVar5 ^ _DAT_142e37820) * fVar20;
    fVar20 = fVar20 * fVar4;
    fVar21 = param_5 * fVar5 + param_4 * fVar4;
    fVar18 = param_5 * fVar20 + param_4 * fVar19;
    fVar14 = *(float *)(&UNK_143013280 + (ulonglong)(0.0 < fVar21) * 4);
    pbVar11[0] = 0;
    pbVar11[1] = 0;
    pbVar11[2] = 0;
    *(float *)(pbVar11 + 4) = fVar4;
    *(float *)(pbVar11 + 8) = fVar5;
    *(float *)(pbVar11 + 0x14) = fVar21 * fVar14;
    pbVar11[0x18] = 1;
    pbVar11[0x19] = 0;
    pbVar11[0x1a] = bVar1 ^ 1;
    *(float *)(pbVar11 + 0x1c) = fVar4;
    *(float *)(pbVar11 + 0x20) = fVar5;
    *(float *)(pbVar11 + 0x24) = fVar19;
    *(float *)(pbVar11 + 0x28) = fVar20;
    *(float *)(pbVar11 + 0x2c) = fVar18;
    pbVar11[0x30] = 1;
    pbVar11[0x31] = 0;
    pbVar11[0x32] = bVar1 ^ 1;
    *(float *)(pbVar11 + 0x34) = fVar4;
    *(float *)(pbVar11 + 0x38) = fVar5;
    *(uint *)(pbVar11 + 0x3c) = (uint)fVar19 ^ uVar6;
    *(ulonglong *)(pbVar11 + 0x40) = CONCAT44((uint)fVar18 ^ uVar7,(uint)fVar20 ^ uVar6);
    *param_1 = 3;
    param_1[1] = pbVar11;
    param_1[2] = 3;
    return param_1;
  }
  if (_DAT_143013288 <= param_5 * param_5 + param_4 * param_4) {
    uVar12 = pdb_140c413f0(param_2);
    lVar13 = pdb_140b54f80(param_7,uVar12,&UNK_1430137e0);
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_1430137f8);
    }
    uVar8 = pdb_14092f860(lVar13);
    uStack_a8 = (longlong *)CONCAT44(extraout_XMM0_Da,uVar8);
    fVar14 = (float)pdb_140dea7c0(&uStack_a8);
    pdb_14007ee60();
    pbVar11 = pub_1406abab0(0x18,4);
    uVar7 = _UNK_142e37824;
    uVar6 = _DAT_142e37820;
    if (pbVar11 == (byte *)0x0) goto LAB_14089bbb2;
    fVar20 = (float)(~-(uint)NAN(fVar14) &
                     (((uint)fVar14 ^ _DAT_142e37820) & _DAT_142e37820 | (uint)DAT_142e3c640) |
                    _DAT_14300a424 & -(uint)NAN(fVar14));
    fVar14 = (float)((uint)fVar5 ^ _DAT_142e37820);
    pbVar11[0] = 1;
    pbVar11[1] = 0;
    pbVar11[2] = bVar1 ^ 1;
    fVar14 = fVar14 * fVar20;
    fVar20 = fVar4 * fVar20;
    uVar15 = (int)((uint)(bVar1 == 0) << 0x1f) >> 0x1f;
    uVar17 = (int)((uint)(bVar1 == 0) << 0x1f) >> 0x1f;
    uVar16 = CONCAT44(~uVar17 & (uint)fVar20,~uVar15 & (uint)fVar14) |
             CONCAT44((uVar7 ^ (uint)fVar20) & uVar17,(uVar6 ^ (uint)fVar14) & uVar15);
    *(float *)(pbVar11 + 4) = fVar4;
    *(float *)(pbVar11 + 8) = fVar5;
    *(int *)(pbVar11 + 0xc) = (int)uVar16;
    *(int *)(pbVar11 + 0x10) = (int)(uVar16 >> 0x20);
  }
  else {
    pdb_14007ee60();
    pbVar11 = pub_1406abab0(0x18,4);
    if (pbVar11 == (byte *)0x0) {
LAB_14089bbb2:
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(4,0x18);
    }
    pbVar11[0] = 0;
    pbVar11[1] = 0;
    pbVar11[2] = 0;
    *(float *)(pbVar11 + 4) = fVar4;
    *(float *)(pbVar11 + 8) = fVar5;
  }
  pbVar11[0x14] = 0;
  pbVar11[0x15] = 0;
  pbVar11[0x16] = 0x80;
  pbVar11[0x17] = 0x3f;
  *param_1 = 1;
  param_1[1] = pbVar11;
  param_1[2] = 1;
  return param_1;
}

