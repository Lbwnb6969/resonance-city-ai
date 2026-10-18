// VA 0x142b56700, PDB extent 2338 bytes
// toolbar::resouces_and_components::toolbar_layout::ToolbarLayout::add_category_button<toolbar::photomode::setup_photomode_toolbar::setup_photomode_toolbar::closure_env$0>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/resouces_and_components/toolbar_layout.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   toolbar::resouces_and_components::toolbar_layout::ToolbarLayout::add_category_button<toolbar::photomode::setup_photomode_toolbar::setup_photomode_toolbar::closure_env$0>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/resouces_and_components/toolbar_layout.rs
   Extent: 2338 */

void pdb_142b56700(longlong *param_1,undefined8 param_2,char param_3,undefined8 param_4,
                  ulonglong param_5,undefined8 param_6,undefined1 *param_7,uint param_8,
                  float param_9)

{
  char *pcVar1;
  longlong lVar2;
  byte *pbVar3;
  longlong lVar4;
  code *pcVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 uVar9;
  undefined1 uVar10;
  float fVar11;
  undefined8 in_stack_fffffffffffffde8;
  undefined4 uVar12;
  int iStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1dc;
  int iStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  ulonglong uStack_1b8;
  byte *pbStack_1b0;
  ulonglong uStack_1a8;
  ulonglong uStack_1a0;
  ulonglong uStack_198;
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
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined2 uStack_68;
  undefined1 uStack_66;
  
  uVar12 = (undefined4)((ulonglong)in_stack_fffffffffffffde8 >> 0x20);
  uStack_f0 = _DAT_1434d7940;
  uStack_e8 = _UNK_1434d7948;
  uStack_100 = _DAT_1434d7930;
  uStack_f8 = _UNK_1434d7938;
  uStack_e0 = _DAT_1434d7950;
  uStack_d8 = _UNK_1434d7958;
  uStack_d0 = _DAT_1434d7960;
  uStack_c8 = _UNK_1434d7968;
  uStack_c0 = _DAT_1434d7970;
  uStack_b8 = _UNK_1434d7978;
  uStack_158 = 0;
  uStack_b0 = _DAT_1434d7980;
  uStack_a8 = _UNK_1434d7988;
  uStack_a0 = _DAT_1434d7990;
  uStack_98 = _UNK_1434d7998;
  uStack_150 = _DAT_1434d78e0;
  uStack_148 = _UNK_1434d78e8;
  uStack_140 = _DAT_1434d78f0;
  uStack_138 = _UNK_1434d78f8;
  uStack_120 = _DAT_1434d7910;
  uStack_118 = _UNK_1434d7918;
  uStack_130 = _DAT_1434d7900;
  uStack_128 = _UNK_1434d7908;
  uStack_68 = 0x907;
  uStack_66 = 4;
  uStack_110 = _DAT_1434d7920;
  uStack_108 = _UNK_1434d7928;
  uStack_90 = 2;
  uStack_78 = _DAT_142e378e0;
  uStack_1b8 = _DAT_1434d7878;
  pbStack_1b0 = (byte *)_UNK_1434d7880;
  uStack_1a8 = _DAT_1434d7888;
  uStack_1a0 = _DAT_1434d7890;
  uStack_198 = _UNK_1434d7898;
  uStack_190 = _DAT_1434d78a0;
  uStack_178 = _DAT_1434d78b8;
  uStack_188 = _DAT_1434d78a8;
  uStack_180 = _UNK_1434d78b0;
  uStack_160 = _DAT_1434d78d0;
  uStack_170 = _DAT_1434d78c0;
  uStack_168 = _UNK_1434d78c8;
  uStack_70 = 0x707040000000000;
  uStack_88 = 0;
  uStack_80 = 0;
  pdb_1411bded0(&iStack_1d8,param_2,&uStack_1b8);
  if (iStack_1d8 != 4) {
    uStack_1f8 = uStack_1c8;
    uStack_1f4 = uStack_1c4;
    uStack_1f0 = uStack_1c0;
    uStack_1ec = uStack_1bc;
    iStack_208 = iStack_1d8;
    uStack_204 = uStack_1d4;
    uStack_200 = uStack_1d0;
    uStack_1fc = uStack_1cc;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_1436088e0,0x2b,&iStack_208,&UNK_1436088c0,&UNK_143608af8);
  }
  pdb_1411be050(&iStack_208,param_2,(int)param_1[4],*(undefined4 *)((longlong)param_1 + 0x24),
                CONCAT44(uVar12,uStack_1d4),uStack_1d0);
  if (iStack_208 != 4) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_1436088e0,0x2b,&uStack_1b8,&UNK_1436088c0,&UNK_143608b10);
  }
  fVar11 = _DAT_143607b28;
  if ((param_8 & 1) != 0) {
    fVar11 = _DAT_143607b28 * param_9;
  }
  uStack_188 = 0;
  uStack_180 = 0;
  uVar10 = param_5 == 0;
  if (-1 < (longlong)param_5) goto LAB_142b5693c;
  uVar9 = 0;
  do {
    uVar10 = 1;
    pdb_142dc7e2a(uVar9,param_5);
LAB_142b5693c:
    if ((bool)uVar10) {
      pbVar3 = (byte *)0x1;
      goto LAB_142b56974;
    }
    pdb_14007ee60();
    uVar9 = 1;
    pbVar3 = pub_1406abab0(param_5,1);
  } while (pbVar3 == (byte *)0x0);
  pub_142e32760(pbVar3,param_4,param_5);
LAB_142b56974:
  uStack_1b8 = param_5;
  uStack_1a8 = param_5;
  uStack_1a0 = uStack_1a0 & 0xffffffff00000000;
  uStack_170 = CONCAT44(fVar11,fVar11);
  uStack_160 = CONCAT53(uStack_160._3_5_,1);
  uStack_198 = (ulonglong)_DAT_142e36f28;
  uStack_190 = CONCAT35((int3)((ulonglong)uStack_190 >> 0x28),0x200000000);
  uStack_168 = _DAT_14367e330;
  uStack_158 = 0;
  pbStack_1b0 = pbVar3;
  pdb_1411b0a20(&iStack_208,param_6,&uStack_1b8,&UNK_14367e3b0);
  uStack_1dc = uStack_1d0;
  switch(*param_7) {
  case 0xb:
    plVar8 = (longlong *)CONCAT44(uStack_1f4,uStack_1f8);
    if ((longlong *)CONCAT44(uStack_1f4,uStack_1f8) == (longlong *)0x0) {
      plVar8 = (longlong *)CONCAT44(uStack_1ec,uStack_1f0);
    }
    lVar7 = plVar8[2];
    if ((ulonglong)(*plVar8 - lVar7) < 0x18) {
      pdb_142d7f1b0(plVar8,lVar7,0x18,1,1);
    }
    lVar4 = plVar8[1];
    pcVar5 = pdb_1411af370;
    goto code_r0x000142b56ac5;
  case 0xc:
    plVar8 = (longlong *)CONCAT44(uStack_1f4,uStack_1f8);
    if ((longlong *)CONCAT44(uStack_1f4,uStack_1f8) == (longlong *)0x0) {
      plVar8 = (longlong *)CONCAT44(uStack_1ec,uStack_1f0);
    }
    lVar7 = plVar8[2];
    if ((ulonglong)(*plVar8 - lVar7) < 0x18) {
      pdb_142d7f1b0(plVar8,lVar7,0x18,1,1);
    }
    lVar4 = plVar8[1];
    *(code **)(lVar4 + lVar7) = pdb_1411af320;
    *(ulonglong *)(lVar4 + 8 + lVar7) = CONCAT44(uStack_204,iStack_208);
    *(undefined2 *)(lVar4 + 0x10 + lVar7) = 0x400;
    break;
  case 0xd:
    plVar8 = (longlong *)CONCAT44(uStack_1f4,uStack_1f8);
    if ((longlong *)CONCAT44(uStack_1f4,uStack_1f8) == (longlong *)0x0) {
      plVar8 = (longlong *)CONCAT44(uStack_1ec,uStack_1f0);
    }
    lVar7 = plVar8[2];
    if ((ulonglong)(*plVar8 - lVar7) < 0x18) {
      pdb_142d7f1b0(plVar8,lVar7,0x18,1,1);
    }
    lVar4 = plVar8[1];
    *(code **)(lVar4 + lVar7) = pdb_1411af320;
    *(ulonglong *)(lVar4 + 8 + lVar7) = CONCAT44(uStack_204,iStack_208);
    *(undefined2 *)(lVar4 + 0x10 + lVar7) = 0x500;
    break;
  default:
    plVar8 = (longlong *)CONCAT44(uStack_1f4,uStack_1f8);
    if ((longlong *)CONCAT44(uStack_1f4,uStack_1f8) == (longlong *)0x0) {
      plVar8 = (longlong *)CONCAT44(uStack_1ec,uStack_1f0);
    }
    lVar7 = plVar8[2];
    if ((ulonglong)(*plVar8 - lVar7) < 0x18) {
      pdb_142d7f1b0(plVar8,lVar7,0x18,1,1);
    }
    lVar4 = plVar8[1];
    pcVar5 = pdb_1411aea40;
code_r0x000142b56ac5:
    *(code **)(lVar4 + lVar7) = pcVar5;
    *(ulonglong *)(lVar4 + 8 + lVar7) = CONCAT44(uStack_204,iStack_208);
    *(undefined1 *)(lVar4 + 0x10 + lVar7) = 0;
    break;
  case 0xf:
    plVar8 = (longlong *)CONCAT44(uStack_1f4,uStack_1f8);
    if ((longlong *)CONCAT44(uStack_1f4,uStack_1f8) == (longlong *)0x0) {
      plVar8 = (longlong *)CONCAT44(uStack_1ec,uStack_1f0);
    }
    lVar7 = plVar8[2];
    if ((ulonglong)(*plVar8 - lVar7) < 0x18) {
      pdb_142d7f1b0(plVar8,lVar7,0x18,1,1);
    }
    lVar4 = plVar8[1];
    *(code **)(lVar4 + lVar7) = pdb_1411af320;
    *(ulonglong *)(lVar4 + 8 + lVar7) = CONCAT44(uStack_204,iStack_208);
    *(undefined2 *)(lVar4 + 0x10 + lVar7) = 0xf00;
    break;
  case 0x11:
    plVar8 = (longlong *)CONCAT44(uStack_1f4,uStack_1f8);
    if ((longlong *)CONCAT44(uStack_1f4,uStack_1f8) == (longlong *)0x0) {
      plVar8 = (longlong *)CONCAT44(uStack_1ec,uStack_1f0);
    }
    lVar7 = plVar8[2];
    if ((ulonglong)(*plVar8 - lVar7) < 0x18) {
      pdb_142d7f1b0(plVar8,lVar7,0x18,1,1);
    }
    lVar4 = plVar8[1];
    *(code **)(lVar4 + lVar7) = pdb_1411af320;
    *(ulonglong *)(lVar4 + 8 + lVar7) = CONCAT44(uStack_204,iStack_208);
    *(undefined2 *)(lVar4 + 0x10 + lVar7) = 0x900;
    break;
  case 0x13:
    if (*_DAT_143ca4500 == '\x01') goto code_r0x000142b56ccc;
    plVar8 = (longlong *)CONCAT44(uStack_1f4,uStack_1f8);
    if ((longlong *)CONCAT44(uStack_1f4,uStack_1f8) == (longlong *)0x0) {
      plVar8 = (longlong *)CONCAT44(uStack_1ec,uStack_1f0);
    }
    lVar7 = plVar8[2];
    if ((ulonglong)(*plVar8 - lVar7) < 0x18) {
      pdb_142d7f1b0(plVar8,lVar7,0x18,1,1);
    }
    lVar4 = plVar8[1];
    *(code **)(lVar4 + lVar7) = pdb_1411af320;
    *(ulonglong *)(lVar4 + 8 + lVar7) = CONCAT44(uStack_204,iStack_208);
    *(undefined2 *)(lVar4 + 0x10 + lVar7) = 0xb00;
    break;
  case 0x15:
    plVar8 = (longlong *)CONCAT44(uStack_1f4,uStack_1f8);
    if ((longlong *)CONCAT44(uStack_1f4,uStack_1f8) == (longlong *)0x0) {
      plVar8 = (longlong *)CONCAT44(uStack_1ec,uStack_1f0);
    }
    lVar7 = plVar8[2];
    if ((ulonglong)(*plVar8 - lVar7) < 0x18) {
      pdb_142d7f1b0(plVar8,lVar7,0x18,1,1);
    }
    lVar4 = plVar8[1];
    *(code **)(lVar4 + lVar7) = pdb_1411af320;
    *(ulonglong *)(lVar4 + 8 + lVar7) = CONCAT44(uStack_204,iStack_208);
    *(undefined2 *)(lVar4 + 0x10 + lVar7) = 0x1100;
  }
  plVar8[2] = lVar7 + 0x18;
code_r0x000142b56ccc:
  uVar9 = CONCAT44(uStack_204,iStack_208);
  plVar8 = (longlong *)CONCAT44(uStack_1ec,uStack_1f0);
  if ((longlong *)CONCAT44(uStack_1f4,uStack_1f8) != (longlong *)0x0) {
    plVar8 = (longlong *)CONCAT44(uStack_1f4,uStack_1f8);
  }
  lVar7 = plVar8[2];
  if ((ulonglong)(*plVar8 - lVar7) < 0x18) {
    pdb_142d7f1b0(plVar8,lVar7,0x18,1,1);
  }
  uVar12 = uStack_1dc;
  lVar4 = plVar8[1];
  *(code **)(lVar4 + lVar7) = pdb_1411aecc0;
  *(undefined8 *)(lVar4 + 8 + lVar7) = uVar9;
  *(undefined1 *)(lVar4 + 0x10 + lVar7) = 0;
  lVar4 = lVar7 + 0x18;
  plVar8[2] = lVar4;
  if ((ulonglong)(*plVar8 - lVar4) < 0x18) {
    pdb_142d7f1b0(plVar8,lVar4,0x18,1,1);
  }
  lVar4 = plVar8[1];
  *(code **)(lVar4 + 0x18 + lVar7) = pdb_1411af3c0;
  *(undefined8 *)(lVar4 + 0x20 + lVar7) = uVar9;
  *(undefined4 *)(lVar4 + 0x28 + lVar7) = 0;
  *(undefined1 *)(lVar4 + 0x2c + lVar7) = 0;
  lVar4 = lVar7 + 0x30;
  plVar8[2] = lVar4;
  if ((ulonglong)(*plVar8 - lVar4) < 0x18) {
    pdb_142d7f1b0(plVar8,lVar4,0x18,1,1);
  }
  lVar4 = plVar8[1];
  *(code **)(lVar4 + 0x30 + lVar7) = pdb_1411aed10;
  *(undefined8 *)(lVar4 + 0x38 + lVar7) = uVar9;
  *(undefined1 *)(lVar4 + 0x40 + lVar7) = 0;
  plVar8[2] = lVar7 + 0x48;
  lVar4 = param_1[1];
  lVar2 = param_1[2];
  lVar6 = lVar2 << 5;
  lVar7 = lVar4;
  do {
    if (lVar6 == 0) {
      if (lVar2 == *param_1) {
        pdb_142d7e6e0(param_1);
        lVar4 = param_1[1];
      }
      lVar7 = lVar2 * 0x20;
      *(undefined8 *)(lVar4 + lVar7) = uVar9;
      *(undefined4 *)(lVar4 + 8 + lVar7) = uStack_1d4;
      *(undefined4 *)(lVar4 + 0xc + lVar7) = uVar12;
      *(undefined4 *)(lVar4 + 0x10 + lVar7) = 0;
      *(char *)(lVar4 + 0x18 + lVar7) = param_3;
      param_1[2] = lVar2 + 1;
      return;
    }
    lVar6 = lVar6 + -0x20;
    pcVar1 = (char *)(lVar7 + 0x18);
    lVar7 = lVar7 + 0x20;
  } while (*pcVar1 != param_3);
                    /* WARNING: Subroutine does not return */
  pdb_142dc83b0(&UNK_14367e54d,0x59,&UNK_14367e5a8);
}

