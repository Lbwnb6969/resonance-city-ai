// VA 0x140a563b0, PDB extent 1676 bytes
// country_core::systems::history::replay_mode::replay_mode
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/history/replay_mode.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::history::replay_mode::replay_mode
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/history/replay_mode.rs
   Extent: 1676 */

void pdb_140a563b0(undefined8 *param_1,longlong *param_2,longlong *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,longlong *param_8,
                  longlong *param_9,longlong *param_10,undefined8 *param_11,undefined8 *param_12)

{
  ulonglong uVar1;
  char *pcVar2;
  char *pcVar3;
  uint *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  undefined4 uVar9;
  char cVar10;
  longlong lVar11;
  char *pcVar12;
  undefined4 uVar13;
  undefined4 *puVar14;
  char *pcVar15;
  char *pcVar16;
  char *pcVar17;
  char *pcVar18;
  char *pcVar19;
  longlong lVar20;
  char *pcVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 uStack_c1;
  undefined4 uStack_c0;
  undefined3 uStack_bc;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  
  lVar11 = param_4[1];
  uVar1 = *(ulonglong *)*param_4;
  pcVar15 = (char *)0x0;
  pcVar12 = (char *)(uVar1 - *(ulonglong *)(lVar11 + 0x18));
  if (uVar1 < *(ulonglong *)(lVar11 + 0x18)) {
    pcVar12 = pcVar15;
  }
  lVar20 = (longlong)pcVar12 * 0x38 + *(longlong *)(lVar11 + 8);
  pcVar2 = *(char **)(lVar11 + 0x10);
  pcVar18 = pcVar2 + -(longlong)pcVar12;
  if (pcVar2 < pcVar12) {
    pcVar18 = pcVar15;
  }
  if (pcVar2 < pcVar12) {
    lVar20 = 8;
  }
  pcVar21 = (char *)(lVar20 + -0x38 + (longlong)pcVar18 * 0x38);
  if (pcVar2 <= pcVar12) {
    pcVar21 = pcVar15;
  }
  pcVar16 = (char *)(uVar1 - *(ulonglong *)(lVar11 + 0x38));
  if (uVar1 < *(ulonglong *)(lVar11 + 0x38)) {
    pcVar16 = pcVar15;
  }
  pcVar3 = *(char **)(lVar11 + 0x30);
  lVar20 = (longlong)pcVar16 * 0x38 + *(longlong *)(lVar11 + 0x28);
  pcVar19 = pcVar3 + -(longlong)pcVar16;
  if (pcVar3 < pcVar16) {
    pcVar19 = pcVar15;
  }
  if (pcVar3 < pcVar16) {
    lVar20 = 8;
  }
  pcVar17 = (char *)(lVar20 + -0x38 + (longlong)pcVar19 * 0x38);
  if (pcVar3 <= pcVar16) {
    pcVar17 = pcVar21;
  }
  pcVar18 = pcVar19 + (longlong)pcVar18;
  if (pcVar12 < pcVar2 || pcVar16 < pcVar3) {
    pcVar18 = pcVar15;
  }
  *(ulonglong *)*param_4 = *(longlong *)(lVar11 + 0x40) - (longlong)pcVar18;
  if ((pcVar12 < pcVar2 || pcVar16 < pcVar3) && (*pcVar17 == '\t')) {
    cVar10 = pcVar17[0x18];
    uVar13 = 0;
    uVar9 = 0;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(cVar10) {
    case '\0':
      if (*(int *)(pcVar17 + 0x20) == 3) {
        uStack_c0 = *(undefined4 *)(pcVar17 + 0x19);
        uStack_bc = (undefined3)((uint)*(undefined4 *)(pcVar17 + 0x1c) >> 8);
        uStack_b8 = *(longlong *)(pcVar17 + 0x24);
        puStack_b0 = (undefined *)CONCAT44(puStack_b0._4_4_,*(undefined4 *)(pcVar17 + 0x2c));
        uVar9 = 3;
      }
      else {
        cVar10 = '\x05';
        if (*(int *)(pcVar17 + 0x20) == 6) break;
        uVar9 = 0;
      }
    case '\x11':
      uVar13 = uVar9;
      cVar10 = '\0';
      break;
    default:
      uStack_c0 = *(undefined4 *)(pcVar17 + 0x19);
      uStack_bc = (undefined3)((uint)*(undefined4 *)(pcVar17 + 0x1c) >> 8);
      uVar13 = *(undefined4 *)(pcVar17 + 0x20);
      puStack_b0 = (undefined *)CONCAT44(puStack_b0._4_4_,*(undefined4 *)(pcVar17 + 0x2c));
      uStack_b8 = *(longlong *)(pcVar17 + 0x24);
      break;
    case '\t':
    case '\n':
      pcVar12 = (char *)*param_6;
      cVar10 = *pcVar12;
      uStack_bc = (undefined3)((uint)*(undefined4 *)(pcVar12 + 4) >> 8);
      uStack_c0 = *(undefined4 *)(pcVar12 + 1);
      uVar13 = *(undefined4 *)(pcVar12 + 8);
      uStack_b8 = *(longlong *)(pcVar12 + 0xc);
      puStack_b0 = (undefined *)CONCAT44(puStack_b0._4_4_,*(undefined4 *)(pcVar12 + 0x14));
      break;
    case '\x12':
    case '\x13':
    case '\x14':
      pcVar12 = (char *)(ulonglong)uRama180b1fda180b1fd;
      cVar10 = (char)uRama180b1fda180b1fd;
      *pcVar12 = *pcVar12 + cVar10;
      *pcVar12 = *pcVar12 + cVar10;
      *pcVar12 = *pcVar12 + cVar10;
      *pcVar12 = *pcVar12 + cVar10;
      *pcVar12 = *pcVar12 + cVar10;
      pcVar7 = (code *)swi(0xcc);
      (*pcVar7)(0x80);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(undefined4 *)param_6[2] = *(undefined4 *)((longlong)param_6 + 0x1c);
    pcVar12 = (char *)*param_6;
    *pcVar12 = cVar10;
    *(undefined4 *)(pcVar12 + 1) = uStack_c0;
    *(uint *)(pcVar12 + 4) = CONCAT31(uStack_bc,uStack_c0._3_1_);
    *(undefined4 *)(pcVar12 + 8) = uVar13;
    *(longlong *)(pcVar12 + 0xc) = uStack_b8;
    *(undefined4 *)(pcVar12 + 0x14) = puStack_b0._0_4_;
    *(undefined4 *)param_7[2] = *(undefined4 *)((longlong)param_7 + 0x1c);
    *(undefined8 *)*param_7 = 1;
    *(undefined4 *)param_3[2] = *(undefined4 *)((longlong)param_3 + 0x1c);
    *(undefined4 *)(*param_3 + 0x28) = 0x3f800000;
    *(undefined4 *)param_5[2] = *(undefined4 *)((longlong)param_5 + 0x1c);
    *(undefined8 *)*param_5 = 0;
  }
  if (*(char *)*param_1 != '\t') {
    if ((DAT_143cb2cc8 & 1) == 0) {
      return;
    }
    if (3 < *_DAT_143ca8e90) {
      uStack_b8 = 0;
      puStack_b0 = &UNK_14303dbc2;
      uStack_a8 = 0x2b;
      uStack_a0 = 0;
      puStack_98 = &UNK_14303db78;
      uStack_90 = 0x36;
      uStack_88 = 4;
      puStack_80 = &UNK_14303dbc2;
      uStack_78 = 0x2b;
      uStack_70 = 0x8e00000001;
      puStack_68 = &UNK_14303dbf3;
      uStack_60 = 0x29;
      pdb_140f332f0(&uStack_c1,&uStack_b8);
      DAT_143cb2cc8 = 0;
      return;
    }
    DAT_143cb2cc8 = 0;
    return;
  }
  if ((DAT_143cb2cc8 & 1) == 0) {
    if (3 < *_DAT_143ca8e90) {
      uStack_b8 = 0;
      puStack_b0 = &UNK_14303dbc2;
      uStack_a8 = 0x2b;
      uStack_a0 = 0;
      puStack_98 = &UNK_14303db78;
      uStack_90 = 0x36;
      uStack_88 = 4;
      puStack_80 = &UNK_14303dbc2;
      uStack_78 = 0x2b;
      uStack_70 = 0x8900000001;
      puStack_68 = &UNK_14303dbaf;
      uStack_60 = 0x27;
      pdb_140f332f0(&uStack_c1,&uStack_b8);
    }
    DAT_143cb2cc8 = 1;
  }
  uStack_b8 = (ulonglong)uStack_b8._4_4_ << 0x20;
  uStack_a0 = (ulonglong)uStack_a0._4_4_ << 0x20;
  uStack_88 = (ulonglong)uStack_88._4_4_ << 0x20;
  uStack_70 = (ulonglong)uStack_70._4_4_ << 0x20;
  pdb_1408ffe50(*param_11,&UNK_14303dbed,6,0xd,3,&uStack_b8);
  fVar24 = _DAT_142e3787c;
  fVar22 = _DAT_142e36f28;
  if (*(char *)*param_12 != '\0') {
    uVar13 = *(undefined4 *)((char *)*param_12 + 4);
    *(undefined4 *)param_3[2] = *(undefined4 *)((longlong)param_3 + 0x1c);
    *(undefined4 *)(*param_3 + 0x28) = uVar13;
    return;
  }
  puVar4 = (uint *)*param_5;
  fVar23 = (float)puVar4[1];
  lVar11 = *param_9;
  if (*puVar4 == 1) {
    if (*(uint *)(lVar11 + 0x88) < 3) {
      *(undefined4 *)param_8[2] = *(undefined4 *)((longlong)param_8 + 0x1c);
      lVar11 = *param_8;
      lVar20 = *(longlong *)(lVar11 + 0x30);
      uVar5 = *(undefined8 *)(lVar11 + 0x40);
      if (lVar20 == *(longlong *)(lVar11 + 0x20)) {
        pdb_142d7e980(lVar11 + 0x20);
      }
      lVar6 = *(longlong *)(lVar11 + 0x28);
      *(undefined8 *)(lVar6 + lVar20 * 0x10) = uVar5;
      *(undefined4 *)(lVar6 + 8 + lVar20 * 0x10) = 0x3000000;
    }
    else {
      if (2 < *(uint *)(lVar11 + 0x90)) {
        *(undefined4 *)param_8[2] = *(undefined4 *)((longlong)param_8 + 0x1c);
        lVar11 = *param_8;
        lVar20 = *(longlong *)(lVar11 + 0x30);
        uVar5 = *(undefined8 *)(lVar11 + 0x40);
        if (lVar20 == *(longlong *)(lVar11 + 0x20)) {
          pdb_142d7e980(lVar11 + 0x20);
        }
        lVar6 = *(longlong *)(lVar11 + 0x28);
        *(undefined8 *)(lVar6 + lVar20 * 0x10) = uVar5;
        *(undefined4 *)(lVar6 + 8 + lVar20 * 0x10) = 0x3000200;
        *(longlong *)(lVar11 + 0x30) = lVar20 + 1;
        *(longlong *)(lVar11 + 0x40) = *(longlong *)(lVar11 + 0x40) + 1;
        uVar13 = *(undefined4 *)((longlong)param_3 + 0x1c);
        puVar14 = (undefined4 *)param_3[2];
        *puVar14 = uVar13;
        lVar11 = *param_3;
        *(undefined4 *)(lVar11 + 0x28) = 0x3f800000;
        *(undefined4 *)param_5[2] = *(undefined4 *)((longlong)param_5 + 0x1c);
        puVar4[0] = 0;
        puVar4[1] = 0;
        goto LAB_140a56936;
      }
      *(undefined4 *)param_8[2] = *(undefined4 *)((longlong)param_8 + 0x1c);
      lVar11 = *param_8;
      lVar20 = *(longlong *)(lVar11 + 0x30);
      uVar5 = *(undefined8 *)(lVar11 + 0x40);
      if (lVar20 == *(longlong *)(lVar11 + 0x20)) {
        pdb_142d7e980(lVar11 + 0x20);
      }
      lVar6 = *(longlong *)(lVar11 + 0x28);
      *(undefined8 *)(lVar6 + lVar20 * 0x10) = uVar5;
      *(undefined4 *)(lVar6 + 8 + lVar20 * 0x10) = 0x3000100;
    }
    *(longlong *)(lVar11 + 0x30) = lVar20 + 1;
    *(longlong *)(lVar11 + 0x40) = *(longlong *)(lVar11 + 0x40) + 1;
    fVar22 = (float)pdb_140de93b0(fVar23,_DAT_142e37900);
    *(undefined4 *)param_5[2] = *(undefined4 *)((longlong)param_5 + 0x1c);
    *puVar4 = 1;
    puVar4[1] = (uint)fVar22;
    lVar11 = *param_3;
  }
  else {
    if ((*(uint *)(lVar11 + 0x88) < 3) || (fVar25 = 0.0, *(uint *)(lVar11 + 0x90) < 3)) {
      fVar25 = fVar23 + *(float *)(*param_10 + 0x28);
    }
    bVar8 = _DAT_142e3787c < fVar25;
    fVar23 = _DAT_142e36f28;
    if (fVar25 <= _DAT_142e3787c) {
      fVar23 = fVar25;
    }
    *(undefined4 *)param_5[2] = *(undefined4 *)((longlong)param_5 + 0x1c);
    *puVar4 = (uint)bVar8;
    puVar4[1] = (uint)fVar23;
    lVar11 = *param_3;
    if (fVar25 <= fVar24) {
      uVar13 = *(undefined4 *)((longlong)param_3 + 0x1c);
      puVar14 = (undefined4 *)param_3[2];
LAB_140a56936:
      lVar20 = (*(longlong *)(*param_2 + 0x18) + 1) - (ulonglong)(*(longlong *)(lVar11 + 0x18) == 0)
      ;
      fVar23 = (float)(ulonglong)(lVar20 * lVar20) * _DAT_142e36f50;
      fVar22 = *(float *)(lVar11 + 0x28);
      fVar24 = fVar23;
      if (fVar23 <= fVar22) {
        fVar24 = fVar22;
      }
      *puVar14 = uVar13;
      *(uint *)(lVar11 + 0x28) =
           ~-(uint)NAN(fVar22) & (uint)fVar24 | -(uint)NAN(fVar22) & (uint)fVar23;
      return;
    }
  }
  *(undefined4 *)param_3[2] = *(undefined4 *)((longlong)param_3 + 0x1c);
  *(float *)(lVar11 + 0x28) = fVar22;
  return;
}

