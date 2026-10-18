// VA 0x141489480, PDB extent 775 bytes
// system_wall_constructor::construct_wooden_walls::construct_wall_boards::plan_rectangle_wallspace_regions
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_wooden_walls/construct_wall_boards.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_wall_constructor::construct_wooden_walls::construct_wall_boards::plan_rectangle_wallspace_regions
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_wooden_walls/construct_wall_boards.rs
   Extent: 775 */

undefined8 *
pdb_141489480(undefined8 *param_1,longlong param_2,longlong param_3,float param_4,undefined1 param_5
             ,char *param_6,undefined1 param_7)

{
  undefined4 uVar1;
  ulonglong uVar2;
  byte *pbVar3;
  undefined4 **ppuVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float fVar14;
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
  ppuVar4 = &puStack_158;
  if (*param_6 != '\0') {
    ppuVar4 = (undefined4 **)(param_6 + 8);
  }
  uStack_168 = *(undefined4 *)ppuVar4;
  uStack_164 = *(undefined4 *)((longlong)ppuVar4 + 4);
  uStack_160 = *(undefined4 *)(ppuVar4 + 1);
  uStack_15c = *(undefined4 *)((longlong)ppuVar4 + 0xc);
  fStack_170 = param_4;
  if ((*(byte *)(param_3 + 0x1c) & 1) == 0) {
    uVar2 = pdb_140930190(param_2,param_7);
    fVar14 = extraout_XMM0_Da_00;
    if ((uVar2 & 1) == 0) {
      fVar14 = *(float *)(param_2 + 0x278);
    }
    if (param_4 <= _DAT_142e37ad4 + fVar14) {
      pbVar3 = (byte *)0x8;
      uVar5 = 0;
    }
    else {
      pdb_14007ee60();
      pbVar3 = pub_1406abab0(0x28,8);
      if (pbVar3 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc7e11(8,0x28);
      }
      uVar1 = *(undefined4 *)(param_3 + 0x3c);
      pbVar3[0] = 0;
      pbVar3[1] = 0;
      pbVar3[2] = 0;
      pbVar3[3] = 0;
      pbVar3[4] = 0;
      pbVar3[5] = 0;
      pbVar3[6] = 0;
      pbVar3[7] = 0;
      pbVar3[0x10] = 0;
      pbVar3[0x11] = 0;
      pbVar3[0x12] = 0;
      pbVar3[0x13] = 0;
      *(float *)(pbVar3 + 0x14) = fVar14;
      *(undefined4 *)(pbVar3 + 0x18) = uVar1;
      *(float *)(pbVar3 + 0x1c) = param_4;
      pbVar3[0x20] = 0;
      uVar5 = 1;
    }
    *param_1 = uVar5;
    param_1[1] = pbVar3;
    param_1[2] = uVar5;
  }
  else {
    pfStack_148 = *(float **)(param_3 + 0x30);
    puStack_158 = *(undefined4 **)(param_3 + 0x20);
    puStack_150 = *(undefined1 **)(param_3 + 0x28);
    fVar6 = (float)pdb_140df0700(&puStack_158,0);
    fVar14 = *(float *)(param_3 + 0x3c);
    fVar7 = (float)pdb_140df0700(&puStack_158,1);
    fVar8 = (float)pdb_140df0700(&puStack_158,1);
    fVar9 = (float)pdb_140df0700(&puStack_158,2);
    fVar10 = (float)pdb_140df0700(&puStack_158,2);
    fVar11 = (float)pdb_140df0700(&puStack_158,3);
    fVar12 = (float)pdb_140df0700(&puStack_158,3);
    fVar13 = (float)pdb_140df0700(&puStack_158,4);
    uVar2 = pdb_140930190(param_2,param_7);
    uStack_16c = extraout_XMM0_Da;
    if ((uVar2 & 1) == 0) {
      uStack_16c = *(undefined4 *)(param_2 + 0x278);
    }
    puStack_158 = &uStack_168;
    puStack_150 = &uStack_171;
    pfStack_148 = &fStack_170;
    puStack_138 = &uStack_16c;
    uStack_130 = 0;
    uStack_128 = 4;
    fStack_120 = fVar6 * fVar14;
    fStack_11c = fVar7 * fVar14;
    fStack_118 = fVar8 * fVar14;
    fStack_114 = fVar9 * fVar14;
    fStack_110 = fVar10 * fVar14;
    fStack_10c = fVar11 * fVar14;
    fStack_108 = fVar12 * fVar14;
    fStack_104 = fVar13 * fVar14;
    uStack_d8 = 0;
    uStack_100 = 0;
    uStack_f8 = 0;
    lStack_140 = param_2;
    pdb_1413ef620(param_1,&puStack_158);
  }
  return param_1;
}

