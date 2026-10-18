// VA 0x14289a9d0, PDB extent 2184 bytes
// system_onboarding::hint_stairs::hint_stairs
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/onboarding/src/hint_stairs.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_onboarding::hint_stairs::hint_stairs
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/onboarding/src/hint_stairs.rs
   Extent: 2184 */

void pdb_14289a9d0(undefined8 *param_1,longlong *param_2,undefined8 *param_3,longlong *param_4,
                  undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8,
                  undefined8 *param_9,undefined8 *param_10,undefined8 *param_11,undefined8 *param_12
                  ,undefined8 *param_13,longlong *param_14)

{
  float fVar1;
  undefined4 uVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  undefined2 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  char *pcVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  longlong lVar20;
  ulonglong uVar21;
  longlong lVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  undefined8 uVar25;
  byte bVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  char *pcVar30;
  bool bVar31;
  longlong lVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  ulonglong uVar37;
  bool bVar38;
  bool bVar39;
  bool bVar40;
  bool bVar41;
  bool bVar42;
  bool bVar43;
  bool bVar44;
  bool bVar45;
  bool bVar46;
  bool bVar47;
  bool bVar48;
  bool bVar49;
  bool bVar50;
  bool bVar51;
  undefined4 uStack_e8;
  undefined2 uStack_e4;
  ulonglong uStack_b8;
  undefined8 *puStack_b0;
  longlong *plStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_70 [48];
  
  puVar3 = (ulonglong *)*param_6;
  lVar20 = param_6[1];
  uVar11 = *puVar3;
  uVar13 = 0;
  uVar12 = uVar11 - *(ulonglong *)(lVar20 + 0x18);
  if (uVar11 < *(ulonglong *)(lVar20 + 0x18)) {
    uVar12 = uVar13;
  }
  uVar21 = uVar11 - *(ulonglong *)(lVar20 + 0x38);
  if (uVar11 < *(ulonglong *)(lVar20 + 0x38)) {
    uVar21 = uVar13;
  }
  lVar22 = uVar12 * 8 + *(longlong *)(lVar20 + 8);
  uVar11 = *(ulonglong *)(lVar20 + 0x10);
  uVar33 = uVar11 - uVar12;
  if (uVar11 < uVar12) {
    uVar33 = uVar13;
  }
  if (uVar11 < uVar12) {
    lVar22 = 8;
  }
  lVar32 = uVar21 * 8 + *(longlong *)(lVar20 + 0x28);
  uVar11 = *(ulonglong *)(lVar20 + 0x30) - uVar21;
  if (*(ulonglong *)(lVar20 + 0x30) < uVar21) {
    lVar32 = 8;
    uVar11 = uVar13;
  }
  *puVar3 = (*(longlong *)(lVar20 + 0x40) - uVar11) - uVar33;
  lVar20 = lVar22 + uVar33 * 8;
  lVar8 = uVar11 * 8 + lVar32;
  uVar2 = *(undefined4 *)((longlong)param_3 + 0x1c);
  puVar4 = (ulonglong *)*param_3;
  puVar5 = (undefined4 *)param_3[2];
  do {
    if ((lVar22 == 0) || (lVar22 == lVar20)) {
      if ((lVar32 == 0) || (lVar32 == lVar8)) break;
      lVar32 = lVar32 + 8;
      lVar22 = 0;
    }
    else {
      lVar22 = lVar22 + 8;
    }
    *puVar3 = *puVar3 + 1;
    *puVar5 = uVar2;
    *puVar4 = *puVar4 + 1;
  } while( true );
  lVar20 = param_10[1];
  uVar11 = *(ulonglong *)*param_10;
  uVar13 = 0;
  uVar12 = uVar11 - *(ulonglong *)(lVar20 + 0x18);
  if (uVar11 < *(ulonglong *)(lVar20 + 0x18)) {
    uVar12 = uVar13;
  }
  uVar21 = uVar11 - *(ulonglong *)(lVar20 + 0x38);
  if (uVar11 < *(ulonglong *)(lVar20 + 0x38)) {
    uVar21 = uVar13;
  }
  bVar38 = *(ulonglong *)(lVar20 + 0x30) < uVar21;
  uVar21 = *(ulonglong *)(lVar20 + 0x30) - uVar21;
  uVar11 = uVar21;
  if (bVar38) {
    uVar11 = uVar13;
  }
  bVar39 = *(ulonglong *)(lVar20 + 0x10) < uVar12;
  uVar12 = *(ulonglong *)(lVar20 + 0x10) - uVar12;
  uVar33 = uVar12;
  if (bVar39) {
    uVar33 = uVar13;
  }
  uVar11 = uVar33 + uVar11;
  if (!bVar39 && uVar12 != 0 || !bVar38 && uVar21 != 0) {
    uVar11 = uVar13;
  }
  *(ulonglong *)*param_10 = *(longlong *)(lVar20 + 0x40) - uVar11;
  lVar20 = param_11[1];
  uVar11 = *(ulonglong *)*param_11;
  uVar33 = uVar11 - *(ulonglong *)(lVar20 + 0x18);
  if (uVar11 < *(ulonglong *)(lVar20 + 0x18)) {
    uVar33 = uVar13;
  }
  uVar14 = uVar11 - *(ulonglong *)(lVar20 + 0x38);
  if (uVar11 < *(ulonglong *)(lVar20 + 0x38)) {
    uVar14 = uVar13;
  }
  bVar40 = *(ulonglong *)(lVar20 + 0x30) < uVar14;
  uVar14 = *(ulonglong *)(lVar20 + 0x30) - uVar14;
  uVar11 = uVar14;
  if (bVar40) {
    uVar11 = uVar13;
  }
  bVar41 = *(ulonglong *)(lVar20 + 0x10) < uVar33;
  uVar33 = *(ulonglong *)(lVar20 + 0x10) - uVar33;
  uVar37 = uVar33;
  if (bVar41) {
    uVar37 = uVar13;
  }
  uVar11 = uVar37 + uVar11;
  if (!bVar41 && uVar33 != 0 || !bVar40 && uVar14 != 0) {
    uVar11 = uVar13;
  }
  *(ulonglong *)*param_11 = *(longlong *)(lVar20 + 0x40) - uVar11;
  lVar20 = param_7[1];
  uVar11 = *(ulonglong *)*param_7;
  uVar37 = uVar11 - *(ulonglong *)(lVar20 + 0x18);
  if (uVar11 < *(ulonglong *)(lVar20 + 0x18)) {
    uVar37 = uVar13;
  }
  uVar15 = uVar11 - *(ulonglong *)(lVar20 + 0x38);
  if (uVar11 < *(ulonglong *)(lVar20 + 0x38)) {
    uVar15 = uVar13;
  }
  bVar42 = *(ulonglong *)(lVar20 + 0x30) < uVar15;
  uVar15 = *(ulonglong *)(lVar20 + 0x30) - uVar15;
  uVar11 = uVar15;
  if (bVar42) {
    uVar11 = uVar13;
  }
  bVar43 = *(ulonglong *)(lVar20 + 0x10) < uVar37;
  uVar37 = *(ulonglong *)(lVar20 + 0x10) - uVar37;
  uVar34 = uVar37;
  if (bVar43) {
    uVar34 = uVar13;
  }
  uVar11 = uVar34 + uVar11;
  if (!bVar43 && uVar37 != 0 || !bVar42 && uVar15 != 0) {
    uVar11 = uVar13;
  }
  *(ulonglong *)*param_7 = *(longlong *)(lVar20 + 0x40) - uVar11;
  lVar20 = param_8[1];
  uVar11 = *(ulonglong *)*param_8;
  uVar34 = uVar11 - *(ulonglong *)(lVar20 + 0x18);
  if (uVar11 < *(ulonglong *)(lVar20 + 0x18)) {
    uVar34 = uVar13;
  }
  uVar16 = uVar11 - *(ulonglong *)(lVar20 + 0x38);
  if (uVar11 < *(ulonglong *)(lVar20 + 0x38)) {
    uVar16 = uVar13;
  }
  bVar44 = *(ulonglong *)(lVar20 + 0x30) < uVar16;
  uVar16 = *(ulonglong *)(lVar20 + 0x30) - uVar16;
  uVar11 = uVar16;
  if (bVar44) {
    uVar11 = uVar13;
  }
  bVar45 = *(ulonglong *)(lVar20 + 0x10) < uVar34;
  uVar34 = *(ulonglong *)(lVar20 + 0x10) - uVar34;
  uVar17 = uVar34;
  if (bVar45) {
    uVar17 = uVar13;
  }
  uVar11 = uVar17 + uVar11;
  if (!bVar45 && uVar34 != 0 || !bVar44 && uVar16 != 0) {
    uVar11 = uVar13;
  }
  *(ulonglong *)*param_8 = *(longlong *)(lVar20 + 0x40) - uVar11;
  lVar20 = param_9[1];
  uVar11 = *(ulonglong *)*param_9;
  uVar17 = uVar11 - *(ulonglong *)(lVar20 + 0x18);
  if (uVar11 < *(ulonglong *)(lVar20 + 0x18)) {
    uVar17 = uVar13;
  }
  uVar23 = uVar11 - *(ulonglong *)(lVar20 + 0x38);
  if (uVar11 < *(ulonglong *)(lVar20 + 0x38)) {
    uVar23 = uVar13;
  }
  bVar46 = *(ulonglong *)(lVar20 + 0x30) < uVar23;
  uVar23 = *(ulonglong *)(lVar20 + 0x30) - uVar23;
  uVar11 = uVar23;
  if (bVar46) {
    uVar11 = uVar13;
  }
  bVar47 = *(ulonglong *)(lVar20 + 0x10) < uVar17;
  uVar17 = *(ulonglong *)(lVar20 + 0x10) - uVar17;
  uVar18 = uVar17;
  if (bVar47) {
    uVar18 = uVar13;
  }
  uVar11 = uVar18 + uVar11;
  if (!bVar47 && uVar17 != 0 || !bVar46 && uVar23 != 0) {
    uVar11 = uVar13;
  }
  *(ulonglong *)*param_9 = *(longlong *)(lVar20 + 0x40) - uVar11;
  lVar20 = param_12[1];
  uVar11 = *(ulonglong *)*param_12;
  uVar18 = uVar11 - *(ulonglong *)(lVar20 + 0x18);
  if (uVar11 < *(ulonglong *)(lVar20 + 0x18)) {
    uVar18 = uVar13;
  }
  uVar24 = uVar11 - *(ulonglong *)(lVar20 + 0x38);
  if (uVar11 < *(ulonglong *)(lVar20 + 0x38)) {
    uVar24 = uVar13;
  }
  bVar48 = *(ulonglong *)(lVar20 + 0x30) < uVar24;
  uVar24 = *(ulonglong *)(lVar20 + 0x30) - uVar24;
  uVar11 = uVar24;
  if (bVar48) {
    uVar11 = uVar13;
  }
  bVar49 = *(ulonglong *)(lVar20 + 0x10) < uVar18;
  uVar18 = *(ulonglong *)(lVar20 + 0x10) - uVar18;
  uVar9 = uVar18;
  if (bVar49) {
    uVar9 = uVar13;
  }
  uVar11 = uVar9 + uVar11;
  if (!bVar49 && uVar18 != 0 || !bVar48 && uVar24 != 0) {
    uVar11 = uVar13;
  }
  *(ulonglong *)*param_12 = *(longlong *)(lVar20 + 0x40) - uVar11;
  lVar20 = param_13[1];
  uVar11 = *(ulonglong *)*param_13;
  uVar9 = uVar11 - *(ulonglong *)(lVar20 + 0x18);
  if (uVar11 < *(ulonglong *)(lVar20 + 0x18)) {
    uVar9 = uVar13;
  }
  uVar27 = uVar11 - *(ulonglong *)(lVar20 + 0x38);
  if (uVar11 < *(ulonglong *)(lVar20 + 0x38)) {
    uVar27 = uVar13;
  }
  uVar11 = *(ulonglong *)(lVar20 + 0x10);
  uStack_b8 = *(ulonglong *)(lVar20 + 0x30);
  bVar50 = uStack_b8 < uVar27;
  uVar28 = uStack_b8 - uVar27;
  uVar29 = uVar28;
  if (bVar50) {
    uVar29 = uVar13;
  }
  bVar51 = uVar11 < uVar9;
  uVar35 = uVar11 - uVar9;
  uVar36 = uVar35;
  if (bVar51) {
    uVar36 = uVar13;
  }
  uVar19 = uVar29 + uVar36;
  if (!bVar51 && uVar35 != 0 || !bVar50 && uVar28 != 0) {
    uVar19 = uVar13;
  }
  lVar22 = *(longlong *)(lVar20 + 8);
  lVar32 = *(longlong *)(lVar20 + 0x28);
  *(ulonglong *)*param_13 = *(longlong *)(lVar20 + 0x40) - uVar19;
  bVar31 = true;
  if (!bVar51 && uVar35 != 0 || !bVar50 && uVar28 != 0) {
    lVar32 = lVar32 + uVar27 * 0x38;
    lVar22 = lVar22 + uVar9 * 0x38;
    if (uVar11 < uVar9) {
      lVar22 = 8;
    }
    pcVar30 = (char *)0x0;
    if (uVar9 < uVar11) {
      pcVar30 = (char *)(lVar22 + -0x38 + uVar36 * 0x38);
    }
    if (uStack_b8 < uVar27) {
      lVar32 = 8;
    }
    pcVar10 = (char *)(lVar32 + -0x38 + uVar29 * 0x38);
    if (uStack_b8 <= uVar27) {
      pcVar10 = pcVar30;
    }
    bVar31 = *(int *)(pcVar10 + 8) != 0 || *pcVar10 != '\0';
  }
  pcVar30 = (char *)*param_1;
  if ((*pcVar30 == '\x06') && (*(int *)(pcVar30 + 8) == 7)) {
    fVar1 = *(float *)(*param_14 + 0x28);
    *puVar5 = uVar2;
    *(float *)(puVar4 + 1) = fVar1 + *(float *)(puVar4 + 1);
  }
  puStack_b0 = param_1;
  plStack_a8 = param_4;
  if ((!bVar39 && uVar12 != 0 || !bVar38 && uVar21 != 0) && (*(char *)(*param_2 + 0x416) == '\0')) {
    *(undefined4 *)param_4[2] = *(undefined4 *)((longlong)param_4 + 0x1c);
    lVar20 = *param_4;
    lVar22 = *(longlong *)(lVar20 + 0x30);
    uVar6 = *(undefined8 *)(lVar20 + 0x40);
    if (lVar22 == *(longlong *)(lVar20 + 0x20)) {
      pdb_142d7e980(lVar20 + 0x20);
    }
    lVar32 = *(longlong *)(lVar20 + 0x28);
    *(undefined8 *)(lVar32 + lVar22 * 0x10) = uVar6;
    *(undefined1 *)(lVar32 + 8 + lVar22 * 0x10) = 0x11;
    *(longlong *)(lVar20 + 0x30) = lVar22 + 1;
    *(longlong *)(lVar20 + 0x40) = *(longlong *)(lVar20 + 0x40) + 1;
  }
  if (!bVar41 && uVar33 != 0 || !bVar40 && uVar14 != 0) {
    puVar5 = (undefined4 *)param_5[2];
    *puVar5 = *(undefined4 *)((longlong)param_5 + 0x1c);
    uVar6 = *param_5;
    lVar20 = *param_2;
    uVar7 = pdb_140a44d70(CONCAT71((int7)((ulonglong)puVar5 >> 8),0x10));
    uStack_a0 = CONCAT44(CONCAT22(uStack_a0._6_2_,uVar7),0xca);
    uVar25 = 0;
    if (*(longlong *)(lVar20 + 0x298) != 0) {
      uVar25 = *(undefined8 *)(lVar20 + 0x290);
    }
    pdb_1420c0500(&uStack_e8,&uStack_a0,uVar25);
    pdb_14289b260(uVar6,0x11,&uStack_e8,*(byte *)(lVar20 + 0x416) ^ 1);
  }
  uVar11 = *puVar4;
  if (uVar11 == 0) {
    if ((*pcVar30 != '\x06') || (*(int *)(pcVar30 + 8) != 7)) goto LAB_14289b031;
    *(undefined4 *)param_5[2] = *(undefined4 *)((longlong)param_5 + 0x1c);
    uVar6 = *param_5;
    bVar38 = false;
    uStack_e4 = pdb_140a44d70(0);
    uStack_e8 = 0xca;
    uStack_a0 = 199;
    pdb_1420c0330(auStack_70,&uStack_e8,&uStack_a0);
    lVar20 = *param_2;
    if (*(char *)(lVar20 + 0x412) == '\0') {
      bVar38 = _DAT_142e36f28 < *(float *)(puVar4 + 1);
    }
    pdb_14289b260(uVar6,0xd,auStack_70,bVar38);
    uVar11 = *puVar4;
    if (uVar11 == 0) goto LAB_14289b031;
  }
  else {
    lVar20 = *param_2;
  }
  if (*(char *)(lVar20 + 0x412) != '\x01') {
    *(undefined4 *)param_4[2] = *(undefined4 *)((longlong)param_4 + 0x1c);
    lVar22 = *param_4;
    lVar32 = *(longlong *)(lVar22 + 0x30);
    uVar6 = *(undefined8 *)(lVar22 + 0x40);
    if (lVar32 == *(longlong *)(lVar22 + 0x20)) {
      pdb_142d7e980(lVar22 + 0x20);
    }
    lVar8 = *(longlong *)(lVar22 + 0x28);
    *(undefined8 *)(lVar8 + lVar32 * 0x10) = uVar6;
    *(undefined1 *)(lVar8 + 8 + lVar32 * 0x10) = 0xd;
    *(longlong *)(lVar22 + 0x30) = lVar32 + 1;
    *(longlong *)(lVar22 + 0x40) = *(longlong *)(lVar22 + 0x40) + 1;
    uVar11 = *puVar4;
  }
  if (((2 < uVar11) && (*pcVar30 == '\x06')) && (*(int *)(pcVar30 + 8) == 7)) {
    puVar5 = (undefined4 *)param_5[2];
    *puVar5 = *(undefined4 *)((longlong)param_5 + 0x1c);
    uVar6 = *param_5;
    uStack_e4 = pdb_140a44d70(CONCAT71((int7)((ulonglong)puVar5 >> 8),1));
    uStack_e8 = 0xca;
    uStack_a0 = 0x10000000000c7;
    pdb_1420c0330(auStack_70,&uStack_e8,&uStack_a0);
    pdb_14289b260(uVar6,0xe,auStack_70,*(byte *)(lVar20 + 0x413) ^ 1);
  }
LAB_14289b031:
  lVar20 = *param_2;
  if (((*(char *)(lVar20 + 0x413) == '\0') && (*(char *)(lVar20 + 0x412) == '\x01')) &&
     ((!bVar49 && uVar18 != 0 || !bVar48 && uVar24 != 0) && !(bool)(*puVar4 == 0 | bVar31))) {
    *(undefined4 *)param_4[2] = *(undefined4 *)((longlong)param_4 + 0x1c);
    lVar22 = *param_4;
    lVar32 = *(longlong *)(lVar22 + 0x30);
    uVar6 = *(undefined8 *)(lVar22 + 0x40);
    if (lVar32 == *(longlong *)(lVar22 + 0x20)) {
      pdb_142d7e980(lVar22 + 0x20);
    }
    lVar8 = *(longlong *)(lVar22 + 0x28);
    *(undefined8 *)(lVar8 + lVar32 * 0x10) = uVar6;
    *(undefined1 *)(lVar8 + 8 + lVar32 * 0x10) = 0xe;
    *(longlong *)(lVar22 + 0x30) = lVar32 + 1;
    *(longlong *)(lVar22 + 0x40) = *(longlong *)(lVar22 + 0x40) + 1;
  }
  if (!bVar43 && uVar37 != 0 || !bVar42 && uVar15 != 0) {
    puVar5 = (undefined4 *)param_5[2];
    *puVar5 = *(undefined4 *)((longlong)param_5 + 0x1c);
    uVar6 = *param_5;
    uStack_e4 = pdb_140a44d70(CONCAT71((int7)((ulonglong)puVar5 >> 8),1));
    uStack_e8 = 0xca;
    uStack_a0 = 0x10000000000c7;
    pdb_1420c0330(auStack_70,&uStack_e8,&uStack_a0);
    if ((*(char *)(lVar20 + 0x412) == '\x01') && (*(char *)(lVar20 + 0x413) != '\0')) {
      bVar26 = *(byte *)(lVar20 + 0x414) ^ 1;
    }
    else {
      bVar26 = 0;
    }
    pdb_14289b260(uVar6,1,auStack_70,bVar26);
  }
  if (((*(char *)(lVar20 + 0x414) == '\0') && (*pcVar30 == '\0')) && (*(int *)(pcVar30 + 8) == 5)) {
    *(undefined4 *)param_4[2] = *(undefined4 *)((longlong)param_4 + 0x1c);
    lVar22 = *param_4;
    lVar32 = *(longlong *)(lVar22 + 0x30);
    uVar6 = *(undefined8 *)(lVar22 + 0x40);
    if (lVar32 == *(longlong *)(lVar22 + 0x20)) {
      pdb_142d7e980(lVar22 + 0x20);
    }
    lVar8 = *(longlong *)(lVar22 + 0x28);
    *(undefined8 *)(lVar8 + lVar32 * 0x10) = uVar6;
    *(undefined1 *)(lVar8 + 8 + lVar32 * 0x10) = 0xf;
    *(longlong *)(lVar22 + 0x30) = lVar32 + 1;
    *(longlong *)(lVar22 + 0x40) = *(longlong *)(lVar22 + 0x40) + 1;
  }
  if ((!bVar45 && uVar34 != 0 || !bVar44 && uVar16 != 0) && (*(char *)(lVar20 + 0x415) == '\0')) {
    *(undefined4 *)param_4[2] = *(undefined4 *)((longlong)param_4 + 0x1c);
    lVar22 = *param_4;
    lVar32 = *(longlong *)(lVar22 + 0x30);
    uVar6 = *(undefined8 *)(lVar22 + 0x40);
    if (lVar32 == *(longlong *)(lVar22 + 0x20)) {
      pdb_142d7e980(lVar22 + 0x20);
    }
    lVar8 = *(longlong *)(lVar22 + 0x28);
    *(undefined8 *)(lVar8 + lVar32 * 0x10) = uVar6;
    *(undefined1 *)(lVar8 + 8 + lVar32 * 0x10) = 0x10;
    *(longlong *)(lVar22 + 0x30) = lVar32 + 1;
    *(longlong *)(lVar22 + 0x40) = *(longlong *)(lVar22 + 0x40) + 1;
  }
  if (!bVar47 && uVar17 != 0 || !bVar46 && uVar23 != 0) {
    *(undefined4 *)param_5[2] = *(undefined4 *)((longlong)param_5 + 0x1c);
    uVar6 = *param_5;
    uStack_e4 = pdb_140a44d70(0);
    uStack_e8 = 0xca;
    uStack_a0 = 199;
    pdb_1420c0330(auStack_70,&uStack_e8,&uStack_a0);
    pdb_14289b260(uVar6,0x10,auStack_70,*(byte *)(lVar20 + 0x415) ^ 1);
  }
  return;
}

