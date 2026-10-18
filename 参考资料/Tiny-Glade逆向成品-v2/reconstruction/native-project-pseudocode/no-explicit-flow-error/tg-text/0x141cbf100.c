// VA 0x141cbf100, PDB extent 4094 bytes
// tg_text::impl$7::generate_primitives::closure$2
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-text/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tg_text::impl$7::generate_primitives::closure$2
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-text/src/lib.rs
   Extent: 4094 */

void pdb_141cbf100(undefined8 *param_1)

{
  byte *pbVar1;
  float *pfVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  float fVar5;
  byte bVar6;
  byte bVar7;
  longlong *plVar8;
  longlong *plVar9;
  ulonglong uVar10;
  code *pcVar11;
  undefined1 auVar12 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined2 uVar18;
  ulonglong uVar19;
  char cVar20;
  char cVar21;
  uint uVar22;
  longlong lVar23;
  int iVar24;
  uint uVar25;
  int iVar26;
  ulonglong uVar27;
  longlong lVar28;
  longlong lVar29;
  int iVar30;
  longlong lVar31;
  ulonglong uVar32;
  byte *pbVar33;
  ulonglong uVar34;
  ulonglong uVar35;
  longlong lVar36;
  ulonglong uVar37;
  bool bVar38;
  byte bVar39;
  float fVar40;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 extraout_XMM0_Qa_04;
  float fVar41;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_02;
  undefined8 extraout_XMM0_Qb_03;
  undefined8 extraout_XMM0_Qb_04;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  ulonglong uStack_290;
  ulonglong uStack_288;
  byte *pbStack_280;
  undefined8 uStack_260;
  undefined8 uStack_258;
  short sStack_250;
  short sStack_24e;
  int iStack_24c;
  int iStack_248;
  uint uStack_244;
  undefined8 uStack_240;
  ulonglong uStack_238;
  undefined8 uStack_230;
  ulonglong uStack_228;
  ulonglong uStack_220;
  ulonglong uStack_218;
  undefined8 uStack_210;
  undefined1 uStack_208;
  undefined4 uStack_204;
  char cStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1e8;
  ulonglong uStack_1d8;
  ulonglong uStack_1d0;
  undefined8 uStack_1c8;
  undefined1 uStack_1c0;
  undefined4 uStack_1bc;
  undefined1 uStack_1b8;
  ulonglong uStack_1b0;
  ulonglong uStack_1a8;
  ulonglong uStack_1a0;
  ulonglong uStack_198;
  ulonglong uStack_190;
  ulonglong uStack_188;
  longlong lStack_180;
  ulonglong uStack_178;
  ulonglong uStack_170;
  byte *pbStack_168;
  undefined4 *puStack_160;
  char *pcStack_158;
  float *pfStack_150;
  longlong lStack_148;
  longlong lStack_140;
  ulonglong uStack_138;
  longlong lStack_130;
  ulonglong uStack_128;
  longlong lStack_120;
  float fStack_118;
  float fStack_114;
  char cStack_10c;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  
  pdb_140cc20f0(&uStack_e0);
  uStack_e8 = uStack_c0;
  uStack_f8 = uStack_d0;
  uStack_f0 = uStack_c8;
  uStack_108 = uStack_e0;
  uStack_100 = uStack_d8;
  pfStack_150 = (float *)*param_1;
  lStack_180 = param_1[1];
  pcStack_158 = (char *)param_1[2];
  plVar8 = (longlong *)param_1[3];
  puStack_160 = (undefined4 *)param_1[5];
  lVar31 = param_1[6];
  plVar9 = (longlong *)param_1[4];
  pdb_140cc8440(&lStack_140,&uStack_108);
  uVar17 = _UNK_1433ac9d8;
  uVar16 = _DAT_1433ac9d0;
  fVar15 = _UNK_142f69444;
  fVar14 = _DAT_142e382cc;
  lStack_148 = lVar31;
  lVar29 = lStack_130;
  uStack_178 = uStack_128;
  fVar13 = fStack_118;
  fVar5 = fStack_114;
joined_r0x000141cbf1ee:
  if (cStack_10c == '\x02') {
    return;
  }
  fVar40 = *pfStack_150;
  fVar41 = fVar5;
  if (fVar5 <= fVar40) {
    fVar41 = fVar40;
  }
  *pfStack_150 = (float)(~-(uint)NAN(fVar40) & (uint)fVar41 | -(uint)NAN(fVar40) & (uint)fVar5);
  lStack_130 = lVar29;
  uStack_128 = uStack_178;
  fStack_118 = fVar13;
  fStack_114 = fVar5;
  if ((*pcStack_158 != '\0') && (*(longlong *)(lStack_180 + 0x180) == lStack_120)) {
    auVar43 = ZEXT816(0);
    if (uStack_178 == 0) {
LAB_141cbf3d1:
      uVar35 = 0;
LAB_141cbf3d4:
      if (uStack_178 <= uVar35) goto LAB_141cbfd75;
      goto LAB_141cbf3dd;
    }
    uVar32 = *(ulonglong *)(lStack_180 + 0x188);
    lVar23 = lVar29 + uStack_178 * 0x48;
    lVar36 = 0;
    uVar35 = 0;
    do {
      uVar37 = *(ulonglong *)(lVar29 + 0x10 + lVar36);
      if (uVar32 == uVar37) goto LAB_141cbf3d4;
      if ((uVar37 < uVar32) && (uVar10 = *(ulonglong *)(lVar29 + 0x18 + lVar36), uVar32 < uVar10)) {
        if (uVar37 == 0) {
LAB_141cbf43b:
          if (uVar10 < uStack_138) {
            if (-0x41 < *(char *)(lStack_140 + uVar10)) {
LAB_141cbf452:
              uStack_218 = uVar10 - uVar37;
              uStack_1b0 = lStack_140 + uVar37;
              uStack_240 = 0;
              uStack_230 = 0;
              uStack_220 = 0;
              uStack_210 = 0;
              uStack_208 = 2;
              uStack_204 = 0xf020001;
              cStack_200 = '\x0f';
              uStack_1f8 = 0;
              uStack_1e8 = 0;
              uStack_1c8 = 0;
              uStack_1c0 = 2;
              uStack_1bc = 0xf020001;
              uStack_1b8 = 0xf;
              iVar24 = 0;
              iVar26 = 0;
              uStack_1d8 = uStack_218;
              uStack_1d0 = uStack_218;
              uStack_1a8 = uStack_218;
              uStack_1a0 = uStack_1b0;
              uStack_170 = uVar37;
              goto LAB_141cbf528;
            }
          }
          else if (uVar10 == uStack_138) goto LAB_141cbf452;
        }
        else if (uVar37 < uStack_138) {
          if (-0x41 < *(char *)(lStack_140 + uVar37)) goto LAB_141cbf43b;
        }
        else if (uVar37 == uStack_138) goto LAB_141cbf43b;
        pdb_142dc8070(lStack_140,uStack_138,uVar37,uVar10,&UNK_1433acb90);
        goto LAB_141cc0050;
      }
      lVar36 = lVar36 + 0x48;
      uVar35 = uVar35 + 1;
    } while (uStack_178 * 0x48 != lVar36);
    if (lVar23 == 0x48) goto LAB_141cbf3d1;
    if (uVar32 != *(ulonglong *)(lVar23 + -0x30)) goto LAB_141cbfe43;
    goto LAB_141cbfd75;
  }
  goto LAB_141cbfe43;
  while( true ) {
    iVar26 = iStack_24c + (uint)((uVar10 + uStack_1b0 + uVar37) - uStack_1a0 < uVar32);
    iVar24 = iStack_248 + 1;
    if (uStack_220 == uStack_1d8) break;
LAB_141cbf528:
    uVar19 = uStack_1b0;
    uVar10 = uStack_220;
    if (uStack_220 == uStack_218) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_1433aca68);
    }
    if (uStack_220 != 0) {
      uVar27 = uStack_220;
      uVar34 = uStack_1a8;
      uStack_290 = uStack_1b0;
      if (uStack_220 < uStack_1a8) {
        if (*(char *)(uStack_1b0 + uStack_220) < -0x40) goto LAB_141cc0081;
      }
      else if (uStack_220 != uStack_1a8) goto LAB_141cc0081;
    }
    if (uStack_220 == uStack_1a8) {
LAB_141cc0050:
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_1433acb10);
    }
    pbVar33 = (byte *)(uStack_220 + uStack_1b0);
    bVar39 = *pbVar33;
    uVar25 = (uint)bVar39;
    if ((char)bVar39 < '\0') {
      uVar22 = bVar39 & 0x1f;
      if (bVar39 < 0xe0) {
        pbStack_280 = pbVar33 + 2;
        uVar25 = uVar22 << 6 | pbVar33[1] & 0x3f;
      }
      else {
        uVar25 = pbVar33[2] & 0x3f | (pbVar33[1] & 0x3f) << 6;
        if (bVar39 < 0xf0) {
          pbStack_280 = pbVar33 + 3;
          uVar25 = uVar25 | uVar22 << 0xc;
        }
        else {
          pbStack_280 = pbVar33 + 4;
          uVar25 = pbVar33[3] & 0x3f | uVar25 << 6 | (bVar39 & 7) << 0x12;
        }
      }
    }
    else {
      pbStack_280 = pbVar33 + 1;
    }
    pbStack_168 = (byte *)(uStack_1b0 + uStack_1a8);
    iStack_24c = iVar26;
    iStack_248 = iVar24;
    uStack_188 = uStack_1a8;
LAB_141cbf626:
    cVar20 = cStack_200;
    lVar23 = 1;
    if ((0x7f < uVar25) && (lVar23 = 2, 0x7ff < uVar25)) {
      lVar23 = 4 - (ulonglong)(uVar25 < 0x10000);
    }
    uStack_220 = uStack_220 + lVar23;
    cStack_200 = '\x0f';
    uStack_204 = CONCAT13(cVar20,(int3)uStack_204) & 0xff00ffff;
    if (cVar20 == '\x0f') {
      cVar20 = pdb_141065790(&uStack_240);
      auVar43._8_8_ = extraout_XMM0_Qb;
      auVar43._0_8_ = extraout_XMM0_Qa;
      uStack_204 = CONCAT13(cVar20,(undefined3)uStack_204);
      uVar37 = uStack_170;
    }
    uStack_290 = uStack_228 + 1;
    if (cVar20 != '\n') {
      uStack_230 = 1;
      uStack_290 = 0;
    }
    uStack_228 = uStack_290;
    if (pbStack_280 == pbStack_168) {
      if (uStack_220 == uStack_218) goto LAB_141cbfc97;
      goto LAB_141cc00b9;
    }
    bVar39 = *pbStack_280;
    uStack_244 = (uint)bVar39;
    if ((char)bVar39 < '\0') {
      uVar25 = bVar39 & 0x1f;
      pbVar33 = pbStack_280 + 1;
      if (bVar39 < 0xe0) {
        pbStack_280 = pbStack_280 + 2;
        uStack_244 = uVar25 << 6 | *pbVar33 & 0x3f;
      }
      else {
        uStack_244 = pbStack_280[2] & 0x3f | (*pbVar33 & 0x3f) << 6;
        if (bVar39 < 0xf0) {
          pbStack_280 = pbStack_280 + 3;
          uStack_244 = uStack_244 | uVar25 << 0xc;
        }
        else {
          pbVar33 = pbStack_280 + 3;
          pbStack_280 = pbStack_280 + 4;
          uStack_244 = *pbVar33 & 0x3f | uStack_244 << 6 | (bVar39 & 7) << 0x12;
        }
      }
    }
    else {
      pbStack_280 = pbStack_280 + 1;
    }
    cStack_200 = pdb_141065790(&uStack_240);
    uVar25 = uStack_204;
    uVar27 = uStack_220;
    auVar43._8_8_ = extraout_XMM0_Qb_00;
    auVar43._0_8_ = extraout_XMM0_Qa_00;
    cVar20 = uStack_204._2_1_;
    uStack_204._0_2_ = CONCAT11(1,(byte)uStack_204);
    uVar22 = uStack_204;
    if (cVar20 == '\x01') goto LAB_141cbf61a;
    if (cVar20 != '\x02') {
      if (uStack_188 < uStack_220) {
        uStack_260 = 3;
        uStack_258 = uStack_198;
        goto LAB_141cbffe1;
      }
      if ((int)uStack_240 == 1) {
LAB_141cbffdf:
        uStack_260 = 0;
        uStack_258 = uStack_238;
        goto LAB_141cbffe1;
      }
      uStack_204._3_1_ = SUB41(uVar25,3);
      uStack_204 = uVar22;
      if (uStack_220 == 0) {
        cVar20 = cStack_200;
        if (cStack_200 == '\x04') {
LAB_141cbffc1:
          uStack_204._0_3_ = CONCAT12(cVar20,(ushort)uStack_204);
        }
        else {
          if (cStack_200 == '\n') {
            cVar20 = '\x03';
            goto LAB_141cbffc1;
          }
          uVar25 = (uint)uStack_204._3_1_;
          bVar38 = uStack_204._3_1_ != 0xf;
          if (bVar38) goto LAB_141cbf8b6;
        }
        uStack_240 = 1;
        uStack_238 = 0;
        goto LAB_141cbffdf;
      }
      uVar25 = (uint)uStack_204._3_1_;
      bVar38 = uStack_204._3_1_ == 0xf;
      if (bVar38) {
        if ((uStack_220 < uStack_188) &&
           (uStack_290 = uVar19, *(char *)(uVar19 + uStack_220) < -0x40)) goto LAB_141cc00a0;
        bVar39 = *(byte *)((uVar19 - 1) + uStack_220);
        uVar25 = (uint)(char)bVar39;
        if ((int)uVar25 < 0) {
          bVar6 = *(byte *)((uVar19 - 2) + uStack_220);
          if ((char)bVar6 < -0x40) {
            bVar7 = *(byte *)((uVar19 - 3) + uStack_220);
            if ((char)bVar7 < -0x40) {
              uVar25 = bVar7 & 0x3f | (*(byte *)((uVar19 - 4) + uStack_220) & 7) << 6;
            }
            else {
              uVar25 = bVar7 & 0xf;
            }
            uVar25 = bVar6 & 0x3f | uVar25 << 6;
          }
          else {
            uVar25 = bVar6 & 0x1f;
          }
          uVar25 = (uint)(bVar39 & 0x3f) | uVar25 << 6;
        }
        uVar25 = pdb_141065790(&uStack_240,uVar25);
        auVar43._8_8_ = extraout_XMM0_Qb_01;
        auVar43._0_8_ = extraout_XMM0_Qa_01;
        uStack_204 = CONCAT13((char)uVar25,(undefined3)uStack_204);
        if (cStack_200 == '\x0f') {
                    /* WARNING: Subroutine does not return */
          pdb_142dc8150(&UNK_1433acab0);
        }
      }
LAB_141cbf8b6:
      bVar39 = (byte)uVar25;
      uVar18 = (ushort)uStack_204;
      if (bVar39 == 1) {
        cVar20 = cStack_200 != '\x06';
        if (!(bool)cVar20) goto LAB_141cbf98c;
code_r0x000141cbf921:
        if (cVar20 == '\x02') goto LAB_141cbf92d;
        goto LAB_141cbfc97;
      }
      uVar22 = uVar25 & 0xff;
      if ((uVar22 == 2) || (uVar22 == 6)) goto LAB_141cbfc97;
      switch(cStack_200) {
      case '\x01':
      case '\x02':
      case '\x06':
        break;
      case '\x03':
      case '\x0e':
        goto LAB_141cbf98c;
      default:
        if (bVar39 == 9) goto LAB_141cbf92d;
        if (uVar22 == 10) {
          if (cStack_200 == '\n') {
            if ((char)uStack_230 == '\0') {
              if (uVar27 == 0) {
                uVar27 = 0;
              }
              else {
                if ((uVar27 < uStack_188) && (*(char *)(uVar19 + uVar27) < -0x40))
                goto LAB_141cc00e4;
                uStack_288 = uVar27 + uVar19;
                uVar27 = 0;
                do {
                  pbVar33 = (byte *)(uStack_288 - 1);
                  uVar25 = (uint)(char)*pbVar33;
                  if ((int)uVar25 < 0) {
                    bVar39 = *(byte *)(uStack_288 - 2);
                    if ((char)bVar39 < -0x40) {
                      bVar6 = *(byte *)(uStack_288 - 3);
                      if ((char)bVar6 < -0x40) {
                        pbVar1 = (byte *)(uStack_288 - 4);
                        uStack_288 = uStack_288 - 4;
                        uVar25 = bVar6 & 0x3f | (*pbVar1 & 7) << 6;
                      }
                      else {
                        uStack_288 = uStack_288 - 3;
                        uVar25 = bVar6 & 0xf;
                      }
                      uVar25 = bVar39 & 0x3f | uVar25 << 6;
                    }
                    else {
                      uStack_288 = uStack_288 - 2;
                      uVar25 = bVar39 & 0x1f;
                    }
                    uVar25 = (uint)(*pbVar33 & 0x3f) | uVar25 << 6;
                  }
                  else {
                    uStack_288 = uStack_288 - 1;
                  }
                  uStack_190 = uVar27;
                  cVar20 = pdb_141065790(&uStack_240,uVar25);
                  auVar43._8_8_ = extraout_XMM0_Qb_02;
                  auVar43._0_8_ = extraout_XMM0_Qa_02;
                  uVar27 = uStack_190;
                } while ((cVar20 == '\n') && (uVar27 = uStack_190 + 1, uVar19 != uStack_288));
              }
              uStack_230 = 1;
              cVar20 = '\x02' - ((byte)uVar27 & 1);
              uStack_228 = uVar27;
              goto LAB_141cbfc4d;
            }
            bVar39 = (byte)uStack_228 & 1;
            uStack_204._0_3_ = CONCAT12('\x02' - bVar39,(ushort)uStack_204);
            bVar39 = bVar39 ^ 1;
            goto LAB_141cbf942;
          }
          break;
        }
        if ((uVar22 != 0xe) || (cStack_200 != '\x04')) break;
        uStack_288 = uVar19;
        if (uVar27 != 0) {
          if ((uVar27 < uStack_188) && (*(char *)(uVar19 + uVar27) < -0x40)) {
            pdb_142dc8070(uVar19,uStack_188,0,uVar27,&UNK_1433acae0);
LAB_141cc00e4:
            pdb_142dc8070(uVar19);
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          bVar39 = *(byte *)((uVar19 - 1) + uVar27);
          uVar25 = (uint)(char)bVar39;
          if ((int)uVar25 < 0) {
            lVar23 = uVar27 + uVar19;
            bVar6 = *(byte *)(lVar23 + -2);
            if ((char)bVar6 < -0x40) {
              bVar7 = *(byte *)(lVar23 + -3);
              if ((char)bVar7 < -0x40) {
                uStack_288 = lVar23 - 4;
                uVar25 = bVar7 & 0x3f | (*(byte *)(lVar23 + -4) & 7) << 6;
              }
              else {
                uStack_288 = lVar23 - 3;
                uVar25 = bVar7 & 0xf;
              }
              uVar25 = bVar6 & 0x3f | uVar25 << 6;
            }
            else {
              uStack_288 = lVar23 - 2;
              uVar25 = bVar6 & 0x1f;
            }
            uVar25 = (uint)(bVar39 & 0x3f) | uVar25 << 6;
          }
          else {
            uStack_288 = (uVar19 + uVar27) - 1;
          }
          cVar21 = pdb_141065790(&uStack_240,uVar25);
          auVar43._8_8_ = extraout_XMM0_Qb_03;
          auVar43._0_8_ = extraout_XMM0_Qa_03;
          cVar20 = '\x02';
          if (cVar21 != '\x0e') goto LAB_141cbfc4d;
        }
        do {
          cVar20 = '\x02';
          if (uVar19 == uStack_288) goto LAB_141cbfc4d;
          pbVar33 = (byte *)(uStack_288 - 1);
          uVar25 = (uint)(char)*pbVar33;
          if ((int)uVar25 < 0) {
            bVar39 = *(byte *)(uStack_288 - 2);
            if ((char)bVar39 < -0x40) {
              bVar6 = *(byte *)(uStack_288 - 3);
              if ((char)bVar6 < -0x40) {
                pbVar1 = (byte *)(uStack_288 - 4);
                uStack_288 = uStack_288 - 4;
                uVar25 = bVar6 & 0x3f | (*pbVar1 & 7) << 6;
              }
              else {
                uStack_288 = uStack_288 - 3;
                uVar25 = bVar6 & 0xf;
              }
              uVar25 = bVar39 & 0x3f | uVar25 << 6;
            }
            else {
              uStack_288 = uStack_288 - 2;
              uVar25 = bVar39 & 0x1f;
            }
            uVar25 = (uint)(*pbVar33 & 0x3f) | uVar25 << 6;
          }
          else {
            uStack_288 = uStack_288 - 1;
          }
          cVar21 = pdb_141065790(&uStack_240,uVar25);
          auVar43._8_8_ = extraout_XMM0_Qb_04;
          auVar43._0_8_ = extraout_XMM0_Qa_04;
        } while (cVar21 == '\x03');
        cVar20 = '\x02';
        if (cVar21 == '\x04') {
          cVar20 = '\x01';
        }
LAB_141cbfc4d:
        uStack_204._0_3_ = CONCAT12(cVar20,(ushort)uStack_204);
        bVar39 = cVar20 == '\x02';
        uStack_198 = (ulonglong)bVar39 | uStack_198 & 0xffffffffffffff00;
        goto LAB_141cbf942;
      case '\x05':
      case '\a':
      case '\b':
        if ((bVar39 != 5) && (cVar20 = (bVar39 == 9) + '\x01', cVar20 != '\0'))
        goto code_r0x000141cbf921;
        goto LAB_141cbf98c;
      case '\v':
LAB_141cbf92d:
        bVar39 = (byte)uStack_204 ^ 1;
        uStack_204._0_3_ = CONCAT12('\x02' - (byte)uStack_204,uVar18);
LAB_141cbf942:
        if (bVar39 == 0) goto LAB_141cbf61a;
        goto LAB_141cbfc9f;
      case '\f':
        if (bVar39 < 0xe) {
          if ((0x3180U >> (uVar25 & 0x1f) & 1) != 0) goto LAB_141cbf98c;
          if (uVar22 == 9) goto LAB_141cbf92d;
        }
        break;
      case '\r':
        switch(uVar22) {
        case 5:
        case 7:
        case 0xd:
          goto LAB_141cbf98c;
        case 9:
          goto LAB_141cbf92d;
        }
      }
LAB_141cbfc97:
      uStack_204._0_3_ = CONCAT12(2,(ushort)uStack_204);
    }
LAB_141cbfc9f:
    uStack_204._0_2_ = (ushort)(byte)uStack_204;
    uStack_290 = uStack_1b0;
    if (uStack_220 < uVar10) goto LAB_141cc0068;
    if (uVar10 != 0) {
      if (uVar10 < uStack_1a8) {
        if (-0x41 < *(char *)(uStack_1b0 + uVar10)) goto LAB_141cbfd05;
      }
      else if (uVar10 == uStack_1a8) goto LAB_141cbfd05;
      goto LAB_141cc0068;
    }
LAB_141cbfd05:
    if (uStack_220 != 0) {
      if (uStack_220 < uStack_1a8) {
        if (*(char *)(uStack_1b0 + uStack_220) < -0x40) {
LAB_141cc0068:
          uVar27 = uStack_220;
          uVar34 = uStack_1a8;
          pdb_142dc8070(uStack_1b0,uStack_1a8,uVar10,uStack_220,&UNK_1433aca80);
LAB_141cc0081:
          pdb_142dc8070(uStack_290,uVar34,uVar27,uVar34,&UNK_1433acaf8);
LAB_141cc00a0:
          pdb_142dc8070();
LAB_141cc00b9:
          uStack_204._0_2_ = CONCAT11(1,(byte)uStack_204);
          uStack_260 = 2;
          uStack_258 = uStack_290;
LAB_141cbffe1:
                    /* WARNING: Subroutine does not return */
          pdb_142dc8170(&UNK_1433acb48,0x2b,&uStack_260,&UNK_1433acb28,&UNK_1433aca50);
        }
      }
      else if (uStack_220 != uStack_1a8) goto LAB_141cc0068;
    }
  }
  auVar43._0_4_ = ((float)iVar26 * *(float *)(lVar29 + 0x34 + lVar36)) / (float)iVar24;
  if (uVar35 < uStack_178) {
LAB_141cbf3dd:
    lVar23 = lVar29 + uVar35 * 0x48;
    if ((*(byte *)(lVar23 + 0x46) & 1) == 0) {
      fVar40 = auVar43._0_4_ + *(float *)(lVar23 + 0x2c);
      iVar24 = (int)fVar40;
      if (fVar14 < fVar40) {
        iVar24 = 0x7fffffff;
      }
    }
    else {
      fVar40 = (*(float *)(lVar23 + 0x2c) + *(float *)(lVar23 + 0x34)) - auVar43._0_4_;
      iVar24 = (int)fVar40;
      if (fVar14 < fVar40) {
        iVar24 = 0x7fffffff;
      }
    }
    uVar32 = uStack_178;
    if (NAN(fVar40)) {
      iVar24 = 0;
    }
  }
  else {
LAB_141cbfd75:
    iVar24 = 0;
    uVar32 = uStack_178;
    if ((uStack_178 != 0) && (lVar29 + uStack_178 * 0x48 != 0x48)) {
      lVar23 = lVar29 + uStack_178 * 0x48;
      fVar40 = *(float *)(lVar23 + -0x1c);
      if ((*(byte *)(lVar23 + -2) & 1) == 0) {
        fVar40 = fVar40 + *(float *)(lVar23 + -0x14);
      }
      iVar24 = (int)fVar40;
      if (fVar14 < fVar40) {
        iVar24 = 0x7fffffff;
      }
      if (NAN(fVar40)) {
        iVar24 = 0;
      }
    }
  }
  uVar4 = *puStack_160;
  lVar23 = plVar8[2];
  if (lVar23 == *plVar8) {
    pdb_142d8d630();
  }
  lVar36 = plVar8[1];
  lVar28 = lVar23 * 0x30;
  *(float *)(lVar36 + lVar28) = (float)iVar24;
  pfVar2 = (float *)(lVar36 + 4 + lVar28);
  *pfVar2 = fVar5;
  pfVar2[1] = fVar15;
  *(undefined4 *)(lVar36 + 0xc + lVar28) = uVar4;
  *(undefined8 *)(lVar36 + 0x10 + lVar28) = 0;
  puVar3 = (undefined8 *)(lVar36 + 0x18 + lVar28);
  *puVar3 = uVar16;
  puVar3[1] = uVar17;
  *(undefined8 *)(lVar36 + 0x28 + lVar28) = 0;
  plVar8[2] = lVar23 + 1;
  uStack_178 = uVar32;
LAB_141cbfe43:
  if (uStack_178 != 0) {
    lVar23 = uStack_178 * 0x48;
    do {
      pdb_140cbaf60(&uStack_240,lVar29,0,0,*(undefined4 *)(lVar31 + 0x4bc));
      pdb_140cb8390(&uStack_260,lVar31,&uStack_240);
      if (((char)uStack_260 != '\0') && (uVar25 = uStack_258._4_4_, uStack_258._4_4_ != 0)) {
        fVar5 = *(float *)(lVar31 + 0x4bc);
        fVar40 = fVar13 * fVar5;
        iVar24 = 0x7fffffff;
        if (fVar40 <= fVar14) {
          iVar24 = (int)fVar40;
        }
        uVar22 = uStack_260._4_4_;
        iVar26 = sStack_24e + uStack_240._4_4_;
        if (NAN(fVar40)) {
          iVar24 = 0;
        }
        iVar30 = sStack_250 + (int)uStack_240;
        uVar4 = (undefined4)uStack_258;
        lVar31 = plVar8[2];
        if (lVar31 == *plVar8) {
          pdb_142d8d630();
        }
        fVar40 = (float)(uVar25 & 0xffff);
        fVar41 = (float)(uVar25 >> 0x10);
        auVar42._12_4_ = fVar41;
        auVar42._8_4_ = fVar40;
        auVar42._0_4_ = (float)iVar30;
        auVar42._4_4_ = (float)(iVar26 + iVar24);
        auVar12._4_4_ = fVar5;
        auVar12._0_4_ = fVar5;
        auVar12._8_4_ = fVar5;
        auVar12._12_4_ = fVar5;
        auVar43 = divps(auVar42,auVar12);
        lVar36 = plVar8[1];
        lVar28 = lVar31 * 0x30;
        *(undefined1 (*) [16])(lVar36 + lVar28) = auVar43;
        pfVar2 = (float *)(lVar36 + 0x10 + lVar28);
        *pfVar2 = (float)(uVar22 & 0xffff);
        pfVar2[1] = (float)(uVar22 >> 0x10);
        pfVar2[2] = fVar40;
        pfVar2[3] = fVar41;
        *(undefined8 *)(lVar36 + 0x20 + lVar28) = 0xffffffff;
        *(undefined8 *)(lVar36 + 0x28 + lVar28) = 0;
        plVar8[2] = lVar31 + 1;
        lVar31 = plVar9[2];
        if (lVar31 == *plVar9) {
          pdb_142d8d710(plVar9);
        }
        *(undefined4 *)(plVar9[1] + lVar31 * 4) = uVar4;
        plVar9[2] = lVar31 + 1;
        lVar31 = lStack_148;
      }
      lVar29 = lVar29 + 0x48;
      lVar23 = lVar23 + -0x48;
    } while (lVar23 != 0);
  }
  pdb_140cc8440(&lStack_140,&uStack_108);
  lVar29 = lStack_130;
  uStack_178 = uStack_128;
  fVar13 = fStack_118;
  fVar5 = fStack_114;
  goto joined_r0x000141cbf1ee;
LAB_141cbf98c:
  uStack_204 = uStack_204 & 0xffff;
LAB_141cbf61a:
  uStack_204 = uStack_204 & 0xff;
  uVar25 = uStack_244;
  goto LAB_141cbf626;
}

