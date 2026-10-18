// VA 0x1414f46c0, PDB extent 3510 bytes
// system_decorator::decorator_visual::deco_differential_state::WallAttachedDecoTracker::with_diffs<system_decorator::decorator_visual::chimney_assemble_bricks::ChimneyAssemblyParams,system_decorator::decorator_visual::chimney_assemble_bricks::chimney_assemble_bricks::closure_env$0>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/deco_differential_state.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_decorator::decorator_visual::deco_differential_state::WallAttachedDecoTracker::with_diffs<system_decorator::decorator_visual::chimney_assemble_bricks::ChimneyAssemblyParams,system_decorator::decorator_visual::chimney_assemble_bricks::chimney_assemble_bricks::closure_env$0>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/deco_differential_state.rs
   Extent: 3510 */

void pdb_1414f46c0(longlong *param_1,undefined8 *param_2)

{
  char cVar1;
  ulonglong uVar2;
  longlong *plVar3;
  uint uVar4;
  float fVar5;
  undefined1 (*pauVar6) [16];
  ulonglong uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  int *piVar10;
  int *piVar11;
  uint uVar12;
  int iVar13;
  undefined1 (*pauVar14) [16];
  char *pcVar15;
  longlong lVar16;
  ushort uVar17;
  longlong lVar18;
  longlong lVar19;
  uint uVar20;
  undefined8 uVar21;
  uint uVar22;
  bool bVar23;
  byte bVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined8 uStack_218;
  longlong lStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  longlong lStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  longlong lStack_1e0;
  longlong lStack_1d8;
  undefined1 auStack_1d0 [16];
  int iStack_1c0;
  longlong lStack_1b8;
  longlong lStack_1b0;
  undefined8 *puStack_1a8;
  longlong *plStack_1a0;
  longlong *plStack_198;
  undefined8 uStack_190;
  longlong lStack_188;
  longlong *plStack_180;
  longlong lStack_178;
  ulonglong uStack_170;
  longlong *plStack_168;
  undefined1 (*pauStack_160) [16];
  undefined8 uStack_158;
  longlong *plStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined4 uStack_138;
  uint uStack_134;
  undefined8 uStack_130;
  undefined1 (*pauStack_128) [16];
  undefined1 (*pauStack_120) [16];
  undefined8 *puStack_118;
  longlong *plStack_110;
  undefined1 uStack_101;
  longlong lStack_100;
  undefined1 uStack_f1;
  undefined8 uStack_f0;
  
  lVar9 = _UNK_143310fd8;
  uStack_f0 = 0xfffffffffffffffe;
  pauStack_160 = (undefined1 (*) [16])param_1[6];
  uStack_170 = param_1[7];
  auVar25 = *pauStack_160;
  pauVar6 = pauStack_160 + 1;
  lStack_178 = param_1[9];
  param_1[8] = _DAT_143310fd0;
  param_1[9] = lVar9;
  lVar9 = _UNK_143310fc8;
  param_1[6] = _DAT_143310fc0;
  param_1[7] = lVar9;
  fVar5 = _DAT_142e36f50;
  uVar22 = ~(uint)(ushort)((ushort)(SUB161(auVar25 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar25 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar25 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar25 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar25 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar25 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar25 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auVar25 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auVar25 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(auVar25 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auVar25 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auVar25 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(auVar25 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar25 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar25 >> 0x77,0) & 1) << 0xe |
                          (ushort)(byte)(auVar25[0xf] >> 7) << 0xf);
  puStack_1a8 = (undefined8 *)*param_2;
  plStack_1a0 = (longlong *)param_2[1];
  plStack_180 = (longlong *)param_2[2];
  plStack_168 = (longlong *)param_2[3];
  uStack_190 = param_2[4];
  plStack_198 = param_1 + 4;
  pauStack_120 = pauStack_160;
  plStack_110 = param_1;
LAB_1414f47d0:
  do {
    plVar3 = plStack_110;
    pauVar14 = pauStack_120;
    uVar2 = uStack_170;
    pauStack_128 = pauVar6;
    if (lStack_178 == 0) {
      if (uStack_170 == 0) {
        uVar7 = 0;
      }
      else {
        pub_142e32780(pauStack_120,0xff,uStack_170 + 0x11);
        uVar7 = (uVar2 + 1 & 0xfffffffffffffff8) - (uVar2 + 1 >> 3);
        if (uVar2 < 8) {
          uVar7 = uVar2;
        }
      }
      plStack_110[6] = (longlong)pauVar14;
      plStack_110[7] = uVar2;
      plStack_110[8] = uVar7;
      plStack_110[9] = 0;
      return;
    }
    if ((short)uVar22 == 0) {
      do {
        auVar25 = *pauVar6;
        pauStack_160 = pauStack_160 + -8;
        pauVar6 = pauVar6 + 1;
        uVar22 = (ushort)((ushort)(SUB161(auVar25 >> 7,0) & 1) |
                          (ushort)(SUB161(auVar25 >> 0xf,0) & 1) << 1 |
                          (ushort)(SUB161(auVar25 >> 0x17,0) & 1) << 2 |
                          (ushort)(SUB161(auVar25 >> 0x1f,0) & 1) << 3 |
                          (ushort)(SUB161(auVar25 >> 0x27,0) & 1) << 4 |
                          (ushort)(SUB161(auVar25 >> 0x2f,0) & 1) << 5 |
                          (ushort)(SUB161(auVar25 >> 0x37,0) & 1) << 6 |
                          (ushort)(SUB161(auVar25 >> 0x3f,0) & 1) << 7 |
                          (ushort)(SUB161(auVar25 >> 0x47,0) & 1) << 8 |
                          (ushort)(SUB161(auVar25 >> 0x4f,0) & 1) << 9 |
                          (ushort)(SUB161(auVar25 >> 0x57,0) & 1) << 10 |
                          (ushort)(SUB161(auVar25 >> 0x5f,0) & 1) << 0xb |
                          (ushort)(SUB161(auVar25 >> 0x67,0) & 1) << 0xc |
                          (ushort)(SUB161(auVar25 >> 0x6f,0) & 1) << 0xd |
                          (ushort)(SUB161(auVar25 >> 0x77,0) & 1) << 0xe |
                         (ushort)(byte)(auVar25[0xf] >> 7) << 0xf) ^ 0xffff;
        pauStack_128 = pauVar6;
      } while (uVar22 == 0);
    }
    iVar13 = 0;
    for (uVar20 = uVar22; (uVar20 & 1) == 0; uVar20 = uVar20 >> 1 | 0x80000000) {
      iVar13 = iVar13 + 1;
    }
    lStack_1b0 = *(longlong *)((longlong)pauStack_160 + (-8 - (ulonglong)(uint)(iVar13 << 3)));
    lStack_100 = lStack_1b0;
    if (plStack_110[3] == 0) {
      puStack_118 = (undefined8 *)0x0;
    }
    else {
      uVar7 = pdb_1400af0a0(plStack_198,&lStack_1b0);
      lVar9 = *plVar3;
      uVar2 = plVar3[1];
      bVar24 = (byte)(uVar7 >> 0x39);
      auVar25 = ZEXT216(CONCAT11(bVar24,bVar24));
      auVar25 = pshuflw(auVar25,auVar25,0);
      lVar16 = 0;
      while( true ) {
        uVar7 = uVar7 & uVar2;
        pcVar15 = (char *)(lVar9 + uVar7);
        auVar28[0] = -(*pcVar15 == auVar25[0]);
        auVar28[1] = -(pcVar15[1] == auVar25[1]);
        auVar28[2] = -(pcVar15[2] == auVar25[2]);
        auVar28[3] = -(pcVar15[3] == auVar25[3]);
        auVar28[4] = -(pcVar15[4] == auVar25[4]);
        auVar28[5] = -(pcVar15[5] == auVar25[5]);
        auVar28[6] = -(pcVar15[6] == auVar25[6]);
        auVar28[7] = -(pcVar15[7] == auVar25[7]);
        auVar28[8] = -(pcVar15[8] == auVar25[0]);
        auVar28[9] = -(pcVar15[9] == auVar25[1]);
        auVar28[10] = -(pcVar15[10] == auVar25[2]);
        auVar28[0xb] = -(pcVar15[0xb] == auVar25[3]);
        auVar28[0xc] = -(pcVar15[0xc] == auVar25[4]);
        auVar28[0xd] = -(pcVar15[0xd] == auVar25[5]);
        auVar28[0xe] = -(pcVar15[0xe] == auVar25[6]);
        auVar28[0xf] = -(pcVar15[0xf] == auVar25[7]);
        uVar17 = (ushort)(SUB161(auVar28 >> 7,0) & 1) | (ushort)(SUB161(auVar28 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar28 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar28 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar28 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar28 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar28 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar28 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar28 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar28 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar28 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar28 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar28 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar28 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar28 >> 0x77,0) & 1) << 0xe | (ushort)(auVar28[0xf] >> 7) << 0xf
        ;
        uVar20 = (uint)uVar17;
        while (uVar17 != 0) {
          uVar12 = 0;
          for (uVar4 = uVar20; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
            uVar12 = uVar12 + 1;
          }
          lVar18 = (uVar12 + uVar7 & uVar2) * -0x38;
          if (lStack_100 == *(longlong *)(lVar9 + -0x38 + lVar18)) {
            lVar9 = lVar9 + lVar18;
            goto LAB_1414f4932;
          }
          uVar17 = (ushort)(uVar20 - 1) & (ushort)uVar20;
          uVar20 = CONCAT22((short)(uVar20 - 1 >> 0x10),uVar17);
        }
        auVar26[0] = -(*pcVar15 == -1);
        auVar26[1] = -(pcVar15[1] == -1);
        auVar26[2] = -(pcVar15[2] == -1);
        auVar26[3] = -(pcVar15[3] == -1);
        auVar26[4] = -(pcVar15[4] == -1);
        auVar26[5] = -(pcVar15[5] == -1);
        auVar26[6] = -(pcVar15[6] == -1);
        auVar26[7] = -(pcVar15[7] == -1);
        auVar26[8] = -(pcVar15[8] == -1);
        auVar26[9] = -(pcVar15[9] == -1);
        auVar26[10] = -(pcVar15[10] == -1);
        auVar26[0xb] = -(pcVar15[0xb] == -1);
        auVar26[0xc] = -(pcVar15[0xc] == -1);
        auVar26[0xd] = -(pcVar15[0xd] == -1);
        auVar26[0xe] = -(pcVar15[0xe] == -1);
        auVar26[0xf] = -(pcVar15[0xf] == -1);
        if ((((((((((((((((SUB161(auVar26 >> 7,0) & 1) != 0 || (SUB161(auVar26 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar26 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar26 >> 0x1f,0) & 1) != 0) || (SUB161(auVar26 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar26 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar26 >> 0x37,0) & 1) != 0) || (SUB161(auVar26 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar26 >> 0x47,0) & 1) != 0) || (SUB161(auVar26 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar26 >> 0x57,0) & 1) != 0) || (SUB161(auVar26 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar26 >> 0x67,0) & 1) != 0) || (SUB161(auVar26 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar26 >> 0x77,0) & 1) != 0) || auVar26[0xf] < '\0') break;
        uVar7 = uVar7 + lVar16 + 0x10;
        lVar16 = lVar16 + 0x10;
      }
      lVar9 = 0;
LAB_1414f4932:
      puStack_118 = (undefined8 *)(lVar9 + -0x30);
      if (lVar9 == 0) {
        puStack_118 = (undefined8 *)0x0;
      }
    }
    lStack_1b8 = lStack_100;
    puVar8 = (undefined8 *)pdb_14149ba00(*puStack_1a8,&UNK_14330e760);
    if ((puVar8 == (undefined8 *)0x0) ||
       (lVar9 = (**(code **)(puVar8[1] + 0x18))(*puVar8), lVar9 == 0)) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_143317760);
    }
    uVar22 = uVar22 - 1 & uVar22;
    lStack_178 = lStack_178 + -1;
    uStack_f1 = 0;
    plVar3 = (longlong *)*plStack_1a0;
    if (plVar3[3] != 0) {
      uVar7 = pdb_1400af0a0(plVar3 + 4,&lStack_1b8);
      lVar16 = *plVar3;
      uVar2 = plVar3[1];
      bVar24 = (byte)(uVar7 >> 0x39);
      auVar25 = ZEXT216(CONCAT11(bVar24,bVar24));
      auVar25 = pshuflw(auVar25,auVar25,0);
      lVar18 = 0;
      while( true ) {
        uVar7 = uVar7 & uVar2;
        auVar28 = *(undefined1 (*) [16])(lVar16 + uVar7);
        auVar29[0] = -(auVar28[0] == auVar25[0]);
        auVar29[1] = -(auVar28[1] == auVar25[1]);
        auVar29[2] = -(auVar28[2] == auVar25[2]);
        auVar29[3] = -(auVar28[3] == auVar25[3]);
        auVar29[4] = -(auVar28[4] == auVar25[4]);
        auVar29[5] = -(auVar28[5] == auVar25[5]);
        auVar29[6] = -(auVar28[6] == auVar25[6]);
        auVar29[7] = -(auVar28[7] == auVar25[7]);
        auVar29[8] = -(auVar28[8] == auVar25[0]);
        auVar29[9] = -(auVar28[9] == auVar25[1]);
        auVar29[10] = -(auVar28[10] == auVar25[2]);
        auVar29[0xb] = -(auVar28[0xb] == auVar25[3]);
        auVar29[0xc] = -(auVar28[0xc] == auVar25[4]);
        auVar29[0xd] = -(auVar28[0xd] == auVar25[5]);
        auVar29[0xe] = -(auVar28[0xe] == auVar25[6]);
        auVar29[0xf] = -(auVar28[0xf] == auVar25[7]);
        uVar17 = (ushort)(SUB161(auVar29 >> 7,0) & 1) | (ushort)(SUB161(auVar29 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar29 >> 0x17,0) & 1) << 2 |
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
                 (ushort)(SUB161(auVar29 >> 0x77,0) & 1) << 0xe | (ushort)(auVar29[0xf] >> 7) << 0xf
        ;
        uVar20 = (uint)uVar17;
        while (uVar17 != 0) {
          uVar12 = 0;
          for (uVar4 = uVar20; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
            uVar12 = uVar12 + 1;
          }
          lVar19 = (uVar12 + uVar7 & uVar2) * -0x2b0;
          if (lStack_100 == *(longlong *)(lVar16 + -0x2b0 + lVar19)) {
            lVar16 = *(longlong *)(lVar16 + lVar19 + -0x148);
            if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc8150(&UNK_143310ca8);
            }
            LOCK();
            bVar23 = *(char *)(lVar16 + 0x18) == '\0';
            if (bVar23) {
              *(char *)(lVar16 + 0x18) = '\x01';
            }
            UNLOCK();
            if (!bVar23) {
              pdb_142dbd1a0(lVar16 + 0x18,uVar2,1000000000);
            }
            pdb_140e9a150(lVar16 + 0x18);
            if ((*(longlong *)(lVar16 + 0x10) == 0) ||
               (piVar10 = (int *)(*(longlong *)(lVar16 + 8) + *(longlong *)(lVar16 + 0x10) * 4 + -4)
               , piVar10 == (int *)0x0)) {
              lVar18 = *(longlong *)(lVar9 + 0x10);
              if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                pdb_142dc8150(&UNK_143310cc0);
              }
              iStack_1c0 = (int)lVar18 + -1;
            }
            else {
              iStack_1c0 = *piVar10;
              lVar18 = *(longlong *)(lVar9 + 0x10);
            }
            uStack_218 = *(undefined8 *)(lVar9 + 8);
            uStack_208 = *(undefined8 *)(lVar9 + 0x18);
            uStack_200 = *(undefined8 *)(lVar9 + 0x20);
            uStack_1f0 = *(undefined8 *)(lVar9 + 0x28);
            uStack_1e8 = *(undefined8 *)(lVar9 + 0x30);
            lStack_1e0 = lVar9 + 0x78;
            lStack_1d8 = lVar9 + 0x58;
            auStack_1d0 = *(undefined1 (*) [16])(lVar9 + 0x38);
            lStack_210 = lVar18;
            lStack_1f8 = lVar16;
            pdb_1414ab470(&uStack_218);
            if (puStack_118 == (undefined8 *)0x0) goto LAB_1414f50fd;
            pauVar14 = (undefined1 (*) [16])*puStack_118;
            lStack_188 = puStack_118[3];
            auVar25 = *pauVar14;
            pauVar6 = pauVar14 + 1;
            uVar20 = ~(uint)(ushort)((ushort)(SUB161(auVar25 >> 7,0) & 1) |
                                     (ushort)(SUB161(auVar25 >> 0xf,0) & 1) << 1 |
                                     (ushort)(SUB161(auVar25 >> 0x17,0) & 1) << 2 |
                                     (ushort)(SUB161(auVar25 >> 0x1f,0) & 1) << 3 |
                                     (ushort)(SUB161(auVar25 >> 0x27,0) & 1) << 4 |
                                     (ushort)(SUB161(auVar25 >> 0x2f,0) & 1) << 5 |
                                     (ushort)(SUB161(auVar25 >> 0x37,0) & 1) << 6 |
                                     (ushort)(SUB161(auVar25 >> 0x3f,0) & 1) << 7 |
                                     (ushort)(SUB161(auVar25 >> 0x47,0) & 1) << 8 |
                                     (ushort)(SUB161(auVar25 >> 0x4f,0) & 1) << 9 |
                                     (ushort)(SUB161(auVar25 >> 0x57,0) & 1) << 10 |
                                     (ushort)(SUB161(auVar25 >> 0x5f,0) & 1) << 0xb |
                                     (ushort)(SUB161(auVar25 >> 0x67,0) & 1) << 0xc |
                                     (ushort)(SUB161(auVar25 >> 0x6f,0) & 1) << 0xd |
                                     (ushort)(SUB161(auVar25 >> 0x77,0) & 1) << 0xe |
                                    (ushort)(byte)(auVar25[0xf] >> 7) << 0xf);
            goto LAB_1414f4ba3;
          }
          uVar17 = (ushort)(uVar20 - 1) & (ushort)uVar20;
          uVar20 = CONCAT22((short)(uVar20 - 1 >> 0x10),uVar17);
        }
        auVar27[0] = -(auVar28[0] == -1);
        auVar27[1] = -(auVar28[1] == -1);
        auVar27[2] = -(auVar28[2] == -1);
        auVar27[3] = -(auVar28[3] == -1);
        auVar27[4] = -(auVar28[4] == -1);
        auVar27[5] = -(auVar28[5] == -1);
        auVar27[6] = -(auVar28[6] == -1);
        auVar27[7] = -(auVar28[7] == -1);
        auVar27[8] = -(auVar28[8] == -1);
        auVar27[9] = -(auVar28[9] == -1);
        auVar27[10] = -(auVar28[10] == -1);
        auVar27[0xb] = -(auVar28[0xb] == -1);
        auVar27[0xc] = -(auVar28[0xc] == -1);
        auVar27[0xd] = -(auVar28[0xd] == -1);
        auVar27[0xe] = -(auVar28[0xe] == -1);
        auVar27[0xf] = -(auVar28[0xf] == -1);
        if ((((((((((((((((SUB161(auVar27 >> 7,0) & 1) != 0 || (SUB161(auVar27 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar27 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar27 >> 0x1f,0) & 1) != 0) || (SUB161(auVar27 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar27 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar27 >> 0x37,0) & 1) != 0) || (SUB161(auVar27 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar27 >> 0x47,0) & 1) != 0) || (SUB161(auVar27 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar27 >> 0x57,0) & 1) != 0) || (SUB161(auVar27 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar27 >> 0x67,0) & 1) != 0) || (SUB161(auVar27 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar27 >> 0x77,0) & 1) != 0) || auVar27[0xf] < '\0') break;
        uVar7 = uVar7 + lVar18 + 0x10;
        lVar18 = lVar18 + 0x10;
      }
    }
    pauVar6 = pauStack_128;
    if (puStack_118 != (undefined8 *)0x0) {
      pdb_1414b74f0(puStack_118,&uStack_101);
    }
  } while( true );
LAB_1414f4ba3:
  if (lStack_188 != 0) {
    if ((short)uVar20 == 0) {
      do {
        auVar25 = *pauVar6;
        pauVar14 = pauVar14 + -0x20;
        pauVar6 = pauVar6 + 1;
        uVar20 = (ushort)((ushort)(SUB161(auVar25 >> 7,0) & 1) |
                          (ushort)(SUB161(auVar25 >> 0xf,0) & 1) << 1 |
                          (ushort)(SUB161(auVar25 >> 0x17,0) & 1) << 2 |
                          (ushort)(SUB161(auVar25 >> 0x1f,0) & 1) << 3 |
                          (ushort)(SUB161(auVar25 >> 0x27,0) & 1) << 4 |
                          (ushort)(SUB161(auVar25 >> 0x2f,0) & 1) << 5 |
                          (ushort)(SUB161(auVar25 >> 0x37,0) & 1) << 6 |
                          (ushort)(SUB161(auVar25 >> 0x3f,0) & 1) << 7 |
                          (ushort)(SUB161(auVar25 >> 0x47,0) & 1) << 8 |
                          (ushort)(SUB161(auVar25 >> 0x4f,0) & 1) << 9 |
                          (ushort)(SUB161(auVar25 >> 0x57,0) & 1) << 10 |
                          (ushort)(SUB161(auVar25 >> 0x5f,0) & 1) << 0xb |
                          (ushort)(SUB161(auVar25 >> 0x67,0) & 1) << 0xc |
                          (ushort)(SUB161(auVar25 >> 0x6f,0) & 1) << 0xd |
                          (ushort)(SUB161(auVar25 >> 0x77,0) & 1) << 0xe |
                         (ushort)(byte)(auVar25[0xf] >> 7) << 0xf) ^ 0xffff;
      } while (uVar20 == 0);
    }
    iVar13 = 0;
    for (uVar12 = uVar20; (uVar12 & 1) == 0; uVar12 = uVar12 >> 1 | 0x80000000) {
      iVar13 = iVar13 + 1;
    }
    uVar20 = uVar20 - 1 & uVar20;
    uVar12 = iVar13 << 5;
    lStack_188 = lStack_188 + -1;
    uVar2 = *(ulonglong *)((longlong)pauVar14 + (-0x18 - (ulonglong)uVar12));
    if ((uVar2 < 4) && (uVar2 != 2)) {
      uStack_130 = pdb_140dedfe0(*(undefined4 *)((longlong)pauVar14 + (-0x20 - (ulonglong)uVar12)));
      piVar10 = *(int **)((longlong)pauVar14 + (-0x10 - (ulonglong)uVar12));
      pdb_1424f0b60(piVar10[2]);
      if (*piVar10 == 0) {
        lVar9 = *plStack_180;
        uStack_158 = *(undefined8 *)(lVar9 + 8);
        plStack_150 = (longlong *)(*(longlong *)(lVar9 + 0x10) * 2);
        uStack_148 = *(undefined8 *)(lVar9 + 0x50);
        pdb_1402202d0(&uStack_158,
                      (float)piVar10[2] + (float)piVar10[6] * _DAT_142f6e3f0 * fVar5 +
                      (float)piVar10[7] * _DAT_142e36f38,
                      (float)piVar10[3] + (float)piVar10[7] * _DAT_142f6e3f0 * fVar5 +
                      (float)piVar10[6] * fVar5);
        lVar9 = *plStack_180;
        uStack_158 = *(undefined8 *)(lVar9 + 8);
        plStack_150 = (longlong *)(*(longlong *)(lVar9 + 0x10) * 2);
        uStack_148 = *(undefined8 *)(lVar9 + 0x50);
        pdb_1402202d0(&uStack_158);
        pdb_1424f0b60(piVar10[2]);
      }
      else if (*piVar10 == 1) {
        pdb_1424f0b60(piVar10[2]);
      }
      else if (_DAT_142e3b1d8 < (float)piVar10[1]) {
        pdb_1424f0b60(piVar10[2]);
      }
      piVar11 = piVar10;
      if (uVar2 == 0) {
LAB_1414f4fd1:
        bVar23 = *piVar11 == 0;
        iVar13 = *piVar10;
        if (!bVar23) goto LAB_1414f4ffe;
LAB_1414f5060:
        if (!(bool)(bVar23 & iVar13 != 0)) goto LAB_1414f4ba3;
        pdb_140df4540(&uStack_140,piVar10 + 2);
        uStack_158 = 0x1d;
        uStack_134 = uStack_134 & 0xffffff00;
        *(undefined4 *)plStack_168[2] = *(undefined4 *)((longlong)plStack_168 + 0x1c);
        lVar9 = *plStack_168;
        lVar16 = *(longlong *)(lVar9 + 0x30);
        uVar21 = *(undefined8 *)(lVar9 + 0x40);
        if (lVar16 == *(longlong *)(lVar9 + 0x20)) {
          pdb_142d7e7c0(lVar9 + 0x20);
        }
      }
      else {
        if ((int)uVar2 == 3) {
          piVar11 = *(int **)((longlong)pauVar14 + (-8 - (ulonglong)uVar12));
          goto LAB_1414f4fd1;
        }
        bVar23 = false;
        iVar13 = *piVar10;
LAB_1414f4ffe:
        if (iVar13 != 0) goto LAB_1414f5060;
        pdb_140df4540(&uStack_140,piVar10 + 2);
        uStack_158 = 0x1c;
        uStack_134 = uStack_134 & 0xffffff00;
        *(undefined4 *)plStack_168[2] = *(undefined4 *)((longlong)plStack_168 + 0x1c);
        lVar9 = *plStack_168;
        lVar16 = *(longlong *)(lVar9 + 0x30);
        uVar21 = *(undefined8 *)(lVar9 + 0x40);
        if (lVar16 == *(longlong *)(lVar9 + 0x20)) {
          pdb_142d7e7c0(lVar9 + 0x20);
        }
      }
      lVar18 = *(longlong *)(lVar9 + 0x28);
      lVar19 = lVar16 * 0x30;
      *(ulonglong *)(lVar18 + 0x20 + lVar19) = CONCAT44(uStack_134,uStack_138);
      auVar25._8_8_ = plStack_150;
      auVar25._0_8_ = uStack_158;
      puVar8 = (undefined8 *)(lVar18 + 0x10 + lVar19);
      *puVar8 = uStack_148;
      puVar8[1] = uStack_140;
      *(undefined1 (*) [16])(lVar18 + lVar19) = auVar25;
      *(undefined8 *)(lVar18 + 0x28 + lVar19) = uVar21;
      *(longlong *)(lVar9 + 0x30) = lVar16 + 1;
      *(longlong *)(lVar9 + 0x40) = *(longlong *)(lVar9 + 0x40) + 1;
    }
    goto LAB_1414f4ba3;
  }
  uStack_158 = uStack_190;
  plStack_150 = plStack_168;
  pdb_1414b6890(puStack_118,&uStack_158);
LAB_1414f50fd:
  pcVar15 = (char *)(lStack_1f8 + 0x18);
  pdb_140e9a350();
  pauVar6 = pauStack_128;
  LOCK();
  cVar1 = *pcVar15;
  if (cVar1 == '\x01') {
    *pcVar15 = '\0';
  }
  UNLOCK();
  if (cVar1 != '\x01') {
    pdb_142dbcef0(pcVar15,0);
  }
  goto LAB_1414f47d0;
}

