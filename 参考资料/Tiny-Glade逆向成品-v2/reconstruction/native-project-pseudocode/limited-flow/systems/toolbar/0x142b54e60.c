// VA 0x142b54e60, PDB extent 6039 bytes
// toolbar::resouces_and_components::toolbar_layout::add_toolbar_item
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/resouces_and_components/toolbar_layout.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: toolbar::resouces_and_components::toolbar_layout::add_toolbar_item
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/resouces_and_components/toolbar_layout.rs
   Extent: 6039 */

void pdb_142b54e60(undefined8 param_1,undefined4 param_2,undefined4 param_3,byte *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  code *pcVar4;
  byte *pbVar5;
  byte *pbVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 in_stack_fffffffffffffd08;
  undefined4 uVar10;
  undefined8 in_stack_fffffffffffffd10;
  undefined4 uVar11;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined8 uStack_2b8;
  byte bStack_2b0;
  undefined4 uStack_2af;
  undefined3 uStack_2ab;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined4 uStack_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined8 uStack_278;
  byte bStack_270;
  undefined4 uStack_26f;
  undefined3 uStack_26b;
  byte *pbStack_268;
  byte *pbStack_260;
  byte *pbStack_258;
  byte *pbStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  ulonglong uStack_210;
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
  undefined2 uStack_118;
  undefined1 uStack_116;
  byte *pbStack_110;
  longlong lStack_108;
  byte *pbStack_100;
  longlong lStack_f8;
  int iStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  int iStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  byte *pbStack_98;
  longlong lStack_90;
  byte *pbStack_88;
  byte *pbStack_80;
  uint uStack_74;
  ulonglong uStack_70;
  undefined1 uStack_64;
  undefined1 uStack_63;
  undefined1 uStack_61;
  undefined8 uStack_60;
  
  uVar10 = (undefined4)((ulonglong)in_stack_fffffffffffffd08 >> 0x20);
  uVar11 = (undefined4)((ulonglong)in_stack_fffffffffffffd10 >> 0x20);
  uStack_60 = 0xfffffffffffffffe;
  uStack_74 = (uint)*param_4;
  pbStack_80 = param_4;
  uStack_70 = param_1;
  if (uStack_74 == 4) {
    lStack_f8 = *(longlong *)(param_4 + 0x18);
    lStack_108 = *(longlong *)(param_4 + 8);
    pbStack_100 = *(byte **)(param_4 + 0x10);
    uStack_1a0 = _DAT_1434d7940;
    uStack_198 = _UNK_1434d7948;
    uStack_1b0 = _DAT_1434d7930;
    uStack_1a8 = _UNK_1434d7938;
    uStack_190 = _DAT_1434d7950;
    uStack_188 = _UNK_1434d7958;
    uStack_180 = _DAT_1434d7960;
    uStack_178 = _UNK_1434d7968;
    uStack_170 = _DAT_1434d7970;
    uStack_168 = _UNK_1434d7978;
    uStack_208 = 0;
    uStack_160 = _DAT_1434d7980;
    uStack_158 = _UNK_1434d7988;
    uStack_150 = _DAT_1434d7990;
    uStack_148 = _UNK_1434d7998;
    uStack_200 = _DAT_1434d78e0;
    uStack_1f8 = _UNK_1434d78e8;
    uStack_1f0 = _DAT_1434d78f0;
    uStack_1e8 = _UNK_1434d78f8;
    uStack_1d0 = _DAT_1434d7910;
    uStack_1c8 = _UNK_1434d7918;
    uStack_1e0 = _DAT_1434d7900;
    uStack_1d8 = _UNK_1434d7908;
    uStack_118 = 0x907;
    uStack_116 = 4;
    uStack_1c0 = _DAT_14367e320;
    uStack_1b8 = _UNK_14367e328;
    uStack_140 = 2;
    uStack_128 = _DAT_142e378e0;
    pbStack_258 = (byte *)_DAT_1434d7888;
    pbStack_268 = _DAT_1434d7878;
    pbStack_260 = (byte *)_UNK_1434d7880;
    uStack_240 = _DAT_1434d78a0;
    pbStack_250 = (byte *)_DAT_1434d7890;
    uStack_248 = _UNK_1434d7898;
    uStack_228 = _DAT_1434d78b8;
    uStack_238 = _DAT_1434d78a8;
    uStack_230 = _UNK_1434d78b0;
    uStack_210 = _DAT_1434d78d0;
    uStack_220 = _DAT_1434d78c0;
    uStack_218 = _UNK_1434d78c8;
    uStack_120 = 0x707040000000000;
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_63 = 1;
    pdb_1411bded0(&iStack_e8,param_1,&pbStack_268);
    if (iStack_e8 != 4) {
      uStack_b8 = uStack_d8;
      uStack_b4 = uStack_d4;
      uStack_b0 = uStack_d0;
      uStack_ac = uStack_cc;
      iStack_c8 = iStack_e8;
      uStack_c4 = uStack_e4;
      uStack_c0 = uStack_e0;
      uStack_bc = uStack_dc;
      uStack_63 = 1;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_1436088e0,0x2b,&iStack_c8,&UNK_1436088c0,&UNK_143608af8);
    }
    uStack_63 = 1;
    pdb_1411be050(&iStack_c8,uStack_70,param_2,param_3,CONCAT44(uVar10,uStack_e4),
                  CONCAT44(uVar11,uStack_e0));
    if (iStack_c8 != 4) {
      uStack_63 = 1;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_1436088e0,0x2b,&pbStack_268,&UNK_1436088c0,&UNK_143608b10);
    }
    lVar8 = lStack_f8 * 0x40;
    pbStack_250 = pbStack_100 + lVar8;
    pbStack_268 = pbStack_100;
    pbStack_260 = pbStack_100;
    lStack_90 = lStack_108;
    pbStack_258 = (byte *)lStack_108;
    pbStack_98 = pbStack_100;
    pbVar5 = pbStack_100;
    pbStack_88 = pbStack_250;
    if (lStack_f8 != 0) {
      pbVar6 = pbStack_100;
      do {
        pbVar5 = pbVar6 + 0x40;
        pbStack_260 = pbVar5;
        if (pbVar6[0x38] == 2) break;
        uStack_278 = *(undefined8 *)(pbVar6 + 0x30);
        uStack_2a8 = *(undefined4 *)pbVar6;
        uStack_2a4 = *(undefined4 *)(pbVar6 + 4);
        uStack_2a0 = *(undefined4 *)(pbVar6 + 8);
        uStack_29c = *(undefined4 *)(pbVar6 + 0xc);
        uStack_298 = *(undefined4 *)(pbVar6 + 0x10);
        uStack_294 = *(undefined4 *)(pbVar6 + 0x14);
        uStack_290 = *(undefined4 *)(pbVar6 + 0x18);
        uStack_28c = *(undefined4 *)(pbVar6 + 0x1c);
        uStack_288 = *(undefined4 *)(pbVar6 + 0x20);
        uStack_284 = *(undefined4 *)(pbVar6 + 0x24);
        uStack_280 = *(undefined4 *)(pbVar6 + 0x28);
        uStack_27c = *(undefined4 *)(pbVar6 + 0x2c);
        uStack_26f = *(undefined4 *)(pbVar6 + 0x39);
        uStack_26b = (undefined3)((uint)*(undefined4 *)(pbVar6 + 0x3c) >> 8);
        bStack_270 = pbVar6[0x38];
        pdb_142b54e60(uStack_70,uStack_e4,uStack_e0,&uStack_2a8,param_5,param_6);
        lVar8 = lVar8 + -0x40;
        pbVar6 = pbVar5;
      } while (lVar8 != 0);
    }
    pbStack_88 = (byte *)((ulonglong)((longlong)pbStack_88 - (longlong)pbVar5) >> 6);
    uStack_70 = 0;
    pbStack_110 = pbVar5;
    while (pbStack_88 != (byte *)uStack_70) {
      uStack_70 = uStack_70 + 1;
      pdb_141182040(pbVar5);
      pbVar5 = pbVar5 + 0x40;
    }
  }
  else {
    if (*param_4 != 5) {
      uStack_1a0 = _DAT_1434d7940;
      uStack_198 = _UNK_1434d7948;
      uStack_1b0 = _DAT_1434d7930;
      uStack_1a8 = _UNK_1434d7938;
      uStack_190 = _DAT_1434d7950;
      uStack_188 = _UNK_1434d7958;
      uStack_180 = _DAT_1434d7960;
      uStack_178 = _UNK_1434d7968;
      uStack_170 = _DAT_1434d7970;
      uStack_168 = _UNK_1434d7978;
      uStack_208 = 0;
      uStack_160 = _DAT_1434d7980;
      uStack_158 = _UNK_1434d7988;
      uStack_150 = _DAT_1434d7990;
      uStack_148 = _UNK_1434d7998;
      uStack_200 = _DAT_1434d78e0;
      uStack_1f8 = _UNK_1434d78e8;
      uStack_1f0 = _DAT_1434d78f0;
      uStack_1e8 = _UNK_1434d78f8;
      uStack_1d0 = _DAT_1434d7910;
      uStack_1c8 = _UNK_1434d7918;
      uStack_1e0 = _DAT_1434d7900;
      uStack_1d8 = _UNK_1434d7908;
      uStack_118 = 0x907;
      uStack_116 = 4;
      uStack_1c0 = _DAT_1434d7920;
      uStack_1b8 = _UNK_1434d7928;
      uStack_140 = 2;
      uStack_128 = _DAT_142e378e0;
      pbStack_268 = _DAT_1434d7878;
      pbStack_260 = (byte *)_UNK_1434d7880;
      pbStack_258 = (byte *)_DAT_1434d7888;
      pbStack_250 = (byte *)_DAT_1434d7890;
      uStack_248 = _UNK_1434d7898;
      uStack_240 = _DAT_1434d78a0;
      uStack_228 = _DAT_1434d78b8;
      uStack_238 = _DAT_1434d78a8;
      uStack_230 = _UNK_1434d78b0;
      uStack_210 = _DAT_1434d78d0;
      uStack_220 = _DAT_1434d78c0;
      uStack_218 = _UNK_1434d78c8;
      uStack_120 = 0x707040000000000;
      uStack_138 = 0;
      uStack_130 = 0;
      uStack_61 = 1;
      pdb_1411bded0(&iStack_e8,param_1,&pbStack_268);
      if (iStack_e8 != 4) {
        uStack_b8 = uStack_d8;
        uStack_b4 = uStack_d4;
        uStack_b0 = uStack_d0;
        uStack_ac = uStack_cc;
        iStack_c8 = iStack_e8;
        uStack_c4 = uStack_e4;
        uStack_c0 = uStack_e0;
        uStack_bc = uStack_dc;
        uStack_61 = 1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8170(&UNK_1436088e0,0x2b,&iStack_c8,&UNK_1436088c0,&UNK_143608af8);
      }
      uStack_61 = 1;
      pdb_1411be050(&iStack_c8,uStack_70,param_2,param_3,CONCAT44(uVar10,uStack_e4),
                    CONCAT44(uVar11,uStack_e0));
      if (iStack_c8 != 4) {
        uStack_61 = 1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8170(&UNK_1436088e0,0x2b,&pbStack_268,&UNK_1436088c0,&UNK_143608b10);
      }
      uVar1 = *(undefined8 *)(pbStack_80 + 0x30);
      uVar2 = *(undefined8 *)(pbStack_80 + 0x20);
      pbVar5 = *(byte **)(pbStack_80 + 0x28);
      uStack_238 = 0;
      uStack_230 = 0;
      if ((longlong)pbVar5 < 0) {
        uVar9 = 0;
LAB_142b55735:
        uStack_61 = 1;
        pdb_142dc7e2a(uVar9,pbVar5);
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      if (pbVar5 == (byte *)0x0) {
        pbVar6 = (byte *)0x1;
      }
      else {
        pdb_14007ee60();
        uVar9 = 1;
        pbVar6 = pub_1406abab0((ulonglong)pbVar5,1);
        if (pbVar6 == (byte *)0x0) goto LAB_142b55735;
        pub_142e32760(pbVar6,uVar2,pbVar5);
      }
      pbStack_250 = (byte *)((ulonglong)pbStack_250 & 0xffffffff00000000);
      uStack_220 = CONCAT44((float)((ulonglong)uVar1 >> 0x20) * _UNK_14367e344,
                            (float)uVar1 * _DAT_14367e340);
      uStack_218 = _DAT_14367e330;
      uStack_210 = uStack_210 & 0xffffffffff000000;
      uStack_248 = 0;
      uStack_240 = CONCAT35((int3)((ulonglong)uStack_240 >> 0x28),0x200000000);
      uStack_208 = 0;
      uStack_61 = 1;
      pbStack_268 = pbVar5;
      pbStack_260 = pbVar6;
      pbStack_258 = pbVar5;
      pdb_1411b0a20(&iStack_c8,param_5,&pbStack_268,&UNK_14367e3b0);
      plVar7 = (longlong *)CONCAT44(uStack_b4,uStack_b8);
      if ((longlong *)CONCAT44(uStack_b4,uStack_b8) == (longlong *)0x0) {
        plVar7 = (longlong *)CONCAT44(uStack_ac,uStack_b0);
      }
      lVar8 = plVar7[2];
      if ((ulonglong)(*plVar7 - lVar8) < 0x20) {
        uStack_61 = 1;
        pdb_142d7f1b0(plVar7,lVar8,0x20,1,1);
      }
      lVar3 = plVar7[1];
      *(code **)(lVar3 + lVar8) = pdb_1411af2c0;
      *(ulonglong *)(lVar3 + 8 + lVar8) = CONCAT44(uStack_c4,iStack_c8);
      *(undefined8 *)(lVar3 + 0x10 + lVar8) = param_6;
      *(undefined1 *)(lVar3 + 0x18 + lVar8) = 0;
      lVar3 = lVar8 + 0x20;
      plVar7[2] = lVar3;
      if (pbStack_80[0x38] != 0) {
        if ((ulonglong)(*plVar7 - lVar3) < 0x18) {
          uStack_61 = 1;
          pdb_142d7f1b0(plVar7,lVar3,0x18,1,1);
        }
        lVar3 = plVar7[1];
        *(code **)(lVar3 + 0x20 + lVar8) = pdb_1411af570;
        *(ulonglong *)(lVar3 + 0x28 + lVar8) = CONCAT44(uStack_c4,iStack_c8);
        *(undefined1 *)(lVar3 + 0x30 + lVar8) = 0;
        plVar7[2] = lVar8 + 0x38;
                    /* WARNING: Could not recover jumptable at 0x000142b558bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&UNK_14367e4a4 + *(int *)(&UNK_14367e4a4 + (ulonglong)uStack_74 * 4)))();
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x000142b558d1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_14367e4a4 + *(int *)(&UNK_14367e4a4 + (ulonglong)uStack_74 * 4)))();
      return;
    }
    lStack_f8 = *(longlong *)(param_4 + 0x18);
    lStack_108 = *(longlong *)(param_4 + 8);
    pbStack_100 = *(byte **)(param_4 + 0x10);
    uStack_1a0 = _DAT_1434d7940;
    uStack_198 = _UNK_1434d7948;
    uStack_1b0 = _DAT_1434d7930;
    uStack_1a8 = _UNK_1434d7938;
    uStack_190 = _DAT_1434d7950;
    uStack_188 = _UNK_1434d7958;
    uStack_180 = _DAT_1434d7960;
    uStack_178 = _UNK_1434d7968;
    uStack_170 = _DAT_1434d7970;
    uStack_168 = _UNK_1434d7978;
    uStack_208 = 0;
    uStack_160 = _DAT_1434d7980;
    uStack_158 = _UNK_1434d7988;
    uStack_150 = _DAT_1434d7990;
    uStack_148 = _UNK_1434d7998;
    uStack_200 = _DAT_1434d78e0;
    uStack_1f8 = _UNK_1434d78e8;
    uStack_1f0 = _DAT_1434d78f0;
    uStack_1e8 = _UNK_1434d78f8;
    uStack_1d0 = _DAT_1434d7910;
    uStack_1c8 = _UNK_1434d7918;
    uStack_1e0 = _DAT_1434d7900;
    uStack_1d8 = _UNK_1434d7908;
    uStack_118 = 0x907;
    uStack_116 = 4;
    uStack_1c0 = _DAT_14367e320;
    uStack_1b8 = _UNK_14367e328;
    uStack_140 = 2;
    uStack_128 = _DAT_142e378e0;
    pbStack_258 = (byte *)_DAT_1434d7888;
    pbStack_268 = _DAT_1434d7878;
    pbStack_260 = (byte *)_UNK_1434d7880;
    uStack_240 = _DAT_1434d78a0;
    pbStack_250 = (byte *)_DAT_1434d7890;
    uStack_248 = _UNK_1434d7898;
    uStack_228 = _DAT_1434d78b8;
    uStack_238 = _DAT_1434d78a8;
    uStack_230 = _UNK_1434d78b0;
    uStack_210 = _DAT_1434d78d0;
    uStack_220 = _DAT_1434d78c0;
    uStack_218 = _UNK_1434d78c8;
    uStack_120 = 0x707040001000000;
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_64 = 1;
    pdb_1411bded0(&iStack_e8,param_1,&pbStack_268);
    if (iStack_e8 != 4) {
      uStack_b8 = uStack_d8;
      uStack_b4 = uStack_d4;
      uStack_b0 = uStack_d0;
      uStack_ac = uStack_cc;
      iStack_c8 = iStack_e8;
      uStack_c4 = uStack_e4;
      uStack_c0 = uStack_e0;
      uStack_bc = uStack_dc;
      uStack_64 = 1;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_1436088e0,0x2b,&iStack_c8,&UNK_1436088c0,&UNK_143608af8);
    }
    uStack_64 = 1;
    pdb_1411be050(&iStack_c8,uStack_70,param_2,param_3,CONCAT44(uVar10,uStack_e4),
                  CONCAT44(uVar11,uStack_e0));
    if (iStack_c8 != 4) {
      uStack_64 = 1;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_1436088e0,0x2b,&pbStack_268,&UNK_1436088c0,&UNK_143608b10);
    }
    lVar8 = lStack_f8 * 0x40;
    pbStack_250 = pbStack_100 + lVar8;
    pbStack_268 = pbStack_100;
    pbStack_260 = pbStack_100;
    lStack_90 = lStack_108;
    pbStack_258 = (byte *)lStack_108;
    pbStack_98 = pbStack_100;
    pbVar5 = pbStack_100;
    pbStack_88 = pbStack_250;
    if (lStack_f8 != 0) {
      pbVar6 = pbStack_100;
      do {
        pbVar5 = pbVar6 + 0x40;
        pbStack_260 = pbVar5;
        if (pbVar6[0x38] == 2) break;
        uStack_2b8 = *(undefined8 *)(pbVar6 + 0x30);
        uStack_2e8 = *(undefined4 *)pbVar6;
        uStack_2e4 = *(undefined4 *)(pbVar6 + 4);
        uStack_2e0 = *(undefined4 *)(pbVar6 + 8);
        uStack_2dc = *(undefined4 *)(pbVar6 + 0xc);
        uStack_2d8 = *(undefined4 *)(pbVar6 + 0x10);
        uStack_2d4 = *(undefined4 *)(pbVar6 + 0x14);
        uStack_2d0 = *(undefined4 *)(pbVar6 + 0x18);
        uStack_2cc = *(undefined4 *)(pbVar6 + 0x1c);
        uStack_2c8 = *(undefined4 *)(pbVar6 + 0x20);
        uStack_2c4 = *(undefined4 *)(pbVar6 + 0x24);
        uStack_2c0 = *(undefined4 *)(pbVar6 + 0x28);
        uStack_2bc = *(undefined4 *)(pbVar6 + 0x2c);
        uStack_2af = *(undefined4 *)(pbVar6 + 0x39);
        uStack_2ab = (undefined3)((uint)*(undefined4 *)(pbVar6 + 0x3c) >> 8);
        bStack_2b0 = pbVar6[0x38];
        pdb_142b54e60(uStack_70,uStack_e4,uStack_e0,&uStack_2e8,param_5,param_6);
        lVar8 = lVar8 + -0x40;
        pbVar6 = pbVar5;
      } while (lVar8 != 0);
    }
    pbStack_88 = (byte *)((ulonglong)((longlong)pbStack_88 - (longlong)pbVar5) >> 6);
    uStack_70 = 0;
    pbStack_110 = pbVar5;
    while (pbStack_88 != (byte *)uStack_70) {
      uStack_70 = uStack_70 + 1;
      pdb_141182040(pbVar5);
      pbVar5 = pbVar5 + 0x40;
    }
  }
  if (lStack_90 != 0) {
    pub_1406abac0(pbStack_98,lStack_90 << 6,8);
  }
  if (((byte)uStack_74 & 6) != 4) {
    pdb_142b53cf0(pbStack_80);
  }
  return;
}

