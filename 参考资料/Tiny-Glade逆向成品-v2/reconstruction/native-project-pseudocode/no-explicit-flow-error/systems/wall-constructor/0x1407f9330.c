// VA 0x1407f9330, PDB extent 2442 bytes
// system_wall_constructor::construct_platform_stairs::maintain_wooden_gate_steps
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_platform_stairs/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_wall_constructor::construct_platform_stairs::maintain_wooden_gate_steps
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_platform_stairs/mod.rs
   Extent: 2442 */

void pdb_1407f9330(undefined8 *param_1,longlong *param_2,undefined8 param_3,undefined8 *param_4)

{
  char *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulonglong *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  byte *arg0;
  byte *arg0_00;
  uint uVar18;
  longlong *plVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  longlong lVar22;
  uint uVar23;
  longlong *plVar24;
  longlong lVar25;
  longlong lVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  byte bVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  longlong lVar34;
  ushort uVar35;
  longlong lVar36;
  byte bVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
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
  longlong lStack_f0;
  longlong lStack_e8;
  ulonglong uStack_e0;
  undefined1 (*pauStack_d8) [16];
  undefined1 (*pauStack_d0) [16];
  undefined1 *puStack_c8;
  ushort uStack_c0;
  longlong lStack_b8;
  longlong lStack_b0;
  undefined1 (*pauStack_a8) [16];
  ulonglong uStack_a0;
  longlong lStack_98;
  longlong lStack_90;
  longlong lStack_88;
  longlong *plStack_80;
  char acStack_72 [50];
  
  acStack_72[2] = -2;
  acStack_72[3] = -1;
  acStack_72[4] = -1;
  acStack_72[5] = -1;
  acStack_72[6] = -1;
  acStack_72[7] = -1;
  acStack_72[8] = -1;
  acStack_72[9] = -1;
  acStack_72[0] = '\0';
  plVar24 = param_2;
  plVar19 = (longlong *)pdb_140f3bda0();
  if ((char)plVar19[2] == '\x01') {
    lStack_88 = *plVar19;
    plVar24 = (longlong *)plVar19[1];
  }
  else {
    lStack_88 = pdb_140f4fd10();
    *plVar19 = lStack_88;
    plVar19[1] = (longlong)plVar24;
    *(undefined1 *)(plVar19 + 2) = 1;
  }
  *plVar19 = lStack_88 + 1;
  lStack_98 = _DAT_143006610;
  lStack_90 = _UNK_143006618;
  pauStack_a8 = _DAT_143006600;
  uStack_a0 = _UNK_143006608;
  *(undefined4 *)param_2[2] = *(undefined4 *)((longlong)param_2 + 0x1c);
  puVar4 = (ulonglong *)*param_4;
  lVar5 = param_4[1];
  uVar28 = *puVar4;
  uVar21 = 0;
  uVar31 = uVar28 - *(ulonglong *)(lVar5 + 0x18);
  if (uVar28 < *(ulonglong *)(lVar5 + 0x18)) {
    uVar31 = uVar21;
  }
  lStack_b0 = *param_2;
  uVar33 = uVar28 - *(ulonglong *)(lVar5 + 0x38);
  if (uVar28 < *(ulonglong *)(lVar5 + 0x38)) {
    uVar33 = uVar21;
  }
  uVar27 = uVar31 * 0x40 + *(longlong *)(lVar5 + 8);
  uVar28 = *(ulonglong *)(lVar5 + 0x10);
  uVar32 = uVar28 - uVar31;
  if (uVar28 < uVar31) {
    uVar32 = uVar21;
  }
  lStack_e8 = 8;
  if (uVar28 < uVar31) {
    uVar27 = 8;
  }
  uVar28 = uVar33 * 0x40 + *(longlong *)(lVar5 + 0x28);
  uVar31 = *(ulonglong *)(lVar5 + 0x30) - uVar33;
  if (*(ulonglong *)(lVar5 + 0x30) < uVar33) {
    uVar28 = 8;
    uVar31 = uVar21;
  }
  *puVar4 = (*(longlong *)(lVar5 + 0x40) - uVar31) - uVar32;
  uVar32 = uVar32 * 0x40 + uVar27;
  iVar8 = -(uint)(CONCAT13(unaff_XMM6_Bd,
                           CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))) ==
                 CONCAT13(unaff_XMM6_Bd,
                          CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))));
  iVar9 = -(uint)(CONCAT13(unaff_XMM6_Bh,
                           CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be))) ==
                 CONCAT13(unaff_XMM6_Bh,
                          CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be))));
  iVar10 = -(uint)(CONCAT13(unaff_XMM6_Bl,
                            CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi))) ==
                  CONCAT13(unaff_XMM6_Bl,
                           CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi))));
  iVar11 = -(uint)(CONCAT13(unaff_XMM6_Bp,
                            CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm))) ==
                  CONCAT13(unaff_XMM6_Bp,
                           CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm))));
  uVar21 = uVar28;
  uVar33 = uVar32;
  plStack_80 = plVar24;
  do {
    if ((uVar27 == 0) || (uVar27 == uVar32)) {
      if ((uVar21 == 0) || (uVar21 == uVar31 * 0x40 + uVar28)) break;
      uVar29 = uVar21 + 0x40;
      uVar20 = 0;
    }
    else {
      uVar20 = uVar27 + 0x40;
      uVar29 = uVar21;
      uVar21 = uVar27;
    }
    *puVar4 = *puVar4 + 1;
    lVar5 = *(longlong *)(uVar21 + 0x30);
    lStack_f0 = lVar5;
    uVar27 = pdb_1400af0a0(&lStack_88,&lStack_f0);
    bVar30 = (byte)(uVar27 >> 0x38);
    bVar37 = bVar30 >> 1;
    auVar38 = ZEXT216(CONCAT11(bVar37,bVar37));
    auVar38 = pshuflw(auVar38,auVar38,0);
    lStack_e8 = 0;
    uVar33 = uVar27;
    while( true ) {
      uVar33 = uVar33 & uStack_a0;
      pcVar1 = *pauStack_a8 + uVar33;
      auVar40[0] = -(*pcVar1 == auVar38[0]);
      auVar40[1] = -(pcVar1[1] == auVar38[1]);
      auVar40[2] = -(pcVar1[2] == auVar38[2]);
      auVar40[3] = -(pcVar1[3] == auVar38[3]);
      auVar40[4] = -(pcVar1[4] == auVar38[4]);
      auVar40[5] = -(pcVar1[5] == auVar38[5]);
      auVar40[6] = -(pcVar1[6] == auVar38[6]);
      auVar40[7] = -(pcVar1[7] == auVar38[7]);
      auVar40[8] = -(pcVar1[8] == auVar38[0]);
      auVar40[9] = -(pcVar1[9] == auVar38[1]);
      auVar40[10] = -(pcVar1[10] == auVar38[2]);
      auVar40[0xb] = -(pcVar1[0xb] == auVar38[3]);
      auVar40[0xc] = -(pcVar1[0xc] == auVar38[4]);
      auVar40[0xd] = -(pcVar1[0xd] == auVar38[5]);
      auVar40[0xe] = -(pcVar1[0xe] == auVar38[6]);
      auVar40[0xf] = -(pcVar1[0xf] == auVar38[7]);
      uVar35 = (ushort)(SUB161(auVar40 >> 7,0) & 1) | (ushort)(SUB161(auVar40 >> 0xf,0) & 1) << 1 |
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
      uVar23 = (uint)uVar35;
      while (uVar35 != 0) {
        uVar18 = 0;
        for (uVar7 = uVar23; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
          uVar18 = uVar18 + 1;
        }
        lVar36 = (uVar18 + uVar33 & uStack_a0) * -0x38;
        if (*(longlong *)((longlong)pauStack_a8 + lVar36 + -0x38) == lVar5) {
          lVar36 = (longlong)pauStack_a8 + lVar36;
          goto LAB_1407f9648;
        }
        uVar35 = (ushort)(uVar23 - 1) & (ushort)uVar23;
        uVar23 = CONCAT22((short)(uVar23 - 1 >> 0x10),uVar35);
      }
      auVar39[0] = -(*pcVar1 == (char)iVar8);
      auVar39[1] = -(pcVar1[1] == (char)((uint)iVar8 >> 8));
      auVar39[2] = -(pcVar1[2] == (char)((uint)iVar8 >> 0x10));
      auVar39[3] = -(pcVar1[3] == (char)((uint)iVar8 >> 0x18));
      auVar39[4] = -(pcVar1[4] == (char)iVar9);
      auVar39[5] = -(pcVar1[5] == (char)((uint)iVar9 >> 8));
      auVar39[6] = -(pcVar1[6] == (char)((uint)iVar9 >> 0x10));
      auVar39[7] = -(pcVar1[7] == (char)((uint)iVar9 >> 0x18));
      auVar39[8] = -(pcVar1[8] == (char)iVar10);
      auVar39[9] = -(pcVar1[9] == (char)((uint)iVar10 >> 8));
      auVar39[10] = -(pcVar1[10] == (char)((uint)iVar10 >> 0x10));
      auVar39[0xb] = -(pcVar1[0xb] == (char)((uint)iVar10 >> 0x18));
      auVar39[0xc] = -(pcVar1[0xc] == (char)iVar11);
      auVar39[0xd] = -(pcVar1[0xd] == (char)((uint)iVar11 >> 8));
      auVar39[0xe] = -(pcVar1[0xe] == (char)((uint)iVar11 >> 0x10));
      auVar39[0xf] = -(pcVar1[0xf] == (char)((uint)iVar11 >> 0x18));
      if ((((((((((((((((SUB161(auVar39 >> 7,0) & 1) != 0 || (SUB161(auVar39 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar39 >> 0x17,0) & 1) != 0) || (SUB161(auVar39 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar39 >> 0x27,0) & 1) != 0) || (SUB161(auVar39 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar39 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar39 >> 0x3f,0) & 1) != 0) || (SUB161(auVar39 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar39 >> 0x4f,0) & 1) != 0) || (SUB161(auVar39 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar39 >> 0x5f,0) & 1) != 0) || (SUB161(auVar39 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar39 >> 0x6f,0) & 1) != 0) || (SUB161(auVar39 >> 0x77,0) & 1) != 0) ||
          auVar39[0xf] < '\0') break;
      uVar33 = uVar33 + lStack_e8 + 0x10;
      lStack_e8 = lStack_e8 + 0x10;
    }
    if (lStack_98 == 0) {
      acStack_72[1] = 1;
      pdb_142ddb6d0(&pauStack_a8,1,&lStack_88,CONCAT71((int7)(uVar33 >> 8),1));
    }
    uVar27 = uVar27 & uStack_a0;
    auVar38 = *(undefined1 (*) [16])(*pauStack_a8 + uVar27);
    uVar35 = (ushort)(SUB161(auVar38 >> 7,0) & 1) | (ushort)(SUB161(auVar38 >> 0xf,0) & 1) << 1 |
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
             (ushort)(byte)(auVar38[0xf] >> 7) << 0xf;
    uVar23 = (uint)uVar35;
    if (uVar35 == 0) {
      lVar36 = 0x10;
      do {
        uVar27 = uVar27 + lVar36 & uStack_a0;
        auVar38 = *(undefined1 (*) [16])(*pauStack_a8 + uVar27);
        lVar36 = lVar36 + 0x10;
        uVar23 = (uint)(ushort)((ushort)(SUB161(auVar38 >> 7,0) & 1) |
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
      } while (uVar23 == 0);
    }
    uVar18 = 0;
    for (; (uVar23 & 1) == 0; uVar23 = uVar23 >> 1 | 0x80000000) {
      uVar18 = uVar18 + 1;
    }
    uVar27 = uVar18 + uVar27 & uStack_a0;
    bVar37 = (*pauStack_a8)[uVar27];
    if (-1 < (char)bVar37) {
      auVar38 = *pauStack_a8;
      uVar23 = 0;
      for (uVar18 = (uint)(ushort)((ushort)(SUB161(auVar38 >> 7,0) & 1) |
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
                                  (ushort)(byte)(auVar38[0xf] >> 7) << 0xf); (uVar18 & 1) == 0;
          uVar18 = uVar18 >> 1 | 0x80000000) {
        uVar23 = uVar23 + 1;
      }
      uVar27 = (ulonglong)uVar23;
      bVar37 = (*pauStack_a8)[uVar27];
    }
    uVar33 = uVar27 - 0x10 & uStack_a0;
    bVar30 = bVar30 >> 1;
    (*pauStack_a8)[uVar27] = bVar30;
    pauStack_a8[1][uVar33] = bVar30;
    lStack_e8 = -uVar27;
    lVar25 = uVar27 * -0x38;
    lVar36 = (longlong)pauStack_a8 + lVar25;
    lStack_98 = lStack_98 - (ulonglong)(bVar37 & 1);
    *(longlong *)((longlong)pauStack_a8 + lVar25 + -0x38) = lVar5;
    *(undefined8 *)((longlong)pauStack_a8 + lVar25 + -0x30) = 0;
    *(undefined8 *)((longlong)pauStack_a8 + lVar25 + -0x28) = 4;
    puVar2 = (undefined8 *)((longlong)pauStack_a8 + lVar25 + -0x20);
    *puVar2 = 0;
    puVar2[1] = 0;
    *(undefined8 *)((longlong)pauStack_a8 + lVar25 + -0x10) = 4;
    *(undefined8 *)((longlong)pauStack_a8 + lVar25 + -8) = 0;
    lStack_90 = lStack_90 + 1;
LAB_1407f9648:
    lVar5 = *(longlong *)(uVar21 + 8);
    uVar27 = *(ulonglong *)(uVar21 + 0x10);
    lVar25 = *(longlong *)(lVar36 + -0x20);
    if ((ulonglong)(*(longlong *)(lVar36 + -0x30) - lVar25) < uVar27) {
      acStack_72[1] = 1;
      uVar33 = 4;
      pdb_142d7f1b0(lVar36 + -0x30,lVar25,uVar27,4,0x50);
      lVar25 = *(longlong *)(lVar36 + -0x20);
      lVar26 = *(longlong *)(lVar36 + -0x28);
      if (uVar27 == 1) goto LAB_1407f9675;
LAB_1407f96b0:
      lStack_e8 = lVar25 * 0x50 + lVar26;
      uVar33 = -(uVar27 & 0xfffffffffffffffe);
      lVar34 = 0x50;
      lVar22 = 0;
      do {
        puVar2 = (undefined8 *)(lVar5 + -0x10 + lVar34);
        uVar6 = puVar2[1];
        puVar3 = (undefined8 *)(lStack_e8 + -0x10 + lVar34);
        *puVar3 = *puVar2;
        puVar3[1] = uVar6;
        puVar2 = (undefined8 *)(lVar5 + -0x50 + lVar34);
        uVar6 = *puVar2;
        uVar12 = puVar2[1];
        puVar2 = (undefined8 *)(lVar5 + -0x40 + lVar34);
        uVar13 = *puVar2;
        uVar14 = puVar2[1];
        puVar2 = (undefined8 *)(lVar5 + -0x30 + lVar34);
        uVar15 = *puVar2;
        uVar16 = puVar2[1];
        puVar2 = (undefined8 *)(lVar5 + -0x20 + lVar34);
        uVar17 = puVar2[1];
        puVar3 = (undefined8 *)(lStack_e8 + -0x20 + lVar34);
        *puVar3 = *puVar2;
        puVar3[1] = uVar17;
        puVar2 = (undefined8 *)(lStack_e8 + -0x30 + lVar34);
        *puVar2 = uVar15;
        puVar2[1] = uVar16;
        puVar2 = (undefined8 *)(lStack_e8 + -0x40 + lVar34);
        *puVar2 = uVar13;
        puVar2[1] = uVar14;
        puVar2 = (undefined8 *)(lStack_e8 + -0x50 + lVar34);
        *puVar2 = uVar6;
        puVar2[1] = uVar12;
        uVar6 = ((undefined8 *)(lVar5 + lVar34))[1];
        puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar34);
        uVar12 = *puVar2;
        uVar13 = puVar2[1];
        puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar34);
        uVar14 = *puVar2;
        uVar15 = puVar2[1];
        puVar2 = (undefined8 *)(lVar5 + 0x30 + lVar34);
        uVar16 = *puVar2;
        uVar17 = puVar2[1];
        *(undefined8 *)(lStack_e8 + lVar34) = *(undefined8 *)(lVar5 + lVar34);
        ((undefined8 *)(lStack_e8 + lVar34))[1] = uVar6;
        puVar2 = (undefined8 *)(lStack_e8 + 0x10 + lVar34);
        *puVar2 = uVar12;
        puVar2[1] = uVar13;
        puVar2 = (undefined8 *)(lStack_e8 + 0x20 + lVar34);
        *puVar2 = uVar14;
        puVar2[1] = uVar15;
        puVar2 = (undefined8 *)(lStack_e8 + 0x30 + lVar34);
        *puVar2 = uVar16;
        puVar2[1] = uVar17;
        puVar2 = (undefined8 *)(lVar5 + 0x40 + lVar34);
        uVar6 = puVar2[1];
        puVar3 = (undefined8 *)(lStack_e8 + 0x40 + lVar34);
        *puVar3 = *puVar2;
        puVar3[1] = uVar6;
        lVar34 = lVar34 + 0xa0;
        lVar22 = lVar22 + -2;
      } while (-lVar22 != (uVar27 & 0xfffffffffffffffe));
      lVar25 = lVar25 - lVar22;
      if ((uVar27 & 1) == 0) goto LAB_1407f97bf;
      lVar22 = -lVar22;
LAB_1407f976c:
      lVar22 = lVar22 * 0x50;
      lStack_e8 = lVar25 * 0x50;
      puVar2 = (undefined8 *)(lVar5 + 0x40 + lVar22);
      uVar6 = puVar2[1];
      puVar3 = (undefined8 *)(lVar26 + 0x40 + lStack_e8);
      *puVar3 = *puVar2;
      puVar3[1] = uVar6;
      uVar6 = *(undefined8 *)(lVar5 + lVar22);
      uVar12 = ((undefined8 *)(lVar5 + lVar22))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar22);
      uVar13 = *puVar2;
      uVar14 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar22);
      uVar15 = *puVar2;
      uVar16 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x30 + lVar22);
      uVar17 = puVar2[1];
      puVar3 = (undefined8 *)(lVar26 + 0x30 + lStack_e8);
      *puVar3 = *puVar2;
      puVar3[1] = uVar17;
      puVar2 = (undefined8 *)(lVar26 + 0x20 + lStack_e8);
      *puVar2 = uVar15;
      puVar2[1] = uVar16;
      puVar2 = (undefined8 *)(lVar26 + 0x10 + lStack_e8);
      *puVar2 = uVar13;
      puVar2[1] = uVar14;
      *(undefined8 *)(lVar26 + lStack_e8) = uVar6;
      ((undefined8 *)(lVar26 + lStack_e8))[1] = uVar12;
      lVar25 = lVar25 + 1;
    }
    else if (uVar27 != 0) {
      lVar26 = *(longlong *)(lVar36 + -0x28);
      if (uVar27 != 1) goto LAB_1407f96b0;
LAB_1407f9675:
      lVar22 = 0;
      goto LAB_1407f976c;
    }
LAB_1407f97bf:
    *(longlong *)(lVar36 + -0x20) = lVar25;
    lVar5 = *(longlong *)(uVar21 + 0x20);
    uVar21 = *(ulonglong *)(uVar21 + 0x28);
    lVar25 = *(longlong *)(lVar36 + -8);
    if ((ulonglong)(*(longlong *)(lVar36 + -0x18) - lVar25) < uVar21) {
      acStack_72[1] = 1;
      uVar33 = 4;
      pdb_142d7f1b0(lVar36 + -0x18,lVar25,uVar21,4,0x50);
      lVar25 = *(longlong *)(lVar36 + -8);
      lVar26 = *(longlong *)(lVar36 + -0x10);
      if (uVar21 != 1) goto LAB_1407f97f8;
LAB_1407f9460:
      lVar22 = 0;
LAB_1407f9462:
      lVar22 = lVar22 * 0x50;
      lStack_e8 = lVar25 * 0x50;
      puVar2 = (undefined8 *)(lVar5 + 0x40 + lVar22);
      uVar6 = puVar2[1];
      puVar3 = (undefined8 *)(lVar26 + 0x40 + lStack_e8);
      *puVar3 = *puVar2;
      puVar3[1] = uVar6;
      uVar6 = *(undefined8 *)(lVar5 + lVar22);
      uVar12 = ((undefined8 *)(lVar5 + lVar22))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar22);
      uVar13 = *puVar2;
      uVar14 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar22);
      uVar15 = *puVar2;
      uVar16 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x30 + lVar22);
      uVar17 = puVar2[1];
      puVar3 = (undefined8 *)(lVar26 + 0x30 + lStack_e8);
      *puVar3 = *puVar2;
      puVar3[1] = uVar17;
      puVar2 = (undefined8 *)(lVar26 + 0x20 + lStack_e8);
      *puVar2 = uVar15;
      puVar2[1] = uVar16;
      puVar2 = (undefined8 *)(lVar26 + 0x10 + lStack_e8);
      *puVar2 = uVar13;
      puVar2[1] = uVar14;
      *(undefined8 *)(lVar26 + lStack_e8) = uVar6;
      ((undefined8 *)(lVar26 + lStack_e8))[1] = uVar12;
      lVar25 = lVar25 + 1;
    }
    else if (uVar21 != 0) {
      lVar26 = *(longlong *)(lVar36 + -0x10);
      if (uVar21 == 1) goto LAB_1407f9460;
LAB_1407f97f8:
      lStack_e8 = lVar25 * 0x50 + lVar26;
      uVar33 = -(uVar21 & 0xfffffffffffffffe);
      lVar34 = 0x50;
      lVar22 = 0;
      do {
        puVar2 = (undefined8 *)(lVar5 + -0x10 + lVar34);
        uVar6 = puVar2[1];
        puVar3 = (undefined8 *)(lStack_e8 + -0x10 + lVar34);
        *puVar3 = *puVar2;
        puVar3[1] = uVar6;
        puVar2 = (undefined8 *)(lVar5 + -0x50 + lVar34);
        uVar6 = *puVar2;
        uVar12 = puVar2[1];
        puVar2 = (undefined8 *)(lVar5 + -0x40 + lVar34);
        uVar13 = *puVar2;
        uVar14 = puVar2[1];
        puVar2 = (undefined8 *)(lVar5 + -0x30 + lVar34);
        uVar15 = *puVar2;
        uVar16 = puVar2[1];
        puVar2 = (undefined8 *)(lVar5 + -0x20 + lVar34);
        uVar17 = puVar2[1];
        puVar3 = (undefined8 *)(lStack_e8 + -0x20 + lVar34);
        *puVar3 = *puVar2;
        puVar3[1] = uVar17;
        puVar2 = (undefined8 *)(lStack_e8 + -0x30 + lVar34);
        *puVar2 = uVar15;
        puVar2[1] = uVar16;
        puVar2 = (undefined8 *)(lStack_e8 + -0x40 + lVar34);
        *puVar2 = uVar13;
        puVar2[1] = uVar14;
        puVar2 = (undefined8 *)(lStack_e8 + -0x50 + lVar34);
        *puVar2 = uVar6;
        puVar2[1] = uVar12;
        uVar6 = ((undefined8 *)(lVar5 + lVar34))[1];
        puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar34);
        uVar12 = *puVar2;
        uVar13 = puVar2[1];
        puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar34);
        uVar14 = *puVar2;
        uVar15 = puVar2[1];
        puVar2 = (undefined8 *)(lVar5 + 0x30 + lVar34);
        uVar16 = *puVar2;
        uVar17 = puVar2[1];
        *(undefined8 *)(lStack_e8 + lVar34) = *(undefined8 *)(lVar5 + lVar34);
        ((undefined8 *)(lStack_e8 + lVar34))[1] = uVar6;
        puVar2 = (undefined8 *)(lStack_e8 + 0x10 + lVar34);
        *puVar2 = uVar12;
        puVar2[1] = uVar13;
        puVar2 = (undefined8 *)(lStack_e8 + 0x20 + lVar34);
        *puVar2 = uVar14;
        puVar2[1] = uVar15;
        puVar2 = (undefined8 *)(lStack_e8 + 0x30 + lVar34);
        *puVar2 = uVar16;
        puVar2[1] = uVar17;
        puVar2 = (undefined8 *)(lVar5 + 0x40 + lVar34);
        uVar6 = puVar2[1];
        puVar3 = (undefined8 *)(lStack_e8 + 0x40 + lVar34);
        *puVar3 = *puVar2;
        puVar3[1] = uVar6;
        lVar34 = lVar34 + 0xa0;
        lVar22 = lVar22 + -2;
      } while (-lVar22 != (uVar21 & 0xfffffffffffffffe));
      lVar25 = lVar25 - lVar22;
      if ((uVar21 & 1) != 0) {
        lVar22 = -lVar22;
        goto LAB_1407f9462;
      }
    }
    *(longlong *)(lVar36 + -8) = lVar25;
    uVar27 = uVar20;
    uVar21 = uVar29;
  } while( true );
  auVar38 = *pauStack_a8;
  if (uStack_a0 == 0) {
    lStack_f0 = 0;
  }
  else {
    uVar33 = uStack_a0 * 0x38 + 0x47 & 0xfffffffffffffff0;
    lStack_e8 = uStack_a0 + uVar33 + 0x11;
    uVar33 = (longlong)pauStack_a8 - uVar33;
    lStack_f0 = 0x10;
  }
  pauStack_d0 = pauStack_a8 + 1;
  uStack_c0 = ~((ushort)(SUB161(auVar38 >> 7,0) & 1) | (ushort)(SUB161(auVar38 >> 0xf,0) & 1) << 1 |
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
  puStack_c8 = *pauStack_a8 + uStack_a0 + 1;
  pauStack_d8 = pauStack_a8;
  lStack_b8 = lStack_90;
  uStack_e0 = uVar33;
  if (lStack_90 != 0) {
    uVar6 = *param_1;
    lVar5 = lStack_b0 + 0x30;
    do {
      uVar23 = (uint)uStack_c0;
      if (uStack_c0 == 0) {
        do {
          auVar38 = *pauStack_d0;
          pauStack_d8 = pauStack_d8 + -0x38;
          pauStack_d0 = pauStack_d0 + 1;
          uVar23 = (ushort)((ushort)(SUB161(auVar38 >> 7,0) & 1) |
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
        } while (uVar23 == 0);
      }
      uStack_c0 = (ushort)uVar23;
      uVar18 = 0;
      for (; (uVar23 & 1) == 0; uVar23 = uVar23 >> 1 | 0x80000000) {
        uVar18 = uVar18 + 1;
      }
      uStack_c0 = uStack_c0 - 1 & uStack_c0;
      lVar26 = (ulonglong)uVar18 * -0x38;
      lStack_b8 = lStack_b8 + -1;
      lVar36 = *(longlong *)((longlong)pauStack_d8 + lVar26 + -0x30);
      plVar24 = (longlong *)((longlong)pauStack_d8 + lVar26 + -0x18);
      lVar25 = *plVar24;
      arg0 = (byte *)plVar24[1];
      puVar2 = (undefined8 *)((longlong)pauStack_d8 + lVar26 + -0x28);
      arg0_00 = (byte *)*puVar2;
      if (SBORROW8(0,lVar36)) break;
      pdb_1407f9e20(uVar6,param_3,*(undefined8 *)((longlong)pauStack_d8 + lVar26 + -0x38),arg0_00,
                    puVar2[1],arg0,*(undefined8 *)((longlong)pauStack_d8 + lVar26 + -8),lStack_b0,
                    lVar5,acStack_72);
      if (lVar36 != 0) {
        pub_1406abac0(arg0_00,lVar36 * 0x50,4);
      }
      if (lVar25 != 0) {
        pub_1406abac0(arg0,lVar25 * 0x50,4);
      }
    } while (lStack_b8 != 0);
  }
  acStack_72[1] = 0;
  pdb_1413ffab0(&lStack_f0);
  if (acStack_72[0] != '\0') {
    acStack_72[1] = 0;
    pdb_140a43130(&UNK_143006560,0x29);
  }
  return;
}

