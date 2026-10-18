// VA 0x1414f8970, PDB extent 1883 bytes
// system_decorator::cull_oob_decorators::cull_stair_attached_decorators_impl<system_decorator::cull_oob_decorators::cull_stair_attached_decorators::closure_env$0>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/cull_oob_decorators.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_decorator::cull_oob_decorators::cull_stair_attached_decorators_impl<system_decorator::cull_oob_decorators::cull_stair_attached_decorators::closure_env$0>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/cull_oob_decorators.rs
   Extent: 1883 */

void pdb_1414f8970(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,longlong *param_6,undefined8 param_7,undefined8 *param_8)

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  char cVar8;
  longlong *plVar9;
  undefined4 *puVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined1 (*pauVar14) [16];
  short sVar15;
  undefined1 (*pauVar16) [16];
  undefined1 (*pauVar17) [16];
  uint uVar18;
  uint uVar19;
  longlong lVar20;
  longlong *plStack_1e8;
  longlong lStack_1e0;
  undefined1 (*pauStack_1d8) [16];
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  ushort uStack_1c0;
  longlong lStack_1b8;
  longlong lStack_1b0;
  undefined1 (*pauStack_1a8) [16];
  ushort uStack_198;
  longlong lStack_190;
  undefined1 (*pauStack_158) [16];
  longlong lStack_150;
  undefined8 uStack_148;
  longlong lStack_140;
  longlong lStack_138;
  undefined8 *puStack_130;
  undefined8 uStack_120;
  undefined4 uStack_118;
  undefined8 uStack_110;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 *puStack_f0;
  undefined8 *puStack_e8;
  longlong lStack_e0;
  byte *pbStack_d8;
  undefined8 uStack_d0;
  undefined4 *puStack_c8;
  longlong *plStack_c0;
  undefined8 uStack_b8;
  undefined4 *puStack_b0;
  ulonglong uStack_a8;
  undefined1 auStack_a0 [8];
  undefined4 uStack_98;
  byte bStack_94;
  undefined8 *puStack_90;
  ulonglong uStack_88;
  longlong lStack_80;
  longlong lStack_78;
  longlong lStack_70;
  undefined1 uStack_61;
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  puVar11 = param_2;
  puStack_90 = param_4;
  plVar9 = (longlong *)pdb_140f3bda0();
  puStack_e8 = param_2;
  if ((char)plVar9[2] == '\x01') {
    lStack_138 = *plVar9;
    puVar11 = (undefined8 *)plVar9[1];
  }
  else {
    lStack_138 = pdb_140f4fd10();
    *plVar9 = lStack_138;
    plVar9[1] = (longlong)puVar11;
    *(undefined1 *)(plVar9 + 2) = 1;
  }
  *plVar9 = lStack_138 + 1;
  uStack_148 = _DAT_143317e00;
  lStack_140 = _UNK_143317e08;
  pauStack_158 = _DAT_143317df0;
  lStack_150 = _UNK_143317df8;
  uStack_110 = *param_3;
  uStack_61 = 1;
  puStack_130 = puVar11;
  puStack_f0 = param_3;
  pdb_140c3ffd0(&plStack_1e8);
  uVar5 = _DAT_143317cf0;
  plStack_c0 = plStack_1e8;
  lStack_80 = lStack_1e0;
  pauVar16 = (undefined1 (*) [16])CONCAT44(uStack_1cc,uStack_1d0);
  uVar18 = (uint)uStack_1c0;
  lStack_70 = lStack_1b8;
  uStack_b8 = *param_1;
  puStack_b0 = (undefined4 *)*param_8;
  uVar19 = (uint)uStack_198;
  lStack_78 = lStack_190;
  uStack_d0 = *puStack_90;
  lVar13 = lStack_1b0;
  pauVar14 = pauStack_1d8;
  pauVar17 = pauStack_1a8;
LAB_1414f8a90:
  if (((ulonglong)plStack_c0 & 1) == 0) {
    if (pauVar14 != (undefined1 (*) [16])0x0) {
      if (lStack_70 != 0) goto LAB_1414f8aef;
      lStack_70 = 0;
    }
joined_r0x0001414f8b5a:
    if (lVar13 == 0) goto LAB_1414f8d13;
LAB_1414f8b60:
    if (lStack_78 == 0) goto LAB_1414f8d13;
    if ((short)uVar19 == 0) {
      do {
        auVar1 = *pauVar17;
        lVar13 = lVar13 + -0x680;
        pauVar17 = pauVar17 + 1;
        uVar19 = (ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
                          (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
                          (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                          (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                          (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                          (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                          (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                          (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                          (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
                          (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
                          (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
                          (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
                          (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
                          (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
                          (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                         (ushort)(byte)(auVar1[0xf] >> 7) << 0xf) ^ 0xffff;
      } while (uVar19 == 0);
    }
    uVar4 = 0;
    for (uVar3 = uVar19; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
      uVar4 = uVar4 + 1;
    }
    uVar19 = uVar19 - 1 & uVar19;
    lVar20 = (ulonglong)uVar4 * -0x68 + lVar13;
    lStack_78 = lStack_78 + -1;
    pauVar14 = (undefined1 (*) [16])0x0;
  }
  else {
    if (pauVar14 == (undefined1 (*) [16])0x0) {
LAB_1414f8ab3:
      if (lStack_80 == 0) {
        lStack_80 = 0;
        if (lVar13 != 0) goto LAB_1414f8b60;
        goto LAB_1414f8d13;
      }
      pauVar14 = *(undefined1 (**) [16])(lStack_80 + 0x30);
      lStack_70 = *(longlong *)(lStack_80 + 0x48);
      auVar1 = *pauVar14;
      pauVar16 = pauVar14 + 1;
      uVar18 = ~(uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                              (ushort)(byte)(auVar1[0xf] >> 7) << 0xf);
      if (lStack_70 == 0) {
        lStack_70 = 0;
        lStack_80 = 0;
        goto joined_r0x0001414f8b5a;
      }
      lStack_80 = 0;
      sVar15 = (short)uVar18;
    }
    else {
      if (lStack_70 == 0) {
        lStack_70 = 0;
        goto LAB_1414f8ab3;
      }
LAB_1414f8aef:
      sVar15 = (short)uVar18;
    }
    if (sVar15 == 0) {
      do {
        auVar1 = *pauVar16;
        pauVar14 = pauVar14 + -0x68;
        pauVar16 = pauVar16 + 1;
        uVar18 = (ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
                          (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
                          (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                          (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                          (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                          (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                          (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                          (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                          (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
                          (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
                          (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
                          (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
                          (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
                          (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
                          (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                         (ushort)(byte)(auVar1[0xf] >> 7) << 0xf) ^ 0xffff;
      } while (uVar18 == 0);
    }
    uVar4 = 0;
    for (uVar3 = uVar18; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
      uVar4 = uVar4 + 1;
    }
    uVar18 = uVar18 - 1 & uVar18;
    lVar20 = (ulonglong)uVar4 * -0x68 + (longlong)pauVar14;
    lStack_70 = lStack_70 + -1;
  }
  uStack_61 = 1;
  puStack_c8 = (undefined4 *)CONCAT44(puStack_c8._4_4_,*(undefined4 *)(lVar20 + -0x68));
  cVar8 = pdb_140c42080(uStack_d0);
  if (cVar8 != '\0') {
    uStack_61 = 1;
    puVar10 = (undefined4 *)pdb_140901170(lVar20 + -0x60,&UNK_143317d38);
    uStack_61 = 1;
    cVar8 = pdb_140a60290(uStack_b8,*puVar10,puVar10[1]);
    if (cVar8 == '\0') {
      plStack_1e8 = (longlong *)0x2;
      pauStack_1d8 = (undefined1 (*) [16])CONCAT44(pauStack_1d8._4_4_,puStack_c8._0_4_);
      uStack_61 = 1;
      pdb_140c45a20(auStack_a0,puStack_b0);
      uStack_108 = (undefined4)uVar5;
      uStack_104 = (undefined4)((ulonglong)uVar5 >> 0x20);
      uStack_100 = 0x80000000;
      puVar11 = (undefined8 *)&uStack_108;
      if (auStack_a0[0] != '\0') {
        puVar11 = (undefined8 *)(auStack_a0 + 4);
      }
      uStack_120 = *puVar11;
      uStack_118 = *(undefined4 *)(puVar11 + 1);
      uStack_61 = 1;
      pdb_1414b5130(auStack_a0,&pauStack_158,&plStack_1e8,&uStack_120);
    }
  }
  goto LAB_1414f8a90;
LAB_1414f8d13:
  auVar1 = *pauStack_158;
  if (lStack_150 == 0) {
    uStack_a8 = 0;
  }
  else {
    uVar12 = lStack_150 * 0x28 + 0x37U & 0xfffffffffffffff0;
    uStack_88 = lStack_150 + uVar12 + 0x11;
    pbStack_d8 = (byte *)((longlong)pauStack_158 - uVar12);
    uStack_a8 = 0x10;
  }
  pauVar16 = pauStack_158 + 1;
  uVar18 = ~(uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                          (ushort)(byte)(auVar1[0xf] >> 7) << 0xf);
  lStack_70 = CONCAT44(lStack_70._4_4_,*(undefined4 *)((longlong)param_6 + 0x1c));
  lVar13 = *param_6;
  puStack_c8 = (undefined4 *)param_6[2];
  lStack_80 = *puStack_e8;
  lStack_78 = CONCAT44(lStack_78._4_4_,*(undefined4 *)((longlong)puStack_f0 + 0x1c));
  plStack_c0 = (longlong *)puStack_f0[2];
  uStack_b8 = CONCAT44(uStack_b8._4_4_,*(undefined4 *)((longlong)puStack_90 + 0x1c));
  puStack_b0 = (undefined4 *)puStack_90[2];
  puStack_90 = (undefined8 *)*param_5;
  lStack_e0 = lStack_150;
  pauVar14 = pauStack_158;
  lVar20 = lStack_140;
  while (lVar20 != 0) {
    lVar20 = lVar20 + -1;
    if ((short)uVar18 == 0) {
      do {
        auVar1 = *pauVar16;
        pauVar14 = pauVar14 + -0x28;
        pauVar16 = pauVar16 + 1;
        uVar18 = (ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
                          (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
                          (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                          (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                          (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                          (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                          (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                          (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                          (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
                          (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
                          (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
                          (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
                          (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
                          (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
                          (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                         (ushort)(byte)(auVar1[0xf] >> 7) << 0xf) ^ 0xffff;
      } while (uVar18 == 0);
    }
    uVar19 = 0;
    for (uVar4 = uVar18; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
      uVar19 = uVar19 + 1;
    }
    uVar12 = (ulonglong)uVar19;
    plVar9 = (longlong *)((longlong)pauVar14 + uVar12 * -0x28 + -0x28);
    lVar7 = *plVar9;
    pauVar17 = (undefined1 (*) [16])plVar9[1];
    uVar2 = *(undefined4 *)((longlong)pauVar14 + uVar12 * -0x28 + -0x18);
    puVar11 = (undefined8 *)((longlong)pauVar14 + uVar12 * -0x28 + -0x14);
    uVar5 = *puVar11;
    uVar6 = puVar11[1];
    uStack_108 = (undefined4)uVar5;
    uStack_104 = (undefined4)((ulonglong)uVar5 >> 0x20);
    uStack_100 = (undefined4)uVar6;
    uStack_fc = (undefined4)((ulonglong)uVar6 >> 0x20);
    if (*(longlong *)((longlong)pauVar14 + uVar12 * -0x28 + -0x28) == 3) break;
    cVar8 = pdb_140c42080(uStack_d0,uVar2);
    if (cVar8 == '\0') {
                    /* WARNING: Subroutine does not return */
      pdb_142dc83b0(&UNK_143317d50,0x52,&UNK_143317da8);
    }
    *puStack_c8 = (undefined4)lStack_70;
    auStack_a0._0_4_ = uVar2;
    plVar9 = (longlong *)pdb_1400aede0(lVar13 + 0x20,auStack_a0);
    pdb_1414ae460(lVar13,plVar9,auStack_a0);
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      *plVar9 = *plVar9 + -1;
      UNLOCK();
      if (*plVar9 == 0) {
        plStack_1e8 = plVar9;
        pdb_1408f7f60(&plStack_1e8);
      }
    }
    plStack_1e8 = (longlong *)0x4;
    lStack_1e0 = lVar7;
    pauStack_1d8 = pauVar17;
    uStack_1d0 = uVar2;
    bStack_94 = pdb_140ae3070(lStack_80);
    bStack_94 = bStack_94 ^ 1;
    uStack_98 = uStack_fc;
    auStack_a0 = (undefined1  [8])CONCAT44(uStack_100,uStack_104);
    *(undefined4 *)plStack_c0 = (undefined4)lStack_78;
    *puStack_b0 = (undefined4)uStack_b8;
    pdb_1414c40f0(&plStack_1e8,0,auStack_a0,uStack_110,uStack_d0,0,param_7,puStack_90);
    uVar18 = uVar18 - 1 & uVar18;
  }
  if ((lStack_e0 != 0) && (uStack_88 != 0)) {
    pub_1406abac0(pbStack_d8,uStack_88,uStack_a8);
  }
  return;
}

