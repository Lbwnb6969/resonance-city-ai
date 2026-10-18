// VA 0x140340770, PDB extent 792 bytes
// tiny_glade::vram::calculate_max_resolution_scale
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/vram.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tiny_glade::vram::calculate_max_resolution_scale
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/vram.rs
   Extent: 792 */

undefined8 pdb_140340770(longlong param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  double dVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 extraout_XMM0_Qb;
  
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x668) + 0xe8);
  lVar4 = *(longlong *)(param_1 + 0x668) + 0x10;
  lVar2 = pdb_140e8dd70(lVar4);
  if (iVar1 == 2) {
    auVar6._8_4_ = (int)((ulonglong)lVar2 >> 0x20);
    auVar6._0_8_ = lVar2;
    auVar6._12_4_ = _UNK_142e42374;
    dVar16 = (double)(param_2 & 0xffff);
    dVar15 = (double)(param_2 >> 0x10);
    dVar5 = (_DAT_142f3e598 * dVar16 * dVar15 +
            (auVar6._8_8_ - _UNK_142e42388) +
            ((double)CONCAT44(_DAT_142e42370,(int)lVar2) - _DAT_142e42380) + _DAT_142f3e5b0) /
            _DAT_142f3e5a0;
    fVar17 = 0.0;
    fVar19 = 0.0;
    if (0.0 < dVar5) {
      dVar5 = dVar5 / (dVar16 * dVar15);
      if (dVar5 <= 0.0) {
        dVar5 = 0.0;
      }
      dVar13 = dVar15;
      if (dVar16 <= dVar15) {
        dVar13 = dVar16;
      }
      dVar13 = (double)(~-(ulonglong)NAN(dVar16) & (ulonglong)dVar13 |
                       -(ulonglong)NAN(dVar16) & (ulonglong)dVar15);
      if (dVar13 <= _DAT_142e33008) {
        dVar13 = _DAT_142e33008;
      }
      dVar5 = SQRT(dVar5);
      dVar13 = _DAT_142f3e5a8 / dVar13;
      dVar14 = dVar13;
      if (dVar5 <= dVar13) {
        dVar14 = dVar5;
      }
      fVar19 = (float)(double)(~-(ulonglong)NAN(dVar5) & (ulonglong)dVar14 |
                              -(ulonglong)NAN(dVar5) & (ulonglong)dVar13);
    }
    uVar3 = pdb_140e8da10(lVar4);
    auVar12._8_4_ = (int)((ulonglong)uVar3 >> 0x20);
    auVar12._0_8_ = uVar3;
    auVar12._12_4_ = _UNK_142e42374;
    dVar5 = ((auVar12._8_8_ - _UNK_142e42388) +
             ((double)CONCAT44(_DAT_142e42370,(int)uVar3) - _DAT_142e42380) + _DAT_142f3e5b8) / 0.0;
    if (0.0 < dVar5) {
      dVar5 = dVar5 / (dVar16 * dVar15);
      if (dVar5 <= 0.0) {
        dVar5 = 0.0;
      }
      dVar13 = dVar15;
      if (dVar16 <= dVar15) {
        dVar13 = dVar16;
      }
      dVar15 = (double)(~-(ulonglong)NAN(dVar16) & (ulonglong)dVar13 |
                       -(ulonglong)NAN(dVar16) & (ulonglong)dVar15);
      if (dVar15 <= _DAT_142e33008) {
        dVar15 = _DAT_142e33008;
      }
      dVar5 = SQRT(dVar5);
      dVar15 = _DAT_142f3e5a8 / dVar15;
      dVar16 = dVar15;
      if (dVar5 <= dVar15) {
        dVar16 = dVar5;
      }
      fVar17 = (float)(double)(~-(ulonglong)NAN(dVar5) & (ulonglong)dVar16 |
                              -(ulonglong)NAN(dVar5) & (ulonglong)dVar15);
    }
    fVar18 = fVar17;
    if (fVar19 <= fVar17) {
      fVar18 = fVar19;
    }
    auVar7 = ZEXT416(~-(uint)NAN(fVar19) & (uint)fVar18 | -(uint)NAN(fVar19) & (uint)fVar17);
  }
  else {
    lVar4 = pdb_140e8da10(lVar4);
    lVar4 = lVar4 + lVar2;
    auVar8._8_4_ = (int)((ulonglong)lVar4 >> 0x20);
    auVar8._0_8_ = lVar4;
    auVar8._12_4_ = _UNK_142e42374;
    dVar5 = (double)(param_2 & 0xffff);
    dVar16 = (double)(param_2 >> 0x10);
    dVar15 = (_DAT_142f3e598 * dVar5 * dVar16 +
             (auVar8._8_8_ - _UNK_142e42388) +
             ((double)CONCAT44(_DAT_142e42370,(int)lVar4) - _DAT_142e42380) + _DAT_142f3e590) /
             _DAT_142f3e5a0;
    auVar7 = ZEXT816(0);
    if (0.0 < dVar15) {
      dVar15 = dVar15 / (dVar5 * dVar16);
      if (dVar15 <= 0.0) {
        dVar15 = 0.0;
      }
      dVar13 = dVar16;
      if (dVar5 <= dVar16) {
        dVar13 = dVar5;
      }
      dVar16 = (double)(~-(ulonglong)NAN(dVar5) & (ulonglong)dVar13 |
                       -(ulonglong)NAN(dVar5) & (ulonglong)dVar16);
      if (dVar16 <= _DAT_142e33008) {
        dVar16 = _DAT_142e33008;
      }
      dVar15 = SQRT(dVar15);
      dVar16 = _DAT_142f3e5a8 / dVar16;
      dVar5 = dVar16;
      if (dVar15 <= dVar16) {
        dVar5 = dVar15;
      }
      dVar15 = (double)(~-(ulonglong)NAN(dVar15) & (ulonglong)dVar5 |
                       -(ulonglong)NAN(dVar15) & (ulonglong)dVar16);
      auVar7._0_4_ = (float)dVar15;
      auVar7._4_4_ = (int)((ulonglong)dVar15 >> 0x20);
      auVar7._8_8_ = 0;
    }
  }
  auVar9._4_12_ = auVar7._4_12_;
  auVar9._0_4_ = auVar7._0_4_ * _DAT_142e37878;
  auVar10._0_8_ = pub_142e32a40(auVar9._0_8_);
  auVar10._8_8_ = extraout_XMM0_Qb;
  auVar11._4_12_ = auVar10._4_12_;
  auVar11._0_4_ = (float)auVar10._0_8_ * _DAT_142e3b1d8;
  return auVar11._0_8_;
}

