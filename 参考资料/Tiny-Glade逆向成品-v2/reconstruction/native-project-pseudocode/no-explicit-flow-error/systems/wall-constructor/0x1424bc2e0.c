// VA 0x1424bc2e0, PDB extent 1821 bytes
// system_wall_constructor::utils::half_timber::add_underwindow_pattern<system_wall_constructor::utils::half_timber::half_timbering::closure_env$0>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/utils/half_timber.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_wall_constructor::utils::half_timber::add_underwindow_pattern<system_wall_constructor::utils::half_timber::half_timbering::closure_env$0>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/utils/half_timber.rs
   Extent: 1821 */

void pdb_1424bc2e0(longlong param_1,longlong param_2,float param_3,float param_4,undefined1 *param_5
                  ,float param_6,longlong param_7,char *param_8,undefined8 *param_9,
                  undefined8 param_10,undefined8 param_11,float param_12)

{
  char cVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fStack_248;
  float fStack_244;
  float fStack_240;
  float fStack_23c;
  float fStack_238;
  float fStack_234;
  undefined4 uStack_230;
  float fStack_22c;
  float fStack_228;
  float fStack_224;
  float fStack_220;
  undefined1 *puStack_218;
  char *pcStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  float fStack_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  float fStack_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  float fStack_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  float afStack_1a8 [12];
  undefined8 uStack_178;
  float fStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  int iStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  float fStack_128;
  float fStack_124;
  undefined8 uStack_120;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  
  if ((*(byte *)(param_1 + 0x11) & 0x1e) != 0x16) {
    afStack_1a8[1] = *(float *)(param_1 + 4);
    fVar22 = *(float *)(param_2 + 4);
    fVar18 = afStack_1a8[1] - fVar22;
    if (fVar18 <= 0.0) {
      fVar18 = 0.0;
    }
    if ((_DAT_142e36f50 < fVar18) && (fVar18 < _DAT_142e37830)) {
      afStack_1a8[3] = (float)(_DAT_1433096e4 & -(uint)(fVar22 == param_12));
      fVar21 = param_4 * _DAT_142e36f50 + param_3 * _DAT_142e36f50;
      fVar22 = _UNK_142f6a634 + fVar22;
      *param_5 = 1;
      fVar4 = _UNK_142e36f64;
      fVar3 = _DAT_142e36f60;
      fVar18 = _DAT_142e36f28;
      afStack_1a8[1] = _UNK_1435101c4 + afStack_1a8[1];
      afStack_1a8[3] = afStack_1a8[3] + fVar22;
      afStack_1a8[0] = _DAT_1435101c0 + param_3;
      afStack_1a8[2] = _UNK_1435101c8 + fVar21;
      afStack_1a8[4] = fVar21 + _DAT_142e42360;
      afStack_1a8[5] = afStack_1a8[3];
      afStack_1a8[6] = _DAT_142e42360 + param_4;
      afStack_1a8[7] = afStack_1a8[1];
      afStack_1a8[8] = param_3;
      afStack_1a8[9] = afStack_1a8[1];
      afStack_1a8[10] = param_4;
      afStack_1a8[0xb] = afStack_1a8[1];
      cVar1 = *param_8;
      pcStack_210 = param_8 + 4;
      uVar2 = *param_9;
      puStack_218 = (undefined1 *)param_9[1];
      fStack_128 = param_6;
      fStack_124 = param_6;
      uStack_120 = 0;
      lVar12 = 0;
      do {
        fVar22 = *(float *)((longlong)afStack_1a8 + lVar12) / param_6;
        if ((NAN(fVar22)) ||
           (fVar21 = *(float *)((longlong)afStack_1a8 + lVar12 + 8) / param_6, NAN(fVar21))) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc83b0(&UNK_143307f00,0x1d,&UNK_143307f48);
        }
        uVar14 = *(undefined4 *)((longlong)afStack_1a8 + lVar12 + 4);
        uVar15 = *(undefined4 *)((longlong)afStack_1a8 + lVar12 + 0xc);
        fVar21 = (float)pub_142e32a70(fVar21,fVar18);
        fVar22 = (float)pub_142e32a70(fVar22);
        fVar22 = (float)((uint)(fVar22 + _DAT_142e37950) & -(uint)(fVar22 < 0.0) |
                        ~-(uint)(fVar22 < 0.0) & (uint)fVar22) * fStack_128;
        fVar21 = (float)((uint)(fVar21 + _UNK_142e37954) & -(uint)(fVar21 < 0.0) |
                        ~-(uint)(fVar21 < 0.0) & (uint)fVar21) * fStack_124;
        uVar13 = pdb_14007ee60(fVar22);
        uStack_208 = (undefined8 *)CONCAT44(uVar14,uVar13);
        pdb_140dea260(&fStack_248,&uStack_208,param_7);
        uVar14 = pdb_14007ee60(fVar21);
        uStack_208 = (undefined8 *)CONCAT44(uVar15,uVar14);
        pdb_140dea260(&fStack_23c,&uStack_208,param_7);
        fVar22 = (fVar21 * fVar4 + fVar22 * fVar3) / param_6;
        uStack_178 = CONCAT44(uStack_178._4_4_,fVar22);
        if ((fVar22 < 0.0) || (fVar18 < fVar22)) {
          uStack_200 = pdb_140f70fc0;
          uStack_208 = &uStack_178;
                    /* WARNING: Subroutine does not return */
          pdb_142dc83d0(&UNK_143307ab0,&uStack_208,&UNK_143510210);
        }
        fVar21 = fVar22;
        uStack_230 = pdb_140a850d0(param_8);
        fStack_22c = fVar21;
        if ((cVar1 != '\0') ||
           (fVar21 = (float)pdb_140def2c0(pcStack_210),
           fVar21 = fVar21 - (fStack_23c * fVar3 + fStack_248 * fVar3),
           fVar22 = fVar22 - (fStack_234 * fVar4 + fStack_240 * fVar4),
           SQRT(fVar22 * fVar22 + fVar21 * fVar21) <= _DAT_1433096e0)) {
          fVar17 = fStack_234;
          fVar8 = fStack_238;
          fVar7 = fStack_23c;
          fVar25 = fStack_240;
          fVar6 = fStack_244;
          fVar5 = fStack_248;
          fVar27 = (fStack_234 + fStack_240) * _DAT_142e36f50;
          pdb_140df4520(&uStack_208,&uStack_230);
          fVar21 = _UNK_143021a44;
          fVar22 = _DAT_143021a40;
          fVar27 = (float)uStack_200 * _DAT_142e3c608 + (float)uStack_200 * _DAT_142e3c608 + fVar27;
          fStack_170 = fVar17 - fVar25;
          fVar19 = fVar7 - fVar5;
          fVar20 = fVar8 - fVar6;
          fVar16 = fVar18 / SQRT(fVar20 * fVar20 + fVar19 * fVar19 + fStack_170 * fStack_170);
          fStack_170 = fVar16 * fStack_170;
          fVar25 = fVar25 - fVar17;
          fVar26 = SQRT(fVar25 * fVar25 +
                        (fVar6 - fVar8) * (fVar6 - fVar8) + (fVar5 - fVar7) * (fVar5 - fVar7));
          fVar23 = SUB84(uStack_208,0) * _DAT_143021a40;
          fVar24 = (float)((ulonglong)uStack_208 >> 0x20) * _UNK_143021a44;
          uStack_178 = CONCAT44(fVar16 * fVar20,fVar16 * fVar19);
          pdb_140de8fd0(&uStack_208,&uStack_178);
          fStack_228 = fVar22;
          fStack_224 = fVar21;
          fVar20 = (float)uStack_200 + (float)uStack_200;
          fVar25 = uStack_208._4_4_ + uStack_208._4_4_;
          fVar16 = (float)uStack_208 * ((float)uStack_208 + (float)uStack_208);
          fVar17 = ((float)uStack_208 + (float)uStack_208) * uStack_200._4_4_;
          fVar19 = fVar20 * (float)uStack_208 - fVar25 * uStack_200._4_4_;
          fStack_1ec = fVar17 + fVar20 * uStack_208._4_4_;
          fStack_1dc = fVar18 - (fVar16 + uStack_208._4_4_ * fVar25);
          fStack_1f8 = fVar21 * (fVar25 * (float)uStack_208 - uStack_200._4_4_ * fVar20);
          fStack_1f4 = fVar21 * (fVar18 - ((float)uStack_200 * fVar20 + fVar16));
          fStack_1f0 = fVar21 * fStack_1ec;
          fStack_1ec = fVar21 * fStack_1ec;
          fStack_1e8 = fVar26 * (fVar25 * uStack_200._4_4_ + fVar20 * (float)uStack_208);
          fStack_1e4 = fVar26 * (fVar20 * uStack_208._4_4_ - fVar17);
          fStack_1e0 = fVar26 * fStack_1dc;
          fStack_1dc = fVar26 * fStack_1dc;
          uStack_208 = (undefined8 *)
                       CONCAT44(fVar22 * (fVar25 * (float)uStack_208 + uStack_200._4_4_ * fVar20),
                                fVar22 * (fVar18 - (uStack_208._4_4_ * fVar25 +
                                                   (float)uStack_200 * fVar20)));
          uStack_200 = (code *)CONCAT44(fVar22 * fVar19,fVar22 * fVar19);
          fStack_220 = fVar26;
          fStack_1d8 = fVar23 + fVar23 + (fVar5 + fVar7) * fVar3;
          fStack_1d4 = fVar24 + fVar24 + (fVar8 + fVar6) * fVar4;
          fStack_1d0 = fVar27;
          fStack_1cc = fVar27;
          pdb_140e07fe0(&uStack_118,&uStack_208);
          iVar10 = pdb_140315970(&param_10);
          iVar11 = (int)param_11;
          uVar14 = pdb_1409012c0(*(undefined4 *)(param_7 + 0x274));
          pdb_140a77410(&uStack_208);
          uStack_178 = CONCAT44(uStack_114,uStack_118);
          fStack_170 = (float)uStack_110;
          uStack_16c = uStack_10c;
          uStack_168 = uStack_108;
          uStack_164 = uStack_104;
          uStack_160 = uStack_100;
          uStack_15c = uStack_fc;
          uStack_158 = uStack_f8;
          uStack_154 = uStack_f4;
          uStack_150 = uStack_f0;
          uStack_14c = uStack_ec;
          uStack_148 = 0;
          uStack_13c = 0;
          uStack_138 = uStack_1c8;
          uStack_134 = uStack_1c4;
          uStack_130 = uStack_1c0;
          uStack_12c = uStack_1bc;
          iStack_144 = iVar10 + iVar11;
          uStack_140 = uVar14;
          cVar9 = pdb_1413f6d90(uVar2,&uStack_178);
          if (cVar9 != '\0') {
            *puStack_218 = 1;
          }
        }
        lVar12 = lVar12 + 0x10;
      } while (lVar12 != 0x30);
    }
  }
  return;
}

