// VA 0x14173c8a0, PDB extent 966 bytes
// core::ptr::drop_in_place<enum2$<turbosloth::asset::impl$44::build::async_block_env$1<turbosloth::asset::FileAsset,turbosloth::asset::BuildContext> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/asset.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   core::ptr::drop_in_place<enum2$<turbosloth::asset::impl$44::build::async_block_env$1<turbosloth::asset::FileAsset,turbosloth::asset::BuildContext>
   > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/asset.rs
   Extent: 966 */

void pdb_14173c8a0(longlong *param_1)

{
  char cVar1;
  byte *pbVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  cVar1 = *(char *)((longlong)param_1 + 0x4a);
  if (cVar1 == '\0') {
    plVar4 = (longlong *)param_1[7];
    LOCK();
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      pdb_140dd76c0(param_1 + 7);
    }
    plVar4 = (longlong *)param_1[8];
    LOCK();
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      pdb_140dd78e0(param_1 + 8);
    }
  }
  else {
    if (cVar1 == '\x03') {
      pbVar2 = (byte *)param_1[0xd];
      if (pbVar2 != (byte *)0x0) {
        pdb_140974580(pbVar2);
        pub_1406abac0(pbVar2,0x38,8);
      }
      pdb_140981490(param_1 + 10);
    }
    else {
      if (cVar1 != '\x04') {
        return;
      }
      pbVar2 = (byte *)param_1[0xd];
      puVar3 = (undefined8 *)param_1[0xe];
      if ((code *)*puVar3 != (code *)0x0) {
        (*(code *)*puVar3)(pbVar2);
      }
      if (puVar3[1] != 0) {
        pub_1406abac0(pbVar2,puVar3[1],puVar3[2]);
      }
      plVar4 = (longlong *)param_1[10];
      LOCK();
      *plVar4 = *plVar4 + -1;
      UNLOCK();
      if (*plVar4 == 0) {
        pdb_140dd7630(param_1 + 10);
      }
      *(undefined2 *)(param_1 + 9) = 0;
      pdb_141ac4fd0();
      plVar4 = (longlong *)param_1[0xb];
      LOCK();
      *plVar4 = *plVar4 + -1;
      UNLOCK();
      if (*plVar4 == 0) {
        pdb_140dd76c0();
      }
    }
    plVar4 = (longlong *)param_1[7];
    LOCK();
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      pdb_140dd76c0(param_1 + 7);
    }
    plVar4 = (longlong *)param_1[8];
    LOCK();
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      pdb_140dd78e0(param_1 + 8);
    }
  }
  plVar4 = (longlong *)*param_1;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      lVar6 = *param_1;
      puVar3 = (undefined8 *)param_1[1];
      if ((code *)*puVar3 != (code *)0x0) {
        (*(code *)*puVar3)((puVar3[2] - 1 & 0xfffffffffffffff0) + lVar6 + 0x10);
      }
      if (lVar6 != -1) {
        LOCK();
        plVar4 = (longlong *)(lVar6 + 8);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          uVar7 = 8;
          if (8 < (ulonglong)puVar3[2]) {
            uVar7 = puVar3[2];
          }
          if ((-uVar7 & puVar3[1] + uVar7 + 0xf) != 0) {
            if (0x10 < uVar7) {
              lVar6 = *(longlong *)(lVar6 + -8);
            }
            uVar5 = GetProcessHeap();
                    /* WARNING: Could not recover jumptable at 0x000140f3c38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            HeapFree(uVar5,0,lVar6);
            return;
          }
        }
      }
      return;
    }
  }
  return;
}

