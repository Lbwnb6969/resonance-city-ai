// VA 0x1408e02c0, PDB extent 1476 bytes
// system_decorator::remove_ivy_under_windows::remove_ivy_under_windows
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/remove_ivy_under_windows.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_decorator::remove_ivy_under_windows::remove_ivy_under_windows
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/remove_ivy_under_windows.rs
   Extent: 1476 */

void pdb_1408e02c0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  longlong *param_5)

{
  char *pcVar1;
  float fVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  int iVar5;
  ulonglong *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  ulonglong *puVar13;
  undefined1 uVar14;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong *puVar18;
  ulonglong *puVar19;
  longlong lVar20;
  ulonglong *puVar21;
  ulonglong *puVar22;
  ulonglong uVar23;
  uint uVar24;
  longlong lVar25;
  ulonglong *puVar26;
  ulonglong *puVar27;
  ushort uVar28;
  ulonglong uVar29;
  longlong lVar30;
  ulonglong uVar31;
  byte bVar32;
  float fVar33;
  float fVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 unaff_XMM8_Ba;
  undefined1 unaff_XMM8_Bb;
  char cVar40;
  undefined1 unaff_XMM8_Bc;
  char cVar41;
  undefined1 unaff_XMM8_Bd;
  char cVar42;
  undefined1 unaff_XMM8_Be;
  undefined1 unaff_XMM8_Bf;
  char cVar43;
  undefined1 unaff_XMM8_Bg;
  char cVar44;
  undefined1 unaff_XMM8_Bh;
  char cVar45;
  undefined1 unaff_XMM8_Bi;
  undefined1 unaff_XMM8_Bj;
  char cVar46;
  undefined1 unaff_XMM8_Bk;
  char cVar47;
  undefined1 unaff_XMM8_Bl;
  char cVar48;
  undefined1 unaff_XMM8_Bm;
  undefined1 unaff_XMM8_Bn;
  char cVar49;
  undefined1 unaff_XMM8_Bo;
  char cVar50;
  undefined1 unaff_XMM8_Bp;
  char cVar51;
  float fVar52;
  float fVar53;
  undefined1 uStack_10a;
  undefined1 uStack_109;
  undefined1 *puStack_108;
  code *pcStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  float fStack_e8;
  int iStack_e4;
  undefined8 uStack_e0;
  longlong lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  ulonglong uStack_b8;
  ulonglong uStack_b0;
  
  uStack_e0 = param_4;
  uStack_c8 = pdb_140c47770(param_2);
  puVar6 = (ulonglong *)*param_3;
  lVar16 = param_3[1];
  uVar23 = *puVar6;
  uVar29 = 0;
  uVar17 = uVar23 - *(ulonglong *)(lVar16 + 0x18);
  if (uVar23 < *(ulonglong *)(lVar16 + 0x18)) {
    uVar17 = uVar29;
  }
  uVar31 = uVar23 - *(ulonglong *)(lVar16 + 0x38);
  if (uVar23 < *(ulonglong *)(lVar16 + 0x38)) {
    uVar31 = uVar29;
  }
  puVar18 = (ulonglong *)(uVar17 * 0xb0 + *(longlong *)(lVar16 + 8));
  uVar23 = *(ulonglong *)(lVar16 + 0x10);
  uVar15 = uVar23 - uVar17;
  if (uVar23 < uVar17) {
    uVar15 = uVar29;
  }
  if (uVar23 < uVar17) {
    puVar18 = (ulonglong *)0x8;
  }
  puVar26 = (ulonglong *)(uVar31 * 0xb0 + *(longlong *)(lVar16 + 0x28));
  uVar23 = *(ulonglong *)(lVar16 + 0x30) - uVar31;
  if (*(ulonglong *)(lVar16 + 0x30) < uVar31) {
    puVar26 = (ulonglong *)0x8;
    uVar23 = uVar29;
  }
  *puVar6 = (*(longlong *)(lVar16 + 0x40) - uVar23) - uVar15;
  puVar22 = puVar18 + uVar15 * 0x16;
  uStack_c0 = *param_1;
  lStack_d8 = *param_5;
  iVar9 = -(uint)(CONCAT13(unaff_XMM8_Bd,
                           CONCAT12(unaff_XMM8_Bc,CONCAT11(unaff_XMM8_Bb,unaff_XMM8_Ba))) ==
                 CONCAT13(unaff_XMM8_Bd,
                          CONCAT12(unaff_XMM8_Bc,CONCAT11(unaff_XMM8_Bb,unaff_XMM8_Ba))));
  cVar40 = (char)((uint)iVar9 >> 8);
  cVar41 = (char)((uint)iVar9 >> 0x10);
  cVar42 = (char)((uint)iVar9 >> 0x18);
  iVar10 = -(uint)(CONCAT13(unaff_XMM8_Bh,
                            CONCAT12(unaff_XMM8_Bg,CONCAT11(unaff_XMM8_Bf,unaff_XMM8_Be))) ==
                  CONCAT13(unaff_XMM8_Bh,
                           CONCAT12(unaff_XMM8_Bg,CONCAT11(unaff_XMM8_Bf,unaff_XMM8_Be))));
  cVar43 = (char)((uint)iVar10 >> 8);
  cVar44 = (char)((uint)iVar10 >> 0x10);
  cVar45 = (char)((uint)iVar10 >> 0x18);
  iVar11 = -(uint)(CONCAT13(unaff_XMM8_Bl,
                            CONCAT12(unaff_XMM8_Bk,CONCAT11(unaff_XMM8_Bj,unaff_XMM8_Bi))) ==
                  CONCAT13(unaff_XMM8_Bl,
                           CONCAT12(unaff_XMM8_Bk,CONCAT11(unaff_XMM8_Bj,unaff_XMM8_Bi))));
  cVar46 = (char)((uint)iVar11 >> 8);
  cVar47 = (char)((uint)iVar11 >> 0x10);
  cVar48 = (char)((uint)iVar11 >> 0x18);
  iVar12 = -(uint)(CONCAT13(unaff_XMM8_Bp,
                            CONCAT12(unaff_XMM8_Bo,CONCAT11(unaff_XMM8_Bn,unaff_XMM8_Bm))) ==
                  CONCAT13(unaff_XMM8_Bp,
                           CONCAT12(unaff_XMM8_Bo,CONCAT11(unaff_XMM8_Bn,unaff_XMM8_Bm))));
  cVar49 = (char)((uint)iVar12 >> 8);
  cVar50 = (char)((uint)iVar12 >> 0x10);
  cVar51 = (char)((uint)iVar12 >> 0x18);
  fVar52 = (float)_DAT_142e378e0;
  fVar53 = (float)((ulonglong)_DAT_142e378e0 >> 0x20);
  puVar27 = puVar26;
  uStack_d0 = param_2;
LAB_1408e04f0:
  do {
    if ((puVar18 == (ulonglong *)0x0) || (puVar18 == puVar22)) {
      if ((puVar27 == (ulonglong *)0x0) || (puVar27 == puVar26 + uVar23 * 0x16)) {
        return;
      }
      puVar21 = puVar27 + 0x16;
      puVar13 = (ulonglong *)0x0;
      puVar19 = puVar27;
    }
    else {
      puVar21 = puVar27;
      puVar13 = puVar18 + 0x16;
      puVar19 = puVar18;
    }
    puVar18 = puVar13;
    *puVar6 = *puVar6 + 1;
    lVar16 = 0;
    if (1 < *puVar19) {
      lVar16 = *puVar19 - 2;
    }
    puVar27 = puVar21;
    if (lVar16 != 0) {
      if (lVar16 == 1) {
        iVar5 = (int)puVar19[8];
        uVar3 = *(undefined8 *)((longlong)puVar19 + 0x2c);
        fVar2 = *(float *)((longlong)puVar19 + 0x34);
        uVar4 = *(undefined1 *)((longlong)puVar19 + 0x45);
        uStack_b8 = puVar19[1];
        uStack_b0 = puVar19[2];
        iStack_e4 = iVar5;
        if ((((char)puVar19[0x14] == '\0') && (*(byte *)((longlong)puVar19 + 0x3a) < 2)) &&
           ((lVar16 = pdb_140c41030(uStack_c0), lVar16 != 0 && (*(longlong *)(lVar16 + 0x48) != 0)))
           ) {
          uVar17 = pdb_1400aede0(lVar16 + 0x50,&iStack_e4);
          bVar32 = (byte)(uVar17 >> 0x39);
          auVar35 = ZEXT216(CONCAT11(bVar32,bVar32));
          auVar35 = pshuflw(auVar35,auVar35,0);
          lVar25 = 0;
          while( true ) {
            uVar17 = uVar17 & *(ulonglong *)(lVar16 + 0x38);
            pcVar1 = (char *)(*(longlong *)(lVar16 + 0x30) + uVar17);
            auVar38[0] = -(*pcVar1 == auVar35[0]);
            auVar38[1] = -(pcVar1[1] == auVar35[1]);
            auVar38[2] = -(pcVar1[2] == auVar35[2]);
            auVar38[3] = -(pcVar1[3] == auVar35[3]);
            auVar38[4] = -(pcVar1[4] == auVar35[4]);
            auVar38[5] = -(pcVar1[5] == auVar35[5]);
            auVar38[6] = -(pcVar1[6] == auVar35[6]);
            auVar38[7] = -(pcVar1[7] == auVar35[7]);
            auVar38[8] = -(pcVar1[8] == auVar35[0]);
            auVar38[9] = -(pcVar1[9] == auVar35[1]);
            auVar38[10] = -(pcVar1[10] == auVar35[2]);
            auVar38[0xb] = -(pcVar1[0xb] == auVar35[3]);
            auVar38[0xc] = -(pcVar1[0xc] == auVar35[4]);
            auVar38[0xd] = -(pcVar1[0xd] == auVar35[5]);
            auVar38[0xe] = -(pcVar1[0xe] == auVar35[6]);
            auVar38[0xf] = -(pcVar1[0xf] == auVar35[7]);
            uVar28 = (ushort)(SUB161(auVar38 >> 7,0) & 1) |
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
                     (ushort)(auVar38[0xf] >> 7) << 0xf;
            uVar24 = (uint)uVar28;
            if (uVar28 != 0) break;
LAB_1408e0420:
            auVar36[0] = -(*pcVar1 == (char)iVar9);
            auVar36[1] = -(pcVar1[1] == cVar40);
            auVar36[2] = -(pcVar1[2] == cVar41);
            auVar36[3] = -(pcVar1[3] == cVar42);
            auVar36[4] = -(pcVar1[4] == (char)iVar10);
            auVar36[5] = -(pcVar1[5] == cVar43);
            auVar36[6] = -(pcVar1[6] == cVar44);
            auVar36[7] = -(pcVar1[7] == cVar45);
            auVar36[8] = -(pcVar1[8] == (char)iVar11);
            auVar36[9] = -(pcVar1[9] == cVar46);
            auVar36[10] = -(pcVar1[10] == cVar47);
            auVar36[0xb] = -(pcVar1[0xb] == cVar48);
            auVar36[0xc] = -(pcVar1[0xc] == (char)iVar12);
            auVar36[0xd] = -(pcVar1[0xd] == cVar49);
            auVar36[0xe] = -(pcVar1[0xe] == cVar50);
            auVar36[0xf] = -(pcVar1[0xf] == cVar51);
            if ((((((((((((((((SUB161(auVar36 >> 7,0) & 1) != 0 ||
                             (SUB161(auVar36 >> 0xf,0) & 1) != 0) ||
                            (SUB161(auVar36 >> 0x17,0) & 1) != 0) ||
                           (SUB161(auVar36 >> 0x1f,0) & 1) != 0) ||
                          (SUB161(auVar36 >> 0x27,0) & 1) != 0) ||
                         (SUB161(auVar36 >> 0x2f,0) & 1) != 0) ||
                        (SUB161(auVar36 >> 0x37,0) & 1) != 0) ||
                       (SUB161(auVar36 >> 0x3f,0) & 1) != 0) || (SUB161(auVar36 >> 0x47,0) & 1) != 0
                      ) || (SUB161(auVar36 >> 0x4f,0) & 1) != 0) ||
                    (SUB161(auVar36 >> 0x57,0) & 1) != 0) || (SUB161(auVar36 >> 0x5f,0) & 1) != 0)
                  || (SUB161(auVar36 >> 0x67,0) & 1) != 0) || (SUB161(auVar36 >> 0x6f,0) & 1) != 0)
                || (SUB161(auVar36 >> 0x77,0) & 1) != 0) || auVar36[0xf] < '\0') goto LAB_1408e04f0;
            uVar17 = uVar17 + lVar25 + 0x10;
            lVar25 = lVar25 + 0x10;
          }
          while( true ) {
            uVar7 = 0;
            for (uVar8 = uVar24; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
              uVar7 = uVar7 + 1;
            }
            if (iVar5 == *(int *)(*(longlong *)(lVar16 + 0x30) + -0x68 +
                                 (uVar7 + uVar17 & *(ulonglong *)(lVar16 + 0x38)) * -0x68)) break;
            uVar28 = (ushort)(uVar24 - 1) & (ushort)uVar24;
            uVar24 = CONCAT22((short)(uVar24 - 1 >> 0x10),uVar28);
            if (uVar28 == 0) goto LAB_1408e0420;
          }
          puStack_108 = *(undefined1 **)(lStack_d8 + 8);
          pcStack_100 = (code *)(*(longlong *)(lStack_d8 + 0x10) * 2);
          uStack_f8 = *(undefined8 *)(lStack_d8 + 0x50);
          fVar33 = (float)pdb_1402202d0(&puStack_108);
          fVar34 = fVar33 * fVar52;
          fStack_e8 = fVar2 - fVar34;
          uStack_f0 = CONCAT44((float)((ulonglong)uVar3 >> 0x20) - fVar33 * fVar53,
                               (float)uVar3 - fVar34);
          uVar14 = pdb_140901b40(iVar5,uStack_c8);
          uStack_10a = pdb_140c44ba0(uVar4);
          uStack_109 = uVar14;
          lVar16 = pdb_141494370(uStack_d0);
          if (lVar16 == 0) {
LAB_1408e0855:
            puStack_108 = &uStack_10a;
            pcStack_100 = pdb_1414942d0;
                    /* WARNING: Subroutine does not return */
            pdb_142dc83d0(&UNK_14330e2c6,&puStack_108,&UNK_14330e2f8);
          }
          puVar19 = &uStack_b8;
LAB_1408e07db:
          pdb_140c413e0(puVar19);
          pdb_140a72530(&uStack_f0);
        }
      }
      goto LAB_1408e04f0;
    }
    if (((puVar19[2] != 3) && (lVar16 = pdb_140c41030(uStack_c0,puVar19[2],puVar19[3]), lVar16 != 0)
        ) && (*(longlong *)(lVar16 + 0x48) != 0)) {
      uVar17 = pdb_1400aede0(lVar16 + 0x50,puVar19 + 0xf);
      lVar25 = *(longlong *)(lVar16 + 0x30);
      bVar32 = (byte)(uVar17 >> 0x39);
      auVar35 = ZEXT216(CONCAT11(bVar32,bVar32));
      auVar35 = pshuflw(auVar35,auVar35,0);
      lVar20 = 0;
      while( true ) {
        uVar17 = uVar17 & *(ulonglong *)(lVar16 + 0x38);
        pcVar1 = (char *)(lVar25 + uVar17);
        auVar39[0] = -(*pcVar1 == auVar35[0]);
        auVar39[1] = -(pcVar1[1] == auVar35[1]);
        auVar39[2] = -(pcVar1[2] == auVar35[2]);
        auVar39[3] = -(pcVar1[3] == auVar35[3]);
        auVar39[4] = -(pcVar1[4] == auVar35[4]);
        auVar39[5] = -(pcVar1[5] == auVar35[5]);
        auVar39[6] = -(pcVar1[6] == auVar35[6]);
        auVar39[7] = -(pcVar1[7] == auVar35[7]);
        auVar39[8] = -(pcVar1[8] == auVar35[0]);
        auVar39[9] = -(pcVar1[9] == auVar35[1]);
        auVar39[10] = -(pcVar1[10] == auVar35[2]);
        auVar39[0xb] = -(pcVar1[0xb] == auVar35[3]);
        auVar39[0xc] = -(pcVar1[0xc] == auVar35[4]);
        auVar39[0xd] = -(pcVar1[0xd] == auVar35[5]);
        auVar39[0xe] = -(pcVar1[0xe] == auVar35[6]);
        auVar39[0xf] = -(pcVar1[0xf] == auVar35[7]);
        uVar28 = (ushort)(SUB161(auVar39 >> 7,0) & 1) | (ushort)(SUB161(auVar39 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar39 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar39 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar39 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar39 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar39 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar39 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar39 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar39 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar39 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar39 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar39 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar39 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar39 >> 0x77,0) & 1) << 0xe | (ushort)(auVar39[0xf] >> 7) << 0xf
        ;
        uVar24 = (uint)uVar28;
        if (uVar28 != 0) {
          do {
            uVar7 = 0;
            for (uVar8 = uVar24; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
              uVar7 = uVar7 + 1;
            }
            lVar30 = (uVar7 + uVar17 & *(ulonglong *)(lVar16 + 0x38)) * -0x68;
            if ((int)puVar19[0xf] == *(int *)(lVar25 + -0x68 + lVar30)) {
              if (1 < *(byte *)((longlong)puVar19 + 0x42)) goto LAB_1408e04f0;
              fVar2 = *(float *)((longlong)puVar19 + 0x3c);
              puStack_108 = *(undefined1 **)(lStack_d8 + 8);
              pcStack_100 = (code *)(*(longlong *)(lStack_d8 + 0x10) * 2);
              uStack_f8 = *(undefined8 *)(lStack_d8 + 0x50);
              uVar3 = *(undefined8 *)((longlong)puVar19 + 0x34);
              fVar33 = (float)pdb_1402202d0(&puStack_108);
              fVar34 = fVar33 * fVar52;
              fStack_e8 = fVar2 - fVar34;
              uStack_f0 = CONCAT44((float)((ulonglong)uVar3 >> 0x20) - fVar33 * fVar53,
                                   (float)uVar3 - fVar34);
              uVar4 = *(undefined1 *)(lVar25 + lVar30 + -7);
              uVar14 = pdb_140901b40((int)puVar19[0xf],uStack_c8);
              uStack_10a = pdb_140c44ba0(uVar4);
              uStack_109 = uVar14;
              lVar16 = pdb_141494370(uStack_d0);
              if (lVar16 != 0) goto LAB_1408e07db;
              goto LAB_1408e0855;
            }
            uVar28 = (ushort)(uVar24 - 1) & (ushort)uVar24;
            uVar24 = CONCAT22((short)(uVar24 - 1 >> 0x10),uVar28);
          } while (uVar28 != 0);
        }
        auVar37[0] = -(*pcVar1 == (char)iVar9);
        auVar37[1] = -(pcVar1[1] == cVar40);
        auVar37[2] = -(pcVar1[2] == cVar41);
        auVar37[3] = -(pcVar1[3] == cVar42);
        auVar37[4] = -(pcVar1[4] == (char)iVar10);
        auVar37[5] = -(pcVar1[5] == cVar43);
        auVar37[6] = -(pcVar1[6] == cVar44);
        auVar37[7] = -(pcVar1[7] == cVar45);
        auVar37[8] = -(pcVar1[8] == (char)iVar11);
        auVar37[9] = -(pcVar1[9] == cVar46);
        auVar37[10] = -(pcVar1[10] == cVar47);
        auVar37[0xb] = -(pcVar1[0xb] == cVar48);
        auVar37[0xc] = -(pcVar1[0xc] == (char)iVar12);
        auVar37[0xd] = -(pcVar1[0xd] == cVar49);
        auVar37[0xe] = -(pcVar1[0xe] == cVar50);
        auVar37[0xf] = -(pcVar1[0xf] == cVar51);
        if ((((((((((((((((SUB161(auVar37 >> 7,0) & 1) != 0 || (SUB161(auVar37 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar37 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar37 >> 0x1f,0) & 1) != 0) || (SUB161(auVar37 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar37 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar37 >> 0x37,0) & 1) != 0) || (SUB161(auVar37 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar37 >> 0x47,0) & 1) != 0) || (SUB161(auVar37 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar37 >> 0x57,0) & 1) != 0) || (SUB161(auVar37 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar37 >> 0x67,0) & 1) != 0) || (SUB161(auVar37 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar37 >> 0x77,0) & 1) != 0) || auVar37[0xf] < '\0') break;
        uVar17 = uVar17 + lVar20 + 0x10;
        lVar20 = lVar20 + 0x10;
      }
    }
  } while( true );
}

