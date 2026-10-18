// VA 0x14008dee0, PDB extent 973 bytes
// tiny_glade::gui::gui_fog::fill_slider
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/gui_fog.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tiny_glade::gui::gui_fog::fill_slider
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/gui_fog.rs
   Extent: 973 */

ulonglong pdb_14008dee0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5,undefined8 param_6,undefined8 param_7,float param_8,
                       float param_9,undefined4 *param_10,longlong *param_11)

{
  float fVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  int iVar6;
  undefined8 uVar7;
  float *pfVar8;
  longlong lVar9;
  ulonglong uVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_130 [72];
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [144];
  
  uVar7 = pdb_140725a70();
  pdb_140732af0(uVar7);
  pdb_140306cd0(auStack_130,param_1,param_4,param_5,param_6,param_7,0x42300000);
  uVar7 = pdb_140725a70(auStack_130);
  pdb_140732b00(uVar7);
  pdb_1403057b0(auStack_130,param_1,param_2,param_3);
  pdb_14072d060(auStack_d8,auStack_130,1);
  pdb_1407373e0(auStack_130);
  pdb_140737440(auStack_c0,auStack_130);
  pdb_1407374e0(auStack_130,auStack_c0);
  uStack_e8 = _DAT_142e382b0;
  uStack_e4 = _UNK_142e382b4;
  uStack_e0 = _UNK_142e382b8;
  uStack_dc = _UNK_142e382bc;
  pdb_140737550(auStack_c0,auStack_130,&uStack_e8);
  pdb_14072cf30(auStack_130,auStack_d8,auStack_c0);
  uVar7 = pdb_140725a70(auStack_130);
  pdb_140732b20(uVar7);
  pfVar8 = (float *)pdb_140306160(auStack_130);
  fVar14 = *pfVar8;
  fVar1 = pfVar8[1];
  bVar2 = *(byte *)(pfVar8 + 3);
  bVar5 = pdb_14072c6d0(auStack_130);
  if ((fVar1 != 0.0) || (NAN(fVar1))) {
    param_8 = param_8 + _DAT_142e382c0 * fVar1;
    fVar12 = 0.0;
    if (0.0 <= param_8) {
      fVar12 = param_8;
    }
    param_8 = _DAT_142e36f28;
    if (fVar12 <= _DAT_142e36f28) {
      param_8 = fVar12;
    }
  }
  if ((bVar5 & 4) != 0) {
    uVar7 = pdb_140725900(auStack_130);
    lVar9 = pdb_140732b30(uVar7);
    fVar12 = 0.0;
    if (lVar9 != 0) {
      fVar12 = (float)pdb_140737640(lVar9);
    }
    fVar13 = (float)pdb_140de8220(fVar12 * param_9 - param_9 * _DAT_142e382c4,
                                  param_9 * _DAT_142e382c4 + fVar12 * param_9,*param_10);
    fVar12 = 0.0;
    if (0.0 <= fVar13) {
      fVar12 = fVar13;
    }
    param_8 = _DAT_142e36f28;
    if (fVar12 <= _DAT_142e36f28) {
      param_8 = fVar12;
    }
  }
  fVar14 = fVar14 * _DAT_142e382c8;
  iVar6 = (int)fVar14;
  if (_DAT_142e382cc < fVar14) {
    iVar6 = 0x7fffffff;
  }
  if (NAN(fVar14)) {
    iVar6 = 0;
  }
  fVar14 = _DAT_142e382c8 * param_8;
  iVar11 = (int)fVar14;
  if (_DAT_142e382cc < fVar14) {
    iVar11 = 0x7fffffff;
  }
  if (NAN(fVar14)) {
    iVar11 = 0;
  }
  if (iVar6 == iVar11) {
    uVar10 = pdb_14072c6d0(auStack_130);
  }
  else {
    *(undefined4 *)param_11[2] = *(undefined4 *)((longlong)param_11 + 0x1c);
    lVar9 = *param_11;
    lVar3 = *(longlong *)(lVar9 + 0x30);
    uVar7 = *(undefined8 *)(lVar9 + 0x40);
    if (lVar3 == *(longlong *)(lVar9 + 0x20)) {
      pdb_142d7e6e0(lVar9 + 0x20);
    }
    lVar4 = *(longlong *)(lVar9 + 0x28);
    *(undefined4 *)(lVar4 + lVar3 * 0x20) = 0x24;
    *(undefined8 *)(lVar4 + 0x18 + lVar3 * 0x20) = uVar7;
    *(longlong *)(lVar9 + 0x30) = lVar3 + 1;
    *(longlong *)(lVar9 + 0x40) = *(longlong *)(lVar9 + 0x40) + 1;
    uVar10 = pdb_14072c6d0(auStack_130);
  }
  if ((uVar10 & 2) == 0) {
    uVar10 = pdb_14072c6d0(auStack_130);
  }
  else {
    *(undefined4 *)param_11[2] = *(undefined4 *)((longlong)param_11 + 0x1c);
    lVar9 = *param_11;
    lVar3 = *(longlong *)(lVar9 + 0x30);
    uVar7 = *(undefined8 *)(lVar9 + 0x40);
    if (lVar3 == *(longlong *)(lVar9 + 0x20)) {
      pdb_142d7e6e0(lVar9 + 0x20);
    }
    lVar4 = *(longlong *)(lVar9 + 0x28);
    *(undefined4 *)(lVar4 + lVar3 * 0x20) = 0x20;
    *(undefined8 *)(lVar4 + 0x18 + lVar3 * 0x20) = uVar7;
    *(longlong *)(lVar9 + 0x30) = lVar3 + 1;
    *(longlong *)(lVar9 + 0x40) = *(longlong *)(lVar9 + 0x40) + 1;
    uVar10 = pdb_14072c6d0(auStack_130);
  }
  if ((uVar10 & 8) != 0) {
    *(undefined4 *)param_11[2] = *(undefined4 *)((longlong)param_11 + 0x1c);
    lVar9 = *param_11;
    lVar3 = *(longlong *)(lVar9 + 0x30);
    uVar7 = *(undefined8 *)(lVar9 + 0x40);
    if (lVar3 == *(longlong *)(lVar9 + 0x20)) {
      pdb_142d7e6e0(lVar9 + 0x20);
    }
    lVar4 = *(longlong *)(lVar9 + 0x28);
    *(undefined4 *)(lVar4 + lVar3 * 0x20) = 0x21;
    *(undefined8 *)(lVar4 + 0x18 + lVar3 * 0x20) = uVar7;
    *(longlong *)(lVar9 + 0x30) = lVar3 + 1;
    *(longlong *)(lVar9 + 0x40) = *(longlong *)(lVar9 + 0x40) + 1;
  }
  pfVar8 = (float *)pdb_140305650(auStack_130);
  *pfVar8 = param_8;
  return (ulonglong)(uint)param_8 |
         (ulonglong)bVar2 << 0x20 | (ulonglong)(byte)((bVar5 & 4) >> 2 | fVar1 != 0.0) << 0x28;
}

