// VA 0x14288e1e0, PDB extent 3145 bytes
// forest::tree_animation::handplaced_tree_animation
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/forest/src/tree_animation.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: forest::tree_animation::handplaced_tree_animation
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/forest/src/tree_animation.rs
   Extent: 3145 */

void pdb_14288e1e0(longlong *param_1,longlong *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 param_6,undefined8 *param_7)

{
  byte *pbVar1;
  uint *puVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  code *pcVar6;
  uint uVar7;
  ulonglong uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  char cVar14;
  uint uVar15;
  int iVar16;
  undefined4 uVar17;
  longlong lVar18;
  ulonglong uVar19;
  longlong *plVar20;
  undefined1 *puVar21;
  undefined8 uVar22;
  longlong lVar23;
  undefined4 *puVar24;
  longlong lVar25;
  float *pfVar26;
  ulonglong uVar27;
  longlong lVar28;
  float *pfVar29;
  bool bVar30;
  undefined8 *puVar31;
  undefined *puVar32;
  longlong lVar33;
  longlong lVar34;
  float *pfVar35;
  undefined *puVar36;
  undefined *puVar37;
  longlong lVar38;
  uint *puVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  int aiStack_1c8 [4];
  undefined8 uStack_1b8;
  float fStack_1b0;
  undefined8 uStack_1a8;
  float fStack_1a0;
  undefined8 *puStack_188;
  undefined8 *puStack_180;
  longlong lStack_178;
  longlong lStack_170;
  undefined1 auStack_168 [8];
  float fStack_160;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  undefined8 uStack_148;
  longlong lStack_138;
  undefined8 uStack_130;
  float fStack_128;
  longlong lStack_120;
  undefined8 uStack_118;
  longlong lStack_110;
  longlong lStack_108;
  longlong *plStack_100;
  longlong *plStack_f8;
  undefined4 *puStack_f0;
  undefined4 *puStack_e8;
  undefined4 *puStack_e0;
  longlong *plStack_d8;
  float *pfStack_d0;
  longlong lStack_c8;
  undefined8 uStack_c0;
  
  uStack_c0 = 0xfffffffffffffffe;
  puVar31 = param_3;
  plStack_d8 = param_1;
  cVar14 = pdb_140e94b40();
  if (cVar14 == '\0') {
    lStack_120 = 0;
    puVar21 = (undefined1 *)*param_3;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*puVar21) {
    case 0:
code_r0x00014288e46f:
      if ((*(uint *)(puVar21 + 8) & 0xfffffffb) != 0) goto code_r0x00014288e43a;
      break;
    default:
code_r0x00014288e43a:
      lStack_110 = *param_2;
      fVar40 = *(float *)(lStack_110 + 0x28);
      uVar17 = *(undefined4 *)((longlong)param_7 + 0x1c);
      puVar24 = (undefined4 *)param_7[2];
      *puVar24 = uVar17;
      pfVar26 = (float *)*param_7;
      fVar40 = fVar40 + *pfVar26;
      *pfVar26 = fVar40;
      plStack_f8 = (longlong *)
                   CONCAT44(plStack_f8._4_4_,(int)CONCAT71((int7)((ulonglong)puVar31 >> 8),1));
      goto code_r0x00014288e4a7;
    case 4:
code_r0x00014288e467:
      if (puVar21[1] != '\x06') goto code_r0x00014288e43a;
      break;
    case 5:
    case 9:
    case 10:
    case 0xc:
    case 0x11:
      break;
    }
code_r0x00014288e478:
    lStack_110 = *param_2;
    fVar40 = *(float *)(lStack_110 + 0x28);
    uVar17 = *(undefined4 *)((longlong)param_7 + 0x1c);
    puVar24 = (undefined4 *)param_7[2];
    *puVar24 = uVar17;
    pfVar26 = (float *)*param_7;
    fVar40 = *pfVar26 - fVar40;
    *pfVar26 = fVar40;
    plStack_f8 = (longlong *)((ulonglong)plStack_f8 & 0xffffffff00000000);
code_r0x00014288e4a7:
    fVar9 = _DAT_142e36f28;
    fVar44 = 0.0;
    if (0.0 <= fVar40) {
      fVar44 = fVar40;
    }
    fVar40 = _DAT_142e36f28;
    if (fVar44 <= _DAT_142e36f28) {
      fVar40 = fVar44;
    }
    *pfVar26 = fVar40;
    fVar44 = _DAT_142e3788c - (fVar40 + fVar40);
    *puVar24 = uVar17;
    pfVar26[1] = fVar44 * fVar40 * fVar40;
    uVar22 = *param_4;
    pdb_140e08f50(&uStack_130,uVar22);
    pdb_140e08fa0(auStack_168,uVar22);
    uVar22 = pdb_140a31b70(*param_5,0);
    pdb_140a31ba0(&puStack_188,uVar22);
    fVar13 = _UNK_1435ab60c;
    fVar12 = _UNK_1435ab608;
    fVar11 = _UNK_1435ab604;
    fVar10 = _UNK_1435ab600;
    fVar43 = _UNK_1435ab5fc;
    fVar42 = _UNK_1435ab5f8;
    fVar44 = _UNK_1435ab5f4;
    fVar40 = _UNK_1435ab5f0;
    fVar41 = (float)uStack_130;
    uVar27 = (ulonglong)uStack_130 >> 0x20;
    fVar46 = auStack_168._0_4_ * _DAT_1430067c0 * _DAT_143065e90;
    fVar47 = auStack_168._4_4_ * _UNK_1430067c4 * _UNK_143065e94;
    fVar45 = fStack_160 * _DAT_142e3788c * _DAT_142e37838 + fStack_128;
    fVar48 = (float)_DAT_1430140f0;
    uVar19 = (ulonglong)_DAT_1430140f0 >> 0x20;
    fVar49 = (float)_DAT_1430342c0;
    uVar8 = (ulonglong)_DAT_1430342c0 >> 0x20;
    puVar31 = puStack_188;
    lVar18 = lStack_178;
    do {
      while( true ) {
        if (puVar31 == puStack_180) {
          bVar30 = false;
          puStack_188 = puVar31;
          goto code_r0x00014288e652;
        }
        if ((*(uint *)(puVar31 + 3) & 1) != 0) break;
        puVar31 = (undefined8 *)((longlong)puVar31 + 0x1c);
        lVar18 = lVar18 + 1;
      }
      lVar18 = lVar18 + 1;
      lStack_170 = lStack_170 + -1;
      puStack_188 = (undefined8 *)((longlong)puVar31 + 0x1c);
      lStack_178 = lVar18;
      iVar16 = pdb_1409012c0();
      bVar30 = iVar16 != 0;
      if (iVar16 == 0) break;
      fStack_158 = (float)*puVar31;
      fStack_154 = (float)((ulonglong)*puVar31 >> 0x20);
      fStack_150 = (float)puVar31[1];
      fStack_14c = (float)((ulonglong)puVar31[1] >> 0x20);
      _fStack_158 = CONCAT44(fStack_154 + fVar44 + fVar11,fStack_158 + fVar40 + fVar10);
      _fStack_150 = CONCAT44(fStack_14c + fVar43 + fVar13,fStack_150 + fVar42 + fVar12);
      uStack_148 = CONCAT44((float)((ulonglong)puVar31[2] >> 0x20) + (float)uVar19 + (float)uVar8,
                            (float)puVar31[2] + fVar48 + fVar49);
      fStack_1a0 = fStack_128;
      uStack_1a8 = uStack_130;
      uStack_1b8 = CONCAT44(fVar47 + (float)uVar27,fVar46 + fVar41);
      fStack_1b0 = fVar45;
      pdb_140deed20(aiStack_1c8,&fStack_158,&uStack_1a8,&uStack_1b8);
      puVar31 = (undefined8 *)((longlong)puVar31 + 0x1c);
    } while (aiStack_1c8[0] == 0);
code_r0x00014288e652:
    fVar40 = _DAT_14300a340;
    plStack_f8 = (longlong *)
                 CONCAT44(plStack_f8._4_4_,
                          CONCAT31((int3)((ulonglong)plStack_f8 >> 8),(byte)plStack_f8 | bVar30));
    lStack_138 = *plStack_d8;
    lVar18 = plStack_d8[1];
    plStack_d8 = (longlong *)CONCAT44(plStack_d8._4_4_,*(undefined4 *)((longlong)plStack_d8 + 0x14))
    ;
    puVar39 = *(uint **)(lStack_138 + 0xf8);
    puVar2 = puVar39 + *(longlong *)(lStack_138 + 0x100);
    plStack_100 = (longlong *)CONCAT71(plStack_100._1_7_,*(undefined1 *)(lStack_138 + 0x108));
    lStack_c8 = 0;
    lStack_108 = 8;
    pfStack_d0 = (float *)0x0;
    bVar30 = false;
    lVar38 = 0;
    uVar15 = 0;
code_r0x00014288e6cd:
    if ((char)plStack_100 == '\0') {
      if (uVar15 != (uint)lVar38) {
        uVar7 = ~*(uint *)(lStack_108 + 8 + (ulonglong)uVar15 * 0x10);
        goto code_r0x00014288e924;
      }
      do {
        if (puVar39 == puVar2) goto code_r0x00014288eaf2;
        uVar15 = *puVar39;
        puVar39 = puVar39 + 1;
        lVar38 = *(longlong *)(*(longlong *)(lVar18 + 0x100) + 0x58 + (ulonglong)uVar15 * 0xa0);
      } while (lVar38 == 0);
      lVar23 = *(longlong *)(lVar18 + 0x100) + (ulonglong)uVar15 * 0xa0;
      lVar33 = *(longlong *)
                (*(longlong *)(lVar18 + 0x1a0) + 0x18 + (ulonglong)*(uint *)(lVar23 + 0x94) * 0x48);
      lVar25 = *(longlong *)
                (*(longlong *)(lVar18 + 0x1a0) + 0x38 + (ulonglong)*(uint *)(lVar23 + 0x94) * 0x48);
      lVar28 = ~*(ulonglong *)(lVar25 + *(longlong *)(lStack_138 + 0x110) * 8) * 0x30;
      pfStack_d0 = *(float **)(lVar33 + 0x10 + lVar28);
      puStack_e8 = *(undefined4 **)(lVar33 + 0x28 + lVar28);
      lVar25 = ~*(ulonglong *)(lVar25 + *(longlong *)(lStack_138 + 0x118) * 8) * 0x30;
      lStack_c8 = *(longlong *)(lVar33 + 0x10 + lVar25);
      puStack_e0 = *(undefined4 **)(lVar33 + 0x28 + lVar25);
      if ((*(ulonglong *)(lVar23 + 0x88) <= *(ulonglong *)(lStack_138 + 0x120)) ||
         (*(longlong *)(*(longlong *)(lVar23 + 0x80) + *(ulonglong *)(lStack_138 + 0x120) * 8) == 0)
         ) {
        lStack_108 = *(longlong *)(lVar23 + 0x50);
        uVar27 = (ulonglong)~*(uint *)(lStack_108 + 8);
        puVar24 = puStack_e8 + uVar27;
        puStack_f0 = puStack_e0 + uVar27;
        pfVar26 = pfStack_d0 + uVar27 * 4;
        lVar33 = uVar27 * 0x30 + lStack_c8;
        uVar15 = 0;
        goto code_r0x00014288e9ef;
      }
      lStack_108 = *(longlong *)(lVar23 + 0x50);
      uVar27 = (ulonglong)~*(uint *)(lStack_108 + 8);
      puVar24 = puStack_e8 + uVar27;
      puStack_f0 = puStack_e0 + uVar27;
      pfVar26 = pfStack_d0 + uVar27 * 4;
      lVar33 = uVar27 * 0x30 + lStack_c8;
      uVar15 = 0;
code_r0x00014288e965:
      uVar15 = uVar15 + 1;
      pfVar35 = pfVar26 + 1;
      pfVar29 = pfVar26 + 2;
      uVar22 = *(undefined8 *)(pfVar26 + 1);
      bVar30 = true;
code_r0x00014288ea07:
      fVar44 = *(float *)(lStack_110 + 0x28) / fVar40;
    }
    else {
      uVar7 = uVar15;
      if (uVar15 == (uint)lVar38) {
        do {
          if (puVar39 == puVar2) goto code_r0x00014288eaf2;
          uVar15 = *puVar39;
          puVar39 = puVar39 + 1;
          lVar38 = *(longlong *)(*(longlong *)(lVar18 + 0x1a0) + 0x10 + (ulonglong)uVar15 * 0x48);
        } while (lVar38 == 0);
        lVar25 = *(longlong *)(lVar18 + 0x1a0) + (ulonglong)uVar15 * 0x48;
        lVar23 = *(longlong *)(lVar25 + 0x18);
        lVar28 = *(longlong *)(lVar25 + 0x38);
        lVar33 = ~*(ulonglong *)(lVar28 + *(longlong *)(lStack_138 + 0x110) * 8) * 0x30;
        pfVar26 = *(float **)(lVar23 + 0x10 + lVar33);
        puVar24 = *(undefined4 **)(lVar23 + 0x28 + lVar33);
        lVar34 = ~*(ulonglong *)(lVar28 + *(longlong *)(lStack_138 + 0x118) * 8) * 0x30;
        lVar33 = *(longlong *)(lVar23 + 0x10 + lVar34);
        puStack_f0 = *(undefined4 **)(lVar23 + 0x28 + lVar34);
        puStack_e8 = puVar24;
        puStack_e0 = puStack_f0;
        pfStack_d0 = pfVar26;
        lStack_c8 = lVar33;
        if ((*(ulonglong *)(lStack_138 + 0x120) < *(ulonglong *)(lVar25 + 0x40)) &&
           (*(longlong *)(lVar28 + *(ulonglong *)(lStack_138 + 0x120) * 8) != 0)) {
          uVar15 = 0;
          goto code_r0x00014288e965;
        }
        uVar15 = 0;
      }
      else {
code_r0x00014288e924:
        uVar27 = (ulonglong)uVar7;
        puVar24 = puStack_e8 + uVar27;
        puStack_f0 = puStack_e0 + uVar27;
        pfVar26 = pfStack_d0 + uVar27 * 4;
        lVar33 = uVar27 * 0x30 + lStack_c8;
        if (bVar30) goto code_r0x00014288e965;
      }
code_r0x00014288e9ef:
      uVar15 = uVar15 + 1;
      pfVar35 = pfVar26 + 1;
      pfVar29 = pfVar26 + 2;
      uVar22 = *(undefined8 *)(pfVar26 + 1);
      if (*(char *)(pfVar26 + 3) != '\0') {
        bVar30 = false;
        goto code_r0x00014288ea07;
      }
      fVar44 = *(float *)(lStack_110 + 0x28) / *pfVar26;
      bVar30 = false;
    }
    *puVar24 = plStack_d8._0_4_;
    fVar42 = 0.0;
    if (0.0 <= fVar44 + *pfVar35) {
      fVar42 = fVar44 + *pfVar35;
    }
    fVar44 = fVar9;
    if (fVar42 <= fVar9) {
      fVar44 = fVar42;
    }
    *pfVar35 = fVar44;
    if (((byte)plStack_f8 & fVar44 == fVar9) == 0) {
      fVar42 = pfVar26[2] - *(float *)(lStack_110 + 0x28);
      fVar44 = 0.0;
      if (0.0 <= fVar42) {
        fVar44 = fVar42;
      }
      fVar42 = fVar9;
      if (fVar44 <= fVar9) {
        fVar42 = fVar44;
      }
    }
    else {
      fVar42 = pfVar26[2] + *(float *)(lStack_110 + 0x28);
      if (fVar9 <= fVar42) {
        fVar42 = fVar9;
      }
    }
    *pfVar29 = fVar42;
    *puVar24 = plStack_d8._0_4_;
    *(undefined1 *)(pfVar26 + 3) = 0;
    fVar44 = *pfVar35;
    fVar42 = *pfVar29;
    if ((fVar44 == (float)uVar22) && (!NAN(fVar44) && !NAN((float)uVar22)))
    goto code_r0x00014288eab4;
    goto code_r0x00014288eac3;
  }
  puVar36 = &UNK_1435ab770;
  puVar31 = (undefined8 *)0x31;
  uVar27 = 0x31;
  lVar18 = pdb_14288d560(&UNK_1435ab770);
  if (lVar18 != 1) {
LAB_14288e2c2:
    puVar32 = &UNK_1435ab74f;
    puVar37 = &UNK_1435ab724;
    do {
      bVar3 = puVar32[-1];
      uVar15 = (uint)(char)bVar3;
      plStack_f8 = param_2;
      if ((char)bVar3 < '\0') {
        bVar4 = puVar32[-2];
        if ((char)bVar4 < -0x40) {
          bVar5 = puVar32[-3];
          if ((char)bVar5 < -0x40) {
            pbVar1 = puVar32 + -4;
            puVar32 = puVar32 + -4;
            uVar15 = bVar5 & 0x3f | (*pbVar1 & 7) << 6;
          }
          else {
            puVar32 = puVar32 + -3;
            uVar15 = bVar5 & 0xf;
          }
          uVar15 = bVar4 & 0x3f | uVar15 << 6;
        }
        else {
          puVar32 = puVar32 + -2;
          uVar15 = bVar4 & 0x1f;
        }
        uVar15 = (uint)(bVar3 & 0x3f) | uVar15 << 6;
        if (uVar15 != 0x5c) goto LAB_14288e354;
LAB_14288e387:
        if ((undefined *)0x2b < puVar32 + -0x1435ab723) goto LAB_14288ebbe;
        lVar18 = 0x2b - (longlong)(puVar32 + -0x1435ab723);
        puVar37 = puVar32 + 1;
        goto LAB_14288e3af;
      }
      puVar32 = puVar32 + -1;
      if (uVar15 == 0x5c) goto LAB_14288e387;
LAB_14288e354:
      if (uVar15 == 0x2f) goto LAB_14288e387;
    } while (puVar32 != &UNK_1435ab724);
    lVar18 = 0x2b;
LAB_14288e3af:
    plVar20 = (longlong *)pdb_140e97000();
    if (((char)plVar20[0xd] == '\x01') ||
       (plVar20 = (longlong *)pdb_142e2ab20(plVar20,0), plVar20 != (longlong *)0x0)) {
      if (*plVar20 != 0) goto LAB_14288eb7e;
      *plVar20 = -1;
      plStack_100 = plVar20;
      uStack_118 = pdb_140e94f10(plVar20 + 1,puVar36,puVar31,puVar37,lVar18,1,0);
      *plStack_100 = *plStack_100 + 1;
      lStack_120 = 1;
      puVar21 = (undefined1 *)*param_3;
      param_2 = plStack_f8;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*puVar21) {
      case 0:
        goto code_r0x00014288e46f;
      default:
        goto code_r0x00014288e43a;
      case 4:
        goto code_r0x00014288e467;
      case 5:
      case 9:
      case 10:
      case 0xc:
      case 0x11:
        goto code_r0x00014288e478;
      }
    }
    goto LAB_14288ebb2;
  }
  if (uVar27 < 0x32) {
    puVar36 = &UNK_1435ab770;
    uVar19 = pdb_14288d560(&UNK_1435ab770);
    if ((uVar19 & 1) != 0) {
      if (0x31 < uVar27 + 2) goto LAB_14288ec01;
      puVar31 = (undefined8 *)(0x2f - uVar27);
      puVar36 = &UNK_1435ab772 + uVar27;
    }
    goto LAB_14288e2c2;
  }
  goto LAB_14288ebe1;
code_r0x00014288eab4:
  fVar43 = (float)((ulonglong)uVar22 >> 0x20);
  if ((fVar42 != fVar43) || (NAN(fVar42) || NAN(fVar43))) {
code_r0x00014288eac3:
    uVar17 = pdb_140de85e0(fVar44,fVar9 - (fVar9 - fVar42) * (fVar9 - fVar42));
    *puStack_f0 = plStack_d8._0_4_;
    *(undefined4 *)(lVar33 + 0x20) = uVar17;
  }
  goto code_r0x00014288e6cd;
code_r0x00014288eaf2:
  if (lStack_120 == 0) {
    return;
  }
  plVar20 = (longlong *)pdb_140e97000();
  if ((char)plVar20[0xd] != '\x01') goto code_r0x00014288eb8a;
  do {
    if (*plVar20 == 0) {
      *plVar20 = -1;
      plStack_d8 = plVar20;
      pdb_140e95370(plVar20 + 1,uStack_118);
      *plStack_d8 = *plStack_d8 + 1;
      return;
    }
LAB_14288eb7e:
    plVar20 = (longlong *)pdb_142dc8090(&UNK_1435ab5d0);
code_r0x00014288eb8a:
    plVar20 = (longlong *)pdb_142e2ab20(plVar20,0);
  } while (plVar20 != (longlong *)0x0);
LAB_14288ebb2:
  pdb_142dc7890(&UNK_1435ab560);
LAB_14288ebbe:
  pdb_142dc8070(&UNK_1435ab724,0x2b);
LAB_14288ebe1:
  pdb_142dc8070(&UNK_1435ab770,0x31,0);
LAB_14288ec01:
  pdb_142dc8070(&UNK_1435ab770,0x31);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

