// VA 0x1409fdc30, PDB extent 1736 bytes
// country_core::utils::geo::rewire_enclosed_curve
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/utils/geo.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::utils::geo::rewire_enclosed_curve
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/utils/geo.rs
   Extent: 1736 */

longlong * pdb_1409fdc30(longlong *param_1,longlong param_2,float param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  float fVar3;
  undefined8 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  float fVar8;
  float fVar9;
  longlong lStack_160;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  longlong lStack_148;
  longlong lStack_140;
  longlong lStack_138;
  longlong lStack_130;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  longlong lStack_118;
  longlong lStack_110;
  byte *pbStack_108;
  longlong lStack_100;
  longlong lStack_f8;
  byte *pbStack_f0;
  float fStack_e0;
  longlong lStack_d8;
  longlong lStack_d0;
  byte *pbStack_c8;
  ulonglong uStack_c0;
  longlong lStack_b8;
  byte *pbStack_b0;
  float fStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  longlong lStack_88;
  byte *pbStack_80;
  byte *pbStack_78;
  longlong lStack_70;
  undefined1 uStack_63;
  undefined1 uStack_62;
  undefined1 uStack_61;
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  if ((param_3 == 0.0) && (!NAN(param_3))) {
LAB_1409fdd58:
    *param_1 = -0x8000000000000000;
    return param_1;
  }
  if ((param_3 == _DAT_142e36f28) && (!NAN(param_3) && !NAN(_DAT_142e36f28))) goto LAB_1409fdd58;
  pdb_1419a77d0(&lStack_d0,param_2,0,param_3,&UNK_143034430);
  uStack_63 = 1;
  pdb_1419a77d0(&lStack_110,param_2,param_3,_DAT_142e36f28,&UNK_143034448);
  fVar3 = _DAT_142e3b1d8;
  if ((fStack_a0 < _DAT_142e3b1d8) || (fStack_e0 < _DAT_142e3b1d8)) {
    *param_1 = -0x8000000000000000;
    if (lStack_110 != 0) {
      pub_1406abac0(pbStack_108,lStack_110 << 3,4);
    }
    if (lStack_f8 != 0) {
      pub_1406abac0(pbStack_f0,lStack_f8 << 2,4);
    }
    if (lStack_d0 == 0) goto LAB_1409fdf34;
    uVar6 = lStack_d0 << 3;
    pbStack_f0 = pbStack_c8;
  }
  else {
    uVar6 = uStack_c0 - 1;
    lStack_70 = lStack_d0;
    pbStack_78 = pbStack_c8;
    lStack_d8 = lStack_110;
    pbStack_80 = pbStack_108;
    if (uStack_c0 == 0) {
      uStack_61 = 1;
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(0xffffffffffffffff,0,&UNK_143034460);
    }
    if (uVar6 == 0) {
      uStack_61 = 1;
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(uStack_c0 - 2,1,&UNK_143034478);
    }
    uVar1 = *(undefined8 *)(pbStack_c8 + uVar6 * 8);
    fVar8 = (float)uVar1 - (float)*(undefined8 *)(pbStack_c8 + uStack_c0 * 8 + -0x10);
    fVar9 = (float)((ulonglong)uVar1 >> 0x20) -
            (float)((ulonglong)*(undefined8 *)(pbStack_c8 + uStack_c0 * 8 + -0x10) >> 0x20);
    uVar7 = uStack_c0;
    if (SQRT(fVar9 * fVar9 + fVar8 * fVar8) < _DAT_142e3b1d8) {
      *(undefined8 *)(pbStack_c8 + uStack_c0 * 8 + -0x10) = uVar1;
      uVar7 = uVar6;
    }
    if (lStack_100 == 0) {
      uStack_61 = 1;
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(0,0,&UNK_143034490);
    }
    if (lStack_100 == 1) {
      uStack_61 = 1;
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(1,1,&UNK_1430344a8);
    }
    uVar1 = *(undefined8 *)pbStack_108;
    fVar8 = (float)uVar1 - (float)*(undefined8 *)(pbStack_108 + 8);
    fVar9 = (float)((ulonglong)uVar1 >> 0x20) -
            (float)((ulonglong)*(undefined8 *)(pbStack_108 + 8) >> 0x20);
    lVar5 = lStack_100;
    if (SQRT(fVar9 * fVar9 + fVar8 * fVar8) < fVar3) {
      *(undefined8 *)(pbStack_108 + 8) = uVar1;
      lVar5 = lStack_100 + -1;
      pub_142e32770(pbStack_108,pbStack_108 + 8,lStack_100 * 8 + -8);
    }
    if (*(longlong *)(param_2 + 0x10) == 0) {
      uStack_61 = 1;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_1430344c0);
    }
    puVar4 = *(undefined8 **)(param_2 + 8) + *(longlong *)(param_2 + 0x10) + -1;
    if (puVar4 == (undefined8 *)0x0) {
      uStack_61 = 1;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_1430344d8);
    }
    uVar1 = **(undefined8 **)(param_2 + 8);
    uVar2 = *puVar4;
    fVar8 = (float)uVar1 - (float)uVar2;
    fVar9 = (float)((ulonglong)uVar1 >> 0x20) - (float)((ulonglong)uVar2 >> 0x20);
    if (SQRT(fVar9 * fVar9 + fVar8 * fVar8) < fVar3) {
      lVar5 = lVar5 + -1;
    }
    uStack_98 = lStack_110;
    uStack_90 = pbStack_80;
    lStack_88 = lVar5;
    if ((ulonglong)(lStack_110 - lVar5) < uVar7) {
      pdb_142d7f1b0(&uStack_98,lVar5,uVar7,4,8);
      pbStack_c8 = pbStack_78;
      lStack_d0 = lStack_70;
    }
    lVar5 = lStack_88;
    pub_142e32760(uStack_90 + lStack_88 * 8,pbStack_c8,uVar7 * 8);
    lStack_88 = lVar5 + uVar7;
    if (lStack_d0 != 0) {
      pub_1406abac0(pbStack_c8,lStack_d0 * 8,4);
    }
    lStack_118 = lStack_88;
    uStack_128 = (undefined4)uStack_98;
    uStack_124 = uStack_98._4_4_;
    uStack_120 = (undefined4)uStack_90;
    uStack_11c = uStack_90._4_4_;
    uStack_62 = 0;
    pdb_140080c90(&lStack_160,&uStack_128,0);
    if (SBORROW8(0,lStack_160)) {
      uStack_128 = uStack_158;
      uStack_124 = uStack_154;
      uStack_120 = uStack_150;
      uStack_11c = uStack_14c;
      uStack_62 = 0;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_14335e278,0x2b,&uStack_128,&UNK_14335e258,&UNK_1430344f0);
    }
    param_1[6] = lStack_130;
    param_1[4] = lStack_140;
    param_1[5] = lStack_138;
    param_1[2] = CONCAT44(uStack_14c,uStack_150);
    param_1[3] = lStack_148;
    *param_1 = lStack_160;
    param_1[1] = CONCAT44(uStack_154,uStack_158);
    if (lStack_f8 == 0) goto LAB_1409fdf34;
    uVar6 = lStack_f8 << 2;
  }
  pub_1406abac0(pbStack_f0,uVar6,4);
LAB_1409fdf34:
  if (lStack_b8 == 0) {
    return param_1;
  }
  pub_1406abac0(pbStack_b0,lStack_b8 << 2,4);
  return param_1;
}

