// VA 0x141b029d0, PDB extent 1505 bytes
// country_core::systems::history::finish_replay::finish_replay
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/history/finish_replay.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::history::finish_replay::finish_replay
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/history/finish_replay.rs
   Extent: 1505 */

ulonglong *
pdb_141b029d0(undefined8 *param_1,undefined8 *param_2,longlong *param_3,longlong *param_4,
             longlong *param_5,longlong *param_6,longlong *param_7,longlong *param_8,
             longlong *param_9)

{
  char *pcVar1;
  uint uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  ulonglong *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong *puVar14;
  longlong lVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  ulonglong uVar19;
  undefined1 uStack_b1;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  ulonglong uStack_98;
  ulonglong uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  ulonglong *puStack_48;
  
  puVar7 = (ulonglong *)*param_1;
  if ((char)*puVar7 == '\t') {
    puVar14 = (ulonglong *)*param_5;
    uVar9 = puVar14[3];
    puStack_48 = puVar7;
    if (uVar9 == 1) {
      uVar9 = 0;
      if (*puVar14 <= puVar14[2]) {
        uVar9 = *puVar14;
      }
      if (*(char *)(puVar14[1] + (puVar14[2] - uVar9) * 4) == '\x01') {
        *(undefined4 *)param_9[2] = *(undefined4 *)((longlong)param_9 + 0x1c);
        lVar8 = *param_9;
        lVar15 = *(longlong *)(lVar8 + 0x30);
        uVar3 = *(undefined8 *)(lVar8 + 0x40);
        if (lVar15 == *(longlong *)(lVar8 + 0x20)) {
          puStack_b0 = param_1;
          pdb_142d7e8a0(lVar8 + 0x20);
          param_1 = puStack_b0;
        }
        *(undefined8 *)(*(longlong *)(lVar8 + 0x28) + lVar15 * 8) = uVar3;
        *(longlong *)(lVar8 + 0x30) = lVar15 + 1;
        *(longlong *)(lVar8 + 0x40) = *(longlong *)(lVar8 + 0x40) + 1;
        uVar9 = puVar14[3];
        goto LAB_141b02a96;
      }
LAB_141b02ac6:
      puVar7 = (ulonglong *)*param_2;
      lVar8 = param_2[1];
      uVar9 = *puVar7;
      uVar13 = 0;
      uVar19 = uVar9 - *(ulonglong *)(lVar8 + 0x18);
      if (uVar9 < *(ulonglong *)(lVar8 + 0x18)) {
        uVar19 = uVar13;
      }
      uVar10 = uVar9 - *(ulonglong *)(lVar8 + 0x38);
      if (uVar9 < *(ulonglong *)(lVar8 + 0x38)) {
        uVar10 = uVar13;
      }
      lVar15 = uVar19 * 0x10 + *(longlong *)(lVar8 + 8);
      uVar9 = *(ulonglong *)(lVar8 + 0x10);
      lVar17 = uVar10 * 0x10 + *(longlong *)(lVar8 + 0x28);
      uVar16 = uVar9 - uVar19;
      if (uVar9 < uVar19) {
        uVar16 = uVar13;
      }
      uVar4 = *(ulonglong *)(lVar8 + 0x30);
      if (uVar9 < uVar19) {
        lVar15 = 8;
        uVar19 = uVar9;
      }
      uVar11 = uVar4 - uVar10;
      if (uVar4 < uVar10) {
        lVar17 = 8;
        uVar11 = uVar13;
      }
      lVar8 = *(longlong *)(lVar8 + 0x40);
      if (uVar4 < uVar10) {
        uVar10 = uVar4;
      }
      *puVar7 = (lVar8 - uVar11) - uVar16;
      lVar12 = uVar11 * 0x10 + lVar17;
      uVar9 = ((uVar10 + lVar8 + uVar19) - uVar4) - uVar9;
      lVar8 = lVar15;
      do {
        uVar9 = uVar9 + 1;
        if ((lVar8 == 0) || (lVar8 == uVar16 * 0x10 + lVar15)) {
          if (lVar17 == 0) {
            return puVar7;
          }
          if (lVar17 == lVar12) {
            return puVar7;
          }
          lVar18 = 0;
          lVar8 = lVar17;
          lVar17 = lVar17 + 0x10;
        }
        else {
          lVar18 = lVar8 + 0x10;
        }
        *puVar7 = uVar9;
        pcVar1 = (char *)(lVar8 + 9);
        lVar8 = lVar18;
      } while (*pcVar1 != '\x03');
    }
    else {
LAB_141b02a96:
      if (((uVar9 != 0) || (*(longlong *)(*param_6 + 0x18) != 0)) ||
         (*(uint *)(*param_7 + 0x88) < 3)) goto LAB_141b02ac6;
      puVar7 = (ulonglong *)*param_2;
      lVar8 = param_2[1];
      uVar9 = *puVar7;
      uVar13 = 0;
      uVar19 = uVar9 - *(ulonglong *)(lVar8 + 0x18);
      if (uVar9 < *(ulonglong *)(lVar8 + 0x18)) {
        uVar19 = uVar13;
      }
      uVar2 = *(uint *)(*param_7 + 0x90);
      puStack_b0 = (undefined8 *)CONCAT44(puStack_b0._4_4_,uVar2);
      uVar10 = uVar9 - *(ulonglong *)(lVar8 + 0x38);
      if (uVar9 < *(ulonglong *)(lVar8 + 0x38)) {
        uVar10 = uVar13;
      }
      lVar15 = uVar19 * 0x10 + *(longlong *)(lVar8 + 8);
      uVar9 = *(ulonglong *)(lVar8 + 0x10);
      lVar17 = uVar10 * 0x10 + *(longlong *)(lVar8 + 0x28);
      uVar16 = uVar9 - uVar19;
      if (uVar9 < uVar19) {
        uVar16 = uVar13;
      }
      uVar4 = *(ulonglong *)(lVar8 + 0x30);
      if (uVar9 < uVar19) {
        lVar15 = 8;
        uVar19 = uVar9;
      }
      uVar11 = uVar4 - uVar10;
      if (uVar4 < uVar10) {
        lVar17 = 8;
        uVar11 = uVar13;
      }
      lVar8 = *(longlong *)(lVar8 + 0x40);
      if (uVar4 < uVar10) {
        uVar10 = uVar4;
      }
      *puVar7 = (lVar8 - uVar11) - uVar16;
      lVar12 = uVar11 * 0x10 + lVar17;
      uVar9 = ((uVar10 + lVar8 + uVar19) - uVar4) - uVar9;
      lVar8 = lVar15;
      do {
        uVar9 = uVar9 + 1;
        if ((lVar8 == 0) || (lVar8 == uVar16 * 0x10 + lVar15)) {
          if ((lVar17 == 0) || (lVar17 == lVar12)) {
            if (uVar2 < 3) {
              return puVar7;
            }
            break;
          }
          lVar18 = 0;
          lVar8 = lVar17;
          lVar17 = lVar17 + 0x10;
        }
        else {
          lVar18 = lVar8 + 0x10;
        }
        *puVar7 = uVar9;
        pcVar1 = (char *)(lVar8 + 9);
        lVar8 = lVar18;
      } while (*pcVar1 != '\x03');
    }
    *(undefined4 *)param_1[2] = *(undefined4 *)((longlong)param_1 + 0x1c);
    puVar5 = (undefined8 *)*param_8;
    uStack_98 = puVar5[2];
    uVar3 = *puVar5;
    puVar6 = (undefined *)puVar5[1];
    *(undefined4 *)param_3[2] = *(undefined4 *)((longlong)param_3 + 0x1c);
    lVar8 = *param_3;
    puStack_48[2] = uStack_98;
    uStack_a8._0_4_ = (undefined4)uVar3;
    uStack_a8._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
    uStack_a0._0_4_ = SUB84(puVar6,0);
    uStack_a0._4_4_ = (undefined4)((ulonglong)puVar6 >> 0x20);
    *(undefined4 *)puStack_48 = (undefined4)uStack_a8;
    *(undefined4 *)((longlong)puStack_48 + 4) = uStack_a8._4_4_;
    *(undefined4 *)(puStack_48 + 1) = (undefined4)uStack_a0;
    *(undefined4 *)((longlong)puStack_48 + 0xc) = uStack_a0._4_4_;
    uStack_a8._0_1_ = (char)uVar3;
    puVar7 = (ulonglong *)(ulonglong)(byte)((char)uStack_a8 - 1U);
    uStack_a8 = uVar3;
    uStack_a0 = puVar6;
    if ((byte)((char)uStack_a8 - 1U) < 0x10) {
      puVar7 = (ulonglong *)pdb_140ae55f0(lVar8,&uStack_a8);
    }
    else if (7 < *(ulonglong *)(lVar8 + 0x10)) {
      lVar15 = *(longlong *)(lVar8 + 8);
      puVar14 = *(ulonglong **)(lVar15 + 0xf0);
      if (puVar14 != (ulonglong *)0x0) {
        if (*(char *)(lVar8 + 0x18) == '\a') {
          uVar9 = *(longlong *)(lVar15 + 0xf8) + 1;
          if ((uVar9 | (ulonglong)puVar14) >> 0x20 == 0) {
            puVar7 = (ulonglong *)((uVar9 & 0xffffffff) / ((ulonglong)puVar14 & 0xffffffff));
            uVar9 = (uVar9 & 0xffffffff) % ((ulonglong)puVar14 & 0xffffffff);
          }
          else {
            puVar7 = (ulonglong *)(uVar9 / (ulonglong)puVar14);
            uVar9 = uVar9 % (ulonglong)puVar14;
          }
          *(ulonglong *)(lVar15 + 0xf8) = uVar9;
        }
        else {
          puVar7 = *(ulonglong **)(lVar15 + 0xf8);
          if (puVar14 <= puVar7) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2(puVar7,puVar14,&UNK_14304f650);
          }
        }
        *(undefined1 *)(lVar8 + 0x18) = 7;
      }
    }
    puVar14 = (ulonglong *)*param_4;
    if (puVar14[3] == 0) {
      return puVar7;
    }
    uVar9 = 0;
    if (*puVar14 <= puVar14[2]) {
      uVar9 = *puVar14;
    }
    puVar7 = (ulonglong *)((puVar14[2] - uVar9) * 0x38);
    if (*(longlong *)(puVar14[1] + (longlong)puVar7) != -0x7fffffffffffffff) {
      return puVar7;
    }
    if (*_DAT_143ca8e90 < 4) goto LAB_141b02f12;
    uStack_60 = 0x3d00000001;
    puStack_58 = &UNK_14338cc16;
    uStack_50 = 0x83;
  }
  else {
    puVar14 = (ulonglong *)*param_4;
    if (puVar14[3] == 0) {
      return puVar7;
    }
    uVar9 = 0;
    if (*puVar14 <= puVar14[2]) {
      uVar9 = *puVar14;
    }
    puVar7 = (ulonglong *)((puVar14[2] - uVar9) * 0x38);
    if (*(longlong *)(puVar14[1] + (longlong)puVar7) != -0x7fffffffffffffff) {
      return puVar7;
    }
    if (*_DAT_143ca8e90 < 4) goto LAB_141b02f12;
    uStack_60 = 0x1b00000001;
    puStack_58 = &UNK_14338cc84;
    uStack_50 = 0x73;
  }
  uStack_68 = 0x2d;
  puStack_70 = &UNK_14338cc57;
  uStack_78 = 4;
  uStack_80 = 0x38;
  puStack_88 = &UNK_14338cbdd;
  uStack_90 = 0;
  uStack_98 = 0x2d;
  uStack_a0 = &UNK_14338cc57;
  uStack_a8 = 0;
  pdb_140f332f0(&uStack_b1,&uStack_a8);
LAB_141b02f12:
  *(undefined4 *)param_4[2] = *(undefined4 *)((longlong)param_4 + 0x1c);
  if (puVar14[3] == 0) {
    uStack_a8 = 0x8000000000000015;
  }
  else {
    uVar9 = puVar14[2];
    uVar19 = puVar14[1];
    uVar13 = 0;
    if (*puVar14 <= uVar9 + 1) {
      uVar13 = *puVar14;
    }
    puVar14[2] = (uVar9 - uVar13) + 1;
    puVar14[3] = puVar14[3] - 1;
    lVar8 = uVar9 * 0x38;
    uStack_a8 = *(undefined8 *)(uVar19 + lVar8);
    uStack_a0 = (undefined *)((undefined8 *)(uVar19 + lVar8))[1];
    puVar7 = (ulonglong *)(uVar19 + 0x10 + lVar8);
    uStack_98 = *puVar7;
    uStack_90 = puVar7[1];
    puVar5 = (undefined8 *)(uVar19 + 0x20 + lVar8);
    puStack_88 = (undefined *)*puVar5;
    uStack_80 = puVar5[1];
    uStack_78 = *(undefined8 *)(uVar19 + 0x30 + lVar8);
  }
  puVar7 = (ulonglong *)pdb_141b03860(&uStack_a8);
  return puVar7;
}

