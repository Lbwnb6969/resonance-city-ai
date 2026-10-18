// VA 0x140a43930, PDB extent 2153 bytes
// country_core::systems::backend::meshwatch::meshwatch
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/backend/meshwatch.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::backend::meshwatch::meshwatch
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/backend/meshwatch.rs
   Extent: 2153 */

void pdb_140a43930(undefined8 *param_1,longlong *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,longlong *param_6,undefined8 *param_7)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  undefined8 uVar5;
  code *pcVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  char cVar19;
  char cVar20;
  char cVar21;
  char cVar22;
  char cVar23;
  char cVar24;
  char cVar25;
  char cVar26;
  char cVar27;
  ulonglong *puVar28;
  longlong lVar29;
  char cVar30;
  char cVar31;
  ushort uVar32;
  uint uVar33;
  longlong *plVar34;
  ulonglong uVar35;
  longlong lVar36;
  ulonglong uVar37;
  longlong lVar38;
  ulonglong uVar39;
  undefined *puVar40;
  undefined1 (*pauVar41) [16];
  longlong lVar42;
  undefined1 (*pauVar43) [16];
  longlong lVar44;
  bool bVar45;
  byte bVar46;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 unaff_XMM6_Ba;
  undefined1 unaff_XMM6_Bb;
  undefined1 unaff_XMM6_Bc;
  undefined1 unaff_XMM6_Bd;
  undefined1 unaff_XMM6_Be;
  undefined1 unaff_XMM6_Bf;
  undefined1 unaff_XMM6_Bg;
  undefined1 unaff_XMM6_Bh;
  undefined1 unaff_XMM6_Bi;
  undefined1 unaff_XMM6_Bj;
  undefined1 unaff_XMM6_Bk;
  undefined1 unaff_XMM6_Bl;
  undefined1 unaff_XMM6_Bm;
  undefined1 unaff_XMM6_Bn;
  undefined1 unaff_XMM6_Bo;
  undefined1 unaff_XMM6_Bp;
  undefined1 auVar49 [16];
  undefined1 auStack_174 [20];
  undefined1 (**ppauStack_160) [16];
  code *pcStack_158;
  undefined8 *puStack_150;
  undefined8 *puStack_148;
  longlong lStack_140;
  undefined1 (*pauStack_138) [16];
  ulonglong uStack_130;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  longlong lStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined1 (***pppauStack_a8) [16];
  longlong *plStack_a0;
  undefined *puStack_98;
  undefined1 uStack_89;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  uStack_80 = 0xfffffffffffffffe;
  lVar38 = *(longlong *)*param_1;
  puVar40 = (undefined *)(lVar38 + 0x10);
  LOCK();
  bVar45 = *(char *)(lVar38 + 0x10) == '\0';
  if (bVar45) {
    *(char *)(lVar38 + 0x10) = '\x01';
  }
  UNLOCK();
  plStack_a0 = param_2;
  if (!bVar45) {
    pdb_142dc6be0(puVar40);
  }
  puVar28 = _DAT_143ca8f38;
  if ((*_DAT_143ca8f38 & 0x7fffffffffffffff) == 0) {
    uVar33 = 0;
    cVar31 = *(char *)(lVar38 + 0x11);
  }
  else {
    uVar33 = pdb_142dc79e0();
    uVar33 = uVar33 ^ 1;
    cVar31 = *(char *)(lVar38 + 0x11);
  }
  if (cVar31 != '\0') {
    uVar35 = (ulonglong)puStack_f8 >> 8;
    puStack_f8 = (undefined *)CONCAT71((int7)uVar35,(char)uVar33);
    puStack_100 = puVar40;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_14303be58,0x2b,&puStack_100,&UNK_14303be38,&UNK_14303bd70);
  }
  uStack_88 = CONCAT44(uStack_88._4_4_,uVar33);
  puStack_98 = puVar40;
  plVar34 = (longlong *)pdb_140f3bda0();
  puStack_150 = param_3;
  puStack_148 = param_4;
  if ((char)plVar34[2] == '\x01') {
    lVar44 = *plVar34;
    param_2 = (longlong *)plVar34[1];
  }
  else {
    lVar44 = pdb_140f4fd10();
    *plVar34 = lVar44;
    plVar34[1] = (longlong)param_2;
    *(undefined1 *)(plVar34 + 2) = 1;
  }
  *plVar34 = lVar44 + 1;
  uVar5 = _UNK_14303b768;
  pauStack_138 = *(undefined1 (**) [16])(lVar38 + 0x18);
  uStack_130 = *(ulonglong *)(lVar38 + 0x20);
  uStack_128 = *(undefined4 *)(lVar38 + 0x28);
  uStack_124 = *(undefined4 *)(lVar38 + 0x2c);
  uStack_120 = *(undefined4 *)(lVar38 + 0x30);
  uStack_11c = *(undefined4 *)(lVar38 + 0x34);
  uStack_118 = *(undefined4 *)(lVar38 + 0x38);
  uStack_114 = *(undefined4 *)(lVar38 + 0x3c);
  uStack_110 = *(undefined4 *)(lVar38 + 0x40);
  uStack_10c = *(undefined4 *)(lVar38 + 0x44);
  *(undefined8 *)(lVar38 + 0x18) = _DAT_14303b760;
  *(undefined8 *)(lVar38 + 0x20) = uVar5;
  uVar5 = _UNK_14303b778;
  *(undefined8 *)(lVar38 + 0x28) = _DAT_14303b770;
  *(undefined8 *)(lVar38 + 0x30) = uVar5;
  *(longlong *)(lVar38 + 0x38) = lVar44;
  *(longlong **)(lVar38 + 0x40) = param_2;
  pcVar1 = (char *)(lVar38 + 0x10);
  if ((((char)uStack_88 == '\0') && ((*puVar28 & 0x7fffffffffffffff) != 0)) &&
     (cVar31 = pdb_142dc79e0(), cVar31 == '\0')) {
    *(undefined1 *)(lVar38 + 0x11) = 1;
  }
  LOCK();
  cVar31 = *pcVar1;
  *pcVar1 = '\0';
  UNLOCK();
  if (cVar31 == '\x02') {
    pdb_142dc6ca0(pcVar1);
  }
  if (CONCAT44(uStack_11c,uStack_120) != 0) {
    if (2 < *_DAT_143ca8e90) {
      ppauStack_160 = &pauStack_138;
      pcStack_158 = pdb_140b80a00;
      puStack_100 = (undefined *)0x0;
      puStack_f8 = &UNK_14303bda8;
      uStack_f0 = 0x29;
      uStack_e8 = 0;
      uStack_e0 = &UNK_14303bd38;
      uStack_d8 = 0x34;
      lStack_d0 = 3;
      puStack_c8 = &UNK_14303bda8;
      uStack_c0 = 0x29;
      uStack_b8 = 0x1e00000001;
      puStack_b0 = &UNK_14303bd88;
      pppauStack_a8 = &ppauStack_160;
      pdb_140f332f0(&uStack_89,&puStack_100);
    }
    lVar38 = *plStack_a0;
    puStack_98 = (undefined *)(lVar38 + 0x20);
    iVar9 = -(uint)(CONCAT13(unaff_XMM6_Bd,
                             CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))) ==
                   CONCAT13(unaff_XMM6_Bd,
                            CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))));
    iVar10 = -(uint)(CONCAT13(unaff_XMM6_Bh,
                              CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be))) ==
                    CONCAT13(unaff_XMM6_Bh,
                             CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be))));
    iVar11 = -(uint)(CONCAT13(unaff_XMM6_Bl,
                              CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi))) ==
                    CONCAT13(unaff_XMM6_Bl,
                             CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi))));
    iVar12 = -(uint)(CONCAT13(unaff_XMM6_Bp,
                              CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm))) ==
                    CONCAT13(unaff_XMM6_Bp,
                             CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm))));
    lVar44 = 0;
    do {
      puVar40 = *(undefined **)(&UNK_14303bde8 + lVar44);
      uVar35 = pdb_140a2c860(lVar38);
      lVar29 = lStack_140;
      if (uVar35 == 1) {
        puStack_100 = puVar40;
        pdb_140a2b260(lVar38);
        lVar36 = pdb_140bf4880(lVar38 + 0x20,&puStack_100);
        uVar35 = 0;
        lVar29 = lStack_140;
        if (((lVar36 != 0) && (uVar35 = 0, !SBORROW8(0,*(longlong *)(lVar36 + 0x18)))) &&
           (CONCAT44(uStack_11c,uStack_120) != 0)) {
          uVar37 = pdb_1417c4360(&uStack_118,lVar36 + 0x18);
          pauVar43 = pauStack_138;
          bVar46 = (byte)(uVar37 >> 0x39);
          auVar48 = ZEXT216(CONCAT11(bVar46,bVar46));
          auVar48 = pshuflw(auVar48,auVar48,0);
          lVar42 = 0;
          uVar39 = uStack_130;
          while( true ) {
            uVar37 = uVar37 & uVar39;
            pcVar1 = *pauVar43 + uVar37;
            cVar31 = *pcVar1;
            cVar13 = pcVar1[1];
            cVar14 = pcVar1[2];
            cVar15 = pcVar1[3];
            cVar16 = pcVar1[4];
            cVar17 = pcVar1[5];
            cVar18 = pcVar1[6];
            cVar19 = pcVar1[7];
            cVar20 = pcVar1[8];
            cVar21 = pcVar1[9];
            cVar22 = pcVar1[10];
            cVar23 = pcVar1[0xb];
            cVar24 = pcVar1[0xc];
            cVar25 = pcVar1[0xd];
            cVar26 = pcVar1[0xe];
            cVar27 = pcVar1[0xf];
            auVar47[0] = -(cVar31 == auVar48[0]);
            auVar47[1] = -(cVar13 == auVar48[1]);
            auVar47[2] = -(cVar14 == auVar48[2]);
            auVar47[3] = -(cVar15 == auVar48[3]);
            auVar47[4] = -(cVar16 == auVar48[4]);
            auVar47[5] = -(cVar17 == auVar48[5]);
            auVar47[6] = -(cVar18 == auVar48[6]);
            auVar47[7] = -(cVar19 == auVar48[7]);
            auVar47[8] = -(cVar20 == auVar48[0]);
            auVar47[9] = -(cVar21 == auVar48[1]);
            auVar47[10] = -(cVar22 == auVar48[2]);
            auVar47[0xb] = -(cVar23 == auVar48[3]);
            auVar47[0xc] = -(cVar24 == auVar48[4]);
            auVar47[0xd] = -(cVar25 == auVar48[5]);
            auVar47[0xe] = -(cVar26 == auVar48[6]);
            auVar47[0xf] = -(cVar27 == auVar48[7]);
            uVar32 = (ushort)(SUB161(auVar47 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar47 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar47 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar47 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar47 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar47 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar47 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar47 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar47 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar47 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar47 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar47 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar47 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar47 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar47 >> 0x77,0) & 1) << 0xe |
                     (ushort)(auVar47[0xf] >> 7) << 0xf;
            uVar33 = (uint)uVar32;
            lVar29 = lStack_140;
            while (lStack_140 = lVar42, uVar32 != 0) {
              uVar7 = 0;
              for (uVar8 = uVar33; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
                uVar7 = uVar7 + 1;
              }
              uStack_88 = uVar39;
              cVar30 = pdb_1417cd920(lVar36 + 0x18,pauVar43 + (uVar7 + uVar37 & uVar39) * -2 + -2);
              if (cVar30 != '\0') {
                uStack_88 = uStack_88 & 0xffffffff00000000;
                goto LAB_140a43c82;
              }
              uVar32 = (ushort)(uVar33 - 1) & (ushort)uVar33;
              uVar33 = CONCAT22((short)(uVar33 - 1 >> 0x10),uVar32);
              uVar39 = uStack_88;
              lVar42 = lStack_140;
              lVar29 = lStack_140;
            }
            auVar49[0] = -(cVar31 == (char)iVar9);
            auVar49[1] = -(cVar13 == (char)((uint)iVar9 >> 8));
            auVar49[2] = -(cVar14 == (char)((uint)iVar9 >> 0x10));
            auVar49[3] = -(cVar15 == (char)((uint)iVar9 >> 0x18));
            auVar49[4] = -(cVar16 == (char)iVar10);
            auVar49[5] = -(cVar17 == (char)((uint)iVar10 >> 8));
            auVar49[6] = -(cVar18 == (char)((uint)iVar10 >> 0x10));
            auVar49[7] = -(cVar19 == (char)((uint)iVar10 >> 0x18));
            auVar49[8] = -(cVar20 == (char)iVar11);
            auVar49[9] = -(cVar21 == (char)((uint)iVar11 >> 8));
            auVar49[10] = -(cVar22 == (char)((uint)iVar11 >> 0x10));
            auVar49[0xb] = -(cVar23 == (char)((uint)iVar11 >> 0x18));
            auVar49[0xc] = -(cVar24 == (char)iVar12);
            auVar49[0xd] = -(cVar25 == (char)((uint)iVar12 >> 8));
            auVar49[0xe] = -(cVar26 == (char)((uint)iVar12 >> 0x10));
            auVar49[0xf] = -(cVar27 == (char)((uint)iVar12 >> 0x18));
            uVar32 = (ushort)(SUB161(auVar49 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar49 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar49 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar49 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar49 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar49 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar49 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar49 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar49 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar49 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar49 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar49 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar49 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar49 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar49 >> 0x77,0) & 1) << 0xe |
                     (ushort)(auVar49[0xf] >> 7) << 0xf;
            uVar35 = (ulonglong)uVar32;
            if (uVar32 != 0) break;
            uVar37 = uVar37 + lStack_140 + 0x10;
            lVar42 = lStack_140 + 0x10;
            lStack_140 = lVar29;
          }
        }
      }
      lStack_140 = lVar29;
      lVar44 = lVar44 + 0x10;
    } while (lVar44 != 0x20);
    uStack_88 = CONCAT44(uStack_88._4_4_,(int)CONCAT71((int7)(uVar35 >> 8),1));
LAB_140a43c82:
    lVar44 = CONCAT44(uStack_11c,uStack_120);
    auVar48 = *pauStack_138;
    pauVar43 = pauStack_138 + 1;
    uVar33 = ~(uint)(ushort)((ushort)(SUB161(auVar48 >> 7,0) & 1) |
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
    uVar2 = *(undefined4 *)((longlong)plStack_a0 + 0x1c);
    puVar3 = (undefined4 *)plStack_a0[2];
    pauVar41 = pauStack_138;
    while (bVar45 = lVar44 != 0, lVar44 = lVar44 + -1, bVar45) {
      if ((short)uVar33 == 0) {
        do {
          auVar48 = *pauVar43;
          pauVar41 = pauVar41 + -0x20;
          pauVar43 = pauVar43 + 1;
          uVar33 = (ushort)((ushort)(SUB161(auVar48 >> 7,0) & 1) |
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
        } while (uVar33 == 0);
      }
      iVar9 = 0;
      for (uVar7 = uVar33; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
        iVar9 = iVar9 + 1;
      }
      uVar33 = uVar33 - 1 & uVar33;
      *puVar3 = uVar2;
      pdb_140a2bbb0(lVar38,*(undefined8 *)
                            ((longlong)pauVar41 + (-0x18 - (ulonglong)(uint)(iVar9 << 5))),
                    *(undefined8 *)((longlong)pauVar41 + (-0x10 - (ulonglong)(uint)(iVar9 << 5))));
    }
    plVar34 = (longlong *)*param_5;
    if ((char)uStack_88 == '\0' && plVar34 != (longlong *)0x0) {
      puVar3 = (undefined4 *)param_5[2];
      uVar2 = *(undefined4 *)((longlong)param_5 + 0x1c);
      plVar4 = (longlong *)*puStack_150;
      pdb_140e57ef0(*plVar4 + 0x10);
      puVar40 = &UNK_14303bdd8;
      puStack_100 = &UNK_14303bdd8;
      puStack_f8 = (undefined *)0xb;
      uVar35 = pdb_140a2c860(lVar38,&UNK_14303bdd8,0xb);
      if ((uVar35 & 1) == 0) {
        pdb_142d8e410(&puStack_100);
      }
      else {
        puStack_100 = puVar40;
        pdb_140a2b260(lVar38);
        lVar44 = pdb_140bf4880(lVar38 + 0x20,&puStack_100);
        if (lVar44 == 0) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc8150(&UNK_14303be08);
        }
        pdb_140b0b280(auStack_174,lVar44,_DAT_143006a28,_DAT_143006a28);
        *(undefined4 *)puStack_148[2] = *(undefined4 *)((longlong)puStack_148 + 0x1c);
        uVar5 = *puStack_148;
        puVar40 = &UNK_14303bdd1;
        puStack_100 = &UNK_14303bdd1;
        puStack_f8 = (undefined *)0x7;
        uVar35 = pdb_140a2c860(lVar38,&UNK_14303bdd1,7);
        if ((uVar35 & 1) != 0) {
          puStack_100 = puVar40;
          pdb_140a2b260(lVar38);
          lVar38 = pdb_140bf4880(puStack_98,&puStack_100);
          if (lVar38 == 0) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc8150(&UNK_14303be20);
          }
          pdb_140b0b460(&puStack_100,plVar4,uVar5,lVar38,auStack_174);
          *puVar3 = uVar2;
          if (*plVar34 != 0) {
            pub_1406abac0((byte *)plVar34[1],*plVar34 << 2,4);
          }
          plVar34[6] = lStack_d0;
          *(undefined4 *)(plVar34 + 4) = (undefined4)uStack_e0;
          *(undefined4 *)((longlong)plVar34 + 0x24) = uStack_e0._4_4_;
          *(undefined4 *)(plVar34 + 5) = (undefined4)uStack_d8;
          *(undefined4 *)((longlong)plVar34 + 0x2c) = uStack_d8._4_4_;
          *(undefined4 *)(plVar34 + 2) = (undefined4)uStack_f0;
          *(undefined4 *)((longlong)plVar34 + 0x14) = uStack_f0._4_4_;
          *(undefined4 *)(plVar34 + 3) = (undefined4)uStack_e8;
          *(undefined4 *)((longlong)plVar34 + 0x1c) = uStack_e8._4_4_;
          *plVar34 = (longlong)puStack_100;
          plVar34[1] = (longlong)puStack_f8;
          *(undefined4 *)param_6[2] = *(undefined4 *)((longlong)param_6 + 0x1c);
          lVar38 = *param_6;
          lVar44 = *(longlong *)(lVar38 + 0x30);
          uVar5 = *(undefined8 *)(lVar38 + 0x40);
          if (lVar44 == *(longlong *)(lVar38 + 0x20)) {
            pdb_142d7e8a0(lVar38 + 0x20);
          }
          *(undefined8 *)(*(longlong *)(lVar38 + 0x28) + lVar44 * 8) = uVar5;
          *(longlong *)(lVar38 + 0x30) = lVar44 + 1;
          *(longlong *)(lVar38 + 0x40) = *(longlong *)(lVar38 + 0x40) + 1;
          LOCK();
          *(longlong *)*param_7 = *(longlong *)*param_7 + 1;
          UNLOCK();
          goto LAB_140a43ebe;
        }
        pdb_142d8e410(&puStack_100);
      }
                    /* WARNING: Does not return */
      pcVar6 = (code *)invalidInstructionException();
      (*pcVar6)();
    }
  }
LAB_140a43ebe:
  uVar35 = uStack_130;
  if (uStack_130 != 0) {
    lVar38 = CONCAT44(uStack_11c,uStack_120);
    if (lVar38 != 0) {
      auVar48 = *pauStack_138;
      pauVar43 = pauStack_138 + 1;
      uVar33 = ~(uint)(ushort)((ushort)(SUB161(auVar48 >> 7,0) & 1) |
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
      pauVar41 = pauStack_138;
      do {
        if ((short)uVar33 == 0) {
          do {
            auVar48 = *pauVar43;
            pauVar41 = pauVar41 + -0x20;
            pauVar43 = pauVar43 + 1;
            uVar33 = (ushort)((ushort)(SUB161(auVar48 >> 7,0) & 1) |
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
          } while (uVar33 == 0);
        }
        iVar9 = 0;
        for (uVar7 = uVar33; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
          iVar9 = iVar9 + 1;
        }
        uVar39 = *(ulonglong *)((longlong)pauVar41 + (-0x20 - (ulonglong)(uint)(iVar9 << 5)));
        if (uVar39 != 0) {
          pub_1406abac0(*(byte **)((longlong)pauVar41 + (-0x18 - (ulonglong)(uint)(iVar9 << 5))),
                        uVar39,1);
        }
        uVar33 = uVar33 - 1 & uVar33;
        lVar38 = lVar38 + -1;
      } while (lVar38 != 0);
    }
    lVar38 = uVar35 * 0x20 + 0x20;
    uVar35 = uVar35 + lVar38 + 0x11;
    if (uVar35 != 0) {
      pub_1406abac0((byte *)((longlong)pauStack_138 - lVar38),uVar35,0x10);
    }
  }
  return;
}

