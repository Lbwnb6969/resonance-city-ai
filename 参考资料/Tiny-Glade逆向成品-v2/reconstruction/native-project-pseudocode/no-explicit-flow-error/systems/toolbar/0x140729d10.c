// VA 0x140729d10, PDB extent 2048 bytes
// toolbar::mei::widgets::impl$19::render
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/widgets.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: toolbar::mei::widgets::impl$19::render
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/widgets.rs
   Extent: 2048 */

void pdb_140729d10(longlong param_1,undefined8 *param_2)

{
  float fVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  bool bVar6;
  code *arg0;
  float *pfVar7;
  byte *pbVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 uStack_fc;
  undefined4 *puStack_f8;
  code *pcStack_f0;
  float *pfStack_e8;
  code *pcStack_e0;
  float fStack_d8;
  undefined4 uStack_d4;
  byte *pbStack_d0;
  undefined8 uStack_c0;
  
  uStack_c0 = 0xfffffffffffffffe;
  fVar9 = *(float *)(param_1 + 0x28) + _DAT_142e37878;
  fVar10 = (float)*(ulonglong *)(param_1 + 0x20) * fVar9 + _DAT_142fa5b20;
  if (fVar10 <= 0.0) {
    fVar10 = 0.0;
  }
  fVar9 = fVar9 * (float)*(ulonglong *)(param_1 + 0x18) + _DAT_142fa5b20;
  fVar14 = fVar10 - fVar9;
  if (fVar14 <= 0.0) {
    fVar14 = 0.0;
  }
  if (fVar14 <= 0.0) {
    return;
  }
  fVar1 = *(float *)((longlong)param_2 + 0x14);
  if (fVar1 < _DAT_142f57bc4) {
    uStack_fc = 0x41c00000;
    puStack_f8 = &uStack_fc;
    pcStack_f0 = pdb_140f705d0;
    pfStack_e8 = &fStack_d8;
    pcStack_e0 = pdb_140f705d0;
    fStack_d8 = fVar1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc83d0(&UNK_142fa5c78,&puStack_f8,&UNK_142fa5d18);
  }
  fVar16 = *(float *)(param_2 + 2) * _DAT_142e36f50 + *(float *)(param_2 + 1);
  fVar13 = *(float *)((longlong)param_2 + 0xc) - _DAT_142e36f50 * fVar1;
  fVar10 = (fVar9 / fVar10) * fVar1;
  fVar9 = _DAT_142f57bc4;
  if (_DAT_142f57bc4 <= fVar10) {
    fVar9 = fVar10;
  }
  fVar10 = fVar1;
  if (fVar9 <= fVar1) {
    fVar10 = fVar9;
  }
  fVar15 = fVar1 - fVar10;
  fVar9 = *(float *)((longlong)param_2 + 0x24);
  if (((*(float *)(param_2 + 4) < _DAT_142fa5c74 + fVar16) || (fVar16 < *(float *)(param_2 + 4))) ||
     (fVar9 < fVar13)) {
    bVar3 = *(byte *)((longlong)param_2 + 0x2c);
    bVar6 = false;
LAB_140729ef9:
    if ((bVar3 & 4) != 0) goto LAB_140729f1f;
LAB_140729efd:
    *(undefined4 *)(param_1 + 0x10) = 0;
LAB_140729f60:
    fVar9 = 0.0;
    if (!bVar6) goto LAB_140729f6f;
  }
  else {
    bVar6 = fVar9 <= fVar1 + fVar13;
    bVar3 = *(byte *)((longlong)param_2 + 0x2c);
    if ((bVar6 & (bVar3 & 2) >> 1) == 0) goto LAB_140729ef9;
    fVar11 = *(float *)(param_1 + 0x2c) / fVar14;
    fVar12 = 0.0;
    if (0.0 <= fVar11) {
      fVar12 = fVar11;
    }
    fVar11 = _DAT_142e36f28;
    if (fVar12 <= _DAT_142e36f28) {
      fVar11 = fVar12;
    }
    fVar12 = fVar11 * fVar15 + fVar13;
    if (fVar9 <= fVar10 + fVar12 && fVar12 <= fVar9) {
      fVar12 = fVar9 - fVar12;
    }
    else {
      fVar12 = _DAT_142e36f50 * fVar10;
    }
    *(undefined4 *)(param_1 + 0x10) = 1;
    *(float *)(param_1 + 0x14) = fVar12;
    bVar6 = true;
    if ((bVar3 & 4) == 0) goto LAB_140729efd;
LAB_140729f1f:
    if (*(int *)(param_1 + 0x10) != 1) goto LAB_140729f60;
    if (0.0 < fVar15) {
      fVar12 = ((fVar9 - *(float *)(param_1 + 0x14)) - fVar13) / fVar15;
      fVar9 = 0.0;
      if (0.0 <= fVar12) {
        fVar9 = fVar12;
      }
      fVar12 = _DAT_142e36f28;
      if (fVar9 <= _DAT_142e36f28) {
        fVar12 = fVar9;
      }
      *(float *)(param_1 + 0x2c) = fVar12 * fVar14;
      *(float *)(param_1 + 0x30) = fVar12 * fVar14;
    }
  }
  fVar9 = _DAT_142e36f28;
LAB_140729f6f:
  pdb_140de9710(param_1 + 0x34,fVar9,*(undefined4 *)(param_2 + 5),_DAT_142e382c8);
  fVar9 = *(float *)(param_1 + 0x2c);
  fVar12 = (*(float *)(param_1 + 0x34) * _DAT_142e37900 + _DAT_142e37adc) * _DAT_142e36f50;
  pdb_140a1aa60(&puStack_f8);
  pdb_140cb8ed0(&fStack_d8,&puStack_f8,0x4e453430);
  pdb_140cb8f80(&puStack_f8,&fStack_d8,fVar12);
  pdb_140cb9030(&fStack_d8,&puStack_f8);
  fVar11 = (fVar16 + _DAT_142f895f8) - fVar12;
  uVar4 = *param_2;
  fVar16 = (fVar16 + _DAT_142f895f8 + fVar12) - fVar11;
  uVar2 = *(undefined4 *)(param_2 + 3);
  pdb_140cb8180(uVar4,CONCAT44(fVar13,fVar11),CONCAT44((fVar1 + fVar13) - fVar13,fVar16),uVar2,
                &fStack_d8);
  if (CONCAT44(uStack_d4,fStack_d8) != 0) {
    pub_1406abac0(pbStack_d0,CONCAT44(uStack_d4,fStack_d8) << 2,4);
  }
  arg0 = pcStack_f0;
  if (pfStack_e8 != (float *)0x0) {
    pbVar8 = (byte *)(pcStack_f0 + 8);
    pfVar7 = pfStack_e8;
    do {
      uVar5 = *(ulonglong *)(pbVar8 + -8);
      if ((-1 < (longlong)uVar5) && (uVar5 != 0)) {
        pub_1406abac0(*(byte **)pbVar8,uVar5,1);
      }
      pbVar8 = pbVar8 + 0x20;
      pfVar7 = (float *)((longlong)pfVar7 + -1);
    } while (pfVar7 != (float *)0x0);
  }
  if (puStack_f8 != (undefined4 *)0x0) {
    pub_1406abac0((byte *)arg0,(longlong)puStack_f8 << 5,8);
  }
  pdb_140a1aa60(&puStack_f8);
  pdb_140cb8ed0(&fStack_d8,&puStack_f8,0x4e4534a0);
  pdb_140cb8f80(&puStack_f8,&fStack_d8,fVar12);
  pdb_140cb9030(&fStack_d8,&puStack_f8);
  fVar9 = fVar9 / fVar14;
  fVar14 = 0.0;
  if (0.0 <= fVar9) {
    fVar14 = fVar9;
  }
  fVar9 = _DAT_142e36f28;
  if (fVar14 <= _DAT_142e36f28) {
    fVar9 = fVar14;
  }
  fVar13 = fVar13 + fVar15 * fVar9;
  pdb_140cb8180(uVar4,CONCAT44(fVar13,fVar11),CONCAT44((fVar10 + fVar13) - fVar13,fVar16),uVar2,
                &fStack_d8);
  if (CONCAT44(uStack_d4,fStack_d8) != 0) {
    pub_1406abac0(pbStack_d0,CONCAT44(uStack_d4,fStack_d8) << 2,4);
  }
  if (pfStack_e8 != (float *)0x0) {
    pbVar8 = (byte *)(pcStack_f0 + 8);
    pfVar7 = pfStack_e8;
    do {
      uVar5 = *(ulonglong *)(pbVar8 + -8);
      if ((-1 < (longlong)uVar5) && (uVar5 != 0)) {
        pub_1406abac0(*(byte **)pbVar8,uVar5,1);
      }
      pbVar8 = pbVar8 + 0x20;
      pfVar7 = (float *)((longlong)pfVar7 + -1);
    } while (pfVar7 != (float *)0x0);
  }
  if (puStack_f8 != (undefined4 *)0x0) {
    pub_1406abac0((byte *)pcStack_f0,(longlong)puStack_f8 << 5,8);
  }
  return;
}

