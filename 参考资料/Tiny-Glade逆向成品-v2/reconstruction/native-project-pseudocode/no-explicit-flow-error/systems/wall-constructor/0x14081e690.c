// VA 0x14081e690, PDB extent 4779 bytes
// system_wall_constructor::wooden_arch_frame_systems::maintain_wooden_arch_frames
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/wooden_arch_frame_systems.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_wall_constructor::wooden_arch_frame_systems::maintain_wooden_arch_frames
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/wooden_arch_frame_systems.rs
   Extent: 4779 */

void pdb_14081e690(longlong *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  byte *pbVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  code *pcVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  byte *pbVar9;
  ulonglong *puVar10;
  byte *pbVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  char cVar14;
  uint uVar15;
  undefined4 uVar16;
  uint uVar17;
  undefined8 uVar18;
  longlong lVar19;
  undefined8 *puVar20;
  byte *pbVar21;
  uint uVar22;
  byte *pbVar23;
  int iVar24;
  longlong lVar25;
  longlong *plVar26;
  byte *pbVar27;
  ulonglong uVar28;
  longlong lVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  longlong lVar33;
  longlong *plVar34;
  bool bVar35;
  undefined4 uVar36;
  longlong lStack_2d8;
  byte *pbStack_2d0;
  longlong *plStack_2c8;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined1 uStack_298;
  byte *pbStack_288;
  byte *pbStack_280;
  byte *pbStack_278;
  undefined4 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_240;
  int iStack_238;
  undefined4 uStack_234;
  uint uStack_230;
  uint uStack_22c;
  undefined8 uStack_228;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined8 uStack_218;
  undefined8 uStack_210;
  ulonglong *puStack_208;
  longlong lStack_200;
  longlong lStack_1f8;
  longlong lStack_1f0;
  byte *pbStack_1e8;
  byte *pbStack_1e0;
  byte *pbStack_1d8;
  byte *pbStack_1d0;
  byte *pbStack_1c8;
  byte *pbStack_1c0;
  byte *pbStack_1b8;
  byte *pbStack_1b0;
  longlong *plStack_1a8;
  longlong lStack_1a0;
  longlong *plStack_198;
  undefined8 uStack_128;
  ulonglong uStack_118;
  ulonglong uStack_110;
  undefined8 uStack_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  byte *pbStack_f8;
  byte *pbStack_f0;
  longlong *plStack_e8;
  undefined8 uStack_e0;
  longlong lStack_d8;
  longlong lStack_d0;
  longlong lStack_c8;
  undefined4 *puStack_c0;
  byte *pbStack_b8;
  byte *pbStack_b0;
  byte *pbStack_a8;
  undefined4 uStack_9c;
  undefined8 uStack_98;
  ulonglong uStack_90;
  longlong *plStack_88;
  ulonglong uStack_80;
  undefined1 uStack_72;
  undefined1 uStack_71;
  undefined8 uStack_70;
  
  uStack_70 = 0xfffffffffffffffe;
  LOCK();
  bVar35 = DAT_143ca41e0 == '\0';
  if (bVar35) {
    DAT_143ca41e0 = '\x01';
  }
  UNLOCK();
  if (!bVar35) {
    pdb_142dc6be0(&DAT_143ca41e0);
  }
  puVar10 = _DAT_143ca8f38;
  if ((*_DAT_143ca8f38 & 0x7fffffffffffffff) == 0) {
    uVar17 = 0;
    uVar30 = _DAT_143ca41f0;
  }
  else {
    uVar17 = pdb_142dc79e0();
    uVar17 = uVar17 ^ 1;
    uVar30 = _DAT_143ca41f0;
  }
  _DAT_143ca41f0 = uVar30;
  if (DAT_143ca41e1 != '\0') {
    pbStack_1e8 = (byte *)&DAT_143ca41e0;
    uVar30 = (ulonglong)pbStack_1e0 >> 8;
    pbStack_1e0 = (byte *)CONCAT71((int7)uVar30,(char)uVar17);
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_143009828,0x2b,&pbStack_1e8,&UNK_143009808,&UNK_1430097f0);
  }
  DAT_143ca41e1 = 0;
  if (_DAT_143ca41f8 != 0) {
    lVar29 = _DAT_143ca41f8 * 0x10;
    uVar28 = lVar29 - 0x10;
    uVar31 = uVar30;
    if ((~(uint)uVar28 & 0x70) != 0) {
      lVar25 = -(ulonglong)(((uint)(uVar28 >> 4) & 0xfffffff) + 1 & 7);
      do {
        *(int *)(uVar31 + 8) = *(int *)(uVar31 + 8) + -1;
        uVar31 = uVar31 + 0x10;
        lVar25 = lVar25 + 1;
      } while (lVar25 != 0);
    }
    if (0x6f < uVar28) {
      do {
        *(int *)(uVar31 + 8) = *(int *)(uVar31 + 8) + -1;
        *(int *)(uVar31 + 0x18) = *(int *)(uVar31 + 0x18) + -1;
        *(int *)(uVar31 + 0x28) = *(int *)(uVar31 + 0x28) + -1;
        *(int *)(uVar31 + 0x38) = *(int *)(uVar31 + 0x38) + -1;
        *(int *)(uVar31 + 0x48) = *(int *)(uVar31 + 0x48) + -1;
        *(int *)(uVar31 + 0x58) = *(int *)(uVar31 + 0x58) + -1;
        *(int *)(uVar31 + 0x68) = *(int *)(uVar31 + 0x68) + -1;
        *(int *)(uVar31 + 0x78) = *(int *)(uVar31 + 0x78) + -1;
        uVar31 = uVar31 + 0x80;
      } while (uVar31 != uVar30 + lVar29);
    }
    if (_DAT_143ca41f8 != 0) {
      uVar28 = 0;
      uVar30 = _DAT_143ca41f0;
LAB_14081e7b0:
      if (-1 < *(int *)(uVar30 + 8)) goto code_r0x00014081e7bb;
      uStack_90 = _DAT_143ca41f0;
      uStack_80 = _DAT_143ca41f8;
      uVar31 = uStack_98 >> 0x20;
      uStack_98 = CONCAT44((int)uVar31,uVar17);
      uVar31 = uVar28 + 1;
      uStack_118 = uVar28;
      uStack_110 = uVar31;
      pdb_1413fffc0(uVar30);
      while (uVar31 < uStack_80) {
        puVar3 = (undefined4 *)(uStack_90 + uVar31 * 0x10);
        if (*(int *)(uStack_90 + 8 + uVar31 * 0x10) < 0) {
          uVar31 = uVar31 + 1;
          uStack_118 = uVar28;
          uStack_110 = uVar31;
          pdb_1413fffc0(puVar3);
        }
        else {
          uVar36 = puVar3[1];
          uVar16 = puVar3[2];
          uVar8 = puVar3[3];
          puVar4 = (undefined4 *)(uStack_90 + uVar28 * 0x10);
          *puVar4 = *puVar3;
          puVar4[1] = uVar36;
          puVar4[2] = uVar16;
          puVar4[3] = uVar8;
          uVar28 = uVar28 + 1;
          uVar31 = uVar31 + 1;
        }
      }
      _DAT_143ca41f8 = uVar28;
      if ((char)uStack_98 != '\0') goto LAB_14081e7da;
      goto LAB_14081e7cb;
    }
  }
LAB_14081e7c7:
  if ((char)uVar17 == '\0') {
LAB_14081e7cb:
    if (((*puVar10 & 0x7fffffffffffffff) != 0) && (cVar14 = pdb_142dc79e0(), cVar14 == '\0')) {
      DAT_143ca41e1 = 1;
    }
  }
LAB_14081e7da:
  cVar14 = DAT_143ca41e0;
  LOCK();
  DAT_143ca41e0 = 0;
  UNLOCK();
  if (cVar14 == '\x02') {
    pdb_142dc6ca0(&DAT_143ca41e0);
  }
  puStack_208 = (ulonglong *)*param_4;
  lVar29 = param_4[1];
  uVar30 = *puStack_208;
  uVar31 = 0;
  uVar28 = uVar30 - *(ulonglong *)(lVar29 + 0x18);
  if (uVar30 < *(ulonglong *)(lVar29 + 0x18)) {
    uVar28 = uVar31;
  }
  uVar32 = uVar30 - *(ulonglong *)(lVar29 + 0x38);
  if (uVar30 < *(ulonglong *)(lVar29 + 0x38)) {
    uVar32 = uVar31;
  }
  lStack_d0 = uVar28 * 0x28 + *(longlong *)(lVar29 + 8);
  uVar30 = *(ulonglong *)(lVar29 + 0x10) - uVar28;
  if (*(ulonglong *)(lVar29 + 0x10) < uVar28) {
    lStack_d0 = 8;
    uVar30 = uVar31;
  }
  lStack_d8 = uVar32 * 0x28 + *(longlong *)(lVar29 + 0x28);
  uVar28 = *(ulonglong *)(lVar29 + 0x30) - uVar32;
  if (*(ulonglong *)(lVar29 + 0x30) < uVar32) {
    lStack_d8 = 8;
    uVar28 = uVar31;
  }
  *puStack_208 = (*(longlong *)(lVar29 + 0x40) - uVar28) - uVar30;
  pbVar9 = _UNK_142e4e658;
  lVar29 = _DAT_142e4e650;
  lStack_1f8 = lStack_d0 + uVar30 * 0x28;
  lStack_1f0 = lStack_d8 + uVar28 * 0x28;
  uStack_9c = *(undefined4 *)((longlong)param_1 + 0x1c);
  lStack_c8 = *param_1;
  puStack_c0 = (undefined4 *)param_1[2];
  uStack_210 = *param_2;
  pbVar21 = (byte *)*param_3;
  plVar34 = (longlong *)param_3[1];
  uStack_218 = param_3[3];
  plStack_88 = (longlong *)param_3[2];
  lStack_200 = lStack_c8 + 0x20;
  plVar26 = plStack_88;
  pbStack_f0 = pbVar21;
  plStack_e8 = plVar34;
  do {
    if ((lStack_d0 == 0) || (lStack_d0 == lStack_1f8)) {
      if ((lStack_d8 == 0) || (lStack_d8 == lStack_1f0)) {
        return;
      }
      lStack_d0 = 0;
      lVar25 = lStack_d8;
      lStack_d8 = lStack_d8 + 0x28;
    }
    else {
      lVar25 = lStack_d0;
      lStack_d0 = lStack_d0 + 0x28;
    }
    *puStack_208 = *puStack_208 + 1;
    uStack_108 = *(undefined8 *)(lVar25 + 0x18);
    *puStack_c0 = uStack_9c;
    uStack_e0 = uStack_108;
    uVar18 = pdb_1400af0a0(lStack_200,&uStack_108);
    pdb_140269750(&pbStack_1e8,lStack_c8,uVar18,&uStack_108);
    if (!SBORROW8(0,(longlong)pbStack_1e0)) {
      pbStack_b8 = pbStack_1d8;
      pbStack_b0 = pbStack_1d0;
    }
    pbStack_1e8 = pbStack_1e0;
    pbStack_1e0 = pbStack_b8;
    pbStack_1d8 = pbStack_b0;
    pbStack_1d0 = (byte *)0x0;
    pbStack_1b0 = (byte *)0x0;
    pbVar23 = (byte *)0x0;
LAB_14081ea40:
    while (pbVar23 != (byte *)0x0) {
      if (pbStack_1c8 == pbStack_1b8) {
        lVar33 = 0;
LAB_14081ea82:
        if (pbStack_1c0 != (byte *)0x0) {
          pub_1406abac0(pbVar23,(longlong)pbStack_1c0 << 3,8);
        }
        pbStack_1d0 = (byte *)0x0;
        if ((int)lVar33 == 0) break;
        goto LAB_14081eb4c;
      }
      pbVar1 = pbStack_1c8 + 8;
      lVar33 = *(longlong *)pbStack_1c8;
      pbStack_1c8 = pbVar1;
      if ((int)lVar33 == 0) goto LAB_14081ea82;
      if ((int)lVar33 == 0) goto LAB_14081eba0;
LAB_14081eb53:
      uStack_2c0 = SUB84(plVar26,0);
      uStack_2bc = (undefined4)((ulonglong)plVar26 >> 0x20);
      uStack_2b8 = (undefined4)uStack_218;
      uStack_2b4 = (undefined4)((ulonglong)uStack_218 >> 0x20);
      lStack_2d8 = lVar33;
      pbStack_2d0 = pbVar21;
      plStack_2c8 = plVar34;
      pdb_140f04aa0(&lStack_2d8,&UNK_1430097c0);
    }
    pbVar23 = pbStack_1e8;
    if ((pbStack_1e8 != (byte *)0x8000000000000001) &&
       (pbStack_1e8 = (byte *)0x8000000000000000, !SBORROW8(0,(longlong)pbVar23))) {
      pbStack_1b8 = pbStack_1e0 + (longlong)pbStack_1d8 * 8;
      pbStack_1d0 = pbStack_1e0;
      pbStack_1c8 = pbStack_1e0;
      pbStack_1c0 = pbVar23;
      pbVar23 = pbStack_1e0;
      goto LAB_14081ea40;
    }
    if (pbStack_1b0 == (byte *)0x0) goto LAB_14081ec1b;
    if (plStack_1a8 == plStack_198) {
      lVar33 = 0;
    }
    else {
      plVar2 = plStack_1a8 + 1;
      lVar33 = *plStack_1a8;
      plStack_1a8 = plVar2;
      if ((int)lVar33 != 0) goto LAB_14081eb4c;
    }
    if (lStack_1a0 != 0) {
      pub_1406abac0(pbStack_1b0,lStack_1a0 << 3,8);
    }
    pbStack_1b0 = (byte *)0x0;
LAB_14081eb4c:
    pbVar23 = (byte *)0x0;
    if ((int)lVar33 != 0) goto LAB_14081eb53;
LAB_14081eba0:
    if ((-0x7fffffffffffffff < (longlong)pbStack_1e8) && (pbStack_1e8 != (byte *)0x0)) {
      pub_1406abac0(pbStack_1e0,(longlong)pbStack_1e8 << 3,8);
    }
    if ((pbVar23 != (byte *)0x0) && (pbStack_1c0 != (byte *)0x0)) {
      pub_1406abac0(pbVar23,(longlong)pbStack_1c0 << 3,8);
    }
    if ((pbStack_1b0 != (byte *)0x0) && (lStack_1a0 != 0)) {
      pub_1406abac0(pbStack_1b0,lStack_1a0 << 3,8);
    }
LAB_14081ec1b:
    pbStack_b8 = (byte *)0x0;
    pbStack_b0 = (byte *)0x8;
    pbStack_a8 = (byte *)0x0;
    uStack_98 = *(longlong *)(lVar25 + 0x10) * 0x38 + *(ulonglong *)(lVar25 + 8);
    uVar30 = *(ulonglong *)(lVar25 + 8);
    while (uStack_90 = uVar30, uStack_90 != uStack_98) {
      uVar30 = uStack_90 + 0x38;
      if (1 < *(ulonglong *)(uStack_90 + 0x10)) {
        uStack_80 = uStack_90;
        uStack_90 = uStack_90 + 0x38;
        lVar19 = pdb_140a92040(uStack_210);
        lVar25 = *(longlong *)(uStack_80 + 0x10);
        uVar18 = pdb_140e1cff0(lVar25 * 0x30,0x210);
        lVar33 = *(longlong *)(uStack_80 + 8);
        pdb_141472d90(&pbStack_1e8,lVar19,&UNK_143009760,0x19,uVar18,lVar33,lVar25 * 0x30);
        plVar26 = plStack_88;
        pbVar11 = pbStack_1d0;
        pbVar1 = pbStack_1d8;
        pbVar23 = pbStack_1e0;
        if (pbStack_1e8 == (byte *)0xb) {
          pbStack_f8 = pbStack_1e0;
          pcVar5 = *(code **)(lVar19 + 0x520);
          uVar18 = *(undefined8 *)(lVar19 + 0x658);
          uStack_71 = 1;
          puVar20 = (undefined8 *)pdb_140e17330(&pbStack_f8);
          pbStack_1d8 = (byte *)*puVar20;
          pbStack_1e8 = (byte *)CONCAT44(pbStack_1e8._4_4_,0x3b9e8321);
          pbStack_1e0 = (byte *)0x0;
          uVar18 = (*pcVar5)(uVar18,&pbStack_1e8);
          uVar17 = *(uint *)(uStack_80 + 0x28);
          uVar15 = (uVar17 & 1) + (uint)((uVar17 >> 1 & 1) != 0);
          iVar24 = (int)lVar25;
          uVar22 = iVar24 + -1 + (uint)(iVar24 == 0);
          uVar7 = uVar22 + uVar15;
          if (CARRY4(uVar22,uVar15)) {
            uVar7 = 0xffffffff;
          }
          uVar15 = 1;
          if (1 < uVar7) {
            iVar6 = 0x1f;
            if (uVar7 - 1 != 0) {
              for (; uVar7 - 1 >> iVar6 == 0; iVar6 = iVar6 + -1) {
              }
            }
            uVar15 = (0xffffffffU >> (~(byte)iVar6 & 0x1f)) + 1;
            if (uVar15 == 0) {
              uStack_71 = 1;
              pdb_142dc8400(&UNK_1430097d8);
                    /* WARNING: Does not return */
              pcVar5 = (code *)invalidInstructionException();
              (*pcVar5)();
            }
          }
          uVar7 = 0;
          for (; (uVar15 & 1) == 0; uVar15 = uVar15 >> 1 | 0x80000000) {
            uVar7 = uVar7 + 1;
          }
          uVar15 = 5;
          if (uVar7 < 5) {
            uVar15 = uVar7;
          }
          if (uVar7 == 0) {
            uVar15 = 1;
          }
          lVar33 = lVar33 + lVar25 * 0x30;
          uVar36 = 0;
          if (lVar33 != 0x30 && lVar25 != 0) {
            uVar36 = *(undefined4 *)(lVar33 + -0x24);
          }
          pdb_14007ee60();
          pbVar21 = pub_1406abab0(8,8);
          if (pbVar21 == (byte *)0x0) {
            uStack_71 = 1;
                    /* WARNING: Subroutine does not return */
            pdb_142dc7e11(8,8);
          }
          *(byte **)pbVar21 = pbVar23;
          pbStack_1e8 = (byte *)0x1;
          pbStack_1d8 = (byte *)0x1;
          pbStack_1e0 = pbVar21;
          uVar16 = pdb_1409012c0(uVar15);
          pdb_1408fd550(&uStack_108,uVar16);
          uVar13 = uStack_fc;
          uVar12 = uStack_100;
          uVar16 = (undefined4)uStack_108;
          uVar8 = uStack_108._4_4_;
          pdb_14007ee60();
          uVar30 = uStack_80;
          puVar20 = (undefined8 *)(uStack_80 + 0x18);
          pdb_140fb49c0(&uStack_108,puVar20);
          pbVar21 = pbStack_f0;
          uStack_220 = *(undefined4 *)(uStack_80 + 0x34);
          uStack_250 = uStack_108;
          uStack_228 = *(undefined8 *)(uStack_80 + 0x2c);
          uStack_260 = *puVar20;
          uStack_258 = *(undefined8 *)(uVar30 + 0x20);
          pbStack_278 = pbStack_1d8;
          pbStack_288 = pbStack_1e8;
          pbStack_280 = pbStack_1e0;
          lStack_2d8 = lVar29;
          pbStack_2d0 = pbVar9;
          uStack_2c0 = 0;
          plStack_2c8 = (longlong *)0x0;
          uStack_2bc = 0x3f800000;
          uStack_2b8 = 0x3f800000;
          uStack_2b4 = 0x3f800000;
          uStack_2a8 = uVar16;
          uStack_2a4 = uVar8;
          uStack_2a0 = uVar12;
          uStack_29c = uVar13;
          uStack_298 = 0x1a;
          uStack_270 = 0;
          uStack_268 = uStack_e0;
          uStack_234 = 0;
          uStack_72 = 1;
          uStack_240 = uVar18;
          iStack_238 = iVar24;
          uStack_230 = uVar15;
          uStack_22c = uVar17;
          uStack_21c = uVar36;
          uVar18 = pdb_140ed5970(pbStack_f0);
          plVar34 = plStack_e8;
          if (plStack_e8 == (longlong *)0x0) {
            pub_142e32760(&pbStack_1e8,&lStack_2d8,0xc0);
            plVar26 = plStack_88;
            lVar25 = plStack_88[2];
            uStack_128 = uVar18;
            if ((ulonglong)(*plStack_88 - lVar25) < 0xd8) {
              pdb_142d7f1b0(plStack_88,lVar25,0xd8,1,1);
            }
            lVar33 = plVar26[1];
            *(code **)(lVar33 + lVar25) = pdb_141414490;
            pub_142e32760(lVar33 + lVar25 + 8,&lStack_2d8,0xc0);
            *(undefined8 *)(lVar33 + 200 + lVar25) = uVar18;
            plVar26[2] = lVar25 + 0xd8;
            pbVar23 = pbStack_a8;
          }
          else {
            pub_142e32760(&pbStack_1e8,&lStack_2d8,0xc0);
            plVar26 = plStack_88;
            lVar25 = plVar34[2];
            uStack_128 = uVar18;
            if ((ulonglong)(*plVar34 - lVar25) < 0xd8) {
              pdb_142d7f1b0(plVar34,lVar25,0xd8,1,1);
            }
            lVar33 = plVar34[1];
            *(code **)(lVar33 + lVar25) = pdb_141414490;
            pub_142e32760(lVar33 + lVar25 + 8,&lStack_2d8,0xc0);
            *(undefined8 *)(lVar33 + 200 + lVar25) = uVar18;
            plVar34[2] = lVar25 + 0xd8;
            pbVar23 = pbStack_a8;
          }
          pbStack_a8 = pbVar23;
          uVar30 = uStack_90;
          if ((int)uVar18 != 0) {
            if (pbVar23 == pbStack_b8) {
              pdb_142db0920(&pbStack_b8);
            }
            *(undefined8 *)(pbStack_b0 + (longlong)pbVar23 * 8) = uVar18;
            plVar26 = plStack_88;
            pbStack_a8 = pbVar23 + 1;
            uVar30 = uStack_90;
          }
        }
        else {
          pbVar23 = (byte *)0x0;
          if ((byte *)0x7 < pbStack_1e8) {
            pbVar23 = pbStack_1e8 + -8;
          }
          if (pbVar23 == (byte *)0x0) {
            if (((pbStack_1e8 < (byte *)0x6) &&
                ((0x32UL >> ((ulonglong)pbStack_1e8 & 0x3f) & 1) != 0)) &&
               (pbStack_1e0 != (byte *)0x0)) {
              pub_1406abac0(pbStack_1d8,(ulonglong)pbStack_1e0,1);
            }
            uVar30 = uStack_90;
            if (pbStack_1c8 != (byte *)0x0) {
              pub_1406abac0(pbStack_1c0,(ulonglong)pbStack_1c8,1);
              uVar30 = uStack_90;
            }
          }
          else if (pbVar23 == (byte *)0x1) {
            if (pbStack_1d0 != (byte *)0x0) {
              pbVar21 = (byte *)0x0;
              do {
                lVar33 = (longlong)pbVar21 * 0x40;
                lVar25 = *(longlong *)(pbVar1 + lVar33 + 0x28);
                if (!SBORROW8(0,lVar25)) {
                  pbVar23 = *(byte **)(pbVar1 + lVar33 + 0x30);
                  lVar33 = *(longlong *)(pbVar1 + lVar33 + 0x38);
                  if (lVar33 != 0) {
                    pbVar27 = pbVar23 + 0x30;
                    do {
                      uVar30 = *(ulonglong *)(pbVar27 + -0x20);
                      if ((!SBORROW8(0,uVar30)) && (uVar30 != 0)) {
                        pub_1406abac0(*(byte **)(pbVar27 + -0x18),uVar30,1);
                      }
                      uVar30 = *(ulonglong *)(pbVar27 + -8);
                      if ((!SBORROW8(0,uVar30)) && (uVar30 != 0)) {
                        pub_1406abac0(*(byte **)pbVar27,uVar30,1);
                      }
                      pbVar27 = pbVar27 + 0x58;
                      lVar33 = lVar33 + -1;
                    } while (lVar33 != 0);
                  }
                  if (lVar25 != 0) {
                    pub_1406abac0(pbVar23,lVar25 * 0x58,8);
                  }
                }
                pbVar21 = pbVar21 + 1;
              } while (pbVar21 != pbVar11);
            }
            plVar26 = plStack_88;
            plVar34 = plStack_e8;
            pbVar21 = pbStack_f0;
            uVar30 = uStack_90;
            if (pbStack_1e0 != (byte *)0x0) {
              pub_1406abac0(pbVar1,(longlong)pbStack_1e0 << 6,8);
              uVar30 = uStack_90;
            }
          }
          else {
            uVar30 = uStack_90;
            if (pbStack_1e0 != (byte *)0x0) {
              pub_1406abac0(pbStack_1d8,(ulonglong)pbStack_1e0,1);
              uVar30 = uStack_90;
            }
          }
        }
      }
    }
    if (pbStack_a8 == (byte *)0x0) {
      if (pbStack_b8 != (byte *)0x0) {
        pub_1406abac0(pbStack_b0,(longlong)pbStack_b8 << 3,8);
      }
    }
    else {
      uStack_80 = uStack_90;
      *puStack_c0 = uStack_9c;
      pbStack_1d8 = pbStack_a8;
      pbStack_1e8 = pbStack_b8;
      pbStack_1e0 = pbStack_b0;
      pdb_1414070f0(&lStack_2d8,lStack_c8,uStack_e0,&pbStack_1e8);
      plVar26 = plStack_88;
      if ((!SBORROW8(0,lStack_2d8)) && (lStack_2d8 != 0)) {
        pub_1406abac0(pbStack_2d0,lStack_2d8 << 3,8);
        plVar26 = plStack_88;
      }
    }
  } while( true );
code_r0x00014081e7bb:
  uVar28 = uVar28 + 1;
  uVar30 = uVar30 + 0x10;
  if (_DAT_143ca41f8 == uVar28) goto LAB_14081e7c7;
  goto LAB_14081e7b0;
}

