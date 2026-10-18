// VA 0x140c16570, PDB extent 2943 bytes
// country_core::resources::grading_lut::GradingLut::load_cube
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/grading_lut.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::resources::grading_lut::GradingLut::load_cube
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/grading_lut.rs
   Extent: 2943 */

ulonglong *
pdb_140c16570(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             ulonglong *param_5)

{
  byte bVar1;
  undefined1 auVar2 [16];
  ulonglong **ppuVar3;
  float fVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  char *pcVar7;
  longlong lVar8;
  char cVar9;
  ushort uVar10;
  ulonglong uVar11;
  byte *pbVar12;
  ulonglong **ppuVar13;
  int iVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  char cVar20;
  ulonglong uVar21;
  undefined2 uVar22;
  byte *pbVar23;
  ulonglong uVar24;
  ulonglong *puStack_1c0;
  ulonglong uStack_1b8;
  undefined4 uStack_1ac;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  ulonglong uStack_190;
  undefined8 *puStack_188;
  code *pcStack_180;
  ulonglong **ppuStack_178;
  code *pcStack_170;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  ulonglong uStack_118;
  ulonglong **ppuStack_110;
  ulonglong uStack_108;
  undefined8 uStack_100;
  longlong lStack_f8;
  ulonglong **ppuStack_f0;
  longlong lStack_e8;
  undefined8 uStack_e0;
  longlong lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  int iStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  undefined8 uStack_a8;
  longlong lStack_a0;
  byte *pbStack_98;
  ulonglong uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_71;
  undefined8 uStack_70;
  
  uStack_70 = 0xfffffffffffffffe;
  pdb_140f55d10(&uStack_108,param_3,param_4);
  ppuVar13 = uStack_100;
  fVar4 = _DAT_142e36f28;
  if (!SBORROW8(0,uStack_108)) {
    uStack_118 = uStack_108;
    lStack_a0 = 0;
    pbStack_98 = (byte *)0x4;
    uStack_90 = 0;
    uStack_108 = 0;
    uStack_100 = (ulonglong **)0x0;
    ppuStack_110 = ppuVar13;
    ppuStack_f0 = ppuVar13;
    lStack_e8 = lStack_f8;
    uStack_e0 = 0;
    lStack_d8 = lStack_f8;
    uStack_d0 = 0xa0000000a;
    uStack_c8 = CONCAT71(uStack_c8._1_7_,1);
    uStack_c0 = uStack_c0 & 0xffffffffffff0000;
    uVar6 = 0x1f;
    pbVar23 = (byte *)0x4;
    uVar18 = 0;
    uVar16 = 0;
    uStack_198 = param_2;
    uVar11 = uStack_90;
LAB_140c16690:
    do {
      do {
        uStack_90 = uVar11;
        uVar19 = uVar16;
        ppuVar13 = ppuStack_f0;
        if (uStack_c0._1_1_ != '\0') {
LAB_140c16bc6:
          pbVar23 = pbStack_98;
          uVar22 = (undefined2)uVar6;
          lVar8 = (uVar6 & 0xffff) * 0x100010001;
          uStack_108 = lVar8 << 0x20;
          uStack_100 = (ulonglong **)
                       CONCAT44(0x17b0108,CONCAT22(1,(short)((ulonglong)lVar8 >> 0x20)));
          lStack_f8 = CONCAT71(lStack_f8._1_7_,4);
          pdb_1415d5630(&puStack_188,uStack_198,&UNK_143068d77,0xb,&uStack_108,1,pbStack_98,
                        uVar19 << 2);
          uVar6 = uStack_118;
          if ((int)puStack_188 != 0xb) {
            uStack_c8 = uStack_148;
            uStack_c0 = uStack_140;
                    /* WARNING: Subroutine does not return */
            pdb_142dc8170(&UNK_143069180,0x2b,&uStack_108,&UNK_143069160,&UNK_143068df8);
          }
          param_1[2] = param_5[2];
          uVar18 = param_5[1];
          *param_1 = *param_5;
          param_1[1] = uVar18;
          *(undefined2 *)(param_1 + 3) = uVar22;
          *(undefined2 *)((longlong)param_1 + 0x1a) = uVar22;
          *(undefined2 *)((longlong)param_1 + 0x1c) = uVar22;
          param_1[4] = (ulonglong)pcStack_180;
          if (lStack_a0 != 0) {
            pub_1406abac0(pbVar23,lStack_a0 << 2,4);
          }
          ppuVar13 = ppuStack_110;
          if (uVar6 == 0) {
            return param_1;
          }
          goto LAB_140c16dc4;
        }
        pdb_140c14e20(&puStack_188,&ppuStack_f0);
        if ((int)puStack_188 != 1) {
          if (uStack_c0._1_1_ == '\0') {
            uStack_c0._0_2_ = CONCAT11(1,(byte)uStack_c0);
            uVar16 = lStack_f8 - (longlong)uStack_100;
            ppuVar3 = uStack_100;
            ppuVar13 = ppuStack_f0;
            if ((uVar16 != 0 | (byte)uStack_c0) == 1) goto joined_r0x000140c16720;
          }
          goto LAB_140c16bc6;
        }
        uVar16 = (longlong)ppuStack_178 - (longlong)uStack_100;
        ppuVar3 = ppuStack_178;
joined_r0x000140c16720:
        pbVar12 = (byte *)((longlong)uStack_100 + (longlong)ppuVar13);
        uVar21 = uVar16;
        if ((uVar16 != 0) && (pbVar12[uVar16 - 1] == 10)) {
          uVar21 = uVar16 - 1;
          if (uVar21 == 0) {
            uVar21 = 0;
          }
          else if (pbVar12[uVar16 - 2] == 0xd) {
            uVar21 = uVar16 - 2;
          }
        }
        uVar24 = uStack_108 + 1;
        uStack_108 = uVar24;
        uStack_100 = ppuVar3;
        puStack_1c0 = (ulonglong *)pdb_14014b650(pbVar12);
        uVar16 = uVar19;
        uStack_1b8 = uVar21;
        uVar11 = uStack_90;
      } while ((uVar21 == 0) || ((char)*puStack_1c0 == '#'));
      if (uVar21 < 5) {
LAB_140c168d0:
        pdb_140c170f0(&uStack_88,puStack_1c0);
        if ((int)uStack_88 == 1) {
          uStack_1a0 = uStack_80;
          puStack_188 = &uStack_138;
          pcStack_180 = pdb_140f72a40;
          ppuStack_178 = &puStack_1c0;
          pcStack_170 = pdb_1402ed420;
          uStack_71 = 1;
          uStack_138 = (undefined *)uVar24;
          pdb_140f60760(&iStack_b8,&UNK_14332739d,&puStack_188);
          uStack_128 = uStack_a8;
          uStack_138 = (undefined *)CONCAT44(fStack_b4,iStack_b8);
          uStack_130 = CONCAT44(fStack_ac,fStack_b0);
          uStack_120 = uStack_80;
          puStack_188 = (undefined8 *)0x3;
          uStack_71 = 0;
          uVar6 = pdb_142de9850(&uStack_138,&puStack_188);
          goto LAB_140c16d5d;
        }
        uStack_1ac = uStack_88._4_4_;
        uStack_1a8 = uStack_80;
        if (uVar19 < uVar18 + 1) {
          uVar6 = pdb_142de9270(&UNK_143068e90,0x36);
          goto LAB_140c16d5d;
        }
        uVar5 = pdb_141c81540(&uStack_1ac);
        if (uVar19 <= uVar18) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar18,uVar19,&UNK_143068e78);
        }
        *(undefined4 *)(pbVar23 + uVar18 * 4) = uVar5;
        uVar18 = uVar18 + 1;
        uVar11 = uStack_90;
        goto LAB_140c16690;
      }
    } while (*(char *)((longlong)puStack_1c0 + 4) == 'E' && (int)*puStack_1c0 == 0x4c544954);
    if (uVar21 < 10) goto LAB_140c168d0;
    uVar11 = *puStack_1c0;
    uVar11 = uVar11 >> 0x38 | (uVar11 & 0xff000000000000) >> 0x28 |
             (uVar11 & 0xff0000000000) >> 0x18 | (uVar11 & 0xff00000000) >> 8 |
             (uVar11 & 0xff000000) << 8 | (uVar11 & 0xff0000) << 0x18 | (uVar11 & 0xff00) << 0x28 |
             uVar11 << 0x38;
    uVar17 = 0x444f4d41494e5f4d;
    if (uVar11 == 0x444f4d41494e5f4d) {
      uVar10 = (ushort)puStack_1c0[1] << 8 | (ushort)puStack_1c0[1] >> 8;
      uVar11 = (ulonglong)uVar10;
      iVar14 = 0;
      if (uVar10 != 0x494e) {
        uVar17 = 0x494e;
        goto LAB_140c167e5;
      }
    }
    else {
LAB_140c167e5:
      iVar14 = (uint)(uVar11 <= uVar17) * 2 + -1;
    }
    if (iVar14 == 0) {
      pdb_140c170f0(&iStack_b8,(char *)((longlong)puStack_1c0 + 10),uVar21 - 10);
      if (iStack_b8 != 1) goto code_r0x000140c1694f;
      uStack_128 = CONCAT44(fStack_ac,fStack_b0);
      uStack_138 = &UNK_143068e10;
      uStack_130 = 0x12;
      puStack_188 = (undefined8 *)0x3;
      uVar6 = pdb_142dea2a0(&uStack_138,&puStack_188);
      goto LAB_140c16d5d;
    }
    uVar11 = *puStack_1c0;
    uVar11 = uVar11 >> 0x38 | (uVar11 & 0xff000000000000) >> 0x28 |
             (uVar11 & 0xff0000000000) >> 0x18 | (uVar11 & 0xff00000000) >> 8 |
             (uVar11 & 0xff000000) << 8 | (uVar11 & 0xff0000) << 0x18 | (uVar11 & 0xff00) << 0x28 |
             uVar11 << 0x38;
    uVar17 = 0x444f4d41494e5f4d;
    if (uVar11 == 0x444f4d41494e5f4d) {
      uVar10 = (ushort)puStack_1c0[1] << 8 | (ushort)puStack_1c0[1] >> 8;
      uVar11 = (ulonglong)uVar10;
      iVar14 = 0;
      if (uVar10 != 0x4158) {
        uVar17 = 0x4158;
        goto LAB_140c16831;
      }
    }
    else {
LAB_140c16831:
      iVar14 = (uint)(uVar11 <= uVar17) * 2 + -1;
    }
    if (iVar14 == 0) {
      pdb_140c170f0(&iStack_b8,(char *)((longlong)puStack_1c0 + 10),uVar21 - 10);
      if (iStack_b8 == 1) {
        uStack_128 = CONCAT44(fStack_ac,fStack_b0);
        uStack_138 = &UNK_143068e3a;
        uStack_130 = 0x12;
        puStack_188 = (undefined8 *)0x3;
        uVar6 = pdb_142dea2a0(&uStack_138,&puStack_188);
        goto LAB_140c16d5d;
      }
      uStack_88 = CONCAT44(fStack_ac,fStack_b0);
      if ((fStack_b4 == fVar4) && (fStack_b0 == fVar4)) {
        if ((fStack_ac == fVar4) && (uVar11 = uStack_90, !NAN(fStack_ac) && !NAN(fVar4)))
        goto LAB_140c16690;
      }
      uVar6 = pdb_142de9270(&UNK_143068e4c,0x18);
      goto LAB_140c16d5d;
    }
    if (uVar21 == 10) goto LAB_140c168d0;
    if (*(longlong *)((longlong)puStack_1c0 + 3) == 0x455a49535f44315f &&
        *puStack_1c0 == 0x535f44315f54554c) {
      uVar6 = pdb_142de9270(&UNK_143068ec6,0x19);
      goto LAB_140c16d5d;
    }
    uVar11 = *puStack_1c0;
    uVar11 = uVar11 >> 0x38 | (uVar11 & 0xff000000000000) >> 0x28 |
             (uVar11 & 0xff0000000000) >> 0x18 | (uVar11 & 0xff00000000) >> 8 |
             (uVar11 & 0xff000000) << 8 | (uVar11 & 0xff0000) << 0x18 | (uVar11 & 0xff00) << 0x28 |
             uVar11 << 0x38;
    uVar17 = 0x4c55545f33445f53;
    if (uVar11 == 0x4c55545f33445f53) {
      uVar11 = *(ulonglong *)((longlong)puStack_1c0 + 3);
      uVar11 = uVar11 >> 0x38 | (uVar11 & 0xff000000000000) >> 0x28 |
               (uVar11 & 0xff0000000000) >> 0x18 | (uVar11 & 0xff00000000) >> 8 |
               (uVar11 & 0xff000000) << 8 | (uVar11 & 0xff0000) << 0x18 | (uVar11 & 0xff00) << 0x28
               | uVar11 << 0x38;
      iVar14 = 0;
      uVar17 = 0x5f33445f53495a45;
      if (uVar11 != 0x5f33445f53495a45) goto LAB_140c168af;
    }
    else {
LAB_140c168af:
      iVar14 = (uint)(uVar11 <= uVar17) * 2 + -1;
    }
    if (iVar14 != 0) goto LAB_140c168d0;
    uVar21 = uVar21 - 0xb;
    pcVar7 = (char *)pdb_14014b650((char *)((longlong)puStack_1c0 + 0xb));
    if (uVar21 == 1) {
      cVar20 = *pcVar7;
      cVar9 = '\x01';
      if ((cVar20 == '+') || (cVar20 == '-')) goto LAB_140c16e07;
LAB_140c16a5e:
      uVar16 = (ulonglong)(cVar20 == '+');
      if (uVar21 - uVar16 < 0x11) {
        if (uVar21 == uVar16) {
          uVar6 = 0;
        }
        else {
          lVar8 = 0;
          uVar6 = 0;
          do {
            uVar15 = (byte)(pcVar7 + uVar16)[lVar8] - 0x30;
            if (9 < uVar15) goto LAB_140c16e05;
            uVar6 = (ulonglong)uVar15 + uVar6 * 10;
            lVar8 = lVar8 + 1;
          } while (lVar8 != -uVar16 + uVar21);
        }
      }
      else {
        lVar8 = 0;
        uVar6 = 0;
        while (lVar8 != -uVar16 + uVar21) {
          auVar2._8_8_ = 0;
          auVar2._0_8_ = uVar6;
          uVar11 = SUB168(auVar2 * ZEXT816(10),0);
          bVar1 = (pcVar7 + uVar16)[lVar8];
          if (SUB168(auVar2 * ZEXT816(10),8) != 0) {
            cVar9 = ((byte)(bVar1 - 0x30) < 10) + '\x01';
            goto LAB_140c16e07;
          }
          uVar15 = bVar1 - 0x30;
          if (9 < uVar15) goto LAB_140c16e05;
          lVar8 = lVar8 + 1;
          uVar6 = uVar11 + uVar15;
          if (CARRY8(uVar11,(ulonglong)uVar15)) {
            cVar9 = '\x02';
            goto LAB_140c16e07;
          }
        }
      }
      uVar16 = uVar6 * uVar6 * uVar6;
      uVar21 = uVar16 - uVar19;
      uVar11 = uVar16;
      if (uVar19 <= uVar16 && uVar21 != 0) {
        if (lStack_a0 - uVar19 < uVar21) {
          pdb_142d7f1b0(&lStack_a0,uVar19,uVar21,4,4);
          pbVar12 = pbStack_98 + uStack_90 * 4;
          pbVar23 = pbStack_98;
          uVar11 = uStack_90;
        }
        else {
          pbVar12 = pbVar23 + uVar19 * 4;
          uVar11 = uVar19;
        }
        if (1 < uVar21) {
          uStack_190 = uVar11;
          pub_142e32780(pbVar12,0,(~uVar19 + uVar16) * 4);
          pbVar12 = pbVar23 + ((uVar16 + uStack_190) - uVar19) * 4 + -4;
          uVar11 = (uStack_190 + uVar21) - 1;
        }
        pbVar12[0] = 0;
        pbVar12[1] = 0;
        pbVar12[2] = 0;
        pbVar12[3] = 0;
        uVar16 = uVar11 + 1;
        uVar11 = uVar11 + 1;
      }
      goto LAB_140c16690;
    }
    if (uVar21 != 0) {
      cVar20 = *pcVar7;
      goto LAB_140c16a5e;
    }
    cVar9 = '\0';
    goto LAB_140c16e07;
  }
  uVar6 = pdb_142deaf00();
  param_1[1] = uVar6;
  *param_1 = 0x8000000000000000;
  goto LAB_140c16dab;
code_r0x000140c1694f:
  uStack_88 = CONCAT44(fStack_ac,fStack_b0);
  if (((((fStack_b4 != 0.0) || (NAN(fStack_b4))) || (fStack_b0 != 0.0)) ||
      ((NAN(fStack_b0) || (fStack_ac != 0.0)))) || (uVar11 = uStack_90, NAN(fStack_ac)))
  goto LAB_140c16e1f;
  goto LAB_140c16690;
LAB_140c16e05:
  cVar9 = '\x01';
LAB_140c16e07:
  uVar6 = pdb_142d8e2b0(cVar9,&UNK_143068e64,0x13);
  goto LAB_140c16d5d;
LAB_140c16e1f:
  uVar6 = pdb_142de9270(&UNK_143068e22,0x18);
LAB_140c16d5d:
  uVar18 = uStack_118;
  param_1[1] = uVar6;
  *param_1 = 0x8000000000000000;
  if (lStack_a0 != 0) {
    pub_1406abac0(pbStack_98,lStack_a0 << 2,4);
  }
  if (uVar18 != 0) {
    pub_1406abac0((byte *)ppuStack_110,uVar18,1);
  }
LAB_140c16dab:
  uVar6 = *param_5;
  if (uVar6 != 0) {
    ppuVar13 = (ulonglong **)param_5[1];
LAB_140c16dc4:
    pub_1406abac0((byte *)ppuVar13,uVar6,1);
  }
  return param_1;
}

