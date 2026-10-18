// VA 0x140b41dc0, PDB extent 1955 bytes
// utils::rdp::Rdp::new<glam::f32::vec2::Vec2>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/rdp.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: utils::rdp::Rdp::new<glam::f32::vec2::Vec2>
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/rdp.rs
   Extent: 1955 */

ulonglong * pdb_140b41dc0(ulonglong *param_1,undefined8 *param_2,ulonglong param_3,float param_4)

{
  longlong lVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  code *pcVar5;
  float fVar6;
  float fVar7;
  longlong lVar8;
  ulonglong uVar9;
  byte *pbVar10;
  byte *pbVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined8 uVar15;
  byte *unaff_R15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  ulonglong uStack_128;
  ulonglong uStack_120;
  ulonglong uStack_118;
  byte *pbStack_110;
  byte *pbStack_108;
  undefined8 *puStack_100;
  ulonglong uStack_f8;
  longlong lStack_f0;
  byte *pbStack_e8;
  longlong lStack_e0;
  ulonglong uStack_d8;
  ulonglong uStack_d0;
  byte *pbStack_c8;
  ulonglong uStack_c0;
  byte *pbStack_b8;
  undefined8 uStack_b0;
  
  uStack_b0 = 0xfffffffffffffffe;
  if (param_3 < 3) {
    if (param_3 == 0) {
      pbVar10 = (byte *)0x8;
      pbVar11 = (byte *)0x4;
      uVar12 = 0;
LAB_140b42291:
      *param_1 = uVar12;
      param_1[1] = (ulonglong)pbVar10;
      param_1[2] = uVar12;
      param_1[3] = param_3;
      param_1[4] = (ulonglong)pbVar11;
      param_1[5] = param_3;
      return param_1;
    }
    uVar12 = param_3 * 8;
    pdb_14007ee60();
    pbVar10 = pub_1406abab0(uVar12,8);
    if (pbVar10 == (byte *)0x0) {
      pdb_142dc7e2a(8,uVar12);
    }
    else {
      pbVar10[0] = 0;
      pbVar10[1] = 0;
      pbVar10[2] = 0;
      pbVar10[3] = 0;
      pbVar10[4] = 0;
      pbVar10[5] = 0;
      pbVar10[6] = 0;
      pbVar10[7] = 0;
      if (param_3 != 1) {
        pbVar10[8] = 1;
        pbVar10[9] = 0;
        pbVar10[10] = 0;
        pbVar10[0xb] = 0;
        pbVar10[0xc] = 0;
        pbVar10[0xd] = 0;
        pbVar10[0xe] = 0;
        pbVar10[0xf] = 0;
      }
      pdb_14007ee60();
      pbVar11 = pub_1406abab0(uVar12,4);
      unaff_R15 = pbVar10;
      if (pbVar11 != (byte *)0x0) {
        pub_142e32760(pbVar11,param_2,uVar12);
        uVar12 = param_3;
        goto LAB_140b42291;
      }
    }
    uStack_d8 = uVar12;
    pbStack_b8 = unaff_R15;
    pdb_142dc7e2a(4,uVar12);
  }
  else {
    lStack_f0 = 0;
    pbStack_e8 = (byte *)0x8;
    lStack_e0 = 0;
    uStack_d0 = 0;
    pbStack_c8 = (byte *)0x8;
    uStack_c0 = 0;
    pdb_142d896b0(&uStack_d0);
    lVar1 = lStack_e0;
    pbStack_c8[0] = 0;
    pbStack_c8[1] = 0;
    pbStack_c8[2] = 0;
    pbStack_c8[3] = 0;
    pbStack_c8[4] = 0;
    pbStack_c8[5] = 0;
    pbStack_c8[6] = 0;
    pbStack_c8[7] = 0;
    uStack_c0 = 1;
    if (lStack_e0 == lStack_f0) {
      pdb_142d7e830(&lStack_f0);
    }
    pbVar10 = pbStack_e8 + lVar1 * 0x18;
    pbVar10[0] = 0;
    pbVar10[1] = 0;
    pbVar10[2] = 0;
    pbVar10[3] = 0;
    pbVar10[4] = 0;
    pbVar10[5] = 0;
    pbVar10[6] = 0;
    pbVar10[7] = 0;
    *(ulonglong *)(pbStack_e8 + lVar1 * 0x18 + 8) = param_3 - 1;
    pbStack_e8[lVar1 * 0x18 + 0x10] = 0;
    fVar7 = _DAT_143006dc0;
    fVar6 = _DAT_142e36f28;
    lStack_e0 = lVar1 + 1;
    fVar16 = (float)*param_2 - (float)param_2[param_3 - 1];
    fVar18 = (float)((ulonglong)*param_2 >> 0x20) - (float)((ulonglong)param_2[param_3 - 1] >> 0x20)
    ;
    fVar16 = SQRT(fVar18 * fVar18 + fVar16 * fVar16);
    pbStack_b8 = (byte *)CONCAT44(pbStack_b8._4_4_,
                                  (int)CONCAT71((int7)(param_3 - 1 >> 8),fVar16 < _DAT_143057f74));
    while ((uVar12 = uStack_c0, pbVar10 = pbStack_c8, lVar8 = lStack_e0, lVar1 = lStack_e0,
           lStack_e0 != 0 && (lVar1 = lStack_e0 + -1, pbStack_e8[lVar1 * 0x18 + 0x10] != 2))) {
      puVar2 = (ulonglong *)(pbStack_e8 + lVar1 * 0x18);
      uVar3 = *(ulonglong *)(pbStack_e8 + lVar1 * 0x18 + 8);
      uVar4 = *puVar2;
      if ((uVar3 - uVar4) + 1 < 3) {
        lStack_e0 = lVar1;
        if (uStack_c0 == uStack_d0) {
          pdb_142d896b0(&uStack_d0);
        }
LAB_140b41f60:
        *(ulonglong *)(pbStack_c8 + uVar12 * 8) = uVar3;
        uStack_c0 = uVar12 + 1;
      }
      else {
        if (param_3 <= uVar4) {
          lStack_e0 = lVar1;
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar4,param_3,&UNK_143058908);
        }
        if (param_3 <= uVar3) {
          lStack_e0 = lVar1;
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar3,param_3,&UNK_143058920);
        }
        if (uVar3 < uVar4) {
          lStack_e0 = lVar1;
          pdb_142dc8420(uVar4,uVar3,param_3,&UNK_143058938);
          goto LAB_140b4237b;
        }
        fVar18 = 0.0;
        if ((uVar3 == uVar4) || (uVar4 * 8 + 8 == uVar3 * 8)) {
          uVar13 = 0;
        }
        else {
          fVar17 = (float)param_2[uVar4];
          fVar19 = (float)((ulonglong)param_2[uVar4] >> 0x20);
          fVar20 = (float)param_2[uVar3];
          fVar21 = (float)((ulonglong)param_2[uVar3] >> 0x20);
          fVar22 = fVar20 - fVar17;
          fVar23 = fVar21 - fVar19;
          fVar24 = fVar23 * fVar23 + fVar22 * fVar22;
          if (fVar24 <= fVar7) {
            fVar24 = fVar7;
          }
          fVar18 = 0.0;
          uVar14 = 1;
          uVar13 = 0;
          do {
            fVar25 = (float)param_2[uVar4 + uVar14];
            fVar26 = (float)((ulonglong)param_2[uVar4 + uVar14] >> 0x20);
            fVar27 = ((fVar26 - fVar19) * fVar23 + (fVar25 - fVar17) * fVar22) / fVar24;
            fVar25 = fVar25 - (fVar27 * fVar20 + (fVar6 - fVar27) * fVar17);
            fVar26 = fVar26 - (fVar27 * fVar21 + (fVar6 - fVar27) * fVar19);
            fVar25 = SQRT(fVar26 * fVar26 + fVar25 * fVar25);
            if (0x7f7fffff < (uint)ABS(fVar25)) {
              lStack_e0 = lVar1;
                    /* WARNING: Subroutine does not return */
              pdb_142dc83b0(&UNK_143058950,0x26,&UNK_143058978);
            }
            uVar9 = uVar14;
            if (fVar25 <= fVar18) {
              fVar25 = fVar18;
              uVar9 = uVar13;
            }
            uVar13 = uVar9;
            fVar18 = fVar25;
            uVar14 = uVar14 + 1;
          } while (uVar3 - uVar4 != uVar14);
        }
        if ((fVar18 <= param_4) && ((fVar16 < fVar18 & (byte)pbStack_b8) == 0)) {
          lStack_e0 = lVar1;
          if (uStack_c0 == uStack_d0) {
            pdb_142d896b0(&uStack_d0);
          }
          goto LAB_140b41f60;
        }
        uVar3 = uVar13 + uVar4;
        *puVar2 = uVar3;
        *(undefined1 *)(puVar2 + 2) = 0;
        if (uVar13 < 3) {
          if (uStack_c0 == uStack_d0) {
            pdb_142d896b0(&uStack_d0);
          }
          *(ulonglong *)(pbStack_c8 + uVar12 * 8) = uVar3;
          uStack_c0 = uVar12 + 1;
          pbStack_b8 = (byte *)((ulonglong)pbStack_b8 & 0xffffffff00000000);
        }
        else {
          if (lStack_e0 == lStack_f0) {
            pdb_142d7e830(&lStack_f0);
          }
          *(ulonglong *)(pbStack_e8 + lVar8 * 0x18) = uVar4;
          *(ulonglong *)(pbStack_e8 + lVar8 * 0x18 + 8) = uVar3;
          pbStack_e8[lVar8 * 0x18 + 0x10] = 0;
          lStack_e0 = lVar8 + 1;
          pbStack_b8 = (byte *)((ulonglong)pbStack_b8 & 0xffffffff00000000);
        }
      }
    }
    lStack_e0 = lVar1;
    uVar3 = uStack_c0 * 8;
    if (uVar3 < 0x7ffffffffffffff9 && uStack_c0 >> 0x3d == 0) {
      if (uVar3 == 0) {
        pbStack_b8 = (byte *)0x8;
        uStack_d8 = 0;
        uVar4 = uStack_d8;
joined_r0x000140b422ef:
        uStack_d8 = uVar4;
        if (uVar12 != 0) {
          pub_142e32760(pbStack_b8,pbVar10,uVar3);
        }
        pbStack_108 = pbStack_c8 + uStack_c0 * 8;
        pbStack_110 = pbStack_c8;
        puStack_100 = param_2;
        uStack_f8 = param_3;
        pdb_141600290(&uStack_128,&pbStack_110);
        *param_1 = uStack_d8;
        param_1[1] = (ulonglong)pbStack_b8;
        param_1[2] = uVar12;
        param_1[5] = uStack_118;
        param_1[3] = uStack_128;
        param_1[4] = uStack_120;
        if (uStack_d0 != 0) {
          pub_1406abac0(pbStack_c8,uStack_d0 << 3,8);
        }
        if (lStack_f0 == 0) {
          return param_1;
        }
        pub_1406abac0(pbStack_e8,lStack_f0 * 0x18,8);
        return param_1;
      }
      pdb_14007ee60();
      uVar15 = 8;
      pbStack_b8 = pub_1406abab0(uVar3,8);
      uVar4 = uVar12;
      if (pbStack_b8 != (byte *)0x0) goto joined_r0x000140b422ef;
    }
    else {
      uVar15 = 0;
    }
    pdb_142dc7e2a(uVar15,uVar3);
  }
LAB_140b4237b:
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
}

