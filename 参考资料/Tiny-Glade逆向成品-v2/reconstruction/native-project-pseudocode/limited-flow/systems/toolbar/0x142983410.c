// VA 0x142983410, PDB extent 1000 bytes
// toolbar::toolbar_systems::undo_redo_auto_hide
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/toolbar_systems.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x000142983782) overlaps instruction at (ram,0x000142983781)
    */
/* WARNING: Removing unreachable block (ram,0x000142983784) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: toolbar::toolbar_systems::undo_redo_auto_hide
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/toolbar_systems.rs
   Extent: 1000 */

void pdb_142983410(char *param_1,undefined8 *param_2,longlong *param_3,longlong *param_4,
                  undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,longlong *param_8,
                  longlong *param_9)

{
  undefined8 *puVar1;
  longlong lVar2;
  float fVar3;
  char cVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  undefined *puVar7;
  longlong lVar8;
  undefined *puVar9;
  longlong lVar10;
  undefined4 *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  longlong lVar14;
  longlong lVar15;
  undefined *puVar16;
  uint uVar17;
  longlong *plVar18;
  float fVar19;
  float fVar20;
  undefined1 in_XMM1 [16];
  int iVar22;
  undefined1 auVar21 [16];
  float fVar23;
  float fVar24;
  undefined1 auStack_a8 [112];
  
  lVar2 = *param_3;
  fVar24 = *(float *)(lVar2 + 0xe8);
  if (*(char *)(lVar2 + 0xf1) == '\0') {
    *(undefined4 *)param_7[2] = *(undefined4 *)((longlong)param_7 + 0x1c);
    puVar12 = (undefined8 *)*param_7;
    *(undefined4 *)(puVar12 + 2) = 0;
  }
  else {
    puVar12 = param_2;
    plVar18 = param_4;
    pdb_140a6ad50(*param_5);
    fVar20 = in_XMM1._0_4_;
    fVar19 = _DAT_142e37adc * _DAT_143607b28 * fVar24;
    uVar6 = (ulonglong)*(byte *)(lVar2 + 0xf0);
    switch(uVar6) {
    case 1:
      break;
    case 2:
      break;
    default:
      puVar9 = &UNK_143607f98;
      puVar7 = &UNK_143607f98 + *(int *)(&UNK_143607f98 + uVar6 * 4);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(uVar6) {
      case 3:
        goto code_r0x000142983561;
      case 4:
        goto code_r0x000142983773;
      case 5:
        *param_1 = *param_1 + -0x68;
        *param_1 = *param_1;
        puVar7 = (undefined *)CONCAT71((int7)((ulonglong)puVar7 >> 8),(char)puVar7 + 'h');
        break;
      case 6:
        puVar9 = &UNK_143607f97;
        puVar7 = (undefined *)(ulonglong)((int)puVar7 + 0x4b4087);
        goto code_r0x000142983799;
      case 7:
        goto code_r0x00014298377a;
      default:
        if ((longlong)puVar7 < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      goto code_r0x00014298378a;
    }
code_r0x000142983561:
    puVar12 = (undefined8 *)*param_7;
    fVar20 = *(float *)(puVar12 + 2);
    cVar4 = pdb_140a00370(*param_2);
    if (cVar4 == '\0') {
code_r0x0001429835ff:
      fVar19 = *(float *)(*param_4 + 0x58) / _DAT_142e37988;
code_r0x00014298360f:
      uVar5 = *(undefined4 *)((longlong)param_7 + 0x1c);
      puVar11 = (undefined4 *)param_7[2];
      *puVar11 = uVar5;
      fVar19 = fVar19 + *(float *)(puVar12 + 2);
      param_4 = plVar18;
    }
    else {
      pdb_140deead0(auStack_a8);
      cVar4 = pdb_140deec60(auStack_a8);
      if (cVar4 == '\0') goto code_r0x0001429835ff;
      cVar4 = pdb_140938ba0(*(undefined4 *)*param_6);
      if (cVar4 == '\0') {
        fVar19 = *(float *)(*param_4 + 0x58) / _DAT_142e37ae0;
        goto code_r0x00014298360f;
      }
      fVar19 = *(float *)(puVar12 + 2);
      uVar5 = *(undefined4 *)((longlong)param_7 + 0x1c);
      puVar11 = (undefined4 *)param_7[2];
      param_4 = plVar18;
    }
    fVar3 = _DAT_142e36f28;
    fVar23 = 0.0;
    if (0.0 <= fVar19) {
      fVar23 = fVar19;
    }
    fVar19 = _DAT_142e36f28;
    if (fVar23 <= _DAT_142e36f28) {
      fVar19 = fVar23;
    }
    *puVar11 = uVar5;
    *(float *)(puVar12 + 2) = fVar19;
    if ((fVar20 != 0.0) || (fVar19 <= 0.0)) {
      if ((fVar20 != _DAT_142e36f28) || ((NAN(fVar20) || NAN(_DAT_142e36f28) || (fVar3 <= fVar19))))
      goto LAB_1429836e4;
      *(undefined4 *)param_9[2] = *(undefined4 *)((longlong)param_9 + 0x1c);
      lVar14 = *param_9;
      lVar15 = *(longlong *)(lVar14 + 0x30);
      uVar13 = *(undefined8 *)(lVar14 + 0x40);
      if (lVar15 == *(longlong *)(lVar14 + 0x20)) {
        pdb_142d7e6e0(lVar14 + 0x20);
      }
      lVar8 = *(longlong *)(lVar14 + 0x28);
      lVar10 = lVar15 * 0x20;
      *(undefined4 *)(lVar8 + lVar10) = 0x15;
    }
    else {
      *(undefined4 *)param_9[2] = *(undefined4 *)((longlong)param_9 + 0x1c);
      lVar14 = *param_9;
      lVar15 = *(longlong *)(lVar14 + 0x30);
      uVar13 = *(undefined8 *)(lVar14 + 0x40);
      if (lVar15 == *(longlong *)(lVar14 + 0x20)) {
        pdb_142d7e6e0(lVar14 + 0x20);
      }
      lVar8 = *(longlong *)(lVar14 + 0x28);
      lVar10 = lVar15 * 0x20;
      *(undefined4 *)(lVar8 + lVar10) = 0x14;
    }
    *(undefined8 *)(lVar8 + 0x18 + lVar10) = uVar13;
    *(longlong *)(lVar14 + 0x30) = lVar15 + 1;
    *(longlong *)(lVar14 + 0x40) = *(longlong *)(lVar14 + 0x40) + 1;
  }
LAB_1429836e4:
  fVar24 = fVar24 * _DAT_142e3a74c;
  fVar19 = (float)pdb_140dedcd0(&UNK_143607eb8);
  fVar19 = fVar19 * fVar24;
  *(undefined4 *)param_8[2] = *(undefined4 *)((longlong)param_8 + 0x1c);
  puVar7 = *(undefined **)(*param_8 + 0xa0);
  puVar9 = (undefined *)0x0;
  puVar16 = puVar7;
  do {
    if ((undefined *)(*(longlong *)(*param_8 + 0xa8) * 0x28) == puVar9) {
      return;
    }
    puVar1 = (undefined8 *)(puVar16 + 0x10);
    puVar16 = puVar16 + 0x28;
    auVar21._0_4_ = -(uint)((int)*puVar1 == (int)*puVar12);
    iVar22 = -(uint)((int)((ulonglong)*puVar1 >> 0x20) == (int)((ulonglong)*puVar12 >> 0x20));
    auVar21._4_4_ = auVar21._0_4_;
    auVar21._8_4_ = iVar22;
    auVar21._12_4_ = iVar22;
    uVar17 = movmskpd((int)param_4,auVar21);
    param_4 = (longlong *)(ulonglong)uVar17;
    puVar9 = puVar9 + 0x28;
  } while (uVar17 != 3);
  puVar12 = (undefined8 *)(ulonglong)*(byte *)(lVar2 + 0xf0);
  fVar20 = 0.0;
code_r0x000142983773:
  param_3 = (longlong *)&UNK_143607fa8;
code_r0x00014298377a:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
  switch((undefined *)
         ((longlong)*(int *)((longlong)param_3 + (longlong)puVar12 * 4) + (longlong)param_3)) {
  case (undefined *)0x142983783:
    fVar19 = (float)((uint)fVar19 ^ _DAT_142e37820);
  case (undefined *)0x14298378a:
code_r0x00014298378a:
    fVar24 = 0.0;
    fVar20 = fVar19;
    break;
  case (undefined *)0x142983792:
    fVar19 = (float)((uint)fVar19 ^ _DAT_142e37820);
  case (undefined *)0x142983799:
code_r0x000142983799:
    fVar24 = fVar19;
    break;
  case (undefined *)0x143607fa8:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(float *)(puVar7 + -0x20 + (longlong)puVar9) = fVar24;
  *(float *)(puVar7 + -0x1c + (longlong)puVar9) = fVar20;
  return;
}

