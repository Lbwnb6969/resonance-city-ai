// VA 0x1411b5730, PDB extent 1435 bytes
// toolbar::mei::layout::LayoutStyle::place_childen_impl<toolbar::mei::layout::SwizzleXY>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/layout.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Instruction at (ram,0x0001411b6099) overlaps instruction at (ram,0x0001411b6098)
    */
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   toolbar::mei::layout::LayoutStyle::place_childen_impl<toolbar::mei::layout::SwizzleXY>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/layout.rs
   Extent: 1435 */

void pdb_1411b5730(ulonglong *param_1,char *param_2,float *param_3,char *param_4,ulonglong *param_5)

{
  undefined8 *puVar1;
  char cVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  byte bVar6;
  ulonglong uVar7;
  longlong lVar8;
  char *pcVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined8 *puVar14;
  ulonglong *puVar15;
  code *UNRECOVERED_JUMPTABLE_00;
  char *pcVar16;
  bool bVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float unaff_XMM6_Da;
  float unaff_XMM6_Db;
  undefined1 auVar24 [16];
  undefined4 unaff_XMM8_Da;
  float fVar25;
  undefined4 unaff_XMM8_Db;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float unaff_XMM14_Da;
  float unaff_XMM14_Db;
  float unaff_XMM15_Da;
  undefined1 auStack_11c3 [4083];
  undefined8 *puStack_1d0;
  char acStack_1b0 [88];
  undefined8 *apuStack_158 [2];
  undefined1 auStack_148 [8];
  undefined1 auStack_140 [28];
  char cStack_124;
  ulonglong *puStack_120;
  ulonglong uStack_118;
  byte *pbStack_110;
  ulonglong *puStack_108;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  undefined8 uStack_f0;
  float fStack_e4;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  
  puVar13 = auStack_148;
  puVar11 = auStack_148;
  puVar12 = auStack_148;
  puVar10 = auStack_148;
  puVar14 = (undefined8 *)&uStack_c8;
  uStack_f0 = 0xfffffffffffffffe;
  pcVar16 = param_2;
  fStack_e4 = unaff_XMM6_Db;
  uStack_c8 = unaff_XMM8_Da;
  uStack_c4 = unaff_XMM8_Db;
  if (param_5 == (ulonglong *)0x0) {
LAB_1411b57c6:
    pbStack_110 = (byte *)0x4;
    pcVar9 = pcVar16;
  }
  else {
    pcVar16 = (char *)((longlong)param_5 << 4);
    apuStack_158[1] = (undefined8 *)0x1411b57a7;
    pdb_14007ee60();
    pcVar9 = (char *)0x0;
    apuStack_158[1] = (undefined8 *)0x1411b57b4;
    pbStack_110 = pub_1406abab0((ulonglong)pcVar16,4);
    if (pbStack_110 == (byte *)0x0) {
      apuStack_158[1] = (undefined8 *)0x1411b57c6;
      pdb_142dc7e2a(4);
      goto LAB_1411b57c6;
    }
  }
  uStack_118 = (ulonglong)param_5;
  puStack_108 = (ulonglong *)0x0;
  fVar21 = *param_3;
  fVar26 = *(float *)(param_2 + 4);
  if (*param_2 == '\0') {
    fVar28 = param_3[1];
    fVar25 = *(float *)(param_2 + 0xc);
    if (param_2[8] != '\0') goto LAB_1411b596a;
LAB_1411b5805:
    fVar19 = *(float *)(param_2 + 0x14);
    if (param_2[0x10] != '\0') goto LAB_1411b597e;
LAB_1411b5814:
    fVar18 = *(float *)(param_2 + 0x1c);
    cVar5 = param_2[0x18];
  }
  else {
    fVar26 = fVar26 * fVar21;
    fVar28 = param_3[1];
    fVar25 = *(float *)(param_2 + 0xc);
    if (param_2[8] == '\0') goto LAB_1411b5805;
LAB_1411b596a:
    fVar25 = fVar25 * fVar28;
    fVar19 = *(float *)(param_2 + 0x14);
    if (param_2[0x10] == '\0') goto LAB_1411b5814;
LAB_1411b597e:
    fVar19 = fVar19 * fVar21;
    fVar18 = *(float *)(param_2 + 0x1c);
    cVar5 = param_2[0x18];
  }
  if (cVar5 != '\0') {
    fVar18 = fVar18 * fVar28;
  }
  fVar27 = fVar21 - (fVar19 + fVar26);
  fVar30 = *(float *)(param_2 + 0x24);
  if (param_2[0x20] != '\0') {
    fVar30 = fVar30 * fVar27;
  }
  fVar20 = (float)(longlong)((longlong)param_5 - (ulonglong)(param_5 != (ulonglong *)0x0)) * fVar30;
  fVar27 = fVar27 - fVar20;
  fVar22 = 0.0;
  fVar29 = 0.0;
  if (param_5 != (ulonglong *)0x0) {
    pcVar16 = param_4;
    do {
      fVar23 = *(float *)(*(char **)(pcVar16 + 8) + 4);
      if (**(char **)(pcVar16 + 8) != '\0') {
        fVar23 = fVar23 * fVar27;
      }
      pcVar9 = *(char **)pcVar16;
      unaff_XMM6_Da = *(float *)(pcVar9 + 0x2c);
      if (pcVar9[0x28] != '\0') {
        unaff_XMM6_Da = unaff_XMM6_Da * fVar27;
      }
      if (fVar23 <= unaff_XMM6_Da) {
        fVar23 = unaff_XMM6_Da;
      }
      fVar29 = fVar29 + *(float *)(pcVar9 + 0x38);
      if (fVar23 <= *(float *)(pcVar16 + 0x10)) {
        fVar23 = *(float *)(pcVar16 + 0x10);
      }
      fVar22 = fVar22 + fVar23;
      pcVar16 = pcVar16 + 0x18;
    } while (pcVar16 != param_4 + (longlong)param_5 * 0x18);
  }
  cVar5 = (char)((ulonglong)pcVar9 >> 8);
  fVar20 = (fVar21 - (fVar20 + fVar22)) - (fVar19 + fVar26);
  auVar24 = ZEXT416((uint)fVar20);
  fVar21 = _DAT_142e36f28 - fVar29;
  fVar19 = 0.0;
  if (0.0 <= fVar21) {
    fVar19 = fVar21;
  }
  fVar22 = _DAT_142e36f28;
  if (fVar19 <= _DAT_142e36f28) {
    fVar22 = fVar19;
  }
  uVar7 = (ulonglong)*(int *)(&UNK_1432a82f8 + (ulonglong)(byte)param_2[0x47] * 4);
  pcVar16 = &UNK_1432a82f8 + uVar7;
  bVar17 = pcVar16 == (char *)0x0;
  puStack_120 = param_1;
  fStack_f8 = fVar20;
  fStack_fc = fVar25;
  bVar6 = (byte)pcVar16;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(param_2[0x47]) {
  case '\x01':
code_r0x0001411b5996:
    fStack_f4 = fVar30;
    break;
  case '\x03':
    if (param_5 < (ulonglong *)0x2) goto code_r0x0001411b5996;
    fVar30 = fVar30 + (fVar22 * fVar20) / (float)((longlong)param_5 + -1);
  case '\0':
    fStack_f4 = fVar30;
    break;
  case '\x04':
    fVar30 = fVar30 + (fVar22 * fVar20) / (float)((longlong)param_5 + 1);
  case '\x02':
    fStack_f4 = fVar30;
    break;
  case '\x05':
    goto code_r0x0001411b5ae1;
  case '\x06':
    fVar21 = fVar18;
    fVar25 = fVar28;
    goto code_r0x0001411b5b64;
  case '\a':
    pcVar16 = (char *)((ulonglong)pcVar16 ^ 0x80);
    if (-1 < (char)(bVar6 ^ 0x80)) {
      cStack_124 = cStack_124 + cVar5;
      goto code_r0x0001411b5ae1;
    }
code_r0x0001411b5b64:
    fVar25 = fVar25 - fVar20;
code_r0x0001411b5b69:
    if (unaff_XMM15_Da <= fVar21) {
      unaff_XMM15_Da = fVar21;
    }
    if (unaff_XMM15_Da <= *(float *)(param_4 + 0x10 + (longlong)param_5)) {
      unaff_XMM15_Da = *(float *)(param_4 + 0x10 + (longlong)param_5);
    }
    fVar21 = *(float *)(pcVar16 + 0x38);
    if (param_1 == param_5) {
      *(undefined8 *)(puVar10 + -8) = 0x1411b5b8c;
      pdb_142d7ef30(param_2);
    }
    *(float *)(pbStack_110 + -8 + (longlong)param_3) =
         unaff_XMM15_Da + (fVar21 / fVar29) * fStack_f8;
    *(float *)(pbStack_110 + -4 + (longlong)param_3) = fVar20;
    *(ulonglong *)(pbStack_110 + (longlong)param_3) =
         CONCAT44(fVar25 + fStack_fc + 0.0 + unaff_XMM14_Db,fVar26 + fVar30 + unaff_XMM14_Da);
    puStack_108 = (ulonglong *)((longlong)param_1 + 1);
    puVar15 = param_5 + 3;
    if ((ulonglong *)((longlong)param_5 * 0x18) == puVar15) goto code_r0x0001411b5b92;
    goto code_r0x0001411b5aa3;
  case '\b':
    puVar10 = auStack_140;
    pcVar16 = (char *)(ulonglong)((int)pcVar16 + 0x1c813fe);
    fVar21 = fVar18;
    goto code_r0x0001411b5b69;
  case '\t':
    fVar18 = fVar18 * fVar18;
code_r0x0001411b5f0c:
    *param_4 = *param_4 + -8;
    fVar18 = fVar18 * fVar25;
    fVar21 = *(float *)(param_2 + 0x1c);
    if (param_2[0x18] != '\0') {
      fVar21 = fVar21 * fVar28;
    }
    fVar27 = fVar28 - (fVar21 + fVar26);
    fVar19 = *(float *)(param_2 + 0x24);
    if (param_2[0x20] != '\0') {
      fVar19 = fVar19 * fVar27;
    }
    fVar19 = (float)(longlong)((longlong)param_5 - (ulonglong)(param_5 != (ulonglong *)0x0)) *
             fVar19;
    fVar27 = fVar27 - fVar19;
    fVar30 = 0.0;
    fVar29 = 0.0;
    if (param_5 != (ulonglong *)0x0) {
      pcVar16 = param_4;
      do {
        fVar20 = *(float *)(*(longlong *)(pcVar16 + 8) + 0xc);
        if (*(char *)(*(longlong *)(pcVar16 + 8) + 8) != '\0') {
          fVar20 = fVar20 * fVar27;
        }
        pcVar9 = *(char **)pcVar16;
        unaff_XMM6_Da = *(float *)(pcVar9 + 0x34);
        if (pcVar9[0x30] != '\0') {
          unaff_XMM6_Da = unaff_XMM6_Da * fVar27;
        }
        if (fVar20 <= unaff_XMM6_Da) {
          fVar20 = unaff_XMM6_Da;
        }
        fVar29 = fVar29 + *(float *)(pcVar9 + 0x38);
        if (fVar20 <= *(float *)(pcVar16 + 0x14)) {
          fVar20 = *(float *)(pcVar16 + 0x14);
        }
        fVar30 = fVar30 + fVar20;
        pcVar16 = pcVar16 + 0x18;
      } while (pcVar16 != param_4 + (longlong)param_5 * 0x18);
    }
    cVar5 = (char)((ulonglong)pcVar9 >> 8);
    fVar28 = (fVar28 - (fVar19 + fVar30)) - (fVar21 + fVar26);
    pcVar16 = &UNK_1432a831c + *(int *)(&UNK_1432a831c + (ulonglong)(byte)param_2[0x47] * 4);
    puStack_108 = param_1;
    fStack_e4 = fVar28;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(param_2[0x47]) {
    case '\0':
      goto code_r0x0001411b5f39;
    case '\x01':
code_r0x0001411b5f2c:
    case '\x02':
code_r0x0001411b5f39:
      break;
    case '\x03':
      if (param_5 < (ulonglong *)0x2) goto code_r0x0001411b5f2c;
      break;
    case '\x04':
      break;
    case '\x05':
      pcVar3 = (code *)swi(1);
      (*pcVar3)();
      return;
    case '\x06':
      goto code_r0x0001411b60d4;
    case '\a':
      goto code_r0x0001411b609c;
    case '\b':
      puVar12 = auStack_140;
      goto code_r0x0001411b60d9;
    }
    if (param_5 == (ulonglong *)0x0) goto code_r0x0001411b6126;
    fVar21 = *(float *)((longlong)puVar14 + -0x1c);
    if (fVar21 <= 0.0) {
      fVar21 = 0.0;
    }
    *(float *)((longlong)puVar14 + -0x1c) = fVar21;
    bVar6 = param_2[0x46];
    puVar14[-0xc] = *(undefined8 *)(param_3 + 2);
    puVar14[-0xb] = 0;
    puVar14[-10] = *(undefined8 *)(param_2 + 0x3c);
    puVar14[-9] = 0;
    param_5 = (ulonglong *)0x0;
    UNRECOVERED_JUMPTABLE_00 =
         (code *)(&UNK_1432a8330 + *(int *)(&UNK_1432a8330 + (ulonglong)bVar6 * 4));
    goto code_r0x0001411b6010;
  case '\n':
    cVar5 = bVar6 + 0x80 + (0xfffffffebcd57d07 < uVar7);
    if ((POPCOUNT(cVar5) & 1U) == 0) goto code_r0x0001411b5f0c;
    if ((POPCOUNT((cVar5 + -0x80) -
                  (0x7f < bVar6 || CARRY1(bVar6 + 0x80,0xfffffffebcd57d07 < uVar7))) & 1U) == 0) {
      *param_4 = *param_4 + -8;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    puVar14 = (undefined8 *)CONCAT44(uStack_c4,uStack_c8);
    goto code_r0x0001411b5f39;
  case '\v':
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case '\f':
    return;
  case '\r':
    auVar24 = maxps(auVar24,*(undefined1 (*) [16])(param_4 + 0x14 + (longlong)param_5));
    goto code_r0x0001411b60e4;
  case '\x0e':
    goto code_r0x0001411b6028;
  case '\x0f':
code_r0x0001411b60a1:
    *(char *)(puVar14 + -0xc) = *(char *)(puVar14 + -0xc) + cVar5;
    goto code_r0x0001411b6049;
  case '\x10':
    if (-1 < (longlong)pcVar16) goto code_r0x0001411b607a;
    goto code_r0x0001411b6080;
  case '\x11':
    puStack_1d0 = apuStack_158 + 1;
    puVar1 = apuStack_158 + 1;
    apuStack_158[1] = puVar14;
    cVar2 = '\x0f';
    do {
      puVar14 = puVar14 + -1;
      puVar1 = puVar1 + -1;
      *puVar1 = *puVar14;
      cVar2 = cVar2 + -1;
    } while ('\0' < cVar2);
    puVar11 = auStack_11c3;
    puVar14 = apuStack_158 + 1;
code_r0x0001411b609c:
    bVar6 = (byte)pcVar16;
    pcVar16 = (char *)((ulonglong)pcVar16 ^ 0x80);
    if (-1 < (char)(bVar6 ^ 0x80)) goto code_r0x0001411b60a1;
    auVar24 = ZEXT416((uint)fVar18);
    puVar12 = puVar11;
    fVar25 = unaff_XMM15_Da;
code_r0x0001411b60d4:
    unaff_XMM15_Da = fVar25 - unaff_XMM6_Da;
code_r0x0001411b60d9:
    if (auVar24._0_4_ <= fVar18) {
      auVar24._0_4_ = fVar18;
    }
    puVar13 = puVar12;
    if (auVar24._0_4_ <= *(float *)(param_4 + 0x14 + (longlong)param_5)) {
      auVar24._0_4_ = *(float *)(param_4 + 0x14 + (longlong)param_5);
    }
code_r0x0001411b60e4:
    puVar15 = (ulonglong *)((longlong)param_5 * 0x18);
    fVar21 = *(float *)(pcVar16 + 0x38);
    if (param_1 == (ulonglong *)puVar14[-7]) {
      *(undefined8 *)(puVar13 + -8) = 0x1411b60fc;
      pdb_142d7ef30(param_2);
    }
    fVar25 = *(float *)((longlong)puVar14 + -0x1c);
    fVar19 = *(float *)(puVar14 + -0xc);
    fVar18 = *(float *)((longlong)puVar14 + -0x5c);
    fVar30 = *(float *)(puVar14 + -10);
    fVar20 = *(float *)((longlong)puVar14 + -0x4c);
    lVar8 = puVar14[-6];
    *(float *)(lVar8 + -8 + (longlong)param_3) = unaff_XMM6_Da;
    *(float *)(lVar8 + -4 + (longlong)param_3) = (fVar21 / fVar29) * fVar25 + auVar24._0_4_;
    *(ulonglong *)(lVar8 + (longlong)param_3) =
         CONCAT44(fVar26 + fVar18 + fVar20,unaff_XMM15_Da + fVar28 + fVar19 + fVar30);
    puVar14[-5] = (longlong)param_1 + 1;
    param_5 = param_5 + 3;
    if (puVar15 == param_5) {
code_r0x0001411b6126:
      puVar1 = (undefined8 *)puVar14[-8];
      puVar1[2] = puVar14[-5];
      uVar4 = puVar14[-6];
      *puVar1 = puVar14[-7];
      puVar1[1] = uVar4;
      return;
    }
code_r0x0001411b6010:
    pcVar16 = *(char **)(param_4 + 8 + (longlong)param_5);
    if (*pcVar16 == '\0') {
      bVar17 = pcVar16[8] == '\0';
code_r0x0001411b6028:
      if (!bVar17) goto code_r0x0001411b6080;
code_r0x0001411b602a:
      lVar8 = *(longlong *)(param_4 + (longlong)param_5);
      if (*(char *)(lVar8 + 0x28) != '\0') goto code_r0x0001411b6094;
code_r0x0001411b6039:
      fVar18 = *(float *)(lVar8 + 0x34);
      cVar5 = *(char *)(lVar8 + 0x30);
    }
    else {
code_r0x0001411b607a:
      if (pcVar16[8] == '\0') goto code_r0x0001411b602a;
code_r0x0001411b6080:
      lVar8 = *(longlong *)(param_4 + (longlong)param_5);
      if (*(char *)(lVar8 + 0x28) == '\0') goto code_r0x0001411b6039;
code_r0x0001411b6094:
      fVar18 = *(float *)(lVar8 + 0x34);
      cVar5 = *(char *)(lVar8 + 0x30);
    }
    if (cVar5 != '\0') {
      fVar18 = fVar18 * fVar27;
    }
code_r0x0001411b6049:
                    /* WARNING: Could not recover jumptable at 0x0001411b605d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)(fVar18);
    return;
  }
  if (param_5 == (ulonglong *)0x0) {
code_r0x0001411b5b92:
    puStack_120[2] = (ulonglong)puStack_108;
    *puStack_120 = uStack_118;
    puStack_120[1] = (ulonglong)pbStack_110;
    return;
  }
  if (fVar20 <= 0.0) {
    fVar20 = 0.0;
  }
  puVar15 = (ulonglong *)0x0;
  UNRECOVERED_JUMPTABLE_00 =
       (code *)(&UNK_1432a830c + *(int *)(&UNK_1432a830c + (ulonglong)(byte)param_2[0x46] * 4));
  fStack_f8 = fVar20;
code_r0x0001411b5aa3:
  pcVar16 = *(char **)(param_4 + 8 + (longlong)puVar15);
  if (*pcVar16 == '\0') {
    if (pcVar16[8] != '\0') goto code_r0x0001411b5b10;
code_r0x0001411b5abe:
    fVar18 = *(float *)(*(longlong *)(param_4 + (longlong)puVar15) + 0x2c);
    cVar5 = *(char *)(*(longlong *)(param_4 + (longlong)puVar15) + 0x28);
  }
  else {
    if (pcVar16[8] == '\0') goto code_r0x0001411b5abe;
code_r0x0001411b5b10:
    fVar18 = *(float *)(*(longlong *)(param_4 + (longlong)puVar15) + 0x2c);
    cVar5 = *(char *)(*(longlong *)(param_4 + (longlong)puVar15) + 0x28);
  }
  if (cVar5 != '\0') {
    fVar18 = fVar18 * fVar27;
  }
code_r0x0001411b5ae1:
                    /* WARNING: Could not recover jumptable at 0x0001411b5af1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)(fVar18);
  return;
}

