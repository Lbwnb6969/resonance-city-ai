// VA 0x1408041f0, PDB extent 8026 bytes
// system_wall_constructor::place_pillars::place_pillars
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/place_pillars.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Removing unreachable block (ram,0x0001408050be) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_wall_constructor::place_pillars::place_pillars
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/place_pillars.rs
   Extent: 8026 */

void pdb_1408041f0(float *param_1,undefined8 *param_2,longlong *param_3,longlong *param_4,
                  undefined8 *param_5,longlong *param_6)

{
  byte *pbVar1;
  undefined1 auVar2 [16];
  byte bVar3;
  undefined8 uVar4;
  ulonglong *puVar5;
  code *pcVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  char cVar15;
  uint uVar16;
  undefined4 uVar17;
  int iVar18;
  int iVar19;
  longlong lVar20;
  ulonglong uVar21;
  longlong *plVar22;
  longlong lVar23;
  longlong lVar24;
  ulonglong *puVar25;
  undefined8 *puVar26;
  int *piVar27;
  ulonglong uVar28;
  float *pfVar29;
  longlong lVar30;
  ulonglong *puVar31;
  longlong *plVar32;
  float *pfVar33;
  undefined4 uVar34;
  int iVar35;
  char *pcVar36;
  float *unaff_RDI;
  undefined *puVar37;
  undefined *puVar38;
  ulonglong uVar39;
  ushort uVar40;
  ulonglong uVar41;
  float *pfVar42;
  ulonglong uVar43;
  longlong *plVar44;
  ulonglong *puVar45;
  byte bVar46;
  ulonglong *puVar47;
  longlong *plVar48;
  longlong lVar49;
  ulonglong *puVar50;
  bool bVar51;
  byte bVar52;
  float fVar53;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  float fVar61;
  float fVar62;
  float fVar63;
  undefined4 uVar64;
  undefined4 uVar65;
  float *in_stack_fffffffffffffce8;
  undefined4 uVar66;
  undefined8 in_stack_fffffffffffffcf0;
  undefined8 in_stack_fffffffffffffcf8;
  ulonglong uStack_2c8;
  ulonglong uStack_2c0;
  undefined8 uStack_2b8;
  uint uStack_2b0;
  undefined8 uStack_2a8;
  ulonglong uStack_2a0;
  longlong lStack_298;
  longlong lStack_290;
  longlong lStack_288;
  undefined8 uStack_280;
  code *pcStack_278;
  longlong lStack_270;
  longlong lStack_268;
  float *pfStack_260;
  float *pfStack_258;
  longlong *plStack_250;
  longlong *plStack_248;
  longlong lStack_240;
  undefined8 uStack_238;
  longlong *plStack_230;
  longlong *plStack_228;
  float fStack_21c;
  float fStack_218;
  float fStack_214;
  int iStack_210;
  uint uStack_20c;
  longlong *plStack_208;
  longlong *plStack_200;
  ulonglong *puStack_1f8;
  longlong lStack_1f0;
  ulonglong *puStack_1e8;
  longlong lStack_1e0;
  ulonglong uStack_1d8;
  ulonglong uStack_1d0;
  undefined8 uStack_1c8;
  ulonglong *puStack_1c0;
  code *pcStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  char *pcStack_1a0;
  undefined8 uStack_198;
  code *pcStack_190;
  longlong **pplStack_188;
  code *pcStack_180;
  undefined *puStack_178;
  undefined1 auStack_170 [16];
  longlong lStack_160;
  longlong lStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  int iStack_140;
  ulonglong uStack_138;
  longlong *plStack_130;
  float *pfStack_128;
  float *pfStack_120;
  float *pfStack_118;
  longlong *plStack_110;
  undefined1 uStack_101;
  longlong *plStack_100;
  char cStack_f4;
  undefined1 uStack_f3;
  char cStack_f2;
  undefined1 uStack_f1;
  undefined8 uStack_f0;
  
  uStack_f0 = 0xfffffffffffffffe;
  plStack_110 = param_4;
  plStack_100 = param_2;
  uVar16 = pdb_140e94b40();
  plVar32 = (longlong *)(ulonglong)uVar16;
  cVar15 = '\0';
  if ((char)uVar16 == '\0') goto LAB_1408043f8;
  plVar48 = (longlong *)0x35;
  lVar20 = pdb_140806150(0x35);
  plVar44 = (longlong *)&UNK_1430076a0;
  if (lVar20 == 1) {
    if ((undefined8 *)0x35 < param_2) {
      pdb_142dc8070(&UNK_1430076a0,0x35,0,param_2,&UNK_143007750);
LAB_1408059ab:
      pdb_142dc8070(&UNK_1430076a0,0x35);
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar21 = pdb_140806150(param_2);
    if ((uVar21 & 1) != 0) {
      if (0x35 < (longlong)param_2 + 2U) goto LAB_1408059ab;
      plVar48 = (longlong *)(0x33 - (longlong)param_2);
      plVar44 = (longlong *)((longlong)param_2 + 0x1430076a2);
    }
  }
  puVar37 = &UNK_1430074a7;
  puVar47 = (ulonglong *)&UNK_143007473;
  do {
    bVar52 = puVar37[-1];
    uVar16 = (uint)(char)bVar52;
    if ((char)bVar52 < '\0') {
      bVar46 = puVar37[-2];
      if ((char)bVar46 < -0x40) {
        bVar3 = puVar37[-3];
        if ((char)bVar3 < -0x40) {
          pbVar1 = puVar37 + -4;
          puVar37 = puVar37 + -4;
          uVar16 = bVar3 & 0x3f | (*pbVar1 & 7) << 6;
        }
        else {
          puVar37 = puVar37 + -3;
          uVar16 = bVar3 & 0xf;
        }
        uVar16 = bVar46 & 0x3f | uVar16 << 6;
      }
      else {
        puVar37 = puVar37 + -2;
        uVar16 = bVar46 & 0x1f;
      }
      uVar16 = (uint)(bVar52 & 0x3f) | uVar16 << 6;
      if (uVar16 != 0x5c) goto LAB_140804364;
LAB_140804375:
      puVar47 = (ulonglong *)&UNK_143007473;
      puVar38 = puVar37 + -0x143007472;
      if ((undefined *)0x34 < puVar38) {
        in_stack_fffffffffffffce8 = (float *)&UNK_143007730;
        pdb_142dc8070(&UNK_143007473,0x34,puVar38,0x34,&UNK_143007730);
        goto LAB_140805973;
      }
      unaff_RDI = (float *)(0x34 - (longlong)puVar38);
      puVar47 = (ulonglong *)(puVar37 + 1);
      goto LAB_140804397;
    }
    puVar37 = puVar37 + -1;
    if (uVar16 == 0x5c) goto LAB_140804375;
LAB_140804364:
    if (uVar16 == 0x2f) goto LAB_140804375;
  } while (puVar37 != &UNK_143007473);
  unaff_RDI = (float *)0x34;
LAB_140804397:
  plVar22 = (longlong *)pdb_140e97000();
  if ((char)plVar22[0xd] != '\x01') goto LAB_1408057a0;
  do {
    if (*plVar22 == 0) {
      *plVar22 = -1;
      in_stack_fffffffffffffcf8 = 0;
      in_stack_fffffffffffffcf0 = 0;
      plStack_130 = plVar22;
      uStack_1c8 = pdb_140e94f10(plVar22 + 1,plVar44,plVar48,puVar47,unaff_RDI,1,0);
      *plStack_130 = *plStack_130 + 1;
      in_stack_fffffffffffffce8 = unaff_RDI;
      cVar15 = (char)plVar32;
LAB_1408043f8:
      cStack_f2 = cVar15;
      uStack_f3 = (code)0x0;
      cStack_f4 = '\0';
      uStack_198 = *(longlong ***)param_1;
      uVar21 = *(ulonglong *)(param_1 + 2);
      uVar39 = (ulonglong)*uStack_198;
      uVar41 = 0;
      uVar28 = uVar39 - *(ulonglong *)(uVar21 + 0x18);
      if (uVar39 < *(ulonglong *)(uVar21 + 0x18)) {
        uVar28 = uVar41;
      }
      uVar43 = uVar39 - *(ulonglong *)(uVar21 + 0x38);
      if (uVar39 < *(ulonglong *)(uVar21 + 0x38)) {
        uVar43 = uVar41;
      }
      pcStack_190 = (code *)(uVar28 * 0x10 + *(longlong *)(uVar21 + 8));
      uVar39 = *(ulonglong *)(uVar21 + 0x10) - uVar28;
      if (*(ulonglong *)(uVar21 + 0x10) < uVar28) {
        pcStack_190 = (code *)0x8;
        uVar39 = uVar41;
      }
      pcStack_180 = (code *)(uVar43 * 0x10 + *(longlong *)(uVar21 + 0x28));
      uVar28 = *(ulonglong *)(uVar21 + 0x30) - uVar43;
      if (*(ulonglong *)(uVar21 + 0x30) < uVar43) {
        pcStack_180 = (code *)0x8;
        uVar28 = uVar41;
      }
      *uStack_198 = (longlong *)(*(longlong *)(uVar21 + 0x40) - (uVar28 + uVar39));
      pplStack_188 = (longlong **)(uVar39 * 0x10 + (longlong)pcStack_190);
      puStack_178 = (undefined *)(uVar28 * 0x10 + (longlong)pcStack_180);
      auStack_170._0_8_ = uVar28 + uVar39;
      pdb_140fc81a0(&pfStack_128,&uStack_198);
      puVar47 = (ulonglong *)*param_3;
      lVar20 = param_3[1];
      uVar21 = *puVar47;
      uVar28 = 0;
      uVar39 = uVar21 - *(ulonglong *)(lVar20 + 0x18);
      if (uVar21 < *(ulonglong *)(lVar20 + 0x18)) {
        uVar39 = uVar28;
      }
      uVar41 = uVar21 - *(ulonglong *)(lVar20 + 0x38);
      if (uVar21 < *(ulonglong *)(lVar20 + 0x38)) {
        uVar41 = uVar28;
      }
      lVar23 = uVar39 * 0x40 + *(longlong *)(lVar20 + 8);
      uVar21 = *(ulonglong *)(lVar20 + 0x10) - uVar39;
      if (*(ulonglong *)(lVar20 + 0x10) < uVar39) {
        lVar23 = 8;
        uVar21 = uVar28;
      }
      lVar30 = uVar41 * 0x40 + *(longlong *)(lVar20 + 0x28);
      uVar39 = *(ulonglong *)(lVar20 + 0x30) - uVar41;
      if (*(ulonglong *)(lVar20 + 0x30) < uVar41) {
        lVar30 = 8;
        uVar39 = uVar28;
      }
      *puVar47 = (*(longlong *)(lVar20 + 0x40) - uVar39) - uVar21;
      lVar49 = uVar21 * 0x40 + lVar23;
      lVar20 = uVar39 * 0x40 + lVar30;
      do {
        pfVar29 = pfStack_118;
        if ((lVar23 == 0) || (lVar23 == lVar49)) {
          if ((lVar30 == 0) || (lVar30 == lVar20)) goto LAB_140804601;
          lVar23 = 0;
          lVar24 = lVar30;
          lVar30 = lVar30 + 0x40;
        }
        else {
          lVar24 = lVar23;
          lVar23 = lVar23 + 0x40;
        }
        *puVar47 = *puVar47 + 1;
        uVar4 = *(undefined8 *)(lVar24 + 8);
        if (pfStack_118 == pfStack_128) {
          if (lVar23 == 0) {
            if (lVar30 == 0) {
              uVar21 = 0;
            }
            else {
              uVar21 = (ulonglong)(lVar20 - lVar30) >> 6;
            }
          }
          else {
            uVar21 = (ulonglong)(lVar49 - lVar23) >> 6;
            if (lVar30 != 0) {
              uVar21 = uVar21 + ((ulonglong)(lVar20 - lVar30) >> 6);
            }
          }
          in_stack_fffffffffffffce8 = (float *)0x0;
          pdb_142d7f1b0(&pfStack_128,pfStack_118,uVar21 + 1,8,8);
        }
        *(undefined8 *)(pfStack_120 + (longlong)pfVar29 * 2) = uVar4;
        pfStack_118 = (float *)((longlong)pfVar29 + 1);
      } while( true );
    }
LAB_140805794:
    plVar22 = (longlong *)pdb_142dc8090(&UNK_1433079b0);
LAB_1408057a0:
    plVar22 = (longlong *)pdb_142dd9610(plVar22,0);
    if (plVar22 == (longlong *)0x0) {
LAB_1408057b3:
      pdb_142dc7890(&UNK_143307940);
LAB_1408057bf:
      uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(param_3);
    }
  } while( true );
LAB_140804601:
  puVar5 = (ulonglong *)*plStack_100;
  lVar20 = plStack_100[1];
  uVar21 = *puVar5;
  uVar28 = 0;
  uVar39 = uVar21 - *(ulonglong *)(lVar20 + 0x18);
  if (uVar21 < *(ulonglong *)(lVar20 + 0x18)) {
    uVar39 = uVar28;
  }
  uVar41 = uVar21 - *(ulonglong *)(lVar20 + 0x38);
  if (uVar21 < *(ulonglong *)(lVar20 + 0x38)) {
    uVar41 = uVar28;
  }
  puVar25 = (ulonglong *)(uVar39 * 0x10 + *(longlong *)(lVar20 + 8));
  uVar21 = *(ulonglong *)(lVar20 + 0x10) - uVar39;
  if (*(ulonglong *)(lVar20 + 0x10) < uVar39) {
    puVar25 = (ulonglong *)0x8;
    uVar21 = uVar28;
  }
  puVar31 = (ulonglong *)(uVar41 * 0x10 + *(longlong *)(lVar20 + 0x28));
  uVar39 = *(ulonglong *)(lVar20 + 0x30) - uVar41;
  if (*(ulonglong *)(lVar20 + 0x30) < uVar41) {
    puVar31 = (ulonglong *)0x8;
    uVar39 = uVar28;
  }
  *puVar5 = (*(longlong *)(lVar20 + 0x40) - uVar39) - uVar21;
  puVar50 = puVar25 + uVar21 * 2;
  puVar45 = puVar31 + uVar39 * 2;
  do {
    pfVar29 = pfStack_118;
    if ((puVar25 == (ulonglong *)0x0) || (puVar25 == puVar50)) {
      if ((puVar31 == (ulonglong *)0x0) || (puVar31 == puVar45)) break;
      puVar25 = (ulonglong *)0x0;
      puVar47 = puVar31;
      puVar31 = puVar31 + 2;
    }
    else {
      puVar47 = puVar25;
      puVar25 = puVar25 + 2;
    }
    *puVar5 = *puVar5 + 1;
    uVar21 = puVar47[1];
    if (pfStack_118 == pfStack_128) {
      if (puVar25 == (ulonglong *)0x0) {
        if (puVar31 == (ulonglong *)0x0) {
          uVar39 = 0;
        }
        else {
          uVar39 = (ulonglong)((longlong)puVar45 - (longlong)puVar31) >> 4;
        }
      }
      else {
        uVar39 = (ulonglong)((longlong)puVar50 - (longlong)puVar25) >> 4;
        if (puVar31 != (ulonglong *)0x0) {
          uVar39 = uVar39 + ((ulonglong)((longlong)puVar45 - (longlong)puVar31) >> 4);
        }
      }
      in_stack_fffffffffffffce8 = (float *)0x0;
      pdb_142d7f1b0(&pfStack_128,pfStack_118,uVar39 + 1,8,8);
    }
    *(ulonglong *)(pfStack_120 + (longlong)pfVar29 * 2) = uVar21;
    pfStack_118 = (float *)((longlong)pfVar29 + 1);
    puVar47 = puVar25;
  } while( true );
  unaff_RDI = pfStack_120;
  if ((float *)0x1 < pfStack_118) {
    param_1 = pfStack_118;
    if (pfStack_118 < (float *)0x15) {
      pfVar33 = pfStack_120 + 2;
      lVar20 = 8;
      do {
        uVar39 = *(ulonglong *)(pfVar33 + -2);
        uVar21 = *(ulonglong *)pfVar33;
        lVar23 = lVar20;
        if (uVar21 < uVar39) {
          do {
            *(ulonglong *)((longlong)pfStack_120 + lVar23) = uVar39;
            pfVar42 = pfStack_120;
            if (lVar23 == 8) goto LAB_14080571e;
            uVar39 = *(ulonglong *)((longlong)pfStack_120 + lVar23 + -0x10);
            lVar23 = lVar23 + -8;
          } while (uVar21 < uVar39);
          pfVar42 = (float *)(lVar23 + (longlong)pfStack_120);
LAB_14080571e:
          *(ulonglong *)pfVar42 = uVar21;
        }
        pfVar33 = pfVar33 + 2;
        lVar20 = lVar20 + 8;
      } while (pfVar33 != pfStack_120 + (longlong)pfStack_118 * 2);
      if (pfStack_118 < (float *)0x2) goto LAB_140804769;
    }
    else {
LAB_140805973:
      pdb_140a91360(unaff_RDI,param_1,&uStack_101);
    }
    lVar20 = 0;
    do {
      if (*(longlong *)(unaff_RDI + (lVar20 + 1) * 2) == *(longlong *)(unaff_RDI + lVar20 * 2)) {
        pfVar33 = (float *)(lVar20 + 2);
        pfStack_118 = (float *)(lVar20 + 1);
        pfVar29 = pfStack_118;
        if (pfVar33 < param_1) {
          if (((int)param_1 - (int)lVar20 & 1U) != 0) {
            if (*(longlong *)(unaff_RDI + (lVar20 + 2) * 2) != *(longlong *)(unaff_RDI + lVar20 * 2)
               ) {
              *(longlong *)(unaff_RDI + (lVar20 + 1) * 2) =
                   *(longlong *)(unaff_RDI + (lVar20 + 2) * 2);
              pfStack_118 = (float *)(lVar20 + 2);
            }
            pfVar33 = (float *)(lVar20 + 3);
          }
          pfVar29 = pfStack_118;
          if ((longlong)param_1 + -3 != lVar20) goto LAB_1408058e5;
        }
        break;
      }
      lVar20 = lVar20 + 1;
      pfVar29 = param_1;
    } while ((longlong)param_1 + -1 != lVar20);
  }
  goto LAB_140804769;
LAB_1408058e5:
  do {
    if (*(longlong *)(unaff_RDI + (longlong)pfVar33 * 2) ==
        *(longlong *)(unaff_RDI + ((longlong)pfVar29 + -1) * 2)) {
      lVar20 = *(longlong *)(unaff_RDI + ((longlong)pfVar33 + 1) * 2);
      pfStack_118 = pfVar29;
      if (lVar20 != *(longlong *)(unaff_RDI + ((longlong)pfVar29 + -1) * 2)) {
LAB_140805911:
        *(longlong *)(unaff_RDI + (longlong)pfVar29 * 2) = lVar20;
        pfStack_118 = (float *)((longlong)pfVar29 + 1);
      }
    }
    else {
      *(longlong *)(unaff_RDI + (longlong)pfVar29 * 2) =
           *(longlong *)(unaff_RDI + (longlong)pfVar33 * 2);
      pfStack_118 = (float *)((longlong)pfVar29 + 1);
      lVar20 = *(longlong *)(unaff_RDI + ((longlong)pfVar33 + 1) * 2);
      lVar23 = (longlong)pfVar29 * 2;
      pfVar29 = pfStack_118;
      if (lVar20 != *(longlong *)(unaff_RDI + lVar23)) goto LAB_140805911;
    }
    pfVar33 = (float *)((longlong)pfVar33 + 2);
    pfVar29 = pfStack_118;
  } while (param_1 != pfVar33);
LAB_140804769:
  fVar14 = _DAT_14300739c;
  fVar13 = _DAT_142f61050;
  uVar12 = _DAT_142e3c608;
  uVar11 = _DAT_142e3787c;
  uVar10 = _DAT_142e3783c;
  fVar9 = _DAT_142e36f28;
  param_1 = unaff_RDI + (longlong)pfVar29 * 2;
  plVar32 = (longlong *)*plStack_110;
  plVar48 = (longlong *)*param_6;
  uStack_238 = *param_5;
  plVar44 = plVar48 + 4;
  plVar22 = plVar32 + 4;
  param_3 = plVar32 + 4;
  if (unaff_RDI != param_1) {
LAB_1408047d8:
    uStack_1d0 = *(ulonglong *)unaff_RDI;
    uStack_138 = uStack_1d0;
    if (plVar32[3] != 0) {
      uVar21 = pdb_1400af0a0(plVar22,&uStack_138);
      lVar20 = *plVar32;
      bVar52 = (byte)(uVar21 >> 0x39);
      auVar54 = ZEXT216(CONCAT11(bVar52,bVar52));
      auVar54 = pshuflw(auVar54,auVar54,0);
      lVar23 = 0;
      while( true ) {
        uVar21 = uVar21 & plVar32[1];
        auVar2 = *(undefined1 (*) [16])(lVar20 + uVar21);
        auVar58[0] = -(auVar2[0] == auVar54[0]);
        auVar58[1] = -(auVar2[1] == auVar54[1]);
        auVar58[2] = -(auVar2[2] == auVar54[2]);
        auVar58[3] = -(auVar2[3] == auVar54[3]);
        auVar58[4] = -(auVar2[4] == auVar54[4]);
        auVar58[5] = -(auVar2[5] == auVar54[5]);
        auVar58[6] = -(auVar2[6] == auVar54[6]);
        auVar58[7] = -(auVar2[7] == auVar54[7]);
        auVar58[8] = -(auVar2[8] == auVar54[0]);
        auVar58[9] = -(auVar2[9] == auVar54[1]);
        auVar58[10] = -(auVar2[10] == auVar54[2]);
        auVar58[0xb] = -(auVar2[0xb] == auVar54[3]);
        auVar58[0xc] = -(auVar2[0xc] == auVar54[4]);
        auVar58[0xd] = -(auVar2[0xd] == auVar54[5]);
        auVar58[0xe] = -(auVar2[0xe] == auVar54[6]);
        auVar58[0xf] = -(auVar2[0xf] == auVar54[7]);
        uVar40 = (ushort)(SUB161(auVar58 >> 7,0) & 1) | (ushort)(SUB161(auVar58 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar58 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar58 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar58 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar58 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar58 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar58 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar58 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar58 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar58 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar58 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar58 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar58 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar58 >> 0x77,0) & 1) << 0xe | (ushort)(auVar58[0xf] >> 7) << 0xf
        ;
        uVar16 = (uint)uVar40;
        while (uVar40 != 0) {
          uVar7 = 0;
          for (uVar8 = uVar16; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
            uVar7 = uVar7 + 1;
          }
          lVar30 = (uVar7 + uVar21 & plVar32[1]) * -0x2b0;
          if (uStack_1d0 == *(ulonglong *)(lVar20 + -0x2b0 + lVar30)) {
            if (plVar48[3] == 0) goto LAB_140805602;
            plStack_100 = (longlong *)(lVar20 + lVar30);
            pcStack_278 = (code *)(plStack_100 + -0x55);
            iStack_210 = *(int *)(plStack_100 + -10);
            uStack_280 = plStack_100[-0x42];
            uVar21 = pdb_1400af0a0(plVar44,&uStack_138);
            bVar52 = (byte)(uVar21 >> 0x39);
            auVar54 = ZEXT216(CONCAT11(bVar52,bVar52));
            auVar54 = pshuflw(auVar54,auVar54,0);
            lVar20 = 0;
            goto LAB_140804918;
          }
          uVar40 = (ushort)(uVar16 - 1) & (ushort)uVar16;
          uVar16 = CONCAT22((short)(uVar16 - 1 >> 0x10),uVar40);
        }
        auVar55[0] = -(auVar2[0] == -1);
        auVar55[1] = -(auVar2[1] == -1);
        auVar55[2] = -(auVar2[2] == -1);
        auVar55[3] = -(auVar2[3] == -1);
        auVar55[4] = -(auVar2[4] == -1);
        auVar55[5] = -(auVar2[5] == -1);
        auVar55[6] = -(auVar2[6] == -1);
        auVar55[7] = -(auVar2[7] == -1);
        auVar55[8] = -(auVar2[8] == -1);
        auVar55[9] = -(auVar2[9] == -1);
        auVar55[10] = -(auVar2[10] == -1);
        auVar55[0xb] = -(auVar2[0xb] == -1);
        auVar55[0xc] = -(auVar2[0xc] == -1);
        auVar55[0xd] = -(auVar2[0xd] == -1);
        auVar55[0xe] = -(auVar2[0xe] == -1);
        auVar55[0xf] = -(auVar2[0xf] == -1);
        if ((((((((((((((((SUB161(auVar55 >> 7,0) & 1) != 0 || (SUB161(auVar55 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar55 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar55 >> 0x1f,0) & 1) != 0) || (SUB161(auVar55 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar55 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar55 >> 0x37,0) & 1) != 0) || (SUB161(auVar55 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar55 >> 0x47,0) & 1) != 0) || (SUB161(auVar55 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar55 >> 0x57,0) & 1) != 0) || (SUB161(auVar55 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar55 >> 0x67,0) & 1) != 0) || (SUB161(auVar55 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar55 >> 0x77,0) & 1) != 0) || auVar55[0xf] < '\0') break;
        uVar21 = uVar21 + lVar23 + 0x10;
        lVar23 = lVar23 + 0x10;
      }
    }
    pdb_142dc8110(&UNK_143007428,0x16,&UNK_143007550);
                    /* WARNING: Does not return */
    pcVar6 = (code *)invalidInstructionException();
    (*pcVar6)();
  }
LAB_140805435:
  if ((uStack_f3 != (code)0x0) && (*_DAT_143ca8e90 != 0)) {
    uStack_198 = (longlong **)&UNK_1430074f0;
    pcStack_190 = (code *)0x26;
    pplStack_188 = (longlong **)&UNK_1430074f0;
    pcStack_180 = (code *)0x26;
    puStack_178 = &UNK_1430074d8;
    pdb_1400c9be0(&UNK_1430074a7,0x61,1,&uStack_198);
  }
  if ((cStack_f4 != '\0') && (*_DAT_143ca8e90 != 0)) {
    uStack_198 = (longlong **)&UNK_1430074f0;
    pcStack_190 = (code *)0x26;
    pplStack_188 = (longlong **)&UNK_1430074f0;
    pcStack_180 = (code *)0x26;
    puStack_178 = &UNK_143007538;
    pdb_1400c9be0(&UNK_143007516,0x45,1,&uStack_198);
  }
  if (pfStack_128 != (float *)0x0) {
    pub_1406abac0((byte *)pfStack_120,(longlong)pfStack_128 << 3,8);
  }
  if (cStack_f2 == '\0') {
    return;
  }
  plVar22 = (longlong *)pdb_140e97000();
  if (((char)plVar22[0xd] != '\x01') &&
     (plVar22 = (longlong *)pdb_142dd9610(plVar22,0), plVar22 == (longlong *)0x0))
  goto LAB_1408057b3;
  if (*plVar22 == 0) {
    *plVar22 = -1;
    plStack_100 = plVar22;
    pdb_140e95370(plVar22 + 1);
    *plStack_100 = *plStack_100 + 1;
    return;
  }
  goto LAB_140805794;
LAB_140804918:
  uVar21 = uVar21 & plVar48[1];
  auVar2 = *(undefined1 (*) [16])(*plVar48 + uVar21);
  auVar59[0] = -(auVar2[0] == auVar54[0]);
  auVar59[1] = -(auVar2[1] == auVar54[1]);
  auVar59[2] = -(auVar2[2] == auVar54[2]);
  auVar59[3] = -(auVar2[3] == auVar54[3]);
  auVar59[4] = -(auVar2[4] == auVar54[4]);
  auVar59[5] = -(auVar2[5] == auVar54[5]);
  auVar59[6] = -(auVar2[6] == auVar54[6]);
  auVar59[7] = -(auVar2[7] == auVar54[7]);
  auVar59[8] = -(auVar2[8] == auVar54[0]);
  auVar59[9] = -(auVar2[9] == auVar54[1]);
  auVar59[10] = -(auVar2[10] == auVar54[2]);
  auVar59[0xb] = -(auVar2[0xb] == auVar54[3]);
  auVar59[0xc] = -(auVar2[0xc] == auVar54[4]);
  auVar59[0xd] = -(auVar2[0xd] == auVar54[5]);
  auVar59[0xe] = -(auVar2[0xe] == auVar54[6]);
  auVar59[0xf] = -(auVar2[0xf] == auVar54[7]);
  uVar40 = (ushort)(SUB161(auVar59 >> 7,0) & 1) | (ushort)(SUB161(auVar59 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar59 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar59 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar59 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar59 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar59 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar59 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar59 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar59 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar59 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar59 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar59 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar59 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar59 >> 0x77,0) & 1) << 0xe | (ushort)(auVar59[0xf] >> 7) << 0xf;
  uVar16 = (uint)uVar40;
  while (uVar40 != 0) {
    uVar7 = 0;
    for (uVar8 = uVar16; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
      uVar7 = uVar7 + 1;
    }
    lVar23 = *plVar48 + (uVar7 + uVar21 & plVar48[1]) * -0x20;
    if (uStack_1d0 == *(ulonglong *)(lVar23 + -0x20)) {
      uStack_2a8 = 0;
      puStack_1f8 = (ulonglong *)0x0;
      lStack_1f0 = 4;
      puStack_1e8 = (ulonglong *)0x0;
      lStack_268 = *(longlong *)(lVar23 + -8) * 0x88 + *(longlong *)(lVar23 + -0x10);
      lStack_240 = (longlong)plStack_100 + -9;
      uStack_1d8 = 0;
      lStack_1e0 = 0;
      lVar20 = *(longlong *)(lVar23 + -0x10);
      pfStack_260 = unaff_RDI + 2;
      pfStack_258 = param_1;
      plStack_250 = plVar48;
      plStack_248 = plVar44;
      plStack_230 = plVar32;
      plStack_228 = plVar22;
      goto LAB_140804a41;
    }
    uVar40 = (ushort)(uVar16 - 1) & (ushort)uVar16;
    uVar16 = CONCAT22((short)(uVar16 - 1 >> 0x10),uVar40);
  }
  auVar56[0] = -(auVar2[0] == -1);
  auVar56[1] = -(auVar2[1] == -1);
  auVar56[2] = -(auVar2[2] == -1);
  auVar56[3] = -(auVar2[3] == -1);
  auVar56[4] = -(auVar2[4] == -1);
  auVar56[5] = -(auVar2[5] == -1);
  auVar56[6] = -(auVar2[6] == -1);
  auVar56[7] = -(auVar2[7] == -1);
  auVar56[8] = -(auVar2[8] == -1);
  auVar56[9] = -(auVar2[9] == -1);
  auVar56[10] = -(auVar2[10] == -1);
  auVar56[0xb] = -(auVar2[0xb] == -1);
  auVar56[0xc] = -(auVar2[0xc] == -1);
  auVar56[0xd] = -(auVar2[0xd] == -1);
  auVar56[0xe] = -(auVar2[0xe] == -1);
  auVar56[0xf] = -(auVar2[0xf] == -1);
  if ((((((((((((((((SUB161(auVar56 >> 7,0) & 1) != 0 || (SUB161(auVar56 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar56 >> 0x17,0) & 1) != 0) || (SUB161(auVar56 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar56 >> 0x27,0) & 1) != 0) || (SUB161(auVar56 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar56 >> 0x37,0) & 1) != 0) || (SUB161(auVar56 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar56 >> 0x47,0) & 1) != 0) || (SUB161(auVar56 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar56 >> 0x57,0) & 1) != 0) || (SUB161(auVar56 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar56 >> 0x67,0) & 1) != 0) || (SUB161(auVar56 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar56 >> 0x77,0) & 1) != 0) || auVar56[0xf] < '\0') {
LAB_140805602:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143007568);
  }
  uVar21 = uVar21 + lVar20 + 0x10;
  lVar20 = lVar20 + 0x10;
  goto LAB_140804918;
LAB_140804a41:
  uVar21 = uStack_1d0;
  plVar32 = plStack_230;
  if (lVar20 == lStack_268) {
    if (plStack_230[3] != 0) {
      uVar28 = pdb_1400af0a0(plStack_228,&uStack_138);
      lVar20 = *plVar32;
      uVar39 = plVar32[1];
      bVar52 = (byte)(uVar28 >> 0x39);
      auVar54 = ZEXT216(CONCAT11(bVar52,bVar52));
      auVar54 = pshuflw(auVar54,auVar54,0);
      lVar23 = 0;
      while( true ) {
        uVar28 = uVar28 & uVar39;
        auVar2 = *(undefined1 (*) [16])(lVar20 + uVar28);
        auVar60[0] = -(auVar2[0] == auVar54[0]);
        auVar60[1] = -(auVar2[1] == auVar54[1]);
        auVar60[2] = -(auVar2[2] == auVar54[2]);
        auVar60[3] = -(auVar2[3] == auVar54[3]);
        auVar60[4] = -(auVar2[4] == auVar54[4]);
        auVar60[5] = -(auVar2[5] == auVar54[5]);
        auVar60[6] = -(auVar2[6] == auVar54[6]);
        auVar60[7] = -(auVar2[7] == auVar54[7]);
        auVar60[8] = -(auVar2[8] == auVar54[0]);
        auVar60[9] = -(auVar2[9] == auVar54[1]);
        auVar60[10] = -(auVar2[10] == auVar54[2]);
        auVar60[0xb] = -(auVar2[0xb] == auVar54[3]);
        auVar60[0xc] = -(auVar2[0xc] == auVar54[4]);
        auVar60[0xd] = -(auVar2[0xd] == auVar54[5]);
        auVar60[0xe] = -(auVar2[0xe] == auVar54[6]);
        auVar60[0xf] = -(auVar2[0xf] == auVar54[7]);
        uVar40 = (ushort)(SUB161(auVar60 >> 7,0) & 1) | (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar60 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar60 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar60 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar60 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar60 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar60 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar60 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar60 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar60 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar60 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar60 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar60 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar60 >> 0x77,0) & 1) << 0xe | (ushort)(auVar60[0xf] >> 7) << 0xf
        ;
        uVar16 = (uint)uVar40;
        while (uVar40 != 0) {
          uVar7 = 0;
          for (uVar8 = uVar16; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
            uVar7 = uVar7 + 1;
          }
          lVar30 = (uVar7 + uVar28 & uVar39) * -0x2b0;
          if (uVar21 == *(ulonglong *)(lVar20 + -0x2b0 + lVar30)) {
            lVar20 = lVar20 + lVar30;
            lVar23 = lVar20 + -0x120;
            if (*(char *)(lVar20 + -8) == '\x01') {
              uStack_f1 = 1;
              pdb_140b2e910(lVar23,lStack_1e0);
            }
            else {
              uStack_f1 = 1;
              pdb_140b2e8f0(lVar23,lStack_1e0);
            }
            pplStack_188 = (longlong **)puStack_1e8;
            uStack_198 = (longlong **)puStack_1f8;
            pcStack_190 = (code *)lStack_1f0;
            uStack_f1 = 0;
            pdb_140b2e7f0(lVar23,&uStack_198);
            plVar32 = plStack_230;
            param_1 = pfStack_258;
            unaff_RDI = pfStack_260;
            plVar44 = plStack_248;
            plVar22 = plStack_228;
            param_3 = plStack_228;
            plVar48 = plStack_250;
            if (pfStack_260 != pfStack_258) goto LAB_1408047d8;
            goto LAB_140805435;
          }
          uVar40 = (ushort)(uVar16 - 1) & (ushort)uVar16;
          uVar16 = CONCAT22((short)(uVar16 - 1 >> 0x10),uVar40);
        }
        auVar57[0] = -(auVar2[0] == -1);
        auVar57[1] = -(auVar2[1] == -1);
        auVar57[2] = -(auVar2[2] == -1);
        auVar57[3] = -(auVar2[3] == -1);
        auVar57[4] = -(auVar2[4] == -1);
        auVar57[5] = -(auVar2[5] == -1);
        auVar57[6] = -(auVar2[6] == -1);
        auVar57[7] = -(auVar2[7] == -1);
        auVar57[8] = -(auVar2[8] == -1);
        auVar57[9] = -(auVar2[9] == -1);
        auVar57[10] = -(auVar2[10] == -1);
        auVar57[0xb] = -(auVar2[0xb] == -1);
        auVar57[0xc] = -(auVar2[0xc] == -1);
        auVar57[0xd] = -(auVar2[0xd] == -1);
        auVar57[0xe] = -(auVar2[0xe] == -1);
        auVar57[0xf] = -(auVar2[0xf] == -1);
        if ((((((((((((((((SUB161(auVar57 >> 7,0) & 1) != 0 || (SUB161(auVar57 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar57 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar57 >> 0x1f,0) & 1) != 0) || (SUB161(auVar57 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar57 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar57 >> 0x37,0) & 1) != 0) || (SUB161(auVar57 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar57 >> 0x47,0) & 1) != 0) || (SUB161(auVar57 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar57 >> 0x57,0) & 1) != 0) || (SUB161(auVar57 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar57 >> 0x67,0) & 1) != 0) || (SUB161(auVar57 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar57 >> 0x77,0) & 1) != 0) || auVar57[0xf] < '\0') break;
        uVar28 = uVar28 + lVar23 + 0x10;
        lVar23 = lVar23 + 0x10;
      }
    }
    uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143007580);
  }
  lStack_270 = lVar20 + 0x88;
  uStack_20c = (int)uStack_1d8 + 1;
  lStack_288 = *(longlong *)(lVar20 + 0x38);
  lStack_298 = *(longlong *)(lVar20 + 0x68);
  uStack_2a0 = *(ulonglong *)(lVar20 + 0x40);
  if (*(ulonglong *)(lVar20 + 0x70) < *(ulonglong *)(lVar20 + 0x40)) {
    uStack_2a0 = *(ulonglong *)(lVar20 + 0x70);
  }
  if (*(ulonglong *)(lVar20 + 0x58) < uStack_2a0) {
    uStack_2a0 = *(ulonglong *)(lVar20 + 0x58);
  }
  lStack_290 = *(longlong *)(lVar20 + 0x50);
  plStack_110 = (longlong *)0x0;
  uVar21 = 0;
  while( true ) {
    uVar66 = (undefined4)((ulonglong)in_stack_fffffffffffffce8 >> 0x20);
    if (uStack_2a0 <= uVar21) break;
    param_3 = *(longlong **)(lStack_298 + uVar21 * 8);
    if (*(longlong **)(lVar20 + 0x10) <= param_3) goto LAB_1408057bf;
    plVar32 = *(longlong **)(lVar20 + 0x28);
    if (plVar32 <= param_3) {
      uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(param_3,plVar32,&UNK_1430075b0);
    }
    uVar64 = *(undefined4 *)(lStack_290 + uVar21 * 4);
    bVar52 = *(byte *)(*(longlong *)(lVar20 + 8) + (longlong)param_3);
    iVar35 = *(int *)(*(longlong *)(lVar20 + 0x20) + (longlong)param_3 * 8);
    fVar61 = *(float *)(*(longlong *)(lVar20 + 0x20) + 4 + (longlong)param_3 * 8);
    uStack_2c8 = plStack_100[-0x43];
    uStack_2c0 = plStack_100[-0x42];
    uStack_2b0 = *(uint *)(lVar20 + 0x80);
    uStack_2b8 = *(undefined8 *)(lVar20 + 0x78);
    if (iStack_210 == 2) {
      uStack_f1 = 1;
      uVar17 = pdb_1413f84c0((undefined8 *)(lVar20 + 0x78));
      uVar34 = SUB84(plVar32,0);
      uStack_198 = (longlong **)CONCAT44(uVar34,uVar17);
      uStack_f1 = 1;
      iVar18 = pdb_14007e750(&uStack_198);
      uStack_f1 = 1;
      uVar17 = pdb_1413f84a0(lVar20 + 0x78);
      uStack_198 = (longlong **)CONCAT44(uVar34,uVar17);
      uStack_f1 = 1;
      iVar19 = pdb_14007e750(&uStack_198);
      bVar46 = bVar52 >> 1 & iVar18 == 0;
      if (iVar19 == (int)uStack_280) {
        if (((bVar52 & 4) == 0 & (bVar46 ^ 1)) == 0) {
LAB_140804bf9:
          uStack_f1 = 1;
          plStack_208 = (longlong *)pdb_1413f84b0(&uStack_2b8);
          plStack_200 = param_3;
          if (plStack_208 <= param_3) {
            uStack_198 = &plStack_200;
            pcStack_190 = pdb_140f72a40;
            pplStack_188 = &plStack_208;
            pcStack_180 = pdb_140f72a40;
            uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
            pdb_142dc83d0(&UNK_1433069b0,&uStack_198,&UNK_1433069d0);
          }
          plVar32 = param_3;
          fVar61 = 0.0;
          if ((plStack_208 <= (longlong *)((longlong)param_3 + 1)) &&
             (plVar32 = (longlong *)((longlong)param_3 + -1), fVar61 = fVar9,
             param_3 == (longlong *)0x0)) {
            uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
            pdb_142dc8150(&UNK_143306a00);
          }
          puStack_1c0 = &uStack_2c8;
          pcStack_1b8 = pdb_140ade410;
          uStack_1b0 = (longlong **)CONCAT44(fVar61,(int)plVar32);
          uStack_1a8 = (undefined8 *)CONCAT44(fVar61,(int)plVar32);
          if (bVar46 == 0) {
            uStack_f1 = 1;
            pdb_14141d9b0(&puStack_1c0,_DAT_143007398);
            fVar61 = uStack_1b0._4_4_;
            iVar35 = (int)uStack_1b0;
          }
          else {
            uStack_f1 = 1;
            pdb_14141e280(&puStack_1c0,_DAT_143007398);
            fVar61 = uStack_1a8._4_4_;
            iVar35 = (int)uStack_1a8;
          }
        }
      }
      else if (bVar46 != 0) goto LAB_140804bf9;
    }
    puVar5 = puStack_1e8;
    if (uStack_2b0 == 0) {
      uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8510(&UNK_1430075c8);
    }
    iVar35 = iVar35 + (int)uStack_2b8;
    if (iVar35 == -0x80000000 && uStack_2b0 == 0xffffffff) {
      uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8550(&UNK_1430075c8);
    }
    uVar16 = -uStack_2b0;
    if ((int)-uStack_2b0 < 0) {
      uVar16 = uStack_2b0;
    }
    uVar39 = (ulonglong)
             (int)((iVar35 % (int)uStack_2b0 >> 0x1f & uVar16) + iVar35 % (int)uStack_2b0);
    if (uStack_2c0 <= uVar39) {
      uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(uVar39,uStack_2c0,&UNK_1430075c8);
    }
    fVar62 = *(float *)(uStack_2c8 + uVar39 * 0xc);
    fVar53 = *(float *)(uStack_2c8 + 4 + uVar39 * 0xc);
    fVar63 = *(float *)(uStack_2c8 + 8 + uVar39 * 0xc);
    if ((uStack_2b0 == 0xffffffff) && (SBORROW4(0,iVar35 + 1))) {
      uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8550(&UNK_1430075c8);
    }
    iVar35 = (iVar35 + 1) % (int)uStack_2b0;
    uVar39 = (ulonglong)(int)((iVar35 >> 0x1f & uVar16) + iVar35);
    if (uStack_2c0 <= uVar39) {
      uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(uVar39,uStack_2c0,&UNK_1430075c8);
    }
    fStack_218 = (*(float *)(uStack_2c8 + 4 + uVar39 * 0xc) - fVar53) * fVar61 + fVar53;
    fVar62 = fVar61 * (*(float *)(uStack_2c8 + uVar39 * 0xc) - fVar62) + fVar62;
    fVar63 = fVar61 * (*(float *)(uStack_2c8 + 8 + uVar39 * 0xc) - fVar63) + fVar63;
    fStack_21c = fVar62;
    fStack_214 = fVar63;
    if (puStack_1e8 == puStack_1f8) {
      uStack_f1 = 1;
      pdb_142db07d0(&puStack_1f8);
    }
    uVar17 = (undefined4)((ulonglong)in_stack_fffffffffffffcf0 >> 0x20);
    uVar34 = (undefined4)((ulonglong)in_stack_fffffffffffffcf8 >> 0x20);
    puVar47 = (ulonglong *)(uVar21 * 0x1c + lStack_288);
    plStack_130 = (longlong *)CONCAT44(plStack_130._4_4_,(int)plStack_110 + 1);
    lStack_1e0 = lStack_1e0 + 1;
    *(ulonglong *)(lStack_1f0 + (longlong)puVar5 * 8) = CONCAT44(fVar63,fVar62);
    puStack_1e8 = (ulonglong *)((longlong)puVar5 + 1);
    if (*(char *)(plStack_100 + -1) == '\0') {
      uStack_f1 = 1;
      cVar15 = pdb_1408ff980(lStack_240);
      uVar17 = (undefined4)((ulonglong)in_stack_fffffffffffffcf0 >> 0x20);
      uVar34 = (undefined4)((ulonglong)in_stack_fffffffffffffcf8 >> 0x20);
      if (cVar15 != '\0') goto LAB_140804e59;
      uStack_f1 = 1;
      puVar26 = (undefined8 *)pdb_1413e4400(uStack_238,&UNK_1433056c0);
      if (puVar26 == (undefined8 *)0x0) {
LAB_14080591a:
        uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_1430075e0);
      }
      uStack_f1 = 1;
      lVar23 = (**(code **)(puVar26[1] + 0x18))(*puVar26);
      if (lVar23 == 0) goto LAB_14080591a;
      puVar37 = (undefined *)plStack_100[-0x31];
      if (puVar37 == (undefined *)0x0) {
        uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_143305b70);
      }
      LOCK();
      bVar51 = puVar37[0x18] == '\0';
      if (bVar51) {
        puVar37[0x18] = '\x01';
      }
      UNLOCK();
      if (!bVar51) {
        uStack_f1 = 1;
        pdb_142dbd1a0(puVar37 + 0x18);
      }
      uStack_f1 = 1;
      pdb_140e9a150(puVar37 + 0x18);
      if ((*(longlong *)(puVar37 + 0x10) == 0) ||
         (piVar27 = (int *)(*(longlong *)(puVar37 + 8) + *(longlong *)(puVar37 + 0x10) * 4 + -4),
         piVar27 == (int *)0x0)) {
        lVar30 = *(longlong *)(lVar23 + 0x10);
        if (lVar30 == 0) {
          uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
          pdb_142dc8150(&UNK_143305b88);
        }
        iStack_140 = (int)lVar30 + -1;
      }
      else {
        iStack_140 = *piVar27;
        lVar30 = *(longlong *)(lVar23 + 0x10);
      }
      uStack_198 = *(longlong ***)(lVar23 + 8);
      pplStack_188 = *(longlong ***)(lVar23 + 0x18);
      pcStack_180 = *(code **)(lVar23 + 0x20);
      auStack_170 = *(undefined1 (*) [16])(lVar23 + 0x28);
      lStack_160 = lVar23 + 0x78;
      lStack_158 = lVar23 + 0x58;
      uStack_150 = *(undefined8 *)(lVar23 + 0x38);
      uStack_148 = *(undefined8 *)(lVar23 + 0x40);
      plStack_200 = (longlong *)((ulonglong)plStack_200 & 0xffffffff00000000);
      pcStack_1b8 = pcStack_278;
      uStack_1b0 = &plStack_200;
      uStack_1a8 = &uStack_198;
      pcStack_1a0 = &cStack_f4;
      puStack_1c0 = puVar47;
      pcStack_190 = (code *)lVar30;
      puStack_178 = puVar37;
      lVar23 = pdb_140315970(&uStack_138);
      plStack_208 = (longlong *)(lVar23 + (longlong)param_3);
      in_stack_fffffffffffffce8 = &fStack_21c;
      pdb_141422540(&puStack_1c0,&plStack_208,*(undefined4 *)((longlong)puVar47 + 0x14),uVar64,
                    in_stack_fffffffffffffce8);
      pcVar36 = puStack_178 + 0x18;
      uStack_f1 = 1;
      pdb_140e9a350();
      LOCK();
      cVar15 = *pcVar36;
      if (cVar15 == '\x01') {
        *pcVar36 = '\0';
      }
      UNLOCK();
      if (cVar15 != '\x01') {
        uStack_f1 = 1;
        pdb_142dbcef0(pcVar36,0);
      }
    }
    else {
LAB_140804e59:
      uStack_f1 = 1;
      puVar26 = (undefined8 *)pdb_1413e4400(uStack_238,&UNK_1433056b0);
      if (puVar26 == (undefined8 *)0x0) {
LAB_14080587a:
        uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_1430075f8);
      }
      uStack_f1 = 1;
      lVar23 = (**(code **)(puVar26[1] + 0x18))(*puVar26);
      if (lVar23 == 0) goto LAB_14080587a;
      puVar37 = (undefined *)plStack_100[-0x2f];
      if (puVar37 == (undefined *)0x0) {
        uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_143305b70);
      }
      LOCK();
      bVar51 = puVar37[0x18] == '\0';
      if (bVar51) {
        puVar37[0x18] = '\x01';
      }
      UNLOCK();
      if (!bVar51) {
        uStack_f1 = 1;
        pdb_142dbd1a0(puVar37 + 0x18,1,1000000000);
      }
      uStack_f1 = 1;
      pdb_140e9a150(puVar37 + 0x18);
      plVar32 = plStack_100;
      if ((*(longlong *)(puVar37 + 0x10) == 0) ||
         (piVar27 = (int *)(*(longlong *)(puVar37 + 8) + *(longlong *)(puVar37 + 0x10) * 4 + -4),
         piVar27 == (int *)0x0)) {
        lVar30 = *(longlong *)(lVar23 + 0x10);
        if (lVar30 == 0) {
          uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
          pdb_142dc8150(&UNK_143305b88);
        }
        iStack_140 = (int)lVar30 + -1;
      }
      else {
        iStack_140 = *piVar27;
        lVar30 = *(longlong *)(lVar23 + 0x10);
      }
      uStack_198 = *(longlong ***)(lVar23 + 8);
      pplStack_188 = *(longlong ***)(lVar23 + 0x18);
      pcStack_180 = *(code **)(lVar23 + 0x20);
      auStack_170 = *(undefined1 (*) [16])(lVar23 + 0x28);
      lStack_160 = lVar23 + 0x78;
      lStack_158 = lVar23 + 0x58;
      uStack_150 = *(undefined8 *)(lVar23 + 0x38);
      uStack_148 = *(undefined8 *)(lVar23 + 0x40);
      puStack_1c0 = &uStack_198;
      pcStack_1b8 = (code *)&uStack_f3;
      fVar61 = _DAT_142f94718;
      fVar62 = fVar14;
      uVar64 = uVar10;
      uVar65 = uVar12;
      if (*(char *)(plStack_100 + -1) != '\0') {
        fVar61 = fVar13;
        fVar62 = fVar13;
        uVar64 = uVar11;
        uVar65 = 0;
      }
      pcStack_190 = (code *)lVar30;
      puStack_178 = puVar37;
      cVar15 = pdb_1408ff980(lStack_240);
      fVar53 = fVar9;
      if ((cVar15 != '\0') && (1 < *(uint *)(plVar32 + -10))) {
        fVar53 = _DAT_142e382c0;
      }
      in_stack_fffffffffffffcf8 = CONCAT44(uVar34,uVar64);
      in_stack_fffffffffffffcf0 = CONCAT44(uVar17,fVar62);
      in_stack_fffffffffffffce8 = (float *)CONCAT44(uVar66,fVar61 * fVar53);
      pdb_1414222f0(&fStack_21c,(int)*puVar47,*(undefined4 *)((longlong)puVar47 + 4),
                    *(undefined4 *)((longlong)puVar47 + 0x14),in_stack_fffffffffffffce8,
                    in_stack_fffffffffffffcf0,in_stack_fffffffffffffcf8,uVar65,&puStack_1c0,
                    &uStack_2a8,(int)uStack_1d8,(int)plStack_110,
                    *(undefined4 *)((longlong)plVar32 + -0x34));
      pcVar36 = puStack_178 + 0x18;
      uStack_f1 = 1;
      pdb_140e9a350();
      LOCK();
      cVar15 = *pcVar36;
      if (cVar15 == '\x01') {
        *pcVar36 = '\0';
      }
      UNLOCK();
      if (cVar15 != '\x01') {
        uStack_f1 = 1;
        pdb_142dbcef0(pcVar36,0);
      }
    }
    plStack_110 = (longlong *)((ulonglong)plStack_130 & 0xffffffff);
    uVar21 = uVar21 + 1;
  }
  uStack_1d8 = (ulonglong)uStack_20c;
  lVar20 = lStack_270;
  goto LAB_140804a41;
}

