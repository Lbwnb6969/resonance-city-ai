// VA 0x140689cc0, PDB extent 1074 bytes
// tiny_glade::gui::gui_tod::do_time_of_day_screen::closure$1
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/gui_tod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tiny_glade::gui::gui_tod::do_time_of_day_screen::closure$1
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/gui_tod.rs
   Extent: 1074 */

void pdb_140689cc0(undefined8 *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong *plVar3;
  longlong *plVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char cVar9;
  undefined8 uVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  undefined *puVar17;
  longlong lVar18;
  longlong *plVar19;
  float fVar20;
  float fVar21;
  ulonglong uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  longlong *plStack_78;
  ulonglong uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  
  uVar10 = pdb_140725a70(param_2);
  pdb_140732ae0(uVar10,1,0xf);
  uVar10 = pdb_140725a70(param_2);
  pdb_140732af0(uVar10);
  uVar10 = pdb_140725a70(param_2);
  pdb_140732b70(uVar10,1);
  cVar9 = pdb_14072ce40(param_2);
  if (cVar9 == '\0') {
    plVar11 = (longlong *)*param_1;
    plVar19 = (longlong *)param_1[1];
    fVar20 = *(float *)(*plVar19 + 0x28) / _DAT_142f95158;
  }
  else {
    uVar10 = pdb_14072cd40(param_2);
    plVar11 = (longlong *)pdb_140315970(param_2);
    uStack_c0 = 0x9e0c82f5;
    uVar12 = pdb_140315970(&uStack_c0);
    uVar12 = uVar12 ^ 0xb1695320004fb443;
    uVar16 = uVar12;
    lVar13 = pdb_14072c2d0(plVar11);
    *(undefined1 *)(lVar13 + 0x5e) = 0;
    if ((uVar16 & 1) == 0) {
      lVar13 = plVar11[2];
      if (lVar13 == *plVar11) {
        pdb_142d7f080(plVar11);
      }
      lVar18 = plVar11[1];
      lVar14 = lVar13 * 0x38;
      *(undefined8 *)(lVar18 + lVar14) = 3;
      *(undefined8 *)(lVar18 + 0x10 + lVar14) = uVar10;
      uVar8 = _UNK_142e4e65c;
      uVar7 = _UNK_142e4e658;
      uVar6 = _UNK_142e4e654;
      puVar1 = (undefined4 *)(lVar18 + 0x18 + lVar14);
      *puVar1 = _DAT_142e4e650;
      puVar1[1] = uVar6;
      puVar1[2] = uVar7;
      puVar1[3] = uVar8;
      *(undefined8 *)(lVar18 + 0x28 + lVar14) = 0;
      *(ulonglong *)(lVar18 + 0x30 + lVar14) = uVar12;
      plVar11[2] = lVar13 + 1;
    }
    uStack_68 = 0;
    uStack_98 = 0;
    plStack_78 = plVar11;
    uStack_70 = uVar12;
    uStack_c0 = pdb_140315970(&uStack_98);
    uStack_b8 = CONCAT44(_UNK_142f3b4f4,_DAT_142f3b4f0);
    uStack_b0 = _UNK_142f3b4f8;
    uStack_ac = _UNK_142f3b4fc;
    uStack_b8 = pdb_1400affa0(&uStack_c0);
    uStack_c0 = uVar12;
    uVar10 = pdb_1400b0130(&uStack_c0);
    pdb_14072caa0(auStack_60,&plStack_78,uVar10);
    lVar13 = pdb_140725a70(auStack_60);
    *(undefined4 *)(lVar13 + 0xbc) = 0x43fa0000;
    uStack_88 = uStack_50;
    uStack_90 = uStack_58;
    uStack_8c = uStack_54;
    pdb_140734630(&uStack_c0,&uStack_98,&UNK_142f954f4,0x1a);
    plVar11 = (longlong *)*param_1;
    plVar19 = (longlong *)param_1[1];
    fVar20 = *(float *)(*plVar19 + 0x28) / _DAT_142e3c608;
  }
  *(float *)(*plVar11 + 0x18) = fVar20 + *(float *)(*plVar11 + 0x18);
  fVar5 = _DAT_142e36f28;
  fVar20 = *(float *)(*plVar11 + 0x18);
  fVar21 = 0.0;
  if (0.0 <= fVar20) {
    fVar21 = fVar20;
  }
  fVar20 = _DAT_142e36f28;
  if (fVar21 <= _DAT_142e36f28) {
    fVar20 = fVar21;
  }
  *(float *)(*plVar11 + 0x18) = fVar20;
  uVar10 = pdb_140725900(param_2);
  cVar9 = pdb_140732b50(uVar10);
  if (cVar9 != '\0') {
    *(undefined1 *)(*plVar11 + 0x20) = 1;
    plVar3 = (longlong *)param_1[2];
    lVar13 = *plVar3;
    bVar2 = *(byte *)(lVar13 + 0xe3);
    *(undefined4 *)plVar3[2] = *(undefined4 *)((longlong)plVar3 + 0x1c);
    *(byte *)(lVar13 + 0xe3) = bVar2 ^ 1;
    plVar4 = (longlong *)param_1[3];
    if (*(char *)(*plVar3 + 0xe3) == '\0') {
      *(undefined4 *)plVar4[2] = *(undefined4 *)((longlong)plVar4 + 0x1c);
      lVar13 = *plVar4;
      lVar18 = *(longlong *)(lVar13 + 0x30);
      uVar10 = *(undefined8 *)(lVar13 + 0x40);
      if (lVar18 == *(longlong *)(lVar13 + 0x20)) {
        pdb_142d7e6e0(lVar13 + 0x20);
      }
      lVar14 = *(longlong *)(lVar13 + 0x28);
      lVar15 = lVar18 * 0x20;
      *(undefined4 *)(lVar14 + lVar15) = 0x26;
    }
    else {
      *(undefined4 *)plVar4[2] = *(undefined4 *)((longlong)plVar4 + 0x1c);
      lVar13 = *plVar4;
      lVar18 = *(longlong *)(lVar13 + 0x30);
      uVar10 = *(undefined8 *)(lVar13 + 0x40);
      if (lVar18 == *(longlong *)(lVar13 + 0x20)) {
        pdb_142d7e6e0(lVar13 + 0x20);
      }
      lVar14 = *(longlong *)(lVar13 + 0x28);
      lVar15 = lVar18 * 0x20;
      *(undefined4 *)(lVar14 + lVar15) = 0x27;
    }
    *(undefined8 *)(lVar14 + 0x18 + lVar15) = uVar10;
    *(longlong *)(lVar13 + 0x30) = lVar18 + 1;
    *(longlong *)(lVar13 + 0x40) = *(longlong *)(lVar13 + 0x40) + 1;
  }
  lVar13 = *plVar11;
  if (*(char *)(lVar13 + 0x20) != '\0') {
    *(float *)(lVar13 + 0x1c) =
         *(float *)(*plVar19 + 0x28) / _DAT_142e3787c + *(float *)(lVar13 + 0x1c);
    fVar20 = *(float *)(*plVar11 + 0x1c);
    fVar21 = 0.0;
    if (0.0 <= fVar20) {
      fVar21 = fVar20;
    }
    fVar20 = fVar5;
    if (fVar21 <= fVar5) {
      fVar20 = fVar21;
    }
    *(float *)(*plVar11 + 0x1c) = fVar20;
    lVar13 = *plVar11;
  }
  fVar20 = (float)pdb_140dedcd0(&UNK_142f95534,*(undefined4 *)(lVar13 + 0x18));
  fVar21 = (fVar5 - *(float *)(*plVar11 + 0x1c)) * _DAT_142e3b1d8 + *(float *)(*plVar11 + 0x1c);
  fVar21 = fVar21 * _DAT_142e37adc * (fVar5 - fVar21);
  puVar17 = &UNK_142f953fb;
  if (*(byte *)(*(longlong *)param_1[2] + 0xe3) != 0) {
    puVar17 = &UNK_142f953ea;
  }
  pdb_140306cd0(&uStack_c0,param_2,&UNK_142f9553c,0xe,puVar17,
                (ulonglong)*(byte *)(*(longlong *)param_1[2] + 0xe3) * 2 + 0xf,
                (fVar21 * fVar21 * _DAT_142e37878 +
                fVar20 * _DAT_142f9515c + (fVar5 - fVar20) * _DAT_142f3e554) * _DAT_142f95160);
  uVar10 = pdb_140725a70(&uStack_c0);
  pdb_140732b00(uVar10);
  if (fVar5 <= *(float *)(*plVar11 + 0x1c)) {
    *(undefined4 *)(*plVar11 + 0x1c) = 0;
    *(undefined1 *)(*plVar11 + 0x20) = 0;
  }
  return;
}

