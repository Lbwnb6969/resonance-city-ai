// VA 0x14297ff70, PDB extent 1217 bytes
// toolbar::ui_interaction::hide_ui
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/ui_interaction.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: toolbar::ui_interaction::hide_ui
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/ui_interaction.rs
   Extent: 1217 */

void pdb_14297ff70(undefined8 *param_1,longlong *param_2,longlong *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6,longlong *param_7)

{
  int *piVar1;
  uint *puVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 *puVar9;
  bool bVar10;
  char cVar11;
  byte *pbVar12;
  ulonglong uVar13;
  longlong lVar14;
  int iVar15;
  longlong lVar16;
  longlong *plVar17;
  uint uVar18;
  byte *pbVar19;
  uint *puVar20;
  byte *pbVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  bool bVar25;
  int *piStack_90;
  longlong lStack_80;
  
  cVar11 = pdb_140a00370(*param_1);
  if (((cVar11 == '\0') || (cVar11 = pdb_1409ec020(*param_4), cVar11 == '\0')) ||
     (*(char *)*param_6 != '\0')) {
    piStack_90 = (int *)*param_5;
    piVar1 = piStack_90 + 4;
    cVar11 = pdb_140c9dda0(piVar1);
    if (cVar11 != '\0') {
      *(undefined4 *)param_5[2] = *(undefined4 *)((longlong)param_5 + 0x1c);
      piVar1[0] = 0;
      piVar1[1] = 0;
    }
    bVar10 = false;
  }
  else {
    piStack_90 = (int *)*param_5;
    bVar10 = true;
  }
  lVar6 = *param_7;
  lVar7 = param_7[1];
  uVar4 = *(undefined4 *)((longlong)param_7 + 0x14);
  puVar20 = *(uint **)(lVar6 + 0xf8);
  puVar2 = puVar20 + *(longlong *)(lVar6 + 0x100);
  pbVar12 = (byte *)(*param_2 + 1);
  lVar8 = *param_3;
  uVar5 = *(undefined4 *)((longlong)param_5 + 0x1c);
  puVar9 = (undefined4 *)param_5[2];
  if (*(char *)(lVar6 + 0x108) == '\0') {
    lVar24 = 0;
    plVar17 = (longlong *)0x8;
    bVar25 = false;
    lVar22 = 0;
    uVar18 = 0;
    while( true ) {
      if (uVar18 == (uint)lVar24) {
        if (puVar20 == puVar2) {
          return;
        }
        while( true ) {
          lVar24 = *(longlong *)(*(longlong *)(lVar7 + 0x100) + 0x58 + (ulonglong)*puVar20 * 0xa0);
          if (lVar24 != 0) break;
          puVar20 = puVar20 + 1;
          if (puVar20 == puVar2) {
            return;
          }
        }
        lVar23 = *(longlong *)(lVar7 + 0x100) + (ulonglong)*puVar20 * 0xa0;
        if (*(ulonglong *)(lVar6 + 0x120) < *(ulonglong *)(lVar23 + 0x88)) {
          bVar25 = *(longlong *)(*(longlong *)(lVar23 + 0x80) + *(ulonglong *)(lVar6 + 0x120) * 8)
                   != 0;
        }
        else {
          bVar25 = false;
        }
        lVar16 = *(longlong *)
                  (*(longlong *)(lVar7 + 0x1a0) + 0x18 + (ulonglong)*(uint *)(lVar23 + 0x94) * 0x48)
        ;
        lVar14 = ~*(ulonglong *)
                   (*(longlong *)
                     (*(longlong *)(lVar7 + 0x1a0) + 0x38 +
                     (ulonglong)*(uint *)(lVar23 + 0x94) * 0x48) + *(longlong *)(lVar6 + 0x110) * 8)
                 * 0x30;
        lVar22 = *(longlong *)(lVar16 + 0x10 + lVar14);
        lStack_80 = *(longlong *)(lVar16 + 0x28 + lVar14);
        puVar20 = puVar20 + 1;
        plVar17 = *(longlong **)(lVar23 + 0x50);
        uVar18 = 1;
        lVar16 = 0;
        lVar23 = *plVar17;
        iVar15 = (int)lVar23;
      }
      else {
        uVar13 = (ulonglong)uVar18;
        uVar18 = uVar18 + 1;
        lVar16 = uVar13 * 0x10;
        lVar23 = plVar17[uVar13 * 2];
        iVar15 = (int)lVar23;
      }
      if (iVar15 == 0) {
        return;
      }
      uVar13 = (ulonglong)~*(uint *)((longlong)plVar17 + lVar16 + 8);
      pbVar19 = (byte *)(uVar13 * 3 + lVar22);
      if (!bVar25) break;
      if ((!bVar10) || (pbVar21 = (byte *)(lVar8 + 10), *pbVar12 == 0)) goto LAB_142980340;
LAB_14298036c:
      bVar3 = *pbVar21;
      *(undefined4 *)(lStack_80 + uVar13 * 4) = uVar4;
      *pbVar19 = bVar3 ^ 1;
      if (bVar3 != 0) {
LAB_1429803ae:
        if ((piStack_90[4] == 1) && (*(longlong *)(piStack_90 + 6) == lVar23)) {
          *puVar9 = uVar5;
          piStack_90[4] = 0;
          piStack_90[5] = 0;
        }
        if ((*piStack_90 == 1) && (*(longlong *)(piStack_90 + 2) == lVar23)) {
          *puVar9 = uVar5;
          piStack_90[0] = 0;
          piStack_90[1] = 0;
        }
      }
    }
    pbVar21 = pbVar12;
    if (bVar10) goto LAB_14298036c;
LAB_142980340:
    *(undefined4 *)(lStack_80 + uVar13 * 4) = uVar4;
    *pbVar19 = 0;
    goto LAB_1429803ae;
  }
  lVar24 = 0;
  lVar23 = 8;
  bVar25 = false;
  lVar22 = 0;
  uVar18 = 0;
  while( true ) {
    if (uVar18 == (uint)lVar24) {
      if (puVar20 == puVar2) {
        return;
      }
      while( true ) {
        lVar24 = *(longlong *)(*(longlong *)(lVar7 + 0x1a0) + 0x10 + (ulonglong)*puVar20 * 0x48);
        if (lVar24 != 0) break;
        puVar20 = puVar20 + 1;
        if (puVar20 == puVar2) {
          return;
        }
      }
      lVar23 = *(longlong *)(lVar7 + 0x1a0) + (ulonglong)*puVar20 * 0x48;
      uVar18 = 0;
      bVar25 = false;
      if (*(ulonglong *)(lVar6 + 0x120) < *(ulonglong *)(lVar23 + 0x40)) {
        bVar25 = *(longlong *)(*(longlong *)(lVar23 + 0x38) + *(ulonglong *)(lVar6 + 0x120) * 8) !=
                 0;
      }
      lVar16 = ~*(ulonglong *)(*(longlong *)(lVar23 + 0x38) + *(longlong *)(lVar6 + 0x110) * 8) *
               0x30;
      lVar22 = *(longlong *)(*(longlong *)(lVar23 + 0x18) + 0x10 + lVar16);
      lStack_80 = *(longlong *)(*(longlong *)(lVar23 + 0x18) + 0x28 + lVar16);
      puVar20 = puVar20 + 1;
      lVar23 = *(longlong *)(lVar23 + 8);
    }
    uVar13 = (ulonglong)uVar18;
    lVar16 = *(longlong *)(lVar23 + uVar13 * 8);
    if ((int)lVar16 == 0) {
      return;
    }
    pbVar19 = (byte *)(uVar13 * 3 + lVar22);
    uVar18 = uVar18 + 1;
    if (!bVar25) break;
    if ((!bVar10) || (pbVar21 = (byte *)(lVar8 + 10), *pbVar12 == 0)) goto LAB_142980140;
LAB_14298016c:
    bVar3 = *pbVar21;
    *(undefined4 *)(lStack_80 + uVar13 * 4) = uVar4;
    *pbVar19 = bVar3 ^ 1;
    if (bVar3 != 0) {
LAB_1429801a5:
      if ((piStack_90[4] == 1) && (*(longlong *)(piStack_90 + 6) == lVar16)) {
        *puVar9 = uVar5;
        piStack_90[4] = 0;
        piStack_90[5] = 0;
      }
      if ((*piStack_90 == 1) && (*(longlong *)(piStack_90 + 2) == lVar16)) {
        *puVar9 = uVar5;
        piStack_90[0] = 0;
        piStack_90[1] = 0;
      }
    }
  }
  pbVar21 = pbVar12;
  if (bVar10) goto LAB_14298016c;
LAB_142980140:
  *(undefined4 *)(lStack_80 + uVar13 * 4) = uVar4;
  *pbVar19 = 0;
  goto LAB_1429801a5;
}

