// VA 0x14084bec0, PDB extent 4514 bytes
// system_decorator::decorator_visual::lantern::maintain_lantern_lights
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/lantern.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_decorator::decorator_visual::lantern::maintain_lantern_lights
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/lantern.rs
   Extent: 4514 */

void pdb_14084bec0(longlong *param_1,undefined8 *param_2,undefined8 *param_3,undefined4 *param_4,
                  undefined8 param_5,undefined8 *param_6,longlong *param_7,longlong *param_8)

{
  byte *pbVar1;
  uint *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  float fVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  undefined2 uVar10;
  ushort uVar11;
  ushort uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  ulonglong uVar15;
  ushort *puVar16;
  code *pcVar17;
  uint uVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  char cVar26;
  uint uVar27;
  longlong lVar28;
  ulonglong uVar29;
  longlong *plVar30;
  undefined8 *puVar31;
  undefined8 uVar32;
  longlong lVar33;
  uint *puVar34;
  ulonglong uVar35;
  longlong *plVar36;
  ushort *puVar37;
  ulonglong *unaff_RBX;
  ulonglong *unaff_RSI;
  ulonglong uVar38;
  ulonglong uVar39;
  ulonglong uVar40;
  undefined *puVar41;
  undefined *puVar42;
  ulonglong uVar43;
  ulonglong uVar44;
  ushort *puVar45;
  longlong *in_R11;
  longlong lVar46;
  longlong lVar47;
  undefined2 *puVar48;
  longlong lVar49;
  undefined *puVar50;
  ulonglong *puVar51;
  undefined4 **unaff_R15;
  ulonglong uVar52;
  bool bVar53;
  bool bVar54;
  float fVar55;
  undefined8 uStack_250;
  longlong lStack_248;
  ulonglong uStack_240;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined8 uStack_1f8;
  undefined4 *puStack_1f0;
  undefined8 uStack_1e8;
  undefined8 *puStack_1d0;
  longlong lStack_1c8;
  undefined8 *puStack_1c0;
  undefined2 uStack_1b8;
  undefined4 uStack_1b6;
  undefined2 uStack_1b2;
  undefined2 uStack_1b0;
  undefined2 uStack_1ae;
  undefined2 uStack_1ac;
  undefined2 uStack_1aa;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined8 uStack_170;
  ulonglong uStack_168;
  longlong lStack_160;
  undefined8 uStack_158;
  longlong lStack_150;
  ulonglong *puStack_148;
  undefined4 uStack_140;
  int iStack_13c;
  ulonglong uStack_138;
  undefined4 *puStack_130;
  longlong lStack_128;
  longlong lStack_120;
  ulonglong uStack_118;
  undefined8 uStack_110;
  longlong lStack_108;
  undefined uStack_f9;
  longlong lStack_f8;
  longlong *plStack_f0;
  undefined4 uStack_e4;
  longlong *plStack_e0;
  longlong lStack_d8;
  byte bStack_c9;
  longlong *plStack_c8;
  undefined8 uStack_c0;
  
  uStack_c0 = 0xfffffffffffffffe;
  puStack_1d0 = param_2;
  puStack_1c0 = param_3;
  plStack_c8 = (longlong *)param_4;
  cVar26 = pdb_140e94b40();
  plStack_e0 = param_1;
  if (cVar26 == '\0') {
    lStack_160 = 0;
  }
  else {
    puVar48 = (undefined2 *)&UNK_14300c121;
    puVar51 = (ulonglong *)0x44;
    plVar36 = (longlong *)0x44;
    lVar28 = pdb_14084d0a0(&UNK_14300c121);
    if (lVar28 == 1) {
      if ((undefined4 *)0x44 < plVar36) {
        pdb_142dc8070(&UNK_14300c121,0x44,0,plVar36,&UNK_14300c1e8);
        goto LAB_14084ce25;
      }
      puVar48 = (undefined2 *)&UNK_14300c121;
      uVar29 = pdb_14084d0a0(&UNK_14300c121);
      if ((uVar29 & 1) != 0) {
        if (0x44 < (longlong)plVar36 + 2U) {
          pdb_142dc8070(&UNK_14300c121,0x44,(longlong)plVar36 + 2U,0x44,&UNK_14300c200);
          pcVar17 = (code *)swi(3);
          (*pcVar17)();
          return;
        }
        puVar51 = (ulonglong *)(0x42 - (longlong)plVar36);
        puVar48 = (undefined2 *)((longlong)plVar36 + 0x14300c123);
      }
    }
    puVar41 = &UNK_14300be41;
    puVar50 = &UNK_14300be09;
    do {
      bVar7 = puVar41[-1];
      uVar27 = (uint)(char)bVar7;
      if ((char)bVar7 < '\0') {
        bVar8 = puVar41[-2];
        if ((char)bVar8 < -0x40) {
          bVar9 = puVar41[-3];
          if ((char)bVar9 < -0x40) {
            pbVar1 = puVar41 + -4;
            puVar41 = puVar41 + -4;
            uVar27 = bVar9 & 0x3f | (*pbVar1 & 7) << 6;
          }
          else {
            puVar41 = puVar41 + -3;
            uVar27 = bVar9 & 0xf;
          }
          plVar36 = (longlong *)(ulonglong)(uVar27 << 6);
          uVar27 = bVar8 & 0x3f | uVar27 << 6;
        }
        else {
          puVar41 = puVar41 + -2;
          uVar27 = bVar8 & 0x1f;
        }
        uVar27 = (uint)(bVar7 & 0x3f) | uVar27 << 6;
        if (uVar27 != 0x5c) goto LAB_14084c034;
LAB_14084c04c:
        puVar50 = &UNK_14300be09;
        puVar42 = puVar41 + -0x14300be08;
        if ((undefined *)0x38 < puVar42) {
          pdb_142dc8070(&UNK_14300be09,0x38,puVar42,0x38,&UNK_14300c1c8);
          param_7 = in_R11;
          goto LAB_14084cdf5;
        }
        lVar28 = 0x38 - (longlong)puVar42;
        puVar50 = puVar41 + 1;
        goto LAB_14084c06e;
      }
      puVar41 = puVar41 + -1;
      if (uVar27 == 0x5c) goto LAB_14084c04c;
LAB_14084c034:
      if (uVar27 == 0x2f) goto LAB_14084c04c;
    } while (puVar41 != &UNK_14300be09);
    lVar28 = 0x38;
LAB_14084c06e:
    plVar30 = (longlong *)pdb_140e97000();
    if ((char)plVar30[0xd] != '\x01') {
      plVar36 = (longlong *)0x0;
      plVar30 = (longlong *)pdb_142dde6e0(plVar30);
      if (plVar30 == (longlong *)0x0) {
LAB_14084cdb5:
        pdb_142dc7890(&UNK_14330e598);
LAB_14084cdc2:
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_14300c050);
      }
    }
    if (*plVar30 != 0) goto LAB_14084cce6;
    *plVar30 = -1;
    plStack_f0 = plVar30;
    uStack_158 = pdb_140e94f10(plVar30 + 1,puVar48,puVar51,puVar50,lVar28,1,0);
    *plStack_f0 = *plStack_f0 + 1;
    lStack_160 = 1;
  }
  *(undefined8 *)((longlong)plStack_c8 + 0x28) = 0;
  puVar51 = (ulonglong *)*param_6;
  lVar28 = param_6[1];
  uVar29 = *puVar51;
  uVar38 = 0;
  uVar52 = uVar29 - *(ulonglong *)(lVar28 + 0x18);
  if (uVar29 < *(ulonglong *)(lVar28 + 0x18)) {
    uVar52 = uVar38;
  }
  uVar35 = uVar29 - *(ulonglong *)(lVar28 + 0x38);
  if (uVar29 < *(ulonglong *)(lVar28 + 0x38)) {
    uVar35 = uVar38;
  }
  uVar29 = *(ulonglong *)(lVar28 + 0x30);
  bVar53 = uVar35 <= uVar29;
  uVar43 = uVar29 - uVar35;
  uVar44 = uVar43;
  if (!bVar53) {
    uVar44 = uVar38;
  }
  uVar15 = *(ulonglong *)(lVar28 + 0x10);
  bVar54 = uVar52 <= uVar15;
  uVar39 = uVar15 - uVar52;
  uVar40 = uVar39;
  if (!bVar54) {
    uVar40 = uVar38;
  }
  uVar38 = *(ulonglong *)(lVar28 + 0x40);
  lVar49 = *(longlong *)(lVar28 + 8);
  lVar28 = *(longlong *)(lVar28 + 0x28);
  *puVar51 = (uVar38 - uVar44) - uVar40;
  bStack_c9 = bVar54 && uVar39 != 0 || bVar53 && uVar43 != 0;
  if (bVar54 && uVar39 != 0 || bVar53 && uVar43 != 0) {
    lVar28 = lVar28 + uVar35 * 0x10;
    lVar49 = lVar49 + uVar52 * 0x10;
    if (uVar15 < uVar52) {
      lVar49 = 8;
    }
    lVar33 = 0;
    if (uVar52 < uVar15) {
      lVar33 = lVar49 + -0x10 + uVar40 * 0x10;
    }
    if (uVar29 < uVar35) {
      lVar28 = 8;
    }
    lVar28 = lVar28 + -0x10 + uVar44 * 0x10;
    if (uVar29 <= uVar35) {
      lVar28 = lVar33;
    }
    *puVar51 = uVar38;
    iStack_13c = *(int *)(lVar28 + 8);
  }
  fVar25 = _DAT_14300bbe4;
  fVar24 = _DAT_14300bbe0;
  fVar23 = _DAT_14300a334;
  fVar22 = _DAT_142e3787c;
  fVar21 = _DAT_142e37848;
  fVar20 = _DAT_142e36f28;
  puStack_148 = (ulonglong *)((longlong)plStack_c8 + 0x18);
  plVar36 = (longlong *)*plStack_e0;
  lStack_108 = plStack_e0[1];
  uStack_e4 = *(undefined4 *)((longlong)plStack_e0 + 0x14);
  puVar34 = (uint *)plVar36[0x1f];
  puVar2 = puVar34 + plVar36[0x20];
  puStack_130 = (undefined4 *)CONCAT71(puStack_130._1_7_,*(undefined1 *)(plVar36 + 0x21));
  lStack_1c8 = *param_7 + 0x98;
  lStack_120 = *param_8;
  lStack_150 = 8;
  lVar28 = 0;
  uStack_110 = 0;
  lStack_d8 = 0;
  lStack_f8 = 0;
  plVar30 = (longlong *)0x0;
  plStack_e0 = plVar36;
  do {
    if ((char)puStack_130 == '\0') {
      if ((int)plVar30 == (int)lVar28) {
        if (puVar34 == puVar2) break;
        while( true ) {
          lVar28 = *(longlong *)
                    (*(longlong *)(lStack_108 + 0x100) + 0x58 + (ulonglong)*puVar34 * 0xa0);
          if (lVar28 != 0) break;
          puVar34 = puVar34 + 1;
          if (puVar34 == puVar2) goto LAB_14084c6c6;
        }
        lVar47 = *(longlong *)(lStack_108 + 0x100) + (ulonglong)*puVar34 * 0xa0;
        uVar29 = (ulonglong)*(uint *)(lVar47 + 0x94);
        lVar49 = *(longlong *)(lStack_108 + 0x1a0);
        lVar33 = *(longlong *)(lVar49 + 0x18 + uVar29 * 0x48);
        lVar46 = *(longlong *)(lVar49 + 0x38 + uVar29 * 0x48);
        if (((ulonglong)plStack_e0[0x23] < *(ulonglong *)(lVar49 + 0x40 + uVar29 * 0x48)) &&
           (uVar29 = *(ulonglong *)(lVar46 + plStack_e0[0x23] * 8), uVar29 != 0)) {
          lStack_d8 = *(longlong *)(lVar33 + 0x10 + ~uVar29 * 0x30);
        }
        else {
          lStack_d8 = 0;
        }
        uVar29 = plStack_e0[0x24];
        uStack_110 = 0;
        if (uVar29 < *(ulonglong *)(lVar47 + 0x88)) {
          uStack_110 = CONCAT71((int7)(uVar29 >> 8),
                                *(longlong *)(*(longlong *)(lVar47 + 0x80) + uVar29 * 8) != 0);
        }
        plStack_f0 = (longlong *)0x0;
        lVar49 = ~*(ulonglong *)(lVar46 + plStack_e0[0x22] * 8) * 0x30;
        lStack_f8 = *(longlong *)(lVar33 + 0x10 + lVar49);
        lStack_128 = *(longlong *)(lVar33 + 0x28 + lVar49);
        puVar34 = puVar34 + 1;
        lStack_150 = *(longlong *)(lVar47 + 0x50);
        plVar30 = plStack_f0;
      }
      plStack_f0 = plVar30;
      plVar30 = (longlong *)(ulonglong)~*(uint *)(lStack_150 + 8 + (longlong)plStack_f0 * 0x10);
      plVar36 = plStack_f0;
    }
    else {
      plVar36 = plVar30;
      if ((int)plVar30 == (int)lVar28) {
        if (puVar34 == puVar2) break;
        while( true ) {
          lVar28 = *(longlong *)
                    (*(longlong *)(lStack_108 + 0x1a0) + 0x10 + (ulonglong)*puVar34 * 0x48);
          if (lVar28 != 0) break;
          puVar34 = puVar34 + 1;
          if (puVar34 == puVar2) goto LAB_14084c6c6;
        }
        lVar49 = *(longlong *)(lStack_108 + 0x1a0) + (ulonglong)*puVar34 * 0x48;
        uVar29 = *(ulonglong *)(lVar49 + 0x40);
        lVar33 = *(longlong *)(lVar49 + 0x18);
        lVar49 = *(longlong *)(lVar49 + 0x38);
        if (((ulonglong)plStack_e0[0x23] < uVar29) &&
           (uVar52 = *(ulonglong *)(lVar49 + plStack_e0[0x23] * 8), uVar52 != 0)) {
          lStack_d8 = *(longlong *)(lVar33 + 0x10 + ~uVar52 * 0x30);
        }
        else {
          lStack_d8 = 0;
        }
        plVar30 = (longlong *)0x0;
        uStack_110 = 0;
        if ((ulonglong)plStack_e0[0x24] < uVar29) {
          uStack_110 = CONCAT71((int7)(uVar29 >> 8),
                                *(longlong *)(lVar49 + plStack_e0[0x24] * 8) != 0);
        }
        lVar49 = ~*(ulonglong *)(lVar49 + plStack_e0[0x22] * 8) * 0x30;
        lStack_f8 = *(longlong *)(lVar33 + 0x10 + lVar49);
        lStack_128 = *(longlong *)(lVar33 + 0x28 + lVar49);
        puVar34 = puVar34 + 1;
        plVar36 = plVar30;
      }
    }
    plStack_f0 = plVar36;
    puVar31 = (undefined8 *)(lStack_f8 + (longlong)plVar30 * 0x24);
    puVar4 = (undefined4 *)(lStack_128 + (longlong)plVar30 * 4);
    puVar3 = (undefined4 *)(lStack_d8 + (longlong)plVar30 * 4);
    uStack_240 = pdb_140dedfe0(*(undefined4 *)((longlong)puVar31 + 0x1c));
    fVar55 = (float)pdb_140e02880(&uStack_240);
    fVar55 = fVar55 * fVar24 + fVar21;
    if ((bStack_c9 & *(int *)((longlong)puVar31 + 0x1c) == iStack_13c) == 0) {
      if ((char)uStack_110 != '\x01') {
        cVar26 = pdb_140a937c0(lStack_1c8);
        if (((cVar26 != '\0') && (fVar55 * fVar22 + fVar23 <= *(float *)(lStack_120 + 8))) &&
           (*(float *)(lStack_120 + 8) < fVar25)) goto LAB_14084c5dc;
        fVar6 = *(float *)(lStack_120 + 0x24);
        *puVar4 = uStack_e4;
        *(bool *)((longlong)puVar31 + 0x22) = fVar6 < fVar20 && fVar55 <= fVar6;
        if (fVar6 >= fVar20 || fVar55 > fVar6) goto LAB_14084c2e4;
        goto LAB_14084c5e8;
      }
      *puVar4 = uStack_e4;
      *(undefined1 *)((longlong)puVar31 + 0x22) = 0;
    }
    else {
LAB_14084c5dc:
      *puVar4 = uStack_e4;
      *(undefined1 *)((longlong)puVar31 + 0x22) = 1;
LAB_14084c5e8:
      uVar29 = *(ulonglong *)((longlong)plStack_c8 + 0x28);
      if (uVar29 < 0x8000) {
        uVar13 = *(undefined4 *)((longlong)puVar31 + 0x1c);
        uVar14 = *puVar3;
        uVar5 = *(undefined4 *)(puVar31 + 3);
        uStack_1ae = (undefined2)*(undefined4 *)(puVar31 + 1);
        uStack_1ac = (undefined2)((uint)*(undefined4 *)(puVar31 + 1) >> 0x10);
        uVar32 = *puVar31;
        uStack_1b6 = (undefined4)uVar32;
        uStack_1b2 = (undefined2)((ulonglong)uVar32 >> 0x20);
        uStack_1b0 = (undefined2)((ulonglong)uVar32 >> 0x30);
        if (uVar29 == *puStack_148) {
          pdb_142d8dbe0(puStack_148);
        }
        lVar49 = *(longlong *)((longlong)plStack_c8 + 0x20);
        lVar33 = uVar29 * 0x1c;
        *(undefined4 *)(lVar49 + lVar33) = uVar13;
        *(undefined4 *)(lVar49 + 4 + lVar33) = uVar14;
        *(undefined4 *)(lVar49 + 8 + lVar33) = uVar5;
        *(undefined2 *)(lVar49 + 0xc + lVar33) = 0;
        *(ulonglong *)(lVar49 + 0xe + lVar33) = CONCAT26(uStack_1b2,CONCAT42(uStack_1b6,uStack_1b8))
        ;
        *(ulonglong *)(lVar49 + 0x14 + lVar33) =
             CONCAT26(uStack_1ac,CONCAT24(uStack_1ae,CONCAT22(uStack_1b0,uStack_1b2)));
        *(ulonglong *)((longlong)plStack_c8 + 0x28) = uVar29 + 1;
      }
    }
LAB_14084c2e4:
    plVar30 = (longlong *)(ulonglong)((int)plStack_f0 + 1);
  } while( true );
LAB_14084c6c6:
  plVar36 = *(longlong **)((longlong)plStack_c8 + 0x28);
  puVar50 = &uStack_f9;
  uStack_1b8 = SUB82(puVar50,0);
  uStack_1b6 = (undefined4)((ulonglong)puVar50 >> 0x10);
  uStack_1b2 = (undefined2)((ulonglong)puVar50 >> 0x30);
  if ((undefined4 *)0x1 < plVar36) goto LAB_14084ccf2;
LAB_14084c6ea:
  uStack_140 = 0;
  puStack_1f0 = &uStack_140;
  uStack_1e8 = param_5;
  param_1 = (longlong *)((longlong)plStack_c8 + 0x30);
  unaff_RSI = (ulonglong *)((longlong)plStack_c8 + 0x48);
  uStack_118 = 0xffffffffffffffff;
  uStack_138 = 0;
  unaff_R15 = &puStack_1f0;
  uStack_1b8 = SUB82(unaff_R15,0);
  uStack_1b6 = (undefined4)((ulonglong)unaff_R15 >> 0x10);
  uStack_1b2 = (undefined2)((ulonglong)unaff_R15 >> 0x30);
  uStack_1b0 = SUB82(param_1,0);
  uStack_1ae = (undefined2)((ulonglong)param_1 >> 0x10);
  uStack_1ac = (undefined2)((ulonglong)param_1 >> 0x20);
  uStack_1aa = (undefined2)((ulonglong)param_1 >> 0x30);
  unaff_RBX = &uStack_118;
  puVar51 = &uStack_138;
  puVar48 = &uStack_1b8;
  uStack_1a8 = unaff_RBX;
  uStack_1a0 = puVar51;
  uStack_198 = unaff_RSI;
  pdb_14149b070(*(undefined8 *)((longlong)plStack_c8 + 0x20),
                *(undefined8 *)((longlong)plStack_c8 + 0x28),
                *(undefined8 *)((longlong)plStack_c8 + 8),
                *(undefined8 *)((longlong)plStack_c8 + 0x10),puVar48);
  in_R11 = param_7;
  if (uStack_118 != 0xffffffffffffffff) {
    puVar16 = *(ushort **)((longlong)plStack_c8 + 0x38);
    uVar29 = *(ulonglong *)((longlong)plStack_c8 + 0x40);
    uStack_1b8 = SUB82(puVar50,0);
    uStack_1b6 = (undefined4)((ulonglong)puVar50 >> 0x10);
    uStack_1b2 = (undefined2)((ulonglong)puVar50 >> 0x30);
    if (1 < uVar29) {
      if (uVar29 < 0x15) {
        puVar37 = puVar16 + 1;
        lVar28 = 2;
        do {
          in_R11 = (longlong *)(ulonglong)puVar37[-1];
          uVar11 = *puVar37;
          lVar49 = lVar28;
          if (puVar37[-1] < uVar11) {
            do {
              *(short *)((longlong)puVar16 + lVar49) = (short)in_R11;
              puVar45 = puVar16;
              if (lVar49 == 2) goto LAB_14084cd46;
              uVar12 = *(ushort *)((longlong)puVar16 + lVar49 + -4);
              in_R11 = (longlong *)(ulonglong)uVar12;
              lVar49 = lVar49 + -2;
            } while (uVar12 < uVar11);
            puVar45 = (ushort *)(lVar49 + (longlong)puVar16);
LAB_14084cd46:
            *puVar45 = uVar11;
          }
          puVar37 = puVar37 + 1;
          lVar28 = lVar28 + 2;
        } while (puVar37 != puVar16 + uVar29);
      }
      else {
LAB_14084ce25:
        pdb_1414a2020();
      }
    }
  }
  uStack_168 = 0;
  uStack_1b8 = SUB82(unaff_R15,0);
  uStack_1b6 = (undefined4)((ulonglong)unaff_R15 >> 0x10);
  uStack_1b2 = (undefined2)((ulonglong)unaff_R15 >> 0x30);
  uStack_1b0 = SUB82(param_1,0);
  uStack_1ae = (undefined2)((ulonglong)param_1 >> 0x10);
  uStack_1ac = (undefined2)((ulonglong)param_1 >> 0x20);
  uStack_1aa = (undefined2)((ulonglong)param_1 >> 0x30);
  uStack_1a8 = &uStack_168;
  uStack_1a0 = unaff_RSI;
  uStack_198 = unaff_RBX;
  uStack_190 = puVar51;
  pdb_14149b480(*(undefined8 *)((longlong)plStack_c8 + 0x20),
                *(undefined8 *)((longlong)plStack_c8 + 0x28),
                *(undefined8 *)((longlong)plStack_c8 + 8),
                *(undefined8 *)((longlong)plStack_c8 + 0x10),puVar48);
  puVar31 = (undefined8 *)pdb_14149ba00(*puStack_1d0,&UNK_14330e758);
  if ((puVar31 != (undefined8 *)0x0) &&
     (lStack_d8 = (**(code **)(puVar31[1] + 0x18))(*puVar31), lStack_d8 != 0)) {
    if (uStack_118 <= uStack_138) {
      uVar32 = pdb_140a92040(*puStack_1c0);
      uVar29 = uStack_118;
      uVar52 = uStack_138;
      if ((*(ulonglong *)((longlong)plStack_c8 + 0x58) <= uStack_138) ||
         (uVar52 = uStack_138 + 1, uVar52 < uStack_118)) {
        pdb_142dc8420(uStack_118,uVar52,*(ulonglong *)((longlong)plStack_c8 + 0x58),&UNK_14300c068);
                    /* WARNING: Does not return */
        pcVar17 = (code *)invalidInstructionException();
        (*pcVar17)();
      }
      lVar28 = uVar52 - uStack_118;
      if (lVar28 != 0) {
        lVar49 = *(longlong *)((longlong)plStack_c8 + 0x50);
        lVar33 = pdb_140e17350(lStack_d8);
        if (uVar52 * 0x10 <= (ulonglong)*(uint *)(lVar33 + 0x10)) {
          lStack_248 = lVar28 * 0x10;
          uStack_250 = 0;
          pdb_140e55470(&uStack_1b8,uVar32,lStack_d8,lVar49 + uVar29 * 0x10,lStack_248,&uStack_250,1
                        ,uVar29 * 0x10);
          uVar29 = CONCAT26(uStack_1b2,CONCAT42(uStack_1b6,uStack_1b8));
          if (uVar29 != 0xb) {
            uStack_1f8 = uStack_170;
            uStack_238 = CONCAT22(uStack_1ae,uStack_1b0);
            uStack_234 = CONCAT22(uStack_1aa,uStack_1ac);
            uStack_208 = uStack_180;
            uStack_204 = uStack_17c;
            uStack_200 = uStack_178;
            uStack_1fc = uStack_174;
            uStack_218 = (undefined4)uStack_190;
            uStack_214 = uStack_190._4_4_;
            uStack_210 = uStack_188;
            uStack_20c = uStack_184;
            uStack_228 = (undefined4)uStack_1a0;
            uStack_224 = uStack_1a0._4_4_;
            uStack_220 = (undefined4)uStack_198;
            uStack_21c = uStack_198._4_4_;
            uStack_230 = (undefined4)uStack_1a8;
            uStack_22c = uStack_1a8._4_4_;
            lVar28 = 0;
            if (7 < uVar29) {
              lVar28 = uVar29 - 8;
            }
            uStack_240 = uVar29;
            if (lVar28 == 0) {
              if (((uVar29 < 6) &&
                  ((0x32UL >> ((ulonglong)CONCAT42(uStack_1b6,uStack_1b8) & 0x3f) & 1) != 0)) &&
                 (CONCAT44(uStack_234,uStack_238) != 0)) {
                pub_1406abac0((byte *)uStack_1a8,CONCAT44(uStack_234,uStack_238),1);
              }
              uVar29 = CONCAT44(uStack_21c,uStack_220);
              if (uVar29 == 0) goto LAB_14084c9b3;
              puVar51 = (ulonglong *)CONCAT44(uStack_214,uStack_218);
            }
            else {
              if (lVar28 == 1) {
                pdb_1404b83f0(&uStack_238);
                goto LAB_14084c9b3;
              }
              uVar29 = CONCAT44(uStack_234,uStack_238);
              puVar51 = uStack_1a8;
              if (uVar29 == 0) goto LAB_14084c9b3;
            }
            pub_1406abac0((byte *)puVar51,uVar29,1);
          }
        }
      }
    }
LAB_14084c9b3:
    puVar34 = (uint *)plStack_e0[0x1f];
    puVar2 = puVar34 + plStack_e0[0x20];
    bVar7 = *(byte *)(plStack_e0 + 0x21);
    puVar50 = (undefined *)(ulonglong)bVar7;
    lVar28 = 0;
    lStack_f8 = 8;
    lVar49 = 0;
    uVar27 = 0;
LAB_14084c9e8:
    if (bVar7 == 0) {
      if (uVar27 == (uint)lVar28) {
        if (puVar34 == puVar2) goto LAB_14084cc1d;
        while( true ) {
          lVar28 = *(longlong *)
                    (*(longlong *)(lStack_108 + 0x100) + 0x58 + (ulonglong)*puVar34 * 0xa0);
          if (lVar28 != 0) break;
          puVar34 = puVar34 + 1;
          if (puVar34 == puVar2) goto LAB_14084cc1d;
        }
        lVar46 = *(longlong *)(lStack_108 + 0x100) + (ulonglong)*puVar34 * 0xa0;
        uVar29 = (ulonglong)*(uint *)(lVar46 + 0x94);
        lVar33 = *(longlong *)(*(longlong *)(lStack_108 + 0x1a0) + 0x18 + uVar29 * 0x48);
        lVar47 = ~*(ulonglong *)
                   (*(longlong *)(*(longlong *)(lStack_108 + 0x1a0) + 0x38 + uVar29 * 0x48) +
                   plStack_e0[0x22] * 8) * 0x30;
        lVar49 = *(longlong *)(lVar33 + 0x10 + lVar47);
        in_R11 = *(longlong **)(lVar33 + 0x28 + lVar47);
        puVar34 = puVar34 + 1;
        lStack_f8 = *(longlong *)(lVar46 + 0x50);
        uVar27 = 0;
        uVar29 = 0;
      }
      else {
        uVar29 = (ulonglong)uVar27;
      }
      uVar18 = ~*(uint *)(lStack_f8 + 8 + uVar29 * 0x10);
    }
    else {
      uVar18 = uVar27;
      if (uVar27 == (uint)lVar28) {
        if (puVar34 == puVar2) goto LAB_14084cc1d;
        while( true ) {
          uVar29 = (ulonglong)*puVar34;
          in_R11 = (longlong *)(uVar29 * 9);
          lVar28 = *(longlong *)(*(longlong *)(lStack_108 + 0x1a0) + 0x10 + uVar29 * 0x48);
          if (lVar28 != 0) break;
          puVar34 = puVar34 + 1;
          if (puVar34 == puVar2) goto LAB_14084cc1d;
        }
        lVar49 = *(longlong *)(lStack_108 + 0x1a0) + uVar29 * 0x48;
        lVar33 = *(longlong *)(lVar49 + 0x18);
        lVar46 = ~*(ulonglong *)(*(longlong *)(lVar49 + 0x38) + plStack_e0[0x22] * 8) * 0x30;
        lVar49 = *(longlong *)(lVar33 + 0x10 + lVar46);
        in_R11 = *(longlong **)(lVar33 + 0x28 + lVar46);
        puVar34 = puVar34 + 1;
        uVar27 = 0;
        uVar18 = uVar27;
      }
    }
    plStack_f0 = (longlong *)(lVar49 + (ulonglong)uVar18 * 0x24);
    puVar4 = (undefined4 *)((longlong)in_R11 + (ulonglong)uVar18 * 4);
    uVar27 = uVar27 + 1;
    uVar29 = *(ulonglong *)((longlong)plStack_c8 + 0x28);
    if (uVar29 != 0) {
      lVar33 = *(longlong *)((longlong)plStack_c8 + 0x20);
      lVar46 = 0;
      lVar47 = lVar46;
      if (uVar29 != 1) {
        do {
          lVar46 = lVar47 + (uVar29 >> 1);
          if (*(uint *)((longlong)plStack_f0 + 0x1c) < *(uint *)(lVar33 + lVar46 * 0x1c)) {
            lVar46 = lVar47;
          }
          uVar29 = uVar29 - (uVar29 >> 1);
          lVar47 = lVar46;
        } while (1 < uVar29);
      }
      puStack_130 = puVar4;
      if (*(uint *)(lVar33 + lVar46 * 0x1c) == *(uint *)((longlong)plStack_f0 + 0x1c)) {
        uVar10 = *(undefined2 *)(lVar33 + lVar46 * 0x1c + 0xc);
        *puVar4 = uStack_e4;
        *(undefined2 *)(plStack_f0 + 4) = uVar10;
      }
    }
    goto LAB_14084c9e8;
  }
  goto LAB_14084cdc2;
LAB_14084cc1d:
  *(ulonglong *)(lStack_d8 + 8) = uStack_168;
  uVar5 = *(undefined4 *)((longlong)plStack_c8 + 0x18);
  uVar13 = *(undefined4 *)((longlong)plStack_c8 + 0x1c);
  uVar14 = *(undefined4 *)((longlong)plStack_c8 + 0x20);
  uVar19 = *(undefined4 *)((longlong)plStack_c8 + 0x24);
  *(int *)((longlong)plStack_c8 + 0x18) = (int)*plStack_c8;
  *(undefined4 *)((longlong)plStack_c8 + 0x1c) = *(undefined4 *)((longlong)plStack_c8 + 4);
  *(undefined4 *)((longlong)plStack_c8 + 0x20) = *(undefined4 *)((longlong)plStack_c8 + 8);
  *(undefined4 *)((longlong)plStack_c8 + 0x24) = *(undefined4 *)((longlong)plStack_c8 + 0xc);
  *(undefined4 *)plStack_c8 = uVar5;
  *(undefined4 *)((longlong)plStack_c8 + 4) = uVar13;
  *(undefined4 *)((longlong)plStack_c8 + 8) = uVar14;
  *(undefined4 *)((longlong)plStack_c8 + 0xc) = uVar19;
  uVar32 = *(undefined8 *)((longlong)plStack_c8 + 0x28);
  *(undefined8 *)((longlong)plStack_c8 + 0x28) = *(undefined8 *)((longlong)plStack_c8 + 0x10);
  *(undefined8 *)((longlong)plStack_c8 + 0x10) = uVar32;
  if (lStack_160 == 0) {
    return;
  }
  plVar36 = plStack_c8;
  plVar30 = (longlong *)pdb_140e97000();
  if ((char)plVar30[0xd] != '\x01') {
    plVar36 = (longlong *)0x0;
    plVar30 = (longlong *)pdb_142dde6e0(plVar30);
    if (plVar30 == (longlong *)0x0) goto LAB_14084cdb5;
  }
  if (*plVar30 == 0) {
    *plVar30 = -1;
    plStack_c8 = plVar30;
    pdb_140e95370(plVar30 + 1,uStack_158);
    *plStack_c8 = *plStack_c8 + 1;
    return;
  }
LAB_14084cce6:
  pdb_142dc8090(&UNK_14330e608);
  param_7 = in_R11;
LAB_14084ccf2:
  if (plVar36 < (undefined4 *)0x15) {
    pdb_1414a0a70();
  }
  else {
LAB_14084cdf5:
    pdb_1414a1ef0();
  }
  goto LAB_14084c6ea;
}

