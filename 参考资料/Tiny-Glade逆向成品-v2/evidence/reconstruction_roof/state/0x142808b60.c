// Matched PDB: system_roof::simulate_roof_tile_for_audio::simulate_roof_tile_for_audio
// VA 0x142808b60, PDB extent 1772 bytes
// Ghidra pseudocode; types and unresolved calls are not original source.

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB: system_roof::simulate_roof_tile_for_audio::simulate_roof_tile_for_audio
   Extent: 1772 bytes. No whole-program auto-analysis. */

void pdb_142808b60(longlong *param_1,longlong *param_2,longlong *param_3)

{
  float *pfVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  uint *puVar5;
  char cVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  undefined8 uVar15;
  code *pcVar16;
  float fVar17;
  uint uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  char cVar24;
  undefined1 uVar25;
  ulonglong uVar26;
  longlong lVar27;
  longlong lVar28;
  longlong lVar29;
  uint *puVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  longlong lStack_178;
  longlong lStack_158;
  longlong lStack_140;
  undefined4 uStack_134;
  float fStack_130;
  undefined4 uStack_12c;
  float afStack_128 [2];
  longlong lStack_120;
  undefined4 *puStack_118;
  longlong lStack_110;
  undefined8 uStack_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 uStack_f8;
  undefined3 uStack_f0;
  undefined5 uStack_ed;
  
  fVar22 = _DAT_14359c140;
  fVar21 = _DAT_14359c134;
  fVar20 = _DAT_142e3b1d8;
  fVar19 = _DAT_142e37880;
  uVar18 = _DAT_142e377e0;
  fVar17 = _DAT_142e36f28;
  lVar9 = *param_3;
  if ((*(float *)(lVar9 + 0x28) == 0.0) && (!NAN(*(float *)(lVar9 + 0x28)))) {
    return;
  }
  lVar10 = *param_1;
  lVar11 = param_1[1];
  uVar7 = *(undefined4 *)((longlong)param_1 + 0x14);
  puVar30 = *(uint **)(lVar10 + 0xf8);
  puVar5 = puVar30 + *(longlong *)(lVar10 + 0x100);
  cVar6 = *(char *)(lVar10 + 0x108);
  uVar8 = *(undefined4 *)((longlong)param_2 + 0x1c);
  lVar12 = *param_2;
  puStack_118 = (undefined4 *)param_2[2];
  lStack_120 = lVar12 + 0x20;
  lVar29 = 0;
  lStack_110 = 8;
  lStack_178 = 0;
  lStack_158 = 0;
  uVar31 = 0;
  do {
    do {
      if (cVar6 == '\0') {
        if (uVar31 == (uint)lVar29) {
          if (puVar30 == puVar5) {
            return;
          }
          while( true ) {
            lVar29 = *(longlong *)
                      (*(longlong *)(lVar11 + 0x100) + 0x58 + (ulonglong)*puVar30 * 0xa0);
            if (lVar29 != 0) break;
            puVar30 = puVar30 + 1;
            if (puVar30 == puVar5) {
              return;
            }
          }
          lVar27 = *(longlong *)(lVar11 + 0x100) + (ulonglong)*puVar30 * 0xa0;
          uVar26 = (ulonglong)*(uint *)(lVar27 + 0x94);
          lVar28 = *(longlong *)(lVar11 + 0x1a0);
          lVar13 = *(longlong *)(lVar28 + 0x18 + uVar26 * 0x48);
          lVar14 = *(longlong *)(lVar28 + 0x38 + uVar26 * 0x48);
          if ((*(ulonglong *)(lVar10 + 0x118) < *(ulonglong *)(lVar28 + 0x40 + uVar26 * 0x48)) &&
             (uVar26 = *(ulonglong *)(lVar14 + *(ulonglong *)(lVar10 + 0x118) * 8), uVar26 != 0)) {
            lStack_178 = *(longlong *)(lVar13 + 0x10 + ~uVar26 * 0x30);
          }
          else {
            lStack_178 = 0;
          }
          lVar28 = ~*(ulonglong *)(lVar14 + *(longlong *)(lVar10 + 0x110) * 8) * 0x30;
          lStack_158 = *(longlong *)(lVar13 + 0x10 + lVar28);
          lStack_140 = *(longlong *)(lVar13 + 0x28 + lVar28);
          puVar30 = puVar30 + 1;
          lStack_110 = *(longlong *)(lVar27 + 0x50);
          uVar31 = 0;
          uVar26 = 0;
        }
        else {
          uVar26 = (ulonglong)uVar31;
        }
        uVar32 = ~*(uint *)(lStack_110 + 8 + uVar26 * 0x10);
      }
      else {
        uVar32 = uVar31;
        if (uVar31 == (uint)lVar29) {
          if (puVar30 == puVar5) {
            return;
          }
          while( true ) {
            lVar29 = *(longlong *)
                      (*(longlong *)(lVar11 + 0x1a0) + 0x10 + (ulonglong)*puVar30 * 0x48);
            if (lVar29 != 0) break;
            puVar30 = puVar30 + 1;
            if (puVar30 == puVar5) {
              return;
            }
          }
          lVar28 = *(longlong *)(lVar11 + 0x1a0) + (ulonglong)*puVar30 * 0x48;
          lVar13 = *(longlong *)(lVar28 + 0x18);
          if ((*(ulonglong *)(lVar10 + 0x118) < *(ulonglong *)(lVar28 + 0x40)) &&
             (uVar26 = *(ulonglong *)
                        (*(longlong *)(lVar28 + 0x38) + *(ulonglong *)(lVar10 + 0x118) * 8),
             uVar26 != 0)) {
            lStack_178 = *(longlong *)(lVar13 + 0x10 + ~uVar26 * 0x30);
          }
          else {
            lStack_178 = 0;
          }
          lVar28 = ~*(ulonglong *)(*(longlong *)(lVar28 + 0x38) + *(longlong *)(lVar10 + 0x110) * 8)
                   * 0x30;
          lStack_158 = *(longlong *)(lVar13 + 0x10 + lVar28);
          lStack_140 = *(longlong *)(lVar13 + 0x28 + lVar28);
          puVar30 = puVar30 + 1;
          uVar31 = 0;
          uVar32 = uVar31;
        }
      }
      uVar26 = (ulonglong)uVar32;
      pfVar1 = (float *)(lStack_158 + uVar26 * 0x18);
      puVar2 = (undefined4 *)(lStack_140 + uVar26 * 4);
      lVar28 = uVar26 * 0x58 + lStack_178;
      uVar31 = uVar31 + 1;
      cVar24 = pdb_140b77b50(lVar28);
    } while (cVar24 != '\0');
    pdb_140b77b90(&uStack_134,lVar28);
    fVar23 = fStack_130;
    fVar34 = *(float *)(lVar9 + 0x28);
    fVar35 = *pfVar1;
    fVar37 = pfVar1[2];
    uVar32 = -(uint)(fVar35 / fVar34 <= fVar21);
    uVar33 = -(uint)(fStack_130 - fVar35 < fVar37);
    afStack_128[0] = fVar34 * _DAT_14359c138 + pfVar1[3];
    fVar37 = fVar34 * afStack_128[0] +
             (float)(uVar33 & (uint)fVar37 |
                    ~uVar33 & (-(uint)(0.0 <= fVar35) & (uint)fVar37 |
                              ~-(uint)(0.0 <= fVar35) &
                              (~uVar32 & (uint)fStack_130 | uVar32 & (uint)fVar37)));
    fVar36 = afStack_128[0];
    if (fVar37 <= fStack_130) {
      if (fVar19 < afStack_128[0]) {
        afStack_128[1] = 15.0;
        uStack_108 = afStack_128;
        uStack_100 = 0x40f705d0;
        uStack_fc = 1.4013e-45;
        uStack_f8 = afStack_128 + 1;
        uStack_f0 = 0xf705d0;
        uStack_ed = 0x140;
        pdb_142dc83d0(&UNK_14359c144,&uStack_108,&UNK_14359c1e0);
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      fVar36 = (fVar35 / fVar34) * _DAT_14359c13c;
      fVar35 = fStack_130;
      if (fStack_130 <= fVar37) {
        fVar35 = fVar37;
      }
      fVar37 = (float)(~-(uint)NAN(fVar37) & (uint)fVar35 | -(uint)NAN(fVar37) & (uint)fStack_130);
      if (afStack_128[0] <= fVar36) {
        afStack_128[0] = fVar36;
      }
      fVar36 = fVar19;
      if (afStack_128[0] <= fVar19) {
        fVar36 = afStack_128[0];
      }
    }
    fVar34 = (float)func_0x000142e32a20(fVar34 * fVar22);
    fVar34 = (fVar17 - fVar34) * fVar23 + (fVar17 - (fVar17 - fVar34)) * fVar37;
    pfVar1[2] = fVar34;
    *puVar2 = uVar7;
    pfVar1[3] = fVar36;
    fVar34 = (float)((uint)(fVar34 - fVar23) & uVar18);
    if (*(char *)(pfVar1 + 5) == '\x01') {
      if (fVar34 <= fVar20) {
        if (_DAT_142e37848 < pfVar1[4]) {
          fVar34 = (pfVar1[4] + _DAT_14300d240) / _DAT_143511530;
          uStack_f8._0_4_ = uStack_12c;
          uStack_100 = uStack_134;
          uStack_fc = fStack_130;
          *puStack_118 = uVar8;
          lVar28 = *(longlong *)(lVar12 + 0x30);
          uVar15 = *(undefined8 *)(lVar12 + 0x40);
          if (lVar28 == *(longlong *)(lVar12 + 0x20)) {
            pdb_142d7ede0(lStack_120);
          }
          fVar35 = 0.0;
          if (0.0 <= fVar34) {
            fVar35 = fVar34;
          }
          fVar34 = fVar17;
          if (fVar35 <= fVar17) {
            fVar34 = fVar35;
          }
          lVar13 = *(longlong *)(lVar12 + 0x28);
          *(undefined8 *)(lVar13 + lVar28 * 0x28) = uVar15;
          *(undefined1 *)(lVar13 + 8 + lVar28 * 0x28) = 4;
          *(float *)(lVar13 + 0xc + lVar28 * 0x28) = fVar34;
          *(undefined4 *)(lVar13 + 0x20 + lVar28 * 0x28) = (undefined4)uStack_f8;
          puVar3 = (undefined4 *)(lVar13 + 0x10 + lVar28 * 0x28);
          *puVar3 = (undefined4)uStack_108;
          puVar3[1] = uStack_108._4_4_;
          puVar3[2] = uStack_100;
          puVar3[3] = uStack_fc;
          *(longlong *)(lVar12 + 0x30) = lVar28 + 1;
          *(longlong *)(lVar12 + 0x40) = *(longlong *)(lVar12 + 0x40) + 1;
        }
LAB_142809141:
        uVar25 = 0;
      }
      else {
        uVar25 = 1;
        if (fVar36 < 0.0) {
          fVar34 = *(float *)(lVar9 + 0x28);
          *puVar2 = uVar7;
          pfVar1[4] = fVar34 + pfVar1[4];
        }
      }
    }
    else {
      if (fVar34 < fVar20) {
        pfVar1[4] = 0.0;
        goto LAB_142809141;
      }
      uStack_f0 = (undefined3)((uint)uStack_12c >> 8);
      uStack_fc._3_1_ = (undefined1)uStack_134;
      uStack_f8._0_4_ = (undefined4)(CONCAT44(fStack_130,uStack_134) >> 8);
      uStack_f8._4_3_ = (undefined3)((uint)fStack_130 >> 8);
      uStack_f8._4_4_ = CONCAT13((char)uStack_12c,uStack_f8._4_3_);
      *puStack_118 = uVar8;
      lVar28 = *(longlong *)(lVar12 + 0x30);
      uVar15 = *(undefined8 *)(lVar12 + 0x40);
      if (lVar28 == *(longlong *)(lVar12 + 0x20)) {
        pdb_142d7ede0(lStack_120);
      }
      lVar13 = *(longlong *)(lVar12 + 0x28);
      *(undefined8 *)(lVar13 + lVar28 * 0x28) = uVar15;
      *(undefined1 *)(lVar13 + 8 + lVar28 * 0x28) = 5;
      puVar4 = (undefined8 *)(lVar13 + 0x14 + lVar28 * 0x28);
      *puVar4 = CONCAT35((undefined3)uStack_f8,CONCAT41(uStack_fc,uStack_100._3_1_));
      puVar4[1] = CONCAT35(uStack_f0,CONCAT41(uStack_f8._4_4_,uStack_f8._3_1_));
      puVar3 = (undefined4 *)(lVar13 + 9 + lVar28 * 0x28);
      *puVar3 = (undefined4)uStack_108;
      puVar3[1] = uStack_108._4_4_;
      puVar3[2] = uStack_100;
      puVar3[3] = uStack_fc;
      *(longlong *)(lVar12 + 0x30) = lVar28 + 1;
      *(longlong *)(lVar12 + 0x40) = *(longlong *)(lVar12 + 0x40) + 1;
      uVar25 = 1;
    }
    *puVar2 = uVar7;
    *(undefined1 *)(pfVar1 + 5) = uVar25;
  } while( true );
}

