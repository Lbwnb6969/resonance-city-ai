// VA 0x1411c66a0, PDB extent 5445 bytes
// toolbar::quick_tool_palette::quick_tool_palette_update
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/quick_tool_palette.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: toolbar::quick_tool_palette::quick_tool_palette_update
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/quick_tool_palette.rs
   Extent: 5445 */

void pdb_1411c66a0(longlong *param_1,undefined8 *param_2,longlong *param_3,longlong *param_4,
                  longlong *param_5,longlong *param_6,longlong *param_7,undefined8 *param_8,
                  undefined8 *param_9,undefined8 *param_10,longlong *param_11,longlong *param_12,
                  longlong *param_13,undefined8 *param_14,longlong *param_15)

{
  undefined8 *puVar1;
  uint *puVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  ulonglong arg1;
  longlong lVar6;
  char cVar7;
  char cVar8;
  longlong lVar9;
  ulonglong *puVar10;
  ulonglong *puVar11;
  ulonglong *puVar12;
  longlong *plVar13;
  ulonglong *puVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  int *piVar18;
  longlong lVar19;
  uint uVar20;
  ulonglong uVar21;
  longlong lVar22;
  ulonglong *puVar23;
  undefined8 uVar24;
  longlong lVar25;
  longlong *plVar26;
  ulonglong *puVar27;
  longlong lVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  uint *puVar31;
  ulonglong *puVar32;
  longlong lVar33;
  float *pfVar34;
  longlong lVar35;
  undefined1 *puVar36;
  ulonglong *puVar37;
  ulonglong uVar38;
  ulonglong uVar39;
  longlong lVar40;
  bool bVar41;
  float fVar42;
  float fVar43;
  undefined1 auVar44 [16];
  int iVar45;
  float fVar46;
  float fVar47;
  int iVar48;
  undefined4 uVar49;
  undefined1 auStack_f9 [9];
  longlong lStack_f0;
  ulonglong uStack_e8;
  longlong lStack_e0;
  undefined8 *puStack_d8;
  undefined4 *puStack_d0;
  longlong lStack_c8;
  ulonglong *puStack_c0;
  code *pcStack_b8;
  ulonglong *puStack_b0;
  code *pcStack_a8;
  longlong *plStack_a0;
  longlong lStack_98;
  longlong *plStack_90;
  undefined8 uStack_88;
  longlong lStack_80;
  ulonglong uStack_78;
  ulonglong *puStack_70;
  
  uVar4 = *(undefined4 *)((longlong)param_8 + 0x1c);
  puVar5 = (undefined4 *)param_8[2];
  *puVar5 = uVar4;
  auStack_f9._1_8_ = *param_8;
  uStack_88 = 0;
  lVar9 = *param_4;
  puStack_d8 = param_2;
  plStack_a0 = param_1;
  plStack_90 = param_3;
  if (!SBORROW8(0,*(ulonglong *)auStack_f9._1_8_)) {
    fVar42 = *(float *)(lVar9 + 0x58) + *(float *)(auStack_f9._1_8_ + 0x30);
    *(float *)(auStack_f9._1_8_ + 0x30) = fVar42;
    fVar43 = _DAT_14300e8a4;
    if (*(char *)(auStack_f9._1_8_ + 0x34) == '\0') {
      fVar43 = _DAT_142e37988;
    }
    if (fVar42 < fVar43) {
      uStack_88 = 0;
    }
    else {
      *puVar5 = uVar4;
      uVar38 = *(ulonglong *)auStack_f9._1_8_;
      if ((!SBORROW8(0,uVar38)) && (uVar38 != 0)) {
        pub_1406abac0(*(byte **)(auStack_f9._1_8_ + 8),uVar38,1);
      }
      *(ulonglong *)auStack_f9._1_8_ = 0x8000000000000000;
      uStack_88 = 0x8000000000000001;
    }
  }
  lStack_98 = CONCAT44(lStack_98._4_4_,uVar4);
  puVar32 = (ulonglong *)*param_15;
  lVar17 = param_15[1];
  puStack_d0 = puVar5;
  lStack_80 = lVar9;
  if ((puVar32[1] < *(ulonglong *)(lVar17 + 0x210)) &&
     (uVar38 = *(ulonglong *)(*(longlong *)(lVar17 + 0x208) + puVar32[1] * 8), uVar38 != 0)) {
    lVar9 = ~uVar38 * 0x40;
    if (*(longlong *)(*(longlong *)(lVar17 + 0x1d8) + 0x20 + lVar9) != 0) {
      lVar9 = *(longlong *)(*(longlong *)(lVar17 + 0x1d8) + lVar9 + 0x10);
      uVar38 = *puVar32;
      uVar30 = 0;
      uVar29 = uVar38 - *(ulonglong *)(lVar9 + 0x18);
      if (uVar38 < *(ulonglong *)(lVar9 + 0x18)) {
        uVar29 = uVar30;
      }
      uVar21 = uVar38 - *(ulonglong *)(lVar9 + 0x38);
      if (uVar38 < *(ulonglong *)(lVar9 + 0x38)) {
        uVar21 = uVar30;
      }
      puVar14 = (ulonglong *)(uVar29 * 0x10 + *(longlong *)(lVar9 + 8));
      uVar38 = *(ulonglong *)(lVar9 + 0x10) - uVar29;
      if (*(ulonglong *)(lVar9 + 0x10) < uVar29) {
        puVar14 = (ulonglong *)0x8;
        uVar38 = uVar30;
      }
      puVar10 = (ulonglong *)(uVar21 * 0x10 + *(longlong *)(lVar9 + 0x28));
      uVar29 = *(ulonglong *)(lVar9 + 0x30);
      if (uVar29 < uVar21) {
        puVar10 = (ulonglong *)0x8;
      }
      uStack_e8 = 0;
      uVar39 = uVar29 - uVar21;
      if (uVar29 < uVar21) {
        uVar39 = uVar30;
      }
      uVar29 = (*(longlong *)(lVar9 + 0x40) - uVar39) - uVar38;
      *puVar32 = uVar29;
      puVar23 = puVar14 + uVar38 * 2;
      lStack_c8 = *param_6;
      lStack_f0 = *param_14;
      lStack_e0 = param_14[1];
      puVar11 = puVar10;
      puVar37 = (ulonglong *)auStack_f9._1_8_;
      do {
        if ((puVar14 == (ulonglong *)0x0) || (puVar14 == puVar23)) {
          if ((puVar11 == (ulonglong *)0x0) || (puVar11 == puVar10 + uVar39 * 2))
          goto LAB_1411c693c;
          puVar12 = puVar11 + 2;
          puVar14 = (ulonglong *)0x0;
          puVar27 = puVar11;
        }
        else {
          puVar12 = puVar11;
          puVar27 = puVar14;
          puVar14 = puVar14 + 2;
        }
        uVar29 = uVar29 + 1;
        *puVar32 = uVar29;
        puVar11 = puVar12;
        if ((char)puVar37[0xc] == '\x01') {
          plVar26 = (longlong *)*puVar27;
          param_6 = plVar26;
          pdb_1411c9720(&puStack_c0,lStack_f0,lStack_e0);
          puVar37 = (ulonglong *)auStack_f9._1_8_;
          if (puStack_c0 != (ulonglong *)0x0) {
            if (puStack_b0 == (ulonglong *)0x0) {
              plVar13 = (longlong *)0x0;
            }
            else {
              plVar13 = (longlong *)*puStack_b0;
            }
            if ((int)plVar13 != 0) {
              plVar26 = plVar13;
            }
            lVar9 = 0;
            while (*(longlong *)(lStack_c8 + 0x10) << 5 != lVar9) {
              puVar1 = (undefined8 *)(*(longlong *)(lStack_c8 + 8) + lVar9);
              lVar9 = lVar9 + 0x20;
              if ((longlong *)*puVar1 == plVar26) {
                uStack_e8 = *puVar27;
                goto LAB_1411c693c;
              }
            }
          }
        }
      } while( true );
    }
  }
LAB_1411c7b56:
  puStack_c0 = (ulonglong *)((longlong)param_15 + 0x14);
  pcStack_b8 = pdb_140f33ec0;
  puStack_b0 = (ulonglong *)auStack_f9;
  pcStack_a8 = pdb_140f33ec0;
                    /* WARNING: Subroutine does not return */
  pdb_142dc83d0(&UNK_1434dfd71,&puStack_c0,&UNK_1434dfe08);
LAB_1411c693c:
  lVar17 = lStack_c8;
  puVar5 = puStack_d0;
  lVar9 = param_15[1];
  uVar38 = ((undefined8 *)*param_15)[1];
  if ((*(ulonglong *)(lVar9 + 0x210) <= uVar38) ||
     (uVar38 = *(ulonglong *)(*(longlong *)(lVar9 + 0x208) + uVar38 * 8), uVar38 == 0))
  goto LAB_1411c7b56;
  lVar15 = ~uVar38 * 0x40;
  if (*(longlong *)(*(longlong *)(lVar9 + 0x1d8) + 0x20 + lVar15) == 0) goto LAB_1411c7b56;
  uVar38 = uStack_e8 >> 0x20;
  *(undefined8 *)*param_15 =
       *(undefined8 *)(*(longlong *)(*(longlong *)(lVar9 + 0x1d8) + lVar15 + 0x10) + 0x40);
  lVar9 = *(longlong *)(lStack_c8 + 8);
  lVar15 = *param_5;
  lVar16 = *(longlong *)(lStack_c8 + 0x10) << 5;
  uVar4 = (undefined4)lStack_98;
  do {
    if (lVar16 == 0) goto LAB_1411c69ed;
    cVar8 = *(char *)(lVar9 + 0x18);
    lVar9 = lVar9 + 0x20;
    lVar16 = lVar16 + -0x20;
  } while (cVar8 != *(char *)(lVar15 + 0x18));
  *puStack_d0 = (undefined4)lStack_98;
  *(char *)((longlong)puVar37 + 100) = cVar8;
LAB_1411c69ed:
  cVar8 = *(char *)*puStack_d8;
  if (((((char)puVar37[0xc] == '\0') &&
       (cVar7 = pdb_140938b60(*(undefined4 *)(*plStack_a0 + 0x68),
                              *(undefined4 *)(*plStack_a0 + 0x6c)),
       puVar37 = (ulonglong *)auStack_f9._1_8_, cVar8 != '\x10')) && (cVar7 != '\0')) &&
     (cVar7 = *(char *)(auStack_f9._1_8_ + 100), cVar7 != '\x16')) {
    *(undefined1 *)(auStack_f9._1_8_ + 0x60) = 1;
    *(undefined1 *)(auStack_f9._1_8_ + 99) = 0;
    *(undefined4 *)(auStack_f9._1_8_ + 0x50) = 0;
    *puVar5 = uVar4;
    uVar29 = *(ulonglong *)auStack_f9._1_8_;
    if ((!SBORROW8(0,uVar29)) && (uVar29 != 0)) {
      pub_1406abac0(*(byte **)(auStack_f9._1_8_ + 8),uVar29,1);
    }
    *(ulonglong *)auStack_f9._1_8_ = 0x8000000000000000;
    *puVar5 = uVar4;
    *(char *)(auStack_f9._1_8_ + 0x65) = cVar7;
    uVar29 = 0;
    plVar26 = (longlong *)0x0;
    do {
      if ((longlong *)(*(longlong *)(lVar17 + 0x10) << 5) == plVar26) goto LAB_1411c6b38;
      param_6 = plVar26 + 4;
      pcVar3 = (char *)(*(longlong *)(lVar17 + 8) + 0x18 + (longlong)plVar26);
      plVar26 = param_6;
    } while (*pcVar3 != cVar7);
    uVar29 = *(ulonglong *)(*(longlong *)(lVar17 + 8) + -0x20 + (longlong)param_6);
LAB_1411c6b38:
    *puVar5 = uVar4;
    *(ulonglong *)(auStack_f9._1_8_ + 0x38) = uVar29;
    *(ulonglong *)(auStack_f9._1_8_ + 0x40) = *(ulonglong *)*plStack_90;
    *(undefined1 *)(auStack_f9._1_8_ + 0x61) = 1;
    *(ulonglong *)(auStack_f9._1_8_ + 0x58) = 0;
    *puVar5 = uVar4;
    *(undefined1 *)(auStack_f9._1_8_ + 0x62) = 0;
    lVar9 = *(longlong *)(*param_7 + 0xa0);
    lVar16 = 0;
    lVar15 = lVar9;
    do {
      if (*(longlong *)(*param_7 + 0xa8) * 0x28 == lVar16) {
        uVar29 = 0;
        goto LAB_1411c6bc8;
      }
      puVar1 = (undefined8 *)(lVar15 + 0x10);
      lVar15 = lVar15 + 0x28;
      iVar45 = -(uint)((int)*(undefined8 *)(lVar17 + 0x18) == (int)*puVar1);
      iVar48 = -(uint)((int)((ulonglong)*(undefined8 *)(lVar17 + 0x18) >> 0x20) ==
                      (int)((ulonglong)*puVar1 >> 0x20));
      auVar44._4_4_ = iVar45;
      auVar44._0_4_ = iVar45;
      auVar44._8_4_ = iVar48;
      auVar44._12_4_ = iVar48;
      uVar20 = movmskpd((int)param_6,auVar44);
      param_6 = (longlong *)(ulonglong)uVar20;
      lVar16 = lVar16 + 0x28;
    } while (uVar20 != 3);
    uVar29 = *(ulonglong *)(lVar9 + -0x20 + lVar16);
LAB_1411c6bc8:
    *puVar5 = uVar4;
    *(ulonglong *)(auStack_f9._1_8_ + 0x48) = uVar29;
    *(undefined4 *)param_11[2] = *(undefined4 *)((longlong)param_11 + 0x1c);
    lVar9 = *param_11;
    lVar17 = *(longlong *)(lVar9 + 0x30);
    uVar24 = *(undefined8 *)(lVar9 + 0x40);
    if (lVar17 == *(longlong *)(lVar9 + 0x20)) {
      pdb_142d7e6e0(lVar9 + 0x20);
    }
    lVar15 = *(longlong *)(lVar9 + 0x28);
    lVar16 = lVar17 * 0x20;
    *(undefined4 *)(lVar15 + lVar16) = 0x16;
LAB_1411c6f16:
    *(undefined8 *)(lVar15 + 0x18 + lVar16) = uVar24;
    *(longlong *)(lVar9 + 0x30) = lVar17 + 1;
    *(longlong *)(lVar9 + 0x40) = *(longlong *)(lVar9 + 0x40) + 1;
    puVar37 = (ulonglong *)auStack_f9._1_8_;
  }
  else if ((char)puVar37[0xc] != '\0') {
    puStack_d8 = (undefined8 *)CONCAT71(puStack_d8._1_7_,cVar8);
    uVar29 = *(ulonglong *)*param_10;
    uVar30 = uVar29 & 0xffffffff;
    if (((uVar30 == 0) || (*(char *)((longlong)puVar37 + 99) != '\0')) ||
       (pdb_1411c9720(&puStack_c0), puVar37 = (ulonglong *)auStack_f9._1_8_,
       puStack_c0 == (ulonglong *)0x0)) {
LAB_1411c6c7b:
      uVar30 = 0;
    }
    else {
      if (puStack_b0 == (ulonglong *)0x0) {
        uVar21 = 0;
      }
      else {
        uVar21 = *puStack_b0;
      }
      if ((int)uVar21 == 0) {
        uVar21 = uVar29;
      }
      lVar17 = *(longlong *)(lStack_c8 + 8);
      lVar16 = *(longlong *)(lStack_c8 + 0x10) << 5;
      lVar9 = 0;
      do {
        if (lVar16 == lVar9) goto LAB_1411c6c7b;
        puVar32 = (ulonglong *)(lVar17 + lVar9);
        lVar9 = lVar9 + 0x20;
      } while (*puVar32 != uVar21);
      if (*(longlong *)(lStack_c8 + 0x10) != 0) {
        lVar9 = 0;
        do {
          if ((*(ulonglong *)(lVar17 + lVar9) == uVar29) &&
             (*(char *)(lVar17 + 0x18 + lVar9) == *(char *)(lVar15 + 0x18))) goto LAB_1411c6c7b;
          lVar9 = lVar9 + 0x20;
        } while (lVar16 != lVar9);
      }
    }
    *puVar5 = uVar4;
    puVar37[10] = uVar29 & 0xffffffff00000000 | uVar30;
    cVar8 = pdb_140938ba0(*(undefined4 *)(*plStack_a0 + 0x68),*(undefined4 *)(*plStack_a0 + 0x6c));
    if (((char)puStack_d8 == '\x10') || (*(char *)(auStack_f9._1_8_ + 99) != '\0')) {
LAB_1411c6e5e:
      puVar37 = (ulonglong *)auStack_f9._1_8_;
      if ((char)puStack_d8 != '\x10' && cVar8 == '\x01') goto LAB_1411c6f26;
    }
    else {
      uVar29 = uStack_e8 & 0xffffffff;
      if ((int)uStack_e8 != 0) {
LAB_1411c6cd5:
        uVar30 = uVar29 | uVar38 << 0x20;
        pdb_1411c9720(&puStack_c0,lStack_f0,lStack_e0,uVar30);
        if (puStack_c0 == (ulonglong *)0x0) {
          uStack_78 = (ulonglong)pcStack_b8;
          puStack_70 = puStack_b0;
                    /* WARNING: Subroutine does not return */
          pdb_142dc8170(&UNK_1432a98d0,0x2b,&uStack_78,&UNK_1432a9900,&UNK_1432a9b38);
        }
        uVar21 = *puStack_c0;
        uVar39 = puStack_c0[1];
        pdb_140f60be0(&puStack_c0,pcStack_b8);
        bVar41 = (int)uStack_e8 != 0;
        uVar49 = _DAT_142f60fec;
        if (!bVar41) {
          uVar49 = 0;
        }
        *puVar5 = uVar4;
        arg1 = *(ulonglong *)auStack_f9._1_8_;
        if ((!SBORROW8(0,arg1)) && (arg1 != 0)) {
          pub_1406abac0(*(byte **)(auStack_f9._1_8_ + 8),arg1,1);
        }
        *(ulonglong **)(auStack_f9._1_8_ + 0x10) = puStack_b0;
        *(ulonglong **)auStack_f9._1_8_ = puStack_c0;
        *(code **)(auStack_f9._1_8_ + 8) = pcStack_b8;
        *(int *)(auStack_f9._1_8_ + 0x18) = (int)uVar29;
        *(int *)(auStack_f9._1_8_ + 0x1c) = (int)uVar38;
        *(ulonglong *)(auStack_f9._1_8_ + 0x20) = uVar21;
        *(ulonglong *)(auStack_f9._1_8_ + 0x28) = uVar39;
        *(undefined4 *)(auStack_f9._1_8_ + 0x30) = uVar49;
        *(bool *)(auStack_f9._1_8_ + 0x34) = bVar41;
        *(undefined1 *)(auStack_f9._1_8_ + 99) = 1;
        *puVar5 = uVar4;
        *(undefined4 *)(auStack_f9._1_8_ + 0x50) = 0;
        if ((int)uStack_e8 == 0) {
          lVar9 = param_15[1];
          if ((*(ulonglong *)(lVar9 + 0x210) <= *(ulonglong *)(*param_15 + 0x10)) ||
             (uVar29 = *(ulonglong *)
                        (*(longlong *)(lVar9 + 0x208) + *(ulonglong *)(*param_15 + 0x10) * 8),
             uVar29 == 0)) {
LAB_1411c7b9d:
            puStack_c0 = (ulonglong *)((longlong)param_15 + 0x14);
            pcStack_b8 = pdb_140f33ec0;
            puStack_b0 = (ulonglong *)auStack_f9;
            pcStack_a8 = pdb_140f33ec0;
                    /* WARNING: Subroutine does not return */
            pdb_142dc83d0(&UNK_1434dfd71,&puStack_c0,&UNK_1434dfe20);
          }
          lVar17 = ~uVar29 * 0x40;
          if (*(longlong *)(*(longlong *)(lVar9 + 0x1d8) + 0x20 + lVar17) == 0) goto LAB_1411c7b9d;
          lVar17 = *(longlong *)(lVar9 + 0x1d8) + lVar17;
          lVar9 = *(longlong *)(lVar17 + 0x10);
          *(int *)(lVar17 + 0x3c) = (int)param_15[3];
          lVar17 = *(longlong *)(lVar9 + 0x30);
          uVar24 = *(undefined8 *)(lVar9 + 0x40);
          if (lVar17 == *(longlong *)(lVar9 + 0x20)) {
            pdb_142d7e980(lVar9 + 0x20);
          }
          lVar15 = *(longlong *)(lVar9 + 0x28);
          *(ulonglong *)(lVar15 + lVar17 * 0x10) = uVar30;
          *(undefined8 *)(lVar15 + 8 + lVar17 * 0x10) = uVar24;
          *(longlong *)(lVar9 + 0x30) = lVar17 + 1;
          *(longlong *)(lVar9 + 0x40) = *(longlong *)(lVar9 + 0x40) + 1;
        }
        goto LAB_1411c6e5e;
      }
      if (cVar8 != '\0') goto LAB_1411c6e5e;
      uVar29 = (ulonglong)(uint)*(ulonglong *)(auStack_f9._1_8_ + 0x50);
      if ((uint)*(ulonglong *)(auStack_f9._1_8_ + 0x50) != 0) {
        uVar38 = (ulonglong)*(uint *)(auStack_f9._1_8_ + 0x54);
        goto LAB_1411c6cd5;
      }
    }
    if ((!SBORROW8(0,*(ulonglong *)auStack_f9._1_8_)) &&
       (*(char *)(auStack_f9._1_8_ + 0x34) != '\0')) {
      *puVar5 = uVar4;
      uVar29 = *(ulonglong *)auStack_f9._1_8_;
      if ((!SBORROW8(0,uVar29)) && (uVar29 != 0)) {
        pub_1406abac0(*(byte **)(auStack_f9._1_8_ + 8),uVar29,1);
      }
      *(ulonglong *)auStack_f9._1_8_ = 0x8000000000000000;
    }
    *(undefined1 *)(auStack_f9._1_8_ + 0x60) = 0;
    *(undefined1 *)(auStack_f9._1_8_ + 0x65) = 0x16;
    *(undefined4 *)(auStack_f9._1_8_ + 0x38) = 0;
    *(undefined4 *)(auStack_f9._1_8_ + 0x50) = 0;
    *puVar5 = uVar4;
    *(undefined1 *)(auStack_f9._1_8_ + 0x66) = 2;
    *(undefined4 *)param_11[2] = *(undefined4 *)((longlong)param_11 + 0x1c);
    lVar9 = *param_11;
    lVar17 = *(longlong *)(lVar9 + 0x30);
    uVar24 = *(undefined8 *)(lVar9 + 0x40);
    if (lVar17 == *(longlong *)(lVar9 + 0x20)) {
      pdb_142d7e6e0(lVar9 + 0x20);
    }
    lVar15 = *(longlong *)(lVar9 + 0x28);
    lVar16 = lVar17 * 0x20;
    *(undefined4 *)(lVar15 + lVar16) = 0x17;
    goto LAB_1411c6f16;
  }
LAB_1411c6f26:
  if ((char)puVar37[0xc] == '\0') {
    cVar8 = *(char *)((longlong)puVar37 + 0x66);
    if (cVar8 == '\0') {
      uVar38 = *puVar37;
      *puVar5 = uVar4;
      *(undefined1 *)((longlong)puVar37 + 0x66) = 0;
      if ((char)uStack_88 == '\0' && SBORROW8(0,uVar38)) {
        return;
      }
    }
    else {
      *puVar5 = uVar4;
      *(char *)((longlong)puVar37 + 0x66) = cVar8 + -1;
    }
    *(undefined4 *)param_9[2] = *(undefined4 *)((longlong)param_9 + 0x1c);
    pcStack_a8 = (code *)*param_9;
    puStack_b0 = (ulonglong *)((longlong)pcStack_a8 + 0x10);
    lVar9 = *param_13;
    lVar17 = param_13[1];
    lVar15 = 0;
    do {
      lVar16 = lVar15 + 1;
      puVar32 = (&puStack_b0)[lVar15];
      if (((int)*(&puStack_b0)[lVar15] != 1) &&
         ((lVar16 == 2 ||
          (lVar16 = 2, puVar32 = (ulonglong *)pcStack_a8, (int)*(ulonglong *)pcStack_a8 != 1))))
      break;
      uVar38 = puVar32[1];
      if (((ulonglong)~(uint)uVar38 < *(ulonglong *)(lVar17 + 0x10)) &&
         ((((piVar18 = (int *)((ulonglong)~(uint)uVar38 * 0x18 + *(longlong *)(lVar17 + 8)),
            piVar18[4] == (int)(uVar38 >> 0x20) && (*piVar18 != 0)) &&
           (uVar29 = *(ulonglong *)(piVar18 + 2),
           (uVar29 & 0xffffffff) < *(ulonglong *)(lVar9 + 0x38))) &&
          ((*(ulonglong *)(*(longlong *)(lVar9 + 0x28) + (uVar29 >> 6 & 0x3ffffff) * 8) >>
            (uVar29 & 0x3f) & 1) != 0)))) {
        uVar29 = *(ulonglong *)
                  (*(longlong *)
                    (*(longlong *)(*(longlong *)(lVar17 + 0x1a0) + 0x18 + (uVar29 >> 0x20) * 0x48) +
                     0x10 + ~*(ulonglong *)
                              (*(longlong *)
                                (*(longlong *)(lVar17 + 0x1a0) + 0x38 + (uVar29 >> 0x20) * 0x48) +
                              *(longlong *)(lVar9 + 0x110) * 8) * 0x30) +
                  (ulonglong)(uint)~piVar18[1] * 8);
      }
      else {
        uVar29 = 0;
      }
      if ((int)uVar29 != 0) {
        uVar38 = uVar29;
      }
      lVar15 = 0;
      do {
        if (*(longlong *)(lStack_c8 + 0x10) << 5 == lVar15) goto LAB_1411c75a7;
        puVar14 = (ulonglong *)(*(longlong *)(lStack_c8 + 8) + lVar15);
        lVar15 = lVar15 + 0x20;
      } while (*puVar14 != uVar38);
      *puVar32 = 0;
LAB_1411c75a7:
      lVar15 = 1;
    } while (lVar16 != 2);
    lVar15 = *(longlong *)(lStack_c8 + 0x10);
    if (lVar15 != 0) {
      lVar16 = *(longlong *)(lStack_c8 + 8);
      lVar28 = *param_12;
      lVar35 = param_12[1];
      uVar4 = *(undefined4 *)((longlong)param_12 + 0x14);
      lVar19 = 0;
      do {
        uVar24 = *(undefined8 *)(lVar16 + lVar19);
        uVar38 = (ulonglong)~(uint)uVar24;
        if (((uVar38 < *(ulonglong *)(lVar35 + 0x10)) &&
            (piVar18 = (int *)(uVar38 * 0x18 + *(longlong *)(lVar35 + 8)),
            piVar18[4] == (int)((ulonglong)uVar24 >> 0x20))) &&
           ((*piVar18 != 0 &&
            ((uVar38 = *(ulonglong *)(piVar18 + 2),
             (uVar38 & 0xffffffff) < *(ulonglong *)(lVar28 + 0x38) &&
             ((*(ulonglong *)(*(longlong *)(lVar28 + 0x28) + (uVar38 >> 6 & 0x3ffffff) * 8) >>
               (uVar38 & 0x3f) & 1) != 0)))))) {
          lVar33 = *(longlong *)(*(longlong *)(lVar35 + 0x1a0) + 0x18 + (uVar38 >> 0x20) * 0x48);
          lVar22 = *(longlong *)(*(longlong *)(lVar35 + 0x1a0) + 0x38 + (uVar38 >> 0x20) * 0x48);
          lVar40 = ~*(ulonglong *)(lVar22 + *(longlong *)(lVar28 + 0x110) * 8) * 0x30;
          lVar6 = *(longlong *)(lVar33 + 0x10 + lVar40);
          lVar25 = ~*(ulonglong *)(lVar22 + *(longlong *)(lVar28 + 0x118) * 8) * 0x30;
          lVar22 = *(longlong *)(lVar33 + 0x10 + lVar25);
          lVar25 = *(longlong *)(lVar33 + 0x28 + lVar25);
          uVar38 = (ulonglong)(uint)~piVar18[1];
          *(undefined4 *)(*(longlong *)(lVar33 + 0x28 + lVar40) + uVar38 * 4) = uVar4;
          *(undefined1 *)(lVar6 + 1 + uVar38 * 3) = 0;
          *(undefined4 *)(lVar25 + uVar38 * 4) = uVar4;
          *(undefined4 *)(lVar22 + uVar38 * 4) = 0;
        }
        lVar19 = lVar19 + 0x20;
      } while (lVar15 << 5 != lVar19);
    }
    uVar4 = *(undefined4 *)((longlong)param_13 + 0x14);
    puVar31 = *(uint **)(lVar9 + 0xf8);
    puVar2 = puVar31 + *(longlong *)(lVar9 + 0x100);
    cVar8 = *(char *)(lVar9 + 0x108);
    puStack_d8 = (undefined8 *)0x8;
    uVar20 = 0;
    lVar15 = 0;
    lVar16 = 0;
    lStack_f0 = 0;
    lStack_e0 = 0;
    lStack_98 = 8;
LAB_1411c7819:
    do {
      if (cVar8 == '\0') {
        if (uVar20 == (uint)lVar15) {
          if (puVar31 == puVar2) {
            return;
          }
          while( true ) {
            lVar15 = *(longlong *)
                      (*(longlong *)(lVar17 + 0x100) + 0x58 + (ulonglong)*puVar31 * 0xa0);
            if (lVar15 != 0) break;
            puVar31 = puVar31 + 1;
            if (puVar31 == puVar2) {
              return;
            }
          }
          lVar19 = *(longlong *)(lVar17 + 0x100) + (ulonglong)*puVar31 * 0xa0;
          uVar38 = (ulonglong)*(uint *)(lVar19 + 0x94);
          lVar28 = *(longlong *)(lVar17 + 0x1a0);
          lVar16 = lVar28 + uVar38 * 0x48;
          lVar35 = *(longlong *)(lVar28 + 0x38 + uVar38 * 0x48);
          if (*(ulonglong *)(lVar9 + 0x110) < *(ulonglong *)(lVar28 + 0x40 + uVar38 * 0x48)) {
            uVar38 = *(ulonglong *)(lVar35 + *(ulonglong *)(lVar9 + 0x110) * 8);
            lVar28 = *(longlong *)(lVar16 + 0x18);
            if (uVar38 == 0) goto LAB_1411c79d3;
            lStack_f0 = *(longlong *)(lVar28 + 0x10 + ~uVar38 * 0x30);
          }
          else {
            lVar28 = *(longlong *)(lVar16 + 0x18);
LAB_1411c79d3:
            lStack_f0 = 0;
          }
          puVar31 = puVar31 + 1;
          lVar16 = ~*(ulonglong *)(lVar35 + *(longlong *)(lVar9 + 0x118) * 8) * 0x30;
          lStack_e0 = *(longlong *)(lVar28 + 0x10 + lVar16);
          uStack_e8 = *(ulonglong *)(lVar28 + 0x28 + lVar16);
          lVar35 = ~*(ulonglong *)(lVar35 + *(longlong *)(lVar9 + 0x120) * 8) * 0x30;
          lVar16 = *(longlong *)(lVar28 + 0x10 + lVar35);
          puStack_d0 = *(undefined4 **)(lVar28 + 0x28 + lVar35);
          puStack_d8 = *(undefined8 **)(lVar19 + 0x50);
          uVar20 = 0;
          uVar38 = 0;
        }
        else {
          uVar38 = (ulonglong)uVar20;
        }
        plVar26 = (longlong *)((longlong)puStack_d8 + uVar38 * 0x10);
        uVar38 = (ulonglong)~*(uint *)((longlong)puStack_d8 + 8 + uVar38 * 0x10);
      }
      else {
        if (uVar20 == (uint)lVar15) {
          do {
            if (puVar31 == puVar2) {
              return;
            }
            uVar20 = *puVar31;
            puVar31 = puVar31 + 1;
            lVar15 = *(longlong *)(*(longlong *)(lVar17 + 0x1a0) + 0x10 + (ulonglong)uVar20 * 0x48);
          } while (lVar15 == 0);
          lVar28 = *(longlong *)(lVar17 + 0x1a0) + (ulonglong)uVar20 * 0x48;
          lVar16 = *(longlong *)(lVar28 + 0x38);
          if (*(ulonglong *)(lVar9 + 0x110) < *(ulonglong *)(lVar28 + 0x40)) {
            uVar38 = *(ulonglong *)(lVar16 + *(ulonglong *)(lVar9 + 0x110) * 8);
            lVar35 = *(longlong *)(lVar28 + 0x18);
            if (uVar38 == 0) goto LAB_1411c7956;
            lStack_f0 = *(longlong *)(lVar35 + 0x10 + ~uVar38 * 0x30);
          }
          else {
            lVar35 = *(longlong *)(lVar28 + 0x18);
LAB_1411c7956:
            lStack_f0 = 0;
          }
          lVar19 = ~*(ulonglong *)(lVar16 + *(longlong *)(lVar9 + 0x118) * 8) * 0x30;
          lStack_e0 = *(longlong *)(lVar35 + 0x10 + lVar19);
          uStack_e8 = *(ulonglong *)(lVar35 + 0x28 + lVar19);
          lVar19 = ~*(ulonglong *)(lVar16 + *(longlong *)(lVar9 + 0x120) * 8) * 0x30;
          lVar16 = *(longlong *)(lVar35 + 0x10 + lVar19);
          puStack_d0 = *(undefined4 **)(lVar35 + 0x28 + lVar19);
          lStack_98 = *(longlong *)(lVar28 + 8);
          uVar20 = 0;
        }
        uVar38 = (ulonglong)uVar20;
        plVar26 = (longlong *)(lStack_98 + uVar38 * 8);
      }
      puVar36 = (undefined1 *)(uVar38 * 3 + lStack_e0);
      if ((int)*plVar26 == 0) {
        return;
      }
      uVar20 = uVar20 + 1;
      lVar28 = *(longlong *)(lStack_f0 + uVar38 * 8);
      lVar35 = *plVar26;
      if ((int)lVar28 != 0) {
        lVar35 = lVar28;
      }
      lVar28 = 0;
      do {
        if (*(longlong *)(lStack_c8 + 0x10) << 5 == lVar28) goto LAB_1411c7819;
        plVar26 = (longlong *)(*(longlong *)(lStack_c8 + 8) + lVar28);
        lVar28 = lVar28 + 0x20;
      } while (*plVar26 != lVar35);
      *puVar36 = 0;
      *(undefined4 *)(uStack_e8 + uVar38 * 4) = uVar4;
      puVar36[1] = 0;
      puStack_d0[uVar38] = uVar4;
      *(undefined4 *)(uVar38 * 0x10 + lVar16) = 0;
    } while( true );
  }
  fVar43 = *(float *)(lStack_80 + 0x58);
  fVar42 = fVar43 / _DAT_142e3b1d8 + *(float *)(puVar37 + 0xb);
  if (_DAT_142e36f28 <= fVar42) {
    fVar42 = _DAT_142e36f28;
  }
  *puVar5 = uVar4;
  *(float *)(puVar37 + 0xb) = fVar42;
  fVar42 = *(float *)((longlong)puVar37 + 0x44) + _DAT_142e37878;
  cVar8 = '\x01';
  if (*(float *)(*plStack_90 + 4) <= _DAT_142e37ad8 + fVar42) {
    if (fVar42 + _DAT_1432a9880 <= *(float *)(*plStack_90 + 4)) {
      cVar8 = *(char *)((longlong)puVar37 + 0x62);
      fVar42 = _DAT_142e36f28;
      goto joined_r0x0001411c6fb5;
    }
    cVar8 = '\0';
  }
  *puVar5 = uVar4;
  *(char *)((longlong)puVar37 + 0x62) = cVar8;
  fVar42 = _DAT_142e36f28;
joined_r0x0001411c6fb5:
  fVar46 = fVar43;
  if (cVar8 == '\0') {
    fVar46 = (float)(_DAT_142e37820 ^ (uint)fVar43);
  }
  fVar47 = fVar46 * _DAT_142e37adc + *(float *)((longlong)puVar37 + 0x5c);
  fVar46 = 0.0;
  if (0.0 <= fVar47) {
    fVar46 = fVar47;
  }
  fVar47 = fVar42;
  if (fVar46 <= fVar42) {
    fVar47 = fVar46;
  }
  _DAT_142e36f28 = fVar42;
  *puVar5 = uVar4;
  *(float *)((longlong)puVar37 + 0x5c) = fVar47;
  if (*(longlong *)(lStack_c8 + 0x10) != 0) {
    lVar9 = *param_12;
    lVar17 = param_12[1];
    lVar15 = 0;
    do {
      uVar29 = *(ulonglong *)(*(longlong *)(lStack_c8 + 8) + lVar15);
      if (((((ulonglong)~(uint)uVar29 < *(ulonglong *)(lVar17 + 0x10)) &&
           (piVar18 = (int *)(*(longlong *)(lVar17 + 8) + (ulonglong)~(uint)uVar29 * 0x18),
           piVar18[4] == (int)(uVar29 >> 0x20))) && (*piVar18 != 0)) &&
         (((uVar30 = *(ulonglong *)(piVar18 + 2),
           (uVar30 & 0xffffffff) < *(ulonglong *)(lVar9 + 0x38) &&
           ((*(ulonglong *)(*(longlong *)(lVar9 + 0x28) + (uVar30 >> 6 & 0x3ffffff) * 8) >>
             (uVar30 & 0x3f) & 1) != 0)) &&
          (*(char *)(*(longlong *)
                      (*(longlong *)(*(longlong *)(lVar17 + 0x1a0) + 0x18 + (uVar30 >> 0x20) * 0x48)
                       + 0x10 + ~*(ulonglong *)
                                  (*(longlong *)
                                    (*(longlong *)(lVar17 + 0x1a0) + 0x38 + (uVar30 >> 0x20) * 0x48)
                                  + *(longlong *)(lVar9 + 0x110) * 8) * 0x30) + 1 +
                    (ulonglong)(uint)~piVar18[1] * 3) != '\0')))) {
        if (((int)*(ulonglong *)(auStack_f9._1_8_ + 0x38) == 0) ||
           (CONCAT44(*(undefined4 *)(auStack_f9._1_8_ + 0x3c),
                     (int)*(ulonglong *)(auStack_f9._1_8_ + 0x38)) != uVar29)) {
          *(ulonglong *)(auStack_f9._1_8_ + 0x38) = uVar29;
          *puStack_d0 = uVar4;
          *(undefined1 *)(auStack_f9._1_8_ + 0x61) = 0;
        }
        goto LAB_1411c71e4;
      }
      lVar15 = lVar15 + 0x20;
    } while (*(longlong *)(lStack_c8 + 0x10) << 5 != lVar15);
  }
  if ((int)*(ulonglong *)(auStack_f9._1_8_ + 0x38) != 0) {
    uVar29 = (ulonglong)~(uint)*(ulonglong *)(auStack_f9._1_8_ + 0x38);
    lVar9 = param_12[1];
    if (((uVar29 < *(ulonglong *)(lVar9 + 0x10)) &&
        (piVar18 = (int *)(uVar29 * 0x18 + *(longlong *)(lVar9 + 8)),
        piVar18[4] == (int)(*(ulonglong *)(auStack_f9._1_8_ + 0x38) >> 0x20))) && (*piVar18 != 0)) {
      lVar17 = *param_12;
      uVar29 = *(ulonglong *)(piVar18 + 2);
      if (((uVar29 & 0xffffffff) < *(ulonglong *)(lVar17 + 0x38)) &&
         ((*(ulonglong *)(*(longlong *)(lVar17 + 0x28) + (uVar29 >> 6 & 0x3ffffff) * 8) >>
           (uVar29 & 0x3f) & 1) != 0)) {
        uVar20 = piVar18[1];
        lVar15 = *(longlong *)(*(longlong *)(lVar9 + 0x1a0) + 0x18 + (uVar29 >> 0x20) * 0x48);
        lVar17 = ~*(ulonglong *)
                   (*(longlong *)(*(longlong *)(lVar9 + 0x1a0) + 0x38 + (uVar29 >> 0x20) * 0x48) +
                   *(longlong *)(lVar17 + 0x110) * 8) * 0x30;
        lVar9 = *(longlong *)(lVar15 + 0x10 + lVar17);
        *(undefined4 *)(*(longlong *)(lVar15 + 0x28 + lVar17) + (ulonglong)~uVar20 * 4) =
             *(undefined4 *)((longlong)param_12 + 0x14);
        *(undefined1 *)(lVar9 + 1 + (ulonglong)~uVar20 * 3) = 1;
      }
    }
  }
LAB_1411c71e4:
  if (*(char *)(auStack_f9._1_8_ + 0x61) != '\0') {
    fVar43 = fVar43 * _DAT_142e37900;
    lVar9 = *param_13;
    lVar17 = param_13[1];
    uVar4 = *(undefined4 *)((longlong)param_13 + 0x14);
    puVar31 = *(uint **)(lVar9 + 0xf8);
    puVar2 = puVar31 + *(longlong *)(lVar9 + 0x100);
    cVar8 = *(char *)(lVar9 + 0x108);
    bVar41 = true;
    lVar15 = 0;
    lStack_e0 = 8;
    lVar35 = 0;
    lVar28 = 0;
    lVar16 = 0;
    uStack_e8 = 8;
    uVar20 = 0;
    if (cVar8 != '\0') goto LAB_1411c7274;
LAB_1411c7360:
    if (uVar20 != (uint)lVar15) {
      uVar29 = (ulonglong)uVar20;
      goto LAB_1411c7459;
    }
    if (puVar31 != puVar2) {
      while( true ) {
        lVar15 = *(longlong *)(*(longlong *)(lVar17 + 0x100) + 0x58 + (ulonglong)*puVar31 * 0xa0);
        if (lVar15 != 0) break;
        puVar31 = puVar31 + 1;
        if (puVar31 == puVar2) goto LAB_1411c7508;
      }
      lVar19 = *(longlong *)(lVar17 + 0x100) + (ulonglong)*puVar31 * 0xa0;
      uVar38 = (ulonglong)*(uint *)(lVar19 + 0x94);
      lVar28 = *(longlong *)(lVar17 + 0x1a0);
      lVar16 = lVar28 + uVar38 * 0x48;
      lVar35 = *(longlong *)(lVar28 + 0x38 + uVar38 * 0x48);
      if (*(ulonglong *)(lVar9 + 0x110) < *(ulonglong *)(lVar28 + 0x40 + uVar38 * 0x48)) {
        uVar38 = *(ulonglong *)(lVar35 + *(ulonglong *)(lVar9 + 0x110) * 8);
        lVar33 = *(longlong *)(lVar16 + 0x18);
        if (uVar38 == 0) goto LAB_1411c740a;
        lVar16 = *(longlong *)(lVar33 + 0x10 + ~uVar38 * 0x30);
      }
      else {
        lVar33 = *(longlong *)(lVar16 + 0x18);
LAB_1411c740a:
        lVar16 = 0;
      }
      puVar31 = puVar31 + 1;
      lVar28 = *(longlong *)
                (lVar33 + 0x10 + ~*(ulonglong *)(lVar35 + *(longlong *)(lVar9 + 0x118) * 8) * 0x30);
      lVar22 = ~*(ulonglong *)(lVar35 + *(longlong *)(lVar9 + 0x120) * 8) * 0x30;
      lVar35 = *(longlong *)(lVar33 + 0x10 + lVar22);
      uVar38 = *(ulonglong *)(lVar33 + 0x28 + lVar22);
      uStack_e8 = *(longlong *)(lVar19 + 0x50);
      uVar20 = 0;
      uVar29 = 0;
LAB_1411c7459:
      piVar18 = (int *)(uStack_e8 + uVar29 * 0x10);
      uVar29 = (ulonglong)~*(uint *)(uStack_e8 + 8 + uVar29 * 0x10);
      do {
        pfVar34 = (float *)(uVar29 * 0x10 + lVar35);
        if (*piVar18 == 0) break;
        uVar20 = uVar20 + 1;
        lVar19 = *(longlong *)(lVar16 + uVar29 * 8);
        iVar45 = (int)*(ulonglong *)(auStack_f9._1_8_ + 0x38);
        iVar48 = (int)lVar19;
        if ((iVar48 == 0) || (iVar45 == 0)) {
          if (iVar48 == 0 && iVar45 == 0) goto LAB_1411c74cc;
        }
        else if (lVar19 == CONCAT44(*(undefined4 *)(auStack_f9._1_8_ + 0x3c),iVar45)) {
LAB_1411c74cc:
          fVar46 = *pfVar34;
          if (*(char *)(uVar29 * 3 + lVar28) == '\x01') {
            fVar46 = fVar46 + fVar43;
            if (fVar42 <= fVar46) {
              fVar46 = fVar42;
            }
            *(undefined4 *)(uVar29 * 4 + uVar38) = uVar4;
            *pfVar34 = fVar46;
          }
          bVar41 = (bool)(bVar41 & fVar42 <= fVar46);
        }
        if (cVar8 == '\0') goto LAB_1411c7360;
LAB_1411c7274:
        if (uVar20 == (uint)lVar15) {
          if (puVar31 == puVar2) break;
          while( true ) {
            lVar15 = *(longlong *)
                      (*(longlong *)(lVar17 + 0x1a0) + 0x10 + (ulonglong)*puVar31 * 0x48);
            if (lVar15 != 0) break;
            puVar31 = puVar31 + 1;
            if (puVar31 == puVar2) goto LAB_1411c7508;
          }
          lVar19 = *(longlong *)(lVar17 + 0x1a0) + (ulonglong)*puVar31 * 0x48;
          lVar35 = *(longlong *)(lVar19 + 0x38);
          if (*(ulonglong *)(lVar9 + 0x110) < *(ulonglong *)(lVar19 + 0x40)) {
            uVar38 = *(ulonglong *)(lVar35 + *(ulonglong *)(lVar9 + 0x110) * 8);
            lVar33 = *(longlong *)(lVar19 + 0x18);
            if (uVar38 == 0) goto LAB_1411c72f7;
            lVar16 = *(longlong *)(lVar33 + 0x10 + ~uVar38 * 0x30);
          }
          else {
            lVar33 = *(longlong *)(lVar19 + 0x18);
LAB_1411c72f7:
            lVar16 = 0;
          }
          puVar31 = puVar31 + 1;
          lVar28 = *(longlong *)
                    (lVar33 + 0x10 +
                    ~*(ulonglong *)(lVar35 + *(longlong *)(lVar9 + 0x118) * 8) * 0x30);
          lVar22 = ~*(ulonglong *)(lVar35 + *(longlong *)(lVar9 + 0x120) * 8) * 0x30;
          lVar35 = *(longlong *)(lVar33 + 0x10 + lVar22);
          uVar38 = *(ulonglong *)(lVar33 + 0x28 + lVar22);
          lStack_e0 = *(longlong *)(lVar19 + 8);
          uVar20 = 0;
        }
        uVar29 = (ulonglong)uVar20;
        piVar18 = (int *)(lStack_e0 + uVar29 * 8);
      } while( true );
    }
LAB_1411c7508:
    if (bVar41) {
      *puStack_d0 = (undefined4)lStack_98;
      *(undefined1 *)(auStack_f9._1_8_ + 0x61) = 0;
    }
  }
  return;
}

