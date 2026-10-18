// VA 0x14149b070, PDB extent 1032 bytes
// system_decorator::decorator_visual::lantern::compare_light_lists<system_decorator::decorator_visual::lantern::maintain_lantern_lights::closure_env$3>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/lantern.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   system_decorator::decorator_visual::lantern::compare_light_lists<system_decorator::decorator_visual::lantern::maintain_lantern_lights::closure_env$3>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/lantern.rs
   Extent: 1032 */

void pdb_14149b070(uint *param_1,ulonglong param_2,longlong param_3,ulonglong param_4,
                  undefined8 *param_5)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  ushort uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  ulonglong *puVar8;
  ulonglong *puVar9;
  longlong lVar10;
  int *piVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined8 uVar14;
  longlong lVar15;
  bool bVar16;
  uint *puVar17;
  longlong lVar18;
  ulonglong uVar19;
  longlong lVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  uint *puVar23;
  longlong lVar24;
  ulonglong uVar25;
  bool bVar26;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  if (param_4 == 0 || param_2 == 0) {
    uVar22 = 0;
    if (param_4 == 0) {
      return;
    }
LAB_14149b2b3:
    puVar6 = (undefined8 *)*param_5;
    plVar7 = (longlong *)param_5[1];
    puVar8 = (ulonglong *)param_5[2];
    puVar9 = (ulonglong *)param_5[3];
    lVar10 = param_5[4];
    lVar24 = uVar22 * 0x1c;
    while( true ) {
      piVar11 = (int *)*puVar6;
      if (*piVar11 < 4) {
        plVar12 = (longlong *)puVar6[1];
        uVar5 = *(undefined4 *)(param_3 + 0x18 + lVar24);
        uVar14 = *(undefined8 *)(param_3 + 0x10 + lVar24);
        uStack_50 = (undefined4)uVar14;
        uStack_4c = (undefined4)((ulonglong)uVar14 >> 0x20);
        *(undefined4 *)plVar12[2] = *(undefined4 *)((longlong)plVar12 + 0x1c);
        lVar13 = *plVar12;
        lVar15 = *(longlong *)(lVar13 + 0x30);
        uVar14 = *(undefined8 *)(lVar13 + 0x40);
        if (lVar15 == *(longlong *)(lVar13 + 0x20)) {
          pdb_142d7e7c0(lVar13 + 0x20);
        }
        lVar18 = *(longlong *)(lVar13 + 0x28);
        lVar20 = lVar15 * 0x30;
        *(undefined8 *)(lVar18 + lVar20) = 0x17;
        puVar1 = (undefined4 *)(lVar18 + 8 + lVar20);
        *puVar1 = uStack_60;
        puVar1[1] = uStack_5c;
        puVar1[2] = uStack_58;
        puVar1[3] = uStack_54;
        puVar2 = (undefined8 *)(lVar18 + 0x14 + lVar20);
        *puVar2 = CONCAT44(uStack_50,uStack_54);
        puVar2[1] = CONCAT44(uVar5,uStack_4c);
        *(undefined1 *)(lVar18 + 0x24 + lVar20) = 0;
        *(undefined8 *)(lVar18 + 0x28 + lVar20) = uVar14;
        *(longlong *)(lVar13 + 0x30) = lVar15 + 1;
        *(longlong *)(lVar13 + 0x40) = *(longlong *)(lVar13 + 0x40) + 1;
        *piVar11 = *piVar11 + 1;
      }
      uVar3 = *(ushort *)(param_3 + 0xc + lVar24);
      lVar13 = plVar7[2];
      if (lVar13 == *plVar7) {
        pdb_142d8deb0(plVar7);
      }
      uVar21 = (ulonglong)uVar3;
      *(ushort *)(plVar7[1] + lVar13 * 2) = uVar3;
      plVar7[2] = lVar13 + 1;
      uVar22 = *puVar8;
      if (uVar21 < uVar22) {
        uVar22 = uVar21;
      }
      *puVar8 = uVar22;
      uVar22 = *puVar9;
      if (uVar22 < uVar21) {
        uVar22 = uVar21;
      }
      *puVar9 = uVar22;
      if (*(ulonglong *)(lVar10 + 0x10) <= uVar21) break;
      *(undefined2 *)(*(longlong *)(lVar10 + 8) + 0xc + (ulonglong)uVar3 * 0x10) = 0;
      lVar24 = lVar24 + 0x1c;
      if (param_4 * 0x1c == lVar24) {
        return;
      }
    }
  }
  else {
    puVar6 = (undefined8 *)*param_5;
    plVar7 = (longlong *)param_5[1];
    puVar8 = (ulonglong *)param_5[2];
    puVar9 = (ulonglong *)param_5[3];
    lVar10 = param_5[4];
    uVar25 = 0;
    uVar21 = 0;
    puVar17 = param_1;
    while( true ) {
      if (param_4 <= uVar21) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_14330e6b0);
      }
      puVar23 = (uint *)(uVar21 * 0x1c + param_3);
      bVar26 = *puVar17 < *puVar23;
      bVar16 = !bVar26 && *puVar17 != *puVar23;
      if (bVar16 == bVar26) break;
      if ((char)(bVar16 - bVar26) == '\x01') {
        piVar11 = (int *)*puVar6;
        if (*piVar11 < 4) {
          plVar12 = (longlong *)puVar6[1];
          uVar4 = puVar23[6];
          uStack_50 = (undefined4)*(undefined8 *)(puVar23 + 4);
          uStack_4c = (undefined4)((ulonglong)*(undefined8 *)(puVar23 + 4) >> 0x20);
          *(undefined4 *)plVar12[2] = *(undefined4 *)((longlong)plVar12 + 0x1c);
          lVar24 = *plVar12;
          lVar13 = *(longlong *)(lVar24 + 0x30);
          uVar14 = *(undefined8 *)(lVar24 + 0x40);
          if (lVar13 == *(longlong *)(lVar24 + 0x20)) {
            pdb_142d7e7c0(lVar24 + 0x20);
          }
          lVar15 = *(longlong *)(lVar24 + 0x28);
          lVar18 = lVar13 * 0x30;
          *(undefined8 *)(lVar15 + lVar18) = 0x17;
          puVar1 = (undefined4 *)(lVar15 + 8 + lVar18);
          *puVar1 = uStack_60;
          puVar1[1] = uStack_5c;
          puVar1[2] = uStack_58;
          puVar1[3] = uStack_54;
          puVar2 = (undefined8 *)(lVar15 + 0x14 + lVar18);
          *puVar2 = CONCAT44(uStack_50,uStack_54);
          puVar2[1] = CONCAT44(uVar4,uStack_4c);
          *(undefined1 *)(lVar15 + 0x24 + lVar18) = 0;
          *(undefined8 *)(lVar15 + 0x28 + lVar18) = uVar14;
          *(longlong *)(lVar24 + 0x30) = lVar13 + 1;
          *(longlong *)(lVar24 + 0x40) = *(longlong *)(lVar24 + 0x40) + 1;
          *piVar11 = *piVar11 + 1;
        }
        uVar3 = (ushort)puVar23[3];
        lVar24 = plVar7[2];
        if (lVar24 == *plVar7) {
          pdb_142d8deb0(plVar7);
        }
        uVar19 = (ulonglong)uVar3;
        *(ushort *)(plVar7[1] + lVar24 * 2) = uVar3;
        plVar7[2] = lVar24 + 1;
        uVar22 = *puVar8;
        if (uVar19 < uVar22) {
          uVar22 = uVar19;
        }
        *puVar8 = uVar22;
        uVar22 = *puVar9;
        if (uVar22 < uVar19) {
          uVar22 = uVar19;
        }
        *puVar9 = uVar22;
        if (*(ulonglong *)(lVar10 + 0x10) <= uVar19) goto LAB_14149b46b;
        *(undefined2 *)(*(longlong *)(lVar10 + 8) + 0xc + (ulonglong)uVar3 * 0x10) = 0;
LAB_14149b27b:
        uVar21 = uVar21 + 1;
        uVar22 = uVar21;
        if (param_4 <= uVar21) goto LAB_14149b284;
      }
      else {
        uVar25 = uVar25 + 1;
        uVar22 = uVar21;
        if (param_2 <= uVar25) goto LAB_14149b284;
      }
      puVar17 = param_1 + uVar25 * 7;
      if (param_2 <= uVar25) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_14330e698);
      }
    }
    uVar25 = uVar25 + 1;
    uVar22 = uVar21 + 1;
    if (uVar25 < param_2) goto LAB_14149b27b;
LAB_14149b284:
    if (param_2 < uVar25) {
      pdb_142dc8420(uVar25,param_2,param_2,&UNK_14330e6c8);
    }
    else if (uVar22 <= param_4) {
      if (uVar22 == param_4) {
        return;
      }
      goto LAB_14149b2b3;
    }
    pdb_142dc8420(uVar22,param_4,param_4,&UNK_14330e6e0);
  }
LAB_14149b46b:
                    /* WARNING: Subroutine does not return */
  pdb_142dc81f2();
}

