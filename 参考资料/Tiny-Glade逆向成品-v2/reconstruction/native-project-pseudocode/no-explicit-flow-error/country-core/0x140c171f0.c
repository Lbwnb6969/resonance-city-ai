// VA 0x140c171f0, PDB extent 1158 bytes
// country_core::resources::grading_lut::GradingLuts::load
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/grading_lut.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::grading_lut::GradingLuts::load
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/grading_lut.rs
   Extent: 1158 */

longlong * pdb_140c171f0(longlong *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  byte *pbVar11;
  byte *pbVar12;
  longlong lStack_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  longlong lStack_f8;
  longlong lStack_e8;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  longlong lStack_c8;
  undefined8 *puStack_c0;
  byte *pbStack_b8;
  byte *pbStack_b0;
  longlong lStack_a8;
  byte *pbStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  longlong lStack_88;
  longlong lStack_80;
  longlong lStack_78;
  longlong lStack_70;
  longlong lStack_68;
  longlong lStack_60;
  longlong lStack_58;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  lStack_70 = 0;
  lStack_68 = 8;
  lStack_60 = 0;
  lStack_88 = 0;
  lStack_80 = 8;
  lStack_78 = 0;
  pdb_141642d20(&lStack_128,&UNK_143068ef2,0xb);
  if (SBORROW8(0,lStack_128)) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_143068efd,8,&lStack_e8,&UNK_143069140,&UNK_143068f08);
  }
  pbVar11 = (byte *)CONCAT44(uStack_11c,uStack_120);
  pbVar12 = pbVar11 + CONCAT44(uStack_114,uStack_118) * 0x38;
  lStack_a8 = lStack_128;
  puStack_c0 = &uStack_98;
  pbStack_b8 = pbVar11;
  pbStack_b0 = pbVar11;
  pbStack_a0 = pbVar12;
  uStack_98 = param_2;
  if (pbVar11 != pbVar12) {
    do {
      while( true ) {
        lStack_f8 = *(longlong *)(pbVar11 + 0x30);
        lStack_128 = *(longlong *)pbVar11;
        uStack_120 = *(undefined4 *)(pbVar11 + 8);
        uStack_11c = *(undefined4 *)(pbVar11 + 0xc);
        uStack_118 = *(undefined4 *)(pbVar11 + 0x10);
        uStack_114 = *(undefined4 *)(pbVar11 + 0x14);
        uStack_110 = *(undefined4 *)(pbVar11 + 0x18);
        uStack_10c = *(undefined4 *)(pbVar11 + 0x1c);
        uStack_108 = *(undefined4 *)(pbVar11 + 0x20);
        uStack_104 = *(undefined4 *)(pbVar11 + 0x24);
        uStack_100 = *(undefined4 *)(pbVar11 + 0x28);
        uStack_fc = *(undefined4 *)(pbVar11 + 0x2c);
        pbVar11 = pbVar11 + 0x38;
        pbStack_b0 = pbVar11;
        pdb_141b2b3f0(&lStack_e8,&puStack_c0,&lStack_128);
        lVar8 = lStack_60;
        lVar6 = lStack_c8;
        uVar5 = uStack_cc;
        uVar4 = uStack_d0;
        uVar3 = uStack_d4;
        uVar2 = uStack_d8;
        if (!SBORROW8(0,lStack_e8)) break;
        if (pbVar11 == pbVar12) {
          uVar10 = (ulonglong)((longlong)pbStack_a0 - (longlong)pbStack_b0) / 0x38;
          if (pbStack_a0 != pbStack_b0) {
            pbVar11 = pbStack_b0 + 0x20;
            do {
              if (*(ulonglong *)(pbVar11 + -0x20) != 0) {
                pub_1406abac0(*(byte **)(pbVar11 + -0x18),*(ulonglong *)(pbVar11 + -0x20),1);
              }
              if (*(ulonglong *)(pbVar11 + -8) != 0) {
                pub_1406abac0(*(byte **)pbVar11,*(ulonglong *)(pbVar11 + -8),1);
              }
              pbVar11 = pbVar11 + 0x38;
              uVar10 = uVar10 - 1;
            } while (uVar10 != 0);
          }
          goto LAB_140c1742a;
        }
      }
      lStack_58 = lStack_e8;
      uStack_90 = uStack_e0;
      lStack_e8 = lStack_c8;
      if (lStack_60 == lStack_70) {
        pdb_142d7e6e0(&lStack_70);
      }
      lVar7 = lStack_78;
      lVar9 = lVar8 * 0x20;
      *(longlong *)(lStack_68 + lVar9) = lStack_58;
      *(undefined8 *)(lStack_68 + 8 + lVar9) = uStack_90;
      puVar1 = (undefined4 *)(lStack_68 + 0x10 + lVar9);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      puVar1[2] = uVar4;
      puVar1[3] = uVar5;
      lStack_60 = lVar8 + 1;
      lStack_128 = lVar6;
      if (lStack_78 == lStack_88) {
        pdb_142db0920(&lStack_88);
      }
      *(longlong *)(lStack_80 + lVar7 * 8) = lVar6;
      lStack_78 = lVar7 + 1;
      pbVar11 = pbStack_b0;
      pbVar12 = pbStack_a0;
      puStack_c0 = &uStack_98;
    } while (pbStack_b0 != pbStack_a0);
  }
LAB_140c1742a:
  if (lStack_a8 != 0) {
    pub_1406abac0(pbStack_b8,lStack_a8 * 0x38,8);
  }
  param_1[2] = lStack_60;
  *param_1 = lStack_70;
  param_1[1] = lStack_68;
  param_1[3] = lStack_88;
  param_1[4] = lStack_80;
  param_1[5] = lStack_78;
  return param_1;
}

