// VA 0x14080eb40, PDB extent 7625 bytes
// system_wall_constructor::plaster_systems::maintain_plaster
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/plaster_systems.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_wall_constructor::plaster_systems::maintain_plaster
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/plaster_systems.rs
   Extent: 7625 */

void pdb_14080eb40(longlong *param_1,undefined8 param_2,ulonglong *param_3,byte *param_4,
                  longlong *param_5,undefined8 param_6,undefined8 *param_7,undefined8 *param_8,
                  undefined8 *param_9,longlong *param_10,undefined8 *param_11)

{
  ulonglong *puVar1;
  undefined8 *puVar2;
  char *pcVar3;
  byte *pbVar4;
  byte bVar5;
  byte bVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  code *pcVar9;
  ushort uVar10;
  short sVar11;
  uint uVar12;
  uint uVar13;
  float fVar14;
  undefined4 uVar15;
  char cVar16;
  uint uVar17;
  int iVar18;
  ulonglong uVar19;
  longlong lVar20;
  ulonglong uVar21;
  longlong *plVar22;
  undefined1 (*pauVar23) [16];
  undefined8 uVar24;
  longlong lVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  undefined1 *puVar28;
  longlong *plVar29;
  undefined1 (*pauVar30) [16];
  undefined1 (*pauVar31) [16];
  undefined8 *unaff_RSI;
  uint uVar32;
  undefined1 (*pauVar33) [16];
  ulonglong *puVar34;
  undefined *puVar35;
  undefined *puVar36;
  longlong lVar37;
  ushort uVar38;
  longlong lVar39;
  ulonglong *puVar40;
  undefined1 uVar41;
  undefined *puVar42;
  undefined1 (*pauVar43) [16];
  bool bVar44;
  byte bVar45;
  float fVar46;
  undefined4 uVar47;
  undefined1 auVar48 [16];
  undefined4 uVar49;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  float fVar57;
  char unaff_XMM9_Ba;
  char unaff_XMM9_Bb;
  char unaff_XMM9_Bc;
  char unaff_XMM9_Bd;
  char unaff_XMM9_Be;
  char unaff_XMM9_Bf;
  char unaff_XMM9_Bg;
  char unaff_XMM9_Bh;
  char unaff_XMM9_Bi;
  char unaff_XMM9_Bj;
  char unaff_XMM9_Bk;
  char unaff_XMM9_Bl;
  char unaff_XMM9_Bm;
  char unaff_XMM9_Bn;
  char unaff_XMM9_Bo;
  char unaff_XMM9_Bp;
  ulonglong *puStack_238;
  ulonglong *puStack_230;
  longlong *plStack_1f8;
  longlong *plStack_1f0;
  ulonglong *puStack_1c8;
  ulonglong *puStack_1c0;
  ulonglong *puStack_1b8;
  ulonglong *puStack_1b0;
  ulonglong *puStack_1a8;
  undefined8 uStack_1a0;
  byte *pbStack_198;
  longlong lStack_190;
  undefined1 (*pauStack_188) [16];
  undefined1 (*pauStack_180) [16];
  undefined1 (*pauStack_178) [16];
  undefined1 *puStack_170;
  longlong *plStack_168;
  ulonglong *puStack_160;
  longlong *plStack_158;
  undefined1 (*pauStack_150) [16];
  ulonglong *puStack_148;
  ulonglong *puStack_140;
  ulonglong *puStack_138;
  ulonglong *puStack_130;
  ulonglong *puStack_128;
  ulonglong *puStack_120;
  ulonglong *puStack_118;
  byte *pbStack_110;
  undefined8 *puStack_108;
  longlong lStack_100;
  undefined8 *puStack_f8;
  undefined1 auStack_e1 [9];
  undefined8 uStack_d8;
  ulonglong *puStack_d0;
  char cStack_c2;
  undefined1 uStack_c1;
  undefined8 uStack_c0;
  
  uStack_c0 = 0xfffffffffffffffe;
  puStack_160 = param_3;
  plStack_158 = param_1;
  uVar19 = pdb_140e94b40();
  plVar29 = (longlong *)(uVar19 & 0xffffffff);
  cVar16 = '\0';
  if ((char)plVar29 == '\0') goto LAB_14080ed45;
  puVar42 = &UNK_143008126;
  pauVar33 = (undefined1 (*) [16])0x3a;
  uVar19 = 0x3a;
  lVar20 = pdb_140811400(&UNK_143008126);
  if (lVar20 == 1) {
    if (0x3a < uVar19) {
      pdb_142dc8070(&UNK_143008126,0x3a,0,uVar19,&UNK_1430081e0);
LAB_1408101a6:
      pdb_142dc8070(&UNK_143008126,0x3a);
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    puVar42 = &UNK_143008126;
    uVar21 = pdb_140811400(&UNK_143008126);
    if ((uVar21 & 1) != 0) {
      if (0x3a < uVar19 + 2) goto LAB_1408101a6;
      pauVar33 = (undefined1 (*) [16])(0x38 - uVar19);
      puVar42 = &UNK_143008128 + uVar19;
    }
  }
  puVar35 = &UNK_143007f05;
  pauVar43 = (undefined1 (*) [16])&UNK_143007ecf;
  do {
    bVar45 = puVar35[-1];
    uVar17 = (uint)(char)bVar45;
    if ((char)bVar45 < '\0') {
      bVar5 = puVar35[-2];
      if ((char)bVar5 < -0x40) {
        bVar6 = puVar35[-3];
        if ((char)bVar6 < -0x40) {
          pbVar4 = puVar35 + -4;
          puVar35 = puVar35 + -4;
          uVar17 = bVar6 & 0x3f | (*pbVar4 & 7) << 6;
        }
        else {
          puVar35 = puVar35 + -3;
          uVar17 = bVar6 & 0xf;
        }
        uVar17 = bVar5 & 0x3f | uVar17 << 6;
      }
      else {
        puVar35 = puVar35 + -2;
        uVar17 = bVar5 & 0x1f;
      }
      uVar17 = (uint)(bVar45 & 0x3f) | uVar17 << 6;
      if (uVar17 != 0x5c) goto LAB_14080ecb4;
LAB_14080ecc5:
      pauVar43 = (undefined1 (*) [16])&UNK_143007ecf;
      puVar36 = puVar35 + -0x143007ece;
      if ((undefined *)0x36 < puVar36) {
        pdb_142dc8070(&UNK_143007ecf,0x36,puVar36,0x36,&UNK_1430081c0);
        goto LAB_14081016d;
      }
      unaff_RSI = (undefined8 *)(0x36 - (longlong)puVar36);
      pauVar43 = (undefined1 (*) [16])(puVar35 + 1);
      goto LAB_14080ece7;
    }
    puVar35 = puVar35 + -1;
    if (uVar17 == 0x5c) goto LAB_14080ecc5;
LAB_14080ecb4:
    if (uVar17 == 0x2f) goto LAB_14080ecc5;
  } while (puVar35 != &UNK_143007ecf);
  unaff_RSI = (undefined8 *)0x36;
LAB_14080ece7:
  plVar22 = (longlong *)pdb_140e97000();
  if ((char)plVar22[0xd] != '\x01') goto LAB_14081005e;
LAB_14080ecf6:
  cVar16 = (char)plVar29;
  if (*plVar22 != 0) goto LAB_140810052;
  *plVar22 = -1;
  puStack_d0 = (ulonglong *)plVar22;
  pdb_140e94f10(plVar22 + 1,puVar42,pauVar33,pauVar43,unaff_RSI,1,0);
  *puStack_d0 = *puStack_d0 + 1;
LAB_14080ed45:
  LOCK();
  bVar44 = DAT_143ca41c0 == '\0';
  if (bVar44) {
    DAT_143ca41c0 = '\x01';
  }
  UNLOCK();
  cStack_c2 = cVar16;
  if (!bVar44) {
    pdb_142dc6be0(&DAT_143ca41c0);
  }
  puVar40 = _DAT_143ca8f38;
  if ((*_DAT_143ca8f38 & 0x7fffffffffffffff) == 0) {
    uVar17 = 0;
    pauVar33 = _DAT_143ca41d0;
    plVar29 = _DAT_143ca41d8;
  }
  else {
    uVar17 = pdb_142dc79e0();
    uVar17 = uVar17 ^ 1;
    pauVar33 = _DAT_143ca41d0;
    plVar29 = _DAT_143ca41d8;
  }
  _DAT_143ca41d0 = pauVar33;
  _DAT_143ca41d8 = plVar29;
  if (DAT_143ca41c1 != '\0') {
    puStack_148 = (ulonglong *)&DAT_143ca41c0;
    uVar19 = (ulonglong)puStack_140 >> 8;
    puStack_140 = (ulonglong *)CONCAT71((int7)uVar19,(char)uVar17);
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_1430080c0,0x2b,&puStack_148,&UNK_1430080a0,&UNK_143008028);
  }
  if (plVar29 != (longlong *)0x0) {
    uVar19 = (longlong)plVar29 * 0x10 - 0x10;
    pauVar43 = pauVar33;
    if ((~(uint)uVar19 & 0x70) != 0) {
      lVar20 = -(ulonglong)(((uint)(uVar19 >> 4) & 0xfffffff) + 1 & 7);
      do {
        *(int *)(*pauVar43 + 8) = *(int *)(*pauVar43 + 8) + -1;
        pauVar43 = pauVar43 + 1;
        lVar20 = lVar20 + 1;
      } while (lVar20 != 0);
    }
    if (0x6f < uVar19) {
      do {
        *(int *)(*pauVar43 + 8) = *(int *)(*pauVar43 + 8) + -1;
        *(int *)(pauVar43[1] + 8) = *(int *)(pauVar43[1] + 8) + -1;
        *(int *)(pauVar43[2] + 8) = *(int *)(pauVar43[2] + 8) + -1;
        *(int *)(pauVar43[3] + 8) = *(int *)(pauVar43[3] + 8) + -1;
        *(int *)(pauVar43[4] + 8) = *(int *)(pauVar43[4] + 8) + -1;
        *(int *)(pauVar43[5] + 8) = *(int *)(pauVar43[5] + 8) + -1;
        *(int *)(pauVar43[6] + 8) = *(int *)(pauVar43[6] + 8) + -1;
        *(int *)(pauVar43[7] + 8) = *(int *)(pauVar43[7] + 8) + -1;
        pauVar43 = pauVar43 + 8;
      } while (pauVar43 != pauVar33 + (longlong)plVar29);
    }
    if (_DAT_143ca41d8 != (longlong *)0x0) {
      plStack_1f8 = (longlong *)0x0;
      pauVar33 = _DAT_143ca41d0;
LAB_14080ee30:
      if (-1 < *(int *)(*pauVar33 + 8)) goto code_r0x00014080ee3a;
      auStack_e1._1_8_ = _DAT_143ca41d0;
      puStack_d0 = (ulonglong *)_DAT_143ca41d8;
      uVar19 = (ulonglong)uStack_d8 >> 0x20;
      uStack_d8 = (undefined1 (*) [16])CONCAT44((int)uVar19,uVar17);
      pdb_1413fffc0();
      plStack_1f0 = plStack_1f8;
      while (plStack_1f0 = (longlong *)((longlong)plStack_1f0 + 1), plStack_1f0 < puStack_d0) {
        while (-1 < *(int *)(*(undefined1 (*) [16])(auStack_e1._1_8_ + plStack_1f0 * 0x10) + 8)) {
          uVar24 = *(undefined8 *)
                    (*(undefined1 (*) [16])(auStack_e1._1_8_ + plStack_1f0 * 0x10) + 8);
          *(undefined8 *)*(undefined1 (*) [16])(auStack_e1._1_8_ + plStack_1f8 * 0x10) =
               *(undefined8 *)*(undefined1 (*) [16])(auStack_e1._1_8_ + plStack_1f0 * 0x10);
          *(undefined8 *)(*(undefined1 (*) [16])(auStack_e1._1_8_ + plStack_1f8 * 0x10) + 8) =
               uVar24;
          plStack_1f8 = (longlong *)((longlong)plStack_1f8 + 1);
          plStack_1f0 = (longlong *)((longlong)plStack_1f0 + 1);
          if (puStack_d0 <= plStack_1f0) goto LAB_14080ff60;
        }
        pdb_1413fffc0();
      }
LAB_14080ff60:
      _DAT_143ca41d8 = plStack_1f8;
      if ((char)uStack_d8 != '\0') goto LAB_14080ee59;
      goto LAB_14080ee4a;
    }
  }
LAB_14080ee46:
  if ((char)uVar17 == '\0') {
LAB_14080ee4a:
    if ((*puVar40 & 0x7fffffffffffffff) != 0) goto LAB_14081007e;
  }
LAB_14080ee59:
  cVar16 = DAT_143ca41c0;
  LOCK();
  DAT_143ca41c0 = '\0';
  UNLOCK();
  if (cVar16 == '\x02') {
    pdb_142dc6ca0();
  }
  puStack_d0 = (ulonglong *)*param_9;
  lVar20 = param_9[1];
  uVar19 = *puStack_d0;
  uVar26 = 0;
  uVar21 = uVar19 - *(ulonglong *)(lVar20 + 0x18);
  if (uVar19 < *(ulonglong *)(lVar20 + 0x18)) {
    uVar21 = uVar26;
  }
  uVar27 = uVar19 - *(ulonglong *)(lVar20 + 0x38);
  if (uVar19 < *(ulonglong *)(lVar20 + 0x38)) {
    uVar27 = uVar26;
  }
  pauVar33 = (undefined1 (*) [16])(uVar21 * 0x10 + *(longlong *)(lVar20 + 8));
  uVar19 = *(ulonglong *)(lVar20 + 0x10) - uVar21;
  if (*(ulonglong *)(lVar20 + 0x10) < uVar21) {
    pauVar33 = (undefined1 (*) [16])0x8;
    uVar19 = uVar26;
  }
  pauVar43 = (undefined1 (*) [16])(uVar27 * 0x10 + *(longlong *)(lVar20 + 0x28));
  uVar21 = *(ulonglong *)(lVar20 + 0x30) - uVar27;
  if (*(ulonglong *)(lVar20 + 0x30) < uVar27) {
    pauVar43 = (undefined1 (*) [16])0x8;
    uVar21 = uVar26;
  }
  *puStack_d0 = (*(longlong *)(lVar20 + 0x40) - uVar21) - uVar19;
  auStack_e1._1_8_ = pauVar33 + uVar19;
  uStack_d8 = pauVar43 + uVar21;
LAB_14080ef10:
  do {
    if ((pauVar33 == (undefined1 (*) [16])0x0) ||
       (pauVar33 == (undefined1 (*) [16])auStack_e1._1_8_)) {
      if ((pauVar43 == (undefined1 (*) [16])0x0) || (pauVar43 == uStack_d8)) goto LAB_14080f1f8;
      pauVar30 = pauVar43 + 1;
      pauVar23 = (undefined1 (*) [16])0x0;
    }
    else {
      pauVar23 = pauVar33 + 1;
      pauVar30 = pauVar43;
      pauVar43 = pauVar33;
    }
    *puStack_d0 = *puStack_d0 + 1;
    *(undefined4 *)plStack_158[2] = *(undefined4 *)((longlong)plStack_158 + 0x1c);
    lVar20 = *plStack_158;
    uVar24 = pdb_1400af0a0(lVar20 + 0x20,*pauVar43 + 8);
    pdb_140269750(&puStack_148,lVar20,uVar24,*pauVar43 + 8);
    if (!SBORROW8(0,(longlong)puStack_140)) {
      puStack_1c8 = puStack_138;
      puStack_1c0 = puStack_130;
    }
    puStack_148 = puStack_140;
    puStack_140 = puStack_1c8;
    puStack_138 = puStack_1c0;
    puStack_130 = (ulonglong *)0x0;
    pbStack_110 = (byte *)0x0;
    puVar40 = (ulonglong *)0x0;
LAB_14080f010:
    while (pauVar43 = pauVar30, pauVar33 = pauVar23, puVar40 != (ulonglong *)0x0) {
      if (puStack_128 == puStack_118) {
        puVar34 = (ulonglong *)0x0;
LAB_14080f053:
        if (puStack_120 != (ulonglong *)0x0) {
          pub_1406abac0((byte *)puVar40,(longlong)puStack_120 << 3,8);
        }
        puStack_130 = (ulonglong *)0x0;
        if ((int)puVar34 == 0) break;
        goto LAB_14080f11f;
      }
      puVar1 = puStack_128 + 1;
      puVar34 = (ulonglong *)*puStack_128;
      puStack_128 = puVar1;
      if ((int)puVar34 == 0) goto LAB_14080f053;
      if ((int)puVar34 == 0) goto LAB_14080f170;
LAB_14080f127:
      puStack_1b0 = (ulonglong *)param_7[2];
      puStack_1a8 = (ulonglong *)param_7[3];
      puStack_1c0 = (ulonglong *)*param_7;
      puStack_1b8 = (ulonglong *)param_7[1];
      puStack_1c8 = puVar34;
      pdb_140f04aa0(&puStack_1c8,&UNK_143007f50);
    }
    puVar40 = puStack_148;
    if ((puStack_148 != (ulonglong *)0x8000000000000001) &&
       (puStack_148 = (ulonglong *)0x8000000000000000, !SBORROW8(0,(longlong)puVar40))) {
      puStack_118 = puStack_140 + (longlong)puStack_138;
      puStack_130 = puStack_140;
      puStack_128 = puStack_140;
      puStack_120 = puVar40;
      puVar40 = puStack_140;
      goto LAB_14080f010;
    }
    if (pbStack_110 == (byte *)0x0) goto LAB_14080ef10;
    if (puStack_108 == puStack_f8) {
      puVar34 = (ulonglong *)0x0;
    }
    else {
      puVar2 = puStack_108 + 1;
      puVar34 = (ulonglong *)*puStack_108;
      puStack_108 = puVar2;
      if ((int)puVar34 != 0) goto LAB_14080f11f;
    }
    if (lStack_100 != 0) {
      pub_1406abac0(pbStack_110,lStack_100 << 3,8);
    }
    pbStack_110 = (byte *)0x0;
LAB_14080f11f:
    puVar40 = (ulonglong *)0x0;
    if ((int)puVar34 != 0) goto LAB_14080f127;
LAB_14080f170:
    if ((-0x7fffffffffffffff < (longlong)puStack_148) && (puStack_148 != (ulonglong *)0x0)) {
      pub_1406abac0((byte *)puStack_140,(longlong)puStack_148 << 3,8);
    }
    if ((puVar40 != (ulonglong *)0x0) && (puStack_120 != (ulonglong *)0x0)) {
      pub_1406abac0((byte *)puVar40,(longlong)puStack_120 << 3,8);
    }
    if ((pbStack_110 != (byte *)0x0) && (lStack_100 != 0)) {
      pub_1406abac0(pbStack_110,lStack_100 << 3,8);
    }
  } while( true );
code_r0x00014080ee3a:
  plStack_1f8 = (longlong *)((longlong)plStack_1f8 + 1);
  pauVar33 = pauVar33 + 1;
  if (_DAT_143ca41d8 == plStack_1f8) goto LAB_14080ee46;
  goto LAB_14080ee30;
LAB_14080f1f8:
  puStack_148 = (ulonglong *)*param_8;
  lVar20 = param_8[1];
  uVar19 = *puStack_148;
  uVar26 = 0;
  uVar21 = uVar19 - *(ulonglong *)(lVar20 + 0x18);
  if (uVar19 < *(ulonglong *)(lVar20 + 0x18)) {
    uVar21 = uVar26;
  }
  uVar27 = uVar19 - *(ulonglong *)(lVar20 + 0x38);
  if (uVar19 < *(ulonglong *)(lVar20 + 0x38)) {
    uVar27 = uVar26;
  }
  puStack_140 = (ulonglong *)(uVar21 * 0x10 + *(longlong *)(lVar20 + 8));
  uVar19 = *(ulonglong *)(lVar20 + 0x10) - uVar21;
  if (*(ulonglong *)(lVar20 + 0x10) < uVar21) {
    puStack_140 = (ulonglong *)0x8;
    uVar19 = uVar26;
  }
  puStack_130 = (ulonglong *)(uVar27 * 0x10 + *(longlong *)(lVar20 + 0x28));
  uVar21 = *(ulonglong *)(lVar20 + 0x30) - uVar27;
  if (*(ulonglong *)(lVar20 + 0x30) < uVar27) {
    puStack_130 = (ulonglong *)0x8;
    uVar21 = uVar26;
  }
  puStack_120 = (ulonglong *)(uVar21 + uVar19);
  *puStack_148 = *(longlong *)(lVar20 + 0x40) - (longlong)puStack_120;
  puStack_138 = (ulonglong *)(uVar19 * 0x10 + (longlong)puStack_140);
  puStack_128 = (ulonglong *)(uVar21 * 0x10 + (longlong)puStack_130);
  puStack_118 = puStack_160;
  pbStack_110 = param_4;
  pdb_1413ed510(&pauStack_188,&puStack_148);
  uVar15 = _DAT_142f3e570;
  fVar14 = _DAT_142e37848;
  uVar17 = _DAT_142e377e0;
  pauVar23 = *(undefined1 (**) [16])*puStack_160;
  auVar48 = *pauVar23;
  pauVar43 = pauVar23 + 1;
  pauVar33 = (undefined1 (*) [16])
             (ulonglong)
             ~(uint)(ushort)((ushort)(SUB161(auVar48 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar48 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar48 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar48 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar48 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar48 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar48 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar48 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar48 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar48 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar48 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar48 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar48 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar48 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar48 >> 0x77,0) & 1) << 0xe |
                            (ushort)(byte)(auVar48[0xf] >> 7) << 0xf);
  puStack_d0 = (ulonglong *)*param_11;
  pauStack_150 = (undefined1 (*) [16])param_11[2];
  plVar29 = (longlong *)(puStack_d0 + 4);
  plStack_168 = (longlong *)CONCAT44(plStack_168._4_4_,*(undefined4 *)((longlong)param_11 + 0x1c));
  uVar7 = *(undefined4 *)((longlong)param_10 + 0x1c);
  lVar20 = *param_10;
  puVar8 = (undefined4 *)param_10[2];
  iVar18 = -(uint)(CONCAT13(unaff_XMM9_Bd,
                            CONCAT12(unaff_XMM9_Bc,CONCAT11(unaff_XMM9_Bb,unaff_XMM9_Ba))) ==
                  CONCAT13(unaff_XMM9_Bd,
                           CONCAT12(unaff_XMM9_Bc,CONCAT11(unaff_XMM9_Bb,unaff_XMM9_Ba))));
  unaff_XMM9_Ba = (char)iVar18;
  unaff_XMM9_Bb = (char)((uint)iVar18 >> 8);
  unaff_XMM9_Bc = (char)((uint)iVar18 >> 0x10);
  unaff_XMM9_Bd = (char)((uint)iVar18 >> 0x18);
  iVar18 = -(uint)(CONCAT13(unaff_XMM9_Bh,
                            CONCAT12(unaff_XMM9_Bg,CONCAT11(unaff_XMM9_Bf,unaff_XMM9_Be))) ==
                  CONCAT13(unaff_XMM9_Bh,
                           CONCAT12(unaff_XMM9_Bg,CONCAT11(unaff_XMM9_Bf,unaff_XMM9_Be))));
  unaff_XMM9_Be = (char)iVar18;
  unaff_XMM9_Bf = (char)((uint)iVar18 >> 8);
  unaff_XMM9_Bg = (char)((uint)iVar18 >> 0x10);
  unaff_XMM9_Bh = (char)((uint)iVar18 >> 0x18);
  iVar18 = -(uint)(CONCAT13(unaff_XMM9_Bl,
                            CONCAT12(unaff_XMM9_Bk,CONCAT11(unaff_XMM9_Bj,unaff_XMM9_Bi))) ==
                  CONCAT13(unaff_XMM9_Bl,
                           CONCAT12(unaff_XMM9_Bk,CONCAT11(unaff_XMM9_Bj,unaff_XMM9_Bi))));
  unaff_XMM9_Bi = (char)iVar18;
  unaff_XMM9_Bj = (char)((uint)iVar18 >> 8);
  unaff_XMM9_Bk = (char)((uint)iVar18 >> 0x10);
  unaff_XMM9_Bl = (char)((uint)iVar18 >> 0x18);
  iVar18 = -(uint)(CONCAT13(unaff_XMM9_Bp,
                            CONCAT12(unaff_XMM9_Bo,CONCAT11(unaff_XMM9_Bn,unaff_XMM9_Bm))) ==
                  CONCAT13(unaff_XMM9_Bp,
                           CONCAT12(unaff_XMM9_Bo,CONCAT11(unaff_XMM9_Bn,unaff_XMM9_Bm))));
  unaff_XMM9_Bm = (char)iVar18;
  unaff_XMM9_Bn = (char)((uint)iVar18 >> 8);
  unaff_XMM9_Bo = (char)((uint)iVar18 >> 0x10);
  unaff_XMM9_Bp = (char)((uint)iVar18 >> 0x18);
  pauVar30 = (undefined1 (*) [16])((undefined8 *)*puStack_160)[3];
LAB_14080f620:
  if (pauVar30 != (undefined1 (*) [16])0x0) {
    if ((short)pauVar33 == 0) {
      do {
        auVar48 = *pauVar43;
        pauVar23 = pauVar23 + -0x2b0;
        pauVar43 = pauVar43 + 1;
        uVar32 = (ushort)((ushort)(SUB161(auVar48 >> 7,0) & 1) |
                          (ushort)(SUB161(auVar48 >> 0xf,0) & 1) << 1 |
                          (ushort)(SUB161(auVar48 >> 0x17,0) & 1) << 2 |
                          (ushort)(SUB161(auVar48 >> 0x1f,0) & 1) << 3 |
                          (ushort)(SUB161(auVar48 >> 0x27,0) & 1) << 4 |
                          (ushort)(SUB161(auVar48 >> 0x2f,0) & 1) << 5 |
                          (ushort)(SUB161(auVar48 >> 0x37,0) & 1) << 6 |
                          (ushort)(SUB161(auVar48 >> 0x3f,0) & 1) << 7 |
                          (ushort)(SUB161(auVar48 >> 0x47,0) & 1) << 8 |
                          (ushort)(SUB161(auVar48 >> 0x4f,0) & 1) << 9 |
                          (ushort)(SUB161(auVar48 >> 0x57,0) & 1) << 10 |
                          (ushort)(SUB161(auVar48 >> 0x5f,0) & 1) << 0xb |
                          (ushort)(SUB161(auVar48 >> 0x67,0) & 1) << 0xc |
                          (ushort)(SUB161(auVar48 >> 0x6f,0) & 1) << 0xd |
                          (ushort)(SUB161(auVar48 >> 0x77,0) & 1) << 0xe |
                         (ushort)(byte)(auVar48[0xf] >> 7) << 0xf) ^ 0xffff;
        pauVar33 = (undefined1 (*) [16])(ulonglong)uVar32;
      } while (uVar32 == 0);
    }
    uVar12 = (uint)pauVar33;
    uVar32 = 0;
    for (uVar13 = uVar12; (uVar13 & 1) == 0; uVar13 = uVar13 >> 1 | 0x80000000) {
      uVar32 = uVar32 + 1;
    }
    uVar19 = (ulonglong)uVar32;
    pauVar33 = (undefined1 (*) [16])(ulonglong)(uVar12 - 1 & uVar12);
    pauVar30 = (undefined1 (*) [16])(pauVar30[-1] + 0xf);
    if (pauVar23[uVar19 * -0x2b + -1][7] == '\0') {
      uStack_c1 = 1;
      cVar16 = pdb_1408ff980(pauVar23[uVar19 * -0x2b + -1] + 8);
      puVar40 = puStack_d0;
      if (cVar16 == '\0') {
        auStack_e1._1_8_ = pauVar30;
        if (puStack_d0[3] != 0) {
          uStack_d8 = pauVar23 + uVar19 * -0x2b + -0x2b;
          uVar26 = pdb_1400af0a0(plVar29);
          pauVar30 = (undefined1 (*) [16])auStack_e1._1_8_;
          lVar25 = *puVar40;
          uVar21 = puVar40[1];
          bVar45 = (byte)(uVar26 >> 0x39);
          auVar48 = ZEXT216(CONCAT11(bVar45,bVar45));
          auVar48 = pshuflw(auVar48,auVar48,0);
          lVar37 = 0;
          while( true ) {
            uVar26 = uVar26 & uVar21;
            pcVar3 = (char *)(lVar25 + uVar26);
            auVar54[0] = -(*pcVar3 == auVar48[0]);
            auVar54[1] = -(pcVar3[1] == auVar48[1]);
            auVar54[2] = -(pcVar3[2] == auVar48[2]);
            auVar54[3] = -(pcVar3[3] == auVar48[3]);
            auVar54[4] = -(pcVar3[4] == auVar48[4]);
            auVar54[5] = -(pcVar3[5] == auVar48[5]);
            auVar54[6] = -(pcVar3[6] == auVar48[6]);
            auVar54[7] = -(pcVar3[7] == auVar48[7]);
            auVar54[8] = -(pcVar3[8] == auVar48[0]);
            auVar54[9] = -(pcVar3[9] == auVar48[1]);
            auVar54[10] = -(pcVar3[10] == auVar48[2]);
            auVar54[0xb] = -(pcVar3[0xb] == auVar48[3]);
            auVar54[0xc] = -(pcVar3[0xc] == auVar48[4]);
            auVar54[0xd] = -(pcVar3[0xd] == auVar48[5]);
            auVar54[0xe] = -(pcVar3[0xe] == auVar48[6]);
            auVar54[0xf] = -(pcVar3[0xf] == auVar48[7]);
            uVar38 = (ushort)(SUB161(auVar54 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar54 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar54 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar54 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar54 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar54 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar54 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar54 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar54 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar54 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar54 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar54 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar54 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar54 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar54 >> 0x77,0) & 1) << 0xe |
                     (ushort)(auVar54[0xf] >> 7) << 0xf;
            uVar32 = (uint)uVar38;
            if (uVar38 != 0) {
              do {
                uVar13 = 0;
                for (uVar12 = uVar32; (uVar12 & 1) == 0; uVar12 = uVar12 >> 1 | 0x80000000) {
                  uVar13 = uVar13 + 1;
                }
                puStack_170 = pauVar23[uVar19 * -0x2b + -0x2b] + 8;
                if (*(longlong *)*uStack_d8 ==
                    *(longlong *)(lVar25 + (uVar13 + uVar26 & uVar21) * -0x10 + -0x10)) {
                  uVar49 = *(undefined4 *)pauVar23[uVar19 * -0x2b + -1];
                  uStack_c1 = 1;
                  fVar46 = (float)pdb_140de93b0(lVar25,uVar21,lVar37,uVar15);
                  puVar28 = puStack_170;
                  fVar57 = *(float *)pauVar23[uVar19 * -0x2b + -1];
                  if (fVar14 <= (float)((uint)(fVar46 - *(float *)pauVar23[uVar19 * -0x2b + -1]) &
                                       uVar17)) {
                    uStack_c1 = 1;
                    lVar25 = pdb_14092fa10(puStack_170);
                    if (lVar25 == 0) {
                      uVar47 = 0;
                      uVar49 = 0;
                    }
                    else {
                      uStack_c1 = 1;
                      uVar47 = pdb_140a85110(lVar25);
                    }
                    uStack_1a0 = (longlong *)CONCAT44(uVar49,uVar47);
                    uStack_c1 = 1;
                    pdb_140930390(puVar28);
                    uStack_c1 = 1;
                    pdb_140df4540(&puStack_148,&uStack_1a0);
                    puVar28 = *(undefined1 **)*uStack_d8;
                    puStack_1c0 = (ulonglong *)CONCAT44(puStack_1c0._4_4_,puStack_140._0_4_);
                    puStack_1c8 = puStack_148;
                    *puVar8 = uVar7;
                    lVar25 = *(longlong *)(lVar20 + 0x30);
                    uVar24 = *(undefined8 *)(lVar20 + 0x40);
                    if (lVar25 == *(longlong *)(lVar20 + 0x20)) {
                      uStack_c1 = 1;
                      puStack_170 = puVar28;
                      pdb_142d7ede0(lVar20 + 0x20);
                      puVar28 = puStack_170;
                    }
                    lVar37 = *(longlong *)(lVar20 + 0x28);
                    *(undefined8 *)(lVar37 + lVar25 * 0x28) = uVar24;
                    *(undefined1 **)(lVar37 + 8 + lVar25 * 0x28) = puVar28;
                    *(ulonglong **)(lVar37 + 0x10 + lVar25 * 0x28) = puStack_1c8;
                    *(undefined4 *)(lVar37 + 0x18 + lVar25 * 0x28) = puStack_1c0._0_4_;
                    *(undefined4 *)(lVar37 + 0x1c + lVar25 * 0x28) = 0x3f800000;
                    *(undefined1 *)(lVar37 + 0x20 + lVar25 * 0x28) = 9;
                    *(longlong *)(lVar20 + 0x30) = lVar25 + 1;
                    *(longlong *)(lVar20 + 0x40) = *(longlong *)(lVar20 + 0x40) + 1;
                    fVar57 = fVar46;
                  }
                  *(undefined4 *)pauStack_150 = plStack_168._0_4_;
                  uVar24 = *(undefined8 *)*uStack_d8;
                  uStack_c1 = 1;
                  pdb_141408af0(puStack_d0,uVar24);
                  if ((fVar57 != *(float *)pauVar23[uVar19 * -0x2b + -1]) ||
                     (NAN(fVar57) || NAN(*(float *)pauVar23[uVar19 * -0x2b + -1]))) {
                    uStack_c1 = 1;
                    iVar18 = pdb_1409cf7d0(*(undefined8 *)param_4,uVar24);
                    pauVar31 = pauStack_178;
                    if ((iVar18 - 4U < 7) || (iVar18 == 0xc)) {
                      if (pauStack_178 == pauStack_188) {
                        uStack_c1 = 1;
                        pdb_142d7e8a0(&pauStack_188);
                      }
                      *(undefined8 *)(*pauStack_180 + (longlong)pauVar31 * 8) = uVar24;
                      pauStack_178 = (undefined1 (*) [16])(*pauVar31 + 1);
                    }
                  }
                  goto LAB_14080f620;
                }
                uVar38 = (ushort)(uVar32 - 1) & (ushort)uVar32;
                uVar32 = CONCAT22((short)(uVar32 - 1 >> 0x10),uVar38);
              } while (uVar38 != 0);
            }
            auVar50[0] = -(*pcVar3 == unaff_XMM9_Ba);
            auVar50[1] = -(pcVar3[1] == unaff_XMM9_Bb);
            auVar50[2] = -(pcVar3[2] == unaff_XMM9_Bc);
            auVar50[3] = -(pcVar3[3] == unaff_XMM9_Bd);
            auVar50[4] = -(pcVar3[4] == unaff_XMM9_Be);
            auVar50[5] = -(pcVar3[5] == unaff_XMM9_Bf);
            auVar50[6] = -(pcVar3[6] == unaff_XMM9_Bg);
            auVar50[7] = -(pcVar3[7] == unaff_XMM9_Bh);
            auVar50[8] = -(pcVar3[8] == unaff_XMM9_Bi);
            auVar50[9] = -(pcVar3[9] == unaff_XMM9_Bj);
            auVar50[10] = -(pcVar3[10] == unaff_XMM9_Bk);
            auVar50[0xb] = -(pcVar3[0xb] == unaff_XMM9_Bl);
            auVar50[0xc] = -(pcVar3[0xc] == unaff_XMM9_Bm);
            auVar50[0xd] = -(pcVar3[0xd] == unaff_XMM9_Bn);
            auVar50[0xe] = -(pcVar3[0xe] == unaff_XMM9_Bo);
            auVar50[0xf] = -(pcVar3[0xf] == unaff_XMM9_Bp);
            if ((((((((((((((((SUB161(auVar50 >> 7,0) & 1) != 0 ||
                             (SUB161(auVar50 >> 0xf,0) & 1) != 0) ||
                            (SUB161(auVar50 >> 0x17,0) & 1) != 0) ||
                           (SUB161(auVar50 >> 0x1f,0) & 1) != 0) ||
                          (SUB161(auVar50 >> 0x27,0) & 1) != 0) ||
                         (SUB161(auVar50 >> 0x2f,0) & 1) != 0) ||
                        (SUB161(auVar50 >> 0x37,0) & 1) != 0) ||
                       (SUB161(auVar50 >> 0x3f,0) & 1) != 0) || (SUB161(auVar50 >> 0x47,0) & 1) != 0
                      ) || (SUB161(auVar50 >> 0x4f,0) & 1) != 0) ||
                    (SUB161(auVar50 >> 0x57,0) & 1) != 0) || (SUB161(auVar50 >> 0x5f,0) & 1) != 0)
                  || (SUB161(auVar50 >> 0x67,0) & 1) != 0) || (SUB161(auVar50 >> 0x6f,0) & 1) != 0)
                || (SUB161(auVar50 >> 0x77,0) & 1) != 0) || auVar50[0xf] < '\0') break;
            uVar26 = uVar26 + lVar37 + 0x10;
            lVar37 = lVar37 + 0x10;
          }
        }
        *(undefined4 *)pauStack_150 = plStack_168._0_4_;
        uStack_c1 = 1;
        pdb_141408af0(puStack_d0,*(undefined8 *)pauVar23[uVar19 * -0x2b + -0x2b]);
        pauVar30 = (undefined1 (*) [16])auStack_e1._1_8_;
      }
    }
    goto LAB_14080f620;
  }
  uStack_c1 = 1;
  pdb_140b55220(&puStack_1c8,*puStack_160);
  puStack_128 = puStack_1a8;
  puStack_138 = puStack_1b8;
  puStack_130 = puStack_1b0;
  puStack_148 = puStack_1c8;
  puStack_140 = puStack_1c0;
  uStack_c1 = 1;
  pdb_1413ef3d0(&uStack_1a0,&puStack_148);
  *(undefined4 *)pauStack_150 = plStack_168._0_4_;
  lVar20 = puStack_d0[3];
  if (lVar20 != 0) {
    pauVar30 = (undefined1 (*) [16])*puStack_d0;
    auStack_e1._1_8_ = puStack_d0[1];
    auVar48 = *pauVar30;
    pauVar33 = (undefined1 (*) [16])
               (ulonglong)
               ~(uint)(ushort)((ushort)(SUB161(auVar48 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar48 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar48 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar48 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar48 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar48 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar48 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar48 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar48 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar48 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar48 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar48 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar48 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar48 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar48 >> 0x77,0) & 1) << 0xe |
                              (ushort)(byte)(auVar48[0xf] >> 7) << 0xf);
    pauVar23 = pauVar30 + 1;
    uStack_d8 = (undefined1 (*) [16])puStack_d0[2];
    pauVar31 = pauVar30;
    lVar25 = lVar20;
    do {
      uVar17 = (uint)pauVar33;
      if ((short)pauVar33 == 0) {
        do {
          auVar48 = *pauVar23;
          pauVar31 = pauVar31 + -0x10;
          pauVar23 = pauVar23 + 1;
          uVar17 = (ushort)((ushort)(SUB161(auVar48 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar48 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar48 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar48 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar48 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar48 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar48 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar48 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar48 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar48 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar48 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar48 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar48 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar48 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar48 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar48[0xf] >> 7) << 0xf) ^ 0xffff;
        } while (uVar17 == 0);
      }
      iVar18 = 0;
      for (uVar32 = uVar17; (uVar32 & 1) == 0; uVar32 = uVar32 >> 1 | 0x80000000) {
        iVar18 = iVar18 + 1;
      }
      pauVar33 = (undefined1 (*) [16])(ulonglong)(uVar17 - 1 & uVar17);
      lVar39 = (longlong)pauVar31 - (ulonglong)(uint)(iVar18 << 4);
      lVar25 = lVar25 + -1;
      pauVar43 = *(undefined1 (**) [16])(lVar39 + -0x10);
      lVar37 = 0;
LAB_14080f860:
      if (lStack_190 << 3 != lVar37) goto code_r0x00014080f865;
      pauVar43 = (undefined1 (*) [16])((longlong)pauVar30 - lVar39 >> 4);
      pcVar3 = *pauVar30 + ((ulonglong)(pauVar43 + -1) & auStack_e1._1_8_);
      auVar48[0] = -(*pcVar3 == -1);
      auVar48[1] = -(pcVar3[1] == -1);
      auVar48[2] = -(pcVar3[2] == -1);
      auVar48[3] = -(pcVar3[3] == -1);
      auVar48[4] = -(pcVar3[4] == -1);
      auVar48[5] = -(pcVar3[5] == -1);
      auVar48[6] = -(pcVar3[6] == -1);
      auVar48[7] = -(pcVar3[7] == -1);
      auVar48[8] = -(pcVar3[8] == -1);
      auVar48[9] = -(pcVar3[9] == -1);
      auVar48[10] = -(pcVar3[10] == -1);
      auVar48[0xb] = -(pcVar3[0xb] == -1);
      auVar48[0xc] = -(pcVar3[0xc] == -1);
      auVar48[0xd] = -(pcVar3[0xd] == -1);
      auVar48[0xe] = -(pcVar3[0xe] == -1);
      auVar48[0xf] = -(pcVar3[0xf] == -1);
      uVar10 = (ushort)(SUB161(auVar48 >> 7,0) & 1) | (ushort)(SUB161(auVar48 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar48 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar48 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar48 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar48 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar48 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar48 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar48 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar48 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar48 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar48 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar48 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar48 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar48 >> 0x77,0) & 1) << 0xe | (ushort)(auVar48[0xf] >> 7) << 0xf;
      pcVar3 = *pauVar43 + (longlong)*pauVar30;
      auVar51[0] = -(*pcVar3 == -1);
      auVar51[1] = -(pcVar3[1] == -1);
      auVar51[2] = -(pcVar3[2] == -1);
      auVar51[3] = -(pcVar3[3] == -1);
      auVar51[4] = -(pcVar3[4] == -1);
      auVar51[5] = -(pcVar3[5] == -1);
      auVar51[6] = -(pcVar3[6] == -1);
      auVar51[7] = -(pcVar3[7] == -1);
      auVar51[8] = -(pcVar3[8] == -1);
      auVar51[9] = -(pcVar3[9] == -1);
      auVar51[10] = -(pcVar3[10] == -1);
      auVar51[0xb] = -(pcVar3[0xb] == -1);
      auVar51[0xc] = -(pcVar3[0xc] == -1);
      auVar51[0xd] = -(pcVar3[0xd] == -1);
      auVar51[0xe] = -(pcVar3[0xe] == -1);
      auVar51[0xf] = -(pcVar3[0xf] == -1);
      uVar38 = 0xf;
      if (uVar10 != 0) {
        for (; uVar10 >> uVar38 == 0; uVar38 = uVar38 - 1) {
        }
      }
      sVar11 = 0;
      for (uVar17 = (ushort)((ushort)(SUB161(auVar51 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar51 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar51 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar51 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar51 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar51 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar51 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar51 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar51 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar51 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar51 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar51 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar51 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar51 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar51 >> 0x77,0) & 1) << 0xe |
                            (ushort)(auVar51[0xf] >> 7) << 0xf) | 0x10000; (uVar17 & 1) == 0;
          uVar17 = uVar17 >> 1 | 0x80000000) {
        sVar11 = sVar11 + 1;
      }
      uVar41 = 0x80;
      if ((ushort)(sVar11 + (uVar38 ^ 0xf)) < 0x10) {
        uStack_d8 = (undefined1 (*) [16])(*uStack_d8 + 1);
        puStack_d0[2] = (ulonglong)uStack_d8;
        uVar41 = 0xff;
      }
      (*pauVar43)[(longlong)*pauVar30] = uVar41;
      pauVar30[1][(ulonglong)(pauVar43 + -1) & auStack_e1._1_8_] = uVar41;
      lVar20 = lVar20 + -1;
      puStack_d0[3] = lVar20;
LAB_14080f80f:
      if (lVar25 == 0) break;
    } while( true );
  }
  if (uStack_1a0 != (longlong *)0x0) {
    pub_1406abac0(pbStack_198,(longlong)uStack_1a0 << 3,8);
  }
  puStack_148 = (ulonglong *)auStack_e1;
  unaff_RSI = param_7;
  pauVar23 = pauStack_178;
  if ((undefined1 (*) [16])0x1 < pauStack_178) {
    if (pauStack_178 < (undefined1 (*) [16])0x15) {
      uStack_c1 = 1;
      pdb_141460340(pauStack_180,pauStack_178,1,&puStack_148);
    }
    else {
LAB_14081016d:
      uStack_c1 = 1;
      pdb_141465dc0();
    }
    pauVar23 = pauStack_178;
    if ((undefined1 (*) [16])0x1 < pauStack_178) {
      puVar42 = (undefined *)0x0;
      do {
        if (*(longlong *)(*pauStack_180 + (longlong)puVar42 * 8 + 8) ==
            *(longlong *)(*pauStack_180 + (longlong)puVar42 * 8)) {
          pauVar30 = (undefined1 (*) [16])(puVar42 + 2);
          pauVar23 = (undefined1 (*) [16])(puVar42 + 1);
          if (pauVar30 < pauStack_178) {
            if (((int)pauStack_178 - (int)puVar42 & 1U) != 0) {
              if (*(longlong *)(pauStack_180[1] + (longlong)puVar42 * 8) !=
                  *(longlong *)(*pauStack_180 + (longlong)puVar42 * 8)) {
                *(longlong *)(*pauStack_180 + (longlong)puVar42 * 8 + 8) =
                     *(longlong *)(pauStack_180[1] + (longlong)puVar42 * 8);
                pauVar23 = (undefined1 (*) [16])(puVar42 + 2);
              }
              pauVar30 = (undefined1 (*) [16])(puVar42 + 3);
            }
            pauVar33 = pauStack_180;
            if (pauStack_178[-1] + 0xd != puVar42) goto LAB_1408100f9;
          }
          break;
        }
        puVar42 = puVar42 + 1;
      } while (pauStack_178[-1] + 0xf != puVar42);
    }
  }
  goto LAB_14080f928;
code_r0x00014080f865:
  pbVar4 = pbStack_198 + lVar37;
  lVar37 = lVar37 + 8;
  if (*(undefined1 (**) [16])pbVar4 == pauVar43) goto LAB_14080f80f;
  goto LAB_14080f860;
LAB_1408100f9:
  do {
    if (*(longlong *)(*pauStack_180 + (longlong)pauVar30 * 8) ==
        *(longlong *)(pauStack_180[-1] + (longlong)pauVar23 * 8 + 8)) {
      lVar20 = *(longlong *)(*pauStack_180 + (longlong)pauVar30 * 8 + 8);
      if (lVar20 != *(longlong *)(pauStack_180[-1] + (longlong)pauVar23 * 8 + 8)) {
LAB_140810125:
        *(longlong *)(*pauStack_180 + (longlong)pauVar23 * 8) = lVar20;
        pauVar23 = (undefined1 (*) [16])(*pauVar23 + 1);
      }
    }
    else {
      *(longlong *)(*pauStack_180 + (longlong)pauVar23 * 8) =
           *(longlong *)(*pauStack_180 + (longlong)pauVar30 * 8);
      puVar42 = *pauVar23;
      pauVar23 = (undefined1 (*) [16])(puVar42 + 1);
      lVar20 = *(longlong *)(*pauStack_180 + (longlong)pauVar30 * 8 + 8);
      if (lVar20 != *(longlong *)(*pauStack_180 + (longlong)puVar42 * 8)) goto LAB_140810125;
    }
    pauVar30 = (undefined1 (*) [16])(*pauVar30 + 2);
  } while (pauStack_178 != pauVar30);
LAB_14080f928:
  pauStack_178 = pauVar23;
  uStack_d8 = pauStack_188;
  auStack_e1._1_8_ = *pauStack_180 + (longlong)pauStack_178 * 8;
  plVar29 = (longlong *)*param_5;
  plStack_168 = plVar29 + 4;
  puVar42 = &UNK_143007f38;
  pauVar23 = pauStack_180;
  pauStack_150 = pauStack_180;
LAB_14080fa00:
  if (pauVar23 != (undefined1 (*) [16])auStack_e1._1_8_) {
    uStack_1a0 = *(longlong **)*pauVar23;
    *(undefined4 *)plStack_158[2] = *(undefined4 *)((longlong)plStack_158 + 0x1c);
    lVar20 = *plStack_158;
    puStack_d0 = (ulonglong *)uStack_1a0;
    uVar24 = pdb_1400af0a0(lVar20 + 0x20,&uStack_1a0);
    pdb_140269750(&puStack_148,lVar20,uVar24,&uStack_1a0);
    if (!SBORROW8(0,(longlong)puStack_140)) {
      puStack_238 = puStack_138;
      puStack_230 = puStack_130;
    }
    pauVar23 = (undefined1 (*) [16])(*pauVar23 + 8);
    puStack_148 = puStack_140;
    puStack_140 = puStack_238;
    puStack_138 = puStack_230;
    puStack_130 = (ulonglong *)0x0;
    pbStack_110 = (byte *)0x0;
    puVar40 = (ulonglong *)0x0;
    do {
      while (puVar40 == (ulonglong *)0x0) {
LAB_14080fb43:
        puVar40 = puStack_148;
        if ((puStack_148 == (ulonglong *)0x8000000000000001) ||
           (puStack_148 = (ulonglong *)0x8000000000000000, SBORROW8(0,(longlong)puVar40))) {
          if (pbStack_110 != (byte *)0x0) {
            if (puStack_108 == puStack_f8) {
              puVar34 = (ulonglong *)0x0;
            }
            else {
              puVar2 = puStack_108 + 1;
              puVar34 = (ulonglong *)*puStack_108;
              puStack_108 = puVar2;
              if ((int)puVar34 != 0) goto LAB_14080fbdc;
            }
            if (lStack_100 != 0) {
              pub_1406abac0(pbStack_110,lStack_100 << 3,8);
            }
            pbStack_110 = (byte *)0x0;
LAB_14080fbdc:
            puVar40 = (ulonglong *)0x0;
            iVar18 = (int)puVar34;
            puVar1 = puStack_1c8;
            goto joined_r0x00014080faf9;
          }
          goto LAB_14080fcab;
        }
        puStack_118 = puStack_140 + (longlong)puStack_138;
        puStack_130 = puStack_140;
        puStack_128 = puStack_140;
        puStack_120 = puVar40;
        puVar40 = puStack_140;
      }
      if (puStack_128 == puStack_118) {
        puVar34 = (ulonglong *)0x0;
LAB_14080fb12:
        if (puStack_120 != (ulonglong *)0x0) {
          pub_1406abac0((byte *)puVar40,(longlong)puStack_120 << 3,8);
        }
        puStack_130 = (ulonglong *)0x0;
        if ((int)puVar34 == 0) goto LAB_14080fb43;
        goto LAB_14080fbdc;
      }
      puVar1 = puStack_128 + 1;
      puVar34 = (ulonglong *)*puStack_128;
      iVar18 = (int)puVar34;
      puStack_128 = puVar1;
      puVar1 = puStack_1c8;
      if (iVar18 == 0) goto LAB_14080fb12;
joined_r0x00014080faf9:
      puStack_1c8 = puVar34;
      if (iVar18 == 0) {
        puStack_1c8 = puVar1;
        if ((-0x7fffffffffffffff < (longlong)puStack_148) && (puStack_148 != (ulonglong *)0x0)) {
          pub_1406abac0((byte *)puStack_140,(longlong)puStack_148 << 3,8);
        }
        if ((puVar40 != (ulonglong *)0x0) && (puStack_120 != (ulonglong *)0x0)) {
          pub_1406abac0((byte *)puVar40,(longlong)puStack_120 << 3,8);
        }
        if ((pbStack_110 != (byte *)0x0) && (lStack_100 != 0)) {
          pub_1406abac0(pbStack_110,lStack_100 << 3,8);
        }
LAB_14080fcab:
        plVar22 = (longlong *)*puStack_160;
        if (plVar22[3] != 0) {
          uVar21 = pdb_1400af0a0(plVar22 + 4,&uStack_1a0);
          lVar20 = *plVar22;
          bVar45 = (byte)(uVar21 >> 0x39);
          auVar48 = ZEXT216(CONCAT11(bVar45,bVar45));
          auVar48 = pshuflw(auVar48,auVar48,0);
          uVar19 = 0;
          while( true ) {
            uVar21 = uVar21 & plVar22[1];
            auVar54 = *(undefined1 (*) [16])(lVar20 + uVar21);
            auVar56[0] = -(auVar54[0] == auVar48[0]);
            auVar56[1] = -(auVar54[1] == auVar48[1]);
            auVar56[2] = -(auVar54[2] == auVar48[2]);
            auVar56[3] = -(auVar54[3] == auVar48[3]);
            auVar56[4] = -(auVar54[4] == auVar48[4]);
            auVar56[5] = -(auVar54[5] == auVar48[5]);
            auVar56[6] = -(auVar54[6] == auVar48[6]);
            auVar56[7] = -(auVar54[7] == auVar48[7]);
            auVar56[8] = -(auVar54[8] == auVar48[0]);
            auVar56[9] = -(auVar54[9] == auVar48[1]);
            auVar56[10] = -(auVar54[10] == auVar48[2]);
            auVar56[0xb] = -(auVar54[0xb] == auVar48[3]);
            auVar56[0xc] = -(auVar54[0xc] == auVar48[4]);
            auVar56[0xd] = -(auVar54[0xd] == auVar48[5]);
            auVar56[0xe] = -(auVar54[0xe] == auVar48[6]);
            auVar56[0xf] = -(auVar54[0xf] == auVar48[7]);
            uVar38 = (ushort)(SUB161(auVar56 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar56 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar56 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar56 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar56 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar56 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar56 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar56 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar56 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar56 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar56 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar56 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar56 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar56 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar56 >> 0x77,0) & 1) << 0xe |
                     (ushort)(auVar56[0xf] >> 7) << 0xf;
            uVar17 = (uint)uVar38;
            while (uVar38 != 0) {
              uVar32 = 0;
              for (uVar13 = uVar17; (uVar13 & 1) == 0; uVar13 = uVar13 >> 1 | 0x80000000) {
                uVar32 = uVar32 + 1;
              }
              lVar25 = (uVar32 + uVar21 & plVar22[1]) * -0x2b0;
              if (puStack_d0 == (ulonglong *)*(longlong **)(lVar20 + -0x2b0 + lVar25)) {
                pauVar33 = (undefined1 (*) [16])(lVar20 + lVar25);
                cVar16 = pdb_1408ff980(pauVar33[-1] + 8);
                pauVar43 = pauVar23;
                if (cVar16 != '\0') goto LAB_14080fa00;
                if (plVar29[3] == 0) goto LAB_14080fdcc;
                uVar21 = pdb_1400af0a0(plStack_168,&uStack_1a0);
                lVar20 = *plVar29;
                uVar19 = plVar29[1];
                bVar45 = (byte)(uVar21 >> 0x39);
                auVar48 = ZEXT216(CONCAT11(bVar45,bVar45));
                auVar48 = pshuflw(auVar48,auVar48,0);
                lVar25 = 0;
                goto LAB_14080f980;
              }
              uVar38 = (ushort)(uVar17 - 1) & (ushort)uVar17;
              uVar17 = CONCAT22((short)(uVar17 - 1 >> 0x10),uVar38);
            }
            auVar53[0] = -(auVar54[0] == -1);
            auVar53[1] = -(auVar54[1] == -1);
            auVar53[2] = -(auVar54[2] == -1);
            auVar53[3] = -(auVar54[3] == -1);
            auVar53[4] = -(auVar54[4] == -1);
            auVar53[5] = -(auVar54[5] == -1);
            auVar53[6] = -(auVar54[6] == -1);
            auVar53[7] = -(auVar54[7] == -1);
            auVar53[8] = -(auVar54[8] == -1);
            auVar53[9] = -(auVar54[9] == -1);
            auVar53[10] = -(auVar54[10] == -1);
            auVar53[0xb] = -(auVar54[0xb] == -1);
            auVar53[0xc] = -(auVar54[0xc] == -1);
            auVar53[0xd] = -(auVar54[0xd] == -1);
            auVar53[0xe] = -(auVar54[0xe] == -1);
            auVar53[0xf] = -(auVar54[0xf] == -1);
            if ((((((((((((((((SUB161(auVar53 >> 7,0) & 1) != 0 ||
                             (SUB161(auVar53 >> 0xf,0) & 1) != 0) ||
                            (SUB161(auVar53 >> 0x17,0) & 1) != 0) ||
                           (SUB161(auVar53 >> 0x1f,0) & 1) != 0) ||
                          (SUB161(auVar53 >> 0x27,0) & 1) != 0) ||
                         (SUB161(auVar53 >> 0x2f,0) & 1) != 0) ||
                        (SUB161(auVar53 >> 0x37,0) & 1) != 0) ||
                       (SUB161(auVar53 >> 0x3f,0) & 1) != 0) || (SUB161(auVar53 >> 0x47,0) & 1) != 0
                      ) || (SUB161(auVar53 >> 0x4f,0) & 1) != 0) ||
                    (SUB161(auVar53 >> 0x57,0) & 1) != 0) || (SUB161(auVar53 >> 0x5f,0) & 1) != 0)
                  || (SUB161(auVar53 >> 0x67,0) & 1) != 0) || (SUB161(auVar53 >> 0x6f,0) & 1) != 0)
                || (SUB161(auVar53 >> 0x77,0) & 1) != 0) || auVar53[0xf] < '\0') break;
            uVar21 = uVar21 + uVar19 + 0x10;
            uVar19 = uVar19 + 0x10;
          }
        }
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_143007f20);
      }
      puStack_1b0 = (ulonglong *)unaff_RSI[2];
      puStack_1a8 = (ulonglong *)unaff_RSI[3];
      puStack_1c0 = (ulonglong *)*unaff_RSI;
      puStack_1b8 = (ulonglong *)unaff_RSI[1];
      pdb_140f04aa0(&puStack_1c8,&UNK_143007f38);
    } while( true );
  }
  if (uStack_d8 != (undefined1 (*) [16])0x0) {
    pub_1406abac0((byte *)pauStack_150,(longlong)uStack_d8 << 3,8);
  }
  if (cStack_c2 == '\0') {
    return;
  }
  plVar22 = (longlong *)pdb_140e97000();
  if (((char)plVar22[0xd] == '\x01') ||
     (plVar22 = (longlong *)pdb_142dd9610(plVar22,0), plVar22 != (longlong *)0x0)) {
    if (*plVar22 == 0) {
      *plVar22 = -1;
      plStack_158 = plVar22;
      pdb_140e95370(plVar22 + 1);
      *plStack_158 = *plStack_158 + 1;
      return;
    }
LAB_140810052:
    plVar22 = (longlong *)pdb_142dc8090(&UNK_1433079b0);
LAB_14081005e:
    plVar22 = (longlong *)pdb_142dd9610(plVar22,0);
    if (plVar22 != (longlong *)0x0) goto LAB_14080ecf6;
  }
  pdb_142dc7890();
LAB_14081007e:
  cVar16 = pdb_142dc79e0();
  if (cVar16 == '\0') {
    DAT_143ca41c1 = '\x01';
  }
  goto LAB_14080ee59;
LAB_14080f980:
  uVar21 = uVar21 & uVar19;
  auVar54 = *(undefined1 (*) [16])(lVar20 + uVar21);
  auVar55[0] = -(auVar54[0] == auVar48[0]);
  auVar55[1] = -(auVar54[1] == auVar48[1]);
  auVar55[2] = -(auVar54[2] == auVar48[2]);
  auVar55[3] = -(auVar54[3] == auVar48[3]);
  auVar55[4] = -(auVar54[4] == auVar48[4]);
  auVar55[5] = -(auVar54[5] == auVar48[5]);
  auVar55[6] = -(auVar54[6] == auVar48[6]);
  auVar55[7] = -(auVar54[7] == auVar48[7]);
  auVar55[8] = -(auVar54[8] == auVar48[0]);
  auVar55[9] = -(auVar54[9] == auVar48[1]);
  auVar55[10] = -(auVar54[10] == auVar48[2]);
  auVar55[0xb] = -(auVar54[0xb] == auVar48[3]);
  auVar55[0xc] = -(auVar54[0xc] == auVar48[4]);
  auVar55[0xd] = -(auVar54[0xd] == auVar48[5]);
  auVar55[0xe] = -(auVar54[0xe] == auVar48[6]);
  auVar55[0xf] = -(auVar54[0xf] == auVar48[7]);
  uVar38 = (ushort)(SUB161(auVar55 >> 7,0) & 1) | (ushort)(SUB161(auVar55 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar55 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar55 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar55 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar55 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar55 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar55 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar55 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar55 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar55 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar55 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar55 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar55 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar55 >> 0x77,0) & 1) << 0xe | (ushort)(auVar55[0xf] >> 7) << 0xf;
  uVar17 = (uint)uVar38;
  while (uVar38 != 0) {
    uVar32 = 0;
    for (uVar13 = uVar17; (uVar13 & 1) == 0; uVar13 = uVar13 >> 1 | 0x80000000) {
      uVar32 = uVar32 + 1;
    }
    lVar37 = (uVar32 + uVar21 & uVar19) * -0x68;
    if (puStack_d0 == (ulonglong *)*(longlong **)(lVar20 + -0x68 + lVar37)) {
      uVar24 = pdb_140c2abc0(lVar20 + lVar37 + -0x60);
      uVar24 = pdb_140c2b5c0(uVar24);
      goto LAB_14080fdce;
    }
    uVar38 = (ushort)(uVar17 - 1) & (ushort)uVar17;
    uVar17 = CONCAT22((short)(uVar17 - 1 >> 0x10),uVar38);
  }
  auVar52[0] = -(auVar54[0] == -1);
  auVar52[1] = -(auVar54[1] == -1);
  auVar52[2] = -(auVar54[2] == -1);
  auVar52[3] = -(auVar54[3] == -1);
  auVar52[4] = -(auVar54[4] == -1);
  auVar52[5] = -(auVar54[5] == -1);
  auVar52[6] = -(auVar54[6] == -1);
  auVar52[7] = -(auVar54[7] == -1);
  auVar52[8] = -(auVar54[8] == -1);
  auVar52[9] = -(auVar54[9] == -1);
  auVar52[10] = -(auVar54[10] == -1);
  auVar52[0xb] = -(auVar54[0xb] == -1);
  auVar52[0xc] = -(auVar54[0xc] == -1);
  auVar52[0xd] = -(auVar54[0xd] == -1);
  auVar52[0xe] = -(auVar54[0xe] == -1);
  auVar52[0xf] = -(auVar54[0xf] == -1);
  if ((((((((((((((((SUB161(auVar52 >> 7,0) & 1) != 0 || (SUB161(auVar52 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar52 >> 0x17,0) & 1) != 0) || (SUB161(auVar52 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar52 >> 0x27,0) & 1) != 0) || (SUB161(auVar52 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar52 >> 0x37,0) & 1) != 0) || (SUB161(auVar52 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar52 >> 0x47,0) & 1) != 0) || (SUB161(auVar52 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar52 >> 0x57,0) & 1) != 0) || (SUB161(auVar52 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar52 >> 0x67,0) & 1) != 0) || (SUB161(auVar52 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar52 >> 0x77,0) & 1) != 0) || auVar52[0xf] < '\0') goto LAB_14080fdcc;
  uVar21 = uVar21 + lVar25 + 0x10;
  lVar25 = lVar25 + 0x10;
  goto LAB_14080f980;
LAB_14080fdcc:
  uVar24 = 0;
LAB_14080fdce:
  pauVar33 = (undefined1 (*) [16])(pauVar33[-0x2b] + 8);
  pdb_141456da0(plStack_158,param_2,puStack_160,param_6,unaff_RSI,&uStack_1a0,pauVar33,uVar24,uVar19
               );
  goto LAB_14080fa00;
}

