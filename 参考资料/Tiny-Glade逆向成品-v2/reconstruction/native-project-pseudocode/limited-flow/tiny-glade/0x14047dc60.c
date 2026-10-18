// VA 0x14047dc60, PDB extent 4270 bytes
// iced_graphics::damage::regions<enum2$<iced_tiny_skia::primitive::Custom> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   iced_graphics::damage::regions<enum2$<iced_tiny_skia::primitive::Custom> >
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
   Extent: 4270 */

undefined8 * pdb_14047dc60(undefined8 *param_1,uint *param_2,uint *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  int iVar17;
  uint uVar18;
  undefined8 *puVar19;
  byte *pbVar20;
  float *pfVar21;
  longlong lVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fStack_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  float fStack_208;
  float fStack_204;
  float fStack_200;
  float fStack_1fc;
  undefined8 uStack_1f8;
  longlong lStack_1f0;
  longlong lStack_1e8;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  longlong lStack_1b8;
  longlong lStack_1b0;
  longlong lStack_1a8;
  longlong lStack_1a0;
  longlong lStack_198;
  ulonglong uStack_190;
  ulonglong uStack_188;
  longlong lStack_180;
  longlong lStack_178;
  longlong lStack_e8;
  longlong lStack_e0;
  undefined8 uStack_d8;
  longlong lStack_d0;
  uint *puStack_c8;
  longlong lStack_c0;
  longlong lStack_b8;
  undefined8 uStack_b0;
  longlong lStack_a8;
  uint *puStack_a0;
  
  uVar12 = *param_2 - 3;
  if (*param_2 < 3) {
    uVar12 = 4;
  }
  uVar5 = *param_3;
  switch(uVar12) {
  case 7:
    if (uVar5 == 10) {
      lStack_1b8 = *(longlong *)(param_2 + 4);
      uVar6 = *(ulonglong *)(param_2 + 6);
      lStack_1a0 = *(longlong *)(param_3 + 4);
      uVar7 = *(ulonglong *)(param_3 + 6);
      lStack_1a8 = uVar6 * 0x120 + lStack_1b8;
      lVar22 = uVar7 * 0x120 + lStack_1a0;
      uStack_188 = uVar6;
      if (uVar7 < uVar6) {
        uStack_188 = uVar7;
      }
      if (uVar6 == uVar7) {
        uStack_1f8 = 0;
        uStack_1d8 = 0;
        lStack_198 = 0;
        lStack_1b0 = lStack_1a8;
        lStack_1a8 = lStack_1a0;
        lStack_1a0 = lVar22;
        uStack_190 = uStack_188;
        pdb_1401795a0(param_1,&uStack_1f8);
        return param_1;
      }
      lStack_178 = lStack_1b8;
      if (uVar6 < uVar7) {
        lStack_178 = lStack_1a0;
        uVar6 = uVar7;
      }
      uStack_190 = 0;
      lStack_180 = uStack_188 * 0x120 + lStack_178;
      lStack_178 = uVar6 * 0x120 + lStack_178;
      uStack_1f8 = 1;
      lStack_1f0 = 0;
      uStack_1d0 = 0;
      lStack_1b0 = lStack_1b8;
      lStack_198 = lVar22;
      pdb_14017d5a0(param_1,&uStack_1f8);
      return param_1;
    }
    break;
  case 8:
    if (uVar5 == 0xb) {
      fVar1 = (float)param_2[4];
      fVar2 = (float)param_3[4];
      if ((fVar1 == fVar2) && (!NAN(fVar1) && !NAN(fVar2))) {
        if (((float)param_2[5] == (float)param_3[5]) &&
           (!NAN((float)param_2[5]) && !NAN((float)param_3[5]))) {
          if (((float)param_2[6] == (float)param_3[6]) &&
             (!NAN((float)param_2[6]) && !NAN((float)param_3[6]))) {
            if (((float)param_2[7] == (float)param_3[7]) &&
               (!NAN((float)param_2[7]) && !NAN((float)param_3[7]))) {
              pdb_14047dc60(&uStack_1f8,*(undefined8 *)(param_2 + 2),*(undefined8 *)(param_3 + 2));
              lStack_d0 = lStack_1e8 * 0x10 + lStack_1f0;
              lStack_e8 = lStack_1f0;
              lStack_e0 = lStack_1f0;
              uStack_d8 = uStack_1f8;
              puStack_c8 = param_2 + 4;
              pdb_140174060(param_1,&lStack_e8);
              return param_1;
            }
          }
        }
      }
      pdb_14007ee60();
      pfVar21 = (float *)pub_1406abab0(0x20,4);
      fVar16 = _UNK_142e47bcc;
      fVar15 = _UNK_142e47bc8;
      fVar14 = _UNK_142e47bc4;
      fVar13 = _UNK_142e47bc0;
      if (pfVar21 == (float *)0x0) goto LAB_14047ecef;
      fVar23 = (float)param_2[5] + _UNK_142e47bc4;
      fVar24 = (float)*(undefined8 *)(param_2 + 6) + _UNK_142e47bc8;
      fVar25 = (float)((ulonglong)*(undefined8 *)(param_2 + 6) >> 0x20) + _UNK_142e47bcc;
      fVar3 = (float)param_3[5];
      *pfVar21 = fVar1 + _UNK_142e47bc0;
      pfVar21[1] = fVar23;
      pfVar21[2] = fVar24;
      pfVar21[3] = fVar25;
      uVar4 = *(undefined8 *)(param_3 + 6);
      pfVar21[4] = fVar2 + fVar13;
      pfVar21[5] = fVar3 + fVar14;
      pfVar21[6] = (float)uVar4 + fVar15;
      pfVar21[7] = (float)((ulonglong)uVar4 >> 0x20) + fVar16;
      goto code_r0x00014047ecb6;
    }
    break;
  case 9:
    if (uVar5 != 0xc) break;
    auVar8._4_4_ = -(uint)((float)param_3[5] == (float)param_2[5]);
    auVar8._0_4_ = -(uint)((float)param_3[4] == (float)param_2[4]);
    auVar8._8_4_ = -(uint)((float)param_3[6] == (float)param_2[6]);
    auVar8._12_4_ = -(uint)((float)param_3[7] == (float)param_2[7]);
    iVar17 = movmskps(4,auVar8);
    if ((((iVar17 == 0xf) &&
         (auVar9._4_4_ = -(uint)((float)param_3[9] == (float)param_2[9]),
         auVar9._0_4_ = -(uint)((float)param_3[8] == (float)param_2[8]),
         auVar9._8_4_ = -(uint)((float)param_3[10] == (float)param_2[10]),
         auVar9._12_4_ = -(uint)((float)param_3[0xb] == (float)param_2[0xb]),
         iVar17 = movmskps(0xf,auVar9), iVar17 == 0xf)) &&
        (auVar10._4_4_ = -(uint)((float)param_3[0xd] == (float)param_2[0xd]),
        auVar10._0_4_ = -(uint)((float)param_3[0xc] == (float)param_2[0xc]),
        auVar10._8_4_ = -(uint)((float)param_3[0xe] == (float)param_2[0xe]),
        auVar10._12_4_ = -(uint)((float)param_3[0xf] == (float)param_2[0xf]),
        iVar17 = movmskps(0xf,auVar10), iVar17 == 0xf)) &&
       (auVar11._4_4_ = -(uint)((float)param_3[0x11] == (float)param_2[0x11]),
       auVar11._0_4_ = -(uint)((float)param_3[0x10] == (float)param_2[0x10]),
       auVar11._8_4_ = -(uint)((float)param_3[0x12] == (float)param_2[0x12]),
       auVar11._12_4_ = -(uint)((float)param_3[0x13] == (float)param_2[0x13]),
       iVar17 = movmskps(0xf,auVar11), iVar17 == 0xf)) {
      pdb_14047dc60(&uStack_1f8,*(undefined8 *)(param_2 + 0x14),*(undefined8 *)(param_3 + 0x14));
      lStack_a8 = lStack_1e8 * 0x10 + lStack_1f0;
      lStack_c0 = lStack_1f0;
      lStack_b8 = lStack_1f0;
      uStack_b0 = uStack_1f8;
      puStack_a0 = param_2 + 4;
      pdb_140173920(param_1,&lStack_c0);
      return param_1;
    }
    goto LAB_14047ebff;
  case 10:
    if (uVar5 == 0xd) {
      if (*(longlong *)(param_2 + 2) == *(longlong *)(param_3 + 2)) {
        *param_1 = 0;
        param_1[1] = 4;
        param_1[2] = 0;
        return param_1;
      }
      goto LAB_14047ebff;
    }
  }
  uVar18 = 4;
  if (2 < uVar5) {
    uVar18 = uVar5 - 3;
  }
  if (uVar12 == uVar18) {
                    /* WARNING: Could not recover jumptable at 0x00014047df8f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar19 = (undefined8 *)
              (*(code *)(&UNK_142f5ca08 + *(int *)(&UNK_142f5ca08 + (ulonglong)uVar12 * 4)))(4);
    return puVar19;
  }
LAB_14047ebff:
  pdb_140144ba0(&fStack_218);
  pdb_140144ba0(&fStack_208,param_3);
  if ((fStack_218 == fStack_208) && (!NAN(fStack_218) && !NAN(fStack_208))) {
    if ((fStack_214 == fStack_204) && (!NAN(fStack_214) && !NAN(fStack_204))) {
      if ((fStack_210 == fStack_200) && (!NAN(fStack_210) && !NAN(fStack_200))) {
        if ((fStack_20c == fStack_1fc) && (!NAN(fStack_20c) && !NAN(fStack_1fc))) {
          pdb_14007ee60();
          pbVar20 = pub_1406abab0(0x10,4);
          if (pbVar20 != (byte *)0x0) {
            *(ulonglong *)pbVar20 = CONCAT44(fStack_214,fStack_218);
            *(ulonglong *)(pbVar20 + 8) = CONCAT44(fStack_20c,fStack_210);
            *param_1 = 1;
            param_1[1] = pbVar20;
            param_1[2] = 1;
            return param_1;
          }
                    /* WARNING: Subroutine does not return */
          pdb_142dc7e11(4,0x10);
        }
      }
    }
  }
  pdb_14007ee60();
  pfVar21 = (float *)pub_1406abab0(0x20,4);
  if (pfVar21 == (float *)0x0) {
LAB_14047ecef:
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(4,0x20);
  }
  *(ulonglong *)pfVar21 = CONCAT44(fStack_214,fStack_218);
  *(ulonglong *)(pfVar21 + 2) = CONCAT44(fStack_20c,fStack_210);
  *(ulonglong *)(pfVar21 + 4) = CONCAT44(fStack_204,fStack_208);
  *(ulonglong *)(pfVar21 + 6) = CONCAT44(fStack_1fc,fStack_200);
code_r0x00014047ecb6:
  *param_1 = 2;
  param_1[1] = pfVar21;
  param_1[2] = 2;
  return param_1;
}

