// VA 0x14288d980, PDB extent 2132 bytes
// forest::tree_animation::forest_tree_animation
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/forest/src/tree_animation.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: forest::tree_animation::forest_tree_animation
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/forest/src/tree_animation.rs
   Extent: 2132 */

void pdb_14288d980(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  byte *pbVar1;
  uint *puVar2;
  ulonglong *puVar3;
  undefined4 *puVar4;
  float fVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  longlong lVar12;
  longlong lVar13;
  undefined4 *puVar14;
  longlong lVar15;
  undefined4 *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  code *pcVar19;
  float fVar20;
  float fVar21;
  char cVar22;
  bool bVar23;
  uint uVar24;
  longlong lVar25;
  ulonglong uVar26;
  longlong *plVar27;
  longlong lVar28;
  longlong lVar29;
  longlong lVar30;
  undefined8 *puVar31;
  ulonglong uVar32;
  undefined *puVar33;
  uint *puVar34;
  undefined *puVar35;
  longlong lVar36;
  longlong lVar37;
  undefined *puVar38;
  longlong lVar39;
  bool bVar40;
  float fVar41;
  float fVar42;
  undefined8 uStack_100;
  longlong lStack_f0;
  longlong lStack_e8;
  longlong lStack_d0;
  longlong lStack_c8;
  longlong lStack_c0;
  longlong lStack_b8;
  
  lVar39 = 0;
  cVar22 = pdb_140e94b40();
  if (cVar22 == '\0') {
    bVar23 = false;
  }
  else {
    puVar33 = &UNK_1435ab7a4;
    lVar37 = 0x2d;
    uVar32 = 0x2d;
    lVar25 = pdb_14288d560(&UNK_1435ab7a4);
    if (lVar25 == 1) {
      if (0x2d < uVar32) {
LAB_14288e055:
        pdb_142dc8070(&UNK_1435ab7a4,0x2d,0);
LAB_14288e075:
        pdb_142dc8070(&UNK_1435ab7a4,0x2d);
        pcVar19 = (code *)swi(3);
        (*pcVar19)();
        return;
      }
      puVar33 = &UNK_1435ab7a4;
      uVar26 = pdb_14288d560(&UNK_1435ab7a4);
      if ((uVar26 & 1) != 0) {
        if (0x2d < uVar32 + 2) goto LAB_14288e075;
        lVar37 = 0x2b - uVar32;
        puVar33 = &UNK_1435ab7a6 + uVar32;
      }
    }
    puVar35 = &UNK_1435ab74f;
    puVar38 = &UNK_1435ab724;
    do {
      bVar6 = puVar35[-1];
      uVar24 = (uint)(char)bVar6;
      if ((char)bVar6 < '\0') {
        bVar7 = puVar35[-2];
        if ((char)bVar7 < -0x40) {
          bVar8 = puVar35[-3];
          if ((char)bVar8 < -0x40) {
            pbVar1 = puVar35 + -4;
            puVar35 = puVar35 + -4;
            uVar24 = bVar8 & 0x3f | (*pbVar1 & 7) << 6;
          }
          else {
            puVar35 = puVar35 + -3;
            uVar24 = bVar8 & 0xf;
          }
          uVar24 = bVar7 & 0x3f | uVar24 << 6;
        }
        else {
          puVar35 = puVar35 + -2;
          uVar24 = bVar7 & 0x1f;
        }
        uVar24 = (uint)(bVar6 & 0x3f) | uVar24 << 6;
        if (uVar24 != 0x5c) goto LAB_14288dac4;
LAB_14288dadf:
        puVar38 = puVar35 + -0x1435ab723;
        if (puVar38 < (undefined *)0x2c) {
          lVar25 = 0x2b - (longlong)puVar38;
          puVar38 = puVar35 + 1;
          goto LAB_14288db04;
        }
        pdb_142dc8070(&UNK_1435ab724,0x2b,puVar38,0x2b,&UNK_1435ab838);
        goto LAB_14288e055;
      }
      puVar35 = puVar35 + -1;
      if (uVar24 == 0x5c) goto LAB_14288dadf;
LAB_14288dac4:
      if (uVar24 == 0x2f) goto LAB_14288dadf;
    } while (puVar35 != &UNK_1435ab724);
    lVar25 = 0x2b;
LAB_14288db04:
    plVar27 = (longlong *)pdb_140e97000();
    if (((char)plVar27[0xd] != '\x01') &&
       (plVar27 = (longlong *)pdb_142e2ab20(plVar27,0), plVar27 == (longlong *)0x0)) {
LAB_14288e016:
      pdb_142dc7890(&UNK_1435ab560);
LAB_14288e023:
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2();
    }
    if (*plVar27 != 0) goto LAB_14288dfe6;
    *plVar27 = -1;
    uStack_100 = pdb_140e94f10(plVar27 + 1,puVar33,lVar37,puVar38,lVar25,1,0);
    *plVar27 = *plVar27 + 1;
    bVar23 = true;
  }
  fVar21 = _DAT_142e37ae0;
  fVar20 = _DAT_142e36f28;
  lVar25 = *param_1;
  lVar37 = param_1[1];
  uVar9 = *(undefined4 *)((longlong)param_1 + 0x14);
  puVar34 = *(uint **)(lVar25 + 0xf8);
  puVar2 = puVar34 + *(longlong *)(lVar25 + 0x100);
  cVar22 = *(char *)(lVar25 + 0x108);
  lVar12 = *param_2;
  uVar10 = *(undefined4 *)((longlong)param_4 + 0x1c);
  lVar13 = *param_4;
  puVar14 = (undefined4 *)param_4[2];
  uVar11 = *(undefined4 *)((longlong)param_3 + 0x1c);
  lVar15 = *param_3;
  puVar16 = (undefined4 *)param_3[2];
  lStack_e8 = 8;
  lStack_b8 = 0;
  lStack_c0 = 0;
  lStack_f0 = 8;
  bVar40 = false;
  uVar24 = 0;
LAB_14288dc19:
  if (cVar22 == '\0') {
    if (uVar24 == (uint)lVar39) {
      do {
        if (puVar34 == puVar2) goto LAB_14288df84;
        uVar24 = *puVar34;
        puVar34 = puVar34 + 1;
        lVar39 = *(longlong *)(*(longlong *)(lVar37 + 0x100) + 0x58 + (ulonglong)uVar24 * 0xa0);
      } while (lVar39 == 0);
      lVar28 = *(longlong *)(lVar37 + 0x100) + (ulonglong)uVar24 * 0xa0;
      uVar24 = 0;
      bVar40 = false;
      if (*(ulonglong *)(lVar25 + 0x120) < *(ulonglong *)(lVar28 + 0x88)) {
        bVar40 = *(longlong *)(*(longlong *)(lVar28 + 0x80) + *(ulonglong *)(lVar25 + 0x120) * 8) !=
                 0;
      }
      lVar29 = *(longlong *)
                (*(longlong *)(lVar37 + 0x1a0) + 0x18 + (ulonglong)*(uint *)(lVar28 + 0x94) * 0x48);
      lVar30 = *(longlong *)
                (*(longlong *)(lVar37 + 0x1a0) + 0x38 + (ulonglong)*(uint *)(lVar28 + 0x94) * 0x48);
      lVar36 = ~*(ulonglong *)(lVar30 + *(longlong *)(lVar25 + 0x110) * 8) * 0x30;
      lStack_c0 = *(longlong *)(lVar29 + 0x10 + lVar36);
      lStack_d0 = *(longlong *)(lVar29 + 0x28 + lVar36);
      lVar30 = ~*(ulonglong *)(lVar30 + *(longlong *)(lVar25 + 0x118) * 8) * 0x30;
      lStack_b8 = *(longlong *)(lVar29 + 0x10 + lVar30);
      lStack_c8 = *(longlong *)(lVar29 + 0x28 + lVar30);
      lStack_e8 = *(longlong *)(lVar28 + 0x50);
      uVar32 = 0;
    }
    else {
      uVar32 = (ulonglong)uVar24;
    }
    puVar31 = (undefined8 *)(lStack_e8 + uVar32 * 0x10);
    uVar32 = (ulonglong)~*(uint *)(lStack_e8 + 8 + uVar32 * 0x10);
  }
  else {
    if (uVar24 == (uint)lVar39) {
      do {
        if (puVar34 == puVar2) goto LAB_14288df84;
        uVar24 = *puVar34;
        puVar34 = puVar34 + 1;
        lVar39 = *(longlong *)(*(longlong *)(lVar37 + 0x1a0) + 0x10 + (ulonglong)uVar24 * 0x48);
      } while (lVar39 == 0);
      lVar28 = *(longlong *)(lVar37 + 0x1a0) + (ulonglong)uVar24 * 0x48;
      lVar29 = *(longlong *)(lVar28 + 0x38);
      uVar24 = 0;
      bVar40 = false;
      if (*(ulonglong *)(lVar25 + 0x120) < *(ulonglong *)(lVar28 + 0x40)) {
        bVar40 = *(longlong *)(lVar29 + *(ulonglong *)(lVar25 + 0x120) * 8) != 0;
      }
      lVar30 = *(longlong *)(lVar28 + 0x18);
      lVar36 = ~*(ulonglong *)(lVar29 + *(longlong *)(lVar25 + 0x110) * 8) * 0x30;
      lStack_c0 = *(longlong *)(lVar30 + 0x10 + lVar36);
      lStack_d0 = *(longlong *)(lVar30 + 0x28 + lVar36);
      lVar29 = ~*(ulonglong *)(lVar29 + *(longlong *)(lVar25 + 0x118) * 8) * 0x30;
      lStack_b8 = *(longlong *)(lVar30 + 0x10 + lVar29);
      lStack_c8 = *(longlong *)(lVar30 + 0x28 + lVar29);
      lStack_f0 = *(longlong *)(lVar28 + 8);
    }
    uVar32 = (ulonglong)uVar24;
    puVar31 = (undefined8 *)(lStack_f0 + uVar32 * 8);
  }
  puVar3 = (ulonglong *)(lStack_c0 + uVar32 * 0x18);
  puVar4 = (undefined4 *)(lStack_d0 + uVar32 * 4);
  uVar17 = *puVar31;
  if ((int)uVar17 != 0) goto code_r0x00014288de3c;
LAB_14288df84:
  if (!bVar23) {
    return;
  }
  plVar27 = (longlong *)pdb_140e97000();
  if ((char)plVar27[0xd] != '\x01') goto LAB_14288dff2;
  do {
    if (*plVar27 == 0) {
      *plVar27 = -1;
      pdb_140e95370(plVar27 + 1,uStack_100);
      *plVar27 = *plVar27 + 1;
      return;
    }
LAB_14288dfe6:
    plVar27 = (longlong *)pdb_142dc8090(&UNK_1435ab5d0);
LAB_14288dff2:
    plVar27 = (longlong *)pdb_142e2ab20(plVar27,0);
  } while (plVar27 != (longlong *)0x0);
  goto LAB_14288e016;
code_r0x00014288de3c:
  fVar5 = *(float *)((longlong)puVar3 + 0xc);
  if (bVar40) {
    fVar41 = *(float *)(lVar12 + 0x28) / fVar21;
  }
  else {
    fVar41 = *(float *)(lVar12 + 0x28);
    if (*(float *)(puVar3 + 2) <= 0.0) {
      fVar41 = fVar41 + fVar41;
    }
    else {
      *puVar4 = uVar9;
      *(float *)(puVar3 + 2) = *(float *)(puVar3 + 2) - fVar41;
      fVar41 = 0.0;
    }
  }
  *puVar4 = uVar9;
  fVar41 = fVar41 + *(float *)((longlong)puVar3 + 0xc);
  fVar42 = 0.0;
  if (0.0 <= fVar41) {
    fVar42 = fVar41;
  }
  fVar41 = fVar20;
  if (fVar42 <= fVar20) {
    fVar41 = fVar42;
  }
  *(float *)((longlong)puVar3 + 0xc) = fVar41;
  if ((fVar41 != fVar5) || (NAN(fVar41) || NAN(fVar5))) {
    fVar41 = (float)pdb_140dedcd0(&UNK_1435ab750);
    fVar5 = *(float *)(puVar3 + 1);
    *(undefined4 *)(lStack_c8 + uVar32 * 4) = uVar9;
    *(float *)(uVar32 * 0x30 + lStack_b8 + 0xc) = fVar41 * fVar5;
  }
  uVar24 = uVar24 + 1;
  if (((!bVar40) || (*(float *)((longlong)puVar3 + 0xc) != 0.0)) ||
     (NAN(*(float *)((longlong)puVar3 + 0xc)))) goto LAB_14288dc19;
  *puVar16 = uVar11;
  lVar28 = *(longlong *)(lVar15 + 0x30);
  uVar18 = *(undefined8 *)(lVar15 + 0x40);
  if (lVar28 == *(longlong *)(lVar15 + 0x20)) {
    pdb_142d7e980(lVar15 + 0x20);
  }
  lVar29 = *(longlong *)(lVar15 + 0x28);
  *(undefined8 *)(lVar29 + lVar28 * 0x10) = uVar17;
  *(undefined8 *)(lVar29 + 8 + lVar28 * 0x10) = uVar18;
  *(longlong *)(lVar15 + 0x30) = lVar28 + 1;
  *(longlong *)(lVar15 + 0x40) = *(longlong *)(lVar15 + 0x40) + 1;
  *puVar14 = uVar10;
  if (*puVar3 < *(ulonglong *)(lVar13 + 0x10)) {
    *(undefined4 *)(*(longlong *)(lVar13 + 8) + 0x40 + *puVar3 * 0x50) = 0;
    goto LAB_14288dc19;
  }
  goto LAB_14288e023;
}

