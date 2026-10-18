// VA 0x141403450, PDB extent 2863 bytes
// system_wall_constructor::arch_walker::ArchWalker::walk<system_wall_constructor::construct_lintels::place_support_beams::emit_support_beams::closure_env$0<system_wall_constructor::construct_lintels::construct_lintels::closure_env$2> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/arch_walker.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Removing unreachable block (ram,0x000141403626) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_wall_constructor::arch_walker::ArchWalker::walk<system_wall_constructor::construct_lintels::place_support_beams::emit_support_beams::closure_env$0<system_wall_constructor::construct_lintels::construct_lintels::closure_env$2>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/arch_walker.rs
   Extent: 2863 */

void pdb_141403450(longlong param_1,longlong param_2,ulonglong param_3,undefined4 *param_4,
                  ulonglong param_5,float *param_6,ulonglong param_7,undefined8 *param_8)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 *puVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
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
  float fVar28;
  float fVar29;
  float fStack_2c0;
  float fStack_2b8;
  float fStack_2b4;
  float fStack_2b0;
  ulonglong uStack_2a8;
  undefined8 uStack_2a0;
  float fStack_298;
  float fStack_290;
  float fStack_28c;
  float fStack_288;
  float fStack_284;
  float fStack_280;
  float fStack_27c;
  longlong lStack_278;
  undefined4 *puStack_270;
  longlong lStack_268;
  int *piStack_260;
  undefined8 *puStack_258;
  ulonglong uStack_250;
  undefined8 uStack_248;
  code *pcStack_240;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  float fStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined4 uStack_1c8;
  int iStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  float afStack_1a4 [3];
  float fStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  undefined8 uStack_120;
  float fStack_118;
  float fStack_114;
  undefined8 uStack_110;
  undefined1 auStack_108 [16];
  undefined1 auStack_f8 [16];
  
  if (param_5 == 0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(0,0,&UNK_143307160);
  }
  if (param_3 != 0) {
    uVar1 = *param_4;
    uVar6 = param_4[2];
    uStack_248 = (float *)CONCAT44(uVar6,uVar1);
    uStack_250 = param_3;
    pdb_140df4540(&uStack_2a0,&uStack_248);
    uVar9 = uStack_250;
    if (param_5 < uStack_250) {
      uVar9 = param_5;
    }
    fVar24 = 0.0;
    uVar8 = (ulonglong)(uVar9 != 0);
    if (uVar8 < uVar9) {
      uVar7 = uVar8 + 1;
      if (uVar9 == 0) {
        uVar8 = uVar7;
        uVar7 = 2;
      }
      while( true ) {
        uStack_248 = (float *)CONCAT44(param_4[uVar8 * 3 + 2],param_4[uVar8 * 3]);
        pdb_140df4540(&fStack_290,&uStack_248,
                      (float)param_4[uVar8 * 3 + 1] + *(float *)(param_2 + uVar8 * 4));
        fVar24 = fVar24 + SQRT((fStack_288 - fStack_298) * (fStack_288 - fStack_298) +
                               (fStack_28c - uStack_2a0._4_4_) * (fStack_28c - uStack_2a0._4_4_) +
                               (fStack_290 - (float)uStack_2a0) * (fStack_290 - (float)uStack_2a0));
        fStack_298 = fStack_288;
        uStack_2a0 = CONCAT44(fStack_28c,fStack_290);
        if (uVar9 <= uVar7) break;
        uVar8 = uVar7;
        uVar7 = uVar7 + 1;
      }
    }
    fVar11 = (float)pub_142e32a40(fVar24 / *(float *)(param_1 + 8) + _DAT_142e36f50);
    if (fVar11 <= _DAT_142e36f28) {
      fVar11 = _DAT_142e36f28;
    }
    uVar8 = 0;
    if (0.0 <= fVar11) {
      uVar8 = (longlong)(fVar11 - _DAT_142e36f2c) & (longlong)fVar11 >> 0x3f | (longlong)fVar11;
    }
    uVar7 = 0xffffffffffffffff;
    if (fVar11 <= _DAT_142e36f30) {
      uVar7 = uVar8;
    }
    if (param_7 == 0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(0,0,&UNK_143307190);
    }
    fVar24 = fVar24 / (float)uVar7;
    fStack_2c0 = *param_6;
    uStack_248 = (float *)CONCAT44(uVar6,uVar1);
    pdb_140df4540(&fStack_2b8,&uStack_248);
    fVar11 = _DAT_142e36f28;
    if (param_7 < uVar9) {
      uVar9 = param_7;
    }
    puStack_258 = (undefined8 *)*param_8;
    puStack_270 = (undefined4 *)param_8[1];
    piStack_260 = (int *)param_8[2];
    lStack_268 = param_8[3];
    uStack_2a8 = 0;
    fVar26 = 0.0;
    uVar8 = 1;
    lStack_278 = 2;
    fVar23 = fStack_2b4;
    fVar25 = fStack_2b0;
    fVar28 = fStack_2b8;
    if (1 < uVar9) {
      do {
        fVar16 = param_6[uVar8];
        uStack_248 = (float *)CONCAT44(param_4[uVar8 * 3 + 2],param_4[uVar8 * 3]);
        pdb_140df4540(&fStack_284,&uStack_248,
                      (float)param_4[uVar8 * 3 + 1] + *(float *)(param_2 + uVar8 * 4));
        auStack_108 = ZEXT416((uint)fStack_2b8);
        fStack_118 = fStack_280;
        fStack_114 = fStack_27c;
        fStack_128 = fStack_2b4;
        fStack_124 = fStack_2b0;
        auStack_f8 = ZEXT416((uint)fStack_284);
        uStack_110 = 0;
        uStack_120 = 0;
        fVar27 = SQRT((fStack_27c - fStack_2b0) * (fStack_27c - fStack_2b0) +
                      (fStack_280 - fStack_2b4) * (fStack_280 - fStack_2b4) +
                      (fStack_284 - fStack_2b8) * (fStack_284 - fStack_2b8));
        fVar12 = fVar26 + fVar27;
        if (fVar24 < fVar12) {
          fVar22 = 0.0;
          fVar18 = fVar23;
          fVar13 = fVar25;
          fVar29 = fVar28;
          do {
            fVar23 = fVar24 - fVar26;
            if (fVar23 <= 0.0) {
              fVar23 = 0.0;
            }
            fVar22 = fVar23 + fVar22;
            fVar25 = fVar22 / fVar27;
            fVar23 = (float)pdb_140dea7c0(param_1,fVar16);
            fStack_1f8 = (float)pdb_140dea610(param_1,fVar23 * fVar25 + fStack_2c0);
            if ((fStack_1f8 < 0.0) || (fVar11 < fStack_1f8)) {
              uStack_248 = &fStack_1f8;
              pcStack_240 = pdb_140f70fc0;
                    /* WARNING: Subroutine does not return */
              pdb_142dc83d0(&UNK_143307ab0,&uStack_248,&UNK_143307148);
            }
            fVar12 = fVar11 - fVar25;
            fVar28 = (float)auStack_f8._0_4_ * fVar25 + (float)auStack_108._0_4_ * fVar12;
            fVar23 = fVar25 * fStack_118 + fVar12 * fStack_128;
            fVar25 = fVar25 * fStack_114 + fVar12 * fStack_124;
            fVar12 = fVar28 - fVar29;
            fVar19 = (fVar23 + _DAT_143307000) - (fVar18 + _DAT_143008c20);
            fVar20 = (fVar25 + _UNK_143307004) - fVar13;
            fVar21 = SQRT(fVar20 * fVar20 + fVar12 * fVar12 + fVar19 * fVar19);
            fVar17 = fVar11 / fVar21;
            fVar12 = fVar12 * fVar17;
            fVar19 = fVar17 * fVar19;
            fVar17 = fVar17 * fVar20;
            fVar20 = fVar17 * _DAT_142f46980 + fVar12 * _DAT_142e378f0;
            fVar14 = fVar12 * _UNK_142f46984 + fVar19 * _UNK_142e378f4;
            fVar15 = fVar19 * _UNK_142f46988 + fVar17 * _UNK_142e378f8;
            fStack_168 = fVar15 * _DAT_143307010 + fVar12 * _DAT_143307010 + _DAT_143307020;
            fStack_164 = fVar20 * _UNK_143307014 + fVar19 * _UNK_143307014 + _UNK_143307024;
            fStack_160 = fVar14 * _UNK_143307018 + fVar17 * _UNK_143307018 + _UNK_143307028;
            fStack_15c = fVar14 * _UNK_14330701c + fVar17 * _UNK_14330701c + _UNK_14330702c;
            fStack_158 = fVar21 * fVar12 + 0.0 + fVar15 * 0.0;
            fStack_154 = fVar21 * fVar19 + 0.0 + fVar20 * 0.0;
            fStack_150 = fVar21 * fVar17 + 0.0 + fVar14 * 0.0;
            fStack_14c = fVar17 * 0.0 + 0.0 + fVar14 * 0.0;
            fVar12 = fVar12 * 0.0 + 0.0;
            fVar19 = fVar19 * 0.0 + 0.0;
            fVar21 = fVar17 * 0.0 + 0.0;
            fVar17 = fVar17 * 0.0 + 0.0;
            fStack_148 = fVar15 * _DAT_143307030 + fVar12;
            fStack_144 = fVar20 * _UNK_143307034 + fVar19;
            fStack_140 = fVar14 * _UNK_143307038 + fVar21;
            fStack_13c = fVar14 * _UNK_14330703c + fVar17;
            fStack_138 = fVar12 + fVar15 * 0.0 + fVar29;
            fStack_134 = fVar19 + fVar20 * 0.0 + fVar18 + _DAT_143008c20;
            fStack_130 = fVar21 + fVar14 * 0.0 + fVar13;
            fStack_12c = fVar17 + fVar14 * 0.0 + fVar13;
            pdb_140e07fe0(&fStack_198,&fStack_168);
            fVar29 = fVar29 * _DAT_142e4bfe4;
            iVar5 = (int)fVar29;
            if (_DAT_142e382cc < fVar29) {
              iVar5 = 0x7fffffff;
            }
            if (NAN(fVar29)) {
              iVar5 = 0;
            }
            fVar13 = fVar13 * _DAT_142e4bfe4;
            uVar1 = *puStack_270;
            iVar10 = (int)fVar13;
            if (_DAT_142e382cc < fVar13) {
              iVar10 = 0x7fffffff;
            }
            if (NAN(fVar13)) {
              iVar10 = 0;
            }
            iVar2 = *piStack_260;
            uVar6 = pdb_1409012c0(*(undefined4 *)(lStack_268 + 0x274));
            pdb_140a77410(&uStack_248);
            fStack_1f8 = fStack_198;
            uStack_1f4 = uStack_194;
            uStack_1f0 = uStack_190;
            uStack_1ec = uStack_18c;
            uStack_1e8 = uStack_188;
            uStack_1e0 = uStack_180;
            uStack_1d8 = uStack_178;
            uStack_1d0 = uStack_170;
            uStack_1bc = 0;
            uStack_1b8 = uStack_208;
            uStack_1b4 = uStack_204;
            uStack_1b0 = uStack_200;
            uStack_1ac = uStack_1fc;
            puVar3 = (undefined1 *)puStack_258[1];
            uStack_1c8 = uVar1;
            iStack_1c4 = iVar10 + iVar5 + iVar2;
            uStack_1c0 = uVar6;
            cVar4 = pdb_1413f6d90(*puStack_258,&fStack_1f8);
            if (cVar4 != '\0') {
              *puVar3 = 1;
            }
            fVar26 = fVar26 - fVar24;
            if (fVar26 <= 0.0) {
              fVar26 = 0.0;
            }
            fVar12 = (fVar27 - fVar22) + fVar26;
            fVar18 = fVar23;
            fVar13 = fVar25;
            fVar29 = fVar28;
          } while (fVar24 < fVar12);
        }
        if (fVar12 < 0.0) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc83b0(&UNK_1433070d0,0x26,&UNK_143307130);
        }
        uVar8 = uStack_2a8 + lStack_278;
        fStack_2b0 = fStack_27c;
        fStack_2b8 = fStack_284;
        fStack_2b4 = fStack_280;
        lStack_278 = 1;
        fVar26 = fVar12;
        fStack_2c0 = fVar16;
        uStack_2a8 = uVar8;
      } while (uVar8 < uVar9);
    }
    if (fVar24 * *(float *)(param_1 + 0xc) < fVar26) {
      param_5 = param_5 - 1;
      if (param_7 <= param_5) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(param_5,param_7,&UNK_1433071a8);
      }
      uStack_248 = (float *)CONCAT44(param_4[param_5 * 3 + 2],param_4[param_5 * 3]);
      pdb_140df4540(afStack_1a4,&uStack_248,
                    *(float *)(param_2 + -4 + uStack_250 * 4) + (float)param_4[param_5 * 3 + 1]);
      afStack_1a4[0] = afStack_1a4[0] - fVar28;
      fVar27 = ((float)afStack_1a4._4_8_ + _DAT_143307000) - (_DAT_143307000 + fVar23);
      fVar24 = (SUB84(afStack_1a4._4_8_,4) + _UNK_143307004) - (_UNK_143307004 + fVar25);
      fVar12 = SQRT(fVar24 * fVar24 + afStack_1a4[0] * afStack_1a4[0] + fVar27 * fVar27);
      fVar11 = fVar11 / fVar12;
      afStack_1a4[0] = afStack_1a4[0] * fVar11;
      fVar27 = fVar11 * fVar27;
      fVar11 = fVar11 * fVar24;
      fVar24 = fVar11 * _DAT_142f46980 + _DAT_142e378f0 * afStack_1a4[0];
      fVar26 = afStack_1a4[0] * _UNK_142f46984 + _UNK_142e378f4 * fVar27;
      fVar16 = fVar27 * _UNK_142f46988 + _UNK_142e378f8 * fVar11;
      fStack_168 = _DAT_143307010 * fVar16 + afStack_1a4[0] * _DAT_143307010 + _DAT_143307020;
      fStack_164 = _UNK_143307014 * fVar24 + fVar27 * _UNK_143307014 + _UNK_143307024;
      fStack_160 = _UNK_143307018 * fVar26 + fVar11 * _UNK_143307018 + _UNK_143307028;
      fStack_15c = _UNK_14330701c * fVar26 + fVar11 * _UNK_14330701c + _UNK_14330702c;
      fStack_158 = fVar12 * afStack_1a4[0] + 0.0 + fVar16 * 0.0;
      fStack_154 = fVar12 * fVar27 + 0.0 + fVar24 * 0.0;
      fStack_150 = fVar12 * fVar11 + 0.0 + fVar26 * 0.0;
      fStack_14c = fVar11 * 0.0 + 0.0 + fVar26 * 0.0;
      fVar12 = afStack_1a4[0] * 0.0 + 0.0;
      fVar27 = fVar27 * 0.0 + 0.0;
      fVar18 = fVar11 * 0.0 + 0.0;
      fVar11 = fVar11 * 0.0 + 0.0;
      fStack_148 = fVar16 * _DAT_143307030 + fVar12;
      fStack_144 = fVar24 * _UNK_143307034 + fVar27;
      fStack_140 = fVar26 * _UNK_143307038 + fVar18;
      fStack_13c = fVar26 * _UNK_14330703c + fVar11;
      fStack_138 = fVar12 + fVar16 * 0.0 + fVar28;
      fStack_134 = fVar27 + fVar24 * 0.0 + _DAT_143307000 + fVar23;
      fStack_130 = fVar18 + fVar26 * 0.0 + fVar25;
      fStack_12c = fVar11 + fVar26 * 0.0 + fVar25;
      pdb_140e07fe0(&fStack_198);
      fVar28 = fVar28 * _DAT_142e4bfe4;
      iVar5 = (int)fVar28;
      if (_DAT_142e382cc < fVar28) {
        iVar5 = 0x7fffffff;
      }
      if (NAN(fVar28)) {
        iVar5 = 0;
      }
      fVar25 = fVar25 * _DAT_142e4bfe4;
      uVar1 = *puStack_270;
      iVar10 = (int)fVar25;
      if (_DAT_142e382cc < fVar25) {
        iVar10 = 0x7fffffff;
      }
      if (NAN(fVar25)) {
        iVar10 = 0;
      }
      iVar2 = *piStack_260;
      uVar6 = pdb_1409012c0(*(undefined4 *)(lStack_268 + 0x274));
      pdb_140a77410(&uStack_248);
      fStack_1f8 = fStack_198;
      uStack_1f4 = uStack_194;
      uStack_1f0 = uStack_190;
      uStack_1ec = uStack_18c;
      uStack_1e8 = uStack_188;
      uStack_1e0 = uStack_180;
      uStack_1d8 = uStack_178;
      uStack_1d0 = uStack_170;
      uStack_1bc = 0;
      uStack_1b8 = uStack_208;
      uStack_1b4 = uStack_204;
      uStack_1b0 = uStack_200;
      uStack_1ac = uStack_1fc;
      puVar3 = (undefined1 *)puStack_258[1];
      uStack_1c8 = uVar1;
      iStack_1c4 = iVar10 + iVar5 + iVar2;
      uStack_1c0 = uVar6;
      cVar4 = pdb_1413f6d90(*puStack_258,&fStack_1f8);
      if (cVar4 != '\0') {
        *puVar3 = 1;
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc81f2(0,0,&UNK_143307178);
}

