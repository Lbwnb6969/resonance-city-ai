// VA 0x140868c30, PDB extent 1071 bytes
// system_decorator::ui_systems::ui_move_decorator::ui_move_decorator::closure$3
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/ui_systems/ui_move_decorator.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   system_decorator::ui_systems::ui_move_decorator::ui_move_decorator::closure$3
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/ui_systems/ui_move_decorator.rs
   Extent: 1071 */

void pdb_140868c30(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  char cVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  longlong lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uStack_130;
  undefined4 uStack_128;
  undefined1 uStack_124;
  undefined4 uStack_11c;
  undefined8 uStack_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined1 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined1 *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar3 = param_2[2];
  uVar19 = param_2[3];
  pdb_1414ccb30(&uStack_68,param_2,*(undefined8 *)*param_1);
  uStack_d0 = *(undefined1 *)((longlong)param_2 + 0x5c);
  uStack_104 = (undefined4)((ulonglong)uVar3 >> 0x20);
  uVar12 = uStack_104;
  uStack_100 = (undefined4)uVar19;
  uVar13 = uStack_100;
  uStack_10c = (undefined4)((ulonglong)uVar19 >> 0x20);
  uStack_fc = uStack_10c;
  if (*(int *)(param_2 + 8) == 1) {
    uStack_11c = *(undefined4 *)((longlong)param_2 + 0x44);
    uVar1 = *(undefined1 *)(param_2 + 9);
    uStack_100 = *(undefined4 *)((longlong)param_2 + 0x4c);
    uStack_110 = *(undefined4 *)param_2;
    uStack_10c = *(undefined4 *)((longlong)param_2 + 4);
    uStack_108 = *(undefined4 *)(param_2 + 1);
    uStack_104 = *(undefined4 *)((longlong)param_2 + 0xc);
    uStack_118 = 4;
    puStack_70 = (undefined1 *)param_1[1];
    uVar2 = *puStack_70;
    uStack_124 = 2;
    puVar4 = (undefined8 *)param_1[2];
    *(undefined4 *)puVar4[2] = *(undefined4 *)((longlong)puVar4 + 0x1c);
    uVar19 = *puVar4;
    puVar5 = (undefined8 *)param_1[3];
    *(undefined4 *)puVar5[2] = *(undefined4 *)((longlong)puVar5 + 0x1c);
    uVar15 = *puVar5;
    puVar6 = (undefined8 *)param_1[4];
    *(undefined4 *)puVar6[2] = *(undefined4 *)((longlong)puVar6 + 0x1c);
    uStack_78 = param_1[5];
    puStack_80 = (undefined8 *)param_1[6];
    pdb_1414c40f0(&uStack_118,uVar2,&uStack_130,uVar19,uVar15,*puVar6,uStack_78,*puStack_80);
    puVar7 = (undefined4 *)param_1[7];
    uStack_a0 = *puVar7;
    uStack_9c = puVar7[1];
    uStack_98 = puVar7[2];
    uStack_94 = puVar7[3];
    uStack_f8 = uStack_68;
    uStack_f0 = uStack_60;
    uStack_e8 = uStack_58;
    uStack_e0 = uStack_50;
    uStack_d8 = uStack_48;
    uStack_a4 = *(undefined1 *)param_1[0xb];
    uStack_c8 = *(undefined8 *)param_1[0xd];
    uStack_c0 = ((undefined8 *)param_1[0xd])[1];
    uStack_b4 = ((undefined4 *)param_1[10])[1];
    uStack_b8 = *(undefined4 *)param_1[10];
    uStack_ac = ((undefined4 *)param_1[0xc])[1];
    uStack_b0 = *(undefined4 *)param_1[0xc];
    uStack_a8 = CONCAT22(*(undefined2 *)param_1[9],CONCAT11(uVar1,1));
    uStack_90 = uStack_11c;
    uVar1 = *puStack_70;
    uStack_128 = *(undefined4 *)(param_2 + 0xb);
    uStack_130 = param_2[10];
    *(undefined4 *)puVar4[2] = *(undefined4 *)((longlong)puVar4 + 0x1c);
    uVar19 = *puVar4;
    *(undefined4 *)puVar5[2] = *(undefined4 *)((longlong)puVar5 + 0x1c);
    uVar15 = *puVar5;
    *(undefined4 *)puVar6[2] = *(undefined4 *)((longlong)puVar6 + 0x1c);
    uVar16 = *puVar6;
    uVar20 = *puStack_80;
    uVar18 = uStack_78;
    uStack_118 = uVar3;
    uStack_110 = uVar13;
    uStack_10c = uStack_fc;
  }
  else {
    uStack_90 = *(undefined4 *)((longlong)param_2 + 0x4c);
    puVar7 = (undefined4 *)param_1[7];
    uStack_a0 = *puVar7;
    uStack_9c = puVar7[1];
    uStack_98 = puVar7[2];
    uStack_94 = puVar7[3];
    uStack_f8 = uStack_68;
    uStack_f0 = uStack_60;
    uStack_e8 = uStack_58;
    uStack_e0 = uStack_50;
    uStack_d8 = uStack_48;
    uStack_b8 = *(undefined4 *)param_1[10];
    uStack_b4 = ((undefined4 *)param_1[10])[1];
    uStack_a4 = *(undefined1 *)param_1[0xb];
    uStack_b0 = *(undefined4 *)param_1[0xc];
    uStack_ac = ((undefined4 *)param_1[0xc])[1];
    uStack_c8 = *(undefined8 *)param_1[0xd];
    uStack_c0 = ((undefined8 *)param_1[0xd])[1];
    uStack_118 = *param_2;
    uStack_110 = (undefined4)param_2[1];
    uStack_10c = (undefined4)((ulonglong)param_2[1] >> 0x20);
    uStack_a8 = CONCAT22(*(undefined2 *)param_1[9],*(undefined2 *)param_1[8]);
    uVar1 = *(undefined1 *)param_1[1];
    uStack_128 = *(undefined4 *)(param_2 + 0xb);
    uStack_130 = param_2[10];
    puVar4 = (undefined8 *)param_1[2];
    *(undefined4 *)puVar4[2] = *(undefined4 *)((longlong)puVar4 + 0x1c);
    uVar19 = *puVar4;
    puVar4 = (undefined8 *)param_1[3];
    *(undefined4 *)puVar4[2] = *(undefined4 *)((longlong)puVar4 + 0x1c);
    uVar15 = *puVar4;
    puVar4 = (undefined8 *)param_1[4];
    *(undefined4 *)puVar4[2] = *(undefined4 *)((longlong)puVar4 + 0x1c);
    uVar16 = *puVar4;
    uVar18 = param_1[5];
    uVar20 = *(undefined8 *)param_1[6];
  }
  uStack_108 = (undefined4)uVar3;
  uStack_124 = 0;
  uStack_104 = uVar12;
  uStack_100 = uVar13;
  pdb_1414c40f0(&uStack_118,uVar1,&uStack_130,uVar19,uVar15,uVar16,uVar18,uVar20);
  cVar14 = pdb_1408ffab0(param_1[0xe]);
  if (cVar14 == '\x03') {
    plVar8 = (longlong *)param_1[0xf];
    uStack_100 = *(undefined4 *)(param_2 + 0xb);
    uStack_108 = (undefined4)param_2[10];
    uStack_104 = (undefined4)((ulonglong)param_2[10] >> 0x20);
    *(undefined4 *)plVar8[2] = *(undefined4 *)((longlong)plVar8 + 0x1c);
    lVar9 = *plVar8;
    lVar10 = *(longlong *)(lVar9 + 0x30);
    uVar3 = *(undefined8 *)(lVar9 + 0x40);
    if (lVar10 == *(longlong *)(lVar9 + 0x20)) {
      pdb_142d7e7c0(lVar9 + 0x20);
    }
    lVar11 = *(longlong *)(lVar9 + 0x28);
    lVar17 = lVar10 * 0x30;
    *(undefined8 *)(lVar11 + lVar17) = 0x12;
    puVar4 = (undefined8 *)(lVar11 + 8 + lVar17);
    *puVar4 = uStack_118;
    puVar4[1] = CONCAT44(uStack_10c,uStack_110);
    puVar4 = (undefined8 *)(lVar11 + 0x14 + lVar17);
    *puVar4 = CONCAT44(uStack_108,uStack_10c);
    puVar4[1] = CONCAT44(uStack_100,uStack_104);
    *(undefined1 *)(lVar11 + 0x24 + lVar17) = 0;
    *(undefined8 *)(lVar11 + 0x28 + lVar17) = uVar3;
    *(longlong *)(lVar9 + 0x30) = lVar10 + 1;
    *(longlong *)(lVar9 + 0x40) = *(longlong *)(lVar9 + 0x40) + 1;
  }
  return;
}

