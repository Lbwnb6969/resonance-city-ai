// VA 0x140b50920, PDB extent 2298 bytes
// country_core::systems::ui_move_shapes::move_gizmo_and_trigger_vol
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui_move_shapes.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::ui_move_shapes::move_gizmo_and_trigger_vol
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui_move_shapes.rs
   Extent: 2298 */

longlong pdb_140b50920(ulonglong *param_1,ulonglong *param_2,longlong *param_3,undefined8 param_4,
                      undefined8 param_5,float param_6,char param_7,undefined4 param_8,
                      undefined8 param_9)

{
  byte bVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  code *pcVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined7 uVar8;
  char cVar9;
  ulonglong arg0;
  ulonglong *puVar10;
  byte *pbVar11;
  byte *pbVar12;
  float *pfVar13;
  undefined8 uVar14;
  longlong lVar15;
  bool bVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auStack_1f0 [24];
  undefined8 uStack_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  byte bStack_1c8;
  undefined6 uStack_1c7;
  char cStack_1c1;
  undefined8 uStack_1c0;
  ulonglong uStack_1b8;
  undefined1 uStack_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  ulonglong *puStack_198;
  longlong lStack_190;
  ulonglong uStack_188;
  byte *pbStack_180;
  ulonglong uStack_178;
  ulonglong uStack_168;
  ulonglong uStack_160;
  undefined8 uStack_158;
  uint uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  uint uStack_140;
  undefined4 uStack_13c;
  undefined8 uStack_138;
  code *pcStack_130;
  float *pfStack_128;
  code *pcStack_120;
  ulonglong *puStack_118;
  code *pcStack_110;
  int iStack_f8;
  undefined1 uStack_e0;
  undefined1 uStack_d0;
  undefined4 uStack_cf;
  undefined4 uStack_cb;
  undefined4 uStack_c7;
  undefined3 uStack_c3;
  undefined1 uStack_c0;
  undefined7 uStack_bf;
  undefined2 uStack_b0;
  ulonglong *puStack_a8;
  float fStack_9c;
  ulonglong uStack_98;
  float *pfStack_90;
  byte *pbStack_88;
  ulonglong *puStack_80;
  undefined1 uStack_71;
  undefined8 uStack_70;
  
  fVar19 = _DAT_142e36f28;
  uStack_70 = 0xfffffffffffffffe;
  fVar17 = (param_6 + _DAT_142e36f38) / _DAT_142e37874;
  fVar18 = 0.0;
  if (0.0 <= fVar17) {
    fVar18 = fVar17;
  }
  fVar17 = _DAT_142e36f28;
  if (fVar18 <= _DAT_142e36f28) {
    fVar17 = fVar18;
  }
  fVar17 = (_DAT_142e3788c - (fVar17 + fVar17)) * fVar17 * fVar17;
  fVar17 = (_DAT_142e36f28 - fVar17) * _DAT_142e36f50 + fVar17;
  fVar18 = _DAT_142e37838 * fVar17;
  uStack_140 = (uint)param_1[1];
  uStack_148 = (undefined4)*param_1;
  uStack_144 = (undefined4)(*param_1 >> 0x20);
  uStack_158 = (float *)*param_2;
  uStack_150 = (uint)param_2[1];
  uStack_14c = *(undefined4 *)((longlong)param_2 + 0xc);
  uStack_13c = 0x3f800000;
  uStack_138._0_4_ = 0x3f800000;
  uStack_138._4_4_ = 0x3f800000;
  puStack_198 = param_2;
  puStack_80 = param_1;
  pdb_140b3d590(auStack_1f0,fVar18,_DAT_142e36f50,fVar18,&uStack_158);
  uVar2 = *(uint *)(*param_3 + 0x10);
  uStack_1d8 = (undefined1 *)&param_5;
  uStack_1d0 = 0x40b55410;
  uStack_1cc = 1;
  uStack_71 = 1;
  pdb_140f60760(&uStack_158,&UNK_1430599f0,&uStack_1d8);
  bVar16 = 2 < uVar2;
  iStack_f8 = (uint)bVar16 * 3;
  pbStack_180 = (byte *)CONCAT44(uStack_14c,uStack_150);
  uStack_188 = (ulonglong)uStack_158;
  uStack_178 = CONCAT44(uStack_144,uStack_148);
  uStack_1d8._7_1_ = (undefined1)auStack_1f0._0_8_;
  uStack_1d0 = SUB84(auStack_1f0._0_8_,1);
  uStack_1cc._0_3_ = SUB83(auStack_1f0._0_8_,5);
  uStack_1cc._3_1_ = (undefined1)auStack_1f0._8_8_;
  bStack_1c8 = SUB81(auStack_1f0._8_8_,1);
  uStack_1c7 = SUB86(auStack_1f0._8_8_,2);
  cStack_1c1 = (char)auStack_1f0._16_8_;
  uStack_1c0._0_7_ = SUB87(auStack_1f0._16_8_,1);
  uStack_cf = (undefined4)uStack_1d8;
  uStack_cb = uStack_1d8._4_4_;
  uStack_c7 = uStack_1d0;
  _uStack_c3 = CONCAT13(uStack_1cc._3_1_,(undefined3)uStack_1cc);
  uStack_bf = SUB87(auStack_1f0._8_8_,1);
  uStack_158 = (float *)0x0;
  uStack_150 = 8;
  uStack_14c = 0;
  uStack_148 = 0;
  uStack_144 = 0;
  uStack_140 = (uint)bVar16;
  uStack_138._0_4_ = 0;
  uStack_138._4_4_ = 0;
  pfStack_128 = (float *)CONCAT44(pfStack_128._4_4_,(uint)bVar16 * 2);
  pcStack_110 = (code *)CONCAT44(pcStack_110._4_4_,iStack_f8);
  uStack_e0 = 0;
  uStack_d0 = 2;
  uStack_b0 = 0x100;
  uStack_71 = 0;
  pfVar13 = (float *)&uStack_188;
  lStack_190 = pdb_1409008d0(param_4,&uStack_188,&uStack_158);
  pfStack_90 = pfVar13;
  if (param_7 != '\0') {
    uStack_158 = (float *)CONCAT44((int)puStack_80[1],(int)*puStack_80);
    uStack_71 = 0;
    pdb_140df4540(&uStack_168,&uStack_158,param_8);
    pbStack_180 = (byte *)CONCAT44(pbStack_180._4_4_,(int)puStack_80[1]);
    uStack_188 = *puStack_80;
    uStack_158 = (float *)&param_5;
    uStack_150 = 0x40b55410;
    uStack_14c = 1;
    uStack_148 = SUB84(puStack_80,0);
    uStack_144 = (undefined4)((ulonglong)puStack_80 >> 0x20);
    uStack_140 = 0x40f33d80;
    uStack_13c = 1;
    pcStack_130 = pdb_140f33df0;
    pcStack_120 = pdb_140f33df0;
    uStack_71 = 0;
    pfStack_128 = (float *)&uStack_188;
    uStack_138 = &uStack_168;
    pdb_140f60760(&uStack_1d8,&UNK_1430599fd,&uStack_158);
    cVar9 = cStack_1c1;
    uVar3 = CONCAT44(uStack_1d8._4_4_,(undefined4)uStack_1d8);
    pbVar12 = (byte *)CONCAT44(uStack_1cc,uStack_1d0);
    uVar8 = CONCAT61(uStack_1c7,bStack_1c8);
    uVar4 = CONCAT17(cStack_1c1,uVar8);
    uStack_150 = (undefined4)uStack_160;
    uStack_158 = (float *)uStack_168;
    uStack_14c = (undefined4)*puStack_80;
    uStack_148 = (undefined4)(*puStack_80 >> 0x20);
    uStack_144 = (undefined4)puStack_80[1];
    pdb_14007ee60();
    puVar10 = (ulonglong *)pub_1406abab0(0x28,8);
    uStack_98 = uVar3;
    pbStack_88 = pbVar12;
    if (puVar10 == (ulonglong *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,0x28);
    }
    *puVar10 = 1;
    puVar10[1] = 1;
    *(undefined4 *)(puVar10 + 2) = (undefined4)uStack_158;
    *(undefined4 *)((longlong)puVar10 + 0x14) = uStack_158._4_4_;
    *(uint *)(puVar10 + 3) = uStack_150;
    *(undefined4 *)((longlong)puVar10 + 0x1c) = uStack_14c;
    puVar10[4] = CONCAT44(uStack_144,uStack_148);
    uStack_150 = 0x43059a18;
    uStack_14c = 1;
    uStack_158 = (float *)puVar10;
    if (cVar9 < '\0') {
      uVar14 = 0;
LAB_140b50c49:
      puStack_80 = puVar10;
      pdb_142dc7e2a(uVar14,uVar4);
      goto LAB_140b51008;
    }
    if (uVar4 == 0) {
      pbVar11 = (byte *)0x1;
    }
    else {
      pdb_14007ee60();
      uVar14 = 1;
      pbVar11 = pub_1406abab0(uVar4,1);
      if (pbVar11 == (byte *)0x0) goto LAB_140b50c49;
      pub_142e32760(pbVar11,pbVar12,uVar4);
    }
    uStack_158 = pfStack_90;
    uStack_150 = uStack_150 & 0xffffff00;
    uStack_148 = (undefined4)uVar8;
    uStack_144 = (undefined4)(uVar4 >> 0x20);
    uStack_140 = (uint)pbVar11;
    uStack_13c = (undefined4)((ulonglong)pbVar11 >> 0x20);
    pfStack_128 = (float *)&UNK_143059a18;
    uStack_138._0_4_ = uStack_148;
    uStack_138._4_4_ = uStack_144;
    pcStack_130 = (code *)puVar10;
    pdb_141a88350(param_9,&uStack_158);
    if (uStack_98 != 0) {
      pub_1406abac0(pbStack_88,uStack_98,1);
    }
  }
  if (*(char *)(lStack_190 + 0x18) == '\x02') {
    if ((*(float **)(lStack_190 + 0x38) == pfStack_90) && (*(char *)(lStack_190 + 0x19) != '\x02'))
    goto LAB_140b50d25;
  }
  else if ((*(char *)(lStack_190 + 0x18) == '\x01') &&
          ((*(float **)(lStack_190 + 0x38) == pfStack_90 && (*(char *)(lStack_190 + 0x19) != '\0')))
          ) {
LAB_140b50d25:
    fVar19 = _DAT_142e37990;
  }
  fVar17 = fVar17 * fVar19;
  bStack_1c8 = 0;
  uStack_1c0._0_7_ = 0x143059920;
  uStack_1c0._7_1_ = 0;
  uStack_1b8 = 10;
  uStack_1b0 = 1;
  puStack_1a8 = &UNK_143059a48;
  uStack_1a0 = 0x12;
  lVar15 = 0;
  fStack_9c = fVar17;
  while( true ) {
    pfStack_128 = &fStack_9c;
    uStack_138 = &uStack_168;
    bVar1 = (&bStack_1c8)[lVar15 * 0x18];
    if (bVar1 == 2) {
      return lStack_190;
    }
    uVar3 = (&uStack_1c0)[lVar15 * 3];
    uVar4 = (&uStack_1b8)[lVar15 * 3];
    uStack_158 = (float *)&param_5;
    uStack_150 = 0x40b55410;
    uStack_14c = 1;
    uStack_148 = SUB84(puStack_80,0);
    uStack_144 = (undefined4)((ulonglong)puStack_80 >> 0x20);
    uStack_140 = 0x40f33d80;
    uStack_13c = 1;
    pcStack_130 = pdb_1402ed400;
    pcStack_120 = pdb_140f70fc0;
    puStack_118 = puStack_198;
    pcStack_110 = pdb_140f33730;
    uStack_71 = 0;
    uStack_168 = uVar3;
    uStack_160 = uVar4;
    pdb_140f60760(&uStack_188,&UNK_143059a5a,&uStack_158);
    arg0 = uStack_178;
    uStack_98 = uStack_188;
    pbStack_88 = pbStack_180;
    uStack_150 = (uint)puStack_80[1];
    uStack_158 = (float *)*puStack_80;
    uVar6 = *puStack_198;
    uVar7 = puStack_198[1];
    pdb_14007ee60();
    puVar10 = (ulonglong *)pub_1406abab0(0x50,0x10);
    if (puVar10 == (ulonglong *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(0x10,0x50);
    }
    lVar15 = lVar15 + 1;
    *puVar10 = 1;
    puVar10[1] = 1;
    puVar10[2] = uVar3;
    puVar10[3] = uVar4;
    puVar10[4] = uVar6;
    puVar10[5] = uVar7;
    *(float *)(puVar10 + 6) = fVar17;
    *(float **)((longlong)puVar10 + 0x34) = uStack_158;
    *(uint *)((longlong)puVar10 + 0x3c) = uStack_150;
    *(byte *)(puVar10 + 8) = bVar1 & 1;
    uStack_150 = 0x43059a70;
    uStack_14c = 1;
    uStack_158 = (float *)puVar10;
    if ((longlong)arg0 < 0) break;
    if (arg0 == 0) {
      pbVar12 = (byte *)0x1;
    }
    else {
      puStack_a8 = puVar10;
      pdb_14007ee60();
      uVar14 = 1;
      pbVar12 = pub_1406abab0(arg0,1);
      if (pbVar12 == (byte *)0x0) goto LAB_140b50fd8;
      pub_142e32760(pbVar12,pbStack_88,arg0);
      puVar10 = puStack_a8;
    }
    uStack_158 = pfStack_90;
    uStack_150 = uStack_150 & 0xffffff00;
    uStack_148 = (undefined4)arg0;
    uStack_144 = (undefined4)(arg0 >> 0x20);
    uStack_140 = (uint)pbVar12;
    uStack_13c = (undefined4)((ulonglong)pbVar12 >> 0x20);
    pfStack_128 = (float *)&UNK_143059a70;
    uStack_138._0_4_ = uStack_148;
    uStack_138._4_4_ = uStack_144;
    pcStack_130 = (code *)puVar10;
    pdb_141a88350(param_9,&uStack_158);
    if (uStack_98 != 0) {
      pub_1406abac0(pbStack_88,uStack_98,1);
    }
    if (lVar15 == 2) {
      return lStack_190;
    }
  }
  uVar14 = 0;
  puStack_a8 = puVar10;
LAB_140b50fd8:
  pdb_142dc7e2a(uVar14,arg0);
LAB_140b51008:
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
}

