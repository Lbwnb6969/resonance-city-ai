// VA 0x140a56140, PDB extent 611 bytes
// country_core::systems::backend::input::translate_input_to_cursor_moved::translate_input_to_cursor_moved
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/backend/input/translate_input_to_cursor_moved.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::backend::input::translate_input_to_cursor_moved::translate_input_to_cursor_moved
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/backend/input/translate_input_to_cursor_moved.rs
   Extent: 611 */

void pdb_140a56140(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,longlong *param_4,
                  undefined8 *param_5,longlong *param_6)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  ulonglong *puVar4;
  ulonglong *puVar5;
  longlong lVar6;
  ulonglong *puVar7;
  undefined4 *puVar8;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  undefined8 uVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  ulonglong uVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar27;
  float fVar28;
  
  puVar4 = (ulonglong *)*param_1;
  uVar24 = *puVar4;
  auVar26._8_8_ = 0;
  auVar26._0_8_ = uVar24;
  puVar5 = (ulonglong *)*param_5;
  lVar6 = param_5[1];
  uVar18 = *puVar5;
  uVar15 = 0;
  uVar14 = uVar18 - *(ulonglong *)(lVar6 + 0x18);
  if (uVar18 < *(ulonglong *)(lVar6 + 0x18)) {
    uVar14 = uVar15;
  }
  uVar19 = uVar18 - *(ulonglong *)(lVar6 + 0x38);
  if (uVar18 < *(ulonglong *)(lVar6 + 0x38)) {
    uVar19 = uVar15;
  }
  lVar13 = uVar14 * 0x18 + *(longlong *)(lVar6 + 8);
  uVar18 = *(ulonglong *)(lVar6 + 0x10);
  uVar20 = uVar18 - uVar14;
  if (uVar18 < uVar14) {
    uVar20 = uVar15;
  }
  if (uVar18 < uVar14) {
    lVar13 = 8;
  }
  lVar16 = uVar19 * 0x18 + *(longlong *)(lVar6 + 0x28);
  uVar18 = *(ulonglong *)(lVar6 + 0x30) - uVar19;
  if (*(ulonglong *)(lVar6 + 0x30) < uVar19) {
    lVar16 = 8;
    uVar18 = uVar15;
  }
  uVar14 = (*(longlong *)(lVar6 + 0x40) - uVar18) - uVar20;
  iVar2 = *(int *)*param_3;
  *puVar5 = uVar14;
  auVar11 = _DAT_142e33010;
  lVar6 = lVar13 + uVar20 * 0x18;
  lVar1 = lVar16 + uVar18 * 0x18;
  if (iVar2 == 0) {
    puVar7 = (ulonglong *)*param_2;
    dVar9 = (double)DAT_142e33010;
    dVar10 = DAT_142e33010._8_8_;
    fVar27 = 0.0;
    fVar28 = 0.0;
    if (lVar13 != 0) goto LAB_140a562b2;
    do {
      uVar24 = auVar26._0_8_;
      if ((lVar16 == 0) || (lVar16 == lVar1)) {
LAB_140a56319:
        *(undefined4 *)param_6[2] = *(undefined4 *)((longlong)param_6 + 0x1c);
        lVar6 = *param_6;
        lVar13 = *(longlong *)(lVar6 + 0x30);
        uVar21 = *(undefined8 *)(lVar6 + 0x40);
        if (lVar13 == *(longlong *)(lVar6 + 0x20)) {
          pdb_142d7e980(lVar6 + 0x20);
        }
        lVar16 = *(longlong *)(lVar6 + 0x28);
        *(undefined8 *)(lVar16 + lVar13 * 0x10) = uVar21;
        *(ulonglong *)(lVar16 + 8 + lVar13 * 0x10) = CONCAT44(fVar28,fVar27);
        *(longlong *)(lVar6 + 0x30) = lVar13 + 1;
        *(longlong *)(lVar6 + 0x40) = *(longlong *)(lVar6 + 0x40) + 1;
        uVar3 = *(undefined4 *)((longlong)param_4 + 0x1c);
        puVar8 = (undefined4 *)param_4[2];
        *puVar8 = uVar3;
        lVar6 = *param_4;
        *(ulonglong *)(lVar6 + 0x5c) =
             CONCAT44((float)((ulonglong)*(undefined8 *)(lVar6 + 0x5c) >> 0x20) + fVar28,
                      (float)*(undefined8 *)(lVar6 + 0x5c) + fVar27);
        *puVar8 = uVar3;
        uVar18 = *puVar4;
        *(ulonglong *)(lVar6 + 100) =
             CONCAT44((float)((ulonglong)*(undefined8 *)(lVar6 + 100) >> 0x20) +
                      ((float)(uVar24 >> 0x20) - (float)(uVar18 >> 0x20)),
                      (float)*(undefined8 *)(lVar6 + 100) + ((float)uVar24 - (float)uVar18));
        return;
      }
      lVar17 = lVar16;
      lVar16 = lVar16 + 0x18;
      lVar13 = 0;
      while( true ) {
        uVar14 = uVar14 + 1;
        *puVar5 = uVar14;
        if (*(int *)(lVar17 + 8) != 2) {
          if (*(int *)(lVar17 + 8) == 0) {
            uVar21 = *(undefined8 *)(lVar17 + 0xc);
            auVar25._0_4_ = auVar26._0_4_ + (float)uVar21;
            auVar25._4_4_ = auVar26._4_4_ + (float)((ulonglong)uVar21 >> 0x20);
            auVar25._8_4_ = auVar26._8_4_ + 0.0;
            auVar25._12_4_ = auVar26._12_4_ + 0.0;
            auVar22._0_8_ = *puVar7 & 0xffffffff;
            auVar22._8_4_ = (int)(*puVar7 >> 0x20);
            auVar22._12_4_ = 0;
            auVar23._0_4_ = (float)(SUB168(auVar22 | auVar11,0) - dVar9);
            auVar23._4_4_ = (float)(SUB168(auVar22 | auVar11,8) - dVar10);
            auVar23._8_8_ = 0;
            auVar26 = maxps(auVar25,ZEXT816(0));
            auVar26 = minps(auVar26,auVar23);
          }
          else {
            uVar24 = *(ulonglong *)(lVar17 + 0xc);
            uVar21 = CONCAT44((float)(uVar24 >> 0x20) - auVar26._4_4_,(float)uVar24 - auVar26._0_4_)
            ;
            auVar26._8_8_ = 0;
            auVar26._0_8_ = uVar24;
          }
          fVar27 = fVar27 + (float)uVar21;
          fVar28 = fVar28 + (float)((ulonglong)uVar21 >> 0x20);
        }
        if (lVar13 == 0) break;
LAB_140a562b2:
        if (lVar13 == lVar6) break;
        lVar17 = lVar13;
        lVar13 = lVar13 + 0x18;
      }
    } while( true );
  }
  fVar27 = 0.0;
  fVar28 = 0.0;
  lVar17 = lVar16;
  if (lVar13 != 0) goto LAB_140a5622f;
  do {
    if ((lVar17 == 0) || (lVar17 == lVar1)) goto LAB_140a56319;
    lVar16 = lVar17 + 0x18;
    lVar12 = 0;
    while( true ) {
      lVar13 = lVar12;
      uVar14 = uVar14 + 1;
      *puVar5 = uVar14;
      if (*(int *)(lVar17 + 8) != 1) {
        fVar27 = fVar27 + (float)*(undefined8 *)(lVar17 + 0xc);
        fVar28 = fVar28 + (float)((ulonglong)*(undefined8 *)(lVar17 + 0xc) >> 0x20);
      }
      lVar17 = lVar16;
      if (lVar13 == 0) break;
LAB_140a5622f:
      lVar17 = lVar16;
      if (lVar13 == lVar6) break;
      lVar12 = lVar13 + 0x18;
      lVar17 = lVar13;
    }
  } while( true );
}

