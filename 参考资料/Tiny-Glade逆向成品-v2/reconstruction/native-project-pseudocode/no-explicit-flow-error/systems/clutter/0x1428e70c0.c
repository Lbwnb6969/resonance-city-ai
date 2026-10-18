// VA 0x1428e70c0, PDB extent 3043 bytes
// system_clutter::autoclutter::add_birdnests::add_birdnests
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/clutter/src/autoclutter/add_birdnests.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_clutter::autoclutter::add_birdnests::add_birdnests
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/clutter/src/autoclutter/add_birdnests.rs
   Extent: 3043 */

void pdb_1428e70c0(undefined8 param_1,ulonglong *param_2,undefined8 *param_3,undefined8 param_4,
                  longlong *param_5,longlong *param_6,longlong *param_7,longlong *param_8)

{
  byte *pbVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  byte bVar4;
  undefined1 (*pauVar5) [16];
  longlong *plVar6;
  code *pcVar7;
  uint uVar8;
  undefined1 auVar9 [16];
  ulonglong uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  char cVar13;
  undefined1 uVar14;
  uint uVar15;
  undefined4 uVar16;
  longlong lVar17;
  ulonglong uVar18;
  ulonglong *puVar19;
  ulonglong uVar20;
  longlong *plVar21;
  longlong lVar22;
  int iVar23;
  ulonglong *puVar24;
  uint *puVar25;
  ulonglong *puVar26;
  uint uVar27;
  undefined *puVar28;
  ulonglong uVar29;
  ulonglong *puVar30;
  ulonglong uVar31;
  undefined1 (*pauVar32) [16];
  ushort uVar33;
  undefined *puVar34;
  byte bVar35;
  longlong lVar36;
  undefined *puVar37;
  byte bVar38;
  undefined8 uVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  float fVar45;
  char unaff_XMM8_Ba;
  char unaff_XMM8_Bb;
  char unaff_XMM8_Bc;
  char unaff_XMM8_Bd;
  char unaff_XMM8_Be;
  char unaff_XMM8_Bf;
  char unaff_XMM8_Bg;
  char unaff_XMM8_Bh;
  char unaff_XMM8_Bi;
  char unaff_XMM8_Bj;
  char unaff_XMM8_Bk;
  char unaff_XMM8_Bl;
  char unaff_XMM8_Bm;
  char unaff_XMM8_Bn;
  char unaff_XMM8_Bo;
  char unaff_XMM8_Bp;
  ulonglong auStack_720 [64];
  undefined8 uStack_520;
  undefined4 uStack_518;
  undefined8 uStack_320;
  uint uStack_318;
  undefined4 uStack_314;
  ulonglong uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  ulonglong uStack_2f8;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined8 uStack_2e8;
  ulonglong uStack_2e0;
  ulonglong uStack_2d8;
  float fStack_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  longlong *plStack_118;
  undefined8 uStack_110;
  ulonglong *puStack_108;
  ulonglong *puStack_f0;
  longlong lStack_e8;
  longlong lStack_e0;
  undefined8 uStack_d8;
  undefined4 *puStack_d0;
  longlong *plStack_c8;
  longlong lStack_c0;
  undefined8 uStack_b8;
  longlong *plStack_b0;
  ulonglong uStack_a8;
  float fStack_a0;
  undefined4 uStack_9c;
  ulonglong *puStack_98;
  undefined8 uStack_90;
  
  uStack_90 = 0xfffffffffffffffe;
  puVar24 = param_2;
  uStack_d8 = param_1;
  cVar13 = pdb_140e94b40();
  if (cVar13 == '\0') {
    lStack_c0 = 0;
  }
  else {
    lVar36 = 0x39;
    lVar17 = pdb_1428e7fe0(0x39);
    puVar37 = &UNK_1435b2088;
    if (lVar17 == 1) {
      if ((ulonglong *)0x39 < puVar24) {
LAB_1428e79e6:
        pdb_142dc8070(&UNK_1435b2088,0x39,0);
LAB_1428e7a06:
        pdb_142dc8070(&UNK_1435b2088,0x39);
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar18 = pdb_1428e7fe0(puVar24);
      if ((uVar18 & 1) != 0) {
        if (0x39 < (longlong)puVar24 + 2U) goto LAB_1428e7a06;
        lVar36 = 0x37 - (longlong)puVar24;
        puVar37 = &UNK_1435b208a + (longlong)puVar24;
      }
    }
    puVar28 = &UNK_1435b200f;
    puVar34 = &UNK_1435b1fd8;
    do {
      bVar35 = puVar28[-1];
      uVar15 = (uint)(char)bVar35;
      if ((char)bVar35 < '\0') {
        bVar38 = puVar28[-2];
        if ((char)bVar38 < -0x40) {
          bVar4 = puVar28[-3];
          if ((char)bVar4 < -0x40) {
            pbVar1 = puVar28 + -4;
            puVar28 = puVar28 + -4;
            uVar15 = bVar4 & 0x3f | (*pbVar1 & 7) << 6;
          }
          else {
            puVar28 = puVar28 + -3;
            uVar15 = bVar4 & 0xf;
          }
          uVar15 = bVar38 & 0x3f | uVar15 << 6;
        }
        else {
          puVar28 = puVar28 + -2;
          uVar15 = bVar38 & 0x1f;
        }
        uVar15 = (uint)(bVar35 & 0x3f) | uVar15 << 6;
        if (uVar15 != 0x5c) goto LAB_1428e7204;
LAB_1428e721c:
        puVar34 = puVar28 + -0x1435b1fd7;
        if ((undefined *)0x37 < puVar34) {
          pdb_142dc8070(&UNK_1435b1fd8,0x37,puVar34,0x37,&UNK_1435b2128);
          goto LAB_1428e79e6;
        }
        puVar24 = (ulonglong *)(0x37 - (longlong)puVar34);
        puVar34 = puVar28 + 1;
        goto LAB_1428e723e;
      }
      puVar28 = puVar28 + -1;
      if (uVar15 == 0x5c) goto LAB_1428e721c;
LAB_1428e7204:
      if (uVar15 == 0x2f) goto LAB_1428e721c;
    } while (puVar28 != &UNK_1435b1fd8);
    puVar24 = (ulonglong *)0x37;
LAB_1428e723e:
    puVar19 = (ulonglong *)pdb_140e97000();
    if ((char)puVar19[0xd] != '\x01') {
      puVar19 = (ulonglong *)pdb_142e16b00(puVar19,0);
      if (puVar19 == (ulonglong *)0x0) {
LAB_1428e798b:
        uVar39 = pdb_142dc7890(&UNK_14328b3f8);
LAB_1428e7998:
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(uVar39,0x40,&UNK_1435b1f88);
      }
    }
    if (*puVar19 != 0) goto LAB_1428e7948;
    *puVar19 = 0xffffffffffffffff;
    puStack_98 = puVar19;
    uStack_b8 = pdb_140e94f10(puVar19 + 1,puVar37,lVar36,puVar34,puVar24,1,0);
    *puStack_98 = *puStack_98 + 1;
    lStack_c0 = 1;
  }
  *(undefined4 *)param_3[2] = *(undefined4 *)((longlong)param_3 + 0x1c);
  pdb_14147fe80(&puStack_f0,*param_3);
  puStack_98 = puStack_f0;
  if ((puStack_f0 == (ulonglong *)0x0) || (lStack_e8 == 0)) {
    iVar23 = 0;
  }
  else {
    pub_142e32760(&uStack_318,lStack_e8,0x200);
    iVar23 = 1;
  }
  uStack_320._4_4_ = 0;
  uStack_320._0_4_ = iVar23;
  pdb_140a84d70(&uStack_520);
  puVar25 = (uint *)&uStack_520;
  if (iVar23 != 0) {
    puVar25 = &uStack_318;
  }
  pub_142e32760(auStack_720,puVar25,0x200);
  puVar24 = puStack_98;
  if (puStack_98 == (ulonglong *)0x0) goto LAB_1428e73a3;
  pdb_140e9a350(puStack_98);
  pdb_140e9a350((ulonglong)puVar24 | 1);
  LOCK();
  uVar18 = *puVar24;
  *puVar24 = *puVar24 - 0x10;
  UNLOCK();
  if ((uVar18 & 0xfffffffffffffff2) == 0x12) goto LAB_1428e7955;
  do {
    lVar17 = lStack_e0;
    lStack_e0 = 0;
    uStack_320 = lVar17 + -0x10;
    LOCK();
    plVar21 = (longlong *)(lVar17 + -0x10);
    *plVar21 = *plVar21 + -1;
    UNLOCK();
    if (*plVar21 == 0) {
      pdb_140c7ba10(&uStack_320);
    }
LAB_1428e73a3:
    uVar12 = _UNK_142e47bfc;
    uVar11 = _UNK_142e47bf8;
    puVar19 = *(ulonglong **)(*param_6 + 8);
    puStack_98 = puVar19 + *(longlong *)(*param_6 + 0x10) * 8;
    plVar21 = (longlong *)*param_8;
    uStack_9c = *(undefined4 *)((longlong)param_2 + 0x1c);
    uVar18 = *param_2;
    puStack_d0 = (undefined4 *)param_2[2];
    plStack_b0 = param_7 + 4;
    fVar45 = (float)_DAT_1435b1ec0;
    uVar10 = (ulonglong)_DAT_1435b1ec0 >> 0x20;
    iVar23 = -(uint)(CONCAT13(unaff_XMM8_Bd,
                              CONCAT12(unaff_XMM8_Bc,CONCAT11(unaff_XMM8_Bb,unaff_XMM8_Ba))) ==
                    CONCAT13(unaff_XMM8_Bd,
                             CONCAT12(unaff_XMM8_Bc,CONCAT11(unaff_XMM8_Bb,unaff_XMM8_Ba))));
    unaff_XMM8_Ba = (char)iVar23;
    unaff_XMM8_Bb = (char)((uint)iVar23 >> 8);
    unaff_XMM8_Bc = (char)((uint)iVar23 >> 0x10);
    unaff_XMM8_Bd = (char)((uint)iVar23 >> 0x18);
    iVar23 = -(uint)(CONCAT13(unaff_XMM8_Bh,
                              CONCAT12(unaff_XMM8_Bg,CONCAT11(unaff_XMM8_Bf,unaff_XMM8_Be))) ==
                    CONCAT13(unaff_XMM8_Bh,
                             CONCAT12(unaff_XMM8_Bg,CONCAT11(unaff_XMM8_Bf,unaff_XMM8_Be))));
    unaff_XMM8_Be = (char)iVar23;
    unaff_XMM8_Bf = (char)((uint)iVar23 >> 8);
    unaff_XMM8_Bg = (char)((uint)iVar23 >> 0x10);
    unaff_XMM8_Bh = (char)((uint)iVar23 >> 0x18);
    iVar23 = -(uint)(CONCAT13(unaff_XMM8_Bl,
                              CONCAT12(unaff_XMM8_Bk,CONCAT11(unaff_XMM8_Bj,unaff_XMM8_Bi))) ==
                    CONCAT13(unaff_XMM8_Bl,
                             CONCAT12(unaff_XMM8_Bk,CONCAT11(unaff_XMM8_Bj,unaff_XMM8_Bi))));
    unaff_XMM8_Bi = (char)iVar23;
    unaff_XMM8_Bj = (char)((uint)iVar23 >> 8);
    unaff_XMM8_Bk = (char)((uint)iVar23 >> 0x10);
    unaff_XMM8_Bl = (char)((uint)iVar23 >> 0x18);
    iVar23 = -(uint)(CONCAT13(unaff_XMM8_Bp,
                              CONCAT12(unaff_XMM8_Bo,CONCAT11(unaff_XMM8_Bn,unaff_XMM8_Bm))) ==
                    CONCAT13(unaff_XMM8_Bp,
                             CONCAT12(unaff_XMM8_Bo,CONCAT11(unaff_XMM8_Bn,unaff_XMM8_Bm))));
    unaff_XMM8_Bm = (char)iVar23;
    unaff_XMM8_Bn = (char)((uint)iVar23 >> 8);
    unaff_XMM8_Bo = (char)((uint)iVar23 >> 0x10);
    unaff_XMM8_Bp = (char)((uint)iVar23 >> 0x18);
LAB_1428e7480:
    puVar26 = puVar19;
    if (puVar26 != puStack_98) {
      puVar19 = puVar26 + 8;
      param_2 = puVar26 + 2;
      puVar24 = puVar26;
      if (plVar21[3] != 0) {
        uVar20 = pdb_14216e010(plVar21 + 4,param_2);
        bVar35 = (byte)(uVar20 >> 0x39);
        auVar40 = ZEXT216(CONCAT11(bVar35,bVar35));
        auVar40 = pshuflw(auVar40,auVar40,0);
        lVar17 = 0;
        while( true ) {
          uVar20 = uVar20 & plVar21[1];
          auVar3 = *(undefined1 (*) [16])(*plVar21 + uVar20);
          auVar43[0] = -(auVar3[0] == auVar40[0]);
          auVar43[1] = -(auVar3[1] == auVar40[1]);
          auVar43[2] = -(auVar3[2] == auVar40[2]);
          auVar43[3] = -(auVar3[3] == auVar40[3]);
          auVar43[4] = -(auVar3[4] == auVar40[4]);
          auVar43[5] = -(auVar3[5] == auVar40[5]);
          auVar43[6] = -(auVar3[6] == auVar40[6]);
          auVar43[7] = -(auVar3[7] == auVar40[7]);
          auVar43[8] = -(auVar3[8] == auVar40[0]);
          auVar43[9] = -(auVar3[9] == auVar40[1]);
          auVar43[10] = -(auVar3[10] == auVar40[2]);
          auVar43[0xb] = -(auVar3[0xb] == auVar40[3]);
          auVar43[0xc] = -(auVar3[0xc] == auVar40[4]);
          auVar43[0xd] = -(auVar3[0xd] == auVar40[5]);
          auVar43[0xe] = -(auVar3[0xe] == auVar40[6]);
          auVar43[0xf] = -(auVar3[0xf] == auVar40[7]);
          uVar33 = (ushort)(SUB161(auVar43 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar43 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar43 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar43 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar43 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar43 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar43 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar43 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar43 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar43 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar43 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar43 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar43 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar43 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar43 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar43[0xf] >> 7) << 0xf;
          uVar15 = (uint)uVar33;
          while (uVar33 != 0) {
            uVar27 = 0;
            for (uVar8 = uVar15; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
              uVar27 = uVar27 + 1;
            }
            if (*param_2 == *(ulonglong *)(*plVar21 + (uVar27 + uVar20 & plVar21[1]) * -8 + -8))
            goto LAB_1428e7480;
            uVar33 = (ushort)(uVar15 - 1) & (ushort)uVar15;
            uVar15 = CONCAT22((short)(uVar15 - 1 >> 0x10),uVar33);
          }
          auVar41[0] = -(auVar3[0] == unaff_XMM8_Ba);
          auVar41[1] = -(auVar3[1] == unaff_XMM8_Bb);
          auVar41[2] = -(auVar3[2] == unaff_XMM8_Bc);
          auVar41[3] = -(auVar3[3] == unaff_XMM8_Bd);
          auVar41[4] = -(auVar3[4] == unaff_XMM8_Be);
          auVar41[5] = -(auVar3[5] == unaff_XMM8_Bf);
          auVar41[6] = -(auVar3[6] == unaff_XMM8_Bg);
          auVar41[7] = -(auVar3[7] == unaff_XMM8_Bh);
          auVar41[8] = -(auVar3[8] == unaff_XMM8_Bi);
          auVar41[9] = -(auVar3[9] == unaff_XMM8_Bj);
          auVar41[10] = -(auVar3[10] == unaff_XMM8_Bk);
          auVar41[0xb] = -(auVar3[0xb] == unaff_XMM8_Bl);
          auVar41[0xc] = -(auVar3[0xc] == unaff_XMM8_Bm);
          auVar41[0xd] = -(auVar3[0xd] == unaff_XMM8_Bn);
          auVar41[0xe] = -(auVar3[0xe] == unaff_XMM8_Bo);
          auVar41[0xf] = -(auVar3[0xf] == unaff_XMM8_Bp);
          if ((((((((((((((((SUB161(auVar41 >> 7,0) & 1) != 0 || (SUB161(auVar41 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar41 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar41 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar41 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar41 >> 0x2f,0) & 1) != 0) || (SUB161(auVar41 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar41 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar41 >> 0x47,0) & 1) != 0) || (SUB161(auVar41 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar41 >> 0x57,0) & 1) != 0) || (SUB161(auVar41 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar41 >> 0x67,0) & 1) != 0) || (SUB161(auVar41 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar41 >> 0x77,0) & 1) != 0) || auVar41[0xf] < '\0') break;
          uVar20 = uVar20 + lVar17 + 0x10;
          lVar17 = lVar17 + 0x10;
        }
      }
      fStack_a0 = *(float *)(puVar26 + 6) + 0.0;
      uStack_a8 = CONCAT44((float)(puVar26[5] >> 0x20) + (float)uVar10,(float)puVar26[5] + fVar45);
      plStack_118 = param_5;
      uStack_110 = uStack_d8;
      puStack_108 = &uStack_a8;
      uVar39 = pdb_140a836c0(&uStack_320);
      if ((char)uStack_320 == '\0') {
LAB_1428e75b0:
        uVar20 = *param_2;
        uStack_320._0_4_ = (int)uVar20;
        uStack_320._4_4_ = (uint)(uVar20 >> 0x20);
        param_2 = (ulonglong *)pdb_14216e010(plStack_b0);
        bVar35 = (byte)((ulonglong)param_2 >> 0x38);
        bVar38 = bVar35 >> 1;
        auVar40 = ZEXT216(CONCAT11(bVar38,bVar38));
        auVar40 = pshuflw(auVar40,auVar40,0);
        lVar17 = 0;
        puVar30 = param_2;
        while( true ) {
          uVar29 = (ulonglong)puVar30 & param_7[1];
          auVar3 = *(undefined1 (*) [16])(*param_7 + uVar29);
          auVar44[0] = -(auVar3[0] == auVar40[0]);
          auVar44[1] = -(auVar3[1] == auVar40[1]);
          auVar44[2] = -(auVar3[2] == auVar40[2]);
          auVar44[3] = -(auVar3[3] == auVar40[3]);
          auVar44[4] = -(auVar3[4] == auVar40[4]);
          auVar44[5] = -(auVar3[5] == auVar40[5]);
          auVar44[6] = -(auVar3[6] == auVar40[6]);
          auVar44[7] = -(auVar3[7] == auVar40[7]);
          auVar44[8] = -(auVar3[8] == auVar40[0]);
          auVar44[9] = -(auVar3[9] == auVar40[1]);
          auVar44[10] = -(auVar3[10] == auVar40[2]);
          auVar44[0xb] = -(auVar3[0xb] == auVar40[3]);
          auVar44[0xc] = -(auVar3[0xc] == auVar40[4]);
          auVar44[0xd] = -(auVar3[0xd] == auVar40[5]);
          auVar44[0xe] = -(auVar3[0xe] == auVar40[6]);
          auVar44[0xf] = -(auVar3[0xf] == auVar40[7]);
          uVar33 = (ushort)(SUB161(auVar44 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar44 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar44 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar44 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar44 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar44 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar44 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar44 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar44 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar44 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar44 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar44 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar44 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar44 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar44 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar44[0xf] >> 7) << 0xf;
          uVar15 = (uint)uVar33;
          while (uVar33 != 0) {
            uVar27 = 0;
            for (uVar8 = uVar15; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
              uVar27 = uVar27 + 1;
            }
            pauVar32 = (undefined1 (*) [16])(*param_7 + (uVar27 + uVar29 & param_7[1]) * -0x10);
            if (*(ulonglong *)pauVar32[-1] == uVar20) goto LAB_1428e7714;
            uVar33 = (ushort)(uVar15 - 1) & (ushort)uVar15;
            uVar15 = CONCAT22((short)(uVar15 - 1 >> 0x10),uVar33);
          }
          auVar42[0] = -(auVar3[0] == unaff_XMM8_Ba);
          auVar42[1] = -(auVar3[1] == unaff_XMM8_Bb);
          auVar42[2] = -(auVar3[2] == unaff_XMM8_Bc);
          auVar42[3] = -(auVar3[3] == unaff_XMM8_Bd);
          auVar42[4] = -(auVar3[4] == unaff_XMM8_Be);
          auVar42[5] = -(auVar3[5] == unaff_XMM8_Bf);
          auVar42[6] = -(auVar3[6] == unaff_XMM8_Bg);
          auVar42[7] = -(auVar3[7] == unaff_XMM8_Bh);
          auVar42[8] = -(auVar3[8] == unaff_XMM8_Bi);
          auVar42[9] = -(auVar3[9] == unaff_XMM8_Bj);
          auVar42[10] = -(auVar3[10] == unaff_XMM8_Bk);
          auVar42[0xb] = -(auVar3[0xb] == unaff_XMM8_Bl);
          auVar42[0xc] = -(auVar3[0xc] == unaff_XMM8_Bm);
          auVar42[0xd] = -(auVar3[0xd] == unaff_XMM8_Bn);
          auVar42[0xe] = -(auVar3[0xe] == unaff_XMM8_Bo);
          auVar42[0xf] = -(auVar3[0xf] == unaff_XMM8_Bp);
          uVar33 = (ushort)(SUB161(auVar42 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar42 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar42 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar42 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar42 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar42 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar42 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar42 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar42 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar42 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar42 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar42 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar42 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar42 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar42 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar42[0xf] >> 7) << 0xf;
          if (uVar33 != 0) break;
          puVar30 = (ulonglong *)(uVar29 + lVar17 + 0x10);
          lVar17 = lVar17 + 0x10;
        }
        if (param_7[2] == 0) {
          pdb_142dcb4a0(param_7,1,plStack_b0,CONCAT71((uint7)(byte)(uVar33 >> 8),1));
        }
        uVar14 = pdb_1428e7cb0(&plStack_118);
        pauVar5 = (undefined1 (*) [16])*param_7;
        uVar29 = param_7[1];
        param_2 = (ulonglong *)((ulonglong)param_2 & uVar29);
        auVar40 = *(undefined1 (*) [16])(*pauVar5 + (longlong)param_2);
        uVar33 = (ushort)(SUB161(auVar40 >> 7,0) & 1) | (ushort)(SUB161(auVar40 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar40 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar40 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar40 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar40 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar40 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar40 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar40 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar40 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar40 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar40 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar40 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar40 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar40 >> 0x77,0) & 1) << 0xe |
                 (ushort)(byte)(auVar40[0xf] >> 7) << 0xf;
        uVar15 = (uint)uVar33;
        if (uVar33 == 0) {
          lVar17 = 0x10;
          do {
            param_2 = (ulonglong *)((longlong)param_2 + lVar17 & uVar29);
            auVar40 = *(undefined1 (*) [16])(*pauVar5 + (longlong)param_2);
            lVar17 = lVar17 + 0x10;
            uVar15 = (uint)(ushort)((ushort)(SUB161(auVar40 >> 7,0) & 1) |
                                    (ushort)(SUB161(auVar40 >> 0xf,0) & 1) << 1 |
                                    (ushort)(SUB161(auVar40 >> 0x17,0) & 1) << 2 |
                                    (ushort)(SUB161(auVar40 >> 0x1f,0) & 1) << 3 |
                                    (ushort)(SUB161(auVar40 >> 0x27,0) & 1) << 4 |
                                    (ushort)(SUB161(auVar40 >> 0x2f,0) & 1) << 5 |
                                    (ushort)(SUB161(auVar40 >> 0x37,0) & 1) << 6 |
                                    (ushort)(SUB161(auVar40 >> 0x3f,0) & 1) << 7 |
                                    (ushort)(SUB161(auVar40 >> 0x47,0) & 1) << 8 |
                                    (ushort)(SUB161(auVar40 >> 0x4f,0) & 1) << 9 |
                                    (ushort)(SUB161(auVar40 >> 0x57,0) & 1) << 10 |
                                    (ushort)(SUB161(auVar40 >> 0x5f,0) & 1) << 0xb |
                                    (ushort)(SUB161(auVar40 >> 0x67,0) & 1) << 0xc |
                                    (ushort)(SUB161(auVar40 >> 0x6f,0) & 1) << 0xd |
                                    (ushort)(SUB161(auVar40 >> 0x77,0) & 1) << 0xe |
                                   (ushort)(byte)(auVar40[0xf] >> 7) << 0xf);
          } while (uVar15 == 0);
        }
        uVar27 = 0;
        for (; (uVar15 & 1) == 0; uVar15 = uVar15 >> 1 | 0x80000000) {
          uVar27 = uVar27 + 1;
        }
        uVar31 = (ulonglong)uVar27 + (longlong)param_2 & uVar29;
        bVar38 = (*pauVar5)[uVar31];
        if (-1 < (char)bVar38) {
          auVar40 = *pauVar5;
          uVar15 = 0;
          for (uVar27 = (uint)(ushort)((ushort)(SUB161(auVar40 >> 7,0) & 1) |
                                       (ushort)(SUB161(auVar40 >> 0xf,0) & 1) << 1 |
                                       (ushort)(SUB161(auVar40 >> 0x17,0) & 1) << 2 |
                                       (ushort)(SUB161(auVar40 >> 0x1f,0) & 1) << 3 |
                                       (ushort)(SUB161(auVar40 >> 0x27,0) & 1) << 4 |
                                       (ushort)(SUB161(auVar40 >> 0x2f,0) & 1) << 5 |
                                       (ushort)(SUB161(auVar40 >> 0x37,0) & 1) << 6 |
                                       (ushort)(SUB161(auVar40 >> 0x3f,0) & 1) << 7 |
                                       (ushort)(SUB161(auVar40 >> 0x47,0) & 1) << 8 |
                                       (ushort)(SUB161(auVar40 >> 0x4f,0) & 1) << 9 |
                                       (ushort)(SUB161(auVar40 >> 0x57,0) & 1) << 10 |
                                       (ushort)(SUB161(auVar40 >> 0x5f,0) & 1) << 0xb |
                                       (ushort)(SUB161(auVar40 >> 0x67,0) & 1) << 0xc |
                                       (ushort)(SUB161(auVar40 >> 0x6f,0) & 1) << 0xd |
                                       (ushort)(SUB161(auVar40 >> 0x77,0) & 1) << 0xe |
                                      (ushort)(byte)(auVar40[0xf] >> 7) << 0xf); (uVar27 & 1) == 0;
              uVar27 = uVar27 >> 1 | 0x80000000) {
            uVar15 = uVar15 + 1;
          }
          uVar31 = (ulonglong)uVar15;
          bVar38 = (*pauVar5)[uVar31];
        }
        bVar35 = bVar35 >> 1;
        (*pauVar5)[uVar31] = bVar35;
        pauVar5[1][uVar31 - 0x10 & uVar29] = bVar35;
        pauVar32 = pauVar5 + -uVar31;
        *(ulonglong *)pauVar5[-1 - uVar31] = uVar20;
        pauVar32[-1][8] = uVar14;
        auVar40._8_4_ = uVar11;
        auVar40._0_8_ = (ulonglong)bVar38 & 0xffffffffffffff01;
        auVar40._12_4_ = uVar12;
        param_7[2] = param_7[2] - ((ulonglong)bVar38 & 0xffffffffffffff01);
        param_7[3] = param_7[3] - auVar40._8_8_;
LAB_1428e7714:
        cVar13 = pauVar32[-1][8];
      }
      else {
        if (uStack_318 >> 6 != 0) goto LAB_1428e7998;
        if (uStack_320._4_4_ >> 6 != 0) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uStack_320._4_4_ >> 6,1,&UNK_1435b1f88);
        }
        if ((auStack_720[uStack_318] >> ((ulonglong)uStack_320._4_4_ & 0x3f) & 1) == 0)
        goto LAB_1428e75b0;
        uVar16 = pdb_1428e7cb0(&plStack_118);
        cVar13 = (char)uVar16;
        pdb_14219c6b0(param_7,*param_2,uVar16);
      }
      if (cVar13 == '\0') {
        *puStack_d0 = uStack_9c;
        uVar20 = puVar26[2];
        uVar39 = *(undefined8 *)(*param_5 + 0x60);
        uStack_518 = *(undefined4 *)((longlong)puVar26 + 0x3c);
        uStack_520 = *(undefined8 *)((longlong)puVar26 + 0x34);
        plVar6 = (longlong *)*puVar26;
        uVar29 = puVar26[1];
        LOCK();
        lVar17 = *plVar6;
        *plVar6 = *plVar6 + 1;
        UNLOCK();
        if (*plVar6 == 0 || SCARRY8(lVar17,1) != *plVar6 < 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)invalidInstructionException();
          (*pcVar7)();
        }
        uStack_2f8 = puVar26[3];
        uStack_2cc = (undefined4)uStack_520;
        uStack_2c8 = (undefined4)((ulonglong)uStack_520 >> 0x20);
        uStack_2c0 = 0x3f800000;
        uVar15 = (uint)uStack_2f0 >> 8;
        uStack_2f0 = CONCAT31((int3)uVar15,3);
        uStack_2ec = 0;
        uStack_320._0_4_ = 4;
        uStack_320._4_4_ = 0;
        uStack_318 = (uint)plVar6;
        uStack_314 = (undefined4)((ulonglong)plVar6 >> 0x20);
        uStack_308 = 0;
        lVar17 = *(longlong *)(uVar18 + 0x58);
        uStack_310 = uVar29;
        uStack_2e8 = uVar39;
        uStack_2e0 = uVar20;
        uStack_2d8 = uStack_a8;
        fStack_2d0 = fStack_a0;
        uStack_2c4 = uStack_518;
        plStack_c8 = plVar6;
        if (lVar17 == *(longlong *)(uVar18 + 0x48)) {
          pdb_142d8d8d0(uVar18 + 0x48);
        }
        lVar36 = *(longlong *)(uVar18 + 0x50);
        lVar22 = lVar17 * 0x68;
        *(ulonglong *)(lVar36 + 0x60 + lVar22) = CONCAT44(uStack_2bc,uStack_2c0);
        puVar2 = (undefined8 *)(lVar36 + 0x50 + lVar22);
        *puVar2 = CONCAT44(uStack_2cc,fStack_2d0);
        puVar2[1] = CONCAT44(uStack_2c4,uStack_2c8);
        puVar24 = (ulonglong *)(lVar36 + 0x40 + lVar22);
        *puVar24 = uStack_2e0;
        puVar24[1] = uStack_2d8;
        auVar3._8_8_ = uStack_308;
        auVar3._0_8_ = uStack_310;
        auVar9._8_8_ = uStack_2f8;
        auVar9._0_8_ = uStack_300;
        puVar2 = (undefined8 *)(lVar36 + 0x30 + lVar22);
        *puVar2 = CONCAT44(uStack_2ec,uStack_2f0);
        puVar2[1] = uStack_2e8;
        *(undefined1 (*) [16])(lVar36 + 0x20 + lVar22) = auVar9;
        *(undefined1 (*) [16])(lVar36 + 0x10 + lVar22) = auVar3;
        *(longlong *)(lVar36 + lVar22) = uStack_320;
        ((longlong *)(lVar36 + lVar22))[1] = CONCAT44(uStack_314,uStack_318);
        puVar24 = (ulonglong *)(lVar17 + 1);
        *(ulonglong **)(uVar18 + 0x58) = puVar24;
      }
      goto LAB_1428e7480;
    }
    if (lStack_c0 == 0) {
      return;
    }
    plVar21 = (longlong *)pdb_140e97000();
    if ((char)plVar21[0xd] != '\x01') {
      plVar21 = (longlong *)pdb_142e16b00(plVar21,0);
      if (plVar21 == (longlong *)0x0) goto LAB_1428e798b;
    }
    if (*plVar21 == 0) {
      *plVar21 = -1;
      puStack_98 = (ulonglong *)plVar21;
      pdb_140e95370(plVar21 + 1,uStack_b8);
      *puStack_98 = *puStack_98 + 1;
      return;
    }
LAB_1428e7948:
    pdb_142dc8090(&UNK_14328b468);
LAB_1428e7955:
    pdb_142dbbf50(puVar24);
  } while( true );
}

