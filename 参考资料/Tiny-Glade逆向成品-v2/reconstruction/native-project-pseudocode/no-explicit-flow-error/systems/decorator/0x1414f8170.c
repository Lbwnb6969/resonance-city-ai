// VA 0x1414f8170, PDB extent 2038 bytes
// system_decorator::cull_oob_decorators::cull_stair_attached_decorators_impl<system_decorator::cull_oob_decorators::cull_stair_attached_decorators_on_invalid_stairs::closure_env$0>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/cull_oob_decorators.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_decorator::cull_oob_decorators::cull_stair_attached_decorators_impl<system_decorator::cull_oob_decorators::cull_stair_attached_decorators_on_invalid_stairs::closure_env$0>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/cull_oob_decorators.rs
   Extent: 2038 */

void pdb_1414f8170(longlong *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,longlong *param_6,undefined8 param_7,undefined8 *param_8)

{
  undefined8 uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined1 (*pauVar6) [16];
  char cVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  short sVar13;
  uint uVar14;
  undefined1 (*pauVar15) [16];
  longlong lVar16;
  undefined1 (*pauVar17) [16];
  uint uVar18;
  undefined1 auVar19 [16];
  int iVar20;
  int iVar21;
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
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 *puStack_108;
  undefined8 *puStack_100;
  undefined8 *puStack_f8;
  byte *pbStack_f0;
  undefined8 uStack_e8;
  undefined4 *puStack_e0;
  longlong *plStack_d8;
  longlong lStack_d0;
  ulonglong uStack_c8;
  undefined1 auStack_c0 [8];
  undefined4 uStack_b8;
  byte bStack_b4;
  longlong lStack_b0;
  ulonglong uStack_a8;
  longlong lStack_a0;
  longlong lStack_98;
  undefined4 *puStack_90;
  undefined1 (*pauStack_88) [16];
  longlong lStack_80;
  undefined1 uStack_71;
  undefined8 uStack_70;
  
  uStack_70 = 0xfffffffffffffffe;
  puVar9 = param_2;
  puStack_108 = param_4;
  plVar8 = (longlong *)pdb_140f3bda0();
  puStack_f8 = param_2;
  if ((char)plVar8[2] == '\x01') {
    lStack_148 = *plVar8;
    puVar9 = (undefined8 *)plVar8[1];
  }
  else {
    lStack_148 = pdb_140f4fd10();
    *plVar8 = lStack_148;
    plVar8[1] = (longlong)puVar9;
    *(undefined1 *)(plVar8 + 2) = 1;
  }
  *plVar8 = lStack_148 + 1;
  uStack_158 = _DAT_143317e00;
  lStack_150 = _UNK_143317e08;
  pauStack_168 = _DAT_143317df0;
  lStack_160 = _UNK_143317df8;
  uStack_120 = *param_3;
  uStack_71 = 1;
  puStack_140 = puVar9;
  puStack_100 = param_3;
  pdb_140c3ffd0(&plStack_1f8);
  uVar5 = _DAT_143317cf0;
  plStack_d8 = plStack_1f8;
  lStack_a0 = lStack_1f0;
  pauStack_88 = (undefined1 (*) [16])CONCAT44(uStack_1dc,uStack_1e0);
  uVar14 = (uint)uStack_1d0;
  lStack_80 = lStack_1c8;
  lStack_98 = lStack_1c0;
  lStack_d0 = *param_1;
  lStack_b0 = *param_8;
  uVar18 = (uint)uStack_1a8;
  puStack_90 = (undefined4 *)lStack_1a0;
  uStack_e8 = *puStack_108;
  pauVar15 = pauStack_1b8;
  pauVar17 = pauStack_1e8;
LAB_1414f82b0:
  sVar13 = (short)uVar14;
  if (((ulonglong)plStack_d8 & 1) == 0) {
    if (pauVar17 != (undefined1 (*) [16])0x0) {
      if (lStack_80 != 0) goto joined_r0x0001414f82fd;
      lStack_80 = 0;
    }
    if (lStack_98 == 0) goto LAB_1414f859b;
LAB_1414f83a1:
    if (puStack_90 == (undefined4 *)0x0) goto LAB_1414f859b;
    if ((short)uVar18 == 0) {
      do {
        auVar19 = *pauVar15;
        lStack_98 = lStack_98 + -0x680;
        pauVar15 = pauVar15 + 1;
        uVar18 = (ushort)((ushort)(SUB161(auVar19 >> 7,0) & 1) |
                          (ushort)(SUB161(auVar19 >> 0xf,0) & 1) << 1 |
                          (ushort)(SUB161(auVar19 >> 0x17,0) & 1) << 2 |
                          (ushort)(SUB161(auVar19 >> 0x1f,0) & 1) << 3 |
                          (ushort)(SUB161(auVar19 >> 0x27,0) & 1) << 4 |
                          (ushort)(SUB161(auVar19 >> 0x2f,0) & 1) << 5 |
                          (ushort)(SUB161(auVar19 >> 0x37,0) & 1) << 6 |
                          (ushort)(SUB161(auVar19 >> 0x3f,0) & 1) << 7 |
                          (ushort)(SUB161(auVar19 >> 0x47,0) & 1) << 8 |
                          (ushort)(SUB161(auVar19 >> 0x4f,0) & 1) << 9 |
                          (ushort)(SUB161(auVar19 >> 0x57,0) & 1) << 10 |
                          (ushort)(SUB161(auVar19 >> 0x5f,0) & 1) << 0xb |
                          (ushort)(SUB161(auVar19 >> 0x67,0) & 1) << 0xc |
                          (ushort)(SUB161(auVar19 >> 0x6f,0) & 1) << 0xd |
                          (ushort)(SUB161(auVar19 >> 0x77,0) & 1) << 0xe |
                         (ushort)(byte)(auVar19[0xf] >> 7) << 0xf) ^ 0xffff;
      } while (uVar18 == 0);
    }
    uVar3 = 0;
    for (uVar4 = uVar18; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
      uVar3 = uVar3 + 1;
    }
    uVar18 = uVar18 - 1 & uVar18;
    lVar11 = (ulonglong)uVar3 * -0x68 + lStack_98;
    puStack_90 = (undefined4 *)((longlong)puStack_90 + -1);
    pauVar17 = (undefined1 (*) [16])0x0;
  }
  else {
    if (pauVar17 == (undefined1 (*) [16])0x0) {
LAB_1414f834e:
      if (lStack_a0 != 0) {
        pauVar17 = *(undefined1 (**) [16])(lStack_a0 + 0x30);
        lStack_80 = *(longlong *)(lStack_a0 + 0x48);
        auVar19 = *pauVar17;
        pauStack_88 = pauVar17 + 1;
        uVar14 = ~(uint)(ushort)((ushort)(SUB161(auVar19 >> 7,0) & 1) |
                                 (ushort)(SUB161(auVar19 >> 0xf,0) & 1) << 1 |
                                 (ushort)(SUB161(auVar19 >> 0x17,0) & 1) << 2 |
                                 (ushort)(SUB161(auVar19 >> 0x1f,0) & 1) << 3 |
                                 (ushort)(SUB161(auVar19 >> 0x27,0) & 1) << 4 |
                                 (ushort)(SUB161(auVar19 >> 0x2f,0) & 1) << 5 |
                                 (ushort)(SUB161(auVar19 >> 0x37,0) & 1) << 6 |
                                 (ushort)(SUB161(auVar19 >> 0x3f,0) & 1) << 7 |
                                 (ushort)(SUB161(auVar19 >> 0x47,0) & 1) << 8 |
                                 (ushort)(SUB161(auVar19 >> 0x4f,0) & 1) << 9 |
                                 (ushort)(SUB161(auVar19 >> 0x57,0) & 1) << 10 |
                                 (ushort)(SUB161(auVar19 >> 0x5f,0) & 1) << 0xb |
                                 (ushort)(SUB161(auVar19 >> 0x67,0) & 1) << 0xc |
                                 (ushort)(SUB161(auVar19 >> 0x6f,0) & 1) << 0xd |
                                 (ushort)(SUB161(auVar19 >> 0x77,0) & 1) << 0xe |
                                (ushort)(byte)(auVar19[0xf] >> 7) << 0xf);
        if (lStack_80 != 0) {
          lStack_a0 = 0;
          sVar13 = (short)uVar14;
          goto joined_r0x0001414f82fd;
        }
        lStack_80 = 0;
      }
      lStack_a0 = 0;
      if (lStack_98 != 0) goto LAB_1414f83a1;
      goto LAB_1414f859b;
    }
    if (lStack_80 == 0) {
      lStack_80 = 0;
      goto LAB_1414f834e;
    }
joined_r0x0001414f82fd:
    if (sVar13 == 0) {
      do {
        auVar19 = *pauStack_88;
        pauVar17 = pauVar17 + -0x68;
        pauStack_88 = pauStack_88 + 1;
        uVar14 = (ushort)((ushort)(SUB161(auVar19 >> 7,0) & 1) |
                          (ushort)(SUB161(auVar19 >> 0xf,0) & 1) << 1 |
                          (ushort)(SUB161(auVar19 >> 0x17,0) & 1) << 2 |
                          (ushort)(SUB161(auVar19 >> 0x1f,0) & 1) << 3 |
                          (ushort)(SUB161(auVar19 >> 0x27,0) & 1) << 4 |
                          (ushort)(SUB161(auVar19 >> 0x2f,0) & 1) << 5 |
                          (ushort)(SUB161(auVar19 >> 0x37,0) & 1) << 6 |
                          (ushort)(SUB161(auVar19 >> 0x3f,0) & 1) << 7 |
                          (ushort)(SUB161(auVar19 >> 0x47,0) & 1) << 8 |
                          (ushort)(SUB161(auVar19 >> 0x4f,0) & 1) << 9 |
                          (ushort)(SUB161(auVar19 >> 0x57,0) & 1) << 10 |
                          (ushort)(SUB161(auVar19 >> 0x5f,0) & 1) << 0xb |
                          (ushort)(SUB161(auVar19 >> 0x67,0) & 1) << 0xc |
                          (ushort)(SUB161(auVar19 >> 0x6f,0) & 1) << 0xd |
                          (ushort)(SUB161(auVar19 >> 0x77,0) & 1) << 0xe |
                         (ushort)(byte)(auVar19[0xf] >> 7) << 0xf) ^ 0xffff;
      } while (uVar14 == 0);
    }
    uVar3 = 0;
    for (uVar4 = uVar14; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
      uVar3 = uVar3 + 1;
    }
    uVar14 = uVar14 - 1 & uVar14;
    lVar11 = (ulonglong)uVar3 * -0x68 + (longlong)pauVar17;
    lStack_80 = lStack_80 + -1;
  }
  uStack_71 = 1;
  puStack_e0 = (undefined4 *)CONCAT44(puStack_e0._4_4_,*(undefined4 *)(lVar11 + -0x68));
  cVar7 = pdb_140c42080(uStack_e8);
  if (cVar7 != '\0') {
    lVar12 = *(longlong *)(lStack_d0 + 8);
    lVar16 = *(longlong *)(lStack_d0 + 0x10) * 0x150 + lVar12;
    do {
      if (lVar12 == lVar16) {
        plStack_1f8 = (longlong *)0x2;
        pauStack_1e8 = (undefined1 (*) [16])CONCAT44(pauStack_1e8._4_4_,puStack_e0._0_4_);
        uStack_71 = 1;
        pdb_140c45a20(auStack_c0,lStack_b0);
        uStack_118 = (undefined4)uVar5;
        uStack_114 = (undefined4)((ulonglong)uVar5 >> 0x20);
        uStack_110 = 0x80000000;
        puVar9 = (undefined8 *)&uStack_118;
        if (auStack_c0[0] != '\0') {
          puVar9 = (undefined8 *)(auStack_c0 + 4);
        }
        uStack_130 = *puVar9;
        uStack_128 = *(undefined4 *)(puVar9 + 1);
        uStack_71 = 1;
        pdb_1414b5130(auStack_c0,&pauStack_168,&plStack_1f8,&uStack_130);
        break;
      }
      uVar1 = *(undefined8 *)(lVar12 + 0x128);
      uStack_71 = 1;
      puVar9 = (undefined8 *)pdb_140901170(lVar11 + -0x60,&UNK_143317dc0);
      lVar12 = lVar12 + 0x150;
      iVar20 = -(uint)((int)uVar1 == (int)*puVar9);
      iVar21 = -(uint)((int)((ulonglong)uVar1 >> 0x20) == (int)((ulonglong)*puVar9 >> 0x20));
      auVar19._4_4_ = iVar20;
      auVar19._0_4_ = iVar20;
      auVar19._8_4_ = iVar21;
      auVar19._12_4_ = iVar21;
      iVar20 = movmskpd((int)puVar9,auVar19);
    } while (iVar20 != 3);
  }
  goto LAB_1414f82b0;
LAB_1414f859b:
  auVar19 = *pauStack_168;
  if (lStack_160 == 0) {
    uStack_c8 = 0;
  }
  else {
    uVar10 = lStack_160 * 0x28 + 0x37U & 0xfffffffffffffff0;
    uStack_a8 = lStack_160 + uVar10 + 0x11;
    pbStack_f0 = (byte *)((longlong)pauStack_168 - uVar10);
    uStack_c8 = 0x10;
  }
  pauVar17 = pauStack_168 + 1;
  uVar14 = ~(uint)(ushort)((ushort)(SUB161(auVar19 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar19 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar19 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar19 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar19 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar19 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar19 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auVar19 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auVar19 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(auVar19 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auVar19 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auVar19 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(auVar19 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar19 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar19 >> 0x77,0) & 1) << 0xe |
                          (ushort)(byte)(auVar19[0xf] >> 7) << 0xf);
  lStack_80 = CONCAT44(lStack_80._4_4_,*(undefined4 *)((longlong)param_6 + 0x1c));
  lVar11 = *param_6;
  puStack_e0 = (undefined4 *)param_6[2];
  lStack_a0 = *puStack_f8;
  lStack_98 = CONCAT44(lStack_98._4_4_,*(undefined4 *)((longlong)puStack_100 + 0x1c));
  puStack_90 = (undefined4 *)puStack_100[2];
  plStack_d8 = (longlong *)CONCAT44(plStack_d8._4_4_,*(undefined4 *)((longlong)puStack_108 + 0x1c));
  pauStack_88 = (undefined1 (*) [16])puStack_108[2];
  lStack_d0 = *param_5;
  lStack_b0 = lStack_160;
  pauVar15 = pauStack_168;
  lVar12 = lStack_150;
  while (lVar12 != 0) {
    lVar12 = lVar12 + -1;
    if ((short)uVar14 == 0) {
      do {
        auVar19 = *pauVar17;
        pauVar15 = pauVar15 + -0x28;
        pauVar17 = pauVar17 + 1;
        uVar14 = (ushort)((ushort)(SUB161(auVar19 >> 7,0) & 1) |
                          (ushort)(SUB161(auVar19 >> 0xf,0) & 1) << 1 |
                          (ushort)(SUB161(auVar19 >> 0x17,0) & 1) << 2 |
                          (ushort)(SUB161(auVar19 >> 0x1f,0) & 1) << 3 |
                          (ushort)(SUB161(auVar19 >> 0x27,0) & 1) << 4 |
                          (ushort)(SUB161(auVar19 >> 0x2f,0) & 1) << 5 |
                          (ushort)(SUB161(auVar19 >> 0x37,0) & 1) << 6 |
                          (ushort)(SUB161(auVar19 >> 0x3f,0) & 1) << 7 |
                          (ushort)(SUB161(auVar19 >> 0x47,0) & 1) << 8 |
                          (ushort)(SUB161(auVar19 >> 0x4f,0) & 1) << 9 |
                          (ushort)(SUB161(auVar19 >> 0x57,0) & 1) << 10 |
                          (ushort)(SUB161(auVar19 >> 0x5f,0) & 1) << 0xb |
                          (ushort)(SUB161(auVar19 >> 0x67,0) & 1) << 0xc |
                          (ushort)(SUB161(auVar19 >> 0x6f,0) & 1) << 0xd |
                          (ushort)(SUB161(auVar19 >> 0x77,0) & 1) << 0xe |
                         (ushort)(byte)(auVar19[0xf] >> 7) << 0xf) ^ 0xffff;
      } while (uVar14 == 0);
    }
    uVar18 = 0;
    for (uVar3 = uVar14; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
      uVar18 = uVar18 + 1;
    }
    uVar10 = (ulonglong)uVar18;
    plVar8 = (longlong *)((longlong)pauVar15 + uVar10 * -0x28 + -0x28);
    lVar16 = *plVar8;
    pauVar6 = (undefined1 (*) [16])plVar8[1];
    uVar2 = *(undefined4 *)((longlong)pauVar15 + uVar10 * -0x28 + -0x18);
    puVar9 = (undefined8 *)((longlong)pauVar15 + uVar10 * -0x28 + -0x14);
    uVar5 = *puVar9;
    uVar1 = puVar9[1];
    uStack_118 = (undefined4)uVar5;
    uStack_114 = (undefined4)((ulonglong)uVar5 >> 0x20);
    uStack_110 = (undefined4)uVar1;
    uStack_10c = (undefined4)((ulonglong)uVar1 >> 0x20);
    if (*(longlong *)((longlong)pauVar15 + uVar10 * -0x28 + -0x28) == 3) break;
    cVar7 = pdb_140c42080(uStack_e8,uVar2);
    if (cVar7 == '\0') {
                    /* WARNING: Subroutine does not return */
      pdb_142dc83b0(&UNK_143317d50,0x52,&UNK_143317da8);
    }
    *puStack_e0 = (undefined4)lStack_80;
    auStack_c0._0_4_ = uVar2;
    plVar8 = (longlong *)pdb_1400aede0(lVar11 + 0x20,auStack_c0);
    pdb_1414ae460(lVar11,plVar8,auStack_c0);
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (*plVar8 == 0) {
        plStack_1f8 = plVar8;
        pdb_1408f7f60(&plStack_1f8);
      }
    }
    plStack_1f8 = (longlong *)0x4;
    lStack_1f0 = lVar16;
    pauStack_1e8 = pauVar6;
    uStack_1e0 = uVar2;
    bStack_b4 = pdb_140ae3070(lStack_a0);
    bStack_b4 = bStack_b4 ^ 1;
    uStack_b8 = uStack_10c;
    auStack_c0 = (undefined1  [8])CONCAT44(uStack_110,uStack_114);
    *puStack_90 = (undefined4)lStack_98;
    *(undefined4 *)pauStack_88 = plStack_d8._0_4_;
    pdb_1414c40f0(&plStack_1f8,0,auStack_c0,uStack_120,uStack_e8,0,param_7,lStack_d0);
    uVar14 = uVar14 - 1 & uVar14;
  }
  if ((lStack_b0 != 0) && (uStack_a8 != 0)) {
    pub_1406abac0(pbStack_f0,uStack_a8,uStack_c8);
  }
  return;
}

