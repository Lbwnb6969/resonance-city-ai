// Matched PDB: system_wall_constructor::construct_wooden_walls::construct_wall_boards::plan_rectangle_wallspace_regions
// VA 0x141489480, PDB extent 775 bytes
// Ghidra pseudocode; types and unresolved calls are not original source.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB:
   system_wall_constructor::construct_wooden_walls::construct_wall_boards::plan_rectangle_wallspace_regions
   Extent: 775 bytes. No whole-program auto-analysis. */

undefined8 *
pdb_141489480(undefined8 *param_1,longlong param_2,longlong param_3,float param_4,undefined1 param_5
             ,char *param_6,undefined1 param_7)

{
  undefined4 uVar1;
  code *pcVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  undefined4 **ppuVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float fVar15;
  undefined1 uStack_171;
  float fStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 *puStack_158;
  undefined1 *puStack_150;
  float *pfStack_148;
  longlong lStack_140;
  undefined4 *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_d8;
  
  uStack_171 = param_5;
  puStack_158 = (undefined4 *)0xffffffffffffffff;
  puStack_150 = (undefined1 *)0xffffffffffffffff;
  ppuVar5 = &puStack_158;
  if (*param_6 != '\0') {
    ppuVar5 = (undefined4 **)(param_6 + 8);
  }
  uStack_168 = *(undefined4 *)ppuVar5;
  uStack_164 = *(undefined4 *)((longlong)ppuVar5 + 4);
  uStack_160 = *(undefined4 *)(ppuVar5 + 1);
  uStack_15c = *(undefined4 *)((longlong)ppuVar5 + 0xc);
  fStack_170 = param_4;
  if ((*(byte *)(param_3 + 0x1c) & 1) == 0) {
    uVar3 = pdb_140930190(param_2,param_7);
    fVar15 = extraout_XMM0_Da_00;
    if ((uVar3 & 1) == 0) {
      fVar15 = *(float *)(param_2 + 0x278);
    }
    if (param_4 <= _DAT_142e37ad4 + fVar15) {
      puVar4 = (undefined8 *)0x8;
      uVar6 = 0;
    }
    else {
      pdb_14007ee60();
      puVar4 = (undefined8 *)func_0x0001406abab0(0x28,8);
      if (puVar4 == (undefined8 *)0x0) {
        pdb_142dc7e11(8,0x28);
        pcVar2 = (code *)swi(3);
        puVar4 = (undefined8 *)(*pcVar2)();
        return puVar4;
      }
      uVar1 = *(undefined4 *)(param_3 + 0x3c);
      *puVar4 = 0;
      *(undefined4 *)(puVar4 + 2) = 0;
      *(float *)((longlong)puVar4 + 0x14) = fVar15;
      *(undefined4 *)(puVar4 + 3) = uVar1;
      *(float *)((longlong)puVar4 + 0x1c) = param_4;
      *(undefined1 *)(puVar4 + 4) = 0;
      uVar6 = 1;
    }
    *param_1 = uVar6;
    param_1[1] = puVar4;
    param_1[2] = uVar6;
  }
  else {
    pfStack_148 = *(float **)(param_3 + 0x30);
    puStack_158 = *(undefined4 **)(param_3 + 0x20);
    puStack_150 = *(undefined1 **)(param_3 + 0x28);
    fVar7 = (float)pdb_140df0700(&puStack_158,0);
    fVar15 = *(float *)(param_3 + 0x3c);
    fVar8 = (float)pdb_140df0700(&puStack_158,1);
    fVar9 = (float)pdb_140df0700(&puStack_158,1);
    fVar10 = (float)pdb_140df0700(&puStack_158,2);
    fVar11 = (float)pdb_140df0700(&puStack_158,2);
    fVar12 = (float)pdb_140df0700(&puStack_158,3);
    fVar13 = (float)pdb_140df0700(&puStack_158,3);
    fVar14 = (float)pdb_140df0700(&puStack_158,4);
    uVar3 = pdb_140930190(param_2,param_7);
    uStack_16c = extraout_XMM0_Da;
    if ((uVar3 & 1) == 0) {
      uStack_16c = *(undefined4 *)(param_2 + 0x278);
    }
    puStack_158 = &uStack_168;
    puStack_150 = &uStack_171;
    pfStack_148 = &fStack_170;
    puStack_138 = &uStack_16c;
    uStack_130 = 0;
    uStack_128 = 4;
    fStack_120 = fVar7 * fVar15;
    fStack_11c = fVar8 * fVar15;
    fStack_118 = fVar9 * fVar15;
    fStack_114 = fVar10 * fVar15;
    fStack_110 = fVar11 * fVar15;
    fStack_10c = fVar12 * fVar15;
    fStack_108 = fVar13 * fVar15;
    fStack_104 = fVar14 * fVar15;
    uStack_d8 = 0;
    uStack_100 = 0;
    uStack_f8 = 0;
    lStack_140 = param_2;
    pdb_1413ef620(param_1,&puStack_158);
  }
  return param_1;
}

