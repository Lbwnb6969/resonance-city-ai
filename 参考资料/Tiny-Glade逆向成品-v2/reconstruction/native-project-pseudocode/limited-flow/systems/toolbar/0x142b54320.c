// VA 0x142b54320, PDB extent 1594 bytes
// toolbar::resouces_and_components::toolbar_layout::ToolbarLayout::add_contextual_menu
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/resouces_and_components/toolbar_layout.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Removing unreachable block (ram,0x000140f3c374) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   toolbar::resouces_and_components::toolbar_layout::ToolbarLayout::add_contextual_menu
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/resouces_and_components/toolbar_layout.rs
   Extent: 1594 */

void pdb_142b54320(longlong param_1,longlong param_2,char param_3,longlong *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  longlong lVar1;
  byte *pbVar2;
  byte *pbVar3;
  char *pcVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  byte *pbVar9;
  longlong lVar10;
  byte *pbVar11;
  ulonglong uVar12;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
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
  undefined2 uStack_138;
  undefined1 uStack_136;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 uStack_f8;
  byte bStack_f0;
  undefined4 uStack_ef;
  undefined3 uStack_eb;
  int iStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  ulonglong uStack_c8;
  byte *pbStack_c0;
  byte *pbStack_b8;
  byte *pbStack_b0;
  longlong lStack_a8;
  byte *pbStack_a0;
  longlong *plStack_98;
  byte *pbStack_90;
  longlong lStack_88;
  ulonglong uStack_80;
  ulonglong uStack_78;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined1 uStack_61;
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  lVar5 = param_4[2];
  if (lVar5 == 0) {
    if (*param_4 != 0) {
      lVar5 = param_4[1];
      uVar8 = GetProcessHeap(lVar5,*param_4 << 6);
                    /* WARNING: Could not recover jumptable at 0x000140f3c38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      HeapFree(uVar8,0,lVar5);
      return;
    }
  }
  else {
    uStack_78 = param_6;
    lVar6 = *(longlong *)(param_1 + 8);
    lVar10 = 0;
    do {
      plStack_98 = param_4;
      if (*(longlong *)(param_1 + 0x10) << 5 == lVar10) {
        uStack_61 = 1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_14367e398);
      }
      lVar1 = lVar10 + 0x20;
      pcVar4 = (char *)(lVar6 + 0x18 + lVar10);
      lVar10 = lVar1;
    } while (*pcVar4 != param_3);
    uStack_1c0 = _DAT_1434d7940;
    uStack_1b8 = _UNK_1434d7948;
    uStack_1d0 = _DAT_1434d7930;
    uStack_1c8 = _UNK_1434d7938;
    uStack_1b0 = _DAT_1434d7950;
    uStack_1a8 = _UNK_1434d7958;
    uStack_1a0 = _DAT_1434d7960;
    uStack_198 = _UNK_1434d7968;
    uStack_190 = _DAT_1434d7970;
    uStack_188 = _UNK_1434d7978;
    uStack_228 = 0;
    uStack_180 = _DAT_1434d7980;
    uStack_178 = _UNK_1434d7988;
    uStack_170 = _DAT_1434d7990;
    uStack_168 = _UNK_1434d7998;
    uStack_220 = _DAT_1434d78e0;
    uStack_218 = _UNK_1434d78e8;
    uStack_210 = _DAT_1434d78f0;
    uStack_208 = _UNK_1434d78f8;
    uStack_1f0 = _DAT_1434d7910;
    uStack_1e8 = _UNK_1434d7918;
    uStack_200 = _DAT_1434d7900;
    uStack_1f8 = _UNK_1434d7908;
    uStack_138 = 0x907;
    uStack_136 = 4;
    uStack_1e0 = _DAT_1434d7920;
    uStack_1d8 = _UNK_1434d7928;
    uStack_160 = 2;
    uStack_148 = _DAT_142e378e0;
    uStack_288 = _DAT_1434d7878;
    uStack_280 = _UNK_1434d7880;
    uStack_278 = _DAT_1434d7888;
    uStack_270 = _DAT_1434d7890;
    uStack_268 = _UNK_1434d7898;
    uStack_260 = _DAT_1434d78a0;
    uStack_248 = _DAT_1434d78b8;
    uStack_258 = _DAT_1434d78a8;
    uStack_250 = _UNK_1434d78b0;
    uStack_230 = _DAT_1434d78d0;
    uStack_240 = _DAT_1434d78c0;
    uStack_238 = _UNK_1434d78c8;
    uStack_140 = 0x707040000000000;
    uStack_158 = 0;
    uStack_150 = 0;
    uStack_61 = 1;
    pdb_1411bded0(&iStack_e8,param_2,&uStack_288);
    if (iStack_e8 != 4) {
      uStack_61 = 1;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_1436088e0,0x2b,&pbStack_b8,&UNK_1436088c0,&UNK_143608af8);
    }
    uStack_6c = uStack_e4;
    uStack_68 = uStack_e0;
    uVar8 = *(undefined8 *)(lVar6 + -0x18 + lVar1);
    lVar10 = *(longlong *)(param_2 + 0xa8);
    if (lVar10 == *(longlong *)(param_2 + 0x98)) {
      uStack_61 = 1;
      pdb_142d7ede0(param_2 + 0x98);
    }
    lVar7 = *(longlong *)(param_2 + 0xa0);
    *(undefined8 *)(lVar7 + lVar10 * 0x28) = 1;
    *(undefined8 *)(lVar7 + 8 + lVar10 * 0x28) = 0;
    *(undefined4 *)(lVar7 + 0x10 + lVar10 * 0x28) = uStack_6c;
    *(undefined4 *)(lVar7 + 0x14 + lVar10 * 0x28) = uStack_68;
    *(undefined8 *)(lVar7 + 0x18 + lVar10 * 0x28) = uVar8;
    *(undefined4 *)(lVar7 + 0x20 + lVar10 * 0x28) = 0x41200000;
    *(undefined1 *)(lVar7 + 0x24 + lVar10 * 0x28) = 0;
    *(longlong *)(param_2 + 0xa8) = lVar10 + 1;
    lStack_a8 = *plStack_98;
    pbVar11 = (byte *)plStack_98[1];
    uVar12 = lVar5 * 0x40;
    pbVar3 = pbVar11 + uVar12;
    pbVar9 = pbVar11;
    pbStack_b8 = pbVar11;
    pbStack_a0 = pbVar3;
    pbStack_90 = pbVar11;
    lStack_88 = lStack_a8;
    uStack_80 = param_2;
    do {
      pbVar11 = pbVar11 + 0x40;
      uVar12 = uVar12 - 0x40;
      pbVar2 = pbVar9 + 0x40;
      pbStack_b0 = pbVar2;
      if (pbVar9[0x38] == 2) break;
      uStack_f8 = *(undefined8 *)(pbVar9 + 0x30);
      uStack_128 = *(undefined4 *)pbVar9;
      uStack_124 = *(undefined4 *)(pbVar9 + 4);
      uStack_120 = *(undefined4 *)(pbVar9 + 8);
      uStack_11c = *(undefined4 *)(pbVar9 + 0xc);
      uStack_118 = *(undefined4 *)(pbVar9 + 0x10);
      uStack_114 = *(undefined4 *)(pbVar9 + 0x14);
      uStack_110 = *(undefined4 *)(pbVar9 + 0x18);
      uStack_10c = *(undefined4 *)(pbVar9 + 0x1c);
      uStack_108 = *(undefined4 *)(pbVar9 + 0x20);
      uStack_104 = *(undefined4 *)(pbVar9 + 0x24);
      uStack_100 = *(undefined4 *)(pbVar9 + 0x28);
      uStack_fc = *(undefined4 *)(pbVar9 + 0x2c);
      uStack_ef = *(undefined4 *)(pbVar9 + 0x39);
      uStack_eb = (undefined3)((uint)*(undefined4 *)(pbVar9 + 0x3c) >> 8);
      bStack_f0 = pbVar9[0x38];
      pdb_142b54e60(uStack_80,uStack_6c,uStack_68,&uStack_128,uStack_78,
                    *(undefined8 *)(lVar6 + -0x20 + lVar1));
      pbVar9 = pbVar2;
    } while (pbVar2 != pbVar3);
    uStack_c8 = (ulonglong)((longlong)pbVar3 - (longlong)pbVar2) >> 6;
    uStack_80 = uVar12 >> 6;
    uStack_78 = 0;
    pbStack_c0 = pbVar2;
    while (uStack_80 != uStack_78) {
      uStack_78 = uStack_78 + 1;
      pdb_141182040(pbVar11);
      pbVar11 = pbVar11 + 0x40;
    }
    if (lStack_88 != 0) {
      pub_1406abac0(pbStack_90,lStack_88 << 6,8);
    }
    *(undefined4 *)(lVar6 + -0x10 + lVar1) = uStack_6c;
    *(undefined4 *)(lVar6 + -0xc + lVar1) = uStack_68;
  }
  return;
}

