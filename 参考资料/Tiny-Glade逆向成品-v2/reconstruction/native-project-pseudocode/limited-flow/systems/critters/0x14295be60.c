// VA 0x14295be60, PDB extent 4761 bytes
// system_critters::wren::update_wrens
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/critters/src/wren.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_critters::wren::update_wrens
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/critters/src/wren.rs
   Extent: 4761 */

void pdb_14295be60(void)

{
  uint *puVar1;
  longlong lVar2;
  ulonglong *puVar3;
  longlong *plVar4;
  char cVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 uVar14;
  undefined4 uVar15;
  float fVar16;
  longlong lVar17;
  float *pfVar18;
  undefined8 *puVar19;
  ulonglong uVar20;
  longlong lVar21;
  int *piVar22;
  longlong lVar23;
  longlong lVar24;
  ulonglong uVar25;
  longlong lVar26;
  uint uVar27;
  uint uVar28;
  longlong lVar29;
  uint *puVar30;
  undefined8 *in_R9;
  longlong lVar31;
  longlong lVar32;
  undefined1 auVar33 [16];
  float fVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  longlong *in_stack_00000028;
  longlong *in_stack_00000038;
  longlong *in_stack_00000040;
  longlong lStack_250;
  longlong lStack_248;
  undefined8 *puStack_240;
  longlong lStack_238;
  longlong lStack_220;
  longlong lStack_208;
  longlong lStack_1f0;
  longlong lStack_1b0;
  undefined8 uStack_188;
  float *pfStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined4 uStack_168;
  undefined8 uStack_128;
  float fStack_120;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  
  fVar16 = _UNK_1433e773c;
  fVar40 = _DAT_1433e7730;
  fVar38 = _DAT_142e36f50;
  lVar9 = *in_stack_00000028;
  lVar10 = in_stack_00000028[1];
  puVar30 = *(uint **)(lVar9 + 0xf8);
  puVar1 = puVar30 + *(longlong *)(lVar9 + 0x100);
  cVar5 = *(char *)(lVar9 + 0x108);
  uVar11 = *in_R9;
  lVar32 = 0;
  lStack_220 = 8;
  lStack_250 = 0;
  lStack_248 = 0;
  uVar27 = 0;
  do {
    if (cVar5 == '\0') {
      if (uVar27 == (uint)lVar32) {
        do {
          if (puVar30 == puVar1) goto LAB_14295c2c5;
          uVar27 = *puVar30;
          puVar30 = puVar30 + 1;
          lVar32 = *(longlong *)(*(longlong *)(lVar10 + 0x100) + 0x58 + (ulonglong)uVar27 * 0xa0);
        } while (lVar32 == 0);
        lVar17 = *(longlong *)(lVar10 + 0x100) + (ulonglong)uVar27 * 0xa0;
        uVar20 = (ulonglong)*(uint *)(lVar17 + 0x94);
        in_R9 = (undefined8 *)(uVar20 * 9);
        lVar2 = *(longlong *)(lVar10 + 0x1a0) + uVar20 * 0x48;
        uVar20 = *(ulonglong *)(*(longlong *)(lVar10 + 0x1a0) + 0x40 + uVar20 * 0x48);
        if (*(ulonglong *)(lVar9 + 0x110) < uVar20) {
          in_R9 = *(undefined8 **)(lVar2 + 0x38);
          puVar3 = in_R9 + *(ulonglong *)(lVar9 + 0x110);
          if (*puVar3 == 0) goto LAB_14295c0f4;
          in_R9 = *(undefined8 **)(lVar2 + 0x18);
          lStack_250 = in_R9[~*puVar3 * 6 + 2];
          uVar25 = *(ulonglong *)(lVar9 + 0x118);
          if (uVar25 < uVar20) goto LAB_14295c10e;
LAB_14295c145:
          lStack_248 = 0;
        }
        else {
LAB_14295c0f4:
          lStack_250 = 0;
          uVar25 = *(ulonglong *)(lVar9 + 0x118);
          if (uVar20 <= uVar25) goto LAB_14295c145;
LAB_14295c10e:
          uVar20 = *(ulonglong *)(*(longlong *)(lVar2 + 0x38) + uVar25 * 8);
          if (uVar20 == 0) goto LAB_14295c145;
          lStack_248 = *(longlong *)(*(longlong *)(lVar2 + 0x18) + 0x10 + ~uVar20 * 0x30);
        }
        lStack_220 = *(longlong *)(lVar17 + 0x50);
        uVar27 = 0;
      }
      uVar6 = ~*(uint *)(lStack_220 + 8 + (ulonglong)uVar27 * 0x10);
    }
    else {
      uVar6 = uVar27;
      if (uVar27 == (uint)lVar32) {
        do {
          if (puVar30 == puVar1) goto LAB_14295c2c5;
          uVar27 = *puVar30;
          puVar30 = puVar30 + 1;
          lVar32 = *(longlong *)(*(longlong *)(lVar10 + 0x1a0) + 0x10 + (ulonglong)uVar27 * 0x48);
        } while (lVar32 == 0);
        lVar2 = *(longlong *)(lVar10 + 0x1a0) + (ulonglong)uVar27 * 0x48;
        uVar20 = *(ulonglong *)(lVar2 + 0x40);
        if ((*(ulonglong *)(lVar9 + 0x110) < uVar20) &&
           (uVar25 = *(ulonglong *)(*(longlong *)(lVar2 + 0x38) + *(ulonglong *)(lVar9 + 0x110) * 8)
           , uVar25 != 0)) {
          lStack_250 = *(longlong *)(*(longlong *)(lVar2 + 0x18) + 0x10 + ~uVar25 * 0x30);
          uVar25 = *(ulonglong *)(lVar9 + 0x118);
          if (uVar20 <= uVar25) goto LAB_14295c136;
LAB_14295c0cc:
          uVar20 = *(ulonglong *)(*(longlong *)(lVar2 + 0x38) + uVar25 * 8);
          if (uVar20 == 0) goto LAB_14295c136;
          lStack_248 = *(longlong *)(*(longlong *)(lVar2 + 0x18) + 0x10 + ~uVar20 * 0x30);
        }
        else {
          lStack_250 = 0;
          uVar25 = *(ulonglong *)(lVar9 + 0x118);
          if (uVar25 < uVar20) goto LAB_14295c0cc;
LAB_14295c136:
          lStack_248 = 0;
        }
        uVar27 = 0;
        uVar6 = uVar27;
      }
    }
    lVar2 = lStack_250 + (ulonglong)uVar6 * 0x28;
    pdb_140b40bc0(&uStack_128,(ulonglong)uVar6 * 0x30 + lStack_248);
    if ((DAT_143cb2c08 != '\0') && (uVar6 = *(uint *)(lVar2 + 0x10), uVar6 != 0)) {
      fVar43 = *(float *)(lVar2 + 0x14);
      fVar34 = *(float *)(lVar2 + 0x18);
      fVar37 = *(float *)(lVar2 + 0x1c);
      fVar41 = fVar37 * fStack_108 + fVar34 * fStack_118 + fVar43 * (float)uStack_128 + fStack_f8;
      fVar42 = fVar37 * fStack_104 + fVar34 * fStack_114 + fVar43 * uStack_128._4_4_ + fStack_f4;
      fVar43 = fVar37 * fStack_100 + fVar34 * fStack_110 + fVar43 * fStack_120 + fStack_f0;
      uVar28 = 0;
      do {
        pdb_14007ee60();
        pfVar18 = (float *)pub_1406abab0(0x18,4);
        if (pfVar18 == (float *)0x0) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc7e11(4,0x18);
        }
        uVar20 = (ulonglong)uVar28;
        uVar28 = uVar28 + 1;
        fVar34 = (float)uVar20 * fVar38 * 0.0;
        fVar37 = fVar41 + fVar34;
        fVar39 = (float)uVar20 * fVar38 + fVar42;
        fVar34 = fVar34 + fVar43;
        *pfVar18 = fVar37 + fVar40;
        pfVar18[1] = fVar39;
        pfVar18[2] = fVar34;
        pfVar18[3] = fVar37 + fVar16;
        *(ulonglong *)(pfVar18 + 4) = CONCAT44(fVar34,fVar39);
        uStack_188 = 2;
        uStack_178 = 2;
        pfStack_180 = pfVar18;
        pdb_140a89130(&uStack_170,&uStack_188);
        pdb_140a89170(&uStack_170,uVar11);
      } while (uVar6 != uVar28);
    }
    uVar27 = uVar27 + 1;
  } while( true );
LAB_14295c2c5:
  lVar9 = *in_stack_00000038;
  lVar10 = in_stack_00000038[1];
  uVar7 = *(undefined4 *)((longlong)in_stack_00000038 + 0x14);
  puVar30 = *(uint **)(lVar9 + 0xf8);
  puVar1 = puVar30 + *(longlong *)(lVar9 + 0x100);
  cVar5 = *(char *)(lVar9 + 0x108);
  lVar32 = *in_stack_00000040;
  lVar2 = in_stack_00000040[1];
  uVar8 = *(undefined4 *)((longlong)in_stack_00000040 + 0x14);
  lStack_1f0 = 8;
  lStack_220 = 0;
  uVar27 = 0;
  lVar17 = 0;
  lStack_238 = 0;
  puStack_240 = (undefined8 *)0x0;
  lStack_1b0 = 8;
  while( true ) {
    uVar15 = _DAT_142e37988;
    if (cVar5 == '\0') {
      if (uVar27 == (uint)lVar17) {
        if (puVar30 == puVar1) break;
        while( true ) {
          lVar17 = *(longlong *)(*(longlong *)(lVar10 + 0x100) + 0x58 + (ulonglong)*puVar30 * 0xa0);
          if (lVar17 != 0) break;
          puVar30 = puVar30 + 1;
          if (puVar30 == puVar1) goto LAB_14295cc43;
        }
        lVar21 = *(longlong *)(lVar10 + 0x100) + (ulonglong)*puVar30 * 0xa0;
        uVar20 = (ulonglong)*(uint *)(lVar21 + 0x94);
        in_R9 = *(undefined8 **)(lVar9 + 0x118);
        lVar23 = *(longlong *)(*(longlong *)(lVar10 + 0x1a0) + 0x18 + uVar20 * 0x48);
        lVar24 = *(longlong *)(*(longlong *)(lVar10 + 0x1a0) + 0x38 + uVar20 * 0x48);
        puStack_240 = *(undefined8 **)
                       (lVar23 + 0x10 +
                       ~*(ulonglong *)(lVar24 + *(longlong *)(lVar9 + 0x110) * 8) * 0x30);
        lVar24 = ~*(ulonglong *)(lVar24 + (longlong)in_R9 * 8) * 0x30;
        lStack_238 = *(longlong *)(lVar23 + 0x10 + lVar24);
        lStack_208 = *(longlong *)(lVar23 + 0x28 + lVar24);
        lStack_1f0 = *(longlong *)(lVar21 + 0x50);
        puVar30 = puVar30 + 1;
        uVar27 = 0;
        uVar20 = 0;
      }
      else {
        uVar20 = (ulonglong)uVar27;
      }
      puVar19 = (undefined8 *)(lStack_1f0 + uVar20 * 0x10);
      uVar20 = (ulonglong)~*(uint *)(lStack_1f0 + 8 + uVar20 * 0x10);
    }
    else {
      if (uVar27 == (uint)lVar17) {
        if (puVar30 == puVar1) break;
        while( true ) {
          lVar17 = *(longlong *)(*(longlong *)(lVar10 + 0x1a0) + 0x10 + (ulonglong)*puVar30 * 0x48);
          if (lVar17 != 0) break;
          puVar30 = puVar30 + 1;
          if (puVar30 == puVar1) goto LAB_14295cc43;
        }
        lVar23 = *(longlong *)(lVar10 + 0x1a0) + (ulonglong)*puVar30 * 0x48;
        lStack_1b0 = *(longlong *)(lVar23 + 8);
        lVar24 = *(longlong *)(lVar23 + 0x18);
        in_R9 = *(undefined8 **)
                 (lVar24 + 0x10 +
                 ~*(ulonglong *)(*(longlong *)(lVar23 + 0x38) + *(longlong *)(lVar9 + 0x110) * 8) *
                 0x30);
        lVar23 = ~*(ulonglong *)(*(longlong *)(lVar23 + 0x38) + *(longlong *)(lVar9 + 0x118) * 8) *
                 0x30;
        lStack_238 = *(longlong *)(lVar24 + 0x10 + lVar23);
        lStack_208 = *(longlong *)(lVar24 + 0x28 + lVar23);
        puVar30 = puVar30 + 1;
        uVar27 = 0;
        puStack_240 = in_R9;
      }
      uVar20 = (ulonglong)uVar27;
      puVar19 = (undefined8 *)(lStack_1b0 + uVar20 * 8);
    }
    lVar23 = uVar20 * 0x50 + lStack_238;
    if ((int)*puVar19 == 0) break;
    uVar27 = uVar27 + 1;
    *(undefined4 *)(lStack_208 + uVar20 * 4) = uVar7;
    lStack_220 = lStack_220 + 1;
    uStack_168 = *(undefined4 *)(puStack_240 + uVar20 * 6 + 3);
    uStack_170 = puStack_240[uVar20 * 6 + 2];
    pdb_140a8e190(lVar23,&uStack_170);
    uVar6 = *(uint *)(lVar23 + 0x30);
    if (uVar6 != 2) {
                    /* WARNING: Could not recover jumptable at 0x00014295c650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_143604ec8 + *(int *)(&UNK_143604ec8 + (ulonglong)uVar6 * 4)))();
      return;
    }
  }
LAB_14295cc43:
  _DAT_143cb2c00 = lStack_220;
  puVar30 = *(uint **)(lVar32 + 0xf8);
  puVar1 = puVar30 + *(longlong *)(lVar32 + 0x100);
  cVar5 = *(char *)(lVar32 + 0x108);
  lVar17 = 0;
  lStack_208 = 8;
  lVar23 = 0;
  uVar27 = 0;
  do {
    do {
      if (cVar5 == '\0') {
        if (uVar27 == (uint)lVar17) {
          if (puVar30 == puVar1) {
            return;
          }
          while( true ) {
            lVar17 = *(longlong *)(*(longlong *)(lVar2 + 0x100) + 0x58 + (ulonglong)*puVar30 * 0xa0)
            ;
            if (lVar17 != 0) break;
            puVar30 = puVar30 + 1;
            if (puVar30 == puVar1) {
              return;
            }
          }
          lVar21 = *(longlong *)(lVar2 + 0x100) + (ulonglong)*puVar30 * 0xa0;
          uVar20 = (ulonglong)*(uint *)(lVar21 + 0x94);
          lVar24 = *(longlong *)(*(longlong *)(lVar2 + 0x1a0) + 0x18 + uVar20 * 0x48);
          lVar29 = ~*(ulonglong *)
                     (*(longlong *)(*(longlong *)(lVar2 + 0x1a0) + 0x38 + uVar20 * 0x48) +
                     *(longlong *)(lVar32 + 0x110) * 8) * 0x30;
          lVar23 = *(longlong *)(lVar24 + 0x10 + lVar29);
          in_R9 = *(undefined8 **)(lVar24 + 0x28 + lVar29);
          lStack_208 = *(longlong *)(lVar21 + 0x50);
          puVar30 = puVar30 + 1;
          uVar27 = 0;
          uVar20 = 0;
        }
        else {
          uVar20 = (ulonglong)uVar27;
        }
        uVar6 = ~*(uint *)(lStack_208 + 8 + uVar20 * 0x10);
      }
      else {
        uVar6 = uVar27;
        if (uVar27 == (uint)lVar17) {
          if (puVar30 == puVar1) {
            return;
          }
          while( true ) {
            lVar17 = *(longlong *)(*(longlong *)(lVar2 + 0x1a0) + 0x10 + (ulonglong)*puVar30 * 0x48)
            ;
            if (lVar17 != 0) break;
            puVar30 = puVar30 + 1;
            if (puVar30 == puVar1) {
              return;
            }
          }
          lVar23 = *(longlong *)(lVar2 + 0x1a0) + (ulonglong)*puVar30 * 0x48;
          lVar24 = *(longlong *)(lVar23 + 0x18);
          lVar21 = ~*(ulonglong *)(*(longlong *)(lVar23 + 0x38) + *(longlong *)(lVar32 + 0x110) * 8)
                   * 0x30;
          lVar23 = *(longlong *)(lVar24 + 0x10 + lVar21);
          in_R9 = *(undefined8 **)(lVar24 + 0x28 + lVar21);
          puVar30 = puVar30 + 1;
          uVar27 = 0;
          uVar6 = uVar27;
        }
      }
      plVar4 = (longlong *)(lVar23 + (ulonglong)uVar6 * 0x18);
      uVar27 = uVar27 + 1;
      *(undefined4 *)((longlong)in_R9 + (ulonglong)uVar6 * 4) = uVar8;
      lVar24 = plVar4[1];
    } while (lVar24 == 0);
    lVar21 = *plVar4;
    lVar29 = 0;
    do {
      if (*(int *)(lVar21 + lVar29) != 0) {
        uVar20 = (ulonglong)~(uint)*(undefined8 *)(lVar21 + lVar29);
        if ((((uVar20 < *(ulonglong *)(lVar10 + 0x10)) &&
             (piVar22 = (int *)(uVar20 * 0x18 + *(longlong *)(lVar10 + 8)),
             piVar22[4] == (int)((ulonglong)*(undefined8 *)(lVar21 + lVar29) >> 0x20))) &&
            (*piVar22 != 0)) &&
           ((uVar20 = *(ulonglong *)(piVar22 + 2),
            (uVar20 & 0xffffffff) < *(ulonglong *)(lVar9 + 0x38) &&
            ((*(ulonglong *)(*(longlong *)(lVar9 + 0x28) + (uVar20 >> 6 & 0x3ffffff) * 8) >>
              (uVar20 & 0x3f) & 1) != 0)))) {
          lVar12 = *(longlong *)(*(longlong *)(lVar10 + 0x1a0) + 0x18 + (uVar20 >> 0x20) * 0x48);
          lVar31 = *(longlong *)(*(longlong *)(lVar10 + 0x1a0) + 0x38 + (uVar20 >> 0x20) * 0x48);
          lVar26 = ~*(ulonglong *)(lVar31 + *(longlong *)(lVar9 + 0x110) * 8) * 0x30;
          lVar13 = *(longlong *)(lVar12 + 0x10 + lVar26);
          lVar26 = *(longlong *)(lVar12 + 0x28 + lVar26);
          lVar12 = *(longlong *)
                    (lVar12 + 0x10 +
                    ~*(ulonglong *)(lVar31 + *(longlong *)(lVar9 + 0x118) * 8) * 0x30);
          uVar20 = (ulonglong)(uint)~piVar22[1];
          lVar31 = uVar20 * 0x30;
          uVar14 = *(undefined8 *)(lVar21 + 8 + lVar29);
          *(undefined4 *)(lVar13 + 0x18 + lVar31) = *(undefined4 *)(lVar21 + 0x10 + lVar29);
          *(undefined8 *)(lVar13 + 0x10 + lVar31) = uVar14;
          *(undefined4 *)(lVar13 + lVar31) = 0;
          *(undefined4 *)(lVar26 + uVar20 * 4) = uVar7;
          *(undefined4 *)(lVar13 + 8 + lVar31) = 0;
          auVar33 = *(undefined1 (*) [16])(lVar13 + lVar31);
          fVar38 = auVar33._8_4_ * auVar33._8_4_ + auVar33._0_4_ * auVar33._0_4_;
          fVar40 = auVar33._12_4_ * auVar33._12_4_ + auVar33._4_4_ * auVar33._4_4_;
          auVar35._4_4_ = fVar38;
          auVar35._0_4_ = fVar38;
          auVar35._8_4_ = fVar38;
          auVar35._12_4_ = fVar38;
          auVar36._4_4_ = fVar40 + fVar38;
          auVar36._0_4_ = fVar40 + fVar38;
          auVar36._8_4_ = fVar40 + fVar38;
          auVar36._12_4_ = fVar40 + fVar38;
          auVar36 = sqrtps(auVar35,auVar36);
          auVar33 = divps(auVar33,auVar36);
          *(undefined4 *)(lVar26 + uVar20 * 4) = uVar7;
          *(undefined1 (*) [16])(lVar13 + lVar31) = auVar33;
          if (*(int *)(lVar12 + 0x30 + uVar20 * 0x50) == 0) goto LAB_14295cfd8;
        }
        *(undefined4 *)(lVar21 + lVar29) = 0;
      }
LAB_14295cfd8:
      if (DAT_143cb2bec != '\0') {
        fStack_120 = *(float *)(lVar21 + 0x10 + lVar29);
        uStack_128 = *(undefined8 *)(lVar21 + 8 + lVar29);
        pdb_140a88230(&uStack_170,&uStack_128);
        pdb_140a882b0(&uStack_128,&uStack_170,uVar15);
        uStack_188 = CONCAT44(uStack_188._4_4_,(uint)(*(int *)(lVar21 + lVar29) != 0));
        pdb_140a88270(&uStack_170,&uStack_128,&uStack_188);
        pdb_140a88260(&uStack_170,uVar11);
      }
      lVar29 = lVar29 + 0x18;
    } while (lVar24 * 0x18 != lVar29);
  } while( true );
}

