// VA 0x1414d89a0, PDB extent 1366 bytes
// system_decorator::decorator_visual::cottage_dormers::assemble_dormer_roof_tiles::assemble_dormer_roof_tiles::closure$3<system_decorator::decorator_visual::cottage_dormers::assemble_dormer_roof_tiles::generate_dormer_roofs::closure_env$8>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/cottage_dormers/assemble_dormer_roof_tiles.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_decorator::decorator_visual::cottage_dormers::assemble_dormer_roof_tiles::assemble_dormer_roof_tiles::closure$3<system_decorator::decorator_visual::cottage_dormers::assemble_dormer_roof_tiles::generate_dormer_roofs::closure_env$8>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/cottage_dormers/assemble_dormer_roof_tiles.rs
   Extent: 1366 */

void pdb_1414d89a0(undefined8 *param_1,undefined8 *param_2,float *param_3,float *param_4,
                  char param_5)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  ulonglong *puVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [12];
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined8 uStack_e8;
  float fStack_e0;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  undefined4 uStack_ac;
  
  fVar26 = _DAT_142e36f50;
  fVar1 = *(float *)*param_2;
  fVar27 = *(float *)param_2[1];
  fVar28 = fVar27;
  if (fVar1 <= fVar27) {
    fVar28 = fVar1;
  }
  fVar29 = (float)(~-(uint)NAN(fVar1) & (uint)fVar28 | -(uint)NAN(fVar1) & (uint)fVar27) +
           _DAT_142e42360;
  fVar1 = *param_4;
  uVar15 = *(ulonglong *)(param_4 + 1);
  fVar24 = (float)uVar15;
  fVar25 = (float)(uVar15 >> 0x20);
  fVar27 = param_3[2];
  fVar28 = *param_3;
  fStack_d8 = (fVar28 + fVar1) * _DAT_142e36f60;
  fStack_d4 = (fVar27 + fVar25) * _UNK_142e36f64;
  fVar2 = param_3[1];
  auVar9._4_8_ = uVar15 >> 0x20;
  auVar9._0_4_ = fVar24 * _DAT_142e36f50 + fVar29 * _DAT_142e36f50;
  pdb_140df4540(&uStack_e8,&fStack_d8,auVar9._0_8_);
  fVar27 = fVar25 - fVar27;
  fVar28 = fVar1 - fVar28;
  fStack_b4 = SQRT(fVar27 * fVar27 + fVar28 * fVar28);
  fStack_b0 = fVar24 - fVar29;
  uStack_ac = 0x3dcccccd;
  fStack_bc = fVar28;
  fStack_b8 = fVar27;
  pdb_140df4520(&fStack_d8,&fStack_bc);
  fVar29 = _DAT_142e36f28 /
           SQRT(fStack_d0 * fStack_d0 + fStack_d8 * fStack_d8 + fStack_d4 * fStack_d4);
  fStack_d8 = fStack_d8 * fVar29;
  fVar18 = fVar29 * fStack_d4;
  fVar19 = fVar29 * fStack_d0;
  fVar17 = fStack_d8 - fVar18 * 0.0;
  fVar29 = fVar18 * 0.0 - fVar29 * fStack_d0;
  fVar16 = fVar19 * 0.0 - fStack_d8 * 0.0;
  if (fVar17 <= 0.0) {
    fStack_d8 = _DAT_142e36f28 - fStack_d8;
    if (fStack_d8 <= 0.0) {
      fStack_d8 = (_DAT_142e36f28 - fVar17) - fStack_d8;
      fVar26 = fVar26 / SQRT(fStack_d8);
      fStack_d8 = fVar26 * fStack_d8;
      fStack_d4 = fVar26 * (fVar18 + 0.0);
      fStack_d0 = fVar26 * (fVar19 + fVar29);
      fStack_cc = fVar26 * (0.0 - fVar16);
    }
    else {
      fStack_d4 = (_DAT_142e36f28 - fVar17) + fStack_d8;
      fVar26 = fVar26 / SQRT(fStack_d4);
      fStack_d8 = fVar26 * (fVar18 + 0.0);
      fStack_d4 = fVar26 * fStack_d4;
      fStack_d0 = fVar26 * (fVar16 + 0.0);
      fStack_cc = fVar26 * (fVar29 - fVar19);
    }
  }
  else {
    fStack_d8 = fStack_d8 + _DAT_142e36f28;
    if (fStack_d8 <= 0.0) {
      fStack_d0 = (_DAT_142e36f28 + fVar17) - fStack_d8;
      fVar26 = fVar26 / SQRT(fStack_d0);
      fStack_d8 = fVar26 * (fVar19 + fVar29);
      fStack_d4 = fVar26 * (fVar16 + 0.0);
      fStack_d0 = fVar26 * fStack_d0;
      fStack_cc = fVar26 * fVar18;
    }
    else {
      fStack_cc = fStack_d8 + _DAT_142e36f28 + fVar17;
      fVar26 = fVar26 / SQRT(fStack_cc);
      fStack_d8 = fVar26 * (0.0 - fVar16);
      fStack_d4 = fVar26 * (fVar29 - fVar19);
      fStack_d0 = fVar26 * fVar18;
      fStack_cc = fVar26 * fStack_cc;
    }
  }
  fVar26 = (float)((ulonglong)uStack_e8 >> 0x20);
  if (param_5 == '\0') {
    fVar18 = _DAT_143012500 * fVar29 + (float)uStack_e8;
    fVar26 = _UNK_143012504 * fVar16 + fVar26;
    fStack_e0 = _DAT_14301cb98 * fVar17 + fStack_e0;
    fVar19 = fStack_d8 * _UNK_143314df4;
    fVar20 = fStack_d8 * _UNK_143314df8;
    fVar21 = fStack_d8 * _UNK_143314dfc;
    fVar22 = fStack_d4 * _UNK_143314e08;
    fVar23 = fStack_d4 * _UNK_143314e0c;
    fVar30 = fStack_d0 * _UNK_143314e1c;
    fStack_d8 = fStack_d0 * _DAT_143314e10 * _DAT_142e377d0 +
                fStack_d4 * _DAT_143314e00 * _DAT_142e377c0 +
                fStack_d8 * _DAT_143314df0 * _DAT_142e377b0 + fStack_cc * _DAT_143314de0;
    fStack_d4 = fStack_d0 * _UNK_143314e14 * _UNK_142e377d4 +
                fStack_d4 * _UNK_143314e04 * _UNK_142e377c4 +
                fVar19 * _UNK_142e377b4 + fStack_cc * _UNK_143314de4;
    fStack_d0 = fStack_d0 * _UNK_143314e18 * _UNK_142e377d8 + fVar22 * _UNK_142e377c8 +
                fVar20 * _UNK_142e377b8 + fStack_cc * _UNK_143314de8;
    fStack_cc = fVar30 * _UNK_142e377dc + fVar23 * _UNK_142e377cc +
                fVar21 * _UNK_142e377bc + fStack_cc * _UNK_143314dec;
  }
  else {
    fVar18 = (float)uStack_e8 - _DAT_143012500 * fVar29;
    fVar26 = fVar26 - _UNK_143012504 * fVar16;
    fStack_e0 = fStack_e0 - _DAT_14301cb98 * fVar17;
  }
  uStack_e8 = CONCAT44(fVar26,fVar18);
  fVar26 = (fVar24 - fVar2) * fVar17 - fVar16 * fVar27;
  fVar27 = fVar27 * fVar29 - fVar17 * fVar28;
  fVar28 = fVar28 * fVar16 - (fVar24 - fVar2) * fVar29;
  uVar10 = pdb_1424e5b90(&fStack_d8);
  fStack_cc = (float)((uint)(fVar25 * fVar28 + fVar1 * fVar26 + fVar24 * fVar27) ^ _DAT_142e37820);
  fStack_d8 = fVar26;
  fStack_d4 = fVar27;
  fStack_d0 = fVar28;
  uVar11 = pdb_1424e5bd0(&fStack_d8);
  uVar12 = pdb_140df4560(&fStack_b4);
  puVar4 = (ulonglong *)param_2[3];
  uVar14 = *puVar4;
  uVar15 = uVar14 + 0xa0761d6478bd642f;
  *puVar4 = uVar15;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar15 ^ 0xe7037ed1a0b428db;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar15;
  uVar13 = SUB168(auVar5 * auVar7,8) ^ SUB168(auVar5 * auVar7,0);
  if ((uint)((int)uVar13 * 200) < 0x60) {
    uVar14 = uVar14 + 0x40ec3ac8f17ac85e;
    do {
      uVar15 = uVar15 + 0xa0761d6478bd642f;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = uVar14 ^ 0xe7037ed1a0b428db;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = uVar14;
      uVar13 = SUB168(auVar6 * auVar8,8) ^ SUB168(auVar6 * auVar8,0);
      uVar14 = uVar14 + 0xa0761d6478bd642f;
    } while ((uint)((int)uVar13 * 200) < 0x60);
    *puVar4 = uVar15;
  }
  uVar3 = *(undefined4 *)param_2[4];
  *(float *)(param_1 + 1) = fStack_e0;
  *param_1 = uStack_e8;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  param_1[2] = uVar11;
  *(short *)((longlong)param_1 + 0x1c) = (short)((ulonglong)uVar12 >> 0x20);
  *(int *)(param_1 + 3) = (int)uVar12;
  *(undefined2 *)((longlong)param_1 + 0x1e) = 0;
  param_1[4] = uVar10;
  *(undefined4 *)(param_1 + 5) = uVar3;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0x3f80000000000000;
  *(int *)((longlong)param_1 + 0x34) = (int)((uVar13 & 0xffffffff) * 200 >> 0x20) + -100;
  param_1[7] = 0;
  return;
}

