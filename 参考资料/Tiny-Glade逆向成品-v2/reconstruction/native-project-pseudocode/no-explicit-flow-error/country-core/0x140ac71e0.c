// VA 0x140ac71e0, PDB extent 2356 bytes
// country_core::systems::camera_rig::normal::impl$1::update
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/camera_rig/normal.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::camera_rig::normal::impl$1::update
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/camera_rig/normal.rs
   Extent: 2356 */

undefined8 * pdb_140ac71e0(undefined8 *param_1,undefined8 *param_2,float param_3)

{
  char cVar1;
  float *pfVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined7 uVar9;
  undefined8 *puVar7;
  longlong lVar8;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  ulonglong uVar39;
  undefined1 auVar40 [16];
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  float fVar48;
  float fVar49;
  float fVar50;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  undefined8 auStack_d0 [18];
  undefined1 auVar38 [16];
  
  if (0.0 <= param_3) {
    puVar7 = param_2;
    fVar13 = (float)pub_142e32a20(param_1,param_2,param_3 * _DAT_142e37888);
    fVar20 = _DAT_142e36f28;
    fVar13 = _DAT_142e36f28 - fVar13;
    if (DAT_143ca42c4 != '\0') {
      uVar39 = param_2[7];
      fVar24 = *(float *)(param_2 + 8);
      fVar37 = (float)uVar39;
      fVar26 = (float)(uVar39 >> 0x20);
      fVar22 = (float)*(undefined8 *)((longlong)param_2 + 0x44);
      fVar21 = fVar37 + fVar22;
      fVar42 = (float)((ulonglong)*(undefined8 *)((longlong)param_2 + 0x44) >> 0x20);
      fVar23 = fVar26 + fVar42;
      fVar25 = fVar24 + *(float *)((longlong)param_2 + 0x4c);
      fVar44 = *(float *)((longlong)param_2 + 100);
      fVar45 = fVar25 * fVar25 + fVar23 * fVar23 + fVar21 * fVar21;
      fVar29 = fVar25;
      fVar41 = fVar21;
      fVar43 = fVar23;
      if (fVar44 * fVar44 < fVar45) {
        fVar45 = SQRT(fVar45);
        auVar46._4_4_ = fVar23;
        auVar46._0_4_ = fVar21;
        auVar46._8_8_ = 0;
        auVar47._4_4_ = fVar45;
        auVar47._0_4_ = fVar45;
        auVar47._8_8_ = 0;
        auVar47 = divps(auVar46,auVar47);
        fVar41 = fVar44 * auVar47._0_4_;
        fVar43 = fVar44 * auVar47._4_4_;
        fVar29 = (fVar25 / fVar45) * fVar44;
      }
      *(ulonglong *)((longlong)param_2 + 0x44) =
           CONCAT44(fVar42 + (fVar43 - fVar23),fVar22 + (fVar41 - fVar21));
      *(float *)((longlong)param_2 + 0x4c) =
           *(float *)((longlong)param_2 + 0x4c) + (fVar29 - fVar25);
      cVar1 = *(char *)((longlong)param_2 + 0x6c);
      puVar7 = (undefined8 *)CONCAT71((int7)((ulonglong)puVar7 >> 8),2);
      pdb_140f33a40(&fStack_e8,puVar7,*(float *)((longlong)param_2 + 0x54) * _DAT_142e37aa0,
                    _DAT_142e37aa0 * *(float *)(param_2 + 10),0);
      if (DAT_143ca42c4 == '\x01') {
        fVar41 = fStack_e0 * fStack_e0;
        fVar43 = fStack_dc * fStack_dc;
        fVar22 = fStack_e4 * fStack_e4 + fStack_e8 * fStack_e8;
        fVar29 = _UNK_142e37b08 * fStack_e0 +
                 _UNK_142e37b04 * fStack_e4 + _DAT_142e37b00 * fStack_e8;
        fVar29 = fVar29 + fVar29;
        fVar23 = fStack_dc + fStack_dc;
        fVar42 = fVar23 * (fStack_e4 * _DAT_142f46970 - fStack_e0 * _DAT_142f46980) +
                 fVar29 * fStack_e8 + (fVar43 - (fVar22 + fVar41)) * _DAT_142e37b00;
        fVar44 = fVar23 * (fStack_e0 * _UNK_142f46974 - fStack_e8 * _UNK_142f46984) +
                 fVar29 * fStack_e4 + (fVar43 - (fVar22 + fVar41)) * _UNK_142e37b04;
        fVar21 = fVar23 * (fStack_e8 * _UNK_142f46978 - fStack_e4 * _UNK_142f46988) +
                 fVar29 * fStack_e0 + (fVar43 - (fVar22 + fVar41)) * _UNK_142e37b08;
        fVar29 = fVar23 * (fStack_dc * _UNK_142f4697c - fStack_dc * _UNK_142f4698c) +
                 fVar29 * fStack_dc + (fVar43 - (fVar22 + fVar41)) * _UNK_142e37b0c;
        if (cVar1 == '\0') {
          fVar41 = fVar42 * _DAT_14304ac30 * _DAT_1430151c0;
          fVar44 = fVar44 * _UNK_14304ac34 * _UNK_1430151c4;
          fVar43 = fVar21 * _DAT_14304ac28 * _DAT_142e3787c;
          fStack_e4 = fVar26 + fVar44;
          fStack_e8 = fVar41 + fVar37;
          fStack_e0 = fVar43 + fVar24;
          auVar14._0_8_ = CONCAT44(fStack_e0,fStack_e8);
          auVar14._8_4_ = fVar21 * _UNK_14304ac38 * _UNK_1430151c8 + 0.0;
          auVar14._12_4_ = fVar29 * _UNK_14304ac3c * _UNK_1430151cc + 0.0;
          if (DAT_143cb2d0c == '\0') {
            auVar19._8_4_ = auVar14._8_4_;
            auVar19._0_8_ = auVar14._0_8_;
            auVar19._12_4_ = auVar14._12_4_;
            auVar47 = maxps(auVar19,_DAT_14304ac40);
            auVar47 = minps(auVar47,_DAT_14304ac50);
            fVar24 = fStack_e8 - auVar47._0_4_;
            fVar29 = fStack_e0 - auVar47._4_4_;
            fVar22 = fVar29 * fVar29 + fVar24 * fVar24;
            if (_DAT_14304ac60 < fVar22) {
              fVar22 = _DAT_14304ac64 / SQRT(fVar22);
              auVar14._0_8_ =
                   CONCAT44(auVar47._4_4_ + fVar29 * fVar22,auVar47._0_4_ + fVar24 * fVar22);
            }
          }
          else {
            fVar24 = fStack_e0 * fStack_e0 + fStack_e8 * fStack_e8;
            if (_DAT_14304ac68 < fVar24) {
              auVar16._0_4_ = SQRT(fVar24);
              auVar16._4_4_ = auVar16._0_4_;
              auVar16._8_4_ = auVar14._12_4_ * auVar14._12_4_;
              auVar16._12_4_ = auVar14._12_4_ * auVar14._12_4_;
              auVar47 = divps(auVar14,auVar16);
              auVar14._0_8_ =
                   CONCAT44(auVar47._4_4_ * _UNK_14304ac34,auVar47._0_4_ * _DAT_14304ac30);
            }
          }
          puVar7 = auStack_d0;
          auStack_d0[0] = auVar14._0_8_;
          pdb_140df4540(&fStack_e8,puVar7);
          uVar39 = CONCAT44(fStack_e4 - fVar44,fStack_e8 - fVar41);
          fVar24 = fStack_e0 - fVar43;
        }
        else {
          fVar44 = (float)((uint)fVar44 ^ _DAT_142e37820);
          if (fVar44 <= _DAT_142e3c608) {
            fVar44 = _DAT_142e3c608;
          }
          fVar44 = (fVar26 + _DAT_142fa5b20) / fVar44;
          if (fVar44 <= _DAT_14304ac6c) {
            fVar44 = _DAT_14304ac6c;
          }
          fVar41 = *(float *)(param_2 + 0xc);
          fVar43 = fVar44 * (float)((uint)fVar42 ^ _DAT_142e37820);
          fVar44 = fVar44 * (float)((uint)fVar21 ^ _UNK_142e37824);
          fVar37 = fVar37 - fVar43;
          fVar24 = fVar24 - fVar44;
          auVar38._0_8_ = CONCAT44(fVar24,fVar37);
          auVar38._8_4_ = 0.0 - (float)((uint)fVar21 ^ _UNK_142e37828) * 0.0;
          auVar38._12_4_ = 0.0 - (float)((uint)fVar29 ^ _UNK_142e3782c) * 0.0;
          if (DAT_143cb2d0c == '\0') {
            auVar17._8_4_ = auVar38._8_4_;
            auVar17._0_8_ = auVar38._0_8_;
            auVar17._12_4_ = auVar38._12_4_;
            auVar47 = maxps(auVar17,_DAT_14304ac70);
            auVar47 = minps(auVar47,_DAT_14304ac80);
            fVar37 = fVar37 - auVar47._0_4_;
            fVar24 = fVar24 - auVar47._4_4_;
            fVar29 = fVar24 * fVar24 + fVar37 * fVar37;
            if (_DAT_14304ac90 < fVar29) {
              fVar29 = _DAT_14304ac94 / SQRT(fVar29);
              auVar38._0_8_ =
                   CONCAT44(auVar47._4_4_ + fVar24 * fVar29,auVar47._0_4_ + fVar37 * fVar29);
            }
          }
          else {
            fVar24 = fVar24 * fVar24 + fVar37 * fVar37;
            if (_DAT_14304ac98 < fVar24) {
              auVar15._0_4_ = SQRT(fVar24);
              auVar15._4_4_ = auVar15._0_4_;
              auVar15._8_4_ = auVar38._12_4_ * auVar38._12_4_;
              auVar15._12_4_ = auVar38._12_4_ * auVar38._12_4_;
              auVar47 = divps(auVar38,auVar15);
              auVar38._0_8_ =
                   CONCAT44(auVar47._4_4_ * _UNK_14304aca4,auVar47._0_4_ * _DAT_14304aca0);
            }
          }
          auStack_d0[0] =
               CONCAT44(fVar44 + (float)((ulonglong)auVar38._0_8_ >> 0x20),
                        fVar43 + (float)auVar38._0_8_);
          puVar7 = auStack_d0;
          pdb_140df4540(&fStack_e8,puVar7);
          uVar39 = CONCAT44(fStack_e4,fStack_e8);
          auVar40._8_8_ = 0;
          auVar40._0_8_ = uVar39;
          fVar44 = fStack_e0 * fStack_e0 + fStack_e4 * fStack_e4 + fStack_e8 * fStack_e8;
          fVar24 = fStack_e0;
          if (fVar41 * fVar41 < fVar44) {
            fVar44 = SQRT(fVar44);
            auVar18._4_4_ = fVar44;
            auVar18._0_4_ = fVar44;
            auVar18._8_8_ = 0;
            auVar47 = divps(auVar40,auVar18);
            uVar39 = CONCAT44(auVar47._4_4_ * fVar41,auVar47._0_4_ * fVar41);
            fVar24 = (fStack_e0 / fVar44) * fVar41;
          }
        }
      }
      fVar44 = (float)param_2[7];
      fVar29 = (float)((ulonglong)param_2[7] >> 0x20);
      param_2[7] = CONCAT44(fVar13 * ((float)(uVar39 >> 0x20) - fVar29) + fVar29,
                            fVar13 * ((float)uVar39 - fVar44) + fVar44);
      *(float *)(param_2 + 8) =
           (fVar24 - *(float *)(param_2 + 8)) * fVar13 + *(float *)(param_2 + 8);
    }
    fVar24 = _DAT_142e37aa0;
    uVar5 = _UNK_142e37824;
    uVar4 = _DAT_142e37820;
    pfVar2 = (float *)param_2[1];
    lVar8 = param_2[2];
    pfVar11 = (float *)((longlong)param_2 + 0x1c);
    if (*(char *)(param_2 + 3) == '\0') {
      pfVar11 = (float *)0x0;
    }
    pfVar10 = pfVar2;
    do {
      if ((pfVar10 == (float *)0x0) || (pfVar10 == pfVar2 + lVar8 * 7)) {
        if (pfVar11 == (float *)0x0) goto LAB_140ac7922;
        pfVar12 = (float *)0x0;
        pfVar10 = pfVar11;
        pfVar11 = (float *)0x0;
      }
      else {
        pfVar12 = pfVar10 + 7;
      }
      fVar44 = (float)*(undefined8 *)(pfVar10 + 2);
      fVar22 = fVar13 * fVar44;
      fVar29 = (float)((ulonglong)*(undefined8 *)(pfVar10 + 2) >> 0x20);
      fVar25 = fVar13 * fVar29;
      *(ulonglong *)(pfVar10 + 2) = CONCAT44(fVar29 - fVar25,fVar44 - fVar22);
      auVar14._0_8_ = CONCAT71((int7)((ulonglong)puVar7 >> 8),2);
      pdb_140f33a40(&fStack_e8,auVar14._0_8_,*(float *)((longlong)param_2 + 0x54) * fVar24,
                    *(float *)(param_2 + 10) * fVar24,0);
      fVar44 = *pfVar10;
      fVar41 = (float)((uint)pfVar10[4] ^ uVar4) * fVar44;
      fVar23 = fVar44 * (float)((uint)*(undefined8 *)(pfVar10 + 5) ^ uVar4);
      fVar37 = fVar44 * (float)((uint)((ulonglong)*(undefined8 *)(pfVar10 + 5) >> 0x20) ^ uVar5);
      fVar32 = fStack_e0 * fStack_e0;
      fVar35 = fStack_dc * fStack_dc;
      fVar50 = fStack_e4 * fStack_e4 + fStack_e8 * fStack_e8;
      fVar26 = fStack_e0 * fVar37 + fStack_e4 * fVar23 + fStack_e8 * fVar41;
      fVar26 = fVar26 + fVar26;
      fVar45 = fVar26 * fStack_e8;
      fVar28 = fVar26 * fStack_e4;
      fVar26 = fVar26 * fStack_e0;
      fVar30 = fStack_e0 * fVar41;
      fVar31 = fStack_e8 * fVar23;
      fVar33 = fStack_e4 * fVar37;
      fVar43 = fVar37 * fStack_e8;
      fVar42 = fVar41 * fStack_e4;
      fVar21 = fVar23 * fStack_e0;
      fVar48 = fStack_dc + fStack_dc;
      *pfVar10 = pfVar10[1] * fVar13 + fVar44 * (fVar20 - fVar13);
      fVar22 = (float)param_2[10] + fVar22;
      fVar25 = (float)((ulonglong)param_2[10] >> 0x20) + fVar25;
      param_2[10] = CONCAT44(fVar25,fVar22);
      puVar7 = (undefined8 *)CONCAT71((int7)((ulonglong)auVar14._0_8_ >> 8),2);
      pdb_140f33a40(&fStack_e8,puVar7,fVar25 * fVar24,fVar22 * fVar24,0);
      fVar44 = *pfVar10;
      fVar22 = (float)((uint)pfVar10[4] ^ uVar4) * fVar44;
      fVar25 = fVar44 * (float)((uint)*(undefined8 *)(pfVar10 + 5) ^ uVar4);
      fVar44 = fVar44 * (float)((uint)((ulonglong)*(undefined8 *)(pfVar10 + 5) >> 0x20) ^ uVar5);
      fVar34 = fStack_e0 * fStack_e0;
      fVar36 = fStack_dc * fStack_dc;
      fVar49 = fStack_e4 * fStack_e4 + fStack_e8 * fStack_e8;
      fVar27 = fStack_e0 * fVar44 + fStack_e4 * fVar25 + fStack_e8 * fVar22;
      fVar27 = fVar27 + fVar27;
      fVar29 = fStack_dc + fStack_dc;
      param_2[7] = CONCAT44((float)((ulonglong)param_2[7] >> 0x20) +
                            ((fVar29 * (fStack_e0 * fVar22 - fVar44 * fStack_e8) +
                             fVar27 * fStack_e4 + (fVar36 - (fVar49 + fVar34)) * fVar25) -
                            (fVar48 * (fVar30 - fVar43) +
                            fVar28 + (fVar35 - (fVar50 + fVar32)) * fVar23)),
                            (float)param_2[7] +
                            ((fVar29 * (fStack_e4 * fVar44 - fVar25 * fStack_e0) +
                             fVar27 * fStack_e8 + (fVar36 - (fVar49 + fVar34)) * fVar22) -
                            (fVar48 * (fVar33 - fVar21) +
                            fVar45 + (fVar35 - (fVar50 + fVar32)) * fVar41)));
      *(float *)(param_2 + 8) =
           ((fVar29 * (fStack_e8 * fVar25 - fVar22 * fStack_e4) +
            fVar27 * fStack_e0 + (fVar36 - (fVar49 + fVar34)) * fVar44) -
           (fVar48 * (fVar31 - fVar42) + fVar26 + (fVar35 - (fVar50 + fVar32)) * fVar37)) +
           *(float *)(param_2 + 8);
      pfVar10 = pfVar12;
    } while( true );
  }
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 8);
  *param_1 = param_2[7];
  fVar20 = *(float *)((longlong)param_2 + 0x54) * _DAT_142e37aa0;
  fVar24 = _DAT_142e37aa0 * *(float *)(param_2 + 10);
  uVar9 = (undefined7)((ulonglong)param_2 >> 8);
  goto LAB_140ac7abb;
LAB_140ac7922:
  fVar20 = *(float *)((longlong)param_2 + 0x44);
  fVar29 = (float)param_2[9];
  fVar41 = fVar29 * fVar13;
  fVar43 = (float)((ulonglong)param_2[9] >> 0x20) * fVar13;
  fVar44 = *(float *)((longlong)param_2 + 0x3c) + fVar41;
  param_2[9] = CONCAT44(*(float *)((longlong)param_2 + 0x4c) - fVar43,fVar29 - fVar41);
  *(float *)(param_2 + 7) = *(float *)(param_2 + 7) + fVar20 * fVar13;
  *(float *)((longlong)param_2 + 0x3c) = fVar44;
  *(float *)(param_2 + 8) = *(float *)(param_2 + 8) + fVar43;
  *(float *)((longlong)param_2 + 0x44) = fVar20 - fVar20 * fVar13;
  if (DAT_143ca42c4 != '\0') {
    if (fVar44 <= _DAT_142e36f28) {
      fVar44 = _DAT_142e36f28;
    }
    *(float *)((longlong)param_2 + 0x3c) = fVar44;
  }
  fVar13 = _DAT_143006dc0;
  fVar20 = _DAT_142e37870;
  uVar4 = _DAT_142e377e0;
  uVar39 = param_2[2];
  if (uVar39 != 0) {
    pfVar2 = (float *)param_2[1];
    puVar7 = (undefined8 *)(uVar39 - 1);
    uVar6 = 0;
    pfVar11 = pfVar2;
    do {
      pfVar10 = pfVar11 + 7;
      if (((float)((uint)pfVar11[2] & _DAT_142e377e0) < _DAT_142e37870) &&
         ((float)((uint)pfVar11[3] & _DAT_142e377e0) < _DAT_142e37870)) {
        fVar44 = (float)((uint)pfVar11[1] & _DAT_142e377e0);
        if (fVar44 <= _DAT_143006dc0) {
          fVar44 = _DAT_143006dc0;
        }
        if ((float)((uint)(*pfVar11 - pfVar11[1]) & _DAT_142e377e0) / fVar44 < _DAT_142e37870) {
          if (uVar39 <= uVar6 + 1) goto LAB_140ac7a88;
          lVar8 = (longlong)puVar7 - uVar6;
          goto LAB_140ac7a48;
        }
      }
      uVar6 = uVar6 + 1;
      pfVar11 = pfVar10;
    } while (uVar39 != uVar6);
  }
  goto LAB_140ac7a8c;
LAB_140ac7a48:
  do {
    if ((fVar20 <= (float)((uint)pfVar10[2] & uVar4)) ||
       (fVar20 <= (float)((uint)pfVar10[3] & uVar4))) {
LAB_140ac7a1d:
      auVar14._0_8_ = *(undefined8 *)pfVar10;
      auVar38._0_8_ = *(undefined8 *)(pfVar10 + 2);
      uVar3 = *(undefined8 *)(pfVar10 + 5);
      *(undefined8 *)(pfVar2 + uVar6 * 7 + 3) = *(undefined8 *)(pfVar10 + 3);
      *(undefined8 *)(pfVar2 + uVar6 * 7 + 3 + 2) = uVar3;
      *(undefined8 *)(pfVar2 + uVar6 * 7) = auVar14._0_8_;
      *(undefined8 *)(pfVar2 + uVar6 * 7 + 2) = auVar38._0_8_;
      uVar6 = uVar6 + 1;
    }
    else {
      fVar44 = (float)((uint)pfVar10[1] & uVar4);
      if (fVar44 <= fVar13) {
        fVar44 = fVar13;
      }
      if (fVar20 <= (float)((uint)(*pfVar10 - pfVar10[1]) & uVar4) / fVar44) goto LAB_140ac7a1d;
    }
    pfVar10 = pfVar10 + 7;
    lVar8 = lVar8 + -1;
    puVar7 = (undefined8 *)0x0;
  } while (lVar8 != 0);
LAB_140ac7a88:
  param_2[2] = uVar6;
LAB_140ac7a8c:
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 8);
  *param_1 = param_2[7];
  fVar20 = *(float *)((longlong)param_2 + 0x54) * fVar24;
  fVar24 = fVar24 * *(float *)(param_2 + 10);
  uVar9 = (undefined7)((ulonglong)puVar7 >> 8);
LAB_140ac7abb:
  pdb_140f33a40(param_1 + 2,CONCAT71(uVar9,2),fVar20,fVar24,0);
  return param_1;
}

