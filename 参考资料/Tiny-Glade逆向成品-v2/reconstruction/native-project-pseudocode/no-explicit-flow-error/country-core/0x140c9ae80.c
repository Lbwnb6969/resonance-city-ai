// VA 0x140c9ae80, PDB extent 2545 bytes
// country_core::systems::wall::shapes::shape_placement_signifiers::preview_snapping_line
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/shapes/shape_placement_signifiers.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::wall::shapes::shape_placement_signifiers::preview_snapping_line
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/shapes/shape_placement_signifiers.rs
   Extent: 2545 */

undefined8 *
pdb_140c9ae80(undefined8 *param_1,longlong param_2,undefined4 *param_3,undefined8 param_4,
             float param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  uint uVar4;
  byte *arg0;
  ulonglong uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  byte *pbVar8;
  float fVar9;
  float fVar10;
  float extraout_XMM0_Da;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar15;
  longlong lStack_1a0;
  byte *pbStack_198;
  longlong lStack_188;
  byte *pbStack_180;
  float fStack_170;
  ulonglong uStack_168;
  longlong lStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  byte *pbStack_140;
  byte *pbStack_138;
  ulonglong uStack_130;
  longlong lStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  byte *pbStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  longlong lStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 uStack_98;
  undefined1 uStack_81;
  undefined8 uStack_80;
  
  uStack_80 = 0xfffffffffffffffe;
  uVar4 = *(uint *)(param_2 + 600);
  if (1 < uVar4) {
    lVar1 = param_2 + 0x38;
    auVar11._0_8_ = pdb_1419aa990(lVar1,*param_3,uVar4,&UNK_143077298);
    fVar15 = _DAT_142e36f28;
    auVar11._8_4_ = (undefined4)extraout_XMM0_Qb;
    auVar11._12_4_ = (undefined4)((ulonglong)extraout_XMM0_Qb >> 0x20);
    param_5 = param_5 / *(float *)(param_2 + 0x68);
    fVar9 = 0.0;
    if (0.0 <= param_5) {
      fVar9 = param_5;
    }
    fVar10 = _DAT_142e36f28;
    if (fVar9 <= _DAT_142e36f28) {
      fVar10 = fVar9;
    }
    auVar12._4_12_ = auVar11._4_12_;
    auVar12._0_4_ = (float)auVar11._0_8_ - fVar10 * _DAT_142e36f50;
    fVar9 = fVar10 * _DAT_142e36f50 + (float)auVar11._0_8_;
    if (*(int *)(param_2 + 600) == 2) {
      if (NAN(auVar12._0_4_)) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc83b0(&UNK_14335ec63,0x1d,&UNK_1430772b0);
      }
      if (ABS(auVar12._0_4_) == INFINITY) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc83b0(&UNK_14335ed00,0x22,&UNK_1430772b0);
      }
      if (NAN(fVar9)) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc83b0(&UNK_14335ec63,0x1d,&UNK_1430772c8);
      }
      if (ABS(fVar9) == INFINITY) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc83b0(&UNK_14335ed00,0x22,&UNK_1430772c8);
      }
      fVar15 = 0.0;
      if (0.0 <= auVar12._0_4_) {
        fVar15 = auVar12._0_4_;
      }
      fVar10 = _DAT_142e36f28;
      if (fVar15 <= _DAT_142e36f28) {
        fVar10 = fVar15;
      }
      fVar15 = 0.0;
      if (0.0 <= fVar9) {
        fVar15 = fVar9;
      }
      fVar9 = _DAT_142e36f28;
      if (fVar15 <= _DAT_142e36f28) {
        fVar9 = fVar15;
      }
      pbStack_140 = (byte *)0x0;
      pbStack_138 = (byte *)0x4;
      uStack_130 = 0;
      uStack_81 = 1;
      pdb_1419a6a90(lVar1,fVar10,fVar9,&pbStack_140);
      uStack_f8._0_4_ = (float)uStack_130;
      uStack_f8._4_4_ = (float)(uStack_130 >> 0x20);
      uStack_108 = SUB84(pbStack_140,0);
      uStack_104 = (undefined4)((ulonglong)pbStack_140 >> 0x20);
      uStack_100._0_4_ = SUB84(pbStack_138,0);
      uStack_100._4_4_ = (undefined4)((ulonglong)pbStack_138 >> 0x20);
      uStack_81 = 0;
      pdb_1419aa3f0(&pbStack_c8,&uStack_108);
      if (!SBORROW8(0,(longlong)pbStack_c8)) {
LAB_140c9b276:
        uStack_158 = CONCAT44(uStack_a4,uStack_a8);
        uStack_150 = CONCAT44(uStack_9c,uStack_a0);
        pbVar8 = pbStack_c8;
        uStack_168 = uStack_b8;
        arg0 = uStack_c0;
        goto joined_r0x000140c9b2a4;
      }
      puVar6 = &UNK_1430772e0;
      uVar7 = 0x1a;
      pbVar8 = pbStack_c8;
    }
    else {
      if ((NAN(auVar12._0_4_)) || (NAN(fVar9))) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc83b0(&UNK_143044712,0x1d,&UNK_143044760);
      }
      fVar9 = (float)pub_142e32a70(auVar12._0_8_,_DAT_142e36f28);
      fVar10 = (float)pub_142e32a70();
      pdb_1419a8710(&pbStack_c8,lVar1,
                    ~-(uint)(fVar9 < 0.0) & (uint)fVar9 |
                    (uint)(fVar9 + fVar15) & -(uint)(fVar9 < 0.0),
                    ~-(uint)(fVar10 < 0.0) & (uint)fVar10 |
                    (uint)(fVar15 + fVar10) & -(uint)(fVar10 < 0.0));
      if (!SBORROW8(0,(longlong)pbStack_c8)) goto LAB_140c9b276;
      puVar6 = &UNK_1430772fa;
      uVar7 = 0x23;
      pbVar8 = pbStack_c8;
    }
    arg0 = (byte *)pdb_142dec000(&uStack_c0,puVar6,uVar7);
    lStack_b0 = lStack_160;
    goto joined_r0x000140c9b2a4;
  }
  pbVar8 = *(byte **)(param_2 + 0x25c);
  if ((uVar4 & 1) == 0) {
    uStack_c0 = (byte *)CONCAT44(*(undefined4 *)(param_2 + 0x268),
                                 *(float *)(param_2 + 0x264) + _DAT_142f61030);
    pbStack_c8 = pbVar8;
    pdb_140defdf0(&lStack_1a0,&pbStack_c8,_DAT_142e36f50);
  }
  else {
    uStack_108 = SUB84(pbVar8,0);
    uStack_104 = (undefined4)((ulonglong)pbVar8 >> 0x20);
    uStack_f8._0_4_ = (float)*(undefined8 *)(param_2 + 0x26c) + _DAT_14302c610;
    uStack_f8._4_4_ = (float)((ulonglong)*(undefined8 *)(param_2 + 0x26c) >> 0x20) + _UNK_14302c614;
    uStack_100._0_4_ = *(float *)(param_2 + 0x264);
    uStack_100._4_4_ = *(undefined4 *)(param_2 + 0x268);
    pdb_140df3ac0(&pbStack_c8,&uStack_108,0);
    pdb_1419aaf90(&lStack_1a0,&pbStack_c8,_DAT_142e36f50);
    if (pbStack_c8 != (byte *)0x0) {
      pub_1406abac0(uStack_c0,(longlong)pbStack_c8 * 0xc,4);
    }
    if (lStack_b0 != 0) {
      pub_1406abac0((byte *)CONCAT44(uStack_a4,uStack_a8),lStack_b0 << 2,4);
    }
  }
  auVar13._0_8_ = pdb_1419aa6a0(&lStack_1a0,*param_3,param_3[2],&UNK_143077268);
  fVar15 = _DAT_142e36f28;
  auVar13._8_4_ = (undefined4)extraout_XMM0_Qb_00;
  auVar13._12_4_ = (undefined4)((ulonglong)extraout_XMM0_Qb_00 >> 0x20);
  fVar9 = 0.0;
  if (0.0 <= param_5 / fStack_170) {
    fVar9 = param_5 / fStack_170;
  }
  fVar10 = _DAT_142e36f28;
  if (fVar9 <= _DAT_142e36f28) {
    fVar10 = fVar9;
  }
  auVar14._4_12_ = auVar13._4_12_;
  auVar14._0_4_ = (float)auVar13._0_8_ - fVar10 * _DAT_142e36f50;
  if (NAN(auVar14._0_4_)) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_143044712,0x1d,&UNK_143044760);
  }
  if (NAN((float)auVar13._0_8_ + fVar10 * _DAT_142e36f50)) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_143044712,0x1d,&UNK_143044760);
  }
  fVar9 = (float)pub_142e32a70(auVar14._0_8_,_DAT_142e36f28);
  fVar10 = (float)pub_142e32a70();
  pdb_1419a8bb0(&uStack_108,&lStack_1a0,
                ~-(uint)(fVar9 < 0.0) & (uint)fVar9 | (uint)(fVar9 + fVar15) & -(uint)(fVar9 < 0.0),
                ~-(uint)(fVar10 < 0.0) & (uint)fVar10 |
                (uint)(fVar15 + fVar10) & -(uint)(fVar10 < 0.0));
  if (SBORROW8(0,CONCAT44(uStack_104,uStack_108))) {
    pbStack_138 = (byte *)CONCAT44(uStack_100._4_4_,(float)uStack_100);
    uStack_130 = CONCAT44(uStack_f8._4_4_,(float)uStack_f8);
    pbStack_140 = (byte *)0x8000000000000000;
LAB_140c9b2fc:
    arg0 = (byte *)pdb_142dec000(&pbStack_138,&UNK_143077280,0x16);
    uVar5 = uStack_168;
    lVar1 = lStack_160;
    uVar7 = uStack_158;
    uVar3 = uStack_150;
    pbVar8 = (byte *)0x8000000000000000;
  }
  else {
    uStack_98 = uStack_d8;
    pbStack_c8 = (byte *)CONCAT44(uStack_104,uStack_108);
    uStack_c0 = (byte *)CONCAT44(uStack_100._4_4_,(float)uStack_100);
    uStack_a8 = (undefined4)uStack_e8;
    uStack_a4 = uStack_e8._4_4_;
    uStack_a0 = (undefined4)uStack_e0;
    uStack_9c = uStack_e0._4_4_;
    uStack_b8 = CONCAT44(uStack_f8._4_4_,(float)uStack_f8);
    pdb_140df4440(&pbStack_140,&pbStack_c8);
    uVar5 = uStack_130;
    lVar1 = lStack_128;
    uVar7 = uStack_120;
    uVar3 = uStack_118;
    pbVar8 = pbStack_140;
    arg0 = pbStack_138;
    if (SBORROW8(0,(longlong)pbStack_140)) goto LAB_140c9b2fc;
  }
  uStack_150 = uVar3;
  uStack_158 = uVar7;
  lStack_160 = lVar1;
  uStack_168 = uVar5;
  if (lStack_1a0 != 0) {
    pub_1406abac0(pbStack_198,lStack_1a0 * 0xc,4);
  }
  lStack_b0 = lStack_160;
  if (lStack_188 != 0) {
    pub_1406abac0(pbStack_180,lStack_188 << 2,4);
    lStack_b0 = lStack_160;
  }
joined_r0x000140c9b2a4:
  if (SBORROW8(0,(longlong)pbVar8)) {
    param_1[2] = 0x8000000000000000;
    pbStack_c8 = arg0;
    pdb_140f36c40(&pbStack_c8);
  }
  else {
    uStack_158._4_4_ = (undefined4)((ulonglong)uStack_158 >> 0x20);
    uStack_150._4_4_ = (undefined4)((ulonglong)uStack_150 >> 0x20);
    uStack_a8 = (undefined4)uStack_158;
    uStack_a4 = uStack_158._4_4_;
    uStack_a0 = (undefined4)uStack_150;
    uStack_9c = uStack_150._4_4_;
    uStack_100 = arg0 + uStack_168 * 0xc;
    uStack_108 = SUB84(arg0,0);
    uStack_104 = (undefined4)((ulonglong)arg0 >> 0x20);
    uStack_f8 = &stack0x00000030;
    uStack_f0 = (undefined4)param_2;
    uStack_ec = (undefined4)((ulonglong)param_2 >> 0x20);
    uStack_e0 = &stack0x00000038;
    uStack_e8 = param_4;
    pbStack_c8 = pbVar8;
    uStack_c0 = arg0;
    pdb_1415f38e0(&pbStack_140,&uStack_108);
    uVar4 = pdb_1419a9060(&pbStack_c8,_DAT_142e36f50);
    uVar5 = (ulonglong)uVar4;
    if (uStack_168 <= uVar5) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(uVar5,uStack_168,&UNK_14335e4e0);
    }
    uVar2 = uVar5 + 1;
    if (uStack_168 <= uVar2) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(uVar2,uStack_168,&UNK_14335e4f8);
    }
    fVar10 = _DAT_142e36f28 - extraout_XMM0_Da;
    fVar9 = *(float *)(arg0 + uVar5 * 0xc + 8);
    fVar15 = *(float *)(arg0 + uVar2 * 0xc + 8);
    uStack_f8._4_4_ = (float)uStack_130;
    uStack_f0 = (undefined4)(uStack_130 >> 0x20);
    uStack_104 = SUB84(pbStack_140,0);
    uStack_100._0_4_ = (float)((ulonglong)pbStack_140 >> 0x20);
    uStack_100._4_4_ = SUB84(pbStack_138,0);
    uStack_f8._0_4_ = (float)((ulonglong)pbStack_138 >> 0x20);
    *param_1 = CONCAT44((float)((ulonglong)*(undefined8 *)(arg0 + uVar2 * 0xc) >> 0x20) *
                        extraout_XMM0_Da +
                        (float)((ulonglong)*(undefined8 *)(arg0 + uVar5 * 0xc) >> 0x20) * fVar10,
                        (float)*(undefined8 *)(arg0 + uVar2 * 0xc) * extraout_XMM0_Da +
                        (float)*(undefined8 *)(arg0 + uVar5 * 0xc) * fVar10);
    *(float *)(param_1 + 1) = fVar15 * extraout_XMM0_Da + fVar10 * fVar9;
    *(ulonglong *)((longlong)param_1 + 0xc) = CONCAT44(uStack_104,uStack_108);
    *(ulonglong *)((longlong)param_1 + 0x14) = CONCAT44(uStack_100._4_4_,(float)uStack_100);
    param_1[3] = pbStack_138;
    param_1[4] = uStack_130;
    if (pbVar8 != (byte *)0x0) {
      pub_1406abac0(arg0,(longlong)pbVar8 * 0xc,4);
    }
    if (lStack_b0 != 0) {
      pub_1406abac0((byte *)CONCAT44(uStack_a4,uStack_a8),lStack_b0 << 2,4);
    }
  }
  return param_1;
}

