// VA 0x142960aa0, PDB extent 2166 bytes
// system_critters::duck_splash_particle::duck_splash_particle
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/critters/src/duck_splash_particle.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_critters::duck_splash_particle::duck_splash_particle
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/critters/src/duck_splash_particle.rs
   Extent: 2166 */

void pdb_142960aa0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,longlong *param_4,
                  longlong *param_5,longlong *param_6,undefined8 *param_7)

{
  undefined4 *puVar1;
  uint *puVar2;
  undefined4 *puVar3;
  ulonglong *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  ulonglong uVar19;
  longlong lVar20;
  undefined8 *puVar21;
  int *piVar22;
  longlong lVar23;
  undefined8 *puVar24;
  ulonglong uVar25;
  longlong lVar26;
  longlong lVar27;
  uint *puVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  longlong lVar31;
  uint uVar32;
  undefined8 *puVar33;
  float fVar34;
  float fVar35;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined4 uStack_110;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  longlong lStack_f0;
  longlong lStack_e8;
  longlong lStack_e0;
  longlong lStack_d8;
  longlong lStack_d0;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  longlong lStack_b8;
  longlong lStack_b0;
  longlong lStack_a8;
  undefined8 uStack_a0;
  longlong lStack_98;
  longlong *plStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  
  uStack_80 = 0xfffffffffffffffe;
  puVar4 = (ulonglong *)*param_7;
  lVar26 = param_7[1];
  uVar19 = *puVar4;
  uVar29 = 0;
  uVar25 = uVar19 - *(ulonglong *)(lVar26 + 0x18);
  if (uVar19 < *(ulonglong *)(lVar26 + 0x18)) {
    uVar25 = uVar29;
  }
  uVar30 = uVar19 - *(ulonglong *)(lVar26 + 0x38);
  if (uVar19 < *(ulonglong *)(lVar26 + 0x38)) {
    uVar30 = uVar29;
  }
  puVar16 = (undefined8 *)(uVar25 * 0x10 + *(longlong *)(lVar26 + 8));
  uVar19 = *(ulonglong *)(lVar26 + 0x10) - uVar25;
  if (*(ulonglong *)(lVar26 + 0x10) < uVar25) {
    puVar16 = (undefined8 *)0x8;
    uVar19 = uVar29;
  }
  puVar21 = (undefined8 *)(uVar30 * 0x10 + *(longlong *)(lVar26 + 0x28));
  uVar25 = *(ulonglong *)(lVar26 + 0x30) - uVar30;
  if (*(ulonglong *)(lVar26 + 0x30) < uVar30) {
    puVar21 = (undefined8 *)0x8;
    uVar25 = uVar29;
  }
  *puVar4 = (*(longlong *)(lVar26 + 0x40) - uVar25) - uVar19;
  puVar33 = puVar16 + uVar19 * 2;
  puStack_c0 = puVar21 + uVar25 * 2;
  uStack_c8 = *param_3;
  uStack_a0 = *param_2;
  lStack_98 = *param_6;
  lStack_a8 = param_6[1];
  puVar24 = puStack_c0;
  lVar26 = lStack_a8;
  lVar31 = lStack_98;
  plStack_90 = param_4;
  puStack_88 = param_1;
  do {
    do {
      fVar15 = _DAT_142e37874;
      fVar14 = _DAT_142e36f28;
      if ((puVar16 == (undefined8 *)0x0) || (puVar16 == puVar33)) {
        if ((puVar21 == (undefined8 *)0x0) || (puVar21 == puVar24)) {
          lStack_d0 = *plStack_90;
          lStack_b0 = plStack_90[1];
          uStack_a0 = CONCAT44(uStack_a0._4_4_,*(undefined4 *)((longlong)plStack_90 + 0x14));
          puVar28 = *(uint **)(lStack_d0 + 0xf8);
          puVar2 = puVar28 + *(longlong *)(lStack_d0 + 0x100);
          uStack_c8 = CONCAT71(uStack_c8._1_7_,*(char *)(lStack_d0 + 0x108));
          puStack_c0 = (undefined8 *)*param_5;
          uStack_100 = puStack_88[3];
          uStack_f8 = puStack_88[2];
          uVar5 = *puStack_88;
          uVar18 = puStack_88[1];
          lVar26 = 0;
          lStack_e0 = 8;
          lVar27 = 0;
          puStack_88 = (undefined8 *)0x0;
          lStack_d8 = 8;
          uVar32 = 0;
          if (*(char *)(lStack_d0 + 0x108) != '\0') goto LAB_142960ffb;
          do {
            if (uVar32 == (uint)lVar26) {
              if (puVar28 == puVar2) {
                return;
              }
              while( true ) {
                lVar26 = *(longlong *)
                          (*(longlong *)(lStack_b0 + 0x100) + 0x58 + (ulonglong)*puVar28 * 0xa0);
                if (lVar26 != 0) break;
                puVar28 = puVar28 + 1;
                if (puVar28 == puVar2) {
                  return;
                }
              }
              lVar20 = *(longlong *)(lStack_b0 + 0x100) + (ulonglong)*puVar28 * 0xa0;
              uVar19 = (ulonglong)*(uint *)(lVar20 + 0x94);
              lVar6 = *(longlong *)(*(longlong *)(lStack_b0 + 0x1a0) + 0x18 + uVar19 * 0x48);
              lVar27 = *(longlong *)(*(longlong *)(lStack_b0 + 0x1a0) + 0x38 + uVar19 * 0x48);
              lVar23 = ~*(ulonglong *)(lVar27 + *(longlong *)(lStack_d0 + 0x110) * 8) * 0x30;
              puStack_88 = *(undefined8 **)(lVar6 + 0x10 + lVar23);
              plStack_90 = *(longlong **)(lVar6 + 0x28 + lVar23);
              lVar23 = ~*(ulonglong *)(lVar27 + *(longlong *)(lStack_d0 + 0x118) * 8) * 0x30;
              lVar27 = *(longlong *)(lVar6 + 0x10 + lVar23);
              lStack_b8 = *(longlong *)(lVar6 + 0x28 + lVar23);
              lStack_d8 = *(longlong *)(lVar20 + 0x50);
              puVar28 = puVar28 + 1;
              uVar32 = 0;
              uVar19 = 0;
            }
            else {
              uVar19 = (ulonglong)uVar32;
            }
            puVar16 = (undefined8 *)(lStack_d8 + uVar19 * 0x10);
            uVar19 = (ulonglong)~*(uint *)(lStack_d8 + 8 + uVar19 * 0x10);
            while( true ) {
              puVar1 = (undefined4 *)((longlong)plStack_90 + uVar19 * 4);
              puVar21 = (undefined8 *)(uVar19 * 0x10 + (longlong)puStack_88);
              puVar24 = (undefined8 *)(uVar19 * 0x30 + lVar27);
              uStack_198 = *puVar16;
              if ((int)uStack_198 == 0) {
                return;
              }
              uVar25 = (ulonglong)~(uint)*puVar21;
              if ((((uVar25 < *(ulonglong *)(lStack_a8 + 0x10)) &&
                   (piVar22 = (int *)(uVar25 * 0x18 + *(longlong *)(lStack_a8 + 8)),
                   piVar22[4] == (int)((ulonglong)*puVar21 >> 0x20))) && (*piVar22 != 0)) &&
                 ((uVar25 = *(ulonglong *)(piVar22 + 2),
                  (uVar25 & 0xffffffff) < *(ulonglong *)(lVar31 + 0x38) &&
                  (lVar31 = lStack_98,
                  (*(ulonglong *)(*(longlong *)(lStack_98 + 0x28) + (uVar25 >> 6 & 0x3ffffff) * 8)
                   >> (uVar25 & 0x3f) & 1) != 0)))) {
                lStack_e8 = *(longlong *)(lStack_98 + 0x118);
                lStack_f0 = *(longlong *)
                             (*(longlong *)(lStack_a8 + 0x1a0) + 0x18 + (uVar25 >> 0x20) * 0x48);
                lVar6 = *(longlong *)
                         (lStack_f0 + 0x10 +
                         ~*(ulonglong *)
                           (*(longlong *)
                             (*(longlong *)(lStack_a8 + 0x1a0) + 0x38 + (uVar25 >> 0x20) * 0x48) +
                           lStack_e8 * 8) * 0x30);
                lVar20 = (ulonglong)(uint)~piVar22[1] * 0x30;
                uVar11 = *(undefined8 *)(lVar6 + lVar20);
                uVar12 = ((undefined8 *)(lVar6 + lVar20))[1];
                puVar3 = (undefined4 *)(lVar6 + 0x10 + lVar20);
                uVar7 = *puVar3;
                uVar8 = puVar3[1];
                uVar9 = puVar3[2];
                uVar10 = puVar3[3];
                puVar16 = (undefined8 *)(lVar6 + 0x20 + lVar20);
                uVar13 = puVar16[1];
                puVar24[4] = *puVar16;
                puVar24[5] = uVar13;
                *(undefined4 *)(puVar24 + 2) = uVar7;
                *(undefined4 *)((longlong)puVar24 + 0x14) = uVar8;
                *(undefined4 *)(puVar24 + 3) = uVar9;
                *(undefined4 *)((longlong)puVar24 + 0x1c) = uVar10;
                *puVar24 = uVar11;
                puVar24[1] = uVar12;
                *(undefined4 *)(lStack_b8 + uVar19 * 4) = (undefined4)uStack_a0;
                *(undefined4 *)((longlong)puVar24 + 0x14) = 0;
              }
              fVar34 = *(float *)((longlong)puStack_c0 + 0x28);
              *puVar1 = (undefined4)uStack_a0;
              fVar34 = fVar34 / fVar15 + *(float *)(puVar21 + 1);
              uVar32 = uVar32 + 1;
              *(float *)(puVar21 + 1) = fVar34;
              if (fVar34 <= fVar14) {
                fVar35 = 0.0;
                if (0.0 <= fVar34) {
                  fVar35 = fVar34;
                }
                *puVar1 = (undefined4)uStack_a0;
                *(float *)(puVar21 + 1) = fVar35;
              }
              else {
                uStack_180 = uStack_f8;
                uStack_178 = uStack_100;
                uStack_190 = uVar5;
                uStack_188 = uVar18;
                pdb_140f04aa0(&uStack_198,&UNK_1436051e8);
              }
              if ((char)uStack_c8 == '\0') break;
LAB_142960ffb:
              if (uVar32 == (uint)lVar26) {
                if (puVar28 == puVar2) {
                  return;
                }
                while( true ) {
                  lVar26 = *(longlong *)
                            (*(longlong *)(lStack_b0 + 0x1a0) + 0x10 + (ulonglong)*puVar28 * 0x48);
                  if (lVar26 != 0) break;
                  puVar28 = puVar28 + 1;
                  if (puVar28 == puVar2) {
                    return;
                  }
                }
                lVar27 = *(longlong *)(lStack_b0 + 0x1a0) + (ulonglong)*puVar28 * 0x48;
                lStack_e0 = *(longlong *)(lVar27 + 8);
                lVar6 = *(longlong *)(lVar27 + 0x18);
                lVar20 = ~*(ulonglong *)
                           (*(longlong *)(lVar27 + 0x38) + *(longlong *)(lStack_d0 + 0x110) * 8) *
                         0x30;
                puStack_88 = *(undefined8 **)(lVar6 + 0x10 + lVar20);
                plStack_90 = *(longlong **)(lVar6 + 0x28 + lVar20);
                lVar20 = ~*(ulonglong *)
                           (*(longlong *)(lVar27 + 0x38) + *(longlong *)(lStack_d0 + 0x118) * 8) *
                         0x30;
                lVar27 = *(longlong *)(lVar6 + 0x10 + lVar20);
                lStack_b8 = *(longlong *)(lVar6 + 0x28 + lVar20);
                puVar28 = puVar28 + 1;
                uVar32 = 0;
              }
              uVar19 = (ulonglong)uVar32;
              puVar16 = (undefined8 *)(lStack_e0 + uVar19 * 8);
            }
          } while( true );
        }
        puVar16 = (undefined8 *)0x0;
        puVar17 = puVar21;
        puVar21 = puVar21 + 2;
      }
      else {
        puVar17 = puVar16;
        puVar16 = puVar16 + 2;
      }
      *puVar4 = *puVar4 + 1;
      uVar5 = *puVar17;
    } while (((*(ulonglong *)(lVar26 + 0x10) <= (ulonglong)~(uint)uVar5) ||
             (piVar22 = (int *)((ulonglong)~(uint)uVar5 * 0x18 + *(longlong *)(lVar26 + 8)),
             piVar22[4] != (int)((ulonglong)uVar5 >> 0x20))) ||
            ((*piVar22 == 0 ||
             ((uVar19 = *(ulonglong *)(piVar22 + 2),
              *(ulonglong *)(lVar31 + 0x38) <= (uVar19 & 0xffffffff) ||
              ((*(ulonglong *)(*(longlong *)(lVar31 + 0x28) + (uVar19 >> 6 & 0x3ffffff) * 8) >>
                (uVar19 & 0x3f) & 1) == 0))))));
    if (*(ulonglong *)(lVar31 + 0x118) <
        *(ulonglong *)(*(longlong *)(lVar26 + 0x1a0) + 0x40 + (uVar19 >> 0x20) * 0x48)) {
      lVar26 = *(longlong *)(lVar26 + 0x1a0) + (uVar19 >> 0x20) * 0x48;
      uVar19 = *(ulonglong *)(*(longlong *)(lVar26 + 0x38) + *(ulonglong *)(lVar31 + 0x118) * 8);
      if (uVar19 == 0) goto LAB_142960c97;
      lVar26 = *(longlong *)(*(longlong *)(lVar26 + 0x18) + 0x10 + ~uVar19 * 0x30);
    }
    else {
LAB_142960c97:
      lVar26 = 0;
    }
    lVar31 = (ulonglong)(uint)~piVar22[1] * 0x30;
    uVar18 = pdb_140a2c590(uStack_c8,&UNK_143605200,6);
    pdb_1408fd560(&uStack_1d8,uVar18);
    pdb_140a596f0(&uStack_198,uStack_a0,&UNK_143605206,0x1c,&UNK_143605228);
    puVar1 = (undefined4 *)(lVar26 + lVar31);
    uStack_1c8 = *puVar1;
    uStack_1c4 = puVar1[1];
    uStack_1c0 = puVar1[2];
    uStack_1bc = puVar1[3];
    puVar1 = (undefined4 *)(lVar26 + 0x10 + lVar31);
    uStack_1b8 = *puVar1;
    uStack_1b4 = puVar1[1];
    uStack_1b0 = puVar1[2];
    uStack_1ac = puVar1[3];
    puVar1 = (undefined4 *)(lVar26 + 0x20 + lVar31);
    uStack_1a8 = *puVar1;
    uStack_1a4 = puVar1[1];
    uStack_1a0 = puVar1[2];
    uStack_19c = puVar1[3];
    uStack_120 = pdb_14007fac0();
    uStack_12c = uStack_16c;
    uStack_130 = uStack_170;
    uVar18 = uStack_178;
    uStack_140 = uStack_180;
    uStack_148 = uStack_188;
    uStack_150 = uStack_190;
    uStack_158 = uStack_198;
    uStack_258 = uStack_1d8;
    uStack_250 = uStack_1d0;
    uStack_1e8 = CONCAT44(uStack_164,uStack_168);
    uStack_1f0 = CONCAT44(uStack_16c,uStack_170);
    uStack_1f8 = uStack_178;
    uStack_208 = uStack_188;
    uStack_200 = uStack_180;
    uStack_218 = uStack_198;
    uStack_210 = uStack_190;
    uStack_248 = CONCAT44(uStack_1c4,uStack_1c8);
    uStack_240 = CONCAT44(uStack_1bc,uStack_1c0);
    uStack_238 = CONCAT44(uStack_1b4,uStack_1b8);
    uStack_230 = CONCAT44(uStack_1ac,uStack_1b0);
    uStack_228 = CONCAT44(uStack_1a4,uStack_1a8);
    uStack_220 = CONCAT44(uStack_19c,uStack_1a0);
    uStack_198 = uStack_1d8;
    uStack_190 = uStack_1d0;
    uStack_188 = CONCAT44(uStack_1c4,uStack_1c8);
    uStack_180 = CONCAT44(uStack_1bc,uStack_1c0);
    uStack_178 = CONCAT44(uStack_1b4,uStack_1b8);
    uStack_170 = uStack_1b0;
    uStack_16c = uStack_1ac;
    uStack_168 = uStack_1a8;
    uStack_164 = uStack_1a4;
    uStack_160 = uStack_1a0;
    uStack_15c = uStack_19c;
    uStack_1f8._0_4_ = (undefined4)uVar18;
    uStack_1f8._4_4_ = (undefined4)((ulonglong)uVar18 >> 0x20);
    uStack_138 = (undefined4)uStack_1f8;
    uStack_134 = uStack_1f8._4_4_;
    uStack_110 = 0;
    uStack_1f8 = uVar18;
    uStack_128 = uStack_1e8;
    uStack_118 = uVar5;
    pdb_14296cb40(&uStack_258,puStack_88,&uStack_198,&UNK_143605240);
    puVar24 = puStack_c0;
    lVar26 = lStack_a8;
    lVar31 = lStack_98;
  } while( true );
}

