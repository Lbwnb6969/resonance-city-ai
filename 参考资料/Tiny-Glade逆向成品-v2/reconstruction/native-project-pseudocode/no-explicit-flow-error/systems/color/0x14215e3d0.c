// VA 0x14215e3d0, PDB extent 1622 bytes
// system_color::color_menu::color_button_animations
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/color/src/color_menu.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_color::color_menu::color_button_animations
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/color/src/color_menu.rs
   Extent: 1622 */

void pdb_14215e3d0(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  longlong lVar17;
  longlong lVar18;
  ulonglong uVar19;
  longlong lVar20;
  longlong lVar21;
  uint uVar22;
  undefined8 *puVar23;
  ulonglong uVar24;
  uint *puVar25;
  byte bVar26;
  float fVar27;
  float fVar28;
  longlong lStack_200;
  longlong lStack_1f8;
  longlong lStack_1f0;
  longlong lStack_1e8;
  longlong lStack_1e0;
  longlong lStack_1d8;
  longlong lStack_1b8;
  uint *puStack_188;
  uint *puStack_180;
  longlong lStack_168;
  longlong lStack_158;
  longlong lStack_148;
  undefined4 uStack_13c;
  longlong lStack_138;
  longlong lStack_128;
  undefined4 uStack_11c;
  longlong lStack_118;
  longlong lStack_108;
  undefined4 uStack_fc;
  byte bStack_f0;
  uint uStack_e8;
  uint uStack_e4;
  byte bStack_e0;
  
  lVar7 = *param_1;
  lVar8 = param_1[1];
  pdb_1428a3b40(&puStack_188,lVar8,lVar7,(int)param_1[2],*(undefined4 *)((longlong)param_1 + 0x14));
  fVar16 = _DAT_142f95158;
  fVar15 = _DAT_142e3c670;
  fVar14 = _DAT_142e3c608;
  fVar13 = _DAT_142e37adc;
  fVar12 = _DAT_142e3787c;
  fVar11 = _DAT_142e36f28;
  lStack_1b8 = lStack_168;
  lStack_1d8 = lStack_158;
  lStack_1e0 = lStack_148;
  lStack_1e8 = lStack_138;
  lStack_1f0 = lStack_128;
  lStack_1f8 = lStack_118;
  lStack_200 = lStack_108;
  uVar24 = (ulonglong)uStack_e8;
  lVar9 = *param_2;
  puVar25 = puStack_188;
  uVar22 = uStack_e4;
  bVar26 = bStack_f0;
  do {
    if ((bStack_e0 & 1) == 0) {
      if (uVar22 == (uint)uVar24) {
        do {
          if (puVar25 == puStack_180) {
            return;
          }
          uVar22 = *puVar25;
          puVar25 = puVar25 + 1;
          uVar24 = *(ulonglong *)(*(longlong *)(lVar8 + 0x100) + 0x58 + (ulonglong)uVar22 * 0xa0);
        } while (uVar24 == 0);
        lVar18 = *(longlong *)(lVar8 + 0x100) + (ulonglong)uVar22 * 0xa0;
        uVar22 = 0;
        bVar26 = false;
        if (*(ulonglong *)(lVar7 + 0x128) < *(ulonglong *)(lVar18 + 0x88)) {
          bVar26 = *(longlong *)(*(longlong *)(lVar18 + 0x80) + *(ulonglong *)(lVar7 + 0x128) * 8)
                   != 0;
        }
        lVar17 = *(longlong *)
                  (*(longlong *)(lVar8 + 0x1a0) + 0x18 + (ulonglong)*(uint *)(lVar18 + 0x94) * 0x48)
        ;
        lVar20 = *(longlong *)
                  (*(longlong *)(lVar8 + 0x1a0) + 0x38 + (ulonglong)*(uint *)(lVar18 + 0x94) * 0x48)
        ;
        lVar21 = ~*(ulonglong *)(lVar20 + *(longlong *)(lVar7 + 0x110) * 8) * 0x30;
        lStack_1d8 = *(longlong *)(lVar17 + 0x10 + lVar21);
        lStack_1e0 = *(longlong *)(lVar17 + 0x28 + lVar21);
        lVar21 = ~*(ulonglong *)(lVar20 + *(longlong *)(lVar7 + 0x118) * 8) * 0x30;
        lStack_1e8 = *(longlong *)(lVar17 + 0x10 + lVar21);
        lStack_1f0 = *(longlong *)(lVar17 + 0x28 + lVar21);
        lVar20 = ~*(ulonglong *)(lVar20 + *(longlong *)(lVar7 + 0x120) * 8) * 0x30;
        lStack_1f8 = *(longlong *)(lVar17 + 0x10 + lVar20);
        lStack_200 = *(longlong *)(lVar17 + 0x28 + lVar20);
        lStack_1b8 = *(longlong *)(lVar18 + 0x50);
        uVar19 = 0;
      }
      else {
        uVar19 = (ulonglong)uVar22;
      }
      uVar10 = ~*(uint *)(lStack_1b8 + 8 + uVar19 * 0x10);
    }
    else {
      uVar10 = uVar22;
      if (uVar22 == (uint)uVar24) {
        do {
          if (puVar25 == puStack_180) {
            return;
          }
          uVar22 = *puVar25;
          puVar25 = puVar25 + 1;
          uVar24 = *(ulonglong *)(*(longlong *)(lVar8 + 0x1a0) + 0x10 + (ulonglong)uVar22 * 0x48);
        } while (uVar24 == 0);
        lVar18 = *(longlong *)(lVar8 + 0x1a0) + (ulonglong)uVar22 * 0x48;
        lVar17 = *(longlong *)(lVar18 + 0x38);
        uVar22 = 0;
        bVar26 = false;
        if (*(ulonglong *)(lVar7 + 0x128) < *(ulonglong *)(lVar18 + 0x40)) {
          bVar26 = *(longlong *)(lVar17 + *(ulonglong *)(lVar7 + 0x128) * 8) != 0;
        }
        lVar18 = *(longlong *)(lVar18 + 0x18);
        lVar20 = ~*(ulonglong *)(lVar17 + *(longlong *)(lVar7 + 0x110) * 8) * 0x30;
        lStack_1d8 = *(longlong *)(lVar18 + 0x10 + lVar20);
        lStack_1e0 = *(longlong *)(lVar18 + 0x28 + lVar20);
        lVar20 = ~*(ulonglong *)(lVar17 + *(longlong *)(lVar7 + 0x118) * 8) * 0x30;
        lStack_1e8 = *(longlong *)(lVar18 + 0x10 + lVar20);
        lStack_1f0 = *(longlong *)(lVar18 + 0x28 + lVar20);
        lVar17 = ~*(ulonglong *)(lVar17 + *(longlong *)(lVar7 + 0x120) * 8) * 0x30;
        lStack_1f8 = *(longlong *)(lVar18 + 0x10 + lVar17);
        lStack_200 = *(longlong *)(lVar18 + 0x28 + lVar17);
        uVar10 = uVar22;
      }
    }
    uVar19 = (ulonglong)uVar10;
    puVar1 = (undefined8 *)(lStack_1d8 + uVar19 * 0x24);
    puVar2 = (undefined4 *)(lStack_1e0 + uVar19 * 4);
    puVar3 = (undefined4 *)(lStack_1f0 + uVar19 * 4);
    puVar23 = (undefined8 *)(uVar19 * 0x10 + lStack_1e8);
    fVar28 = *(float *)(lVar9 + 0x28);
    *puVar2 = uStack_13c;
    fVar27 = fVar28 / fVar16;
    if ((bVar26 & 1) == 0) {
      fVar27 = fVar28 * fVar13;
    }
    uVar22 = uVar22 + 1;
    *(float *)(puVar1 + 3) = fVar27 + *(float *)(puVar1 + 3);
    *(undefined4 *)(lStack_200 + uVar19 * 4) = uStack_fc;
    *(ulonglong *)(lStack_1f8 + uVar19 * 8) = (ulonglong)((byte)~bVar26 & 1);
    fVar28 = *(float *)(puVar1 + 3);
    if (fVar11 <= *(float *)(puVar1 + 3)) {
      fVar28 = fVar11;
    }
    *puVar2 = uStack_13c;
    *(float *)(puVar1 + 3) = fVar28;
    fVar27 = 0.0;
    if (0.0 <= fVar28) {
      fVar27 = fVar28;
    }
    fVar28 = fVar11;
    if (fVar27 <= fVar11) {
      fVar28 = fVar27;
    }
    uVar4 = *puVar1;
    fVar27 = (float)pdb_140dedcd0(&UNK_143463e0c,fVar28);
    *puVar3 = uStack_11c;
    puVar23[1] = CONCAT44(fVar27 * (float)((ulonglong)uVar4 >> 0x20),fVar27 * (float)uVar4);
    if ((bVar26 & 1) == 0) {
      fVar28 = (float)pdb_140dedcd0(&UNK_143463e0c,fVar28);
      fVar28 = (fVar11 - fVar28) * fVar15 + fVar28;
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      *puVar3 = uStack_11c;
      *puVar23 = CONCAT44(fVar28 * (float)((ulonglong)uVar4 >> 0x20) +
                          (fVar11 - fVar28) * (float)((ulonglong)uVar5 >> 0x20),
                          fVar28 * (float)uVar4 + (fVar11 - fVar28) * (float)uVar5);
      cVar6 = *(char *)(puVar1 + 4);
      *puVar2 = uStack_13c;
      fVar28 = fVar14;
      if (cVar6 == '\0') {
        fVar28 = fVar16;
      }
      fVar28 = fVar28 + *(float *)((longlong)puVar1 + 0x1c);
      fVar27 = 0.0;
      if (0.0 <= fVar28) {
        fVar27 = fVar28;
      }
      fVar28 = fVar11;
      if (fVar27 <= fVar11) {
        fVar28 = fVar27;
      }
      *(float *)((longlong)puVar1 + 0x1c) = fVar28;
      *puVar3 = uStack_11c;
      fVar28 = (float)pdb_140dedcd0(&UNK_143463e14,*(undefined4 *)((longlong)puVar1 + 0x1c));
      fVar28 = fVar28 * fVar12 + (fVar11 - fVar28) * 0.0 + fVar11;
      puVar23[1] = CONCAT44(fVar28 * (float)((ulonglong)puVar23[1] >> 0x20),
                            fVar28 * (float)puVar23[1]);
    }
  } while( true );
}

