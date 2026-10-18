// VA 0x1424c2e90, PDB extent 899 bytes
// system_wall_constructor::construct_fences::process_segment::split_curve_based_on_angle
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_fences/process_segment.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Removing unreachable block (ram,0x0001424c3073) */
/* Matched PDB project procedure:
   system_wall_constructor::construct_fences::process_segment::split_curve_based_on_angle
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_fences/process_segment.rs
   Extent: 899 */

void pdb_1424c2e90(longlong *param_1,longlong param_2,ulonglong param_3,undefined4 param_4)

{
  undefined8 uVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  undefined7 uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 *puStack_120;
  undefined8 *puStack_118;
  undefined8 *puStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  longlong *plStack_f8;
  longlong *plStack_f0;
  longlong lStack_e8;
  ulonglong uStack_e0;
  ulonglong uStack_d8;
  ulonglong uStack_d0;
  undefined8 *puStack_c8;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  longlong lStack_b0;
  undefined8 uStack_a8;
  float fStack_a0;
  undefined8 uStack_98;
  float fStack_90;
  longlong lStack_88;
  byte *pbStack_80;
  longlong lStack_78;
  undefined8 uStack_70;
  float fStack_68;
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  plStack_f0 = param_1;
  fVar10 = (float)pub_142e329e0(param_4);
  pdb_14007ee60();
  pbStack_80 = pub_1406abab0(8,8);
  if (pbStack_80 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,8);
  }
  pbStack_80[0] = 0;
  pbStack_80[1] = 0;
  pbStack_80[2] = 0;
  pbStack_80[3] = 0;
  pbStack_80[4] = 0;
  pbStack_80[5] = 0;
  pbStack_80[6] = 0;
  pbStack_80[7] = 0;
  lStack_88 = 1;
  lStack_78 = 1;
  puStack_c8 = (undefined8 *)0x0;
  lStack_b0 = 0;
  uVar5 = 0;
  lStack_e8 = param_2;
  uStack_e0 = param_3;
  uStack_d0 = param_3;
  while (uVar5 < uStack_d0) {
    uStack_d8 = uVar5 + 1;
    if (uStack_e0 <= uVar5) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(uVar5,uStack_e0,&UNK_14330ac88);
    }
    puVar4 = (undefined8 *)(uVar5 * 0xc + lStack_e8);
    puVar6 = puStack_c0;
    puVar8 = puStack_b8;
    if (puStack_c8 == (undefined8 *)0x0) {
      uStack_108 = 1;
      puStack_100 = puVar4;
      plStack_f8 = &lStack_e8;
      pdb_14141fc20(&puStack_120,&uStack_108);
      puStack_b8 = puStack_110;
      puStack_c8 = puStack_120;
      puStack_c0 = puStack_118;
      puVar4 = puStack_110;
      puVar6 = puStack_120;
      puVar8 = puStack_118;
      if (puStack_120 == (undefined8 *)0x0) break;
    }
    lVar3 = lStack_78;
    lVar9 = lStack_b0 + 1;
    fStack_90 = *(float *)(puVar6 + 1);
    uStack_98 = *puVar6;
    fStack_68 = *(float *)(puVar8 + 1);
    uVar1 = *puVar8;
    uStack_a8 = *puVar4;
    fStack_a0 = *(float *)(puVar4 + 1);
    uStack_70._0_4_ = (float)uVar1;
    uVar7 = (undefined7)((ulonglong)uStack_a8 >> 8);
    uStack_70._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
    puStack_c8 = puVar6;
    puStack_c0 = puVar8;
    puStack_b8 = puVar4;
    lStack_b0 = lVar9;
    uStack_70 = uVar1;
    if (((float)uStack_98 == (float)uStack_70) && (!NAN((float)uStack_98) && !NAN((float)uStack_70))
       ) {
      uStack_98._4_4_ = (float)((ulonglong)uStack_98 >> 0x20);
      if ((uStack_98._4_4_ == uStack_70._4_4_) && (!NAN(uStack_98._4_4_) && !NAN(uStack_70._4_4_)))
      {
        if ((fStack_90 == fStack_68) && (!NAN(fStack_90) && !NAN(fStack_68))) {
          pdb_142d8d508(CONCAT71(uVar7,1),&uStack_98,&uStack_70,0);
          goto LAB_1424c31b6;
        }
      }
    }
    if (((float)uStack_70 == (float)uStack_a8) && (!NAN((float)uStack_70) && !NAN((float)uStack_a8))
       ) {
      uStack_a8._4_4_ = (float)((ulonglong)uStack_a8 >> 0x20);
      if ((uStack_70._4_4_ == uStack_a8._4_4_) &&
         ((!NAN(uStack_70._4_4_) && !NAN(uStack_a8._4_4_) && (fStack_68 == fStack_a0)))) {
        pdb_142d8d508(CONCAT71(uVar7,1),&uStack_70,&uStack_a8,0);
LAB_1424c31b6:
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
    }
    fVar11 = (float)uStack_a8 - (float)uStack_70;
    fVar12 = (float)uStack_70 - (float)uStack_98;
    fVar13 = fStack_a0 - fStack_68;
    fVar14 = fStack_68 - fStack_90;
    uVar5 = uStack_d8;
    if ((fVar13 * fVar14 + fVar12 * fVar11) /
        SQRT((fVar14 * fVar14 + fVar12 * fVar12) * (fVar13 * fVar13 + fVar11 * fVar11)) < fVar10) {
      if (lStack_78 == lStack_88) {
        pdb_142d896b0(&lStack_88);
      }
      *(longlong *)(pbStack_80 + lVar3 * 8) = lVar9;
      lStack_78 = lVar3 + 1;
      uVar5 = uStack_d8;
    }
  }
  lVar3 = lStack_78;
  if (lStack_78 == lStack_88) {
    pdb_142d896b0(&lStack_88);
  }
  *(ulonglong *)(pbStack_80 + lVar3 * 8) = param_3 - 1;
  plStack_f0[2] = lVar3 + 1;
  *plStack_f0 = lStack_88;
  plStack_f0[1] = (longlong)pbStack_80;
  return;
}

