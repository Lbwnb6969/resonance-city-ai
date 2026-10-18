// VA 0x1411c7bf0, PDB extent 1069 bytes
// toolbar::quick_tool_palette::quick_tool_palette_position
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/quick_tool_palette.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: toolbar::quick_tool_palette::quick_tool_palette_position
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/quick_tool_palette.rs
   Extent: 1069 */

void pdb_1411c7bf0(longlong *param_1,longlong *param_2,longlong *param_3,undefined8 *param_4,
                  longlong *param_5,longlong *param_6)

{
  ulonglong *puVar1;
  undefined8 *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  longlong lVar12;
  undefined4 *puVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong *puVar17;
  longlong lVar18;
  int *piVar19;
  ulonglong *puVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  uint uVar24;
  ulonglong uVar25;
  ulonglong in_R10;
  float fVar26;
  float fVar27;
  float fVar28;
  int iVar30;
  undefined1 auVar29 [16];
  int iStack_b8;
  undefined4 uStack_b4;
  ulonglong uStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  int iStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  
  lVar12 = *param_1;
  if (*(char *)(lVar12 + 0x60) != '\x01') {
    return;
  }
  uVar9 = *(undefined4 *)((longlong)param_6 + 0x1c);
  puVar13 = (undefined4 *)param_6[2];
  *puVar13 = uVar9;
  lVar14 = *param_6;
  lVar15 = *param_2;
  pdb_142390740(lVar14,*(undefined4 *)(lVar15 + 0x20),*(undefined4 *)(lVar15 + 0x24));
  lVar18 = *(longlong *)(lVar15 + 8);
  lVar16 = *(longlong *)(lVar15 + 0x10);
  lVar21 = lVar18;
  for (lVar22 = 0; lVar16 << 5 != lVar22; lVar22 = lVar22 + 0x20) {
    iVar30 = *(int *)(lVar21 + 0x10);
    if (iVar30 != 0) {
      uVar10 = *(undefined4 *)(lVar18 + 0x14 + lVar22);
      *puVar13 = uVar9;
      pdb_142390740(lVar14,iVar30,uVar10);
    }
    lVar21 = lVar21 + 0x20;
  }
  if (*(longlong *)(lVar15 + 0x10) == 0) {
LAB_1411c7fd8:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_1432a9b50);
  }
  lVar18 = *(longlong *)(lVar15 + 8);
  lVar16 = *(longlong *)(lVar15 + 0x10) * 0x20 + lVar18;
  do {
    iVar30 = *(int *)(lVar18 + 0x10);
    if (iVar30 != 0) {
      iVar11 = *(int *)(lVar18 + 0x14);
      *puVar13 = uVar9;
      lVar21 = *(longlong *)(lVar14 + 0xa0);
      in_R10 = 0;
      lVar22 = lVar21;
      do {
        lVar23 = lVar22;
        if (*(longlong *)(lVar14 + 0xa8) * 0x28 == in_R10) goto LAB_1411c7cd0;
        in_R10 = in_R10 + 0x28;
        lVar22 = lVar23 + 0x28;
      } while ((*(int *)(lVar23 + 0x14) != iVar11) || (*(int *)(lVar23 + 0x10) != iVar30));
      if (*(char *)(lVar21 + -4 + in_R10) != '\x04') {
        *(undefined1 *)(lVar21 + -4 + in_R10) = 0;
      }
    }
LAB_1411c7cd0:
    lVar18 = lVar18 + 0x20;
  } while (lVar18 != lVar16);
  if (*(longlong *)(lVar15 + 0x10) == 0) goto LAB_1411c7fd8;
  puVar17 = *(ulonglong **)(lVar15 + 8);
  if (*(char *)(lVar12 + 0x65) != (char)puVar17[3]) {
    lVar18 = *(longlong *)(lVar15 + 0x10) << 5;
    puVar20 = puVar17;
    do {
      lVar18 = lVar18 + -0x20;
      if (lVar18 == 0) goto LAB_1411c7fd8;
      puVar17 = puVar20 + 4;
      puVar1 = puVar20 + 7;
      puVar20 = puVar17;
    } while (*(char *)(lVar12 + 0x65) != (char)*puVar1);
  }
  uStack_b0 = *puVar17;
  lVar18 = param_5[1];
  iStack_b8 = 1;
  if (*(ulonglong *)(lVar18 + 0x10) <= (ulonglong)~(uint)uStack_b0) {
LAB_1411c7fe4:
    uStack_b4 = (undefined4)in_R10;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_1432a98d0,0x2b,&iStack_b8,&UNK_1432a9900,&UNK_1432a9b68);
  }
  piVar19 = (int *)((ulonglong)~(uint)uStack_b0 * 0x18 + *(longlong *)(lVar18 + 8));
  in_R10 = uStack_b0 >> 0x20;
  if ((piVar19[4] != (int)(uStack_b0 >> 0x20)) || (*piVar19 == 0)) goto LAB_1411c7fe4;
  lVar16 = *param_5;
  in_R10 = *(ulonglong *)(piVar19 + 2);
  iStack_b8 = 0;
  if ((*(ulonglong *)(lVar16 + 0x38) <= (in_R10 & 0xffffffff)) ||
     ((*(ulonglong *)(*(longlong *)(lVar16 + 0x28) + (in_R10 >> 6 & 0x3ffffff) * 8) >>
       (in_R10 & 0x3f) & 1) == 0)) goto LAB_1411c7fe4;
  fVar26 = *(float *)(*param_3 + 0xe8) * _DAT_1432a9884;
  if (*(ulonglong *)(lVar16 + 0x110) <
      *(ulonglong *)(*(longlong *)(lVar18 + 0x1a0) + 0x40 + (in_R10 >> 0x20) * 0x48)) {
    lVar18 = *(longlong *)(lVar18 + 0x1a0) + (in_R10 >> 0x20) * 0x48;
    uVar25 = *(ulonglong *)(*(longlong *)(lVar18 + 0x38) + *(ulonglong *)(lVar16 + 0x110) * 8);
    if (uVar25 != 0) {
      lVar18 = *(longlong *)(*(longlong *)(lVar18 + 0x18) + 0x10 + ~uVar25 * 0x30);
      goto LAB_1411c7e5d;
    }
  }
  lVar18 = 0;
LAB_1411c7e5d:
  fVar28 = *(float *)(lVar12 + 0x44);
  fVar3 = *(float *)*param_4;
  fVar27 = *(float *)(lVar12 + 0x40);
  uVar24 = piVar19[1];
  uVar25 = (ulonglong)*(uint *)((longlong)puVar17 + 0xc);
  pdb_1411bdd00(&iStack_98,lVar14,(int)puVar17[1]);
  if (iStack_98 != 4) {
    uStack_a8 = uStack_88;
    uStack_a4 = uStack_84;
    uStack_a0 = uStack_80;
    uStack_9c = uStack_7c;
    iStack_b8 = iStack_98;
    uStack_b4 = uStack_94;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_1432a98d0,0x2b,&iStack_b8,&UNK_1432a98b0,&UNK_1432a9b80);
  }
  fVar28 = fVar28 + _DAT_142e37830;
  fVar4 = *(float *)(CONCAT44(uStack_8c,uStack_90) + 4);
  fVar5 = *(float *)(lVar18 + (ulonglong)~uVar24 * 0x10);
  fVar6 = *(float *)(lVar18 + 4 + (ulonglong)~uVar24 * 0x10);
  fVar7 = *(float *)(lVar12 + 0x48);
  fVar8 = *(float *)(lVar12 + 0x4c);
  *puVar13 = uVar9;
  lVar18 = *(longlong *)(lVar14 + 0xa0);
  lVar21 = 0;
  lVar16 = lVar18;
  do {
    if (*(longlong *)(lVar14 + 0xa8) * 0x28 == lVar21) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_1432a9b98);
    }
    puVar2 = (undefined8 *)(lVar16 + 0x10);
    lVar16 = lVar16 + 0x28;
    auVar29._0_4_ = -(uint)((int)*puVar2 == (int)*(undefined8 *)(lVar15 + 0x18));
    iVar30 = -(uint)((int)((ulonglong)*puVar2 >> 0x20) ==
                    (int)((ulonglong)*(undefined8 *)(lVar15 + 0x18) >> 0x20));
    auVar29._4_4_ = auVar29._0_4_;
    auVar29._8_4_ = iVar30;
    auVar29._12_4_ = iVar30;
    uVar24 = movmskpd((int)uVar25,auVar29);
    uVar25 = (ulonglong)uVar24;
    lVar21 = lVar21 + 0x28;
  } while (uVar24 != 3);
  fVar26 = fVar26 * fVar3 + fVar28 + (fVar8 - (fVar4 * _DAT_142e36f50 + fVar6));
  fVar27 = fVar27 - (fVar5 - fVar7);
  *(float *)(lVar18 + -0x20 + lVar21) = fVar27;
  *(float *)(lVar18 + -0x1c + lVar21) = fVar26;
  *(undefined4 *)param_1[2] = *(undefined4 *)((longlong)param_1 + 0x1c);
  *(float *)(lVar12 + 0x48) = fVar27;
  *(float *)(lVar12 + 0x4c) = fVar26;
  return;
}

