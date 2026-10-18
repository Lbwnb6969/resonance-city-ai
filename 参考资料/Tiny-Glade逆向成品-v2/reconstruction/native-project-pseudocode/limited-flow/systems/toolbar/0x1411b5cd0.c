// VA 0x1411b5cd0, PDB extent 1419 bytes
// toolbar::mei::layout::LayoutStyle::place_childen_impl<toolbar::mei::layout::SwizzleYX>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/layout.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Instruction at (ram,0x0001411b609c) overlaps instruction at (ram,0x0001411b6099)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   toolbar::mei::layout::LayoutStyle::place_childen_impl<toolbar::mei::layout::SwizzleYX>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/layout.rs
   Extent: 1419 */

void pdb_1411b5cd0(ulonglong *param_1,char *param_2,float *param_3,undefined8 *param_4,
                  ulonglong *param_5)

{
  float fVar1;
  char cVar2;
  code *pcVar3;
  byte bVar4;
  undefined *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  char *pcVar8;
  undefined1 *puVar9;
  ulonglong *puVar10;
  code *UNRECOVERED_JUMPTABLE;
  char *pcVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float unaff_XMM6_Da;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float unaff_XMM15_Da;
  undefined1 auStack_158 [8];
  undefined1 auStack_150 [24];
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  ulonglong *puStack_118;
  ulonglong uStack_110;
  byte *pbStack_108;
  ulonglong uStack_100;
  float fStack_f4;
  undefined8 uStack_f0;
  
  puVar9 = auStack_158;
  uStack_f0 = 0xfffffffffffffffe;
  pcVar11 = param_2;
  if (param_5 == (ulonglong *)0x0) {
LAB_1411b5d69:
    pbStack_108 = (byte *)0x4;
    pcVar8 = pcVar11;
  }
  else {
    pcVar11 = (char *)((longlong)param_5 << 4);
    pdb_14007ee60();
    pcVar8 = (char *)0x0;
    pbStack_108 = pub_1406abab0((ulonglong)pcVar11,4);
    if (pbStack_108 == (byte *)0x0) {
      pdb_142dc7e2a(4);
      goto LAB_1411b5d69;
    }
  }
  uStack_110 = (ulonglong)param_5;
  uStack_100 = 0;
  fVar1 = *param_3;
  fVar16 = *(float *)(param_2 + 4);
  if (*param_2 == '\0') {
    fVar19 = param_3[1];
    fVar17 = *(float *)(param_2 + 0xc);
    if (param_2[8] != '\0') goto LAB_1411b5eff;
LAB_1411b5da7:
    fVar12 = *(float *)(param_2 + 0x14);
    if (param_2[0x10] != '\0') goto LAB_1411b5f13;
LAB_1411b5db6:
    fVar13 = *(float *)(param_2 + 0x1c);
    cVar2 = param_2[0x18];
  }
  else {
    fVar16 = fVar16 * fVar1;
    fVar19 = param_3[1];
    fVar17 = *(float *)(param_2 + 0xc);
    if (param_2[8] == '\0') goto LAB_1411b5da7;
LAB_1411b5eff:
    fVar17 = fVar17 * fVar19;
    fVar12 = *(float *)(param_2 + 0x14);
    if (param_2[0x10] == '\0') goto LAB_1411b5db6;
LAB_1411b5f13:
    fVar12 = fVar12 * fVar1;
    fVar13 = *(float *)(param_2 + 0x1c);
    cVar2 = param_2[0x18];
  }
  if (cVar2 != '\0') {
    fVar13 = fVar13 * fVar19;
  }
  fVar18 = fVar19 - (fVar13 + fVar17);
  fVar21 = *(float *)(param_2 + 0x24);
  if (param_2[0x20] != '\0') {
    fVar21 = fVar21 * fVar18;
  }
  fVar21 = (float)(longlong)((longlong)param_5 - (ulonglong)(param_5 != (ulonglong *)0x0)) * fVar21;
  fVar18 = fVar18 - fVar21;
  fVar14 = 0.0;
  fVar20 = 0.0;
  if (param_5 != (ulonglong *)0x0) {
    puVar7 = param_4;
    do {
      fVar15 = *(float *)(puVar7[1] + 0xc);
      if (*(char *)(puVar7[1] + 8) != '\0') {
        fVar15 = fVar15 * fVar18;
      }
      pcVar8 = (char *)*puVar7;
      unaff_XMM6_Da = *(float *)(pcVar8 + 0x34);
      if (pcVar8[0x30] != '\0') {
        unaff_XMM6_Da = unaff_XMM6_Da * fVar18;
      }
      if (fVar15 <= unaff_XMM6_Da) {
        fVar15 = unaff_XMM6_Da;
      }
      fVar20 = fVar20 + *(float *)(pcVar8 + 0x38);
      if (fVar15 <= *(float *)((longlong)puVar7 + 0x14)) {
        fVar15 = *(float *)((longlong)puVar7 + 0x14);
      }
      fVar14 = fVar14 + fVar15;
      puVar7 = puVar7 + 3;
    } while (puVar7 != param_4 + (longlong)param_5 * 3);
  }
  fVar19 = (fVar19 - (fVar21 + fVar14)) - (fVar13 + fVar17);
  puVar5 = &UNK_1432a831c + *(int *)(&UNK_1432a831c + (ulonglong)(byte)param_2[0x47] * 4);
  puStack_118 = param_1;
  fStack_f4 = fVar19;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(param_2[0x47]) {
  case '\0':
    goto code_r0x0001411b5f39;
  case '\x01':
code_r0x0001411b5f2c:
  case '\x02':
    goto code_r0x0001411b5f39;
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
    unaff_XMM15_Da = fVar1;
    goto code_r0x0001411b60d4;
  case '\a':
    bVar4 = (byte)puVar5;
    puVar5 = (undefined *)((ulonglong)puVar5 ^ 0x80);
    fVar16 = fVar12;
    if (-1 < (char)(bVar4 ^ 0x80)) {
      uStack_138 = CONCAT71(uStack_138._1_7_,(char)uStack_138 + (char)((ulonglong)pcVar8 >> 8));
      goto code_r0x0001411b6049;
    }
code_r0x0001411b60d4:
    unaff_XMM15_Da = unaff_XMM15_Da - unaff_XMM6_Da;
code_r0x0001411b60d9:
    if (fVar16 <= fVar12) {
      fVar16 = fVar12;
    }
    fVar1 = *(float *)((longlong)param_4 + 0x14 + (longlong)param_5);
    if (fVar16 <= fVar1) {
      fVar16 = fVar1;
    }
    fVar1 = *(float *)(puVar5 + 0x38);
    if (param_1 == param_5) {
      *(undefined8 *)(puVar9 + -8) = 0x1411b60fc;
      pdb_142d7ef30(param_2);
    }
    *(float *)(pbStack_108 + -8 + (longlong)param_3) = unaff_XMM6_Da;
    *(float *)(pbStack_108 + -4 + (longlong)param_3) = (fVar1 / fVar20) * fStack_f4 + fVar16;
    *(ulonglong *)(pbStack_108 + (longlong)param_3) =
         CONCAT44(fVar17 + uStack_138._4_4_ + uStack_128._4_4_,
                  unaff_XMM15_Da + fVar19 + (float)uStack_138 + (float)uStack_128);
    uStack_100 = (longlong)param_1 + 1;
    puVar10 = param_5 + 3;
    if ((ulonglong *)((longlong)param_5 * 0x18) == puVar10) goto code_r0x0001411b6126;
    goto code_r0x0001411b6010;
  case '\b':
    puVar9 = auStack_150;
    goto code_r0x0001411b60d9;
  }
joined_r0x0001411b5edd:
  if (param_5 == (ulonglong *)0x0) {
code_r0x0001411b6126:
    puStack_118[2] = uStack_100;
    *puStack_118 = uStack_110;
    puStack_118[1] = (ulonglong)pbStack_108;
    return;
  }
  if (fVar19 <= 0.0) {
    fVar19 = 0.0;
  }
  uStack_138 = *(undefined8 *)(param_3 + 2);
  uStack_130 = 0;
  uStack_128 = *(undefined8 *)(param_2 + 0x3c);
  uStack_120 = 0;
  puVar10 = (ulonglong *)0x0;
  UNRECOVERED_JUMPTABLE =
       (code *)(&UNK_1432a8330 + *(int *)(&UNK_1432a8330 + (ulonglong)(byte)param_2[0x46] * 4));
  fStack_f4 = fVar19;
code_r0x0001411b6010:
  pcVar11 = *(char **)((longlong)(param_4 + 1) + (longlong)puVar10);
  if (*pcVar11 == '\0') {
    if (pcVar11[8] != '\0') goto code_r0x0001411b6080;
code_r0x0001411b602a:
    lVar6 = *(longlong *)((longlong)param_4 + (longlong)puVar10);
    if (*(char *)(lVar6 + 0x28) != '\0') goto code_r0x0001411b6094;
code_r0x0001411b6039:
    fVar12 = *(float *)(lVar6 + 0x34);
    cVar2 = *(char *)(lVar6 + 0x30);
  }
  else {
    if (pcVar11[8] == '\0') goto code_r0x0001411b602a;
code_r0x0001411b6080:
    lVar6 = *(longlong *)((longlong)param_4 + (longlong)puVar10);
    if (*(char *)(lVar6 + 0x28) == '\0') goto code_r0x0001411b6039;
code_r0x0001411b6094:
    fVar12 = *(float *)(lVar6 + 0x34);
    cVar2 = *(char *)(lVar6 + 0x30);
  }
  if (cVar2 != '\0') {
    fVar12 = fVar12 * fVar18;
  }
code_r0x0001411b6049:
                    /* WARNING: Could not recover jumptable at 0x0001411b605d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(fVar12);
  return;
code_r0x0001411b5f39:
  goto joined_r0x0001411b5edd;
}

