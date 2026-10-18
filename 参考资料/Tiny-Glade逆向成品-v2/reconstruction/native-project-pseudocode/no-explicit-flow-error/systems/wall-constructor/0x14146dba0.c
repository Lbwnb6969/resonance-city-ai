// VA 0x14146dba0, PDB extent 4382 bytes
// system_wall_constructor::construct_lintels::place_support_beams::place_support_beams<system_wall_constructor::construct_lintels::construct_lintels::closure_env$2>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_lintels/place_support_beams.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_wall_constructor::construct_lintels::place_support_beams::place_support_beams<system_wall_constructor::construct_lintels::construct_lintels::closure_env$2>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_lintels/place_support_beams.rs
   Extent: 4382 */

void pdb_14146dba0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulonglong param_6,ulonglong param_7,undefined4 *param_8,
                  longlong param_9,ulonglong param_10,longlong param_11,ulonglong param_12,
                  undefined4 param_13)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  char cVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  byte bVar19;
  ulonglong uVar20;
  longlong lVar21;
  char cVar22;
  char cVar23;
  float fVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  bool bVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined8 uVar32;
  undefined4 uVar33;
  undefined8 uVar34;
  undefined4 uVar35;
  undefined4 uStack_240;
  undefined8 uStack_23c;
  undefined4 uStack_234;
  ulonglong uStack_230;
  undefined8 uStack_228;
  undefined4 uStack_220;
  float fStack_21c;
  char cStack_218;
  ulonglong uStack_210;
  ulonglong uStack_208;
  float fStack_200;
  undefined4 uStack_1fc;
  uint uStack_1f8;
  undefined4 uStack_1f4;
  undefined8 uStack_1ec;
  undefined4 uStack_1e4;
  char cStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  ulonglong uStack_1c0;
  ulonglong uStack_1b8;
  ulonglong uStack_1b0;
  ulonglong uStack_1a8;
  undefined4 uStack_1a0;
  undefined8 uStack_19c;
  undefined4 uStack_194;
  ulonglong uStack_190;
  undefined8 uStack_188;
  undefined4 uStack_180;
  float fStack_17c;
  char cStack_178;
  ulonglong uStack_170;
  float fStack_168;
  undefined8 uStack_164;
  undefined4 uStack_15c;
  float fStack_158;
  undefined8 uStack_154;
  undefined4 uStack_14c;
  char cStack_148;
  ulonglong uStack_140;
  float fStack_138;
  undefined8 uStack_134;
  undefined4 uStack_12c;
  float fStack_128;
  undefined8 uStack_124;
  undefined4 uStack_11c;
  char cStack_118;
  longlong lStack_110;
  ulonglong uStack_108;
  ulonglong uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  ulonglong uStack_d8;
  ulonglong uStack_d0;
  
  uVar12 = param_6;
  uVar14 = param_7;
  uStack_1d0 = param_4;
  uStack_1c8 = param_3;
  fVar29 = (float)pdb_1406d0830();
  fVar9 = _DAT_14330b2b4;
  fVar8 = _DAT_14330b2b0;
  fVar7 = _DAT_143011010;
  fVar6 = _DAT_142e36f50;
  fVar5 = _DAT_142e36f28;
  uStack_e0 = param_5;
  uStack_d8 = param_6;
  uStack_d0 = param_7;
  bVar28 = true;
  uVar17 = 0;
  uVar18 = param_7;
  uVar20 = 0;
  uVar27 = 0;
  lVar21 = 2;
  uVar26 = 0xffffffffffffffff;
  uStack_210 = uVar14;
  uStack_1d8 = param_2;
  uStack_f8 = param_2;
  uStack_f0 = param_3;
  uStack_e8 = param_4;
  do {
    uVar25 = uVar26;
    if (lVar21 == 2) {
      uVar26 = uVar27;
      if (uVar14 <= uVar27) goto LAB_14146e650;
      while( true ) {
        if (param_10 <= uVar26) goto LAB_14146ebdd;
        if ((*(byte *)(param_9 + uVar26) & 0xf) != 0) break;
        uVar26 = uVar26 + 1;
        if (uVar14 == uVar26) goto LAB_14146e650;
      }
      uVar27 = uVar26 + 1;
    }
    else {
      uVar26 = uVar18;
      if (lVar21 == 0) {
LAB_14146e650:
        if ((uVar20 & 1) == 0) goto LAB_14146e8f8;
        uStack_1a8 = uVar17;
        if (param_7 <= uVar12) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(fVar29,param_7,&UNK_143510a70);
        }
        uStack_220 = *(undefined4 *)(param_6 + 8 + uVar12 * 0xc);
        uStack_228 = *(undefined8 *)(param_6 + uVar12 * 0xc);
        uStack_240 = 0;
        fStack_21c = 0.0;
        cStack_218 = '\0';
        uStack_230 = uVar12;
        if (uVar12 == 0) goto LAB_14146e8f8;
        uVar27 = param_7;
        lVar21 = param_9;
        uVar18 = param_10;
        pdb_1424c4360(&uStack_208,&uStack_240,uVar12 - 1,param_6,param_7,param_9,param_10);
        uVar33 = (undefined4)((ulonglong)lVar21 >> 0x20);
        uVar35 = (undefined4)(uVar27 >> 0x20);
        fVar29 = 0.0;
        uStack_1b8 = uVar12;
        if (cStack_1e0 == '\x02') goto LAB_14146e7ed;
        lVar16 = uVar12 - 2;
        cVar23 = '\0';
        break;
      }
    }
    if (bVar28) {
      uVar12 = uVar26;
    }
    uVar18 = uVar27;
    uVar13 = uVar27;
    if (uVar27 < uVar14) {
      do {
        if (param_10 <= uVar18) {
LAB_14146ebdd:
          if (uVar27 <= param_10) {
            uVar27 = param_10;
          }
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar27,param_10,&UNK_14330b430);
        }
        if ((*(byte *)(param_9 + uVar18) & 0xf) != 0) {
          uVar13 = uVar18 + 1;
          lVar21 = 1;
          goto joined_r0x00014146de42;
        }
        uVar18 = uVar18 + 1;
        uVar13 = uVar14;
      } while (uVar14 != uVar18);
    }
    lVar21 = 0;
    uVar17 = CONCAT71((int7)(uVar17 >> 8),1);
    uVar18 = uVar13;
    uStack_1c0 = uVar26;
joined_r0x00014146de42:
    bVar19 = (byte)uVar20 | bVar28;
    bVar28 = false;
    uVar20 = CONCAT71((int7)(uVar20 >> 8),bVar19);
    uVar27 = uVar13;
    if (uVar25 < uVar26) {
      if (param_7 <= uVar25) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(uVar25,param_7,&UNK_143510a70);
      }
      uStack_180 = *(undefined4 *)(param_6 + 8 + uVar25 * 0xc);
      uStack_188 = *(undefined8 *)(param_6 + uVar25 * 0xc);
      uStack_1a0 = 0;
      fStack_17c = 0.0;
      cStack_178 = '\0';
      uStack_1b8 = uVar12;
      uStack_1a8 = uVar17;
      uStack_190 = uVar25;
      lStack_110 = lVar21;
      uStack_108 = uVar20;
      uStack_100 = uVar13;
      if (param_7 <= uVar26) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(uVar26,param_7,&UNK_143510a70);
      }
      uStack_220 = *(undefined4 *)(param_6 + 8 + uVar26 * 0xc);
      uStack_228 = *(undefined8 *)(param_6 + uVar26 * 0xc);
      uStack_240 = 0;
      fStack_21c = 0.0;
      cStack_218 = '\0';
      uVar27 = uVar25 + 1;
      uStack_230 = uVar26;
      pdb_1424c4360(&uStack_170,&uStack_1a0,uVar27,param_6,param_7,param_9,param_10);
      uVar14 = uVar26 - 1;
      uVar20 = param_7;
      lVar21 = param_9;
      uVar17 = param_10;
      fVar29 = (float)pdb_1424c4360(&uStack_140,&uStack_240,uVar14,param_6,param_7,param_9,param_10)
      ;
      bVar28 = uVar26 <= uVar27;
      uStack_1b0 = uVar25 + 2;
      if (bVar28) {
        uStack_1b0 = uVar27;
      }
      fVar30 = 0.0;
      cVar15 = '\0';
      fVar31 = 0.0;
      uVar27 = uVar26;
      uVar12 = uVar25;
      cVar23 = '\0';
      do {
        cVar22 = cStack_118;
        uVar13 = uStack_140;
        uVar35 = (undefined4)((ulonglong)lVar21 >> 0x20);
        uVar33 = (undefined4)(uVar20 >> 0x20);
        cVar1 = cStack_148;
        if (cStack_148 == '\x02') {
          if (cStack_118 == '\x02') break;
LAB_14146e0a0:
          if (cVar23 == '\x01') goto LAB_14146ebc5;
          uStack_230 = uStack_140;
          uStack_240 = 1;
          uStack_234 = uStack_12c;
          uStack_23c = uStack_134;
          uStack_220 = uStack_11c;
          uStack_228 = uStack_124;
          fVar30 = fVar30 + fStack_138;
          cStack_218 = cStack_118;
          fStack_21c = fVar30;
          if (uVar25 < uVar14) {
            uVar14 = uVar14 - 1;
            uVar20 = param_7;
            lVar21 = param_9;
            uVar17 = param_10;
            fVar29 = (float)pdb_1424c4360(&uStack_140,&uStack_240,uVar14,param_6,param_7,param_9,
                                          param_10);
          }
          else {
            cStack_118 = '\x02';
            fVar29 = fStack_138;
            cStack_218 = cVar22;
          }
        }
        else {
          if ((cStack_118 != '\x02') && (fStack_128 <= fStack_158)) goto LAB_14146e0a0;
          if (cVar15 == '\x01') goto LAB_14146ebc5;
          uStack_190 = uStack_170;
          uStack_1a0 = 1;
          uStack_194 = uStack_15c;
          uStack_19c = uStack_164;
          uStack_180 = uStack_14c;
          uStack_188 = uStack_154;
          fVar31 = fVar31 + fStack_168;
          cStack_178 = cStack_148;
          bVar3 = true;
          uVar13 = uVar27;
          cVar22 = cVar23;
          uVar12 = uStack_170;
          fStack_17c = fVar31;
          cVar15 = cStack_148;
          if (bVar28) {
LAB_14146e087:
            bVar28 = bVar3;
            cStack_148 = '\x02';
            fVar29 = fStack_168;
            cStack_178 = cVar1;
          }
          else {
            if (uVar26 < uStack_1b0) {
              bVar3 = false;
              goto LAB_14146e087;
            }
            bVar28 = uStack_1b0 >= uVar26;
            uVar27 = uStack_1b0 + (uStack_1b0 < uVar26);
            uVar20 = param_7;
            lVar21 = param_9;
            uVar17 = param_10;
            fVar29 = (float)pdb_1424c4360(&uStack_170,&uStack_1a0,uStack_1b0,param_6,param_7,param_9
                                          ,param_10);
            uStack_1b0 = uVar27;
          }
        }
        uVar35 = (undefined4)((ulonglong)lVar21 >> 0x20);
        uVar33 = (undefined4)(uVar20 >> 0x20);
        uVar27 = uVar13;
        cVar23 = cVar22;
      } while (uVar12 < uVar13);
      uVar10 = uStack_1fc;
      fVar24 = (float)uVar26;
      uStack_1fc = (undefined4)(uVar26 >> 0x20);
      uVar11 = uStack_1fc;
      uStack_1fc = uVar10;
      if (((uVar12 != uVar27) || (fVar8 < fVar30 + fVar31)) || (fVar30 + fVar31 < fVar5)) {
LAB_14146e2e0:
        if (fVar5 <= fVar31) {
          fStack_200 = (float)uVar12;
          uStack_1fc = (undefined4)(uVar12 >> 0x20);
          uStack_1f8 = uStack_1f8 & 0xffffff00;
          uVar32 = CONCAT44(uVar33,param_13);
          uStack_208 = uVar25;
          fVar29 = (float)pdb_14146d510(&uStack_f8,param_1,&uStack_208,param_8,uVar32);
          uVar33 = (undefined4)((ulonglong)uVar32 >> 0x20);
          bVar28 = true;
          if (fVar5 <= fVar30) goto LAB_14146e30d;
LAB_14146e3aa:
          bVar3 = false;
          uVar14 = uStack_210;
        }
        else {
          bVar28 = false;
          if (fVar30 < fVar5) goto LAB_14146e3aa;
LAB_14146e30d:
          uVar14 = uStack_210;
          uStack_1f8 = uStack_1f8 & 0xffffff00;
          uStack_208 = uVar27;
          fStack_200 = fVar24;
          uStack_1fc = uVar11;
          fVar29 = (float)pdb_14146d510(&uStack_f8,param_1,&uStack_208,param_8,
                                        CONCAT44(uVar33,param_13));
          bVar3 = true;
        }
        uVar4 = uStack_1c8;
        uVar32 = uStack_1d0;
        bVar2 = bVar28;
        if (uVar12 == uVar27) {
          bVar2 = (bool)(bVar3 | bVar28);
          bVar3 = (bool)(bVar3 | bVar28);
        }
        uVar34 = uStack_1d8;
        if ((bool)(uVar12 == uVar27 & bVar2 & bVar3)) goto joined_r0x00014146e3ff;
        if (bVar2) {
          if (param_12 <= uVar25) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2(uVar25,param_12,&UNK_14330b3a0);
          }
          uVar34 = CONCAT44(uVar35,fVar31 * fVar7);
          uVar17 = CONCAT71((int7)(uVar17 >> 8),1);
          fVar29 = (float)pdb_14146ecc0(*(undefined4 *)(param_1 + 0x274),
                                        *(undefined4 *)(param_11 + uVar25 * 8),
                                        *(undefined4 *)(param_11 + 4 + uVar25 * 8),uStack_1d8,
                                        uStack_1c8,uVar34,uVar17,uStack_1d0,param_5,*param_8,
                                        param_8[2],param_13,(int)uVar25);
          uVar35 = (undefined4)((ulonglong)uVar34 >> 0x20);
        }
        if (bVar3) {
          if (param_12 <= uVar26) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2(uVar26,param_12,&UNK_14330b3b8);
          }
          fVar29 = (float)pdb_14146ecc0(*(undefined4 *)(param_1 + 0x274),
                                        *(undefined4 *)(param_11 + uVar26 * 8),
                                        *(undefined4 *)(param_11 + 4 + uVar26 * 8),uStack_1d8,uVar4,
                                        CONCAT44(uVar35,fVar30 * fVar7),uVar17 & 0xffffffffffffff00,
                                        uVar32,param_5,*param_8,param_8[2],param_13,fVar24);
        }
      }
      else {
        uVar14 = uVar25;
        if (uVar27 == uVar25) {
LAB_14146e281:
          if (uVar14 != uVar26) {
            uVar20 = param_7;
            lVar21 = param_9;
            uVar17 = param_10;
            fVar29 = (float)pdb_1424c4360(&uStack_208,&uStack_240,uVar14,param_6,param_7,param_9,
                                          param_10);
            uVar35 = (undefined4)((ulonglong)lVar21 >> 0x20);
            uVar33 = (undefined4)(uVar20 >> 0x20);
            if (cStack_1e0 != '\x02') goto LAB_14146e5d9;
          }
          goto LAB_14146e2e0;
        }
        uVar14 = param_7;
        lVar21 = param_9;
        uVar17 = param_10;
        fVar29 = (float)pdb_1424c4360(&uStack_208,&uStack_1a0,uVar27,param_6,param_7,param_9,
                                      param_10);
        uVar35 = (undefined4)((ulonglong)lVar21 >> 0x20);
        uVar33 = (undefined4)(uVar14 >> 0x20);
        uVar14 = uVar27;
        if (cStack_1e0 == '\x02') goto LAB_14146e281;
LAB_14146e5d9:
        uStack_1f8 = uStack_1f8 & 0xffffff00;
        uStack_208 = uVar25;
        fStack_200 = fVar24;
        uStack_1fc = uVar11;
        fVar29 = (float)pdb_14146d510(&uStack_f8,param_1,&uStack_208,param_8,
                                      CONCAT44(uVar33,param_13));
        uVar14 = uStack_210;
        uVar34 = uStack_1d8;
        uVar32 = uStack_1d0;
        uVar4 = uStack_1c8;
joined_r0x00014146e3ff:
        uStack_1d8 = uVar34;
        uStack_1d0 = uVar32;
        uStack_1c8 = uVar4;
        if (fVar9 <= fVar30 + fVar31) {
          fVar29 = (fVar30 + fVar31) * fVar6;
          if (param_12 <= uVar25) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2(uVar25,param_12,&UNK_14330b3d0);
          }
          uVar27 = CONCAT71((int7)(uVar17 >> 8),1);
          pdb_14146ecc0(*(undefined4 *)(param_1 + 0x274),*(undefined4 *)(param_11 + uVar25 * 8),
                        *(undefined4 *)(param_11 + 4 + uVar25 * 8),uVar34,uVar4,
                        CONCAT44(uVar35,fVar29),uVar27,uVar32,param_5,*param_8,param_8[2],param_13,
                        (int)uVar25);
          if (param_12 <= uVar26) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2(uVar26,param_12,&UNK_14330b3e8);
          }
          fVar29 = (float)pdb_14146ecc0(*(undefined4 *)(param_1 + 0x274),
                                        *(undefined4 *)(param_11 + uVar26 * 8),
                                        *(undefined4 *)(param_11 + 4 + uVar26 * 8),uVar34,uVar4,
                                        fVar29,uVar27 & 0xffffffffffffff00,uVar32,param_5,*param_8,
                                        param_8[2],param_13,fVar24);
          uVar14 = uStack_210;
        }
      }
      bVar28 = false;
      uVar12 = uStack_1b8;
      uVar17 = uStack_1a8;
      uVar20 = uStack_108;
      uVar27 = uStack_100;
      lVar21 = lStack_110;
    }
  } while( true );
  while( true ) {
    uVar27 = param_7;
    lVar21 = param_9;
    uVar18 = param_10;
    pdb_1424c4360(&uStack_208,&uStack_240,lVar16,param_6,param_7,param_9,param_10);
    uVar33 = (undefined4)((ulonglong)lVar21 >> 0x20);
    uVar35 = (undefined4)(uVar27 >> 0x20);
    lVar16 = lVar16 + -1;
    cVar23 = cVar15;
    if (cStack_1e0 == '\x02') break;
    cVar15 = cStack_1e0;
    uVar12 = uStack_208;
    uVar33 = (undefined4)((ulonglong)lVar21 >> 0x20);
    uVar35 = (undefined4)(uVar27 >> 0x20);
    if (cVar23 == '\x01') goto LAB_14146ebc5;
    fVar29 = fVar29 + fStack_200;
    uStack_230 = uStack_208;
    uStack_240 = 1;
    uStack_234 = uStack_1f4;
    uStack_23c = CONCAT44(uStack_1f8,uStack_1fc);
    uStack_220 = uStack_1e4;
    uStack_228 = uStack_1ec;
    cStack_218 = cStack_1e0;
    fStack_21c = fVar29;
    if (lVar16 == -1) break;
  }
LAB_14146e7ed:
  uVar27 = uStack_1b8;
  uVar4 = uStack_1c8;
  uVar32 = uStack_1d0;
  uVar14 = uStack_210;
  uVar17 = uStack_1a8;
  if (_DAT_142e36f28 <= fVar29) {
    fStack_200 = (float)uStack_1b8;
    fVar5 = fStack_200;
    uStack_1fc = (undefined4)(uStack_1b8 >> 0x20);
    uStack_1f8 = uStack_1f8 & 0xffffff00;
    uStack_208 = uVar12;
    pdb_14146d510(&uStack_f8,param_1,&uStack_208,param_8,CONCAT44(uVar35,param_13));
    if (param_12 <= uVar27) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(uVar27,param_12,&UNK_14330b400);
    }
    pdb_14146ecc0(*(undefined4 *)(param_1 + 0x274),*(undefined4 *)(param_11 + uVar27 * 8),
                  *(undefined4 *)(param_11 + 4 + uVar27 * 8),uStack_1d8,uVar4,
                  CONCAT44(uVar33,fVar29 * _DAT_143011010),uVar18 & 0xffffffffffffff00,uVar32,
                  param_5,*param_8,param_8[2],param_13,fVar5);
    uVar17 = uStack_1a8;
  }
LAB_14146e8f8:
  uVar27 = uStack_1c0;
  if ((uVar17 & 1) != 0) {
    if (param_7 <= uStack_1c0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(uStack_1c0,param_7,&UNK_143510a70);
    }
    uStack_220 = *(undefined4 *)(param_6 + 8 + uStack_1c0 * 0xc);
    uStack_228 = *(undefined8 *)(param_6 + uStack_1c0 * 0xc);
    uStack_230 = uStack_1c0;
    uStack_240 = 0;
    fStack_21c = 0.0;
    cStack_218 = '\0';
    if (uStack_1c0 + 1 < uVar14) {
      uVar14 = param_7;
      lVar21 = param_9;
      pdb_1424c4360(&uStack_208,&uStack_240,uStack_1c0 + 1,param_6,param_7,param_9,param_10);
      uVar33 = (undefined4)((ulonglong)lVar21 >> 0x20);
      uVar35 = (undefined4)(uVar14 >> 0x20);
      fVar29 = 0.0;
      if (cStack_1e0 != '\x02') {
        uVar17 = uStack_1c0 + 2;
        cVar23 = '\0';
        do {
          cVar15 = cStack_1e0;
          uVar27 = uStack_208;
          uVar33 = (undefined4)((ulonglong)lVar21 >> 0x20);
          uVar35 = (undefined4)(uVar14 >> 0x20);
          if (cVar23 == '\x01') {
LAB_14146ebc5:
                    /* WARNING: Subroutine does not return */
            pdb_142dc83b0(&UNK_143510a88,0x25,&UNK_143510ab0);
          }
          fVar29 = fVar29 + fStack_200;
          uStack_230 = uStack_208;
          uStack_240 = 1;
          uStack_234 = uStack_1f4;
          uStack_23c = CONCAT44(uStack_1f8,uStack_1fc);
          uStack_220 = uStack_1e4;
          uStack_228 = uStack_1ec;
          cStack_218 = cStack_1e0;
          fStack_21c = fVar29;
          if (uStack_210 == uVar17) break;
          uVar14 = param_7;
          lVar21 = param_9;
          pdb_1424c4360(&uStack_208,&uStack_240,uVar17,param_6,param_7,param_9,param_10);
          uVar33 = (undefined4)((ulonglong)lVar21 >> 0x20);
          uVar35 = (undefined4)(uVar14 >> 0x20);
          uVar17 = uVar17 + 1;
          cVar23 = cVar15;
        } while (cStack_1e0 != '\x02');
      }
      uVar14 = uStack_1c0;
      uVar4 = uStack_1c8;
      uVar32 = uStack_1d0;
      if (_DAT_142e36f28 <= fVar29) {
        uStack_208 = uStack_1c0;
        fStack_200 = (float)uVar27;
        uStack_1fc = (undefined4)(uVar27 >> 0x20);
        uStack_1f8 = uStack_1f8 & 0xffffff00;
        pdb_14146d510(&uStack_f8,param_1,&uStack_208,param_8,CONCAT44(uVar35,param_13));
        if (param_12 <= uVar14) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar14,param_12,&UNK_14330b418);
        }
        pdb_14146ecc0(*(undefined4 *)(param_1 + 0x274),*(undefined4 *)(param_11 + uVar14 * 8),
                      *(undefined4 *)(param_11 + 4 + uVar14 * 8),uStack_1d8,uVar4,
                      CONCAT44(uVar33,fVar29 * _DAT_143011010),1,uVar32,param_5,*param_8,param_8[2],
                      param_13,(int)uVar14);
      }
    }
  }
  return;
}

