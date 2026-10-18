// VA 0x14083ae70, PDB extent 2519 bytes
// system_wall_constructor::construct_elevation_supports::construct_circle_supports
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_elevation_supports/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   system_wall_constructor::construct_elevation_supports::construct_circle_supports
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_elevation_supports/mod.rs
   Extent: 2519 */

void pdb_14083ae70(undefined8 *param_1,undefined8 *param_2,longlong *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8,
                  longlong *param_9,longlong *param_10)

{
  char *pcVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  code *pcVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  char cVar13;
  uint uVar14;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  byte *pbVar18;
  undefined1 (*pauVar19) [16];
  longlong lVar20;
  byte bVar21;
  undefined1 uVar22;
  ulonglong uVar23;
  longlong lVar24;
  uint uVar25;
  longlong lVar26;
  ushort uVar27;
  longlong lVar28;
  ulonglong uVar29;
  undefined1 (*pauVar30) [16];
  byte bVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 unaff_XMM6_Ba;
  undefined1 unaff_XMM6_Bb;
  char cVar37;
  undefined1 unaff_XMM6_Bc;
  char cVar38;
  undefined1 unaff_XMM6_Bd;
  char cVar39;
  undefined1 unaff_XMM6_Be;
  undefined1 unaff_XMM6_Bf;
  char cVar40;
  undefined1 unaff_XMM6_Bg;
  char cVar41;
  undefined1 unaff_XMM6_Bh;
  char cVar42;
  undefined1 unaff_XMM6_Bi;
  undefined1 unaff_XMM6_Bj;
  char cVar43;
  undefined1 unaff_XMM6_Bk;
  char cVar44;
  undefined1 unaff_XMM6_Bl;
  char cVar45;
  undefined1 unaff_XMM6_Bm;
  undefined1 unaff_XMM6_Bn;
  char cVar46;
  undefined1 unaff_XMM6_Bo;
  char cVar47;
  undefined1 unaff_XMM6_Bp;
  char cVar48;
  char acStack_1a4 [4];
  longlong lStack_1a0;
  undefined8 uStack_198;
  ulonglong *puStack_190;
  longlong lStack_188;
  longlong *plStack_180;
  longlong lStack_178;
  undefined8 uStack_170;
  undefined4 *puStack_168;
  undefined4 *puStack_160;
  undefined4 *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  longlong lStack_140;
  longlong *plStack_138;
  undefined8 uStack_130;
  longlong lStack_128;
  undefined8 uStack_120;
  longlong lStack_110;
  undefined4 uStack_108;
  longlong lStack_100;
  undefined8 uStack_f8;
  longlong lStack_f0;
  undefined8 *puStack_e8;
  longlong lStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  ulonglong uStack_c0;
  undefined8 uStack_b8;
  longlong lStack_b0;
  longlong lStack_a8;
  undefined8 *puStack_a0;
  longlong lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  longlong lStack_80;
  undefined1 uStack_72;
  byte bStack_71;
  undefined8 uStack_70;
  
  uStack_70 = 0xfffffffffffffffe;
  puStack_190 = (ulonglong *)*param_1;
  lVar26 = param_1[1];
  uVar16 = *puStack_190;
  uVar17 = 0;
  uVar29 = uVar16 - *(ulonglong *)(lVar26 + 0x18);
  if (uVar16 < *(ulonglong *)(lVar26 + 0x18)) {
    uVar29 = uVar17;
  }
  uVar23 = uVar16 - *(ulonglong *)(lVar26 + 0x38);
  if (uVar16 < *(ulonglong *)(lVar26 + 0x38)) {
    uVar23 = uVar17;
  }
  lStack_100 = uVar29 * 0x28 + *(longlong *)(lVar26 + 8);
  uVar16 = *(ulonglong *)(lVar26 + 0x10) - uVar29;
  if (*(ulonglong *)(lVar26 + 0x10) < uVar29) {
    lStack_100 = 8;
    uVar16 = uVar17;
  }
  lVar15 = uVar23 * 0x28 + *(longlong *)(lVar26 + 0x28);
  uVar29 = *(ulonglong *)(lVar26 + 0x30) - uVar23;
  if (*(ulonglong *)(lVar26 + 0x30) < uVar23) {
    lVar15 = 8;
    uVar29 = uVar17;
  }
  *puStack_190 = (*(longlong *)(lVar26 + 0x40) - uVar29) - uVar16;
  lStack_188 = lStack_100 + uVar16 * 0x28;
  lStack_178 = lVar15 + uVar29 * 0x28;
  param_3 = (longlong *)*param_3;
  uStack_cc = *(undefined4 *)((longlong)param_8 + 0x1c);
  uStack_170 = *param_8;
  puStack_168 = (undefined4 *)param_8[2];
  uStack_f8 = *param_4;
  uStack_b8 = *param_2;
  uStack_150 = *param_5;
  uStack_148 = *param_6;
  uStack_c8 = *(undefined4 *)((longlong)param_7 + 0x1c);
  puStack_a0 = (undefined8 *)*param_7;
  puStack_160 = (undefined4 *)param_7[2];
  uStack_c4 = *(undefined4 *)((longlong)param_9 + 0x1c);
  lStack_e0 = *param_9;
  puStack_158 = (undefined4 *)param_9[2];
  iVar7 = -(uint)(CONCAT13(unaff_XMM6_Bd,
                           CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))) ==
                 CONCAT13(unaff_XMM6_Bd,
                          CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))));
  cVar37 = (char)((uint)iVar7 >> 8);
  cVar38 = (char)((uint)iVar7 >> 0x10);
  cVar39 = (char)((uint)iVar7 >> 0x18);
  iVar8 = -(uint)(CONCAT13(unaff_XMM6_Bh,
                           CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be))) ==
                 CONCAT13(unaff_XMM6_Bh,
                          CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be))));
  cVar40 = (char)((uint)iVar8 >> 8);
  cVar41 = (char)((uint)iVar8 >> 0x10);
  cVar42 = (char)((uint)iVar8 >> 0x18);
  iVar9 = -(uint)(CONCAT13(unaff_XMM6_Bl,
                           CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi))) ==
                 CONCAT13(unaff_XMM6_Bl,
                          CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi))));
  cVar43 = (char)((uint)iVar9 >> 8);
  cVar44 = (char)((uint)iVar9 >> 0x10);
  cVar45 = (char)((uint)iVar9 >> 0x18);
  iVar10 = -(uint)(CONCAT13(unaff_XMM6_Bp,
                            CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm))) ==
                  CONCAT13(unaff_XMM6_Bp,
                           CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm))));
  cVar46 = (char)((uint)iVar10 >> 8);
  cVar47 = (char)((uint)iVar10 >> 0x10);
  cVar48 = (char)((uint)iVar10 >> 0x18);
  plStack_180 = param_3 + 4;
  puStack_e8 = puStack_a0 + 4;
  lStack_140 = lStack_e0 + 0x20;
LAB_14083b01a:
  if ((lStack_100 == 0) || (lStack_100 == lStack_188)) {
    if ((lVar15 == 0) || (lVar15 == lStack_178)) {
      return;
    }
    lStack_100 = 0;
    lVar26 = lVar15;
    lVar15 = lVar15 + 0x28;
  }
  else {
    lVar26 = lStack_100;
    lStack_100 = lStack_100 + 0x28;
  }
  *puStack_190 = *puStack_190 + 1;
  lVar3 = *(longlong *)(lVar26 + 0x18);
  lStack_80 = lVar3;
  if (param_3[3] != 0) {
    uVar16 = pdb_1400af0a0(plStack_180,&lStack_80);
    lVar24 = *param_3;
    bVar21 = (byte)(uVar16 >> 0x39);
    auVar32 = ZEXT216(CONCAT11(bVar21,bVar21));
    auVar32 = pshuflw(auVar32,auVar32,0);
    lVar20 = 0;
    while( true ) {
      uVar16 = uVar16 & param_3[1];
      auVar36 = *(undefined1 (*) [16])(lVar24 + uVar16);
      auVar35[0] = -(auVar36[0] == auVar32[0]);
      auVar35[1] = -(auVar36[1] == auVar32[1]);
      auVar35[2] = -(auVar36[2] == auVar32[2]);
      auVar35[3] = -(auVar36[3] == auVar32[3]);
      auVar35[4] = -(auVar36[4] == auVar32[4]);
      auVar35[5] = -(auVar36[5] == auVar32[5]);
      auVar35[6] = -(auVar36[6] == auVar32[6]);
      auVar35[7] = -(auVar36[7] == auVar32[7]);
      auVar35[8] = -(auVar36[8] == auVar32[0]);
      auVar35[9] = -(auVar36[9] == auVar32[1]);
      auVar35[10] = -(auVar36[10] == auVar32[2]);
      auVar35[0xb] = -(auVar36[0xb] == auVar32[3]);
      auVar35[0xc] = -(auVar36[0xc] == auVar32[4]);
      auVar35[0xd] = -(auVar36[0xd] == auVar32[5]);
      auVar35[0xe] = -(auVar36[0xe] == auVar32[6]);
      auVar35[0xf] = -(auVar36[0xf] == auVar32[7]);
      uVar27 = (ushort)(SUB161(auVar35 >> 7,0) & 1) | (ushort)(SUB161(auVar35 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar35 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar35 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar35 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar35 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar35 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar35 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar35 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar35 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar35 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar35 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar35 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar35 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar35 >> 0x77,0) & 1) << 0xe | (ushort)(auVar35[0xf] >> 7) << 0xf;
      uVar25 = (uint)uVar27;
      while (uVar27 != 0) {
        uVar14 = 0;
        for (uVar6 = uVar25; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          uVar14 = uVar14 + 1;
        }
        lVar28 = (uVar14 + uVar16 & param_3[1]) * -0x2b0;
        if (lVar3 == *(longlong *)(lVar24 + -0x2b0 + lVar28)) {
          lVar24 = lVar24 + lVar28;
          pdb_1409303d0(acStack_1a4,lVar24 + -0x2a8);
          if (acStack_1a4[0] == '\0') goto LAB_14083b01a;
          lStack_128 = lStack_1a0;
          uStack_120 = uStack_198;
          *puStack_168 = uStack_cc;
          lStack_b0 = lVar15;
          lStack_f0 = pdb_140a6aaf0(uStack_170,lVar3);
          uVar4 = uStack_f8;
          uStack_c0 = 0;
          lStack_98 = lStack_1a0;
          uStack_90 = uStack_198;
          bStack_71 = pdb_1414748a0(&lStack_98,lVar24 + -0x2a8,lVar26,param_3,uStack_f8);
          if (bStack_71 == 0) {
            lStack_98 = lStack_1a0;
            uStack_90 = uStack_198;
            pdb_1414761a0(lVar3,&lStack_98,lVar24 + -0x2a8,param_3,uStack_b8,lVar26,uVar4,param_10);
          }
          else {
            lStack_98 = 0;
            uStack_90 = 4;
            uStack_88 = 0;
            uStack_72 = 1;
            pdb_141474c00(lVar3,lVar24 + -0x2a8,&lStack_128,uStack_b8,&lStack_98);
            lStack_a8 = lStack_98;
            uStack_d8 = uStack_90;
            uStack_130 = uStack_88;
            *(undefined4 *)param_10[2] = *(undefined4 *)((longlong)param_10 + 0x1c);
            lVar15 = *param_10;
            lVar20 = *(longlong *)(lVar15 + 0x30);
            uVar4 = *(undefined8 *)(lVar15 + 0x40);
            plStack_138 = param_3;
            if (lVar20 == *(longlong *)(lVar15 + 0x20)) {
              pdb_142d7ede0(lVar15 + 0x20);
            }
            param_3 = plStack_138;
            lVar28 = *(longlong *)(lVar15 + 0x28);
            *(longlong *)(lVar28 + lVar20 * 0x28) = lStack_a8;
            *(undefined8 *)(lVar28 + 8 + lVar20 * 0x28) = uStack_d8;
            *(undefined8 *)(lVar28 + 0x10 + lVar20 * 0x28) = uStack_130;
            *(longlong *)(lVar28 + 0x18 + lVar20 * 0x28) = lVar3;
            *(undefined8 *)(lVar28 + 0x20 + lVar20 * 0x28) = uVar4;
            *(longlong *)(lVar15 + 0x30) = lVar20 + 1;
            *(longlong *)(lVar15 + 0x40) = *(longlong *)(lVar15 + 0x40) + 1;
            uStack_72 = 0;
            pdb_141475440(lVar3,lVar24 + -0x2a8,&lStack_128,plStack_138,*(undefined8 *)(lVar26 + 8),
                          *(undefined8 *)(lVar26 + 0x10),uStack_b8,uStack_f8,uStack_150,uStack_148,
                          &uStack_c0,lStack_f0);
          }
          bStack_71 = bStack_71 ^ 1;
          *puStack_160 = uStack_c8;
          lStack_98 = lVar3;
          uVar17 = pdb_1400af0a0(puStack_e8,&lStack_98);
          puVar2 = puStack_a0;
          lVar15 = lStack_b0;
          pauVar19 = (undefined1 (*) [16])*puStack_a0;
          uVar16 = puStack_a0[1];
          bVar21 = (byte)(uVar17 >> 0x38);
          bVar31 = bVar21 >> 1;
          auVar32 = ZEXT216(CONCAT11(bVar31,bVar31));
          auVar32 = pshuflw(auVar32,auVar32,0);
          lVar26 = 0;
          uVar29 = uVar17;
          goto LAB_14083b3b8;
        }
        uVar27 = (ushort)(uVar25 - 1) & (ushort)uVar25;
        uVar25 = CONCAT22((short)(uVar25 - 1 >> 0x10),uVar27);
      }
      auVar33[0] = -(auVar36[0] == (char)iVar7);
      auVar33[1] = -(auVar36[1] == cVar37);
      auVar33[2] = -(auVar36[2] == cVar38);
      auVar33[3] = -(auVar36[3] == cVar39);
      auVar33[4] = -(auVar36[4] == (char)iVar8);
      auVar33[5] = -(auVar36[5] == cVar40);
      auVar33[6] = -(auVar36[6] == cVar41);
      auVar33[7] = -(auVar36[7] == cVar42);
      auVar33[8] = -(auVar36[8] == (char)iVar9);
      auVar33[9] = -(auVar36[9] == cVar43);
      auVar33[10] = -(auVar36[10] == cVar44);
      auVar33[0xb] = -(auVar36[0xb] == cVar45);
      auVar33[0xc] = -(auVar36[0xc] == (char)iVar10);
      auVar33[0xd] = -(auVar36[0xd] == cVar46);
      auVar33[0xe] = -(auVar36[0xe] == cVar47);
      auVar33[0xf] = -(auVar36[0xf] == cVar48);
      if ((((((((((((((((SUB161(auVar33 >> 7,0) & 1) != 0 || (SUB161(auVar33 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar33 >> 0x17,0) & 1) != 0) || (SUB161(auVar33 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar33 >> 0x27,0) & 1) != 0) || (SUB161(auVar33 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar33 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar33 >> 0x3f,0) & 1) != 0) || (SUB161(auVar33 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar33 >> 0x4f,0) & 1) != 0) || (SUB161(auVar33 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar33 >> 0x5f,0) & 1) != 0) || (SUB161(auVar33 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar33 >> 0x6f,0) & 1) != 0) || (SUB161(auVar33 >> 0x77,0) & 1) != 0) ||
          auVar33[0xf] < '\0') break;
      uVar16 = uVar16 + lVar20 + 0x10;
      lVar20 = lVar20 + 0x10;
    }
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_14300ab58);
LAB_14083b3b8:
  uVar29 = uVar29 & uVar16;
  pcVar1 = *pauVar19 + uVar29;
  auVar36[0] = -(*pcVar1 == auVar32[0]);
  auVar36[1] = -(pcVar1[1] == auVar32[1]);
  auVar36[2] = -(pcVar1[2] == auVar32[2]);
  auVar36[3] = -(pcVar1[3] == auVar32[3]);
  auVar36[4] = -(pcVar1[4] == auVar32[4]);
  auVar36[5] = -(pcVar1[5] == auVar32[5]);
  auVar36[6] = -(pcVar1[6] == auVar32[6]);
  auVar36[7] = -(pcVar1[7] == auVar32[7]);
  auVar36[8] = -(pcVar1[8] == auVar32[0]);
  auVar36[9] = -(pcVar1[9] == auVar32[1]);
  auVar36[10] = -(pcVar1[10] == auVar32[2]);
  auVar36[0xb] = -(pcVar1[0xb] == auVar32[3]);
  auVar36[0xc] = -(pcVar1[0xc] == auVar32[4]);
  auVar36[0xd] = -(pcVar1[0xd] == auVar32[5]);
  auVar36[0xe] = -(pcVar1[0xe] == auVar32[6]);
  auVar36[0xf] = -(pcVar1[0xf] == auVar32[7]);
  uVar27 = (ushort)(SUB161(auVar36 >> 7,0) & 1) | (ushort)(SUB161(auVar36 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar36 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar36 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar36 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar36 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar36 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar36 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar36 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar36 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar36 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar36 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar36 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar36 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar36 >> 0x77,0) & 1) << 0xe | (ushort)(auVar36[0xf] >> 7) << 0xf;
  uVar25 = (uint)uVar27;
  while (uVar27 != 0) {
    uVar14 = 0;
    for (uVar6 = uVar25; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
      uVar14 = uVar14 + 1;
    }
    pauVar30 = pauVar19 + (uVar14 + uVar29 & uVar16) * -4;
    if (*(longlong *)pauVar30[-4] == lVar3) goto LAB_14083b4b0;
    uVar27 = (ushort)(uVar25 - 1) & (ushort)uVar25;
    uVar25 = CONCAT22((short)(uVar25 - 1 >> 0x10),uVar27);
  }
  auVar34[0] = -(*pcVar1 == (char)iVar7);
  auVar34[1] = -(pcVar1[1] == cVar37);
  auVar34[2] = -(pcVar1[2] == cVar38);
  auVar34[3] = -(pcVar1[3] == cVar39);
  auVar34[4] = -(pcVar1[4] == (char)iVar8);
  auVar34[5] = -(pcVar1[5] == cVar40);
  auVar34[6] = -(pcVar1[6] == cVar41);
  auVar34[7] = -(pcVar1[7] == cVar42);
  auVar34[8] = -(pcVar1[8] == (char)iVar9);
  auVar34[9] = -(pcVar1[9] == cVar43);
  auVar34[10] = -(pcVar1[10] == cVar44);
  auVar34[0xb] = -(pcVar1[0xb] == cVar45);
  auVar34[0xc] = -(pcVar1[0xc] == (char)iVar10);
  auVar34[0xd] = -(pcVar1[0xd] == cVar46);
  auVar34[0xe] = -(pcVar1[0xe] == cVar47);
  auVar34[0xf] = -(pcVar1[0xf] == cVar48);
  if ((((((((((((((((SUB161(auVar34 >> 7,0) & 1) != 0 || (SUB161(auVar34 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar34 >> 0x17,0) & 1) != 0) || (SUB161(auVar34 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar34 >> 0x27,0) & 1) != 0) || (SUB161(auVar34 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar34 >> 0x37,0) & 1) != 0) || (SUB161(auVar34 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar34 >> 0x47,0) & 1) != 0) || (SUB161(auVar34 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar34 >> 0x57,0) & 1) != 0) || (SUB161(auVar34 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar34 >> 0x67,0) & 1) != 0) || (SUB161(auVar34 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar34 >> 0x77,0) & 1) != 0) || auVar34[0xf] < '\0') goto LAB_14083b41b;
  uVar29 = uVar29 + lVar26 + 0x10;
  lVar26 = lVar26 + 0x10;
  goto LAB_14083b3b8;
LAB_14083b41b:
  if (puStack_a0[2] == 0) {
    pdb_142ddd4d0(puStack_a0,1,puStack_e8,CONCAT71((int7)(uVar29 >> 8),1));
    pauVar19 = (undefined1 (*) [16])*puVar2;
    uVar16 = puVar2[1];
  }
  uVar17 = uVar17 & uVar16;
  auVar32 = *(undefined1 (*) [16])(*pauVar19 + uVar17);
  uVar27 = (ushort)(SUB161(auVar32 >> 7,0) & 1) | (ushort)(SUB161(auVar32 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar32 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar32 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar32 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar32 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar32 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar32 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar32 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar32 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar32 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar32 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar32 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar32 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar32 >> 0x77,0) & 1) << 0xe | (ushort)(byte)(auVar32[0xf] >> 7) << 0xf
  ;
  uVar25 = (uint)uVar27;
  if (uVar27 == 0) {
    lVar26 = 0x10;
    do {
      uVar17 = uVar17 + lVar26 & uVar16;
      auVar32 = *(undefined1 (*) [16])(*pauVar19 + uVar17);
      lVar26 = lVar26 + 0x10;
      uVar25 = (uint)(ushort)((ushort)(SUB161(auVar32 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar32 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar32 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar32 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar32 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar32 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar32 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar32 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar32 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar32 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar32 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar32 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar32 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar32 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar32 >> 0x77,0) & 1) << 0xe |
                             (ushort)(byte)(auVar32[0xf] >> 7) << 0xf);
    } while (uVar25 == 0);
  }
  uVar14 = 0;
  for (; (uVar25 & 1) == 0; uVar25 = uVar25 >> 1 | 0x80000000) {
    uVar14 = uVar14 + 1;
  }
  uVar29 = uVar14 + uVar17 & uVar16;
  bVar31 = (*pauVar19)[uVar29];
  if (-1 < (char)bVar31) {
    auVar32 = *pauVar19;
    uVar25 = 0;
    for (uVar14 = (uint)(ushort)((ushort)(SUB161(auVar32 >> 7,0) & 1) |
                                 (ushort)(SUB161(auVar32 >> 0xf,0) & 1) << 1 |
                                 (ushort)(SUB161(auVar32 >> 0x17,0) & 1) << 2 |
                                 (ushort)(SUB161(auVar32 >> 0x1f,0) & 1) << 3 |
                                 (ushort)(SUB161(auVar32 >> 0x27,0) & 1) << 4 |
                                 (ushort)(SUB161(auVar32 >> 0x2f,0) & 1) << 5 |
                                 (ushort)(SUB161(auVar32 >> 0x37,0) & 1) << 6 |
                                 (ushort)(SUB161(auVar32 >> 0x3f,0) & 1) << 7 |
                                 (ushort)(SUB161(auVar32 >> 0x47,0) & 1) << 8 |
                                 (ushort)(SUB161(auVar32 >> 0x4f,0) & 1) << 9 |
                                 (ushort)(SUB161(auVar32 >> 0x57,0) & 1) << 10 |
                                 (ushort)(SUB161(auVar32 >> 0x5f,0) & 1) << 0xb |
                                 (ushort)(SUB161(auVar32 >> 0x67,0) & 1) << 0xc |
                                 (ushort)(SUB161(auVar32 >> 0x6f,0) & 1) << 0xd |
                                 (ushort)(SUB161(auVar32 >> 0x77,0) & 1) << 0xe |
                                (ushort)(byte)(auVar32[0xf] >> 7) << 0xf); (uVar14 & 1) == 0;
        uVar14 = uVar14 >> 1 | 0x80000000) {
      uVar25 = uVar25 + 1;
    }
    uVar29 = (ulonglong)uVar25;
    bVar31 = (*pauVar19)[uVar29];
  }
  bVar21 = bVar21 >> 1;
  (*pauVar19)[uVar29] = bVar21;
  pauVar19[1][uVar29 - 0x10 & uVar16] = bVar21;
  puStack_a0[2] = puStack_a0[2] - (ulonglong)(bVar31 & 1);
  pauVar30 = pauVar19 + uVar29 * -4;
  *(longlong *)pauVar19[uVar29 * -4 + -4] = lVar3;
  *(undefined8 *)(pauVar30[-4] + 8) = 0;
  *(undefined8 *)pauVar30[-3] = 4;
  *(undefined8 *)(pauVar30[-3] + 8) = 0;
  *(undefined8 *)pauVar30[-2] = 0;
  *(undefined8 *)(pauVar30[-2] + 8) = 0;
  *(undefined8 *)pauVar30[-1] = 0;
  pauVar30[-1][8] = 0;
  puStack_a0[3] = puStack_a0[3] + 1;
LAB_14083b4b0:
  if (*(ulonglong *)pauVar30[-1] < uStack_c0) {
    pdb_140df4540(&lStack_98,&lStack_128,*(undefined4 *)(lVar24 + -0x24));
    cVar13 = pdb_1408ff990(lVar24 + -5);
    if (cVar13 == '\0') {
      cVar13 = pdb_1408ff980(lVar24 + -9);
      uVar22 = 2;
      if (cVar13 != '\0') goto LAB_14083b4f8;
    }
    else {
LAB_14083b4f8:
      uVar22 = 3;
    }
    uStack_108 = (undefined4)uStack_90;
    lStack_110 = lStack_98;
    *puStack_158 = uStack_c4;
    lVar26 = *(longlong *)(lStack_e0 + 0x30);
    uVar4 = *(undefined8 *)(lStack_e0 + 0x40);
    if (lVar26 == *(longlong *)(lStack_e0 + 0x20)) {
      pdb_142d7e830(lStack_140);
    }
    lVar3 = *(longlong *)(lStack_e0 + 0x28);
    *(undefined8 *)(lVar3 + lVar26 * 0x18) = uVar4;
    *(longlong *)(lVar3 + 8 + lVar26 * 0x18) = lStack_110;
    *(undefined4 *)(lVar3 + 0x10 + lVar26 * 0x18) = uStack_108;
    *(undefined1 *)(lVar3 + 0x14 + lVar26 * 0x18) = uVar22;
    *(longlong *)(lStack_e0 + 0x30) = lVar26 + 1;
    *(longlong *)(lStack_e0 + 0x40) = *(longlong *)(lStack_e0 + 0x40) + 1;
  }
  *(ulonglong *)pauVar30[-1] = uStack_c0;
  pauVar30[-1][8] = bStack_71;
  uVar16 = *(ulonglong *)(lStack_f0 + 0x10);
  if (uVar16 == 0) {
    pbVar18 = (byte *)0x4;
    lVar26 = *(longlong *)(pauVar30[-4] + 8);
    goto joined_r0x00014083b5df;
  }
  lVar26 = *(longlong *)(lStack_f0 + 8);
  pdb_14007ee60();
  pbVar18 = pub_1406abab0(uVar16 << 5,4);
  if (pbVar18 == (byte *)0x0) {
    pdb_142dc7e2a(4,uVar16 << 5);
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (uVar16 == 1) {
    uVar29 = 0;
LAB_14083b641:
    lVar15 = uVar29 * 0x20;
    uVar4 = *(undefined8 *)(lVar26 + lVar15);
    uVar11 = ((undefined8 *)(lVar26 + lVar15))[1];
    puVar2 = (undefined8 *)(lVar26 + 0x10 + lVar15);
    uVar12 = puVar2[1];
    *(undefined8 *)(pbVar18 + lVar15 + 0x10) = *puVar2;
    *(undefined8 *)(pbVar18 + lVar15 + 0x10 + 8) = uVar12;
    *(undefined8 *)(pbVar18 + lVar15) = uVar4;
    *(undefined8 *)(pbVar18 + lVar15 + 8) = uVar11;
  }
  else {
    lVar15 = 0x20;
    uVar29 = 0;
    do {
      puVar2 = (undefined8 *)(lVar26 + -0x20 + lVar15);
      uVar4 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar26 + -0x10 + lVar15);
      uVar12 = puVar2[1];
      *(undefined8 *)(pbVar18 + lVar15 + -0x10) = *puVar2;
      *(undefined8 *)(pbVar18 + lVar15 + -0x10 + 8) = uVar12;
      *(undefined8 *)(pbVar18 + lVar15 + -0x20) = uVar4;
      *(undefined8 *)(pbVar18 + lVar15 + -0x20 + 8) = uVar11;
      uVar4 = ((undefined8 *)(lVar26 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar26 + 0x10 + lVar15);
      uVar11 = *puVar2;
      uVar12 = puVar2[1];
      *(undefined8 *)(pbVar18 + lVar15) = *(undefined8 *)(lVar26 + lVar15);
      *(undefined8 *)(pbVar18 + lVar15 + 8) = uVar4;
      *(undefined8 *)(pbVar18 + lVar15 + 0x10) = uVar11;
      *(undefined8 *)(pbVar18 + lVar15 + 0x10 + 8) = uVar12;
      uVar29 = uVar29 + 2;
      lVar15 = lVar15 + 0x40;
    } while ((uVar16 & 0xfffffffffffffffe) != uVar29);
    if ((uVar16 & 1) != 0) goto LAB_14083b641;
  }
  lVar26 = *(longlong *)(pauVar30[-4] + 8);
  lVar15 = lStack_b0;
joined_r0x00014083b5df:
  if (lVar26 != 0) {
    pub_1406abac0(*(byte **)pauVar30[-3],lVar26 << 5,4);
  }
  *(ulonglong *)(pauVar30[-4] + 8) = uVar16;
  *(byte **)pauVar30[-3] = pbVar18;
  *(ulonglong *)(pauVar30[-3] + 8) = uVar16;
  goto LAB_14083b01a;
}

