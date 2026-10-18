// VA 0x1420ee450, PDB extent 900 bytes
// system_onboarding::hint_display_system::hint_animation_system
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/onboarding/src/hint_display_system.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_onboarding::hint_display_system::hint_animation_system
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/onboarding/src/hint_display_system.rs
   Extent: 900 */

void pdb_1420ee450(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  uint uVar7;
  float fVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong unaff_RSI;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  uint *puVar16;
  bool bVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  longlong lStack_88;
  
  fVar8 = _DAT_142e37988;
  uVar7 = _DAT_142e37820;
  fVar6 = _DAT_142e36f28;
  lVar3 = *param_1;
  lVar4 = param_1[1];
  uVar2 = *(undefined4 *)((longlong)param_1 + 0x14);
  puVar16 = *(uint **)(lVar3 + 0xf8);
  puVar1 = puVar16 + *(longlong *)(lVar3 + 0x100);
  lVar5 = *param_2;
  if (*(char *)(lVar3 + 0x108) == '\0') {
    lVar15 = 0;
    lStack_88 = 8;
    bVar17 = false;
    lVar14 = 0;
    uVar13 = 0;
    do {
      if (uVar13 == (uint)lVar15) {
        if (puVar16 == puVar1) {
          return;
        }
        while( true ) {
          lVar15 = *(longlong *)(*(longlong *)(lVar4 + 0x100) + 0x58 + (ulonglong)*puVar16 * 0xa0);
          if (lVar15 != 0) break;
          puVar16 = puVar16 + 1;
          if (puVar16 == puVar1) {
            return;
          }
        }
        lVar11 = *(longlong *)(lVar4 + 0x100) + (ulonglong)*puVar16 * 0xa0;
        if (*(ulonglong *)(lVar3 + 0x118) < *(ulonglong *)(lVar11 + 0x88)) {
          bVar17 = *(longlong *)(*(longlong *)(lVar11 + 0x80) + *(ulonglong *)(lVar3 + 0x118) * 8)
                   != 0;
        }
        else {
          bVar17 = false;
        }
        lVar9 = *(longlong *)
                 (*(longlong *)(lVar4 + 0x1a0) + 0x18 + (ulonglong)*(uint *)(lVar11 + 0x94) * 0x48);
        lVar12 = ~*(ulonglong *)
                   (*(longlong *)
                     (*(longlong *)(lVar4 + 0x1a0) + 0x38 +
                     (ulonglong)*(uint *)(lVar11 + 0x94) * 0x48) + *(longlong *)(lVar3 + 0x110) * 8)
                 * 0x30;
        lVar14 = *(longlong *)(lVar9 + 0x10 + lVar12);
        unaff_RSI = *(longlong *)(lVar9 + 0x28 + lVar12);
        puVar16 = puVar16 + 1;
        lStack_88 = *(longlong *)(lVar11 + 0x50);
        uVar13 = 1;
        uVar10 = 0;
      }
      else {
        uVar10 = (ulonglong)uVar13;
        uVar13 = uVar13 + 1;
      }
      uVar10 = (ulonglong)~*(uint *)(lStack_88 + 8 + uVar10 * 0x10);
      fVar19 = *(float *)(lVar5 + 0x58) / fVar8;
      *(undefined4 *)(unaff_RSI + uVar10 * 4) = uVar2;
      if (bVar17) {
        fVar19 = (float)((uint)fVar19 ^ uVar7);
      }
      fVar19 = fVar19 + *(float *)(lVar14 + uVar10 * 0xc);
      fVar20 = 0.0;
      if (0.0 <= fVar19) {
        fVar20 = fVar19;
      }
      fVar19 = fVar6;
      if (fVar20 <= fVar6) {
        fVar19 = fVar20;
      }
      *(float *)(lVar14 + uVar10 * 0xc) = fVar19;
      uVar18 = pdb_140dedcd0(&UNK_14345b058);
      *(undefined4 *)(unaff_RSI + uVar10 * 4) = uVar2;
      *(undefined4 *)(lVar14 + 4 + uVar10 * 0xc) = uVar18;
      fVar19 = *(float *)(lVar5 + 0x58);
      *(undefined4 *)(unaff_RSI + uVar10 * 4) = uVar2;
      *(float *)(lVar14 + 8 + uVar10 * 0xc) = fVar19 + *(float *)(lVar14 + 8 + uVar10 * 0xc);
    } while( true );
  }
  lVar15 = 0;
  bVar17 = false;
  lVar14 = 0;
  uVar13 = 0;
  do {
    if (uVar13 == (uint)lVar15) {
      if (puVar16 == puVar1) {
        return;
      }
      while( true ) {
        lVar15 = *(longlong *)(*(longlong *)(lVar4 + 0x1a0) + 0x10 + (ulonglong)*puVar16 * 0x48);
        if (lVar15 != 0) break;
        puVar16 = puVar16 + 1;
        if (puVar16 == puVar1) {
          return;
        }
      }
      lVar11 = *(longlong *)(lVar4 + 0x1a0) + (ulonglong)*puVar16 * 0x48;
      uVar13 = 0;
      bVar17 = false;
      if (*(ulonglong *)(lVar3 + 0x118) < *(ulonglong *)(lVar11 + 0x40)) {
        bVar17 = *(longlong *)(*(longlong *)(lVar11 + 0x38) + *(ulonglong *)(lVar3 + 0x118) * 8) !=
                 0;
      }
      lVar9 = ~*(ulonglong *)(*(longlong *)(lVar11 + 0x38) + *(longlong *)(lVar3 + 0x110) * 8) *
              0x30;
      lVar14 = *(longlong *)(*(longlong *)(lVar11 + 0x18) + 0x10 + lVar9);
      unaff_RSI = *(longlong *)(*(longlong *)(lVar11 + 0x18) + 0x28 + lVar9);
      puVar16 = puVar16 + 1;
    }
    uVar10 = (ulonglong)uVar13;
    fVar19 = *(float *)(lVar5 + 0x58) / fVar8;
    *(undefined4 *)(unaff_RSI + uVar10 * 4) = uVar2;
    if (bVar17) {
      fVar19 = (float)((uint)fVar19 ^ uVar7);
    }
    uVar13 = uVar13 + 1;
    fVar19 = fVar19 + *(float *)(lVar14 + uVar10 * 0xc);
    fVar20 = 0.0;
    if (0.0 <= fVar19) {
      fVar20 = fVar19;
    }
    fVar19 = fVar6;
    if (fVar20 <= fVar6) {
      fVar19 = fVar20;
    }
    *(float *)(lVar14 + uVar10 * 0xc) = fVar19;
    uVar18 = pdb_140dedcd0(&UNK_14345b058);
    *(undefined4 *)(unaff_RSI + uVar10 * 4) = uVar2;
    *(undefined4 *)(lVar14 + 4 + uVar10 * 0xc) = uVar18;
    fVar19 = *(float *)(lVar5 + 0x58);
    *(undefined4 *)(unaff_RSI + uVar10 * 4) = uVar2;
    *(float *)(lVar14 + 8 + uVar10 * 0xc) = fVar19 + *(float *)(lVar14 + 8 + uVar10 * 0xc);
  } while( true );
}

