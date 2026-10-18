// VA 0x140b75290, PDB extent 2705 bytes
// country_core::systems::wall::adjust_wall_height::adjust_wall_height_impl::adjust_wall_height_impl
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/adjust_wall_height/adjust_wall_height_impl.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::wall::adjust_wall_height::adjust_wall_height_impl::adjust_wall_height_impl
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/adjust_wall_height/adjust_wall_height_impl.rs
   Extent: 2705 */

void pdb_140b75290(undefined8 *param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                  undefined8 *param_5,undefined8 *param_6,undefined8 param_7,undefined8 *param_8)

{
  char *pcVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  float fVar9;
  ulonglong *puVar10;
  uint uVar11;
  ulonglong *puVar12;
  ulonglong *puVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong *puVar16;
  longlong lVar17;
  ulonglong uVar18;
  ulonglong *puVar19;
  char cVar20;
  ulonglong *puVar21;
  longlong lVar22;
  ushort uVar23;
  longlong lVar24;
  undefined8 uVar25;
  ulonglong *puVar26;
  ulonglong *puVar27;
  bool bVar28;
  byte bVar29;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float fVar30;
  float fVar31;
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
  float fVar43;
  undefined1 unaff_XMM10_Ba;
  char cVar44;
  undefined1 unaff_XMM10_Bb;
  char cVar45;
  undefined1 unaff_XMM10_Bc;
  char cVar46;
  undefined1 unaff_XMM10_Bd;
  char cVar47;
  undefined1 unaff_XMM10_Be;
  char cVar48;
  undefined1 unaff_XMM10_Bf;
  char cVar49;
  undefined1 unaff_XMM10_Bg;
  char cVar50;
  undefined1 unaff_XMM10_Bh;
  char cVar51;
  undefined1 unaff_XMM10_Bi;
  char cVar52;
  undefined1 unaff_XMM10_Bj;
  char cVar53;
  undefined1 unaff_XMM10_Bk;
  char cVar54;
  undefined1 unaff_XMM10_Bl;
  char cVar55;
  undefined1 unaff_XMM10_Bm;
  char cVar56;
  undefined1 unaff_XMM10_Bn;
  char cVar57;
  undefined1 unaff_XMM10_Bo;
  char cVar58;
  undefined1 unaff_XMM10_Bp;
  char cVar59;
  undefined1 uStack_1c1;
  undefined8 uStack_1c0;
  undefined4 uStack_1b8;
  ulonglong uStack_1b0;
  undefined4 uStack_1a4;
  ulonglong *puStack_1a0;
  ulonglong *puStack_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  ulonglong uStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  ulonglong **ppuStack_130;
  undefined8 uStack_128;
  longlong lStack_120;
  longlong lStack_118;
  undefined4 *puStack_110;
  ulonglong *puStack_108;
  code *pcStack_100;
  longlong lStack_f8;
  undefined4 *puStack_f0;
  undefined8 uStack_e8;
  longlong lStack_e0;
  undefined4 *puStack_d8;
  undefined8 uStack_d0;
  
  puVar21 = (ulonglong *)*param_1;
  lVar17 = param_1[1];
  uVar4 = *puVar21;
  uVar15 = 0;
  uVar14 = uVar4 - *(ulonglong *)(lVar17 + 0x18);
  if (uVar4 < *(ulonglong *)(lVar17 + 0x18)) {
    uVar14 = uVar15;
  }
  uVar18 = uVar4 - *(ulonglong *)(lVar17 + 0x38);
  if (uVar4 < *(ulonglong *)(lVar17 + 0x38)) {
    uVar18 = uVar15;
  }
  puVar16 = (ulonglong *)(uVar14 * 0x30 + *(longlong *)(lVar17 + 8));
  uVar4 = *(ulonglong *)(lVar17 + 0x10) - uVar14;
  if (*(ulonglong *)(lVar17 + 0x10) < uVar14) {
    puVar16 = (ulonglong *)0x8;
    uVar4 = uVar15;
  }
  puVar12 = (ulonglong *)(uVar18 * 0x30 + *(longlong *)(lVar17 + 0x28));
  uVar14 = *(ulonglong *)(lVar17 + 0x30) - uVar18;
  if (*(ulonglong *)(lVar17 + 0x30) < uVar18) {
    puVar12 = (ulonglong *)0x8;
    uVar14 = uVar15;
  }
  *puVar21 = (*(longlong *)(lVar17 + 0x40) - uVar14) - uVar4;
  fVar9 = _DAT_142e36f28;
  puVar19 = puVar16 + uVar4 * 6;
  puVar27 = puVar12 + uVar14 * 6;
  plVar5 = (longlong *)*param_2;
  puStack_110 = (undefined4 *)param_2[2];
  uStack_d0 = *param_5;
  uStack_1a4 = *(undefined4 *)((longlong)param_2 + 0x1c);
  uStack_e8 = *param_8;
  uStack_18c = *(undefined4 *)((longlong)param_3 + 0x1c);
  lStack_118 = *param_3;
  puStack_d8 = (undefined4 *)param_3[2];
  uStack_190 = *(undefined4 *)((longlong)param_4 + 0x1c);
  lStack_120 = *param_4;
  puStack_f0 = (undefined4 *)param_4[2];
  iVar8 = -(uint)(CONCAT13(unaff_XMM10_Bd,
                           CONCAT12(unaff_XMM10_Bc,CONCAT11(unaff_XMM10_Bb,unaff_XMM10_Ba))) ==
                 CONCAT13(unaff_XMM10_Bd,
                          CONCAT12(unaff_XMM10_Bc,CONCAT11(unaff_XMM10_Bb,unaff_XMM10_Ba))));
  cVar44 = (char)iVar8;
  cVar45 = (char)((uint)iVar8 >> 8);
  cVar46 = (char)((uint)iVar8 >> 0x10);
  cVar47 = (char)((uint)iVar8 >> 0x18);
  iVar8 = -(uint)(CONCAT13(unaff_XMM10_Bh,
                           CONCAT12(unaff_XMM10_Bg,CONCAT11(unaff_XMM10_Bf,unaff_XMM10_Be))) ==
                 CONCAT13(unaff_XMM10_Bh,
                          CONCAT12(unaff_XMM10_Bg,CONCAT11(unaff_XMM10_Bf,unaff_XMM10_Be))));
  cVar48 = (char)iVar8;
  cVar49 = (char)((uint)iVar8 >> 8);
  cVar50 = (char)((uint)iVar8 >> 0x10);
  cVar51 = (char)((uint)iVar8 >> 0x18);
  iVar8 = -(uint)(CONCAT13(unaff_XMM10_Bl,
                           CONCAT12(unaff_XMM10_Bk,CONCAT11(unaff_XMM10_Bj,unaff_XMM10_Bi))) ==
                 CONCAT13(unaff_XMM10_Bl,
                          CONCAT12(unaff_XMM10_Bk,CONCAT11(unaff_XMM10_Bj,unaff_XMM10_Bi))));
  cVar52 = (char)iVar8;
  cVar53 = (char)((uint)iVar8 >> 8);
  cVar54 = (char)((uint)iVar8 >> 0x10);
  cVar55 = (char)((uint)iVar8 >> 0x18);
  iVar8 = -(uint)(CONCAT13(unaff_XMM10_Bp,
                           CONCAT12(unaff_XMM10_Bo,CONCAT11(unaff_XMM10_Bn,unaff_XMM10_Bm))) ==
                 CONCAT13(unaff_XMM10_Bp,
                          CONCAT12(unaff_XMM10_Bo,CONCAT11(unaff_XMM10_Bn,unaff_XMM10_Bm))));
  cVar56 = (char)iVar8;
  cVar57 = (char)((uint)iVar8 >> 8);
  cVar58 = (char)((uint)iVar8 >> 0x10);
  cVar59 = (char)((uint)iVar8 >> 0x18);
  lStack_e0 = lStack_118 + 0x20;
  lStack_f8 = lStack_120 + 0x20;
  uVar25 = *param_6;
LAB_140b7542e:
  do {
    if ((puVar16 == (ulonglong *)0x0) || (puVar16 == puVar19)) {
      if ((puVar12 == (ulonglong *)0x0) || (puVar12 == puVar27)) {
        return;
      }
      puVar13 = puVar12 + 6;
      puVar10 = (ulonglong *)0x0;
      puVar26 = puVar12;
    }
    else {
      puVar13 = puVar12;
      puVar10 = puVar16 + 6;
      puVar26 = puVar16;
    }
    puVar16 = puVar10;
    *puVar21 = *puVar21 + 1;
    puVar12 = puVar13;
  } while ((int)puVar26[2] == 0);
  if ((int)puVar26[2] != 1) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_14305c1e0,0x13,&UNK_14305c1f8);
  }
  fVar30 = *(float *)((longlong)puVar26 + 0x14);
  uVar4 = puVar26[3];
  puStack_198 = puVar13;
  uStack_188 = uVar4;
  if (plVar5[3] != 0) {
    uVar14 = pdb_1400af0a0(plVar5 + 4,&uStack_188);
    lVar17 = *plVar5;
    bVar29 = (byte)(uVar14 >> 0x39);
    auVar32 = ZEXT216(CONCAT11(bVar29,bVar29));
    auVar32 = pshuflw(auVar32,auVar32,0);
    lVar22 = 0;
    while( true ) {
      uVar14 = uVar14 & plVar5[1];
      auVar39 = *(undefined1 (*) [16])(lVar17 + uVar14);
      auVar38[0] = -(auVar39[0] == auVar32[0]);
      auVar38[1] = -(auVar39[1] == auVar32[1]);
      auVar38[2] = -(auVar39[2] == auVar32[2]);
      auVar38[3] = -(auVar39[3] == auVar32[3]);
      auVar38[4] = -(auVar39[4] == auVar32[4]);
      auVar38[5] = -(auVar39[5] == auVar32[5]);
      auVar38[6] = -(auVar39[6] == auVar32[6]);
      auVar38[7] = -(auVar39[7] == auVar32[7]);
      auVar38[8] = -(auVar39[8] == auVar32[0]);
      auVar38[9] = -(auVar39[9] == auVar32[1]);
      auVar38[10] = -(auVar39[10] == auVar32[2]);
      auVar38[0xb] = -(auVar39[0xb] == auVar32[3]);
      auVar38[0xc] = -(auVar39[0xc] == auVar32[4]);
      auVar38[0xd] = -(auVar39[0xd] == auVar32[5]);
      auVar38[0xe] = -(auVar39[0xe] == auVar32[6]);
      auVar38[0xf] = -(auVar39[0xf] == auVar32[7]);
      uVar23 = (ushort)(SUB161(auVar38 >> 7,0) & 1) | (ushort)(SUB161(auVar38 >> 0xf,0) & 1) << 1 |
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
               (ushort)(SUB161(auVar38 >> 0x77,0) & 1) << 0xe | (ushort)(auVar38[0xf] >> 7) << 0xf;
      uVar11 = (uint)uVar23;
      while (uVar23 != 0) {
        uVar6 = 0;
        for (uVar7 = uVar11; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
          uVar6 = uVar6 + 1;
        }
        lVar24 = (uVar6 + uVar14 & plVar5[1]) * -0x78;
        if (uVar4 == *(ulonglong *)(lVar17 + -0x78 + lVar24)) {
          lVar17 = lVar17 + lVar24;
          fVar31 = *(float *)(lVar17 + -0x1c);
          uVar14 = pdb_140bcf880(lVar17,uVar4,uVar25,param_7);
          fVar43 = extraout_XMM0_Da;
          if ((uVar14 & 1) == 0) {
            fVar43 = fVar30;
          }
          puVar12 = puStack_198;
          if (fVar43 == fVar31) goto LAB_140b7542e;
          uStack_128 = uVar25;
          if ((int)*puVar26 == 1) {
            uStack_1b8 = *(undefined4 *)((longlong)puVar26 + 0xc);
            uStack_1c0 = *(ulonglong *)((longlong)puVar26 + 4);
            goto LAB_140b756bf;
          }
          uVar14 = puVar26[3];
          puStack_1a0 = puVar27;
          uStack_188 = uVar14;
          if (plVar5[3] == 0) goto LAB_140b75c7b;
          uVar15 = pdb_1400af0a0(plVar5 + 4,&uStack_188);
          lVar17 = *plVar5;
          bVar29 = (byte)(uVar15 >> 0x39);
          auVar32 = ZEXT216(CONCAT11(bVar29,bVar29));
          auVar32 = pshuflw(auVar32,auVar32,0);
          lVar22 = 0;
          goto LAB_140b755ee;
        }
        uVar23 = (ushort)(uVar11 - 1) & (ushort)uVar11;
        uVar11 = CONCAT22((short)(uVar11 - 1 >> 0x10),uVar23);
      }
      auVar33[0] = -(auVar39[0] == cVar44);
      auVar33[1] = -(auVar39[1] == cVar45);
      auVar33[2] = -(auVar39[2] == cVar46);
      auVar33[3] = -(auVar39[3] == cVar47);
      auVar33[4] = -(auVar39[4] == cVar48);
      auVar33[5] = -(auVar39[5] == cVar49);
      auVar33[6] = -(auVar39[6] == cVar50);
      auVar33[7] = -(auVar39[7] == cVar51);
      auVar33[8] = -(auVar39[8] == cVar52);
      auVar33[9] = -(auVar39[9] == cVar53);
      auVar33[10] = -(auVar39[10] == cVar54);
      auVar33[0xb] = -(auVar39[0xb] == cVar55);
      auVar33[0xc] = -(auVar39[0xc] == cVar56);
      auVar33[0xd] = -(auVar39[0xd] == cVar57);
      auVar33[0xe] = -(auVar39[0xe] == cVar58);
      auVar33[0xf] = -(auVar39[0xf] == cVar59);
      if ((((((((((((((((SUB161(auVar33 >> 7,0) & 1) != 0 || (SUB161(auVar33 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar33 >> 0x17,0) & 1) != 0) || (SUB161(auVar33 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar33 >> 0x27,0) & 1) != 0) || (SUB161(auVar33 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar33 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar33 >> 0x3f,0) & 1) != 0) || (SUB161(auVar33 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar33 >> 0x4f,0) & 1) != 0) || (SUB161(auVar33 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar33 >> 0x5f,0) & 1) != 0) || (SUB161(auVar33 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar33 >> 0x6f,0) & 1) != 0) || (SUB161(auVar33 >> 0x77,0) & 1) != 0) ||
          auVar33[0xf] < '\0') break;
      uVar14 = uVar14 + lVar22 + 0x10;
      lVar22 = lVar22 + 0x10;
    }
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_14305c180);
LAB_140b755ee:
  uVar15 = uVar15 & plVar5[1];
  pcVar1 = (char *)(lVar17 + uVar15);
  auVar39[0] = -(*pcVar1 == auVar32[0]);
  auVar39[1] = -(pcVar1[1] == auVar32[1]);
  auVar39[2] = -(pcVar1[2] == auVar32[2]);
  auVar39[3] = -(pcVar1[3] == auVar32[3]);
  auVar39[4] = -(pcVar1[4] == auVar32[4]);
  auVar39[5] = -(pcVar1[5] == auVar32[5]);
  auVar39[6] = -(pcVar1[6] == auVar32[6]);
  auVar39[7] = -(pcVar1[7] == auVar32[7]);
  auVar39[8] = -(pcVar1[8] == auVar32[0]);
  auVar39[9] = -(pcVar1[9] == auVar32[1]);
  auVar39[10] = -(pcVar1[10] == auVar32[2]);
  auVar39[0xb] = -(pcVar1[0xb] == auVar32[3]);
  auVar39[0xc] = -(pcVar1[0xc] == auVar32[4]);
  auVar39[0xd] = -(pcVar1[0xd] == auVar32[5]);
  auVar39[0xe] = -(pcVar1[0xe] == auVar32[6]);
  auVar39[0xf] = -(pcVar1[0xf] == auVar32[7]);
  uVar23 = (ushort)(SUB161(auVar39 >> 7,0) & 1) | (ushort)(SUB161(auVar39 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar39 >> 0x17,0) & 1) << 2 |
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
           (ushort)(SUB161(auVar39 >> 0x77,0) & 1) << 0xe | (ushort)(auVar39[0xf] >> 7) << 0xf;
  uVar11 = (uint)uVar23;
  if (uVar23 != 0) {
    while( true ) {
      uVar6 = 0;
      for (uVar7 = uVar11; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
        uVar6 = uVar6 + 1;
      }
      lVar24 = (uVar6 + uVar15 & plVar5[1]) * -0x78;
      if (uVar14 == *(ulonglong *)(lVar17 + -0x78 + lVar24)) break;
      uVar23 = (ushort)(uVar11 - 1) & (ushort)uVar11;
      uVar11 = CONCAT22((short)(uVar11 - 1 >> 0x10),uVar23);
      if (uVar23 == 0) goto LAB_140b75630;
    }
    lVar17 = lVar17 + lVar24;
    uVar11 = pdb_1419a9060(lVar17 + -0x70);
    uVar15 = (ulonglong)uVar11;
    uVar14 = *(ulonglong *)(lVar17 + -0x60);
    if (uVar14 <= uVar15) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(uVar15,uVar14,&UNK_14335e4e0);
    }
    if (uVar14 <= uVar15 + 1) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(uVar15 + 1,uVar14,&UNK_14335e4f8);
    }
    uVar25 = *(undefined8 *)(*(longlong *)(lVar17 + -0x68) + uVar15 * 8);
    uVar2 = *(undefined8 *)(*(longlong *)(lVar17 + -0x68) + 8 + uVar15 * 8);
    uStack_188 = CONCAT44(extraout_XMM0_Da_00 * (float)((ulonglong)uVar2 >> 0x20) +
                          (fVar9 - extraout_XMM0_Da_00) * (float)((ulonglong)uVar25 >> 0x20),
                          extraout_XMM0_Da_00 * (float)uVar2 +
                          (fVar9 - extraout_XMM0_Da_00) * (float)uVar25);
    pdb_140df4520(&uStack_1c0,&uStack_188);
    puVar27 = puStack_1a0;
LAB_140b756bf:
    fVar30 = (float)pdb_1419c1ac0(uStack_d0,uStack_1c0 & 0xffffffff,uStack_1b8);
    uStack_1c0 = CONCAT44(fVar30 + uStack_1c0._4_4_,(undefined4)uStack_1c0);
    uStack_188 = uVar4;
    if (plVar5[3] != 0) {
      uVar14 = pdb_1400af0a0(plVar5 + 4,&uStack_188);
      bVar29 = (byte)(uVar14 >> 0x39);
      auVar32 = ZEXT216(CONCAT11(bVar29,bVar29));
      auVar32 = pshuflw(auVar32,auVar32,0);
      lVar17 = 0;
      while( true ) {
        uVar14 = uVar14 & plVar5[1];
        auVar39 = *(undefined1 (*) [16])(*plVar5 + uVar14);
        auVar40[0] = -(auVar39[0] == auVar32[0]);
        auVar40[1] = -(auVar39[1] == auVar32[1]);
        auVar40[2] = -(auVar39[2] == auVar32[2]);
        auVar40[3] = -(auVar39[3] == auVar32[3]);
        auVar40[4] = -(auVar39[4] == auVar32[4]);
        auVar40[5] = -(auVar39[5] == auVar32[5]);
        auVar40[6] = -(auVar39[6] == auVar32[6]);
        auVar40[7] = -(auVar39[7] == auVar32[7]);
        auVar40[8] = -(auVar39[8] == auVar32[0]);
        auVar40[9] = -(auVar39[9] == auVar32[1]);
        auVar40[10] = -(auVar39[10] == auVar32[2]);
        auVar40[0xb] = -(auVar39[0xb] == auVar32[3]);
        auVar40[0xc] = -(auVar39[0xc] == auVar32[4]);
        auVar40[0xd] = -(auVar39[0xd] == auVar32[5]);
        auVar40[0xe] = -(auVar39[0xe] == auVar32[6]);
        auVar40[0xf] = -(auVar39[0xf] == auVar32[7]);
        uVar23 = (ushort)(SUB161(auVar40 >> 7,0) & 1) | (ushort)(SUB161(auVar40 >> 0xf,0) & 1) << 1
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
                 (ushort)(SUB161(auVar40 >> 0x77,0) & 1) << 0xe | (ushort)(auVar40[0xf] >> 7) << 0xf
        ;
        uVar11 = (uint)uVar23;
        while (uVar23 != 0) {
          uVar6 = 0;
          for (uVar7 = uVar11; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
            uVar6 = uVar6 + 1;
          }
          if (uVar4 == *(ulonglong *)(*plVar5 + -0x78 + (uVar6 + uVar14 & plVar5[1]) * -0x78)) {
            *puStack_110 = uStack_1a4;
            uStack_1b0 = uVar4;
            lVar17 = pdb_1417bd890(plVar5,&uStack_1b0);
            if (lVar17 == 0) {
              if (1 < *_DAT_143ca8e90) {
                puStack_108 = &uStack_1b0;
                pcStack_100 = pdb_140c04ef0;
                uStack_188 = 0;
                puStack_180 = &UNK_143021dde;
                uStack_178 = 0x2b;
                uStack_170 = 0;
                puStack_168 = &UNK_143021da7;
                uStack_160 = 0x36;
                uStack_158 = 2;
                puStack_150 = &UNK_143021dde;
                uStack_148 = 0x2b;
                uStack_140 = 0xfd00000001;
                puStack_138 = &UNK_143021d78;
                ppuStack_130 = &puStack_108;
                pdb_140f332f0(&uStack_1c1,&uStack_188);
              }
            }
            else {
              pdb_1403b05d0(plVar5 + 0xc,uVar4);
              *(float *)(lVar17 + 0x54) = fVar43;
            }
            uStack_188 = uVar4;
            if (plVar5[3] == 0) goto LAB_140b75c6f;
            uVar14 = pdb_1400af0a0(plVar5 + 4,&uStack_188);
            lVar17 = *plVar5;
            bVar29 = (byte)(uVar14 >> 0x39);
            auVar32 = ZEXT216(CONCAT11(bVar29,bVar29));
            auVar32 = pshuflw(auVar32,auVar32,0);
            lVar22 = 0;
            goto LAB_140b758e2;
          }
          uVar23 = (ushort)(uVar11 - 1) & (ushort)uVar11;
          uVar11 = CONCAT22((short)(uVar11 - 1 >> 0x10),uVar23);
        }
        auVar35[0] = -(auVar39[0] == cVar44);
        auVar35[1] = -(auVar39[1] == cVar45);
        auVar35[2] = -(auVar39[2] == cVar46);
        auVar35[3] = -(auVar39[3] == cVar47);
        auVar35[4] = -(auVar39[4] == cVar48);
        auVar35[5] = -(auVar39[5] == cVar49);
        auVar35[6] = -(auVar39[6] == cVar50);
        auVar35[7] = -(auVar39[7] == cVar51);
        auVar35[8] = -(auVar39[8] == cVar52);
        auVar35[9] = -(auVar39[9] == cVar53);
        auVar35[10] = -(auVar39[10] == cVar54);
        auVar35[0xb] = -(auVar39[0xb] == cVar55);
        auVar35[0xc] = -(auVar39[0xc] == cVar56);
        auVar35[0xd] = -(auVar39[0xd] == cVar57);
        auVar35[0xe] = -(auVar39[0xe] == cVar58);
        auVar35[0xf] = -(auVar39[0xf] == cVar59);
        if ((((((((((((((((SUB161(auVar35 >> 7,0) & 1) != 0 || (SUB161(auVar35 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar35 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar35 >> 0x1f,0) & 1) != 0) || (SUB161(auVar35 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar35 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar35 >> 0x37,0) & 1) != 0) || (SUB161(auVar35 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar35 >> 0x47,0) & 1) != 0) || (SUB161(auVar35 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar35 >> 0x57,0) & 1) != 0) || (SUB161(auVar35 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar35 >> 0x67,0) & 1) != 0) || (SUB161(auVar35 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar35 >> 0x77,0) & 1) != 0) || auVar35[0xf] < '\0') break;
        uVar14 = uVar14 + lVar17 + 0x10;
        lVar17 = lVar17 + 0x10;
      }
    }
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_14305c198);
  }
LAB_140b75630:
  auVar34[0] = -(*pcVar1 == cVar44);
  auVar34[1] = -(pcVar1[1] == cVar45);
  auVar34[2] = -(pcVar1[2] == cVar46);
  auVar34[3] = -(pcVar1[3] == cVar47);
  auVar34[4] = -(pcVar1[4] == cVar48);
  auVar34[5] = -(pcVar1[5] == cVar49);
  auVar34[6] = -(pcVar1[6] == cVar50);
  auVar34[7] = -(pcVar1[7] == cVar51);
  auVar34[8] = -(pcVar1[8] == cVar52);
  auVar34[9] = -(pcVar1[9] == cVar53);
  auVar34[10] = -(pcVar1[10] == cVar54);
  auVar34[0xb] = -(pcVar1[0xb] == cVar55);
  auVar34[0xc] = -(pcVar1[0xc] == cVar56);
  auVar34[0xd] = -(pcVar1[0xd] == cVar57);
  auVar34[0xe] = -(pcVar1[0xe] == cVar58);
  auVar34[0xf] = -(pcVar1[0xf] == cVar59);
  if ((((((((((((((((SUB161(auVar34 >> 7,0) & 1) != 0 || (SUB161(auVar34 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar34 >> 0x17,0) & 1) != 0) || (SUB161(auVar34 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar34 >> 0x27,0) & 1) != 0) || (SUB161(auVar34 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar34 >> 0x37,0) & 1) != 0) || (SUB161(auVar34 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar34 >> 0x47,0) & 1) != 0) || (SUB161(auVar34 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar34 >> 0x57,0) & 1) != 0) || (SUB161(auVar34 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar34 >> 0x67,0) & 1) != 0) || (SUB161(auVar34 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar34 >> 0x77,0) & 1) != 0) || auVar34[0xf] < '\0') {
LAB_140b75c7b:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_14305c210);
  }
  uVar15 = uVar15 + lVar22 + 0x10;
  lVar22 = lVar22 + 0x10;
  goto LAB_140b755ee;
LAB_140b758e2:
  uVar14 = uVar14 & plVar5[1];
  auVar39 = *(undefined1 (*) [16])(lVar17 + uVar14);
  auVar41[0] = -(auVar39[0] == auVar32[0]);
  auVar41[1] = -(auVar39[1] == auVar32[1]);
  auVar41[2] = -(auVar39[2] == auVar32[2]);
  auVar41[3] = -(auVar39[3] == auVar32[3]);
  auVar41[4] = -(auVar39[4] == auVar32[4]);
  auVar41[5] = -(auVar39[5] == auVar32[5]);
  auVar41[6] = -(auVar39[6] == auVar32[6]);
  auVar41[7] = -(auVar39[7] == auVar32[7]);
  auVar41[8] = -(auVar39[8] == auVar32[0]);
  auVar41[9] = -(auVar39[9] == auVar32[1]);
  auVar41[10] = -(auVar39[10] == auVar32[2]);
  auVar41[0xb] = -(auVar39[0xb] == auVar32[3]);
  auVar41[0xc] = -(auVar39[0xc] == auVar32[4]);
  auVar41[0xd] = -(auVar39[0xd] == auVar32[5]);
  auVar41[0xe] = -(auVar39[0xe] == auVar32[6]);
  auVar41[0xf] = -(auVar39[0xf] == auVar32[7]);
  uVar23 = (ushort)(SUB161(auVar41 >> 7,0) & 1) | (ushort)(SUB161(auVar41 >> 0xf,0) & 1) << 1 |
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
  uVar11 = (uint)uVar23;
  while (uVar23 != 0) {
    uVar6 = 0;
    for (uVar7 = uVar11; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
      uVar6 = uVar6 + 1;
    }
    lVar24 = (uVar6 + uVar14 & plVar5[1]) * -0x78;
    if (uVar4 == *(ulonglong *)(lVar17 + -0x78 + lVar24)) {
      cVar20 = (char)puVar26[4];
      puStack_1a0 = puVar21;
      if ((1 < *(uint *)(lVar17 + lVar24 + -0x38)) ||
         (bVar28 = cVar20 != '\0', cVar20 = '\x01', bVar28)) {
        *puStack_d8 = uStack_18c;
        lVar17 = *(longlong *)(lStack_118 + 0x30);
        uVar25 = *(undefined8 *)(lStack_118 + 0x40);
        if (lVar17 == *(longlong *)(lStack_118 + 0x20)) {
          pdb_142d7e6e0(lStack_e0);
        }
        lVar22 = *(longlong *)(lStack_118 + 0x28);
        lVar24 = lVar17 * 0x20;
        *(undefined8 *)(lVar22 + lVar24) = uVar25;
        *(ulonglong *)(lVar22 + 8 + lVar24) = uVar4;
        *(ulonglong *)(lVar22 + 0x10 + lVar24) = uStack_1c0;
        *(undefined4 *)(lVar22 + 0x18 + lVar24) = uStack_1b8;
        *(undefined1 *)(lVar22 + 0x1c + lVar24) = 0;
        *(char *)(lVar22 + 0x1d + lVar24) = cVar20;
        lVar22 = lStack_118;
        goto LAB_140b759ca;
      }
      *puStack_110 = uStack_1a4;
      uStack_1b0 = uVar4;
      lVar17 = pdb_1417bd890(plVar5,&uStack_1b0);
      if (lVar17 == 0) {
        if (1 < *_DAT_143ca8e90) {
          puStack_108 = &uStack_1b0;
          pcStack_100 = pdb_140c04ef0;
          uStack_188 = 0;
          puStack_180 = &UNK_143021dde;
          uStack_178 = 0x2b;
          uStack_170 = 0;
          puStack_168 = &UNK_143021da7;
          uStack_160 = 0x36;
          uStack_158 = 2;
          puStack_150 = &UNK_143021dde;
          uStack_148 = 0x2b;
          uStack_140 = 0xfd00000001;
          puStack_138 = &UNK_143021d78;
          ppuStack_130 = &puStack_108;
          pdb_140f332f0(&uStack_1c1,&uStack_188);
        }
      }
      else {
        pdb_1403b05d0(plVar5 + 0xc,uVar4);
        *(float *)(lVar17 + 0x54) = fVar43;
      }
      uStack_188 = uVar4;
      if (plVar5[3] == 0) {
LAB_140b75ce1:
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_14305c1c8);
      }
      uVar14 = pdb_1400af0a0(plVar5 + 4,&uStack_188);
      lVar17 = *plVar5;
      bVar29 = (byte)(uVar14 >> 0x39);
      auVar32 = ZEXT216(CONCAT11(bVar29,bVar29));
      auVar32 = pshuflw(auVar32,auVar32,0);
      lVar22 = 0;
      goto LAB_140b75b59;
    }
    uVar23 = (ushort)(uVar11 - 1) & (ushort)uVar11;
    uVar11 = CONCAT22((short)(uVar11 - 1 >> 0x10),uVar23);
  }
  auVar36[0] = -(auVar39[0] == cVar44);
  auVar36[1] = -(auVar39[1] == cVar45);
  auVar36[2] = -(auVar39[2] == cVar46);
  auVar36[3] = -(auVar39[3] == cVar47);
  auVar36[4] = -(auVar39[4] == cVar48);
  auVar36[5] = -(auVar39[5] == cVar49);
  auVar36[6] = -(auVar39[6] == cVar50);
  auVar36[7] = -(auVar39[7] == cVar51);
  auVar36[8] = -(auVar39[8] == cVar52);
  auVar36[9] = -(auVar39[9] == cVar53);
  auVar36[10] = -(auVar39[10] == cVar54);
  auVar36[0xb] = -(auVar39[0xb] == cVar55);
  auVar36[0xc] = -(auVar39[0xc] == cVar56);
  auVar36[0xd] = -(auVar39[0xd] == cVar57);
  auVar36[0xe] = -(auVar39[0xe] == cVar58);
  auVar36[0xf] = -(auVar39[0xf] == cVar59);
  if ((((((((((((((((SUB161(auVar36 >> 7,0) & 1) != 0 || (SUB161(auVar36 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar36 >> 0x17,0) & 1) != 0) || (SUB161(auVar36 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar36 >> 0x27,0) & 1) != 0) || (SUB161(auVar36 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar36 >> 0x37,0) & 1) != 0) || (SUB161(auVar36 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar36 >> 0x47,0) & 1) != 0) || (SUB161(auVar36 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar36 >> 0x57,0) & 1) != 0) || (SUB161(auVar36 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar36 >> 0x67,0) & 1) != 0) || (SUB161(auVar36 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar36 >> 0x77,0) & 1) != 0) || auVar36[0xf] < '\0') {
LAB_140b75c6f:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_14305c1b0);
  }
  uVar14 = uVar14 + lVar22 + 0x10;
  lVar22 = lVar22 + 0x10;
  goto LAB_140b758e2;
LAB_140b75b59:
  uVar14 = uVar14 & plVar5[1];
  pcVar1 = (char *)(lVar17 + uVar14);
  auVar42[0] = -(*pcVar1 == auVar32[0]);
  auVar42[1] = -(pcVar1[1] == auVar32[1]);
  auVar42[2] = -(pcVar1[2] == auVar32[2]);
  auVar42[3] = -(pcVar1[3] == auVar32[3]);
  auVar42[4] = -(pcVar1[4] == auVar32[4]);
  auVar42[5] = -(pcVar1[5] == auVar32[5]);
  auVar42[6] = -(pcVar1[6] == auVar32[6]);
  auVar42[7] = -(pcVar1[7] == auVar32[7]);
  auVar42[8] = -(pcVar1[8] == auVar32[0]);
  auVar42[9] = -(pcVar1[9] == auVar32[1]);
  auVar42[10] = -(pcVar1[10] == auVar32[2]);
  auVar42[0xb] = -(pcVar1[0xb] == auVar32[3]);
  auVar42[0xc] = -(pcVar1[0xc] == auVar32[4]);
  auVar42[0xd] = -(pcVar1[0xd] == auVar32[5]);
  auVar42[0xe] = -(pcVar1[0xe] == auVar32[6]);
  auVar42[0xf] = -(pcVar1[0xf] == auVar32[7]);
  uVar23 = (ushort)(SUB161(auVar42 >> 7,0) & 1) | (ushort)(SUB161(auVar42 >> 0xf,0) & 1) << 1 |
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
  uVar11 = (uint)uVar23;
  while( true ) {
    if (uVar23 == 0) goto LAB_140b75b99;
    uVar6 = 0;
    for (uVar7 = uVar11; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
      uVar6 = uVar6 + 1;
    }
    lVar24 = (uVar6 + uVar14 & plVar5[1]) * -0x78;
    if (uVar4 == *(ulonglong *)(lVar17 + -0x78 + lVar24)) break;
    uVar23 = (ushort)(uVar11 - 1) & (ushort)uVar11;
    uVar11 = CONCAT22((short)(uVar11 - 1 >> 0x10),uVar23);
  }
  goto LAB_140b75bb9;
LAB_140b75b99:
  auVar37[0] = -(*pcVar1 == cVar44);
  auVar37[1] = -(pcVar1[1] == cVar45);
  auVar37[2] = -(pcVar1[2] == cVar46);
  auVar37[3] = -(pcVar1[3] == cVar47);
  auVar37[4] = -(pcVar1[4] == cVar48);
  auVar37[5] = -(pcVar1[5] == cVar49);
  auVar37[6] = -(pcVar1[6] == cVar50);
  auVar37[7] = -(pcVar1[7] == cVar51);
  auVar37[8] = -(pcVar1[8] == cVar52);
  auVar37[9] = -(pcVar1[9] == cVar53);
  auVar37[10] = -(pcVar1[10] == cVar54);
  auVar37[0xb] = -(pcVar1[0xb] == cVar55);
  auVar37[0xc] = -(pcVar1[0xc] == cVar56);
  auVar37[0xd] = -(pcVar1[0xd] == cVar57);
  auVar37[0xe] = -(pcVar1[0xe] == cVar58);
  auVar37[0xf] = -(pcVar1[0xf] == cVar59);
  if ((((((((((((((((SUB161(auVar37 >> 7,0) & 1) != 0 || (SUB161(auVar37 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar37 >> 0x17,0) & 1) != 0) || (SUB161(auVar37 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar37 >> 0x27,0) & 1) != 0) || (SUB161(auVar37 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar37 >> 0x37,0) & 1) != 0) || (SUB161(auVar37 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar37 >> 0x47,0) & 1) != 0) || (SUB161(auVar37 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar37 >> 0x57,0) & 1) != 0) || (SUB161(auVar37 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar37 >> 0x67,0) & 1) != 0) || (SUB161(auVar37 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar37 >> 0x77,0) & 1) != 0) || auVar37[0xf] < '\0') goto LAB_140b75ce1;
  uVar14 = uVar14 + lVar22 + 0x10;
  lVar22 = lVar22 + 0x10;
  goto LAB_140b75b59;
LAB_140b75bb9:
  uVar3 = *(undefined1 *)(lVar17 + lVar24 + -7);
  fVar30 = (float)pdb_140de8220(0);
  *puStack_f0 = uStack_190;
  lVar17 = *(longlong *)(lStack_120 + 0x30);
  uVar25 = *(undefined8 *)(lStack_120 + 0x40);
  if (lVar17 == *(longlong *)(lStack_120 + 0x20)) {
    pdb_142d7ede0(lStack_f8);
  }
  fVar31 = 0.0;
  if (0.0 <= fVar30) {
    fVar31 = fVar30;
  }
  fVar30 = fVar9;
  if (fVar31 <= fVar9) {
    fVar30 = fVar31;
  }
  lVar22 = *(longlong *)(lStack_120 + 0x28);
  *(undefined8 *)(lVar22 + lVar17 * 0x28) = uVar25;
  *(ulonglong *)(lVar22 + 8 + lVar17 * 0x28) = uVar4;
  *(ulonglong *)(lVar22 + 0x10 + lVar17 * 0x28) = uStack_1c0;
  *(undefined4 *)(lVar22 + 0x18 + lVar17 * 0x28) = uStack_1b8;
  *(float *)(lVar22 + 0x1c + lVar17 * 0x28) = fVar30;
  *(undefined1 *)(lVar22 + 0x20 + lVar17 * 0x28) = 3;
  *(undefined1 *)(lVar22 + 0x21 + lVar17 * 0x28) = uVar3;
  lVar22 = lStack_120;
LAB_140b759ca:
  *(longlong *)(lVar22 + 0x30) = lVar17 + 1;
  *(longlong *)(lVar22 + 0x40) = *(longlong *)(lVar22 + 0x40) + 1;
  puVar12 = puStack_198;
  puVar21 = puStack_1a0;
  uVar25 = uStack_128;
  goto LAB_140b7542e;
}

