// VA 0x140c244f0, PDB extent 2708 bytes
// country_core::systems::grass2::load_grass2_textures
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/grass2/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::grass2::load_grass2_textures
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/grass2/mod.rs
   Extent: 2708 */

void pdb_140c244f0(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  char cVar11;
  longlong *plVar12;
  ulonglong uVar13;
  byte *pbVar14;
  longlong lVar15;
  longlong lVar16;
  undefined8 uVar17;
  uint uVar18;
  ulonglong *puVar19;
  ulonglong uVar20;
  longlong lVar21;
  longlong lVar22;
  ushort uVar23;
  longlong lVar24;
  byte bVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 unaff_XMM6_Ba;
  undefined1 unaff_XMM6_Bb;
  char cVar31;
  undefined1 unaff_XMM6_Bc;
  char cVar32;
  undefined1 unaff_XMM6_Bd;
  char cVar33;
  undefined1 unaff_XMM6_Be;
  undefined1 unaff_XMM6_Bf;
  char cVar34;
  undefined1 unaff_XMM6_Bg;
  char cVar35;
  undefined1 unaff_XMM6_Bh;
  char cVar36;
  undefined1 unaff_XMM6_Bi;
  undefined1 unaff_XMM6_Bj;
  char cVar37;
  undefined1 unaff_XMM6_Bk;
  char cVar38;
  undefined1 unaff_XMM6_Bl;
  char cVar39;
  undefined1 unaff_XMM6_Bm;
  undefined1 unaff_XMM6_Bn;
  char cVar40;
  undefined1 unaff_XMM6_Bo;
  char cVar41;
  undefined1 unaff_XMM6_Bp;
  char cVar42;
  ulonglong uStack_148;
  byte *pbStack_140;
  undefined8 uStack_138;
  longlong lStack_128;
  longlong lStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  longlong lStack_108;
  longlong lStack_100;
  ulonglong *puStack_f8;
  longlong lStack_f0;
  longlong lStack_e8;
  longlong lStack_e0;
  ulonglong uStack_d8;
  ulonglong *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  byte *pbStack_b0;
  ulonglong uStack_a8;
  byte *pbStack_a0;
  ulonglong uStack_98;
  undefined8 uStack_90;
  ulonglong uStack_88;
  byte *pbStack_80;
  ulonglong uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  lVar15 = param_3[0x11];
  uStack_c8 = param_1;
  uStack_b8 = param_2;
  pdb_140dca300(&uStack_148,lVar15,param_3[0x12]);
  plVar12 = (longlong *)pdb_140f3bda0();
  if ((char)plVar12[2] == '\x01') {
    lStack_108 = *plVar12;
    lVar15 = plVar12[1];
  }
  else {
    lStack_108 = pdb_140f4fd10();
    *plVar12 = lStack_108;
    plVar12[1] = lVar15;
    *(undefined1 *)(plVar12 + 2) = 1;
  }
  *plVar12 = lStack_108 + 1;
  uStack_118 = _DAT_14306af80;
  uStack_110 = _UNK_14306af88;
  lStack_128 = _DAT_14306af70;
  lStack_120 = _UNK_14306af78;
  lVar22 = param_3[0xd];
  lVar1 = lVar22 + param_3[0xe] * 0x48;
  lStack_e0 = param_3[3];
  lStack_e8 = *param_3;
  uStack_d8 = param_3[1];
  pbStack_b0 = pbStack_140;
  uStack_c0 = uStack_138;
  iVar7 = -(uint)(CONCAT13(unaff_XMM6_Bd,
                           CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))) ==
                 CONCAT13(unaff_XMM6_Bd,
                          CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))));
  cVar31 = (char)((uint)iVar7 >> 8);
  cVar32 = (char)((uint)iVar7 >> 0x10);
  cVar33 = (char)((uint)iVar7 >> 0x18);
  iVar8 = -(uint)(CONCAT13(unaff_XMM6_Bh,
                           CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be))) ==
                 CONCAT13(unaff_XMM6_Bh,
                          CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be))));
  cVar34 = (char)((uint)iVar8 >> 8);
  cVar35 = (char)((uint)iVar8 >> 0x10);
  cVar36 = (char)((uint)iVar8 >> 0x18);
  iVar9 = -(uint)(CONCAT13(unaff_XMM6_Bl,
                           CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi))) ==
                 CONCAT13(unaff_XMM6_Bl,
                          CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi))));
  cVar37 = (char)((uint)iVar9 >> 8);
  cVar38 = (char)((uint)iVar9 >> 0x10);
  cVar39 = (char)((uint)iVar9 >> 0x18);
  iVar10 = -(uint)(CONCAT13(unaff_XMM6_Bp,
                            CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm))) ==
                  CONCAT13(unaff_XMM6_Bp,
                           CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm))));
  cVar40 = (char)((uint)iVar10 >> 8);
  cVar41 = (char)((uint)iVar10 >> 0x10);
  cVar42 = (char)((uint)iVar10 >> 0x18);
  lVar21 = 0;
  puVar19 = (ulonglong *)0x0;
  lStack_100 = lVar15;
LAB_140c245c1:
  do {
    lVar15 = lStack_f0;
    if ((puVar19 == (ulonglong *)0x0) || (puVar19 == puStack_f8)) {
      do {
        while ((lVar24 = lVar21, lVar24 != 0 && (lVar24 != lVar15))) {
          lVar21 = lVar24 + 0xd0;
          lVar16 = *(longlong *)(lVar24 + 0x98);
          if (lVar16 != 0) goto LAB_140c24727;
        }
        do {
          lVar15 = lVar22;
          if (lVar15 == lVar1) {
            uStack_70 = pdb_140b8f650(uStack_c8,pbStack_b0,uStack_c0,&DAT_14306ace3,0x19,param_3[6],
                                      param_3[7]);
            uStack_88 = 0x8000000000000000;
            pdb_14007ee60();
            pbVar14 = pub_1406abab0(0x19,1);
            uVar3 = _UNK_14306acf4;
            if (pbVar14 == (byte *)0x0) {
              pdb_142dc7e2a(1,0x19);
            }
            else {
              *(ulonglong *)(pbVar14 + 9) = CONCAT17(UNK_14306acf3,_DAT_14306acec);
              *(undefined8 *)(pbVar14 + 0x11) = uVar3;
              uVar3 = CONCAT71(_DAT_14306acec,UNK_14306aceb);
              *(undefined8 *)pbVar14 = _DAT_14306ace3;
              *(undefined8 *)(pbVar14 + 8) = uVar3;
              uStack_88 = 0x19;
              uStack_78 = 0x19;
              uStack_a8 = 0x19;
              uStack_98 = 0x19;
              uStack_90 = uStack_70;
              pbStack_a0 = pbVar14;
              pbStack_80 = pbVar14;
              pdb_140a2dcf0(uStack_b8,&uStack_a8);
              uStack_70 = pdb_140b8f650(uStack_c8,pbStack_b0,uStack_c0,&DAT_14306acfc,0x21,
                                        param_3[8],param_3[9]);
              uStack_88 = 0x8000000000000000;
              pdb_14007ee60();
              pbVar14 = pub_1406abab0(0x21,1);
              uVar3 = _UNK_14306ad14;
              if (pbVar14 == (byte *)0x0) {
                pdb_142dc7e2a(1,0x21);
              }
              else {
                *(undefined8 *)(pbVar14 + 0x10) = _DAT_14306ad0c;
                *(undefined8 *)(pbVar14 + 0x18) = uVar3;
                uVar3 = _UNK_14306ad04;
                *(undefined8 *)pbVar14 = _DAT_14306acfc;
                *(undefined8 *)(pbVar14 + 8) = uVar3;
                pbVar14[0x20] = 0x6f;
                uStack_88 = 0x21;
                uStack_78 = 0x21;
                uStack_a8 = 0x21;
                uStack_98 = 0x21;
                uStack_90 = uStack_70;
                pbStack_a0 = pbVar14;
                pbStack_80 = pbVar14;
                pdb_140a2dcf0(uStack_b8,&uStack_a8);
                uStack_70 = pdb_140b8f650(uStack_c8,pbStack_b0,uStack_c0,&DAT_14306ad1d,0x21,
                                          param_3[10],param_3[0xb]);
                uStack_88 = 0x8000000000000000;
                pdb_14007ee60();
                pbVar14 = pub_1406abab0(0x21,1);
                uVar3 = _UNK_14306ad35;
                if (pbVar14 != (byte *)0x0) {
                  *(undefined8 *)(pbVar14 + 0x10) = _DAT_14306ad2d;
                  *(undefined8 *)(pbVar14 + 0x18) = uVar3;
                  uVar3 = _UNK_14306ad25;
                  *(undefined8 *)pbVar14 = _DAT_14306ad1d;
                  *(undefined8 *)(pbVar14 + 8) = uVar3;
                  pbVar14[0x20] = 0x6c;
                  uStack_88 = 0x21;
                  uStack_78 = 0x21;
                  uStack_a8 = 0x21;
                  uStack_98 = 0x21;
                  uStack_90 = uStack_70;
                  pbStack_a0 = pbVar14;
                  pbStack_80 = pbVar14;
                  pdb_140a2dcf0(uStack_b8,&uStack_a8);
                  if (lStack_120 != 0) {
                    lVar15 = lStack_120 * 0x10 + 0x10;
                    uVar20 = lStack_120 + lVar15 + 0x11;
                    if (uVar20 != 0) {
                      pub_1406abac0((byte *)(lStack_128 - lVar15),uVar20,0x10);
                    }
                  }
                  if (uStack_148 != 0) {
                    pub_1406abac0(pbStack_b0,uStack_148,1);
                  }
                  return;
                }
                pdb_142dc7e2a(1,0x21);
              }
            }
            goto LAB_140c24d51;
          }
          lVar22 = lVar15 + 0x48;
        } while (*(longlong *)(lVar15 + 0x28) == 0);
        lVar24 = *(longlong *)(lVar15 + 0x20);
        lVar15 = *(longlong *)(lVar15 + 0x28) * 0xd0 + lVar24;
        lVar21 = lVar24 + 0xd0;
        lVar16 = *(longlong *)(lVar24 + 0x98);
      } while (lVar16 == 0);
LAB_140c24727:
      puVar19 = *(ulonglong **)(lVar24 + 0x90);
      puStack_f8 = puVar19 + lVar16 * 6;
      lStack_f0 = lVar15;
    }
    uVar20 = *puVar19;
    pbVar14 = (byte *)puVar19[1];
    puStack_d0 = puVar19;
    cVar11 = pdb_1417ba090(&lStack_128,uVar20,pbVar14);
    if (cVar11 == '\0') {
      uStack_a8 = uVar20;
      pbStack_a0 = pbVar14;
      uStack_88 = uVar20;
      pbStack_80 = pbVar14;
      if (lStack_e0 != 0) {
        uVar13 = pdb_1417c4090(param_3 + 4,&uStack_88);
        bVar25 = (byte)(uVar13 >> 0x39);
        auVar26 = ZEXT216(CONCAT11(bVar25,bVar25));
        auVar26 = pshuflw(auVar26,auVar26,0);
        lVar15 = 0;
        do {
          uVar13 = uVar13 & uStack_d8;
          auVar2 = *(undefined1 (*) [16])(lStack_e8 + uVar13);
          auVar29[0] = -(auVar2[0] == auVar26[0]);
          auVar29[1] = -(auVar2[1] == auVar26[1]);
          auVar29[2] = -(auVar2[2] == auVar26[2]);
          auVar29[3] = -(auVar2[3] == auVar26[3]);
          auVar29[4] = -(auVar2[4] == auVar26[4]);
          auVar29[5] = -(auVar2[5] == auVar26[5]);
          auVar29[6] = -(auVar2[6] == auVar26[6]);
          auVar29[7] = -(auVar2[7] == auVar26[7]);
          auVar29[8] = -(auVar2[8] == auVar26[0]);
          auVar29[9] = -(auVar2[9] == auVar26[1]);
          auVar29[10] = -(auVar2[10] == auVar26[2]);
          auVar29[0xb] = -(auVar2[0xb] == auVar26[3]);
          auVar29[0xc] = -(auVar2[0xc] == auVar26[4]);
          auVar29[0xd] = -(auVar2[0xd] == auVar26[5]);
          auVar29[0xe] = -(auVar2[0xe] == auVar26[6]);
          auVar29[0xf] = -(auVar2[0xf] == auVar26[7]);
          uVar23 = (ushort)(SUB161(auVar29 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar29 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar29 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar29 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar29 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar29 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar29 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar29 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar29 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar29 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar29 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar29 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar29 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar29 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar29 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar29[0xf] >> 7) << 0xf;
          uVar18 = (uint)uVar23;
          while (uVar23 != 0) {
            uVar5 = 0;
            for (uVar6 = uVar18; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
              uVar5 = uVar5 + 1;
            }
            lVar24 = (uVar5 + uVar13 & uStack_d8) * -0x30;
            if (*(ulonglong *)(lStack_e8 + -0x30 + lVar24) == uVar20 &&
                *(byte **)(lStack_e8 + -0x28 + lVar24) == pbVar14) {
              uVar3 = *(undefined8 *)(lVar24 + lStack_e8 + -0x18);
              uVar13 = *(ulonglong *)(lVar24 + lStack_e8 + -0x10);
              uStack_70 = pdb_140b8f650(uStack_c8,pbStack_b0,uStack_c0,uVar3,uVar13,uVar20,pbVar14);
              uStack_88 = 0x8000000000000000;
              if ((longlong)uVar13 < 0) {
                uVar17 = 0;
LAB_140c24ce3:
                pdb_142dc7e2a(uVar17,uVar13);
                goto LAB_140c24d51;
              }
              if (uVar13 == 0) {
                pbVar14 = (byte *)0x1;
              }
              else {
                pdb_14007ee60();
                pbVar14 = pub_1406abab0(uVar13,1);
                uVar17 = 1;
                if (pbVar14 == (byte *)0x0) goto LAB_140c24ce3;
                pub_142e32760(pbVar14,uVar3,uVar13);
              }
              uStack_90 = uStack_70;
              uStack_a8 = uVar13;
              pbStack_a0 = pbVar14;
              uStack_98 = uVar13;
              uStack_88 = uVar13;
              pbStack_80 = pbVar14;
              uStack_78 = uVar13;
              pdb_140a2dcf0(uStack_b8,&uStack_a8);
              goto LAB_140c24820;
            }
            uVar23 = (ushort)(uVar18 - 1) & (ushort)uVar18;
            uVar18 = CONCAT22((short)(uVar18 - 1 >> 0x10),uVar23);
          }
          auVar27[0] = -(auVar2[0] == (char)iVar7);
          auVar27[1] = -(auVar2[1] == cVar31);
          auVar27[2] = -(auVar2[2] == cVar32);
          auVar27[3] = -(auVar2[3] == cVar33);
          auVar27[4] = -(auVar2[4] == (char)iVar8);
          auVar27[5] = -(auVar2[5] == cVar34);
          auVar27[6] = -(auVar2[6] == cVar35);
          auVar27[7] = -(auVar2[7] == cVar36);
          auVar27[8] = -(auVar2[8] == (char)iVar9);
          auVar27[9] = -(auVar2[9] == cVar37);
          auVar27[10] = -(auVar2[10] == cVar38);
          auVar27[0xb] = -(auVar2[0xb] == cVar39);
          auVar27[0xc] = -(auVar2[0xc] == (char)iVar10);
          auVar27[0xd] = -(auVar2[0xd] == cVar40);
          auVar27[0xe] = -(auVar2[0xe] == cVar41);
          auVar27[0xf] = -(auVar2[0xf] == cVar42);
          if ((((((((((((((((SUB161(auVar27 >> 7,0) & 1) != 0 || (SUB161(auVar27 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar27 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar27 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar27 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar27 >> 0x2f,0) & 1) != 0) || (SUB161(auVar27 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar27 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar27 >> 0x47,0) & 1) != 0) || (SUB161(auVar27 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar27 >> 0x57,0) & 1) != 0) || (SUB161(auVar27 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar27 >> 0x67,0) & 1) != 0) || (SUB161(auVar27 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar27 >> 0x77,0) & 1) != 0) || auVar27[0xf] < '\0') break;
          uVar13 = uVar13 + lVar15 + 0x10;
          lVar15 = lVar15 + 0x10;
        } while( true );
      }
      pdb_142d907f0(&uStack_a8);
LAB_140c24d51:
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
LAB_140c24820:
    uVar20 = puStack_d0[2];
    pbVar14 = (byte *)puStack_d0[3];
    cVar11 = pdb_1417ba090(&lStack_128,uVar20,pbVar14);
    puVar19 = puStack_d0 + 6;
    if (cVar11 == '\0') {
      puStack_d0 = puVar19;
      uStack_a8 = uVar20;
      pbStack_a0 = pbVar14;
      uStack_88 = uVar20;
      pbStack_80 = pbVar14;
      if (lStack_e0 != 0) {
        uVar13 = pdb_1417c4090(param_3 + 4,&uStack_88);
        bVar25 = (byte)(uVar13 >> 0x39);
        auVar26 = ZEXT216(CONCAT11(bVar25,bVar25));
        auVar26 = pshuflw(auVar26,auVar26,0);
        lVar15 = 0;
        do {
          uVar13 = uVar13 & uStack_d8;
          auVar2 = *(undefined1 (*) [16])(lStack_e8 + uVar13);
          auVar30[0] = -(auVar2[0] == auVar26[0]);
          auVar30[1] = -(auVar2[1] == auVar26[1]);
          auVar30[2] = -(auVar2[2] == auVar26[2]);
          auVar30[3] = -(auVar2[3] == auVar26[3]);
          auVar30[4] = -(auVar2[4] == auVar26[4]);
          auVar30[5] = -(auVar2[5] == auVar26[5]);
          auVar30[6] = -(auVar2[6] == auVar26[6]);
          auVar30[7] = -(auVar2[7] == auVar26[7]);
          auVar30[8] = -(auVar2[8] == auVar26[0]);
          auVar30[9] = -(auVar2[9] == auVar26[1]);
          auVar30[10] = -(auVar2[10] == auVar26[2]);
          auVar30[0xb] = -(auVar2[0xb] == auVar26[3]);
          auVar30[0xc] = -(auVar2[0xc] == auVar26[4]);
          auVar30[0xd] = -(auVar2[0xd] == auVar26[5]);
          auVar30[0xe] = -(auVar2[0xe] == auVar26[6]);
          auVar30[0xf] = -(auVar2[0xf] == auVar26[7]);
          uVar23 = (ushort)(SUB161(auVar30 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar30 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar30 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar30 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar30 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar30 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar30 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar30 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar30 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar30 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar30 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar30 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar30 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar30 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar30 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar30[0xf] >> 7) << 0xf;
          uVar18 = (uint)uVar23;
          while (uVar23 != 0) {
            uVar5 = 0;
            for (uVar6 = uVar18; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
              uVar5 = uVar5 + 1;
            }
            lVar24 = (uVar5 + uVar13 & uStack_d8) * -0x30;
            if (*(ulonglong *)(lStack_e8 + -0x30 + lVar24) == uVar20 &&
                *(byte **)(lStack_e8 + -0x28 + lVar24) == pbVar14) {
              uVar3 = *(undefined8 *)(lVar24 + lStack_e8 + -0x18);
              uVar13 = *(ulonglong *)(lVar24 + lStack_e8 + -0x10);
              uStack_70 = pdb_140b8f650(uStack_c8,pbStack_b0,uStack_c0,uVar3,uVar13,uVar20,pbVar14);
              uStack_88 = 0x8000000000000000;
              if ((longlong)uVar13 < 0) {
                uVar17 = 0;
LAB_140c24cfc:
                pdb_142dc7e2a(uVar17,uVar13);
                goto LAB_140c24d51;
              }
              if (uVar13 == 0) {
                pbVar14 = (byte *)0x1;
              }
              else {
                pdb_14007ee60();
                pbVar14 = pub_1406abab0(uVar13,1);
                uVar17 = 1;
                if (pbVar14 == (byte *)0x0) goto LAB_140c24cfc;
                pub_142e32760(pbVar14,uVar3,uVar13);
              }
              uStack_90 = uStack_70;
              uStack_a8 = uVar13;
              pbStack_a0 = pbVar14;
              uStack_98 = uVar13;
              uStack_88 = uVar13;
              pbStack_80 = pbVar14;
              uStack_78 = uVar13;
              pdb_140a2dcf0(uStack_b8,&uStack_a8);
              puVar19 = puStack_d0;
              goto LAB_140c245c1;
            }
            uVar23 = (ushort)(uVar18 - 1) & (ushort)uVar18;
            uVar18 = CONCAT22((short)(uVar18 - 1 >> 0x10),uVar23);
          }
          auVar28[0] = -(auVar2[0] == (char)iVar7);
          auVar28[1] = -(auVar2[1] == cVar31);
          auVar28[2] = -(auVar2[2] == cVar32);
          auVar28[3] = -(auVar2[3] == cVar33);
          auVar28[4] = -(auVar2[4] == (char)iVar8);
          auVar28[5] = -(auVar2[5] == cVar34);
          auVar28[6] = -(auVar2[6] == cVar35);
          auVar28[7] = -(auVar2[7] == cVar36);
          auVar28[8] = -(auVar2[8] == (char)iVar9);
          auVar28[9] = -(auVar2[9] == cVar37);
          auVar28[10] = -(auVar2[10] == cVar38);
          auVar28[0xb] = -(auVar2[0xb] == cVar39);
          auVar28[0xc] = -(auVar2[0xc] == (char)iVar10);
          auVar28[0xd] = -(auVar2[0xd] == cVar40);
          auVar28[0xe] = -(auVar2[0xe] == cVar41);
          auVar28[0xf] = -(auVar2[0xf] == cVar42);
          if ((((((((((((((((SUB161(auVar28 >> 7,0) & 1) != 0 || (SUB161(auVar28 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar28 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar28 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar28 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar28 >> 0x2f,0) & 1) != 0) || (SUB161(auVar28 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar28 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar28 >> 0x47,0) & 1) != 0) || (SUB161(auVar28 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar28 >> 0x57,0) & 1) != 0) || (SUB161(auVar28 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar28 >> 0x67,0) & 1) != 0) || (SUB161(auVar28 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar28 >> 0x77,0) & 1) != 0) || auVar28[0xf] < '\0') break;
          uVar13 = uVar13 + lVar15 + 0x10;
          lVar15 = lVar15 + 0x10;
        } while( true );
      }
      pdb_142d907f0(&uStack_a8);
      goto LAB_140c24d51;
    }
  } while( true );
}

