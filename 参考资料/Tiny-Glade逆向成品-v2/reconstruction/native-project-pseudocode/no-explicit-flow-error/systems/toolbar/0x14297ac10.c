// VA 0x14297ac10, PDB extent 1561 bytes
// toolbar::ui_interaction::ui_focus_animation
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/ui_interaction.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: toolbar::ui_interaction::ui_focus_animation
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/ui_interaction.rs
   Extent: 1561 */

void pdb_14297ac10(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  float fVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined4 *puVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  float fVar15;
  float fVar16;
  longlong lStack_158;
  undefined4 *puStack_150;
  longlong lStack_148;
  longlong lStack_140;
  longlong lStack_138;
  uint *puStack_100;
  uint *puStack_f8;
  longlong lStack_e0;
  char cStack_c8;
  char cStack_b8;
  longlong lStack_b0;
  longlong lStack_a8;
  undefined4 *puStack_98;
  undefined4 uStack_8c;
  longlong lStack_88;
  char cStack_80;
  uint uStack_78;
  uint uStack_74;
  byte bStack_70;
  
  lVar2 = *param_1;
  lVar3 = param_1[1];
  pdb_142b53c60(&puStack_100,lVar3,lVar2,(int)param_1[2],*(undefined4 *)((longlong)param_1 + 0x14));
  fVar6 = _DAT_142e36f28;
  lStack_138 = lStack_e0;
  lStack_158 = lStack_b0;
  lStack_148 = lStack_a8;
  puStack_150 = puStack_98;
  lStack_140 = lStack_88;
  uVar10 = (ulonglong)uStack_78;
  do {
    if ((bStack_70 & 1) == 0) {
      if (uStack_74 != (uint)uVar10) {
        uVar5 = ~*(uint *)(lStack_138 + 8 + (ulonglong)uStack_74 * 0x10);
        goto LAB_14297ae82;
      }
      if (puStack_100 == puStack_f8) {
        return;
      }
      while( true ) {
        uVar10 = *(ulonglong *)
                  (*(longlong *)(lVar3 + 0x100) + 0x58 + (ulonglong)*puStack_100 * 0xa0);
        if (uVar10 != 0) break;
        puStack_100 = puStack_100 + 1;
        if (puStack_100 == puStack_f8) {
          return;
        }
      }
      lVar8 = *(longlong *)(lVar3 + 0x100) + (ulonglong)*puStack_100 * 0xa0;
      uVar7 = (ulonglong)*(uint *)(lVar8 + 0x94);
      lVar13 = *(longlong *)(lVar3 + 0x1a0);
      lVar9 = lVar13 + uVar7 * 0x48;
      lVar4 = *(longlong *)(lVar13 + 0x38 + uVar7 * 0x48);
      uVar7 = *(ulonglong *)(lVar13 + 0x40 + uVar7 * 0x48);
      if (*(ulonglong *)(lVar2 + 0x110) < uVar7) {
        uVar12 = *(ulonglong *)(lVar4 + *(ulonglong *)(lVar2 + 0x110) * 8);
        lVar9 = *(longlong *)(lVar9 + 0x18);
        if (uVar12 == 0) goto LAB_14297b0e4;
        lStack_158 = *(longlong *)(lVar9 + 0x10 + ~uVar12 * 0x30);
        uVar12 = *(ulonglong *)(lVar2 + 0x120);
        uVar14 = *(ulonglong *)(lVar8 + 0x88);
        if (uVar12 < uVar14) goto LAB_14297b104;
LAB_14297afe3:
        cStack_c8 = false;
        uVar12 = *(ulonglong *)(lVar2 + 0x128);
        if (uVar14 <= uVar12) goto LAB_14297b129;
LAB_14297affb:
        cStack_b8 = *(longlong *)(*(longlong *)(lVar8 + 0x80) + uVar12 * 8) != 0;
      }
      else {
        lVar9 = *(longlong *)(lVar9 + 0x18);
LAB_14297b0e4:
        lStack_158 = 0;
        uVar12 = *(ulonglong *)(lVar2 + 0x120);
        uVar14 = *(ulonglong *)(lVar8 + 0x88);
        if (uVar14 <= uVar12) goto LAB_14297afe3;
LAB_14297b104:
        cStack_c8 = *(longlong *)(*(longlong *)(lVar8 + 0x80) + uVar12 * 8) != 0;
        uVar12 = *(ulonglong *)(lVar2 + 0x128);
        if (uVar12 < uVar14) goto LAB_14297affb;
LAB_14297b129:
        cStack_b8 = false;
      }
      puStack_100 = puStack_100 + 1;
      lVar13 = ~*(ulonglong *)(lVar4 + *(longlong *)(lVar2 + 0x118) * 8) * 0x30;
      lStack_148 = *(longlong *)(lVar9 + 0x10 + lVar13);
      puStack_150 = *(undefined4 **)(lVar9 + 0x28 + lVar13);
      uVar12 = *(ulonglong *)(lVar2 + 0x130);
      if ((uVar12 < uVar14) && (*(longlong *)(*(longlong *)(lVar8 + 0x80) + uVar12 * 8) != 0)) {
        if ((uVar12 < uVar7) && (uVar7 = *(ulonglong *)(lVar4 + uVar12 * 8), uVar7 != 0)) {
          lStack_140 = *(longlong *)(lVar9 + 0x10 + ~uVar7 * 0x30);
        }
        else {
          lStack_140 = 0;
        }
        lStack_138 = *(longlong *)(lVar8 + 0x50);
        uVar7 = (ulonglong)~*(uint *)(lStack_138 + 8);
        lVar13 = uVar7 * 0x10 + lStack_158;
        lVar9 = lStack_148 + uVar7 * 0x14;
        puVar11 = puStack_150 + uVar7;
        uStack_74 = 0;
        goto LAB_14297aeae;
      }
      lStack_138 = *(longlong *)(lVar8 + 0x50);
      uVar7 = (ulonglong)~*(uint *)(lStack_138 + 8);
      puVar11 = puStack_150 + uVar7;
      lVar13 = uVar7 * 0x10 + lStack_158;
      lVar9 = lStack_148 + uVar7 * 0x14;
      uStack_74 = 0;
LAB_14297ad5c:
      fVar16 = *(float *)(&UNK_143607200 + (ulonglong)(cStack_b8 == '\0' && cStack_c8 == '\0') * 4);
      cStack_80 = '\0';
    }
    else {
      uVar5 = uStack_74;
      if (uStack_74 == (uint)uVar10) {
        if (puStack_100 == puStack_f8) {
          return;
        }
        while( true ) {
          uVar10 = *(ulonglong *)
                    (*(longlong *)(lVar3 + 0x1a0) + 0x10 + (ulonglong)*puStack_100 * 0x48);
          if (uVar10 != 0) break;
          puStack_100 = puStack_100 + 1;
          if (puStack_100 == puStack_f8) {
            return;
          }
        }
        lVar9 = *(longlong *)(lVar3 + 0x1a0) + (ulonglong)*puStack_100 * 0x48;
        lVar4 = *(longlong *)(lVar9 + 0x38);
        uVar7 = *(ulonglong *)(lVar9 + 0x40);
        if (*(ulonglong *)(lVar2 + 0x110) < uVar7) {
          uVar12 = *(ulonglong *)(lVar4 + *(ulonglong *)(lVar2 + 0x110) * 8);
          lVar8 = *(longlong *)(lVar9 + 0x18);
          if (uVar12 == 0) {
            uVar12 = *(ulonglong *)(lVar2 + 0x120);
            goto joined_r0x00014297b02c;
          }
          lStack_158 = *(longlong *)(lVar8 + 0x10 + ~uVar12 * 0x30);
          uVar12 = *(ulonglong *)(lVar2 + 0x120);
          if (uVar12 < uVar7) goto LAB_14297b032;
LAB_14297af44:
          cStack_c8 = false;
          uVar12 = *(ulonglong *)(lVar2 + 0x128);
          if (uVar7 <= uVar12) goto LAB_14297b050;
LAB_14297af5c:
          cStack_b8 = *(longlong *)(lVar4 + uVar12 * 8) != 0;
        }
        else {
          lVar8 = *(longlong *)(lVar9 + 0x18);
          uVar12 = *(ulonglong *)(lVar2 + 0x120);
joined_r0x00014297b02c:
          lStack_158 = 0;
          if (uVar7 <= uVar12) goto LAB_14297af44;
LAB_14297b032:
          cStack_c8 = *(longlong *)(lVar4 + uVar12 * 8) != 0;
          uVar12 = *(ulonglong *)(lVar2 + 0x128);
          if (uVar12 < uVar7) goto LAB_14297af5c;
LAB_14297b050:
          cStack_b8 = false;
        }
        puStack_100 = puStack_100 + 1;
        lVar13 = ~*(ulonglong *)(lVar4 + *(longlong *)(lVar2 + 0x118) * 8) * 0x30;
        lVar9 = *(longlong *)(lVar8 + 0x10 + lVar13);
        puVar11 = *(undefined4 **)(lVar8 + 0x28 + lVar13);
        lVar13 = lStack_158;
        puStack_150 = puVar11;
        lStack_148 = lVar9;
        if ((uVar7 <= *(ulonglong *)(lVar2 + 0x130)) ||
           (uVar7 = *(ulonglong *)(lVar4 + *(ulonglong *)(lVar2 + 0x130) * 8), uVar7 == 0)) {
          uStack_74 = 0;
          goto LAB_14297ad5c;
        }
        lStack_140 = *(longlong *)(lVar8 + 0x10 + ~uVar7 * 0x30);
        uVar7 = 0;
        uStack_74 = 0;
      }
      else {
LAB_14297ae82:
        uVar7 = (ulonglong)uVar5;
        lVar13 = uVar7 * 0x10 + lStack_158;
        lVar9 = lStack_148 + uVar7 * 0x14;
        puVar11 = puStack_150 + uVar7;
        if (cStack_80 != '\x01') goto LAB_14297ad5c;
      }
LAB_14297aeae:
      piVar1 = (int *)(lStack_140 + uVar7 * 8);
      fVar16 = *(float *)(&UNK_143607200 + (ulonglong)(cStack_b8 == '\0' && cStack_c8 == '\0') * 4);
      cStack_80 = '\x01';
      if ((piVar1 != (int *)0x0) && (cStack_80 = '\x01', *piVar1 == 1)) {
        fVar16 = (float)piVar1[1];
      }
    }
    uStack_74 = uStack_74 + 1;
    fVar15 = (float)pdb_140dedcd0(&UNK_143607840,*(undefined4 *)(lVar13 + 4));
    *puVar11 = uStack_8c;
    *(float *)(lVar9 + 0x10) = (fVar16 * fVar15 + (fVar6 - fVar15)) * *(float *)(lVar9 + 0x10);
  } while( true );
}

