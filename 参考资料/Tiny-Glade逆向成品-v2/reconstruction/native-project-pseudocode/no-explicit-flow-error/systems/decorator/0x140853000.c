// VA 0x140853000, PDB extent 2028 bytes
// system_decorator::ui_systems::ui_stairs_viz::insert_point_ui
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/ui_systems/ui_stairs_viz.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_decorator::ui_systems::ui_stairs_viz::insert_point_ui
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/ui_systems/ui_stairs_viz.rs
   Extent: 2028 */

void pdb_140853000(undefined4 *param_1,undefined4 param_2,undefined4 param_3,float *param_4,
                  undefined8 param_5)

{
  char *pcVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  longlong *plVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  ushort uVar15;
  longlong lVar16;
  longlong lVar17;
  bool bVar18;
  byte bVar19;
  float fVar20;
  undefined4 uVar21;
  float fVar23;
  undefined4 uVar24;
  undefined1 auVar22 [16];
  float fVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fStack_208;
  float fStack_204;
  float fStack_200;
  longlong lStack_1f8;
  longlong lStack_1f0;
  longlong lStack_1e8;
  longlong lStack_1e0;
  longlong lStack_1d8;
  ulonglong uStack_1d0;
  longlong lStack_1c8;
  longlong lStack_1c0;
  ulonglong uStack_1b8;
  ulonglong uStack_1b0;
  undefined8 *puStack_1a8;
  longlong lStack_1a0;
  undefined8 *puStack_198;
  undefined8 *puStack_190;
  longlong lStack_188;
  undefined8 *puStack_180;
  undefined1 auStack_178 [8];
  float fStack_170;
  float fStack_16c;
  undefined1 auStack_168 [16];
  longlong lStack_158;
  undefined8 uStack_150;
  undefined8 *puStack_148;
  longlong lStack_140;
  undefined8 *puStack_138;
  longlong *plStack_130;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  undefined4 uStack_11c;
  undefined8 *puStack_118;
  undefined8 *puStack_110;
  longlong lStack_108;
  undefined8 *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  
  plVar9 = (longlong *)pdb_140c016e0(param_5);
  lVar10 = pdb_140c017b0(param_2,param_3);
  if (plVar9[3] != 0) {
    lStack_158 = lVar10;
    uVar11 = pdb_1400af0a0(plVar9 + 4,&lStack_158);
    lVar17 = *plVar9;
    bVar19 = (byte)(uVar11 >> 0x39);
    auVar22 = ZEXT216(CONCAT11(bVar19,bVar19));
    auVar22 = pshuflw(auVar22,auVar22,0);
    lVar12 = 0;
    while( true ) {
      uVar11 = uVar11 & plVar9[1];
      pcVar1 = (char *)(lVar17 + uVar11);
      auVar29[0] = -(*pcVar1 == auVar22[0]);
      auVar29[1] = -(pcVar1[1] == auVar22[1]);
      auVar29[2] = -(pcVar1[2] == auVar22[2]);
      auVar29[3] = -(pcVar1[3] == auVar22[3]);
      auVar29[4] = -(pcVar1[4] == auVar22[4]);
      auVar29[5] = -(pcVar1[5] == auVar22[5]);
      auVar29[6] = -(pcVar1[6] == auVar22[6]);
      auVar29[7] = -(pcVar1[7] == auVar22[7]);
      auVar29[8] = -(pcVar1[8] == auVar22[0]);
      auVar29[9] = -(pcVar1[9] == auVar22[1]);
      auVar29[10] = -(pcVar1[10] == auVar22[2]);
      auVar29[0xb] = -(pcVar1[0xb] == auVar22[3]);
      auVar29[0xc] = -(pcVar1[0xc] == auVar22[4]);
      auVar29[0xd] = -(pcVar1[0xd] == auVar22[5]);
      auVar29[0xe] = -(pcVar1[0xe] == auVar22[6]);
      auVar29[0xf] = -(pcVar1[0xf] == auVar22[7]);
      uVar15 = (ushort)(SUB161(auVar29 >> 7,0) & 1) | (ushort)(SUB161(auVar29 >> 0xf,0) & 1) << 1 |
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
               (ushort)(SUB161(auVar29 >> 0x77,0) & 1) << 0xe | (ushort)(auVar29[0xf] >> 7) << 0xf;
      uVar8 = (uint)uVar15;
      while (uVar15 != 0) {
        uVar6 = 0;
        for (uVar7 = uVar8; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
          uVar6 = uVar6 + 1;
        }
        lVar16 = (uVar6 + uVar11 & plVar9[1]) * -0x98;
        if (lVar10 == *(longlong *)(lVar17 + -0x98 + lVar16)) {
          lVar17 = lVar17 + lVar16;
          fVar2 = *param_4;
          fVar20 = param_4[1];
          fVar3 = param_4[2];
          lStack_1f8 = *(longlong *)(lVar17 + -0x88);
          uStack_1d0 = *(ulonglong *)(lVar17 + -0x80);
          lStack_1f0 = lStack_1f8 + uStack_1d0 * 0xc;
          lStack_1e8 = *(longlong *)(lVar17 + -0x58);
          uVar11 = *(ulonglong *)(lVar17 + -0x50);
          if (uVar11 < uStack_1d0) {
            uStack_1d0 = uVar11;
          }
          lStack_1e0 = lStack_1e8 + uVar11 * 4;
          lStack_1c8 = *(longlong *)(lVar17 + -0x70);
          uStack_1b0 = *(ulonglong *)(lVar17 + -0x68);
          lStack_1c0 = lStack_1c8 + uStack_1b0 * 8;
          if (uStack_1d0 <= uStack_1b0) {
            uStack_1b0 = uStack_1d0;
          }
          fVar34 = (float)*(undefined8 *)param_4;
          fVar35 = (float)((ulonglong)*(undefined8 *)param_4 >> 0x20);
          lStack_1d8 = 0;
          puStack_1a8 = (undefined8 *)0x0;
          uStack_f8 = CONCAT44(fVar2,fVar3);
          uStack_f0 = 0;
          fVar23 = fVar3;
          fVar25 = fVar2;
          fVar36 = fVar3;
          fVar41 = fVar3;
          fStack_208 = fVar20;
          if (uStack_1b0 == 0) {
            fStack_204 = _DAT_142e36f28;
            _auStack_178 = ZEXT416((uint)fVar2);
            goto LAB_140853699;
          }
          fStack_200 = _DAT_142e36f3c;
          uStack_1b8 = 0;
          fStack_204 = _DAT_142e36f28;
          _auStack_178 = ZEXT416((uint)fVar2);
          auStack_168 = ZEXT416((uint)fVar20);
          fVar33 = fVar20;
          goto LAB_140853274;
        }
        uVar15 = (ushort)(uVar8 - 1) & (ushort)uVar8;
        uVar8 = CONCAT22((short)(uVar8 - 1 >> 0x10),uVar15);
      }
      auVar27[0] = -(*pcVar1 == -1);
      auVar27[1] = -(pcVar1[1] == -1);
      auVar27[2] = -(pcVar1[2] == -1);
      auVar27[3] = -(pcVar1[3] == -1);
      auVar27[4] = -(pcVar1[4] == -1);
      auVar27[5] = -(pcVar1[5] == -1);
      auVar27[6] = -(pcVar1[6] == -1);
      auVar27[7] = -(pcVar1[7] == -1);
      auVar27[8] = -(pcVar1[8] == -1);
      auVar27[9] = -(pcVar1[9] == -1);
      auVar27[10] = -(pcVar1[10] == -1);
      auVar27[0xb] = -(pcVar1[0xb] == -1);
      auVar27[0xc] = -(pcVar1[0xc] == -1);
      auVar27[0xd] = -(pcVar1[0xd] == -1);
      auVar27[0xe] = -(pcVar1[0xe] == -1);
      auVar27[0xf] = -(pcVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar27 >> 7,0) & 1) != 0 || (SUB161(auVar27 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar27 >> 0x17,0) & 1) != 0) || (SUB161(auVar27 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar27 >> 0x27,0) & 1) != 0) || (SUB161(auVar27 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar27 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar27 >> 0x3f,0) & 1) != 0) || (SUB161(auVar27 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar27 >> 0x4f,0) & 1) != 0) || (SUB161(auVar27 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar27 >> 0x5f,0) & 1) != 0) || (SUB161(auVar27 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar27 >> 0x6f,0) & 1) != 0) || (SUB161(auVar27 >> 0x77,0) & 1) != 0) ||
          auVar27[0xf] < '\0') break;
      uVar11 = uVar11 + lVar12 + 0x10;
      lVar12 = lVar12 + 0x10;
    }
  }
  goto LAB_140853727;
  while( true ) {
    fVar40 = *(float *)(puStack_1a8 + 1);
    fVar4 = *(float *)(puStack_190 + 1);
    fVar38 = (float)*puStack_1a8;
    fVar39 = (float)*puStack_190;
    fVar37 = fVar39 - fVar38;
    fVar30 = *(float *)((longlong)puStack_190 + 4) - *(float *)((longlong)puStack_1a8 + 4);
    fVar31 = fVar4 - fVar40;
    fVar32 = fVar31 * fVar31 + fVar30 * fVar30 + fVar37 * fVar37;
    if (fVar32 <= _DAT_143006dc0) {
      fVar32 = _DAT_143006dc0;
    }
    fVar32 = ((fVar3 - fVar40) * fVar31 +
             (fVar33 - *(float *)((longlong)puStack_1a8 + 4)) * fVar30 + (fVar2 - fVar38) * fVar37)
             / fVar32;
    fVar33 = 0.0;
    if (0.0 <= fVar32) {
      fVar33 = fVar32;
    }
    fVar32 = _DAT_142e36f28;
    if (fVar33 <= _DAT_142e36f28) {
      fVar32 = fVar33;
    }
    puStack_198 = puVar13;
    puStack_180 = puVar14;
    if ((fVar32 < 0.0) || (_DAT_142e36f28 < fVar32)) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc83b0(&UNK_14300c818,0x2f,&UNK_14300c880);
    }
    fVar31 = _DAT_142e36f28 - fVar32;
    fVar30 = fVar31 * fVar40 + fVar32 * fVar4;
    fVar38 = fVar31 * fVar38 + fVar32 * fVar39;
    fVar39 = fVar31 * (float)((ulonglong)*puStack_1a8 >> 0x20) +
             fVar32 * (float)((ulonglong)*puStack_190 >> 0x20);
    fVar40 = fVar31 * fVar40 + fVar32 * fVar4;
    fVar33 = (fVar38 - uStack_f8._4_4_) * (fVar38 - uStack_f8._4_4_) +
             (fVar39 - (float)auStack_168._0_4_) * (fVar39 - (float)auStack_168._0_4_) +
             (fVar30 - (float)uStack_f8) * (fVar30 - (float)uStack_f8);
    if (fVar33 < fStack_200) {
      fStack_204 = (float)pdb_140de9fd0();
      fVar20 = fVar32 * (float)*puVar14 + fVar31 * (float)*puVar13;
      fVar23 = fVar32 * (float)((ulonglong)*puVar14 >> 0x20) +
               fVar31 * (float)((ulonglong)*puVar13 >> 0x20);
      fVar25 = _DAT_142e36f28 / SQRT(fVar23 * fVar23 + fVar20 * fVar20);
      auVar26._0_4_ = fVar25 * fVar20;
      auVar26._4_4_ = (float)((uint)fVar25 ^ _DAT_142e37820) * fVar23;
      auVar26._8_4_ = 0;
      auVar26._12_4_ = _UNK_142e37824 * 0.0;
      uVar8 = (uint)((int)fVar25 - 1U < 0x7fffff ||
                    (int)ABS(fVar25) - 0x800000U < 0x7f000000 && -1 < (int)fVar25);
      auVar22._0_4_ = uVar8 << 0x1f;
      auVar22._4_4_ = uVar8 << 0x1f;
      auVar22._8_4_ = uVar8 << 0x1f;
      auVar22._12_4_ = uVar8 << 0x1f;
      auVar28._0_4_ = auVar22._0_4_ >> 0x1f;
      auVar28._4_4_ = auVar22._4_4_ >> 0x1f;
      auVar28._8_4_ = auVar22._8_4_ >> 0x1f;
      auVar28._12_4_ = auVar22._12_4_ >> 0x1f;
      auVar22 = ~auVar22 & _DAT_14300c760 | auVar28 & auVar26;
      uVar21 = auVar22._0_4_;
      uVar24 = auVar22._4_4_;
      uStack_150 = CONCAT44(uVar21,uVar24);
      pdb_140df4520(&fStack_128,&uStack_150);
      fVar41 = fStack_204 + _DAT_142f95160;
      fVar23 = _DAT_14300c770 * _DAT_14300c770 * _DAT_14300c780 + fVar30;
      fVar25 = fStack_128 * fVar41 * _UNK_14300c784 + fVar38;
      fVar20 = fStack_124 * fVar41 * _UNK_14300c788 + fVar39;
      fVar36 = fStack_120 * fVar41 * _UNK_14300c78c + fVar40;
      uStack_150 = CONCAT44(uVar21,uVar24);
      pdb_140df4520(&fStack_128,&uStack_150);
      auStack_178._4_4_ = fVar38;
      auStack_178._0_4_ = fVar38;
      fStack_170 = fVar40;
      fStack_16c = fVar40;
      fVar34 = fVar38 + fStack_128 * fVar41 * _DAT_142e61230;
      fVar35 = fVar39 + fStack_124 * fVar41 * _UNK_142e61234;
      fVar41 = fVar41 * fStack_120 * _DAT_142e36f38 + fVar30;
      fStack_208 = fVar39;
      fStack_200 = fVar33;
    }
    fVar33 = (float)auStack_168._0_4_;
    if (uStack_1b0 <= uStack_1b8) break;
LAB_140853274:
    puVar13 = (undefined8 *)((lStack_1d8 + uStack_1b8) * 0xc + lStack_1f8);
    lVar10 = (lStack_1d8 + uStack_1b8) * 4 + lStack_1e8;
    puVar14 = (undefined8 *)(uStack_1b8 * 8 + lStack_1c8);
    if (puStack_1a8 == (undefined8 *)0x0) {
      uStack_150 = 1;
      plStack_130 = &lStack_1f8;
      uStack_1b8 = uStack_1b8 + 1;
      puStack_148 = puVar13;
      lStack_140 = lVar10;
      puStack_138 = puVar14;
      pdb_1414abb20(&fStack_128,&uStack_150);
      puStack_1a8 = (undefined8 *)CONCAT44(fStack_124,fStack_128);
      lStack_1a0 = CONCAT44(uStack_11c,fStack_120);
      lStack_188 = lStack_108;
      if (puStack_1a8 == (undefined8 *)0x0) break;
      puStack_190 = puStack_110;
      puVar14 = puStack_100;
      puVar13 = puStack_118;
      fVar33 = (float)auStack_168._0_4_;
    }
    else {
      puStack_1a8 = puStack_190;
      lStack_1a0 = lStack_188;
      bVar18 = puStack_190 == (undefined8 *)0x0;
      puStack_190 = puVar13;
      puVar13 = puStack_180;
      uStack_1b8 = uStack_1b8 + 1;
      lStack_188 = lVar10;
      if (bVar18) break;
    }
  }
LAB_140853699:
  lVar10 = *(longlong *)(lVar17 + -0x80);
  if ((lVar10 == 0) ||
     ((pfVar5 = *(float **)(lVar17 + -0x88),
      _DAT_142e36f50 <=
      SQRT((pfVar5[2] - fVar23) * (pfVar5[2] - fVar23) +
           (*pfVar5 - (float)auStack_178._0_4_) * (*pfVar5 - (float)auStack_178._0_4_)) &&
      ((pfVar5 + lVar10 * 3 == (float *)0xc ||
       (_DAT_142e36f50 <=
        SQRT((pfVar5[lVar10 * 3 + -1] - fVar23) * (pfVar5[lVar10 * 3 + -1] - fVar23) +
             (pfVar5[lVar10 * 3 + -3] - (float)auStack_178._0_4_) *
             (pfVar5[lVar10 * 3 + -3] - (float)auStack_178._0_4_)))))))) {
    *param_1 = 1;
    param_1[1] = param_2;
    param_1[2] = param_3;
    param_1[3] = auStack_178._0_4_;
    param_1[4] = fStack_208;
    param_1[5] = fVar23;
    param_1[6] = fVar25;
    param_1[7] = fVar20;
    param_1[8] = fVar36;
    *(ulonglong *)(param_1 + 9) = CONCAT44(fVar35,fVar34);
    param_1[0xb] = fVar41;
    param_1[0xc] = fStack_204;
    return;
  }
LAB_140853727:
  *param_1 = 2;
  return;
}

