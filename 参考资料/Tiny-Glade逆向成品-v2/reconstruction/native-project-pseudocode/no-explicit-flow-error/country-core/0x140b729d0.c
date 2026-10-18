// VA 0x140b729d0, PDB extent 3451 bytes
// country_core::systems::wall::shapes::rectangle::signifier_edit_dims_line::signifier_edit_dims
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/shapes/rectangle/signifier_edit_dims_line.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::wall::shapes::rectangle::signifier_edit_dims_line::signifier_edit_dims
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/shapes/rectangle/signifier_edit_dims_line.rs
   Extent: 3451 */

void pdb_140b729d0(longlong *param_1,byte *param_2,longlong *param_3,undefined8 *param_4)

{
  uint *puVar1;
  undefined4 uVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  code *pcVar5;
  uint uVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  byte *arg0;
  byte *pbVar11;
  byte *pbVar12;
  ulonglong uVar13;
  byte *pbVar14;
  byte *pbVar15;
  longlong lVar16;
  longlong lVar17;
  byte *pbVar18;
  ulonglong uVar19;
  longlong lVar20;
  byte *pbVar21;
  longlong lVar22;
  undefined4 *puVar23;
  longlong lVar24;
  longlong *plVar25;
  uint *puVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  uint uVar29;
  float fVar30;
  float fVar31;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1bc;
  byte *pbStack_1b8;
  code *pcStack_1b0;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 uStack_188;
  longlong lStack_180;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined8 uStack_168;
  undefined4 *puStack_160;
  longlong *plStack_158;
  longlong lStack_150;
  undefined4 uStack_148;
  longlong lStack_140;
  longlong lStack_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  longlong lStack_128;
  longlong lStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 uStack_d8;
  longlong lStack_d0;
  undefined8 uStack_c8;
  longlong *plStack_c0;
  byte *pbStack_b8;
  byte *pbStack_b0;
  byte *pbStack_a8;
  byte *pbStack_a0;
  undefined1 uStack_91;
  undefined8 uStack_90;
  
  uStack_90 = 0xfffffffffffffffe;
  param_1 = (longlong *)*param_1;
  plStack_c0 = param_1;
  if (SBORROW8(0,*param_1)) goto LAB_140b72a2f;
  uStack_148 = (undefined4)param_1[9];
  lStack_150 = param_1[8];
  pbVar3 = (byte *)param_1[2];
  pbVar15 = (byte *)((longlong)pbVar3 * 8);
  if (pbVar15 < (byte *)0x7ffffffffffffffd && (ulonglong)pbVar3 >> 0x3d == 0) goto LAB_140b73005;
  uVar27 = 0;
  do {
    param_2 = pbVar15;
    pdb_142dc7e2a(uVar27);
LAB_140b73005:
    lVar20 = param_1[1];
    pbStack_a8 = param_2;
    if (pbVar15 == (byte *)0x0) {
      pbStack_b8 = (byte *)0x4;
      pbStack_a0 = (byte *)0x0;
      plVar25 = param_1;
      break;
    }
    pdb_14007ee60();
    uVar27 = 4;
    pbStack_b8 = pub_1406abab0((ulonglong)pbVar15,4);
    plVar25 = plStack_c0;
    pbStack_a0 = pbVar3;
  } while (pbStack_b8 == (byte *)0x0);
  if (pbVar3 != (byte *)0x0) {
    pub_142e32760(pbStack_b8,lVar20,pbVar15);
    plVar25 = plStack_c0;
  }
  pbVar15 = (byte *)plVar25[5];
  uVar13 = (longlong)pbVar15 * 4;
  if (0x7ffffffffffffffc < uVar13 || (ulonglong)pbVar15 >> 0x3e != 0) {
    uVar27 = 0;
LAB_140b7308c:
    pdb_142dc7e2a(uVar27,uVar13);
    goto LAB_140b73477;
  }
  if (uVar13 == 0) {
    pbVar14 = (byte *)0x4;
  }
  else {
    puVar4 = (undefined4 *)plVar25[4];
    pdb_14007ee60();
    uVar27 = 4;
    pbVar14 = pub_1406abab0(uVar13,4);
    if (pbVar14 == (byte *)0x0) goto LAB_140b7308c;
    plVar25 = plStack_c0;
    if (pbVar15 != (byte *)0x0) {
      pbVar18 = pbVar15 + -1;
      if (pbVar15 < pbVar15 + -1) {
        pbVar18 = pbVar15;
      }
      if (pbVar18 < (byte *)0x8) {
        lVar20 = 0;
        pbVar18 = pbVar15;
        puVar23 = puVar4;
      }
      else {
        pbVar18 = pbVar18 + 1;
        uVar13 = 8;
        if (((ulonglong)pbVar18 & 7) != 0) {
          uVar13 = (ulonglong)((uint)pbVar18 & 7);
        }
        lVar20 = (longlong)pbVar18 - uVar13;
        pbVar18 = pbVar15 + -lVar20;
        puVar23 = puVar4 + lVar20;
        lVar24 = 0;
        do {
          uVar27 = *(undefined8 *)((longlong)(puVar4 + lVar24) + 8);
          uVar28 = *(undefined8 *)(puVar4 + lVar24 + 4);
          uVar7 = *(undefined8 *)((longlong)(puVar4 + lVar24 + 4) + 8);
          *(undefined8 *)(pbVar14 + lVar24 * 4) = *(undefined8 *)(puVar4 + lVar24);
          *(undefined8 *)(pbVar14 + lVar24 * 4 + 8) = uVar27;
          *(undefined8 *)(pbVar14 + lVar24 * 4 + 0x10) = uVar28;
          *(undefined8 *)(pbVar14 + lVar24 * 4 + 0x10 + 8) = uVar7;
          lVar24 = lVar24 + 8;
        } while (lVar20 != lVar24);
      }
      pbVar21 = pbVar14 + lVar20 * 4;
      do {
        if (puVar23 == puVar4 + (longlong)pbVar15) break;
        uVar2 = *puVar23;
        puVar23 = puVar23 + 1;
        *(undefined4 *)pbVar21 = uVar2;
        pbVar21 = pbVar21 + 4;
        pbVar18 = pbVar18 + -1;
      } while (pbVar18 != (byte *)0x0);
    }
  }
  pbVar12 = pbStack_a0;
  pbVar11 = pbStack_b8;
  lVar20 = plVar25[6];
  uVar27 = *(undefined8 *)pbStack_a8;
  pbStack_1b8 = (byte *)(plVar25 + 7);
  pbVar18 = (byte *)plVar25[7];
  pcStack_1b0 = pdb_140b743f0;
  uStack_91 = 1;
  pdb_140f60760(&uStack_118,&UNK_14305b840,&pbStack_1b8);
  arg0 = uStack_108;
  pbVar21 = (byte *)uStack_118;
  pbStack_a8 = (byte *)uStack_110;
  uStack_178 = uStack_148;
  lStack_180 = lStack_150;
  uStack_188 = CONCAT44(uStack_1bc,(int)lVar20);
  uStack_1e0 = SUB84(pbVar3,0);
  uStack_1dc = (undefined4)((ulonglong)pbVar3 >> 0x20);
  uStack_1d8 = SUB84(pbVar15,0);
  uStack_1d4 = (undefined4)((ulonglong)pbVar15 >> 0x20);
  uStack_1d0 = SUB84(pbVar14,0);
  uStack_1cc = (undefined4)((ulonglong)pbVar14 >> 0x20);
  pcStack_1b0 = (code *)pbVar11;
  uStack_1a8 = uStack_1e0;
  uStack_1a4 = uStack_1dc;
  uStack_1a0 = uStack_1d8;
  uStack_19c = uStack_1d4;
  uStack_198 = uStack_1d0;
  uStack_194 = uStack_1cc;
  uStack_190 = uStack_1d8;
  uStack_18c = uStack_1d4;
  uStack_118 = (byte **)0x1;
  uStack_110 = (code *)0x1;
  uStack_100 = pbVar11;
  uStack_e0 = uStack_1d8;
  uStack_dc = uStack_1d4;
  lStack_d0 = lStack_150;
  uStack_c8 = CONCAT44(uStack_174,uStack_148);
  pbStack_1b8 = pbVar12;
  uStack_108 = pbVar12;
  uStack_f8 = pbVar3;
  uStack_f0 = pbVar15;
  uStack_e8 = pbVar14;
  uStack_d8 = uStack_188;
  pdb_14007ee60();
  pbVar15 = pub_1406abab0(0x58,8);
  pbStack_b8 = pbVar21;
  if (pbVar15 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,0x58);
  }
  *(undefined8 *)(pbVar15 + 0x50) = uStack_c8;
  *(undefined8 *)(pbVar15 + 0x40) = uStack_d8;
  *(longlong *)(pbVar15 + 0x48) = lStack_d0;
  *(undefined4 *)(pbVar15 + 0x30) = (undefined4)uStack_e8;
  *(undefined4 *)(pbVar15 + 0x34) = uStack_e8._4_4_;
  *(undefined4 *)(pbVar15 + 0x38) = uStack_e0;
  *(undefined4 *)(pbVar15 + 0x3c) = uStack_dc;
  *(undefined4 *)(pbVar15 + 0x20) = (undefined4)uStack_f8;
  *(undefined4 *)(pbVar15 + 0x24) = uStack_f8._4_4_;
  *(undefined4 *)(pbVar15 + 0x28) = (undefined4)uStack_f0;
  *(undefined4 *)(pbVar15 + 0x2c) = uStack_f0._4_4_;
  *(undefined4 *)(pbVar15 + 0x10) = (undefined4)uStack_108;
  *(undefined4 *)(pbVar15 + 0x14) = uStack_108._4_4_;
  *(undefined4 *)(pbVar15 + 0x18) = (undefined4)uStack_100;
  *(undefined4 *)(pbVar15 + 0x1c) = uStack_100._4_4_;
  *(undefined4 *)pbVar15 = (undefined4)uStack_118;
  *(undefined4 *)(pbVar15 + 4) = uStack_118._4_4_;
  *(undefined4 *)(pbVar15 + 8) = (undefined4)uStack_110;
  *(undefined4 *)(pbVar15 + 0xc) = uStack_110._4_4_;
  uStack_110 = (code *)&UNK_14305b860;
  uStack_118 = (byte **)pbVar15;
  pbStack_a0 = pbVar15;
  if ((longlong)arg0 < 0) {
    uVar28 = 0;
LAB_140b7332d:
    pdb_142dc7e2a(uVar28,arg0);
LAB_140b73477:
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  if (arg0 == (byte *)0x0) {
    pbVar15 = (byte *)0x1;
  }
  else {
    pbStack_b0 = pbVar18;
    pdb_14007ee60();
    uVar28 = 1;
    pbVar15 = pub_1406abab0((ulonglong)arg0,1);
    if (pbVar15 == (byte *)0x0) goto LAB_140b7332d;
    pub_142e32760(pbVar15,pbStack_a8,arg0);
    pbVar18 = pbStack_b0;
  }
  uStack_110 = (code *)((ulonglong)uStack_110 & 0xffffffffffffff00);
  uStack_f8 = arg0;
  uStack_f0 = pbStack_a0;
  uStack_e8 = &UNK_14305b860;
  uStack_118 = (byte **)pbVar18;
  uStack_108 = arg0;
  uStack_100 = pbVar15;
  pdb_141a88350(uVar27,&uStack_118);
  if (pbStack_b8 != (byte *)0x0) {
    pub_1406abac0(pbStack_a8,(ulonglong)pbStack_b8,1);
  }
LAB_140b72a2f:
  fVar10 = _DAT_142e37848;
  fVar9 = _DAT_142e36f50;
  fVar8 = _DAT_142e36f28;
  lStack_140 = *param_3;
  lStack_120 = param_3[1];
  uStack_12c = *(undefined4 *)((longlong)param_3 + 0x14);
  puVar26 = *(uint **)(lStack_140 + 0xf8);
  puVar1 = puVar26 + *(longlong *)(lStack_140 + 0x100);
  pbStack_b8 = (byte *)CONCAT71(pbStack_b8._1_7_,*(undefined1 *)(lStack_140 + 0x108));
  plStack_158 = plStack_c0 + 8;
  uStack_130 = *(undefined4 *)((longlong)param_4 + 0x1c);
  uStack_168 = *param_4;
  puStack_160 = (undefined4 *)param_4[2];
  lStack_138 = 8;
  lVar24 = 0;
  pbStack_b0 = (byte *)0x0;
  pbStack_a8 = (byte *)0x0;
  pbStack_a0 = (byte *)0x0;
  lVar20 = 0;
  uVar29 = 0;
  do {
    if ((char)pbStack_b8 == '\0') {
      if (uVar29 == (uint)lVar20) {
        if (puVar26 == puVar1) {
          return;
        }
        while( true ) {
          lVar20 = *(longlong *)
                    (*(longlong *)(lStack_120 + 0x100) + 0x58 + (ulonglong)*puVar26 * 0xa0);
          if (lVar20 != 0) break;
          puVar26 = puVar26 + 1;
          if (puVar26 == puVar1) {
            return;
          }
        }
        lVar16 = *(longlong *)(lStack_120 + 0x100) + (ulonglong)*puVar26 * 0xa0;
        uVar13 = (ulonglong)*(uint *)(lVar16 + 0x94);
        lVar24 = *(longlong *)(lStack_120 + 0x1a0) + uVar13 * 0x48;
        uVar13 = *(ulonglong *)(*(longlong *)(lStack_120 + 0x1a0) + 0x40 + uVar13 * 0x48);
        if ((*(ulonglong *)(lStack_140 + 0x110) < uVar13) &&
           (uVar19 = *(ulonglong *)
                      (*(longlong *)(lVar24 + 0x38) + *(ulonglong *)(lStack_140 + 0x110) * 8),
           uVar19 != 0)) {
          pbStack_a0 = *(byte **)(*(longlong *)(lVar24 + 0x18) + 0x10 + ~uVar19 * 0x30);
          uVar19 = *(ulonglong *)(lStack_140 + 0x118);
          if (uVar13 <= uVar19) goto LAB_140b72d64;
LAB_140b72ce2:
          uVar19 = *(ulonglong *)(*(longlong *)(lVar24 + 0x38) + uVar19 * 8);
          if (uVar19 == 0) goto LAB_140b72d64;
          pbStack_a8 = *(byte **)(*(longlong *)(lVar24 + 0x18) + 0x10 + ~uVar19 * 0x30);
          uVar19 = *(ulonglong *)(lStack_140 + 0x120);
          lVar22 = *(longlong *)(lVar24 + 0x38);
          if (uVar13 <= uVar19) goto LAB_140b72d1a;
LAB_140b72d7f:
          uVar13 = *(ulonglong *)(lVar22 + uVar19 * 8);
          lVar17 = *(longlong *)(lVar24 + 0x18);
          if (uVar13 == 0) goto LAB_140b72de0;
          pbStack_b0 = *(byte **)(lVar17 + 0x10 + ~uVar13 * 0x30);
        }
        else {
          pbStack_a0 = (byte *)0x0;
          uVar19 = *(ulonglong *)(lStack_140 + 0x118);
          if (uVar19 < uVar13) goto LAB_140b72ce2;
LAB_140b72d64:
          pbStack_a8 = (byte *)0x0;
          uVar19 = *(ulonglong *)(lStack_140 + 0x120);
          lVar22 = *(longlong *)(lVar24 + 0x38);
          if (uVar19 < uVar13) goto LAB_140b72d7f;
LAB_140b72d1a:
          lVar17 = *(longlong *)(lVar24 + 0x18);
LAB_140b72de0:
          pbStack_b0 = (byte *)0x0;
        }
        puVar26 = puVar26 + 1;
        lVar22 = ~*(ulonglong *)(lVar22 + *(longlong *)(lStack_140 + 0x128) * 8) * 0x30;
        lVar24 = *(longlong *)(lVar17 + 0x10 + lVar22);
        lStack_128 = *(longlong *)(lVar17 + 0x28 + lVar22);
        lStack_138 = *(longlong *)(lVar16 + 0x50);
        uVar29 = 0;
        uVar13 = 0;
      }
      else {
        uVar13 = (ulonglong)uVar29;
      }
      uVar6 = ~*(uint *)(lStack_138 + 8 + uVar13 * 0x10);
    }
    else {
      uVar6 = uVar29;
      if (uVar29 == (uint)lVar20) {
        if (puVar26 == puVar1) {
          return;
        }
        while( true ) {
          lVar20 = *(longlong *)
                    (*(longlong *)(lStack_120 + 0x1a0) + 0x10 + (ulonglong)*puVar26 * 0x48);
          if (lVar20 != 0) break;
          puVar26 = puVar26 + 1;
          if (puVar26 == puVar1) {
            return;
          }
        }
        lVar24 = *(longlong *)(lStack_120 + 0x1a0) + (ulonglong)*puVar26 * 0x48;
        uVar13 = *(ulonglong *)(lVar24 + 0x40);
        if ((*(ulonglong *)(lStack_140 + 0x110) < uVar13) &&
           (uVar19 = *(ulonglong *)
                      (*(longlong *)(lVar24 + 0x38) + *(ulonglong *)(lStack_140 + 0x110) * 8),
           uVar19 != 0)) {
          pbStack_a0 = *(byte **)(*(longlong *)(lVar24 + 0x18) + 0x10 + ~uVar19 * 0x30);
          uVar19 = *(ulonglong *)(lStack_140 + 0x118);
          if (uVar13 <= uVar19) goto LAB_140b72d23;
LAB_140b72c7e:
          uVar19 = *(ulonglong *)(*(longlong *)(lVar24 + 0x38) + uVar19 * 8);
          if (uVar19 == 0) goto LAB_140b72d23;
          pbStack_a8 = *(byte **)(*(longlong *)(lVar24 + 0x18) + 0x10 + ~uVar19 * 0x30);
          uVar19 = *(ulonglong *)(lStack_140 + 0x120);
          lVar16 = *(longlong *)(lVar24 + 0x38);
          if (uVar13 <= uVar19) goto LAB_140b72cbe;
LAB_140b72d3e:
          uVar13 = *(ulonglong *)(lVar16 + uVar19 * 8);
          lVar22 = *(longlong *)(lVar24 + 0x18);
          if (uVar13 == 0) goto LAB_140b72da5;
          pbStack_b0 = *(byte **)(lVar22 + 0x10 + ~uVar13 * 0x30);
        }
        else {
          pbStack_a0 = (byte *)0x0;
          uVar19 = *(ulonglong *)(lStack_140 + 0x118);
          if (uVar19 < uVar13) goto LAB_140b72c7e;
LAB_140b72d23:
          pbStack_a8 = (byte *)0x0;
          uVar19 = *(ulonglong *)(lStack_140 + 0x120);
          lVar16 = *(longlong *)(lVar24 + 0x38);
          if (uVar19 < uVar13) goto LAB_140b72d3e;
LAB_140b72cbe:
          lVar22 = *(longlong *)(lVar24 + 0x18);
LAB_140b72da5:
          pbStack_b0 = (byte *)0x0;
        }
        puVar26 = puVar26 + 1;
        lVar16 = ~*(ulonglong *)(lVar16 + *(longlong *)(lStack_140 + 0x128) * 8) * 0x30;
        lVar24 = *(longlong *)(lVar22 + 0x10 + lVar16);
        lStack_128 = *(longlong *)(lVar22 + 0x28 + lVar16);
        uVar29 = 0;
        uVar6 = uVar29;
      }
    }
    uVar13 = (ulonglong)uVar6;
    lVar22 = uVar13 * 0x10 + (longlong)pbStack_a8;
    lVar16 = uVar13 * 0x30 + lVar24;
    if (!SBORROW8(0,*plStack_c0)) {
      lVar17 = plStack_158[1];
      uStack_110 = (code *)CONCAT44(uStack_110._4_4_,(int)lVar17);
      uStack_118 = (byte **)*plStack_158;
      *(undefined4 *)(lStack_128 + uVar13 * 4) = uStack_12c;
      *(int *)(lVar16 + 0x18) = (int)lVar17;
      *(byte ***)(lVar16 + 0x10) = uStack_118;
    }
    fVar30 = *(float *)(uVar13 * 0x1c + (longlong)pbStack_b0 + 0x18);
    fVar31 = fVar30 * fVar9 + (fVar8 - fVar30) * fVar10;
    fVar30 = fVar9 - fVar31;
    pbStack_1b8 = (byte *)CONCAT44(pbStack_1b8._4_4_,fVar30);
    if ((fVar30 < 0.0) || (fVar8 < fVar30)) {
      uStack_118 = &pbStack_1b8;
      uStack_110 = pdb_140f70fc0;
                    /* WARNING: Subroutine does not return */
      pdb_142dc83d0(&UNK_14335ec38,&uStack_118,&UNK_14305b8e8);
    }
    fVar31 = fVar31 + fVar9;
    pbStack_1b8 = (byte *)CONCAT44(pbStack_1b8._4_4_,fVar31);
    if ((fVar31 < 0.0) || (fVar8 < fVar31)) {
      uStack_118 = &pbStack_1b8;
      uStack_110 = pdb_140f70fc0;
                    /* WARNING: Subroutine does not return */
      pdb_142dc83d0(&UNK_14335ec38,&uStack_118,&UNK_14305b900);
    }
    pdb_1419a77d0(&uStack_118,uVar13 * 0x38 + (longlong)pbStack_a0,fVar30,fVar31,&UNK_14305b918);
    pbVar15 = (byte *)uStack_110;
    *puStack_160 = uStack_130;
    pdb_141740a90(uStack_110,uStack_110 + (longlong)uStack_108 * 8,lVar22);
    if (uStack_118 != (byte **)0x0) {
      pub_1406abac0(pbVar15,(longlong)uStack_118 << 3,4);
    }
    if (uStack_100 != (byte *)0x0) {
      pub_1406abac0(uStack_f8,(longlong)uStack_100 << 2,4);
    }
    uVar29 = uVar29 + 1;
  } while( true );
}

