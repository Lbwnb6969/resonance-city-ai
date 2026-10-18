// VA 0x14087c580, PDB extent 851 bytes
// system_decorator::load_decorators::load_decorators::closure$1
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/load_decorators.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: system_decorator::load_decorators::load_decorators::closure$1
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/load_decorators.rs
   Extent: 851 */

void pdb_14087c580(ulonglong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  code *pcVar2;
  code **ppcVar3;
  byte *pbVar4;
  code **ppcVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  code *pcStack_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_40 = 0xfffffffffffffffe;
  puStack_d0 = &uStack_50;
  uStack_c8 = pdb_1402ed400;
  ppcVar5 = &pcStack_158;
  uStack_50 = param_2;
  uStack_48 = param_3;
  pdb_140f60760(ppcVar5,&UNK_14300ff38,&puStack_d0);
  pdb_1414d2c00(&puStack_d0);
  if (SBORROW8(0,(longlong)puStack_d0)) {
    pcStack_158 = uStack_c8;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_14300fff0,0x2b,&pcStack_158,&UNK_14300ffd0,&UNK_14300ff50);
  }
  uStack_e8 = uStack_60;
  uStack_e0 = uStack_58;
  uStack_f8 = uStack_70;
  uStack_f0 = uStack_68;
  uStack_108 = uStack_80;
  uStack_100 = uStack_78;
  uStack_118 = uStack_90;
  uStack_110 = uStack_88;
  uStack_128 = uStack_a0;
  uStack_124 = uStack_9c;
  uStack_120 = uStack_98;
  uStack_11c = uStack_94;
  uStack_138 = uStack_b0;
  uStack_134 = uStack_ac;
  uStack_130 = uStack_a8;
  uStack_12c = uStack_a4;
  uStack_148 = (undefined4)uStack_c0;
  uStack_144 = uStack_c0._4_4_;
  uStack_140 = uStack_b8;
  uStack_13c = uStack_b4;
  pcStack_158 = (code *)puStack_d0;
  uStack_150 = (undefined4)uStack_c8;
  uStack_14c = uStack_c8._4_4_;
  ppcVar3 = (code **)pdb_140a97600(&pcStack_158);
  uVar9 = (longlong)ppcVar5 - (longlong)ppcVar3;
  if (0x7ffffffffffffffc < uVar9) {
    uVar8 = 0;
LAB_14087c67b:
    pdb_142dc7e2a(uVar8,uVar9);
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if (ppcVar5 == ppcVar3) {
    pbVar4 = (byte *)0x4;
    puVar7 = (undefined8 *)0x0;
  }
  else {
    pdb_14007ee60();
    uVar8 = 4;
    pbVar4 = pub_1406abab0(uVar9,4);
    if (pbVar4 == (byte *)0x0) goto LAB_14087c67b;
    puVar7 = (undefined8 *)(uVar9 / 0xc);
    if (uVar9 - 0xc < 0xc) {
      uVar9 = 0;
    }
    else {
      lVar6 = 0x14;
      uVar9 = 0;
      do {
        uVar1 = *(undefined4 *)((longlong)ppcVar3 + lVar6 + -0xc);
        *(undefined8 *)(pbVar4 + lVar6 + -0x14) = *(undefined8 *)((longlong)ppcVar3 + lVar6 + -0x14)
        ;
        *(undefined4 *)(pbVar4 + lVar6 + -0xc) = uVar1;
        uVar1 = *(undefined4 *)((longlong)ppcVar3 + lVar6);
        *(undefined8 *)(pbVar4 + lVar6 + -8) = *(undefined8 *)((longlong)ppcVar3 + lVar6 + -8);
        *(undefined4 *)(pbVar4 + lVar6) = uVar1;
        uVar9 = uVar9 + 2;
        lVar6 = lVar6 + 0x18;
      } while (((ulonglong)puVar7 & 0xffffffffffffffe) != uVar9);
      if (((ulonglong)puVar7 & 1) == 0) goto LAB_14087c755;
    }
    lVar6 = uVar9 * 0xc;
    uVar1 = *(undefined4 *)((longlong)ppcVar3 + lVar6 + 8);
    *(undefined8 *)(pbVar4 + lVar6) = *(undefined8 *)((longlong)ppcVar3 + lVar6);
    *(undefined4 *)(pbVar4 + lVar6 + 8) = uVar1;
  }
LAB_14087c755:
  puStack_d0 = puVar7;
  uStack_c8 = (code *)pbVar4;
  uStack_c0 = puVar7;
  pdb_14149d820(&pcStack_158);
  if (puVar7 != (undefined8 *)0x0) {
    uStack_150 = *(undefined4 *)(pbVar4 + 8);
    pcStack_158 = *(code **)pbVar4;
    pdb_142db7820(&puStack_d0);
    *(undefined4 *)(uStack_c8 + (longlong)puVar7 * 0xc + 8) = uStack_150;
    *(code **)(uStack_c8 + (longlong)puVar7 * 0xc) = pcStack_158;
    param_1[2] = (longlong)puVar7 + 1;
    *param_1 = (ulonglong)puStack_d0;
    param_1[1] = (ulonglong)uStack_c8;
    return;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc81f2(0,0,&UNK_14300ff68);
}

