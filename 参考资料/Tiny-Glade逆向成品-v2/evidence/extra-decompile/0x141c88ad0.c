// Matched PDB: obvhs::cwbvh::builder::build_cwbvh_from_tris
// VA 0x141c88ad0, PDB extent 2372 bytes
// Ghidra pseudocode; types and unresolved calls are not original source.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB: obvhs::cwbvh::builder::build_cwbvh_from_tris
   Extent: 2372 bytes. No whole-program auto-analysis. */

undefined4 *
pdb_141c88ad0(undefined4 *param_1,undefined1 (*param_2) [16],longlong param_3,undefined8 *param_4,
             ulonglong *param_5)

{
  undefined1 auVar1 [16];
  code *pcVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  uint uVar11;
  longlong lVar12;
  undefined4 uVar13;
  uint uVar14;
  undefined1 (*pauVar15) [16];
  undefined1 *puVar16;
  int iVar17;
  uint uVar18;
  undefined1 (*pauVar19) [16];
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar24;
  undefined1 auVar23 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined8 in_stack_fffffffffffffdd8;
  undefined4 uVar28;
  undefined8 *puVar27;
  undefined8 in_stack_fffffffffffffde8;
  undefined4 uVar29;
  undefined1 auStack_1f8 [16];
  longlong lStack_1e8;
  undefined8 uStack_1e0;
  longlong lStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 uStack_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_140;
  undefined4 uStack_138;
  undefined4 *puStack_130;
  undefined1 (*pauStack_128) [16];
  undefined8 *puStack_120;
  longlong lStack_118;
  undefined8 uStack_110;
  longlong lStack_108;
  longlong lStack_100;
  longlong lStack_f8;
  longlong lStack_f0;
  undefined1 uStack_e1;
  undefined8 uStack_e0;
  
  uStack_e0 = 0xfffffffffffffffe;
  puStack_130 = param_1;
  puStack_120 = param_4;
  if (param_3 == 0) {
    lStack_100 = 0;
    lStack_f8 = 0x10;
    lStack_f0 = 0;
    lVar7 = 4;
    pauVar15 = param_2;
  }
  else {
    pdb_14007ee60();
    lStack_f8 = func_0x0001406abab0(param_3 << 5,0x10);
    if (lStack_f8 == 0) {
      pdb_142dc7e2a(0x10,param_3 << 5);
      pcVar2 = (code *)swi(3);
      puVar10 = (undefined4 *)(*pcVar2)();
      return puVar10;
    }
    lStack_f0 = 0;
    lStack_100 = param_3;
    pdb_14007ee60();
    pauVar15 = (undefined1 (*) [16])0x4;
    lVar7 = func_0x0001406abab0(param_3 * 4);
    if (lVar7 == 0) {
      pdb_142dc7e2a(4,param_3 * 4);
      goto LAB_141c89026;
    }
  }
  auVar4 = _DAT_143086ce0;
  auVar3 = _DAT_14303aa60;
  lStack_108 = 0;
  pauVar19 = param_2 + param_3 * 3;
  fVar20 = 0.0;
  iVar17 = 0;
  fVar21 = 0.0;
  pauStack_128 = param_2;
  lStack_118 = param_3;
  uStack_110 = lVar7;
  while (lVar7 = lStack_f0, uVar29 = (undefined4)((ulonglong)in_stack_fffffffffffffde8 >> 0x20),
        uVar28 = (undefined4)((ulonglong)in_stack_fffffffffffffdd8 >> 0x20),
        uVar13 = SUB84(pauVar15,0), param_2 != pauVar19) {
    auVar23 = *param_2;
    auVar26 = param_2[1];
    auVar1 = param_2[2];
    if (lStack_f0 == lStack_100) {
      uStack_e1 = 1;
      pdb_142db8450(&lStack_100);
    }
    lVar6 = lStack_108;
    auVar25 = minps(auVar3,auVar23);
    auVar23 = maxps(auVar4,auVar23);
    auVar25 = minps(auVar25,auVar26);
    auVar23 = maxps(auVar23,auVar26);
    auVar26 = minps(auVar25,auVar1);
    auVar23 = maxps(auVar23,auVar1);
    lVar12 = lVar7 * 0x20;
    *(undefined1 (*) [16])(lStack_f8 + lVar12) = auVar26;
    *(undefined1 (*) [16])(lStack_f8 + 0x10 + lVar12) = auVar23;
    lStack_f0 = lVar7 + 1;
    if (lStack_108 == lStack_118) {
      uStack_e1 = 1;
      pdb_142d89720(&lStack_118);
    }
    param_2 = param_2 + 3;
    *(int *)(uStack_110 + lVar6 * 4) = iVar17;
    iVar17 = iVar17 + 1;
    fVar22 = auVar23._0_4_ - auVar26._0_4_;
    fVar24 = auVar23._4_4_ - auVar26._4_4_;
    fVar24 = fVar22 * fVar24 + (auVar23._8_4_ - auVar26._8_4_) * (fVar22 + fVar24);
    fVar22 = fVar21;
    if (fVar21 <= fVar24) {
      fVar22 = fVar24;
    }
    fVar20 = fVar20 + fVar24;
    fVar21 = (float)(-(uint)NAN(fVar24) & (uint)fVar21 | ~-(uint)NAN(fVar24) & (uint)fVar22);
    lStack_108 = lVar6 + 1;
  }
  uStack_e1 = 1;
  uStack_140 = pdb_140f3c9d0();
  uStack_138 = uVar13;
  if (*(char *)((longlong)puStack_120 + 0x19) != '\0') {
    fVar20 = fVar20 / (float)param_3;
    fVar22 = _DAT_142e37adc * fVar20;
    fVar24 = fVar21 * _DAT_142e3b1d8 + fVar20 * _DAT_143007998;
    fVar21 = fVar24;
    if (fVar24 <= fVar22) {
      fVar21 = fVar22;
    }
    uStack_e1 = 1;
    pdb_141c89420(&lStack_100,&lStack_118,pauStack_128,param_3,
                  CONCAT44(uVar28,_DAT_142e3788c * fVar20),
                  ~-(uint)NAN(fVar22) & (uint)fVar21 | -(uint)NAN(fVar22) & (uint)fVar24,
                  CONCAT44(uVar29,0x3fe66666),0x3fcccccd,0xc,0xc);
  }
  puVar5 = puStack_120;
  uStack_1a8 = lStack_108;
  uStack_1b8 = lStack_118;
  uStack_1b0 = (undefined4)uStack_110;
  uStack_1ac = uStack_110._4_4_;
  uStack_e1 = 0;
  puVar27 = &uStack_1b8;
  pdb_142636550(auStack_1f8,puStack_120 + 3,lStack_f8,lStack_f0,puVar27,
                *(undefined1 *)((longlong)puStack_120 + 0x1a),*puStack_120);
  uStack_1b8 = 0x8000000000000000;
  pdb_14263d7c0(auStack_1f8,*(undefined4 *)(puVar5 + 1),&uStack_1b8);
  uVar14 = *(uint *)(puVar5 + 2);
  uVar11 = 3;
  if (uVar14 < 3) {
    uVar11 = uVar14;
  }
  uVar18 = 1;
  if (uVar14 != 0) {
    uVar18 = uVar11;
  }
  puVar16 = auStack_1f8;
  pdb_14263fe50(&uStack_1b8,puVar16,uVar18,1,(ulonglong)puVar27 & 0xffffffffffffff00);
  iVar17 = (int)puVar16;
  uVar8 = pdb_140f3cb70(&uStack_140);
  puVar10 = puStack_130;
  uVar9 = uVar8 + *param_5;
  if (!CARRY8(uVar8,*param_5)) {
    uVar14 = iVar17 + (int)param_5[1];
    if (uVar14 < 1000000000) {
LAB_141c88f15:
      *param_5 = uVar9;
      *(uint *)(param_5 + 1) = uVar14;
      *(undefined8 *)(puStack_130 + 0x18) = uStack_158;
      *(undefined8 *)(puStack_130 + 0x1a) = uStack_150;
      *(undefined8 *)(puStack_130 + 0x14) = uStack_168;
      *(undefined8 *)(puStack_130 + 0x16) = uStack_160;
      *(undefined8 *)(puStack_130 + 0x10) = uStack_178;
      *(undefined8 *)(puStack_130 + 0x12) = uStack_170;
      puStack_130[0xc] = uStack_188;
      puStack_130[0xd] = uStack_184;
      puStack_130[0xe] = uStack_180;
      puStack_130[0xf] = uStack_17c;
      *(undefined8 *)(puStack_130 + 8) = uStack_198;
      *(undefined8 *)(puStack_130 + 10) = uStack_190;
      puStack_130[4] = (undefined4)uStack_1a8;
      puStack_130[5] = uStack_1a8._4_4_;
      puStack_130[6] = uStack_1a0;
      puStack_130[7] = uStack_19c;
      *puStack_130 = (undefined4)uStack_1b8;
      puStack_130[1] = uStack_1b8._4_4_;
      puStack_130[2] = uStack_1b0;
      puStack_130[3] = uStack_1ac;
      if (lStack_1e8 != 0) {
        func_0x0001406abac0(uStack_1e0,lStack_1e8 * 0x30,0x10);
      }
      if (lStack_1d0 != 0) {
        func_0x0001406abac0(uStack_1c8,lStack_1d0 << 2,4);
      }
      if (lStack_100 != 0) {
        func_0x0001406abac0(lStack_f8,lStack_100 << 5,0x10);
      }
      return puVar10;
    }
    if ((uVar9 != 0xffffffffffffffff) && (uVar14 = uVar14 + 0xc4653600, uVar14 != 1000000000)) {
      uVar9 = uVar9 + 1;
      goto LAB_141c88f15;
    }
  }
  pdb_142dc8110(&UNK_1433a4698,0x1e,&UNK_1433a46b8);
LAB_141c89026:
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}

