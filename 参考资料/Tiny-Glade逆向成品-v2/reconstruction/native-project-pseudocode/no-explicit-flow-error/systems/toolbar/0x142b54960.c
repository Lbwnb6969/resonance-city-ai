// VA 0x142b54960, PDB extent 1269 bytes
// toolbar::resouces_and_components::toolbar_layout::ToolbarLayout::setup_screen_and_toolbar_nodes
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/resouces_and_components/toolbar_layout.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   toolbar::resouces_and_components::toolbar_layout::ToolbarLayout::setup_screen_and_toolbar_nodes
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/resouces_and_components/toolbar_layout.rs
   Extent: 1269 */

undefined8 * pdb_142b54960(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined8 in_stack_fffffffffffffd68;
  undefined4 uVar28;
  int iStack_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  int iStack_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
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
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined2 uStack_f8;
  undefined1 uStack_f6;
  
  uVar25 = _UNK_1434d7998;
  uVar24 = _DAT_1434d7990;
  uVar23 = _UNK_1434d7988;
  uVar22 = _DAT_1434d7980;
  uVar21 = _UNK_1434d7978;
  uVar20 = _DAT_1434d7970;
  uVar19 = _UNK_1434d7918;
  uVar18 = _DAT_1434d7910;
  uVar17 = _UNK_1434d7908;
  uVar16 = _DAT_1434d7900;
  uVar15 = _DAT_1434d78d0;
  uVar14 = _UNK_1434d78c8;
  uVar13 = _DAT_1434d78c0;
  uVar12 = _DAT_1434d78b8;
  uVar11 = _UNK_1434d78b0;
  uVar10 = _DAT_1434d78a8;
  uVar9 = _DAT_1434d78a0;
  uVar8 = _UNK_1434d7898;
  uVar7 = _DAT_1434d7890;
  uVar6 = _UNK_1434d7880;
  uVar5 = _DAT_1434d7878;
  uVar4 = _DAT_142e378e0;
  uVar28 = (undefined4)((ulonglong)in_stack_fffffffffffffd68 >> 0x20);
  uStack_1e0 = _DAT_14367e310;
  uStack_1d8 = _UNK_14367e318;
  uStack_1d0 = _DAT_14367e310;
  uStack_1c8 = _UNK_14367e318;
  uStack_190 = _DAT_1434d7930;
  uStack_188 = _UNK_1434d7938;
  uStack_180 = _DAT_1434d7940;
  uStack_178 = _UNK_1434d7948;
  uStack_170 = _DAT_1434d7950;
  uStack_168 = _UNK_1434d7958;
  uStack_160 = _DAT_1434d7960;
  uStack_158 = _UNK_1434d7968;
  uStack_150 = _DAT_1434d7970;
  uStack_148 = _UNK_1434d7978;
  uStack_1e8 = 0;
  uStack_140 = _DAT_1434d7980;
  uStack_138 = _UNK_1434d7988;
  uStack_130 = _DAT_1434d7990;
  uStack_128 = _UNK_1434d7998;
  uStack_1b0 = _DAT_1434d7910;
  uStack_1a8 = _UNK_1434d7918;
  uStack_1c0 = _DAT_1434d7900;
  uStack_1b8 = _UNK_1434d7908;
  uStack_f8 = 0x907;
  uStack_f6 = 4;
  uStack_1a0 = _DAT_1434d7920;
  uStack_198 = _UNK_1434d7928;
  uStack_120 = 2;
  uStack_108 = _DAT_142e378e0;
  uStack_248 = _DAT_1434d7878;
  uStack_240 = _UNK_1434d7880;
  uStack_238 = _DAT_1434d7888;
  uStack_230 = _DAT_1434d7890;
  uStack_228 = _UNK_1434d7898;
  uStack_220 = _DAT_1434d78a0;
  uStack_208 = _DAT_1434d78b8;
  uStack_218 = _DAT_1434d78a8;
  uStack_210 = _UNK_1434d78b0;
  uStack_1f0 = _DAT_1434d78d0;
  uStack_200 = _DAT_1434d78c0;
  uStack_1f8 = _UNK_1434d78c8;
  uStack_100 = 0x707030000000000;
  uStack_118 = 0;
  uStack_110 = 0;
  pdb_1411bded0(&iStack_288,param_2,&uStack_248);
  uVar27 = uStack_280;
  uVar26 = uStack_284;
  if (iStack_288 == 4) {
    lVar2 = *(longlong *)(param_2 + 0xa8);
    if (lVar2 == *(longlong *)(param_2 + 0x98)) {
      pdb_142d7ede0(param_2 + 0x98);
    }
    lVar3 = *(longlong *)(param_2 + 0xa0);
    puVar1 = (undefined8 *)(lVar3 + lVar2 * 0x28);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(lVar3 + 0x10 + lVar2 * 0x28) = uVar26;
    *(undefined4 *)(lVar3 + 0x14 + lVar2 * 0x28) = uVar27;
    *(undefined1 *)(lVar3 + 0x24 + lVar2 * 0x28) = 4;
    *(longlong *)(param_2 + 0xa8) = lVar2 + 1;
    uStack_1a0 = _DAT_14367e320;
    uStack_198 = _UNK_14367e328;
    uStack_190 = _DAT_1434d7930;
    uStack_188 = _UNK_1434d7938;
    uStack_180 = _DAT_1434d7940;
    uStack_178 = _UNK_1434d7948;
    uStack_170 = _DAT_1434d7950;
    uStack_168 = _UNK_1434d7958;
    uStack_160 = _DAT_1434d7960;
    uStack_158 = _UNK_1434d7968;
    uStack_150 = uVar20;
    uStack_148 = uVar21;
    uStack_1e8 = 0;
    uStack_140 = uVar22;
    uStack_138 = uVar23;
    uStack_130 = uVar24;
    uStack_128 = uVar25;
    uStack_1d0 = _DAT_1434d78f0;
    uStack_1c8 = _UNK_1434d78f8;
    uStack_1e0 = CONCAT44(_UNK_1434d78e4,_DAT_1434d78e0);
    uStack_1d8 = CONCAT44(_UNK_1434d78ec,_UNK_1434d78e8);
    uStack_1b0 = uVar18;
    uStack_1a8 = uVar19;
    uStack_1c0 = uVar16;
    uStack_1b8 = uVar17;
    uStack_f8 = 0x907;
    uStack_f6 = 4;
    uStack_120 = 2;
    uStack_108 = uVar4;
    uStack_238 = _DAT_1434d7888;
    uStack_248 = uVar5;
    uStack_240 = uVar6;
    uStack_220 = uVar9;
    uStack_230 = uVar7;
    uStack_228 = uVar8;
    uStack_208 = uVar12;
    uStack_218 = uVar10;
    uStack_210 = uVar11;
    uStack_1f0 = uVar15;
    uStack_200 = uVar13;
    uStack_1f8 = uVar14;
    uStack_100 = 0x707040000000000;
    uStack_118 = 0;
    uStack_110 = 0;
    pdb_1411bded0(&iStack_288,param_2,&uStack_248);
    if (iStack_288 == 4) {
      pdb_1411be050(&iStack_268,param_2,uVar26,uVar27,CONCAT44(uVar28,uStack_284),uStack_280);
      if (iStack_268 == 4) {
        *(undefined4 *)(param_1 + 3) = uVar26;
        *(undefined4 *)((longlong)param_1 + 0x1c) = uVar27;
        *(undefined4 *)(param_1 + 4) = uStack_284;
        *(undefined4 *)((longlong)param_1 + 0x24) = uStack_280;
        *param_1 = 0;
        param_1[1] = 8;
        param_1[2] = 0;
        param_1[5] = 0;
        return param_1;
      }
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_1436088e0,0x2b,&uStack_248,&UNK_1436088c0,&UNK_143608b10);
    }
  }
  uStack_258 = uStack_278;
  uStack_254 = uStack_274;
  uStack_250 = uStack_270;
  uStack_24c = uStack_26c;
  iStack_268 = iStack_288;
  uStack_264 = uStack_284;
  uStack_260 = uStack_280;
  uStack_25c = uStack_27c;
                    /* WARNING: Subroutine does not return */
  pdb_142dc8170(&UNK_1436088e0,0x2b,&iStack_268,&UNK_1436088c0,&UNK_143608af8);
}

