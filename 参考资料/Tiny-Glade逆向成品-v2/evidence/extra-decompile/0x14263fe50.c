// Matched PDB: obvhs::cwbvh::bvh2_to_cwbvh::bvh2_to_cwbvh
// VA 0x14263fe50, PDB extent 438 bytes
// Ghidra pseudocode; types and unresolved calls are not original source.

/* Matched PDB: obvhs::cwbvh::bvh2_to_cwbvh::bvh2_to_cwbvh
   Extent: 438 bytes. No whole-program auto-analysis. */

undefined8 *
pdb_14263fe50(undefined8 *param_1,longlong param_2,undefined4 param_3,undefined4 param_4,
             undefined1 param_5)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_128 [136];
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
  longlong lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_30;
  
  uStack_30 = 0xfffffffffffffffe;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *param_1 = 0;
    param_1[1] = 4;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 4;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0x8000000000000000;
  }
  else {
    pdb_14263f870(auStack_128,param_2,param_4,param_5);
    pdb_14263e720(auStack_128,0,param_3,0);
    pdb_14263ee70(auStack_128,0,0);
    param_1[2] = uStack_78;
    *param_1 = uStack_88;
    param_1[1] = uStack_80;
    param_1[3] = uStack_70;
    param_1[4] = uStack_68;
    param_1[5] = uStack_60;
    puVar1 = *(undefined8 **)(param_2 + 0x18);
    uVar5 = *puVar1;
    uVar6 = puVar1[1];
    uVar2 = *(undefined4 *)((longlong)puVar1 + 0x14);
    uVar3 = *(undefined4 *)(puVar1 + 3);
    uVar4 = *(undefined4 *)((longlong)puVar1 + 0x1c);
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(puVar1 + 2);
    *(undefined4 *)((longlong)param_1 + 0x44) = uVar2;
    *(undefined4 *)(param_1 + 9) = uVar3;
    *(undefined4 *)((longlong)param_1 + 0x4c) = uVar4;
    param_1[6] = uVar5;
    param_1[7] = uVar6;
    param_1[0xc] = uStack_90;
    *(undefined4 *)(param_1 + 10) = uStack_a0;
    *(undefined4 *)((longlong)param_1 + 0x54) = uStack_9c;
    *(undefined4 *)(param_1 + 0xb) = uStack_98;
    *(undefined4 *)((longlong)param_1 + 0x5c) = uStack_94;
    if (lStack_58 != 0) {
      func_0x0001406abac0(uStack_50,lStack_58 << 3,4);
    }
  }
  return param_1;
}

