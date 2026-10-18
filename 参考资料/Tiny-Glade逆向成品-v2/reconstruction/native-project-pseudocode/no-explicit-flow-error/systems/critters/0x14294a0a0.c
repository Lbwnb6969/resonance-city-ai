// VA 0x14294a0a0, PDB extent 2762 bytes
// system_critters::duck::update_duck_goals
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/critters/src/duck.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_critters::duck::update_duck_goals
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/critters/src/duck.rs
   Extent: 2762 */

void pdb_14294a0a0(longlong *param_1,longlong *param_2,longlong *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  uint *puVar2;
  undefined4 *puVar3;
  float fVar4;
  char cVar5;
  undefined4 uVar6;
  ulonglong *puVar7;
  longlong lVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  bool bVar19;
  char cVar20;
  undefined1 uVar21;
  uint uVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  byte bVar26;
  byte bVar27;
  longlong lVar28;
  uint uVar29;
  longlong lVar30;
  int *piVar31;
  undefined8 *puVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  longlong lVar37;
  float *pfVar38;
  uint *puVar39;
  float fVar40;
  undefined4 uVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar48;
  float fVar49;
  float fVar50;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  float fVar51;
  float fVar52;
  undefined1 auVar53 [16];
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  longlong lStack_1c0;
  longlong lStack_1a0;
  longlong lStack_188;
  longlong lStack_180;
  undefined8 uStack_178;
  float fStack_170;
  undefined4 *puStack_168;
  longlong lStack_160;
  undefined1 auStack_158 [8];
  float fStack_150;
  undefined1 auStack_148 [8];
  float fStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 auStack_128 [16];
  undefined1 auStack_118 [16];
  undefined1 auStack_108 [16];
  undefined1 auStack_f8 [48];
  
  lVar23 = pdb_1406d0830(*param_4);
  puVar1 = (undefined8 *)(lVar23 + 0x20);
  puVar32 = (undefined8 *)(lVar23 + 0x28);
  if (*(char *)(lVar23 + 0x298) == '\0') {
    puVar32 = (undefined8 *)(lVar23 + 0x10);
    puVar1 = (undefined8 *)(lVar23 + 8);
  }
  uStack_130 = *puVar32;
  uStack_138 = *puVar1;
  pdb_140bfabf0(auStack_128);
  *(undefined4 *)param_2[2] = *(undefined4 *)((longlong)param_2 + 0x1c);
  fVar18 = _DAT_142e3b1d8;
  fVar17 = _UNK_142e37b08;
  fVar16 = _UNK_142e37b04;
  fVar15 = _DAT_142e37b00;
  fVar14 = _DAT_142e36f50;
  puVar7 = (ulonglong *)*param_2;
  fVar4 = *(float *)(*param_3 + 0x28);
  lVar23 = *param_1;
  lVar8 = param_1[1];
  uVar6 = *(undefined4 *)((longlong)param_1 + 0x14);
  puVar39 = *(uint **)(lVar23 + 0xf8);
  puVar2 = puVar39 + *(longlong *)(lVar23 + 0x100);
  cVar5 = *(char *)(lVar23 + 0x108);
  lStack_1c0 = 0;
  lStack_160 = 8;
  lStack_1a0 = 0;
  lVar30 = 0;
  lVar37 = 0;
  uVar29 = 0;
  fVar42 = _DAT_142e36f34;
  fVar49 = _DAT_142f46980;
  fVar52 = _UNK_142f46984;
  fVar57 = _UNK_142f46988;
  fVar43 = _DAT_142f46970;
  fVar44 = _UNK_142f46974;
  fVar45 = _UNK_142f46978;
LAB_14294a21b:
  if (cVar5 == '\0') {
    if (uVar29 == (uint)lVar37) {
      if (puVar39 == puVar2) {
        return;
      }
      while( true ) {
        lVar37 = *(longlong *)(*(longlong *)(lVar8 + 0x100) + 0x58 + (ulonglong)*puVar39 * 0xa0);
        if (lVar37 != 0) break;
        puVar39 = puVar39 + 1;
        if (puVar39 == puVar2) {
          return;
        }
      }
      lVar24 = *(longlong *)(lVar8 + 0x100) + (ulonglong)*puVar39 * 0xa0;
      uVar33 = (ulonglong)*(uint *)(lVar24 + 0x94);
      lVar25 = *(longlong *)(lVar8 + 0x1a0);
      lVar30 = lVar25 + uVar33 * 0x48;
      lVar28 = *(longlong *)(lVar25 + 0x38 + uVar33 * 0x48);
      if (*(ulonglong *)(lVar23 + 0x110) < *(ulonglong *)(lVar25 + 0x40 + uVar33 * 0x48)) {
        uVar33 = *(ulonglong *)(lVar28 + *(ulonglong *)(lVar23 + 0x110) * 8);
        lVar25 = *(longlong *)(lVar30 + 0x18);
        if (uVar33 == 0) goto LAB_14294a3c1;
        lStack_1c0 = *(longlong *)(lVar25 + 0x10 + ~uVar33 * 0x30);
      }
      else {
        lVar25 = *(longlong *)(lVar30 + 0x18);
LAB_14294a3c1:
        lStack_1c0 = 0;
      }
      puVar39 = puVar39 + 1;
      lVar30 = ~*(ulonglong *)(lVar28 + *(longlong *)(lVar23 + 0x118) * 8) * 0x30;
      lStack_1a0 = *(longlong *)(lVar25 + 0x10 + lVar30);
      lStack_180 = *(longlong *)(lVar25 + 0x28 + lVar30);
      lVar28 = ~*(ulonglong *)(lVar28 + *(longlong *)(lVar23 + 0x120) * 8) * 0x30;
      lVar30 = *(longlong *)(lVar25 + 0x10 + lVar28);
      lStack_188 = *(longlong *)(lVar25 + 0x28 + lVar28);
      lStack_160 = *(longlong *)(lVar24 + 0x50);
      uVar29 = 0;
      uVar33 = 0;
    }
    else {
      uVar33 = (ulonglong)uVar29;
    }
    uVar22 = ~*(uint *)(lStack_160 + 8 + uVar33 * 0x10);
  }
  else {
    uVar22 = uVar29;
    if (uVar29 == (uint)lVar37) {
      do {
        if (puVar39 == puVar2) {
          return;
        }
        uVar29 = *puVar39;
        puVar39 = puVar39 + 1;
        lVar37 = *(longlong *)(*(longlong *)(lVar8 + 0x1a0) + 0x10 + (ulonglong)uVar29 * 0x48);
      } while (lVar37 == 0);
      lVar30 = *(longlong *)(lVar8 + 0x1a0) + (ulonglong)uVar29 * 0x48;
      lVar25 = *(longlong *)(lVar30 + 0x38);
      if (*(ulonglong *)(lVar23 + 0x110) < *(ulonglong *)(lVar30 + 0x40)) {
        uVar33 = *(ulonglong *)(lVar25 + *(ulonglong *)(lVar23 + 0x110) * 8);
        lVar28 = *(longlong *)(lVar30 + 0x18);
        if (uVar33 == 0) goto LAB_14294a357;
        lStack_1c0 = *(longlong *)(lVar28 + 0x10 + ~uVar33 * 0x30);
      }
      else {
        lVar28 = *(longlong *)(lVar30 + 0x18);
LAB_14294a357:
        lStack_1c0 = 0;
      }
      lVar30 = ~*(ulonglong *)(lVar25 + *(longlong *)(lVar23 + 0x118) * 8) * 0x30;
      lStack_1a0 = *(longlong *)(lVar28 + 0x10 + lVar30);
      lStack_180 = *(longlong *)(lVar28 + 0x28 + lVar30);
      lVar25 = ~*(ulonglong *)(lVar25 + *(longlong *)(lVar23 + 0x120) * 8) * 0x30;
      lVar30 = *(longlong *)(lVar28 + 0x10 + lVar25);
      lStack_188 = *(longlong *)(lVar28 + 0x28 + lVar25);
      uVar29 = 0;
      uVar22 = uVar29;
    }
  }
  uVar33 = (ulonglong)uVar22;
  pfVar38 = (float *)(uVar33 * 0x30 + lStack_1c0);
  lVar25 = uVar33 * 0x100 + lStack_1a0;
  puVar3 = (undefined4 *)(lStack_180 + uVar33 * 4);
  puStack_168 = (undefined4 *)(lStack_188 + uVar33 * 4);
  piVar31 = (int *)(uVar33 * 0x10 + lVar30);
  uVar29 = uVar29 + 1;
  *puVar3 = uVar6;
  if (*(char *)(lVar25 + 0xe0) == '\0') goto LAB_14294a4e0;
  fVar40 = (float)*(undefined8 *)(lVar25 + 0xe4) - fVar4;
  fVar48 = (float)((ulonglong)*(undefined8 *)(lVar25 + 0xe4) >> 0x20) - fVar4;
  *(ulonglong *)(lVar25 + 0xe4) = CONCAT44(fVar48,fVar40);
  if (fVar40 <= 0.0) {
    if (*(char *)(lVar25 + 0xe1) != '\0') goto LAB_14294a5da;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = *puVar7;
    uVar33 = SUB168(auVar12 * ZEXT816(0x4385df649fccf645),0);
    uVar34 = puVar7[1] * 0x4385df649fccf645 +
             SUB168(auVar12 * ZEXT816(0x4385df649fccf645),8) + *puVar7 * 0x2360ed051fc65da4;
    puVar7[1] = uVar34;
    uVar35 = uVar34 ^ uVar33;
    bVar26 = (byte)(uVar34 >> 0x3a);
    *puVar7 = uVar33;
    uVar33 = (ulonglong)
             (uint)(((float)(((uint)(uVar35 >> bVar26) | (uint)(uVar35 << 0x40 - bVar26)) >> 9 |
                            0x3f800000) + fVar42) * fVar14 + fVar14);
    uVar21 = 0;
    goto LAB_14294aad7;
  }
  if ((0.0 < fVar48) || (*(char *)(lVar25 + 0xe1) != '\0')) {
LAB_14294a5da:
    fVar40 = 0.0;
    if ((*piVar31 == 1) &&
       (fVar40 = _DAT_142e3c670,
       _DAT_1433096ec <=
       ((float)piVar31[3] - pfVar38[6]) * ((float)piVar31[3] - pfVar38[6]) +
       ((float)piVar31[2] - pfVar38[5]) * ((float)piVar31[2] - pfVar38[5]) +
       ((float)piVar31[1] - pfVar38[4]) * ((float)piVar31[1] - pfVar38[4]))) goto LAB_14294a21b;
  }
  else {
    fVar40 = 0.0;
    if (*piVar31 != 0) {
      fVar40 = _DAT_142e3c670;
    }
  }
  *(undefined4 *)(lVar25 + 0xe8) = 0x3dcccccd;
  uVar33 = *puVar7;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = uVar33;
  uVar34 = puVar7[1] * 0x4385df649fccf645 +
           SUB168(auVar10 * ZEXT816(0x4385df649fccf645),8) + uVar33 * 0x2360ed051fc65da4;
  uVar35 = uVar34 ^ SUB168(auVar10 * ZEXT816(0x4385df649fccf645),0);
  bVar26 = (byte)(uVar34 >> 0x3a);
  auVar11._8_8_ = 0;
  auVar11._0_8_ = uVar33;
  uVar34 = SUB168(auVar11 * ZEXT816(0x529ed9eb20e0ae99),0);
  uVar33 = puVar7[1] * 0x529ed9eb20e0ae99 +
           SUB168(auVar11 * ZEXT816(0x529ed9eb20e0ae99),8) + uVar33 * 0x17bce35bdf69743c;
  *puVar7 = uVar34;
  puVar7[1] = uVar33;
  uVar34 = uVar33 ^ uVar34;
  bVar27 = (byte)(uVar33 >> 0x3a);
  fVar48 = (float)(((uint)(uVar34 >> bVar27) | (uint)(uVar34 << 0x40 - bVar27)) >> 9 | 0x3f800000) +
           fVar42;
  uVar41 = pdb_140de8f60(CONCAT44(fVar48,(float)(((uint)(uVar35 >> bVar26) |
                                                 (uint)(uVar35 << 0x40 - bVar26)) >> 9 | 0x3f800000)
                                         + fVar42));
  uStack_178 = CONCAT44(fVar48,uVar41);
  pdb_140df4520(auStack_158,&uStack_178);
  fVar42 = *pfVar38;
  fVar48 = pfVar38[1];
  fVar13 = pfVar38[2];
  fVar50 = pfVar38[3];
  fVar54 = fVar13 * fVar13;
  fVar55 = fVar50 * fVar50;
  fVar56 = fVar48 * fVar48 + fVar42 * fVar42;
  fVar51 = fVar13 * fVar17 + fVar48 * fVar16 + fVar42 * fVar15;
  fVar51 = fVar51 + fVar51;
  fVar50 = fVar50 + fVar50;
  uStack_178 = CONCAT44(fVar50 * (fVar13 * fVar44 - fVar42 * fVar52) +
                        fVar51 * fVar48 + (fVar55 - (fVar56 + fVar54)) * fVar16,
                        fVar50 * (fVar48 * fVar43 - fVar13 * fVar49) +
                        fVar51 * fVar42 + (fVar55 - (fVar56 + fVar54)) * fVar15);
  fStack_170 = fVar50 * (fVar42 * fVar45 - fVar48 * fVar57) +
               fVar51 * fVar13 + (fVar55 - (fVar56 + fVar54)) * fVar17;
  pdb_140df45c0(auStack_148,&uStack_178);
  fVar57 = fVar40 * fStack_140 + fStack_150;
  fVar42 = auStack_158._0_4_ + auStack_148._0_4_ * fVar40;
  fVar49 = auStack_158._4_4_ + auStack_148._4_4_ * fVar40;
  fVar52 = _DAT_142e36f28 / SQRT(fVar57 * fVar57 + fVar49 * fVar49 + fVar42 * fVar42);
  bVar19 = (int)fVar52 - 1U < 0x7fffff ||
           (int)ABS(fVar52) - 0x800000U < 0x7f000000 && -1 < (int)fVar52;
  if (bVar19) {
    fVar57 = fVar57 * fVar52;
  }
  else {
    fVar57 = 0.0;
  }
  uVar22 = (uint)bVar19;
  fVar44 = (float)*(undefined8 *)(pfVar38 + 4);
  fVar45 = (float)((ulonglong)*(undefined8 *)(pfVar38 + 4) >> 0x20);
  fVar43 = pfVar38[6];
  fVar42 = (float)((int)(uVar22 << 0x1f) >> 0x1f & (uint)(fVar42 * fVar52)) + fVar44;
  fVar49 = (float)((int)(uVar22 << 0x1f) >> 0x1f & (uint)(fVar49 * fVar52)) + fVar45;
  fVar57 = fVar57 + fVar43;
  cVar20 = pdb_140a31af0(CONCAT44(fVar49,fVar42 * _DAT_1436008a0),fVar57 * _DAT_1436008a0);
  if (((cVar20 == '\0') &&
      (auVar46._0_4_ = fVar57 * fVar57, auVar46._4_4_ = fVar43 * fVar43, auVar46._8_8_ = 0,
      auVar53._0_4_ = fVar42 * fVar42 + auVar46._0_4_,
      auVar53._4_4_ = fVar44 * fVar44 + auVar46._4_4_, auVar53._8_4_ = fVar49 * fVar49 + 0.0,
      auVar53._12_4_ = fVar45 * fVar45 + 0.0, auVar47 = sqrtps(auVar46,auVar53),
      auVar47._4_4_ <= auVar47._0_4_)) ||
     (fVar52 = (float)pdb_140a7d8d0(&uStack_138), fVar52 <= fVar14)) {
LAB_14294aa1f:
    *puStack_168 = uVar6;
    *piVar31 = 0;
  }
  else {
    fVar52 = (float)pdb_140a7d8d0(auStack_128);
    fVar43 = (float)pdb_140a7d8d0(auStack_118);
    fVar44 = (float)pdb_140a7d8d0(auStack_108);
    fVar45 = (float)pdb_140a7d8d0(auStack_f8);
    fVar45 = fVar45 + fVar44 + fVar43 + fVar52;
    fVar52 = 0.0;
    if (0.0 <= fVar45) {
      fVar52 = fVar45;
    }
    fVar43 = _DAT_142e36f28;
    if (fVar52 <= _DAT_142e36f28) {
      fVar43 = fVar52;
    }
    if (fVar18 <= fVar43) goto LAB_14294aa1f;
    *puStack_168 = uVar6;
    *piVar31 = 1;
    *(ulonglong *)(piVar31 + 1) = CONCAT44(fVar49,fVar42);
    piVar31[3] = (int)fVar57;
  }
  *(undefined1 *)(lVar25 + 0xe1) = 0;
  fVar42 = _DAT_142e36f34;
  fVar49 = _DAT_142f46980;
  fVar52 = _UNK_142f46984;
  fVar57 = _UNK_142f46988;
  fVar43 = _DAT_142f46970;
  fVar44 = _UNK_142f46974;
  fVar45 = _UNK_142f46978;
  goto LAB_14294a21b;
LAB_14294a4e0:
  fVar40 = *(float *)(lVar25 + 0xe4) - fVar4;
  *(float *)(lVar25 + 0xe4) = fVar40;
  if (fVar40 <= 0.0) {
    uVar33 = *puVar7;
    auVar47._8_8_ = 0;
    auVar47._0_8_ = uVar33;
    uVar35 = puVar7[1] * 0x4385df649fccf645 +
             SUB168(auVar47 * ZEXT816(0x4385df649fccf645),8) + uVar33 * 0x2360ed051fc65da4;
    auVar9._8_8_ = 0;
    auVar9._0_8_ = uVar33;
    uVar34 = SUB168(auVar9 * ZEXT816(0x529ed9eb20e0ae99),0);
    uVar36 = puVar7[1] * 0x529ed9eb20e0ae99 +
             SUB168(auVar9 * ZEXT816(0x529ed9eb20e0ae99),8) + uVar33 * 0x17bce35bdf69743c;
    *puVar7 = uVar34;
    puVar7[1] = uVar36;
    uVar34 = uVar36 ^ uVar34;
    uVar33 = uVar35 ^ SUB168(auVar47 * ZEXT816(0x4385df649fccf645),0);
    bVar27 = (byte)(uVar36 >> 0x3a);
    bVar26 = (byte)(uVar35 >> 0x3a);
    uVar33 = CONCAT44(((float)(((uint)(uVar34 >> bVar27) | (uint)(uVar34 << 0x40 - bVar27)) >> 9 |
                              (uint)_UNK_142e37954) + _UNK_142e37964) * _UNK_1430067c4 +
                      _UNK_142e37954,
                      ((float)(((uint)(uVar33 >> bVar26) | (uint)(uVar33 << 0x40 - bVar26)) >> 9 |
                              (uint)_DAT_142e37950) + _DAT_142e37960) * _DAT_1430067c0 +
                      _DAT_142e37950);
    uVar21 = 1;
LAB_14294aad7:
    *puVar3 = uVar6;
    *(undefined1 *)(lVar25 + 0xe0) = uVar21;
    *(undefined1 *)(lVar25 + 0xe1) = 0;
    *(ulonglong *)(lVar25 + 0xe4) = uVar33;
  }
  goto LAB_14294a21b;
}

