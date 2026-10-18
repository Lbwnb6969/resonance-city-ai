// VA 0x1407fb810, PDB extent 1221 bytes
// system_wall_constructor::construct_arches::wooden_arch_frame::create_wooden_arch_frame_params
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_arches/wooden_arch_frame.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_wall_constructor::construct_arches::wooden_arch_frame::create_wooden_arch_frame_params
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_arches/wooden_arch_frame.rs
   Extent: 1221 */

undefined8 * pdb_1407fb810(undefined8 *param_1,byte *param_2,undefined1 param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  byte *pbVar4;
  longlong lVar5;
  float *pfVar6;
  ulonglong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 uStack_110;
  byte *pbStack_108;
  longlong lStack_100;
  longlong lStack_f8;
  byte *pbStack_f0;
  ulonglong uStack_e8;
  byte *pbStack_e0;
  byte *pbStack_d8;
  ulonglong uStack_d0;
  byte *pbStack_c8;
  longlong *plStack_c0;
  undefined1 *puStack_b8;
  longlong lStack_b0;
  byte *pbStack_a8;
  longlong lStack_a0;
  undefined1 uStack_91;
  undefined8 uStack_90;
  
  uStack_90 = 0xfffffffffffffffe;
  uStack_d0 = *(ulonglong *)(param_2 + 0x28);
  if (uStack_d0 < 2) {
    *param_1 = 0;
    param_1[1] = 8;
    param_1[2] = 0;
  }
  else {
    pbStack_d8 = (byte *)0x0;
    pbStack_e0 = param_2;
    uStack_91 = param_3;
    pdb_1413ec120();
    pbVar4 = pbStack_f0;
    if (1 < uStack_e8) {
      pdb_14007ee60();
      pbStack_a8 = pub_1406abab0(8,8);
      if (pbStack_a8 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc7e11(8,8);
      }
      pbStack_a8[0] = 0;
      fVar3 = _DAT_1430067e8;
      fVar2 = _DAT_142e37848;
      fVar1 = _DAT_142e36f28;
      pbStack_a8[1] = 0;
      pbStack_a8[2] = 0;
      pbStack_a8[3] = 0;
      pbStack_a8[4] = 0;
      pbStack_a8[5] = 0;
      pbStack_a8[6] = 0;
      pbStack_a8[7] = 0;
      lStack_b0 = 1;
      lStack_a0 = 1;
      uVar7 = 1;
      do {
        lVar5 = lStack_a0;
        pfVar6 = (float *)(pbVar4 + uVar7 * 0xc);
        while( true ) {
          if (uStack_e8 - 1 <= uVar7) {
            if (lStack_a0 == lStack_b0) {
              pdb_142d896b0(&lStack_b0);
            }
            *(ulonglong *)(pbStack_a8 + lVar5 * 8) = uStack_e8 - 1;
            pbStack_d8 = (byte *)(lVar5 + 1);
            pbStack_e0 = pbStack_a8;
            uStack_d0 = 2;
            pbStack_c8 = pbVar4;
            plStack_c0 = (longlong *)uStack_e8;
            lStack_a0 = (longlong)pbStack_d8;
            pdb_1413eed90(&uStack_110,&pbStack_e0);
            if (lStack_b0 != 0) {
              pub_1406abac0(pbStack_a8,lStack_b0 << 3,8);
            }
            goto LAB_1407fbb33;
          }
          if (uStack_e8 <= uVar7 - 1) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2(uVar7 - 1,uStack_e8,&UNK_143006908);
          }
          fVar9 = *pfVar6 - pfVar6[-3];
          fVar8 = pfVar6[2] - pfVar6[-1];
          fVar11 = fVar1 / SQRT(fVar8 * fVar8 + fVar9 * fVar9);
          fVar10 = 0.0;
          if ((int)fVar11 - 1U < 0x7fffff ||
              (int)ABS(fVar11) - 0x800000U < 0x7f000000 && -1 < (int)fVar11) {
            fVar9 = fVar9 * fVar11;
            fVar8 = fVar8 * fVar11;
          }
          else {
            fVar8 = 0.0;
            fVar9 = 0.0;
          }
          fVar11 = pfVar6[3] - *pfVar6;
          fVar13 = pfVar6[5] - pfVar6[2];
          fVar12 = fVar1 / SQRT(fVar13 * fVar13 + fVar11 * fVar11);
          if ((int)fVar12 - 1U < 0x7fffff ||
              (int)ABS(fVar12) - 0x800000U < 0x7f000000 && -1 < (int)fVar12) {
            fVar11 = fVar11 * fVar12;
            fVar10 = fVar13 * fVar12;
          }
          else {
            fVar11 = 0.0;
          }
          if (((fVar2 < fVar8 * fVar8 + fVar9 * fVar9) &&
              (fVar2 < fVar10 * fVar10 + fVar11 * fVar11)) &&
             (fVar8 * fVar10 + fVar9 * fVar11 < fVar3)) break;
          pfVar6 = pfVar6 + 3;
          uVar7 = uVar7 + 1;
        }
        if (lStack_a0 == lStack_b0) {
          pdb_142d896b0(&lStack_b0);
        }
        *(ulonglong *)(pbStack_a8 + lVar5 * 8) = uVar7;
        uVar7 = uVar7 + 1;
        lStack_a0 = lVar5 + 1;
      } while( true );
    }
    pbStack_108 = (byte *)0x8;
    lStack_100 = 0;
    uStack_110 = 0;
LAB_1407fbb33:
    pbStack_c8 = pbStack_108 + lStack_100 * 0x18;
    puStack_b8 = &uStack_91;
    pbStack_e0 = pbStack_108;
    pbStack_d8 = pbStack_108;
    uStack_d0 = uStack_110;
    plStack_c0 = &lStack_f8;
    pdb_1413e62a0(param_1,&pbStack_e0);
    if (lStack_f8 != 0) {
      pub_1406abac0(pbStack_f0,lStack_f8 * 0xc,4);
    }
  }
  return param_1;
}

