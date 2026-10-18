// VA 0x141f28230, PDB extent 4701 bytes
// system_roof::ui_edit_roof_ridge_length::do_ui_edit_roof_ridge_length
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/roof/src/ui_edit_roof_ridge_length.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_roof::ui_edit_roof_ridge_length::do_ui_edit_roof_ridge_length
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/roof/src/ui_edit_roof_ridge_length.rs
   Extent: 4701 */

void pdb_141f28230(undefined8 *param_1,undefined8 *param_2,byte *param_3,undefined8 **param_4,
                  undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,undefined8 param_8,
                  undefined8 *param_9,undefined8 *param_10,float *param_11,undefined8 *param_12,
                  undefined8 *param_13,longlong *param_14,undefined8 *param_15)

{
  byte bVar1;
  undefined1 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  code *pcVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  byte *pbVar13;
  float fVar14;
  float fVar15;
  char cVar16;
  byte bVar17;
  byte bVar18;
  uint uVar19;
  longlong lVar20;
  ulonglong uVar21;
  byte *pbVar22;
  longlong *plVar23;
  undefined8 uVar24;
  byte *pbVar25;
  ulonglong uVar26;
  undefined *puVar27;
  undefined *puVar28;
  int *piVar29;
  longlong lVar30;
  undefined *puVar31;
  undefined *puVar32;
  undefined *puVar33;
  undefined *puVar34;
  undefined *puVar35;
  undefined *puVar36;
  ulonglong uVar37;
  float fVar38;
  float fVar39;
  undefined4 uVar40;
  float fVar41;
  float fVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  float fVar45;
  undefined8 uVar46;
  undefined4 unaff_XMM6_Da;
  float fVar47;
  float fVar48;
  float fVar49;
  undefined1 auStack_280 [24];
  undefined8 **ppuStack_268;
  float fStack_260;
  undefined4 uStack_25c;
  int iStack_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 *puStack_248;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 *puStack_218;
  byte *pbStack_210;
  undefined8 uStack_208;
  undefined8 *puStack_200;
  longlong lStack_1f8;
  undefined8 uStack_1f0;
  undefined4 *puStack_1e8;
  undefined8 uStack_1e0;
  float afStack_1d8 [4];
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined4 *puStack_1b8;
  undefined8 uStack_1b0;
  ulonglong uStack_1a8;
  ulonglong uStack_1a0;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined8 uStack_190;
  undefined1 uStack_188;
  longlong lStack_180;
  undefined8 *puStack_178;
  byte *pbStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  float fStack_150;
  undefined4 uStack_14c;
  int iStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 *puStack_138;
  code *pcStack_130;
  undefined1 uStack_124;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  undefined8 uStack_108;
  undefined4 uStack_100;
  undefined8 **ppuStack_f8;
  byte *pbStack_f0;
  longlong *plStack_e8;
  undefined8 uStack_e0;
  
  uStack_e0 = 0xfffffffffffffffe;
  cVar16 = pdb_140e94b40();
  pbStack_170 = param_3;
  ppuStack_f8 = param_4;
  if (cVar16 == '\0') {
    lStack_180 = 0;
    goto LAB_141f28455;
  }
  puVar34 = &UNK_14342a9ff;
  uVar37 = 0x44;
  uVar26 = 0x44;
  lVar20 = pdb_141f29750(&UNK_14342a9ff);
  if (lVar20 == 1) {
    if (0x44 < uVar26) {
LAB_141f2900c:
      pdb_142dc8070(&UNK_14342a9ff,0x44,0);
LAB_141f2902d:
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(param_2,2,&UNK_14342a888);
    }
    puVar34 = &UNK_14342a9ff;
    uVar21 = pdb_141f29750(&UNK_14342a9ff);
    if ((uVar21 & 1) != 0) {
      if (0x44 < uVar26 + 2) {
        pdb_142dc8070(&UNK_14342a9ff,0x44,uVar26 + 2,0x44,&UNK_14342aae0);
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar37 = 0x42 - uVar26;
      puVar34 = &UNK_14342aa01 + uVar26;
    }
  }
  puVar31 = &UNK_14342a827;
  puVar36 = &UNK_14342a7f3;
  do {
    bVar17 = puVar31[-1];
    uVar19 = (uint)(char)bVar17;
    if ((char)bVar17 < '\0') {
      bVar18 = puVar31[-2];
      if ((char)bVar18 < -0x40) {
        bVar1 = puVar31[-3];
        if ((char)bVar1 < -0x40) {
          pbVar22 = puVar31 + -4;
          puVar31 = puVar31 + -4;
          uVar19 = bVar1 & 0x3f | (*pbVar22 & 7) << 6;
        }
        else {
          puVar31 = puVar31 + -3;
          uVar19 = bVar1 & 0xf;
        }
        uVar19 = bVar18 & 0x3f | uVar19 << 6;
      }
      else {
        puVar31 = puVar31 + -2;
        uVar19 = bVar18 & 0x1f;
      }
      uVar19 = (uint)(bVar17 & 0x3f) | uVar19 << 6;
      if (uVar19 != 0x5c) goto LAB_141f283b4;
LAB_141f283cc:
      puVar32 = puVar31 + -0x14342a7f2;
      if (puVar32 < (undefined *)0x35) {
        puVar32 = (undefined *)(0x34 - (longlong)puVar32);
        puVar36 = puVar31 + 1;
        goto LAB_141f283ee;
      }
      pdb_142dc8070(&UNK_14342a7f3,0x34,puVar32,0x34,&UNK_14342aaa8);
      goto LAB_141f2900c;
    }
    puVar31 = puVar31 + -1;
    if (uVar19 == 0x5c) goto LAB_141f283cc;
LAB_141f283b4:
    if (uVar19 == 0x2f) goto LAB_141f283cc;
  } while (puVar31 != &UNK_14342a7f3);
  puVar32 = (undefined *)0x34;
LAB_141f283ee:
  pbVar22 = (byte *)pdb_140e97000();
  if (pbVar22[0x68] != 1) goto LAB_141f28f90;
  do {
    if (*(longlong *)pbVar22 == 0) {
      pbVar22[0] = 0xff;
      pbVar22[1] = 0xff;
      pbVar22[2] = 0xff;
      pbVar22[3] = 0xff;
      pbVar22[4] = 0xff;
      pbVar22[5] = 0xff;
      pbVar22[6] = 0xff;
      pbVar22[7] = 0xff;
      pbStack_f0 = pbVar22;
      puStack_178 = (undefined8 *)pdb_140e94f10(pbVar22 + 8,puVar34,uVar37,puVar36,puVar32,1,0);
      *(longlong *)pbStack_f0 = *(longlong *)pbStack_f0 + 1;
      lStack_180 = 1;
LAB_141f28455:
      lVar20 = param_15[1];
      uVar37 = *(ulonglong *)*param_15;
      puVar27 = (undefined *)0x0;
      puVar31 = (undefined *)(uVar37 - *(ulonglong *)(lVar20 + 0x18));
      if (uVar37 < *(ulonglong *)(lVar20 + 0x18)) {
        puVar31 = puVar27;
      }
      lVar30 = (longlong)puVar31 * 0x40 + *(longlong *)(lVar20 + 8);
      puVar3 = *(undefined **)(lVar20 + 0x10);
      puVar4 = *(undefined **)(lVar20 + 0x30);
      puVar34 = puVar3 + -(longlong)puVar31;
      if (puVar3 < puVar31) {
        puVar34 = puVar27;
      }
      if (puVar3 < puVar31) {
        lVar30 = 8;
      }
      puVar32 = (undefined *)(lVar30 + -0x40 + (longlong)puVar34 * 0x40);
      if (puVar3 <= puVar31) {
        puVar32 = puVar27;
      }
      puVar33 = (undefined *)(uVar37 - *(ulonglong *)(lVar20 + 0x38));
      if (uVar37 < *(ulonglong *)(lVar20 + 0x38)) {
        puVar33 = puVar27;
      }
      uVar37 = (longlong)puVar33 * 0x40 + *(longlong *)(lVar20 + 0x28);
      puVar35 = puVar4 + -(longlong)puVar33;
      if (puVar4 < puVar33) {
        puVar35 = puVar27;
      }
      puVar36 = (undefined *)((longlong)puVar35 * 0x40);
      if (puVar4 < puVar33) {
        uVar37 = 8;
      }
      puVar28 = puVar36 + (uVar37 - 0x40);
      if (puVar4 <= puVar33) {
        puVar28 = puVar32;
      }
      puVar34 = puVar35 + (longlong)puVar34;
      if (puVar31 < puVar3 || puVar33 < puVar4) {
        puVar34 = puVar27;
      }
      *(ulonglong *)*param_15 = *(longlong *)(lVar20 + 0x40) - (longlong)puVar34;
      if (puVar31 < puVar3 || puVar33 < puVar4) {
        puVar32 = *(undefined **)(puVar28 + 0x10);
        uVar37 = (longlong)puVar32 * 0x18;
        if ((undefined *)0x555555555555555 < puVar32) {
          puVar36 = (undefined *)0x0;
LAB_141f2852e:
          pdb_142dc7e2a(puVar36,uVar37);
                    /* WARNING: Does not return */
          pcVar7 = (code *)invalidInstructionException();
          (*pcVar7)();
        }
        puVar34 = *(undefined **)(puVar28 + 8);
        if (uVar37 == 0) {
          pbStack_f0 = (byte *)0x8;
          puStack_168 = (undefined *)0x0;
          puVar31 = puStack_168;
        }
        else {
          pdb_14007ee60();
          puVar36 = (undefined *)0x8;
          pbStack_f0 = pub_1406abab0(uVar37,8);
          puVar31 = puVar32;
          if (pbStack_f0 == (byte *)0x0) goto LAB_141f2852e;
        }
        puStack_168 = puVar31;
        if (puVar32 != (undefined *)0x0) {
          pub_142e32760(pbStack_f0,puVar34,uVar37);
        }
        uStack_1c8 = *(undefined8 *)(puVar28 + 0x28);
        afStack_1d8[0] = *(float *)(puVar28 + 0x18);
        afStack_1d8[1] = *(float *)(puVar28 + 0x1c);
        afStack_1d8[2] = *(float *)(puVar28 + 0x20);
        afStack_1d8[3] = *(float *)(puVar28 + 0x24);
        uVar26 = pdb_140b54b40(*param_1,*(undefined8 *)(puVar28 + 0x30));
        uVar6 = _DAT_14305d860;
        if ((uVar26 & 0xffffffff) != 0) {
          lVar20 = param_2[1];
          uVar21 = uVar26 & 0xffffffff ^ 0xffffffff;
          if (((uVar21 < *(ulonglong *)(lVar20 + 0x10)) &&
              (piVar29 = (int *)(uVar21 * 0x18 + *(longlong *)(lVar20 + 8)),
              piVar29[4] == (int)(uVar26 >> 0x20))) && (*piVar29 != 0)) {
            param_1 = (undefined8 *)*param_2;
            uVar37 = *(ulonglong *)(piVar29 + 2);
            if (((uVar37 & 0xffffffff) < (ulonglong)param_1[7]) &&
               ((*(ulonglong *)(param_1[5] + (uVar37 >> 6 & 0x3ffffff) * 8) >> (uVar37 & 0x3f) & 1)
                != 0)) {
              if ((ulonglong)param_1[0x22] <
                  *(ulonglong *)(*(longlong *)(lVar20 + 0x1a0) + 0x40 + (uVar37 >> 0x20) * 0x48)) {
                lVar20 = *(longlong *)(lVar20 + 0x1a0) + (uVar37 >> 0x20) * 0x48;
                uVar37 = *(ulonglong *)(*(longlong *)(lVar20 + 0x38) + param_1[0x22] * 8);
                if (uVar37 == 0) goto LAB_141f28790;
                lVar20 = *(longlong *)(*(longlong *)(lVar20 + 0x18) + 0x10 + ~uVar37 * 0x30);
              }
              else {
LAB_141f28790:
                lVar20 = 0;
              }
              uStack_160 = 0;
              plStack_e8 = (longlong *)((ulonglong)(uint)~piVar29[1] * 0x58 + lVar20);
              fVar47 = (afStack_1d8[1] + (float)uStack_1c8) * _DAT_142e36f50;
              fVar48 = (uStack_1c8._4_4_ + afStack_1d8[2]) * _DAT_142e36f60;
              fVar49 = (afStack_1d8[0] + afStack_1d8[3]) * _UNK_142e36f64;
              pbStack_210 = pbStack_f0 + (longlong)puVar32 * 0x18;
              uStack_208 = *(undefined8 *)pbStack_170;
              puStack_200 = *ppuStack_f8;
              lStack_1f8 = *param_14 + 0x2c;
              fVar42 = afStack_1d8[0] - afStack_1d8[3];
              fVar38 = afStack_1d8[1] - (float)uStack_1c8;
              fVar45 = afStack_1d8[2] - uStack_1c8._4_4_;
              uStack_194 = *(undefined4 *)((longlong)param_12 + 0x1c);
              uStack_1f0 = *param_12;
              puStack_1e8 = (undefined4 *)param_12[2];
              uStack_1e0 = *param_13;
              uStack_1c0 = *param_10;
              puStack_1b8 = (undefined4 *)*param_9;
              uStack_1b0 = *param_5;
              param_2 = (undefined8 *)0x0;
              uStack_1a8 = 0;
              uStack_1a0 = 0;
              pbVar22 = pbStack_f0;
              goto LAB_141f288d0;
            }
          }
        }
        if (puStack_168 != (undefined *)0x0) {
          pub_1406abac0(pbStack_f0,(longlong)puStack_168 * 0x18,8);
        }
      }
      if (lStack_180 == 0) {
        return;
      }
      plVar23 = (longlong *)pdb_140e97000();
      if (((char)plVar23[0xd] != '\x01') &&
         (plVar23 = (longlong *)pdb_142e293d0(plVar23,0), plVar23 == (longlong *)0x0)) break;
      if (*plVar23 == 0) {
        *plVar23 = -1;
        ppuStack_f8 = (undefined8 **)plVar23;
        pdb_140e95370(plVar23 + 1,puStack_178);
        *ppuStack_f8 = (undefined8 *)((longlong)*ppuStack_f8 + 1);
        return;
      }
    }
    pbVar22 = (byte *)pdb_142dc8090(&UNK_14359bf70);
LAB_141f28f90:
    pbVar22 = (byte *)pdb_142e293d0(pbVar22,0);
  } while (pbVar22 != (byte *)0x0);
  pdb_142dc7890(&UNK_14359bf00);
LAB_141f28fc5:
                    /* WARNING: Subroutine does not return */
  pdb_142dc7e11(8,0x30);
LAB_141f288d0:
  if (pbVar22 == pbStack_210) goto LAB_141f28cf2;
  uVar24 = *(undefined8 *)pbVar22;
  uVar43 = *(undefined4 *)(pbVar22 + 8);
  uStack_108 = *(undefined8 *)(pbVar22 + 0xc);
  uStack_100 = *(undefined4 *)(pbVar22 + 0x14);
  puStack_218 = param_2;
  uStack_198 = uVar43;
  uStack_228 = pdb_1406d0830(uStack_208);
  uStack_220 = uVar24;
  if ((undefined8 *)0x1 < param_2) goto LAB_141f2902d;
  uVar24 = pdb_14072cd40(&uStack_228);
  pdb_140b133e0(auStack_280,puStack_200,uVar24);
  uStack_158 = (undefined8 ***)&puStack_218;
  fStack_150 = 2.1413307;
  uStack_14c = 1;
  iStack_148 = (int)lStack_1f8;
  uStack_144 = (undefined4)((ulonglong)lStack_1f8 >> 0x20);
  uStack_140 = 0x40001000;
  uStack_13c = 1;
  puStack_138 = &uStack_198;
  pcStack_130 = pdb_140f705d0;
  pdb_140f60760(&ppuStack_268,&UNK_14342a8a0,&uStack_158);
  ppuStack_f8 = ppuStack_268;
  pbVar13 = (byte *)CONCAT44(uStack_25c,fStack_260);
  uVar24 = CONCAT44(uStack_254,iStack_258);
  pdb_14007ee60();
  pbVar25 = pub_1406abab0(0x30,8);
  pbStack_170 = pbVar13;
  if (pbVar25 == (byte *)0x0) goto LAB_141f28fc5;
  pbVar25[0] = 1;
  pbVar25[1] = 0;
  pbVar25[2] = 0;
  pbVar25[3] = 0;
  pbVar25[4] = 0;
  pbVar25[5] = 0;
  pbVar25[6] = 0;
  pbVar25[7] = 0;
  pbVar25[8] = 1;
  pbVar25[9] = 0;
  pbVar25[10] = 0;
  pbVar25[0xb] = 0;
  pbVar25[0xc] = 0;
  pbVar25[0xd] = 0;
  pbVar25[0xe] = 0;
  pbVar25[0xf] = 0;
  *(undefined4 *)(pbVar25 + 0x10) = uVar43;
  *(undefined8 *)(pbVar25 + 0x14) = *(undefined8 *)(afStack_1d8 + (longlong)param_2 * 3);
  *(float *)(pbVar25 + 0x1c) = afStack_1d8[(longlong)param_2 * 3 + 2];
  *(undefined8 *)(pbVar25 + 0x20) = uStack_108;
  *(undefined4 *)(pbVar25 + 0x28) = uStack_100;
  pdb_1409baea0(&uStack_158,pbVar13,uVar24,pbVar25,&UNK_14342a8c0);
  puStack_248 = puStack_138;
  iStack_258 = iStack_148;
  uStack_254 = uStack_144;
  uStack_250 = uStack_140;
  uStack_24c = uStack_13c;
  ppuStack_268 = uStack_158;
  fStack_260 = fStack_150;
  uStack_25c = uStack_14c;
  pdb_140b133f0(auStack_280,&ppuStack_268);
  if (ppuStack_f8 != (undefined8 **)0x0) {
    pub_1406abac0(pbStack_170,(ulonglong)ppuStack_f8,1);
  }
  bVar17 = pdb_1408ffab0(&uStack_228);
  bVar18 = bVar17 - 2;
  if (bVar17 < 2) {
    bVar18 = 3;
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar18) {
  case 1:
    pdb_140bce520(&ppuStack_268,uStack_1c0);
    uVar43 = *puStack_1b8;
    uVar44 = 0;
    uVar40 = pdb_140bce550(&ppuStack_268,uVar43,puStack_1b8[1]);
    uStack_158 = (undefined8 ***)CONCAT44(fVar47,fVar49);
    uStack_144 = uStack_100;
    uStack_14c = (undefined4)uStack_108;
    iStack_148 = (int)((ulonglong)uStack_108 >> 0x20);
    uStack_190 = uVar6;
    uStack_188 = 0;
    fStack_150 = fVar48;
    pdb_140bce5a0(&fStack_114,uVar40,CONCAT44(uVar44,uVar43),&ppuStack_268,uStack_1b0,&uStack_158,
                  &uStack_190);
    fVar39 = SQRT((fStack_114 - fVar49) * (fStack_114 - fVar49) +
                  (fStack_110 - fVar47) * (fStack_110 - fVar47) +
                  (fStack_10c - fVar48) * (fStack_10c - fVar48));
    *param_11 = (fVar39 + fVar39) - SQRT(fVar45 * fVar45 + fVar38 * fVar38 + fVar42 * fVar42);
    *puStack_1e8 = uStack_194;
    uStack_1a0 = CONCAT71((int7)((ulonglong)plStack_e8 >> 8),1);
    pdb_140c419b0(uStack_1f0,*plStack_e8,uStack_1e0);
    break;
  case 2:
    pdb_140bce520(&ppuStack_268,uStack_1c0);
    uVar43 = *puStack_1b8;
    uVar44 = 0;
    uVar40 = pdb_140bce550(&ppuStack_268,uVar43,puStack_1b8[1]);
    uStack_158 = (undefined8 ***)CONCAT44(fVar47,fVar49);
    uStack_144 = uStack_100;
    uStack_14c = (undefined4)uStack_108;
    iStack_148 = (int)((ulonglong)uStack_108 >> 0x20);
    uStack_190 = uVar6;
    uStack_188 = 0;
    fStack_150 = fVar48;
    pdb_140bce5a0(&fStack_114,uVar40,CONCAT44(uVar44,uVar43),&ppuStack_268,uStack_1b0,&uStack_158,
                  &uStack_190);
    fVar15 = fStack_10c;
    fVar14 = fStack_110;
    fVar41 = fStack_114;
    fVar39 = *param_11;
    uVar2 = *(undefined1 *)((longlong)plStack_e8 + 0x3c);
    uVar46 = pdb_140b77170();
    fVar41 = SQRT((fVar41 - fVar49) * (fVar41 - fVar49) + (fVar14 - fVar47) * (fVar14 - fVar47) +
                  (fVar15 - fVar48) * (fVar15 - fVar48));
    unaff_XMM6_Da =
         pdb_140ac6180((fVar41 + fVar41) - fVar39,
                       CONCAT71((int7)((ulonglong)uVar24 >> 8),uVar2) & 0xffffffff,uVar46,uVar40);
    uStack_160 = 1;
    break;
  case 3:
    uStack_1a8 = CONCAT71((int7)((ulonglong)
                                 (&UNK_14342abe4 + *(int *)(&UNK_14342abe4 + (ulonglong)bVar18 * 4))
                                >> 8),1);
    break;
  case 4:
    in(0xdc);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pbVar22 = pbVar22 + 0x18;
  param_2 = (undefined8 *)((longlong)param_2 + 1);
  goto LAB_141f288d0;
LAB_141f28cf2:
  if ((int)uStack_160 != 0) {
    puStack_138 = (undefined4 *)*plStack_e8;
    uStack_124 = 0;
    uStack_158 = (undefined8 ***)((ulonglong)uStack_158 & 0xffffffff00000000);
    fStack_150 = 0.0;
    pcStack_130 = (code *)((ulonglong)pcStack_130 & 0xffffffff00000000);
    uStack_140 = 0;
    iStack_148 = (int)uStack_160;
    uStack_144 = unaff_XMM6_Da;
    pdb_141b75220(param_8,&uStack_158,&UNK_14342a858);
  }
  if ((uStack_1a0 & 1) != 0) {
    lVar20 = *plStack_e8;
    lVar30 = plStack_e8[7];
    iStack_148 = (int)((ulonglong)plStack_e8[6] >> 0x20);
    uStack_144 = (undefined4)lVar30;
    uStack_140 = (undefined4)((ulonglong)lVar30 >> 0x20);
    uStack_158 = *(undefined8 ****)((longlong)plStack_e8 + 0x24);
    uVar6 = *(undefined8 *)((longlong)plStack_e8 + 0x2c);
    fStack_150 = (float)uVar6;
    uStack_14c = (undefined4)((ulonglong)uVar6 >> 0x20);
    *(undefined4 *)param_7[2] = *(undefined4 *)((longlong)param_7 + 0x1c);
    puVar5 = (undefined4 *)*param_7;
    *puVar5 = 0;
    *(longlong *)(puVar5 + 4) = lVar20;
    *(undefined8 ****)(puVar5 + 6) = uStack_158;
    *(undefined8 *)(puVar5 + 8) = uVar6;
    *(ulonglong *)(puVar5 + 9) = CONCAT44(iStack_148,uStack_14c);
    *(longlong *)(puVar5 + 0xb) = lVar30;
  }
  if (((uStack_1a8 & 1) != 0) && (piVar29 = (int *)*param_7, *piVar29 != 2)) {
    if (((float)piVar29[8] == *(float *)((longlong)plStack_e8 + 0x2c)) &&
       (!NAN((float)piVar29[8]) && !NAN(*(float *)((longlong)plStack_e8 + 0x2c)))) {
      if (((float)piVar29[9] == *(float *)(plStack_e8 + 6)) &&
         (!NAN((float)piVar29[9]) && !NAN(*(float *)(plStack_e8 + 6)))) {
        if (((float)piVar29[10] == *(float *)((longlong)plStack_e8 + 0x34)) &&
           (!NAN((float)piVar29[10]) && !NAN(*(float *)((longlong)plStack_e8 + 0x34)))) {
          if (((float)piVar29[0xb] == *(float *)(plStack_e8 + 7)) &&
             (!NAN((float)piVar29[0xb]) && !NAN(*(float *)(plStack_e8 + 7)))) {
            if (((float)piVar29[6] == *(float *)((longlong)plStack_e8 + 0x24)) &&
               (!NAN((float)piVar29[6]) && !NAN(*(float *)((longlong)plStack_e8 + 0x24)))) {
              if (((((float)piVar29[7] == *(float *)(plStack_e8 + 5)) &&
                   (!NAN((float)piVar29[7]) && !NAN(*(float *)(plStack_e8 + 5)))) &&
                  ((char)piVar29[0xc] == *(char *)((longlong)plStack_e8 + 0x3c))) &&
                 (*(char *)((longlong)piVar29 + 0x31) == *(char *)((longlong)plStack_e8 + 0x3d)))
              goto LAB_141f28f26;
            }
          }
        }
      }
    }
    *(undefined4 *)param_6[2] = *(undefined4 *)((longlong)param_6 + 0x1c);
    uVar6 = *param_6;
    uVar46 = *(undefined8 *)(piVar29 + 4);
    uVar12 = *(undefined8 *)(piVar29 + 6);
    iVar8 = piVar29[8];
    iVar9 = piVar29[9];
    iVar10 = piVar29[10];
    iVar11 = piVar29[0xb];
    uVar24 = *(undefined8 *)((longlong)plStack_e8 + 0x24);
    uVar43 = *(undefined4 *)((longlong)plStack_e8 + 0x2c);
    lVar20 = plStack_e8[6];
    uVar40 = *(undefined4 *)((longlong)plStack_e8 + 0x34);
    lVar30 = plStack_e8[7];
    pdb_14007ee60();
    pbVar22 = pub_1406abab0(0x50,8);
    if (pbVar22 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,0x50);
    }
    pbVar22[0] = 1;
    pbVar22[1] = 0;
    pbVar22[2] = 0;
    pbVar22[3] = 0;
    pbVar22[4] = 0;
    pbVar22[5] = 0;
    pbVar22[6] = 0;
    pbVar22[7] = 0;
    pbVar22[8] = 1;
    pbVar22[9] = 0;
    pbVar22[10] = 0;
    pbVar22[0xb] = 0;
    pbVar22[0xc] = 0;
    pbVar22[0xd] = 0;
    pbVar22[0xe] = 0;
    pbVar22[0xf] = 0;
    pbVar22[0x10] = 2;
    *(int *)(pbVar22 + 0x14) = iVar9;
    *(int *)(pbVar22 + 0x18) = iVar8;
    *(int *)(pbVar22 + 0x1c) = iVar10;
    *(int *)(pbVar22 + 0x20) = iVar11;
    *(int *)(pbVar22 + 0x24) = (int)lVar20;
    *(undefined4 *)(pbVar22 + 0x28) = uVar43;
    *(undefined4 *)(pbVar22 + 0x2c) = uVar40;
    *(int *)(pbVar22 + 0x30) = (int)lVar30;
    *(undefined8 *)(pbVar22 + 0x38) = uVar46;
    *(undefined8 *)(pbVar22 + 0x40) = uVar12;
    *(undefined8 *)(pbVar22 + 0x48) = uVar24;
    fStack_150 = SUB84(pbVar22,0);
    uStack_14c = (undefined4)((ulonglong)pbVar22 >> 0x20);
    uStack_158 = (undefined8 ***)0x8;
    pdb_140ae5180(uVar6,&uStack_158,&UNK_14342a870);
  }
LAB_141f28f26:
  if (puStack_168 != (undefined *)0x0) {
    pub_1406abac0(pbStack_f0,(longlong)puStack_168 * 0x18,8);
  }
  if (lStack_180 != 0) {
    ppuStack_268 = &puStack_178;
    uStack_158 = &ppuStack_268;
    pdb_142807ee0(&UNK_14342aa48,&uStack_158);
  }
  return;
}

