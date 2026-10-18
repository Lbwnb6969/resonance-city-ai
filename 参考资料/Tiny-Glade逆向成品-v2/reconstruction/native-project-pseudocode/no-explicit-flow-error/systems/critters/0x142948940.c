// VA 0x142948940, PDB extent 4335 bytes
// system_critters::sheep::sheep_behavior::update_sheep_goals
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/critters/src/sheep/sheep_behavior.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_critters::sheep::sheep_behavior::update_sheep_goals
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/critters/src/sheep/sheep_behavior.rs
   Extent: 4335 */

void pdb_142948940(longlong *param_1,longlong *param_2,longlong *param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8)

{
  undefined8 *puVar1;
  float fVar2;
  undefined8 uVar3;
  char cVar4;
  char cVar5;
  undefined4 uVar6;
  ulonglong *puVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  bool bVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  char cVar23;
  uint uVar24;
  longlong lVar25;
  undefined8 *puVar26;
  longlong lVar27;
  longlong lVar28;
  ulonglong uVar29;
  byte bVar30;
  byte bVar31;
  longlong lVar32;
  int *piVar33;
  undefined8 uVar34;
  undefined1 uVar35;
  ulonglong uVar36;
  ulonglong uVar37;
  longlong lVar38;
  longlong lVar39;
  uint *puVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float unaff_XMM12_Da;
  float unaff_XMM13_Da;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  undefined8 uStack_1e0;
  float fStack_1d8;
  longlong lStack_1d0;
  longlong lStack_1c8;
  ulonglong uStack_1c0;
  undefined8 uStack_1b8;
  float fStack_1b0;
  longlong lStack_1a8;
  float *pfStack_1a0;
  undefined4 *puStack_198;
  undefined4 *puStack_190;
  longlong lStack_188;
  longlong lStack_180;
  longlong lStack_178;
  longlong lStack_170;
  uint *puStack_168;
  int *piStack_160;
  undefined8 uStack_158;
  longlong lStack_150;
  longlong lStack_148;
  int *piStack_140;
  float fStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 uStack_128;
  longlong lStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 auStack_108 [8];
  float fStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  
  *(undefined4 *)param_2[2] = *(undefined4 *)((longlong)param_2 + 0x1c);
  puVar7 = (ulonglong *)*param_2;
  lVar25 = pdb_1406d0830(*param_7);
  puVar1 = (undefined8 *)(lVar25 + 0x20);
  puVar26 = (undefined8 *)(lVar25 + 0x28);
  if (*(char *)(lVar25 + 0x298) == '\0') {
    puVar26 = (undefined8 *)(lVar25 + 0x10);
    puVar1 = (undefined8 *)(lVar25 + 8);
  }
  uStack_110 = *puVar26;
  uStack_118 = *puVar1;
  lVar25 = pdb_1406d0830(*param_6);
  fVar22 = _DAT_142e3787c;
  fVar21 = _DAT_142e36f34;
  fVar20 = _DAT_142e36f28;
  puVar1 = (undefined8 *)(lVar25 + 0x20);
  puVar26 = (undefined8 *)(lVar25 + 0x28);
  if (*(char *)(lVar25 + 0x298) == '\0') {
    puVar26 = (undefined8 *)(lVar25 + 0x10);
    puVar1 = (undefined8 *)(lVar25 + 8);
  }
  uStack_f0 = *puVar26;
  uStack_f8 = *puVar1;
  lStack_120 = *param_3;
  fVar2 = *(float *)(lStack_120 + 0x28);
  uVar50 = 0;
  uVar51 = 0;
  uVar52 = 0;
  lStack_1a8 = *param_1;
  lVar25 = param_1[1];
  uVar6 = *(undefined4 *)((longlong)param_1 + 0x14);
  puVar40 = *(uint **)(lStack_1a8 + 0xf8);
  puStack_168 = puVar40 + *(longlong *)(lStack_1a8 + 0x100);
  cVar4 = *(char *)(lStack_1a8 + 0x108);
  uStack_128 = *param_8;
  uStack_158 = *param_4;
  lStack_180 = 0;
  lStack_148 = 8;
  lStack_188 = 0;
  lStack_1c8 = 0;
  lStack_1d0 = 0;
  lVar39 = 0;
  uStack_1c0 = 0;
  fVar44 = _DAT_142f3e570;
  fVar43 = _DAT_142e37ad8;
  fVar46 = fVar2;
  lStack_150 = lVar25;
  do {
    uVar3 = uStack_128;
    if (cVar4 == '\0') {
      if ((int)uStack_1c0 == (int)lVar39) {
        do {
          if (puVar40 == puStack_168) {
            return;
          }
          uVar24 = *puVar40;
          puVar40 = puVar40 + 1;
          lVar39 = *(longlong *)(*(longlong *)(lVar25 + 0x100) + 0x58 + (ulonglong)uVar24 * 0xa0);
        } while (lVar39 == 0);
        lVar27 = *(longlong *)(lVar25 + 0x100) + (ulonglong)uVar24 * 0xa0;
        uVar29 = (ulonglong)*(uint *)(lVar27 + 0x94);
        lVar28 = *(longlong *)(lVar25 + 0x1a0);
        lVar38 = lVar28 + uVar29 * 0x48;
        lVar32 = *(longlong *)(lVar28 + 0x38 + uVar29 * 0x48);
        uVar29 = *(ulonglong *)(lVar28 + 0x40 + uVar29 * 0x48);
        if (*(ulonglong *)(lStack_1a8 + 0x110) < uVar29) {
          uVar36 = *(ulonglong *)(lVar32 + *(ulonglong *)(lStack_1a8 + 0x110) * 8);
          lVar38 = *(longlong *)(lVar38 + 0x18);
          if (uVar36 == 0) goto LAB_142948d53;
          lStack_1c8 = *(longlong *)(lVar38 + 0x10 + ~uVar36 * 0x30);
          uVar36 = *(ulonglong *)(lStack_1a8 + 0x128);
          if (uVar36 < uVar29) goto LAB_142948d6d;
LAB_142948d8d:
          lStack_1d0 = 0;
        }
        else {
          lVar38 = *(longlong *)(lVar38 + 0x18);
LAB_142948d53:
          lStack_1c8 = 0;
          uVar36 = *(ulonglong *)(lStack_1a8 + 0x128);
          if (uVar29 <= uVar36) goto LAB_142948d8d;
LAB_142948d6d:
          uVar29 = *(ulonglong *)(lVar32 + uVar36 * 8);
          if (uVar29 == 0) goto LAB_142948d8d;
          lStack_1d0 = *(longlong *)(lVar38 + 0x10 + ~uVar29 * 0x30);
        }
        lVar28 = ~*(ulonglong *)(lVar32 + *(longlong *)(lStack_1a8 + 0x118) * 8) * 0x30;
        lStack_188 = *(longlong *)(lVar38 + 0x10 + lVar28);
        lStack_170 = *(longlong *)(lVar38 + 0x28 + lVar28);
        lVar28 = ~*(ulonglong *)(lVar32 + *(longlong *)(lStack_1a8 + 0x120) * 8) * 0x30;
        lStack_180 = *(longlong *)(lVar38 + 0x10 + lVar28);
        lStack_178 = *(longlong *)(lVar38 + 0x28 + lVar28);
        lStack_148 = *(longlong *)(lVar27 + 0x50);
        uStack_1c0 = 0;
        uVar29 = 0;
      }
      else {
        uVar29 = uStack_1c0 & 0xffffffff;
      }
      uVar29 = (ulonglong)~*(uint *)(lStack_148 + 8 + uVar29 * 0x10);
    }
    else {
      if ((int)uStack_1c0 == (int)lVar39) {
        do {
          if (puVar40 == puStack_168) {
            return;
          }
          uVar24 = *puVar40;
          puVar40 = puVar40 + 1;
          lVar39 = *(longlong *)(*(longlong *)(lVar25 + 0x1a0) + 0x10 + (ulonglong)uVar24 * 0x48);
        } while (lVar39 == 0);
        lVar38 = *(longlong *)(lVar25 + 0x1a0) + (ulonglong)uVar24 * 0x48;
        lVar28 = *(longlong *)(lVar38 + 0x38);
        uVar29 = *(ulonglong *)(lVar38 + 0x40);
        if (*(ulonglong *)(lStack_1a8 + 0x110) < uVar29) {
          uVar36 = *(ulonglong *)(lVar28 + *(ulonglong *)(lStack_1a8 + 0x110) * 8);
          lVar38 = *(longlong *)(lVar38 + 0x18);
          if (uVar36 == 0) goto LAB_142948c9c;
          lStack_1c8 = *(longlong *)(lVar38 + 0x10 + ~uVar36 * 0x30);
          uVar36 = *(ulonglong *)(lStack_1a8 + 0x128);
          if (uVar36 < uVar29) goto LAB_142948cb6;
LAB_142948cd6:
          lStack_1d0 = 0;
        }
        else {
          lVar38 = *(longlong *)(lVar38 + 0x18);
LAB_142948c9c:
          lStack_1c8 = 0;
          uVar36 = *(ulonglong *)(lStack_1a8 + 0x128);
          if (uVar29 <= uVar36) goto LAB_142948cd6;
LAB_142948cb6:
          uVar29 = *(ulonglong *)(lVar28 + uVar36 * 8);
          if (uVar29 == 0) goto LAB_142948cd6;
          lStack_1d0 = *(longlong *)(lVar38 + 0x10 + ~uVar29 * 0x30);
        }
        lVar32 = ~*(ulonglong *)(lVar28 + *(longlong *)(lStack_1a8 + 0x118) * 8) * 0x30;
        lStack_188 = *(longlong *)(lVar38 + 0x10 + lVar32);
        lStack_170 = *(longlong *)(lVar38 + 0x28 + lVar32);
        lVar28 = ~*(ulonglong *)(lVar28 + *(longlong *)(lStack_1a8 + 0x120) * 8) * 0x30;
        lStack_180 = *(longlong *)(lVar38 + 0x10 + lVar28);
        lStack_178 = *(longlong *)(lVar38 + 0x28 + lVar28);
        uStack_1c0 = 0;
      }
      uVar29 = uStack_1c0 & 0xffffffff;
    }
    pfStack_1a0 = (float *)(uVar29 * 0x30 + lStack_1c8);
    lVar38 = uVar29 * 0x68 + lStack_188;
    puStack_190 = (undefined4 *)(lStack_170 + uVar29 * 4);
    puStack_198 = (undefined4 *)(lStack_178 + uVar29 * 4);
    piStack_140 = (int *)(lStack_1d0 + uVar29 * 8);
    piVar33 = (int *)(uVar29 * 0x10 + lStack_180);
    *puStack_190 = uVar6;
    cVar5 = *(char *)(lVar38 + 8);
    uVar35 = 2;
    if (cVar5 != '\0') {
      cVar23 = pdb_140a36620(uStack_128);
      uVar34 = uStack_158;
      if (cVar23 == '\x03') {
        pdb_140a34500(&uStack_1b8,uVar3);
        pdb_140a344f0(&uStack_1e0,uVar3);
        fVar41 = (float)((ulonglong)uStack_1e0 >> 0x20);
        uStack_1e0 = CONCAT44((float)((ulonglong)uStack_1b8 >> 0x20) + fVar41 + fVar41,
                              (float)uStack_1b8 + (float)uStack_1e0 + (float)uStack_1e0);
        fStack_1d8 = fStack_1d8 + fStack_1d8 + fStack_1b0;
        uVar34 = uStack_158;
      }
      else {
        pdb_140a8e090(&uStack_1e0,uStack_158);
      }
      lVar25 = lStack_120;
      fStack_1b0 = fStack_1d8;
      uStack_1b8 = uStack_1e0;
      *puStack_198 = uVar6;
      *piVar33 = 1;
      *(undefined8 *)(piVar33 + 1) = uStack_1e0;
      piVar33[3] = (int)fStack_1d8;
      *(float *)(lVar38 + 0xc) = *(float *)(lVar38 + 0xc) - *(float *)(lStack_120 + 0x28);
      pdb_140a8e090(&uStack_1e0,uVar34);
      if (fVar22 <= SQRT((fStack_1d8 - pfStack_1a0[6]) * (fStack_1d8 - pfStack_1a0[6]) +
                         (uStack_1e0._4_4_ - pfStack_1a0[5]) * (uStack_1e0._4_4_ - pfStack_1a0[5]) +
                         ((float)uStack_1e0 - pfStack_1a0[4]) * ((float)uStack_1e0 - pfStack_1a0[4])
                        )) {
        fVar41 = *(float *)(lVar38 + 0xc);
      }
      else {
        fVar41 = *(float *)(lVar25 + 0x28) * _DAT_142e382d4 + *(float *)(lVar38 + 0xc);
        *(float *)(lVar38 + 0xc) = fVar41;
      }
      uVar35 = 0.0 <= fVar41;
      lVar25 = lStack_150;
      if ((bool)uVar35) {
        uVar29 = *puVar7;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = uVar29;
        uVar36 = puVar7[1] * 0x4385df649fccf645 +
                 SUB168(auVar9 * ZEXT816(0x4385df649fccf645),8) + uVar29 * 0x2360ed051fc65da4;
        uVar37 = uVar36 ^ SUB168(auVar9 * ZEXT816(0x4385df649fccf645),0);
        bVar30 = (byte)(uVar36 >> 0x3a);
        unaff_XMM13_Da =
             ((float)(((uint)(uVar37 >> bVar30) | (uint)(uVar37 << 0x40 - bVar30)) >> 9 | 0x3f800000
                     ) + fVar21) * fVar43 + _DAT_142e37adc;
        auVar10._8_8_ = 0;
        auVar10._0_8_ = uVar29;
        uVar36 = SUB168(auVar10 * ZEXT816(0x529ed9eb20e0ae99),0);
        uVar29 = puVar7[1] * 0x529ed9eb20e0ae99 +
                 SUB168(auVar10 * ZEXT816(0x529ed9eb20e0ae99),8) + uVar29 * 0x17bce35bdf69743c;
        puVar7[1] = uVar29;
        uVar37 = uVar29 ^ uVar36;
        bVar30 = (byte)(uVar29 >> 0x3a);
        *puVar7 = uVar36;
        unaff_XMM12_Da =
             ((float)(((uint)(uVar37 >> bVar30) | (uint)(uVar37 << 0x40 - bVar30)) >> 9 | 0x3f800000
                     ) + fVar21) * _DAT_142e3788c + fVar20;
      }
      else {
        *puStack_190 = uVar6;
        *(undefined4 *)(lVar38 + 8) = 0;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = *puVar7;
        uVar29 = SUB168(auVar8 * ZEXT816(0x4385df649fccf645),0);
        uVar36 = puVar7[1] * 0x4385df649fccf645 +
                 SUB168(auVar8 * ZEXT816(0x4385df649fccf645),8) + *puVar7 * 0x2360ed051fc65da4;
        puVar7[1] = uVar36;
        uVar37 = uVar36 ^ uVar29;
        bVar30 = (byte)(uVar36 >> 0x3a);
        *puVar7 = uVar29;
        unaff_XMM13_Da =
             ((float)(((uint)(uVar37 >> bVar30) | (uint)(uVar37 << 0x40 - bVar30)) >> 9 | 0x3f800000
                     ) + fVar21) * fVar44 + fVar20;
      }
    }
    uStack_1c0 = (ulonglong)((int)uStack_1c0 + 1);
    *puStack_190 = uVar6;
    if (*(char *)(lVar38 + 0x30) != '\x01') {
      fVar41 = *(float *)(lVar38 + 0x34) - fVar46;
      *(float *)(lVar38 + 0x34) = fVar41;
      if (0.0 < fVar41) goto LAB_142949989;
      uVar29 = *puVar7;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = uVar29;
      uVar36 = puVar7[1] * 0x4385df649fccf645 +
               SUB168(auVar11 * ZEXT816(0x4385df649fccf645),8) + uVar29 * 0x2360ed051fc65da4;
      uVar37 = uVar36 ^ SUB168(auVar11 * ZEXT816(0x4385df649fccf645),0);
      bVar30 = (byte)(uVar36 >> 0x3a);
      unaff_XMM13_Da =
           ((float)(((uint)(uVar37 >> bVar30) | (uint)(uVar37 << 0x40 - bVar30)) >> 9 | 0x3f800000)
           + fVar21) * fVar43 + _DAT_142e37adc;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = uVar29;
      uVar36 = SUB168(auVar12 * ZEXT816(0x529ed9eb20e0ae99),0);
      uVar29 = puVar7[1] * 0x529ed9eb20e0ae99 +
               SUB168(auVar12 * ZEXT816(0x529ed9eb20e0ae99),8) + uVar29 * 0x17bce35bdf69743c;
      puVar7[1] = uVar29;
      uVar37 = uVar29 ^ uVar36;
      bVar30 = (byte)(uVar29 >> 0x3a);
      *puVar7 = uVar36;
      unaff_XMM12_Da =
           ((float)(((uint)(uVar37 >> bVar30) | (uint)(uVar37 << 0x40 - bVar30)) >> 9 | 0x3f800000)
           + fVar21) * _DAT_142e3788c + fVar20;
      uVar35 = 1;
      goto LAB_14294999a;
    }
    fVar41 = (float)*(undefined8 *)(lVar38 + 0x34) - fVar2;
    fVar42 = (float)((ulonglong)*(undefined8 *)(lVar38 + 0x34) >> 0x20) - fVar2;
    *(ulonglong *)(lVar38 + 0x34) = CONCAT44(fVar42,fVar41);
    if (fVar41 <= 0.0) {
      if (*(char *)(lVar38 + 0x31) == '\0') {
        auVar18._8_8_ = 0;
        auVar18._0_8_ = *puVar7;
        uVar29 = SUB168(auVar18 * ZEXT816(0x4385df649fccf645),0);
        uVar36 = puVar7[1] * 0x4385df649fccf645 +
                 SUB168(auVar18 * ZEXT816(0x4385df649fccf645),8) + *puVar7 * 0x2360ed051fc65da4;
        puVar7[1] = uVar36;
        uVar37 = uVar36 ^ uVar29;
        bVar30 = (byte)(uVar36 >> 0x3a);
        *puVar7 = uVar29;
        unaff_XMM13_Da =
             ((float)(((uint)(uVar37 >> bVar30) | (uint)(uVar37 << 0x40 - bVar30)) >> 9 | 0x3f800000
                     ) + fVar21) * fVar44 + fVar20;
        uVar35 = 0;
        goto LAB_14294999a;
      }
LAB_1429492c6:
      fVar41 = _DAT_142e36f50;
      if ((*piVar33 == 1) &&
         (fVar41 = _DAT_142e3c670,
         _DAT_1433096ec <=
         ((float)piVar33[1] - pfStack_1a0[4]) * ((float)piVar33[1] - pfStack_1a0[4]) +
         ((float)piVar33[3] - pfStack_1a0[6]) * ((float)piVar33[3] - pfStack_1a0[6])))
      goto LAB_142949989;
    }
    else {
      if ((0.0 < fVar42) || (*(char *)(lVar38 + 0x31) != '\0')) goto LAB_1429492c6;
      fVar41 = *(float *)(&UNK_143600850 + (ulonglong)(*piVar33 == 0) * 4);
    }
    auVar13._8_8_ = 0;
    auVar13._0_8_ = *puVar7;
    uVar29 = SUB168(auVar13 * ZEXT816(0x4385df649fccf645),0);
    uVar36 = puVar7[1] * 0x4385df649fccf645 +
             SUB168(auVar13 * ZEXT816(0x4385df649fccf645),8) + *puVar7 * 0x2360ed051fc65da4;
    puVar7[1] = uVar36;
    uVar37 = uVar36 ^ uVar29;
    bVar30 = (byte)(uVar36 >> 0x3a);
    *puVar7 = uVar29;
    *(float *)(lVar38 + 0x38) =
         ((float)(((uint)(uVar37 >> bVar30) | (uint)(uVar37 << 0x40 - bVar30)) >> 9 | 0x3f800000) +
         fVar21) * _DAT_142e3788c + fVar20;
    uVar29 = *puVar7;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = uVar29;
    uVar36 = puVar7[1] * 0x4385df649fccf645 +
             SUB168(auVar14 * ZEXT816(0x4385df649fccf645),8) + uVar29 * 0x2360ed051fc65da4;
    uVar37 = uVar36 ^ SUB168(auVar14 * ZEXT816(0x4385df649fccf645),0);
    bVar30 = (byte)(uVar36 >> 0x3a);
    auVar15._8_8_ = 0;
    auVar15._0_8_ = uVar29;
    uVar36 = SUB168(auVar15 * ZEXT816(0x529ed9eb20e0ae99),0);
    uVar29 = puVar7[1] * 0x529ed9eb20e0ae99 +
             SUB168(auVar15 * ZEXT816(0x529ed9eb20e0ae99),8) + uVar29 * 0x17bce35bdf69743c;
    *puVar7 = uVar36;
    puVar7[1] = uVar29;
    uVar36 = uVar29 ^ uVar36;
    bVar31 = (byte)(uVar29 >> 0x3a);
    fVar44 = (float)(((uint)(uVar36 >> bVar31) | (uint)(uVar36 << 0x40 - bVar31)) >> 9 | 0x3f800000)
             + fVar21;
    piStack_160 = piVar33;
    fStack_138 = fVar46;
    uStack_134 = uVar50;
    uStack_130 = uVar51;
    uStack_12c = uVar52;
    uVar50 = pdb_140de8f60(CONCAT44(fVar44,(float)(((uint)(uVar37 >> bVar30) |
                                                   (uint)(uVar37 << 0x40 - bVar30)) >> 9 |
                                                  0x3f800000) + fVar21));
    uStack_1e0 = CONCAT44(fVar44,uVar50);
    pdb_140df4520(auStack_108,&uStack_1e0);
    fVar44 = *pfStack_1a0;
    fVar43 = pfStack_1a0[1];
    fVar46 = pfStack_1a0[2];
    fVar42 = pfStack_1a0[3];
    fVar47 = fVar46 * fVar46;
    fVar48 = fVar42 * fVar42;
    fVar49 = fVar43 * fVar43 + fVar44 * fVar44;
    fVar45 = fVar46 * _UNK_142e37b08 + fVar43 * _UNK_142e37b04 + fVar44 * _DAT_142e37b00;
    fVar45 = fVar45 + fVar45;
    fVar42 = fVar42 + fVar42;
    fStack_1d8 = (fVar42 * (fVar44 * _UNK_142f46978 - fVar43 * _UNK_142f46988) +
                 fVar45 * fVar46 + (fVar48 - (fVar49 + fVar47)) * _UNK_142e37b08) * _DAT_142e36f50;
    uStack_1e0 = CONCAT44((fVar42 * (fVar46 * _UNK_142f46974 - fVar44 * _UNK_142f46984) +
                          fVar45 * fVar43 + (fVar48 - (fVar49 + fVar47)) * _UNK_142e37b04) *
                          _UNK_142e36f64,
                          (fVar42 * (fVar43 * _DAT_142f46970 - fVar46 * _DAT_142f46980) +
                          fVar45 * fVar44 + (fVar48 - (fVar49 + fVar47)) * _DAT_142e37b00) *
                          _DAT_142e36f60);
    pdb_140df45c0(&uStack_1b8,&uStack_1e0);
    piVar33 = piStack_160;
    fVar42 = fVar41 * fStack_1b0 + fStack_100;
    fVar44 = auStack_108._0_4_ + (float)uStack_1b8 * fVar41;
    fVar43 = auStack_108._4_4_ + (float)((ulonglong)uStack_1b8 >> 0x20) * fVar41;
    fVar46 = fVar20 / SQRT(fVar42 * fVar42 + fVar43 * fVar43 + fVar44 * fVar44);
    bVar19 = (int)fVar46 - 1U < 0x7fffff ||
             (int)ABS(fVar46) - 0x800000U < 0x7f000000 && -1 < (int)fVar46;
    if (bVar19) {
      fVar42 = fVar42 * fVar46;
    }
    else {
      fVar42 = 0.0;
    }
    uVar24 = (uint)bVar19;
    fVar41 = (float)((int)(uVar24 << 0x1f) >> 0x1f & (uint)(fVar44 * fVar46));
    fVar43 = (float)((int)(uVar24 << 0x1f) >> 0x1f & (uint)(fVar43 * fVar46));
    fVar44 = *(float *)(lVar38 + 0x38);
    if (*_DAT_143ca4500 != '\0') {
      fVar45 = (float)*(undefined8 *)(pfStack_1a0 + 4);
      fVar47 = (float)((ulonglong)*(undefined8 *)(pfStack_1a0 + 4) >> 0x20);
      fVar46 = pfStack_1a0[6];
      if (_DAT_143600858 < SQRT(fVar46 * fVar46 + fVar47 * fVar47 + fVar45 * fVar45)) {
        uVar29 = *puVar7;
        auVar16._8_8_ = 0;
        auVar16._0_8_ = uVar29;
        uVar36 = puVar7[1] * 0x4385df649fccf645 +
                 SUB168(auVar16 * ZEXT816(0x4385df649fccf645),8) + uVar29 * 0x2360ed051fc65da4;
        uVar37 = uVar36 ^ SUB168(auVar16 * ZEXT816(0x4385df649fccf645),0);
        bVar30 = (byte)(uVar36 >> 0x3a);
        auVar17._8_8_ = 0;
        auVar17._0_8_ = uVar29;
        uVar36 = SUB168(auVar17 * ZEXT816(0x529ed9eb20e0ae99),0);
        uVar29 = puVar7[1] * 0x529ed9eb20e0ae99 +
                 SUB168(auVar17 * ZEXT816(0x529ed9eb20e0ae99),8) + uVar29 * 0x17bce35bdf69743c;
        *puVar7 = uVar36;
        puVar7[1] = uVar29;
        uVar36 = uVar29 ^ uVar36;
        bVar31 = (byte)(uVar29 >> 0x3a);
        fVar43 = (float)(((uint)(uVar36 >> bVar31) | (uint)(uVar36 << 0x40 - bVar31)) >> 9 |
                        0x3f800000) + fVar21;
        uVar50 = pdb_140de8f60(CONCAT44(fVar43,(float)(((uint)(uVar37 >> bVar30) |
                                                       (uint)(uVar37 << 0x40 - bVar30)) >> 9 |
                                                      0x3f800000) + fVar21));
        uStack_1b8 = CONCAT44(fVar43,uVar50);
        pdb_140df4520(&uStack_1e0,&uStack_1b8);
        fVar45 = (float)uStack_1e0 * _DAT_143600860 - fVar45;
        fVar47 = (float)((ulonglong)uStack_1e0 >> 0x20) * _UNK_143600864 - fVar47;
        fVar46 = fStack_1d8 * _DAT_142f95154 - fVar46;
        fVar42 = fVar20 / SQRT(fVar46 * fVar46 + fVar47 * fVar47 + fVar45 * fVar45);
        fVar41 = fVar42 * fVar45;
        fVar43 = fVar42 * fVar47;
        fVar42 = fVar42 * fVar46;
      }
    }
    fVar46 = pfStack_1a0[6];
    uVar3 = *(undefined8 *)(pfStack_1a0 + 4);
    fVar47 = (float)uVar3;
    fVar45 = fVar44 * fVar41 + fVar47;
    fVar42 = fVar42 * fVar44 + fVar46;
    fVar41 = SQRT(fVar42 * fVar42 + fVar45 * fVar45);
    if (((_DAT_14300e4bc <= fVar41) && (SQRT(fVar46 * fVar46 + fVar47 * fVar47) <= fVar41)) ||
       ((*piStack_140 == 2 &&
        ((fVar46 = (float)pdb_140a7d8d0(&uStack_f8), 0.0 < fVar46 ||
         ((fVar46 = (float)pdb_140a7d8d0(&uStack_118), fVar46 <= 0.0 &&
          (fVar46 = (float)pdb_140a7d8d0(&uStack_118), 0.0 < fVar46)))))))) {
      *puStack_198 = uVar6;
      *piVar33 = 0;
    }
    else {
      *puStack_198 = uVar6;
      *piVar33 = 1;
      *(ulonglong *)(piVar33 + 1) =
           CONCAT44(fVar44 * fVar43 + (float)((ulonglong)uVar3 >> 0x20),fVar45);
      piVar33[3] = (int)fVar42;
    }
    *(undefined1 *)(lVar38 + 0x31) = 0;
    fVar44 = _DAT_142f3e570;
    fVar43 = _DAT_142e37ad8;
    fVar46 = fStack_138;
    uVar50 = uStack_134;
    uVar51 = uStack_130;
    uVar52 = uStack_12c;
LAB_142949989:
    if (cVar5 != '\0') {
LAB_14294999a:
      *puStack_190 = uVar6;
      *(undefined1 *)(lVar38 + 0x30) = uVar35;
      *(undefined1 *)(lVar38 + 0x31) = 0;
      *(float *)(lVar38 + 0x34) = unaff_XMM13_Da;
      *(float *)(lVar38 + 0x38) = unaff_XMM12_Da;
    }
  } while( true );
}

