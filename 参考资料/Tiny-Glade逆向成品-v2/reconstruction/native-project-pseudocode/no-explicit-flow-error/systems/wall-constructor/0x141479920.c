// VA 0x141479920, PDB extent 2822 bytes
// system_wall_constructor::construct_elevation_supports::rectangle_pillars::construct_rectangle_pillars
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_elevation_supports/rectangle_pillars.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_wall_constructor::construct_elevation_supports::rectangle_pillars::construct_rectangle_pillars
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_elevation_supports/rectangle_pillars.rs
   Extent: 2822 */

void pdb_141479920(undefined8 param_1,longlong param_2,undefined8 *param_3,undefined8 param_4,
                  longlong param_5,longlong param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,longlong *param_12)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  char cVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined8 uVar12;
  bool bVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  byte *pbVar17;
  byte *pbVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  uint uVar23;
  float extraout_XMM0_Da;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined4 uVar27;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  float fVar28;
  undefined1 in_XMM1 [16];
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  ulonglong in_stack_fffffffffffffdd0;
  undefined1 auStack_1f8 [8];
  float fStack_1f0;
  undefined8 uStack_1ec;
  undefined4 uStack_1e4;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  uint uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float fStack_198;
  int iStack_188;
  float fStack_178;
  float fStack_174;
  ulonglong uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  longlong lStack_110;
  undefined8 *puStack_108;
  longlong lStack_100;
  undefined1 uStack_f1;
  undefined8 uStack_f0;
  
  fVar26 = _DAT_142e37ad4;
  uStack_f0 = 0xfffffffffffffffe;
  if (*(char *)(param_2 + 0x2a2) == '\0') {
    uStack_120 = 0;
    uStack_118 = (byte *)0x8;
    lStack_110 = 0;
    uVar4 = *param_3;
    uStack_1d0 = param_3[1];
    uStack_1c8 = param_3[2];
    uVar27 = (undefined4)((ulonglong)uStack_1c8 >> 0x20);
    uStack_1c0 = 0;
    uVar7 = 0;
    uStack_1d8 = param_1;
    uStack_128 = param_1;
    puStack_108 = param_3;
    lStack_100 = param_2;
LAB_141479a44:
    uVar10 = uVar7;
    if (uVar10 < 4) {
      uStack_f1 = 1;
      fVar19 = (float)pdb_140df3e10(puStack_108,uVar10);
      fVar28 = in_XMM1._0_4_;
      fVar21 = *(float *)(lStack_100 + 0x284);
      uStack_f1 = 1;
      in_XMM1._4_4_ = 0;
      in_XMM1._0_4_ = fVar19;
      in_XMM1._8_4_ = extraout_XMM0_Dc;
      in_XMM1._12_4_ = extraout_XMM0_Dd;
      fStack_178 = fVar19;
      fStack_174 = fVar28;
      fVar20 = (float)pdb_14140ce00(param_10);
      uVar7 = uVar10 + 1;
      lVar16 = param_5;
      if (fVar20 + fVar26 <= fVar21) {
        while (uStack_170 = uVar7, lVar16 != param_6 * 0x50 + param_5) {
          uStack_f1 = 1;
          lVar11 = pdb_140b54f80(param_4,*(undefined8 *)(lVar16 + 0x38),&UNK_14330c480);
          if (lVar11 == 0) {
            uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
            pdb_142dc8150(&UNK_14330c498);
          }
          uStack_f1 = 1;
          uVar12 = pdb_14092f900(lVar11);
          uStack_f1 = 1;
          in_XMM1._4_4_ = 0;
          cVar8 = pdb_140a84de0(uVar12);
          uVar7 = uStack_170;
          lVar16 = lVar16 + 0x50;
          if (cVar8 != '\0') goto LAB_141479a44;
        }
        uStack_f1 = 1;
        pdb_140df4540(&fStack_13c,&fStack_178,*(undefined4 *)(lStack_100 + 0x284));
        if (param_6 == 0) goto LAB_141479d93;
        lVar16 = uVar10 - 1;
        if (uVar10 == 0) {
          lVar16 = 3;
        }
        uStack_f1 = 1;
        fVar21 = (float)pdb_140df3e10(puStack_108,lVar16);
        fVar32 = in_XMM1._0_4_;
        uStack_f1 = 1;
        fVar22 = (float)pdb_140df3e10(puStack_108,(int)uVar10 + 1U & 3);
        fVar31 = in_XMM1._0_4_;
        uStack_f1 = 1;
        uVar23 = pdb_140df1dc0(puStack_108,uVar10);
        fVar25 = fStack_134;
        fVar24 = fStack_138;
        fVar20 = fStack_13c;
        fVar21 = fVar21 - fVar19;
        fVar32 = fVar32 - fVar28;
        fVar29 = _DAT_142e36f28 / SQRT(fVar32 * fVar32 + fVar21 * fVar21);
        uStack_160 = 3;
        fVar22 = fVar22 - fVar19;
        fVar31 = fVar31 - fVar28;
        fVar30 = _DAT_142e36f28 / SQRT(fVar31 * fVar31 + fVar22 * fVar22);
        uStack_158 = CONCAT44(fVar29 * fVar32,fVar29 * fVar21);
        uStack_150 = CONCAT44(fVar30 * fVar31,fVar30 * fVar22);
        uStack_148 = CONCAT44(in_XMM1._0_4_ ^ _UNK_142e37824,uVar23 ^ _DAT_142e37820);
        lVar16 = 0;
        fVar21 = _DAT_14300c7a0;
        while (lVar16 != 3) {
          lVar11 = lVar16 + 1;
          uStack_130 = (&uStack_158)[lVar16];
          uStack_f1 = 1;
          uStack_168 = lVar11;
          pdb_140df4520(&uStack_1b8,&uStack_130);
          fStack_1f0 = fStack_134;
          uStack_1e4 = uStack_1b0;
          uStack_1ec = CONCAT44(uStack_1b4,uStack_1b8);
          uStack_f1 = 1;
          in_stack_fffffffffffffdd0 = in_stack_fffffffffffffdd0 & 0xffffffff00000000;
          pdb_1409ef4a0(&uStack_1b8,param_9,auStack_1f8,1,uStack_128,in_stack_fffffffffffffdd0);
          lVar16 = lVar11;
          if ((iStack_188 != 2) && ((0x6d84U >> (uStack_1b8 & 0x1f) & 1) == 0)) {
            if ((uStack_1b8 & 0xff) != 0) {
              uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
              pdb_142dc83b0(&UNK_14330c428,0x28,&UNK_14330c4b0);
            }
            fVar32 = SQRT((fVar25 - fStack_198) * (fVar25 - fStack_198) +
                          (fVar20 - fStack_1a0) * (fVar20 - fStack_1a0) +
                          (fVar24 - fStack_19c) * (fVar24 - fStack_19c));
            fVar22 = fVar32;
            if (fVar21 <= fVar32) {
              fVar22 = fVar21;
            }
            fVar21 = (float)(~-(uint)NAN(fVar21) & (uint)fVar22 | -(uint)NAN(fVar21) & (uint)fVar32)
            ;
            in_XMM1 = ZEXT416((uint)fVar21);
          }
        }
        uVar7 = uVar10 + 1;
        if (_DAT_143308ea0 <= fVar21) {
LAB_141479d93:
          uStack_1b4 = (undefined4)uVar4;
          uVar3 = uStack_1b4;
          uStack_1b0 = (undefined4)((ulonglong)uVar4 >> 0x20);
          uVar5 = uStack_1b0;
          uStack_1ac = (undefined4)uStack_1d0;
          uStack_1a8 = (undefined4)((ulonglong)uStack_1d0 >> 0x20);
          uStack_1a4 = (undefined4)uStack_1c8;
          fStack_1a0 = uStack_1c8._4_4_;
          uStack_1b8 = 1;
          uStack_f1 = 1;
          iVar9 = pdb_141479670(param_9,&fStack_13c,param_10,&uStack_1b8,uStack_128);
          uVar7 = uStack_170;
          if (iVar9 == 1) {
            fVar21 = *(float *)(lStack_100 + 0x284);
            fVar24 = ((fVar21 - extraout_XMM0_Da) + _DAT_143006a20) / _DAT_142e37834;
            fVar20 = 0.0;
            if (0.0 <= fVar24) {
              fVar20 = fVar24;
            }
            fVar24 = _DAT_142e36f28;
            if (fVar20 <= _DAT_142e36f28) {
              fVar24 = fVar20;
            }
            in_XMM1 = ZEXT416((uint)(fVar24 * fVar24));
            fVar20 = (_DAT_142e3788c - (fVar24 + fVar24)) * fVar24 * fVar24;
            fVar24 = fVar20 * _DAT_142e37838;
            uStack_f1 = 1;
            pdb_140df3060(&uStack_168,puStack_108,uVar10);
            uVar33 = (undefined4)uStack_1c8;
            uVar34 = uVar27;
            if ((uVar10 & 1) != 0) {
              uVar33 = uVar27;
              uVar34 = (undefined4)uStack_1c8;
            }
            uStack_f1 = 1;
            fVar25 = (float)pdb_140df1dc0(puStack_108,uVar10);
            lVar6 = lStack_110;
            lVar11 = uStack_160;
            lVar16 = uStack_168;
            fVar24 = fVar24 + (_DAT_142e36f28 - fVar20);
            fVar20 = fVar25 * fVar24 * _DAT_14330bec0;
            fVar25 = in_XMM1._0_4_ * fVar24 * _UNK_14330bec4;
            if (lStack_110 == uStack_120) {
              uStack_f1 = 1;
              pdb_142d7ee50(&uStack_120);
            }
            lVar15 = lVar6 * 0x40;
            *(ulonglong *)(uStack_118 + lVar15) = CONCAT44(fVar28 + fVar25,fVar19 + fVar20);
            *(ulonglong *)(uStack_118 + lVar15 + 8) = uVar10;
            *(undefined4 *)(uStack_118 + lVar15 + 0x10) = uVar3;
            *(undefined4 *)(uStack_118 + lVar15 + 0x10 + 4) = uVar5;
            *(longlong *)(uStack_118 + lVar15 + 0x18) = lVar16;
            *(longlong *)(uStack_118 + lVar15 + 0x18 + 8) = lVar11;
            *(float *)(uStack_118 + lVar15 + 0x28) = extraout_XMM0_Da;
            *(float *)(uStack_118 + lVar15 + 0x2c) = fVar21;
            *(float *)(uStack_118 + lVar15 + 0x30) = fVar24;
            *(undefined4 *)(uStack_118 + lVar15 + 0x34) = uVar33;
            *(undefined4 *)(uStack_118 + lVar15 + 0x38) = uVar34;
            lStack_110 = lVar6 + 1;
            uVar7 = uStack_170;
          }
        }
      }
      goto LAB_141479a44;
    }
    uStack_f1 = 1;
    iVar9 = pdb_140315970(&uStack_1d8);
    fVar26 = *(float *)(lStack_100 + 0x284) * _DAT_142e3a74c;
    uVar23 = 0;
    if (0.0 <= fVar26) {
      uVar23 = (uint)(longlong)fVar26 |
               (uint)(longlong)(fVar26 - _DAT_142e36f2c) & (uint)((longlong)fVar26 >> 0x3f);
    }
    uVar14 = 0xffffffff;
    if (fVar26 <= _DAT_142e36f30) {
      uVar14 = uVar23;
    }
    uStack_f1 = 1;
    uStack_1e0 = pdb_140dedfe0(iVar9 + uVar14);
    fVar19 = _UNK_142e36f64;
    fVar21 = _DAT_142e36f60;
    fVar26 = _DAT_142e36f50;
    pbVar17 = uStack_118 + lStack_110 * 0x40;
    puStack_108 = (undefined8 *)uStack_1e0;
    for (pbVar18 = uStack_118; pbVar18 != pbVar17; pbVar18 = pbVar18 + 0x40) {
      uStack_130 = *(undefined8 *)pbVar18;
      fVar20 = *(float *)(pbVar18 + 0x30);
      uVar27 = *(undefined4 *)(pbVar18 + 0x10);
      uVar3 = *(undefined4 *)(pbVar18 + 0x14);
      fVar28 = (float)*(undefined8 *)(pbVar18 + 0x28);
      fVar24 = (float)((ulonglong)*(undefined8 *)(pbVar18 + 0x28) >> 0x20);
      uStack_f1 = 1;
      pdb_140df4540(auStack_1f8,&uStack_130,fVar24 * fVar19 + fVar28 * fVar21);
      uStack_168 = CONCAT44(fVar24 - fVar28,fVar20 * fVar26);
      uStack_160 = CONCAT44(uStack_160._4_4_,fVar20 * fVar26);
      uStack_f1 = 1;
      pdb_140df3fd0(&uStack_1b8,auStack_1f8,&uStack_168,uVar27,uVar3,&UNK_14330c468);
      uStack_158 = CONCAT44(uStack_1a4,uStack_1a8);
      uStack_150 = CONCAT44(fStack_19c,fStack_1a0);
      uStack_168 = CONCAT44(uStack_1b4,uStack_1b8);
      uStack_160 = CONCAT44(uStack_1ac,uStack_1b0);
      lVar16 = param_12[2];
      if (lVar16 == *param_12) {
        uStack_f1 = 1;
        pdb_142d8a7a0(param_12);
      }
      lVar11 = param_12[1];
      puVar2 = (undefined8 *)(lVar11 + 0x10 + lVar16 * 0x20);
      *puVar2 = uStack_158;
      puVar2[1] = uStack_150;
      puVar1 = (undefined4 *)(lVar11 + lVar16 * 0x20);
      *puVar1 = (undefined4)uStack_168;
      puVar1[1] = uStack_168._4_4_;
      puVar1[2] = (undefined4)uStack_160;
      puVar1[3] = uStack_160._4_4_;
      param_12[2] = lVar16 + 1;
    }
    uStack_f1 = 1;
    cVar8 = pdb_1408ff990(lStack_100 + 0x2a3);
    if (cVar8 == '\0') {
      uStack_f1 = 1;
      cVar8 = pdb_1408ff980(lStack_100 + 0x29f);
      if (cVar8 == '\0') {
        uStack_1a8 = (undefined4)lStack_110;
        uStack_1a4 = (undefined4)((ulonglong)lStack_110 >> 0x20);
        uStack_1b8 = (uint)uStack_120;
        uStack_1b4 = uStack_120._4_4_;
        uStack_1b0 = (undefined4)uStack_118;
        uStack_1ac = uStack_118._4_4_;
        uStack_f1 = 0;
        pdb_1424c6230(param_7,lStack_100,&uStack_1b8,puStack_108,uStack_128,param_11);
        return;
      }
    }
    lVar16 = lStack_110;
    pbVar18 = uStack_118;
    uStack_f1 = 1;
    cVar8 = pdb_1408ff980(lStack_100 + 0x29f);
    bVar13 = true;
    if (cVar8 != '\0') {
      uStack_f1 = 1;
      cVar8 = pdb_1408ff980();
      if ((cVar8 == '\0') || (1 < *(uint *)(lStack_100 + 600))) {
        bVar13 = false;
      }
      else {
        bVar13 = 0.0 < *(float *)(lStack_100 + 0x294);
      }
    }
    uStack_f1 = 1;
    pdb_1424c6540(param_7,lStack_100,pbVar18,lVar16,bVar13,uStack_128,&uStack_1e0,param_11);
    if (uStack_120 != 0) {
      pub_1406abac0(uStack_118,uStack_120 << 6,8);
    }
  }
  return;
}

