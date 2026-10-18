// VA 0x14298eb90, PDB extent 4249 bytes
// toolbar::photomode::do_photomode
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/photomode/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: toolbar::photomode::do_photomode
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/photomode/mod.rs
   Extent: 4249 */

void pdb_14298eb90(longlong *param_1,undefined8 *param_2,undefined8 *param_3,longlong *param_4,
                  longlong *param_5,longlong *param_6,undefined8 *param_7,undefined8 *param_8,
                  undefined8 *param_9,longlong *param_10,undefined8 *param_11,longlong *param_12)

{
  float *pfVar1;
  uint uVar2;
  char *pcVar3;
  ulonglong *puVar4;
  char *pcVar5;
  char *pcVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  longlong *plVar9;
  byte *pbVar10;
  char cVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  uint uVar14;
  int iVar15;
  char *pcVar16;
  ulonglong uVar17;
  longlong lVar18;
  ulonglong uVar19;
  undefined8 *puVar20;
  uint *puVar21;
  ulonglong uVar22;
  char *pcVar23;
  longlong lVar24;
  char *pcVar25;
  ulonglong uVar26;
  undefined *puVar27;
  ulonglong uVar28;
  longlong lVar29;
  byte bVar30;
  longlong lVar31;
  ulonglong *puVar32;
  ulonglong uVar33;
  char *pcVar34;
  longlong lVar35;
  char *pcVar36;
  longlong lVar37;
  undefined8 uVar38;
  char *pcVar39;
  longlong lVar40;
  longlong lVar41;
  char *pcVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined8 uStack_350;
  ulonglong uStack_348;
  undefined8 uStack_340;
  ulonglong uStack_2a0;
  undefined *puStack_298;
  ulonglong *puStack_240;
  code *pcStack_238;
  undefined8 *puStack_230;
  code *apcStack_228 [19];
  undefined8 uStack_190;
  undefined8 uStack_188;
  longlong lStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  float *pfStack_168;
  char *pcStack_160;
  longlong lStack_158;
  undefined4 *puStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  longlong lStack_138;
  undefined4 *puStack_130;
  undefined4 *puStack_128;
  byte *pbStack_120;
  undefined4 uStack_118;
  undefined4 uStack_114;
  longlong lStack_110;
  ulonglong *puStack_108;
  ulonglong *puStack_100;
  longlong lStack_f8;
  undefined8 *puStack_f0;
  undefined4 *puStack_e8;
  undefined4 uStack_dc;
  longlong lStack_d8;
  longlong *plStack_d0;
  longlong *plStack_c8;
  undefined4 uStack_bc;
  longlong lStack_b8;
  float *pfStack_b0;
  undefined1 uStack_a1;
  undefined8 uStack_a0;
  
  uStack_a0 = 0xfffffffffffffffe;
  pcVar3 = (char *)*param_2;
  uStack_148 = param_2[4];
  uStack_178 = param_2[8];
  pfStack_168 = (float *)param_2[0xc];
  uVar38 = param_2[0x10];
  lStack_f8 = param_2[0x14];
  lStack_110 = param_2[0x18];
  uStack_140 = param_2[0x1c];
  uStack_190 = *param_11;
  uStack_188 = param_11[4];
  lStack_138 = param_10[4];
  puStack_130 = (undefined4 *)param_10[6];
  uStack_114 = *(undefined4 *)((longlong)param_10 + 0x3c);
  puStack_108 = (ulonglong *)param_10[8];
  lVar37 = param_10[9];
  puVar32 = (ulonglong *)param_10[0xd];
  lVar40 = param_10[0xe];
  lStack_158 = param_10[0x12];
  puStack_150 = (undefined4 *)param_10[0x14];
  uStack_118 = *(undefined4 *)((longlong)param_10 + 0xac);
  lVar24 = param_10[0x16];
  puStack_128 = (undefined4 *)param_10[0x18];
  uStack_dc = *(undefined4 *)((longlong)param_10 + 0xcc);
  puVar4 = (ulonglong *)param_10[0x1e];
  lStack_180 = param_10[0x1f];
  *(undefined4 *)param_6[2] = *(undefined4 *)((longlong)param_6 + 0x1c);
  lStack_b8 = *param_6;
  puStack_f0 = param_3;
  plStack_d0 = param_1;
  plStack_c8 = param_4;
  cVar11 = pdb_140a00340(uStack_148);
  if (cVar11 != '\0') {
    *(undefined1 *)(lStack_b8 + 10) = 0;
    *(undefined1 *)(lStack_b8 + 0xd) = 1;
  }
  if (*pcVar3 != '\t') {
    if (*pcVar3 == '\x10') {
      cVar11 = pdb_140938b60(*(undefined4 *)(lStack_f8 + 0x110));
      if (cVar11 == '\0') goto LAB_14298ed83;
      bVar30 = *(byte *)(lStack_b8 + 10);
      *(byte *)(lStack_b8 + 10) = bVar30 ^ 1;
    }
    else {
      *(undefined1 *)(lStack_b8 + 10) = 0;
      bVar30 = 1;
    }
    *(byte *)(lStack_b8 + 0xd) = bVar30;
  }
LAB_14298ed83:
  lVar29 = lStack_b8;
  uVar28 = *puVar32;
  pcVar16 = (char *)0x0;
  pcVar34 = (char *)(uVar28 - *(ulonglong *)(lVar40 + 0x18));
  if (uVar28 < *(ulonglong *)(lVar40 + 0x18)) {
    pcVar34 = pcVar16;
  }
  lVar35 = (longlong)pcVar34 * 0x38 + *(longlong *)(lVar40 + 8);
  pcVar5 = *(char **)(lVar40 + 0x10);
  pcVar25 = pcVar5 + -(longlong)pcVar34;
  if (pcVar5 < pcVar34) {
    pcVar25 = pcVar16;
  }
  if (pcVar5 < pcVar34) {
    lVar35 = 8;
  }
  pcVar36 = (char *)(lVar35 + -0x38 + (longlong)pcVar25 * 0x38);
  if (pcVar5 <= pcVar34) {
    pcVar36 = pcVar16;
  }
  pcVar6 = *(char **)(lVar40 + 0x30);
  pcVar23 = (char *)(uVar28 - *(ulonglong *)(lVar40 + 0x38));
  if (uVar28 < *(ulonglong *)(lVar40 + 0x38)) {
    pcVar23 = pcVar16;
  }
  lVar35 = (longlong)pcVar23 * 0x38 + *(longlong *)(lVar40 + 0x28);
  pcVar39 = pcVar6 + -(longlong)pcVar23;
  if (pcVar6 < pcVar23) {
    pcVar39 = pcVar16;
  }
  if (pcVar6 < pcVar23) {
    lVar35 = 8;
  }
  pcVar42 = (char *)(lVar35 + -0x38 + (longlong)pcVar39 * 0x38);
  if (pcVar6 <= pcVar23) {
    pcVar42 = pcVar36;
  }
  pcVar25 = pcVar39 + (longlong)pcVar25;
  if (pcVar34 < pcVar5 || pcVar23 < pcVar6) {
    pcVar25 = pcVar16;
  }
  *puVar32 = *(longlong *)(lVar40 + 0x40) - (longlong)pcVar25;
  uStack_170 = uVar38;
  pcStack_160 = pcVar3;
  puStack_100 = puVar4;
  if (pcVar34 < pcVar5 || pcVar23 < pcVar6) {
    cVar11 = *pcVar42;
    if ((cVar11 == '\x10') && (pcVar42[0x18] != '\t')) {
      *(undefined4 *)plStack_d0[2] = *(undefined4 *)((longlong)plStack_d0 + 0x1c);
      *(undefined1 *)(*plStack_d0 + 1) = 1;
      pdb_1408ff0c0(lStack_b8);
      uVar12 = pdb_140a39070(*(undefined1 *)(lVar29 + 9));
      puVar7 = (undefined4 *)plStack_c8[2];
      *puVar7 = *(undefined4 *)((longlong)plStack_c8 + 0x1c);
      *(undefined1 *)(*plStack_c8 + 0xd4) = uVar12;
      *(undefined4 *)param_7[2] = *(undefined4 *)((longlong)param_7 + 0x1c);
      pdb_1409aa270(*param_7,CONCAT71((int7)((ulonglong)puVar7 >> 8),2));
      if (*(char *)(lVar29 + 0xb) == '\0') {
        *(undefined4 *)puStack_f0[2] = *(undefined4 *)((longlong)puStack_f0 + 0x1c);
        pdb_140a34d30(*puStack_f0);
        *(undefined1 *)(lVar29 + 0xb) = 1;
      }
    }
    lStack_d8 = *plStack_c8;
    if ((cVar11 != '\t') && (pcVar42[0x18] == '\x10')) {
      *(undefined4 *)plStack_c8[2] = *(undefined4 *)((longlong)plStack_c8 + 0x1c);
      *(undefined1 *)(lStack_d8 + 0xd4) = 0;
      *(undefined4 *)param_7[2] = *(undefined4 *)((longlong)param_7 + 0x1c);
      pdb_1409aa270(*param_7,1);
      *(undefined4 *)param_8[2] = *(undefined4 *)((longlong)param_8 + 0x1c);
      pdb_14093a760(*param_8);
      *(undefined4 *)plStack_d0[2] = *(undefined4 *)((longlong)plStack_d0 + 0x1c);
      *(undefined1 *)(*plStack_d0 + 1) = 0;
    }
  }
  else {
    lStack_d8 = *plStack_c8;
  }
  puVar32 = puStack_108;
  pbStack_120 = (byte *)*plStack_d0;
  fVar47 = 0.0;
  if ((pbStack_120[1] == 1) && (*(char *)(lStack_d8 + 0xd4) != '\x03')) {
    fVar47 = _DAT_142e36f28;
  }
  pdb_140a8bad0(lStack_110,&UNK_14360943c,0x11,fVar47);
  uVar28 = *puVar32;
  uVar17 = 0;
  uVar22 = uVar28 - *(ulonglong *)(lVar37 + 0x18);
  if (uVar28 < *(ulonglong *)(lVar37 + 0x18)) {
    uVar22 = uVar17;
  }
  uVar19 = uVar28 - *(ulonglong *)(lVar37 + 0x38);
  if (uVar28 < *(ulonglong *)(lVar37 + 0x38)) {
    uVar19 = uVar17;
  }
  lVar40 = uVar22 * 0x10 + *(longlong *)(lVar37 + 8);
  uVar28 = *(ulonglong *)(lVar37 + 0x10) - uVar22;
  if (*(ulonglong *)(lVar37 + 0x10) < uVar22) {
    lVar40 = 8;
    uVar28 = uVar17;
  }
  lVar35 = uVar19 * 0x10 + *(longlong *)(lVar37 + 0x28);
  uVar22 = *(ulonglong *)(lVar37 + 0x30) - uVar19;
  if (*(ulonglong *)(lVar37 + 0x30) < uVar19) {
    lVar35 = 8;
    uVar22 = uVar17;
  }
  *puVar32 = (*(longlong *)(lVar37 + 0x40) - uVar22) - uVar28;
  lStack_110 = uVar22 * 0x10 + lVar35;
  uStack_bc = *(undefined4 *)((longlong)puStack_f0 + 0x1c);
  pfStack_b0 = (float *)*puStack_f0;
  puStack_e8 = (undefined4 *)puStack_f0[2];
  puStack_f0 = (undefined8 *)CONCAT44(puStack_f0._4_4_,*(undefined4 *)((longlong)plStack_c8 + 0x1c))
  ;
  plStack_c8 = (longlong *)plStack_c8[2];
  lVar37 = lVar40;
  do {
    pbVar10 = pbStack_120;
    lVar18 = lStack_158;
    if ((lVar37 == 0) || (lVar37 == uVar28 * 0x10 + lVar40)) {
      if ((lVar35 == 0) || (lVar35 == lStack_110)) break;
      lVar31 = lVar35 + 0x10;
      lVar18 = 0;
      lVar41 = lVar35;
    }
    else {
      lVar18 = lVar37 + 0x10;
      lVar31 = lVar35;
      lVar41 = lVar37;
    }
    *puVar32 = *puVar32 + 1;
    lVar35 = lVar31;
    lVar37 = lVar18;
    if (*(char *)(lVar41 + 8) != '\x04') {
      if (*(char *)(lStack_d8 + 0xd4) == '\x03') {
        *puStack_128 = uStack_dc;
        lVar29 = *(longlong *)(lVar24 + 0x30);
        uVar38 = *(undefined8 *)(lVar24 + 0x40);
        if (lVar29 == *(longlong *)(lVar24 + 0x20)) {
          pdb_142d7e980(lVar24 + 0x20);
        }
        lVar18 = *(longlong *)(lVar24 + 0x28);
        *(undefined8 *)(lVar18 + lVar29 * 0x10) = uVar38;
        *(undefined1 *)(lVar18 + 8 + lVar29 * 0x10) = 1;
        *(longlong *)(lVar24 + 0x30) = lVar29 + 1;
        *(longlong *)(lVar24 + 0x40) = *(longlong *)(lVar24 + 0x40) + 1;
        lVar29 = lStack_b8;
        puVar32 = puStack_108;
      }
      else if (*(char *)(lVar41 + 8) == '\x02') {
        *puStack_128 = uStack_dc;
        lVar18 = *(longlong *)(lVar24 + 0x30);
        uVar38 = *(undefined8 *)(lVar24 + 0x40);
        if (lVar18 == *(longlong *)(lVar24 + 0x20)) {
          pdb_142d7e980(lVar24 + 0x20);
        }
        lVar29 = lStack_b8;
        puVar32 = puStack_108;
        lVar31 = *(longlong *)(lVar24 + 0x28);
        *(undefined8 *)(lVar31 + lVar18 * 0x10) = uVar38;
        *(undefined1 *)(lVar31 + 8 + lVar18 * 0x10) = 0;
        *(longlong *)(lVar24 + 0x30) = lVar18 + 1;
        *(longlong *)(lVar24 + 0x40) = *(longlong *)(lVar24 + 0x40) + 1;
        if (*(char *)(lStack_b8 + 0xc) == '\0') {
          *puStack_e8 = uStack_bc;
          pdb_140a34710(pfStack_b0,uStack_190,uStack_188);
          *(undefined1 *)(lVar29 + 0xc) = 1;
        }
      }
      uVar12 = *(undefined1 *)(lVar41 + 8);
      uVar13 = pdb_140a39070(uVar12);
      *(undefined4 *)plStack_c8 = puStack_f0._0_4_;
      *(undefined1 *)(lStack_d8 + 0xd4) = uVar13;
      *(undefined1 *)(lVar29 + 9) = uVar12;
    }
  } while( true );
  if (pbStack_120[1] == 1) {
    bVar30 = *pbStack_120 ^ 1;
  }
  else {
    bVar30 = 0;
  }
  uVar28 = *puStack_100;
  uVar17 = 0;
  uVar22 = uVar28 - *(ulonglong *)(lStack_180 + 0x18);
  if (uVar28 < *(ulonglong *)(lStack_180 + 0x18)) {
    uVar22 = uVar17;
  }
  uVar19 = uVar28 - *(ulonglong *)(lStack_180 + 0x38);
  if (uVar28 < *(ulonglong *)(lStack_180 + 0x38)) {
    uVar19 = uVar17;
  }
  lVar37 = *(longlong *)(lStack_180 + 8);
  uVar28 = *(ulonglong *)(lStack_180 + 0x30);
  uVar26 = uVar28 - uVar19;
  if (uVar28 < uVar19) {
    uVar26 = uVar17;
  }
  uVar8 = *(ulonglong *)(lStack_180 + 0x10);
  uVar33 = uVar8 - uVar22;
  if (uVar8 < uVar22) {
    uVar33 = uVar17;
  }
  lVar40 = *(longlong *)(lStack_180 + 0x28);
  uVar17 = *(ulonglong *)(lStack_180 + 0x40);
  *puStack_100 = (uVar17 - uVar26) - uVar33;
  if (uVar8 >= uVar22 && uVar8 - uVar22 != 0 || uVar28 >= uVar19 && uVar28 - uVar19 != 0) {
    lVar40 = lVar40 + uVar19 * 0x10;
    lVar37 = lVar37 + uVar22 * 0x10;
    if (uVar8 < uVar22) {
      lVar37 = 8;
    }
    lVar24 = 0;
    if (uVar22 < uVar8) {
      lVar24 = lVar37 + -0x10 + uVar33 * 0x10;
    }
    if (uVar28 < uVar19) {
      lVar40 = 8;
    }
    lVar37 = lVar40 + -0x10 + uVar26 * 0x10;
    if (uVar28 <= uVar19) {
      lVar37 = lVar24;
    }
    *puStack_100 = uVar17;
    if (*(char *)(lVar37 + 8) == '\x01') {
      *(undefined1 *)(lStack_b8 + 10) = 0;
      *(undefined4 *)plStack_d0[2] = *(undefined4 *)((longlong)plStack_d0 + 0x1c);
      pbStack_120[1] = 1;
      *puStack_150 = uStack_118;
      lVar37 = *(longlong *)(lStack_158 + 0x30);
      uVar38 = *(undefined8 *)(lStack_158 + 0x40);
      if (lVar37 == *(longlong *)(lStack_158 + 0x20)) {
        pdb_142d7e6e0(lStack_158 + 0x20);
      }
      lVar40 = *(longlong *)(lVar18 + 0x28);
      *(undefined1 *)(lVar40 + lVar37 * 0x20) = 0x10;
      *(undefined8 *)(lVar40 + 0x18 + lVar37 * 0x20) = uVar38;
      *(longlong *)(lVar18 + 0x30) = lVar37 + 1;
      *(longlong *)(lVar18 + 0x40) = *(longlong *)(lVar18 + 0x40) + 1;
    }
  }
  lVar37 = lStack_138;
  if (pbVar10[1] == 1) {
    if (bVar30 != 0) {
      if (*pcStack_160 == '\t') {
        *puStack_130 = uStack_114;
        lVar40 = *(longlong *)(lStack_138 + 0x30);
        uVar38 = *(undefined8 *)(lStack_138 + 0x40);
        if (lVar40 == *(longlong *)(lStack_138 + 0x20)) {
          pdb_142d7e980(lStack_138 + 0x20);
        }
        lVar24 = *(longlong *)(lVar37 + 0x28);
        *(undefined8 *)(lVar24 + lVar40 * 0x10) = uVar38;
        *(undefined4 *)(lVar24 + 8 + lVar40 * 0x10) = 0x3000300;
        *(longlong *)(lVar37 + 0x30) = lVar40 + 1;
        *(longlong *)(lVar37 + 0x40) = *(longlong *)(lVar37 + 0x40) + 1;
      }
      *(undefined4 *)param_10[2] = *(undefined4 *)((longlong)param_10 + 0x1c);
      lVar37 = *param_10;
      lVar40 = *(longlong *)(lVar37 + 0x30);
      uVar38 = *(undefined8 *)(lVar37 + 0x40);
      if (lVar40 == *(longlong *)(lVar37 + 0x20)) {
        pdb_142d7e8a0(lVar37 + 0x20);
      }
      *(undefined8 *)(*(longlong *)(lVar37 + 0x28) + lVar40 * 8) = uVar38;
      *(longlong *)(lVar37 + 0x30) = lVar40 + 1;
      *(longlong *)(lVar37 + 0x40) = *(longlong *)(lVar37 + 0x40) + 1;
    }
    fVar47 = 0.0;
    if ((((*(float *)(lStack_f8 + 0x170) != 0.0) || (NAN(*(float *)(lStack_f8 + 0x170)))) &&
        (cVar11 = pdb_140a36620(pfStack_b0), cVar11 != '\x04')) && (cVar11 != '\x01')) {
      fVar43 = *(float *)(lStack_f8 + 0x170);
      *puStack_e8 = uStack_bc;
      lVar37 = pdb_140a36600(pfStack_b0);
      fVar46 = *(float *)(lVar37 + 0xc);
      fVar45 = *(float *)(lVar37 + 0x10);
      if (fVar45 < fVar46) {
        uStack_2a0 = CONCAT44(uStack_2a0._4_4_,fVar46);
        uStack_350 = (longlong *)CONCAT44(uStack_350._4_4_,fVar45);
        puStack_240 = &uStack_2a0;
        pcStack_238 = pdb_140f705d0;
        puStack_230 = &uStack_350;
        apcStack_228[0] = pdb_140f705d0;
                    /* WARNING: Subroutine does not return */
        pdb_142dc83d0(&UNK_14360935c,&puStack_240,&UNK_1436093f8);
      }
      fVar43 = (float)pub_142e32a10(fVar43 * _DAT_143609358);
      fVar43 = fVar43 * *(float *)(lVar37 + 8);
      if (fVar46 <= fVar43) {
        fVar46 = fVar43;
      }
      if (fVar46 <= fVar45) {
        fVar45 = fVar46;
      }
      *(float *)(lVar37 + 8) = fVar45;
    }
    uVar38 = *param_9;
    uStack_350 = (longlong *)CONCAT44(0x7f7fffff,(undefined4)uStack_350);
    uStack_350 = (longlong *)CONCAT71(uStack_350._1_7_,5);
    uStack_2a0 = uStack_2a0 & 0xffffffffffffff00;
    pdb_140c9dcb0(&puStack_240,&uStack_350,&uStack_2a0);
    pdb_140c9dbe0(&uStack_350,&puStack_240,0);
    uStack_a1 = 1;
    pdb_140c9dee0(&uStack_2a0);
    uStack_a1 = 0;
    pdb_140c9dd20(&puStack_240,&uStack_350,&uStack_2a0);
    puVar27 = &UNK_14360944d;
    uStack_2a0 = pdb_140900b80(uVar38,&UNK_14360944d,0x13,&puStack_240);
    puStack_298 = puVar27;
    uVar14 = pdb_140a36620(pfStack_b0);
    *(undefined4 *)(lStack_b8 + 4) = 0xffffffff;
    puVar20 = (undefined8 *)pdb_142993290(uStack_178,&UNK_1434d7798);
    if ((puVar20 == (undefined8 *)0x0) ||
       (lVar37 = (**(code **)(puVar20[1] + 0x18))(*puVar20), lVar37 == 0)) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_143609460);
    }
    if (*(longlong *)(lVar37 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(0,0,&UNK_143609478);
    }
    puVar20 = *(undefined8 **)(lVar37 + 8);
    uVar2 = *(uint *)((longlong)puVar20 + 0xc);
    *puStack_e8 = uStack_bc;
    puVar21 = (uint *)pdb_140a368d0(pfStack_b0);
    uVar38 = uStack_170;
    if (*puVar21 < 2) {
      if (uVar2 == 0 || uVar2 != (uVar14 & 0xff)) {
        if (*puVar21 == 0) {
          *(uint *)(lStack_b8 + 4) = uVar14 & 0xff;
        }
      }
      else {
        uVar2 = *(uint *)(puVar20 + 1);
        pcStack_238 = (code *)CONCAT44(pcStack_238._4_4_,uVar2);
        puStack_240 = (ulonglong *)*puVar20;
        *puVar21 = 1;
        *(ulonglong **)(puVar21 + 1) = puStack_240;
        puVar21[3] = uVar2;
      }
    }
    fVar43 = *pfStack_168;
    fVar46 = pfStack_168[1];
    fVar44 = (float)pdb_140a6ad50(uStack_170);
    fVar45 = (float)pdb_140a6ace0(uVar38);
    *puStack_e8 = uStack_bc;
    puVar21 = (uint *)pdb_140a368d0(pfStack_b0);
    iVar15 = 2;
    if (1 < *puVar21) {
      iVar15 = *puVar21 - 2;
    }
    if (iVar15 == 0) {
      fVar45 = 0.0;
      fVar47 = 0.0;
      cVar11 = *(char *)(lStack_b8 + 0xd);
    }
    else {
      fVar45 = fVar45 * (fVar43 / fVar44 + fVar43 / fVar44 + _DAT_142e36f34);
      fVar47 = (float)((uint)(fVar46 / fVar47 + fVar46 / fVar47 + _DAT_142e36f34) ^ _DAT_142e37820);
      if (iVar15 == 1) {
        bVar30 = pdb_1408ffab0(&uStack_2a0);
        if (bVar30 < 3) {
          fVar45 = (float)puVar21[1];
          fVar47 = (float)puVar21[2];
          cVar11 = *(char *)(lStack_b8 + 0xd);
        }
        else {
          puVar21[1] = (uint)fVar45;
          puVar21[2] = (uint)fVar47;
          cVar11 = *(char *)(lStack_b8 + 0xd);
        }
      }
      else {
        bVar30 = pdb_1408ffab0(&uStack_2a0);
        if (bVar30 < 3) {
          if ((char)*puVar21 == '\0') {
            fVar45 = (float)puVar21[4];
            fVar47 = (float)puVar21[5];
            cVar11 = *(char *)(lStack_b8 + 0xd);
          }
          else {
            fVar47 = (float)puVar21[1];
            fVar43 = (float)puVar21[2];
            fVar46 = (float)puVar21[3];
            fVar45 = fVar46 * pfStack_b0[0x28] +
                     fVar43 * pfStack_b0[0x24] + fVar47 * pfStack_b0[0x20] + pfStack_b0[0x2c];
            fVar44 = fVar46 * pfStack_b0[0x29] +
                     fVar43 * pfStack_b0[0x25] + fVar47 * pfStack_b0[0x21] + pfStack_b0[0x2d];
            fVar47 = fVar46 * pfStack_b0[0x2a] +
                     fVar43 * pfStack_b0[0x26] + fVar47 * pfStack_b0[0x22] + pfStack_b0[0x2e];
            auVar48._0_4_ =
                 fVar47 * pfStack_b0[8] + fVar44 * pfStack_b0[4] + fVar45 * *pfStack_b0 +
                 pfStack_b0[0xc];
            auVar48._4_4_ =
                 fVar47 * pfStack_b0[9] + fVar44 * pfStack_b0[5] + fVar45 * pfStack_b0[1] +
                 pfStack_b0[0xd];
            auVar48._8_4_ =
                 fVar47 * pfStack_b0[10] + fVar44 * pfStack_b0[6] + fVar45 * pfStack_b0[2] +
                 pfStack_b0[0xe];
            auVar48._12_4_ =
                 fVar47 * pfStack_b0[0xb] + fVar44 * pfStack_b0[7] + fVar45 * pfStack_b0[3] +
                 pfStack_b0[0xf];
            auVar49._4_4_ = auVar48._12_4_;
            auVar49._0_4_ = auVar48._12_4_;
            auVar49._8_4_ = auVar48._12_4_;
            auVar49._12_4_ = auVar48._12_4_;
            auVar49 = divps(auVar48,auVar49);
            fVar47 = auVar49._4_4_;
            fVar45 = (float)pdb_140a6ace0(uVar38);
            fVar45 = fVar45 * auVar49._0_4_;
            cVar11 = *(char *)(lStack_b8 + 0xd);
          }
        }
        else {
          *(uint *)(lStack_b8 + 4) = uVar14 & 0xff;
          puVar21[4] = (uint)fVar45;
          puVar21[5] = (uint)fVar47;
          *puVar21 = 0;
          cVar11 = *(char *)(lStack_b8 + 0xd);
        }
      }
    }
    if (((cVar11 != '\0') && (cVar11 = pdb_140a00370(uStack_148), cVar11 != '\0')) &&
       (cVar11 = pdb_140a36620(pfStack_b0), 1 < (byte)(cVar11 - 3U))) {
      fVar46 = (float)pdb_140a6ace0(uVar38);
      lVar37 = pdb_140a368d0(pfStack_b0);
      fVar43 = *(float *)(lVar37 + 0x18);
      *(undefined4 *)param_5[2] = *(undefined4 *)((longlong)param_5 + 0x1c);
      plVar9 = (longlong *)*param_5;
      puStack_240 = (ulonglong *)&UNK_143609490;
      pcStack_238 = (code *)0xc;
      uVar22 = pdb_140bbbcb0(&puStack_240);
      uVar22 = uVar22 ^ 0xb1695320004fb443;
      uVar28 = uVar22;
      lVar37 = pdb_14072c2d0(plVar9);
      *(undefined1 *)(lVar37 + 0x5e) = 0;
      if ((uVar28 & 1) == 0) {
        fVar46 = (fVar45 + fVar46) * _DAT_142e36f60 * _DAT_14300b880;
        fVar47 = (_DAT_142e36f28 - fVar47) * _UNK_142e36f64 * _UNK_14300b884;
        fVar45 = (float)_UNK_142f98008 * _UNK_14300b888;
        fVar44 = (float)((ulonglong)_UNK_142f98008 >> 0x20) * _UNK_14300b88c;
        fVar43 = fVar43 * _DAT_142e4bfe4;
        lVar37 = plVar9[2];
        if (lVar37 == *plVar9) {
          pdb_142d7f080(plVar9);
        }
        lVar40 = plVar9[1];
        lVar24 = lVar37 * 0x38;
        *(undefined4 *)(lVar40 + lVar24) = 4;
        pfVar1 = (float *)(lVar40 + 4 + lVar24);
        *pfVar1 = fVar46;
        pfVar1[1] = fVar47;
        pfVar1[2] = fVar45;
        pfVar1[3] = fVar44;
        *(undefined4 *)(lVar40 + 0x14 + lVar24) = 1;
        *(float *)(lVar40 + 0x18 + lVar24) = fVar43;
        *(float *)(lVar40 + 0x1c + lVar24) = fVar43;
        *(ulonglong *)(lVar40 + 0x30 + lVar24) = uVar22;
        plVar9[2] = lVar37 + 1;
      }
      uStack_340 = 0;
      uStack_350 = plVar9;
      uStack_348 = uVar22;
      puVar21 = (uint *)pdb_140a368d0(pfStack_b0);
      puVar27 = &UNK_1436094b5;
      if (*puVar21 < 2) {
        puVar27 = &UNK_14360949c;
      }
      uVar38 = 0x12;
      if (*puVar21 < 2) {
        uVar38 = 0x19;
      }
      pdb_141174160(&puStack_240,&uStack_350,puVar27,uVar38,0);
      lVar37 = pdb_1411a3e40((longlong)puStack_230 + 0x1b0,apcStack_228);
      if (lVar37 == 0) {
LAB_14298fb2d:
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_142fa6b48);
      }
      *(byte *)(lVar37 + 0xcb) = *(byte *)(lVar37 + 0xcb) | 2;
      lVar37 = pdb_1411a3e40((longlong)puStack_230 + 0x1b0,apcStack_228);
      if (lVar37 == 0) goto LAB_14298fb2d;
      *(undefined4 *)(lVar37 + 0xc4) = 0x3f800000;
    }
    cVar11 = pdb_140a36620(pfStack_b0);
    if ((cVar11 == '\x03') && (cVar11 = pdb_1408ff980(uStack_140), cVar11 != '\0')) {
      *(undefined4 *)param_5[2] = *(undefined4 *)((longlong)param_5 + 0x1c);
      param_5 = (longlong *)*param_5;
      puStack_240 = (ulonglong *)&UNK_1436094c7;
      pcStack_238 = (code *)0xc;
      uVar22 = pdb_140bbbcb0(&puStack_240);
      uVar22 = uVar22 ^ 0xb1695320004fb443;
      uVar28 = uVar22;
      lVar37 = pdb_14072c2d0(param_5);
      *(undefined1 *)(lVar37 + 0x5e) = 0;
      if ((uVar28 & 1) == 0) {
        lVar37 = param_5[2];
        if (lVar37 == *param_5) {
          pdb_142d7f080(param_5);
        }
        lVar40 = param_5[1];
        *(undefined4 *)(lVar40 + lVar37 * 0x38) = 1;
        *(ulonglong *)(lVar40 + 0x30 + lVar37 * 0x38) = uVar22;
        param_5[2] = lVar37 + 1;
      }
      uStack_340 = 0;
      uStack_350 = param_5;
      uStack_348 = uVar22;
      pdb_141174160(&puStack_240,&uStack_350,&UNK_1436094d3,0x12,0);
    }
    else {
      cVar11 = pdb_140a36620(pfStack_b0);
      if ((cVar11 == '\x03') && (*_DAT_143ca42d8 != '\0')) {
        *(undefined4 *)param_12[2] = *(undefined4 *)((longlong)param_12 + 0x1c);
        lVar37 = *param_12;
        lVar40 = *(longlong *)(lVar37 + 0x30);
        uVar38 = *(undefined8 *)(lVar37 + 0x40);
        if (lVar40 == *(longlong *)(lVar37 + 0x20)) {
          pdb_142d7e8a0(lVar37 + 0x20);
        }
        *(undefined8 *)(*(longlong *)(lVar37 + 0x28) + lVar40 * 8) = uVar38;
        *(longlong *)(lVar37 + 0x30) = lVar40 + 1;
        *(longlong *)(lVar37 + 0x40) = *(longlong *)(lVar37 + 0x40) + 1;
      }
    }
    bVar30 = pbVar10[1];
  }
  else {
    bVar30 = 0;
  }
  *(undefined4 *)plStack_d0[2] = *(undefined4 *)((longlong)plStack_d0 + 0x1c);
  *pbVar10 = bVar30;
  return;
}

