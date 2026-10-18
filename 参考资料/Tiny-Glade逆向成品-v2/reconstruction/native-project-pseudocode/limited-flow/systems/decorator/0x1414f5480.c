// VA 0x1414f5480, PDB extent 2404 bytes
// system_decorator::decorator_visual::deco_differential_state::WallAttachedDecoTracker::with_diffs<system_decorator::decorator_visual::door_stairs_assemble_bricks::DoorStairsAssemblyParams,system_decorator::decorator_visual::door_stairs_assemble_bricks::door_stairs_assemble_bricks::closure_env$0>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/deco_differential_state.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_decorator::decorator_visual::deco_differential_state::WallAttachedDecoTracker::with_diffs<system_decorator::decorator_visual::door_stairs_assemble_bricks::DoorStairsAssemblyParams,system_decorator::decorator_visual::door_stairs_assemble_bricks::door_stairs_assemble_bricks::closure_env$0>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/deco_differential_state.rs
   Extent: 2404 */

void pdb_1414f5480(longlong *param_1,undefined8 *param_2)

{
  char cVar1;
  longlong *plVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  longlong lVar12;
  ulonglong uVar13;
  int *piVar14;
  longlong lVar15;
  uint uVar16;
  char *pcVar17;
  longlong lVar18;
  longlong lVar19;
  ushort uVar20;
  longlong lVar21;
  undefined8 *puVar22;
  undefined1 (*pauVar23) [16];
  longlong *plVar24;
  undefined1 (*pauVar25) [16];
  undefined1 (*pauVar26) [16];
  bool bVar27;
  byte bVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 unaff_XMM10_Ba;
  undefined1 unaff_XMM10_Bb;
  char cVar34;
  undefined1 unaff_XMM10_Bc;
  char cVar35;
  undefined1 unaff_XMM10_Bd;
  char cVar36;
  undefined1 unaff_XMM10_Be;
  undefined1 unaff_XMM10_Bf;
  char cVar37;
  undefined1 unaff_XMM10_Bg;
  char cVar38;
  undefined1 unaff_XMM10_Bh;
  char cVar39;
  undefined1 unaff_XMM10_Bi;
  undefined1 unaff_XMM10_Bj;
  char cVar40;
  undefined1 unaff_XMM10_Bk;
  char cVar41;
  undefined1 unaff_XMM10_Bl;
  char cVar42;
  undefined1 unaff_XMM10_Bm;
  undefined1 unaff_XMM10_Bn;
  char cVar43;
  undefined1 unaff_XMM10_Bo;
  char cVar44;
  undefined1 unaff_XMM10_Bp;
  char cVar45;
  undefined8 uStack_1c8;
  longlong lStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  longlong lStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  longlong lStack_190;
  longlong lStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  int iStack_170;
  longlong lStack_150;
  longlong lStack_148;
  longlong lStack_140;
  undefined8 uStack_138;
  ulonglong uStack_130;
  longlong lStack_128;
  longlong *plStack_120;
  undefined8 *puStack_118;
  longlong *plStack_110;
  ulonglong uStack_108;
  longlong lStack_100;
  longlong lStack_f8;
  undefined1 (*pauStack_f0) [16];
  undefined8 *puStack_e8;
  longlong *plStack_e0;
  undefined1 uStack_d2;
  undefined1 uStack_d1;
  undefined8 uStack_d0;
  
  lVar12 = _UNK_143310fd8;
  uStack_d0 = 0xfffffffffffffffe;
  pauVar26 = (undefined1 (*) [16])param_1[6];
  uStack_108 = param_1[7];
  auVar29 = *pauVar26;
  pauVar25 = pauVar26 + 1;
  lVar15 = param_1[9];
  param_1[8] = _DAT_143310fd0;
  param_1[9] = lVar12;
  lVar12 = _UNK_143310fc8;
  param_1[6] = _DAT_143310fc0;
  param_1[7] = lVar12;
  uVar16 = ~(uint)(ushort)((ushort)(SUB161(auVar29 >> 7,0) & 1) |
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
                          (ushort)(byte)(auVar29[0xf] >> 7) << 0xf);
  puVar22 = (undefined8 *)*param_2;
  plVar24 = (longlong *)param_2[1];
  uStack_138 = param_2[2];
  plStack_120 = param_1 + 4;
  iVar6 = -(uint)(CONCAT13(unaff_XMM10_Bd,
                           CONCAT12(unaff_XMM10_Bc,CONCAT11(unaff_XMM10_Bb,unaff_XMM10_Ba))) ==
                 CONCAT13(unaff_XMM10_Bd,
                          CONCAT12(unaff_XMM10_Bc,CONCAT11(unaff_XMM10_Bb,unaff_XMM10_Ba))));
  cVar34 = (char)((uint)iVar6 >> 8);
  cVar35 = (char)((uint)iVar6 >> 0x10);
  cVar36 = (char)((uint)iVar6 >> 0x18);
  iVar7 = -(uint)(CONCAT13(unaff_XMM10_Bh,
                           CONCAT12(unaff_XMM10_Bg,CONCAT11(unaff_XMM10_Bf,unaff_XMM10_Be))) ==
                 CONCAT13(unaff_XMM10_Bh,
                          CONCAT12(unaff_XMM10_Bg,CONCAT11(unaff_XMM10_Bf,unaff_XMM10_Be))));
  cVar37 = (char)((uint)iVar7 >> 8);
  cVar38 = (char)((uint)iVar7 >> 0x10);
  cVar39 = (char)((uint)iVar7 >> 0x18);
  iVar8 = -(uint)(CONCAT13(unaff_XMM10_Bl,
                           CONCAT12(unaff_XMM10_Bk,CONCAT11(unaff_XMM10_Bj,unaff_XMM10_Bi))) ==
                 CONCAT13(unaff_XMM10_Bl,
                          CONCAT12(unaff_XMM10_Bk,CONCAT11(unaff_XMM10_Bj,unaff_XMM10_Bi))));
  cVar40 = (char)((uint)iVar8 >> 8);
  cVar41 = (char)((uint)iVar8 >> 0x10);
  cVar42 = (char)((uint)iVar8 >> 0x18);
  iVar9 = -(uint)(CONCAT13(unaff_XMM10_Bp,
                           CONCAT12(unaff_XMM10_Bo,CONCAT11(unaff_XMM10_Bn,unaff_XMM10_Bm))) ==
                 CONCAT13(unaff_XMM10_Bp,
                          CONCAT12(unaff_XMM10_Bo,CONCAT11(unaff_XMM10_Bn,unaff_XMM10_Bm))));
  cVar43 = (char)((uint)iVar9 >> 8);
  cVar44 = (char)((uint)iVar9 >> 0x10);
  cVar45 = (char)((uint)iVar9 >> 0x18);
  puStack_118 = puVar22;
  plStack_110 = plVar24;
  pauStack_f0 = pauVar26;
  plStack_e0 = param_1;
  do {
    plVar2 = plStack_e0;
    pauVar23 = pauStack_f0;
    uVar13 = uStack_108;
    if (lVar15 == 0) {
      if (uStack_108 == 0) {
        uVar10 = 0;
      }
      else {
        pub_142e32780(pauStack_f0,0xff,uStack_108 + 0x11);
        uVar10 = (uVar13 + 1 & 0xfffffffffffffff8) - (uVar13 + 1 >> 3);
        if (uVar13 < 8) {
          uVar10 = uVar13;
        }
      }
      plStack_e0[6] = (longlong)pauVar23;
      plStack_e0[7] = uVar13;
      plStack_e0[8] = uVar10;
      plStack_e0[9] = 0;
      return;
    }
    if ((short)uVar16 == 0) {
      do {
        auVar29 = *pauVar25;
        pauVar26 = pauVar26 + -8;
        pauVar25 = pauVar25 + 1;
        uVar16 = (ushort)((ushort)(SUB161(auVar29 >> 7,0) & 1) |
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
                         (ushort)(byte)(auVar29[0xf] >> 7) << 0xf) ^ 0xffff;
      } while (uVar16 == 0);
    }
    uStack_130 = (ulonglong)uVar16;
    iVar3 = 0;
    for (; (uVar16 & 1) == 0; uVar16 = uVar16 >> 1 | 0x80000000) {
      iVar3 = iVar3 + 1;
    }
    lStack_148 = *(longlong *)((longlong)pauVar26 + (-8 - (ulonglong)(uint)(iVar3 << 3)));
    lStack_f8 = lStack_148;
    if (plStack_e0[3] == 0) {
      puStack_e8 = (undefined8 *)0x0;
    }
    else {
      uVar10 = pdb_1400af0a0(plStack_120,&lStack_148);
      lVar12 = *plVar2;
      uVar13 = plVar2[1];
      bVar28 = (byte)(uVar10 >> 0x39);
      auVar29 = ZEXT216(CONCAT11(bVar28,bVar28));
      auVar29 = pshuflw(auVar29,auVar29,0);
      lVar18 = 0;
      while( true ) {
        uVar10 = uVar10 & uVar13;
        pcVar17 = (char *)(lVar12 + uVar10);
        auVar32[0] = -(*pcVar17 == auVar29[0]);
        auVar32[1] = -(pcVar17[1] == auVar29[1]);
        auVar32[2] = -(pcVar17[2] == auVar29[2]);
        auVar32[3] = -(pcVar17[3] == auVar29[3]);
        auVar32[4] = -(pcVar17[4] == auVar29[4]);
        auVar32[5] = -(pcVar17[5] == auVar29[5]);
        auVar32[6] = -(pcVar17[6] == auVar29[6]);
        auVar32[7] = -(pcVar17[7] == auVar29[7]);
        auVar32[8] = -(pcVar17[8] == auVar29[0]);
        auVar32[9] = -(pcVar17[9] == auVar29[1]);
        auVar32[10] = -(pcVar17[10] == auVar29[2]);
        auVar32[0xb] = -(pcVar17[0xb] == auVar29[3]);
        auVar32[0xc] = -(pcVar17[0xc] == auVar29[4]);
        auVar32[0xd] = -(pcVar17[0xd] == auVar29[5]);
        auVar32[0xe] = -(pcVar17[0xe] == auVar29[6]);
        auVar32[0xf] = -(pcVar17[0xf] == auVar29[7]);
        uVar20 = (ushort)(SUB161(auVar32 >> 7,0) & 1) | (ushort)(SUB161(auVar32 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar32 >> 0x17,0) & 1) << 2 |
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
                 (ushort)(SUB161(auVar32 >> 0x77,0) & 1) << 0xe | (ushort)(auVar32[0xf] >> 7) << 0xf
        ;
        uVar16 = (uint)uVar20;
        while (uVar20 != 0) {
          uVar4 = 0;
          for (uVar5 = uVar16; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
            uVar4 = uVar4 + 1;
          }
          lVar21 = (uVar4 + uVar10 & uVar13) * -0x38;
          if (lStack_f8 == *(longlong *)(lVar12 + -0x38 + lVar21)) {
            lVar12 = lVar12 + lVar21;
            goto LAB_1414f56b2;
          }
          uVar20 = (ushort)(uVar16 - 1) & (ushort)uVar16;
          uVar16 = CONCAT22((short)(uVar16 - 1 >> 0x10),uVar20);
        }
        auVar30[0] = -(*pcVar17 == (char)iVar6);
        auVar30[1] = -(pcVar17[1] == cVar34);
        auVar30[2] = -(pcVar17[2] == cVar35);
        auVar30[3] = -(pcVar17[3] == cVar36);
        auVar30[4] = -(pcVar17[4] == (char)iVar7);
        auVar30[5] = -(pcVar17[5] == cVar37);
        auVar30[6] = -(pcVar17[6] == cVar38);
        auVar30[7] = -(pcVar17[7] == cVar39);
        auVar30[8] = -(pcVar17[8] == (char)iVar8);
        auVar30[9] = -(pcVar17[9] == cVar40);
        auVar30[10] = -(pcVar17[10] == cVar41);
        auVar30[0xb] = -(pcVar17[0xb] == cVar42);
        auVar30[0xc] = -(pcVar17[0xc] == (char)iVar9);
        auVar30[0xd] = -(pcVar17[0xd] == cVar43);
        auVar30[0xe] = -(pcVar17[0xe] == cVar44);
        auVar30[0xf] = -(pcVar17[0xf] == cVar45);
        if ((((((((((((((((SUB161(auVar30 >> 7,0) & 1) != 0 || (SUB161(auVar30 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar30 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar30 >> 0x1f,0) & 1) != 0) || (SUB161(auVar30 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar30 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar30 >> 0x37,0) & 1) != 0) || (SUB161(auVar30 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar30 >> 0x47,0) & 1) != 0) || (SUB161(auVar30 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar30 >> 0x57,0) & 1) != 0) || (SUB161(auVar30 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar30 >> 0x67,0) & 1) != 0) || (SUB161(auVar30 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar30 >> 0x77,0) & 1) != 0) || auVar30[0xf] < '\0') break;
        uVar10 = uVar10 + lVar18 + 0x10;
        lVar18 = lVar18 + 0x10;
      }
      lVar12 = 0;
LAB_1414f56b2:
      puStack_e8 = (undefined8 *)(lVar12 + -0x30);
      if (lVar12 == 0) {
        puStack_e8 = (undefined8 *)0x0;
      }
    }
    lStack_150 = lStack_f8;
    puVar11 = (undefined8 *)pdb_14149ba00(*puVar22,&UNK_14330e760);
    if ((puVar11 == (undefined8 *)0x0) ||
       (lVar12 = (**(code **)(puVar11[1] + 0x18))(*puVar11), lVar12 == 0)) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_143317a78);
    }
    uStack_d1 = 0;
    plVar2 = (longlong *)*plVar24;
    if (plVar2[3] != 0) {
      uVar13 = pdb_1400af0a0(plVar2 + 4,&lStack_150);
      lVar18 = *plVar2;
      bVar28 = (byte)(uVar13 >> 0x39);
      auVar29 = ZEXT216(CONCAT11(bVar28,bVar28));
      auVar29 = pshuflw(auVar29,auVar29,0);
      lVar21 = 0;
      while( true ) {
        uVar13 = uVar13 & plVar2[1];
        auVar32 = *(undefined1 (*) [16])(lVar18 + uVar13);
        auVar33[0] = -(auVar32[0] == auVar29[0]);
        auVar33[1] = -(auVar32[1] == auVar29[1]);
        auVar33[2] = -(auVar32[2] == auVar29[2]);
        auVar33[3] = -(auVar32[3] == auVar29[3]);
        auVar33[4] = -(auVar32[4] == auVar29[4]);
        auVar33[5] = -(auVar32[5] == auVar29[5]);
        auVar33[6] = -(auVar32[6] == auVar29[6]);
        auVar33[7] = -(auVar32[7] == auVar29[7]);
        auVar33[8] = -(auVar32[8] == auVar29[0]);
        auVar33[9] = -(auVar32[9] == auVar29[1]);
        auVar33[10] = -(auVar32[10] == auVar29[2]);
        auVar33[0xb] = -(auVar32[0xb] == auVar29[3]);
        auVar33[0xc] = -(auVar32[0xc] == auVar29[4]);
        auVar33[0xd] = -(auVar32[0xd] == auVar29[5]);
        auVar33[0xe] = -(auVar32[0xe] == auVar29[6]);
        auVar33[0xf] = -(auVar32[0xf] == auVar29[7]);
        uVar20 = (ushort)(SUB161(auVar33 >> 7,0) & 1) | (ushort)(SUB161(auVar33 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar33 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar33 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar33 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar33 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar33 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar33 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar33 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar33 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar33 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar33 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar33 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar33 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar33 >> 0x77,0) & 1) << 0xe | (ushort)(auVar33[0xf] >> 7) << 0xf
        ;
        uVar16 = (uint)uVar20;
        while (uVar20 != 0) {
          uVar4 = 0;
          for (uVar5 = uVar16; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
            uVar4 = uVar4 + 1;
          }
          lVar19 = (uVar4 + uVar13 & plVar2[1]) * -0x2b0;
          if (lStack_f8 == *(longlong *)(lVar18 + -0x2b0 + lVar19)) {
            lVar18 = lVar18 + lVar19;
            lVar21 = *(longlong *)(lVar18 + -0x138);
            if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc8150(&UNK_143310ca8);
            }
            LOCK();
            bVar27 = *(char *)(lVar21 + 0x18) == '\0';
            if (bVar27) {
              *(char *)(lVar21 + 0x18) = '\x01';
            }
            UNLOCK();
            lStack_100 = lVar18;
            if (!bVar27) {
              pdb_142dbd1a0(lVar21 + 0x18,auVar32._0_8_,1000000000);
            }
            pdb_140e9a150(lVar21 + 0x18);
            if ((*(longlong *)(lVar21 + 0x10) == 0) ||
               (piVar14 = (int *)(*(longlong *)(lVar21 + 8) + *(longlong *)(lVar21 + 0x10) * 4 + -4)
               , piVar14 == (int *)0x0)) {
              lVar18 = *(longlong *)(lVar12 + 0x10);
              if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                pdb_142dc8150(&UNK_143310cc0);
              }
              iStack_170 = (int)lVar18 + -1;
            }
            else {
              iStack_170 = *piVar14;
              lVar18 = *(longlong *)(lVar12 + 0x10);
            }
            uStack_1c8 = *(undefined8 *)(lVar12 + 8);
            uStack_1b8 = *(undefined8 *)(lVar12 + 0x18);
            uStack_1b0 = *(undefined8 *)(lVar12 + 0x20);
            uStack_1a0 = *(undefined8 *)(lVar12 + 0x28);
            uStack_198 = *(undefined8 *)(lVar12 + 0x30);
            lStack_190 = lVar12 + 0x78;
            lStack_188 = lVar12 + 0x58;
            uStack_180 = *(undefined8 *)(lVar12 + 0x38);
            uStack_178 = *(undefined8 *)(lVar12 + 0x40);
            lStack_1c0 = lVar18;
            lStack_1a8 = lVar21;
            lStack_128 = lVar15;
            pdb_1414ab470(&uStack_1c8);
            if (puStack_e8 != (undefined8 *)0x0) {
              pauVar23 = (undefined1 (*) [16])*puStack_e8;
              auVar29 = *pauVar23;
              uVar16 = ~(uint)(ushort)((ushort)(SUB161(auVar29 >> 7,0) & 1) |
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
                                      (ushort)(byte)(auVar29[0xf] >> 7) << 0xf);
              lStack_140 = lStack_100 + -9;
              if (puStack_e8[3] != 0) {
                pauVar25 = pauVar23;
                if ((short)uVar16 == 0) {
                  do {
                    auVar29 = pauVar25[1];
                    pauVar23 = pauVar23 + -0x20;
                    uVar16 = (ushort)((ushort)(SUB161(auVar29 >> 7,0) & 1) |
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
                                     (ushort)(byte)(auVar29[0xf] >> 7) << 0xf) ^ 0xffff;
                    pauVar25 = pauVar25 + 1;
                  } while (uVar16 == 0);
                }
                iVar6 = 0;
                for (; (uVar16 & 1) == 0; uVar16 = uVar16 >> 1 | 0x80000000) {
                  iVar6 = iVar6 + 1;
                }
                    /* WARNING: Could not recover jumptable at 0x0001414f59b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*(code *)(&UNK_143317bd0 +
                          *(int *)(&UNK_143317bd0 +
                                  *(longlong *)
                                   ((longlong)pauVar23 + (-0x18 - (ulonglong)(uint)(iVar6 << 5))) *
                                  4)))
                          (&UNK_143317bd0 +
                           *(int *)(&UNK_143317bd0 +
                                   *(longlong *)
                                    ((longlong)pauVar23 + (-0x18 - (ulonglong)(uint)(iVar6 << 5))) *
                                   4));
                return;
              }
            }
            pcVar17 = (char *)(lStack_1a8 + 0x18);
            pdb_140e9a350();
            plVar24 = plStack_110;
            puVar22 = puStack_118;
            lVar15 = lStack_128;
            LOCK();
            cVar1 = *pcVar17;
            if (cVar1 == '\x01') {
              *pcVar17 = '\0';
            }
            UNLOCK();
            if (cVar1 != '\x01') {
              pdb_142dbcef0(pcVar17,0);
            }
            goto LAB_1414f5a70;
          }
          uVar20 = (ushort)(uVar16 - 1) & (ushort)uVar16;
          uVar16 = CONCAT22((short)(uVar16 - 1 >> 0x10),uVar20);
        }
        auVar31[0] = -(auVar32[0] == (char)iVar6);
        auVar31[1] = -(auVar32[1] == cVar34);
        auVar31[2] = -(auVar32[2] == cVar35);
        auVar31[3] = -(auVar32[3] == cVar36);
        auVar31[4] = -(auVar32[4] == (char)iVar7);
        auVar31[5] = -(auVar32[5] == cVar37);
        auVar31[6] = -(auVar32[6] == cVar38);
        auVar31[7] = -(auVar32[7] == cVar39);
        auVar31[8] = -(auVar32[8] == (char)iVar8);
        auVar31[9] = -(auVar32[9] == cVar40);
        auVar31[10] = -(auVar32[10] == cVar41);
        auVar31[0xb] = -(auVar32[0xb] == cVar42);
        auVar31[0xc] = -(auVar32[0xc] == (char)iVar9);
        auVar31[0xd] = -(auVar32[0xd] == cVar43);
        auVar31[0xe] = -(auVar32[0xe] == cVar44);
        auVar31[0xf] = -(auVar32[0xf] == cVar45);
        if ((((((((((((((((SUB161(auVar31 >> 7,0) & 1) != 0 || (SUB161(auVar31 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar31 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar31 >> 0x1f,0) & 1) != 0) || (SUB161(auVar31 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar31 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar31 >> 0x37,0) & 1) != 0) || (SUB161(auVar31 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar31 >> 0x47,0) & 1) != 0) || (SUB161(auVar31 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar31 >> 0x57,0) & 1) != 0) || (SUB161(auVar31 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar31 >> 0x67,0) & 1) != 0) || (SUB161(auVar31 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar31 >> 0x77,0) & 1) != 0) || auVar31[0xf] < '\0') break;
        uVar13 = uVar13 + lVar21 + 0x10;
        lVar21 = lVar21 + 0x10;
      }
    }
LAB_1414f5a70:
    uVar16 = (uint)uStack_130 - 1 & (uint)uStack_130;
    lVar15 = lVar15 + -1;
    if (puStack_e8 != (undefined8 *)0x0) {
      pdb_1414b7310(puStack_e8,&uStack_d2);
    }
  } while( true );
}

