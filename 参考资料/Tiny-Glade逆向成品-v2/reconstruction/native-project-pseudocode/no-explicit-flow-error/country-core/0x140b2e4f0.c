// VA 0x140b2e4f0, PDB extent 763 bytes
// country_core::resources::walls::material_stats::MaterialStats::max_pillar_movement
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/material_stats.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::walls::material_stats::MaterialStats::max_pillar_movement
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/material_stats.rs
   Extent: 763 */

char pdb_140b2e4f0(char *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auVar13 [16];
  char cVar14;
  char *pcVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  int iVar19;
  ulonglong uVar20;
  longlong lVar21;
  bool bVar22;
  uint uVar23;
  float fVar24;
  float fVar28;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar29;
  float fVar31;
  undefined1 auVar30 [16];
  undefined1 auVar32 [16];
  float fVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  
  pcVar15 = param_1 + 0x68;
  LOCK();
  bVar22 = param_1[0x68] == '\0';
  if (bVar22) {
    param_1[0x68] = '\x01';
  }
  UNLOCK();
  if (!bVar22) {
    pdb_142dbd1a0(pcVar15,param_2,1000000000);
  }
  pdb_140e9a150();
  lVar11 = *(longlong *)(param_1 + 0x78);
  uVar18 = *(ulonglong *)(param_1 + 0x80);
  LOCK();
  cVar14 = *param_1;
  if (cVar14 == '\0') {
    *param_1 = '\x01';
  }
  UNLOCK();
  if (cVar14 != '\0') {
    pdb_142dbd1a0(param_1);
  }
  pdb_140e9a150(param_1);
  if (*(ulonglong *)(param_1 + 0x18) < uVar18) {
    uVar18 = *(ulonglong *)(param_1 + 0x18);
  }
  if (uVar18 != 0) {
    lVar12 = *(longlong *)(param_1 + 0x10);
    if (uVar18 < 8) {
      fVar29 = 0.0;
      uVar17 = 0;
    }
    else {
      uVar16 = uVar18 & 0xfffffffffffffff8;
      auVar30 = ZEXT816(0);
      uVar20 = 0xfffffffffffffff8;
      auVar34 = ZEXT816(0);
      do {
        auVar27 = auVar34;
        fVar29 = auVar30._0_4_;
        fVar24 = auVar30._4_4_;
        fVar28 = auVar30._8_4_;
        fVar31 = auVar30._12_4_;
        pfVar1 = (float *)(lVar12 + 0x40 + uVar20 * 8);
        pfVar2 = (float *)(lVar12 + 0x50 + uVar20 * 8);
        pfVar3 = (float *)(lVar12 + 0x60 + uVar20 * 8);
        pfVar4 = (float *)(lVar12 + 0x70 + uVar20 * 8);
        pfVar5 = (float *)(lVar11 + 0x40 + uVar20 * 8);
        pfVar6 = (float *)(lVar11 + 0x50 + uVar20 * 8);
        pfVar7 = (float *)(lVar11 + 0x60 + uVar20 * 8);
        pfVar8 = (float *)(lVar11 + 0x70 + uVar20 * 8);
        auVar34._0_4_ =
             (*pfVar1 - *pfVar5) * (*pfVar1 - *pfVar5) +
             (pfVar1[1] - pfVar5[1]) * (pfVar1[1] - pfVar5[1]);
        auVar34._4_4_ =
             (pfVar1[2] - pfVar5[2]) * (pfVar1[2] - pfVar5[2]) +
             (pfVar1[3] - pfVar5[3]) * (pfVar1[3] - pfVar5[3]);
        auVar34._8_4_ =
             (*pfVar2 - *pfVar6) * (*pfVar2 - *pfVar6) +
             (pfVar2[1] - pfVar6[1]) * (pfVar2[1] - pfVar6[1]);
        auVar34._12_4_ =
             (pfVar2[2] - pfVar6[2]) * (pfVar2[2] - pfVar6[2]) +
             (pfVar2[3] - pfVar6[3]) * (pfVar2[3] - pfVar6[3]);
        auVar35._0_4_ =
             (*pfVar3 - *pfVar7) * (*pfVar3 - *pfVar7) +
             (pfVar3[1] - pfVar7[1]) * (pfVar3[1] - pfVar7[1]);
        auVar35._4_4_ =
             (pfVar3[2] - pfVar7[2]) * (pfVar3[2] - pfVar7[2]) +
             (pfVar3[3] - pfVar7[3]) * (pfVar3[3] - pfVar7[3]);
        auVar35._8_4_ =
             (*pfVar4 - *pfVar8) * (*pfVar4 - *pfVar8) +
             (pfVar4[1] - pfVar8[1]) * (pfVar4[1] - pfVar8[1]);
        auVar35._12_4_ =
             (pfVar4[2] - pfVar8[2]) * (pfVar4[2] - pfVar8[2]) +
             (pfVar4[3] - pfVar8[3]) * (pfVar4[3] - pfVar8[3]);
        auVar34 = sqrtps(auVar34,auVar34);
        auVar35 = sqrtps(auVar35,auVar35);
        auVar36._0_4_ = (uint)auVar34._0_4_ & -(uint)NAN(auVar27._0_4_);
        auVar36._4_4_ = (uint)auVar34._4_4_ & -(uint)NAN(auVar27._4_4_);
        auVar36._8_4_ = (uint)auVar34._8_4_ & -(uint)NAN(auVar27._8_4_);
        auVar36._12_4_ = (uint)auVar34._12_4_ & -(uint)NAN(auVar27._12_4_);
        auVar38 = maxps(auVar34,auVar27);
        auVar25._0_4_ = ~-(uint)NAN(auVar27._0_4_) & auVar38._0_4_;
        auVar25._4_4_ = ~-(uint)NAN(auVar27._4_4_) & auVar38._4_4_;
        auVar25._8_4_ = ~-(uint)NAN(auVar27._8_4_) & auVar38._8_4_;
        auVar25._12_4_ = ~-(uint)NAN(auVar27._12_4_) & auVar38._12_4_;
        uVar23 = -(uint)NAN(fVar31);
        auVar37._0_4_ = (uint)auVar35._0_4_ & -(uint)NAN(fVar29);
        auVar37._4_4_ = (uint)auVar35._4_4_ & -(uint)NAN(fVar24);
        auVar37._8_4_ = (uint)auVar35._8_4_ & -(uint)NAN(fVar28);
        auVar37._12_4_ = (uint)auVar35._12_4_ & uVar23;
        auVar38._4_4_ = -(uint)(NAN(auVar34._4_4_) || NAN(auVar35._4_4_));
        auVar38._0_4_ = -(uint)(NAN(auVar34._0_4_) || NAN(auVar35._0_4_));
        auVar38._8_4_ = -(uint)(NAN(auVar34._8_4_) || NAN(auVar35._8_4_));
        auVar38._12_4_ = -(uint)(NAN(auVar34._12_4_) || NAN(auVar35._12_4_));
        auVar34 = maxps(auVar35,auVar30);
        auVar30._0_4_ = ~-(uint)NAN(fVar29) & auVar34._0_4_;
        auVar30._4_4_ = ~-(uint)NAN(fVar24) & auVar34._4_4_;
        auVar30._8_4_ = ~-(uint)NAN(fVar28) & auVar34._8_4_;
        auVar30._12_4_ = ~uVar23 & auVar34._12_4_;
        auVar30 = auVar30 | auVar37;
        iVar19 = movmskps((int)param_4,auVar38);
        uVar17 = uVar20 + 8;
        if (iVar19 != 0) break;
        lVar21 = uVar20 + (8 - uVar16);
        param_4 = 0;
        uVar20 = uVar17;
        auVar34 = auVar25 | auVar36;
      } while (lVar21 != -8);
      if ((char)iVar19 == '\0') {
        fVar29 = auVar30._0_4_;
        fVar24 = auVar30._4_4_;
        fVar28 = auVar30._8_4_;
        uVar17 = uVar16;
        fVar31 = auVar30._12_4_;
        auVar27 = auVar25 | auVar36;
      }
      auVar26._4_4_ = fVar24;
      auVar26._0_4_ = fVar29;
      auVar26._8_4_ = fVar28;
      auVar26._12_4_ = fVar31;
      auVar34 = maxps(auVar26,auVar27);
      auVar32._0_4_ = ~-(uint)NAN(auVar27._0_4_) & auVar34._0_4_;
      auVar32._4_4_ = ~-(uint)NAN(auVar27._4_4_) & auVar34._4_4_;
      auVar32._8_4_ = ~-(uint)NAN(auVar27._8_4_) & auVar34._8_4_;
      auVar32._12_4_ = ~-(uint)NAN(auVar27._12_4_) & auVar34._12_4_;
      auVar13._4_4_ = (uint)fVar24 & -(uint)NAN(auVar27._4_4_);
      auVar13._0_4_ = (uint)fVar29 & -(uint)NAN(auVar27._0_4_);
      auVar13._8_4_ = (uint)fVar28 & -(uint)NAN(auVar27._8_4_);
      auVar13._12_4_ = (uint)fVar31 & -(uint)NAN(auVar27._12_4_);
      auVar32 = auVar32 | auVar13;
      fVar24 = auVar32._0_4_;
      fVar28 = auVar32._4_4_;
      fVar31 = auVar32._8_4_;
      fVar33 = auVar32._12_4_;
      auVar27._0_8_ = auVar32._8_8_;
      auVar27._8_4_ = fVar31;
      auVar27._12_4_ = fVar33;
      fVar29 = fVar28;
      if (fVar28 <= fVar24) {
        fVar29 = fVar24;
      }
      fVar29 = (float)(~-(uint)NAN(fVar24) & (uint)fVar29 | -(uint)NAN(fVar24) & (uint)fVar28);
      if (fVar31 <= fVar29) {
        auVar27._0_4_ = fVar29;
      }
      fVar24 = (float)(-(uint)NAN(fVar29) & (uint)fVar31 | ~-(uint)NAN(fVar29) & auVar27._0_4_);
      fVar29 = fVar33;
      if (fVar33 <= fVar24) {
        fVar29 = fVar24;
      }
      fVar29 = (float)(-(uint)NAN(fVar24) & (uint)fVar33 | ~-(uint)NAN(fVar24) & (uint)fVar29);
      if ((uVar18 == uVar16) && ((char)iVar19 == '\0')) goto LAB_140b2e723;
    }
    do {
      uVar9 = *(undefined8 *)(lVar12 + uVar17 * 8);
      uVar10 = *(undefined8 *)(lVar11 + uVar17 * 8);
      uVar17 = uVar17 + 1;
      fVar24 = (float)uVar9 - (float)uVar10;
      fVar28 = (float)((ulonglong)uVar9 >> 0x20) - (float)((ulonglong)uVar10 >> 0x20);
      fVar28 = SQRT(fVar28 * fVar28 + fVar24 * fVar24);
      fVar24 = fVar28;
      if (fVar28 <= fVar29) {
        fVar24 = fVar29;
      }
      fVar29 = (float)(~-(uint)NAN(fVar29) & (uint)fVar24 | -(uint)NAN(fVar29) & (uint)fVar28);
    } while (uVar18 != uVar17);
  }
LAB_140b2e723:
  pdb_140e9a350();
  LOCK();
  cVar14 = *param_1;
  if (cVar14 == '\x01') {
    *param_1 = '\0';
  }
  UNLOCK();
  if (cVar14 != '\x01') {
    pdb_142dbcef0(param_1,0);
  }
  pdb_140e9a350();
  LOCK();
  cVar14 = *pcVar15;
  bVar22 = cVar14 == '\x01';
  if (bVar22) {
    *pcVar15 = '\0';
    cVar14 = '\x01';
  }
  UNLOCK();
  if (!bVar22) {
    cVar14 = pdb_142dbcef0(pcVar15,0);
  }
  return cVar14;
}

