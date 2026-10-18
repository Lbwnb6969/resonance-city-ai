// VA 0x1408e51e0, PDB extent 3753 bytes
// system_decorator::restore_archived_decorators::restore_archived_decorators
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/restore_archived_decorators.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_decorator::restore_archived_decorators::restore_archived_decorators
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/restore_archived_decorators.rs
   Extent: 3753 */

void pdb_1408e51e0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8)

{
  char *pcVar1;
  ulonglong *puVar2;
  undefined1 auVar3 [16];
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  code *pcVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined1 auVar14 [16];
  undefined8 uVar15;
  undefined8 uVar16;
  undefined4 *puVar17;
  longlong lVar18;
  undefined4 *puVar19;
  longlong lVar20;
  longlong lVar21;
  longlong *plVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  undefined4 *puVar25;
  undefined4 *puVar26;
  undefined1 (*pauVar27) [16];
  undefined4 *puVar28;
  ulonglong uVar29;
  undefined4 *puVar30;
  undefined *puVar31;
  uint uVar32;
  ulonglong uVar33;
  ushort uVar34;
  ulonglong uVar35;
  uint uVar36;
  longlong lVar37;
  undefined1 (*pauVar38) [16];
  undefined8 *puVar39;
  undefined1 (*pauVar40) [16];
  ulonglong uVar41;
  uint uVar42;
  bool bVar43;
  bool bVar44;
  bool bVar45;
  bool bVar46;
  byte bVar47;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 unaff_XMM9_Ba;
  undefined1 unaff_XMM9_Bb;
  char cVar58;
  undefined1 unaff_XMM9_Bc;
  char cVar59;
  undefined1 unaff_XMM9_Bd;
  char cVar60;
  undefined1 unaff_XMM9_Be;
  undefined1 unaff_XMM9_Bf;
  char cVar61;
  undefined1 unaff_XMM9_Bg;
  char cVar62;
  undefined1 unaff_XMM9_Bh;
  char cVar63;
  undefined1 unaff_XMM9_Bi;
  undefined1 unaff_XMM9_Bj;
  char cVar64;
  undefined1 unaff_XMM9_Bk;
  char cVar65;
  undefined1 unaff_XMM9_Bl;
  char cVar66;
  undefined1 unaff_XMM9_Bm;
  undefined1 unaff_XMM9_Bn;
  char cVar67;
  undefined1 unaff_XMM9_Bo;
  char cVar68;
  undefined1 unaff_XMM9_Bp;
  char cVar69;
  longlong lStack_240;
  longlong lStack_230;
  longlong lStack_228;
  uint uStack_210;
  uint uStack_20c;
  undefined1 auStack_208 [16];
  undefined1 auStack_1f8 [16];
  undefined1 auStack_1e8 [16];
  longlong lStack_1d8;
  ulonglong uStack_1d0;
  ulonglong uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined2 uStack_1b0;
  undefined1 uStack_1ae;
  undefined8 *puStack_1a8;
  longlong lStack_1a0;
  longlong lStack_198;
  undefined4 *puStack_190;
  undefined4 *puStack_188;
  undefined4 *puStack_180;
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [16];
  undefined1 auStack_158 [16];
  longlong lStack_148;
  ulonglong uStack_140;
  undefined8 uStack_138;
  undefined8 *puStack_110;
  undefined8 uStack_108;
  undefined4 *puStack_100;
  longlong lStack_f8;
  longlong lStack_f0;
  byte bStack_d0;
  longlong lStack_c8;
  longlong lStack_c0;
  longlong lStack_b8;
  longlong lStack_b0;
  undefined1 (*pauStack_a8) [16];
  ushort uStack_98;
  longlong lStack_90;
  
  uVar4 = *(undefined4 *)((longlong)param_4 + 0x1c);
  puVar26 = (undefined4 *)param_4[2];
  *puVar26 = uVar4;
  uVar6 = *param_4;
  pdb_140c3bb70();
  lVar37 = param_8[1];
  uVar41 = *(ulonglong *)*param_8;
  uVar23 = 0;
  uVar24 = uVar41 - *(ulonglong *)(lVar37 + 0x18);
  if (uVar41 < *(ulonglong *)(lVar37 + 0x18)) {
    uVar24 = uVar23;
  }
  uVar35 = uVar41 - *(ulonglong *)(lVar37 + 0x38);
  if (uVar41 < *(ulonglong *)(lVar37 + 0x38)) {
    uVar35 = uVar23;
  }
  bVar43 = *(ulonglong *)(lVar37 + 0x30) < uVar35;
  uVar35 = *(ulonglong *)(lVar37 + 0x30) - uVar35;
  bVar45 = uVar35 != 0;
  if (bVar43) {
    uVar35 = uVar23;
  }
  bVar44 = *(ulonglong *)(lVar37 + 0x10) < uVar24;
  uVar24 = *(ulonglong *)(lVar37 + 0x10) - uVar24;
  bVar46 = uVar24 != 0;
  if (bVar44) {
    uVar24 = uVar23;
  }
  uVar41 = uVar24 + uVar35;
  if (!bVar44 && bVar46 || !bVar43 && bVar45) {
    uVar41 = uVar23;
  }
  *(ulonglong *)*param_8 = *(longlong *)(lVar37 + 0x40) - uVar41;
  if (((!bVar44 && bVar46 || !bVar43 && bVar45) || (*(char *)*param_1 != '\x04')) ||
     (((char *)*param_1)[1] != '\x01')) {
    *puVar26 = uVar4;
    puVar26 = (undefined4 *)*param_3;
    uStack_108 = *param_2;
    puVar30 = (undefined4 *)param_5[2];
    *puVar30 = *(undefined4 *)((longlong)param_5 + 0x1c);
    puStack_188 = (undefined4 *)*param_5;
    *(undefined4 *)param_6[2] = *(undefined4 *)((longlong)param_6 + 0x1c);
    puStack_180 = (undefined4 *)*param_6;
    puStack_110 = param_3;
    pdb_14007ee60(uVar6);
    pdb_140c41420(auStack_208,puVar26);
    uVar15 = auStack_208._8_8_;
    uVar16 = auStack_1f8._8_8_;
    uVar42 = (uint)(ushort)uStack_1d0;
    puVar25 = (undefined4 *)auStack_208._0_8_;
    pauVar27 = (undefined1 (*) [16])auStack_1e8._8_8_;
    lVar37 = auStack_1e8._0_8_;
    puVar28 = (undefined4 *)auStack_1f8._0_8_;
    uVar41 = uStack_1c8;
LAB_1408e5360:
    if (puVar28 == (undefined4 *)0x5) {
LAB_1408e5400:
      if ((undefined *)((longlong)puVar25 + -3) < (undefined *)0x2) goto LAB_1408e5454;
      puVar28 = (undefined4 *)0x5;
      puVar17 = puVar25;
      puVar25 = (undefined4 *)0x3;
      puVar19 = (undefined4 *)uVar15;
    }
    else if (lVar37 == 0) {
LAB_1408e53d7:
      lVar37 = 0;
      if ((undefined *)((longlong)puVar28 + -3) < (undefined *)0x2) goto LAB_1408e5400;
      lVar37 = 0;
      puVar17 = puVar28;
      puVar28 = (undefined4 *)0x3;
      puVar19 = (undefined4 *)uVar16;
    }
    else {
      if (uVar41 == 0) {
        uVar41 = 0;
        goto LAB_1408e53d7;
      }
      if ((short)uVar42 == 0) {
        do {
          auVar3 = *pauVar27;
          lVar37 = lVar37 + -0x980;
          pauVar27 = pauVar27 + 1;
          uVar42 = (ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar3 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar3 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar3 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar3 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar3 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar3 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar3 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar3 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar3 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar3 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar3 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar3 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar3 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar3[0xf] >> 7) << 0xf) ^ 0xffff;
        } while (uVar42 == 0);
      }
      uVar36 = 0;
      for (uVar32 = uVar42; (uVar32 & 1) == 0; uVar32 = uVar32 >> 1 | 0x80000000) {
        uVar36 = uVar36 + 1;
      }
      uVar42 = uVar42 - 1 & uVar42;
      uVar41 = uVar41 - 1;
      puVar19 = puVar25;
      puVar17 = (undefined4 *)
                pdb_140947f90(*(undefined8 *)(lVar37 + -0x98 + (ulonglong)uVar36 * -0x98));
      if (puVar17 == (undefined4 *)0x3) goto LAB_1408e53d7;
    }
    lVar18 = pdb_140c411c0(uVar6,puVar17,puVar19);
    puVar30 = puVar17;
    if (lVar18 != 0) {
      pdb_1414fa6c0(lVar18,puVar17);
      puVar30 = puVar17;
    }
    goto LAB_1408e5360;
  }
LAB_1408e5ff2:
  *(undefined4 *)param_7[2] = *(undefined4 *)((longlong)param_7 + 0x1c);
  pdb_140a5f5d0(*param_7);
  if (!bVar44 && bVar46 || !bVar43 && bVar45) {
    *(undefined4 *)param_3[2] = *(undefined4 *)((longlong)param_3 + 0x1c);
    pdb_140c41490(auStack_208,*param_3,uVar6,1);
    pdb_140ca5470(auStack_208,auStack_1e8,0x70,0x10);
  }
  return;
LAB_1408e5454:
  pdb_140c41900();
  auVar14 = _DAT_142e378b0;
  auVar3 = _DAT_142e378a0;
  lStack_1a0 = lStack_c8;
  lStack_230 = lStack_c0;
  lStack_228 = lStack_b8;
  lStack_240 = lStack_b0;
  uVar42 = (uint)uStack_98;
  lStack_198 = lStack_90;
  puStack_100 = puStack_188 + 0xc;
  iVar10 = -(uint)(CONCAT13(unaff_XMM9_Bd,
                            CONCAT12(unaff_XMM9_Bc,CONCAT11(unaff_XMM9_Bb,unaff_XMM9_Ba))) ==
                  CONCAT13(unaff_XMM9_Bd,
                           CONCAT12(unaff_XMM9_Bc,CONCAT11(unaff_XMM9_Bb,unaff_XMM9_Ba))));
  cVar58 = (char)((uint)iVar10 >> 8);
  cVar59 = (char)((uint)iVar10 >> 0x10);
  cVar60 = (char)((uint)iVar10 >> 0x18);
  iVar11 = -(uint)(CONCAT13(unaff_XMM9_Bh,
                            CONCAT12(unaff_XMM9_Bg,CONCAT11(unaff_XMM9_Bf,unaff_XMM9_Be))) ==
                  CONCAT13(unaff_XMM9_Bh,
                           CONCAT12(unaff_XMM9_Bg,CONCAT11(unaff_XMM9_Bf,unaff_XMM9_Be))));
  cVar61 = (char)((uint)iVar11 >> 8);
  cVar62 = (char)((uint)iVar11 >> 0x10);
  cVar63 = (char)((uint)iVar11 >> 0x18);
  iVar12 = -(uint)(CONCAT13(unaff_XMM9_Bl,
                            CONCAT12(unaff_XMM9_Bk,CONCAT11(unaff_XMM9_Bj,unaff_XMM9_Bi))) ==
                  CONCAT13(unaff_XMM9_Bl,
                           CONCAT12(unaff_XMM9_Bk,CONCAT11(unaff_XMM9_Bj,unaff_XMM9_Bi))));
  cVar64 = (char)((uint)iVar12 >> 8);
  cVar65 = (char)((uint)iVar12 >> 0x10);
  cVar66 = (char)((uint)iVar12 >> 0x18);
  iVar13 = -(uint)(CONCAT13(unaff_XMM9_Bp,
                            CONCAT12(unaff_XMM9_Bo,CONCAT11(unaff_XMM9_Bn,unaff_XMM9_Bm))) ==
                  CONCAT13(unaff_XMM9_Bp,
                           CONCAT12(unaff_XMM9_Bo,CONCAT11(unaff_XMM9_Bn,unaff_XMM9_Bm))));
  cVar67 = (char)((uint)iVar13 >> 8);
  cVar68 = (char)((uint)iVar13 >> 0x10);
  cVar69 = (char)((uint)iVar13 >> 0x18);
  pauVar27 = pauStack_a8;
  puVar25 = puStack_190;
  lVar18 = lStack_90;
  lVar37 = lStack_c8;
LAB_1408e5520:
  puVar28 = puVar26;
  if (lStack_230 == 2) goto LAB_1408e5602;
  if (lStack_240 != 0) {
    if (lVar18 == 0) {
      lVar18 = 0;
      goto LAB_1408e55d8;
    }
    if ((short)uVar42 == 0) {
      do {
        auVar48 = *pauVar27;
        lStack_240 = lStack_240 + -0x980;
        pauVar27 = pauVar27 + 1;
        uVar42 = (ushort)((ushort)(SUB161(auVar48 >> 7,0) & 1) |
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
      } while (uVar42 == 0);
    }
    uVar36 = 0;
    for (uVar32 = uVar42; (uVar32 & 1) == 0; uVar32 = uVar32 >> 1 | 0x80000000) {
      uVar36 = uVar36 + 1;
    }
    uVar42 = uVar42 - 1 & uVar42;
    lVar18 = lVar18 + -1;
    puVar19 = (undefined4 *)pdb_140c44590();
    if (puVar19 == (undefined4 *)0x3) goto LAB_1408e55d8;
    if (puVar19 == (undefined4 *)0x0) goto code_r0x0001408e55b0;
    goto LAB_1408e5634;
  }
LAB_1408e55d8:
  if (lStack_230 == 1) {
    if (lStack_228 == 0) {
      lStack_240 = 0;
      lStack_228 = 0;
      goto LAB_1408e5602;
    }
    puVar39 = (undefined8 *)(lStack_228 + 0x30);
    puVar19 = (undefined4 *)0x1;
    lStack_230 = 1;
    lStack_240 = 0;
    lStack_228 = 0;
    goto LAB_1408e5670;
  }
  lStack_240 = 0;
LAB_1408e5602:
  param_3 = puStack_110;
  if ((lVar37 != 0 & bStack_d0) != 1) goto LAB_1408e5ff2;
  puVar39 = (undefined8 *)(lVar37 + 0x30);
  puVar19 = (undefined4 *)0x2;
  lStack_230 = 2;
  lVar37 = 0;
  puVar30 = puVar25;
  goto LAB_1408e5670;
code_r0x0001408e55b0:
  puVar26 = puVar28;
  lVar20 = pdb_140b0e4b0();
  puVar25 = puVar28;
  if (lVar20 == 0) goto LAB_1408e5520;
  puVar19 = (undefined4 *)0x0;
LAB_1408e5634:
  puVar39 = (undefined8 *)((ulonglong)uVar36 * -0x98 + lStack_240 + -0x60);
  puVar30 = puVar28;
LAB_1408e5670:
  puVar26 = puVar19;
  lStack_1a0 = lVar37;
  lStack_198 = lVar18;
  puStack_190 = puVar30;
  lVar21 = pdb_140c3f210(uVar6);
  pdb_140c413b0();
  lVar20 = puVar39[3];
  puVar25 = puStack_190;
  puVar30 = puVar19;
  lVar18 = lStack_198;
  lVar37 = lStack_1a0;
  if (lVar20 != 0) {
    pauVar40 = (undefined1 (*) [16])*puVar39;
    auVar48 = *pauVar40;
    uVar36 = ~(uint)(ushort)((ushort)(SUB161(auVar48 >> 7,0) & 1) |
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
    pauVar38 = pauVar40 + 1;
    lStack_f0 = lVar21 + 0x60;
    lStack_f8 = lVar21 + 0x30;
    puStack_1a8 = puVar39;
    do {
      if ((short)uVar36 == 0) {
        do {
          auVar48 = *pauVar38;
          pauVar40 = pauVar40 + -0x68;
          pauVar38 = pauVar38 + 1;
          uVar36 = (ushort)((ushort)(SUB161(auVar48 >> 7,0) & 1) |
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
        } while (uVar36 == 0);
      }
      uVar32 = 0;
      for (uVar8 = uVar36; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
        uVar32 = uVar32 + 1;
      }
      lVar37 = (ulonglong)uVar32 * -0x68;
      uVar32 = *(uint *)((longlong)pauVar40 + lVar37 + -0x68);
      puVar26 = (undefined4 *)(ulonglong)uVar32;
      lStack_1d8 = *(longlong *)((longlong)pauVar40 + lVar37 + -0x30);
      auStack_1f8 = *(undefined1 (*) [16])((longlong)pauVar40 + lVar37 + -0x50);
      auStack_1e8 = *(undefined1 (*) [16])((longlong)pauVar40 + lVar37 + -0x40);
      uStack_1b0 = *(undefined2 *)((longlong)pauVar40 + lVar37 + -8);
      uStack_1ae = *(undefined1 *)((longlong)pauVar40 + lVar37 + -6);
      uStack_1b8 = *(undefined8 *)((longlong)pauVar40 + lVar37 + -0x10);
      auStack_208 = *(undefined1 (*) [16])((longlong)pauVar40 + lVar37 + -0x60);
      puVar2 = (ulonglong *)((longlong)pauVar40 + lVar37 + -0x28);
      uStack_1d0 = *puVar2;
      uStack_1c8 = puVar2[1];
      uStack_1c0 = *(undefined8 *)((longlong)pauVar40 + lVar37 + -0x18);
      auStack_158 = *(undefined1 (*) [16])(lVar21 + 0x20);
      auVar48._0_8_ = auStack_158._0_8_;
      auVar48._8_4_ = auStack_158._0_4_;
      auVar48._12_4_ = auStack_158._4_4_;
      auStack_178 = auVar48 ^ auVar3;
      auVar49._0_8_ = auStack_158._8_8_;
      auVar49._8_4_ = auStack_158._8_4_;
      auVar49._12_4_ = auStack_158._12_4_;
      auStack_168 = auVar49 ^ auVar14;
      lStack_148 = 0;
      uStack_140 = 0;
      uStack_138 = 0;
      uStack_210 = uVar32;
      uStack_20c = uVar32;
      pdb_1400b0640(auStack_178,&uStack_20c,4);
      uVar33 = lStack_148 << 0x38 | uStack_140;
      uVar41 = auStack_168._8_8_ ^ uVar33;
      uVar35 = auStack_178._0_8_ + auStack_168._0_8_;
      uVar23 = (auStack_168._0_8_ << 0xd | (ulonglong)auStack_168._0_8_ >> 0x33) ^ uVar35;
      uVar24 = (uVar41 << 0x10 | uVar41 >> 0x30) ^ auStack_178._8_8_ + uVar41;
      uVar29 = auStack_178._8_8_ + uVar41 + uVar23;
      uVar35 = (uVar35 << 0x20 | uVar35 >> 0x20) + uVar24;
      uVar23 = (uVar23 << 0x11 | uVar23 >> 0x2f) ^ uVar29;
      uVar41 = (uVar24 << 0x15 | uVar24 >> 0x2b) ^ uVar35;
      uVar35 = (uVar35 ^ uVar33) + uVar23;
      uVar29 = ((uVar29 << 0x20 | uVar29 >> 0x20) ^ 0xff) + uVar41;
      uVar24 = (uVar23 << 0xd | uVar23 >> 0x33) ^ uVar35;
      uVar41 = (uVar41 << 0x10 | uVar41 >> 0x30) ^ uVar29;
      uVar29 = uVar29 + uVar24;
      uVar23 = (uVar35 << 0x20 | uVar35 >> 0x20) + uVar41;
      uVar24 = (uVar24 << 0x11 | uVar24 >> 0x2f) ^ uVar29;
      uVar41 = (uVar41 << 0x15 | uVar41 >> 0x2b) ^ uVar23;
      uVar23 = uVar23 + uVar24;
      uVar35 = (uVar29 << 0x20 | uVar29 >> 0x20) + uVar41;
      uVar24 = (uVar24 << 0xd | uVar24 >> 0x33) ^ uVar23;
      uVar41 = (uVar41 << 0x10 | uVar41 >> 0x30) ^ uVar35;
      uVar35 = uVar35 + uVar24;
      uVar23 = (uVar23 << 0x20 | uVar23 >> 0x20) + uVar41;
      uVar24 = (uVar24 << 0x11 | uVar24 >> 0x2f) ^ uVar35;
      uVar41 = (uVar41 << 0x15 | uVar41 >> 0x2b) ^ uVar23;
      uVar35 = (uVar35 << 0x20 | uVar35 >> 0x20) + uVar41;
      uVar24 = (uVar24 << 0xd | uVar24 >> 0x33) ^ uVar23 + uVar24;
      uVar41 = (uVar41 << 0x10 | uVar41 >> 0x30) ^ uVar35;
      uVar35 = uVar35 + uVar24;
      pdb_140ca8930(lVar21,(uVar35 << 0x20 | uVar35 >> 0x20) ^ (uVar24 << 0x11 | uVar24 >> 0x2f) ^
                           (uVar41 << 0x15 | uVar41 >> 0x2b) ^ uVar35,&uStack_210);
      pdb_1403b0de0(lStack_f0,uVar32);
      pdb_141407a20(auStack_178,lStack_f8,uVar32,auStack_208);
      if (auStack_178._0_4_ == 8) {
        puVar30 = (undefined4 *)&UNK_143317ea0;
        pdb_140c44380();
      }
      else {
        puVar26 = (undefined4 *)(ulonglong)uVar32;
        puVar30 = (undefined4 *)&UNK_143317eb8;
        pdb_140c44480();
      }
      uVar36 = uVar36 - 1 & uVar36;
      lVar20 = lVar20 + -1;
    } while (lVar20 != 0);
    lVar20 = puStack_1a8[3];
    puVar25 = puStack_190;
    lVar18 = lStack_198;
    lVar37 = lStack_1a0;
    if (lVar20 != 0) {
      pauVar40 = (undefined1 (*) [16])*puStack_1a8;
      auVar48 = *pauVar40;
      uVar36 = ~(uint)(ushort)((ushort)(SUB161(auVar48 >> 7,0) & 1) |
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
      pauVar38 = pauVar40 + 1;
      do {
        if ((short)uVar36 == 0) {
          do {
            auVar48 = *pauVar38;
            pauVar40 = pauVar40 + -0x68;
            pauVar38 = pauVar38 + 1;
            uVar36 = (ushort)((ushort)(SUB161(auVar48 >> 7,0) & 1) |
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
          } while (uVar36 == 0);
        }
        uVar32 = 0;
        for (uVar8 = uVar36; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
          uVar32 = uVar32 + 1;
        }
        iVar5 = *(int *)((longlong)pauVar40 + (ulonglong)uVar32 * -0x68 + -0x68);
        plVar22 = (longlong *)pdb_140c41980();
        if (plVar22[3] != 0) {
          auStack_1e8 = *(undefined1 (*) [16])(plVar22 + 4);
          auVar51._0_8_ = auStack_1e8._0_8_;
          auVar51._8_4_ = auStack_1e8._0_4_;
          auVar51._12_4_ = auStack_1e8._4_4_;
          auStack_208 = auVar51 ^ auVar3;
          auVar52._0_8_ = auStack_1e8._8_8_;
          auVar52._8_4_ = auStack_1e8._8_4_;
          auVar52._12_4_ = auStack_1e8._12_4_;
          auStack_1f8 = auVar52 ^ auVar14;
          lStack_1d8 = 0;
          uStack_1d0 = 0;
          uStack_1c8 = 0;
          auStack_178._0_4_ = iVar5;
          pdb_1400b0640(auStack_208,auStack_178,4);
          uVar33 = lStack_1d8 << 0x38 | uStack_1d0;
          uVar41 = auStack_1f8._8_8_ ^ uVar33;
          uVar29 = auStack_208._0_8_ + auStack_1f8._0_8_;
          uVar23 = (auStack_1f8._0_8_ << 0xd | (ulonglong)auStack_1f8._0_8_ >> 0x33) ^ uVar29;
          uVar24 = (uVar41 << 0x10 | uVar41 >> 0x30) ^ auStack_208._8_8_ + uVar41;
          uVar35 = auStack_208._8_8_ + uVar41 + uVar23;
          uVar29 = (uVar29 << 0x20 | uVar29 >> 0x20) + uVar24;
          uVar23 = (uVar23 << 0x11 | uVar23 >> 0x2f) ^ uVar35;
          uVar41 = (uVar24 << 0x15 | uVar24 >> 0x2b) ^ uVar29;
          uVar29 = (uVar29 ^ uVar33) + uVar23;
          uVar35 = ((uVar35 << 0x20 | uVar35 >> 0x20) ^ 0xff) + uVar41;
          uVar24 = (uVar23 << 0xd | uVar23 >> 0x33) ^ uVar29;
          uVar41 = (uVar41 << 0x10 | uVar41 >> 0x30) ^ uVar35;
          uVar35 = uVar35 + uVar24;
          uVar29 = (uVar29 << 0x20 | uVar29 >> 0x20) + uVar41;
          uVar24 = (uVar24 << 0x11 | uVar24 >> 0x2f) ^ uVar35;
          uVar41 = (uVar41 << 0x15 | uVar41 >> 0x2b) ^ uVar29;
          uVar29 = uVar29 + uVar24;
          uVar23 = (uVar35 << 0x20 | uVar35 >> 0x20) + uVar41;
          uVar24 = (uVar24 << 0xd | uVar24 >> 0x33) ^ uVar29;
          uVar41 = (uVar41 << 0x10 | uVar41 >> 0x30) ^ uVar23;
          uVar23 = uVar23 + uVar24;
          uVar35 = (uVar29 << 0x20 | uVar29 >> 0x20) + uVar41;
          uVar24 = (uVar24 << 0x11 | uVar24 >> 0x2f) ^ uVar23;
          uVar41 = (uVar41 << 0x15 | uVar41 >> 0x2b) ^ uVar35;
          uVar23 = (uVar23 << 0x20 | uVar23 >> 0x20) + uVar41;
          uVar24 = (uVar24 << 0xd | uVar24 >> 0x33) ^ uVar35 + uVar24;
          uVar41 = (uVar41 << 0x10 | uVar41 >> 0x30) ^ uVar23;
          uVar23 = uVar23 + uVar24;
          puVar31 = (undefined *)
                    ((uVar23 << 0x20 | uVar23 >> 0x20) ^ (uVar24 << 0x11 | uVar24 >> 0x2f) ^
                     (uVar41 << 0x15 | uVar41 >> 0x2b) ^ uVar23);
          lVar37 = *plVar22;
          bVar47 = (byte)((ulonglong)puVar31 >> 0x39);
          auVar48 = ZEXT216(CONCAT11(bVar47,bVar47));
          auVar48 = pshuflw(auVar48,auVar48,0);
          puVar26 = (undefined4 *)0x0;
          while( true ) {
            puVar30 = (undefined4 *)((ulonglong)puVar31 & plVar22[1]);
            pcVar1 = (char *)(lVar37 + (longlong)puVar30);
            auVar56[0] = -(*pcVar1 == auVar48[0]);
            auVar56[1] = -(pcVar1[1] == auVar48[1]);
            auVar56[2] = -(pcVar1[2] == auVar48[2]);
            auVar56[3] = -(pcVar1[3] == auVar48[3]);
            auVar56[4] = -(pcVar1[4] == auVar48[4]);
            auVar56[5] = -(pcVar1[5] == auVar48[5]);
            auVar56[6] = -(pcVar1[6] == auVar48[6]);
            auVar56[7] = -(pcVar1[7] == auVar48[7]);
            auVar56[8] = -(pcVar1[8] == auVar48[0]);
            auVar56[9] = -(pcVar1[9] == auVar48[1]);
            auVar56[10] = -(pcVar1[10] == auVar48[2]);
            auVar56[0xb] = -(pcVar1[0xb] == auVar48[3]);
            auVar56[0xc] = -(pcVar1[0xc] == auVar48[4]);
            auVar56[0xd] = -(pcVar1[0xd] == auVar48[5]);
            auVar56[0xe] = -(pcVar1[0xe] == auVar48[6]);
            auVar56[0xf] = -(pcVar1[0xf] == auVar48[7]);
            uVar34 = (ushort)(SUB161(auVar56 >> 7,0) & 1) |
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
            uVar32 = (uint)uVar34;
            while (uVar34 != 0) {
              uVar8 = 0;
              for (uVar9 = uVar32; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
                uVar8 = uVar8 + 1;
              }
              lVar18 = ((ulonglong)((ulonglong)uVar8 + (longlong)puVar30) & plVar22[1]) * -0x50;
              if (iVar5 == *(int *)(lVar37 + -0x50 + lVar18)) {
                lVar37 = lVar37 + lVar18;
                plVar22 = *(longlong **)(lVar37 + -8);
                LOCK();
                lVar18 = *plVar22;
                *plVar22 = *plVar22 + 1;
                UNLOCK();
                if (*plVar22 == 0 || SCARRY8(lVar18,1) != *plVar22 < 0) goto LAB_1408e6087;
                auStack_178 = *(undefined1 (*) [16])(lVar37 + -0x20);
                auStack_168._8_8_ = plVar22;
                auStack_168._0_8_ = *(undefined8 *)(lVar37 + -0x10);
                auStack_208 = *(undefined1 (*) [16])(lVar37 + -0x40);
                auStack_1f8 = *(undefined1 (*) [16])(lVar37 + -0x30);
                puVar26 = puStack_180;
                puVar30 = puStack_188;
                pdb_1414e7710();
                goto LAB_1408e5cb0;
              }
              uVar34 = (ushort)(uVar32 - 1) & (ushort)uVar32;
              uVar32 = CONCAT22((short)(uVar32 - 1 >> 0x10),uVar34);
            }
            auVar50[0] = -(*pcVar1 == (char)iVar10);
            auVar50[1] = -(pcVar1[1] == cVar58);
            auVar50[2] = -(pcVar1[2] == cVar59);
            auVar50[3] = -(pcVar1[3] == cVar60);
            auVar50[4] = -(pcVar1[4] == (char)iVar11);
            auVar50[5] = -(pcVar1[5] == cVar61);
            auVar50[6] = -(pcVar1[6] == cVar62);
            auVar50[7] = -(pcVar1[7] == cVar63);
            auVar50[8] = -(pcVar1[8] == (char)iVar12);
            auVar50[9] = -(pcVar1[9] == cVar64);
            auVar50[10] = -(pcVar1[10] == cVar65);
            auVar50[0xb] = -(pcVar1[0xb] == cVar66);
            auVar50[0xc] = -(pcVar1[0xc] == (char)iVar13);
            auVar50[0xd] = -(pcVar1[0xd] == cVar67);
            auVar50[0xe] = -(pcVar1[0xe] == cVar68);
            auVar50[0xf] = -(pcVar1[0xf] == cVar69);
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
            puVar31 = (undefined *)((longlong)puVar30 + (longlong)puVar26) + 0x10;
            puVar26 = puVar26 + 4;
          }
        }
LAB_1408e5cb0:
        uVar36 = uVar36 - 1 & uVar36;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      lVar20 = puStack_1a8[3];
      puVar25 = puStack_190;
      lVar18 = lStack_198;
      lVar37 = lStack_1a0;
      if (lVar20 != 0) {
        pauVar40 = (undefined1 (*) [16])*puStack_1a8;
        auVar48 = *pauVar40;
        uVar36 = ~(uint)(ushort)((ushort)(SUB161(auVar48 >> 7,0) & 1) |
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
        pauVar38 = pauVar40 + 1;
        do {
          if ((short)uVar36 == 0) {
            do {
              auVar48 = *pauVar38;
              pauVar40 = pauVar40 + -0x68;
              pauVar38 = pauVar38 + 1;
              uVar36 = (ushort)((ushort)(SUB161(auVar48 >> 7,0) & 1) |
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
            } while (uVar36 == 0);
          }
          uVar32 = 0;
          for (uVar8 = uVar36; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
            uVar32 = uVar32 + 1;
          }
          iVar5 = *(int *)((longlong)pauVar40 + (ulonglong)uVar32 * -0x68 + -0x68);
          plVar22 = (longlong *)pdb_140c41990();
          if (plVar22[3] != 0) {
            auStack_1e8 = *(undefined1 (*) [16])(plVar22 + 4);
            auVar54._0_8_ = auStack_1e8._0_8_;
            auVar54._8_4_ = auStack_1e8._0_4_;
            auVar54._12_4_ = auStack_1e8._4_4_;
            auStack_208 = auVar54 ^ auVar3;
            auVar55._0_8_ = auStack_1e8._8_8_;
            auVar55._8_4_ = auStack_1e8._8_4_;
            auVar55._12_4_ = auStack_1e8._12_4_;
            auStack_1f8 = auVar55 ^ auVar14;
            lStack_1d8 = 0;
            uStack_1d0 = 0;
            uStack_1c8 = 0;
            auStack_178._0_4_ = iVar5;
            pdb_1400b0640(auStack_208,auStack_178,4);
            uVar33 = lStack_1d8 << 0x38 | uStack_1d0;
            uVar41 = auStack_1f8._8_8_ ^ uVar33;
            uVar29 = auStack_208._0_8_ + auStack_1f8._0_8_;
            uVar23 = (auStack_1f8._0_8_ << 0xd | (ulonglong)auStack_1f8._0_8_ >> 0x33) ^ uVar29;
            uVar24 = (uVar41 << 0x10 | uVar41 >> 0x30) ^ auStack_208._8_8_ + uVar41;
            uVar35 = auStack_208._8_8_ + uVar41 + uVar23;
            uVar29 = (uVar29 << 0x20 | uVar29 >> 0x20) + uVar24;
            uVar23 = (uVar23 << 0x11 | uVar23 >> 0x2f) ^ uVar35;
            uVar41 = (uVar24 << 0x15 | uVar24 >> 0x2b) ^ uVar29;
            uVar29 = (uVar29 ^ uVar33) + uVar23;
            uVar35 = ((uVar35 << 0x20 | uVar35 >> 0x20) ^ 0xff) + uVar41;
            uVar24 = (uVar23 << 0xd | uVar23 >> 0x33) ^ uVar29;
            uVar41 = (uVar41 << 0x10 | uVar41 >> 0x30) ^ uVar35;
            uVar35 = uVar35 + uVar24;
            uVar29 = (uVar29 << 0x20 | uVar29 >> 0x20) + uVar41;
            uVar24 = (uVar24 << 0x11 | uVar24 >> 0x2f) ^ uVar35;
            uVar41 = (uVar41 << 0x15 | uVar41 >> 0x2b) ^ uVar29;
            uVar29 = uVar29 + uVar24;
            uVar23 = (uVar35 << 0x20 | uVar35 >> 0x20) + uVar41;
            uVar24 = (uVar24 << 0xd | uVar24 >> 0x33) ^ uVar29;
            uVar41 = (uVar41 << 0x10 | uVar41 >> 0x30) ^ uVar23;
            uVar23 = uVar23 + uVar24;
            uVar35 = (uVar29 << 0x20 | uVar29 >> 0x20) + uVar41;
            uVar24 = (uVar24 << 0x11 | uVar24 >> 0x2f) ^ uVar23;
            uVar41 = (uVar41 << 0x15 | uVar41 >> 0x2b) ^ uVar35;
            uVar23 = (uVar23 << 0x20 | uVar23 >> 0x20) + uVar41;
            uVar24 = (uVar24 << 0xd | uVar24 >> 0x33) ^ uVar35 + uVar24;
            uVar41 = (uVar41 << 0x10 | uVar41 >> 0x30) ^ uVar23;
            uVar23 = uVar23 + uVar24;
            puVar31 = (undefined *)
                      ((uVar23 << 0x20 | uVar23 >> 0x20) ^ (uVar24 << 0x11 | uVar24 >> 0x2f) ^
                       (uVar41 << 0x15 | uVar41 >> 0x2b) ^ uVar23);
            lVar37 = *plVar22;
            bVar47 = (byte)((ulonglong)puVar31 >> 0x39);
            auVar48 = ZEXT216(CONCAT11(bVar47,bVar47));
            auVar48 = pshuflw(auVar48,auVar48,0);
            puVar26 = (undefined4 *)0x0;
            do {
              puVar30 = (undefined4 *)((ulonglong)puVar31 & plVar22[1]);
              pcVar1 = (char *)(lVar37 + (longlong)puVar30);
              auVar57[0] = -(*pcVar1 == auVar48[0]);
              auVar57[1] = -(pcVar1[1] == auVar48[1]);
              auVar57[2] = -(pcVar1[2] == auVar48[2]);
              auVar57[3] = -(pcVar1[3] == auVar48[3]);
              auVar57[4] = -(pcVar1[4] == auVar48[4]);
              auVar57[5] = -(pcVar1[5] == auVar48[5]);
              auVar57[6] = -(pcVar1[6] == auVar48[6]);
              auVar57[7] = -(pcVar1[7] == auVar48[7]);
              auVar57[8] = -(pcVar1[8] == auVar48[0]);
              auVar57[9] = -(pcVar1[9] == auVar48[1]);
              auVar57[10] = -(pcVar1[10] == auVar48[2]);
              auVar57[0xb] = -(pcVar1[0xb] == auVar48[3]);
              auVar57[0xc] = -(pcVar1[0xc] == auVar48[4]);
              auVar57[0xd] = -(pcVar1[0xd] == auVar48[5]);
              auVar57[0xe] = -(pcVar1[0xe] == auVar48[6]);
              auVar57[0xf] = -(pcVar1[0xf] == auVar48[7]);
              uVar34 = (ushort)(SUB161(auVar57 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar57 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar57 >> 0x17,0) & 1) << 2 |
                       (ushort)(SUB161(auVar57 >> 0x1f,0) & 1) << 3 |
                       (ushort)(SUB161(auVar57 >> 0x27,0) & 1) << 4 |
                       (ushort)(SUB161(auVar57 >> 0x2f,0) & 1) << 5 |
                       (ushort)(SUB161(auVar57 >> 0x37,0) & 1) << 6 |
                       (ushort)(SUB161(auVar57 >> 0x3f,0) & 1) << 7 |
                       (ushort)(SUB161(auVar57 >> 0x47,0) & 1) << 8 |
                       (ushort)(SUB161(auVar57 >> 0x4f,0) & 1) << 9 |
                       (ushort)(SUB161(auVar57 >> 0x57,0) & 1) << 10 |
                       (ushort)(SUB161(auVar57 >> 0x5f,0) & 1) << 0xb |
                       (ushort)(SUB161(auVar57 >> 0x67,0) & 1) << 0xc |
                       (ushort)(SUB161(auVar57 >> 0x6f,0) & 1) << 0xd |
                       (ushort)(SUB161(auVar57 >> 0x77,0) & 1) << 0xe |
                       (ushort)(auVar57[0xf] >> 7) << 0xf;
              uVar32 = (uint)uVar34;
              while (uVar34 != 0) {
                uVar8 = 0;
                for (uVar9 = uVar32; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
                  uVar8 = uVar8 + 1;
                }
                lVar18 = ((ulonglong)((ulonglong)uVar8 + (longlong)puVar30) & plVar22[1]) * -0x50;
                if (iVar5 == *(int *)(lVar37 + -0x50 + lVar18)) {
                  lVar37 = lVar37 + lVar18;
                  plVar22 = *(longlong **)(lVar37 + -8);
                  LOCK();
                  lVar18 = *plVar22;
                  *plVar22 = *plVar22 + 1;
                  UNLOCK();
                  if (*plVar22 == 0 || SCARRY8(lVar18,1) != *plVar22 < 0) {
LAB_1408e6087:
                    /* WARNING: Does not return */
                    pcVar7 = (code *)invalidInstructionException();
                    (*pcVar7)();
                  }
                  auStack_178 = *(undefined1 (*) [16])(lVar37 + -0x20);
                  auStack_168._8_8_ = plVar22;
                  auStack_168._0_8_ = *(undefined8 *)(lVar37 + -0x10);
                  auStack_208 = *(undefined1 (*) [16])(lVar37 + -0x40);
                  auStack_1f8 = *(undefined1 (*) [16])(lVar37 + -0x30);
                  puVar26 = puStack_180;
                  puVar30 = puStack_100;
                  pdb_1414e7710();
                  goto LAB_1408e5fd0;
                }
                uVar34 = (ushort)(uVar32 - 1) & (ushort)uVar32;
                uVar32 = CONCAT22((short)(uVar32 - 1 >> 0x10),uVar34);
              }
              auVar53[0] = -(*pcVar1 == (char)iVar10);
              auVar53[1] = -(pcVar1[1] == cVar58);
              auVar53[2] = -(pcVar1[2] == cVar59);
              auVar53[3] = -(pcVar1[3] == cVar60);
              auVar53[4] = -(pcVar1[4] == (char)iVar11);
              auVar53[5] = -(pcVar1[5] == cVar61);
              auVar53[6] = -(pcVar1[6] == cVar62);
              auVar53[7] = -(pcVar1[7] == cVar63);
              auVar53[8] = -(pcVar1[8] == (char)iVar12);
              auVar53[9] = -(pcVar1[9] == cVar64);
              auVar53[10] = -(pcVar1[10] == cVar65);
              auVar53[0xb] = -(pcVar1[0xb] == cVar66);
              auVar53[0xc] = -(pcVar1[0xc] == (char)iVar13);
              auVar53[0xd] = -(pcVar1[0xd] == cVar67);
              auVar53[0xe] = -(pcVar1[0xe] == cVar68);
              auVar53[0xf] = -(pcVar1[0xf] == cVar69);
              if ((((((((((((((((SUB161(auVar53 >> 7,0) & 1) != 0 ||
                               (SUB161(auVar53 >> 0xf,0) & 1) != 0) ||
                              (SUB161(auVar53 >> 0x17,0) & 1) != 0) ||
                             (SUB161(auVar53 >> 0x1f,0) & 1) != 0) ||
                            (SUB161(auVar53 >> 0x27,0) & 1) != 0) ||
                           (SUB161(auVar53 >> 0x2f,0) & 1) != 0) ||
                          (SUB161(auVar53 >> 0x37,0) & 1) != 0) ||
                         (SUB161(auVar53 >> 0x3f,0) & 1) != 0) ||
                        (SUB161(auVar53 >> 0x47,0) & 1) != 0) ||
                       (SUB161(auVar53 >> 0x4f,0) & 1) != 0) || (SUB161(auVar53 >> 0x57,0) & 1) != 0
                      ) || (SUB161(auVar53 >> 0x5f,0) & 1) != 0) ||
                    (SUB161(auVar53 >> 0x67,0) & 1) != 0) || (SUB161(auVar53 >> 0x6f,0) & 1) != 0)
                  || (SUB161(auVar53 >> 0x77,0) & 1) != 0) || auVar53[0xf] < '\0') break;
              puVar31 = (undefined *)((longlong)puVar30 + (longlong)puVar26) + 0x10;
              puVar26 = puVar26 + 4;
            } while( true );
          }
LAB_1408e5fd0:
          uVar36 = uVar36 - 1 & uVar36;
          lVar20 = lVar20 + -1;
          puVar25 = puStack_190;
          lVar18 = lStack_198;
          lVar37 = lStack_1a0;
        } while (lVar20 != 0);
      }
    }
  }
  goto LAB_1408e5520;
}

