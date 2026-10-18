// VA 0x14297ba90, PDB extent 1540 bytes
// toolbar::ui_interaction::ui_select_animation
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/ui_interaction.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: toolbar::ui_interaction::ui_select_animation
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/ui_interaction.rs
   Extent: 1540 */

void pdb_14297ba90(longlong *param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  char cVar9;
  uint uVar10;
  longlong lVar11;
  undefined4 *puVar12;
  byte bVar13;
  longlong *plVar14;
  ulonglong uVar15;
  float *pfVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  byte *pbVar19;
  longlong lVar20;
  undefined8 uVar21;
  uint *puVar22;
  char cVar23;
  float fVar24;
  float fVar25;
  longlong lStack_1e0;
  ulonglong uStack_1d0;
  longlong lStack_1b8;
  longlong lStack_1b0;
  longlong lStack_1a8;
  longlong lStack_1a0;
  longlong lStack_188;
  uint *puStack_138;
  uint *puStack_130;
  longlong lStack_128;
  longlong lStack_118;
  longlong lStack_108;
  byte bStack_100;
  longlong lStack_f8;
  longlong lStack_e8;
  undefined4 uStack_dc;
  longlong lStack_d8;
  undefined4 uStack_bc;
  longlong lStack_b8;
  longlong lStack_a8;
  undefined4 uStack_9c;
  char cStack_90;
  uint uStack_88;
  uint uStack_84;
  byte bStack_80;
  
  lVar2 = *param_1;
  lVar3 = param_1[1];
  pdb_142b53b80(&puStack_138,lVar3,lVar2,(int)param_1[2],*(undefined4 *)((longlong)param_1 + 0x14));
  fVar8 = _DAT_142e3b1d8;
  fVar7 = _DAT_142e37adc;
  fVar6 = _DAT_142e36f28;
  plVar14 = *(longlong **)(param_2 + 8);
  if (plVar14 == (longlong *)0x0) {
    plVar14 = *(longlong **)(param_2 + 0x10);
  }
  lStack_188 = lStack_118;
  lStack_1e0 = lStack_108;
  lStack_1a0 = lStack_f8;
  lStack_1a8 = lStack_e8;
  lStack_1b0 = lStack_b8;
  lStack_1b8 = lStack_a8;
  lVar4 = *param_3;
  uVar17 = (ulonglong)uStack_88;
  uVar18 = (ulonglong)uStack_84;
  puVar22 = puStack_138;
  cVar23 = cStack_90;
  bVar13 = bStack_100;
LAB_14297bc48:
  uStack_1d0 = uVar18;
  if ((bStack_80 & 1) == 0) {
    if ((int)uVar18 == (int)uVar17) {
      if (puVar22 == puStack_130) {
        return;
      }
      while( true ) {
        uVar17 = *(ulonglong *)(*(longlong *)(lVar3 + 0x100) + 0x58 + (ulonglong)*puVar22 * 0xa0);
        if (uVar17 != 0) break;
        puVar22 = puVar22 + 1;
        if (puVar22 == puStack_130) {
          return;
        }
      }
      lVar11 = *(longlong *)(lVar3 + 0x100) + (ulonglong)*puVar22 * 0xa0;
      uVar15 = (ulonglong)*(uint *)(lVar11 + 0x94);
      lVar20 = *(longlong *)(lVar3 + 0x1a0);
      lVar1 = *(longlong *)(lVar20 + 0x18 + uVar15 * 0x48);
      lVar5 = *(longlong *)(lVar20 + 0x38 + uVar15 * 0x48);
      uVar18 = *(ulonglong *)(lVar2 + 0x128);
      if ((uVar18 < *(ulonglong *)(lVar11 + 0x88)) &&
         (*(longlong *)(*(longlong *)(lVar11 + 0x80) + uVar18 * 8) != 0)) {
        bVar13 = 1;
        if (uVar18 < *(ulonglong *)(lVar20 + 0x40 + uVar15 * 0x48)) {
          uVar18 = *(ulonglong *)(lVar5 + uVar18 * 8);
          if (uVar18 == 0) {
            lStack_1e0 = 0;
          }
          else {
            lStack_1e0 = *(longlong *)(lVar1 + 0x10 + ~uVar18 * 0x30);
          }
        }
        else {
          lStack_1e0 = 0;
        }
      }
      else {
        bVar13 = 0;
      }
      cVar23 = false;
      if (*(ulonglong *)(lVar2 + 0x130) < *(ulonglong *)(lVar11 + 0x88)) {
        cVar23 = *(longlong *)(*(longlong *)(lVar11 + 0x80) + *(ulonglong *)(lVar2 + 0x130) * 8) !=
                 0;
      }
      uStack_1d0 = 0;
      lVar20 = ~*(ulonglong *)(lVar5 + *(longlong *)(lVar2 + 0x110) * 8) * 0x30;
      lStack_1a0 = *(longlong *)(lVar1 + 0x10 + lVar20);
      lStack_1a8 = *(longlong *)(lVar1 + 0x28 + lVar20);
      lVar20 = ~*(ulonglong *)(lVar5 + *(longlong *)(lVar2 + 0x120) * 8) * 0x30;
      lStack_1b0 = *(longlong *)(lVar1 + 0x10 + lVar20);
      lStack_1b8 = *(longlong *)(lVar1 + 0x28 + lVar20);
      puVar22 = puVar22 + 1;
      lStack_188 = *(longlong *)(lVar11 + 0x50);
    }
    puVar12 = (undefined4 *)(uStack_1d0 * 0x10);
    uVar21 = *(undefined8 *)(lStack_188 + (longlong)puVar12);
    uVar18 = (ulonglong)~*(uint *)(lStack_188 + 8 + (longlong)puVar12);
    lVar20 = uVar18 * 5;
    if ((ulonglong)~(uint)uVar21 < *(ulonglong *)(lStack_d8 + 0x88)) {
      uVar10 = *(uint *)(*(longlong *)(lStack_d8 + 0x80) + (ulonglong)~(uint)uVar21 * 4);
      puVar12 = (undefined4 *)(ulonglong)uVar10;
      if (uVar10 != 0) goto LAB_14297be7e;
    }
LAB_14297bea0:
    pfVar16 = (float *)0x0;
  }
  else {
    if ((int)uVar18 == (int)uVar17) {
      return;
    }
    uVar21 = *(undefined8 *)(lStack_128 + uVar18 * 8);
    puVar12 = (undefined4 *)(ulonglong)~(uint)uVar21;
    lVar20 = uVar18 * 5;
    if (*(undefined4 **)(lStack_d8 + 0x88) <= puVar12) goto LAB_14297bea0;
    uVar10 = *(uint *)(*(longlong *)(lStack_d8 + 0x80) + (longlong)puVar12 * 4);
    if (uVar10 == 0) {
      puVar12 = (undefined4 *)0x0;
      goto LAB_14297bea0;
    }
LAB_14297be7e:
    pfVar16 = (float *)(*(longlong *)(lStack_d8 + 8) * (ulonglong)~uVar10 +
                       *(longlong *)(lStack_d8 + 0x10));
    puVar12 = (undefined4 *)((ulonglong)~uVar10 * 4 + *(longlong *)(lStack_d8 + 0x50));
  }
  lVar1 = lStack_1a0 + lVar20 * 4;
  lVar5 = uVar18 * 3;
  lVar20 = uVar18 * 4;
  pbVar19 = (byte *)(uVar18 + lStack_1e0);
  if ((bVar13 & 1) == 0) {
    pbVar19 = (byte *)0x0;
  }
  if ((int)uVar21 == 0) {
    return;
  }
  fVar25 = *(float *)(lVar4 + 0x58);
  fVar24 = pfVar16[1];
  *puVar12 = uStack_bc;
  fVar24 = fVar25 / fVar24 + pfVar16[2];
  fVar25 = 0.0;
  if (0.0 <= fVar24) {
    fVar25 = fVar24;
  }
  fVar24 = fVar6;
  if (fVar25 <= fVar6) {
    fVar24 = fVar25;
  }
  pfVar16[2] = fVar24;
  fVar24 = (fVar6 - fVar24) * fVar8 + fVar24;
  fVar24 = fVar24 * fVar7 * (fVar6 - fVar24);
  fVar25 = *pfVar16;
  *(undefined4 *)(lStack_1a8 + uVar18 * 4) = uStack_dc;
  *(float *)(lVar1 + 0x10) = (fVar24 * fVar24 * fVar25 + fVar6) * *(float *)(lVar1 + 0x10);
  fVar25 = pfVar16[2];
  if ((fVar25 == fVar6) && (!NAN(fVar25) && !NAN(fVar6))) {
    lVar1 = plVar14[2];
    if ((ulonglong)(*plVar14 - lVar1) < 0x18) {
      pdb_142d7f1b0(fVar25,lVar1,0x18,1,1);
    }
    lVar11 = plVar14[1];
    *(code **)(lVar11 + lVar1) = pdb_1411af020;
    *(undefined8 *)(lVar11 + 8 + lVar1) = uVar21;
    *(code **)(lVar11 + 0x10 + lVar1) = pdb_1411af610;
    plVar14[2] = lVar1 + 0x18;
  }
  uVar18 = (ulonglong)((int)uStack_1d0 + 1);
  if (pbVar19 == (byte *)0x0) goto LAB_14297bfd9;
  cVar9 = *pbVar19 - 4;
  if (*pbVar19 < 4) {
    cVar9 = '\x02';
  }
  if ((cVar9 != '\0') && (cVar9 != '\x05')) goto LAB_14297bfd9;
  goto LAB_14297bc30;
LAB_14297bfd9:
  if (cVar23 == '\x01') {
LAB_14297bc30:
    fVar25 = pfVar16[2];
    fVar24 = pfVar16[2];
    *(undefined4 *)(lStack_1b8 + lVar20) = uStack_9c;
    *(bool *)(lVar5 + lStack_1b0 + 2) = fVar24 <= fVar6 && fVar6 != fVar25;
  }
  goto LAB_14297bc48;
}

