// VA 0x141195c40, PDB extent 4161 bytes
// toolbar::menu::load::show_contextual_buttons::closure$0
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/menu/load.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: toolbar::menu::load::show_contextual_buttons::closure$0
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/menu/load.rs
   Extent: 4161 */

void pdb_141195c40(undefined8 *param_1,longlong *param_2)

{
  ulonglong *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  char *pcVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  uint uVar8;
  uint uVar9;
  undefined8 uVar10;
  char cVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined *puVar16;
  longlong lVar17;
  longlong lVar18;
  uint uVar19;
  ushort uVar20;
  longlong lVar21;
  ulonglong uVar22;
  byte *pbVar23;
  bool bVar24;
  byte bVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  longlong lStack_c0;
  ulonglong uStack_b8;
  byte *pbStack_b0;
  undefined8 uStack_a8;
  ulonglong uStack_98;
  byte *pbStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  ulonglong uStack_78;
  byte *pbStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_51;
  undefined8 uStack_50;
  
  uStack_50 = 0xfffffffffffffffe;
  lVar13 = *param_2;
  if (*(longlong *)(lVar13 + 0x1c8) != 0) {
    uVar12 = pdb_1400af0a0(lVar13 + 0x1d0,param_2 + 1);
    lVar17 = *(longlong *)(lVar13 + 0x1b0);
    bVar25 = (byte)(uVar12 >> 0x39);
    auVar26 = ZEXT216(CONCAT11(bVar25,bVar25));
    auVar26 = pshuflw(auVar26,auVar26,0);
    lVar18 = 0;
    while( true ) {
      uVar12 = uVar12 & *(ulonglong *)(lVar13 + 0x1b8);
      auVar52 = *(undefined1 (*) [16])(lVar17 + uVar12);
      auVar40[0] = -(auVar52[0] == auVar26[0]);
      auVar40[1] = -(auVar52[1] == auVar26[1]);
      auVar40[2] = -(auVar52[2] == auVar26[2]);
      auVar40[3] = -(auVar52[3] == auVar26[3]);
      auVar40[4] = -(auVar52[4] == auVar26[4]);
      auVar40[5] = -(auVar52[5] == auVar26[5]);
      auVar40[6] = -(auVar52[6] == auVar26[6]);
      auVar40[7] = -(auVar52[7] == auVar26[7]);
      auVar40[8] = -(auVar52[8] == auVar26[0]);
      auVar40[9] = -(auVar52[9] == auVar26[1]);
      auVar40[10] = -(auVar52[10] == auVar26[2]);
      auVar40[0xb] = -(auVar52[0xb] == auVar26[3]);
      auVar40[0xc] = -(auVar52[0xc] == auVar26[4]);
      auVar40[0xd] = -(auVar52[0xd] == auVar26[5]);
      auVar40[0xe] = -(auVar52[0xe] == auVar26[6]);
      auVar40[0xf] = -(auVar52[0xf] == auVar26[7]);
      uVar20 = (ushort)(SUB161(auVar40 >> 7,0) & 1) | (ushort)(SUB161(auVar40 >> 0xf,0) & 1) << 1 |
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
               (ushort)(SUB161(auVar40 >> 0x77,0) & 1) << 0xe | (ushort)(auVar40[0xf] >> 7) << 0xf;
      uVar19 = (uint)uVar20;
      while (uVar20 != 0) {
        uVar8 = 0;
        for (uVar9 = uVar19; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
          uVar8 = uVar8 + 1;
        }
        lVar21 = (uVar8 + uVar12 & *(ulonglong *)(lVar13 + 0x1b8)) * -0xd8;
        if (param_2[1] == *(longlong *)(lVar17 + -0xd8 + lVar21)) {
          uVar3 = *(undefined4 *)
                   (&UNK_14329e268 + (ulonglong)((*(byte *)(lVar17 + lVar21 + -6) & 1) == 0) * 4);
          if (*(char *)*param_1 == '\0') {
            bVar24 = false;
            goto LAB_141195e75;
          }
          pdb_1411743c0(&uStack_78,param_2,&UNK_14329f4e9,0x10,&UNK_14329f4f9,0x15);
          lVar13 = pdb_14116e020(&uStack_78);
          uVar12 = uStack_78;
          *(undefined4 *)(lVar13 + 0x40) = 0x3f19999a;
          uStack_98 = uStack_78;
          pbStack_90 = pbStack_70;
          uStack_88 = uStack_68;
          if (*(longlong *)(uStack_78 + 0x1c8) == 0) goto LAB_141196908;
          pcVar4 = (char *)param_1[1];
          uVar14 = pdb_1400af0a0(uStack_78 + 0x1d0,&pbStack_90);
          uVar22 = uStack_98;
          lVar13 = *(longlong *)(uVar12 + 0x1b0);
          uVar12 = *(ulonglong *)(uVar12 + 0x1b8);
          bVar25 = (byte)(uVar14 >> 0x39);
          auVar26 = ZEXT216(CONCAT11(bVar25,bVar25));
          auVar26 = pshuflw(auVar26,auVar26,0);
          lVar17 = 0;
          goto LAB_141195dfd;
        }
        uVar20 = (ushort)(uVar19 - 1) & (ushort)uVar19;
        uVar19 = CONCAT22((short)(uVar19 - 1 >> 0x10),uVar20);
      }
      auVar27[0] = -(auVar52[0] == -1);
      auVar27[1] = -(auVar52[1] == -1);
      auVar27[2] = -(auVar52[2] == -1);
      auVar27[3] = -(auVar52[3] == -1);
      auVar27[4] = -(auVar52[4] == -1);
      auVar27[5] = -(auVar52[5] == -1);
      auVar27[6] = -(auVar52[6] == -1);
      auVar27[7] = -(auVar52[7] == -1);
      auVar27[8] = -(auVar52[8] == -1);
      auVar27[9] = -(auVar52[9] == -1);
      auVar27[10] = -(auVar52[10] == -1);
      auVar27[0xb] = -(auVar52[0xb] == -1);
      auVar27[0xc] = -(auVar52[0xc] == -1);
      auVar27[0xd] = -(auVar52[0xd] == -1);
      auVar27[0xe] = -(auVar52[0xe] == -1);
      auVar27[0xf] = -(auVar52[0xf] == -1);
      if ((((((((((((((((SUB161(auVar27 >> 7,0) & 1) != 0 || (SUB161(auVar27 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar27 >> 0x17,0) & 1) != 0) || (SUB161(auVar27 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar27 >> 0x27,0) & 1) != 0) || (SUB161(auVar27 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar27 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar27 >> 0x3f,0) & 1) != 0) || (SUB161(auVar27 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar27 >> 0x4f,0) & 1) != 0) || (SUB161(auVar27 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar27 >> 0x5f,0) & 1) != 0) || (SUB161(auVar27 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar27 >> 0x6f,0) & 1) != 0) || (SUB161(auVar27 >> 0x77,0) & 1) != 0) ||
          auVar27[0xf] < '\0') break;
      uVar12 = uVar12 + lVar18 + 0x10;
      lVar18 = lVar18 + 0x10;
    }
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_142fa6b00);
LAB_141195dfd:
  uVar14 = uVar14 & uVar12;
  auVar52 = *(undefined1 (*) [16])(lVar13 + uVar14);
  auVar41[0] = -(auVar52[0] == auVar26[0]);
  auVar41[1] = -(auVar52[1] == auVar26[1]);
  auVar41[2] = -(auVar52[2] == auVar26[2]);
  auVar41[3] = -(auVar52[3] == auVar26[3]);
  auVar41[4] = -(auVar52[4] == auVar26[4]);
  auVar41[5] = -(auVar52[5] == auVar26[5]);
  auVar41[6] = -(auVar52[6] == auVar26[6]);
  auVar41[7] = -(auVar52[7] == auVar26[7]);
  auVar41[8] = -(auVar52[8] == auVar26[0]);
  auVar41[9] = -(auVar52[9] == auVar26[1]);
  auVar41[10] = -(auVar52[10] == auVar26[2]);
  auVar41[0xb] = -(auVar52[0xb] == auVar26[3]);
  auVar41[0xc] = -(auVar52[0xc] == auVar26[4]);
  auVar41[0xd] = -(auVar52[0xd] == auVar26[5]);
  auVar41[0xe] = -(auVar52[0xe] == auVar26[6]);
  auVar41[0xf] = -(auVar52[0xf] == auVar26[7]);
  uVar20 = (ushort)(SUB161(auVar41 >> 7,0) & 1) | (ushort)(SUB161(auVar41 >> 0xf,0) & 1) << 1 |
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
           (ushort)(SUB161(auVar41 >> 0x77,0) & 1) << 0xe | (ushort)(auVar41[0xf] >> 7) << 0xf;
  uVar19 = (uint)uVar20;
  while (uVar20 != 0) {
    uVar8 = 0;
    for (uVar9 = uVar19; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
      uVar8 = uVar8 + 1;
    }
    lVar18 = (uVar8 + uVar14 & uVar12) * -0xd8;
    if (pbStack_90 == *(byte **)(lVar13 + -0xd8 + lVar18)) {
      lVar13 = lVar13 + lVar18;
      bVar25 = *(byte *)(lVar13 + -5);
      *(byte *)(lVar13 + -5) = bVar25 | 0x10;
      bVar24 = *pcVar4 == '\x01';
      if (bVar24) {
        *(byte *)(lVar13 + -5) = bVar25 | 0x18;
      }
      uStack_68 = uStack_88;
      uStack_78 = uStack_98;
      pbStack_70 = pbStack_90;
      if (*(longlong *)(uStack_98 + 0x1c8) == 0) goto LAB_141196a34;
      uVar15 = pdb_1400af0a0(uStack_98 + 0x1d0,&pbStack_70);
      uVar14 = uStack_78;
      lVar13 = *(longlong *)(uVar22 + 0x1b0);
      uVar12 = *(ulonglong *)(uVar22 + 0x1b8);
      bVar25 = (byte)(uVar15 >> 0x39);
      auVar26 = ZEXT216(CONCAT11(bVar25,bVar25));
      auVar26 = pshuflw(auVar26,auVar26,0);
      lVar17 = 0;
      goto LAB_14119631a;
    }
    uVar20 = (ushort)(uVar19 - 1) & (ushort)uVar19;
    uVar19 = CONCAT22((short)(uVar19 - 1 >> 0x10),uVar20);
  }
  auVar28[0] = -(auVar52[0] == -1);
  auVar28[1] = -(auVar52[1] == -1);
  auVar28[2] = -(auVar52[2] == -1);
  auVar28[3] = -(auVar52[3] == -1);
  auVar28[4] = -(auVar52[4] == -1);
  auVar28[5] = -(auVar52[5] == -1);
  auVar28[6] = -(auVar52[6] == -1);
  auVar28[7] = -(auVar52[7] == -1);
  auVar28[8] = -(auVar52[8] == -1);
  auVar28[9] = -(auVar52[9] == -1);
  auVar28[10] = -(auVar52[10] == -1);
  auVar28[0xb] = -(auVar52[0xb] == -1);
  auVar28[0xc] = -(auVar52[0xc] == -1);
  auVar28[0xd] = -(auVar52[0xd] == -1);
  auVar28[0xe] = -(auVar52[0xe] == -1);
  auVar28[0xf] = -(auVar52[0xf] == -1);
  if ((((((((((((((((SUB161(auVar28 >> 7,0) & 1) != 0 || (SUB161(auVar28 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar28 >> 0x17,0) & 1) != 0) || (SUB161(auVar28 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar28 >> 0x27,0) & 1) != 0) || (SUB161(auVar28 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar28 >> 0x37,0) & 1) != 0) || (SUB161(auVar28 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar28 >> 0x47,0) & 1) != 0) || (SUB161(auVar28 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar28 >> 0x57,0) & 1) != 0) || (SUB161(auVar28 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar28 >> 0x67,0) & 1) != 0) || (SUB161(auVar28 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar28 >> 0x77,0) & 1) != 0) || auVar28[0xf] < '\0') {
LAB_141196908:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_142fa6b48);
  }
  uVar14 = uVar14 + lVar17 + 0x10;
  lVar17 = lVar17 + 0x10;
  goto LAB_141195dfd;
LAB_14119631a:
  uVar15 = uVar15 & uVar12;
  auVar52 = *(undefined1 (*) [16])(lVar13 + uVar15);
  auVar46[0] = -(auVar52[0] == auVar26[0]);
  auVar46[1] = -(auVar52[1] == auVar26[1]);
  auVar46[2] = -(auVar52[2] == auVar26[2]);
  auVar46[3] = -(auVar52[3] == auVar26[3]);
  auVar46[4] = -(auVar52[4] == auVar26[4]);
  auVar46[5] = -(auVar52[5] == auVar26[5]);
  auVar46[6] = -(auVar52[6] == auVar26[6]);
  auVar46[7] = -(auVar52[7] == auVar26[7]);
  auVar46[8] = -(auVar52[8] == auVar26[0]);
  auVar46[9] = -(auVar52[9] == auVar26[1]);
  auVar46[10] = -(auVar52[10] == auVar26[2]);
  auVar46[0xb] = -(auVar52[0xb] == auVar26[3]);
  auVar46[0xc] = -(auVar52[0xc] == auVar26[4]);
  auVar46[0xd] = -(auVar52[0xd] == auVar26[5]);
  auVar46[0xe] = -(auVar52[0xe] == auVar26[6]);
  auVar46[0xf] = -(auVar52[0xf] == auVar26[7]);
  uVar20 = (ushort)(SUB161(auVar46 >> 7,0) & 1) | (ushort)(SUB161(auVar46 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar46 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar46 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar46 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar46 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar46 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar46 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar46 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar46 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar46 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar46 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar46 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar46 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar46 >> 0x77,0) & 1) << 0xe | (ushort)(auVar46[0xf] >> 7) << 0xf;
  uVar19 = (uint)uVar20;
  while (uVar20 != 0) {
    uVar8 = 0;
    for (uVar9 = uVar19; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
      uVar8 = uVar8 + 1;
    }
    uVar22 = (uVar8 + uVar15 & uVar12) * -0xd8;
    if (pbStack_70 == *(byte **)(lVar13 + -0xd8 + uVar22)) {
      lVar13 = lVar13 + uVar22;
      *(undefined1 (*) [16])(lVar13 + -0x9c) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(lVar13 + -0xa8) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(lVar13 + -0xb8) = (undefined1  [16])0x0;
      *(undefined4 *)(lVar13 + -0x8c) = uVar3;
      *(undefined4 *)(lVar13 + -0x88) = 0;
      *(undefined4 *)(lVar13 + -0x84) = uVar3;
      *(undefined8 *)(lVar13 + -0x80) = 0;
      *(undefined8 *)(lVar13 + -0x7a) = 0;
      *(undefined2 *)(lVar13 + -0x72) = 0x102;
      uStack_a8 = uStack_68;
      uStack_b8 = uStack_78;
      pbStack_b0 = pbStack_70;
      if (*(longlong *)(uStack_78 + 0x1c8) == 0) goto LAB_141196b77;
      uVar15 = pdb_1400af0a0(uStack_78 + 0x1d0,&pbStack_b0);
      lVar13 = *(longlong *)(uVar14 + 0x1b0);
      uVar12 = *(ulonglong *)(uVar14 + 0x1b8);
      bVar25 = (byte)(uVar15 >> 0x39);
      auVar26 = ZEXT216(CONCAT11(bVar25,bVar25));
      auVar26 = pshuflw(auVar26,auVar26,0);
      lVar17 = 0;
      goto LAB_141196435;
    }
    uVar20 = (ushort)(uVar19 - 1) & (ushort)uVar19;
    uVar19 = CONCAT22((short)(uVar19 - 1 >> 0x10),uVar20);
  }
  auVar33[0] = -(auVar52[0] == -1);
  auVar33[1] = -(auVar52[1] == -1);
  auVar33[2] = -(auVar52[2] == -1);
  auVar33[3] = -(auVar52[3] == -1);
  auVar33[4] = -(auVar52[4] == -1);
  auVar33[5] = -(auVar52[5] == -1);
  auVar33[6] = -(auVar52[6] == -1);
  auVar33[7] = -(auVar52[7] == -1);
  auVar33[8] = -(auVar52[8] == -1);
  auVar33[9] = -(auVar52[9] == -1);
  auVar33[10] = -(auVar52[10] == -1);
  auVar33[0xb] = -(auVar52[0xb] == -1);
  auVar33[0xc] = -(auVar52[0xc] == -1);
  auVar33[0xd] = -(auVar52[0xd] == -1);
  auVar33[0xe] = -(auVar52[0xe] == -1);
  auVar33[0xf] = -(auVar52[0xf] == -1);
  if ((((((((((((((((SUB161(auVar33 >> 7,0) & 1) != 0 || (SUB161(auVar33 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar33 >> 0x17,0) & 1) != 0) || (SUB161(auVar33 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar33 >> 0x27,0) & 1) != 0) || (SUB161(auVar33 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar33 >> 0x37,0) & 1) != 0) || (SUB161(auVar33 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar33 >> 0x47,0) & 1) != 0) || (SUB161(auVar33 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar33 >> 0x57,0) & 1) != 0) || (SUB161(auVar33 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar33 >> 0x67,0) & 1) != 0) || (SUB161(auVar33 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar33 >> 0x77,0) & 1) != 0) || auVar33[0xf] < '\0') {
LAB_141196a34:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_142fa6b30);
  }
  uVar15 = uVar15 + lVar17 + 0x10;
  lVar17 = lVar17 + 0x10;
  goto LAB_14119631a;
LAB_141196435:
  uVar15 = uVar15 & uVar12;
  auVar52 = *(undefined1 (*) [16])(lVar13 + uVar15);
  auVar47[0] = -(auVar52[0] == auVar26[0]);
  auVar47[1] = -(auVar52[1] == auVar26[1]);
  auVar47[2] = -(auVar52[2] == auVar26[2]);
  auVar47[3] = -(auVar52[3] == auVar26[3]);
  auVar47[4] = -(auVar52[4] == auVar26[4]);
  auVar47[5] = -(auVar52[5] == auVar26[5]);
  auVar47[6] = -(auVar52[6] == auVar26[6]);
  auVar47[7] = -(auVar52[7] == auVar26[7]);
  auVar47[8] = -(auVar52[8] == auVar26[0]);
  auVar47[9] = -(auVar52[9] == auVar26[1]);
  auVar47[10] = -(auVar52[10] == auVar26[2]);
  auVar47[0xb] = -(auVar52[0xb] == auVar26[3]);
  auVar47[0xc] = -(auVar52[0xc] == auVar26[4]);
  auVar47[0xd] = -(auVar52[0xd] == auVar26[5]);
  auVar47[0xe] = -(auVar52[0xe] == auVar26[6]);
  auVar47[0xf] = -(auVar52[0xf] == auVar26[7]);
  uVar20 = (ushort)(SUB161(auVar47 >> 7,0) & 1) | (ushort)(SUB161(auVar47 >> 0xf,0) & 1) << 1 |
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
           (ushort)(SUB161(auVar47 >> 0x77,0) & 1) << 0xe | (ushort)(auVar47[0xf] >> 7) << 0xf;
  uVar19 = (uint)uVar20;
  if (uVar20 != 0) {
LAB_14119644f:
    uVar8 = 0;
    for (uVar9 = uVar19; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
      uVar8 = uVar8 + 1;
    }
    lVar18 = (uVar8 + uVar15 & uVar12) * -0xd8;
    if (pbStack_b0 != *(byte **)(lVar13 + -0xd8 + lVar18)) goto code_r0x000141196472;
    if ((*(byte *)(lVar13 + lVar18 + -6) & 0x30) != 0) {
      uVar12 = *(longlong *)param_1[2] - 1;
      if ((ulonglong)param_1[4] <= uVar12) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(uVar12,param_1[4],&UNK_14329f538);
      }
      pdb_140a937d0(&uStack_98,uVar12 * 0x1c + param_1[3]);
      plVar5 = (longlong *)param_1[5];
      *(undefined4 *)plVar5[2] = *(undefined4 *)((longlong)plVar5 + 0x1c);
      lVar13 = *plVar5;
      lVar17 = *(longlong *)(lVar13 + 0x30);
      uVar6 = *(undefined8 *)(lVar13 + 0x40);
      if (lVar17 == *(longlong *)(lVar13 + 0x20)) {
        uStack_51 = 1;
        pdb_142d7e8a0(lVar13 + 0x20);
      }
      pbVar23 = pbStack_90;
      *(undefined8 *)(*(longlong *)(lVar13 + 0x28) + lVar17 * 8) = uVar6;
      *(longlong *)(lVar13 + 0x30) = lVar17 + 1;
      *(longlong *)(lVar13 + 0x40) = *(longlong *)(lVar13 + 0x40) + 1;
      uStack_51 = 1;
      cVar11 = pdb_140f3ea80(pbStack_90,uStack_88);
      if (cVar11 == '\0') {
        if (uStack_98 != 0) {
          pub_1406abac0(pbVar23,uStack_98,1);
        }
      }
      else {
        uStack_68 = uStack_88;
        uStack_60 = uStack_80;
        uStack_78 = uStack_98;
        pbStack_70 = pbStack_90;
        uStack_51 = 0;
        lStack_c0 = pdb_1423218c0(&uStack_78);
        if (lStack_c0 != 0) {
          uStack_51 = 0;
          pdb_1404b38e0(&lStack_c0);
        }
      }
    }
LAB_141195e75:
    if (*(char *)param_1[6] != '\0') {
      pdb_1411743c0(&uStack_78,param_2,&UNK_14329f550,0xd,&UNK_14329f55d,0xb);
      lVar13 = pdb_14116e020(&uStack_78);
      uVar12 = uStack_78;
      *(undefined4 *)(lVar13 + 0x40) = 0x3f19999a;
      uStack_98 = uStack_78;
      pbStack_90 = pbStack_70;
      uStack_88 = uStack_68;
      if (*(longlong *)(uStack_78 + 0x1c8) == 0) goto LAB_141196908;
      pbVar23 = (byte *)param_1[1];
      uVar14 = pdb_1400af0a0(uStack_78 + 0x1d0,&pbStack_90);
      uVar22 = uStack_98;
      lVar13 = *(longlong *)(uVar12 + 0x1b0);
      uVar12 = *(ulonglong *)(uVar12 + 0x1b8);
      bVar25 = (byte)(uVar14 >> 0x39);
      auVar26 = ZEXT216(CONCAT11(bVar25,bVar25));
      auVar26 = pshuflw(auVar26,auVar26,0);
      lVar17 = 0;
      do {
        uVar14 = uVar14 & uVar12;
        auVar52 = *(undefined1 (*) [16])(lVar13 + uVar14);
        auVar42[0] = -(auVar52[0] == auVar26[0]);
        auVar42[1] = -(auVar52[1] == auVar26[1]);
        auVar42[2] = -(auVar52[2] == auVar26[2]);
        auVar42[3] = -(auVar52[3] == auVar26[3]);
        auVar42[4] = -(auVar52[4] == auVar26[4]);
        auVar42[5] = -(auVar52[5] == auVar26[5]);
        auVar42[6] = -(auVar52[6] == auVar26[6]);
        auVar42[7] = -(auVar52[7] == auVar26[7]);
        auVar42[8] = -(auVar52[8] == auVar26[0]);
        auVar42[9] = -(auVar52[9] == auVar26[1]);
        auVar42[10] = -(auVar52[10] == auVar26[2]);
        auVar42[0xb] = -(auVar52[0xb] == auVar26[3]);
        auVar42[0xc] = -(auVar52[0xc] == auVar26[4]);
        auVar42[0xd] = -(auVar52[0xd] == auVar26[5]);
        auVar42[0xe] = -(auVar52[0xe] == auVar26[6]);
        auVar42[0xf] = -(auVar52[0xf] == auVar26[7]);
        uVar20 = (ushort)(SUB161(auVar42 >> 7,0) & 1) | (ushort)(SUB161(auVar42 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar42 >> 0x17,0) & 1) << 2 |
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
                 (ushort)(SUB161(auVar42 >> 0x77,0) & 1) << 0xe | (ushort)(auVar42[0xf] >> 7) << 0xf
        ;
        uVar19 = (uint)uVar20;
        while (uVar20 != 0) {
          uVar8 = 0;
          for (uVar9 = uVar19; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
            uVar8 = uVar8 + 1;
          }
          lVar18 = (uVar8 + uVar14 & uVar12) * -0xd8;
          if (pbStack_90 == *(byte **)(lVar13 + -0xd8 + lVar18)) {
            lVar13 = lVar13 + lVar18;
            bVar25 = *(byte *)(lVar13 + -5);
            *(byte *)(lVar13 + -5) = bVar25 | 0x10;
            if ((~*pbVar23 & 1) == 0 && !bVar24) {
              *(byte *)(lVar13 + -5) = bVar25 | 0x18;
              bVar24 = true;
            }
            uStack_68 = uStack_88;
            uStack_78 = uStack_98;
            pbStack_70 = pbStack_90;
            if (*(longlong *)(uStack_98 + 0x1c8) == 0) goto LAB_141196a34;
            uVar15 = pdb_1400af0a0(uStack_98 + 0x1d0,&pbStack_70);
            uVar14 = uStack_78;
            lVar13 = *(longlong *)(uVar22 + 0x1b0);
            uVar12 = *(ulonglong *)(uVar22 + 0x1b8);
            bVar25 = (byte)(uVar15 >> 0x39);
            auVar26 = ZEXT216(CONCAT11(bVar25,bVar25));
            auVar26 = pshuflw(auVar26,auVar26,0);
            lVar17 = 0;
            goto LAB_141196247;
          }
          uVar20 = (ushort)(uVar19 - 1) & (ushort)uVar19;
          uVar19 = CONCAT22((short)(uVar19 - 1 >> 0x10),uVar20);
        }
        auVar29[0] = -(auVar52[0] == -1);
        auVar29[1] = -(auVar52[1] == -1);
        auVar29[2] = -(auVar52[2] == -1);
        auVar29[3] = -(auVar52[3] == -1);
        auVar29[4] = -(auVar52[4] == -1);
        auVar29[5] = -(auVar52[5] == -1);
        auVar29[6] = -(auVar52[6] == -1);
        auVar29[7] = -(auVar52[7] == -1);
        auVar29[8] = -(auVar52[8] == -1);
        auVar29[9] = -(auVar52[9] == -1);
        auVar29[10] = -(auVar52[10] == -1);
        auVar29[0xb] = -(auVar52[0xb] == -1);
        auVar29[0xc] = -(auVar52[0xc] == -1);
        auVar29[0xd] = -(auVar52[0xd] == -1);
        auVar29[0xe] = -(auVar52[0xe] == -1);
        auVar29[0xf] = -(auVar52[0xf] == -1);
        if ((((((((((((((((SUB161(auVar29 >> 7,0) & 1) != 0 || (SUB161(auVar29 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar29 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar29 >> 0x1f,0) & 1) != 0) || (SUB161(auVar29 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar29 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar29 >> 0x37,0) & 1) != 0) || (SUB161(auVar29 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar29 >> 0x47,0) & 1) != 0) || (SUB161(auVar29 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar29 >> 0x57,0) & 1) != 0) || (SUB161(auVar29 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar29 >> 0x67,0) & 1) != 0) || (SUB161(auVar29 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar29 >> 0x77,0) & 1) != 0) || auVar29[0xf] < '\0') goto LAB_141196908;
        uVar14 = uVar14 + lVar17 + 0x10;
        lVar17 = lVar17 + 0x10;
      } while( true );
    }
    pbVar23 = (byte *)param_1[1];
LAB_141195fbe:
    pdb_1411743c0(&uStack_78,param_2,&UNK_14329f580,0xc,&UNK_14329f58c,0x11);
    lVar13 = pdb_14116e020(&uStack_78);
    uVar12 = uStack_78;
    *(undefined4 *)(lVar13 + 0x40) = 0x3f19999a;
    uStack_98 = uStack_78;
    pbStack_90 = pbStack_70;
    uStack_88 = uStack_68;
    if (*(longlong *)(uStack_78 + 0x1c8) == 0) goto LAB_141196908;
    uVar14 = pdb_1400af0a0(uStack_78 + 0x1d0,&pbStack_90);
    uVar22 = uStack_98;
    lVar13 = *(longlong *)(uVar12 + 0x1b0);
    uVar12 = *(ulonglong *)(uVar12 + 0x1b8);
    bVar25 = (byte)(uVar14 >> 0x39);
    auVar26 = ZEXT216(CONCAT11(bVar25,bVar25));
    auVar26 = pshuflw(auVar26,auVar26,0);
    lVar17 = 0;
    do {
      uVar14 = uVar14 & uVar12;
      auVar52 = *(undefined1 (*) [16])(lVar13 + uVar14);
      auVar43[0] = -(auVar52[0] == auVar26[0]);
      auVar43[1] = -(auVar52[1] == auVar26[1]);
      auVar43[2] = -(auVar52[2] == auVar26[2]);
      auVar43[3] = -(auVar52[3] == auVar26[3]);
      auVar43[4] = -(auVar52[4] == auVar26[4]);
      auVar43[5] = -(auVar52[5] == auVar26[5]);
      auVar43[6] = -(auVar52[6] == auVar26[6]);
      auVar43[7] = -(auVar52[7] == auVar26[7]);
      auVar43[8] = -(auVar52[8] == auVar26[0]);
      auVar43[9] = -(auVar52[9] == auVar26[1]);
      auVar43[10] = -(auVar52[10] == auVar26[2]);
      auVar43[0xb] = -(auVar52[0xb] == auVar26[3]);
      auVar43[0xc] = -(auVar52[0xc] == auVar26[4]);
      auVar43[0xd] = -(auVar52[0xd] == auVar26[5]);
      auVar43[0xe] = -(auVar52[0xe] == auVar26[6]);
      auVar43[0xf] = -(auVar52[0xf] == auVar26[7]);
      uVar20 = (ushort)(SUB161(auVar43 >> 7,0) & 1) | (ushort)(SUB161(auVar43 >> 0xf,0) & 1) << 1 |
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
               (ushort)(SUB161(auVar43 >> 0x77,0) & 1) << 0xe | (ushort)(auVar43[0xf] >> 7) << 0xf;
      uVar19 = (uint)uVar20;
      while (uVar20 != 0) {
        uVar8 = 0;
        for (uVar9 = uVar19; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
          uVar8 = uVar8 + 1;
        }
        lVar18 = (uVar8 + uVar14 & uVar12) * -0xd8;
        if (pbStack_90 == *(byte **)(lVar13 + -0xd8 + lVar18)) {
          lVar13 = lVar13 + lVar18;
          bVar25 = *(byte *)(lVar13 + -5);
          *(byte *)(lVar13 + -5) = bVar25 | 0x10;
          if ((~*pbVar23 & 1) == 0 && !bVar24) {
            *(byte *)(lVar13 + -5) = bVar25 | 0x18;
          }
          uStack_68 = uStack_88;
          uStack_78 = uStack_98;
          pbStack_70 = pbStack_90;
          if (*(longlong *)(uStack_98 + 0x1c8) == 0) goto LAB_141196a34;
          uVar15 = pdb_1400af0a0(uStack_98 + 0x1d0,&pbStack_70);
          uVar14 = uStack_78;
          lVar13 = *(longlong *)(uVar22 + 0x1b0);
          uVar12 = *(ulonglong *)(uVar22 + 0x1b8);
          bVar25 = (byte)(uVar15 >> 0x39);
          auVar26 = ZEXT216(CONCAT11(bVar25,bVar25));
          auVar26 = pshuflw(auVar26,auVar26,0);
          lVar17 = 0;
          goto LAB_141196152;
        }
        uVar20 = (ushort)(uVar19 - 1) & (ushort)uVar19;
        uVar19 = CONCAT22((short)(uVar19 - 1 >> 0x10),uVar20);
      }
      auVar30[0] = -(auVar52[0] == -1);
      auVar30[1] = -(auVar52[1] == -1);
      auVar30[2] = -(auVar52[2] == -1);
      auVar30[3] = -(auVar52[3] == -1);
      auVar30[4] = -(auVar52[4] == -1);
      auVar30[5] = -(auVar52[5] == -1);
      auVar30[6] = -(auVar52[6] == -1);
      auVar30[7] = -(auVar52[7] == -1);
      auVar30[8] = -(auVar52[8] == -1);
      auVar30[9] = -(auVar52[9] == -1);
      auVar30[10] = -(auVar52[10] == -1);
      auVar30[0xb] = -(auVar52[0xb] == -1);
      auVar30[0xc] = -(auVar52[0xc] == -1);
      auVar30[0xd] = -(auVar52[0xd] == -1);
      auVar30[0xe] = -(auVar52[0xe] == -1);
      auVar30[0xf] = -(auVar52[0xf] == -1);
      if ((((((((((((((((SUB161(auVar30 >> 7,0) & 1) != 0 || (SUB161(auVar30 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar30 >> 0x17,0) & 1) != 0) || (SUB161(auVar30 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar30 >> 0x27,0) & 1) != 0) || (SUB161(auVar30 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar30 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar30 >> 0x3f,0) & 1) != 0) || (SUB161(auVar30 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar30 >> 0x4f,0) & 1) != 0) || (SUB161(auVar30 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar30 >> 0x5f,0) & 1) != 0) || (SUB161(auVar30 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar30 >> 0x6f,0) & 1) != 0) || (SUB161(auVar30 >> 0x77,0) & 1) != 0) ||
          auVar30[0xf] < '\0') goto LAB_141196908;
      uVar14 = uVar14 + lVar17 + 0x10;
      lVar17 = lVar17 + 0x10;
    } while( true );
  }
LAB_14119647f:
  auVar34[0] = -(auVar52[0] == -1);
  auVar34[1] = -(auVar52[1] == -1);
  auVar34[2] = -(auVar52[2] == -1);
  auVar34[3] = -(auVar52[3] == -1);
  auVar34[4] = -(auVar52[4] == -1);
  auVar34[5] = -(auVar52[5] == -1);
  auVar34[6] = -(auVar52[6] == -1);
  auVar34[7] = -(auVar52[7] == -1);
  auVar34[8] = -(auVar52[8] == -1);
  auVar34[9] = -(auVar52[9] == -1);
  auVar34[10] = -(auVar52[10] == -1);
  auVar34[0xb] = -(auVar52[0xb] == -1);
  auVar34[0xc] = -(auVar52[0xc] == -1);
  auVar34[0xd] = -(auVar52[0xd] == -1);
  auVar34[0xe] = -(auVar52[0xe] == -1);
  auVar34[0xf] = -(auVar52[0xf] == -1);
  if ((((((((((((((((SUB161(auVar34 >> 7,0) & 1) != 0 || (SUB161(auVar34 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar34 >> 0x17,0) & 1) != 0) || (SUB161(auVar34 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar34 >> 0x27,0) & 1) != 0) || (SUB161(auVar34 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar34 >> 0x37,0) & 1) != 0) || (SUB161(auVar34 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar34 >> 0x47,0) & 1) != 0) || (SUB161(auVar34 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar34 >> 0x57,0) & 1) != 0) || (SUB161(auVar34 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar34 >> 0x67,0) & 1) != 0) || (SUB161(auVar34 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar34 >> 0x77,0) & 1) != 0) || auVar34[0xf] < '\0') {
LAB_141196b77:
    puVar16 = &UNK_142fa60f8;
    pdb_142dc8110(&UNK_142fa60f8,0x16,&UNK_142fa6ad0);
LAB_141196b8f:
    if ((puVar16[uVar22 - 6] & 0x30) != 0) {
      uVar12 = *(longlong *)param_1[2] - 1;
      if ((ulonglong)param_1[4] <= uVar12) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(uVar12,param_1[4],&UNK_14329f5d8);
      }
      puVar2 = (undefined8 *)(param_1[3] + uVar12 * 0x1c);
      uVar6 = *puVar2;
      uVar10 = puVar2[1];
      puVar2 = (undefined8 *)param_1[9];
      *puVar2 = 1;
      puVar2[1] = uVar6;
      puVar2[2] = uVar10;
      puVar2[3] = 0;
    }
    return;
  }
  uVar15 = uVar15 + lVar17 + 0x10;
  lVar17 = lVar17 + 0x10;
  goto LAB_141196435;
code_r0x000141196472:
  uVar20 = (ushort)(uVar19 - 1) & (ushort)uVar19;
  uVar19 = CONCAT22((short)(uVar19 - 1 >> 0x10),uVar20);
  uVar22 = (ulonglong)uVar19;
  if (uVar20 == 0) goto LAB_14119647f;
  goto LAB_14119644f;
LAB_141196247:
  uVar15 = uVar15 & uVar12;
  auVar52 = *(undefined1 (*) [16])(lVar13 + uVar15);
  auVar45[0] = -(auVar52[0] == auVar26[0]);
  auVar45[1] = -(auVar52[1] == auVar26[1]);
  auVar45[2] = -(auVar52[2] == auVar26[2]);
  auVar45[3] = -(auVar52[3] == auVar26[3]);
  auVar45[4] = -(auVar52[4] == auVar26[4]);
  auVar45[5] = -(auVar52[5] == auVar26[5]);
  auVar45[6] = -(auVar52[6] == auVar26[6]);
  auVar45[7] = -(auVar52[7] == auVar26[7]);
  auVar45[8] = -(auVar52[8] == auVar26[0]);
  auVar45[9] = -(auVar52[9] == auVar26[1]);
  auVar45[10] = -(auVar52[10] == auVar26[2]);
  auVar45[0xb] = -(auVar52[0xb] == auVar26[3]);
  auVar45[0xc] = -(auVar52[0xc] == auVar26[4]);
  auVar45[0xd] = -(auVar52[0xd] == auVar26[5]);
  auVar45[0xe] = -(auVar52[0xe] == auVar26[6]);
  auVar45[0xf] = -(auVar52[0xf] == auVar26[7]);
  uVar20 = (ushort)(SUB161(auVar45 >> 7,0) & 1) | (ushort)(SUB161(auVar45 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar45 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar45 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar45 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar45 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar45 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar45 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar45 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar45 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar45 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar45 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar45 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar45 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar45 >> 0x77,0) & 1) << 0xe | (ushort)(auVar45[0xf] >> 7) << 0xf;
  uVar19 = (uint)uVar20;
  while (uVar20 != 0) {
    uVar8 = 0;
    for (uVar9 = uVar19; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
      uVar8 = uVar8 + 1;
    }
    uVar22 = (uVar8 + uVar15 & uVar12) * -0xd8;
    if (pbStack_70 == *(byte **)(lVar13 + -0xd8 + uVar22)) {
      lVar13 = lVar13 + uVar22;
      *(undefined1 (*) [16])(lVar13 + -0x9c) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(lVar13 + -0xa8) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(lVar13 + -0xb8) = (undefined1  [16])0x0;
      *(undefined4 *)(lVar13 + -0x8c) = uVar3;
      *(undefined4 *)(lVar13 + -0x88) = 0;
      *(undefined4 *)(lVar13 + -0x84) = uVar3;
      *(undefined8 *)(lVar13 + -0x80) = 0;
      *(undefined8 *)(lVar13 + -0x7a) = 0;
      *(undefined2 *)(lVar13 + -0x72) = 0x102;
      uStack_88 = uStack_68;
      uStack_98 = uStack_78;
      pbStack_90 = pbStack_70;
      if (*(longlong *)(uStack_78 + 0x1c8) != 0) {
        uVar15 = pdb_1400af0a0(uStack_78 + 0x1d0,&pbStack_90);
        lVar13 = *(longlong *)(uVar14 + 0x1b0);
        uVar12 = *(ulonglong *)(uVar14 + 0x1b8);
        bVar25 = (byte)(uVar15 >> 0x39);
        auVar26 = ZEXT216(CONCAT11(bVar25,bVar25));
        auVar26 = pshuflw(auVar26,auVar26,0);
        lVar17 = 0;
        while( true ) {
          uVar15 = uVar15 & uVar12;
          auVar52 = *(undefined1 (*) [16])(lVar13 + uVar15);
          auVar49[0] = -(auVar52[0] == auVar26[0]);
          auVar49[1] = -(auVar52[1] == auVar26[1]);
          auVar49[2] = -(auVar52[2] == auVar26[2]);
          auVar49[3] = -(auVar52[3] == auVar26[3]);
          auVar49[4] = -(auVar52[4] == auVar26[4]);
          auVar49[5] = -(auVar52[5] == auVar26[5]);
          auVar49[6] = -(auVar52[6] == auVar26[6]);
          auVar49[7] = -(auVar52[7] == auVar26[7]);
          auVar49[8] = -(auVar52[8] == auVar26[0]);
          auVar49[9] = -(auVar52[9] == auVar26[1]);
          auVar49[10] = -(auVar52[10] == auVar26[2]);
          auVar49[0xb] = -(auVar52[0xb] == auVar26[3]);
          auVar49[0xc] = -(auVar52[0xc] == auVar26[4]);
          auVar49[0xd] = -(auVar52[0xd] == auVar26[5]);
          auVar49[0xe] = -(auVar52[0xe] == auVar26[6]);
          auVar49[0xf] = -(auVar52[0xf] == auVar26[7]);
          uVar20 = (ushort)(SUB161(auVar49 >> 7,0) & 1) |
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
          uVar19 = (uint)uVar20;
          while (uVar20 != 0) {
            uVar8 = 0;
            for (uVar9 = uVar19; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
              uVar8 = uVar8 + 1;
            }
            lVar18 = (uVar8 + uVar15 & uVar12) * -0xd8;
            if (pbStack_90 == *(byte **)(lVar13 + -0xd8 + lVar18)) {
              if ((*(byte *)(lVar13 + lVar18 + -6) & 0x30) != 0) {
                uVar12 = *(longlong *)param_1[2] - 1;
                if ((ulonglong)param_1[4] <= uVar12) {
                    /* WARNING: Subroutine does not return */
                  pdb_142dc81f2(uVar12,param_1[4],&UNK_14329f568);
                }
                puVar1 = (ulonglong *)(param_1[3] + uVar12 * 0x1c);
                uStack_78 = *puVar1;
                pbStack_70 = (byte *)puVar1[1];
                puVar7 = (undefined1 *)param_1[7];
                *puVar7 = 1;
                *(ulonglong *)(puVar7 + 1) = uStack_78;
                *(byte **)(puVar7 + 9) = pbStack_70;
              }
              goto LAB_141195fbe;
            }
            uVar20 = (ushort)(uVar19 - 1) & (ushort)uVar19;
            uVar19 = CONCAT22((short)(uVar19 - 1 >> 0x10),uVar20);
            uVar22 = (ulonglong)uVar19;
          }
          auVar36[0] = -(auVar52[0] == -1);
          auVar36[1] = -(auVar52[1] == -1);
          auVar36[2] = -(auVar52[2] == -1);
          auVar36[3] = -(auVar52[3] == -1);
          auVar36[4] = -(auVar52[4] == -1);
          auVar36[5] = -(auVar52[5] == -1);
          auVar36[6] = -(auVar52[6] == -1);
          auVar36[7] = -(auVar52[7] == -1);
          auVar36[8] = -(auVar52[8] == -1);
          auVar36[9] = -(auVar52[9] == -1);
          auVar36[10] = -(auVar52[10] == -1);
          auVar36[0xb] = -(auVar52[0xb] == -1);
          auVar36[0xc] = -(auVar52[0xc] == -1);
          auVar36[0xd] = -(auVar52[0xd] == -1);
          auVar36[0xe] = -(auVar52[0xe] == -1);
          auVar36[0xf] = -(auVar52[0xf] == -1);
          if ((((((((((((((((SUB161(auVar36 >> 7,0) & 1) != 0 || (SUB161(auVar36 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar36 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar36 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar36 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar36 >> 0x2f,0) & 1) != 0) || (SUB161(auVar36 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar36 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar36 >> 0x47,0) & 1) != 0) || (SUB161(auVar36 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar36 >> 0x57,0) & 1) != 0) || (SUB161(auVar36 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar36 >> 0x67,0) & 1) != 0) || (SUB161(auVar36 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar36 >> 0x77,0) & 1) != 0) || auVar36[0xf] < '\0') break;
          uVar15 = uVar15 + lVar17 + 0x10;
          lVar17 = lVar17 + 0x10;
        }
      }
      goto LAB_141196b77;
    }
    uVar20 = (ushort)(uVar19 - 1) & (ushort)uVar19;
    uVar19 = CONCAT22((short)(uVar19 - 1 >> 0x10),uVar20);
  }
  auVar32[0] = -(auVar52[0] == -1);
  auVar32[1] = -(auVar52[1] == -1);
  auVar32[2] = -(auVar52[2] == -1);
  auVar32[3] = -(auVar52[3] == -1);
  auVar32[4] = -(auVar52[4] == -1);
  auVar32[5] = -(auVar52[5] == -1);
  auVar32[6] = -(auVar52[6] == -1);
  auVar32[7] = -(auVar52[7] == -1);
  auVar32[8] = -(auVar52[8] == -1);
  auVar32[9] = -(auVar52[9] == -1);
  auVar32[10] = -(auVar52[10] == -1);
  auVar32[0xb] = -(auVar52[0xb] == -1);
  auVar32[0xc] = -(auVar52[0xc] == -1);
  auVar32[0xd] = -(auVar52[0xd] == -1);
  auVar32[0xe] = -(auVar52[0xe] == -1);
  auVar32[0xf] = -(auVar52[0xf] == -1);
  if ((((((((((((((((SUB161(auVar32 >> 7,0) & 1) != 0 || (SUB161(auVar32 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar32 >> 0x17,0) & 1) != 0) || (SUB161(auVar32 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar32 >> 0x27,0) & 1) != 0) || (SUB161(auVar32 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar32 >> 0x37,0) & 1) != 0) || (SUB161(auVar32 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar32 >> 0x47,0) & 1) != 0) || (SUB161(auVar32 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar32 >> 0x57,0) & 1) != 0) || (SUB161(auVar32 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar32 >> 0x67,0) & 1) != 0) || (SUB161(auVar32 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar32 >> 0x77,0) & 1) != 0) || auVar32[0xf] < '\0') goto LAB_141196a34;
  uVar15 = uVar15 + lVar17 + 0x10;
  lVar17 = lVar17 + 0x10;
  goto LAB_141196247;
LAB_141196152:
  uVar15 = uVar15 & uVar12;
  auVar52 = *(undefined1 (*) [16])(lVar13 + uVar15);
  auVar44[0] = -(auVar52[0] == auVar26[0]);
  auVar44[1] = -(auVar52[1] == auVar26[1]);
  auVar44[2] = -(auVar52[2] == auVar26[2]);
  auVar44[3] = -(auVar52[3] == auVar26[3]);
  auVar44[4] = -(auVar52[4] == auVar26[4]);
  auVar44[5] = -(auVar52[5] == auVar26[5]);
  auVar44[6] = -(auVar52[6] == auVar26[6]);
  auVar44[7] = -(auVar52[7] == auVar26[7]);
  auVar44[8] = -(auVar52[8] == auVar26[0]);
  auVar44[9] = -(auVar52[9] == auVar26[1]);
  auVar44[10] = -(auVar52[10] == auVar26[2]);
  auVar44[0xb] = -(auVar52[0xb] == auVar26[3]);
  auVar44[0xc] = -(auVar52[0xc] == auVar26[4]);
  auVar44[0xd] = -(auVar52[0xd] == auVar26[5]);
  auVar44[0xe] = -(auVar52[0xe] == auVar26[6]);
  auVar44[0xf] = -(auVar52[0xf] == auVar26[7]);
  uVar20 = (ushort)(SUB161(auVar44 >> 7,0) & 1) | (ushort)(SUB161(auVar44 >> 0xf,0) & 1) << 1 |
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
           (ushort)(SUB161(auVar44 >> 0x77,0) & 1) << 0xe | (ushort)(auVar44[0xf] >> 7) << 0xf;
  uVar19 = (uint)uVar20;
  while (uVar20 != 0) {
    uVar8 = 0;
    for (uVar9 = uVar19; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
      uVar8 = uVar8 + 1;
    }
    uVar22 = (uVar8 + uVar15 & uVar12) * -0xd8;
    if (pbStack_70 == *(byte **)(lVar13 + -0xd8 + uVar22)) {
      lVar13 = lVar13 + uVar22;
      *(undefined1 (*) [16])(lVar13 + -0x9c) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(lVar13 + -0xa8) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(lVar13 + -0xb8) = (undefined1  [16])0x0;
      *(undefined4 *)(lVar13 + -0x8c) = uVar3;
      *(undefined4 *)(lVar13 + -0x88) = 0;
      *(undefined4 *)(lVar13 + -0x84) = uVar3;
      *(undefined8 *)(lVar13 + -0x80) = 0;
      *(undefined8 *)(lVar13 + -0x7a) = 0;
      *(undefined2 *)(lVar13 + -0x72) = 0x102;
      uStack_a8 = uStack_68;
      uStack_b8 = uStack_78;
      pbStack_b0 = pbStack_70;
      if (*(longlong *)(uStack_78 + 0x1c8) == 0) goto LAB_141196b77;
      uVar15 = pdb_1400af0a0(uStack_78 + 0x1d0,&pbStack_b0);
      lVar13 = *(longlong *)(uVar14 + 0x1b0);
      uVar12 = *(ulonglong *)(uVar14 + 0x1b8);
      bVar25 = (byte)(uVar15 >> 0x39);
      auVar26 = ZEXT216(CONCAT11(bVar25,bVar25));
      auVar26 = pshuflw(auVar26,auVar26,0);
      lVar17 = 0;
      goto LAB_141196554;
    }
    uVar20 = (ushort)(uVar19 - 1) & (ushort)uVar19;
    uVar19 = CONCAT22((short)(uVar19 - 1 >> 0x10),uVar20);
  }
  auVar31[0] = -(auVar52[0] == -1);
  auVar31[1] = -(auVar52[1] == -1);
  auVar31[2] = -(auVar52[2] == -1);
  auVar31[3] = -(auVar52[3] == -1);
  auVar31[4] = -(auVar52[4] == -1);
  auVar31[5] = -(auVar52[5] == -1);
  auVar31[6] = -(auVar52[6] == -1);
  auVar31[7] = -(auVar52[7] == -1);
  auVar31[8] = -(auVar52[8] == -1);
  auVar31[9] = -(auVar52[9] == -1);
  auVar31[10] = -(auVar52[10] == -1);
  auVar31[0xb] = -(auVar52[0xb] == -1);
  auVar31[0xc] = -(auVar52[0xc] == -1);
  auVar31[0xd] = -(auVar52[0xd] == -1);
  auVar31[0xe] = -(auVar52[0xe] == -1);
  auVar31[0xf] = -(auVar52[0xf] == -1);
  if ((((((((((((((((SUB161(auVar31 >> 7,0) & 1) != 0 || (SUB161(auVar31 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar31 >> 0x17,0) & 1) != 0) || (SUB161(auVar31 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar31 >> 0x27,0) & 1) != 0) || (SUB161(auVar31 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar31 >> 0x37,0) & 1) != 0) || (SUB161(auVar31 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar31 >> 0x47,0) & 1) != 0) || (SUB161(auVar31 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar31 >> 0x57,0) & 1) != 0) || (SUB161(auVar31 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar31 >> 0x67,0) & 1) != 0) || (SUB161(auVar31 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar31 >> 0x77,0) & 1) != 0) || auVar31[0xf] < '\0') goto LAB_141196a34;
  uVar15 = uVar15 + lVar17 + 0x10;
  lVar17 = lVar17 + 0x10;
  goto LAB_141196152;
LAB_141196554:
  uVar15 = uVar15 & uVar12;
  auVar52 = *(undefined1 (*) [16])(lVar13 + uVar15);
  auVar48[0] = -(auVar52[0] == auVar26[0]);
  auVar48[1] = -(auVar52[1] == auVar26[1]);
  auVar48[2] = -(auVar52[2] == auVar26[2]);
  auVar48[3] = -(auVar52[3] == auVar26[3]);
  auVar48[4] = -(auVar52[4] == auVar26[4]);
  auVar48[5] = -(auVar52[5] == auVar26[5]);
  auVar48[6] = -(auVar52[6] == auVar26[6]);
  auVar48[7] = -(auVar52[7] == auVar26[7]);
  auVar48[8] = -(auVar52[8] == auVar26[0]);
  auVar48[9] = -(auVar52[9] == auVar26[1]);
  auVar48[10] = -(auVar52[10] == auVar26[2]);
  auVar48[0xb] = -(auVar52[0xb] == auVar26[3]);
  auVar48[0xc] = -(auVar52[0xc] == auVar26[4]);
  auVar48[0xd] = -(auVar52[0xd] == auVar26[5]);
  auVar48[0xe] = -(auVar52[0xe] == auVar26[6]);
  auVar48[0xf] = -(auVar52[0xf] == auVar26[7]);
  uVar20 = (ushort)(SUB161(auVar48 >> 7,0) & 1) | (ushort)(SUB161(auVar48 >> 0xf,0) & 1) << 1 |
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
  uVar19 = (uint)uVar20;
  while (uVar20 != 0) {
    uVar8 = 0;
    for (uVar9 = uVar19; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
      uVar8 = uVar8 + 1;
    }
    lVar18 = (uVar8 + uVar15 & uVar12) * -0xd8;
    if (pbStack_b0 == *(byte **)(lVar13 + -0xd8 + lVar18)) {
      if ((*(byte *)(lVar13 + lVar18 + -6) & 0x30) != 0) {
        uVar12 = *(longlong *)param_1[2] - 1;
        if ((ulonglong)param_1[4] <= uVar12) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar12,param_1[4],&UNK_14329f5a0);
        }
        puVar1 = (ulonglong *)(param_1[3] + uVar12 * 0x1c);
        uStack_78 = *puVar1;
        pbStack_70 = (byte *)puVar1[1];
        puVar7 = (undefined1 *)param_1[8];
        *puVar7 = 1;
        *(ulonglong *)(puVar7 + 1) = uStack_78;
        *(byte **)(puVar7 + 9) = pbStack_70;
      }
      pdb_1411743c0(&uStack_78,param_2,&UNK_14329f5b8,0xc,&UNK_14329f5c4,0x12);
      lVar13 = pdb_14116e020(&uStack_78);
      uVar12 = uStack_78;
      *(undefined4 *)(lVar13 + 0x40) = 0x3f19999a;
      uStack_98 = uStack_78;
      pbStack_90 = pbStack_70;
      uStack_88 = uStack_68;
      if (*(longlong *)(uStack_78 + 0x1c8) == 0) goto LAB_141196908;
      uVar14 = pdb_1400af0a0(uStack_78 + 0x1d0,&pbStack_90);
      uVar22 = uStack_98;
      lVar13 = *(longlong *)(uVar12 + 0x1b0);
      uVar12 = *(ulonglong *)(uVar12 + 0x1b8);
      bVar25 = (byte)(uVar14 >> 0x39);
      auVar26 = ZEXT216(CONCAT11(bVar25,bVar25));
      auVar26 = pshuflw(auVar26,auVar26,0);
      lVar17 = 0;
      goto LAB_1411968a3;
    }
    uVar20 = (ushort)(uVar19 - 1) & (ushort)uVar19;
    uVar19 = CONCAT22((short)(uVar19 - 1 >> 0x10),uVar20);
    uVar22 = (ulonglong)uVar19;
  }
  auVar35[0] = -(auVar52[0] == -1);
  auVar35[1] = -(auVar52[1] == -1);
  auVar35[2] = -(auVar52[2] == -1);
  auVar35[3] = -(auVar52[3] == -1);
  auVar35[4] = -(auVar52[4] == -1);
  auVar35[5] = -(auVar52[5] == -1);
  auVar35[6] = -(auVar52[6] == -1);
  auVar35[7] = -(auVar52[7] == -1);
  auVar35[8] = -(auVar52[8] == -1);
  auVar35[9] = -(auVar52[9] == -1);
  auVar35[10] = -(auVar52[10] == -1);
  auVar35[0xb] = -(auVar52[0xb] == -1);
  auVar35[0xc] = -(auVar52[0xc] == -1);
  auVar35[0xd] = -(auVar52[0xd] == -1);
  auVar35[0xe] = -(auVar52[0xe] == -1);
  auVar35[0xf] = -(auVar52[0xf] == -1);
  if ((((((((((((((((SUB161(auVar35 >> 7,0) & 1) != 0 || (SUB161(auVar35 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar35 >> 0x17,0) & 1) != 0) || (SUB161(auVar35 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar35 >> 0x27,0) & 1) != 0) || (SUB161(auVar35 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar35 >> 0x37,0) & 1) != 0) || (SUB161(auVar35 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar35 >> 0x47,0) & 1) != 0) || (SUB161(auVar35 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar35 >> 0x57,0) & 1) != 0) || (SUB161(auVar35 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar35 >> 0x67,0) & 1) != 0) || (SUB161(auVar35 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar35 >> 0x77,0) & 1) != 0) || auVar35[0xf] < '\0') goto LAB_141196b77;
  uVar15 = uVar15 + lVar17 + 0x10;
  lVar17 = lVar17 + 0x10;
  goto LAB_141196554;
LAB_1411968a3:
  uVar14 = uVar14 & uVar12;
  auVar52 = *(undefined1 (*) [16])(lVar13 + uVar14);
  auVar50[0] = -(auVar52[0] == auVar26[0]);
  auVar50[1] = -(auVar52[1] == auVar26[1]);
  auVar50[2] = -(auVar52[2] == auVar26[2]);
  auVar50[3] = -(auVar52[3] == auVar26[3]);
  auVar50[4] = -(auVar52[4] == auVar26[4]);
  auVar50[5] = -(auVar52[5] == auVar26[5]);
  auVar50[6] = -(auVar52[6] == auVar26[6]);
  auVar50[7] = -(auVar52[7] == auVar26[7]);
  auVar50[8] = -(auVar52[8] == auVar26[0]);
  auVar50[9] = -(auVar52[9] == auVar26[1]);
  auVar50[10] = -(auVar52[10] == auVar26[2]);
  auVar50[0xb] = -(auVar52[0xb] == auVar26[3]);
  auVar50[0xc] = -(auVar52[0xc] == auVar26[4]);
  auVar50[0xd] = -(auVar52[0xd] == auVar26[5]);
  auVar50[0xe] = -(auVar52[0xe] == auVar26[6]);
  auVar50[0xf] = -(auVar52[0xf] == auVar26[7]);
  uVar20 = (ushort)(SUB161(auVar50 >> 7,0) & 1) | (ushort)(SUB161(auVar50 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar50 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar50 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar50 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar50 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar50 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar50 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar50 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar50 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar50 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar50 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar50 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar50 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar50 >> 0x77,0) & 1) << 0xe | (ushort)(auVar50[0xf] >> 7) << 0xf;
  uVar19 = (uint)uVar20;
  while (uVar20 != 0) {
    uVar8 = 0;
    for (uVar9 = uVar19; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
      uVar8 = uVar8 + 1;
    }
    lVar18 = (uVar8 + uVar14 & uVar12) * -0xd8;
    if (pbStack_90 == *(byte **)(lVar13 + -0xd8 + lVar18)) {
      pbVar23 = (byte *)(lVar13 + lVar18 + -5);
      *pbVar23 = *pbVar23 | 0x10;
      uStack_68 = uStack_88;
      uStack_78 = uStack_98;
      pbStack_70 = pbStack_90;
      if (*(longlong *)(uStack_98 + 0x1c8) == 0) goto LAB_141196a34;
      uVar15 = pdb_1400af0a0(uStack_98 + 0x1d0,&pbStack_70);
      uVar14 = uStack_78;
      lVar13 = *(longlong *)(uVar22 + 0x1b0);
      uVar12 = *(ulonglong *)(uVar22 + 0x1b8);
      bVar25 = (byte)(uVar15 >> 0x39);
      auVar26 = ZEXT216(CONCAT11(bVar25,bVar25));
      auVar26 = pshuflw(auVar26,auVar26,0);
      lVar17 = 0;
      goto LAB_1411969d3;
    }
    uVar20 = (ushort)(uVar19 - 1) & (ushort)uVar19;
    uVar19 = CONCAT22((short)(uVar19 - 1 >> 0x10),uVar20);
  }
  auVar37[0] = -(auVar52[0] == -1);
  auVar37[1] = -(auVar52[1] == -1);
  auVar37[2] = -(auVar52[2] == -1);
  auVar37[3] = -(auVar52[3] == -1);
  auVar37[4] = -(auVar52[4] == -1);
  auVar37[5] = -(auVar52[5] == -1);
  auVar37[6] = -(auVar52[6] == -1);
  auVar37[7] = -(auVar52[7] == -1);
  auVar37[8] = -(auVar52[8] == -1);
  auVar37[9] = -(auVar52[9] == -1);
  auVar37[10] = -(auVar52[10] == -1);
  auVar37[0xb] = -(auVar52[0xb] == -1);
  auVar37[0xc] = -(auVar52[0xc] == -1);
  auVar37[0xd] = -(auVar52[0xd] == -1);
  auVar37[0xe] = -(auVar52[0xe] == -1);
  auVar37[0xf] = -(auVar52[0xf] == -1);
  if ((((((((((((((((SUB161(auVar37 >> 7,0) & 1) != 0 || (SUB161(auVar37 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar37 >> 0x17,0) & 1) != 0) || (SUB161(auVar37 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar37 >> 0x27,0) & 1) != 0) || (SUB161(auVar37 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar37 >> 0x37,0) & 1) != 0) || (SUB161(auVar37 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar37 >> 0x47,0) & 1) != 0) || (SUB161(auVar37 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar37 >> 0x57,0) & 1) != 0) || (SUB161(auVar37 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar37 >> 0x67,0) & 1) != 0) || (SUB161(auVar37 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar37 >> 0x77,0) & 1) != 0) || auVar37[0xf] < '\0') goto LAB_141196908;
  uVar14 = uVar14 + lVar17 + 0x10;
  lVar17 = lVar17 + 0x10;
  goto LAB_1411968a3;
LAB_1411969d3:
  uVar15 = uVar15 & uVar12;
  auVar52 = *(undefined1 (*) [16])(lVar13 + uVar15);
  auVar51[0] = -(auVar52[0] == auVar26[0]);
  auVar51[1] = -(auVar52[1] == auVar26[1]);
  auVar51[2] = -(auVar52[2] == auVar26[2]);
  auVar51[3] = -(auVar52[3] == auVar26[3]);
  auVar51[4] = -(auVar52[4] == auVar26[4]);
  auVar51[5] = -(auVar52[5] == auVar26[5]);
  auVar51[6] = -(auVar52[6] == auVar26[6]);
  auVar51[7] = -(auVar52[7] == auVar26[7]);
  auVar51[8] = -(auVar52[8] == auVar26[0]);
  auVar51[9] = -(auVar52[9] == auVar26[1]);
  auVar51[10] = -(auVar52[10] == auVar26[2]);
  auVar51[0xb] = -(auVar52[0xb] == auVar26[3]);
  auVar51[0xc] = -(auVar52[0xc] == auVar26[4]);
  auVar51[0xd] = -(auVar52[0xd] == auVar26[5]);
  auVar51[0xe] = -(auVar52[0xe] == auVar26[6]);
  auVar51[0xf] = -(auVar52[0xf] == auVar26[7]);
  uVar20 = (ushort)(SUB161(auVar51 >> 7,0) & 1) | (ushort)(SUB161(auVar51 >> 0xf,0) & 1) << 1 |
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
           (ushort)(SUB161(auVar51 >> 0x77,0) & 1) << 0xe | (ushort)(auVar51[0xf] >> 7) << 0xf;
  uVar19 = (uint)uVar20;
  while (uVar20 != 0) {
    uVar8 = 0;
    for (uVar9 = uVar19; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
      uVar8 = uVar8 + 1;
    }
    uVar22 = (uVar8 + uVar15 & uVar12) * -0xd8;
    if (pbStack_70 == *(byte **)(lVar13 + -0xd8 + uVar22)) {
      lVar13 = lVar13 + uVar22;
      *(undefined1 (*) [16])(lVar13 + -0x9c) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(lVar13 + -0xa8) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(lVar13 + -0xb8) = (undefined1  [16])0x0;
      *(undefined4 *)(lVar13 + -0x8c) = uVar3;
      *(undefined4 *)(lVar13 + -0x88) = 0;
      *(undefined4 *)(lVar13 + -0x84) = uVar3;
      *(undefined8 *)(lVar13 + -0x80) = 0;
      *(undefined8 *)(lVar13 + -0x7a) = 0;
      *(undefined2 *)(lVar13 + -0x72) = 0x102;
      uStack_88 = uStack_68;
      uStack_98 = uStack_78;
      pbStack_90 = pbStack_70;
      if (*(longlong *)(uStack_78 + 0x1c8) != 0) {
        uVar15 = pdb_1400af0a0(uStack_78 + 0x1d0,&pbStack_90);
        puVar16 = *(undefined **)(uVar14 + 0x1b0);
        uVar12 = *(ulonglong *)(uVar14 + 0x1b8);
        bVar25 = (byte)(uVar15 >> 0x39);
        auVar26 = ZEXT216(CONCAT11(bVar25,bVar25));
        auVar26 = pshuflw(auVar26,auVar26,0);
        lVar13 = 0;
        while( true ) {
          uVar15 = uVar15 & uVar12;
          pcVar4 = puVar16 + uVar15;
          auVar52[0] = -(*pcVar4 == auVar26[0]);
          auVar52[1] = -(pcVar4[1] == auVar26[1]);
          auVar52[2] = -(pcVar4[2] == auVar26[2]);
          auVar52[3] = -(pcVar4[3] == auVar26[3]);
          auVar52[4] = -(pcVar4[4] == auVar26[4]);
          auVar52[5] = -(pcVar4[5] == auVar26[5]);
          auVar52[6] = -(pcVar4[6] == auVar26[6]);
          auVar52[7] = -(pcVar4[7] == auVar26[7]);
          auVar52[8] = -(pcVar4[8] == auVar26[0]);
          auVar52[9] = -(pcVar4[9] == auVar26[1]);
          auVar52[10] = -(pcVar4[10] == auVar26[2]);
          auVar52[0xb] = -(pcVar4[0xb] == auVar26[3]);
          auVar52[0xc] = -(pcVar4[0xc] == auVar26[4]);
          auVar52[0xd] = -(pcVar4[0xd] == auVar26[5]);
          auVar52[0xe] = -(pcVar4[0xe] == auVar26[6]);
          auVar52[0xf] = -(pcVar4[0xf] == auVar26[7]);
          uVar20 = (ushort)(SUB161(auVar52 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar52 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar52 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar52 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar52 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar52 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar52 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar52 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar52 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar52 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar52 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar52 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar52 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar52 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar52 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar52[0xf] >> 7) << 0xf;
          uVar19 = (uint)uVar20;
          while (uVar20 != 0) {
            uVar8 = 0;
            for (uVar9 = uVar19; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
              uVar8 = uVar8 + 1;
            }
            uVar22 = (uVar8 + uVar15 & uVar12) * -0xd8;
            if (pbStack_90 == *(byte **)(puVar16 + (uVar22 - 0xd8))) goto LAB_141196b8f;
            uVar20 = (ushort)(uVar19 - 1) & (ushort)uVar19;
            uVar19 = CONCAT22((short)(uVar19 - 1 >> 0x10),uVar20);
            uVar22 = (ulonglong)uVar19;
          }
          auVar39[0] = -(*pcVar4 == -1);
          auVar39[1] = -(pcVar4[1] == -1);
          auVar39[2] = -(pcVar4[2] == -1);
          auVar39[3] = -(pcVar4[3] == -1);
          auVar39[4] = -(pcVar4[4] == -1);
          auVar39[5] = -(pcVar4[5] == -1);
          auVar39[6] = -(pcVar4[6] == -1);
          auVar39[7] = -(pcVar4[7] == -1);
          auVar39[8] = -(pcVar4[8] == -1);
          auVar39[9] = -(pcVar4[9] == -1);
          auVar39[10] = -(pcVar4[10] == -1);
          auVar39[0xb] = -(pcVar4[0xb] == -1);
          auVar39[0xc] = -(pcVar4[0xc] == -1);
          auVar39[0xd] = -(pcVar4[0xd] == -1);
          auVar39[0xe] = -(pcVar4[0xe] == -1);
          auVar39[0xf] = -(pcVar4[0xf] == -1);
          if ((((((((((((((((SUB161(auVar39 >> 7,0) & 1) != 0 || (SUB161(auVar39 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar39 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar39 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar39 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar39 >> 0x2f,0) & 1) != 0) || (SUB161(auVar39 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar39 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar39 >> 0x47,0) & 1) != 0) || (SUB161(auVar39 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar39 >> 0x57,0) & 1) != 0) || (SUB161(auVar39 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar39 >> 0x67,0) & 1) != 0) || (SUB161(auVar39 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar39 >> 0x77,0) & 1) != 0) || auVar39[0xf] < '\0') break;
          uVar15 = uVar15 + lVar13 + 0x10;
          lVar13 = lVar13 + 0x10;
        }
      }
      goto LAB_141196b77;
    }
    uVar20 = (ushort)(uVar19 - 1) & (ushort)uVar19;
    uVar19 = CONCAT22((short)(uVar19 - 1 >> 0x10),uVar20);
  }
  auVar38[0] = -(auVar52[0] == -1);
  auVar38[1] = -(auVar52[1] == -1);
  auVar38[2] = -(auVar52[2] == -1);
  auVar38[3] = -(auVar52[3] == -1);
  auVar38[4] = -(auVar52[4] == -1);
  auVar38[5] = -(auVar52[5] == -1);
  auVar38[6] = -(auVar52[6] == -1);
  auVar38[7] = -(auVar52[7] == -1);
  auVar38[8] = -(auVar52[8] == -1);
  auVar38[9] = -(auVar52[9] == -1);
  auVar38[10] = -(auVar52[10] == -1);
  auVar38[0xb] = -(auVar52[0xb] == -1);
  auVar38[0xc] = -(auVar52[0xc] == -1);
  auVar38[0xd] = -(auVar52[0xd] == -1);
  auVar38[0xe] = -(auVar52[0xe] == -1);
  auVar38[0xf] = -(auVar52[0xf] == -1);
  if ((((((((((((((((SUB161(auVar38 >> 7,0) & 1) != 0 || (SUB161(auVar38 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar38 >> 0x17,0) & 1) != 0) || (SUB161(auVar38 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar38 >> 0x27,0) & 1) != 0) || (SUB161(auVar38 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar38 >> 0x37,0) & 1) != 0) || (SUB161(auVar38 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar38 >> 0x47,0) & 1) != 0) || (SUB161(auVar38 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar38 >> 0x57,0) & 1) != 0) || (SUB161(auVar38 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar38 >> 0x67,0) & 1) != 0) || (SUB161(auVar38 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar38 >> 0x77,0) & 1) != 0) || auVar38[0xf] < '\0') goto LAB_141196a34;
  uVar15 = uVar15 + lVar17 + 0x10;
  lVar17 = lVar17 + 0x10;
  goto LAB_1411969d3;
}

