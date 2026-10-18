// VA 0x140a66e50, PDB extent 7666 bytes
// country_core::systems::steam::workshop_subscriptions::refresh_workshop_subscriptions
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/steam/workshop_subscriptions.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::steam::workshop_subscriptions::refresh_workshop_subscriptions
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/steam/workshop_subscriptions.rs
   Extent: 7666 */

void pdb_140a66e50(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,
                  undefined1 (*param_4) [16])

{
  char *pcVar1;
  undefined4 uVar2;
  longlong lVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  undefined1 (*pauVar12) [16];
  undefined1 uVar13;
  char cVar14;
  uint uVar15;
  undefined8 uVar16;
  undefined1 (*pauVar17) [16];
  undefined1 (*pauVar18) [16];
  longlong *plVar19;
  undefined8 *puVar20;
  undefined1 (*pauVar21) [16];
  byte *pbVar22;
  undefined *puVar23;
  undefined1 (*pauVar24) [16];
  undefined1 (**ppauVar25) [16];
  ulonglong uVar26;
  ulonglong uVar27;
  undefined *puVar28;
  longlong lVar29;
  ushort uVar30;
  byte *pbVar31;
  longlong lVar32;
  undefined8 uVar33;
  longlong lVar34;
  bool bVar35;
  undefined1 uVar36;
  byte bVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  char unaff_XMM6_Ba;
  char unaff_XMM6_Bb;
  char unaff_XMM6_Bc;
  char unaff_XMM6_Bd;
  char unaff_XMM6_Be;
  char unaff_XMM6_Bf;
  char unaff_XMM6_Bg;
  char unaff_XMM6_Bh;
  char unaff_XMM6_Bi;
  char unaff_XMM6_Bj;
  char unaff_XMM6_Bk;
  char unaff_XMM6_Bl;
  char unaff_XMM6_Bm;
  char unaff_XMM6_Bn;
  char unaff_XMM6_Bo;
  char unaff_XMM6_Bp;
  undefined1 uStack_210;
  longlong lStack_1e8;
  undefined8 *puStack_1e0;
  undefined1 (*pauStack_1d8) [16];
  undefined1 (*pauStack_1d0) [16];
  undefined1 auStack_1c8 [16];
  undefined1 (*pauStack_1b8) [16];
  undefined1 (**ppauStack_1b0) [16];
  undefined1 (*pauStack_1a8) [16];
  undefined1 (*pauStack_1a0) [16];
  undefined1 (*pauStack_198) [16];
  undefined *puStack_190;
  undefined1 (*pauStack_188) [16];
  undefined1 (*pauStack_180) [16];
  undefined1 (*pauStack_178) [16];
  undefined1 (*pauStack_170) [16];
  undefined1 (*pauStack_168) [16];
  longlong lStack_160;
  undefined1 (*pauStack_150) [16];
  undefined *puStack_148;
  undefined1 (*pauStack_140) [16];
  undefined1 (*pauStack_138) [16];
  undefined1 (*pauStack_130) [16];
  undefined1 (*pauStack_128) [16];
  undefined8 *puStack_118;
  undefined1 (*pauStack_110) [16];
  undefined1 (*pauStack_108) [16];
  undefined1 (*pauStack_100) [16];
  undefined1 (*pauStack_f8) [16];
  undefined1 (*pauStack_f0) [16];
  undefined1 (*pauStack_e8) [16];
  undefined1 (*pauStack_e0) [16];
  undefined1 (*pauStack_d8) [16];
  undefined1 (**ppauStack_d0) [16];
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined1 (**ppauStack_a0) [16];
  undefined1 (*pauStack_90) [16];
  undefined1 (*pauStack_88) [16];
  undefined *puStack_80;
  undefined1 (*pauStack_78) [16];
  undefined1 uStack_6b;
  undefined1 uStack_6a;
  undefined1 uStack_69;
  undefined1 uStack_68;
  undefined1 uStack_67;
  undefined1 uStack_66;
  undefined1 uStack_65;
  undefined1 uStack_64;
  undefined1 uStack_63;
  undefined1 uStack_62;
  undefined1 uStack_61;
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  if (DAT_143cb2d0c != '\0') {
    return;
  }
  lVar34 = *(longlong *)(*(longlong *)*param_4 + 0xa8);
  pcVar1 = (char *)(lVar34 + 0x10);
  LOCK();
  bVar35 = *(char *)(lVar34 + 0x10) == '\0';
  if (bVar35) {
    *(char *)(lVar34 + 0x10) = '\x01';
  }
  UNLOCK();
  puStack_118 = param_3;
  if (!bVar35) {
    pdb_142dbd1a0(pcVar1,param_2,1000000000);
  }
  pdb_140e9a150(pcVar1);
  pauVar24 = *(undefined1 (**) [16])(lVar34 + 0x18);
  pauVar18 = *(undefined1 (**) [16])(lVar34 + 0x20);
  auVar38 = *(undefined1 (*) [16])(lVar34 + 0x28);
  pauVar17 = *(undefined1 (**) [16])(lVar34 + 0x38);
  ppauVar25 = *(undefined1 (***) [16])(lVar34 + 0x40);
  *(undefined8 *)(lVar34 + 0x18) = 0x8000000000000001;
  uStack_61 = 1;
  pdb_140e9a350();
  LOCK();
  cVar14 = *pcVar1;
  if (cVar14 == '\x01') {
    *pcVar1 = '\0';
  }
  UNLOCK();
  if (cVar14 != '\x01') {
    uStack_61 = 1;
    pdb_142dbcef0(pcVar1,0);
  }
  uVar36 = pauVar24 == (undefined1 (*) [16])0x8000000000000001;
  if (!(bool)uVar36) {
    uStack_210 = SUB81(pauVar18,0);
    **(undefined4 **)param_4[1] = *(undefined4 *)(param_4[1] + 0xc);
    *(undefined1 *)(*(longlong *)*param_4 + 0x110) = 0;
    if (SBORROW8(0,(longlong)pauVar24)) {
      pauStack_188 = (undefined1 (*) [16])CONCAT71(pauStack_188._1_7_,uStack_210);
      if (3 < *_DAT_143ca8e90) {
        pauStack_1d8 = (undefined1 (*) [16])&pauStack_188;
        pauStack_1d0 = (undefined1 (*) [16])pdb_140cb3520;
        pauStack_f8 = (undefined1 (*) [16])0x0;
        pauStack_f0 = (undefined1 (*) [16])&UNK_1430407ce;
        pauStack_e8 = (undefined1 (*) [16])0x34;
        pauStack_e0 = (undefined1 (*) [16])0x0;
        pauStack_d8 = (undefined1 (*) [16])&UNK_14304078e;
        ppauStack_d0 = (undefined1 (**) [16])0x3f;
        uStack_c8 = 4;
        puStack_c0 = &UNK_1430407ce;
        uStack_b8 = 0x34;
        uStack_b0 = 0xa800000001;
        puStack_a8 = &UNK_1430408e6;
        ppauStack_a0 = &pauStack_1d8;
        uStack_61 = 0;
        pdb_140f332f0(&uStack_67,&pauStack_f8);
      }
    }
    else {
      auStack_1c8._0_8_ = auVar38._0_8_;
      uVar33 = auStack_1c8._0_8_;
      pauStack_78 = pauVar18 + auStack_1c8._0_8_ * 2;
      pauVar21 = pauVar18;
      pauStack_1d8 = pauVar24;
      pauStack_1d0 = pauVar18;
      auStack_1c8 = auVar38;
      pauStack_1b8 = pauVar17;
      ppauStack_1b0 = ppauVar25;
      pauStack_110 = pauVar18;
      if (pauVar18 != pauStack_78) {
        do {
          **(undefined4 **)param_4[1] = *(undefined4 *)(param_4[1] + 0xc);
          lVar34 = *(longlong *)*param_4;
          pauStack_110 = pauVar21;
          uVar16 = pdb_1400af0a0(lVar34 + 0x68,pauVar21);
          uStack_65 = 1;
          pdb_140caa210(lVar34 + 0x48,uVar16,pauVar21);
          pauStack_110 = pauStack_110 + 2;
          pauVar21 = pauStack_110;
        } while (pauStack_110 != pauStack_78);
      }
      **(undefined4 **)param_4[1] = *(undefined4 *)(param_4[1] + 0xc);
      lVar34 = *(longlong *)*param_4;
      pauStack_170 = pauVar18 + uVar33 * 2;
      uVar26 = uVar33 + 1 >> 1;
      if (*(longlong *)(lVar34 + 0x90) == 0) {
        uVar26 = uVar33;
      }
      puStack_1e0 = param_1;
      pauStack_188 = pauVar18;
      pauStack_180 = pauVar18;
      pauStack_178 = pauVar24;
      uStack_63 = uVar36;
      if (*(ulonglong *)(lVar34 + 0x88) < uVar26) {
        uStack_6a = 1;
        pdb_142d9a110(lVar34 + 0x78,uVar26,lVar34 + 0x98);
      }
      pauStack_e8 = pauStack_178;
      pauStack_e0 = pauStack_170;
      pauStack_f8 = pauStack_188;
      pauStack_f0 = pauStack_180;
      uStack_6a = 0;
      pdb_141b760a0(&pauStack_f8,lVar34 + 0x78);
      pauStack_108 = (undefined1 (*) [16])auStack_1c8._8_8_;
      lVar34 = (longlong)ppauStack_1b0 * 8;
      puVar23 = *pauStack_1b8;
      iVar7 = -(uint)(CONCAT13(unaff_XMM6_Bd,
                               CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))) ==
                     CONCAT13(unaff_XMM6_Bd,
                              CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))));
      unaff_XMM6_Ba = (char)iVar7;
      unaff_XMM6_Bb = (char)((uint)iVar7 >> 8);
      unaff_XMM6_Bc = (char)((uint)iVar7 >> 0x10);
      unaff_XMM6_Bd = (char)((uint)iVar7 >> 0x18);
      iVar7 = -(uint)(CONCAT13(unaff_XMM6_Bh,
                               CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be))) ==
                     CONCAT13(unaff_XMM6_Bh,
                              CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be))));
      unaff_XMM6_Be = (char)iVar7;
      unaff_XMM6_Bf = (char)((uint)iVar7 >> 8);
      unaff_XMM6_Bg = (char)((uint)iVar7 >> 0x10);
      unaff_XMM6_Bh = (char)((uint)iVar7 >> 0x18);
      iVar7 = -(uint)(CONCAT13(unaff_XMM6_Bl,
                               CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi))) ==
                     CONCAT13(unaff_XMM6_Bl,
                              CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi))));
      unaff_XMM6_Bi = (char)iVar7;
      unaff_XMM6_Bj = (char)((uint)iVar7 >> 8);
      unaff_XMM6_Bk = (char)((uint)iVar7 >> 0x10);
      unaff_XMM6_Bl = (char)((uint)iVar7 >> 0x18);
      iVar7 = -(uint)(CONCAT13(unaff_XMM6_Bp,
                               CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm))) ==
                     CONCAT13(unaff_XMM6_Bp,
                              CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm))));
      unaff_XMM6_Bm = (char)iVar7;
      unaff_XMM6_Bn = (char)((uint)iVar7 >> 8);
      unaff_XMM6_Bo = (char)((uint)iVar7 >> 0x10);
      unaff_XMM6_Bp = (char)((uint)iVar7 >> 0x18);
      pauStack_100 = pauStack_1b8;
      pauVar24 = pauStack_1b8;
LAB_140a67240:
      param_1 = puStack_1e0;
      if (pauVar24 != (undefined1 (*) [16])(puVar23 + lVar34)) {
        lVar3 = *(longlong *)*pauVar24;
        **(undefined4 **)param_4[1] = *(undefined4 *)(param_4[1] + 0xc);
        lStack_1e8 = lVar3;
        cVar14 = pdb_1403b05d0(*(longlong *)*param_4 + 0x48,lVar3);
        pauVar24 = (undefined1 (*) [16])(*pauVar24 + 8);
        if (cVar14 != '\0') {
          **(undefined4 **)param_4[1] = *(undefined4 *)(param_4[1] + 0xc);
          pdb_1403b05d0(*(longlong *)*param_4 + 0x18,lVar3);
          lVar3 = *(longlong *)*param_4;
          if (*(longlong *)(lVar3 + 0xf8) != 0) {
            uVar26 = pdb_1400af0a0(lVar3 + 0x100,&lStack_1e8);
            lVar32 = *(longlong *)(lVar3 + 0xe0);
            bVar37 = (byte)(uVar26 >> 0x39);
            auVar38 = ZEXT216(CONCAT11(bVar37,bVar37));
            auVar38 = pshuflw(auVar38,auVar38,0);
            lVar29 = 0;
            do {
              uVar26 = uVar26 & *(ulonglong *)(lVar3 + 0xe8);
              auVar42 = *(undefined1 (*) [16])(lVar32 + uVar26);
              auVar41[0] = -(auVar42[0] == auVar38[0]);
              auVar41[1] = -(auVar42[1] == auVar38[1]);
              auVar41[2] = -(auVar42[2] == auVar38[2]);
              auVar41[3] = -(auVar42[3] == auVar38[3]);
              auVar41[4] = -(auVar42[4] == auVar38[4]);
              auVar41[5] = -(auVar42[5] == auVar38[5]);
              auVar41[6] = -(auVar42[6] == auVar38[6]);
              auVar41[7] = -(auVar42[7] == auVar38[7]);
              auVar41[8] = -(auVar42[8] == auVar38[0]);
              auVar41[9] = -(auVar42[9] == auVar38[1]);
              auVar41[10] = -(auVar42[10] == auVar38[2]);
              auVar41[0xb] = -(auVar42[0xb] == auVar38[3]);
              auVar41[0xc] = -(auVar42[0xc] == auVar38[4]);
              auVar41[0xd] = -(auVar42[0xd] == auVar38[5]);
              auVar41[0xe] = -(auVar42[0xe] == auVar38[6]);
              auVar41[0xf] = -(auVar42[0xf] == auVar38[7]);
              uVar30 = (ushort)(SUB161(auVar41 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar41 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar41 >> 0x17,0) & 1) << 2 |
                       (ushort)(SUB161(auVar41 >> 0x1f,0) & 1) << 3 |
                       (ushort)(SUB161(auVar41 >> 0x27,0) & 1) << 4 |
                       (ushort)(SUB161(auVar41 >> 0x2f,0) & 1) << 5 |
                       (ushort)(SUB161(auVar41 >> 0x37,0) & 1) << 6 |
                       (ushort)(SUB161(auVar41 >> 0x3f,0) & 1) << 7 |
                       (ushort)(SUB161(auVar41 >> 0x47,0) & 1) << 8 |
                       (ushort)(SUB161(auVar41 >> 0x4f,0) & 1) << 9 |
                       (ushort)(SUB161(auVar41 >> 0x57,0) & 1) << 10 |
                       (ushort)(SUB161(auVar41 >> 0x5f,0) & 1) << 0xb |
                       (ushort)(SUB161(auVar41 >> 0x67,0) & 1) << 0xc |
                       (ushort)(SUB161(auVar41 >> 0x6f,0) & 1) << 0xd |
                       (ushort)(SUB161(auVar41 >> 0x77,0) & 1) << 0xe |
                       (ushort)(auVar41[0xf] >> 7) << 0xf;
              uVar15 = (uint)uVar30;
              while (uVar30 != 0) {
                uVar5 = 0;
                for (uVar6 = uVar15; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
                  uVar5 = uVar5 + 1;
                }
                uVar27 = uVar5 + uVar26 & *(ulonglong *)(lVar3 + 0xe8);
                if (lStack_1e8 == *(longlong *)(lVar32 + -0x28 + uVar27 * -0x28)) {
                  lVar32 = lVar32 + uVar27 * -0x28;
                  puVar28 = *(undefined **)(lVar32 + -0x10);
                  if ((longlong)puVar28 < 0) {
                    uVar33 = 0;
LAB_140a67678:
                    pdb_142dc7e2a(uVar33,puVar28);
                    uVar13 = uStack_6b;
                    goto LAB_140a68022;
                  }
                  puStack_80 = puVar28;
                  if (puVar28 == (undefined *)0x0) {
                    pauVar18 = (undefined1 (*) [16])0x1;
                  }
                  else {
                    uVar16 = *(undefined8 *)(lVar32 + -0x18);
                    pdb_14007ee60();
                    uVar33 = 1;
                    pauVar18 = (undefined1 (*) [16])pub_1406abab0((ulonglong)puStack_80,1);
                    puVar28 = puStack_80;
                    if (pauVar18 == (undefined1 (*) [16])0x0) goto LAB_140a67678;
                    pub_142e32760(pauVar18,uVar16);
                  }
                  pauStack_88 = pauVar18;
                  pdb_140f3e9e0(&pauStack_138,pauVar18,puStack_80,&UNK_14304084d,0xd);
                  pauVar18 = pauStack_128;
                  pauStack_90 = pauStack_130;
                  pauVar17 = (undefined1 (*) [16])pdb_140f4eda0(pauStack_130,pauStack_128);
                  if (pauVar17 != (undefined1 (*) [16])0x0) {
                    pauStack_150 = pauVar17;
                    if (1 < *_DAT_143ca8e90) {
                      pdb_141b1e240((undefined1 (*) [16])&pauStack_1a8,pauStack_90,pauVar18);
                      pauStack_180 = (undefined1 (*) [16])pdb_140f58250;
                      pauStack_178 = (undefined1 (*) [16])&pauStack_150;
                      pauStack_170 = (undefined1 (*) [16])pdb_140f59780;
                      pauStack_f8 = (undefined1 (*) [16])0x0;
                      pauStack_f0 = (undefined1 (*) [16])&UNK_1430407ce;
                      pauStack_e8 = (undefined1 (*) [16])0x34;
                      pauStack_e0 = (undefined1 (*) [16])0x0;
                      pauStack_d8 = (undefined1 (*) [16])&UNK_14304078e;
                      ppauStack_d0 = (undefined1 (**) [16])0x3f;
                      uStack_c8 = 2;
                      puStack_c0 = &UNK_1430407ce;
                      uStack_b8 = 0x34;
                      uStack_b0 = 0x9c00000001;
                      puStack_a8 = &UNK_14304085a;
                      ppauStack_a0 = &pauStack_188;
                      pauStack_188 = (undefined1 (*) [16])&pauStack_1a8;
                      pdb_140f332f0(&uStack_67,&pauStack_f8);
                      if (pauStack_1a8 != (undefined1 (*) [16])0x0) {
                        pub_1406abac0((byte *)pauStack_1a0,(ulonglong)pauStack_1a8,1);
                      }
                    }
                    pdb_1404b38e0(&pauStack_150);
                  }
                  if (1 < *_DAT_143ca8e90) {
                    pdb_141b1e240((undefined1 (*) [16])&pauStack_1a8,pauStack_88,puStack_80);
                    pauStack_188 = (undefined1 (*) [16])&lStack_1e8;
                    pauStack_180 = (undefined1 (*) [16])pdb_140c91ab0;
                    pauStack_170 = (undefined1 (*) [16])pdb_140f58250;
                    pauStack_f8 = (undefined1 (*) [16])0x0;
                    pauStack_f0 = (undefined1 (*) [16])&UNK_1430407ce;
                    pauStack_e8 = (undefined1 (*) [16])0x34;
                    pauStack_e0 = (undefined1 (*) [16])0x0;
                    pauStack_d8 = (undefined1 (*) [16])&UNK_14304078e;
                    ppauStack_d0 = (undefined1 (**) [16])0x3f;
                    uStack_c8 = 2;
                    puStack_c0 = &UNK_1430407ce;
                    uStack_b8 = 0x34;
                    uStack_b0 = 0xa100000001;
                    puStack_a8 = &UNK_143040889;
                    ppauStack_a0 = &pauStack_188;
                    pauStack_178 = (undefined1 (*) [16])&pauStack_1a8;
                    pdb_140f332f0(&uStack_67,&pauStack_f8);
                    if (pauStack_1a8 != (undefined1 (*) [16])0x0) {
                      pub_1406abac0((byte *)pauStack_1a0,(ulonglong)pauStack_1a8,1);
                    }
                  }
                  if (pauStack_138 != (undefined1 (*) [16])0x0) {
                    pub_1406abac0((byte *)pauStack_90,(ulonglong)pauStack_138,1);
                  }
                  if (puStack_80 != (undefined *)0x0) {
                    pub_1406abac0((byte *)pauStack_88,(ulonglong)puStack_80,1);
                  }
                  goto LAB_140a67240;
                }
                uVar30 = (ushort)(uVar15 - 1) & (ushort)uVar15;
                uVar15 = CONCAT22((short)(uVar15 - 1 >> 0x10),uVar30);
              }
              auVar39[0] = -(auVar42[0] == unaff_XMM6_Ba);
              auVar39[1] = -(auVar42[1] == unaff_XMM6_Bb);
              auVar39[2] = -(auVar42[2] == unaff_XMM6_Bc);
              auVar39[3] = -(auVar42[3] == unaff_XMM6_Bd);
              auVar39[4] = -(auVar42[4] == unaff_XMM6_Be);
              auVar39[5] = -(auVar42[5] == unaff_XMM6_Bf);
              auVar39[6] = -(auVar42[6] == unaff_XMM6_Bg);
              auVar39[7] = -(auVar42[7] == unaff_XMM6_Bh);
              auVar39[8] = -(auVar42[8] == unaff_XMM6_Bi);
              auVar39[9] = -(auVar42[9] == unaff_XMM6_Bj);
              auVar39[10] = -(auVar42[10] == unaff_XMM6_Bk);
              auVar39[0xb] = -(auVar42[0xb] == unaff_XMM6_Bl);
              auVar39[0xc] = -(auVar42[0xc] == unaff_XMM6_Bm);
              auVar39[0xd] = -(auVar42[0xd] == unaff_XMM6_Bn);
              auVar39[0xe] = -(auVar42[0xe] == unaff_XMM6_Bo);
              auVar39[0xf] = -(auVar42[0xf] == unaff_XMM6_Bp);
              if ((((((((((((((((SUB161(auVar39 >> 7,0) & 1) != 0 ||
                               (SUB161(auVar39 >> 0xf,0) & 1) != 0) ||
                              (SUB161(auVar39 >> 0x17,0) & 1) != 0) ||
                             (SUB161(auVar39 >> 0x1f,0) & 1) != 0) ||
                            (SUB161(auVar39 >> 0x27,0) & 1) != 0) ||
                           (SUB161(auVar39 >> 0x2f,0) & 1) != 0) ||
                          (SUB161(auVar39 >> 0x37,0) & 1) != 0) ||
                         (SUB161(auVar39 >> 0x3f,0) & 1) != 0) ||
                        (SUB161(auVar39 >> 0x47,0) & 1) != 0) ||
                       (SUB161(auVar39 >> 0x4f,0) & 1) != 0) || (SUB161(auVar39 >> 0x57,0) & 1) != 0
                      ) || (SUB161(auVar39 >> 0x5f,0) & 1) != 0) ||
                    (SUB161(auVar39 >> 0x67,0) & 1) != 0) || (SUB161(auVar39 >> 0x6f,0) & 1) != 0)
                  || (SUB161(auVar39 >> 0x77,0) & 1) != 0) || auVar39[0xf] < '\0') break;
              uVar26 = uVar26 + lVar29 + 0x10;
              lVar29 = lVar29 + 0x10;
            } while( true );
          }
        }
        goto LAB_140a67240;
      }
      uVar36 = uStack_63;
      if (pauStack_108 != (undefined1 (*) [16])0x0) {
        pub_1406abac0((byte *)pauStack_100,(longlong)pauStack_108 << 3,8);
        uVar36 = uStack_63;
      }
    }
  }
  if ((*(int *)*param_2 != 10) &&
     (((int *)*puStack_118 == (int *)0x0 || (*(int *)*puStack_118 == 0)))) {
    **(undefined4 **)param_4[1] = *(undefined4 *)(param_4[1] + 0xc);
    *(undefined1 *)(*(longlong *)*param_4 + 0x111) = 0;
    return;
  }
  lVar34 = *(longlong *)*param_4;
  cVar14 = *(char *)(lVar34 + 0x111);
  uVar2 = *(undefined4 *)(param_4[1] + 0xc);
  **(undefined4 **)param_4[1] = uVar2;
  *(undefined1 *)(lVar34 + 0x111) = 1;
  if (cVar14 == '\0') {
    **(undefined4 **)param_4[1] = *(undefined4 *)(param_4[1] + 0xc);
    lVar34 = *(longlong *)*param_4;
    if (*(longlong *)(lVar34 + 200) != 0) {
      uVar26 = *(ulonglong *)(lVar34 + 0xb8);
      if (uVar26 == 0) {
        uVar27 = 0;
      }
      else {
        pub_142e32780(*(undefined8 *)(lVar34 + 0xb0),CONCAT71((uint7)(uint3)((uint)uVar2 >> 8),0xff)
                      ,uVar26 + 0x11);
        uVar27 = (uVar26 + 1 & 0xfffffffffffffff8) - (uVar26 + 1 >> 3);
        if (uVar26 < 8) {
          uVar27 = uVar26;
        }
      }
      *(undefined8 *)(lVar34 + 200) = 0;
      *(ulonglong *)(lVar34 + 0xc0) = uVar27;
    }
  }
  pauVar24 = (undefined1 (*) [16])*param_1;
  pauVar17 = (undefined1 (*) [16])pub_142e32030();
  pauVar18 = *(undefined1 (**) [16])*pauVar24;
  LOCK();
  lVar34 = *(longlong *)*pauVar18;
  *(longlong *)*pauVar18 = *(longlong *)*pauVar18 + 1;
  UNLOCK();
  pauStack_100 = pauVar24;
  uVar13 = uStack_6b;
  if (*(longlong *)*pauVar18 == 0 || SCARRY8(lVar34,1) != *(longlong *)*pauVar18 < 0)
  goto LAB_140a68022;
  pauStack_f8 = pauVar18;
  pauStack_f0 = pauVar17;
  uVar15 = pub_142e32050(pauVar17);
  pauVar24 = (undefined1 (*) [16])(ulonglong)uVar15;
  puVar23 = (undefined *)((longlong)pauVar24 * 8);
  puStack_80 = puVar23;
  uStack_63 = uVar36;
  if (uVar15 == 0) {
    pauVar18 = (undefined1 (*) [16])0x8;
  }
  else {
    pdb_14007ee60();
    pauVar18 = (undefined1 (*) [16])pub_1406abae0((ulonglong)puVar23,8);
    if (pauVar18 == (undefined1 (*) [16])0x0) {
      pdb_142dc7e2a(8,puVar23);
      uVar13 = uStack_6b;
      goto LAB_140a68022;
    }
  }
  pauStack_108 = (undefined1 (*) [16])CONCAT71(pauStack_108._1_7_,cVar14);
  puStack_118 = (undefined8 *)CONCAT44(puStack_118._4_4_,uVar15);
  pauStack_78 = pauVar18;
  pub_142e32060(pauVar17,pauVar18,uVar15);
  LOCK();
  *(longlong *)*pauStack_f8 = *(longlong *)*pauStack_f8 + -1;
  UNLOCK();
  if (*(longlong *)*pauStack_f8 == 0) {
    uStack_62 = 1;
    pdb_140cb1c10(&pauStack_f8);
  }
  pauVar18 = (undefined1 (*) [16])(*pauStack_78 + (longlong)pauVar24 * 8);
  uVar26 = (longlong)pauVar18 - (longlong)pauStack_78;
  pauStack_f0 = (undefined1 (*) [16])((longlong)pauStack_78 + uVar26);
  pauStack_f8 = pauStack_78;
  uStack_62 = 1;
  pauStack_e8 = param_4;
  pauStack_e0 = param_4;
  pauStack_88 = pauStack_f0;
  pdb_1415e9ee0(&pauStack_1d8,&pauStack_f8);
  **(undefined4 **)param_4[1] = *(undefined4 *)(param_4[1] + 0xc);
  plVar19 = *(longlong **)*param_4;
  pbVar22 = (byte *)plVar19[1];
  lVar34 = plVar19[2];
  pauStack_110 = pauVar24;
  if (lVar34 != 0) {
    pbVar31 = pbVar22 + 8;
    do {
      uVar27 = *(ulonglong *)(pbVar31 + -8);
      if ((!SBORROW8(0,uVar27)) && (uVar27 != 0)) {
        pub_1406abac0(*(byte **)pbVar31,uVar27,1);
      }
      pbVar31 = pbVar31 + 0x20;
      lVar34 = lVar34 + -1;
    } while (lVar34 != 0);
  }
  if (*plVar19 != 0) {
    pub_1406abac0(pbVar22,*plVar19 << 5,8);
  }
  pauVar24 = pauStack_110;
  plVar19[2] = auStack_1c8._0_8_;
  *plVar19 = (longlong)pauStack_1d8;
  plVar19[1] = (longlong)pauStack_1d0;
  lVar34 = *(longlong *)*param_4;
  if (*(char *)(lVar34 + 0x110) != '\0') {
LAB_140a67863:
    if ((int)puStack_118 == 0) {
      return;
    }
    uVar26 = 8;
    pauVar24 = pauStack_78;
    puVar23 = puStack_80;
    goto LAB_140a6787d;
  }
  if (pauVar18 == pauStack_78) {
LAB_140a67856:
    if ((char)pauStack_108 != '\0') goto LAB_140a67863;
  }
  else if (*(longlong *)(lVar34 + 200) != 0) {
    iVar7 = -(uint)(CONCAT13(unaff_XMM6_Bd,
                             CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))) ==
                   CONCAT13(unaff_XMM6_Bd,
                            CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))));
    iVar8 = -(uint)(CONCAT13(unaff_XMM6_Bh,
                             CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be))) ==
                   CONCAT13(unaff_XMM6_Bh,
                            CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be))));
    iVar9 = -(uint)(CONCAT13(unaff_XMM6_Bl,
                             CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi))) ==
                   CONCAT13(unaff_XMM6_Bl,
                            CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi))));
    iVar10 = -(uint)(CONCAT13(unaff_XMM6_Bp,
                              CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm))) ==
                    CONCAT13(unaff_XMM6_Bp,
                             CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm))));
    pauVar17 = pauStack_78;
LAB_140a6794f:
    puVar23 = (undefined *)pdb_1400af0a0(lVar34 + 0xd0,pauVar17);
    bVar37 = (byte)((ulonglong)puVar23 >> 0x39);
    auVar38 = ZEXT216(CONCAT11(bVar37,bVar37));
    auVar38 = pshuflw(auVar38,auVar38,0);
    pauVar21 = (undefined1 (*) [16])0x0;
    while( true ) {
      uVar27 = (ulonglong)puVar23 & *(ulonglong *)(lVar34 + 0xb8);
      pcVar1 = (char *)(*(longlong *)(lVar34 + 0xb0) + uVar27);
      auVar42[0] = -(*pcVar1 == auVar38[0]);
      auVar42[1] = -(pcVar1[1] == auVar38[1]);
      auVar42[2] = -(pcVar1[2] == auVar38[2]);
      auVar42[3] = -(pcVar1[3] == auVar38[3]);
      auVar42[4] = -(pcVar1[4] == auVar38[4]);
      auVar42[5] = -(pcVar1[5] == auVar38[5]);
      auVar42[6] = -(pcVar1[6] == auVar38[6]);
      auVar42[7] = -(pcVar1[7] == auVar38[7]);
      auVar42[8] = -(pcVar1[8] == auVar38[0]);
      auVar42[9] = -(pcVar1[9] == auVar38[1]);
      auVar42[10] = -(pcVar1[10] == auVar38[2]);
      auVar42[0xb] = -(pcVar1[0xb] == auVar38[3]);
      auVar42[0xc] = -(pcVar1[0xc] == auVar38[4]);
      auVar42[0xd] = -(pcVar1[0xd] == auVar38[5]);
      auVar42[0xe] = -(pcVar1[0xe] == auVar38[6]);
      auVar42[0xf] = -(pcVar1[0xf] == auVar38[7]);
      uVar30 = (ushort)(SUB161(auVar42 >> 7,0) & 1) | (ushort)(SUB161(auVar42 >> 0xf,0) & 1) << 1 |
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
               (ushort)(SUB161(auVar42 >> 0x77,0) & 1) << 0xe | (ushort)(auVar42[0xf] >> 7) << 0xf;
      uVar15 = (uint)uVar30;
      while (uVar30 != 0) {
        uVar5 = 0;
        for (uVar6 = uVar15; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          uVar5 = uVar5 + 1;
        }
        pauStack_90 = pauVar21;
        if (*(longlong *)*pauVar17 ==
            *(longlong *)
             (*(longlong *)(lVar34 + 0xb0) + (uVar5 + uVar27 & *(ulonglong *)(lVar34 + 0xb8)) * -8 +
             -8)) {
          pauVar17 = (undefined1 (*) [16])(*pauVar17 + 8);
          if (pauVar17 != pauStack_88) goto LAB_140a6794f;
          goto LAB_140a67856;
        }
        uVar30 = (ushort)(uVar15 - 1) & (ushort)uVar15;
        uVar15 = CONCAT22((short)(uVar15 - 1 >> 0x10),uVar30);
      }
      auVar40[0] = -(*pcVar1 == (char)iVar7);
      auVar40[1] = -(pcVar1[1] == (char)((uint)iVar7 >> 8));
      auVar40[2] = -(pcVar1[2] == (char)((uint)iVar7 >> 0x10));
      auVar40[3] = -(pcVar1[3] == (char)((uint)iVar7 >> 0x18));
      auVar40[4] = -(pcVar1[4] == (char)iVar8);
      auVar40[5] = -(pcVar1[5] == (char)((uint)iVar8 >> 8));
      auVar40[6] = -(pcVar1[6] == (char)((uint)iVar8 >> 0x10));
      auVar40[7] = -(pcVar1[7] == (char)((uint)iVar8 >> 0x18));
      auVar40[8] = -(pcVar1[8] == (char)iVar9);
      auVar40[9] = -(pcVar1[9] == (char)((uint)iVar9 >> 8));
      auVar40[10] = -(pcVar1[10] == (char)((uint)iVar9 >> 0x10));
      auVar40[0xb] = -(pcVar1[0xb] == (char)((uint)iVar9 >> 0x18));
      auVar40[0xc] = -(pcVar1[0xc] == (char)iVar10);
      auVar40[0xd] = -(pcVar1[0xd] == (char)((uint)iVar10 >> 8));
      auVar40[0xe] = -(pcVar1[0xe] == (char)((uint)iVar10 >> 0x10));
      auVar40[0xf] = -(pcVar1[0xf] == (char)((uint)iVar10 >> 0x18));
      if ((((((((((((((((SUB161(auVar40 >> 7,0) & 1) != 0 || (SUB161(auVar40 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar40 >> 0x17,0) & 1) != 0) || (SUB161(auVar40 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar40 >> 0x27,0) & 1) != 0) || (SUB161(auVar40 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar40 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar40 >> 0x3f,0) & 1) != 0) || (SUB161(auVar40 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar40 >> 0x4f,0) & 1) != 0) || (SUB161(auVar40 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar40 >> 0x5f,0) & 1) != 0) || (SUB161(auVar40 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar40 >> 0x6f,0) & 1) != 0) || (SUB161(auVar40 >> 0x77,0) & 1) != 0) ||
          auVar40[0xf] < '\0') break;
      puVar23 = pauVar21[1] + uVar27;
      pauVar21 = pauVar21 + 1;
    }
  }
  uStack_62 = 1;
  pdb_140d8ead0(&pauStack_f8);
  pauVar17 = pauStack_f8;
  pauStack_e0 = pauStack_f0 + (longlong)pauStack_e8 * 0xb;
  pauStack_f8 = pauStack_f0;
  pauStack_e8 = pauVar17;
  uStack_62 = 1;
  pdb_140c7e300(&pauStack_1d8,&pauStack_f8);
  puStack_190 = (undefined *)(auStack_1c8._0_8_ * 0x78 + (longlong)pauStack_1d0);
  pauStack_1a8 = pauStack_1d0;
  pauStack_1a0 = pauStack_1d0;
  pauStack_198 = pauStack_1d8;
  uStack_68 = 1;
  plVar19 = (longlong *)pdb_14008d710(0);
  if (plVar19 == (longlong *)0x0) {
    uStack_68 = 1;
    pdb_142dc7890(&UNK_143326860);
    uVar13 = uStack_6b;
    goto LAB_140a68022;
  }
  pauStack_d8 = (undefined1 (*) [16])*plVar19;
  ppauStack_d0 = (undefined1 (**) [16])plVar19[1];
  *plVar19 = *plVar19 + 1;
  pauStack_e8 = _DAT_143366cc0;
  pauStack_e0 = _UNK_143366cc8;
  pauStack_f8 = _DAT_143366cb0;
  pauStack_f0 = _UNK_143366cb8;
  auStack_1c8._8_8_ = puStack_190;
  auStack_1c8._0_8_ = pauStack_198;
  pauStack_1d8 = pauStack_1a8;
  pauStack_1d0 = pauStack_1a0;
  ppauVar25 = &pauStack_f8;
  pdb_141b761d0(&pauStack_1d8);
  pauVar17 = (undefined1 (*) [16])(uVar26 >> 3);
  pauStack_188 = pauStack_f8;
  pauStack_180 = pauStack_f0;
  pauStack_178 = pauStack_e8;
  pauStack_170 = pauStack_e0;
  pauStack_168 = pauStack_d8;
  lStack_160 = (longlong)ppauStack_d0;
  pauStack_138 = pauVar24;
  pauStack_130 = pauStack_78;
  uStack_64 = 1;
  pauStack_128 = pauVar17;
  puVar20 = (undefined8 *)pdb_140f3bda0();
  if (*(char *)(puVar20 + 2) == '\x01') {
    pauStack_d8 = (undefined1 (*) [16])*puVar20;
    ppauVar25 = (undefined1 (**) [16])puVar20[1];
  }
  else {
    uStack_64 = 1;
    pauStack_d8 = (undefined1 (*) [16])pdb_140f4fd10();
    *puVar20 = pauStack_d8;
    puVar20[1] = ppauVar25;
    *(undefined1 *)(puVar20 + 2) = 1;
  }
  *puVar20 = *pauStack_d8 + 1;
  pauStack_e8 = _DAT_1430403f0;
  pauStack_e0 = _UNK_1430403f8;
  pauStack_f8 = _DAT_1430403e0;
  pauStack_f0 = _UNK_1430403e8;
  ppauStack_d0 = ppauVar25;
  if (pauStack_78 != pauVar18) {
    pdb_142d974a0(&pauStack_f8,pauVar17,&pauStack_d8,1);
  }
  if (pauVar18 != pauStack_78) {
    pauVar24 = (undefined1 (*) [16])0x0;
    do {
      pdb_1403b05d0(&pauStack_f8,*(undefined8 *)(*pauStack_78 + (longlong)pauVar24 * 8));
      pauVar24 = (undefined1 (*) [16])(*pauVar24 + 1);
    } while (pauVar24 != pauVar17);
  }
  pauStack_1b8 = pauStack_d8;
  ppauStack_1b0 = ppauStack_d0;
  auStack_1c8._8_8_ = pauStack_e0;
  auStack_1c8._0_8_ = pauStack_e8;
  pauStack_1d8 = pauStack_f8;
  pauStack_1d0 = pauStack_f0;
  auVar38 = *pauStack_188;
  pauVar24 = pauStack_188 + 1;
  uVar15 = ~(uint)(ushort)((ushort)(SUB161(auVar38 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar38 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar38 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar38 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar38 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar38 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar38 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auVar38 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auVar38 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(auVar38 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auVar38 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auVar38 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(auVar38 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar38 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar38 >> 0x77,0) & 1) << 0xe |
                          (ushort)(byte)(auVar38[0xf] >> 7) << 0xf);
  pauVar18 = pauStack_170;
  pauVar17 = pauStack_188;
  while( true ) {
    pauStack_110 = (undefined1 (*) [16])
                   CONCAT71(pauStack_110._1_7_,pauVar18 != (undefined1 (*) [16])0x0);
    if (pauVar18 == (undefined1 (*) [16])0x0) break;
    if ((short)uVar15 == 0) {
      do {
        auVar38 = *pauVar24;
        pauVar17 = pauVar17 + -0x28;
        pauVar24 = pauVar24 + 1;
        uVar15 = (ushort)((ushort)(SUB161(auVar38 >> 7,0) & 1) |
                          (ushort)(SUB161(auVar38 >> 0xf,0) & 1) << 1 |
                          (ushort)(SUB161(auVar38 >> 0x17,0) & 1) << 2 |
                          (ushort)(SUB161(auVar38 >> 0x1f,0) & 1) << 3 |
                          (ushort)(SUB161(auVar38 >> 0x27,0) & 1) << 4 |
                          (ushort)(SUB161(auVar38 >> 0x2f,0) & 1) << 5 |
                          (ushort)(SUB161(auVar38 >> 0x37,0) & 1) << 6 |
                          (ushort)(SUB161(auVar38 >> 0x3f,0) & 1) << 7 |
                          (ushort)(SUB161(auVar38 >> 0x47,0) & 1) << 8 |
                          (ushort)(SUB161(auVar38 >> 0x4f,0) & 1) << 9 |
                          (ushort)(SUB161(auVar38 >> 0x57,0) & 1) << 10 |
                          (ushort)(SUB161(auVar38 >> 0x5f,0) & 1) << 0xb |
                          (ushort)(SUB161(auVar38 >> 0x67,0) & 1) << 0xc |
                          (ushort)(SUB161(auVar38 >> 0x6f,0) & 1) << 0xd |
                          (ushort)(SUB161(auVar38 >> 0x77,0) & 1) << 0xe |
                         (ushort)(byte)(auVar38[0xf] >> 7) << 0xf) ^ 0xffff;
      } while (uVar15 == 0);
    }
    uVar5 = 0;
    for (uVar6 = uVar15; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
      uVar5 = uVar5 + 1;
    }
    uVar33 = *(undefined8 *)((longlong)pauVar17 + (ulonglong)uVar5 * -0x28 + -0x28);
    cVar14 = pdb_1403b05d0(&pauStack_1d8,uVar33);
    pauVar21 = pauStack_128;
    uVar15 = uVar15 - 1 & uVar15;
    pauVar18 = (undefined1 (*) [16])(pauVar18[-1] + 0xf);
    if (cVar14 == '\0') {
      if (pauStack_128 == pauStack_138) {
        pdb_142d7e8a0(&pauStack_138);
      }
      *(undefined8 *)(*pauStack_130 + (longlong)pauVar21 * 8) = uVar33;
      pauStack_128 = (undefined1 (*) [16])(*pauVar21 + 1);
    }
  }
  pauVar24 = pauStack_128;
  if (pauStack_128 != (undefined1 (*) [16])0x0) {
    pauStack_108 = pauStack_128;
    **(undefined4 **)param_4[1] = *(undefined4 *)(param_4[1] + 0xc);
    *(undefined1 *)(*(longlong *)*param_4 + 0x110) = 1;
    **(undefined4 **)param_4[1] = *(undefined4 *)(param_4[1] + 0xc);
    lVar34 = *(longlong *)*param_4;
    plVar19 = (longlong *)(lVar34 + 0xe0);
    lVar3 = *(longlong *)(lVar34 + 0xe8);
    if (lVar3 != 0) {
      lVar32 = *(longlong *)(lVar34 + 0xf8);
      if (lVar32 != 0) {
        pauVar18 = (undefined1 (*) [16])*plVar19;
        auVar38 = *pauVar18;
        pauVar24 = pauVar18 + 1;
        uVar15 = ~(uint)(ushort)((ushort)(SUB161(auVar38 >> 7,0) & 1) |
                                 (ushort)(SUB161(auVar38 >> 0xf,0) & 1) << 1 |
                                 (ushort)(SUB161(auVar38 >> 0x17,0) & 1) << 2 |
                                 (ushort)(SUB161(auVar38 >> 0x1f,0) & 1) << 3 |
                                 (ushort)(SUB161(auVar38 >> 0x27,0) & 1) << 4 |
                                 (ushort)(SUB161(auVar38 >> 0x2f,0) & 1) << 5 |
                                 (ushort)(SUB161(auVar38 >> 0x37,0) & 1) << 6 |
                                 (ushort)(SUB161(auVar38 >> 0x3f,0) & 1) << 7 |
                                 (ushort)(SUB161(auVar38 >> 0x47,0) & 1) << 8 |
                                 (ushort)(SUB161(auVar38 >> 0x4f,0) & 1) << 9 |
                                 (ushort)(SUB161(auVar38 >> 0x57,0) & 1) << 10 |
                                 (ushort)(SUB161(auVar38 >> 0x5f,0) & 1) << 0xb |
                                 (ushort)(SUB161(auVar38 >> 0x67,0) & 1) << 0xc |
                                 (ushort)(SUB161(auVar38 >> 0x6f,0) & 1) << 0xd |
                                 (ushort)(SUB161(auVar38 >> 0x77,0) & 1) << 0xe |
                                (ushort)(byte)(auVar38[0xf] >> 7) << 0xf);
        do {
          if ((short)uVar15 == 0) {
            do {
              auVar38 = *pauVar24;
              pauVar18 = pauVar18 + -0x28;
              pauVar24 = pauVar24 + 1;
              uVar15 = (ushort)((ushort)(SUB161(auVar38 >> 7,0) & 1) |
                                (ushort)(SUB161(auVar38 >> 0xf,0) & 1) << 1 |
                                (ushort)(SUB161(auVar38 >> 0x17,0) & 1) << 2 |
                                (ushort)(SUB161(auVar38 >> 0x1f,0) & 1) << 3 |
                                (ushort)(SUB161(auVar38 >> 0x27,0) & 1) << 4 |
                                (ushort)(SUB161(auVar38 >> 0x2f,0) & 1) << 5 |
                                (ushort)(SUB161(auVar38 >> 0x37,0) & 1) << 6 |
                                (ushort)(SUB161(auVar38 >> 0x3f,0) & 1) << 7 |
                                (ushort)(SUB161(auVar38 >> 0x47,0) & 1) << 8 |
                                (ushort)(SUB161(auVar38 >> 0x4f,0) & 1) << 9 |
                                (ushort)(SUB161(auVar38 >> 0x57,0) & 1) << 10 |
                                (ushort)(SUB161(auVar38 >> 0x5f,0) & 1) << 0xb |
                                (ushort)(SUB161(auVar38 >> 0x67,0) & 1) << 0xc |
                                (ushort)(SUB161(auVar38 >> 0x6f,0) & 1) << 0xd |
                                (ushort)(SUB161(auVar38 >> 0x77,0) & 1) << 0xe |
                               (ushort)(byte)(auVar38[0xf] >> 7) << 0xf) ^ 0xffff;
            } while (uVar15 == 0);
          }
          uVar5 = 0;
          for (uVar6 = uVar15; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
            uVar5 = uVar5 + 1;
          }
          uVar26 = *(ulonglong *)((longlong)pauVar18 + (ulonglong)uVar5 * -0x28 + -0x20);
          if (uVar26 != 0) {
            pub_1406abac0(*(byte **)((longlong)pauVar18 + (ulonglong)uVar5 * -0x28 + -0x18),uVar26,1
                         );
          }
          uVar15 = uVar15 - 1 & uVar15;
          lVar32 = lVar32 + -1;
        } while (lVar32 != 0);
      }
      uVar26 = lVar3 * 0x28 + 0x37U & 0xfffffffffffffff0;
      uVar27 = lVar3 + uVar26 + 0x11;
      if (uVar27 != 0) {
        pub_1406abac0((byte *)(*plVar19 - uVar26),uVar27,0x10);
      }
    }
    pauVar18 = pauStack_128;
    pauVar24 = pauStack_130;
    *(undefined1 (**) [16])(lVar34 + 0x100) = pauStack_168;
    *(longlong *)(lVar34 + 0x108) = lStack_160;
    *(undefined1 (**) [16])(lVar34 + 0xf0) = pauStack_178;
    *(undefined1 (**) [16])(lVar34 + 0xf8) = pauStack_170;
    *plVar19 = (longlong)pauStack_188;
    *(undefined1 (**) [16])(lVar34 + 0xe8) = pauStack_180;
    **(undefined4 **)param_4[1] = *(undefined4 *)(param_4[1] + 0xc);
    lVar34 = *(longlong *)*param_4;
    pauVar17 = (undefined1 (*) [16])((ulonglong)(*pauStack_128 + 1) >> 1);
    if (*(longlong *)(lVar34 + 200) == 0) {
      pauVar17 = pauStack_128;
    }
    if (*(undefined1 (**) [16])(lVar34 + 0xc0) < pauVar17) {
      pdb_142d974a0(lVar34 + 0xb0,pauStack_178,lVar34 + 0xd0,1);
    }
    if (pauVar18 != (undefined1 (*) [16])0x0) {
      pauVar17 = (undefined1 (*) [16])0x0;
      do {
        pdb_1403b05d0(lVar34 + 0xb0,*(undefined8 *)(*pauVar24 + (longlong)pauVar17 * 8));
        pauVar17 = (undefined1 (*) [16])(*pauVar17 + 1);
      } while (pauVar17 != pauVar18);
    }
    pauVar17 = pauStack_128;
    pauVar18 = pauStack_130;
    pauVar24 = *(undefined1 (**) [16])(*(longlong *)*param_4 + 0xa8);
    LOCK();
    lVar34 = *(longlong *)*pauVar24;
    *(longlong *)*pauVar24 = *(longlong *)*pauVar24 + 1;
    UNLOCK();
    uVar13 = uStack_6b;
    if (*(longlong *)*pauVar24 == 0 || SCARRY8(lVar34,1) != *(longlong *)*pauVar24 < 0)
    goto LAB_140a68022;
    uVar26 = (longlong)pauStack_128 * 8;
    pauStack_140 = pauVar24;
    if (0x7ffffffffffffff8 < uVar26 || (ulonglong)pauStack_128 >> 0x3d != 0) {
      uVar33 = 0;
LAB_140a67e20:
      uStack_69 = 1;
      pdb_142dc7e2a(uVar33,uVar26);
      uVar13 = uStack_6b;
      goto LAB_140a68022;
    }
    if (uVar26 == 0) {
      pauVar21 = (undefined1 (*) [16])0x8;
      pauVar24 = (undefined1 (*) [16])0x0;
    }
    else {
      pdb_14007ee60();
      uVar33 = 8;
      pauVar21 = (undefined1 (*) [16])pub_1406abab0(uVar26,8);
      pauVar24 = pauVar17;
      if (pauVar21 == (undefined1 (*) [16])0x0) goto LAB_140a67e20;
    }
    if (pauVar17 != (undefined1 (*) [16])0x0) {
      pub_142e32760(pauVar21,pauVar18,uVar26);
    }
    pauVar12 = pauStack_128;
    pauVar18 = pauStack_130;
    puVar20 = (undefined8 *)((longlong)pauStack_128 * 8);
    puStack_1e0 = puVar20;
    pauStack_90 = pauVar21;
    pauStack_88 = pauVar24;
    if (pauStack_128 == (undefined1 (*) [16])0x0) {
      pbVar22 = (byte *)0x8;
    }
    else {
      pdb_14007ee60();
      pbVar22 = pub_1406abab0((ulonglong)puVar20,8);
      if (pbVar22 == (byte *)0x0) {
        uStack_66 = 1;
        pdb_142dc7e2a(8,puVar20);
        uVar13 = uStack_6b;
        goto LAB_140a68022;
      }
      if ((ulonglong)((longlong)pbVar22 - (longlong)pauVar18) < 0x20 ||
          pauVar12 < (undefined1 (*) [16])0x6) {
        pauVar24 = (undefined1 (*) [16])0x0;
      }
      else {
        pauVar24 = (undefined1 (*) [16])((ulonglong)pauVar12 & 0xfffffffffffffffc);
        pauVar21 = (undefined1 (*) [16])0x0;
        do {
          uVar33 = *(undefined8 *)((longlong)(*pauVar18 + (longlong)pauVar21 * 8) + 8);
          uVar16 = *(undefined8 *)(pauVar18[1] + (longlong)pauVar21 * 8);
          uVar11 = *(undefined8 *)((longlong)(pauVar18[1] + (longlong)pauVar21 * 8) + 8);
          *(undefined8 *)(pbVar22 + (longlong)pauVar21 * 8) =
               *(undefined8 *)(*pauVar18 + (longlong)pauVar21 * 8);
          *(undefined8 *)(pbVar22 + (longlong)pauVar21 * 8 + 8) = uVar33;
          *(undefined8 *)(pbVar22 + (longlong)pauVar21 * 8 + 0x10) = uVar16;
          *(undefined8 *)(pbVar22 + (longlong)pauVar21 * 8 + 0x10 + 8) = uVar11;
          pauVar21 = (undefined1 (*) [16])(*pauVar21 + 4);
        } while (pauVar24 != pauVar21);
        if (pauVar12 == pauVar24) goto LAB_140a67fcf;
      }
      pauVar21 = pauVar24;
      for (uVar26 = (ulonglong)pauVar12 & 3; uVar26 != 0; uVar26 = uVar26 - 1) {
        *(undefined8 *)(pbVar22 + (longlong)pauVar21 * 8) =
             *(undefined8 *)(*pauVar18 + (longlong)pauVar21 * 8);
        pauVar21 = (undefined1 (*) [16])(*pauVar21 + 1);
      }
      if ((ulonglong)((longlong)pauVar24 - (longlong)pauVar12) < 0xfffffffffffffffd) {
        do {
          *(undefined8 *)(pbVar22 + (longlong)pauVar21 * 8) =
               *(undefined8 *)(*pauVar18 + (longlong)pauVar21 * 8);
          *(undefined8 *)(pbVar22 + (longlong)pauVar21 * 8 + 8) =
               *(undefined8 *)(*pauVar18 + (longlong)pauVar21 * 8 + 8);
          *(undefined8 *)(pbVar22 + (longlong)pauVar21 * 8 + 0x10) =
               *(undefined8 *)(pauVar18[1] + (longlong)pauVar21 * 8);
          *(undefined8 *)(pbVar22 + (longlong)pauVar21 * 8 + 0x18) =
               *(undefined8 *)(pauVar18[1] + (longlong)pauVar21 * 8 + 8);
          pauVar21 = (undefined1 (*) [16])(*pauVar21 + 4);
        } while (pauVar12 != pauVar21);
      }
    }
LAB_140a67fcf:
    puVar23 = (undefined *)pub_142e32030();
    pauVar24 = *(undefined1 (**) [16])*pauStack_100;
    LOCK();
    lVar34 = *(longlong *)*pauVar24;
    *(longlong *)*pauVar24 = *(longlong *)*pauVar24 + 1;
    UNLOCK();
    uVar13 = uStack_6b;
    if (*(longlong *)*pauVar24 == 0 || SCARRY8(lVar34,1) != *(longlong *)*pauVar24 < 0) {
LAB_140a68022:
      uStack_6b = uVar13;
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    pauStack_150 = pauVar24;
    puStack_148 = puVar23;
    pauVar18 = (undefined1 (*) [16])pub_142e32160(puVar23,pbVar22,(ulonglong)pauVar12 & 0xffffffff);
    uStack_6b = pauVar18 == (undefined1 (*) [16])0xffffffffffffffff;
    if ((bool)uStack_6b) {
      pauStack_100 = (undefined1 (*) [16])0x2;
    }
    else {
      LOCK();
      lVar34 = *(longlong *)*pauVar24;
      *(longlong *)*pauVar24 = *(longlong *)*pauVar24 + 1;
      UNLOCK();
      pauStack_100 = (undefined1 (*) [16])0x1;
      uVar13 = 0;
      if (*(longlong *)*pauVar24 == 0 || SCARRY8(lVar34,1) != *(longlong *)*pauVar24 < 0)
      goto LAB_140a68022;
    }
    if (pauVar12 != (undefined1 (*) [16])0x0) {
      pub_1406abac0(pbVar22,(ulonglong)puStack_1e0,8);
    }
    if (pauVar18 == (undefined1 (*) [16])0xffffffffffffffff) {
      **(undefined4 **)param_4[1] = *(undefined4 *)(param_4[1] + 0xc);
      *(undefined1 *)(*(longlong *)*param_4 + 0x110) = 0;
      if (3 < *_DAT_143ca8e90) {
        pauStack_f8 = (undefined1 (*) [16])0x0;
        pauStack_f0 = (undefined1 (*) [16])&UNK_1430407ce;
        pauStack_e8 = (undefined1 (*) [16])0x34;
        pauStack_e0 = (undefined1 (*) [16])0x0;
        pauStack_d8 = (undefined1 (*) [16])&UNK_14304078e;
        ppauStack_d0 = (undefined1 (**) [16])0x3f;
        uStack_c8 = 4;
        puStack_c0 = &UNK_1430407ce;
        uStack_b8 = 0x34;
        uStack_b0 = 0xfc00000001;
        puStack_a8 = &UNK_14304090f;
        ppauStack_a0 = (undefined1 (**) [16])0x59;
        pdb_140f332f0(&uStack_67,&pauStack_f8);
      }
      LOCK();
      *(longlong *)*pauStack_150 = *(longlong *)*pauStack_150 + -1;
      UNLOCK();
      if (*(longlong *)*pauStack_150 == 0) {
        uStack_66 = 1;
        pdb_140cb1c10(&pauStack_150);
      }
      if (pauStack_88 != (undefined1 (*) [16])0x0) {
        pub_1406abac0((byte *)pauStack_90,(longlong)pauStack_88 << 3,8);
      }
      LOCK();
      *(longlong *)*pauStack_140 = *(longlong *)*pauStack_140 + -1;
      UNLOCK();
      pauVar24 = pauStack_108;
      if (*(longlong *)*pauStack_140 == 0) {
        pdb_140c7aa00(&pauStack_140);
        pauVar24 = pauStack_108;
      }
    }
    else {
      pub_142e32170(puVar23,pauVar18,0x3c);
      pauStack_1a8 = pauStack_100;
      pauStack_f8 = pauStack_88;
      pauStack_f0 = pauStack_90;
      pauStack_e8 = pauVar17;
      pauStack_e0 = pauStack_140;
      pauStack_1a0 = pauVar18;
      pauStack_198 = pauVar24;
      puStack_190 = puVar23;
      pdb_141a56650(&pauStack_1a8,&pauStack_f8);
      LOCK();
      *(longlong *)*pauStack_150 = *(longlong *)*pauStack_150 + -1;
      UNLOCK();
      pauVar24 = pauStack_108;
      if (*(longlong *)*pauStack_150 == 0) {
        uStack_66 = 0;
        pdb_140cb1c10(&pauStack_150);
        pauVar24 = pauStack_108;
      }
    }
  }
  if (pauStack_1d0 != (undefined1 (*) [16])0x0) {
    uVar26 = (longlong)pauStack_1d0 * 8 + 0x17U & 0xfffffffffffffff0;
    if (pauStack_1d0[1] + uVar26 + 1 != (undefined *)0x0) {
      pub_1406abac0((byte *)((longlong)pauStack_1d8 - uVar26),
                    (ulonglong)(pauStack_1d0[1] + uVar26 + 1),0x10);
    }
  }
  if (pauStack_138 != (undefined1 (*) [16])0x0) {
    pub_1406abac0((byte *)pauStack_130,(longlong)pauStack_138 << 3,8);
  }
  pauVar18 = pauStack_180;
  if (pauVar24 != (undefined1 (*) [16])0x0) {
    return;
  }
  if (pauStack_180 == (undefined1 (*) [16])0x0) {
    return;
  }
  if (pauStack_170 != (undefined1 (*) [16])0x0) {
    auVar38 = *pauStack_188;
    pauVar24 = pauStack_188 + 1;
    uVar15 = ~(uint)(ushort)((ushort)(SUB161(auVar38 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar38 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar38 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar38 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar38 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar38 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar38 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar38 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar38 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar38 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar38 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar38 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar38 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar38 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar38 >> 0x77,0) & 1) << 0xe |
                            (ushort)(byte)(auVar38[0xf] >> 7) << 0xf);
    pauVar17 = pauStack_188;
    pauVar21 = pauStack_170;
    do {
      if ((short)uVar15 == 0) {
        do {
          auVar38 = *pauVar24;
          pauVar17 = pauVar17 + -0x28;
          pauVar24 = pauVar24 + 1;
          uVar15 = (ushort)((ushort)(SUB161(auVar38 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar38 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar38 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar38 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar38 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar38 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar38 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar38 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar38 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar38 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar38 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar38 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar38 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar38 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar38 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar38[0xf] >> 7) << 0xf) ^ 0xffff;
        } while (uVar15 == 0);
      }
      uVar5 = 0;
      for (uVar6 = uVar15; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
        uVar5 = uVar5 + 1;
      }
      uVar26 = *(ulonglong *)((longlong)pauVar17 + (ulonglong)uVar5 * -0x28 + -0x20);
      if (uVar26 != 0) {
        pub_1406abac0(*(byte **)((longlong)pauVar17 + (ulonglong)uVar5 * -0x28 + -0x18),uVar26,1);
      }
      uVar15 = uVar15 - 1 & uVar15;
      pauVar21 = (undefined1 (*) [16])(pauVar21[-1] + 0xf);
    } while (pauVar21 != (undefined1 (*) [16])0x0);
  }
  uVar26 = (longlong)pauVar18 * 0x28 + 0x37U & 0xfffffffffffffff0;
  puVar23 = pauVar18[1] + uVar26 + 1;
  if (puVar23 == (undefined *)0x0) {
    return;
  }
  pauVar24 = (undefined1 (*) [16])((longlong)pauStack_188 - uVar26);
  uVar26 = 0x10;
LAB_140a6787d:
  pub_1406abac0((byte *)pauVar24,(ulonglong)puVar23,uVar26);
  return;
}

