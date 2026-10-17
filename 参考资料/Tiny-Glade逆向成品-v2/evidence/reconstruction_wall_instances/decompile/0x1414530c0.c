// Matched PDB: system_wall_constructor::construct_wooden_walls::construct_wall_boards::emit_curved_horizontal_wall_board_piece<system_wall_constructor::construct_walls::construct_walls::closure_env$11>
// VA 0x1414530c0, PDB extent 842 bytes
// Ghidra pseudocode; types and unresolved calls are not original source.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB:
   system_wall_constructor::construct_wooden_walls::construct_wall_boards::emit_curved_horizontal_wall_board_piece<system_wall_constructor::construct_walls::construct_walls::closure_env$11>
   Extent: 842 bytes. No whole-program auto-analysis. */

void pdb_1414530c0(undefined8 param_1,uint param_2,longlong param_3,float param_4,float param_5,
                  float param_6,float param_7,float param_8,undefined4 param_9,undefined8 param_10,
                  longlong *param_11)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  undefined4 uVar6;
  longlong lVar7;
  float *pfVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  undefined1 auVar14 [16];
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 uStack_1b0;
  float fStack_1a8;
  float fStack_1a4;
  uint uStack_1a0;
  float fStack_19c;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 auStack_108 [216];
  
  if ((_DAT_142e37848 < param_4) && (_DAT_142e37ad4 <= param_8)) {
    uStack_1b0 = param_1;
    if ((NAN(param_5 / param_4)) || (NAN(param_6 / param_4))) {
      pdb_142dc83b0(&UNK_143307f00,0x1d,&UNK_143307f48);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    fVar17 = _DAT_142f57bcc / param_4;
    uVar13 = func_0x000142e32a70(param_5 / param_4,_DAT_142e36f28);
    fVar10 = (float)uVar13;
    fVar12 = (float)((ulonglong)uVar13 >> 0x20);
    uVar13 = func_0x000142e32a70();
    fVar15 = (float)((ulonglong)uVar13 >> 0x20);
    fVar11 = (float)uVar13;
    auVar14._0_4_ = (uint)(fVar11 + _DAT_142e37950) & -(uint)(fVar11 < 0.0);
    auVar14._4_4_ = (uint)(fVar10 + _UNK_142e37954) & -(uint)(fVar10 < 0.0);
    auVar14._8_4_ = (uint)(fVar15 + _UNK_142e37958) & -(uint)(fVar15 < 0.0);
    auVar14._12_4_ = (uint)(fVar12 + _UNK_142e3795c) & -(uint)(fVar12 < 0.0);
    auVar5._4_4_ = ~-(uint)(fVar10 < 0.0) & (uint)fVar10;
    auVar5._0_4_ = ~-(uint)(fVar11 < 0.0) & (uint)fVar11;
    auVar5._8_4_ = ~-(uint)(fVar15 < 0.0) & (uint)fVar15;
    auVar5._12_4_ = ~-(uint)(fVar12 < 0.0) & (uint)fVar12;
    fVar15 = param_4 * SUB164(auVar14 | auVar5,0);
    fVar16 = param_4 * SUB164(auVar14 | auVar5,4);
    fVar10 = (float)pdb_141c40430(param_3 + 0xc);
    fVar11 = (float)pdb_141c40430(param_3 + 0xc);
    fVar11 = fVar17 * fVar15 - fVar11;
    fVar10 = fVar17 * fVar16 - fVar10;
    fVar12 = _DAT_142f57bcc + fVar11;
    uVar9 = -(uint)(fVar10 < fVar11);
    uStack_1a0 = ~-(uint)(fVar16 < fVar15) & (uint)(param_4 + fVar15) |
                 (uint)fVar15 & -(uint)(fVar16 < fVar15);
    fStack_19c = param_7 + param_8;
    fStack_1a4 = param_7;
    pfVar8 = &fStack_1a8;
    fStack_1a8 = fVar16;
    uVar6 = pdb_1424bd0e0(param_10,pfVar8);
    pdb_140df4540(auStack_108,param_3,param_7);
    pdb_140aaa870(&fStack_1a8,auStack_108,*(undefined4 *)(param_3 + 8),param_9,param_8,fVar10,
                  ~uVar9 & (uint)fVar12 | (uint)fVar11 & uVar9,3);
    uVar9 = pdb_140315970(&uStack_1b0);
    pdb_140aaac40(auStack_108,&fStack_1a8,(uVar9 ^ param_2) + (int)pfVar8 * 10);
    pdb_140aaa7d0(&fStack_1a8,auStack_108,2);
    pdb_140aaab70(&uStack_158,&fStack_1a8,uVar6);
    lVar2 = param_11[2];
    if (lVar2 == *param_11) {
      pdb_142d8db00(param_11);
    }
    lVar3 = param_11[1];
    lVar7 = lVar2 * 0x50;
    puVar1 = (undefined8 *)(lVar3 + 0x40 + lVar7);
    *puVar1 = uStack_118;
    puVar1[1] = uStack_110;
    puVar1 = (undefined8 *)(lVar3 + 0x30 + lVar7);
    *puVar1 = uStack_128;
    puVar1[1] = uStack_120;
    puVar1 = (undefined8 *)(lVar3 + 0x20 + lVar7);
    *puVar1 = uStack_138;
    puVar1[1] = uStack_130;
    puVar1 = (undefined8 *)(lVar3 + 0x10 + lVar7);
    *puVar1 = uStack_148;
    puVar1[1] = uStack_140;
    *(undefined8 *)(lVar3 + lVar7) = uStack_158;
    ((undefined8 *)(lVar3 + lVar7))[1] = uStack_150;
    param_11[2] = lVar2 + 1;
  }
  return;
}

