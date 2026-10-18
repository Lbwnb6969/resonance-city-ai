// VA 0x1408bb8b0, PDB extent 3322 bytes
// system_decorator::decorator_visual::playermade_stairs::utils::stairs_wooden_railings_assemble::assemble_wooden_railing_tips_at
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/playermade_stairs/utils/stairs_wooden_railings_assemble.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_decorator::decorator_visual::playermade_stairs::utils::stairs_wooden_railings_assemble::assemble_wooden_railing_tips_at
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/playermade_stairs/utils/stairs_wooden_railings_assemble.rs
   Extent: 3322 */

void pdb_1408bb8b0(longlong param_1,longlong param_2,ulonglong *param_3,undefined4 param_4,
                  byte param_5,longlong param_6)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  code *pcVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  byte *pbVar13;
  ulonglong uVar14;
  float *pfVar15;
  bool bVar16;
  float *unaff_RDI;
  ulonglong uVar17;
  longlong lVar18;
  ulonglong uVar19;
  float *pfVar20;
  float *pfVar21;
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
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  float fStack_240;
  float fStack_23c;
  byte *pbStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  float fStack_208;
  float fStack_204;
  float fStack_200;
  float fStack_1fc;
  float fStack_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  float fStack_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  float fStack_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  float fStack_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  longlong lStack_170;
  undefined1 auStack_168 [16];
  undefined1 auStack_158 [16];
  ulonglong uStack_140;
  longlong lStack_138;
  float fStack_12c;
  float *pfStack_128;
  byte *pbStack_120;
  float *pfStack_118;
  longlong lStack_110;
  float fStack_108;
  undefined4 uStack_104;
  ulonglong uStack_100;
  ulonglong *puStack_f8;
  undefined8 uStack_f0;
  
  uStack_f0 = 0xfffffffffffffffe;
  if (1 < param_5) {
    lVar18 = param_1 + param_2 * 0x48;
    fStack_12c = *(float *)(&UNK_143015980 + (ulonglong)(param_5 == 2) * 4);
    lStack_138 = param_6 + 0x60;
    uStack_104 = param_4;
    puStack_f8 = param_3;
LAB_1408bba14:
    if (param_1 != lVar18) {
      pdb_14007ee60();
      pbVar13 = pub_1406abab0(0x18,4);
      if (pbVar13 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc7e11(4,0x18);
      }
      *(undefined4 *)(pbVar13 + 8) = *(undefined4 *)(param_1 + 0x24);
      *(undefined8 *)pbVar13 = *(undefined8 *)(param_1 + 0x1c);
      *(undefined8 *)(pbVar13 + 0xc) = *(undefined8 *)(param_1 + 0x10);
      *(undefined4 *)(pbVar13 + 0x14) = *(undefined4 *)(param_1 + 0x18);
      uStack_258 = 2;
      uStack_248 = 2;
      uStack_250 = pbVar13;
      pdb_140080930(&fStack_1c8,&uStack_258,0);
      if (!SBORROW8(0,CONCAT44(fStack_1c4,fStack_1c8))) {
        uStack_228 = CONCAT44(uStack_194,uStack_198);
        pbStack_238 = (byte *)CONCAT44(fStack_1a4,fStack_1a8);
        uStack_230 = CONCAT44(fStack_19c,fStack_1a0);
        uStack_248 = CONCAT44(fStack_1b4,fStack_1b8);
        fStack_240 = fStack_1b0;
        fStack_23c = fStack_1ac;
        uStack_258 = CONCAT44(fStack_1c4,fStack_1c8);
        uStack_250 = (byte *)CONCAT44(fStack_1bc,fStack_1c0);
        pdb_14148ba90(&fStack_208,&uStack_258,_DAT_143015988,1);
        if (uStack_258 != 0) {
          pub_1406abac0(uStack_250,uStack_258 * 0xc,4);
        }
        if (CONCAT44(fStack_23c,fStack_240) != 0) {
          pub_1406abac0(pbStack_238,CONCAT44(fStack_23c,fStack_240) << 2,4);
        }
        lVar7 = CONCAT44(fStack_204,fStack_208);
        if (!SBORROW8(0,lVar7)) {
          pfVar20 = (float *)CONCAT44(fStack_1fc,fStack_200);
          uStack_100 = CONCAT44(fStack_1f4,fStack_1f8);
          lStack_110 = lVar7;
          if (CONCAT44(fStack_1ec,fStack_1f0) != 0) {
            pub_1406abac0((byte *)CONCAT44(fStack_1e4,fStack_1e8),
                          CONCAT44(fStack_1ec,fStack_1f0) << 2,4);
          }
          lStack_170 = lVar18;
          pfStack_118 = pfVar20;
          if (uStack_100 == 0) {
            pbVar13 = (byte *)0x4;
          }
          else {
            uVar14 = uStack_100 * 4;
            pdb_14007ee60();
            pbVar13 = pub_1406abae0(uVar14,4);
            if (pbVar13 == (byte *)0x0) {
              pdb_142dc7e2a(4,uVar14);
                    /* WARNING: Does not return */
              pcVar6 = (code *)invalidInstructionException();
              (*pcVar6)();
            }
          }
          pbStack_120 = pbVar13;
          pdb_1408bae10(puStack_f8,uStack_104,param_6,pfVar20,uStack_100,pbVar13,uStack_100,param_5,
                        0);
          param_1 = param_1 + 0x48;
          pfStack_128 = pfStack_118 + uStack_100 * 3;
          bVar16 = true;
          uStack_140 = 0;
          pfVar20 = pfStack_118;
          while (lVar18 = lStack_170, pfVar20 != pfStack_128) {
            pfVar21 = pfVar20 + 3;
            pfVar15 = pfVar20;
            if (bVar16) {
              unaff_RDI = pfStack_128;
              if (pfVar21 == pfStack_128) break;
              pfVar15 = pfVar21;
              unaff_RDI = pfVar20;
              pfVar21 = pfVar20 + 6;
            }
            fStack_108 = *unaff_RDI;
            auStack_168 = ZEXT416((uint)unaff_RDI[2]);
            auStack_158 = ZEXT416((uint)(unaff_RDI[1] + _DAT_142f95158));
            fVar25 = *pfVar15;
            uVar1 = *(undefined8 *)(pfVar15 + 1);
            fVar22 = (float)pdb_140e02880(puStack_f8);
            fVar23 = (float)pdb_140e02880(puStack_f8);
            fVar24 = (float)pdb_140e02880(puStack_f8);
            if (uStack_100 <= uStack_140) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc81f2(uStack_140,uStack_100,&UNK_143015e90);
            }
            fVar28 = *(float *)(pbStack_120 + uStack_140 * 4);
            fVar25 = fVar25 + (fVar22 + _DAT_142e36f38) * fVar28 * _DAT_142e3787c;
            fVar29 = (fVar23 + _DAT_142e61230) * fVar28 * _DAT_1430151c0 +
                     (float)uVar1 + _DAT_143015990;
            fVar30 = (fVar24 + _UNK_142e61234) * fVar28 * _UNK_1430151c4 +
                     (float)((ulonglong)uVar1 >> 0x20) + _UNK_143015994;
            fVar31 = fVar25 - fStack_108;
            fVar26 = fVar29 - (float)auStack_158._0_4_;
            fVar23 = fVar30 - (float)auStack_168._0_4_;
            fVar22 = _DAT_142e36f28 / SQRT(fVar23 * fVar23 + fVar31 * fVar31 + fVar26 * fVar26);
            fVar31 = fVar31 * fVar22;
            fVar26 = fVar22 * fVar26;
            fVar22 = fVar22 * fVar23;
            fVar27 = fVar31 - fVar26 * 0.0;
            fVar23 = fVar26 * 0.0 - fVar22;
            fVar24 = fVar22 * 0.0 - fVar31 * 0.0;
            fVar36 = _DAT_142e36f28 / SQRT(fVar27 * fVar27 + fVar24 * fVar24 + fVar23 * fVar23);
            fVar23 = fVar36 * fVar23;
            fVar24 = fVar36 * fVar24;
            fVar36 = fVar36 * fVar27;
            fVar34 = fVar22 * fVar24 - fVar26 * fVar36;
            fVar35 = fVar36 * fVar31 - fVar23 * fVar22;
            fVar33 = fVar26 * fVar23 - fVar24 * fVar31;
            fVar27 = _DAT_142e36f28 / SQRT(fVar33 * fVar33 + fVar35 * fVar35 + fVar34 * fVar34);
            fVar33 = fVar33 * fVar27 * _DAT_14300c2e0;
            uVar17 = *puStack_f8;
            uVar14 = uVar17 + 0xa0761d6478bd642f;
            *puStack_f8 = uVar14;
            auVar2._8_8_ = 0;
            auVar2._0_8_ = uVar14 ^ 0xe7037ed1a0b428db;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = uVar14;
            uVar19 = SUB168(auVar2 * auVar4,8) ^ SUB168(auVar2 * auVar4,0);
            if ((uint)((int)uVar19 * 1000) < 0x128) {
              uVar17 = uVar17 + 0x40ec3ac8f17ac85e;
              do {
                uVar14 = uVar14 + 0xa0761d6478bd642f;
                auVar3._8_8_ = 0;
                auVar3._0_8_ = uVar17 ^ 0xe7037ed1a0b428db;
                auVar5._8_8_ = 0;
                auVar5._0_8_ = uVar17;
                uVar19 = SUB168(auVar3 * auVar5,8) ^ SUB168(auVar3 * auVar5,0);
                uVar17 = uVar17 + 0xa0761d6478bd642f;
              } while ((uint)((int)uVar19 * 1000) < 0x128);
              *puStack_f8 = uVar14;
            }
            uVar12 = pdb_1409012c0(uStack_104);
            pdb_140a77410(&uStack_258);
            fVar11 = _UNK_1430159a8;
            fVar10 = _UNK_143015968;
            fVar9 = _UNK_143015964;
            fVar8 = _DAT_143015960;
            fVar32 = SQRT(((float)auStack_168._0_4_ - fVar30) * ((float)auStack_168._0_4_ - fVar30)
                          + ((float)auStack_158._0_4_ - fVar29) *
                            ((float)auStack_158._0_4_ - fVar29) +
                            (fStack_108 - fVar25) * (fStack_108 - fVar25));
            fStack_1c8 = fVar23 * _DAT_143015960;
            fStack_1c4 = fVar24 * _UNK_143015964;
            fStack_1c0 = fVar36 * _UNK_143015968;
            fStack_1bc = fVar31 * fVar32;
            fStack_1b8 = fVar26 * fVar32;
            fStack_1b4 = fVar22 * fVar32;
            fStack_1b0 = fVar34 * fVar27 * _UNK_1430159a8;
            fStack_1ac = fVar35 * fVar27 * _UNK_1430159a8;
            fVar23 = fStack_108 + 0.0;
            fStack_1a0 = fStack_12c + (float)auStack_158._0_4_;
            fVar22 = (float)auStack_168._0_4_ + 0.0;
            uStack_198 = 0;
            uStack_194 = (undefined4)((uVar19 & 0xffffffff) * 1000 >> 0x20);
            uStack_18c = 0x18;
            uStack_188 = uStack_218;
            uStack_184 = uStack_214;
            uStack_180 = uStack_210;
            uStack_17c = uStack_20c;
            fStack_1a8 = fVar33;
            fStack_1a4 = fVar23;
            fStack_19c = fVar22;
            uStack_190 = uVar12;
            pdb_1414aa5f0(lStack_138,&fStack_1c8);
            uStack_140 = uStack_140 + 1;
            bVar16 = false;
            unaff_RDI = pfVar15;
            pfVar20 = pfVar21;
            if (param_5 != 2) {
              fVar31 = (float)auStack_158._0_4_ + _DAT_142f95158;
              fVar29 = fVar29 + _DAT_143015990;
              fVar30 = fVar30 + _UNK_143015994;
              fVar24 = (float)pdb_140e02880(puStack_f8);
              fVar26 = (float)pdb_140e02880(puStack_f8);
              fVar27 = (float)pdb_140e02880(puStack_f8);
              fStack_1fc = (fVar25 + fVar28 * (fVar24 + _DAT_142e36f38) * _DAT_142e3787c) -
                           fStack_108;
              fVar31 = (fVar29 + fVar28 * (fVar26 + _DAT_142e61230) * _DAT_1430151c0) - fVar31;
              fVar25 = (fVar30 + fVar28 * (fVar27 + _UNK_142e61234) * _UNK_1430151c4) -
                       (float)auStack_168._0_4_;
              fStack_1f4 = _DAT_142e36f28 /
                           SQRT(fVar25 * fVar25 + fStack_1fc * fStack_1fc + fVar31 * fVar31);
              fStack_1fc = fStack_1fc * fStack_1f4;
              fVar31 = fStack_1f4 * fVar31;
              fStack_1f4 = fStack_1f4 * fVar25;
              fVar25 = fStack_1fc - fVar31 * 0.0;
              fStack_208 = fVar31 * 0.0 - fStack_1f4;
              fStack_204 = fStack_1f4 * 0.0 - fStack_1fc * 0.0;
              fStack_200 = _DAT_142e36f28 /
                           SQRT(fVar25 * fVar25 + fStack_204 * fStack_204 + fStack_208 * fStack_208)
              ;
              fStack_208 = fStack_200 * fStack_208;
              fStack_204 = fStack_200 * fStack_204;
              fStack_200 = fStack_200 * fVar25;
              fVar28 = fStack_1f4 * fStack_204 - fVar31 * fStack_200;
              fVar26 = fStack_200 * fStack_1fc - fStack_208 * fStack_1f4;
              fVar25 = fVar31 * fStack_208 - fStack_204 * fStack_1fc;
              fVar24 = _DAT_142e36f28 / SQRT(fVar25 * fVar25 + fVar26 * fVar26 + fVar28 * fVar28);
              fStack_208 = fVar8 * fStack_208;
              fStack_204 = fVar9 * fStack_204;
              fStack_200 = fVar10 * fStack_200;
              fStack_1fc = fVar32 * fStack_1fc;
              fStack_1f8 = fVar32 * fVar31;
              fStack_1f4 = fVar32 * fStack_1f4;
              fStack_1f0 = fVar11 * fVar24 * fVar28;
              fStack_1ec = fVar11 * fVar24 * fVar26;
              fStack_1e8 = fVar25 * fVar24 * _DAT_14300c2e0;
              fStack_1e0 = (float)auStack_158._0_4_ + _DAT_1430159b0;
              bVar16 = false;
              fStack_1e4 = fVar23;
              fStack_1dc = fVar22;
              pdb_1408b9880(puStack_f8,uStack_104,lStack_138,&fStack_208);
            }
          }
          if (uStack_100 != 0) {
            pub_1406abac0(pbStack_120,uStack_100 << 2,4);
          }
          if (lStack_110 != 0) {
            pub_1406abac0((byte *)pfStack_118,lStack_110 * 0xc,4);
          }
          goto LAB_1408bba14;
        }
      }
      param_1 = param_1 + 0x48;
      goto LAB_1408bba14;
    }
  }
  return;
}

