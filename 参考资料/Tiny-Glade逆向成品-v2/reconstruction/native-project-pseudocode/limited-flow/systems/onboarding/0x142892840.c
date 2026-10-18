// VA 0x142892840, PDB extent 1937 bytes
// system_onboarding::hint_focused_edit::hint_focused_edit_hint
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/onboarding/src/hint_focused_edit.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_onboarding::hint_focused_edit::hint_focused_edit_hint
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/onboarding/src/hint_focused_edit.rs
   Extent: 1937 */

void pdb_142892840(undefined8 *param_1,longlong *param_2,longlong *param_3,undefined8 *param_4,
                  longlong param_5,undefined8 *param_6,longlong *param_7,longlong *param_8)

{
  uint *puVar1;
  undefined4 uVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  longlong lVar8;
  undefined2 uVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  uint *puVar14;
  undefined8 uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 uStack_128;
  int aiStack_118 [4];
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 uStack_f8;
  int iStack_d4;
  uint auStack_b8 [12];
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  puVar3 = (ulonglong *)*param_3;
  if ((char)puVar3[1] == '\0') {
    puVar4 = (ulonglong *)*param_4;
    lVar5 = param_4[1];
    uVar10 = *puVar4;
    uVar21 = 0;
    uVar22 = uVar10 - *(ulonglong *)(lVar5 + 0x18);
    if (uVar10 < *(ulonglong *)(lVar5 + 0x18)) {
      uVar22 = uVar21;
    }
    uVar16 = uVar10 - *(ulonglong *)(lVar5 + 0x38);
    if (uVar10 < *(ulonglong *)(lVar5 + 0x38)) {
      uVar16 = uVar21;
    }
    uVar10 = *(ulonglong *)(lVar5 + 0x30);
    uVar17 = uVar10 - uVar16;
    if (uVar10 < uVar16) {
      uVar17 = uVar21;
    }
    uVar6 = *(ulonglong *)(lVar5 + 0x10);
    uVar20 = uVar6 - uVar22;
    if (uVar6 < uVar22) {
      uVar20 = uVar21;
    }
    uVar21 = *(ulonglong *)(lVar5 + 0x40);
    *puVar4 = uVar21 - (uVar20 + uVar17);
    if (uVar6 >= uVar22 && uVar6 - uVar22 != 0 || uVar10 >= uVar16 && uVar10 - uVar16 != 0) {
      *puVar4 = uVar21;
      uVar2 = *(undefined4 *)((longlong)param_3 + 0x1c);
      puVar7 = (undefined4 *)param_3[2];
      *puVar7 = uVar2;
      uVar10 = *puVar3;
      *puVar3 = uVar10 + 1;
      *puVar7 = uVar2;
      *(bool *)((longlong)puVar3 + 9) = 4 < uVar10 + 1;
    }
  }
  lVar5 = *param_2;
  if (*(longlong *)(lVar5 + 0x100) != 0) {
    puVar14 = *(uint **)(lVar5 + 0xf8);
    puVar1 = puVar14 + *(longlong *)(lVar5 + 0x100);
    lVar8 = param_2[1];
    if (*(char *)(lVar5 + 0x108) == '\0') {
      lVar13 = *(longlong *)(lVar8 + 0x100);
      lVar12 = 0;
      do {
        lVar18 = (ulonglong)*puVar14 * 0xa0;
        uVar22 = (ulonglong)*(uint *)(lVar13 + 0x94 + lVar18);
        lVar19 = *(longlong *)(lVar8 + 0x1a0) + uVar22 * 0x48;
        uVar10 = *(ulonglong *)(lVar13 + 0x58 + lVar18);
        uVar11 = (uint)uVar10;
        if (*(uint *)(*(longlong *)(lVar8 + 0x1a0) + 0x10 + uVar22 * 0x48) == uVar11) {
          if (uVar10 != 0) {
            if ((*(ulonglong *)(lVar5 + 0x110) < *(ulonglong *)(lVar19 + 0x40)) &&
               (uVar22 = *(ulonglong *)
                          (*(longlong *)(lVar19 + 0x38) + *(ulonglong *)(lVar5 + 0x110) * 8),
               uVar22 != 0)) {
              lVar19 = *(longlong *)(*(longlong *)(lVar19 + 0x18) + 0x10 + ~uVar22 * 0x30);
            }
            else {
              lVar19 = 0;
            }
            if (uVar11 != 0) {
              uVar22 = (ulonglong)(uVar11 & 7);
              if ((uVar10 & 0xffffffff) - 1 < 7) {
                uVar10 = 0;
LAB_142892b60:
                do {
                  uVar21 = uVar10;
                  uVar22 = uVar22 - 1;
                  uVar10 = uVar21 + 1;
                } while (uVar22 != 0);
              }
              else {
                uVar10 = 0;
                do {
                  uVar21 = uVar10;
                  uVar10 = uVar21 + 8;
                } while ((uVar11 & 0xfffffff8) != uVar10);
                if (uVar22 != 0) goto LAB_142892b60;
                uVar21 = uVar21 + 7;
              }
              lVar12 = lVar19 + uVar21 * 0x58;
            }
          }
        }
        else if (uVar10 != 0) {
          if ((*(ulonglong *)(lVar5 + 0x110) < *(ulonglong *)(lVar19 + 0x40)) &&
             (uVar22 = *(ulonglong *)
                        (*(longlong *)(lVar19 + 0x38) + *(ulonglong *)(lVar5 + 0x110) * 8),
             uVar22 != 0)) {
            lVar19 = *(longlong *)(*(longlong *)(lVar19 + 0x18) + 0x10 + ~uVar22 * 0x30);
          }
          else {
            lVar19 = 0;
          }
          if (uVar11 != 0) {
            uVar22 = (ulonglong)(uVar11 & 7);
            if ((uVar10 & 0xffffffff) - 1 < 7) {
              uVar10 = 0;
LAB_142892b90:
              do {
                uVar21 = uVar10;
                uVar22 = uVar22 - 1;
                uVar10 = uVar21 + 1;
              } while (uVar22 != 0);
            }
            else {
              uVar10 = 0;
              do {
                uVar21 = uVar10;
                uVar10 = uVar21 + 8;
              } while ((uVar11 & 0xfffffff8) != uVar10);
              if (uVar22 != 0) goto LAB_142892b90;
              uVar21 = uVar21 + 7;
            }
            lVar12 = lVar19 + (ulonglong)
                              ~*(uint *)(*(longlong *)(lVar18 + lVar13 + 0x50) + 8 + uVar21 * 0x10)
                              * 0x58;
          }
        }
        puVar14 = puVar14 + 1;
      } while (puVar14 != puVar1);
    }
    else {
      lVar12 = 0;
      do {
        uVar10 = *(ulonglong *)(*(longlong *)(lVar8 + 0x1a0) + 0x10 + (ulonglong)*puVar14 * 0x48);
        if (uVar10 != 0) {
          lVar13 = *(longlong *)(lVar8 + 0x1a0) + (ulonglong)*puVar14 * 0x48;
          if ((*(ulonglong *)(lVar5 + 0x110) < *(ulonglong *)(lVar13 + 0x40)) &&
             (uVar22 = *(ulonglong *)
                        (*(longlong *)(lVar13 + 0x38) + *(ulonglong *)(lVar5 + 0x110) * 8),
             uVar22 != 0)) {
            lVar13 = *(longlong *)(*(longlong *)(lVar13 + 0x18) + 0x10 + ~uVar22 * 0x30);
          }
          else {
            lVar13 = 0;
          }
          if ((uVar10 & 0xffffffff) != 0) {
            uVar11 = (uint)uVar10;
            uVar10 = (ulonglong)(uVar11 & 7);
            if (uVar11 < 8) {
              uVar22 = 0;
LAB_1428929f0:
              do {
                uVar21 = uVar22;
                uVar10 = uVar10 - 1;
                uVar22 = uVar21 + 1;
              } while (uVar10 != 0);
            }
            else {
              uVar22 = 0;
              do {
                uVar21 = uVar22;
                uVar22 = uVar21 + 8;
              } while ((uVar11 & 0xfffffff8) != uVar22);
              if (uVar10 != 0) goto LAB_1428929f0;
              uVar21 = uVar21 + 7;
            }
            lVar12 = lVar13 + uVar21 * 0x58;
          }
        }
        puVar14 = puVar14 + 1;
      } while (puVar14 != puVar1);
    }
    if (((lVar12 != 0) && (*(char *)*param_1 == '\0')) && (*(int *)((char *)*param_1 + 8) == 0)) {
      puVar7 = (undefined4 *)*param_7;
      uStack_128 = *(undefined8 *)(puVar7 + 4);
      uStack_138 = *puVar7;
      uStack_134 = puVar7[1];
      uStack_130 = puVar7[2];
      uStack_12c = puVar7[3];
      pdb_1409efbd0(&uStack_108,*param_6,&uStack_138,_DAT_142e36f3c,0x51fb);
      if (iStack_d4 != 2) {
        uStack_78 = uStack_f8;
        uStack_88 = uStack_108;
        uStack_84 = uStack_104;
        uStack_80 = uStack_100;
        uStack_7c = uStack_fc;
        pdb_140b4d8a0(aiStack_118,&uStack_88);
        if (aiStack_118[0] - 1U < 2) {
          lVar5 = *param_8;
          uVar9 = pdb_140a44d70(1);
          uStack_104 = CONCAT22(uStack_104._2_2_,uVar9);
          uStack_108 = 0xca;
          uVar15 = 0;
          if (*(longlong *)(lVar5 + 0x280) != 0) {
            uVar15 = *(undefined8 *)(lVar5 + 0x278);
          }
          pdb_1420c0500(auStack_b8,&uStack_108,uVar15);
          **(undefined4 **)(param_5 + 0x10) = *(undefined4 *)(param_5 + 0x1c);
          uVar10 = 4;
          if (0xc4 < auStack_b8[0]) {
            uVar10 = (ulonglong)(auStack_b8[0] - 0xc5);
          }
                    /* WARNING: Could not recover jumptable at 0x000142892cc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(&UNK_1435ac33c + *(int *)(&UNK_1435ac33c + uVar10 * 4)))
                    (&UNK_1435ac33c + *(int *)(&UNK_1435ac33c + uVar10 * 4));
          return;
        }
      }
    }
  }
  return;
}

