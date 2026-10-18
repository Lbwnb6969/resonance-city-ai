// VA 0x1407fbce0, PDB extent 1565 bytes
// system_wall_constructor::construct_arches::wooden_arch_frame::wooden_arch_frame_params_from_points
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_arches/wooden_arch_frame.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_wall_constructor::construct_arches::wooden_arch_frame::wooden_arch_frame_params_from_points
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_arches/wooden_arch_frame.rs
   Extent: 1565 */

ulonglong *
pdb_1407fbce0(ulonglong *param_1,ulonglong param_2,ulonglong param_3,undefined8 param_4,
             undefined4 param_5,float param_6,undefined4 param_7,char param_8)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  ulonglong *puVar7;
  ulonglong uVar8;
  byte *pbVar9;
  longlong lVar10;
  longlong lVar11;
  float *pfVar12;
  ulonglong unaff_R15;
  ulonglong uVar13;
  float fVar14;
  float fVar17;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  ulonglong uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  ulonglong uStack_100;
  byte *pbStack_f8;
  ulonglong uStack_f0;
  undefined4 uStack_e4;
  undefined8 uStack_e0;
  
  uStack_e0 = 0xfffffffffffffffe;
  if (param_3 < 2) {
    *param_1 = 0x8000000000000000;
  }
  else {
    if (param_3 < 0x2aaaaaaaaaaaaab) goto LAB_1407fbd66;
    puVar7 = (ulonglong *)0x0;
    do {
      param_2 = unaff_R15;
      param_1 = puVar7;
      pdb_142dc7e2a();
LAB_1407fbd66:
      uStack_e4 = (undefined4)param_4;
      pdb_14007ee60();
      pbStack_f8 = pub_1406abab0(param_3 * 0x30,4);
      fVar23 = _DAT_142e36f28;
      puVar7 = (ulonglong *)0x4;
      unaff_R15 = param_3 * 0x30;
    } while (pbStack_f8 == (byte *)0x0);
    uStack_f0 = 0;
    fVar24 = 0.0;
    uVar13 = 0xffffffffffffffd0;
    lVar11 = 0;
    uVar8 = 0;
    uStack_100 = param_3;
    while (uVar18 = uStack_f0, uVar8 < param_3) {
      uVar1 = uVar8 + 1;
      lVar2 = param_2 + uVar8 * 0x18;
      uVar3 = *(undefined8 *)(param_2 + uVar8 * 0x18);
      fVar25 = (float)uVar3;
      fVar26 = (float)((ulonglong)uVar3 >> 0x20);
      fVar17 = *(float *)(param_2 + 8 + uVar8 * 0x18);
      if (uVar8 == 0) {
        fVar25 = (float)*(undefined8 *)(param_2 + 0x18) - fVar25;
        fVar26 = (float)((ulonglong)*(undefined8 *)(param_2 + 0x18) >> 0x20) - fVar26;
        fVar20 = *(float *)(param_2 + 0x20) - fVar17;
        fVar14 = fVar23 / SQRT(fVar20 * fVar20 + fVar26 * fVar26 + fVar25 * fVar25);
        if (0x7ffffe < (int)fVar14 - 1U &&
            (0x7effffff < (int)ABS(fVar14) - 0x800000U || (int)fVar14 < 0)) goto LAB_1407fbf45;
LAB_1407fbfe7:
        fVar25 = fVar25 * fVar14;
        fVar26 = fVar26 * fVar14;
        fVar20 = fVar20 * fVar14;
      }
      else {
        fVar14 = (float)*(undefined8 *)(lVar2 + -0x18);
        fVar19 = (float)((ulonglong)*(undefined8 *)(lVar2 + -0x18) >> 0x20);
        fVar20 = fVar14 - fVar25;
        fVar21 = fVar19 - fVar26;
        fVar22 = *(float *)(lVar2 + -0x10) - fVar17;
        fVar24 = fVar24 + SQRT(fVar22 * fVar22 + fVar21 * fVar21 + fVar20 * fVar20);
        fVar20 = fVar17;
        if (uVar1 != param_3) {
          if (param_3 <= uVar1) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2(uVar1,param_3,&UNK_143006968);
          }
          uVar4 = *(undefined8 *)(param_2 + uVar1 * 0x18);
          fVar25 = (float)uVar4;
          fVar26 = (float)((ulonglong)uVar4 >> 0x20);
          fVar20 = *(float *)(param_2 + 8 + uVar1 * 0x18);
        }
        fVar26 = fVar26 - fVar19;
        fVar25 = fVar25 - fVar14;
        fVar20 = fVar20 - *(float *)(lVar2 + -0x10);
        fVar14 = fVar23 / SQRT(fVar20 * fVar20 + fVar26 * fVar26 + fVar25 * fVar25);
        if ((int)fVar14 - 1U < 0x7fffff ||
            (int)ABS(fVar14) - 0x800000U < 0x7f000000 && -1 < (int)fVar14) goto LAB_1407fbfe7;
LAB_1407fbf45:
        fVar25 = 0.0;
        fVar26 = 0.0;
        fVar20 = 0.0;
      }
      if (uStack_f0 == uStack_100) {
        pdb_142d8d630(&uStack_100);
      }
      lVar10 = uVar18 * 0x30;
      *(undefined8 *)(pbStack_f8 + lVar10) = uVar3;
      *(float *)(pbStack_f8 + lVar10 + 8) = fVar17;
      *(float *)(pbStack_f8 + lVar10 + 0xc) = fVar24;
      *(ulonglong *)(pbStack_f8 + lVar10 + 0x10) = CONCAT44(fVar26,fVar25);
      *(float *)(pbStack_f8 + lVar10 + 0x18) = fVar20;
      pbVar9 = pbStack_f8 + lVar10 + 0x1c;
      pbVar9[0] = 0;
      pbVar9[1] = 0;
      pbVar9[2] = 0;
      pbVar9[3] = 0;
      *(undefined8 *)(pbStack_f8 + lVar10 + 0x20) = *(undefined8 *)(lVar2 + 0xc);
      *(undefined4 *)(pbStack_f8 + lVar10 + 0x28) = *(undefined4 *)(lVar2 + 0x14);
      pbVar9 = pbStack_f8 + lVar10 + 0x2c;
      pbVar9[0] = 0;
      pbVar9[1] = 0;
      pbVar9[2] = 0;
      pbVar9[3] = 0;
      uStack_f0 = uVar18 + 1;
      lVar11 = lVar11 + 0x30;
      uVar13 = uVar13 + 0x30;
      uVar8 = uVar1;
    }
    uVar8 = _DAT_1430067f0;
    uVar18 = _UNK_1430067f8;
    if (uStack_f0 != 0) {
      uVar8 = uStack_f0 * 0x30 - 0x30;
      auVar16._8_8_ = 0;
      auVar16._0_8_ = uVar8;
      pbVar9 = pbStack_f8;
      if ((~SUB164(auVar16 * ZEXT816(0xaaaaaaaaaaaaaaab),8) >> 5 & 3) == 0) {
        auVar15 = ZEXT816(0);
        fVar24 = 0.0;
      }
      else {
        auVar5._8_8_ = 0;
        auVar5._0_8_ = uVar13;
        uVar13 = (ulonglong)((byte)((SUB161(auVar5 * ZEXT816(0xaaaaaaaaaaaaaaab),8) >> 5) + 1) & 3);
        fVar24 = 0.0;
        auVar16 = ZEXT816(0);
        do {
          fVar24 = fVar24 + *(float *)(pbVar9 + 8);
          uVar3 = *(undefined8 *)pbVar9;
          pbVar9 = pbVar9 + 0x30;
          auVar15._0_4_ = auVar16._0_4_ + (float)uVar3;
          auVar15._4_4_ = auVar16._4_4_ + (float)((ulonglong)uVar3 >> 0x20);
          auVar15._8_4_ = auVar16._8_4_ + 0.0;
          auVar15._12_4_ = auVar16._12_4_ + 0.0;
          uVar13 = uVar13 - 1;
          auVar16 = auVar15;
        } while (uVar13 != 0);
      }
      if (0x8f < uVar8) {
        do {
          fVar17 = auVar15._4_4_;
          fVar25 = auVar15._8_4_;
          fVar26 = auVar15._12_4_;
          auVar15._0_4_ =
               (float)*(undefined8 *)(pbVar9 + 0x90) +
               (float)*(undefined8 *)(pbVar9 + 0x60) +
               (float)*(undefined8 *)(pbVar9 + 0x30) + (float)*(undefined8 *)pbVar9 + auVar15._0_4_;
          auVar15._4_4_ =
               (float)((ulonglong)*(undefined8 *)(pbVar9 + 0x90) >> 0x20) +
               (float)((ulonglong)*(undefined8 *)(pbVar9 + 0x60) >> 0x20) +
               (float)((ulonglong)*(undefined8 *)(pbVar9 + 0x30) >> 0x20) +
               (float)((ulonglong)*(undefined8 *)pbVar9 >> 0x20) + fVar17;
          auVar15._8_4_ = fVar25 + 0.0 + 0.0 + 0.0 + 0.0;
          auVar15._12_4_ = fVar26 + 0.0 + 0.0 + 0.0 + 0.0;
          fVar24 = fVar24 + *(float *)(pbVar9 + 8) + *(float *)(pbVar9 + 0x38) +
                   *(float *)(pbVar9 + 0x68) + *(float *)(pbVar9 + 0x98);
          pbVar9 = pbVar9 + 0xc0;
        } while (pbVar9 != pbStack_f8 + uStack_f0 * 0x30);
      }
      fVar25 = (float)(longlong)uStack_f0;
      auVar6._4_4_ = fVar25;
      auVar6._0_4_ = fVar25;
      auVar6._8_8_ = 0;
      auVar16 = divps(auVar15,auVar6);
      pfVar12 = (float *)(pbStack_f8 + 8);
      fVar17 = 0.0;
      do {
        fVar26 = *pfVar12 - fVar24 / fVar25;
        fVar20 = (float)*(undefined8 *)(pfVar12 + -2) - auVar16._0_4_;
        fVar14 = (float)((ulonglong)*(undefined8 *)(pfVar12 + -2) >> 0x20) - auVar16._4_4_;
        fVar20 = SQRT(fVar26 * fVar26 + fVar14 * fVar14 + fVar20 * fVar20);
        fVar26 = fVar20;
        if (fVar20 <= fVar17) {
          fVar26 = fVar17;
        }
        fVar17 = (float)(~-(uint)NAN(fVar17) & (uint)fVar26 | -(uint)NAN(fVar17) & (uint)fVar20);
        pfVar12 = pfVar12 + 0xc;
        lVar11 = lVar11 + -0x30;
      } while (lVar11 != 0);
      uVar8 = auVar16._0_8_;
      uVar18 = CONCAT44(_DAT_142e36f28 + fVar17,fVar24 / fVar25);
    }
    param_1[2] = uStack_f0;
    *param_1 = uStack_100;
    param_1[1] = (ulonglong)pbStack_f8;
    if (param_8 != '\0') {
      fVar23 = _DAT_142e382c0;
    }
    param_1[3] = uVar8;
    param_1[4] = uVar18;
    *(undefined4 *)(param_1 + 5) = uStack_e4;
    *(undefined4 *)((longlong)param_1 + 0x2c) = param_5;
    *(float *)(param_1 + 6) = param_6 * fVar23;
    *(undefined4 *)((longlong)param_1 + 0x34) = param_7;
  }
  return param_1;
}

