// VA 0x1407faef0, PDB extent 2335 bytes
// system_wall_constructor::construct_arches::wooden_arch_frame::wooden_arch_frame_dense_points
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_arches/wooden_arch_frame.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_wall_constructor::construct_arches::wooden_arch_frame::wooden_arch_frame_dense_points
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_arches/wooden_arch_frame.rs
   Extent: 2335 */

void pdb_1407faef0(longlong *param_1,ulonglong param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  longlong *plVar12;
  uint uVar13;
  ulonglong uVar14;
  bool bVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  longlong lVar19;
  ulonglong unaff_R14;
  float fVar20;
  float fVar21;
  float fVar23;
  undefined8 uVar22;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fStack_148;
  float fStack_128;
  float fStack_124;
  longlong lStack_108;
  byte *pbStack_100;
  longlong lStack_f8;
  undefined8 uStack_f0;
  
  uStack_f0 = 0xfffffffffffffffe;
  uVar17 = param_3;
  if (param_3 < 0x2aaaaaaaaaaaaab) goto LAB_1407faf81;
  plVar12 = (longlong *)0x0;
  do {
    param_1 = plVar12;
    param_2 = unaff_R14;
    pdb_142dc7e2a();
    uVar17 = param_3;
LAB_1407faf81:
    if (uVar17 == 0) {
      pbStack_100 = (byte *)0x4;
      lStack_108 = 0;
      goto LAB_1407fafc5;
    }
    param_3 = uVar17;
    pdb_14007ee60();
    pbStack_100 = pub_1406abab0(uVar17 * 0x30,4);
    unaff_R14 = uVar17 * 0x30;
    plVar12 = (longlong *)0x4;
  } while (pbStack_100 == (byte *)0x0);
  lStack_108 = uVar17 * 2;
LAB_1407fafc5:
  lStack_f8 = 0;
  uVar18 = 0;
  do {
    lVar19 = lStack_f8;
    if (uVar17 - 1 <= uVar18) {
      if (uVar17 != 0) {
        lVar16 = param_2 + uVar17 * 0x18;
        if ((undefined8 *)(lVar16 + -0x18) != (undefined8 *)0x0) {
          if (lStack_f8 == lStack_108) {
            pdb_142d89250(&lStack_108);
          }
          *(undefined8 *)(pbStack_100 + lVar19 * 0x18 + 0x10) = *(undefined8 *)(lVar16 + -8);
          uVar22 = *(undefined8 *)(lVar16 + -0x10);
          *(undefined8 *)(pbStack_100 + lVar19 * 0x18) = *(undefined8 *)(lVar16 + -0x18);
          *(undefined8 *)(pbStack_100 + lVar19 * 0x18 + 8) = uVar22;
          param_1[2] = lVar19 + 1;
          *param_1 = lStack_108;
          param_1[1] = (longlong)pbStack_100;
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_143006920);
    }
    if (uVar17 <= uVar18) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(uVar18,uVar17,&UNK_143006938);
    }
    uVar3 = uVar18 + 1;
    if (uVar17 <= uVar3) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(uVar3,uVar17,&UNK_143006950);
    }
    uVar22 = *(undefined8 *)(param_2 + uVar18 * 0x18);
    fVar34 = (float)uVar22;
    fVar37 = (float)((ulonglong)uVar22 >> 0x20);
    fVar4 = *(float *)(param_2 + 8 + uVar18 * 0x18);
    uVar8 = *(undefined8 *)(param_2 + 0xc + uVar18 * 0x18);
    fVar21 = *(float *)(param_2 + 0x14 + uVar18 * 0x18);
    uVar9 = *(undefined8 *)(param_2 + uVar3 * 0x18);
    fVar5 = *(float *)(param_2 + 8 + uVar3 * 0x18);
    uVar10 = *(undefined8 *)(param_2 + 0xc + uVar3 * 0x18);
    fVar26 = *(float *)(param_2 + 0x14 + uVar3 * 0x18);
    if (lStack_f8 == lStack_108) {
      pdb_142d89250(&lStack_108);
    }
    *(undefined8 *)(pbStack_100 + lVar19 * 0x18) = uVar22;
    *(float *)(pbStack_100 + lVar19 * 0x18 + 8) = fVar4;
    *(undefined8 *)(pbStack_100 + lVar19 * 0x18 + 0xc) = uVar8;
    *(float *)(pbStack_100 + lVar19 * 0x18 + 0x14) = fVar21;
    fStack_128 = (float)uVar9;
    fStack_124 = (float)((ulonglong)uVar9 >> 0x20);
    if (uVar18 == 0) {
      fVar20 = fVar5 - fVar4;
      fVar25 = fStack_128 - fVar34;
      fVar23 = fStack_124 - fVar37;
      fVar29 = _DAT_142e36f28 / SQRT(fVar20 * fVar20 + fVar23 * fVar23 + fVar25 * fVar25);
      if (0x7ffffe < (int)fVar29 - 1U &&
          (0x7effffff < (int)ABS(fVar29) - 0x800000U || (int)fVar29 < 0)) goto LAB_1407fb270;
      fVar25 = fVar25 * fVar29;
      uVar22 = CONCAT44(fVar20 * fVar29,fVar23 * fVar29);
      if (uVar17 < 3) goto LAB_1407fb1e0;
LAB_1407fb284:
      fVar29 = *(float *)(param_2 + (uVar18 + 2) * 0x18) - fStack_128;
      uVar9 = *(undefined8 *)(param_2 + 4 + (uVar18 + 2) * 0x18);
      fVar23 = (float)uVar9 - fStack_124;
      fVar20 = (float)((ulonglong)uVar9 >> 0x20) - fVar5;
      fVar32 = _DAT_142e36f28 / SQRT(fVar20 * fVar20 + fVar29 * fVar29 + fVar23 * fVar23);
      if ((int)fVar32 - 1U < 0x7fffff ||
          (int)ABS(fVar32) - 0x800000U < 0x7f000000 && -1 < (int)fVar32) {
        fVar29 = fVar29 * fVar32;
        fVar23 = fVar23 * fVar32;
        fVar20 = fVar20 * fVar32;
      }
      else {
LAB_1407fb320:
        fVar23 = 0.0;
        fVar20 = 0.0;
        fVar29 = 0.0;
      }
    }
    else {
      lVar16 = param_2 + uVar18 * 0x18;
      fVar25 = fVar34 - *(float *)(lVar16 + -0x18);
      uVar22 = *(undefined8 *)(lVar16 + -0x14);
      fVar20 = fVar37 - (float)uVar22;
      fVar23 = fVar4 - (float)((ulonglong)uVar22 >> 0x20);
      fVar29 = _DAT_142e36f28 / SQRT(fVar23 * fVar23 + fVar25 * fVar25 + fVar20 * fVar20);
      if ((int)fVar29 - 1U < 0x7fffff ||
          (int)ABS(fVar29) - 0x800000U < 0x7f000000 && -1 < (int)fVar29) {
        fVar25 = fVar25 * fVar29;
        uVar22 = CONCAT44(fVar23 * fVar29,fVar20 * fVar29);
      }
      else {
LAB_1407fb270:
        uVar22 = 0;
        fVar25 = 0.0;
      }
      if (uVar18 + 2 < uVar17) goto LAB_1407fb284;
LAB_1407fb1e0:
      fVar20 = fVar5 - fVar4;
      fVar29 = fStack_128 - fVar34;
      fVar23 = fStack_124 - fVar37;
      fVar32 = _DAT_142e36f28 / SQRT(fVar20 * fVar20 + fVar23 * fVar23 + fVar29 * fVar29);
      if (0x7ffffe < (int)fVar32 - 1U &&
          (0x7effffff < (int)ABS(fVar32) - 0x800000U || (int)fVar32 < 0)) goto LAB_1407fb320;
      fVar29 = fVar29 * fVar32;
      fVar23 = fVar23 * fVar32;
      fVar20 = fVar20 * fVar32;
    }
    bVar15 = _DAT_142f44734 <=
             (float)((ulonglong)uVar22 >> 0x20) * fVar20 + fVar25 * fVar29 + (float)uVar22 * fVar23;
    uVar14 = uVar18 + 2;
    if (uVar17 - 1 < uVar18 + 2) {
      uVar14 = uVar17 - 1;
    }
    fVar20 = fVar34 * _DAT_142e37860;
    fVar32 = fVar37 * _UNK_142e37864;
    lVar16 = (ulonglong)bVar15 * 4;
    fVar25 = *(float *)(&UNK_1430067d0 + lVar16);
    fVar23 = _DAT_142e36f28 - fVar25;
    fVar41 = (float)uVar10 * fVar25 + (float)uVar8 * fVar23;
    fVar42 = (float)((ulonglong)uVar10 >> 0x20) * fVar25 +
             (float)((ulonglong)uVar8 >> 0x20) * fVar23;
    fVar33 = fVar4 * _DAT_142e37834;
    fVar29 = fStack_128 * _DAT_1430067b0;
    fVar24 = fStack_124 * _UNK_1430067b4;
    fStack_148 = fVar23 * fVar21 + fVar25 * fVar26;
    fVar21 = _DAT_142e36f28 / SQRT(fStack_148 * fStack_148 + fVar42 * fVar42 + fVar41 * fVar41);
    fVar26 = fVar5 * _DAT_142e37adc;
    bVar11 = (int)fVar21 - 1U < 0x7fffff ||
             (int)ABS(fVar21) - 0x800000U < 0x7f000000 && -1 < (int)fVar21;
    if (bVar11) {
      fStack_148 = fStack_148 * fVar21;
    }
    else {
      fStack_148 = 0.0;
    }
    puVar1 = (undefined8 *)(param_2 + ((uVar18 - 1) + (ulonglong)(uVar18 == 0)) * 0x18);
    puVar2 = (undefined8 *)(param_2 + uVar14 * 0x18);
    fVar35 = fVar34 * _DAT_1430067c0;
    fVar38 = fVar37 * _UNK_1430067c4;
    fVar43 = fVar4 * _DAT_142e3788c;
    fVar30 = fStack_128 * _DAT_1430067c0;
    fVar31 = fStack_124 * _UNK_1430067c4;
    fVar40 = fVar5 * _DAT_142e3788c;
    fVar23 = *(float *)(&UNK_1430067d8 + lVar16);
    fVar6 = *(float *)(&UNK_1430067e0 + lVar16);
    uVar13 = (uint)bVar11;
    while (lVar19 = lVar19 + 1, uVar18 = uVar3, lStack_f8 = lVar19, !bVar15) {
      fVar44 = *(float *)(puVar1 + 1);
      fVar7 = *(float *)(puVar2 + 1);
      uVar22 = *puVar1;
      uVar8 = *puVar2;
      fVar27 = (float)uVar8;
      fVar28 = (float)((ulonglong)uVar8 >> 0x20);
      fVar36 = (float)uVar22;
      fVar39 = (float)((ulonglong)uVar22 >> 0x20);
      fVar36 = ((((fVar35 - fVar36) - fVar30) + fVar27) * fVar6 +
               ((((fVar36 + fVar36) - fVar20) + fVar29) - fVar27) * fVar23 +
               (fStack_128 - fVar36) * fVar25 + fVar34 + fVar34) * _DAT_142e36f60;
      fVar39 = ((((fVar38 - fVar39) - fVar31) + fVar28) * fVar6 +
               ((((fVar39 + fVar39) - fVar32) + fVar24) - fVar28) * fVar23 +
               (fStack_124 - fVar39) * fVar25 + fVar37 + fVar37) * _UNK_142e36f64;
      fVar44 = ((((fVar43 - fVar44) - fVar40) + fVar7) * fVar6 +
               ((((fVar44 + fVar44) - fVar33) + fVar26) - fVar7) * fVar23 +
               (fVar5 - fVar44) * fVar25 + fVar4 + fVar4) * _DAT_142e36f50;
      if (lVar19 == lStack_108) {
        pdb_142d89250(&lStack_108);
      }
      *(ulonglong *)(pbStack_100 + lVar19 * 0x18) = CONCAT44(fVar39,fVar36);
      *(float *)(pbStack_100 + lVar19 * 0x18 + 8) = fVar44;
      *(ulonglong *)(pbStack_100 + lVar19 * 0x18 + 0xc) =
           CONCAT44((int)(uVar13 << 0x1f) >> 0x1f,(int)(uVar13 << 0x1f) >> 0x1f) &
           CONCAT44(fVar42 * fVar21,fVar41 * fVar21);
      *(float *)(pbStack_100 + lVar19 * 0x18 + 0x14) = fStack_148;
      bVar15 = true;
    }
  } while( true );
}

