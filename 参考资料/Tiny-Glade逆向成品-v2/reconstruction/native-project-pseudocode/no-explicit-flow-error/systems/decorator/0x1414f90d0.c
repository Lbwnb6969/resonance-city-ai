// VA 0x1414f90d0, PDB extent 2134 bytes
// system_decorator::cull_oob_decorators::cull_stair_attached_decorators_impl<system_decorator::cull_oob_decorators::cull_steep_stair_banners::closure_env$2>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/cull_oob_decorators.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_decorator::cull_oob_decorators::cull_stair_attached_decorators_impl<system_decorator::cull_oob_decorators::cull_steep_stair_banners::closure_env$2>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/cull_oob_decorators.rs
   Extent: 2134 */

void pdb_1414f90d0(longlong *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,longlong *param_6,undefined8 param_7,undefined8 *param_8)

{
  undefined1 auVar1 [16];
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  char cVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  uint uVar13;
  longlong lVar14;
  undefined1 (*pauVar15) [16];
  short sVar16;
  ushort uVar17;
  undefined1 (*pauVar18) [16];
  undefined1 (*pauVar19) [16];
  uint uVar20;
  uint uVar21;
  longlong lVar22;
  byte bVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  longlong *plStack_1f8;
  longlong lStack_1f0;
  undefined1 (*pauStack_1e8) [16];
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  ushort uStack_1d0;
  longlong lStack_1c8;
  longlong lStack_1c0;
  undefined1 (*pauStack_1b8) [16];
  ushort uStack_1a8;
  longlong lStack_1a0;
  undefined1 (*pauStack_168) [16];
  longlong lStack_160;
  undefined8 uStack_158;
  longlong lStack_150;
  longlong lStack_148;
  undefined8 *puStack_140;
  undefined8 uStack_130;
  undefined4 uStack_128;
  undefined8 uStack_120;
  undefined8 *puStack_118;
  undefined8 *puStack_110;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 *puStack_f8;
  byte *pbStack_f0;
  undefined8 uStack_e8;
  longlong *plStack_e0;
  undefined4 *puStack_d8;
  longlong *plStack_d0;
  ulonglong uStack_c8;
  undefined1 auStack_c0 [8];
  undefined4 uStack_b8;
  byte bStack_b4;
  undefined4 *puStack_b0;
  ulonglong uStack_a8;
  longlong lStack_a0;
  ulonglong uStack_98;
  undefined4 *puStack_90;
  longlong lStack_88;
  longlong lStack_80;
  undefined1 uStack_71;
  undefined8 uStack_70;
  
  uStack_70 = 0xfffffffffffffffe;
  puStack_110 = param_2;
  puStack_f8 = param_4;
  plVar10 = (longlong *)pdb_140f3bda0();
  if ((char)plVar10[2] == '\x01') {
    lStack_148 = *plVar10;
    param_2 = (undefined8 *)plVar10[1];
  }
  else {
    lStack_148 = pdb_140f4fd10();
    *plVar10 = lStack_148;
    plVar10[1] = (longlong)param_2;
    *(undefined1 *)(plVar10 + 2) = 1;
  }
  *plVar10 = lStack_148 + 1;
  uStack_158 = _DAT_143317e00;
  lStack_150 = _UNK_143317e08;
  pauStack_168 = _DAT_143317df0;
  lStack_160 = _UNK_143317df8;
  uStack_120 = *param_3;
  uStack_71 = 1;
  puStack_140 = param_2;
  puStack_118 = param_3;
  pdb_140c3ffd0(&plStack_1f8);
  uVar6 = _DAT_143317cf0;
  plStack_e0 = plStack_1f8;
  puStack_90 = (undefined4 *)lStack_1f0;
  pauVar18 = (undefined1 (*) [16])CONCAT44(uStack_1dc,uStack_1e0);
  uVar20 = (uint)uStack_1d0;
  lStack_a0 = *param_8;
  puStack_d8 = (undefined4 *)param_1[3];
  plStack_d0 = param_1 + 4;
  puStack_b0 = (undefined4 *)*param_1;
  uStack_a8 = param_1[1];
  lStack_80 = lStack_1c8;
  uVar21 = (uint)uStack_1a8;
  lStack_88 = lStack_1a0;
  uStack_e8 = *puStack_f8;
  lVar14 = lStack_1c0;
  pauVar15 = pauStack_1e8;
  pauVar19 = pauStack_1b8;
LAB_1414f9330:
  if (((ulonglong)plStack_e0 & 1) == 0) {
    if (pauVar15 != (undefined1 (*) [16])0x0) {
      if (lStack_80 != 0) goto LAB_1414f938f;
      lStack_80 = 0;
    }
joined_r0x0001414f93ef:
    if (lVar14 == 0) goto LAB_1414f9551;
LAB_1414f9480:
    if (lStack_88 == 0) goto LAB_1414f9551;
    if ((short)uVar21 == 0) {
      do {
        auVar24 = *pauVar19;
        lVar14 = lVar14 + -0x680;
        pauVar19 = pauVar19 + 1;
        uVar21 = (ushort)((ushort)(SUB161(auVar24 >> 7,0) & 1) |
                          (ushort)(SUB161(auVar24 >> 0xf,0) & 1) << 1 |
                          (ushort)(SUB161(auVar24 >> 0x17,0) & 1) << 2 |
                          (ushort)(SUB161(auVar24 >> 0x1f,0) & 1) << 3 |
                          (ushort)(SUB161(auVar24 >> 0x27,0) & 1) << 4 |
                          (ushort)(SUB161(auVar24 >> 0x2f,0) & 1) << 5 |
                          (ushort)(SUB161(auVar24 >> 0x37,0) & 1) << 6 |
                          (ushort)(SUB161(auVar24 >> 0x3f,0) & 1) << 7 |
                          (ushort)(SUB161(auVar24 >> 0x47,0) & 1) << 8 |
                          (ushort)(SUB161(auVar24 >> 0x4f,0) & 1) << 9 |
                          (ushort)(SUB161(auVar24 >> 0x57,0) & 1) << 10 |
                          (ushort)(SUB161(auVar24 >> 0x5f,0) & 1) << 0xb |
                          (ushort)(SUB161(auVar24 >> 0x67,0) & 1) << 0xc |
                          (ushort)(SUB161(auVar24 >> 0x6f,0) & 1) << 0xd |
                          (ushort)(SUB161(auVar24 >> 0x77,0) & 1) << 0xe |
                         (ushort)(byte)(auVar24[0xf] >> 7) << 0xf) ^ 0xffff;
      } while (uVar21 == 0);
    }
    uVar13 = 0;
    for (uVar5 = uVar21; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
      uVar13 = uVar13 + 1;
    }
    uVar21 = uVar21 - 1 & uVar21;
    lVar22 = (ulonglong)uVar13 * -0x68 + lVar14;
    lStack_88 = lStack_88 + -1;
    pauVar15 = (undefined1 (*) [16])0x0;
  }
  else {
    if (pauVar15 == (undefined1 (*) [16])0x0) {
LAB_1414f9353:
      if (puStack_90 == (undefined4 *)0x0) {
        puStack_90 = (undefined4 *)0x0;
        if (lVar14 != 0) goto LAB_1414f9480;
        goto LAB_1414f9551;
      }
      pauVar15 = *(undefined1 (**) [16])((longlong)puStack_90 + 0x30);
      lStack_80 = *(longlong *)((longlong)puStack_90 + 0x48);
      auVar24 = *pauVar15;
      pauVar18 = pauVar15 + 1;
      uVar20 = ~(uint)(ushort)((ushort)(SUB161(auVar24 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar24 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar24 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar24 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar24 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar24 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar24 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar24 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar24 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar24 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar24 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar24 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar24 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar24 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar24 >> 0x77,0) & 1) << 0xe |
                              (ushort)(byte)(auVar24[0xf] >> 7) << 0xf);
      if (lStack_80 == 0) {
        lStack_80 = 0;
        puStack_90 = (undefined4 *)0x0;
        goto joined_r0x0001414f93ef;
      }
      puStack_90 = (undefined4 *)0x0;
      sVar16 = (short)uVar20;
    }
    else {
      if (lStack_80 == 0) {
        lStack_80 = 0;
        goto LAB_1414f9353;
      }
LAB_1414f938f:
      sVar16 = (short)uVar20;
    }
    if (sVar16 == 0) {
      do {
        auVar24 = *pauVar18;
        pauVar15 = pauVar15 + -0x68;
        pauVar18 = pauVar18 + 1;
        uVar20 = (ushort)((ushort)(SUB161(auVar24 >> 7,0) & 1) |
                          (ushort)(SUB161(auVar24 >> 0xf,0) & 1) << 1 |
                          (ushort)(SUB161(auVar24 >> 0x17,0) & 1) << 2 |
                          (ushort)(SUB161(auVar24 >> 0x1f,0) & 1) << 3 |
                          (ushort)(SUB161(auVar24 >> 0x27,0) & 1) << 4 |
                          (ushort)(SUB161(auVar24 >> 0x2f,0) & 1) << 5 |
                          (ushort)(SUB161(auVar24 >> 0x37,0) & 1) << 6 |
                          (ushort)(SUB161(auVar24 >> 0x3f,0) & 1) << 7 |
                          (ushort)(SUB161(auVar24 >> 0x47,0) & 1) << 8 |
                          (ushort)(SUB161(auVar24 >> 0x4f,0) & 1) << 9 |
                          (ushort)(SUB161(auVar24 >> 0x57,0) & 1) << 10 |
                          (ushort)(SUB161(auVar24 >> 0x5f,0) & 1) << 0xb |
                          (ushort)(SUB161(auVar24 >> 0x67,0) & 1) << 0xc |
                          (ushort)(SUB161(auVar24 >> 0x6f,0) & 1) << 0xd |
                          (ushort)(SUB161(auVar24 >> 0x77,0) & 1) << 0xe |
                         (ushort)(byte)(auVar24[0xf] >> 7) << 0xf) ^ 0xffff;
      } while (uVar20 == 0);
    }
    uVar13 = 0;
    for (uVar5 = uVar20; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
      uVar13 = uVar13 + 1;
    }
    uVar20 = uVar20 - 1 & uVar20;
    lVar22 = (ulonglong)uVar13 * -0x68 + (longlong)pauVar15;
    lStack_80 = lStack_80 + -1;
  }
  iVar2 = *(int *)(lVar22 + -0x68);
  uStack_71 = 1;
  cVar9 = pdb_140c42080(uStack_e8,iVar2);
  if (cVar9 != '\0') {
    plStack_1f8 = (longlong *)CONCAT44(plStack_1f8._4_4_,iVar2);
    if (puStack_d8 != (undefined4 *)0x0) {
      uStack_71 = 1;
      uVar12 = pdb_1400aede0(plStack_d0,&plStack_1f8);
      bVar23 = (byte)(uVar12 >> 0x39);
      auVar24 = ZEXT216(CONCAT11(bVar23,bVar23));
      auVar24 = pshuflw(auVar24,auVar24,0);
      lVar22 = 0;
      while( true ) {
        uVar12 = uVar12 & uStack_a8;
        auVar1 = *(undefined1 (*) [16])((longlong)puStack_b0 + uVar12);
        auVar26[0] = -(auVar1[0] == auVar24[0]);
        auVar26[1] = -(auVar1[1] == auVar24[1]);
        auVar26[2] = -(auVar1[2] == auVar24[2]);
        auVar26[3] = -(auVar1[3] == auVar24[3]);
        auVar26[4] = -(auVar1[4] == auVar24[4]);
        auVar26[5] = -(auVar1[5] == auVar24[5]);
        auVar26[6] = -(auVar1[6] == auVar24[6]);
        auVar26[7] = -(auVar1[7] == auVar24[7]);
        auVar26[8] = -(auVar1[8] == auVar24[0]);
        auVar26[9] = -(auVar1[9] == auVar24[1]);
        auVar26[10] = -(auVar1[10] == auVar24[2]);
        auVar26[0xb] = -(auVar1[0xb] == auVar24[3]);
        auVar26[0xc] = -(auVar1[0xc] == auVar24[4]);
        auVar26[0xd] = -(auVar1[0xd] == auVar24[5]);
        auVar26[0xe] = -(auVar1[0xe] == auVar24[6]);
        auVar26[0xf] = -(auVar1[0xf] == auVar24[7]);
        uVar17 = (ushort)(SUB161(auVar26 >> 7,0) & 1) | (ushort)(SUB161(auVar26 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar26 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar26 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar26 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar26 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar26 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar26 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar26 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar26 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar26 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar26 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar26 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar26 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar26 >> 0x77,0) & 1) << 0xe | (ushort)(auVar26[0xf] >> 7) << 0xf
        ;
        uVar13 = (uint)uVar17;
        while (uVar17 != 0) {
          uVar5 = 0;
          for (uVar4 = uVar13; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
            uVar5 = uVar5 + 1;
          }
          if (iVar2 == *(int *)((longlong)puStack_b0 + (uVar5 + uVar12 & uStack_a8) * -4 + -4)) {
            plStack_1f8 = (longlong *)0x2;
            pauStack_1e8 = (undefined1 (*) [16])CONCAT44(pauStack_1e8._4_4_,iVar2);
            uStack_71 = 1;
            pdb_140c45a20(auStack_c0,lStack_a0,iVar2);
            uStack_108 = (undefined4)uVar6;
            uStack_104 = (undefined4)((ulonglong)uVar6 >> 0x20);
            uStack_100 = 0x80000000;
            puVar11 = (undefined8 *)&uStack_108;
            if (auStack_c0[0] != '\0') {
              puVar11 = (undefined8 *)(auStack_c0 + 4);
            }
            uStack_130 = *puVar11;
            uStack_128 = *(undefined4 *)(puVar11 + 1);
            uStack_71 = 1;
            pdb_1414b5130(auStack_c0,&pauStack_168,&plStack_1f8,&uStack_130);
            goto LAB_1414f9330;
          }
          uVar17 = (ushort)(uVar13 - 1) & (ushort)uVar13;
          uVar13 = CONCAT22((short)(uVar13 - 1 >> 0x10),uVar17);
        }
        auVar25[0] = -(auVar1[0] == -1);
        auVar25[1] = -(auVar1[1] == -1);
        auVar25[2] = -(auVar1[2] == -1);
        auVar25[3] = -(auVar1[3] == -1);
        auVar25[4] = -(auVar1[4] == -1);
        auVar25[5] = -(auVar1[5] == -1);
        auVar25[6] = -(auVar1[6] == -1);
        auVar25[7] = -(auVar1[7] == -1);
        auVar25[8] = -(auVar1[8] == -1);
        auVar25[9] = -(auVar1[9] == -1);
        auVar25[10] = -(auVar1[10] == -1);
        auVar25[0xb] = -(auVar1[0xb] == -1);
        auVar25[0xc] = -(auVar1[0xc] == -1);
        auVar25[0xd] = -(auVar1[0xd] == -1);
        auVar25[0xe] = -(auVar1[0xe] == -1);
        auVar25[0xf] = -(auVar1[0xf] == -1);
        if ((((((((((((((((SUB161(auVar25 >> 7,0) & 1) != 0 || (SUB161(auVar25 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar25 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar25 >> 0x1f,0) & 1) != 0) || (SUB161(auVar25 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar25 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar25 >> 0x37,0) & 1) != 0) || (SUB161(auVar25 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar25 >> 0x47,0) & 1) != 0) || (SUB161(auVar25 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar25 >> 0x57,0) & 1) != 0) || (SUB161(auVar25 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar25 >> 0x67,0) & 1) != 0) || (SUB161(auVar25 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar25 >> 0x77,0) & 1) != 0) || auVar25[0xf] < '\0') break;
        uVar12 = uVar12 + lVar22 + 0x10;
        lVar22 = lVar22 + 0x10;
      }
    }
  }
  goto LAB_1414f9330;
LAB_1414f9551:
  auVar24 = *pauStack_168;
  if (lStack_160 == 0) {
    uStack_c8 = 0;
  }
  else {
    uVar12 = lStack_160 * 0x28 + 0x37U & 0xfffffffffffffff0;
    uStack_98 = lStack_160 + uVar12 + 0x11;
    pbStack_f0 = (byte *)((longlong)pauStack_168 - uVar12);
    uStack_c8 = 0x10;
  }
  pauVar18 = pauStack_168 + 1;
  uVar20 = ~(uint)(ushort)((ushort)(SUB161(auVar24 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar24 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar24 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar24 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar24 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar24 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar24 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auVar24 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auVar24 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(auVar24 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auVar24 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auVar24 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(auVar24 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar24 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar24 >> 0x77,0) & 1) << 0xe |
                          (ushort)(byte)(auVar24[0xf] >> 7) << 0xf);
  lStack_80 = CONCAT44(lStack_80._4_4_,*(undefined4 *)((longlong)param_6 + 0x1c));
  lVar14 = *param_6;
  puStack_90 = (undefined4 *)param_6[2];
  lStack_88 = *puStack_110;
  plStack_e0 = (longlong *)CONCAT44(plStack_e0._4_4_,*(undefined4 *)((longlong)puStack_118 + 0x1c));
  puStack_b0 = (undefined4 *)puStack_118[2];
  uStack_a8 = CONCAT44(uStack_a8._4_4_,*(undefined4 *)((longlong)puStack_f8 + 0x1c));
  puStack_d8 = (undefined4 *)puStack_f8[2];
  plStack_d0 = (longlong *)*param_5;
  lStack_a0 = lStack_160;
  pauVar15 = pauStack_168;
  lVar22 = lStack_150;
  while (lVar22 != 0) {
    lVar22 = lVar22 + -1;
    if ((short)uVar20 == 0) {
      do {
        auVar24 = *pauVar18;
        pauVar15 = pauVar15 + -0x28;
        pauVar18 = pauVar18 + 1;
        uVar20 = (ushort)((ushort)(SUB161(auVar24 >> 7,0) & 1) |
                          (ushort)(SUB161(auVar24 >> 0xf,0) & 1) << 1 |
                          (ushort)(SUB161(auVar24 >> 0x17,0) & 1) << 2 |
                          (ushort)(SUB161(auVar24 >> 0x1f,0) & 1) << 3 |
                          (ushort)(SUB161(auVar24 >> 0x27,0) & 1) << 4 |
                          (ushort)(SUB161(auVar24 >> 0x2f,0) & 1) << 5 |
                          (ushort)(SUB161(auVar24 >> 0x37,0) & 1) << 6 |
                          (ushort)(SUB161(auVar24 >> 0x3f,0) & 1) << 7 |
                          (ushort)(SUB161(auVar24 >> 0x47,0) & 1) << 8 |
                          (ushort)(SUB161(auVar24 >> 0x4f,0) & 1) << 9 |
                          (ushort)(SUB161(auVar24 >> 0x57,0) & 1) << 10 |
                          (ushort)(SUB161(auVar24 >> 0x5f,0) & 1) << 0xb |
                          (ushort)(SUB161(auVar24 >> 0x67,0) & 1) << 0xc |
                          (ushort)(SUB161(auVar24 >> 0x6f,0) & 1) << 0xd |
                          (ushort)(SUB161(auVar24 >> 0x77,0) & 1) << 0xe |
                         (ushort)(byte)(auVar24[0xf] >> 7) << 0xf) ^ 0xffff;
      } while (uVar20 == 0);
    }
    uVar21 = 0;
    for (uVar13 = uVar20; (uVar13 & 1) == 0; uVar13 = uVar13 >> 1 | 0x80000000) {
      uVar21 = uVar21 + 1;
    }
    uVar12 = (ulonglong)uVar21;
    plVar10 = (longlong *)((longlong)pauVar15 + uVar12 * -0x28 + -0x28);
    lVar8 = *plVar10;
    pauVar19 = (undefined1 (*) [16])plVar10[1];
    uVar3 = *(undefined4 *)((longlong)pauVar15 + uVar12 * -0x28 + -0x18);
    puVar11 = (undefined8 *)((longlong)pauVar15 + uVar12 * -0x28 + -0x14);
    uVar6 = *puVar11;
    uVar7 = puVar11[1];
    uStack_108 = (undefined4)uVar6;
    uStack_104 = (undefined4)((ulonglong)uVar6 >> 0x20);
    uStack_100 = (undefined4)uVar7;
    uStack_fc = (undefined4)((ulonglong)uVar7 >> 0x20);
    if (*(longlong *)((longlong)pauVar15 + uVar12 * -0x28 + -0x28) == 3) break;
    cVar9 = pdb_140c42080(uStack_e8,uVar3);
    if (cVar9 == '\0') {
                    /* WARNING: Subroutine does not return */
      pdb_142dc83b0(&UNK_143317d50,0x52,&UNK_143317da8);
    }
    *puStack_90 = (undefined4)lStack_80;
    auStack_c0._0_4_ = uVar3;
    plVar10 = (longlong *)pdb_1400aede0(lVar14 + 0x20,auStack_c0);
    pdb_1414ae460(lVar14,plVar10,auStack_c0);
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (*plVar10 == 0) {
        plStack_1f8 = plVar10;
        pdb_1408f7f60(&plStack_1f8);
      }
    }
    plStack_1f8 = (longlong *)0x4;
    lStack_1f0 = lVar8;
    pauStack_1e8 = pauVar19;
    uStack_1e0 = uVar3;
    bStack_b4 = pdb_140ae3070(lStack_88);
    bStack_b4 = bStack_b4 ^ 1;
    uStack_b8 = uStack_fc;
    auStack_c0 = (undefined1  [8])CONCAT44(uStack_100,uStack_104);
    *puStack_b0 = plStack_e0._0_4_;
    *puStack_d8 = (undefined4)uStack_a8;
    pdb_1414c40f0(&plStack_1f8,0,auStack_c0,uStack_120,uStack_e8,0,param_7,plStack_d0);
    uVar20 = uVar20 - 1 & uVar20;
  }
  if ((lStack_a0 != 0) && (uStack_98 != 0)) {
    pub_1406abac0(pbStack_f0,uStack_98,uStack_c8);
  }
  return;
}

