// VA 0x142808770, PDB extent 789 bytes
// system_roof::visual::generate_roof_stone_floor_and_roof_bottom::generate_roof_stone_floor_and_roof_bottom
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/roof/src/visual/generate_roof_stone_floor_and_roof_bottom.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_roof::visual::generate_roof_stone_floor_and_roof_bottom::generate_roof_stone_floor_and_roof_bottom
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/roof/src/visual/generate_roof_stone_floor_and_roof_bottom.rs
   Extent: 789 */

void pdb_142808770(undefined8 *param_1,longlong *param_2,longlong param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  int *piVar17;
  longlong *plVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  longlong lVar21;
  float fVar22;
  float fVar23;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  ulonglong *puStack_a0;
  
  puStack_a0 = (ulonglong *)*param_1;
  lVar3 = param_1[1];
  uVar13 = *puStack_a0;
  uVar19 = 0;
  uVar20 = uVar13 - *(ulonglong *)(lVar3 + 0x18);
  if (uVar13 < *(ulonglong *)(lVar3 + 0x18)) {
    uVar20 = uVar19;
  }
  uVar16 = uVar13 - *(ulonglong *)(lVar3 + 0x38);
  if (uVar13 < *(ulonglong *)(lVar3 + 0x38)) {
    uVar16 = uVar19;
  }
  lVar14 = uVar20 * 0x20 + *(longlong *)(lVar3 + 8);
  uVar13 = *(ulonglong *)(lVar3 + 0x10) - uVar20;
  if (*(ulonglong *)(lVar3 + 0x10) < uVar20) {
    lVar14 = 8;
    uVar13 = uVar19;
  }
  lVar21 = uVar16 * 0x20 + *(longlong *)(lVar3 + 0x28);
  uVar20 = *(ulonglong *)(lVar3 + 0x30) - uVar16;
  if (*(ulonglong *)(lVar3 + 0x30) < uVar16) {
    lVar21 = 8;
    uVar20 = uVar19;
  }
  *puStack_a0 = (*(longlong *)(lVar3 + 0x40) - uVar20) - uVar13;
  fVar10 = _DAT_142f89620;
  fVar9 = _DAT_142e46a48;
  fVar8 = _DAT_142e37834;
  fVar7 = _DAT_142e36f28;
  plVar18 = *(longlong **)(param_3 + 8);
  if (plVar18 == (longlong *)0x0) {
    plVar18 = *(longlong **)(param_3 + 0x10);
  }
  lVar3 = uVar13 * 0x20 + lVar14;
  lVar2 = uVar20 * 0x20 + lVar21;
  lVar4 = *param_2;
  lVar5 = param_2[1];
  lVar15 = lVar21;
  if (lVar14 == 0) goto LAB_142808880;
LAB_142808870:
  lVar15 = lVar21;
  if (lVar14 == lVar3) goto LAB_142808880;
  uVar13 = uVar19;
  lVar15 = lVar14;
  lVar14 = lVar14 + 0x20;
  do {
    *puStack_a0 = *puStack_a0 + 1;
    uVar20 = *(ulonglong *)(lVar15 + 8);
    uVar16 = 1;
    if (*(ulonglong *)(lVar5 + 0x10) <= (ulonglong)~(uint)uVar20) {
LAB_142808a4a:
      uStack_b0 = uVar13 << 0x20 | uVar16;
      uStack_a8 = uVar20;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_14359c040,0x2b,&uStack_b0,&UNK_14359c020,&UNK_14359c008);
    }
    piVar17 = (int *)((ulonglong)~(uint)uVar20 * 0x18 + *(longlong *)(lVar5 + 8));
    uVar19 = uVar20 >> 0x20;
    if ((piVar17[4] != (int)(uVar20 >> 0x20)) || (*piVar17 == 0)) goto LAB_142808a4a;
    uVar13 = *(ulonglong *)(piVar17 + 2);
    if ((*(ulonglong *)(lVar4 + 0x38) <= (uVar13 & 0xffffffff)) ||
       ((*(ulonglong *)(*(longlong *)(lVar4 + 0x28) + (uVar13 >> 6 & 0x3ffffff) * 8) >>
         (uVar13 & 0x3f) & 1) == 0)) {
      uVar16 = 0;
      goto LAB_142808a4a;
    }
    lVar15 = *(longlong *)
              (*(longlong *)(*(longlong *)(lVar5 + 0x1a0) + 0x18 + (uVar13 >> 0x20) * 0x48) + 0x10 +
              ~*(ulonglong *)
                (*(longlong *)(*(longlong *)(lVar5 + 0x1a0) + 0x38 + (uVar13 >> 0x20) * 0x48) +
                *(longlong *)(lVar4 + 0x110) * 8) * 0x30);
    uVar12 = 0;
    if (*(char *)(lVar15 + 8 + (ulonglong)(uint)~piVar17[1] * 0x58) == '\0') {
      fVar22 = (float)pub_142e32ab0(*(float *)(lVar15 + (ulonglong)(uint)~piVar17[1] * 0x58 + 0x14)
                                    * fVar10);
      fVar23 = fVar7;
      if (fVar7 <= fVar22) {
        fVar23 = fVar22;
      }
      fVar22 = fVar8;
      if (fVar23 <= fVar8) {
        fVar22 = fVar23;
      }
      uVar11 = 0;
      if (0.0 <= fVar22) {
        uVar11 = (undefined4)(longlong)fVar22;
      }
      uVar12 = 0xffffffff;
      if (fVar22 <= fVar9) {
        uVar12 = uVar11;
      }
    }
    uVar12 = pdb_1409012c0(uVar12);
    pdb_1408fd550(&uStack_b0,uVar12);
    lVar15 = plVar18[2];
    if ((ulonglong)(*plVar18 - lVar15) < 0x30) {
      pdb_142d7f1b0(plVar18,lVar15,0x30,1,1);
    }
    lVar6 = plVar18[1];
    *(code **)(lVar6 + lVar15) = pdb_140fc5e70;
    puVar1 = (undefined4 *)(lVar6 + 8 + lVar15);
    *puVar1 = (undefined4)uStack_b0;
    puVar1[1] = uStack_b0._4_4_;
    puVar1[2] = (undefined4)uStack_a8;
    puVar1[3] = uStack_a8._4_4_;
    *(undefined1 *)(lVar6 + 0x18 + lVar15) = 7;
    *(undefined1 *)(lVar6 + 0x20 + lVar15) = 0;
    *(ulonglong *)(lVar6 + 0x28 + lVar15) = uVar20;
    plVar18[2] = lVar15 + 0x30;
    lVar15 = lVar21;
    if (lVar14 != 0) goto LAB_142808870;
LAB_142808880:
    if ((lVar15 == 0) || (lVar15 == lVar2)) {
      return;
    }
    lVar21 = lVar15 + 0x20;
    lVar14 = 0;
    uVar13 = uVar19;
  } while( true );
}

