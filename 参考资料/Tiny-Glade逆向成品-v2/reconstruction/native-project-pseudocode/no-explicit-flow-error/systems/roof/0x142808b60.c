// VA 0x142808b60, PDB extent 1772 bytes
// system_roof::simulate_roof_tile_for_audio::simulate_roof_tile_for_audio
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/roof/src/simulate_roof_tile_for_audio.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_roof::simulate_roof_tile_for_audio::simulate_roof_tile_for_audio
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/roof/src/simulate_roof_tile_for_audio.rs
   Extent: 1772 */

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
  float fVar16;
  uint uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  char cVar23;
  undefined1 uVar24;
  ulonglong uVar25;
  longlong lVar26;
  longlong lVar27;
  longlong lVar28;
  uint *puVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
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
  
  fVar21 = _DAT_14359c140;
  fVar20 = _DAT_14359c134;
  fVar19 = _DAT_142e3b1d8;
  fVar18 = _DAT_142e37880;
  uVar17 = _DAT_142e377e0;
  fVar16 = _DAT_142e36f28;
  lVar9 = *param_3;
  if ((*(float *)(lVar9 + 0x28) == 0.0) && (!NAN(*(float *)(lVar9 + 0x28)))) {
    return;
  }
  lVar10 = *param_1;
  lVar11 = param_1[1];
  uVar7 = *(undefined4 *)((longlong)param_1 + 0x14);
  puVar29 = *(uint **)(lVar10 + 0xf8);
  puVar5 = puVar29 + *(longlong *)(lVar10 + 0x100);
  cVar6 = *(char *)(lVar10 + 0x108);
  uVar8 = *(undefined4 *)((longlong)param_2 + 0x1c);
  lVar12 = *param_2;
  puStack_118 = (undefined4 *)param_2[2];
  lStack_120 = lVar12 + 0x20;
  lVar28 = 0;
  lStack_110 = 8;
  lStack_178 = 0;
  lStack_158 = 0;
  uVar30 = 0;
  do {
    do {
      if (cVar6 == '\0') {
        if (uVar30 == (uint)lVar28) {
          if (puVar29 == puVar5) {
            return;
          }
          while( true ) {
            lVar28 = *(longlong *)
                      (*(longlong *)(lVar11 + 0x100) + 0x58 + (ulonglong)*puVar29 * 0xa0);
            if (lVar28 != 0) break;
            puVar29 = puVar29 + 1;
            if (puVar29 == puVar5) {
              return;
            }
          }
          lVar26 = *(longlong *)(lVar11 + 0x100) + (ulonglong)*puVar29 * 0xa0;
          uVar25 = (ulonglong)*(uint *)(lVar26 + 0x94);
          lVar27 = *(longlong *)(lVar11 + 0x1a0);
          lVar13 = *(longlong *)(lVar27 + 0x18 + uVar25 * 0x48);
          lVar14 = *(longlong *)(lVar27 + 0x38 + uVar25 * 0x48);
          if ((*(ulonglong *)(lVar10 + 0x118) < *(ulonglong *)(lVar27 + 0x40 + uVar25 * 0x48)) &&
             (uVar25 = *(ulonglong *)(lVar14 + *(ulonglong *)(lVar10 + 0x118) * 8), uVar25 != 0)) {
            lStack_178 = *(longlong *)(lVar13 + 0x10 + ~uVar25 * 0x30);
          }
          else {
            lStack_178 = 0;
          }
          lVar27 = ~*(ulonglong *)(lVar14 + *(longlong *)(lVar10 + 0x110) * 8) * 0x30;
          lStack_158 = *(longlong *)(lVar13 + 0x10 + lVar27);
          lStack_140 = *(longlong *)(lVar13 + 0x28 + lVar27);
          puVar29 = puVar29 + 1;
          lStack_110 = *(longlong *)(lVar26 + 0x50);
          uVar30 = 0;
          uVar25 = 0;
        }
        else {
          uVar25 = (ulonglong)uVar30;
        }
        uVar31 = ~*(uint *)(lStack_110 + 8 + uVar25 * 0x10);
      }
      else {
        uVar31 = uVar30;
        if (uVar30 == (uint)lVar28) {
          if (puVar29 == puVar5) {
            return;
          }
          while( true ) {
            lVar28 = *(longlong *)
                      (*(longlong *)(lVar11 + 0x1a0) + 0x10 + (ulonglong)*puVar29 * 0x48);
            if (lVar28 != 0) break;
            puVar29 = puVar29 + 1;
            if (puVar29 == puVar5) {
              return;
            }
          }
          lVar27 = *(longlong *)(lVar11 + 0x1a0) + (ulonglong)*puVar29 * 0x48;
          lVar13 = *(longlong *)(lVar27 + 0x18);
          if ((*(ulonglong *)(lVar10 + 0x118) < *(ulonglong *)(lVar27 + 0x40)) &&
             (uVar25 = *(ulonglong *)
                        (*(longlong *)(lVar27 + 0x38) + *(ulonglong *)(lVar10 + 0x118) * 8),
             uVar25 != 0)) {
            lStack_178 = *(longlong *)(lVar13 + 0x10 + ~uVar25 * 0x30);
          }
          else {
            lStack_178 = 0;
          }
          lVar27 = ~*(ulonglong *)(*(longlong *)(lVar27 + 0x38) + *(longlong *)(lVar10 + 0x110) * 8)
                   * 0x30;
          lStack_158 = *(longlong *)(lVar13 + 0x10 + lVar27);
          lStack_140 = *(longlong *)(lVar13 + 0x28 + lVar27);
          puVar29 = puVar29 + 1;
          uVar30 = 0;
          uVar31 = uVar30;
        }
      }
      uVar25 = (ulonglong)uVar31;
      pfVar1 = (float *)(lStack_158 + uVar25 * 0x18);
      puVar2 = (undefined4 *)(lStack_140 + uVar25 * 4);
      lVar27 = uVar25 * 0x58 + lStack_178;
      uVar30 = uVar30 + 1;
      cVar23 = pdb_140b77b50(lVar27);
    } while (cVar23 != '\0');
    pdb_140b77b90(&uStack_134,lVar27);
    fVar22 = fStack_130;
    fVar33 = *(float *)(lVar9 + 0x28);
    fVar34 = *pfVar1;
    fVar36 = pfVar1[2];
    uVar31 = -(uint)(fVar34 / fVar33 <= fVar20);
    uVar32 = -(uint)(fStack_130 - fVar34 < fVar36);
    afStack_128[0] = fVar33 * _DAT_14359c138 + pfVar1[3];
    fVar36 = fVar33 * afStack_128[0] +
             (float)(uVar32 & (uint)fVar36 |
                    ~uVar32 & (-(uint)(0.0 <= fVar34) & (uint)fVar36 |
                              ~-(uint)(0.0 <= fVar34) &
                              (~uVar31 & (uint)fStack_130 | uVar31 & (uint)fVar36)));
    fVar35 = afStack_128[0];
    if (fVar36 <= fStack_130) {
      if (fVar18 < afStack_128[0]) {
        afStack_128[1] = 15.0;
        uStack_108 = afStack_128;
        uStack_100 = 0x40f705d0;
        uStack_fc = 1.4013e-45;
        uStack_f8 = afStack_128 + 1;
        uStack_f0 = 0xf705d0;
        uStack_ed = 0x140;
                    /* WARNING: Subroutine does not return */
        pdb_142dc83d0(&UNK_14359c144,&uStack_108,&UNK_14359c1e0);
      }
      fVar35 = (fVar34 / fVar33) * _DAT_14359c13c;
      fVar34 = fStack_130;
      if (fStack_130 <= fVar36) {
        fVar34 = fVar36;
      }
      fVar36 = (float)(~-(uint)NAN(fVar36) & (uint)fVar34 | -(uint)NAN(fVar36) & (uint)fStack_130);
      if (afStack_128[0] <= fVar35) {
        afStack_128[0] = fVar35;
      }
      fVar35 = fVar18;
      if (afStack_128[0] <= fVar18) {
        fVar35 = afStack_128[0];
      }
    }
    fVar33 = (float)pub_142e32a20(fVar33 * fVar21);
    fVar33 = (fVar16 - fVar33) * fVar22 + (fVar16 - (fVar16 - fVar33)) * fVar36;
    pfVar1[2] = fVar33;
    *puVar2 = uVar7;
    pfVar1[3] = fVar35;
    fVar33 = (float)((uint)(fVar33 - fVar22) & uVar17);
    if (*(char *)(pfVar1 + 5) == '\x01') {
      if (fVar33 <= fVar19) {
        if (_DAT_142e37848 < pfVar1[4]) {
          fVar33 = (pfVar1[4] + _DAT_14300d240) / _DAT_143511530;
          uStack_f8._0_4_ = uStack_12c;
          uStack_100 = uStack_134;
          uStack_fc = fStack_130;
          *puStack_118 = uVar8;
          lVar27 = *(longlong *)(lVar12 + 0x30);
          uVar15 = *(undefined8 *)(lVar12 + 0x40);
          if (lVar27 == *(longlong *)(lVar12 + 0x20)) {
            pdb_142d7ede0(lStack_120);
          }
          fVar34 = 0.0;
          if (0.0 <= fVar33) {
            fVar34 = fVar33;
          }
          fVar33 = fVar16;
          if (fVar34 <= fVar16) {
            fVar33 = fVar34;
          }
          lVar13 = *(longlong *)(lVar12 + 0x28);
          *(undefined8 *)(lVar13 + lVar27 * 0x28) = uVar15;
          *(undefined1 *)(lVar13 + 8 + lVar27 * 0x28) = 4;
          *(float *)(lVar13 + 0xc + lVar27 * 0x28) = fVar33;
          *(undefined4 *)(lVar13 + 0x20 + lVar27 * 0x28) = (undefined4)uStack_f8;
          puVar3 = (undefined4 *)(lVar13 + 0x10 + lVar27 * 0x28);
          *puVar3 = (undefined4)uStack_108;
          puVar3[1] = uStack_108._4_4_;
          puVar3[2] = uStack_100;
          puVar3[3] = uStack_fc;
          *(longlong *)(lVar12 + 0x30) = lVar27 + 1;
          *(longlong *)(lVar12 + 0x40) = *(longlong *)(lVar12 + 0x40) + 1;
        }
LAB_142809141:
        uVar24 = 0;
      }
      else {
        uVar24 = 1;
        if (fVar35 < 0.0) {
          fVar33 = *(float *)(lVar9 + 0x28);
          *puVar2 = uVar7;
          pfVar1[4] = fVar33 + pfVar1[4];
        }
      }
    }
    else {
      if (fVar33 < fVar19) {
        pfVar1[4] = 0.0;
        goto LAB_142809141;
      }
      uStack_f0 = (undefined3)((uint)uStack_12c >> 8);
      uStack_fc._3_1_ = (undefined1)uStack_134;
      uStack_f8._0_4_ = (undefined4)(CONCAT44(fStack_130,uStack_134) >> 8);
      uStack_f8._4_3_ = (undefined3)((uint)fStack_130 >> 8);
      uStack_f8._4_4_ = CONCAT13((char)uStack_12c,uStack_f8._4_3_);
      *puStack_118 = uVar8;
      lVar27 = *(longlong *)(lVar12 + 0x30);
      uVar15 = *(undefined8 *)(lVar12 + 0x40);
      if (lVar27 == *(longlong *)(lVar12 + 0x20)) {
        pdb_142d7ede0(lStack_120);
      }
      lVar13 = *(longlong *)(lVar12 + 0x28);
      *(undefined8 *)(lVar13 + lVar27 * 0x28) = uVar15;
      *(undefined1 *)(lVar13 + 8 + lVar27 * 0x28) = 5;
      puVar4 = (undefined8 *)(lVar13 + 0x14 + lVar27 * 0x28);
      *puVar4 = CONCAT35((undefined3)uStack_f8,CONCAT41(uStack_fc,uStack_100._3_1_));
      puVar4[1] = CONCAT35(uStack_f0,CONCAT41(uStack_f8._4_4_,uStack_f8._3_1_));
      puVar3 = (undefined4 *)(lVar13 + 9 + lVar27 * 0x28);
      *puVar3 = (undefined4)uStack_108;
      puVar3[1] = uStack_108._4_4_;
      puVar3[2] = uStack_100;
      puVar3[3] = uStack_fc;
      *(longlong *)(lVar12 + 0x30) = lVar27 + 1;
      *(longlong *)(lVar12 + 0x40) = *(longlong *)(lVar12 + 0x40) + 1;
      uVar24 = 1;
    }
    *puVar2 = uVar7;
    *(undefined1 *)(pfVar1 + 5) = uVar24;
  } while( true );
}

