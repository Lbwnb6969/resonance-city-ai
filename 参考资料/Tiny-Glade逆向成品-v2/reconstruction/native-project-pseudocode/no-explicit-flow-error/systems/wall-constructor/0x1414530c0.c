// VA 0x1414530c0, PDB extent 842 bytes
// system_wall_constructor::construct_wooden_walls::construct_wall_boards::emit_curved_horizontal_wall_board_piece<system_wall_constructor::construct_walls::construct_walls::closure_env$11>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_wooden_walls/construct_wall_boards.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_wall_constructor::construct_wooden_walls::construct_wall_boards::emit_curved_horizontal_wall_board_piece<system_wall_constructor::construct_walls::construct_walls::closure_env$11>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_wooden_walls/construct_wall_boards.rs
   Extent: 842 */

void pdb_1414530c0(undefined8 param_1,uint param_2,longlong param_3,float param_4,float param_5,
                  float param_6,float param_7,float param_8,undefined4 param_9,undefined8 param_10,
                  longlong *param_11)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  undefined4 uVar5;
  longlong lVar6;
  float *pfVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  float fVar16;
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
                    /* WARNING: Subroutine does not return */
      pdb_142dc83b0(&UNK_143307f00,0x1d,&UNK_143307f48);
    }
    fVar16 = _DAT_142f57bcc / param_4;
    uVar12 = pub_142e32a70(param_5 / param_4,_DAT_142e36f28);
    fVar9 = (float)uVar12;
    fVar11 = (float)((ulonglong)uVar12 >> 0x20);
    uVar12 = pub_142e32a70();
    fVar14 = (float)((ulonglong)uVar12 >> 0x20);
    fVar10 = (float)uVar12;
    auVar13._0_4_ = (uint)(fVar10 + _DAT_142e37950) & -(uint)(fVar10 < 0.0);
    auVar13._4_4_ = (uint)(fVar9 + _UNK_142e37954) & -(uint)(fVar9 < 0.0);
    auVar13._8_4_ = (uint)(fVar14 + _UNK_142e37958) & -(uint)(fVar14 < 0.0);
    auVar13._12_4_ = (uint)(fVar11 + _UNK_142e3795c) & -(uint)(fVar11 < 0.0);
    auVar4._4_4_ = ~-(uint)(fVar9 < 0.0) & (uint)fVar9;
    auVar4._0_4_ = ~-(uint)(fVar10 < 0.0) & (uint)fVar10;
    auVar4._8_4_ = ~-(uint)(fVar14 < 0.0) & (uint)fVar14;
    auVar4._12_4_ = ~-(uint)(fVar11 < 0.0) & (uint)fVar11;
    fVar14 = param_4 * SUB164(auVar13 | auVar4,0);
    fVar15 = param_4 * SUB164(auVar13 | auVar4,4);
    fVar9 = (float)pdb_141c40430(param_3 + 0xc);
    fVar10 = (float)pdb_141c40430(param_3 + 0xc);
    fVar10 = fVar16 * fVar14 - fVar10;
    fVar9 = fVar16 * fVar15 - fVar9;
    fVar11 = _DAT_142f57bcc + fVar10;
    uVar8 = -(uint)(fVar9 < fVar10);
    uStack_1a0 = ~-(uint)(fVar15 < fVar14) & (uint)(param_4 + fVar14) |
                 (uint)fVar14 & -(uint)(fVar15 < fVar14);
    fStack_19c = param_7 + param_8;
    fStack_1a4 = param_7;
    pfVar7 = &fStack_1a8;
    fStack_1a8 = fVar15;
    uVar5 = pdb_1424bd0e0(param_10,pfVar7);
    pdb_140df4540(auStack_108,param_3,param_7);
    pdb_140aaa870(&fStack_1a8,auStack_108,*(undefined4 *)(param_3 + 8),param_9,param_8,fVar9,
                  ~uVar8 & (uint)fVar11 | (uint)fVar10 & uVar8,3);
    uVar8 = pdb_140315970(&uStack_1b0);
    pdb_140aaac40(auStack_108,&fStack_1a8,(uVar8 ^ param_2) + (int)pfVar7 * 10);
    pdb_140aaa7d0(&fStack_1a8,auStack_108,2);
    pdb_140aaab70(&uStack_158,&fStack_1a8,uVar5);
    lVar2 = param_11[2];
    if (lVar2 == *param_11) {
      pdb_142d8db00(param_11);
    }
    lVar3 = param_11[1];
    lVar6 = lVar2 * 0x50;
    puVar1 = (undefined8 *)(lVar3 + 0x40 + lVar6);
    *puVar1 = uStack_118;
    puVar1[1] = uStack_110;
    puVar1 = (undefined8 *)(lVar3 + 0x30 + lVar6);
    *puVar1 = uStack_128;
    puVar1[1] = uStack_120;
    puVar1 = (undefined8 *)(lVar3 + 0x20 + lVar6);
    *puVar1 = uStack_138;
    puVar1[1] = uStack_130;
    puVar1 = (undefined8 *)(lVar3 + 0x10 + lVar6);
    *puVar1 = uStack_148;
    puVar1[1] = uStack_140;
    *(undefined8 *)(lVar3 + lVar6) = uStack_158;
    ((undefined8 *)(lVar3 + lVar6))[1] = uStack_150;
    param_11[2] = lVar2 + 1;
  }
  return;
}

