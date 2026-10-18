// VA 0x140340a90, PDB extent 864 bytes
// tiny_glade::vram::calculate_resolution_scale_mem_estimate_text
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/vram.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tiny_glade::vram::calculate_resolution_scale_mem_estimate_text
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/vram.rs
   Extent: 864 */

undefined8 pdb_140340a90(undefined8 param_1,longlong param_2,uint param_3,float param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined *puVar11;
  double dVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  double dVar18;
  double dVar19;
  undefined1 auVar20 [16];
  double dVar21;
  double dStack_b8;
  double dStack_b0;
  double dStack_a8;
  double dStack_a0;
  double *pdStack_98;
  code *pcStack_90;
  double *pdStack_88;
  code *pcStack_80;
  double *pdStack_78;
  code *pcStack_70;
  double *pdStack_68;
  code *pcStack_60;
  
  dVar5 = _DAT_142f3e5e0;
  dVar4 = _UNK_142e42388;
  dVar3 = _DAT_142e42380;
  uVar2 = _UNK_142e42374;
  uVar1 = _DAT_142e42370;
  lVar8 = *(longlong *)(param_2 + 0x668) + 0x10;
  dVar18 = (double)(param_3 & 0xffff) * (double)(param_3 >> 0x10);
  dVar21 = _DAT_142f3e5c0 * dVar18;
  dVar12 = (double)(param_3 & 0xffff) * (double)param_4 * (double)(param_3 >> 0x10) *
           (double)param_4;
  dVar19 = _DAT_142f3e5a0 * dVar12;
  if (*(int *)(*(longlong *)(param_2 + 0x668) + 0xe8) == 2) {
    dVar19 = dVar19 + dVar21 + _DAT_142f3e5e8;
    uVar10 = (longlong)(dVar19 - _DAT_142f3e5d0) & (longlong)dVar19 >> 0x3f | (longlong)dVar19;
    if (dVar19 < 0.0) {
      uVar10 = 0;
    }
    if (_DAT_142f3e5d8 < dVar19) {
      uVar10 = 0xffffffffffffffff;
    }
    auVar20._8_4_ = (int)(uVar10 >> 0x20);
    auVar20._0_8_ = uVar10;
    auVar20._12_4_ = _UNK_142e42374;
    dStack_a8 = ((auVar20._8_8_ - _UNK_142e42388) +
                ((double)CONCAT44(_DAT_142e42370,(int)uVar10) - _DAT_142e42380)) * _DAT_142f3e5e0;
    dVar12 = dVar12 * 0.0 + dVar18 * 0.0 + _DAT_142f3e5f0;
    uVar10 = (longlong)(dVar12 - _DAT_142f3e5d0) & (longlong)dVar12 >> 0x3f | (longlong)dVar12;
    if (dVar12 < 0.0) {
      uVar10 = 0;
    }
    if (_DAT_142f3e5d8 < dVar12) {
      uVar10 = 0xffffffffffffffff;
    }
    auVar13._8_4_ = (int)(uVar10 >> 0x20);
    auVar13._0_8_ = uVar10;
    auVar13._12_4_ = _UNK_142e42374;
    dStack_a0 = ((auVar13._8_8_ - _UNK_142e42388) +
                ((double)CONCAT44(_DAT_142e42370,(int)uVar10) - _DAT_142e42380)) * _DAT_142f3e5e0;
    uVar6 = pdb_140e8dd70(lVar8);
    auVar14._8_4_ = (int)((ulonglong)uVar6 >> 0x20);
    auVar14._0_8_ = uVar6;
    auVar14._12_4_ = uVar2;
    dStack_b8 = ((auVar14._8_8_ - dVar4) + ((double)CONCAT44(uVar1,(int)uVar6) - dVar3)) * dVar5;
    uVar6 = pdb_140e8da10(lVar8);
    auVar15._8_4_ = (int)((ulonglong)uVar6 >> 0x20);
    auVar15._0_8_ = uVar6;
    auVar15._12_4_ = uVar2;
    dStack_b0 = (auVar15._8_8_ - dVar4) + ((double)CONCAT44(uVar1,(int)uVar6) - dVar3);
    pdStack_98 = &dStack_a8;
    pdStack_88 = &dStack_b8;
    pdStack_78 = &dStack_a0;
    pcStack_70 = pdb_140f71790;
    pdStack_68 = &dStack_b0;
    pcStack_60 = pdb_140f71790;
    puVar11 = &UNK_142f3e8fa;
  }
  else {
    dVar19 = dVar19 + dVar21 + _DAT_142f3e5c8;
    uVar10 = 0;
    if (0.0 <= dVar19) {
      uVar10 = (longlong)(dVar19 - _DAT_142f3e5d0) & (longlong)dVar19 >> 0x3f | (longlong)dVar19;
    }
    uVar9 = 0xffffffffffffffff;
    if (dVar19 <= _DAT_142f3e5d8) {
      uVar9 = uVar10;
    }
    auVar16._8_4_ = (int)(uVar9 >> 0x20);
    auVar16._0_8_ = uVar9;
    auVar16._12_4_ = _UNK_142e42374;
    dStack_b8 = ((auVar16._8_8_ - _UNK_142e42388) +
                ((double)CONCAT44(_DAT_142e42370,(int)uVar9) - _DAT_142e42380)) * _DAT_142f3e5e0;
    lVar7 = pdb_140e8dd70(lVar8);
    lVar8 = pdb_140e8da10(lVar8);
    lVar8 = lVar8 + lVar7;
    auVar17._8_4_ = (int)((ulonglong)lVar8 >> 0x20);
    auVar17._0_8_ = lVar8;
    auVar17._12_4_ = uVar2;
    dStack_b0 = (auVar17._8_8_ - dVar4) + ((double)CONCAT44(uVar1,(int)lVar8) - dVar3);
    pdStack_98 = &dStack_b8;
    pdStack_88 = &dStack_b0;
    puVar11 = &UNK_142f3e8d8;
  }
  dStack_b0 = dStack_b0 * dVar5;
  pcStack_80 = pdb_140f71790;
  pcStack_90 = pdb_140f71790;
  pdb_140f60760(param_1,puVar11,&pdStack_98);
  return param_1;
}

