// VA 0x140aeb830, PDB extent 5104 bytes
// country_core::systems::time_of_day::time_of_day
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/time_of_day.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::time_of_day::time_of_day
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/time_of_day.rs
   Extent: 5104 */

void pdb_140aeb830(undefined8 *param_1,undefined8 *param_2,longlong *param_3,longlong *param_4,
                  longlong *param_5,longlong *param_6,undefined8 *param_7,longlong *param_8,
                  longlong *param_9,longlong *param_10,undefined8 *param_11,undefined8 *param_12,
                  undefined8 *param_13,longlong *param_14)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  int iVar11;
  char cVar12;
  bool bVar13;
  int iVar14;
  longlong lVar15;
  ulonglong uVar16;
  undefined *puVar17;
  longlong *plVar18;
  ulonglong uVar19;
  uint uVar20;
  ulonglong uVar21;
  longlong lVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  undefined *puVar27;
  undefined *puVar28;
  int *piVar29;
  longlong lVar30;
  float *pfVar31;
  bool bVar32;
  bool bVar33;
  bool bVar34;
  bool bVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  int iVar40;
  float fVar41;
  undefined8 uVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  double dVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fStack_1f8;
  undefined8 uStack_198;
  char *pcStack_188;
  float fStack_178;
  float fStack_174;
  float fStack_170;
  undefined4 uStack_16c;
  undefined8 uStack_168;
  undefined8 uStack_160;
  float fStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  float fStack_14c;
  undefined4 uStack_148;
  float fStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 uStack_138;
  float fStack_130;
  undefined4 uStack_12c;
  undefined8 *puStack_120;
  undefined4 uStack_114;
  float fStack_110;
  float fStack_10c;
  longlong *plStack_108;
  byte bStack_f1;
  undefined8 uStack_f0;
  undefined8 extraout_XMM0_Qb;
  
  uStack_f0 = 0xfffffffffffffffe;
  cVar12 = pdb_140e94b40();
  puStack_120 = param_2;
  if (cVar12 == '\0') {
    bVar13 = false;
LAB_140aeba5c:
    plVar18 = (longlong *)*param_1;
    plStack_108 = (longlong *)*param_10;
    if (*plVar18 == 0) {
      pfVar31 = (float *)*param_13;
      pcStack_188 = (char *)((longlong)pfVar31 + 0xb);
    }
    else {
      pdb_140a8aa00(*plVar18 + 0x10,&UNK_143050125,0xb);
      pfVar31 = (float *)*param_13;
      pcStack_188 = (char *)((longlong)pfVar31 + 0xb);
      if (*plVar18 != 0) {
        pdb_140a8aa00(*plVar18 + 0x10,&UNK_143050130,10);
      }
    }
    fVar50 = _DAT_142f57bcc;
    if (*(char *)(pfVar31 + 3) == '\0') {
      if (*(char *)((longlong)pfVar31 + 10) == '\0') {
        fVar50 = _DAT_142f57bcc - *(float *)(*param_8 + 0xc);
        *(undefined4 *)param_13[2] = *(undefined4 *)((longlong)param_13 + 0x1c);
        pfVar31[1] = fVar50;
      }
    }
    else {
      fVar58 = _DAT_142f57bcc - pfVar31[1];
      lVar15 = *param_8;
      fVar36 = (float)pub_142e32a70();
      fVar50 = (float)(~-(uint)(fVar36 < 0.0) & (uint)fVar36 |
                      (uint)(fVar50 + fVar36) & -(uint)(fVar36 < 0.0));
      fVar36 = (float)pub_142e32a20(*(float *)(*param_5 + 0x28) * _DAT_142e382d4);
      fVar48 = fVar58 - fVar50;
      if (_DAT_142f95164 <= fVar48) {
        if (_DAT_142f94714 <= fVar48) {
          fVar48 = fVar48 + _DAT_14304fc78;
        }
      }
      else {
        fVar48 = fVar48 + _DAT_142f57bcc;
      }
      *(undefined4 *)param_8[2] = *(undefined4 *)((longlong)param_8 + 0x1c);
      fVar50 = (_DAT_142e36f28 - fVar36) * fVar48 + fVar50;
      *(float *)(lVar15 + 0xc) = fVar50;
      if ((float)((uint)(fVar50 - fVar58) & _DAT_142e377e0) < _DAT_142e37848) {
        *(undefined4 *)param_13[2] = *(undefined4 *)((longlong)param_13 + 0x1c);
        *(undefined1 *)(pfVar31 + 3) = 0;
      }
    }
    fVar50 = _DAT_142e36f28;
    if (*(char *)((longlong)pfVar31 + 10) == '\0') {
      piVar29 = (int *)*param_8;
      fVar50 = (float)piVar29[2];
      *(undefined4 *)param_13[2] = *(undefined4 *)((longlong)param_13 + 0x1c);
      *pfVar31 = fVar50;
    }
    else if (*pcStack_188 == '\0') {
      fVar36 = (float)pub_142e32a70();
      fVar58 = (float)(~-(uint)(fVar36 < 0.0) & (uint)fVar36 |
                      (uint)(fVar36 + fVar50) & -(uint)(fVar36 < 0.0));
      piVar29 = (int *)*param_8;
      fVar36 = (float)piVar29[2];
      fVar48 = *(float *)((longlong)plStack_108 + 0x118);
      if (*(float *)((longlong)plStack_108 + 0x118) <= fVar50) {
        fVar48 = fVar50;
      }
      fVar48 = (float)pub_142e32a20(fVar48 * *(float *)(*param_5 + 0x28) * _DAT_142e382d4);
      fVar36 = fVar36 - fVar58;
      if (_DAT_142e36f38 <= fVar36) {
        if (_DAT_142e36f50 <= fVar36) {
          fVar36 = fVar36 + _DAT_142e36f34;
        }
      }
      else {
        fVar36 = fVar36 + _DAT_142e36f28;
      }
      *(undefined4 *)param_13[2] = *(undefined4 *)((longlong)param_13 + 0x1c);
      *pfVar31 = (fVar50 - fVar48) * fVar36 + fVar58;
    }
    else {
      piVar29 = (int *)*param_8;
      pub_142e32a20();
      fVar50 = _DAT_142e36f28;
      fVar36 = (float)pub_142e32a70();
      fVar50 = (float)(~-(uint)(fVar36 < 0.0) & (uint)fVar36 |
                      (uint)(fVar50 + fVar36) & -(uint)(fVar36 < 0.0));
      *(undefined4 *)param_8[2] = *(undefined4 *)((longlong)param_8 + 0x1c);
      piVar29[2] = (int)fVar50;
      if ((float)((uint)(fVar50 - *pfVar31) & _DAT_142e377e0) < _DAT_142e37870) {
        *(undefined4 *)param_13[2] = *(undefined4 *)((longlong)param_13 + 0x1c);
        *pcStack_188 = '\0';
      }
    }
    lVar15 = param_11[1];
    uVar21 = *(ulonglong *)*param_11;
    uVar19 = 0;
    uVar16 = uVar21 - *(ulonglong *)(lVar15 + 0x18);
    if (uVar21 < *(ulonglong *)(lVar15 + 0x18)) {
      uVar16 = uVar19;
    }
    uVar23 = uVar21 - *(ulonglong *)(lVar15 + 0x38);
    if (uVar21 < *(ulonglong *)(lVar15 + 0x38)) {
      uVar23 = uVar19;
    }
    bVar32 = *(ulonglong *)(lVar15 + 0x30) < uVar23;
    uVar23 = *(ulonglong *)(lVar15 + 0x30) - uVar23;
    uVar21 = uVar23;
    if (bVar32) {
      uVar21 = uVar19;
    }
    bVar33 = *(ulonglong *)(lVar15 + 0x10) < uVar16;
    uVar16 = *(ulonglong *)(lVar15 + 0x10) - uVar16;
    uVar25 = uVar16;
    if (bVar33) {
      uVar25 = uVar19;
    }
    uVar21 = uVar25 + uVar21;
    if (!bVar33 && uVar16 != 0 || !bVar32 && uVar23 != 0) {
      uVar21 = uVar19;
    }
    *(ulonglong *)*param_11 = *(longlong *)(lVar15 + 0x40) - uVar21;
    lVar15 = param_12[1];
    uVar21 = *(ulonglong *)*param_12;
    uVar25 = uVar21 - *(ulonglong *)(lVar15 + 0x18);
    if (uVar21 < *(ulonglong *)(lVar15 + 0x18)) {
      uVar25 = uVar19;
    }
    uVar24 = uVar21 - *(ulonglong *)(lVar15 + 0x38);
    if (uVar21 < *(ulonglong *)(lVar15 + 0x38)) {
      uVar24 = uVar19;
    }
    bVar34 = *(ulonglong *)(lVar15 + 0x30) < uVar24;
    uVar24 = *(ulonglong *)(lVar15 + 0x30) - uVar24;
    uVar21 = uVar24;
    if (bVar34) {
      uVar21 = uVar19;
    }
    bVar35 = *(ulonglong *)(lVar15 + 0x10) < uVar25;
    uVar25 = *(ulonglong *)(lVar15 + 0x10) - uVar25;
    uVar26 = uVar25;
    if (bVar35) {
      uVar26 = uVar19;
    }
    bStack_f1 = (bVar35 || uVar25 == 0) && (bVar34 || uVar24 == 0);
    uVar21 = uVar26 + uVar21;
    if (!bVar35 && uVar25 != 0 || !bVar34 && uVar24 != 0) {
      uVar21 = uVar19;
    }
    *(ulonglong *)*param_12 = *(longlong *)(lVar15 + 0x40) - uVar21;
    if (DAT_143cb2cc0 == '\x01') {
      fStack_178 = 2.36819e-43;
      cVar12 = pdb_1417b1a90(*param_6 + 0x20,&fStack_178);
      if (cVar12 != '\0') {
        *(undefined4 *)param_10[2] = *(undefined4 *)((longlong)param_10 + 0x1c);
        *(byte *)((longlong)plStack_108 + 0xe3) = *(byte *)((longlong)plStack_108 + 0xe3) ^ 1;
      }
    }
    puVar10 = puStack_120;
    iVar40 = *piVar29;
    if (*(char *)((longlong)plStack_108 + 0xe3) == '\0') {
      iVar14 = 2;
      iVar11 = 2;
      if (iVar40 == 0) goto LAB_140aebf55;
      if (iVar40 == 1) goto LAB_140aebf4d;
      fVar50 = *(float *)(*param_5 + 0x28) / _DAT_143006a20 + (float)piVar29[1];
      if (fVar50 <= 0.0) {
        fVar50 = 0.0;
      }
    }
    else {
      iVar14 = 1;
      iVar11 = 1;
      if (iVar40 == 0) {
LAB_140aebf55:
        iVar14 = iVar11;
        fVar50 = 0.0;
      }
      else if (iVar40 == 1) {
        fVar50 = *(float *)(*param_5 + 0x28) / _DAT_142e3788c + (float)piVar29[1];
        if (_DAT_142e36f28 <= fVar50) {
          fVar50 = _DAT_142e36f28;
        }
      }
      else {
LAB_140aebf4d:
        iVar14 = iVar11;
        fVar50 = (float)piVar29[1];
      }
    }
    uStack_114 = *(undefined4 *)((longlong)param_8 + 0x1c);
    puVar6 = (undefined4 *)param_8[2];
    *puVar6 = uStack_114;
    *piVar29 = iVar14;
    piVar29[1] = (int)fVar50;
    if ((*(char *)((longlong)pfVar31 + 10) == '\x01') && (*pcStack_188 == '\x01')) {
      fVar50 = (float)piVar29[2];
    }
    else {
      fVar48 = *(float *)(*param_5 + 0x28) * _DAT_143ca44b8;
      auVar46._0_8_ = pub_142e32a10();
      fVar36 = _DAT_142e36f28;
      auVar46._8_8_ = extraout_XMM0_Qb;
      auVar47._4_12_ = auVar46._4_12_;
      auVar47._0_4_ =
           (float)auVar46._0_8_ * fVar50 * fVar48 * *(float *)((longlong)plStack_108 + 0x118) +
           (float)piVar29[2] + _DAT_142e36f28;
      fVar50 = (float)pub_142e32a70(auVar47._0_8_,_DAT_142e36f28);
      fVar50 = (float)(~-(uint)(fVar50 < 0.0) & (uint)fVar50 |
                      (uint)(fVar36 + fVar50) & -(uint)(fVar50 < 0.0));
      *puVar6 = uStack_114;
      piVar29[2] = (int)fVar50;
    }
    uVar42 = pub_142e32a70(fVar50 * _DAT_142f57bc4 + _DAT_142f57bc8);
    pdb_140aecc20(uVar42,*(char *)(*param_14 + 0x98) == '\x04');
    if (*plVar18 != 0) {
      pdb_140a8aa00(*plVar18 + 0x10,&UNK_14305013a,8);
    }
    uVar20 = piVar29[10] & 0xffff;
    uVar21 = (ulonglong)uVar20;
    if (0x16c < (piVar29[10] - 1U & 0xffff)) goto LAB_140aec8bd;
    fStack_178 = (float)(uVar20 | 0xfce00);
    fStack_174 = 0.0;
    fStack_170 = 0.0;
    uStack_16c = (float)((uint)uStack_16c._3_1_ << 0x18);
    lVar30 = pdb_140e033e0(&fStack_178);
    fVar50 = (float)uVar42 * _DAT_14304fc7c;
    lVar15 = 0x7fffffffffffffff;
    if (fVar50 <= _DAT_14304fc80) {
      lVar15 = (longlong)fVar50;
    }
    lVar22 = 0;
    if (!NAN(fVar50)) {
      lVar22 = lVar15;
    }
    pdb_141c46e10(&fStack_178,lVar22 + lVar30 * 1000,(double)(float)piVar29[4]);
    uVar42 = CONCAT44(fStack_14c,uStack_150);
    dVar59 = _DAT_14304fc90 - ((double)CONCAT44(uStack_154,fStack_158) + _DAT_14304fc88);
    dVar43 = (double)pub_142e329d0(dVar59);
    dVar44 = (double)pub_142e329d0(uVar42);
    dVar45 = (double)pub_142e32b20(uVar42);
    dVar59 = (double)pub_142e32b20(dVar59);
    fVar37 = (float)pub_142e32b30();
    fVar38 = (float)pub_142e329e0();
    plStack_108 = (longlong *)pub_142e32b30();
    fVar39 = (float)pub_142e329e0();
    pdb_140c1edd0(&fStack_178,*puVar10);
    fVar58 = uStack_16c;
    fVar48 = fStack_170;
    fVar36 = fStack_174;
    fVar50 = fStack_178;
    fStack_110 = uStack_16c;
    uVar42 = CONCAT44(fStack_170,fStack_174);
    fStack_10c = uStack_168._4_4_;
    uVar9 = CONCAT44(uStack_150,uStack_154);
    puStack_120 = (undefined8 *)CONCAT44(puStack_120._4_4_,uStack_148);
    _DAT_143cb2cec = uStack_12c;
    lVar15 = *param_3;
    if (*(char *)(lVar15 + 0x14) == '\0') {
      fVar57 = *(float *)(lVar15 + 0x10);
      uVar5 = *(undefined4 *)((longlong)param_3 + 0x1c);
      puVar7 = (undefined4 *)param_3[2];
      *puVar7 = uVar5;
      pdb_140de9710(lVar15,fStack_144 * (fVar57 + fVar57 + _DAT_142e36f28));
      *puVar7 = uVar5;
      pdb_140de9710(lVar15 + 4,uStack_140);
      *puVar7 = uVar5;
      pdb_140de9710(lVar15 + 8,uStack_13c);
    }
    fVar57 = (float)piVar29[2];
    fVar61 = (float)piVar29[5];
    fVar41 = (float)piVar29[6];
    iVar40 = 0;
    if (fVar61 <= fVar57 && fVar57 < fVar41) {
      iVar40 = pdb_140de8220();
    }
    fVar57 = (float)(fVar61 <= fVar57 && fVar57 < fVar41);
    piVar29[9] = iVar40;
    *puVar6 = uStack_114;
    if ((((bVar33 || uVar16 == 0) && (bVar32 || uVar23 == 0)) & bStack_f1) == 0) {
      piVar29[8] = (int)fVar57;
    }
    else {
      fVar57 = (float)pdb_140de9710(piVar29 + 8);
    }
    fVar61 = _DAT_142e36f28;
    fVar41 = (float)(dVar43 * dVar44);
    fVar53 = (float)dVar45;
    fVar54 = (float)(dVar59 * (double)((ulonglong)dVar44 ^ _DAT_142f566f0));
    fVar62 = _DAT_142e36f28 - fVar38;
    fVar51 = (float)_DAT_14300c760 * fVar62;
    fVar52 = (float)((ulonglong)_DAT_14300c760 >> 0x20) * fVar62;
    fVar49 = (fVar51 + fVar37 * _DAT_14304fca0) * 0.0 +
             (fVar62 * _UNK_14304fcb4 - fVar37 * 0.0) * _DAT_14304fce0 +
             (fVar38 + fVar62 * _DAT_14304fcb0) * _DAT_14304fcc0;
    fVar62 = (fVar52 - fVar37 * _UNK_14304fca4) * 0.0 +
             (fVar62 * _DAT_14304fc9c + fVar38) * _UNK_14304fce4 +
             (fVar37 * 0.0 + fVar62 * _UNK_14304fcb4) * _UNK_14304fcc4;
    fVar38 = (fVar37 * _UNK_14304fca4 + fVar52) * _UNK_14304fcf4 +
             (fVar51 - fVar37 * _DAT_14304fca0) * _DAT_14304fcd0 +
             (fVar38 + fVar51) * _DAT_14304fcf0;
    fVar37 = fVar62 * 0.0;
    fVar51 = _DAT_14304fd04 * fVar38 + (fVar37 - _DAT_14304fd00 * fVar49);
    fVar63 = fVar62 + fVar49 * 0.0 + fVar38 * _DAT_14304fd10;
    fVar62 = (fVar37 - fVar49 * _DAT_14304fd04) - fVar38 * _UNK_14304fd14;
    fVar56 = fVar39 * fVar39;
    fVar37 = plStack_108._0_4_ * plStack_108._0_4_ + 0.0;
    fVar52 = fVar56 - (fVar37 + 0.0);
    fVar55 = fVar56 - (fVar37 + 0.0);
    fVar56 = fVar56 - (fVar37 + 0.0);
    fVar64 = fVar54 * 0.0 + plStack_108._0_4_ * fVar53 + fVar41 * 0.0;
    fVar64 = fVar64 + fVar64;
    fVar39 = fVar39 + fVar39;
    fVar38 = (plStack_108._0_4_ * fVar54 - fVar53 * 0.0) * fVar39 + fVar64 * 0.0 + fVar41 * fVar52;
    fVar37 = (fVar53 * 0.0 - fVar41 * plStack_108._0_4_) * fVar39 + fVar64 * 0.0 + fVar54 * fVar56;
    fVar49 = fVar62 * 0.0 + plStack_108._0_4_ * fVar63 + fVar51 * 0.0;
    fVar49 = fVar49 + fVar49;
    fVar52 = (plStack_108._0_4_ * fVar62 - fVar63 * 0.0) * fVar39 + fVar49 * 0.0 + fVar52 * fVar51;
    fVar60 = (fVar51 * 0.0 - fVar62 * 0.0) * fVar39 + fVar49 * plStack_108._0_4_ + fVar55 * fVar63;
    fVar49 = (fVar63 * 0.0 - fVar51 * plStack_108._0_4_) * fVar39 + fVar49 * 0.0 + fVar56 * fVar62;
    fVar41 = (fVar41 * 0.0 - fVar54 * 0.0) * fVar39 + fVar64 * plStack_108._0_4_ + fVar53 * fVar55 +
             _DAT_143015990;
    fVar39 = _DAT_142e36f28 / SQRT(fVar41 * fVar41 + fVar38 * fVar38 + fVar37 * fVar37);
    fVar38 = fVar38 * fVar39;
    fVar41 = fVar41 * fVar39;
    fVar39 = (fVar37 + _UNK_143015994) * fVar39;
    fVar37 = (float)piVar29[7];
    fStack_1f8 = (float)uStack_168;
    if (_DAT_142e36f50 <= fVar57) {
      *(undefined4 *)param_7[2] = *(undefined4 *)((longlong)param_7 + 0x1c);
      fStack_178 = fVar52;
      fStack_174 = fVar60;
      fStack_170 = fVar49;
      pdb_140bb2350(*param_7,&fStack_178);
      fVar36 = (fVar61 - fVar37) * (_DAT_142e36f38 + fVar57 + _DAT_142e36f38 + fVar57);
      fVar58 = fVar58 * fVar36;
      fVar37 = fStack_1f8 * fVar36;
      uStack_168._4_4_ = uStack_168._4_4_ * fVar36;
      fVar61 = fVar61 - fVar36;
      fVar48 = fStack_110 * fVar61;
      fStack_1f8 = fStack_1f8 * fVar61;
      fVar36 = fStack_10c * fVar61;
      fVar61 = _UNK_142e378e4;
    }
    else {
      *(undefined4 *)param_7[2] = *(undefined4 *)((longlong)param_7 + 0x1c);
      fStack_178 = fVar38;
      fStack_174 = fVar41;
      fStack_170 = fVar39;
      pdb_140bb2350(*param_7,&fStack_178);
      uStack_168._4_4_ = (fVar61 - fVar37) * (fVar61 - (fVar57 + fVar57));
      fVar61 = fVar61 - uStack_168._4_4_;
      fVar58 = fVar50 * uStack_168._4_4_;
      fVar37 = fVar36 * uStack_168._4_4_;
      uStack_168._4_4_ = fVar48 * uStack_168._4_4_;
      uVar42 = CONCAT44(fVar48 * fVar61,fVar36 * fVar61);
      fVar48 = fStack_110;
      fVar36 = fStack_10c;
    }
    fVar62 = *(float *)(*param_4 + 8);
    *(undefined4 *)param_9[2] = *(undefined4 *)((longlong)param_9 + 0x1c);
    pfVar31 = (float *)*param_9;
    *pfVar31 = fVar58;
    pfVar31[1] = fVar37;
    pfVar31[2] = uStack_168._4_4_;
    pfVar31[3] = fVar50 * fVar61;
    *(undefined8 *)(pfVar31 + 4) = uVar42;
    *(ulonglong *)(pfVar31 + 6) = CONCAT44(fVar41,fVar38);
    pfVar31[8] = fVar39;
    pfVar31[9] = fVar48;
    pfVar31[10] = fStack_1f8;
    pfVar31[0xb] = fVar36;
    pfVar31[0xe] = fVar49;
    *(ulonglong *)(pfVar31 + 0xc) = CONCAT44(fVar60,fVar52);
    *(undefined8 *)(pfVar31 + 0xf) = uStack_160;
    pfVar31[0x11] = fStack_158;
    *(undefined8 *)(pfVar31 + 0x12) = uVar9;
    pfVar31[0x14] = fStack_14c;
    pfVar31[0x15] = puStack_120._0_4_ + fVar62;
    *(undefined8 *)(pfVar31 + 0x16) = uStack_138;
    pfVar31[0x18] = fStack_130;
    pfVar31[0x1b] = fVar39;
    *(ulonglong *)(pfVar31 + 0x19) = CONCAT44(fVar41,fVar38);
    pfVar31[0x1e] = fVar49;
    *(ulonglong *)(pfVar31 + 0x1c) = CONCAT44(fVar60,fVar52);
    pfVar31[0x1f] = fVar57;
    if (!bVar13) {
      return;
    }
    plVar18 = (longlong *)pdb_140e97000();
    if ((char)plVar18[0xd] != '\x01') goto LAB_140aec889;
    do {
      if (*plVar18 == 0) {
        *plVar18 = -1;
        plStack_108 = plVar18;
        pdb_140e95370(plVar18 + 1,uStack_198);
        *plStack_108 = *plStack_108 + 1;
        return;
      }
LAB_140aec87d:
      plVar18 = (longlong *)pdb_142dc8090(&UNK_143326a50);
LAB_140aec889:
      plVar18 = (longlong *)pdb_142d8ec20(plVar18,0);
    } while (plVar18 != (longlong *)0x0);
  }
  else {
    puVar27 = &UNK_143050549;
    lVar30 = 0x2f;
    uVar21 = 0x2f;
    lVar15 = pdb_140aef6f0(&UNK_143050549);
    if (lVar15 == 1) {
      if (0x2f < uVar21) {
LAB_140aec936:
        pdb_142dc8070(&UNK_143050549,0x2f,0);
LAB_140aec956:
        pdb_142dc8070(&UNK_143050549,0x2f);
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      puVar27 = &UNK_143050549;
      uVar16 = pdb_140aef6f0(&UNK_143050549);
      if ((uVar16 & 1) != 0) {
        if (0x2f < uVar21 + 2) goto LAB_140aec956;
        lVar30 = 0x2d - uVar21;
        puVar27 = &UNK_14305054b + uVar21;
      }
    }
    puVar17 = &UNK_143050125;
    puVar28 = &UNK_1430500f7;
    do {
      pbVar1 = puVar17 + -1;
      uVar20 = (uint)(char)*pbVar1;
      if ((int)uVar20 < 0) {
        bVar3 = puVar17[-2];
        if ((char)bVar3 < -0x40) {
          bVar4 = puVar17[-3];
          if ((char)bVar4 < -0x40) {
            pbVar2 = puVar17 + -4;
            puVar17 = puVar17 + -4;
            uVar20 = bVar4 & 0x3f | (*pbVar2 & 7) << 6;
          }
          else {
            puVar17 = puVar17 + -3;
            uVar20 = bVar4 & 0xf;
          }
          uVar20 = bVar3 & 0x3f | uVar20 << 6;
        }
        else {
          puVar17 = puVar17 + -2;
          uVar20 = bVar3 & 0x1f;
        }
        uVar20 = (uint)(*pbVar1 & 0x3f) | uVar20 << 6;
        if (uVar20 != 0x5c) goto LAB_140aeb9b9;
LAB_140aeb9d5:
        if ((undefined *)0x2e < puVar17 + -0x1430500f6) {
          pdb_142dc8070(&UNK_1430500f7,0x2e,puVar17 + -0x1430500f6,0x2e,&UNK_1430505e0);
          goto LAB_140aec936;
        }
        lVar15 = 0x2d - (longlong)(puVar17 + -0x1430500f7);
        puVar28 = puVar17 + 1;
        goto LAB_140aeb9f8;
      }
      puVar17 = puVar17 + -1;
      if (uVar20 == 0x5c) goto LAB_140aeb9d5;
LAB_140aeb9b9:
      if (uVar20 == 0x2f) goto LAB_140aeb9d5;
    } while (puVar17 != &UNK_1430500f7);
    lVar15 = 0x2e;
LAB_140aeb9f8:
    plVar18 = (longlong *)pdb_140e97000();
    if (((char)plVar18[0xd] == '\x01') ||
       (plVar18 = (longlong *)pdb_142d8ec20(plVar18,0), plVar18 != (longlong *)0x0)) {
      if (*plVar18 != 0) goto LAB_140aec87d;
      *plVar18 = -1;
      plStack_108 = plVar18;
      uStack_198 = pdb_140e94f10(plVar18 + 1,puVar27,lVar30,puVar28,lVar15,1,0);
      *plStack_108 = *plStack_108 + 1;
      bVar13 = true;
      goto LAB_140aeba5c;
    }
  }
  uVar21 = pdb_142dc7890(&UNK_143326860);
LAB_140aec8bd:
  fStack_178 = 133.01843;
  fStack_174 = 1.4013e-45;
  fStack_170 = 9.80909e-45;
  uStack_16c = 0.0;
  uStack_168 = 1;
  uStack_160 = 0x16d;
  fStack_158 = (float)uVar21;
  uStack_154 = (undefined4)(uVar21 >> 0x20);
  uStack_150 = CONCAT31(uStack_150._1_3_,1);
                    /* WARNING: Subroutine does not return */
  pdb_142dc8170(&UNK_143050468,0x2b,&fStack_178,&UNK_143050498,&UNK_143050148);
}

