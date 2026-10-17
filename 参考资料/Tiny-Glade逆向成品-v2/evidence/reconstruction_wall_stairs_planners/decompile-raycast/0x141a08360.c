// Matched PDB: rapier3d::pipeline::query_pipeline::QueryFilter::test
// VA 0x141a08360, PDB extent 304 bytes
// Ghidra pseudocode; types and unresolved calls are not original source.

/* Matched PDB: rapier3d::pipeline::query_pipeline::QueryFilter::test
   Extent: 304 bytes. No whole-program auto-analysis. */

undefined8
pdb_141a08360(longlong *param_1,longlong param_2,int param_3,int param_4,longlong param_5)

{
  byte bVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  if ((((((int)param_1[4] == 1) && (*(int *)((longlong)param_1 + 0x24) == param_3)) &&
       ((int)param_1[5] == param_4)) ||
      (((*(int *)((longlong)param_1 + 0x2c) != 0 && ((*(byte *)(param_5 + 0x84) & 1) != 0)) &&
       (((int)param_1[6] == *(int *)(param_5 + 0x88) &&
        (*(int *)((longlong)param_1 + 0x34) == *(int *)(param_5 + 0x8c))))))) ||
     (((*(byte *)((longlong)param_1 + 0x14) & 1) != 0 &&
      (((*(uint *)((longlong)param_1 + 0x1c) & *(uint *)(param_5 + 0x68)) == 0 ||
       ((*(uint *)(param_5 + 0x6c) & *(uint *)(param_1 + 3)) == 0)))))) {
LAB_141a08404:
    uVar3 = 0;
  }
  else {
    uVar2 = *(uint *)(param_1 + 2);
    if (uVar2 != 0) {
      if (((((byte)((uVar2 & 8) >> 3) & *(byte *)(param_5 + 0xac)) != 0) ||
          ((uVar2 & 0x10) != 0 && (*(byte *)(param_5 + 0xac) & 1) == 0)) ||
         (((byte)uVar2 & *(uint *)(param_5 + 0x84) == 0) != 0)) goto LAB_141a08404;
      if (((*(uint *)(param_5 + 0x84) & 1) != 0) &&
         ((ulonglong)*(uint *)(param_5 + 0x88) < *(ulonglong *)(param_2 + 0x10))) {
        lVar4 = (ulonglong)*(uint *)(param_5 + 0x88) * 0x1a0;
        if (((!SBORROW8(0,*(longlong *)(*(longlong *)(param_2 + 8) + 0x40 + lVar4))) &&
            (lVar4 = *(longlong *)(param_2 + 8) + lVar4,
            *(int *)(lVar4 + 400) == *(int *)(param_5 + 0x8c))) &&
           ((((bVar1 = *(byte *)(lVar4 + 0x185), (uVar2 & 1) != 0 && (bVar1 == 1)) ||
             (((uVar2 & 2) != 0 && (1 < bVar1)))) || (((uVar2 & 4) != 0 && (bVar1 == 0))))))
        goto LAB_141a08404;
      }
    }
    if (*param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000141a08486. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(param_1[1] + 0x28))(*param_1,param_3,param_4,param_5);
      return uVar3;
    }
    uVar3 = 1;
  }
  return uVar3;
}

